"use strict";

// Convert X3D JSON to various formats

process.argv.shift();
process.argv.shift();

import convertJSON from "./convertJSON.js";

convertJSON([
	{ 
	serializer : "JRubySerializer",
	folder : "./",
	extension : ".rb",
	codeOutput : "../"
	},
	{ 
	serializer : "GuraSerializer",
	folder : "./",
	extension : ".ura",
	codeOutput : "../"
	},
	{ 
	serializer : "JavaSerializer",
	folder : "./",
	extension : ".java",
	codeOutput : "../"
	},
	{ 
	serializer : 'DOMSerializer',
	folder : "./",
	extension : ".x3d.new"
	},
	{ 
	serializer : 'CSerializer',
	folder : "./",
	extension : ".c",
	codeOutput : "../"
	},
	{ 
	serializer : 'CppSerializer',
	folder : "./",
	extension : ".cpp",
	codeOutput : "../"
	},
	{ 
	serializer : 'CppFunctionBodySerializer',
	folder : "./",
	extension : ".h",
	codeOutput : "../"
	},
	{ 
	serializer : 'JavaScriptSerializer',
	folder : "./",
	extension : ".js",
	codeOutput : "../"
	},
	{ 
	serializer : 'ClojureSerializer',
	folder : "./",
	extension : ".clj",
	codeOutput : "../"
	},
	{ 
	serializer : 'GraalPySerializer',
	folder : "../graalpy/net/coderextreme/",
	extension : ".py",
	codeOutput : "../"
	}
	]);
process.exit(0);
