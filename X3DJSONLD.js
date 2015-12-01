"use strict";

// 'http://www.web3d.org/specifications/x3d-namespace'

// Load X3D JSON into web page

function printElement(el, xml) {
        var child;
        var key;
        var attrs = "";
        if (typeof el === 'string') {
                xml.push(el);
                return;
        }
        if (el.key) {
                key = el.key;
        }
	for (var a in el.attributes) {
                attrs += " "+a+"='"+el.attributes[a]+"'";
        }
        if (el.children && typeof key !== 'undefined' && attrs !== '' ) {
                xml.push("<"+key+attrs+">");
        } else if (el.children && typeof key !== 'undefined' ) {
                xml.push("<"+key+">");
        } else if (typeof key !== 'undefined' && attrs !== '' ) {
                xml.push("<"+key+attrs+"/>");
        } else if (typeof key !== 'undefined' ) {
                xml.push("<"+key+"/>");
        }
        for (child in el) {
                if (child === "children") {
                        printElement(el[child], xml);
                } else {
                        if (isNaN(parseInt(child))) {
                        } else {
                                printElement(el[child], xml);
                        }
                }
        }
        if (el.children && typeof key !== 'undefined') {
                xml.push("</"+key+">");
        }
}

function elementSetAttribute(element, key, value, attributes) {
	element.setAttribute(key, value);
	if (typeof value === 'string') {
		attributes[key] = value.replace(/&/g, "&amp;").replace(/"/g, "&quot;").replace(/</g, '&lt;').replace(/>/g, '&gt;');
	} else {
		attributes[key] = value;
	}
}

function ConvertChildren(parentkey, object, element, path) {
	var key;
	var children = [];
	for (key in object) {
		if (typeof object[key] === 'object') {
			var el = ConvertToX3DOM(object[key], key, element, path);
			children.push(el);
		}
	}
	return { attributes: {},  children: children };
}

function ConvertObject(key, object, element, path) {
	var children = [];
	var attributes = {};
	if (object !== null && typeof object[key] === 'object') {
		if (key.substr(0,1) === '@') {
			var el = ConvertToX3DOM(object[key], key, element, path);
			for (var a in el.attributes) {
				attributes[a] = el.attributes[a];
			}
		} else if (key.substr(0,1) === '-') {
			var el = ConvertChildren(key, object[key], element, path);
			children.push.apply(children, el.children);
		} else if (key === '#comment') {
			// a comment within a script
			var child = document.createComment(object[key].join("\n"));
			children.push("<!--"+object[key].join("\n")+"-->");
			element.appendChild(child);
		} else if (key === '#sourceText') {
			var child = document.createTextNode(object[key].join("\n"));
			children.push(object[key].join("\n"));
			element.appendChild(child);
		} else {
			if (key === 'ROUTE' || key === 'field' || key === 'meta') {
				for (var childkey in object[key]) {  // for each field
					if (typeof object[key][childkey] === 'object') {
						var child = document.createElement(key);
						var el = ConvertToX3DOM(object[key][childkey], childkey, child, path);
						el.key = key;
						children.push(el);
						element.appendChild(child);
					}
				}
			} else {
				var child = document.createElement(key);
				var el = ConvertToX3DOM(object[key], key, child, path);
				el.key = key;
				children.push(el);
				element.appendChild(child);
			}
		}
	}
	return { attributes: attributes, children: children };
}

function ConvertToX3DOM(object, parentkey, element, path) {
	var key;
	var localArray = [];
	var isArray = false;
	var arrayOfStrings = false;
	var attributes = {};
	var children = [];
	var foundRoute = false;
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
				children.push(ConvertToX3DOM(object[key], key, element, path));
			} else {
				console.log("Unknown type found in array "+typeof object[key]);
			}
		} else if (typeof object[key] === 'object') {
			if (key !== "ROUTE") {
				var el = ConvertObject(key, object, element, path);
				for (var a in el.attributes) {
					attributes[a] = el.attributes[a];
				}
				children.push(el);
			} else {
				foundRoute = true;
			}
		} else if (typeof object[key] === 'number') {
			elementSetAttribute(element, key.substr(1),object[key], attributes);
		} else if (typeof object[key] === 'string') {
			if (key !== '#comment') {
				elementSetAttribute(element, key.substr(1),object[key], attributes);
			} else {
				var child = document.createComment(object[key]);
				children.push("<!--"+object[key]+"-->");
				element.appendChild(child);
			}
		} else if (typeof object[key] === 'boolean') {
			elementSetAttribute(element, key.substr(1),object[key], attributes);
		} else {
			console.log("Unknown type found in object "+typeof object[key]);
		}
	}
	// put ROUTEs last
	if (foundRoute) {
		var el = ConvertObject("ROUTE", object, element, path);
		for (var a in el.attributes) {
			attributes[a] = el.attributes[a];
		}
		children.push(el);
	} else {
		foundRoute = false;
	}
	if (isArray) {
		if (parentkey.substr(0,1) === '@') {
			if (arrayOfStrings) {
				arrayOfStrings = false;
                                if (parentkey === '@url' || parentkey.indexOf("Url") === parentkey.length - 3) {
					var url;
					// No longer need to split
					// localArray = localArray[0].split(/" "/);
					for (url in localArray) {
						// localArray[url].replace(/"/g, '');
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
						}
							
                                       }
					// if URL
					console.log("Loading URL",'"'+localArray.join('" "')+'"');
					elementSetAttribute(element, parentkey.substr(1),'"'+localArray.join('" "')+'"', attributes);
                                } else {
					// if string array
					elementSetAttribute(element, parentkey.substr(1),'"'+localArray.join('" "')+'"', attributes);
				}
			} else {
				// if non string array
				elementSetAttribute(element, parentkey.substr(1),localArray.join(" "), attributes);
			}
		}
		isArray = false;
	}
	return { attributes: attributes, children: children };
}

function loadX3DJS(selector, json, path, xml) {
	var element = document.querySelector(selector);
	if (element === null) {
		console.log("selector found nothing in document", selector);
	} else {
		var el = ConvertToX3DOM(json, "", element, path);
		xml = xml || [];
		xml.push('<?xml version="1.0" encoding="UTF-8"?>');
		xml.push('<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 3.3//EN" "http://www.web3d.org/specifications/x3d-3.3.dtd">');
/*
		console.log(el);
		console.log(el.children[0]);
		console.log(el.children[0].children[0]);
		console.log(el.children[0].children[0].attributes);
*/
 		// for Cobweb
		el.children[0].children[0].attributes["id"] = "x3dele";
		el.children[0].children[0].attributes["xmlns:xsd"] = 'http://www.w3.org/2001/XMLSchema-instance';
		printElement(el, xml);
		if (typeof x3dom !== 'undefined') {
			x3dom.reload();
		}
	}
}
