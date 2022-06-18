#!/bin/sh

print_usage() {
    echo "usage: tests.sh [-c corpus] tests"
    exit 1
}

verify_test() {
    TEST_NAME=${1#$TEST_DIR}
    LOCATION=$(grep -HnoR -m 1 "$TEST_NAME" "$CORPUS")
    if [ -n "$LOCATION" ]
    then
        TEST_HASH=$(sha256 -q "$1")
        TEST_LENGTH=$(wc -l < "$1")

        IFS=":" read -r FILE LINE SOURCE <<EOF
$LOCATION
EOF
        MATCH_RANGE="$((LINE + 3)),$((LINE + 2 + TEST_LENGTH))p"
        MATCH_HASH=$(sed -n "$MATCH_RANGE" "$FILE" | sha256 -q)

        if [ $TEST_HASH != $MATCH_HASH ]
        then
            echo "mismatch: $TEST_NAME ($FILE)"
        fi
    else
        echo "missing: $TEST_NAME"
    fi
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
