"use strict";

// Convert X3D JSON to various formats

process.argv.shift();
process.argv.shift();

import convertXML from './convertXML.js';

try {
convertXML([
	{ 
	serializer : 'DOM2JSONSerializer',
	folder : "../data/",
	extension : ".new.D2J.json",
	codeOutput : "../"
	},
	{ 
	serializer : 'ThreeSerializer',
	folder : "../three/",
	extension : ".three.x3dj",
	codeOutput : "../"
	},
	{ 
	serializer : 'StripNumberSerializer',
	folder : "../data/",
	extension : ".new.SNS.x3d",
	codeOutput : "../"
	}
	]);
} catch (e) {
	console.error(e);
}
