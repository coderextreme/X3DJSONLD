#!/bin/bash

echo 3.0
python ../python/etgenerateJSONschema.py < /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-3.0.xml | jsonlint > ../schema/x3d-3.0-JSONSchema.json
echo 3.1
python ../python/etgenerateJSONschema.py < /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-3.1.xml | jsonlint > ../schema/x3d-3.1-JSONSchema.json
echo 3.2
python ../python/etgenerateJSONschema.py < /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-3.2.xml | jsonlint > ../schema/x3d-3.2-JSONSchema.json
echo 3.3
python ../python/etgenerateJSONschema.py < /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-3.3.xml | jsonlint > ../schema/x3d-3.3-JSONSchema.json
echo 4.0
python ../python/etgenerateJSONschema.py < /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-4.0.xml | jsonlint > ../schema/x3d-4.0-JSONSchema.json
