function flattener(object) {
	if (typeof object === "object") {
		var offset = 0;
		if (Array.isArray(object)) {
			var newobject = [];
			var isArray = true;
		} else {
			var newobject = {};
			var isArray = false;
		}
		for (var p in object) {
			var possibleArray = flattener(object[p]);
			if (isArray) {
				var ind = parseInt(p);
				if (Array.isArray(possibleArray)) {
					for (var q in possibleArray) {
						ind = parseInt(p)+parseInt(offset)+parseInt(q);
						// console.log(ind, '=1', possibleArray[q]);
						newobject[ind] = possibleArray[q];
					}
					offset += parseInt(q);
				} else {
					ind = parseInt(p)+parseInt(offset);
					// console.log(ind, '=2', possibleArray);
					newobject[ind] = possibleArray;
				}
			} else {
				// console.log(p, '=3', possibleArray);
				if (Array.isArray(possibleArray)) {
					if (p === '-geometry' || p === '-material' || p === '-appearance') {
						newobject[p] = possibleArray[0];
					} else {
						newobject[p] = possibleArray;
					}
				} else {
					newobject[p] = possibleArray;
				}
			}
		}
		return newobject;
	} else {
		return object;
	}
}

if (typeof module === 'object')  {
        module.exports.flattener = flattener;
}
// console.log(JSON.stringify(flattener(["0",["1", "2", ["3", "4"], "5"], "6"])));
// console.log(JSON.stringify(flattener({"0":7,"8":["1", "2", ["3", "4"], "5"], "6":9})));
