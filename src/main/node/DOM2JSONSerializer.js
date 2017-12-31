"use strict";

var jsonlint = require("jsonlint");

function DOM2JSONSerializer() {
}


DOM2JSONSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		var obj = this.subSerializeToString(element, fieldTypes, 0);

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
		var st = node.nodeValue.
			replace(/\\/g, '\\\\').
			replace(/"/g, '\\"').
			replace(/\n/g, '\\n');
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
					}
					var attrmethod = method;
					var attrval = "";
					if (attrs[a].nodeValue === 'NULL') {
						attrval = "null";
					} else if (attrType === "SFString") {
						attrval = attrs[a].nodeValue.replace(/\\?"/g, "\\\"");
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
								replace(/([^\\]| )\\\\( |[^\\"])/g, "$1\\\\$2").
								replace(/([^\\]| )\\\\\\\\([^\\"]| )/g, "$1\\\\\\\\\\\\\\\\$2").
								replace(/\\\\\\\\"/g, '\\\\"').
								replace(/\\\\"/g, '\\\\\\"').
								replace(/\t/g, '\\t').
								replace(/&/g, "&amp;").
								split(/"[ ,]+"/), this.echo);
					} else if (
						attrType === "MFInt32"||
						attrType === "MFImage"||
						attrType === "SFImage"||
						attrType === "SFColor"||
						attrType === "MFColor"||
						attrType === "SFColorRGBA"||
						attrType === "MFColorRGBA") {
						attrval = this.descendSubArray(attrs[a].nodeValue.split(/[ ,]+/), parseInt);
					} else if (
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

	descendAttribute: function(element, at) {
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
		return value;
	},

	descendNode: function(node, fieldTypes, n, fields) {
		var fieldName = "";
		var subobject = {};
		if (node.nodeType === 1) {
			var attrName = this.descendAttribute(node, "containerField");
			subobject = this.subSerializeToString(node, fieldTypes, n);
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
					fields[fieldName] = [subobject];
				} else {
					if (typeof fields[fieldName] === 'undefined') {
						fields[fieldName] = [];
					}
					fields[fieldName].push(subobject);
				}
			}
		} else if (node.nodeType === 8) {
			fieldName = "#comment";
			subobject = this.descendComment(node);
			fields[fieldName] = subobject;
		} else if (node.nodeType === 4) {
			fieldName = "#sourceText";
			subobject = this.descendSourceText(node);
			fields[fieldName] = subobject;
		}
	},

	subSerializeToString : function(element, fieldTypes, n) {
		var fields = this.descendFields(element, fieldTypes);
		for (var cn in element.childNodes) {
			if (element.childNodes.hasOwnProperty(cn)) {
				var node = element.childNodes[cn];
				this.descendNode(node, fieldTypes, n+1, fields);

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
