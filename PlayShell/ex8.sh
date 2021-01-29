#!/bin/bash
val=`expr 2+2`
echo $val
echo `expr 3 == 5`

a=11
b=21

val=`expr $a + $b`
echo "a+b: $val"

val=`expr $a - $b`
echo "a-b: $val"
