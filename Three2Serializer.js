"use strict";

function ThreeSerializer () {
};


ThreeSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		let obj = parseObject(false, "Scene", fieldTypes, json["X3D"]["Scene"]);
		console.log(JSON.stringify(obj));
		// dump after we find first scene
		return JSON.stringify(obj, null, 2);
	},
	parseFromString : function(data) {
		let fieldTypes = require('./fieldTypes.js');
		return  parseObject(true, "Scene", fieldTypes, JSON.parse(data)["X3D"]["Scene"]);
	}
}

function parseSubObject(attrType, type, values) {
	if (attrType.startsWith("MF")) {
		let newArray = [];
		for (let j = 0; j < values.length;) {
			let newObject = {};
			for (let letter in type) {
				newObject[type[letter]] = parseFloat(values[j++]);
			}
			newArray.push(newObject);
		}
		return newArray;

	} else {
		let newObject = {};
		let j = 0;
		for (let letter in type) {
			newObject[type[letter]] = parseFloat(values[j++]);
		}
		return newObject;
	}
}

function parseSubArray(attrType, numpersub, values) {
	if (numpersub > 1 && attrType.startsWith("MF")) {
		let newArrays = [];
		for (let j = 0; j < values.length;) {
			let newArray = [];
			for (let i = 0; i < numpersub; i++) {
				if (attrType === "MFString") {
					newArray[i] = values[j++];
				} else {
					newArray[i] = parseFloat(values[j++]);
				}
			}
			newArrays.push(newArray);
		}
		return newArrays;
	} else if (numpersub === 0) { // index
		let newArrays = [];
		let newArray = [];
		let i = 0;
		for (let j = 0; j < values.length;) {
			if (values[j] == -1) {
				newArrays.push(newArray);
				newArray = [];
				j++;
				i = 0;
			} else {
				if (attrType === "MFString") {
					newArray[i++] = values[j++];
				} else {
					newArray[i++] = parseFloat(values[j++]);
				}
			}
		}
		return newArrays;
	} else {
		return values;
	}
}

function parseObject(setParent, name, fieldTypes, json, containerField) {
	let obj = {};
	let children = [];
	obj["string"] = name;
	if (name != "Scene") {
		obj["string"] = name.toLowerCase();
		obj["nodeType"] = name.toLowerCase();
		if (containerField !== obj["nodeType"]) {
			obj["string"] = containerField+" "+obj["nodeType"];
		}
	}
	for (let field in json) {
		if (field.startsWith("@")) {
			if (field == "@xmlns:xsd" || field == "@xsd:noNamespaceSchemaLocation") {
				continue;
			}
			let attr = field.substr(1);
			if (attr !== '@containerField') {
				// look at object model
				let attrType = "SFString";
				if (typeof fieldTypes[name] !== 'undefined') {
					attrType = fieldTypes[name][attr];
				}

				let value = "";
				if (json[field] === 'NULL') {
					value = null;
				} else if (attrType === "SFString") {
					value = json[field];
				} else if (attrType === "SFInt32") {
					value = json[field];
				} else if (attrType === "SFFloat") {
					value = json[field];
				} else if (attrType === "SFDouble") {
					value = json[field];
				} else if (attrType === "SFBool") {
					value = json[field];
				} else if (attrType === "MFString") {
					value = parseSubArray(attrType, 1, json[field]);
				} else if (attrType === "MFInt32") {
					if (attr.endsWith("Index")) {
						value = parseSubArray(attrType, 0, json[field]);
					} else {
						value = parseSubArray(attrType, 1, json[field]);
					}
				} else if (
					attrType === "MFImage"||
					attrType === "SFImage") {
					value = parseSubArray(attrType, 1, json[field]);
				} else if (
					attrType === "SFColor"||
					attrType === "MFColor") {
					value = parseSubObject(attrType, "rgb", json[field]);
				} else if (
					attrType === "SFColorRGBA"||
					attrType === "MFColorRGBA") {
					value = parseSubObject(attrType, "rgba", json[field]);
				} else if (
					attrType === "SFVec2d"||
					attrType === "MFVec2d"||
					attrType === "SFVec2f"||
					attrType === "MFVec2f") {
					value = parseSubObject(attrType, "xy", json[field]);
				} else if (
					attrType === "SFVec3d"||
					attrType === "MFVec3d"||
					attrType === "SFVec3f"||
					attrType === "MFVec3f") {
					value = parseSubObject(attrType, "xyz", json[field]);
				} else if (
					attrType === "SFVec4d"||
					attrType === "MFVec4d"||
					attrType === "SFVec4f"||
					attrType === "MFVec4f") {
					value = parseSubObject(attrType, "xyzw", json[field]);
				} else if (
					attrType === "SFRotation"||
					attrType === "MFRotation") {
					value = parseSubObject(attrType, "xyzw", json[field]);
				} else if (
					attrType === "SFMatrix3d"||
					attrType === "MFMatrix3d"||
					attrType === "SFMatrix3f"||
					attrType === "MFMatrix3f") {
					value = parseSubArray(attrType, 9, json[field]);
				} else if (
					attrType === "SFMatrix4d"||
					attrType === "MFMatrix4d"||
					attrType === "SFMatrix4f"||
					attrType === "MFMatrix4f") {
					value = parseSubArray(attrType, 16, json[field]);
				} else if (
					attrType === "MFFloat") {
					value = parseSubArray(attrType, 1, json[field]);
				} else if (
					attrType === "MFDouble") {
					value = parseSubArray(attrType, 1, json[field]);
				} else if (attrType === "MFBool") {
					value = parseSubArray(attrType, 1, json[field]);
				} else {
					value = json[field];
				}
				obj[attr] = value;

				// Now do something with the attribute
				if (obj.DEF) {
					obj.string += " DEF "+obj.DEF;
				}
				if (obj.USE) {
					obj.string += " USE "+obj.USE;
				}
			}
		} else if (field === "-children") {
			let node = json[field];
			children.push(parseObject(setParent, field, fieldTypes, node, ""));
			if (setParent) {
				children[children.length-1].parent = obj;
			}
		} else if (field.startsWith("-")) {
			// container field
			let node = json[field];
			let container = parseObject(setParent, field, fieldTypes, node, containerField === "appearance" ? containerField : field.substr(1));
			children.push(container);
			if (setParent) {
				children[children.length-1].parent = obj;
			}
		} else if (field === "#comment") {
			children.push("/*"+json[field]+"*/");
		} else if (field === "#sourceText") {
			children.push("<script>"+json[field].join("\r\n")+'</Script>');
		} else {
			// array
			let node = json[field];
			if (typeof node === 'object') {
				let tmpobj = obj;
				obj = parseObject(setParent, field, fieldTypes, node, containerField);
				if (setParent) {
					obj.parent = tmpobj;
				}
			}
		}
	}
	if (children.length > 0) {
		obj["children"] = children;
	}
	return obj;
}


if (typeof module === 'object')  {
	module.exports = ThreeSerializer;
}
