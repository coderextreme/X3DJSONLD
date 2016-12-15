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
	"GeoLOD" : {
		"Group": 'addChildren',
		"Shape": 'addChildren'
	},
	"LOD" : {
		"Group": 'addChildren',
		"Shape": 'addChildren',
		"Transform": 'addChildren',
		"Billboard": 'addChildren',
		"WorldInfo": 'addChildren'
	},
	"StaticGroup" : {
		"Shape": "addChildren"
	},
	"CADLayer" : {
		"CADAssembly": "addChildren"
	},
	"CADAssembly" : {
		"CADPart": "addChildren",
		"Transform": "addChildren"
	},
	"CADPart" : {
		"CADFace": "addChildren",
		"Transform": "addChildren"
	},
	"CADFace" : {
		"Transform": "addChildren",
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
		"CADAssembly": "addChildren",
		"CADFace": "addChildren",
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
	"Group" : {
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
		"WorldInfo": "addChildren",
		"IS": "setIS",
		"MetadataString": "setMetadata"
	},
	"Sound" : {
		"AudioClip": "setSource",
		"MovieTexture": "setSource"
	},
	'LoadSensor' : {
		'AudioClip' : "addWatchList"
	},
	"Shape" : {
		"Sphere": "setGeometry",
		"Box": "setGeometry",
		"ElevationGrid": "setGeometry",
		"GeoElevationGrid": "setGeometry",
		"Text": "setGeometry",
		"Sphere": "setGeometry",
		"Cylinder": "setGeometry",
		"Extrusion": "setGeometry",
		"Cone": "setGeometry",
		"Appearance": "setAppearance",
		"IndexedFaceSet": "setGeometry",
		"IndexedQuadSet": "setGeometry",
		"IndexedTriangleSet": "setGeometry",
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
		"ComposedShader": "addShaders",
		"IS": "setIS"
	},
	"HAnimHumanoid" : {
		 "HAnimJoint": "addJoints",
		 "HAnimSegment": "addSegments",
		 "HAnimViewpoint": "addViewpoints"
        },
	"HAnimJoint" : {
		 "HAnimJoint": "addChildren",
		 "HAnimSegment": "addChildren"
        },
	"HAnimSegment" : {
		 "Shape": "addChildren",
		 "Transform": "addChildren"
        },
	"ElevationGrid" : {
		 "TextureCoordinate": "setTexCoord"
        },
	"IndexedQuadSet": {
		"Coordinate": "setCoord",
        },
	"QuadSet": {
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
	"IndexedTriangleFanSet" : {
		"Coordinate": "setCoord"
	},
	"IndexedTriangleSet" : {
		"Coordinate": "setCoord"
	},
	"IndexedTriangleStripSet" : {
		"Coordinate": "setCoord"
	},
	"LineSet" : {
		"Coordinate": "setCoord"
	},
	"TriangleFanSet" : {
		"Coordinate": "setCoord"
	},
	"TriangleSet" : {
		"Coordinate": "setCoord"
	},
	"TriangleStripSet" : {
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
		"Group": "addChildren",
		"ProtoInstance": "addChildren",
		"Shape": "addChildren"
	},
	"Collision" : {
		"TimeSensor": "addChildren",
		"Collision": "addChildren",
		"Transform": "addChildren",
		"Group": "addChildren",
		"PositionInterpolator": "addChildren",
		"Shape": "addChildren"
	},
	"ComposedShader" : {
		"field" : "addField",
		"Shaders" : "addParts",
		"ShaderPart" : "addParts"
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

var JavaSerializer = {};
JavaSerializer.serializeToString = function(element, clazz) {
	var str = "";
	var pc = clazz.replace(/-/g, "$")
	var c = pc.lastIndexOf("/");
	var clz = pc.substr(c+1);
	var pkg = pc.substr(0, c).replace(/\//g, ".").trim();

	if (pkg.length > 0) {
		str += "package "+pkg+";\n";
	}
	str += "import org.web3d.x3d.java.*;\n";
	str += "import org.web3d.x3d.java.CADGeometry.*;\n";
	str += "import org.web3d.x3d.java.Core.*;\n";
	str += "import org.web3d.x3d.java.CubeMapTexturing.*;\n";
	str += "import org.web3d.x3d.java.DIS.*;\n";
	str += "import org.web3d.x3d.java.EnvironmentalEffects.*;\n";
	str += "import org.web3d.x3d.java.EnvironmentalSensor.*;\n";
	str += "import org.web3d.x3d.java.EventUtilities.*;\n";
	str += "import org.web3d.x3d.java.Followers.*;\n";
	str += "import org.web3d.x3d.java.Geometry2D.*;\n";
	str += "import org.web3d.x3d.java.Geometry3D.*;\n";
	str += "import org.web3d.x3d.java.Geospatial.*;\n";
	str += "import org.web3d.x3d.java.Grouping.*;\n";
	str += "import org.web3d.x3d.java.HAnim.*;\n";
	str += "import org.web3d.x3d.java.Interpolation.*;\n";
	str += "import org.web3d.x3d.java.KeyDeviceSensor.*;\n";
	str += "import org.web3d.x3d.java.Layering.*;\n";
	str += "import org.web3d.x3d.java.Layout.*;\n";
	str += "import org.web3d.x3d.java.Lighting.*;\n";
	str += "import org.web3d.x3d.java.NURBS.*;\n";
	str += "import org.web3d.x3d.java.Navigation.*;\n";
	str += "import org.web3d.x3d.java.Networking.*;\n";
	str += "import org.web3d.x3d.java.ParticleSystems.*;\n";
	str += "import org.web3d.x3d.java.Picking.*;\n";
	str += "import org.web3d.x3d.java.PointingDeviceSensor.*;\n";
	str += "import org.web3d.x3d.java.Rendering.*;\n";
	str += "import org.web3d.x3d.java.RigidBodyPhysics.*;\n";
	str += "import org.web3d.x3d.java.Scripting.*;\n";
	str += "import org.web3d.x3d.java.Shaders.*;\n";
	str += "import org.web3d.x3d.java.Shape.*;\n";
	str += "import org.web3d.x3d.java.Sound.*;\n";
	str += "import org.web3d.x3d.java.Text.*;\n";
	str += "import org.web3d.x3d.java.Texturing3D.*;\n";
	str += "import org.web3d.x3d.java.Texturing.*;\n";
	str += "import org.web3d.x3d.java.Time.*;\n";
	str += "import org.web3d.x3d.java.VolumeRendering.*;\n";
	str += "import org.web3d.x3d.java.fields.*;\n";
	str += "import org.web3d.x3d.sai.*;\n";
	str += "import org.web3d.x3d.sai.CADGeometry.*;\n";
	str += "import org.web3d.x3d.sai.Core.*;\n";
	str += "import org.web3d.x3d.sai.CubeMapTexturing.*;\n";
	str += "import org.web3d.x3d.sai.DIS.*;\n";
	str += "import org.web3d.x3d.sai.EnvironmentalEffects.*;\n";
	str += "import org.web3d.x3d.sai.EnvironmentalSensor.*;\n";
	str += "import org.web3d.x3d.sai.EventUtilities.*;\n";
	str += "import org.web3d.x3d.sai.Followers.*;\n";
	str += "import org.web3d.x3d.sai.Geometry2D.*;\n";
	str += "import org.web3d.x3d.sai.Geometry3D.*;\n";
	str += "import org.web3d.x3d.sai.Geospatial.*;\n";
	str += "import org.web3d.x3d.sai.Grouping.*;\n";
	str += "import org.web3d.x3d.sai.HAnim.*;\n";
	str += "import org.web3d.x3d.sai.Interpolation.*;\n";
	str += "import org.web3d.x3d.sai.KeyDeviceSensor.*;\n";
	str += "import org.web3d.x3d.sai.Layering.*;\n";
	str += "import org.web3d.x3d.sai.Layout.*;\n";
	str += "import org.web3d.x3d.sai.Lighting.*;\n";
	str += "import org.web3d.x3d.sai.NURBS.*;\n";
	str += "import org.web3d.x3d.sai.Navigation.*;\n";
	str += "import org.web3d.x3d.sai.Networking.*;\n";
	str += "import org.web3d.x3d.sai.ParticleSystems.*;\n";
	str += "import org.web3d.x3d.sai.Picking.*;\n";
	str += "import org.web3d.x3d.sai.PointingDeviceSensor.*;\n";
	str += "import org.web3d.x3d.sai.Rendering.*;\n";
	str += "import org.web3d.x3d.sai.RigidBodyPhysics.*;\n";
	str += "import org.web3d.x3d.sai.Scripting.*;\n";
	str += "import org.web3d.x3d.sai.Shaders.*;\n";
	str += "import org.web3d.x3d.sai.Shape.*;\n";
	str += "import org.web3d.x3d.sai.Sound.*;\n";
	str += "import org.web3d.x3d.sai.Text.*;\n";
	str += "import org.web3d.x3d.sai.Texturing3D.*;\n";
	str += "import org.web3d.x3d.sai.Texturing.*;\n";
	str += "import org.web3d.x3d.sai.Time.*;\n";
	str += "import org.web3d.x3d.sai.VolumeRendering.*;\n";
	str += "class "+clz+" {\n";
	str += "	public static void main(String[] args) {\n";
	str += JavaSerializer.subSerializeToString(element);
	str += "	}\n";
	str += "}\n";
	return str;
}
JavaSerializer.subSerializeToString = function(element, n, grandparent, gn) {
	n = n || 0;
	var str = "";
	if (n === 0) {
		str += "		"+element.nodeName+"Object "+element.nodeName+n+" = new "+element.nodeName+"Object();\n";
        }
	for (var cn in element.childNodes) {
		var node = element.childNodes[cn];
		if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
			str += "		"+node.nodeName+"Object "+node.nodeName+n+cn+" = new "+node.nodeName+"Object();\n";
			str += JavaSerializer.subSerializeToString(node, ""+n+cn, element, ""+n);
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
			} else if (element.nodeName == 'HAnimHumanoid' && node.nodeName == 'Viewpoint') {
			} else {
				str += "		"+element.nodeName+n+addpre+method+"("+node.nodeName+n+cn+");\n";
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
					str += "		"+grandparent.nodeName+gn+"."+method+"(";
					str += element.nodeName+n;
				} else {
					method = "set"+method.charAt(0).toUpperCase() + method.slice(1);
					if (attrs[a].nodeValue == 'NULL' && method == "setValue") {
						method = "setChildren";
						str += "		"+element.nodeName+n+"."+method+"(";
						str += "null";
					} else if (typeof attrs[a].nodeValue === 'string') {
						str += "		"+element.nodeName+n+"."+method+"(";
						if (method == 'setVersion' || method == 'setAddress') {
							str += '"'+attrs[a].nodeValue+'"';
						} else if (method == 'setValue') {
							if (attrs[a].nodeValue.indexOf('"') >= 0) {
								str += '"'+attrs[a].nodeValue.replace(/\\?"/g, "&quot;")+'"';
							} else {
								str += '"'+attrs[a].nodeValue+'"';
							}
						} else if (attrs[a].nodeValue == 'true') {
							str += "true";
						} else if (attrs[a].nodeValue == 'false') {
							str += "false";
						} else if (attrs[a].nodeValue.indexOf('"') === 0) {
							str += "new String[] {"+attrs[a].nodeValue.split('" "').join('","')+"}";
						} else if (attrs[a].nodeValue.indexOf('"') > 0) {
							str += '"'+attrs[a].nodeValue.replace(/\\?"/g, "&quot;")+'"';
						} else if (attrs[a].nodeValue.match(/^(\+|-)?([0-9]+\.?|\.[0-9]+|[0-9]+\.[0-9]+)((E|e)(\+|-)?[0-9]+)?$/)) {
							if (method.match(/^set[^F]*ndex$/)) {
								str += "{"+attrs[a].nodeValue+"}";
							} else {
								if ((element.nodeName == 'component' && method == 'setLevel') ||
								method == 'setWhichChoice'){
									str += attrs[a].nodeValue;
								} else {
									str += attrs[a].nodeValue+"f";
								}
							}
						} else if (attrs[a].nodeValue.indexOf(".") >= 0 && attrs[a].nodeValue.match(/^((\+|-)?([0-9]+\.?|\.[0-9]+|[0-9]+\.[0-9]+)((E|e)(\+|-)?[0-9]+)?| |,)*$/)) {
							if ((element.nodeName == 'GeoPositionInterpolator' && method == 'setKeyValue') ||
							(element.nodeName == 'GeoLocation' && method == 'setGeoCoords') ||
							(element.nodeName == 'GeoViewpoint' && method == 'setPosition') ||
							(element.nodeName == 'GeoLOD' && method == 'setCenter')
							) {
								str += "new double[] {"+attrs[a].nodeValue.split(' ').join('d,')+"d}";
							} else {
								str += "new float[] {"+attrs[a].nodeValue.split(' ').join('f,')+"f}";
							}
						} else if (attrs[a].nodeValue.match(/^((\+|-)?([0-9]+)((E|e)(\+|-)?[0-9]+)?| |,)*$/)) {
							if (method == 'setDiffuseColor' ||
							method == 'setSkyColor' ||
							method == 'setGroundColor' ||
							method == 'setColor' ||
							method == 'setEmissiveColor' ||
							method == 'setSize' ||
							method == 'setPosition' ||
							method == 'setPlane' ||
							method == 'setKeyValue' ||
							method == 'setDirection' ||
							method == 'setRotation' ||
							method == 'setTranslation' ||
							method == 'setScale' ||
							method == 'setOrientation' ||
							method == 'setSpecularColor' ||
							method == 'setCrossSection' ||
							method == 'setSpine' ||
							method == 'setMinPosition' ||
							method == 'setMaxPosition' ||
							method == 'setAxisOfRotation' ||
							method == 'setCenterOfRotation' ||
							method == 'setCenter' ||
							method == 'setVector' ||
							method == 'setPoint' ||
							method == 'setScale' ||
							method == 'setLocation') {
								if ((element.nodeName == 'GeoPositionInterpolator' && method == 'setKeyValue') ||
							(element.nodeName == 'GeoLocation' && method == 'setGeoCoords') ||
								(element.nodeName == 'GeoViewpoint' && method == 'setPosition') ||
							(element.nodeName == 'GeoLOD' && method == 'setCenter')) {
									str += "new double[] {"+attrs[a].nodeValue.split(' ').join(',')+"}";
								} else {
									str += "new float[] {"+attrs[a].nodeValue.split(' ').join(',')+"}";
								}
							} else {
								str += "new int[] {"+attrs[a].nodeValue.split(' ').join(',')+"}";
							}
						} else {
							str += '"'+attrs[a].nodeValue+'"';
						}
					} else {
						str += "		"+element.nodeName+n+"."+method+"(";
						if (attrs[a].nodeValue.indexOf(".") >= 0 && attrs[a].nodeValue.match(/^(\+|-)?([0-9]+\.|\.[0-9]+|[0-9]+\.[0-9]+)((E|e)(\+|-)?[0-9]+)?$/)) {
							str += attrs[a].nodeValue+"f";
						} else {
							str += attrs[a].nodeValue;
						}
					}
				}
				str += ");\n";
			}
		} catch (e) {
			console.log(e);
		}
	}
	return str;
}


module.exports = JavaSerializer;
