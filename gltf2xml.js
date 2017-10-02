var fs = require("fs");
var xmldom = require('xmldom');
var DOMImplementation = new xmldom.DOMImplementation();
var XMLSerializer = new xmldom.XMLSerializer();
var docType = DOMImplementation.createDocumentType("gltf", 'ISO//Web3D//DTD gltf 3.3//EN" "http://www.web3d.org/specifications/gltf-3.3.dtd', null);
var document = DOMImplementation.createDocument(null, "gltf", docType);


process.argv.shift();
process.argv.shift();

for (arg in process.argv) {
	try {
		argv = process.argv[arg];
		var string = fs.readFileSync(argv).toString();
		var json = JSON.parse(string);
		var element = writeAsXml(document.documentElement, "gltf", json);
		document.documentElement.appendChild(element);
		console.log(serializeDOM(json, document));
	} catch (e) {
		console.error(e);
	}
}

function serializeDOM(json, element) {
	var xml = '<?xml version="1.0"?>\n';
	if (typeof element === 'string') {
		xml += element;
	} else {
		xml += XMLSerializer.serializeToString(element);
	}

	return xml;
}
function writeAsXml(parent, j, json) {
	var element;
	var k = j;
	if (j.endsWith("s") && !j.endsWith("ss")) {
		k = j.substr(0, j.length - 1);
	}
	if (j.endsWith("meshe")) {
		k = j.substr(0, j.length - 1);
	}
	if (Array.isArray(json)) {
		if (k !== j) {
			element = document.createElement(j);
		} else {
			element = parent;
		}
		for (js in json) {
			if (typeof json[js] !== 'object') {
				if (k.startsWith("#")) {
					var child = document.createTextNode(json[js]+"\n");
					element.appendChild(child);
				} else if (k.startsWith("@")) {
					if (typeof json[js] === 'string') {
						element.setAttribute(k.substr(1), '"'+json.join('" "').replace(/\\/g, "\\\\")+'"');
					} else {
						element.setAttribute(k.substr(1), json.join(" "));
					}
				} else {
					element.setAttribute(k, json.join(" "));
				}
			} else {
				var child = writeAsXml(element, k, json[js]);
				element.appendChild(child);
			}
		}
	} else if (typeof json === 'object') {
		if (!k.startsWith("-")) {
			element = document.createElement(k);
		} else {
			element = parent;
		}
		for (js in json) {
			if (typeof json[js] !== 'object') {
				element.setAttribute(js.startsWith("@") ? js.substr(1) : js, json[js]);
			} else {
				var child = writeAsXml(element, js, json[js]);
				element.appendChild(child);
			}
		}
	} else {
		element = document.createElement((j.startsWith("@") ? j.substr(1) : j));
		var child = document.createTextNode(json);
		element.appendChild(child);
	}
	return element;
}
