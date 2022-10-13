"use strict";

// Convert X3D JSON to JAVA

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js').convertJSON;

convertJSON([{ 
	serializer : './Three2Serializer.js',
	folder : "../three2/",
	extension : ".three2.js",
	codeOutput : "",
	}]);
