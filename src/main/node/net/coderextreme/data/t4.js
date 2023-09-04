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
var ProtoInstance10 = null;
var ProtoInstance11 = null;
var ProtoInstance12 = null;
var ProtoInstance13 = null;
var ProtoInstance14 = null;
var ProtoInstance15 = null;
var ProtoInstance16 = null;
var ProtoInstance17 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("t4.x3d"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Andreas Plesch and John Carlson"))
        .addMeta((new autoclass.meta()).setName("source").setContent("t1.wrl"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Test Case for Proto Expander"))
        .addComponent((new autoclass.component()).setName("Networking").setLevel(2))
        .addComponent((new autoclass.component()).setName("Core").setLevel(2)))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ProtoDeclare()).setName("org")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("posi"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("col")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))
                    .setIS((new autoclass.IS())
                      .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(5.1))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("posi"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("r")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("n")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("i")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE","FLY","WALK"])).setAvatarSize(java.newArray("float", [java.newFloat(200), java.newFloat(200), java.newFloat(120)])).setSpeed(java.newFloat(3)))
        .addChild((new autoclass.WorldInfo()).setTitle("Arts Mapper"))
        .addChild((new autoclass.Viewpoint()).setDescription("looking North").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(60), java.newFloat(110)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.699999988079071)])).setFieldOfView(java.newFloat(0.7853981)))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-468), java.newFloat(0), java.newFloat(315)]))
          .addChild((new autoclass.Anchor()).setDescription("High Peak Community Arts").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance3 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("People Express").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance4 = (new autoclass.ProtoInstance()).setName("i")))
          .addChild((new autoclass.Anchor()).setDescription("QArts/Studios").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance5 = (new autoclass.ProtoInstance()).setName("i")))
          .addChild((new autoclass.Anchor()).setDescription("First Movement").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance6 = (new autoclass.ProtoInstance()).setName("n")))
          .addChild((new autoclass.Anchor()).setDescription("City Arts").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance7 = (new autoclass.ProtoInstance()).setName("i")))
          .addChild((new autoclass.Anchor()).setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance8 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("Watering Seeds").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance9 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("Fased In The Arts").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance10 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("27a Access Artspace").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance11 = (new autoclass.ProtoInstance()).setName("n")))
          .addChild((new autoclass.Anchor()).setDescription("Bamboozle Theatre Company").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance12 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("Mantle Community Arts").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance13 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("Artlink East").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance14 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("Creations").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance15 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("New Perspectives").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance16 = (new autoclass.ProtoInstance()).setName("n")))
          .addChild((new autoclass.Anchor()).setDescription("UKan2").setUrl(java.newArray("java.lang.String", ["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance17 = (new autoclass.ProtoInstance()).setName("r")))))      ;
ProtoInstance0
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.3 1"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("1 0 0.2"));
ProtoInstance2
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0.6 0 0.6"));
ProtoInstance3
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400 0.1 -385"));
ProtoInstance4
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.9 0.1 -319.6"));
ProtoInstance5
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("430 0.1 -335"));
ProtoInstance6
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.9 0.1 -360.3"));
ProtoInstance7
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("455.9 0.1 -341.3"));
ProtoInstance8
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.1 0.1 -341.5"));
ProtoInstance9
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("454 0.1 -361.3"));
ProtoInstance10
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440 0.1 -350"));
ProtoInstance11
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.9 0.1 -304.3"));
ProtoInstance12
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.1 0.1 -300.8"));
ProtoInstance13
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("442.4 0.1 -314.5"));
ProtoInstance14
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("491.6 0.1 -335.7"));
ProtoInstance15
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("467 0.1 -243.9"));
ProtoInstance16
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.4 0.1 -262.7"));
ProtoInstance17
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.7 0.1 -262.7"));
    X3D0.toFileX3D("../data/t4.new.node.x3d");
    process.exit(0);
