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
        .addMeta((new autoclass.meta()).setName("title").setContent("arc3.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("a generic proto to connect two objects")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Viewpoint()).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(5)])).setDescription("Only Viewpoint"))
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.4)])).setTransparency(java.newFloat(0)))
        .addChild((new autoclass.Transform()).setDEF("DECLpoint_G1_node").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.1)))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
          .addChild((new autoclass.PositionInterpolator()).setDEF("DECLpoint_G1_PI1").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
          .addChild((new autoclass.TimeSensor()).setDEF("DECLpoint_G1_CL1").setCycleInterval(3).setLoop(true))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G1_CL1").setFromField("cycleTime").setToNode("DECLpoint_G1_MB1").setToField("set_location"))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G1_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G1_PI1").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G1_MB1").setFromField("keyValue").setToNode("DECLpoint_G1_PI1").setToField("keyValue"))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G1_PI1").setFromField("value_changed").setToNode("DECLpoint_G1_node").setToField("set_translation"))
          .addX3DScript((new autoclass.X3DScript()).setDEF("DECLpoint_G1_MB1")
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("old").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("set_location").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setName("keyValue").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))))
        .addChild((new autoclass.Transform()).setDEF("DECLpoint_G2_node").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.1)))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
          .addChild((new autoclass.PositionInterpolator()).setDEF("DECLpoint_G2_PI1").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
          .addChild((new autoclass.TimeSensor()).setDEF("DECLpoint_G2_CL1").setCycleInterval(3).setLoop(true))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G2_CL1").setFromField("cycleTime").setToNode("DECLpoint_G2_MB1").setToField("set_location"))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G2_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G2_PI1").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G2_MB1").setFromField("keyValue").setToNode("DECLpoint_G2_PI1").setToField("keyValue"))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G2_PI1").setFromField("value_changed").setToNode("DECLpoint_G2_node").setToField("set_translation"))
          .addX3DScript((new autoclass.X3DScript()).setDEF("DECLpoint_G2_MB1")
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("old").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("set_location").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setName("keyValue").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))))
        .addChild((new autoclass.Group()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Transform()).setDEF("DECLx3dconnector_connector1_trans").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .addChild((new autoclass.Transform()).setDEF("DECLx3dconnector_connector1_rotscale").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
              .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)])).setTransparency(java.newFloat(0.5))))
                .setGeometry((new autoclass.Cylinder()).setRadius(java.newFloat(0.05))))))
          .addX3DScript((new autoclass.X3DScript()).setDEF("DECLx3dconnector_connector1_S1")
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("startnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
              .addChild((new autoclass.Group()).setUSE("DECLpoint_G1_node")))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("endnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
              .addChild((new autoclass.Group()).setUSE("DECLpoint_G2_node")))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addChild((new autoclass.Transform()).setUSE("DECLx3dconnector_connector1_trans")))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("rotscale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addChild((new autoclass.Transform()).setUSE("DECLx3dconnector_connector1_rotscale")))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))))
        .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G1_node").setFromField("translation").setToNode("DECLx3dconnector_connector1_S1").setToField("set_startpoint"))
        .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G2_node").setFromField("translation").setToNode("DECLx3dconnector_connector1_S1").setToField("set_endpoint")))      ;
    X3D0.toFileX3D("../data/arc3.new.x3d");
