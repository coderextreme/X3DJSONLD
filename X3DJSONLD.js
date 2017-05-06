"use strict";

if (typeof document === 'undefined') {
	var document = {};
}

// For X3D Browser functions
if (typeof Browser === 'undefined') {
	var Browser = {
		print : function(string) { if (typeof console !== 'undefined' && typeof string !== 'undefined') console.error(string); },
		println : function(string) { if (typeof console !== 'undefined' && typeof string !== 'undefined') console.error(string); },
		stringToArray : function(clazz, obj) {
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

function processURLs(localArray, path) {
	console.log("Process URLs", path, localArray);
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
			var s = localArray[url].indexOf('/');
			var p = localArray[url].indexOf('#');
			var pe = path.lastIndexOf('/');
			var pc = path.substring(0, pe);
			if (s != 0 && p != 0) {
				if (localArray[url].indexOf(pc) != 0) {
					 localArray[url] = pc+'/'+localArray[url];
				}
				if (localArray[url].indexOf('/') === 0) {
					// no webroot absolute paths.  No /'s for cobweb shaders
					localArray[url] = localArray[url].substring(1);
				}
			}
		}
		// for server side
		var h = localArray[url].lastIndexOf("#") ;
		var hash = "";
		if (h >= 0) {
			hash = localArray[url].substring(h);
			localArray[url] = localArray[url].substring(0, h);
		}
/*
		var x3d = localArray[url].lastIndexOf(".x3d") ;
		if (x3d === localArray[url].length - 4) {
			localArray[url] = localArray[url].substring(0, x3d)+".json" + hash;
		}
*/
		var wrl = localArray[url].lastIndexOf(".wrl") ;
		if (wrl === localArray[url].length - 4) {
			localArray[url] = localArray[url].substring(0, wrl)+".json" + hash;
		}
		var wrz = localArray[url].lastIndexOf(".wrz") ;
		if (wrz === localArray[url].length - 4) {
			localArray[url] = localArray[url].substring(0, wrz)+".json" + hash;
		}
			
        }
	// console.error("Processed URLs", localArray.join(" "));
	return localArray;
}

if (typeof require === 'function') {
	var fs = require("fs");
	var http = require("http");
	var https = require("https");
	var runAndSend = require("./runAndSend");
}
	
function loadURLs(loadpath, urls, loadedCallback) {
	if (typeof urls !== 'undefined') {
		urls = processURLs(urls, loadpath);
		for (var u in urls) {
			try {
				var url = urls[u];
				(function(url) {
					var p = url.indexOf("://");
					var protocol = "file";
					var host = "localhost";
					var path = "/"+loadpath;
					if (p > 0) {
						protocol = url.substring(0, p);
						var pa = url.indexOf("/", p+3);
						host = url.substring(p+3, pa);
						path = url.substring(pa);
					}

					if (protocol === "http") {
						console.error("Loading HTTP URL", url);
						if (typeof $ !== 'undefined' && typeof $.get === 'function') {
							$.get(url, function(data) {
								loadedCallback(data, url);
							});
						} else {
							http.get({ host: host, path: path}, function(res) {
								var data = '';
								res.on('data', function (d) {
									data += d;
								});
								res.on('end', function() {
									loadedCallback(data, url);
								});
							});
					
						}
					} else if (protocol === "https") {
						console.error("Loading HTTPS URL", url);
						if (typeof $ !== 'undefined' && typeof $.get === 'function') {
							$.get(url, function(data) {
								loadedCallback(data, url);
							});
						} else {
							https.get({ host: host, path: path}, function(res) {
								var data = '';
								res.on('data', function (d) {
									data += d;
								});
								res.on('end', function() {
									loadedCallback(data, url);
								});
							});
					
						}
					} else if (typeof fs !== 'undefined' && protocol.indexOf("http") !== 0) {
						// should be async, but out of memory
						console.error("Loading FILE URL", url);
						var hash = url.indexOf("#");
						if (hash > 0) {
							url = url.substring(0, hash);
						}
						try {
							var data = fs.readFileSync(url);
							loadedCallback(data.toString(), url);
						} catch (e) {
							var filename = url;
							filename = filename.substring(0, filename.lastIndexOf("."))+".x3d";
							console.error("converting "+filename);
							if (typeof runAndSend === 'function') {
								runAndSend(['---silent', filename], function(json) {
									data = JSON.stringify(json);
									loadedCallback(data, filename);
								});
							}
						}
					} else if (typeof $ !== 'undefined' && typeof $.get === 'function') {
						console.error("Loading Relative URL", url);
						$.get(url, function(data) {
							loadedCallback(data, url);
						});
					} else {
						console.error("Didn't load", url, ".  No JQuery $.get() or file system");
					}
				})(url);
			} catch (e) {
			 	console.error(e);
			}
		}
	}
}

var x3djsonNS;

// 'http://www.web3d.org/specifications/x3d-namespace'

// Load X3D JSON into web page


function elementSetAttribute(element, key, value) {
	if (key === 'SON schema') {
		// JSON Schema
	} else if (key === 'ncoding') {
		// encoding, UTF-8, UTF-16 or UTF-32
	} else {
		if (typeof element.setAttribute === 'function') {
			element.setAttribute(key, value);
		}
	}
}

function ConvertChildren(parentkey, object, element, path) {
	var key;

	for (key in object) {
		if (typeof object[key] === 'object') {
			if (isNaN(parseInt(key))) {
				ConvertObject(key, object, element, path, parentkey.substr(1));
			} else {
				ConvertToX3DOM(object[key], key, element, path, parentkey.substr(1));
			}
		}
	}
}

function CreateElement(key, x3djsonNS, containerField) {
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
	if (typeof containerField !== 'undefined') {
		elementSetAttribute(child, 'containerField', containerField);
	}
	return child;
}

function CDATACreateFunction(document, element, str) {
	var y = str
		.replace(/'([^'\r]*)\n([^']*)'/g, "'$1\\n$2'")
		.replace(/&lt;/g, "<")
		.replace(/&gt;/g, ">")
		.replace(/&amp;/g, "&")
	;
	var domParser = new DOMParser();
	var cdataStr = '<script> <![CDATA[ ' + y + ' ]]> </script>'; // has to be wrapped into an element
	var scriptDoc = domParser .parseFromString (cdataStr, 'application/xml');
	var cdata = scriptDoc .children[0] .childNodes[1]; // space after script is childNode[0]
	element .appendChild(cdata);
}

function setCDATACreateFunction(fnc) {
	CDATACreateFunction = fnc;
}

function ConvertObject(key, object, element, path, containerField) {
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
		/*
		} else if (key === 'Inline') {
			var localArray = object[key]["@url"];
			// console.error("Loading", localArray, "into", key);
			loadURLs(path, localArray, function(json, path) {
				// console.error("Read", json);
				try {
					// console.error("Loading", json, "into inline");
					var child = document.createDocumentFragment();
					ConvertToX3DOM(json, "-children", child, path);
					element.appendChild(child);
					element.appendChild(document.createTextNode("\n"));
				} catch(e) {
					// if JSON parse failed, it might be XML or WRL
					var child = CreateElement(key, x3djsonNS, containerField);
					// console.error("Reloading", object[key]["@url"].join('","').replace(/\.json/g, '.x3d').split(/","/));
					ConvertToX3DOM(object[key], key, child, path);
					element.appendChild(child);
					element.appendChild(document.createTextNode("\n"));
				}
			});
		*/
		} else if (key === '#sourceText') {
			CDATACreateFunction(document, element, object[key].join("\r\n")+"\r\n");
		} else {
			if (key === 'connect' || key === 'fieldValue' || key === 'field' || key === 'meta' || key === 'component') {
				if (key === 'meta') {
					// Add meta information for X3DJSONLD
					var months = [
						"January",
						"February",
						"March",
						"April",
						"May",
						"June",
						"July",
						"August",
						"September",
						"October",
						"November",
						"December"

					];

					var dt = new Date();
					object[key][object[key].length] = {
						"@name": "translated",
						"@content": dt.getDate()+" "+ months[dt.getMonth()]+" "+dt.getFullYear()
					};
					object[key][object[key].length] = {
						"@name": "generator",
						"@content": "X3DJSONLD: https://github.com/coderextreme/X3DJSONLD"
					};
							
				}
				for (var childkey in object[key]) {  // for each field
					if (typeof object[key][childkey] === 'object') {
						var child = CreateElement(key, x3djsonNS, containerField);
						ConvertToX3DOM(object[key][childkey], childkey, child, path);
						element.appendChild(child);
						element.appendChild(document.createTextNode("\n"));
					}
				}
			} else {
				var child = CreateElement(key, x3djsonNS, containerField);
				ConvertToX3DOM(object[key], key, child, path);
				element.appendChild(child);
				element.appendChild(document.createTextNode("\n"));
			}
		}
	}
}

