#!/bin/sh
export X3DRESOURCES=www.web3d.org/
find `ls *.json | grep -v new |grep -v package.json` $X3DRESOURCES -name '*.json' -print0 | xargs -0 -P 8 ${1-node} json2all.js
