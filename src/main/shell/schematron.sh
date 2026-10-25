#!/bin/bash
java -Xmx2g -Djdk.xml.entityExpansionLimit=120000 -Djdk.xml.totalEntitySizeLimit=50000000 -Djdk.xml.maxGeneralEntitySizeLimit=50000000 -cp "../java:../../../X3DJSAIL.4.0.full.jar" org.web3d.x3d.jsail.CommandLine -schematron "$1" -tofile "$1.new.schematron.txt"
