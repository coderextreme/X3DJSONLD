#!/bin/bash

# finish what's not completed
find /c/x3d-code/www.web3d.org/x3d/content/examples -name '*.x3d' | wc
sh convert.sh
sh nonconverted.sh | wc
sh serialize.sh
sh nonserialized.sh | wc
sh compile.sh
sh noncompiled.sh | wc
sh execute.sh
sh nonexecutedjs.sh | wc
sh nonexecuted.sh | wc
sh diffxml.sh
sh diffjson.sh
