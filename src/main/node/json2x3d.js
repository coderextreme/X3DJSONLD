"use strict";

// Convert X3D JSON to X3D

process.argv.shift();
process.argv.shift();

vare convertJSON = require("./convertJSON.js");

var convertJSON = convertJSON.convertJSON;

convertJSON([{ 
	serializer : './DOMSerializer.js',
	folder : "../",
	extension : ".x3d.new",
	}]);
