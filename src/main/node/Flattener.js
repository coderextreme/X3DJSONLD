var SFNodes = {
"-appearance" : 1,
"-body" : 1,
"-child" : 1,
"-collidable" : 1,
"-collider" : 1,
"-color" : 1,
"-composableRenderStyle" : 1,
"-coord" : 1,
"-emitter" : 1,
"-fillProperties" : 1,
"-fogCoord" : 1,
"-fontStyle" : 1,
"-geometry" : 1,
"-geoOrigin" : 1,
"-layout" : 1,
"-lineProperties" : 1,
"-massDensityModel" : 1,
"-material" : 1,
"-metadata" : 1,
"-normal" : 1,
"-nurbsCurve" : 1,
"-nurbsCurve2D" : 1,
"-pickingGeometry" : 1,
"-renderStyle" : 1,
"-shape" : 1,
"-source" : 1,
"-texCoord" : 1,
"-texCoordNurbs" : 1,
"-texCoordRamp" : 1,
"-texture" : 1,
"-texture2D" : 1,
"-texture2DMulti" : 1,
"-texture3D" : 1,
"-textureProperties" : 1,
"-textureTransform" : 1,
"-transferFunction" : 1,
"-viewport" : 1
};

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
			if (SFNodes[p]) {
				// SFNodes should only have one child
				newobject[p] = possibleArray[0];
				// handle extra nodes brought in from proto
				if (possibleArray.length > 1) {
					parentArray[arrayLen] = { "Switch" : {
								"@whichChoice": -1,
								"-children" : [
									{"Group" : {
									"-children" : [
									]
									}
									}
								]
								}
								};
					for (var i = 1; i < possibleArray.length; i++) {
						parentArray[arrayLen]["Switch"]["-children"][0]["Group"]["-children"][i-1] = possibleArray[i];
					}
				}
			} else {
				newobject[p] = possibleArray;
			}
		} else {
			if (SFNodes[p]) {
				if (typeof possibleArray === 'object' && possibleArray["#comment"]) {
					if (newobject["-children"]) {
						newobject[p] = {};
						newobject["-children"].push(possibleArray);
					} else {
						newobject[p] = {};
						newobject["-children"] = [ possibleArray ];
					}
				} else {
					newobject[p] = possibleArray;
				}
			} else {
				newobject[p] = possibleArray;
			}
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
