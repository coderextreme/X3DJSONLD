var mapToMethod = {
	"X3D" : {
		"head": "setHead",
		"Scene" : "setScene"
	},
	"head" : {
		"meta": "addMeta",
		"component": "setComponent"
	},
	"Scene" : "addChildren",
	"LODObject" : {
		"Group": 'addChildren',
		"Shape": 'addChildren',
		"Transform": 'addChildren',
		"WorldInfo": 'addChildren'
	},
	"StaticGroup" : {
		"Shape": "addChildren",
	},
	"Switch" : {
		"Group": "addChildren",
		"Sound": "addChildren",
		"Shape": "addChildren",
		"Transform": "addChildren",
		"ColorInterpolator": "addChildren",
		"CoordinateInterpolator": "addChildren",
		"NormalInterpolator": "addChildren",
		"OrientationInterpolator": "addChildren",
		"PositionInterpolator": "addChildren",
		"ScalarInterpolator": "addChildren"
	},
	"Transform" : {
		"Anchor": "addChildren",
		"Billboard": "addChildren",
		"BooleanTrigger": "addChildren",
		"BooleanToggle": "addChildren",
		"BooleanFilter": "addChildren",
		"Collision": "addChildren",
		"ColorInterpolator": "addChildren",
		"CoordinateInterpolator": "addChildren",
		"CylinderSensor": "addChildren",
		"DirectionalLight": "addChildren",
		"Group": "addChildren",
		"IngeterTrigger": "addChildren",
		"NavigationInfo": "addChildren",
		"OrientationInterpolator": "addChildren",
		"PlaneSensor": "addChildren",
		"PointLight": "addChildren",
		"PositionInterpolator": "addChildren",
		"ProtoInstance": "addChildren",
		"ProximitySensor": "addChildren",
		"ROUTE": "addChildren",
		"ScalarInterpolator": "addChildren",
		"Script": "addChildren",
		"Shape": "addChildren",
		"Sound": "addChildren",
		"Switch": "addChildren",
		"SphereSensor": "addChildren",
		"SpotLight": "addChildren",
		"StringSensor": "addChildren",
		"TimeSensor": "addChildren",
		"TimeTrigger": "addChildren",
		"TouchSensor": "addChildren",
		"Transform": "addChildren",
		"Viewpoint": "addChildren",
		"VisibilitySensor": "addChildren",
		"IS": "setIS"
	},
	"Group" : "addChildren",
	"Sound" : {
		"AudioClip": "setSource",
		"MovieTexture": "setSource"
	},
	'LoadSensorObject' : {
		'AudioClip' : "addWatchList"
	},
	"Shape" : {
		"Sphere": "setGeometry",
		"Box": "setGeometry",
		"ElevationGrid": "setGeometry",
		"Text": "setGeometry",
		"Sphere": "setGeometry",
		"Cylinder": "setGeometry",
		"Extrusion": "setGeometry",
		"Cone": "setGeometry",
		"Appearance": "setAppearance",
		"IndexedFaceSet": "setGeometry",
		"IndexedLineSet": "setGeometry",
		"PointSet": "setGeometry",
		"Arc2D": "setGeometry",
		"ArcClose2D": "setGeometry",
		"Circle2D": "setGeometry",
		"Disk2D": "setGeometry",
		"Polyline2D": "setGeometry",
		"Polypoint2D": "setGeometry",
		"Rectangle2D": "setGeometry",
		"TriangleSet2D": "setGeometry",
		"ProtoInstance": "setGeometry"
	},
	"Appearance" : {
		"FillProperties": "addFillProperties",
		"ComposedCubeMapTexture": "setTexture",
		"ImageTexture": "setTexture",
		"PixelTexture": "setTexture",
		"MovieTexture": "setTexture",
		"Material": "setMaterial",
		"TwoSidedMaterial": "setMaterial",
		"TextureTransform": "setTextureTransform",
		"IS": "setIS"
	},
	"ElevationGrid" : {
		 "TextureCoordinate": "setTexCoord"
        },
	"IndexedQuadSetObject": {
		"Coordinate": "setCoord",
        },
	"QuadSetObject": {
		"Coordinate": "setCoord",
	},
	"IndexedFaceSet" : {
		"Coordinate": "setCoord",
		"TextureCoordinate": "setTexCoord",
		"Color": "setColor",
		"Normal": "setNormal"
	},
	"IndexedLineSet" : {
		"Coordinate": "setCoord",
		"Color": "setColor"
	},
	"PointSet" : {
		"Coordinate": "setCoord",
		"Color": "setColor"
	},
	"IndexedTriangleFanSetObject" : {
		"Coordinate": "setCoord"
	},
	"IndexedTriangleSetObject" : {
		"Coordinate": "setCoord"
	},
	"IndexedTriangleStripSetObject" : {
		"Coordinate": "setCoord"
	},
	"LineSetObject" : {
		"Coordinate": "setCoord"
	},
	"TriangleFanSetObject" : {
		"Coordinate": "setCoord"
	},
	"TriangleSetObject" : {
		"Coordinate": "setCoord"
	},
	"TriangleStripSetObject" : {
		"Coordinate": "setCoord"
	},
	"Anchor" : {
		"Transform": "addChildren",
		"Group": "addChildren",
		"Shape": "addChildren"
	},
	"Billboard" : {
		"Switch": "addChildren",
		"Transform": "addChildren",
		"ProtoInstance": "addChildren",
		"Shape": "addChildren"
	},
	"Collision" : {
		"TimeSensor": "addChildren",
		"Collision": "addChildren",
		"Transform": "addChildren",
		"PositionInterpolator": "addChildren",
		"Shape": "addChildren"
	},
	"ComposedShader" : {
		"field" : "addField",
		"Shaders" : "addParts"
	},
	"Shader" : {
		"field" : "addField"
	},
	"ProtoBody" : "setChildren",
	"ProtoDeclare" : {
		"ProtoBody" : "setProtoBody"
	},
	"ExternProtoDeclare" : {
		"field" : "addField"
	},
	"ProtoInterface" : {
		"field" : "addField"
	},
	"ProtoInstance" : {
		"fieldValue" : "addFieldValue"
	},
	"Script" : {
		"field" : "addField",
		"IS": "setIS"
	},
	"field" : "addChildren",
	"fieldValue" : "addChildren",
	"IS" : {
		"connect": "addConnect",
	}
};

