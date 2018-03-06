"use strict";

var jsonlint = require("jsonlint");

function DOM2JSONSerializer() {
}


DOM2JSONSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		var obj = this.subSerializeToString(element, fieldTypes, 0, mapToMethod);
		obj['X3D']['encoding'] = 'UTF-8';
		obj['X3D']['JSON schema'] = 'http://www.web3d.org/specifications/x3d-3.3-JSONSchema.json';
		if (typeof obj['X3D']['head'] !== 'undefined') {
			var date = new Date();
			var month = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" ][date.getMonth()];
			if (typeof obj['X3D']['head']['meta'] === 'undefined') {
				obj['X3D']['head']['meta'] === [];
			}
			obj['X3D']['head']['meta'].push({ "@name":"translated", "@content":date.getDate()+" "+month+" "+date.getFullYear()});
			obj['X3D']['head']['meta'].push({ "@name":"generator", "@content":"DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js" });
			obj['X3D']['head']['meta'].push( { "@name":"reference", "@content":"X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding" });
		}
		delete obj['X3D']['@xmlns:xsd'];


		try {
			var st = JSON.stringify(obj, null, 2);
		} catch (e) {
			console.log(st, obj, clazz, e);

		}
		return st;
	},

	parseBool: function(value) {
		if (value === "False") {
			return false;
		} else {
			return true;
		}
	},

	echo: function(value) {
		return value;
	},

	descendSubArray: function (values, convert) {
		for (var v in values) {
			values[v] = convert(values[v]);
		}
		return values;
	},


	descendComment: function (node) {
		var st = node.nodeValue;
			/*
			replace(/\\/g, '\\\\').
			replace(/"/g, '\\"').
			replace(/\n/g, '\\n');
			*/
		return st;
	},

	descendSourceText: function (node) {
		var st =  node.nodeValue.split("\r\n").map(
			function(x) { return x.
					        replace(/\\/g, '\\\\').
						replace(/"/g, '\\"').
						replace(/\t/g, '\t');
			});
		return st;
	},


	descendFields: function(element, fieldTypes) {
		var fields = {};
		var attrType = "";
		var fieldAttrType = this.descendAttribute(element, "type");
		for (var a in element.attributes) {
			var attrs = element.attributes;
			try {
				parseInt(a);
				if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
					var attr = attrs[a].nodeName;
					var method = attr;
					// look at object model
					var attrType = "SFString";
					try {
						attrType = fieldTypes[element.nodeName][attr];
					} catch (e) {
						console.error("Missing", attr, "in fieldTypes.js element", element.nodeName, " = ", fieldTypes[element.nodeName], "setting to SFString");
					}

					if (attrs[a].nodeValue === 'NULL' &&
					   (fieldAttrType === "SFNode"  ||
					    fieldAttrType === "MFNode")) {
						method = "-children";
					} else if (fieldAttrType !== "" && attr === "value") {
						attrType = fieldAttrType;
					}
					var attrmethod = method;
					if (attrmethod === 'containerField') {
						continue;
					}
					var attrval = "";
					if (attrs[a].nodeValue === 'NULL') {
						attrval = "null";
					} else if (attrType === "SFString") {
						attrval = attrs[a].nodeValue; // .replace(/\\?"/g, "\\\"");
					} else if (attrType === "SFInt32") {
						attrval = parseInt(attrs[a].nodeValue);
					} else if (attrType === "SFFloat") {
						attrval = parseFloat(attrs[a].nodeValue);
					} else if (attrType === "SFDouble" ||
						attrType === "SFTime") {
						attrval = parseFloat(attrs[a].nodeValue);
					} else if (attrType === "SFBool") {
						attrval = this.parseBool(attrs[a].nodeValue);
					} else if (attrType === "MFString") {
						attrval = this.descendSubArray(
							attrs[a].nodeValue.
								substr(1, attrs[a].nodeValue.length-2).
							/*
								replace(/([^\\]| )\\\\( |[^\\"])/g, "$1\\\\$2").
								replace(/([^\\]| )\\\\\\\\([^\\"]| )/g, "$1\\\\\\\\\\\\\\\\$2").
								replace(/\\\\\\\\"/g, '\\\\"').
								replace(/\\\\"/g, '\\\\\\"').
								replace(/\t/g, '\\t').
								replace(/&/g, "&amp;").
								*/
								split(/"[ ,]+"/), this.echo);
					} else if (
						attrType === "MFInt32"||
						attrType === "MFImage"||
						attrType === "SFImage"||
						attrType === "SFColorRGBA"||
						attrType === "MFColorRGBA") {
						attrval = this.descendSubArray(attrs[a].nodeValue.split(/[ ,]+/), parseInt);
					} else if (
						attrType === "SFColor"||
						attrType === "MFColor"||
						attrType === "SFVec2f"||
						attrType === "SFVec3f"||
						attrType === "SFVec4f"||
						attrType === "MFVec2f"||
						attrType === "MFVec3f"||
						attrType === "MFVec4f"||
						attrType === "SFMatrix3f"||
						attrType === "SFMatrix4f"||
						attrType === "MFMatrix3f"||
						attrType === "MFMatrix4f"||
						attrType === "SFRotation"||
						attrType === "MFRotation"||
						attrType === "MFFloat"||
						attrType === "SFVec2d"||
						attrType === "SFVec3d"||
						attrType === "SFVec4d"||
						attrType === "MFVec2d"||
						attrType === "MFVec3d"||
						attrType === "MFVec4d"||
						attrType === "SFMatrix3d"||
						attrType === "SFMatrix4d"||
						attrType === "MFMatrix3d"||
						attrType === "MFMatrix4d"||
						attrType === "MFDouble") {
						attrval = this.descendSubArray(attrs[a].nodeValue.split(/[ ,]+/), parseFloat);
					} else if (
						attrType === "MFBool") {
						attrval = this.descendSubArray(attrs[a].nodeValue.split(/[ ,]+/), this.parseBool);
					} else {
						attrval = attrs[a].nodeValue.replace(/\\?"/g, "\\\"");
					}
					fields["@"+attrmethod] = attrval;
				}
			} catch (e) {
				console.error(e);
			}
			attrType = "";
		}
		return fields;
	},

	descendAttribute: function(element, at, parent, mapToMethod) {
		var value = "";
		if (at === "containerField") {
			value = "children";
		}
		for (var a in element.attributes) {
			var attrs = element.attributes;
			try {
				parseInt(a);
				if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
					var attr = attrs[a].nodeName;
					if (attr === at) {
						value = attrs[a].nodeValue;
					}
				}
			} catch (e) {
				console.error(e);
			}
		}
		if (typeof parent !== 'undefined' && typeof mapToMethod !== 'undefined' && (value === "" || value === "children")) {
			if (typeof mapToMethod[parent.nodeName][element.nodeName] !== 'undefined') {
				value = mapToMethod[parent.nodeName][element.nodeName].substr(3).toLowerCase();
			}
		}
		return value;
	},

	descendNode: function(node, fieldTypes, n, fields, element, mapToMethod) {
		var fieldName = "";
		var subobject = {};
		if (node.nodeType === 1) {
			var attrName = this.descendAttribute(node, "containerField", element, mapToMethod);
			subobject = this.subSerializeToString(node, fieldTypes, n, mapToMethod);
			if (node.nodeName === "meta" ||
				node.nodeName === "unit" ||
				node.nodeName === "component" ||
				node.nodeName === "field" ||
				node.nodeName === "fieldValue" ||
				node.nodeName === "connect" ||
				node.nodeName === "ROUTE" ||
				node.nodeName === "head" ||
				node.nodeName === "Scene") {

				fieldName = node.nodeName;
				if (node.nodeName === "head" ||
					node.nodeName === "Scene") {
					fields[fieldName] = subobject;
				} else {

					if (typeof fields[fieldName] === 'undefined') {
						fields[fieldName] = [];
					}
					fields[fieldName].push(subobject);
				}
			} else {
				fieldName = '-'+attrName;
				var attrType = fieldTypes[node.nodeName][attrName];
				if (attrType === "SFNode") {
					fields[fieldName] = subobject;
				} else {
					if (attrName === 'children') {
						if (typeof fields[fieldName] === 'undefined') {
							fields[fieldName] = []
						}
						fields[fieldName].push(subobject);
					} else if (typeof fields[fieldName] === 'undefined') {
						fields[fieldName] = subobject;
					} else if (Array.isArray(fields[fieldName])) {
						fields[fieldName].push(subobject);
					} else {
						// copy object into new array
						let temp = fields[fieldName];
						fields[fieldName] = [temp]
						fields[fieldName].push(subobject);
					}
				}
			}
		} else if (node.nodeType === 8) {
			var attrName = this.descendAttribute(node, "containerField", element, mapToMethod);
			subobject = this.descendComment(node);
			fieldName = '-'+attrName;
			if (typeof fields[fieldName] === 'undefined') {
				fields[fieldName] = []
			}
			fields[fieldName].push({"#comment": subobject});
		} else if (node.nodeType === 4) {
			fieldName = "#sourceText";
			subobject = this.descendSourceText(node);
			fields[fieldName] = subobject;
		}
	},

	subSerializeToString : function(element, fieldTypes, n, mapToMethod) {
		var fields = this.descendFields(element, fieldTypes);
		for (var cn in element.childNodes) {
			if (element.childNodes.hasOwnProperty(cn)) {
				var node = element.childNodes[cn];
				this.descendNode(node, fieldTypes, n+1, fields, element, mapToMethod);

			}
		}
		    
		var object = {};
		if (element.nodeName === "meta" ||
			element.nodeName === "unit" ||
			element.nodeName === "component" ||
			element.nodeName === "field" ||
			element.nodeName === "fieldValue" ||
			element.nodeName === "connect" ||
			element.nodeName === "ROUTE") {
			object = fields;
		} else if (element.nodeName == "Scene" ||
			element.nodeName == "head") {
			object = fields;
		} else {
			object[element.nodeName] =  fields;
		}
    		return object;
	}
}


if (typeof module === 'object')  {
	module.exports = DOM2JSONSerializer;
}
