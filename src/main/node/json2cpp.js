"use strict";

// Convert X3D JSON to JAVA

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js').convertJSON;

convertJSON([{ 
	serializer : './CppSerializer.js',
	folder : "../cplusplus/net/coderextreme/",
	extension : ".cpp",
	codeOutput : "../",
	},
	{ 
	serializer : './CppFunctionBodySerializer.js',
	folder : "../cplusplus/net/coderextreme/",
	extension : ".h",
	codeOutput : "../"
	}
]);
