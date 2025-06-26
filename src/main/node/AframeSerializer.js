"use strict";

import xmldom from '@xmldom/xmldom';
var DOMImplementation = new xmldom.DOMImplementation();
var XMLSerializer = new xmldom.XMLSerializer();

export default function AframeSerializer () {
};

AframeSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		var docType = DOMImplementation.createDocumentType("html");
		var document = DOMImplementation.createDocument(null, "html", docType);
		var aframeelement = document.getElementsByTagNameNS(null, "html")[0];
		var x3d = this.parseObject(document, "body", fieldTypes, json);
		aframeelement.appendChild(x3d);
		var xml = '<?xml version="1.0" encoding="'+json.X3D["encoding"]+'"?>\n';
		xml += XMLSerializer.serializeToString(aframeelement);
		console.error(xml);
		return xml;
	},
		/*
	parseSubObject : function(attrType, type, values) {
		return values.join(" ");
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
	},
	parseSubArray : function(attrType, numpersub, values) {
		return values.join(" ");
		if (numpersub > 1 && attrType.startsWith("MF")) {
			var newArrays = [];
			for (var j = 0; j < values.length;) {
				var newArray = [];
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
		} else if (numpersub === 0) { // index
			var newArrays = [];
			var newArray = [];
			var i = 0;
			for (var j = 0; j < values.length;) {
				if (values[j] === -1) {
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
	},
		*/
	jsonCopy : function(from) {
		return structuredClonefrom;
	},
	componentsToAttributes : function(element, components) {
		var componentCollector = {};
		for (var component in components) {
			if (typeof componentCollector[component] === 'undefined') {
				componentCollector[component] = [];
			}
			console.error("	component", component);
			var properties = components[component];
			var props = componentCollector[component];
			for (var property in properties) {
				console.error("		property", property,properties[property]);
				if (property !== "element") {
					var p = property+": "+properties[property];
					props.push(p);
				}
			}
			console.error("Setting attribute",component,"to", props.join("; "));
		}
		for (var component in componentCollector) {
			var props = componentCollector[component];
			element.setAttribute(component, props.join("; "));
		}
	},
	elementToComponentMap(name, attr, components, component, json, field, value) {
		console.error("value is", value);
		var map = {
			/* name
			 * 	attribute
			 * 		component
			 *			property: (value or function)
			 */
			Box: {
				element: { geometry : { primitive: "box"}},
				size: {
					geometry: { 
						width: function (json, field, value) {
							return value[0];
						},
						height: function (json, field, value) {
							return value[1];
						},
						depth: function (json,field, value) {
							return value[2];
						}
					}
				}
			},
			Circle2D : {
				element: { geometry : { primitive: "circle"}}, 
				radius : { geometry: { radius: value, } },
				subdivision: { geometry: { segments: value } }
			},
			Arc2D : {
				element: { geometry : { primitive: "circle"}}, 
				radius : { geometry: { radius: value } },
				startAngle: {
					geometry: {
						thetaStart: function (json, field, value) {
							return value * 180 / Math.PI;
						}
					}
				},
				endAngle: {
					geometry: {
						thetaLength: function (json, field, value) {
							return value * 180 / Math.PI;
							return (json["@endAngle"] - json["@startAngle"]) * 180 / Math.PI;
						}
					}
				}
			},
			Cone : {
				element: { geometry : { primitive: "cone"}}, 
				bottomRadius : { geometry: { radiusBottom: value } },
				bottom : { geometry: { openEnded: !value } },
				height : { geometry: { height: value } }
			},
			Cylinder : {
				element: { geometry : { primitive: "cylinder"}},
				radius : { geometry: { radius: value } },
				bottom : { geometry: { openEnded: value } },
				top : { geometry: { openEnded: !value } },
				height : { geometry: { height: value } },
				subdivision: { geometry: { segmentsRadial: value } }
			},
			Disk2D: {
				element: { geometry: { primitive: "ring"}},
			},
			Plane: {
				element: { geometry : { primitive: "plane"}},
			},
			Sphere: {
				element: { geometry : { primitive: "sphere"}},
			},
			Text: {
				element: { geometry : { primitive: "text"}},
			},
			Torus: {
				element: { geometry : { primitive: "torus"}},
			},
			ImageTexture: {
				element: "a-image",
				url: { material : { src: value }},
			},
			Group: {
				element: "a-entity"
			},
			MovieTexture: {
				element: "a-video"
			},
			Scene: {
				element: "a-scene"
			},
			Shape: {
				element: "a-entity"
			},
			Transform: {
				element: "a-entity"
			},
			body: {
				element: "body"
			},
			X3D: {
				element: "div"
			},
		};
		var mapComponents;
		if (typeof map[name] !== 'undefined') {
			mapComponents = map[name][attr];
			console.error("Found", name, attr, JSON.stringify(mapComponents));
		}
		if (typeof mapComponents === 'object' && typeof component !== 'undefined') {
			for (var mapComponent in mapComponents) {
				console.error("map comp", mapComponent);
				var properties = mapComponents[mapComponent];
				for (var property in properties) {
					if (typeof components !== 'undefined') {
						if (typeof components[component] === 'undefined') {
							components[component] = {};
						}

						if (typeof properties[property] === 'function' && typeof value !== 'undefined') {
							// we only copy those attributes for one property, so the other properties don't get wiped out.
							components[component][property] = properties[property](json, field, value);
						} else {
							components[component][property] = properties[property];
						}
						console.error("component value is ", components[component][property]);
					}
					console.error("prop", property, "comps", JSON.stringify(components));
				}
			}
			return map[name];
		} else {
			return map[name];
		}
	},
	getValueFromJsonField(json, field, attrType) {
		var value = "";
		/*
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
			value = this.parseSubArray(attrType, 1, json[field]);
		} else if (attrType === "MFInt32") {
			if (field.endsWith("Index")) {
				value = this.parseSubArray(attrType, 0, json[field]);
			} else {
				value = this.parseSubArray(attrType, 1, json[field]);
			}
		} else if (
			attrType === "MFImage"||
			attrType === "SFImage") {
			value = this.parseSubArray(attrType, 1, json[field]);
		} else if (
			attrType === "SFColor"||
			attrType === "MFColor") {
			value = this.parseSubObject(attrType, "rgb", json[field]);
		} else if (
			attrType === "SFColorRGBA"||
			attrType === "MFColorRGBA") {
			value = this.parseSubObject(attrType, "rgba", json[field]);
		} else if (
			attrType === "SFVec2d"||
			attrType === "MFVec2d"||
			attrType === "SFVec2f"||
			attrType === "MFVec2f") {
			value = this.parseSubObject(attrType, "xy", json[field]);
		} else if (
			attrType === "SFVec3d"||
			attrType === "MFVec3d"||
			attrType === "SFVec3f"||
			attrType === "MFVec3f") {
			value = this.parseSubObject(attrType, "xyz", json[field]);
		} else if (
			attrType === "SFVec4d"||
			attrType === "MFVec4d"||
			attrType === "SFVec4f"||
			attrType === "MFVec4f") {
			value = this.parseSubObject(attrType, "xyzw", json[field]);
		} else if (
			attrType === "SFRotation"||
			attrType === "MFRotation") {
			value = this.parseSubObject(attrType, "xyzw", json[field]);
		} else if (
			attrType === "SFMatrix3d"||
			attrType === "MFMatrix3d"||
			attrType === "SFMatrix3f"||
			attrType === "MFMatrix3f") {
			value = this.parseSubArray(attrType, 9, json[field]);
		} else if (
			attrType === "SFMatrix4d"||
			attrType === "MFMatrix4d"||
			attrType === "SFMatrix4f"||
			attrType === "MFMatrix4f") {
			value = this.parseSubArray(attrType, 16, json[field]);
		} else if (
			attrType === "MFFloat") {
			value = this.parseSubArray(attrType, 1, json[field]);
		} else if (
			attrType === "MFDouble") {
			value = this.parseSubArray(attrType, 1, json[field]);
		} else if (attrType === "MFBool") {
			value = this.parseSubArray(attrType, 1, json[field]);
		} else {
		*/
			value = json[field];
		// }
		return value;
	},
	parseObject : function(document, name, fieldTypes, json) {
		var element;

		var components = {};
		var aframe = this.elementToComponentMap(name, "element", components, "geometry"); // we don't need JSON as these are hard-coded
		console.error("Aframe is", aframe, "for", name);
		if (typeof aframe === 'undefined') {
			element = document.createElement(name+"U-a-entity");
			// this is an unimplemented node
		} else if (typeof aframe.element === 'undefined') {
			// this node has no element
			element = document.createElement(name+"A-a-entity");
		} else if (typeof aframe.element === 'string') {
			// this is a partially implemented node
			element = document.createElement(aframe.element);
		} else if (typeof aframe === 'object') {
			// this is a primitive geometry
			element = document.createElement("a-entity");
		} else if (typeof aframe === 'object') {
			element = document.createElement("P-entity");
		}
		// element.parentComponents = {};
		element.components = components;
		
		if (typeof element === 'undefined') {
			console.error("couldn't create element for ", name);
		} else {
			// console.error("element ", name);
		}
		for (var field in json) {
			if (field.startsWith("@")) {
				var attr = field.substr(1);
				if ((attr === "profile" || attr === "version") && aframe.element === "div") {
					continue;
				}
				if (attr === "string" && name === "Text") {
					attr = "value"
				}
				if (attr === "translation" && name === "Transform") {
					attr = "position"
				}
				if (attr === "xmlns:xsd" || attr === "xsd:noNamespaceSchemaLocation" || attr === 'containerField' || attr === 'type') {
					continue;
				}
				/*
				if (attr !== 'containerField') {
					// look at object model
					var attrType = "SFString";
					if (typeof fieldTypes[name] !== 'undefined') {
						attrType = fieldTypes[name][attr];
					}

					// var value = this.getValueFromJsonField(json, field, attrType);
				*/
					var value = json[field];
					this.elementToComponentMap(name, attr, element.components, "geometry", json, field, value);
					// we send material to parent.
					this.elementToComponentMap(name, attr, element.components, "material", json, field, value);

					element.setAttribute(attr, value);
				/*
				}
				*/
			} else if (field === "#comment") {
				element.appendChild(document.createComment(json[field]));
			} else if (field === "#sourceCode") {
				element.appendChild(document.createCDATASection(json[field].join("\r\n").replace(/'([^'\r]*)\n([^']*)'/g, "'$1\\n$2'")));
			} else {
				var node = json[field];
				if (typeof node === 'object') {
					var containerElement = this.parseObject(document, field, fieldTypes, node);

					var ct = containerElement.nodeName || "-";
					var nct = parseInt(ct.trim());
					var ict = ct.startsWith("-") || !isNaN(nct); // illegal if true
					if (ict) {
						var children = Array.prototype.slice.call(containerElement.childNodes);
						// skip the immediete child
						for (var child = 0; child < children.length; child++) {
							if (typeof children[child] !== 'undefined') {
								element.appendChild(children[child]);
								/*
								if (element.components && children[child].parentComponents) {
									element.components = Object.assign(element.commponents, children[child].parentComponents);
								}
								*/
							}
						}
					} else if (name) {
						element.appendChild(containerElement);
						/*
						if (element.components && element.parentComponents) {
							element.components = Object.assign(element.components, containerElement.parentComponents);
						}
						*/
					}
				}
			}
		}
		// now add the collected components as attributes.
		this.componentsToAttributes(element, element.components);
		return element;
	}
}
