"use strict";

// Convert X3D JSON to JAVA

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js');

convertJSON({'./Three2Serializer.js': ".three.js"});
