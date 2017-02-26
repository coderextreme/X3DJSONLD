"use strict";

// Convert X3D JSON to JAVA

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js');

convertJSON('./JavaSerializerNew.js', ".java.new");
convertJSON('./PythonSerializer.js', ".py");
convertJSON('./DOMSerializer.js', ".x3d.new");
convertJSON('./JavaSerializer.js', ".java");
