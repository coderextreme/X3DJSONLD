#!/bin/bash
for i in `find src/main/data -name '*.x3d' | grep -v new`; do ./CommandLines.exe "$i"; done
