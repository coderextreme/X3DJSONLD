load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("creator").setContent("John W Carlson"))
        .addMeta(new meta().setName("created").setContent("December 13 2015"))
        .addMeta(new meta().setName("title").setContent("text.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/text.x3d"))
        .addMeta(new meta().setName("description").setContent("test \\\\n text")))
      .setScene(new Scene()
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material()))
            .setGeometry(new Text().setString(Java.to(["Node\"\"\""], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyle())))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material()))
            .setGeometry(new Text().setString(Java.to(["Node2","\\\\","\\\\\\\\","Node2"], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyle())))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material()))
            .setGeometry(new Text().setString(Java.to(["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyle())))
          .addChild(new Script()
            .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("frontUrls").setValue("\"rnl_front.png\" \"uffizi_front.png\""))
            .setSourceCode("ecmascript:
			    var me = '\"1\" \"\\\"2\" \"\\n3\"';"))))      ;
    X3D0.toFileX3D("../data/text.new.graal.x3d");
    X3D0.toFileJSON("../data/text.new.graal.json");
