#!/bin/bash
#string
str='create a string'
myName="Newton"
str2="Hello, I know your name \"${myName}\" \n "
echo $str
echo -e $str2
#get the length of string
echo ${#str2}
#get substring
echo ${string:2:10}
#search for a substring
echo `expr index "${str2}" ya`

#1D array is supported in shell
Lang=("Python" "Java" "CPP" "MATLAB" "R")
echo ${Lang[1]}
