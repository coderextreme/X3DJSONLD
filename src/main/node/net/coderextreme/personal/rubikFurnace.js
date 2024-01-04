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
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
var ProtoInstance7 = null;
var ProtoInstance8 = null;
var ProtoInstance9 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("rubikFurnace.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d")))
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
                .setGeometry((new autoclass.Sphere())))))
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
        .addChild((new autoclass.ProtoDeclare()).setName("nine")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("ztranslation"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("myShape")
              .addChild((new autoclass.Shape()).setDEF("_2")
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                .setGeometry((new autoclass.Sphere())))))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild(ProtoInstance3 = (new autoclass.ProtoInstance()).setName("three")
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance4 = (new autoclass.ProtoInstance()).setName("three")
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance5 = (new autoclass.ProtoInstance()).setName("three")
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("ztranslation"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("twentyseven")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("ttranslation"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("myShape")
              .addChild((new autoclass.Shape()).setDEF("_3")
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                .setGeometry((new autoclass.Sphere())))))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild(ProtoInstance6 = (new autoclass.ProtoInstance()).setName("nine")
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance7 = (new autoclass.ProtoInstance()).setName("nine")
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance8 = (new autoclass.ProtoInstance()).setName("nine")
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("ttranslation"))))))
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE"])))
        .addChild((new autoclass.Viewpoint()).setDescription("Rubiks Cube on Fire").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(12)])))
        .addChild(ProtoInstance9 = (new autoclass.ProtoInstance()).setName("twentyseven")))      ;
ProtoInstance1
                .addFieldValue((new autoclass.fieldValue()).setName("xtranslation").setValue("2 0 0"));
ProtoInstance2
                .addFieldValue((new autoclass.fieldValue()).setName("xtranslation").setValue("-2 0 0"));
ProtoInstance4
                .addFieldValue((new autoclass.fieldValue()).setName("ytranslation").setValue("0 2 0"));
ProtoInstance5
                .addFieldValue((new autoclass.fieldValue()).setName("ytranslation").setValue("0 -2 0"));
ProtoInstance7
                .addFieldValue((new autoclass.fieldValue()).setName("ztranslation").setValue("0 0 2"));
ProtoInstance8
                .addFieldValue((new autoclass.fieldValue()).setName("ztranslation").setValue("0 0 -2"));
ProtoInstance9
          .addFieldValue((new autoclass.fieldValue()).setName("myShape")
            .addChild((new autoclass.Shape()).setDEF("_4")
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))))
              .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))));
    X3D0.toFileX3D("../personal/rubikFurnace.new.node.x3d");
    process.exit(0);
