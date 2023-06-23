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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addComponent((new autoclass.component()).setName("Networking").setLevel(2))
        .addComponent((new autoclass.component()).setName("Core").setLevel(2))
        .addMeta((new autoclass.meta()).setName("title").setContent("t4.x3d"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Andreas Plesch and John Carlson"))
        .addMeta((new autoclass.meta()).setName("source").setContent("t1.wrl"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Test Case for Proto Expander"))
        .addMeta((new autoclass.meta()).setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE","FLY","WALK"])).setSpeed(java.newFloat(3)).setAvatarSize(java.newArray("float", [java.newFloat(200), java.newFloat(200), java.newFloat(120)])))
        .addChild((new autoclass.WorldInfo()).setTitle("Arts Mapper"))
        .addChild((new autoclass.Viewpoint()).setDescription("looking North").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(60), java.newFloat(110)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.699999988079071)])).setFieldOfView(java.newFloat(0.785398125648499)))
        .addChild((new autoclass.ProtoDeclare()).setName("org")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("posi").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("col").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("posi")))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))
                    .setIS((new autoclass.IS())
                      .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(5.10000002384186)))))))
        .addChild((new autoclass.ProtoDeclare()).setName("r")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("pos").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("n")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("pos").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("i")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("pos").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-468), java.newFloat(0), java.newFloat(315)]))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("High Peak Community Arts")
            .addChild(ProtoInstance3 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("People Express")
            .addChild(ProtoInstance4 = (new autoclass.ProtoInstance()).setName("i")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("QArts/Studios")
            .addChild(ProtoInstance5 = (new autoclass.ProtoInstance()).setName("i")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("First Movement")
            .addChild(ProtoInstance6 = (new autoclass.ProtoInstance()).setName("n")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("City Arts")
            .addChild(ProtoInstance7 = (new autoclass.ProtoInstance()).setName("i")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Indigo Dance Group (Salamanda Tandem)")
            .addChild(ProtoInstance8 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Watering Seeds")
            .addChild(ProtoInstance9 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Fased In The Arts")
            .addChild(ProtoInstance10 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("27a Access Artspace")
            .addChild(ProtoInstance11 = (new autoclass.ProtoInstance()).setName("n")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Bamboozle Theatre Company")
            .addChild(ProtoInstance12 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Mantle Community Arts")
            .addChild(ProtoInstance13 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Artlink East")
            .addChild(ProtoInstance14 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Creations")
            .addChild(ProtoInstance15 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("New Perspectives")
            .addChild(ProtoInstance16 = (new autoclass.ProtoInstance()).setName("n")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", [", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("UKan2")
            .addChild(ProtoInstance17 = (new autoclass.ProtoInstance()).setName("r")))))      ;
ProtoInstance0
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.300000011920929 1"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("1 0 0.200000002980232"));
ProtoInstance2
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0.600000023841858 0 0.600000023841858"));
ProtoInstance3
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400 0.100000001490116 -385"));
ProtoInstance4
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.899993896484 0.100000001490116 -319.600006103516"));
ProtoInstance5
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("430 0.100000001490116 -335"));
ProtoInstance6
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.899993896484 0.100000001490116 -360.299987792969"));
ProtoInstance7
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("455.899993896484 0.100000001490116 -341.299987792969"));
ProtoInstance8
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.100006103516 0.100000001490116 -341.5"));
ProtoInstance9
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("454 0.100000001490116 -361.299987792969"));
ProtoInstance10
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440 0.100000001490116 -350"));
ProtoInstance11
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.899993896484 0.100000001490116 -304.299987792969"));
ProtoInstance12
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.100006103516 0.100000001490116 -300.799987792969"));
ProtoInstance13
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("442.399993896484 0.100000001490116 -314.5"));
ProtoInstance14
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("491.600006103516 0.100000001490116 -335.700012207031"));
ProtoInstance15
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("467 0.100000001490116 -243.899993896484"));
ProtoInstance16
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.399993896484 0.100000001490116 -262.700012207031"));
ProtoInstance17
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.700012207031 0.100000001490116 -262.700012207031"));
    X3D0.toFileX3D("../data/t4.new.x3d");
    process.exit(0);
