#!/bin/bash
antlr4.exe CPPONGrammar.g4
for i in data/[bd-zBD-Z]*.cpp
do
	echo $i
	cat "$i" | antlr4-parse.exe CPPONGrammar.g4 x3d
done
