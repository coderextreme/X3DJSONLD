"use strict";

// Convert X3D JSON to various formats

process.argv.shift();
process.argv.shift();

import convertJSON from "./convertJSON.js";

convertJSON([
	{ 
	serializer : "JRubySerializer",
	folder : "../jruby/net/coderextreme/",
	extension : ".rb",
	codeOutput : "../"
	},
	{ 
	serializer : "GuraSerializer",
	folder : "../gura/net/coderextreme/",
	extension : ".ura",
	codeOutput : "../"
	},
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
	extension : ".js",
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
	},
	{ 
	serializer : 'CppFunctionBodySerializer',
	folder : "../cplusplus/net/coderextreme/",
	extension : ".h",
	codeOutput : "../"
	},
	{ 
	serializer : 'QuarterSerializer',
	folder : "../quarter/net/coderextreme/",
	extension : ".cpp",
	codeOutput : "../"
	},
	{ 
	serializer : 'JavaScriptSerializer',
	folder : "../graaljs/net/coderextreme/",
	extension : ".js",
	codeOutput : "../"
	},
	{ 
	serializer : 'ClojureSerializer',
	folder : "../clojure/net/coderextreme/",
	extension : ".clj",
	codeOutput : "../"
	},
	{ 
	serializer : 'JavaScriptSerializerNew',
	folder : "../graaljs/net/remove/",
	extension : ".js",
	codeOutput : "../"
	},
	{ 
	serializer : 'PythonSerializer',
	folder : "../python/net/coderextreme/",
	extension : ".py",
	codeOutput : "../"
	},
	{ 
	serializer : 'GraalPySerializer',
	folder : "../graalpy/net/coderextreme/",
	extension : ".py",
	codeOutput : "../"
	},
	{ 
	serializer : 'PascalSerializer',
	folder : "../pascal/net/coderextreme/",
	extension : ".inc",
	codeOutput : "../"
	},
	{ 
	serializer : 'GoSerializer',
	folder : "../go/net/coderextreme/",
	extension : ".go",
	codeOutput : "../"
	}
	]);
process.exit(0);
