"use strict";

// Convert X3D JSON to X3D

process.argv.shift();
process.argv.shift();

import { convertJSON } from "./convertJSON.mjs";

var convertJSON = convertJSON.convertJSON;

convertJSON([{ 
	serializer : './DOMSerializer.mjs',
	folder : "../",
	extension : ".x3d.new",
	}]);
