"use strict";

// Convert X3D JSON to JAVA

process.argv.shift();
process.argv.shift();

import convertJSON from './convertJSON.js';

convertJSON([{ 
	serializer : 'Three2Serializer',
	folder : "../three2/",
	extension : ".three2.js",
	codeOutput : "",
	}]);
