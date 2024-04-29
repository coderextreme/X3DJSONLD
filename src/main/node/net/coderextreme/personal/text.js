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
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("creator").setContent("John W Carlson"))
        .addMeta(new autoclass.meta().setName("created").setContent("December 13 2015"))
        .addMeta(new autoclass.meta().setName("title").setContent("text.x3d"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/text.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("test \\n text"))
        .addMeta(new autoclass.meta().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.Transform()
          .addChild(new autoclass.Shape()
            .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["Node\"\"\""]))
              .setFontStyle(new autoclass.FontStyle()))
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material())))
          .addChild(new autoclass.Shape()
            .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["Node2","\\\\","\\\\\\\\","Node2"]))
              .setFontStyle(new autoclass.FontStyle()))
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material())))
          .addChild(new autoclass.Shape()
            .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""]))
              .setFontStyle(new autoclass.FontStyle()))
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material())))
          .addChild(new autoclass.Script()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("frontUrls").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("\"rnl_front.png\" \"uffizi_front.png\""))
            .setSourceCode("ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';"))))      ;
    X3D0.toFileX3D("../personal/text.new.node.x3d");
    X3D0.toFileJSON("../personal/text.new.node.json");
    process.exit(0);
