#!/bin/sh
pushd src/main/graaljs
gradle xslt
popd
pushd src/main/java
gradle xslt
popd
pushd src/main/data
gradle xslt
popd
pushd src/main/node
gradle xslt
popd
pushd src/main/python
gradle xslt
popd
pushd src/main/turtle
gradle xslt
popd
