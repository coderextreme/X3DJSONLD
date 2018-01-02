load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("creator").setContent("John W Carlson"))
        .addMeta(new metaObject().setName("created").setContent("December 13 2015"))
        .addMeta(new metaObject().setName("title").setContent("text.x3d"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/text.x3d"))
        .addMeta(new metaObject().setName("description").setContent("test \\n text"))
        .addMeta(new metaObject().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new SceneObject()
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(Java.to(["Node\"\"\"".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyleObject()))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(Java.to(["Node2".replace(/\"/g, "\\\""),"\\".replace(/\"/g, "\\\""),"\\\\".replace(/\"/g, "\\\""),"Node2".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyleObject()))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(Java.to(["Node3 \\\\ \\".replace(/\"/g, "\\\""),"Node3\"\"\"".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyleObject()))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())))
          .addChild(new ScriptObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("frontUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"rnl_front.png\" \"uffizi_front.png\""))
            .setSourceCode("ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';\n"+
""))))      ;
    X3D0.toFileX3D("../data/text.new.x3d");
