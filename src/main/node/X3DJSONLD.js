"use strict";

import xmldom from '@xmldom/xmldom';
if (typeof window === 'undefined') {
  var fs = await import('fs');
  var http = await import('http');
  var https = await import('https');
}
import DOMSerializer from './DOMSerializer.js';

if (typeof load !== 'function') {
	if (typeof xmldom !== 'undefined') {
		var domserializer = new xmldom.XMLSerializer();
		var DOMParser = xmldom.DOMParser;
	} else {
		var domserializer = new XMLSerializer();
		var domParser = new DOMParser();
	}
}
	

if (typeof console !== 'undefined') {
	if (typeof console.warning === 'undefined') {
		console.warning = console.warn;
	}
}

var X3DJSONLD = {
x3djsonNS : "",
Browser : {
	print : function(string) { if (typeof console !== 'undefined' && typeof string !== 'undefined') console.error(string); },
	println : function(string) { if (typeof console !== 'undefined' && typeof string !== 'undefined') console.error(string); },
	stringToArray : function(clazz, obj) {
		if (typeof obj === 'object') {
			return obj;
		} else {
			return JSON.parse('['+obj+']');
		}
	},
	appendTo : function(element, jsobj) {
		 if (element != null) {
			 return X3DJSONLD.ConvertToX3DOM(document, jsobj, "", element, 'foo.x3dj');
		 }
	},
	getDocument : function() {
		return document;
	}
},
/**
 * processURLs and make them more kosher for the X3DJSONLD user inteferface to
 * deal with.  Pass an array of URLs and a path for the main JSON file you are
 * loading.
 */
processURLs: function(localArray, path) {
	// console.error("Process URLs", path, localArray);
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
			/*
			var s = localArray[url].indexOf('/');
			*/
			var p = localArray[url].indexOf('#');
			var pe = path.lastIndexOf('/');
			var pc = path;
			if (pe >= 0) {
				pc = path.substring(0, pe);
			}
			/*
			if (s != 0 && p != 0) {
				if (localArray[url].indexOf(pc) != 0) {
					 localArray[url] = pc+'/'+localArray[url];
				}
				if (localArray[url].indexOf('/') === 0) {
					// no webroot absolute paths.  No /'s for X_ITE shaders
					localArray[url] = localArray[url].substring(1);
				}
			}
			*/
			while (localArray[url].startsWith("../")) {
				localArray[url] = localArray[url].substring(3);
				var pe = pc.lastIndexOf('/');
				if (pe >= 0) {
					pc = pc.substring(0, pe);
				} else {
					pc = "";
				}
			}
			if (p === 0) {
				localArray[url] = path+localArray[url];
			} else {
				localArray[url] = pc+"/"+localArray[url];
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
			localArray[url] = localArray[url].substring(0, x3d)+".x3dj" + hash;
		}
		*/
		/*
		var wrl = localArray[url].lastIndexOf(".wrl") ;
		if (wrl === localArray[url].length - 4) {
			localArray[url] = localArray[url].substring(0, wrl)+".x3dj" + hash;
		}
		var wrz = localArray[url].lastIndexOf(".wrz") ;
		if (wrz === localArray[url].length - 4) {
			localArray[url] = localArray[url].substring(0, wrz)+".x3dj" + hash;
		}
		*/
			
        }
	// console.error("Processed URLs", localArray.join(" "));
	return localArray;
},

/**
 * Use almost any method possible to load a set of URLs.  The loadpath is the
 * original URL the main JSON got laoded from, Urls is the se of urls, and
 * the loadedCallback returns the data and the URL it was loaded from.
 */
