#!/bin/bash
antlr4.exe CPPONGrammar.g4
for i in data/[bdeghil-oqs-zBDEGHIL-OQS-Z]*.h
do
	echo $i
	cat "$i" | antlr4-parse.exe CPPONGrammar.g4 x3d
done
