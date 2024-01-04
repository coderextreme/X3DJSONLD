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
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("BoxEm.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/box.x3d")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ProtoDeclare()).setName("anyShape")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("xtranslation"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("myShape")
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                .setGeometry((new autoclass.Sphere())))))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("xtranslation"))
                .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("myShape"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("three")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("ytranslation"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("myShape")
              .addChild((new autoclass.Shape()).setDEF("_1")
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                .setGeometry((new autoclass.Cylinder())))))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("anyShape")
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("anyShape")
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("anyShape")
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("ytranslation"))))))
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE"])))
        .addChild((new autoclass.Viewpoint()).setDescription("Cubes on Fire").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(12)])))
        .addChild(ProtoInstance3 = (new autoclass.ProtoInstance()).setDEF("threepi").setName("three"))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
          .addChild((new autoclass.Shape()).setUSE("box"))))      ;
ProtoInstance1
                .addFieldValue((new autoclass.fieldValue()).setName("xtranslation").setValue("2 0 0"));
ProtoInstance2
                .addFieldValue((new autoclass.fieldValue()).setName("xtranslation").setValue("-2 0 0"));
ProtoInstance3
          .addFieldValue((new autoclass.fieldValue()).setName("myShape")
            .addChild((new autoclass.Shape()).setDEF("box")
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))))
              .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))));
    X3D0.toFileX3D("../personal/BoxEm.new.node.x3d");
    process.exit(0);
