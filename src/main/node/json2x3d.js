"use strict";

// Convert X3D JSON to X3D

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js').convertJSON;

convertJSON([{ 
	serializer : './DOMSerializer.js',
	folder : "../",
	extension : ".x3d.new",
	}]);
