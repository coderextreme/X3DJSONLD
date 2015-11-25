"use strict";

// 'http://www.web3d.org/specifications/x3d-namespace'

// Load X3D JSON into web page

function ConvertFields(object, indent, parentkey, element, path) {
	var key;
	for (key in object) {  // for each field
		if (typeof object[key] === 'object') {
			var child = document.createElement(parentkey);
			ConvertToX3DOM(object[key], indent, key, child, path);
			element.appendChild(child);
		}
	}
}

function ConvertChildren(object, indent, parentkey, element, path) {
	var key;
	for (key in object) {
		if (typeof object[key] === 'object') {
			ConvertToX3DOM(object[key], indent, key, element, path);
		}
	}
}

function ConvertAttribute(key, object, indent, element, path) {
	if (object !== null && typeof object[key] === 'object') {
		if (key.substr(0,1) === '@') {
			ConvertToX3DOM(object[key], indent, key, element, path);
		} else if (key.substr(0,1) === '-') {
			ConvertChildren(object[key], indent, key, element, path);
		} else if (key === '#comment') {
			var child = document.createComment(object[key].join("\n"));
			element.appendChild(child);
		} else if (key === '#sourceText') {
			var child = document.createTextNode(object[key].join("\n"));
			element.appendChild(child);
		} else {
			var child = document.createElement(key);
			ConvertToX3DOM(object[key], indent, key, child, path);
			element.appendChild(child);
		}
	}
}

function ConvertToX3DOM(object, indent, parentkey, element, path) {
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
				ConvertToX3DOM(object[key], indent, key, element, path);
			} else {
				console.log("Unknown type found in array "+typeof object[key]);
			}
		} else if (typeof object[key] === 'object') {
			if (key === 'field') {
				ConvertFields(object[key], indent, key, element, path);
			} else if (key !== 'ROUTE') {
				ConvertAttribute(key, object, indent, element, path)
			}
		} else if (typeof object[key] === 'number') {
			element.setAttribute(key.substr(1),object[key]);
		} else if (typeof object[key] === 'string') {
			if (key !== '#comment') {
				element.setAttribute(key.substr(1),object[key]);
			}
		} else if (typeof object[key] === 'boolean') {
			element.setAttribute(key.substr(1),object[key]);
		} else {
			console.log("Unknown type found in object "+typeof object[key]);
		}
	}
	ConvertAttribute('ROUTE', object, indent, element, path)
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
						console.log('ORIGINAL', localArray[url]);
						if (localArray[url].indexOf("http://") === 0
						 || localArray[url].indexOf("https://") === 0) {
							console.log('HTTP', localArray[url]);
						} else if (localArray[url].indexOf("urn:web3d:media:textures/panoramas/") === 0) {
							var ls = localArray[url].lastIndexOf("/");
							if (ls > 0) {
								localArray[url] = 'examples/Basic/UniversalMediaPanoramas/'+localArray[url].substring(ls+1);
							}
							console.log('URN', localArray[url]);

						} else {
							var pe = path.lastIndexOf('/');
							var pc = path.substring(0, pe);
							localArray[url] = pc+'/'+localArray[url];
							console.log('NO HTTP', localArray[url]);
						}
/*
						if (localArray[url].lastIndexOf('.x3d') === localArray[url].length-4
						 || localArray[url].lastIndexOf('.wrl') === localArray[url].length-4) {
							localArray[url] = localArray[url].substring(0, localArray[url].length-4)+".json";
							var id = localArray[url].substring(localArray[url].lastIndexOf("/")+1, localArray[url].length-5);
							element.setAttribute("id", id);
							console.log("SUBSCENE", localArray[url]);
							loadSubscene('#'+id, localArray[url], path);
							break;
						}
*/
							
                                       }
					// if URL
					console.log("Loading URL",'"'+localArray.join('" "')+'"');
					element.setAttribute(parentkey.substr(1),'"'+localArray.join('" "')+'"');
                                } else {
					// if string array
					element.setAttribute(parentkey.substr(1),'"'+localArray.join('" "')+'"');
				}
			} else {
				// if non string array
				element.setAttribute(parentkey.substr(1),localArray.join(" "));
			}
		}
		isArray = false;
	}
	return element;
}

function loadX3DJS(selector, json, path) {
	var element = document.querySelector(selector);
	if (element === null) {
		console.log("selector found nothing in document", selector);
	} else {
		ConvertToX3DOM(json, "", "", element, path);
		x3dom.reload();
	}
}
/*
function loadSubscene(selector, url, path) {
	$.getJSON(url, function(json) {
		loadX3DJS(selector, json["X3D"]["Scene"], path);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}
*/
function loadX3DJSON(selector, url) {
	$.getJSON(url, function(json) {
		loadX3DJS(selector, json, url);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}
