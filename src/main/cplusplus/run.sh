#!/bin/bash

PATH=src:${PATH}
for i in data/*.json
do
	src/x3djsonld.exe $i
	cp output.x3d output/`basename $i .json`.x3d
done
