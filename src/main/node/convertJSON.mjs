"use strict";

import config from './config.mjs';
import mkdirp from 'node-mkdirp';
import mapToMethod from './mapToMethod.mjs';
import mapToMethod2 from './mapToMethod2.mjs';
import fieldTypes from './fieldTypes.mjs';
import X3DJSONLD from './X3DJSONLD.mjs';
import Script from './Script.mjs';
import doLoadValidate from "./loadValidate.mjs";
import xmldom from '@xmldom/xmldom';
import DOMSerializer from './DOMSerializer.mjs';
import CSerializer from './CSerializer.mjs';
import CppSerializer from './CppSerializer.mjs';
import JavaSerializer from './JavaSerializer.mjs';
import DartSerializer from './DartSerializer.mjs';
import NodeSerializer from './NodeSerializer.mjs';
import ECMAScriptSerializer from './ECMAScriptSerializer.mjs';
import VRMLScriptSerializer from './VRMLScriptSerializer.mjs';

var loadValidator = new doLoadValidate();
window.loadValidator = loadValidator;

try {
	import fs from 'fs';
} catch (e) {
	console.log("Problems loading fs. On browser? "+e);
}


var DOMImplementation = new xmldom.DOMImplementation();

var LOG = Script.LOG;
var JSONParser = Object.assign(X3DJSONLD, { processURLs : function(urls) { return urls; }});
var selectObjectFromJSObj = JSONParser.selectObjectFromJSObj;

if (typeof mapToMethod2 !== 'undefined') {
	for (var map in mapToMethod2) {
		Object.assign(mapToMethod[map], mapToMethod2[map]);
	}
}
/*
for (var par in mapToMethod2) {
	for (var child in mapToMethod2[par]) {
		mapToMethod[par][child] = mapToMethod2[par][child];
	}
}
*/

export default function convertJSON(options) {

	var files = process.argv;
	for (var f in files) {
		var file = files[f];
		if (file.match(/node_modules|package.json|JSONSchema/)) {
			continue;
		}
		var basefile = file.substr(0, file.lastIndexOf("."));
		var file = basefile+".json";
		var str = fs.readFileSync(file).toString();
		if (typeof str === 'undefined') {
			throw("Read nothing, or possbile error");
		}
		var json = null;
		try {  
			json = JSON.parse(str);
		} catch (e) {
			console.error("================================================================================");
			console.error("File:", file);
			console.error("Error:", e);
			continue;
		}
		var NS = "https://www.web3d.org/specifications/x3d";
		loadValidator.loadX3DJS(DOMImplementation, json, file, NS, JSONParser, function(element, xml) {
			if (typeof element === undefined) {
				throw ("Undefined element returned from loadX3DJS()")
			}
			if (typeof element === null) {
				throw ("Null element returned from loadX3DJS()")
			}
			// filename conversion goes here.
			/*
			var x3dcodeind = basefile.indexOf(config.x3dcode);
			if (x3dcodeind === 0) {
				basefile = basefile.substring(config.x3dcode.length);
			}
			*/
			// console.error("basefile0", basefile);
			basefile = basefile.replace(/^C:\//, "")
			basefile = basefile.replace(/^\.\.\//, "")
			basefile = basefile.replace(/-|\.| /g, "_")
			// handle filenames with leading zeros and java keywords
			basefile = basefile.replace(/^(.*[\\\/])([0-9].*|default|switch|for)$/, "$1_$2")

			for (var ser in options) {
				var serializer = eval ( options[ser].serializer ); // TODO DANGER WARNING
				var co = options[ser].codeOutput+basefile;
				str = new serializer().serializeToString(json, element, co, mapToMethod, fieldTypes)
				if (typeof str !== 'undefined') {
					// console.error("basefile", basefile);
					var outfile = options[ser].folder+basefile+options[ser].extension
					// console.error("outfile", outfile);
					mkdirp(outfile.substr(0, outfile.lastIndexOf("/")));
					fs.writeFileSync(outfile, str);
				} else {
					throw("Wrote nothing, serializer returned nothing");
				}
			}
		});
	}
}
