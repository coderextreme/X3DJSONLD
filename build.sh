#!/bin/sh
export PATH=${PATH}:~/apache-maven-3.5.0/bin
pip install bs4
pip install lxml
mvn install || sh FixNeedClassName.sh && mvn install
