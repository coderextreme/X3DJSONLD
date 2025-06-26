"use strict";

// Convert X3D JSON to X3D

process.argv.shift();
process.argv.shift();

import convertJSON from "./convertJSON.js";

convertJSON([{ 
	serializer : 'DOMSerializer',
	folder : "../",
	extension : ".x3d.new",
	}]);
