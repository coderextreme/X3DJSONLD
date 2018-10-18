var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John W Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("December 13 2015"))
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("text.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/text.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("test \\n text"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Transform()
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Node\"\"\""]))
              .setFontStyleSync(new autoclass.FontStyle()))
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material())))
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Node2","\\\\","\\\\\\\\","Node2"]))
              .setFontStyleSync(new autoclass.FontStyle()))
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material())))
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""]))
              .setFontStyleSync(new autoclass.FontStyle()))
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material())))
          .addChildSync(new autoclass.Script()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("frontUrls").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("\"rnl_front.png\" \"uffizi_front.png\""))
            .setSourceCodeSync("ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';"))))      ;
    X3D0.toFileX3D("../data/text.new.x3d");
