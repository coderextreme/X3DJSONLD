"use strict";

// Convert X3D JSON to Python

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js').convertJSON;

convertJSON([{ 
	serializer : './PythonSerializer.js',
	folder : "../python/",
	extension : ".py",
	codeOutput : "../",
	}]);
