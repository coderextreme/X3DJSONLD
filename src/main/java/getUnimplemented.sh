#!/bin/bash
javac -Xmaxerrs 5000 -cp /c/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar:. net/coderextreme/Remove.java 2>&1|grep -A 1 symbol: | awk '/location:/ { print $6; } /symbol:/ { print $3; }' | py ../python/swap.py |sort -u | sed 's/,/ children, /' | sed 's/)/ toRemove) {}/'
