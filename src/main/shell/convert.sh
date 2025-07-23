#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# convert files from X3D to JSON

. ./classpath

bash nonconverted.sh | xargs -P 8 java net.coderextreme.RunSaxon --../lib/stylesheets/X3dToJson.xslt ---
