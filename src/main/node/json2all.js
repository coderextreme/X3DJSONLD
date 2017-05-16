"use strict";

// Convert X3D JSON to various formats

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js').convertJSON;

convertJSON([
	{ 
	serializer : './JavaSerializer.js',
	folder : "../java/net/coderextreme/",
	extension : ".java",
	codeOutput : "../new/",
	},
	{ 
	serializer : './DOMSerializer.js',
	folder : "../new/",
	extension : ".x3d.new",
	},
	{ 
	serializer : './JavaScriptSerializer.js',
	folder : "../nashorn/net/coderextreme/",
	extension : ".sail.js",
	codeOutput : "../new/",
	},
	{ 
	serializer : './PythonSerializer.js',
	folder : "../python/net/coderextreme/",
	extension : ".py",
	codeOutput : "../new/",
	}]);
