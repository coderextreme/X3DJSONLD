"use strict";

if (typeof require === 'function') {
	var xmldom = require('@xmldom/xmldom');
	var XMLSerializer = new xmldom.XMLSerializer();
}

function StripNumberSerializer() {
	var fieldTypeMapping = {};
	var DEFMapping = {};
	try {
		this.fieldTypeMapping = {};
		this.DEFMapping = {};
	} catch (e) {
		console.error("StripNumberSerializer does not have a this in constructor");
	}
}


StripNumberSerializer.prototype = {
	serializeToString : function(xml, element, clazz, mapToMethod, fieldTypes) {
		element = this.subSerializeToString(element, fieldTypes, 0, mapToMethod);
		return this.serializeDOM(element, xml);
	},

	descendSubArray: function (values, convert) {
		for (var v in values) {
			values[v] = convert(values[v]);
		}
		return values.join(" ");
	},


	descendFields: function(element, fieldTypes) {
		var attrType = "";
		var fieldAttrType = this.descendAttribute(element, "type");
		// console.error("field attr type", fieldAttrType);
		for (var a in element.attributes) {
			try {
				parseInt(a);
				if (element.attributes.hasOwnProperty(a) && element.attributes[a].nodeType == 2) {
					var attr = element.attributes[a].nodeName;
					var method = attr;
					// look at object model
					var attrType = "SFString";
					try {
						attrType = fieldTypes[element.nodeName][attr];
					} catch (e) {
						console.error("Missing", attr, "in fieldTypes.js element", element.nodeName, " = ", fieldTypes[element.nodeName], "setting to SFString");
					}

					if (element.attributes[a].nodeValue === 'NULL' &&
					   (fieldAttrType === "SFNode"  ||
					    fieldAttrType === "MFNode")) {
						method = "-children";
					} else if (fieldAttrType !== "" && attr === "value") {
						attrType = fieldAttrType;
					} else if (attr === "value") {
						// coercions, not checking type
						if (element.attributes[a].nodeValue[0] === '"' && element.attributes[a].nodeValue[element.attributes[a].nodeValue.length-1] === '"') {
							attrType = "MFString";
						}
					}
					var attrmethod = method;
					if (attrmethod === 'containerField') {
						continue;
					}
					var nv = element.attributes[a].nodeValue;
					if (attrType === "SFInt32") {
						element.setAttribute(attr, parseInt(nv));
					} else if (attrType === "SFFloat" ||
						attrType === "SFDouble" ||
						attrType === "SFTime") {
						element.setAttribute(attr, parseFloat(nv));
					} else if (
						attrType === "MFInt32"||
						attrType === "MFImage"||
						attrType === "SFImage") {
						element.setAttribute(attr, this.descendSubArray(nv.split(/[ ,]+/), parseInt));
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
						element.setAttribute(attr, this.descendSubArray(nv.split(/[ ,]+/), parseFloat));
					}
				}
			} catch (e) {
				console.error(e);
			}
			attrType = "";
		}
		return element;
	},

	descendAttribute: function(element, at, parent, mapToMethod) {
		var value = "";
		if (at === "containerField") {
			value = "children";
		}
		for (var a in element.attributes) {
			try {
				parseInt(a);
				if (element.attributes.hasOwnProperty(a) && element.attributes[a].nodeType == 2) {
					var attr = element.attributes[a].nodeName;
					if (attr === at) {
						value = element.attributes[a].nodeValue;
					}
					if (attr === 'name') {
						var fieldName = element.attributes[a].nodeValue;
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
							this.fieldTypeMapping[parentName] = []
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
		return value;
	},

	subSerializeToString : function(element, fieldTypes, n, mapToMethod) {
		element = this.descendFields(element, fieldTypes);
		for (var cn in element.childNodes) {
			if (element.childNodes.hasOwnProperty(cn)) {
				var node = element.childNodes[cn];
				if (node.nodeType === 1) {
					this.subSerializeToString(node, fieldTypes, n+1, mapToMethod);
				}
			}
		}
		return element;
	},

	serializeDOM : function(element, xmlstr) {
		var m = xmlstr.match(/([34].[0123])/);
		var version = m[1];
		var encoding = "UTF-8";
		var xml = '';
		xml += '<?xml version="1.0" encoding="'+encoding+'"?>\n';
		xml += '<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D '+version+'//EN" "https://www.web3d.org/specifications/x3d-'+version+'.dtd">\n';
		xml += XMLSerializer.serializeToString(element);
		return xml;
	}
}
module.exports StripNumberSerializer;
