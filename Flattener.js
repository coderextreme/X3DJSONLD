function flattenerArray(object, parentArray) {
	var newobject = [];
	var offset = 0;
	for (var p in object) {
		var possibleArray = flattener(object[p], newobject, object.length);
		if (Array.isArray(possibleArray)) {
			for (var q in possibleArray) {
				newobject[parseInt(p)+offset+parseInt(q)] = possibleArray[q];
			}
			offset += possibleArray.length-1;
		} else {
			newobject[parseInt(p)+offset] = possibleArray;
		}
	}
	return newobject;
}

function flattenerObject(object, parentArray, arrayLen) {
	var newobject = {};
	for (var p in object) {
		var possibleArray = flattener(object[p], parentArray, arrayLen);
		if (Array.isArray(possibleArray)) {
			if (p === '-geometry' || p === '-material' || p === '-appearance') {
				newobject[p] = possibleArray[0];
				// handle extra nodes brought in from proto
				for (var i = 1; i < possibleArray.length; i++) {
					parentArray[arrayLen+i-1] = possibleArray[i];
				}
			} else {
				newobject[p] = possibleArray;
			}
		} else {
			newobject[p] = possibleArray;
		}
	}
	return newobject;
}

function flattener(object, parentArray, arrayLen) {
	if (typeof object === "object") {
		if (Array.isArray(object)) {
			var newobject = flattenerArray(object, parentArray);
		} else {
			var newobject = flattenerObject(object, parentArray, arrayLen);
		}
		return newobject;
	} else {
		return object;
	}
}

if (typeof module === 'object')  {
        module.exports.flattener = flattener;
}
// console.error(JSON.stringify(flattener([["1"], "2"])));
// console.error(JSON.stringify(flattener(["0",["1", "2", ["3", "4"], "5"], "6"])));
// console.error(JSON.stringify(flattener({"0":7,"8":["1", "2", ["3", "4"], "5"], "6":9})));
