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
			var ind = parseInt(p);
			var possibleArray = flattener(object[p]);
			if (Array.isArray(object) && Array.isArray(possibleArray)) {
				for (var q in possibleArray) {
					var ind = parseInt(p)+parseInt(offset)+parseInt(q);
					// console.log(ind, '=1', possibleArray[q]);
					newobject[ind] = possibleArray[q];
				}
				offset += parseInt(q);
			} else if (isArray) {
				var ind = parseInt(p)+parseInt(offset);
				// console.log(ind, '=2', possibleArray);
				newobject[ind] = possibleArray;
			} else {
				// console.log(p, '=3', possibleArray);
				newobject[p] = possibleArray;
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
