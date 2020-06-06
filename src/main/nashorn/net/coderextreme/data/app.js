load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("4.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("John W").setContent("Carlson, I"))
        .addMeta(new metaObject().setName("John A").setContent("Carlson, II"))
        .addMeta(new metaObject().setName("John R").setContent("Carlson, III")))
      .setScene(new SceneObject()
        .addChild(new GroupObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]")))))
            .setGeometry(new BoxObject())))
        .addChild(new TransformObject().setRotation(Java.to([7,8,9,3.14], Java.type("float[]"))).setScale(Java.to([4,5,6], Java.type("float[]"))).setTranslation(Java.to([1,2,3], Java.type("float[]")))))      ;
    X3D0.toFileX3D("../data/app.new.x3d");
