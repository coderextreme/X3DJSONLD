"use strict";

export function ThreeSerializer () {
};


ThreeSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		for (var cn in element.childNodes) {
			var node = element.childNodes[cn];
			if (node.nodeName === 'Scene') {
				var obj = printObject(node, fieldTypes);
				console.error(JSON.stringify(obj, null, 2));
				// dump after we find first scene
				return JSON.stringify(obj, null, 2);
			}
		}
	}
}

function printSubObject(attrType, type, values) {
	if (attrType.startsWith("MF")) {
		var newArray = [];
		for (var j = 0; j < values.length;) {
			var newObject = {};
			for (var letter in type) {
				newObject[type[letter]] = parseFloat(values[j++]);
			}
			newArray.push(newObject);
		}
		return newArray;

	} else {
		var newObject = {};
		var j = 0;
		for (var letter in type) {
			newObject[type[letter]] = parseFloat(values[j++]);
		}
		return newObject;
	}
}

function printSubArray(attrType, numpersub, values) {
	if (numpersub > 1 && attrType.startsWith("MF")) {
		var newArrays = [];
		for (var j = 0; j < values.length;) {
			var newArray = {};
			for (var i = 0; i < numpersub; i++) {
				if (attrType === "MFString") {
					newArray[i] = values[j++];
				} else {
					newArray[i] = parseFloat(values[j++]);
				}
			}
			newArrays.push(newArray);
		}
		return newArrays;
	} else {
		return values;
	}
}

function printObject(element, fieldTypes) {
	var obj = {};
	obj["string"] = element.nodeName;
	if (obj["string"] != "Scene") {
		obj["nodeType"] = element.nodeName.toLowerCase();
		obj["string"] = " "+obj["nodeType"];
	}
	var fieldAttrType = "";
	for (var a in element.attributes) {
		var attrs = element.attributes;
		try {
			parseInt(a);
			if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
				var attr = attrs[a].nodeName;
				if (attr == "type") {
					fieldAttrType = attrs[a].nodeValue;
				} else if (attr == "containerField") {
					obj["string"] = attrs[a].nodeValue.toLowerCase()+obj["string"].toLowerCase();
				}
			}
		} catch (e) {
			console.error(e);
		}
	}
	var attrType = "";
	for (var a in element.attributes) {
		var attrs = element.attributes;
		try {
			parseInt(a);
			if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
				var attr = attrs[a].nodeName;
				if (attr == "xmlns:xsd" || attr == "xsd:noNamespaceSchemaLocation") {
					continue;
				}
				if (attr !== 'containerField') {
					// look at object model
					var attrType = "SFString";
					if (typeof fieldTypes[element.nodeName] !== 'undefined') {
						attrType = fieldTypes[element.nodeName][attr];
					}

					var value = "";
					if (attrs[a].nodeValue === 'NULL') {
						value = null;
					} else if (attrType === "SFString") {
						value = attrs[a].nodeValue;
					} else if (attrType === "SFInt32") {
						value = attrs[a].nodeValue;
					} else if (attrType === "SFFloat") {
						value = attrs[a].nodeValue;
					} else if (attrType === "SFDouble") {
						value = attrs[a].nodeValue;
					} else if (attrType === "SFBool") {
						value = attrs[a].nodeValue;
					} else if (attrType === "MFString") {
						value = printSubArray(attrType, 1, attrs[a].nodeValue.split(/"[ ,]+"/));
					} else if (
						attrType === "MFInt32"||
						attrType === "MFImage"||
						attrType === "SFImage") {
						value = printSubArray(attrType, 1, attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "SFColor"||
						attrType === "MFColor") {
						value = printSubObject(attrType, "rgb", attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "SFColorRGBA"||
						attrType === "MFColorRGBA") {
						value = printSubObject(attrType, "rgba", attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "SFVec2d"||
						attrType === "MFVec2d"||
						attrType === "SFVec2f"||
						attrType === "MFVec2f") {
						value = printSubObject(attrType, "xy", attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "SFVec3d"||
						attrType === "MFVec3d"||
						attrType === "SFVec3f"||
						attrType === "MFVec3f") {
						value = printSubObject(attrType, "xyz", attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "SFVec4d"||
						attrType === "MFVec4d"||
						attrType === "SFVec4f"||
						attrType === "MFVec4f") {
						value = printSubObject(attrType, "xyzw", attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "SFRotation"||
						attrType === "MFRotation") {
						value = printSubObject(attrType, "xyzw", attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "SFMatrix3d"||
						attrType === "MFMatrix3d"||
						attrType === "SFMatrix3f"||
						attrType === "MFMatrix3f") {
						value = printSubArray(attrType, 9, attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "SFMatrix4d"||
						attrType === "MFMatrix4d"||
						attrType === "SFMatrix4f"||
						attrType === "MFMatrix4f") {
						value = printSubArray(attrType, 16, attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "MFFloat") {
						value = printSubArray(attrType, 1, attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "MFDouble") {
						value = printSubArray(attrType, 1, attrs[a].nodeValue.split(/[ ,]+/));
					} else if (attrType === "MFBool") {
						value = printSubArray(attrType, 1, attrs[a].nodeValue.split(/[ ,]+/));
					} else {
						value = attrs[a].nodeValue;
					}
					obj[attr] = value;
				}
			}
		} catch (e) {
			console.error(e);
		}
		attrType = "";
	}
	var array = [];
	for (var cn in element.childNodes) {
		var node = element.childNodes[cn];
		if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
			array.push(printObject(node, fieldTypes));
		} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 8) {
			array.push("/*"+node.nodeValue.replace(/"/g, '\\"')+"*/");
		} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 4) {
			array.push("<script>"+node.nodeValue.split("\r\n").map(function(x) {
				return x.replace(/\\"/g, '\\\\"').
					replace(/"/g, '\\"').
					replace(/\\n/g, "\\\\n");
			}).join('\\n\"+\n\"')+'</Script>');
		}
	}
	obj["children"] = array;
	return obj;
}
