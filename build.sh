#!/bin/bash

export PATH=${PATH}:~/apache-maven-3.6.3/bin:~/apache-ant-1.10.9/bin
export PYTHONPATH=${PYTHONPATH}:/usr/lib/python3/dist-packages/pkg_resources/:/usr/lib/python3/dist-packages

# bring in source from sourceforget
pushd /c/x3d-code/www.web3d.org
svn up .
popd

# copy code to X3DJSONLD locations
cp /c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-* src/specifications

# build X3DJSAIL
pushd /c/x3d-code/www.web3d.org/x3d/stylesheets
ant create.X3DJSAIL
cp java/jars/*.jar ~/pythonSAI
mvn install:install-file -Dfile=/home/coderextreme/pythonSAI/X3DJSAIL.4.0.full.jar -DgroupId=org.web3d.x3d -DartifactId=X3DJSAIL -Dversion=4.0-SNAPSHOT -Dpackaging=jar
popd

# copy stylesheets

cp /c/x3d-code/www.web3d.org/x3d/stylesheets/*.xslt src/main/lib/stylesheets

# install python packages
pip3 install beautifulsoup4
pip3 install lxml
pip3 install jnius

# generate schemas
pushd src/main/shell
bash generateSchema.sh
popd

# generate helpful JavaScript classes
pushd src/main/python
python3 autoclass.py
python3 classes.py
python3 nodeclasses.py
python3 fieldTypesGenerator.py
python3 mapToMethodGenerator.py
popd

# copy to another location
pushd src/main/node
cp X3Dautoclass.js net/x3djsonld/data
popd

# maven build
mvn clean install && bash FixNeedClassName.sh && mvn install

echo Press Return to Continue
read

# build */net/coderextreme/data/*
pushd src/main/shell
bash local.sh
popd