function CommentStringToXML(str) {
	str = str.replace(/\\\\/g, '\\');
	return str;
}

function SFStringToXML(str) {
	var y = str;
	str = str.replace(/\\\\/g, '\\\\');
	str = str.replace(/\\\\\\\\/g, '\\\\');
	str = str.replace(/\\/g, '\\\\');
	str = str.replace(/(\\+)"/g, '\\"');
	if (y !== str) {
		// console.log("X3DJSON [] replacing", y, "with", str);
	}
	return str;
}

function JSONStringToXML(str) {
	var y = str;
	str = str.replace(/\\/g, '\\\\');
	str = str.replace(/\n/g, '\\n');
	if (y !== str) {
		// console.log("X3DJSON replacing", y, "with", str);
	}
	return str;
}

function ConvertToX3DOM(object, parentkey, element, path, containerField) {
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
				/*
				if (object[key] != null && typeof object[key].join === 'function') {
					localArray.push(object[key].join(" "));
				}
				*/
				ConvertToX3DOM(object[key], key, element, path);
			} else if (typeof object[key] === 'undefined') {
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
		} else if (typeof object[key] === 'undefined') {
		} else {
			console.error("Unknown type found in object "+typeof object[key]);
			console.error(object);
		}
	}
	if (isArray) {
		if (parentkey.substr(0,1) === '@') {
			if (arrayOfStrings) {
				arrayOfStrings = false;
				for (var str in localArray) {
					localArray[str] = SFStringToXML(localArray[str]);
				}
                                if (parentkey === '@url' || parentkey.indexOf("Url") === parentkey.length - 3) {
					// processURLs(localArray, path);
				}
				elementSetAttribute(element, parentkey.substr(1),'"'+localArray.join('" "')+'"');
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
	xmlstr = xmlstr.replace(/[\u0080-\uFFFF]/g, 
		function (v) {return '&#'+v.charCodeAt()+';';}
	);
	// xmlstr = xmlstr.replace(/(\\+)&quot;/g, '\\&quot;');
	do {
		var xmlstr2 = xmlstr;
		xmlstr = xmlstr2.replace(/(<!\[CDATA\[(.|\n)*)&lt;((.|\n)*\]\]>)/gi, "$1<$3");
	} while (xmlstr !== xmlstr2);
	do {
		xmlstr2 = xmlstr;
		xmlstr = xmlstr2.replace(/(<!\[CDATA\[(.|\n)*)&gt;((.|\n)*\]\]>)/gi, "$1>$3");
	} while (xmlstr !== xmlstr2);
	do {
		xmlstr2 = xmlstr;
		xmlstr = xmlstr2.replace(/(<!\[CDATA\[(.|\n)*)&amp;((.|\n)*\]\]>)/gi, "$1&$3");
	} while (xmlstr !== xmlstr2);
	return xmlstr;
}

function serializeDOM(json, element) {
	var version = json.X3D["@version"];
	var xml = '<?xml version="1.0" encoding="'+json.X3D["encoding"]+'"?>\n';
	xml += '<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D '+version+'//EN" "http://www.web3d.org/specifications/x3d-'+version+'.dtd">\n';
	if (typeof element === 'string') {
		xml += element;
	} else {
		xml += new XMLSerializer().serializeToString(element);
	}

	xml = fixXML(xml);
	return xml;
}


/*
 * Load X3D JSON into an element
 * json - the JSON to convert to XML and DOM
 * path - the path of the JSON file
 * xml - the output xml string array (optional)
 * NS - a namespace for cobweb (optional) -- stripped out
 * returns an element - the element to append or insert into the DOM
 */
function loadX3DJS(json, path, xml, NS, loadSchema, doValidate, callback) {
	console.log("Invoking client side loader");
	loadSchema(json, path, doValidate, function() {
		x3djsonNS = NS;
		var child = CreateElement('X3D', NS);
		ConvertToX3DOM(json, "", child, path);
		if (typeof xml !== 'undefined' && typeof xml.push === 'function') {
			xml.push(serializeDOM(json, child));
		}
		console.log("Returning with", child);
		callback(child);
	}, function(e) {
		console.error(e);
		callback(null);
	});
}

if (typeof module === 'object')  {
	module.exports = {
		loadX3DJS : loadX3DJS,
		Browser : Browser,
		ConvertToX3DOM : ConvertToX3DOM,
		setCDATACreateFunction : setCDATACreateFunction,
		loadURLs : loadURLs,
		setDocument : function(doc) {
			document = doc;
		}

	};
}
