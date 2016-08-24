#!/bin/bash
#
#passing parameters
#

add()
{
x=$1
y=$2
expr $x + $y
}

###main script
a=$1
b=$2

echo "sum is="
add 3 5
echo "end of script"
