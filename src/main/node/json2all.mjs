"use strict";

// Convert X3D JSON to various formats

process.argv.shift();
process.argv.shift();

import convertJSON from "./convertJSON.mjs";

convertJSON([
	{ 
	serializer : "JavaSerializer",
	folder : "../java/net/coderextreme/",
	extension : ".java",
	codeOutput : "../"
	},
	{ 
	serializer : "DartSerializer",
	folder : "../dart/net/coderextreme/",
	extension : ".dart",
	codeOutput : "../"
	},
	{ 
	serializer : "ECMAScriptSerializer",
	folder : "../node/net/ecma/",
	extension : ".mjs",
	codeOutput : "../"
	},
	/*
	{ 
	serializer : 'DOM2JSONSerializer',
	folder : "../",
	extension : ".json.new"
	},
	*/
	{ 
	serializer : 'DOMSerializer',
	folder : "../",
	extension : ".x3d.new"
	},
	{ 
	serializer : 'VRMLScriptSerializer',
	folder : "../vrml/net/coderextreme/",
	extension : ".mjs",
	codeOutput : "../"
	},
	{ 
	serializer : 'NodeSerializer',
	folder : "../node/net/coderextreme/",
	extension : ".mjs",
	codeOutput : "../"
	},
	{ 
	serializer : 'CSerializer',
	folder : "../c/net/coderextreme/",
	extension : ".c",
	codeOutput : "../"
	},
	{ 
	serializer : 'CppSerializer',
	folder : "../cplusplus/net/coderextreme/",
	extension : ".cpp",
	codeOutput : "../"
/*
	},
	{ 
	serializer : 'JavaScriptSerializer',
	folder : "../nashorn/net/coderextreme/",
	extension : ".mjs",
	codeOutput : "../"
	},
	{ 
	serializer : 'PythonSerializer',
	folder : "../python/net/coderextreme/",
	extension : ".py",
	codeOutput : "../"
*/
	}
	]);
process.exit(0);