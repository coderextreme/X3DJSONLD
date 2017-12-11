#!/bin/sh
export PATH=${PATH}:~/apache-maven-3.5.2/bin
pip install bs4
pip install lxml
mvn clean install || sh FixNeedClassName.sh && mvn install
