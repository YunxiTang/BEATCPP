#!/bin/bash
# pass param list to shell
echo "Shell param list example"
#$0 means file name (with file path) excuted now
echo "Name of this File: $0"
echo "First Param: $1"
echo "Second Param: $2"
echo "Third Param: $3"
# $# show the total num of passed params
echo "Num of params: $#"
# $* show all the params as a single string
echo $*
echo $@
# $$ ID of current progress
echo $$
# $! ID of last progress run in background
echo $!
