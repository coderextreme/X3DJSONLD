var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("ViewFrustumExample.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("translated").setContent("16 August 2008"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("Sat, 30 Dec 2023 08:00:26 GMT"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("ViewFrustumPrototype.x3d"))
        .addMeta((new autoclass.meta()).setName("drawing").setContent("ViewFrustumComputation.png"))
        .addMeta((new autoclass.meta()).setName("Image").setContent("ViewFrustumOverheadView.png"))
        .addMeta((new autoclass.meta()).setName("Image").setContent("ViewFrustumObliqueView.png"))
        .addMeta((new autoclass.meta()).setName("Image").setContent("ViewpointCalculator.png"))
        .addMeta((new autoclass.meta()).setName("Image").setContent("ViewpointCalculatorComposed.png"))
        .addMeta((new autoclass.meta()).setName("subject").setContent("view culling frustum"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ExternProtoDeclare()).setName("ViewFrustum").setUrl(java.newArray("java.lang.String", ["ViewFrustumPrototype.x3d#ViewFrustum"]))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("ViewpointNode"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("NavigationInfoNode"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("visible"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("lineColor"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("frustumColor"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("transparency"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("aspectRatio"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("trace")))
        .addChild((new autoclass.WorldInfo()).setTitle("ViewFrustumExample.x3d"))
        .addChild((new autoclass.Viewpoint()).setDescription("ViewFrustum from above, looking down").setPosition(java.newArray("float", [java.newFloat(0f), java.newFloat(40f), java.newFloat(0f)])).setOrientation(java.newArray("float", [java.newFloat(1f), java.newFloat(0f), java.newFloat(0f), java.newFloat(-1.57f)])))
        .addChild((new autoclass.Viewpoint()).setDescription("ViewFrustum from point of view"))
        .addChild((new autoclass.Viewpoint()).setDescription("ViewFrustum behind point of view").setPosition(java.newArray("float", [java.newFloat(0f), java.newFloat(0f), java.newFloat(15f)])))
        .addChild((new autoclass.Viewpoint()).setDescription("ViewFrustum oblique side view").setPosition(java.newArray("float", [java.newFloat(-5f), java.newFloat(5f), java.newFloat(20f)])).setOrientation(java.newArray("float", [java.newFloat(0.8005f), java.newFloat(0.5926f), java.newFloat(0.0898f), java.newFloat(-0.3743f)])))
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE","FLY","ANY"])))
        .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("ViewFrustum"))
        .addChild((new autoclass.Inline()).setDEF("GridXZ").setGlobal(true).setUrl(java.newArray("java.lang.String", ["GridXZ_20x20Fixed.x3d"])))
        .addChild((new autoclass.Transform()).setScale(java.newArray("float", [java.newFloat(5f), java.newFloat(5f), java.newFloat(5f)]))
          .addChild((new autoclass.Inline()).setDEF("CoordinateAxes").setGlobal(true).setUrl(java.newArray("java.lang.String", ["CoordinateAxes.x3d"])))))      ;
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("ViewpointNode")
            .addChild((new autoclass.Viewpoint()).setDEF("_1").setDescription("ViewFrustum ViewpointNode")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("NavigationInfoNode")
            .addChild((new autoclass.NavigationInfo()).setDEF("_2").setVisibilityLimit(java.newFloat(15f))));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("transparency").setValue("0.75"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("trace").setValue("true"));
    X3D0.toFileX3D("../data/ViewFrustumExample.new.node.x3d");
    process.exit(0);
