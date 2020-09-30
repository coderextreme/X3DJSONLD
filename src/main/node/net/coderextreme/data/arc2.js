var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("arc2.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("a generic proto to connect two objects")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Viewpoint()).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(5)])).setDescription("Only Viewpoint"))
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.4)])).setTransparency(java.newFloat(0)))
        .addChild((new autoclass.Transform()).setDEF("G1").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Transform()).setDEF("DECLpoint_INSTANCE_node").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
              .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.1)))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
            .addChild((new autoclass.PositionInterpolator()).setDEF("DECLpoint_INSTANCE_PI1").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
            .addChild((new autoclass.TimeSensor()).setDEF("DECLpoint_INSTANCE_CL1").setCycleInterval(3).setLoop(true))
            .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_INSTANCE_CL1").setFromField("cycleTime").setToNode("DECLpoint_INSTANCE_MB1").setToField("set_location"))
            .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_INSTANCE_CL1").setFromField("fraction_changed").setToNode("DECLpoint_INSTANCE_PI1").setToField("set_fraction"))
            .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_INSTANCE_MB1").setFromField("keyValue").setToNode("DECLpoint_INSTANCE_PI1").setToField("keyValue"))
            .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_INSTANCE_PI1").setFromField("value_changed").setToNode("DECLpoint_INSTANCE_node").setToField("set_translation"))
            .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_INSTANCE_MB1").setFromField("translation_changed").setToNode("DECLpoint_INSTANCE_node").setToField("set_translation"))
            .addX3DScript((new autoclass.X3DScript()).setDEF("DECLpoint_INSTANCE_MB1")
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("old").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("set_location").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setName("keyValue").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0")))))
        .addChild((new autoclass.Transform()).setDEF("G2").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Transform()).setDEF("DECLpoint_INSTANCE1000_node").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
              .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.1)))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
            .addChild((new autoclass.PositionInterpolator()).setDEF("DECLpoint_INSTANCE1000_PI1").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
            .addChild((new autoclass.TimeSensor()).setDEF("DECLpoint_INSTANCE1000_CL1").setCycleInterval(3).setLoop(true))
            .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_INSTANCE1000_CL1").setFromField("cycleTime").setToNode("DECLpoint_INSTANCE1000_MB1").setToField("set_location"))
            .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_INSTANCE1000_CL1").setFromField("fraction_changed").setToNode("DECLpoint_INSTANCE1000_PI1").setToField("set_fraction"))
            .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_INSTANCE1000_MB1").setFromField("keyValue").setToNode("DECLpoint_INSTANCE1000_PI1").setToField("keyValue"))
            .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_INSTANCE1000_PI1").setFromField("value_changed").setToNode("DECLpoint_INSTANCE1000_node").setToField("set_translation"))
            .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_INSTANCE1000_MB1").setFromField("translation_changed").setToNode("DECLpoint_INSTANCE1000_node").setToField("set_translation"))
            .addX3DScript((new autoclass.X3DScript()).setDEF("DECLpoint_INSTANCE1000_MB1")
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("old").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("set_location").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setName("keyValue").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0")))))
        .addChild((new autoclass.Transform()).setDEF("transC1").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Transform()).setDEF("rotscaleC1").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)])).setTransparency(java.newFloat(0.5))))
              .setGeometry((new autoclass.Cylinder()).setRadius(java.newFloat(0.05))))))
        .addChild((new autoclass.ROUTE()).setFromNode("G1").setFromField("translation_changed").setToNode("DECLx3dconnector_connector1_S1").setToField("set_startpoint"))
        .addChild((new autoclass.ROUTE()).setFromNode("G2").setFromField("translation_changed").setToNode("DECLx3dconnector_connector1_S1").setToField("set_endpoint")))      ;
    X3D0.toFileX3D("../data/arc2.new.x3d");
