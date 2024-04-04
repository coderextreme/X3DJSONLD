#!/bin/bash
mkdir java
pushd java
antlr4.exe ../CPPONGrammar.g4
javac -cp "C:/Users/john/Downloads/antlr-4.13.1-complete.jar;." *.java
for i in ../data/*.h
do
	echo $i
	java -Xss1g -Xmx8g -cp "C:/Users/john/Downloads/antlr-4.13.1-complete.jar;." CPP $i
done
