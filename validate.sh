#!/bin/bash
for i in `find src/main/data -name '*.x3d' | grep -v new`; do ./CommandLine.exe -validate $i 2>&1 | grep "validate results: success, no problems noted" >/dev/null || ./CommandLine.exe -validate "$i"; done