loadURLs : function(loadpath, urls, loadedCallback, protoexp, done, externProtoDeclare, obj) {
	if (typeof urls !== 'undefined') {
		// console.error("Preprocessed", urls)
		urls = X3DJSONLD.processURLs(urls, loadpath);
		// console.error("Postprocessed", urls)
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
						// console.error("Loading HTTP URL", url);
						if (typeof $ !== 'undefined' && typeof $.get === 'function') {
							$.get(url, function(data) {
								loadedCallback(data, url, protoexp, done, externProtoDeclare, obj);
							});
						} else if (typeof http === 'object') {
							http.get({ host: host, path: path}, function(res) {
								var data = '';
								res.on('data', function (d) {
									data += d;
								});
								res.on('end', function() {
									loadedCallback(data, url, protoexp, done, externProtoDeclare, obj);
								});
							});
					
						}
					} else if (protocol === "https") {
						// console.error("Loading HTTPS URL", url);
						if (typeof $ !== 'undefined' && typeof $.get === 'function') {
							$.get(url, function(data) {
								loadedCallback(data, url, protoexp, done, externProtoDeclare, obj);
							});
						} else if (typeof https === 'object') {
							https.get({ host: host, path: path}, function(res) {
								var data = '';
								res.on('data', function (d) {
									data += d;
								});
								res.on('end', function() {
									loadedCallback(data, url, protoexp, done, externProtoDeclare, obj);
								});
							});
					
						}
					} else if (typeof fs === 'object' && protocol.indexOf("http") !== 0) {
						// should be async, but out of memory
						// console.error("Loading FILE URL", url);
						var hash = url.indexOf("#");
						if (hash > 0) {
							url = url.substring(0, hash);
						}
						try {
							var data = fs.readFileSync(url);
							loadedCallback(data.toString(), url, protoexp, done, externProtoDeclare, obj);
						} catch (e) {
							var filename = url;
							if (filename.endsWith(".json") || filename.endsWith(".x3dj")) {
								filename = filename.substring(0, filename.lastIndexOf("."))+".x3d";
								// console.error("converting possible X3D to JSON", filename);
								if (typeof runAndSend === 'function') {
									runAndSend(['---silent', filename], function(jsobj) {
										data = JSON.stringify(jsobj);
										loadedCallback(data, filename, protoexp, done, externProtoDeclare, obj);
									});
								}
							}
						}
					} else if (typeof $ !== 'undefined' && typeof $.get === 'function') {
						// console.error("Loading Relative URL", url);
						$.get(url, function(data) {
							loadedCallback(data, url, protoexp, done, externProtoDeclare, obj);
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
},


// 'https://www.web3d.org/specifications/x3d-namespace'

// Load X3D JavaScript object into web page


/**
 * Yet another way to set an attribute on an element.  does not allow you to
 * set JSON schema or encoding.
 */
elementSetAttribute : function(element, key, value) {
	if (key === 'SON schema') {
		// JSON Schema
	} else if (key === 'ncoding') {
		// encoding, UTF-8, UTF-16 or UTF-32
	} else {
		if (typeof element.setAttribute === 'function') {
			element.setAttribute(key, value);
		}
	}
},

/**
 * converts children of object to DOM.
 */
ConvertChildren : function(xmlDoc, parentkey, object, element, path) {
	var key;

	for (key in object) {
		if (typeof object[key] === 'object') {
			if (isNaN(parseInt(key))) {
				X3DJSONLD.ConvertObject(xmlDoc, key, object, element, path, parentkey.substring(1));
			} else {
				X3DJSONLD.ConvertToX3DOM(xmlDoc, object[key], key, element, path, parentkey.substring(1));
			}
		}
	}
},

/**
 * a method to create and element with tagnam key to DOM in a namespace.  If
 * containerField is set, then the containerField is set in the elemetn.
 */
CreateElement : function(xmlDoc, key, x3djsonNS, containerField) {
	var child = null;
	if (typeof x3djsonNS === 'undefined') {
		child = xmlDoc.createElement(key);
	} else {
		child = xmlDoc.createElementNS(x3djsonNS, key);
		if (child === null || typeof child === 'undefined') {
			// console.error('Trouble creating element for', key);
			child = xmlDoc.createElement(key);
		}
	}
	if (typeof containerField !== 'undefined') { // && key.toLowerCase() !== containerField.toLowerCase()) {
		if (containerField !== 'children' && containerField !== 'geometry' && containerField !== 'coord') {
			X3DJSONLD.elementSetAttribute(child, 'containerField', containerField);
		}
	}
	return child;
},

/**
 * a way to create a CDATA function or script in HTML, by using a DOM parser.
 */
CDATACreateFunction : function(xmlDoc, element, str) {
	var y = str.trim().replace(/\\"/g, "\\\"")
		.replace(/&lt;/g, "<")
		.replace(/&gt;/g, ">")
		.replace(/&amp;/g, "&");
	do {
		str = y;
		y = str.replace(/'([^'\r\n]*)\n([^']*)'/g, "'$1\\n$2'");
		if (str !== y) {
			// console.error("CDATA Replacing",str,"with",y);
		}
	} while (y != str);
	var cdata = xmlDoc.createCDATASection(y);
	element .appendChild(cdata);
},

/**
 * set the CDATA create function.
 */
setCDATACreateFunction : function(fnc) {
	X3DJSONLD.CDATACreateFunction = fnc;
},

/**
 * convert the object at object[key] to DOM.
 */
ConvertObject : function(xmlDoc, key, object, element, path, containerField) {
	if (object !== null && typeof object[key] === 'object') {
		if (key.startsWith('@')) {
			X3DJSONLD.ConvertToX3DOM(xmlDoc, object[key], key, element, path);
		} else if (key.startsWith('-')) {
			X3DJSONLD.ConvertChildren(xmlDoc, key, object[key], element, path);
		} else if (key === '#comment') {
			for (var c in object[key]) {
				var child = xmlDoc.createComment(X3DJSONLD.CommentStringToXML(object[key][c]));
				element.appendChild(child);
			}
			/*
		} else if (key === 'Inline') {
			var localArray = object[key]["@url"];
			// console.error("Loading", localArray, "at", path, "into", key);
			X3DJSONLD.loadURLs(path, localArray, function(jsobj, path) {
				// console.error("Read", jsobj);
				try {
					// console.error("Loading", jsobj, "into inline");
					var child = xmlDoc.createDocumentFragment();
					X3DJSONLD.ConvertToX3DOM(xmlDoc, jsobj, "-children", child, path);
					element.appendChild(child);
					element.appendChild(xmlDoc.createTextNode("\n"));
				} catch(e) {
					// if JSON parse failed, it might be XML or WRL
					var child = X3DJSONLD.CreateElement(xmlDoc, key, X3DJSONLD.x3djsonNS, containerField);
					// console.error("Reloading", object[key]["@url"].join('","').replace(/\.json/g, '.x3d').split(/","/));
					X3DJSONLD.ConvertToX3DOM(xmlDoc, object[key], key, child, path);
					element.appendChild(child);
					element.appendChild(xmlDoc.createTextNode("\n"));
				}
			});
			*/
		} else if (key === '#sourceCode') {
			X3DJSONLD.CDATACreateFunction(xmlDoc, element, object[key].join("\r\n")+"\r\n");
		} else {
			if (key === 'connect' || key === 'fieldValue' || key === 'field' || key === 'meta' || key === 'component' || key === 'unit') {
				/*
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
				*/
				for (var childkey in object[key]) {  // for each field
					if (key !== 'meta' || childkey < object[key].length - 3) {
						if (typeof object[key][childkey] === 'object') {
							var child = X3DJSONLD.CreateElement(xmlDoc, key, X3DJSONLD.x3djsonNS, containerField);
							X3DJSONLD.ConvertToX3DOM(xmlDoc, object[key][childkey], childkey, child, path);
							element.appendChild(child);
							element.appendChild(xmlDoc.createTextNode("\n"));
						}
					}
				}
			} else {
				var child = X3DJSONLD.CreateElement(xmlDoc, key, X3DJSONLD.x3djsonNS, containerField);
				X3DJSONLD.ConvertToX3DOM(xmlDoc, object[key], key, child, path);
				element.appendChild(child);
				element.appendChild(xmlDoc.createTextNode("\n"));
			}
		}
	}
},

/**
 * convert a comment string in JavaScript to XML.  Pass the string
 */
CommentStringToXML : function(str) {
	str = str.replace(/\\\\/g, '\\');
	return str;
},

/**
 * convert an SFString to XML.
 */
SFStringToXML : function(str) {
	var y = str;
	/*
	str = (""+str).replace(/\\\\/g, '\\\\');
	str = str.replace(/\\\\\\\\/g, '\\\\');
	str = str.replace(/(\\+)"/g, '\\"');
	*/
	str = str.replace(/\\/g, '\\\\');
	str = str.replace(/"/g, '\\\"');
	if (y !== str) {
		// console.error("X3DJSONLD [] replacing", y, "with", str);
	}
	return str;
},

/**
 * convert a JSON String to XML.
 */
JSONStringToXML : function(str) {
	var y = str;
	str = str.replace(/\\/g, '\\\\');
	str = str.replace(/\n/g, '\\n');
	if (y !== str) {
		// console.error("X3DJSONLD replacing", y, "with", str);
	}
	return str;
},

/**
 * main routine for converting a JavaScript object to DOM.
 * object is the object to convert.
 * parentkey is the key of the object in the parent.
 * element is the parent element.
 * path is the path the JSON was loaded from.
 * containerField is a possible containerField.
 */
ConvertToX3DOM : function(xmlDoc, object, parentkey, element, path, containerField) {
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
				X3DJSONLD.ConvertToX3DOM(xmlDoc, object[key], key, element, path);
			} else if (typeof object[key] === 'undefined') {
			} else {
				console.error("Unknown type found in array "+typeof object[key]);
			}
		} else if (typeof object[key] === 'object') {
			// This is where the whole thing starts
			if (key === 'X3D') {
				X3DJSONLD.ConvertToX3DOM(xmlDoc, object[key], key, element, path);
			} else {
				if (key === "-skin" || key === "-skeleton" || key === "-viewpoints" || key === "-value" || key === "-segments") {
					let firstNode = object[key][0];
					if (key === "-value") {
						firstNode = object[key];
						// console.log(firstNode);
						for (var skv in firstNode) {
							for (var prop in firstNode[skv]) {
								firstNode[skv][prop]['@containerField'] = key.substring(1);
								// console.log(firstNode[skv]);
							}
						}
						X3DJSONLD.ConvertObject(xmlDoc, key, object, element, path, key.substring(1));
					} else {
						for (var skv in firstNode) {
							firstNode[skv]['@containerField'] = key.substring(1);
							X3DJSONLD.ConvertObject(xmlDoc, key, object, element, path, firstNode[skv]['@containerField']);
						}
					}
				} else if (key.indexOf("HAnim") === 0 && key !== "HAnimHumanoid" && typeof object[key]['@USE'] != 'undefined') {
					object[key]['@containerField'] = key.substring(5).toLowerCase()+"s";
					X3DJSONLD.ConvertObject(xmlDoc, key, object, element, path, object[key]['@containerField']);
				} else {
					X3DJSONLD.ConvertObject(xmlDoc, key, object, element, path);
				}
			}
		} else if (typeof object[key] === 'number') {
			X3DJSONLD.elementSetAttribute(element, key.substring(1),object[key]);
		} else if (typeof object[key] === 'string') {
			if (key.substring(1) === 'type' && parentkey === '@NavigationInfo') {
				X3DJSONLD.elementSetAttribute(element, key.substring(1), X3DJSONLD.NavigationInfoTypeToXML(object[key]));
			} else if (key !== '#comment') {
				// ordinary string attributes
				X3DJSONLD.elementSetAttribute(element, key.substring(1), X3DJSONLD.JSONStringToXML(object[key]));
			} else {
				var child = xmlDoc.createComment(X3DJSONLD.CommentStringToXML(object[key]));
				element.appendChild(child);
			}
		} else if (typeof object[key] === 'boolean') {
			X3DJSONLD.elementSetAttribute(element, key.substring(1),object[key]);
		} else if (typeof object[key] === 'undefined') {
		} else {
			console.error("Unknown type found in object "+typeof object[key]);
			console.error(object);
		}
	}
	if (isArray) {
		if (parentkey.startsWith('@')) {
			if (arrayOfStrings) {
				arrayOfStrings = false;
				for (var str in localArray) {
					if (typeof localArray[str] === 'string') {
						localArray[str] = X3DJSONLD.SFStringToXML(localArray[str]);
					}
				}
                                if (parentkey === '@url' || parentkey.indexOf("Url") === parentkey.length - 3) {
					// console.error("Load array  is",localArray);
					// console.error("Path is",path);
					X3DJSONLD.processURLs(localArray, path);
					// console.error("Processed Load array  is",localArray);
				}
				X3DJSONLD.elementSetAttribute(element, parentkey.substring(1),'"'+localArray.join('" "')+'"');
			} else {
				// if non string array
				X3DJSONLD.elementSetAttribute(element, parentkey.substring(1),localArray.join(" "));
			}
		}
		isArray = false;
	}
	return element;
},

/*
 * Load X3D JSON into an xml.
 * DOMImplementation - normally document.implementation
 * jsobj - the JavaScript object to convert to XML and DOM.
 * path - the path of the JSON file.
 *
 * returns child element, xml document, xml string.
 */
loadJsonIntoXml: function(DOMImplementation, jsobj, path) {
	var child;
	var xml;
	[ child, xml ]  = X3DJSONLD.loadJsonIntoDom(DOMImplementation, jsobj, path);
	if (!xml) {
		xml = X3DJSONLD.serializeDOM(jsobj, child, true);
	}
	return [ child, xml ];
},

/*
 * Load X3D JSON into an element.
 * DOMImplementation - normally document.implementation
 * jsobj - the JavaScript object to convert to XML and DOM.
 * path - the path of the JSON file.
 *
 * returns child element, xml document.
 */
loadJsonIntoDom: function(DOMImplementation, jsobj, path) {
	var xmlDoc = X3DJSONLD.prepareDocument(DOMImplementation, jsobj);
	var child = X3DJSONLD.CreateElement(xmlDoc, 'X3D', X3DJSONLD.x3djsonNS);
	child.setAttribute("xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');
	X3DJSONLD.ConvertToX3DOM(xmlDoc, jsobj, "", child, path);
	return [ child, null ]; // TODO null until we can refactor
},

prepareDocument: function(DOMImplementation, jsobj) {
	var version = jsobj.X3D["@version"];
       	var docType = DOMImplementation.createDocumentType("X3D", 'ISO//Web3D//DTD X3D '+version+'//EN" "https://www.web3d.org/specifications/x3d-'+version+'.dtd', null);
	var xmlDoc = DOMImplementation.createDocument(null, "X3D", docType);

	xmlDoc.insertBefore(xmlDoc.createProcessingInstruction('xml', 'version="1.0" encoding="'+jsobj.X3D["encoding"]+'"'), docType);
	return xmlDoc;
},

NavigationInfoTypeToXML : function(str) {
	let y = str;
	console.log("X3DJSONLD jsonstring replacing "+ y);
	// str = y.replace(/\\/g, "");
	if (y !== str) {
		console.log("with                           "+ str);
	} else {
		console.log("ok");
	}
	return str;
},

/**
 * fixXML
 * Fix XML after it has been serialized.
 */
fixXML : function(xmlstr) {
	// get rid of self-closing tags
	xmlstr = xmlstr.replace(/(<[ \t]*)([A-Za-z0-9]+)([^>]*)\/>/g, "$1$2$3></$2>\n");
	// strip out namespace
	xmlstr = xmlstr.replace(/xmlns="[^"]*"/g, "");

	// strip out schema
	xmlstr = xmlstr.replace(/xsd:noNamespaceSchemaLocation="[^"]*"/gi, "");


	// Fix CDATA sections
	xmlstr = xmlstr.replace(/&lt;!\[CDATA\[/g, "\n<![CDATA[");
	xmlstr = xmlstr.replace(/\]\]&gt;/g, "]]>\n");
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
},

/**
 * Serialize an element to XML and add an XML header.
 */
serializeDOM : function(json, element, appendDocType) {
	var version = "4.1";
	var encoding = "UTF-8";
	if (typeof json !== 'undefined') {
		version = json.X3D["@version"];
		encoding = json.X3D["encoding"];
	}
	var xml = '';
	/*
	if (appendDocType) {
		xml += '<?xml version="1.0" encoding="'+encoding+'"?>\n';
		xml += '<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D '+version+'//EN" "https://www.web3d.org/specifications/x3d-'+version+'.dtd">\n';
	}
	*/
	if (typeof element === 'string') {
		xml += element;
	} else if (typeof element !== 'undefined') {
		var domserial = new DOMSerializer();
		xml += domserial.serializeToString(json, element);
	}

	xml = X3DJSONLD.fixXML(xml);
	return xml;
},


/**
 * selectObjectFromJSObj() --  get an object in a node internally.
 * The node is the javascript object tree to get an object out of.
 * selectorField is a " > " separated list of properties in node.
 *
 */
selectObjectFromJSObj : function(node, selectorField) {
	selectorField = selectorField.substring(1);
	var skipDescendants = 0; // number of descendents to skip
	var selectedValue = node;
	var higherValue = selectedValue;
	var selector  = selectorField.split(/\//);
	var depth = (selector.length - skipDescendants);
	for (var index = 0; index < depth - 0; index++) {
		higherValue = selectedValue;
		selectedValue = selectedValue[selector[index]];
		if (typeof selectedValue === 'undefined') {
			// not sure how we got here, but let's bail
			console.error("Error: I think we went down too far: "+selectorField+" is unavailable.");
			return true;
		}
	}
	return selectedValue;
},

setProcessURLs : function(func) {
	X3DJSONLD.processURLs = func;
},
setDocument : function(doc) {
	document = doc;
}
}

var Browser = X3DJSONLD.Browser;

export default X3DJSONLD;
