#!/bin/sh

# convert files from X3D to JSON

. ./classpath

sh nonconverted.sh | xargs -P 8 java net.coderextreme.RunSaxon ---silent --../lib/stylesheets/X3dToJson.xslt ---
