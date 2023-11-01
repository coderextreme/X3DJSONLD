#!/bin/bash
java -cp "target/X3DJSONLD-1.0-SNAPSHOT.jar;../pythonSAI/X3DJSAIL.4.0.full.jar;saxon-he-12.1.jar" net.x3djsonld.data.TextSpecialCharacters json tsc.json
