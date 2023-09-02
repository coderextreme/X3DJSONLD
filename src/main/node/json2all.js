"use strict";

// Convert X3D JSON to various formats

process.argv.shift();
process.argv.shift();

var convertJSON = require("./convertJSON.js");
console.log(convertJSON.convertJSON);

convertJSON.convertJSON([
	{ 
	serializer : "./JavaSerializer.js",
	folder : "../java/net/coderextreme/",
	extension : ".java",
	codeOutput : "../"
	},
	{ 
	serializer : "./DartSerializer.js",
	folder : "../dart/net/coderextreme/",
	extension : ".dart",
	codeOutput : "../"
	},
	{ 
	serializer : "./ECMAScriptSerializer.js",
	folder : "../node/net/ecma/",
	extension : ".mjs",
	codeOutput : "../"
	},
	/*
	{ 
	serializer : './DOM2JSONSerializer.js',
	folder : "../",
	extension : ".json.new"
	},
	*/
	{ 
	serializer : './DOMSerializer.js',
	folder : "../",
	extension : ".x3d.new"
	},
	{ 
	serializer : './VRMLScriptSerializer.js',
	folder : "../vrml/net/coderextreme/",
	extension : ".mjs",
	codeOutput : "../"
	},
	{ 
	serializer : './NodeSerializer.js',
	folder : "../node/net/coderextreme/",
	extension : ".js",
	codeOutput : "../"
	},
	{ 
	serializer : './CSerializer.js',
	folder : "../c/net/coderextreme/",
	extension : ".c",
	codeOutput : "../"
	},
	{ 
	serializer : './CppSerializer.js',
	folder : "../cplusplus/net/coderextreme/",
	extension : ".cpp",
	codeOutput : "../"
	},
	{ 
	serializer : './JavaScriptSerializer.js',
	folder : "../nashorn/net/coderextreme/",
	extension : ".js",
	codeOutput : "../"
/*
	},
	{ 
	serializer : './PythonSerializer.js',
	folder : "../python/net/coderextreme/",
	extension : ".py",
	codeOutput : "../"
*/
	}
	]);
process.exit(0);
