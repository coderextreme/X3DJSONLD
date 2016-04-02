"use strict";

if (typeof document === 'undefined') {
	var document = {};
}

// For X3D Browser functions
if (typeof Browser === 'undefined') {
	var Browser = {
		print : function(string) { if (typeof console !== 'undefined' && typeof string !== 'undefined') console.error(string); },
		println : function(string) { if (typeof console !== 'undefined' && typeof string !== 'undefined') console.error(string); },
		stringToArray : function(obj) {
			if (typeof obj === 'object') {
				return obj;
			} else {
				return JSON.parse('['+obj+']');
			}
		},
		appendTo : function(element, json) {
			 return ConvertToX3DOM(json, "", element, 'foo.json');
		},
		getDocument : function() {
			return document;
		}
	};
}

var x3djsonNS;
var encoding;

function getEncoding() {
	return encoding;
}

function setEncoding(enc) {
	encoding = enc;
}

// 'http://www.web3d.org/specifications/x3d-namespace'

// Load X3D JSON into web page

var containerFields = [];


function elementSetAttribute(element, key, value) {
	if (key === 'SON schema') {
		// JSON Schema
	} else if (key === 'ncoding') {
		// encoding, UTF-8, UTF-16 or UTF-32
		setEncoding(value);
	} else {
		if (typeof element.setAttribute === 'function') {
			element.setAttribute(key, value);
		}
	}
}

function ConvertChildren(parentkey, object, element, path) {
	var key;
	containerFields.unshift(parentkey.substr(1));

	for (key in object) {
		if (typeof object[key] === 'object') {
			if (isNaN(parseInt(key))) {
				ConvertObject(key, object, element, path);
			} else {
				ConvertToX3DOM(object[key], key, element, path);
			}
		}
	}
	containerFields.shift();
}

function CreateElement(key, x3djsonNS) {
	var child = null;
	if (typeof x3djsonNS === 'undefined') {
		child = document.createElement(key);
	} else {
		child = document.createElementNS(x3djsonNS, key);
		if (child == null || typeof child === 'undefined') {
			console.error('Trouble creating element for', key);
			child = document.createElement(key);
		}
	}
	if (containerFields.length > 1 && containerFields[0] !== 'shaders') {
		child.setAttribute('containerField', containerFields[0]);
	}
	return child;
}

function CDATACreateFunction(document, element, str) {
	// for script nodes
	var open = document.createTextNode('<![CDATA[');
	var child = document.createTextNode(str.replace(/\&lt;/g, '<').replace(/&gt;/g, '>'));
	var close = document.createTextNode(']]>');
	element.appendChild(open);
	element.appendChild(child);
	element.appendChild(close);
}

function setCDATACreateFunction(fnc) {
	CDATACreateFunction = fnc;
}

function ConvertObject(key, object, element, path) {
	if (object !== null && typeof object[key] === 'object') {
		if (key.substr(0,1) === '@') {
			ConvertToX3DOM(object[key], key, element, path);
		} else if (key.substr(0,1) === '-') {
			ConvertChildren(key, object[key], element, path);
		} else if (key === '#comment') {
			for (var c in object[key]) {
				var child = document.createComment(CommentStringToXML(object[key][c]));
				element.appendChild(child);
			}
		} else if (key === 'Inline') {
			var localArray = object[key]["@url"];
			processURLs(localArray, path);
			var isJson = false;
			for (var i in localArray) {
				var url = localArray[i];
				var tail = url.length - url.lastIndexOf(".json");
				if (tail === 5 && object[key]["@load"]) {
					isJson = true;
					$.getJSON(url, function(json) {
						var child = document.createDocumentFragment();
						ConvertToX3DOM(json, "-children", child, path);
						element.appendChild(child);
						element.appendChild(document.createTextNode("\n"));
					});
				}
			}
			if (!isJson) {
				var child = CreateElement(key, x3djsonNS);
				ConvertToX3DOM(object[key], key, child, path);
				element.appendChild(child);
				element.appendChild(document.createTextNode("\n"));
			}
		} else if (key === '#sourceText') {
			CDATACreateFunction(document, element, object[key].join("\n"));
		} else {
			if (key === 'connect' || key === 'fieldValue' || key === 'field' || key === 'meta' || key === 'component') {
				for (var childkey in object[key]) {  // for each field
					if (key === 'meta') {
						// console.error("Examining ", childkey, object[key].length);
						if (parseInt(childkey) + 3 >= object[key].length) {
							// get rid of meta stuff added by stylesheet
							// console.error("Bailing");
							break;
						}
					}
					if (typeof object[key][childkey] === 'object') {
						var child = CreateElement(key, x3djsonNS);
						ConvertToX3DOM(object[key][childkey], childkey, child, path);
						element.appendChild(child);
						element.appendChild(document.createTextNode("\n"));
					}
				}
			} else {
				var child = CreateElement(key, x3djsonNS);
				ConvertToX3DOM(object[key], key, child, path);
				element.appendChild(child);
				element.appendChild(document.createTextNode("\n"));
			}
		}
	}
}

