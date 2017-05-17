"use strict";

// Convert X3D JSON to JAVA

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js').convertJSON;

convertJSON([{ 
	serializer : './Three2Serilizer.js',
	folder : "../three/",
	extension : ".three.js",
	codeOutput : "",
	}]);
