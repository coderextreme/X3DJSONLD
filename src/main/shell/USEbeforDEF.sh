#!/bin/bash

. ./classpath

STYLESHEETDIR=../lib/stylesheets

OVERWRITE=---overwrite

java net.coderextreme.RunSaxon "${OVERWRITE}" --"${STYLESHEETDIR}/swap-use-def.xslt" -notcorrected.x3d ../data/JinOne.new.python.x3d
java net.coderextreme.RunSaxon "${OVERWRITE}" --"${STYLESHEETDIR}/swap-use-def.xslt" -notcorrected.x3d ../data/JinOne.new.java.x3d
