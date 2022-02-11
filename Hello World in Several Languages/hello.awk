#!/usr/bin/awk -f

function greet(n) {
    print "Hello", n
}

BEGIN {
    print "Hello Awk!"
}

{
    for (i = 1; i <= NF; ++i)
        greet($i)
}

END {
    print "bye"
}
