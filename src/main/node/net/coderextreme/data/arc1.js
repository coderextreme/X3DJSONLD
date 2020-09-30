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
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("arc1.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("a generic proto to connect two objects")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Viewpoint()).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(5)])).setDescription("Only Viewpoint"))
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.4)])).setTransparency(java.newFloat(0)))
        .addChild((new autoclass.ProtoDeclare()).setName("point")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform()).setDEF("node").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation")))
              .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
                .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.1)))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
              .addChild((new autoclass.PositionInterpolator()).setDEF("PI1").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
              .addChild((new autoclass.TimeSensor()).setDEF("CL1").setCycleInterval(3).setLoop(true))
              .addChild((new autoclass.ROUTE()).setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
              .addChild((new autoclass.ROUTE()).setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
              .addChild((new autoclass.ROUTE()).setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
              .addChild((new autoclass.ROUTE()).setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation"))
              .addChild((new autoclass.ROUTE()).setFromNode("MB1").setFromField("translation_changed").setToNode("node").setToField("set_translation"))
              .addX3DScript((new autoclass.X3DScript()).setDEF("MB1")
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("old").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("set_location").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setName("keyValue").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))))))
        .addChild((new autoclass.Transform()).setDEF("G1").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("point")))
        .addChild((new autoclass.Transform()).setDEF("G2").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("point")))
        .addChild((new autoclass.Transform()).setDEF("transC1").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Transform()).setDEF("rotscaleC1").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)])).setTransparency(java.newFloat(0.5))))
              .setGeometry((new autoclass.Cylinder()).setRadius(java.newFloat(0.05))))))
        .addChild((new autoclass.ProtoDeclare()).setName("x3dconnector")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("startnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("endnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("transnode").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("rotscalenode").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody((new autoclass.ProtoBody())
            .setX3DScript((new autoclass.X3DScript()).setDEF("S1")
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("startnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("endnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("transnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("rotscalenode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("startnode").setProtoField("startnode"))
                .addConnect((new autoclass.connect()).setNodeField("endnode").setProtoField("endnode"))
                .addConnect((new autoclass.connect()).setNodeField("transnode").setProtoField("transnode"))
                .addConnect((new autoclass.connect()).setNodeField("rotscalenode").setProtoField("rotscalenode"))
                .addConnect((new autoclass.connect()).setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect((new autoclass.connect()).setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
        .addChild(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("x3dconnector").setDEF("connector1"))
        .addChild((new autoclass.ROUTE()).setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
        .addChild((new autoclass.ROUTE()).setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint")))      ;
ProtoInstance2
          .addFieldValue((new autoclass.fieldValue()).setName("startnode")
            .addChild((new autoclass.Transform()).setUSE("G1")));
ProtoInstance2
          .addFieldValue((new autoclass.fieldValue()).setName("endnode")
            .addChild((new autoclass.Transform()).setUSE("G2")));
ProtoInstance2
          .addFieldValue((new autoclass.fieldValue()).setName("transnode")
            .addChild((new autoclass.Transform()).setUSE("transC1")));
ProtoInstance2
          .addFieldValue((new autoclass.fieldValue()).setName("rotscalenode")
            .addChild((new autoclass.Transform()).setUSE("rotscaleC1")));
ProtoInstance2
          .addFieldValue((new autoclass.fieldValue()).setName("set_startpoint"));
ProtoInstance2
          .addFieldValue((new autoclass.fieldValue()).setName("set_endpoint"));
    X3D0.toFileX3D("../data/arc1.new.x3d");
