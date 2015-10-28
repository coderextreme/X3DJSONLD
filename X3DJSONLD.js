"use strict";

// 'http://www.web3d.org/specifications/x3d-namespace'

// Load X3D JSON into web page

function ConvertChildren(object, indent, parentkey, element) {
	var key;
	for (key in object) {
		if (typeof object[key] === 'object') {
				ConvertToX3DOM(object[key], indent, key, element);
		}
	}
}

function ConvertToX3DOM(object, indent, parentkey, element) {
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
				ConvertToX3DOM(object[key], indent, key, element);
			} else {
				console.log("Unknown type found in array "+typeof object[key]);
			}
		} else if (typeof object[key] === 'object') {
			if (key.substr(0,1) === '@') {
				ConvertToX3DOM(object[key], indent, key, element);
			} else if (key.substr(0,1) === '-') {
				ConvertChildren(object[key], indent, key, element);
			} else {
				var createKey = key;
				var child = document.createElement(createKey);
				ConvertToX3DOM(object[key], indent, key, child);
				element.appendChild(child);
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
	if (isArray) {
		if (parentkey.substr(0,1) === '@') {
			if (arrayOfStrings) {
				arrayOfStrings = false;
                                if (parentkey === '@url') {
				       var url;
                                       for (url in localArray) {
/*
                                              if (localArray[url].indexOf("..") === 0) {
                                                       localArray[url] = '/'+localArray[url].substring(3);
					       } else if (localArray[url].indexOf("http://") < 0) {
                                                       localArray[url] = '/'+localArray[url];
                                               }
*/
					       // console.log(localArray[url]);
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

function loadX3DJS(selector, json) {
	var element = document.querySelector(selector);
	if (element === null) {
		console.log("selector found nothing in document", selector);
	} else {
		ConvertToX3DOM(json, "", "", element);
		x3dom.reload();
	}
}

function loadX3DJSON(selector, url) {
	$.getJSON(url, function(json) {
		loadX3DJS(selector, json);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}
