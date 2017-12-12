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
	codeOutput : "../",
	},
	{ 
	serializer : './DOM2JSONSerializer.js',
	folder : "../",
	extension : ".json.new",
	},
	{ 
	serializer : './DOMSerializer.js',
	folder : "../",
	extension : ".x3d.new",
	},
	{ 
	serializer : './JavaScriptSerializer.js',
	folder : "../nashorn/net/coderextreme/",
	extension : ".sail.js",
	codeOutput : "../",
	},
	{ 
	serializer : './PythonSerializer.js',
	folder : "../python/net/coderextreme/",
	extension : ".py",
	codeOutput : "../",
	}
	]);
