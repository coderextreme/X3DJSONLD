load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("TextExamples.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Show different escape-character text examples for embedded quotation marks."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("7 April 2001"))
        .addMeta(new metaObject().setName("modified").setContent("26 April 2016"))
        .addMeta(new metaObject().setName("warning").setContent("Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control."))
        .addMeta(new metaObject().setName("warning").setContent("Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations."))
        .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new TransformObject().setTranslation(Java.to([0,2,0], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(Java.to(["Compare special character escaping".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyleObject().setDEF("testFontStyle").setJustify(Java.to(["MIDDLE".replace(/\"/g, "\\\""),"MIDDLE".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setSize(0.8)))
            .setAppearance(new AppearanceObject().setDEF("LightBlueAppearance")
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.1,0.7,0.7], Java.type("float[]")))))))
        .addChild(new TransformObject().setTranslation(Java.to([-3,0,0], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(Java.to(["I don't think so".replace(/\"/g, "\\\""),"".replace(/\"/g, "\\\""),"he said \"Hi\"".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyleObject().setUSE("testFontStyle")))
            .setAppearance(new AppearanceObject().setUSE("LightBlueAppearance"))))
        .addChild(new TransformObject().setTranslation(Java.to([3,0,0], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(Java.to(["I don't think so".replace(/\"/g, "\\\""),"".replace(/\"/g, "\\\""),"he said \"Hi\"".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyleObject().setUSE("testFontStyle")))
            .setAppearance(new AppearanceObject().setUSE("LightBlueAppearance")))))      ;
    X3D0.toFileX3D("../data/TextExamples.new.x3d");
