"use strict";

// Convert X3D JSON to JAVA

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js').convertJSON;

convertJSON([{ 
	serializer : './JavaSerializer.js',
	folder : "../java/net/coderextreme/",
	extension : ".java",
	codeOutput : "../",
	}]);
