load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("4.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setContent("Carlson, I").setName("John W"))
        .addMeta(new metaObject().setContent("Carlson, II").setName("John A"))
        .addMeta(new metaObject().setContent("Carlson, III").setName("John R")))
      .setScene(new SceneObject()
        .addChild(new GroupObject().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]"))).setDisplayBBox(false).setVisible(true)
          .addChild(new ShapeObject().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]"))).setDisplayBBox(false).setVisible(true)
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setAmbientIntensity(0.2).setDiffuseColor(Java.to([1,0,0], Java.type("float[]"))).setEmissiveColor(Java.to([0,0,0], Java.type("float[]"))).setShininess(0.2).setSpecularColor(Java.to([0,0,0], Java.type("float[]"))).setTransparency(0)))
            .setGeometry(new BoxObject().setSize(Java.to([2,2,2], Java.type("float[]"))).setSolid(true))))
        .addChild(new TransformObject().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]"))).setCenter(Java.to([0,0,0], Java.type("float[]"))).setDisplayBBox(false).setRotation(Java.to([7,8,9,3.14], Java.type("float[]"))).setScale(Java.to([4,5,6], Java.type("float[]"))).setScaleOrientation(Java.to([0,0,1,0], Java.type("float[]"))).setTranslation(Java.to([1,2,3], Java.type("float[]"))).setVisible(true)))      ;
    X3D0.toFileX3D("../data/app.new.x3d");
