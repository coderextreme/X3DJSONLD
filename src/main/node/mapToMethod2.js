var mapToMethod2 = {
	"Shape" : {
		"ProtoInstance" : "setGeometry"
	},
	"HAnimJoint" : {
		"Transform" : "addChildren"
	},
	"Appearance" : {
		"ProtoInstance" : "addShaders",
		"ProgramShader" : "addShaders",
		"ComposedShader" : "addShaders"
	},
	"ComposedShader" : {
		"field" : "addField"
	},
	"Script" : {
		"field" : "addField"
	},
	"MetadataSet" : {
		"ProtoInstance" : "setMetadata"
	},
	"RigidBody" : {
		"CollidableShape" : "addGeometry"
	},
	"HAnimHumanoid" : {
		"IS" : "addSkin",
		"HAnimJoint" : "addJoints",
		"HAnimSegment" : "addSegments",
		"HAnimSite" : "addViewpoints"
	},
	"X3DPickSensorNode" : {
		"IS" : "addPickedGeometry"
	},
	"VolumePickSensor" : {
		"IS" : "addPickedGeometry"
	},
	"PointPickSensor" : {
		"IS" : "addPickedGeometry"
	},
	"Collision" : {
		"Transform" : "setProxy",
		"Group" : "setProxy"
	},
	"PrimitivePickSensor" : {
		"IS" : "addPickedGeometry"
	},
	"LinePickSensor" : {
		"IS" : "addPickedGeometry"
	},
	"GeoMetadata" : {
		"IS" : "addData"
	},
	"GeoLOD" : {
		"IS" : "addRootNode",
		"GeoOrigin" : "setGeoOrigin"
	},
	"Scene" : {
		"LayerSet" : "addLayerSet",
		"MetadataString" : "addMetadata"
	}
};

if (typeof module === 'object')  {
	module.exports = mapToMethod2;
}
