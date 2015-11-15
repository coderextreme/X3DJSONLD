"use strict";

// 'http://www.web3d.org/specifications/x3d-namespace'

// Load X3D JSON into web page

function ConvertChildren(object, index, parentkey, elements, script) {
	var key;
	for (key in object) {
		if (typeof object[key] === 'object') {
			ConvertToX3DOM(object[key], index, key, elements, script);
		}
	}
}

function ConvertToX3DOM(object, index, parentkey, elements, script) {
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
				ConvertToX3DOM(object[key], index, key, elements, script);
			} else {
				console.log("Unknown type found in array "+typeof object[key]);
			}
		} else if (typeof object[key] === 'object') {
			if (key.substr(0,1) === '@') {
				ConvertToX3DOM(object[key], index, key, elements, script);
			} else if (key.substr(0,1) === '-') {
				ConvertChildren(object[key], index, key, elements, script);
			} else if (key.substr(0,1) === '#') {
				for (var comment in object[key]) {
					var i = elements.length;
					script.push('elements['+i+'] = document.createComment("'+object[key][comment]+'");');
					elements[i] = document.createComment(object[key][comment]);
					script.push('elements['+index+'].appendChild(elements['+i+']);');
					elements[index].appendChild(elements[i]);
				}
			} else {
				var createKey = key;
				var i = elements.length;

				script.push('elements['+i+'] = document.createElement("'+createKey+'");');

				elements[i] = document.createElement(createKey);
				ConvertToX3DOM(object[key], i, key, elements, script);
				script.push('elements['+index+'].appendChild(elements['+i+']);');
				elements[index].appendChild(elements[i]);

			}
		} else {
			if (key === '#comment') {
			} else {
				script.push('elements['+index+'].setAttribute("'+key.substr(1)+'", "'+object[key]+'");');
				elements[index].setAttribute(key.substr(1),object[key]);
			}
		}
	}
	if (isArray) {
		if (parentkey.substr(0,1) === '@') {
			if (arrayOfStrings) {
				arrayOfStrings = false;
				script.push('elements['+index+'].setAttribute("'+parentkey.substr(1)+'", ["'+localArray.join('","')+'"]);');
			} else {
				script.push('elements['+index+'].setAttribute("'+parentkey.substr(1)+'", ['+localArray+']);');
			}
			elements[index].setAttribute(parentkey.substr(1),localArray);
		}
		isArray = false;
	}
}

function loadX3DJS(selector, json) {
	var script = [];
	var elements = [document.querySelector(selector)];
	script.push('var elements = [document.querySelector("'+selector+'")];');
	if (elements === [null]) {
		console.log("selector found nothing in document", selector);
	} else {
		ConvertToX3DOM(json, 0, "", elements, script);
		console.log(script.join("\n"));
		eval(script.join("\n"));
		x3dom.reload();
	}
}

function loadX3DJSON(selector, url) {
	$.getJSON(url, function(json) {
		loadX3DJS(selector, json);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}
