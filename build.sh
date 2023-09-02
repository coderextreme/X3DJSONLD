#!/bin/bash

export PATH=${PATH}:~/apache-maven-3.6.3/bin:~/apache-ant-1.10.9/bin
# export PYTHONPATH=${PYTHONPATH}:/usr/lib/python3/dist-packages/pkg_resources/:/usr/lib/python3/dist-packages
# source venv/Scripts/activate

# bring in source from sourceforget
pushd /c/x3d-code/www.web3d.org
svn up .
popd

# copy code to X3DJSONLD locations
cp /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-* src/specifications

# build X3DJSAIL
pushd /c/x3d-code/www.web3d.org/x3d/stylesheets
ant create.X3DJSAIL
cp java/jars/*.jar /c/Users/john/pythonSAI
mvn install:install-file -Dfile=/c/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar -DgroupId=org.web3d.x3d -DartifactId=X3DJSAIL -Dversion=4.0-SNAPSHOT -Dpackaging=jar
popd

# copy stylesheets

cp /c/x3d-code/www.web3d.org/x3d/stylesheets/*.xslt src/main/lib/stylesheets

# compile stylesheet

node_modules/.bin/xslt3 -t -xsl:src/main/lib/stylesheets/X3dToJson.xslt -export:src/main/lib/stylesheets/X3dToJson.sef.json -nogo

# install python3.11 packages
# sudo apt-get install python3-bs4
# sudo apt-get install python3-lxml
pip3 install bs4
pip3 install lxml
pip3 install pyjnius
pip3 install fastjsonschema
pip3 install jsonschema
pip3 install jschon
pip3 install xmlschema
pip3 install x3d
pip3 install xmlschema

# generate schemas
# pushd src/main/shell
# bash generateSchema.sh
# popd
pushd src/main/python
py generateSchemas.py
popd

# generate helpful JavaScript classes
pushd src/main/python
py autoclass.py
# py classes.py
py nodeclasses.py
py fieldTypesGenerator.py
py mapToMethodGenerator.py
popd

# copy to another location
pushd src/main/node
cp X3Dautoclass.js net/x3djsonld/data
popd

# install needed packages
npm install xml2js
npm un ajv-formats && npm i ajv-formats

# maven build
# mvn clean install
gradle clean
bash FixNeedClassName.sh
# mvn install
gradle build
echo Press Return to Continue
read

# build */net/coderextreme/data/*
pushd src/main/shell
bash local.sh
popd
