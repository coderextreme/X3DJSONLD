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
		var h = localArray[url].lastIndexOf("#") ;
		var hash = "";
		if (h >= 0) {
			hash = localArray[url].substring(h);
			localArray[url] = localArray[url].substring(0, h);
		}
		var x3d = localArray[url].lastIndexOf(".x3d") ;
		if (x3d === localArray[url].length - 4) {
			localArray[url] = localArray[url].substring(0, x3d)+".json";
		}
		var wrl = localArray[url].lastIndexOf(".wrl") ;
		if (wrl === localArray[url].length - 4) {
			localArray[url] = localArray[url].substring(0, wrl)+".json";
		}
			
        }
	// console.error("Processed URLs", localArray.join(" "));
	return localArray;
}

if (typeof require === 'function') {
	var fs = require("fs");
	var http = require("http");
	var https = require("https");
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
						// console.error("Loading HTTP URL", url);
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
						// console.error("Loading HTTPS URL", url);
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
						if (fs.statSync(url).isFile()) {
							// console.error("Loading FILE URL", url);
							var data = fs.readFileSync(url);
							loadedCallback(data.toString(), url);
						} else {
							console.error("File doesn't exist or is not available,", url);
						}
					} else if (typeof $ !== 'undefined' && typeof $.get === 'function') {
						// console.error("Loading Relative URL", url);
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
	if (containerFields.length > 1 && containerFields[0] !== 'children' && containerFields[0] !== 'shaders') {
		child.setAttribute('containerField', containerFields[0]);
	}
	return child;
}