function CommentStringToXML(str) {
	str = str.replace(/[\u0080-\uFFFF]/g, 
		function (v) {return '&#'+v.charCodeAt()+';';}
	);
	str = str.replace(/\\"/g, '"');
	return str;
}

function JSONStringToXML(str) {
	str = str.replace(/[\u0080-\uFFFF]/g, 
		function (v) {return '&#'+v.charCodeAt()+';';}
	);
	// replace  \'s first
	str = str.replace(/\\/g, '\\\\');
	str = str.replace(/"/g, '\\"');
	return str;
}

function processURLs(localArray, path) {
	var url;
	// No longer need to split
	for (url in localArray) {
		if (localArray[url].indexOf("http://") === 0
		 || localArray[url].indexOf("https://") === 0) {
		} else if (localArray[url].indexOf("urn:web3d:media:textures/panoramas/") === 0) {
			var ls = localArray[url].lastIndexOf("/");
			if (ls > 0) {
				localArray[url] = 'examples/Basic/UniversalMediaPanoramas/'+localArray[url].substring(ls+1);
			}

		} else {
			var pe = path.lastIndexOf('/');
			var pc = path.substring(0, pe);
			localArray[url] = pc+'/'+localArray[url];
			if (localArray[url].indexOf('/') === 0) {
				// no webroot absolute paths.  No /'s for cobweb shaders
				localArray[url] = localArray[url].substring(1);
			}
			console.error("Loading "+localArray[url]);
		}
			
       }
}

function ConvertToX3DOM(object, parentkey, element, path) {
	var key;
	var localArray = [];
	var isArray = false;
	var arrayOfStrings = false;
	for (key in object) {
		if (isNaN(parseInt(key))) {
			isArray = false;
		} else {
			isArray = true;
		}
		if (isArray) {
			if (typeof object[key] === 'number') {
				localArray.push(object[key]);
			} else if (typeof object[key] === 'string') {
				localArray.push(object[key]);
				arrayOfStrings = true;
			} else if (typeof object[key] === 'boolean') {
				localArray.push(object[key]);
			} else if (typeof object[key] === 'object') {
				if (object[key] != null && typeof object[key].join === 'function') {
					localArray.push(object[key].join(" "));
				}
				ConvertToX3DOM(object[key], key, element, path);
			} else {
				console.error("Unknown type found in array "+typeof object[key]);
			}
		} else if (typeof object[key] === 'object') {
			// This is where the whole thing starts
			if (key === 'X3D') {
				ConvertToX3DOM(object[key], key, element, path);
			} else {
				ConvertObject(key, object, element, path);
			}
		} else if (typeof object[key] === 'number') {
			elementSetAttribute(element, key.substr(1),object[key]);
		} else if (typeof object[key] === 'string') {
			if (key !== '#comment') {
				// ordinary string attributes
				elementSetAttribute(element, key.substr(1), JSONStringToXML(object[key]));
			} else {
				var child = document.createComment(CommentStringToXML(object[key]));
				element.appendChild(child);
			}
		} else if (typeof object[key] === 'boolean') {
			elementSetAttribute(element, key.substr(1),object[key]);
		} else {
			console.error("Unknown type found in object "+typeof object[key]);
		}
	}
	if (isArray) {
		if (parentkey.substr(0,1) === '@') {
			if (arrayOfStrings) {
				arrayOfStrings = false;
				for (var str in localArray) {
					localArray[str] = JSONStringToXML(localArray[str]);
				}
                                if (parentkey === '@url' || parentkey.indexOf("Url") === parentkey.length - 3) {
					processURLs(localArray, path);
					// console.error("Loading URL",'"'+localArray.join('" "')+'"');
					elementSetAttribute(element, parentkey.substr(1),'"'+localArray.join('" "')+'"');
                                } else {
					// if string array
					elementSetAttribute(element, parentkey.substr(1),'"'+localArray.join('" "')+'"');
				}
			} else {
				// if non string array
				elementSetAttribute(element, parentkey.substr(1),localArray.join(" "));
			}
		}
		isArray = false;
	}
	return element;
}

function fixXML(xmlstr) {
	// get rid of self-closing tags
	xmlstr = xmlstr.replace(/(<[ \t]*)([A-Za-z0-9]+)([^>]*)\/>/g, "$1$2$3></$2>");
	// strip out namespace
	xmlstr = xmlstr.replace(/xmlns="[^"]*"/g, "");

	// strip out schema
	xmlstr = xmlstr.replace(/xsd:noNamespaceSchemaLocation="[^"]*"/gi, "");


	// Fix CDATA sections
	xmlstr = xmlstr.replace(/&lt;!\[CDATA\[/g, "<![CDATA[");
	xmlstr = xmlstr.replace(/\]\]&gt;/g, "]]>");
	do {
		var xmlstr2 = xmlstr;
		xmlstr = xmlstr2.replace(/(\<\!\[CDATA\[(.|\n)*)&lt;((.|\n)*\]\]\>)/gi, "$1<$3");
	} while (xmlstr !== xmlstr2);
	do {
		xmlstr2 = xmlstr;
		xmlstr = xmlstr2.replace(/(\<\!\[CDATA\[(.|\n)*)&gt;((.|\n)*\]\]\>)/gi, "$1>$3");
	} while (xmlstr !== xmlstr2);
	return xmlstr;
}


/*
 * Load X3D JSON into an element
 * json - the JSON to convert to XML and DOM
 * path - the path of the JSON file
 * xml - the output xml string array (optional)
 * NS - a namespace for cobweb (optional) -- stripped out
 * returns an element - the element to append or insert into the DOM
 */
function loadX3DJS(json, path, xml, NS) {
	var version = json.X3D["@version"];
	x3djsonNS = NS;
	var child = CreateElement('X3D', NS);
	ConvertToX3DOM(json, "", child, path);
	if (typeof xml !== 'undefined' && typeof xml.push === 'function') {
		xml.push('<?xml version="1.0" encoding="'+getEncoding()+'"?>');
		xml.push('<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D '+version+'//EN" "http://www.web3d.org/specifications/x3d-'+version+'.dtd">');

		var serializer = new XMLSerializer();
		var xmlstr = serializer.serializeToString(child);

		xmlstr = fixXML(xmlstr);
		xml.push(xmlstr);
	}
	return child;
}

if (typeof module === 'object')  {
	module.exports = {
		loadX3DJS : loadX3DJS,
		Browser : Browser,
		ConvertToX3DOM : ConvertToX3DOM,
		fixXML : fixXML,
		getEncoding : getEncoding,
		setCDATACreateFunction : setCDATACreateFunction,
		setDocument : function(doc) {
			document = doc;
		}
	};
}