var PythonSerializer = {};
PythonSerializer.serializeToString = function(json, element, n, grandparent, gn) {
	n = n || 0;
	var str = "";
	if (n === 0) {
		str += "from jnius import autoclass\n";
		str += "from X3Dautoclass import *\n";
		str += element.nodeName+n+" = "+element.nodeName+"Object()\n";
        }
	for (var cn in element.childNodes) {
		var node = element.childNodes[cn];
		if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
			str += node.nodeName+n+cn+" = "+node.nodeName+"Object()\n";
			str += PythonSerializer.serializeToString(json, node, ""+n+cn, element, ""+n);
			var addpre = ".set";
			if (cn > 0) {
				addpre = ".add";
			}

			var method = node.nodeName;
			if (typeof mapToMethod[element.nodeName] === 'object') {
		        	if (typeof mapToMethod[element.nodeName][node.nodeName] === 'string') {
					addpre = ".";
					method = mapToMethod[element.nodeName][node.nodeName];
				}
		        } else if (typeof mapToMethod[element.nodeName] === 'string') {
				addpre = ".";
				method = mapToMethod[element.nodeName];
			}
			if (element.nodeName == 'ComposedCubeMapTexture' && node.nodeName == 'ImageTexture') {
			} else if (element.nodeName == 'TextureBackground' && node.nodeName == 'ImageTexture') {
			} else {
				str += element.nodeName+n+addpre+method+"("+node.nodeName+n+cn+")\n";
			}
		}
	}
	node = element;
	for (var a in element.attributes) {
		var attrs = element.attributes;
		try {
			parseInt(a);
			if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
				var method = attrs[a].nodeName;
				if (method == "xmlns:xsd" || method == "xsd:noNamespaceSchemaLocation") {
					continue;
				}
				if (method == 'containerField') {
					method = attrs[a].nodeValue;
					method = "set"+method.charAt(0).toUpperCase() + method.slice(1);
					str += grandparent.nodeName+gn+"."+method+"(";
					str += element.nodeName+n;
				} else {
					method = "set"+method.charAt(0).toUpperCase() + method.slice(1);
					if (attrs[a].nodeValue == 'NULL' && method == "setValue") {
						method = "setChildren";
						str += element.nodeName+n+"."+method+"(";
						str += "None";
					} else if (typeof attrs[a].nodeValue === 'string') {
						str += element.nodeName+n+"."+method+"(";
						if (method == 'setVersion') {
							str += '"'+attrs[a].nodeValue+'"';
						} else if (method == 'setValue') {
							if (attrs[a].nodeValue.indexOf('"') >= 0) {
								str += "'"+attrs[a].nodeValue+"'";
							} else {
								str += '"'+attrs[a].nodeValue+'"';
							}
						} else if (attrs[a].nodeValue == 'true') {
							str += "True";
						} else if (attrs[a].nodeValue == 'false') {
							str += "False";
						} else if (attrs[a].nodeValue.indexOf('"') === 0) {
							str += "["+attrs[a].nodeValue.split('" "').join('","')+"]";
						} else if (attrs[a].nodeValue.indexOf('"') > 0) {
							str += "'"+attrs[a].nodeValue+"'";
						} else if (attrs[a].nodeValue.match(/^((\+|-)?([0-9]+\.?|\.[0-9]+|[0-9]+\.[0-9]+)((E|e)(\+|-)?[0-9]+)?)*$/)) {
							if (method.match(/^set[^F]*ndex$/)) {
								str += "["+attrs[a].nodeValue+"]";
							} else {
								str += attrs[a].nodeValue;
							}
						} else if (attrs[a].nodeValue.match(/^((\+|-)?([0-9]+\.?|\.[0-9]+|[0-9]+\.[0-9]+)((E|e)(\+|-)?[0-9]+)?| |,)*$/)) {
							str += "["+attrs[a].nodeValue.split(' ').join(',')+"]";
						} else {
							str += '"'+attrs[a].nodeValue+'"';
						}
					} else {
						str += element.nodeName+n+"."+method+"(";
						str += +attrs[a].nodeValue;
					}
				}
				str += ")\n";
			}
		} catch (e) {
		}
	}
	return str;
}


module.exports = PythonSerializer;
