"use strict";

// Convert X3D JSON to JAVA

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js').convertJSON;

convertJSON([{ 
	serializer : './JavaScriptSerializer.js',
	folder : "../graaljs/net/coderextreme/",
	extension : ".js",
	codeOutput : "../",
	}]);
