#!/bin/bash
npm install -g antlr4js-cli
mkdir js
pushd js
antlr4js -visitor ../CPPONGrammar.g4
for i in ../data/*.h
do
	echo $i
	node.exe CPP.mjs "$i"
done
popd
