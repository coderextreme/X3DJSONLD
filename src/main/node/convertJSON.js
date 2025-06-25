"use strict";

if (typeof window === 'undefined') {
  var fs = await import('fs');
}
import mkdirp from 'node-mkdirp';
import mapToMethod from './mapToMethod.js';
import config from './config.js';
import mapToMethod2 from './mapToMethod2.js';
import fieldTypes from './fieldTypes.js';
import X3DJSONLD from './X3DJSONLD.js';
import Script from './Script.js';
import { replaceX3DJSON, loadSchema, loadX3DJS, doValidate } from "./loadValidateServer.js";
import { DOMParser, XMLSerializer, DOMImplementation } from '@xmldom/xmldom';

import GuraSerializer from './GuraSerializer.js';
import JavaSerializer from './JavaSerializer.js';
import DartSerializer from './DartSerializer.js';
import ECMAScriptSerializer from './ECMAScriptSerializer.js';
import DOMSerializer from './DOMSerializer.js';
import VRMLScriptSerializer from './VRMLScriptSerializer.js';
import NodeSerializer from './NodeSerializer.js';
import CSerializer from './CSerializer.js';
import CppSerializer from './CppSerializer.js';
import CppFunctionBodySerializer from './CppFunctionBodySerializer.js';
import QuarterSerializer from './QuarterSerializer.js';
import JavaScriptSerializer from './JavaScriptSerializer.js';
import ClojureSerializer from './ClojureSerializer.js';
import JavaScriptSerializerNew from './JavaScriptSerializerNew.js';
import PythonSerializerX3DJSAIL from './PythonSerializerX3DJSAIL.js';
import PascalSerializer from './PascalSerializer.js';

//console.error("DOM", DOMImplementation);
var domImpl = new DOMImplementation();
//console.error("DOM Impl", domImpl);

var LOG = Script.LOG;
X3DJSONLD.processURLs = function(urls) { return urls; };
var selectObjectFromJSObj = X3DJSONLD.selectObjectFromJSObj;

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
		try {
			var file = files[f];
			if (file.match(/node_modules|package.json|JSONSchema/)) {
				continue;
			}
			var basefile = file.substr(0, file.lastIndexOf("."));
			var file = basefile+".json";
			// console.error("Reading", file, domImpl);
			var str = null;
			if (typeof fs === 'object') {
				str = fs.readFileSync(file).toString();
				if (str === null) {
					throw("Read nothing, or possbile error");
				}
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
			// console.error("loading", file);
			loadX3DJS(domImpl, json, file, NS, function(element, xml) {
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
				basefile = basefile.replace(/-| /g, "_")
				// handle filenames with leading zeros and java keywords
				basefile = basefile.replace(/^(.*[\\\/])([0-9].*|default|switch|for)$/, "$1_$2")
				// console.error(basefile);

				options.forEach((option) => {
					let actual_serializer = eval(option.serializer);
					// console.log(option.serializer, actual_serializer);
					var co = option.codeOutput+basefile;
					// console.log("serializing:", co);
					try {
						str = new actual_serializer().serializeToString(json, element, co, mapToMethod, fieldTypes)
					} catch (e) {
						console.error(e);
					}
					if (typeof str !== 'undefined') {
						var outfile = option.folder+basefile+option.extension
						if (option.extension === ".clj") {
							outfile = option.folder+basefile+"/"+basefile+option.extension
						}
						try {
							mkdirp(outfile.substr(0, outfile.lastIndexOf("/")));
							// console.log("Writing", outfile);
							if (typeof fs === 'object') {
								fs.writeFileSync(outfile, str);
							}
						} catch (e) {
							console.error("Problems creating folder or writing file for", outfile);
						}
					} else {
						throw("Wrote nothing, serializer returned nothing");
					}
				});
			});
		} catch (e) {
			console.log(e);
		}
	}
}
