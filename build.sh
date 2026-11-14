#!/bin/bash

export HOME=/home/yottzumm
export WWW_WEB3D_ORG=${HOME}/www.web3d.org
export X3DJSONLD=${HOME}/X3DJSONLD
pushd ${X3DJSONLD}
export JAVA_HOME="${HOME}/Downloads/graalvm-25.4.4.1.1+1.1/"
# put path to mvn (Maven 3) and ant here
export PATH=${PATH}:/usr/bin
export MAVEN_OPTS="-Xmx16g" # " -XX:MaxPermSize=128m"
export PYTHON=python

# export PYTHONPATH=${PYTHONPATH}:/usr/lib/python3/dist-packages/pkg_resources/:/usr/lib/python3/dist-packages
source ${X3DJSONLD}/src/main/python/venv/Scripts/activate
source ${X3DJSONLD}/src/main/python/venv/bin/activate

# bring in source from sourceforget
# Command line svn is kaput (don't download)
#pushd ${WWW_WEB3D_ORG}
#svn up .
#popd

# copy code to X3DJSONLD locations
# cp ${WWW_WEB3D_ORG}/specifications/X3dUnifiedObjectModel-* ${X3DJSONLD}/src/specifications

# build X3DJSAIL
pushd ${WWW_WEB3D_ORG}/x3d/stylesheets
ant create.X3DJSAIL
cp java/jars/*.jar ${X3DJSONLD}
popd
mvn install:install-file -Dfile=${X3DJSONLD}/X3DJSAIL.4.0.full.jar -DgroupId=org.web3d.x3d -DartifactId=X3DJSAIL -Dversion=4.0.full -Dpackaging=jar
mvn install:install-file -Dfile=${X3DJSONLD}/X3DJSAIL.4.0.classes.jar -DgroupId=org.web3d.x3d -DartifactId=X3DJSAIL -Dversion=4.0.classes -Dpackaging=jar
mvn install:install-file -Dfile=${X3DJSONLD}/Saxon-HE-13.1.jar -DgroupId=net.sf.saxon -DartifactId=SAXON-HE -Dversion=13.1 -Dpackaging=jar
mvn install:install-file -Dfile=${WWW_WEB3D_ORG}/x3d/stylesheets/java/lib/exificient-gui-jar-with-dependencies.jar  -DgroupId=com.siemens.ct.exi -DartifactId=exificient -Dversion=0.9.7-SNAPSHOT-source1.6 -Dpackaging=jar

# copy stylesheets

cp ${WWW_WEB3D_ORG}/x3d/stylesheets/*.xslt ${X3DJSONLD}/src/main/lib/stylesheets

# compile stylesheet

# node_modules/.bin/xslt3 -t -xsl:${X3DJSONLD}/src/main/lib/stylesheets/X3dToJson.xslt -export:${X3DJSONLD}/src/main/lib/stylesheets/X3dToJson.sef.json -nogo

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
# pushd ${X3DJSONLD}/src/main/shell
# bash generateSchema.sh
# popd
pushd ${X3DJSONLD}/src/main/python
${PYTHON} generateSchemas.py
popd

# generate helpful JavaScript classes
pushd ${X3DJSONLD}/src/main/python
bash ./genauto.sh
popd

# install needed packages
npm install --package-lock-only && npm audit && npm ci
npm install -g @prantlf/jsonlint
npm install -g browserify
# npm install xml2js
# npm un ajv-formats && npm i ajv-formats

# maven build
mvn clean install
./gradlew clean
bash FixNeedClassName.sh
mvn install
./gradlew build
echo Press Return to Continue and run local.sh
read

# build */net/coderextreme/data/*
pushd ${X3DJSONLD}/src/main/shell
bash local.sh
popd
popd
