#!/bin/bash
antlr4.exe CPPONGrammar.g4
javac -cp /c/Users/john/Downloads/antlr-4.13.1-complete.jar *.java
for i in data/[a-zA-Z]*.h
do
	echo $i
	java -Xss1g -Xmx8g -cp "C:/Users/john/Downloads/antlr-4.13.1-complete.jar;." CPP $i
done
