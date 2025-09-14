"use strict";

if (typeof window === 'undefined') {
  var fs = await import('fs');
}
import mapToMethod from './mapToMethod.js';
import mapToMethod2 from './mapToMethod2.js';
import fieldTypes from './fieldTypes.js';
import { DOMParser } from'@xmldom/xmldom';
import ThreeSerializer from './ThreeSerializer.js';
import StripNumberSerializer from './StripNumberSerializer.js';
import DOM2JSONSerializer from './DOM2JSONSerializer.js';

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

function serializeXML(str, serializer, co, mapToMethod, fieldTypes) {
	let domParser = new DOMParser();
	if (!domParser) {
		console.error("Failed to create DOMParser")
		return "";
	}
	let doc = domParser.parseFromString (str, 'application/xml');
	if (!doc) {
		console.error("Failed to parse Xml", str)
		return "";
	}
	let element = doc.documentElement;
	if (!element) {
		console.error("No document element", str)
		return "";
	}
	if (!serializer) {
		console.error("No serializer", str)
		return "";
	} else {
		console.error("Serializer", serializer)
	}
	let actual_serializer = new serializer();
	if (!actual_serializer) {
		console.error("No actual_serializer", str)
		return "";
	}
	let str2 = actual_serializer.serializeToString(str, element, co, mapToMethod, fieldTypes)
	if (!str2) {
		console.error("Nothing parsed", str2)
		return "";
	} else {
		return str2;
	}
}

export default function convertXML(options) {

	var files = process.argv;
	for (var f in files) {
		var file = files[f];
		if (file.match(/node_modules|package.json|JSONSchema/)) {
			continue;
		}
		var basefile = file.substr(0, file.lastIndexOf("."));
		var file = basefile+".x3d";
		var str = null;
		if (typeof fs === 'object') {
			str = fs.readFileSync(file).toString();
		}
		if (str === null) {
			throw("Read nothing, or possbile error");
		}
		basefile = basefile.replace(/^C:\//, "")
		basefile = basefile.replace(/^\.\.\//, "")
		basefile = basefile.replace(/-|\.| /g, "_")
		basefile = basefile.replace(/^(.*[\\\/])([0-9].*|default|switch|for)$/, "$1_$2")

		options.forEach((option) => {
			var co = option.codeOutput+basefile;
			try {
				let actual_serializer = eval(option.serializer);
				var str2 = serializeXML(str, actual_serializer, basefile, mapToMethod, fieldTypes);
			} catch (e) {
				console.error("================================================================================");
				console.error("File:", file);
				console.error("Error:", e);
			}
			if (str2) {
				var outfile = option.folder+basefile+option.extension
				fs.mkdirSync(outfile.substr(0, outfile.lastIndexOf("/")), { recursive: true });
				if (typeof fs === 'object') {
					fs.writeFileSync(outfile, str2);
				}
				// console.log(outfile);
			} else {
				throw("Wrote nothing, serializer returned nothing");
			}
		});
	}
}
