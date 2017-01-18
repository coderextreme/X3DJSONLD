"use strict";

// Convert X3D JSON to X3D XML

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js');

convertJSON('./DOMSerializer.js', ".x3d");
