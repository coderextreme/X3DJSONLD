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
      var X3D0 =  (new autoclass.X3D()).setVersion("3.0").setProfile("Immersive")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("Scripting.x3d")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Script()).setDEF("OpenVault")
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("openVault").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("combinationEntered").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("vaultUnlocked").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("unlocked").setValue("false").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
          .setSourceCode("ecmascript:\n"+
"\n"+
"      function combinationEntered (value) {\n"+
"\n"+
"        unlocked = value;\n"+
"\n"+
"      }\n"+
"\n"+
"      function openVault(value) {\n"+
"\n"+
"      if (unlocked) vaultUnlocked = value;\n"+
"\n"+
"      }"))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))
          .setGeometry((new autoclass.Sphere())))
        .addChild((new autoclass.Sound()).setMaxBack(java.newFloat(1000)).setMaxFront(java.newFloat(1000)).setMinBack(java.newFloat(1000)).setMinFront(java.newFloat(1000))
          .setSource((new autoclass.AudioClip()).setDEF("Click").setStopTime(1).setDescription("clicking sound").setUrl(java.newArray("java.lang.String", ["../resources/chandubabamusic1.wav"]))))
        .addChild((new autoclass.TouchSensor()).setDEF("TS"))
        .addChild((new autoclass.ROUTE()).setFromNode("TS").setFromField("isOver").setToNode("OpenVault").setToField("combinationEntered"))
        .addChild((new autoclass.ROUTE()).setFromNode("TS").setFromField("touchTime").setToNode("OpenVault").setToField("openVault"))
        .addChild((new autoclass.ROUTE()).setFromNode("OpenVault").setFromField("vaultUnlocked").setToNode("Click").setToField("startTime")))      ;
    X3D0.toFileX3D("../data/JoeExample.new.node.x3d");
    X3D0.toFileJSON("../data/JoeExample.new.node.json");
    process.exit(0);
