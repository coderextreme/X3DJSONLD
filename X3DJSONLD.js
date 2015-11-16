"use strict";

// 'http://www.web3d.org/specifications/x3d-namespace'

// Load X3D JSON into web page

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
		} else if (key.substr(0,1) === '#') {
			for (var comment in object[key]) {
				var child = document.createComment(object[key][comment]);
				element.appendChild(child);
			}
		} else {
			var createKey = key;
			var child = document.createElement(createKey);
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
			if (key !== 'ROUTE') {
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
                                if (parentkey === '@url') {
					var url;
					localArray = localArray[0].split(/" "/);
					for (url in localArray) {
						localArray[url].replace(/"/g, '');
						console.log('ORIGINAL', localArray[url]);
						if (localArray[url].indexOf("http://") < 0
						 && localArray[url].indexOf("https://") < 0) {
							var pe = path.lastIndexOf('/');
							var pc = path.substring(0, pe);
							localArray[url] = pc+'/'+localArray[url];
							console.log('NO HTTP', localArray[url]);
						} else {
							console.log('HTTP', localArray[url]);
						}
                                       }
                                }
				element.setAttribute(parentkey.substr(1),'"'+localArray.join('" "')+'"');
			} else {
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

function loadX3DJSON(selector, url) {
	$.getJSON(url, function(json) {
		loadX3DJS(selector, json, url);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}
