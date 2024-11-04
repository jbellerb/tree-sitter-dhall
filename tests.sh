#!/bin/sh

OS=$(uname)

hash_sha256() {
    case "$OS" in
    *BSD)
        sha256 -q "$@"
        ;;
    Linux)
        sha256sum "$@" | cut -d " " -f 1
        ;;
    *)
        # fall back to OpenSSL if unknown
        openssl dgst -sha256 "$@" | tail -c 65
        ;;
    esac
}

print_usage() {
    echo "usage: tests.sh [-c corpus] [-i ignore] tests"
    exit 1
}

verify_test() {
    TEST_NAME=${1#"$TEST_DIR"}
    MATCHES=$(grep -HnoR "$TEST_NAME" "$CORPUS")
    if test -n "$MATCHES"
    then
        TEST_HASH=$(hash_sha256 "$1")
        TEST_LENGTH=$(wc -l < "$1")

        LOCATION=
        EXTRAS=
        for MATCH in $MATCHES
        do
            if test -z "$LOCATION"
            then
                LOCATION=$MATCH
            else
                EXTRAS="$EXTRAS, $MATCH"
            fi
        done

        if test -z "$EXTRAS"
        then
            IFS=":" read -r FILE LINE _ <<EOF
$LOCATION
EOF
            MATCH_RANGE="$((LINE + 3)),$((LINE + 2 + TEST_LENGTH))p"
            MATCH_HASH=$(sed -n "$MATCH_RANGE" "$FILE" | hash_sha256)

            if test "$TEST_HASH" != "$MATCH_HASH"
            then
                echo "mismatch: $TEST_NAME ($FILE)"
                ERROR=1
            fi

            # can't think of a better way to do this
            FILE_HASH=$(echo "$FILE" | hash_sha256)
            eval "VALID_${FILE_HASH}=\"$LINE
\$VALID_${FILE_HASH}\""
        else
            echo "duplicate: $LOCATION$EXTRAS"
            ERROR=1
        fi
    else
        echo "missing: $TEST_NAME"
        ERROR=1
    fi
}

find_extras() {
    CANDIDATES=$(grep -hno "==================" "$1")
    PREVIOUS="-2"

    for CANDIDATE in $CANDIDATES
    do
        LINE=${CANDIDATE%:==================}
        if test $((LINE - PREVIOUS)) -eq 2
        then
            LINE=$((LINE - 1))
            FOUND=

            for TEST in $2
            do
                if test "$TEST" -eq "$LINE"
                then
                    FOUND=1
                fi
            done

            if test -z $FOUND
            then
                echo "unexpected: $1:$LINE:$(sed "${LINE}q;d" "$1")"
            fi
        else
            PREVIOUS=$LINE
        fi
    done
}

while getopts "c:i:" name
do
    case $name in
    c) CORPUS="$OPTARG" ;;
    i) IGNORE=$(echo "$OPTARG" | tr ',' ' ') ;;
    \?) print_usage ;;
    esac
done
shift $((OPTIND - 1))

TEST_DIR="$1/"
CORPUS=${CORPUS:-test/corpus/}
ERROR=0

if test ! -d "$TEST_DIR"
then
    echo "$0: no tests given"
    print_usage
fi
if test ! -d "$CORPUS"
then
    echo "$0: can't find corpus: $CORPUS"
    print_usage
fi

TESTS=$(find "$TEST_DIR" -type f -name \*A.dhall)
for TEST in $TESTS
do
    for FILE in $IGNORE
    do
        test "${TEST#"$TEST_DIR"}" = "$FILE" && continue 2
    done
    verify_test "$TEST"
done

TEST_FILES=$(find "$CORPUS" -type f -name \*.txt)
for TEST_FILE in $TEST_FILES
do
    FILE_HASH=$(echo "$TEST_FILE" | hash_sha256)
    find_extras "$TEST_FILE" "$(eval "echo \"\$VALID_${FILE_HASH}\"")"
done

test $ERROR -eq 0
