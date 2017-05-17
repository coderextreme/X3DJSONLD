load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("MFString.x3d"))
        .addMeta(new metaObject().setName("created").setContent("21 April 20017")))
      .setScene(new SceneObject()
        .addChild(new GroupObject()
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(Java.to(["Locked","FIRE!..\"\"FIRE!"], Java.type("java.lang.String[]"))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,0.75,0.18], Java.type("float[]"))))))))      ;
    X3D0.toFileX3D("../out/orig/MFString.new.x3d");
