let mapToMethod = require('./mapToMethod.js');
let fieldTypes = require('./fieldTypes.js');
let mapToMethod2 = {
        "Scene" : {
                "ROUTE" : "addChildren",
                "IMPORT" : "addChildren",
                "EXPORT" : "addChildren",
                "ProtoDeclare" : "addChildren",
                "ExternProtoDeclare" : "addChildren"
        },
	"CADPart" : {
		"Transform": "addChildren"
	},
	"Billboard" : {
                "ROUTE" : "addChildren"
	},
	"Anchor" : {
                "ROUTE" : "addChildren"
	},
	"Switch" : {
                "ROUTE" : "addChildren"
	},
	"Transform" : {
		"ProtoInstance": "addChildren",
		"ROUTE": "addChildren",
		"IS": "setIS",
                "ExternProtoDeclare" : "addChildren",
                "IMPORT" : "addChildren",
	},
	"Group" : {
		"ProtoInstance": "addChildren",
		"ExternProtoDeclare": "addChildren",
		"ProtoDeclare": "addChildren",
		"ROUTE": "addChildren",
		"IS": "setIS"
	},
	"Shape" : {
		"ProtoInstance": "setGeometry"
	},
	"ImageTexture" : {
		"IS": "setIS"
	},
	"Material" : {
		"IS": "setIS"
	},
	"Appearance" : {
		"FillProperties": "setFillProperties",
		"LineProperties": "setLineProperties",
		"TextureTransform": "setTextureTransform",
		"MultiTextureTransform": "setTextureTransform",
		"IS": "setIS"
	},
	"HAnimJoint" : {
		"Transform" : "addChildren"
	},
	"HAnimHumanoid" : {
		 "HAnimViewpoint": "addViewpoints",
		 "Coordinate": "setSkinCoord"
        },
	"GeoElevationGrid" : {
		 "TextureCoordinate": "setTexCoord",
		"GeoOrigin" : "setGeoOrigin"
        },
	"ElevationGrid" : {
		 "TextureCoordinate": "setTexCoord"
        },
	"IndexedTriangleSet" : {
		"TextureCoordinateGenerator": "setTexCoord",
        },
	"IndexedTriangleFanSet" : {
		"TextureCoordinate": "setTexCoord",
        },
	"IndexedFaceSet" : {
		"TextureCoordinate": "setTexCoord",
		"MultiTextureCoordinate": "setTexCoord"
	},
	"MultiTextureTransform" : {
		"TextureTransform": "addTextureTransform"
	},
	"MultiTextureCoordinate" : {
		"TextureCoordinate": "addTexCoord"
	},
	"IndexedQuadSet" : {
		"TextureCoordinate": "setTexCoord"
	},
	"ComposedShader" : {
		"field" : "addField",
		"Shaders" : "addParts",
		"ShaderPart" : "addParts"
	},
        "ProtoBody" : {
                "ROUTE" : "addChildren",
                "ProtoDeclare" : "addChildren"
        },
	"ProtoDeclare" : {
		"ProtoBody" : "setProtoBody",
		"ProtoInterface" : "setProtoInterface",
		"field" : "addField"
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
        "Text" : {
                "FontStyle" : "setFontStyle",
		"IS": "setIS"
        },
        "GeoLOD" : {
		"Shape" : "addRootNode",
		"WorldInfo" : "addRootNode",
		"GeoOrigin" : "setGeoOrigin"
        },
        "GeoPositionInterpolator" : {
		"GeoOrigin" : "setGeoOrigin"
        },
        "GeoTransform" : {
		"GeoOrigin" : "setGeoOrigin"
        },
        "GeoCoordinate" : {
		"GeoOrigin" : "setGeoOrigin"
        },
        "GeoTouchSensor" : {
		"GeoOrigin" : "setGeoOrigin"
        },
        "GeoViewpoint" : {
		"GeoOrigin" : "setGeoOrigin"
        },
        "GeoLocation" : {
                "ROUTE" : "addChildren",
		"GeoOrigin" : "setGeoOrigin",
                "ExternProtoDeclare" : "addChildren"
        },
        "NurbsTrimmedSurface" : {
		"Coordinate" : "setControlPoint",
		"Contour2D" : "addTrimmingContour"
	},
        "NurbsPatchSurface" : {
		"Coordinate" : "setControlPoint"
	},
        "NurbsCurve" : {
		"Coordinate" : "setControlPoint"
	},
        "NurbsPositionInterpolator" : {
		"Coordinate" : "setControlPoint"
	},
        "IsoSurfaceVolumeData" : {
		"CartoonVolumeStyle" : "addRenderStyle"
	},
        "SegmentedVolumeData" : {
		"OpacityMapVolumeStyle" : "addRenderStyle",
		"ToneMappedVolumeStyle" : "addRenderStyle"
	},
        "VolumeData" : {
		"ToneMappedVolumeStyle" : "setRenderStyle",
		"BlendedVolumeStyle" : "setRenderStyle",
		"ComposedVolumeStyle" : "setRenderStyle",
		"CartoonVolumeStyle" : "setRenderStyle",
		"ProjectionVolumeStyle" : "setRenderStyle",
		"EdgeEnhancementVolumeStyle" : "setRenderStyle",
		"ShadedVolumeStyle" : "setRenderStyle",
		"SilhouetteEnhancementVolumeStyle" : "setRenderStyle"
	},
        "BlendedVolumeStyle" : {
		"ToneMappedVolumeStyle" : "setRenderStyle",
		"ComposedVolumeStyle" : "setRenderStyle"
	},
        "ComposedVolumeStyle" : {
		"BlendedVolumeStyle" : "addRenderStyle",
		"CartoonVolumeStyle" : "addRenderStyle",
		"OpacityMapVolumeStyle" : "addRenderStyle",
		"BoundaryEnhancementVolumeStyle" : "addRenderStyle",
		"EdgeEnhancementVolumeStyle" : "addRenderStyle",
		"ToneMappedVolumeStyle" : "addRenderStyle",
		"SilhouetteEnhancementVolumeStyle" : "addRenderStyle"
	},
        "RigidBody" : {
		"Sphere" : "setMassDensityModel",
		"Box" : "setMassDensityModel"
	},
	"LoadSensor" : {
		"X3DUrlObject" : "addWatchList",
		"ShaderPart" : "addWatchList",
		"ImageTexture" : "addWatchList",
		"MovieTexture" : "addWatchList",
		"AudioClip" : "addWatchList",
		"DISEntityTypeMapping" : "addWatchList",
		"X3DScriptNode" : "addWatchList",
		"Script" : "addWatchList",
		"GeoMetadata" : "addWatchList",
		"ImageTexture3D" : "addWatchList",
		"Inline" : "addWatchList",
		"ShaderProgram" : "addWatchList",
		"Anchor" : "addWatchList",
		"PackagedShader" : "addWatchList",
		"ImageCubeMapTexture" : "addWatchList",
	},
	"MetadataSet" : {
		"ProtoInstance" : "setMetadata"
	}
};

Object.assign(mapToMethod, {
});

for (map in mapToMethod2) {
        Object.assign(mapToMethod[map], mapToMethod2[map]);
}


let JavaSerializer = {};
JavaSerializer.serializeToString = function(json, element, clazz) {
	/*
	for (let a in element.attributes) {
		let attrs = element.attributes;
		let attributeName = attrs[a].nodeName;
		if (attributeName === "version" && attrs[a].nodeValue !== "3.3") {
			console.log(clazz, attrs[a].nodeValue);
			return;
		}
	}
	*/

	let str = "";
	let pc = clazz.replace(/-|\./g, "$")
	let c = pc.lastIndexOf("/");
	let clz = pc.substr(c+1);
	clz = clz.replace(/^([0-9].*|default)/, "_$1")
	let pkg = pc.substr(0, c).replace(/\//g, ".").trim();

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

function printParentChild(element, n, node, cn) {
	let addpre = ".set";
	if (cn > 0 && node.nodeName !== 'IS') {
		addpre = ".add";
	}

	let method = node.nodeName;
	if (typeof mapToMethod[element.nodeName] === 'object') {
		if (typeof mapToMethod[element.nodeName][node.nodeName] === 'string') {
			addpre = ".";
			method = mapToMethod[element.nodeName][node.nodeName];
		}
	} else if (typeof mapToMethod[element.nodeName] === 'string') {
		addpre = ".";
		method = mapToMethod[element.nodeName];
	}
	let cf = false;
	for (let a in node.attributes) {
		let attrs = node.attributes;
		try {
			parseInt(a);
			if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
				let cfmethod = attrs[a].nodeName;
				if (cfmethod === 'containerField') {
					cf = true;
				}
			}
		} catch (e) {
			console.log(e);
		}
	}
	if (!cf) {
		return "		"+element.nodeName+n+addpre+method+"("+node.nodeName+n+'_'+cn+");\n";
	} else {
		return "";
	}
}

JavaSerializer.subSerializeToString = function(element, n, grandparent, gn) {
	n = n || 0;
	let str = "";
	if (n === 0) {
		str += "		"+element.nodeName+"Object "+element.nodeName+n+" = new "+element.nodeName+"Object();\n";
        }
	for (let cn in element.childNodes) {
		let node = element.childNodes[cn];
		if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
			str += "		"+node.nodeName+"Object "+node.nodeName+n+'_'+cn+" = new "+node.nodeName+"Object();\n";
			str += JavaSerializer.subSerializeToString(node, n+'_'+cn, element, ""+n);
			str += printParentChild(element, n, node, cn);
		}
	}
	for (let a in element.attributes) {
		let attrs = element.attributes;
		try {
			parseInt(a);
			if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
				let attr = attrs[a].nodeName;
				if (attr == "xmlns:xsd" || attr == "xsd:noNamespaceSchemaLocation") {
					continue;
				}
				if (attr === 'containerField') {
					let method = attrs[a].nodeValue;
					method = "set"+method.charAt(0).toUpperCase() + method.slice(1);
					str += "		"+grandparent.nodeName+gn+"."+method+"(";
					str += element.nodeName+n;
					console.log(grandparent.nodeName+gn+"."+method+"("+element.nodeName+n+")");
				} else {
					let method = attr;
					let attrType = fieldTypes[element.nodeName][attr];
					method = "set"+method.charAt(0).toUpperCase() + method.slice(1);
					str += "		"+element.nodeName+n+"."+method+"(";
					if (attrs[a].nodeValue == 'NULL') {
						str += "null";
					} else if (attrType === "SFString") {
						str += '"'+attrs[a].nodeValue.replace(/\\?"/g, "&quot;")+'"';
					} else if (attrType === "SFInt32") {
						str += attrs[a].nodeValue;
					} else if (attrType === "SFFloat") {
						str += attrs[a].nodeValue+"f";
					} else if (attrType === "SFDouble") {
						str += attrs[a].nodeValue+"d";
					} else if (attrType === "SFBool") {
						str += attrs[a].nodeValue
					} else if (attrType === "MFString") {
						str += "new String[] {"+attrs[a].nodeValue.split('" "').join('","')+"}";
					} else if (
						attrType === "MFInt32"||
						attrType === "MFImage"||
						attrType === "SFImage") {
						str += "new int[] {"+attrs[a].nodeValue.split(' ').join(',')+"}";
					} else if (
						attrType === "SFColor"||
						attrType === "MFColor"||
						attrType === "SFColorRGBA"||
						attrType === "MFColorRGBA"||
						attrType === "SFVec2f"||
						attrType === "SFVec3f"||
						attrType === "SFVec4f"||
						attrType === "MFVec2f"||
						attrType === "MFVec3f"||
						attrType === "MFVec4f"||
						attrType === "SFMatrix3f"||
						attrType === "SFMatrix4f"|
						attrType === "MFMatrix3f"||
						attrType === "MFMatrix4f"|
						attrType === "SFRotation"|
						attrType === "MFRotation"|
						attrType === "MFFloat") {
						str += "new float[] {"+attrs[a].nodeValue.split(' ').join('f,')+"f}";
					} else if (
						attrType === "SFVec2d"||
						attrType === "SFVec3d"||
						attrType === "SFVec4d"|
						attrType === "MFVec2d"||
						attrType === "MFVec3d"||
						attrType === "MFVec4d"|
						attrType === "SFMatrix3d"||
						attrType === "SFMatrix4d"|
						attrType === "MFMatrix3d"||
						attrType === "MFMatrix4d"|
						attrType === "MFDouble") {
						str += "new double[] {"+attrs[a].nodeValue.split(' ').join('d,')+"d}";
					} else if (attrType === "MFBool") {
						str += "new boolean[] {"+attrs[a].nodeValue.split(' ').join(',')+"}";
					} else {
						str += attrs[a].nodeValue;
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
