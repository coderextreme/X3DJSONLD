#!/bin/sh
export X3DRESOURCES=www.web3d.org/
find `ls *.json | grep -v new |grep -v package.json |grep -v for.json` $X3DRESOURCES -name '*.json' -print0 | xargs -0 ${1-node} json2all.js
