#!/bin/bash
find ../data -name '*.x3d' | grep -v new | xargs java -cp "../java;../../../X3DJSAIL.4.0.full.jar" net.coderextreme.CoderSchematron
