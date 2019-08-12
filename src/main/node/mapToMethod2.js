var mapToMethod2 = {
	"Shape" : {
		"ProtoInstance": "setGeometry"
	},
	"HAnimJoint" : {
		"Transform" : "addChild"
	},
	"Appearance" : {
		"ProtoInstance" : "setMaterial"
	},
	"ComposedShader" : {
		"field" : "addField",
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
		"HAnimSite": "addViewpoints",
		"HAnimSegment": "addSegments",
		"Group" : "addSkeleton"
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
	"PrimitivePickSensor" : {
		"IS" : "addPickedGeometry"
	},
	"GeoLOD" : {
		"IS" : "addRootNode"
	},
	"LinePickSensor" : {
		"IS" : "addPickedGeometry"
	},
	"GeoMetadata" : {
		"IS" : "addData"
	},
	"GeoLOD" : {
		"GeoOrigin" : "setGeoOrigin"
	},
	"Scene" : {
		"Metadata" : "addMetadata",
		"MetadataString" : "addMetadata",
		"LayerSet" : "addLayerSet"
	},
	"HAnimHumanoid" : {
		"HAnimJoint" : "addJoints",
		"HAnimSegment" : "addSegments"
	}
};

if (typeof module === 'object')  {
	module.exports = mapToMethod2;
}
