"use strict";

// Convert X3D JSON to Python

process.argv.shift();
process.argv.shift();

import convertJSON from "./convertJSON.js";

convertJSON([{ 
	serializer : 'PythonSerializer',
	folder : "../python/net/x3d/",
	extension : ".py",
	codeOutput : "../",
	}]);
