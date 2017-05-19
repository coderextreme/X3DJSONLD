#!/bin/sh
pip install bs4
pip install lxml
mvn install
sh FixNeedClassName.sh
mvn install
