#!/bin/bash

export HOME=/home/yottzumm
# put path to mvn (Maven 3) and ant here
export PATH=${PATH}:/usr/bin
export MAVEN_OPTS="-Xmx16g" # " -XX:MaxPermSize=128m"
export PYTHON=python

export JAVA_HOME="${HOME}/Downloads/graalvm-25.4.4.1.1+1.1/"
# export PYTHONPATH=${PYTHONPATH}:/usr/lib/python3/dist-packages/pkg_resources/:/usr/lib/python3/dist-packages
source src/main/python/venv/Scripts/activate
source src/main/python/venv/bin/activate

# bring in source from sourceforget
# Command line svn is kaput (don't download)
#pushd $HOME/www.web3d.org
#svn up .
#popd

# copy code to X3DJSONLD locations
# cp $HOME/www.web3d.org/specifications/X3dUnifiedObjectModel-* src/specifications

# build X3DJSAIL
pushd ${HOME}/www.web3d.org/x3d/stylesheets
ant create.X3DJSAIL

# cp java/jars/*.jar ${HOME}/X3DJSONLD
mvn install:install-file -Dfile=${HOME}/X3DJSONLD/X3DJSAIL.4.0.full.jar -DgroupId=org.web3d.x3d -DartifactId=X3DJSAIL -Dversion=4.0.full -Dpackaging=jar
mvn install:install-file -Dfile=${HOME}/X3DJSONLD/X3DJSAIL.4.0.classes.jar -DgroupId=org.web3d.x3d -DartifactId=X3DJSAIL -Dversion=4.0.classes -Dpackaging=jar
mvn install:install-file -Dfile=${HOME}/X3DJSONLD/saxon-he-12.9.jar -DgroupId=net.sf.saxon -DartifactId=SAXON-HE -Dversion=12.8 -Dpackaging=jar
mvn install:install-file -Dfile=${HOME}/www.web3d.org/x3d/stylesheets/java/lib/exificient-gui-jar-with-dependencies.jar  -DgroupId=com.siemens.ct.exi -DartifactId=exificient -Dversion=0.9.7-SNAPSHOT-source1.6 -Dpackaging=jar

popd

# copy stylesheets

# cp $HOME/www.web3d.org/x3d/stylesheets/*.xslt src/main/lib/stylesheets

# compile stylesheet

# node_modules/.bin/xslt3 -t -xsl:src/main/lib/stylesheets/X3dToJson.xslt -export:src/main/lib/stylesheets/X3dToJson.sef.json -nogo

# install python3.12 packages
# sudo apt-get install python3-bs4
# sudo apt-get install python3-lxml
#
${PYTHON} -m pip install --upgrade pip
pip3 install BeautifulSoup4
pip3 install lxml
pip3 install fastjsonschema
pip3 install jsonschema
pip3 install jschon
pip3 install xmlschema
pip3 install x3d

# generate schemas
# pushd src/main/shell
# bash generateSchema.sh
# popd
npm install -g @prantlf/jsonlint
npm install -g browserify
pushd src/main/python
${PYTHON} generateSchemas.py
popd

# generate helpful JavaScript classes
pushd src/main/python
bash ./genauto.sh
popd

# install needed packages
npm install --package-lock-only && npm audit && npm ci
# npm install xml2js
# npm un ajv-formats && npm i ajv-formats

# maven build
mvn clean install
# gradle clean
bash FixNeedClassName.sh
mvn install
gradle build
echo Press Return to Continue
read

# build */net/coderextreme/data/*
pushd src/main/shell
bash local.sh
popd
