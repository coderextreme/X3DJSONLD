#!/bin/bash
java -cp "target/X3DJSONLD-1.0-SNAPSHOT.jar;../../../X3DJSAIL.4.0.full.jar;saxon-HE-13.1.jar" net.x3djsonld.data.TextSpecialCharacters json tsc.json
