#!/bin/sh

print_usage() {
    echo "usage: tests.sh [-c corpus] tests"
    exit 1
}

verify_test() {
    TEST_NAME=${1#"$TEST_DIR"}
    MATCHES=$(grep -HnoR "$TEST_NAME" "$CORPUS")
    if [ -n "$MATCHES" ]
    then
        TEST_HASH=$(sha256 -q "$1")
        TEST_LENGTH=$(wc -l < "$1")

        LOCATION=
        EXTRAS=
        for MATCH in $MATCHES
        do
            if [ -z "$LOCATION" ]
            then
                LOCATION=$MATCH
            else
                EXTRAS="$EXTRAS, $MATCH"
            fi
        done

        if [ -z "$EXTRAS" ]
        then
            IFS=":" read -r FILE LINE _ <<EOF
$LOCATION
EOF
            MATCH_RANGE="$((LINE + 3)),$((LINE + 2 + TEST_LENGTH))p"
            MATCH_HASH=$(sed -n "$MATCH_RANGE" "$FILE" | sha256 -q)

            if [ "$TEST_HASH" != "$MATCH_HASH" ]
            then
                echo "mismatch: $TEST_NAME ($FILE)"
            fi

            # can't think of a better way to do this
            FILE_HASH=$(echo "$FILE" | sha256 -q)
            eval "VALID_${FILE_HASH}=\"$LINE\\n\$VALID_${FILE_HASH}\""
        else
            echo "duplicate: $LOCATION$EXTRAS"
        fi
    else
        echo "missing: $TEST_NAME"
    fi
}

find_extras() {
    CANDIDATES=$(grep -hno "==================" "$1")
    PREVIOUS="-2"

    for CANDIDATE in $CANDIDATES
    do
        LINE=${CANDIDATE%:==================}
        if [ $((LINE - PREVIOUS)) -eq 2 ]
        then
            LINE=$((LINE - 1))
            FOUND=

            for TEST in $2
            do
                if [ "$TEST" -eq "$LINE" ]
                then
                    FOUND=1
                fi
            done

            if [ -z $FOUND ]
            then
                echo "unexpected: $1:$LINE:$(sed "${LINE}q;d" "$1")"
            fi
        else
            PREVIOUS=$LINE
        fi
    done
}

while getopts "c:" name
do
    case $name in
    c) CORPUS="$OPTARG" ;;
    \?) print_usage ;;
    esac
done
shift $((OPTIND - 1))

TEST_DIR="$1/"
CORPUS=${CORPUS:-corpus/}

if [ ! -d "$TEST_DIR" ]
then
    echo "$0: no tests given"
    print_usage
fi
if [ ! -d "$CORPUS" ]
then
    echo "$0: can't find corpus: $CORPUS"
    print_usage
fi

TESTS=$(find "$TEST_DIR" -type f -name \*A.dhall)
for TEST in $TESTS
do
    verify_test "$TEST"
done

TEST_FILES=$(find "$CORPUS" -type f -name \*.txt)
for TEST_FILE in $TEST_FILES
do
    FILE_HASH=$(echo "$TEST_FILE" | sha256 -q)
    find_extras "$TEST_FILE" "$(eval "echo \"\$VALID_${FILE_HASH}\"")"
done
