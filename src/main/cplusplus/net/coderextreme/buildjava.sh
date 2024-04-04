#!/bin/bash
mkdir -p java
pushd java
# antlr4.exe -vistor ../CPPONGrammar.g4
java -Xss1g -Xmx8g -cp "C:/Users/john/Downloads/antlr-4.13.1-complete.jar;." org.antlr.v4.Tool -Dlanguage=Cpp -visitor ../CPPONGrammar.g4
javac -cp "C:/Users/john/Downloads/antlr-4.13.1-complete.jar;." *.java
for i in ../data/*.h
do
	echo $i
	java -Xss1g -Xmx8g -cp "C:/Users/john/Downloads/antlr-4.13.1-complete.jar;." CPP $i
done
