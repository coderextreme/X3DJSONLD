#!/bin/sh

# bring in source from sourceforget
pushd /c/x3d-code/www.web3d.org
svn up .
popd

# copy code to X3DJSONLD locations
cp /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-* src/specifications

# build X3DJSAIL
pushd /c/x3d-code/www.web3d.org/x3d/stylesheets
~/apache-ant-1.10.7/bin/ant create.X3DJSAIL
cp java/jars/*.jar ~/pythonSAI
popd

# copy stylesheets

cp /c/x3d-code/www.web3d.org/x3d/stylesheets/*.xslt src/main/lib/stylesheets

# install python packages
pip install bs4
pip install lxml

# generate schemas
pushd src/main/shell
sh generateSchema.sh
popd

# generate helpful JavaScript classes
pushd src/main/python
python autoclass.py
python classes.py
python nodeclasses.py
python fieldTypesGenerator.py
python mapToMethodGenerator.py
popd

# copy to another location
pushd src/main/node
cp X3Dautoclass.js net/x3djsonld/data
popd

# maven build
export PATH=${PATH}:~/apache-maven-3.5.2/bin
mvn clean install && sh FixNeedClassName.sh && mvn install

echo Press Return to Continue
read

# build */net/coderextreme/data/*
pushd src/main/shell
sh local.sh
popd
