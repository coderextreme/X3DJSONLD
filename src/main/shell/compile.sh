#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# way to get list of non compile files and compile them

. ./classpath

bash noncompiled.sh | xargs -L 20 -P 8 javac -proc:full -J-Xss1g -J-Xmx19g
