#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# finish what's not completed
find /c/x3d-code/www.web3d.org/x3d/content/examples -name '*.x3d' | wc
echo convert
bash convert.sh
echo those not converted
bash nonconverted.sh | wc
echo serialize
bash serialize.sh
echo those not serialized
bash nonserialized.sh | wc
echo compile
bash compile.sh
echo those not compiled
bash noncompiled.sh | wc
echo execute
bash execute.sh
echo js not executed
bash nonexecutedjs.sh | wc
echo not executed
bash nonexecuted.sh | wc
echo diff xml
bash diffxml.sh
echo diff json
bash diffjson.sh