function CDATACreateFunction(document, element, str) {
	// for script nodes
	/*
	var open = document.createTextNode('<![CDATA[');
	var child = document.createTextNode(str.replace(/\&lt;/g, '<').replace(/\&gt;/g, '>').replace(/\&amp;/g, '&'));
	var close = document.createTextNode(']]>');
	element.appendChild(open);
	element.appendChild(child);
	element.appendChild(close);
	*/
	/*
	var child = document.createCDATASection(str);
	element.appendChild(child);
	*/
	var domParser = new DOMParser();
	var cdataStr = '<script> <![CDATA[ ' + str + ' ]]> </script>'; // has to be wrapped into an element
	var scriptDoc = domParser .parseFromString (cdataStr, 'application/xml');
	var cdata = scriptDoc .children[0] .childNodes[1]; // space after script is childNode[0]
	element .appendChild(cdata);
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
					var child = CreateElement(key, x3djsonNS);
					// console.error("Reloading", object[key]["@url"].join('","').replace(/\.json/g, '.x3d').split(/","/));
					ConvertToX3DOM(object[key], key, child, path);
					element.appendChild(child);
					element.appendChild(document.createTextNode("\n"));
				}
			});
		} else if (key === '#sourceText') {
			CDATACreateFunction(document, element, object[key].join("\r\n")+"\r\n");
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


/*
 * Load X3D JSON into an element
 * json - the JSON to convert to XML and DOM
 * path - the path of the JSON file
 * xml - the output xml string array (optional)
 * python - the output python string array (optional)
 * NS - a namespace for cobweb (optional) -- stripped out
 * returns an element - the element to append or insert into the DOM
 */
function loadX3DJS(json, path, xml, python, NS) {
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
	if (typeof python !== 'undefined' && typeof python.push === 'function') {
		var pythonstr = PythonSerializer.serializeToString(child, 0);
		python.push(pythonstr);

	}
	return child;
}

var mapToMethod = {
	"X3D" : {
		"head": "setHead",
		"Scene" : "setScene"
	},
	"head" : {
		"meta": "addMeta",
		"component": "setComponent"
	},
	"Scene" : "addChildren",
	"LODObject" : {
		"Group": 'addChildren',
		"Shape": 'addChildren',
		"Transform": 'addChildren',
		"WorldInfo": 'addChildren'
	},
	"StaticGroup" : {
		"Shape": "addChildren",
	},
	"Switch" : {
		"Group": "addChildren",
		"Sound": "addChildren",
		"Shape": "addChildren",
		"Transform": "addChildren",
		"ColorInterpolator": "addChildren",
		"CoordinateInterpolator": "addChildren",
		"NormalInterpolator": "addChildren",
		"OrientationInterpolator": "addChildren",
		"PositionInterpolator": "addChildren",
		"ScalarInterpolator": "addChildren"
	},
	"Transform" : {
		"Anchor": "addChildren",
		"Billboard": "addChildren",
		"BooleanTrigger": "addChildren",
		"BooleanToggle": "addChildren",
		"BooleanFilter": "addChildren",
		"Collision": "addChildren",
		"ColorInterpolator": "addChildren",
		"CoordinateInterpolator": "addChildren",
		"CylinderSensor": "addChildren",
		"DirectionalLight": "addChildren",
		"Group": "addChildren",
		"IngeterTrigger": "addChildren",
		"NavigationInfo": "addChildren",
		"OrientationInterpolator": "addChildren",
		"PlaneSensor": "addChildren",
		"PointLight": "addChildren",
		"PositionInterpolator": "addChildren",
		"ProtoInstance": "addChildren",
		"ProximitySensor": "addChildren",
		"ROUTE": "addChildren",
		"ScalarInterpolator": "addChildren",
		"Script": "addChildren",
		"Shape": "addChildren",
		"Sound": "addChildren",
		"Switch": "addChildren",
		"SphereSensor": "addChildren",
		"SpotLight": "addChildren",
		"StringSensor": "addChildren",
		"TimeSensor": "addChildren",
		"TimeTrigger": "addChildren",
		"TouchSensor": "addChildren",
		"Transform": "addChildren",
		"Viewpoint": "addChildren",
		"VisibilitySensor": "addChildren",
		"IS": "setIS"
	},
	"Group" : "addChildren",
	"Sound" : {
		"AudioClip": "setSource",
		"MovieTexture": "setSource"
	},
	'LoadSensorObject' : {
		'AudioClip' : "addWatchList"
	},
	"Shape" : {
		"Sphere": "setGeometry",
		"Box": "setGeometry",
		"ElevationGrid": "setGeometry",
		"Text": "setGeometry",
		"Sphere": "setGeometry",
		"Cylinder": "setGeometry",
		"Extrusion": "setGeometry",
		"Cone": "setGeometry",
		"Appearance": "setAppearance",
		"IndexedFaceSet": "setGeometry",
		"IndexedLineSet": "setGeometry",
		"PointSet": "setGeometry",
		"Arc2D": "setGeometry",
		"ArcClose2D": "setGeometry",
		"Circle2D": "setGeometry",
		"Disk2D": "setGeometry",
		"Polyline2D": "setGeometry",
		"Polypoint2D": "setGeometry",
		"Rectangle2D": "setGeometry",
		"TriangleSet2D": "setGeometry",
		"ProtoInstance": "setGeometry"
	},
	"Appearance" : {
		"FillProperties": "addFillProperties",
		"ComposedCubeMapTexture": "setTexture",
		"ImageTexture": "setTexture",
		"PixelTexture": "setTexture",
		"MovieTexture": "setTexture",
		"Material": "setMaterial",
		"TwoSidedMaterial": "setMaterial",
		"TextureTransform": "setTextureTransform",
		"IS": "setIS"
	},
	"ElevationGrid" : {
		 "TextureCoordinate": "setTexCoord"
        },
	"IndexedQuadSetObject": {
		"Coordinate": "setCoord",
        },
	"QuadSetObject": {
		"Coordinate": "setCoord",
	},
	"IndexedFaceSet" : {
		"Coordinate": "setCoord",
		"TextureCoordinate": "setTexCoord",
		"Color": "setColor",
		"Normal": "setNormal"
	},
	"IndexedLineSet" : {
		"Coordinate": "setCoord",
		"Color": "setColor"
	},
	"PointSet" : {
		"Coordinate": "setCoord",
		"Color": "setColor"
	},
	"IndexedTriangleFanSetObject" : {
		"Coordinate": "setCoord"
	},
	"IndexedTriangleSetObject" : {
		"Coordinate": "setCoord"
	},
	"IndexedTriangleStripSetObject" : {
		"Coordinate": "setCoord"
	},
	"LineSetObject" : {
		"Coordinate": "setCoord"
	},
	"TriangleFanSetObject" : {
		"Coordinate": "setCoord"
	},
	"TriangleSetObject" : {
		"Coordinate": "setCoord"
	},
	"TriangleStripSetObject" : {
		"Coordinate": "setCoord"
	},
	"Anchor" : {
		"Transform": "addChildren",
		"Group": "addChildren",
		"Shape": "addChildren"
	},
	"Billboard" : {
		"Switch": "addChildren",
		"Transform": "addChildren",
		"ProtoInstance": "addChildren",
		"Shape": "addChildren"
	},
	"Collision" : {
		"TimeSensor": "addChildren",
		"Collision": "addChildren",
		"Transform": "addChildren",
		"PositionInterpolator": "addChildren",
		"Shape": "addChildren"
	},
	"ComposedShader" : {
		"field" : "addField",
		"Shaders" : "addParts"
	},
	"Shader" : {
		"field" : "addField"
	},
	"ProtoBody" : "setChildren",
	"ProtoDeclare" : {
		"ProtoBody" : "setProtoBody"
	},
	"ExternProtoDeclare" : {
		"field" : "addField"
	},
	"ProtoInterface" : {
		"field" : "addField"
	},
	"ProtoInstance" : {
		"fieldValue" : "addFieldValue"
	},
	"Script" : {
		"field" : "addField",
		"IS": "setIS"
	},
	"field" : "addChildren",
	"fieldValue" : "addChildren",
	"IS" : {
		"connect": "addConnect",
	}
};

var PythonSerializer = {};
PythonSerializer.serializeToString = function(element, n, grandparent, gn) {
	n = n || 0;
	var str = "";
	if (n === 0) {
		str += "from jnius import autoclass\n";
		str += "from X3Dautoclass import *\n";
		str += element.nodeName+n+" = "+element.nodeName+"Object()\n";
        }
	for (var cn in element.childNodes) {
		var node = element.childNodes[cn];
		if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
			str += node.nodeName+n+cn+" = "+node.nodeName+"Object()\n";
			str += PythonSerializer.serializeToString(node, ""+n+cn, element, ""+n);
			var addpre = ".set";
			if (cn > 0) {
				addpre = ".add";
			}

			var method = node.nodeName;
			if (typeof mapToMethod[element.nodeName] === 'object') {
		        	if (typeof mapToMethod[element.nodeName][node.nodeName] === 'string') {
					addpre = ".";
					method = mapToMethod[element.nodeName][node.nodeName];
				}
		        } else if (typeof mapToMethod[element.nodeName] === 'string') {
				addpre = ".";
				method = mapToMethod[element.nodeName];
			}
			if (element.nodeName == 'ComposedCubeMapTexture' && node.nodeName == 'ImageTexture') {
			} else if (element.nodeName == 'TextureBackground' && node.nodeName == 'ImageTexture') {
			} else {
				str += element.nodeName+n+addpre+method+"("+node.nodeName+n+cn+")\n";
			}
		}
	}
	node = element;
	for (var a in element.attributes) {
		var attrs = element.attributes;
		try {
			parseInt(a);
			if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
				var method = attrs[a].nodeName;
				if (method == "xmlns:xsd" || method == "xsd:noNamespaceSchemaLocation") {
					continue;
				}
				if (method == 'containerField') {
					method = attrs[a].nodeValue;
					method = "set"+method.charAt(0).toUpperCase() + method.slice(1);
					str += grandparent.nodeName+gn+"."+method+"(";
					str += element.nodeName+n;
				} else {
					method = "set"+method.charAt(0).toUpperCase() + method.slice(1);
					if (attrs[a].nodeValue == 'NULL' && method == "setValue") {
						method = "setChildren";
						str += element.nodeName+n+"."+method+"(";
						str += "None";
					} else if (typeof attrs[a].nodeValue === 'string') {
						str += element.nodeName+n+"."+method+"(";
						if (method == 'setVersion') {
							str += '"'+attrs[a].nodeValue+'"';
						} else if (method == 'setValue') {
							if (attrs[a].nodeValue.indexOf('"') >= 0) {
								str += "'"+attrs[a].nodeValue+"'";
							} else {
								str += '"'+attrs[a].nodeValue+'"';
							}
						} else if (attrs[a].nodeValue == 'true') {
							str += "True";
						} else if (attrs[a].nodeValue == 'false') {
							str += "False";
						} else if (attrs[a].nodeValue.indexOf('"') === 0) {
							str += "["+attrs[a].nodeValue.split('" "').join('","')+"]";
						} else if (attrs[a].nodeValue.indexOf('"') > 0) {
							str += "'"+attrs[a].nodeValue+"'";
						} else if (attrs[a].nodeValue.match(/^((\+|-)?([0-9]+\.?|\.[0-9]+|[0-9]+\.[0-9]+)((E|e)(\+|-)?[0-9]+)?)*$/)) {
							if (method.match(/^set[^F]*ndex$/)) {
								str += "["+attrs[a].nodeValue+"]";
							} else {
								str += attrs[a].nodeValue;
							}
						} else if (attrs[a].nodeValue.match(/^((\+|-)?([0-9]+\.?|\.[0-9]+|[0-9]+\.[0-9]+)((E|e)(\+|-)?[0-9]+)?| |,)*$/)) {
							str += "["+attrs[a].nodeValue.split(' ').join(',')+"]";
						} else {
							str += '"'+attrs[a].nodeValue+'"';
						}
					} else {
						str += element.nodeName+n+"."+method+"(";
						str += +attrs[a].nodeValue;
					}
				}
				str += ")\n";
			}
		} catch (e) {
		}
	}
	return str;
}

if (typeof module === 'object')  {
	module.exports = {
		loadX3DJS : loadX3DJS,
		Browser : Browser,
		ConvertToX3DOM : ConvertToX3DOM,
		fixXML : fixXML,
		getEncoding : getEncoding,
		setCDATACreateFunction : setCDATACreateFunction,
		loadURLs : loadURLs,
		PythonSerializer : PythonSerializer,
		setDocument : function(doc) {
			document = doc;
		}
	};
}
