#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

. ../shell/classpath

echo 3.0
${PYTHON} ../python/etgenerateJSONschema.py 3.0 < /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-3.0.xml | jsonlint > ../schema/x3d-3.0-JSONSchema.json
echo 3.1
${PYTHON} ../python/etgenerateJSONschema.py 3.1 < /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-3.1.xml | jsonlint > ../schema/x3d-3.1-JSONSchema.json
echo 3.2
${PYTHON} ../python/etgenerateJSONschema.py 3.2 < /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-3.2.xml | jsonlint > ../schema/x3d-3.2-JSONSchema.json
echo 3.3
${PYTHON} ../python/etgenerateJSONschema.py 3.3 < /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-3.3.xml | jsonlint > ../schema/x3d-3.3-JSONSchema.json
echo 4.0
${PYTHON} ../python/etgenerateJSONschema.py 4.0 < /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-4.0.xml | jsonlint > ../schema/x3d-4.0-JSONSchema.json
