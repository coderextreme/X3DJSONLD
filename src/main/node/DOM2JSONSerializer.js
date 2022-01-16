"use strict";

// var jsonlint = require("jsonlint");

function DOM2JSONSerializer() {
	var fieldTypeMapping = {};
	var DEFMapping = {};
	try {
		this.fieldTypeMapping = {};
		this.DEFMapping = {};
	} catch (e) {
		console.error("DOM2JSONSerializer does not have a this in constructor");
	}
}


DOM2JSONSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		var obj = this.subSerializeToString(element, fieldTypes, 0, mapToMethod);
		if (typeof obj['X3D'] === 'undefined') {
			obj['X3D'] = {};
		}
		obj['X3D']['encoding'] = 'UTF-8';
		obj['X3D']['JSON schema'] = 'https://www.web3d.org/specifications/x3d-4.0-JSONSchema.json';
		if (typeof obj['X3D']['head'] !== 'undefined') {
			var date = new Date();
			var month = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" ][date.getMonth()];
			if (typeof obj['X3D']['head']['meta'] === 'undefined') {
				obj['X3D']['head']['meta'] === [];
			}
			obj['X3D']['head']['meta'].push({ "@name":"translated", "@content":date.getDate()+" "+month+" "+date.getFullYear()});
 			obj['X3D']['head']['meta'].push({ "@name":"generator", "@content":"DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js" });
			//  fake X3dToJson.xslt
  			// obj['X3D']['head']['meta'].push({ "@name":"generator", "@content":"X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html" });
			obj['X3D']['head']['meta'].push( { "@name":"reference", "@content":"X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding" });
		}
		delete obj['X3D']['@xmlns:xsd'];


		try {
			var st = JSON.stringify(obj, null, 2);
		} catch (e) {
			// console.error(st, obj, clazz, e);

		}
		return st;
	},

	parseBool: function(value) {
		if (value === "False") {
			return false;
		} else if (value === "false") {
			return false;
		} else if (value === false) {
			return false;
		} else if (value === "FALSE") {
			return false;
		} else if (value === "True") {
			return true;
		} else if (value === "true") {
			return true;
		} else if (value === true) {
			return true;
		} else if (value === "TRUE") {
			return true;
		} else {
			return "UNKNOWN BOOLEAN "+value+", Fix parseBool in DOM2JSONSerializer.js";
		}
	},

	echo: function(value) {
		return value;
	},

	descendSubArray: function (values, convert) {
		if (values[0] !== '' && values[0] !== null) {
			for (var v in values) {
				values[v] = convert(values[v]);
			}
		} else {
			values = [];
		}
		return values;
	},


	descendComment: function (node) {
		var st =  node.nodeValue.split(/\r?\n/).map(
			function(x) { return x;
				/*
				replace(/\\n/g, "\n");
				replace(/\\/g, '\\\\').
				replace(/"/g, '\\"').
				replace(/\n/g, '\\n');
				*/
			});
		return st;
	},

	descendSourceText: function (node) {
		var st =  node.nodeValue.split(/\r?\n/).map(
			function(x) { return x.
				replace(/\t/g, '\t').
				replace(/\\n/g, "\n");
				// replace(/.*/g, '"$1"');
			});
		return st;
	},


	descendFields: function(element, fieldTypes) {
		var fields = {};
		var attrType = "";
		var fieldAttrType = this.descendAttribute(element, "type");
		// console.error("field attr type", fieldAttrType);
		if (element !== null && typeof element !== 'undefined') {
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
							if (typeof element.nodeName !== 'undefined' && element.nodeName !== 'undefined') {
								attrType = fieldTypes[element.nodeName][attr];
							}
						} catch (e) {
							// console.log(e);
							console.error("Missing", attr, "in fieldTypes.js element", element.nodeName); // , " = ", fieldTypes[element.nodeName], "setting to SFString");
						}

						if (attrs[a].nodeValue === 'NULL' &&
						   (fieldAttrType === "SFNode"  ||
						    fieldAttrType === "MFNode")) {
							method = "-children";
						} else if (fieldAttrType !== "" && attr === "value") {
							attrType = fieldAttrType;
						} else if (attr === "value") {
							// coercions, not checking type
							if (attrs[a].nodeValue[0] === '"' && attrs[a].nodeValue[attrs[a].nodeValue.length-1] === '"') {
								attrType = "MFString";
							}
						}
						var attrmethod = method;
						if (attrmethod === 'containerField') {
							continue;
						}
						var attrval = "";
						if (attrs[a].nodeValue === 'NULL') {
							attrval = "null";
						} else if (attrType === "SFString") {
							attrval = attrs[a].nodeValue.
								replace(/\\n/g, "\n").
								replace(/\\\\/g, "\\");
							if (attrs[a].nodeValue !== attrval) {
								// console.error("Replacing", attrs[a].nodeValue, attrval);
							}
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
									replace(/\\"/g, '"').
									replace(/\\\\/g, "\\").
								/*
									replace(/([^\\]| )\\\\( |[^\\"])/g, "$1\\\\$2").
									replace(/([^\\]| )\\\\\\\\([^\\"]| )/g, "$1\\\\\\\\\\\\\\\\$2").
									replace(/\\\\\\\\"/g, '\\\\"').
									replace(/\\\\"/g, '\\\\\\"').
									replace(/\t/g, '\\t').
									replace(/&/g, "&amp;").
									*/
									split(/"[\n\r\t ,]+"/), this.echo);
						} else if (
							attrType === "MFInt32"||
							attrType === "MFImage"||
							attrType === "SFImage") {
							attrval = this.descendSubArray(attrs[a].nodeValue.trim().split(/[\n\r\t ,]+/), parseInt);
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
							attrType === "SFColorRGBA"||
							attrType === "MFColorRGBA"||
							attrType === "MFDouble") {
							attrval = this.descendSubArray(attrs[a].nodeValue.trim().split(/[\n\r\t ,]+/), parseFloat);
						} else if (
							attrType === "MFBool") {
							attrval = this.descendSubArray(attrs[a].nodeValue.trim().split(/[\n\r\t ,]+/), this.parseBool);
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
		}
		return fields;
	},

	descendAttribute: function(element, at, parent, mapToMethod) {
		var value = "";
		if (at === "containerField") {
			value = "children";
		}
		if (element !== null && typeof element !== 'undefined') {
			for (var a in element.attributes) {
				var attrs = element.attributes;
				try {
					parseInt(a);
					if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
						var attr = attrs[a].nodeName;
						if (attr === at) {
							value = attrs[a].nodeValue;
						}
						if (attr === 'name') {
							var fieldName = attrs[a].nodeValue;
						}
					}
				} catch (e) {
					console.error(e);
				}
			}
			// find the value of to Proto field's type
			if (element.parentNode) {
				var parentName = this.descendAttribute(element.parentNode, "name");
				// console.error("parent", parentName, "DEF", def, "fieldName", fieldName, element.parentNode);
				var def = this.descendAttribute(element.parentNode, "DEF");
				if (element.nodeName === "field" && at === 'type') {
					if (element.parentNode.nodeName === "ExternProtoDeclare" ||
					    element.parentNode.parentNode.nodeName === "ProtoDeclare") {
						if (!parentName) {
							parentName = this.descendAttribute(element.parentNode.parentNode, "name");
						}
						if (typeof def === 'undefined') {
							def = this.descendAttribute(element.parentNode.parentNode, "DEF");
						}
						if (typeof parentName !== 'undefined') {
							if (typeof this.fieldTypeMapping[parentName] === 'undefined') {
								this.fieldTypeMapping[parentName] = {};
							}
							// console.error("parent2", parentName, "DEF", def, "fieldName", fieldName);
							this.fieldTypeMapping[parentName][fieldName] = value;
							this.DEFMapping[def] = parentName;
							// console.error("SET", parentName, this.fieldTypeMapping[parentName]);
							// console.error("SET DEF", def, this.DEFMapping[def]);
						}
					}
				} else if (element.nodeName === "fieldValue" && at === 'type') {
					if (typeof parentName === 'undefined') {
						// find name by looking up USE
						var use = this.descendAttribute(element.parentNode, "USE");
						parentName = this.DEFMapping[use];
						// console.error("GET USE", use, this.DEFMapping[use]);
					}
					if (typeof parentName !== 'undefined') {
						// console.error("GET", parentName, this.fieldTypeMapping[parentName]);
						value = this.fieldTypeMapping[parentName][fieldName];
					}
					// console.error("parent3", parentName, "USE", use, "fieldName", fieldName, "value", value);
				}
			}
			if (typeof parent !== 'undefined' && typeof mapToMethod !== 'undefined' && (value === "" || value === "children")) {
				if (typeof mapToMethod[parent.nodeName] !== 'undefined' && typeof mapToMethod[parent.nodeName][element.nodeName] !== 'undefined') {
					var tmpvalue = mapToMethod[parent.nodeName][element.nodeName].substring(3,4).toLowerCase()+mapToMethod[parent.nodeName][element.nodeName].substring(4); // lowercase first letter
					if (tmpvalue !== 'proxy') { // must be set with containerField attribute
						value = tmpvalue;
					}
				}
			}
		}
		return value;
	},

	descendNode: function(node, fieldTypes, n, fields, element, mapToMethod) {
		var fieldName = "";
		var subobject = {};
		if (node.nodeType === 1) {
			var attrName = this.descendAttribute(node, "containerField", element, mapToMethod);
			subobject = this.subSerializeToString(node, fieldTypes, n, n + 1, mapToMethod);
			if (node.nodeName === "meta" ||
				node.nodeName === "unit" ||
				node.nodeName === "component" ||
				node.nodeName === "field" ||
				node.nodeName === "fieldValue" ||
				node.nodeName === "connect") {

				fieldName = node.nodeName;
				if (typeof fields[fieldName] === 'undefined') {
					fields[fieldName] = [];
				}
				fields[fieldName].push(subobject);
			} else if (node.nodeName === "head" ||
				node.nodeName === "Scene") {
				fieldName = node.nodeName;
				fields[fieldName] = subobject;
			} else if (node.nodeName === "ProtoInterface" ||
				node.nodeName === "ProtoBody" ||
				node.nodeName === "IS") {
				fieldName = node.nodeName;
				fields[fieldName] = subobject[fieldName];
			} else {
				fieldName = '-'+attrName;
				var attrType;
				if (element && element.nodeName && fieldTypes[element.nodeName]) {
					attrType = fieldTypes[element.nodeName][attrName];
				}
				// console.error(element.nodeName, fieldName, node.nodeName, attrType);
				if (attrType === "SFNode") {
					if (typeof fields[fieldName] === 'undefined') {
						fields[fieldName] = subobject;
					} else {
						// overflow from SFNode, place in children
						fieldName = "-children";
						if (typeof fields[fieldName] === 'undefined') {
							fields[fieldName] = []
						}
						fields[fieldName].push(subobject);
					}
				} else {
					if (attrName === 'children' || attrName === 'shaders' || attrName === 'skeleton') {
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
			for (var line in subobject) {
				fields[fieldName].push({"#comment": subobject[line]});
			}
		} else if (node.nodeType === 4) {
			fieldName = "@sourceCode";
			subobject = this.descendSourceText(node);
			if (subobject[subobject.length-1] === "") {
				subobject.pop();
			}
			fields[fieldName] = subobject;
		}
	},

	subSerializeToString : function(element, fieldTypes, n, mapToMethod) {
		var fields = this.descendFields(element, fieldTypes);
		var object = {};
		if (element && element.childNodes) {
			for (var cn in element.childNodes) {
				if (element.childNodes.hasOwnProperty(cn)) {
					var node = element.childNodes[cn];
					this.descendNode(node, fieldTypes, n+1, fields, element, mapToMethod);

				}
			}
			    
			if (element.nodeName === "meta" ||
				element.nodeName === "unit" ||
				element.nodeName === "component" ||
				element.nodeName === "field" ||
				element.nodeName === "fieldValue" ||
				element.nodeName === "connect" ||
				element.nodeName === "Scene" ||
				element.nodeName === "head") {
				object = fields;
				// console.error(object);
			} else {
				object[element.nodeName] =  fields;
			}
		}
    		return object;
	}
}


if (typeof module === 'object')  {
	module.exports = DOM2JSONSerializer;
}
