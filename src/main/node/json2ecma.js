"use strict";

// Convert X3D JSON to JAVA

process.argv.shift();
process.argv.shift();

import convertJSON from "./convertJSON.js";

convertJSON([{ 
	serializer : 'ECMAScriptSerializer',
	folder : "../node/net/ecma/",
	extension : ".mjs",
	codeOutput : "../",
	}]);
