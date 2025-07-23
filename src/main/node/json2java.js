"use strict";

// Convert X3D JSON to JAVA

process.argv.shift();
process.argv.shift();

import convertJSON from "./convertJSON.js";

convertJSON([{ 
	serializer : 'JavaSerializer',
	folder : "../java/net/coderextreme/",
	extension : ".java",
	codeOutput : "../",
	}]);
