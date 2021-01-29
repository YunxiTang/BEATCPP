#!/bin/bash
# array in bash
myarray=(A B "C" D)
echo ${myarray[0]}
echo ${myarray[1]}
echo ${myarray[2]}
echo ${myarray[@]}
echo ${#myarray[*]}
