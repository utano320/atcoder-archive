#!/bin/bash

contest=$1
mkdir ${contest}

baseUrl="https://atcoder.jp/contests/${contest}/tasks/${contest}_(dir)"

dir=("a" "b" "c" "d" "e" "f")
for d in ${dir[@]}
do
  mkdir -p $contest/$d/test
  dlUrl=${baseUrl//(dir)/${d}}
  oj d ${dlUrl} -d ${contest}/${d}/test
done