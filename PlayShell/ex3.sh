#!/bin/bash
# read-only variable
myUrl="https://www.google.com"
readonly myUrl
myUrl="https://www.baidu.com"
echo ${myUrl}
