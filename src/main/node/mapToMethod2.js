var mapToMethod2 = {
	"Shape" : {
		"MetadataString" : "addMetadata",
		"ProtoInstance" : "setGeometry"
	},
	"Transform" : {
		"Shape" : "addChild"
	},
	"HAnimJoint" : {
		"Transform" : "addChildren",
		"Shape" : "addChild",
		"HAnimSite" : "addChild",
		"Viewpoint" : "addChild"
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
		"HAnimSite" : "addViewpoints",
		"MetadataSet" : "addMetadata"
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
		"MetadataString" : "addMetadata",
		"MetadataSet" : "addChildren"
	},
	"field" : {
		"HAnimJoint" : "addChild"
	}
};
module.exports = mapToMethod2;
