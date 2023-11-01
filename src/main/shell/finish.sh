#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# finish what's not completed
find /c/x3d-code/www.web3d.org/x3d/content/examples -name '*.x3d' | wc
bash convert.sh
bash nonconverted.sh | wc
bash serialize.sh
bash nonserialized.sh | wc
bash compile.sh
bash noncompiled.sh | wc
bash execute.sh
bash nonexecutedjs.sh | wc
bash nonexecuted.sh | wc
bash diffxml.sh
bash diffjson.sh
