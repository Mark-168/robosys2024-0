#!/bin/bash -xv

ng () {
	echo ${1}行目が違うよ
	res=1
}

res=0

out=$(seq 5 | ./plus)
[ "${out}" = 15.0 ] || ng "$LINENO"

out=$(echo ら | ./plus)
[ "$?" = 1 ] || ng "$LINENO"
[ "${out}" = "" ] || ng "$LINED"

out=$(echo | ./plus)
[ "$?" = 1 ] || ng "$LINED"
[ "${out}" = "" ] || ng "$LINEND"


[ "${res}" = 0 ] && echo OK
exit $res

