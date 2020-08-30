load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("John W").setContent("Carlson, I"))
        .addMeta(new meta().setName("John A").setContent("Carlson, II"))
        .addMeta(new meta().setName("John R").setContent("Carlson, III")))
      .setScene(new Scene()
        .addChild(new Group().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]"))).setVisible(true)
          .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]"))).setVisible(true)
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([1,0,0], Java.type("float[]")))))
            .setGeometry(new Box().setSize(Java.to([2,2,2], Java.type("float[]"))).setSolid(true))))
        .addChild(new Transform().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]"))).setRotation(Java.to([7,8,9,3.14], Java.type("float[]"))).setScale(Java.to([4,5,6], Java.type("float[]"))).setTranslation(Java.to([1,2,3], Java.type("float[]"))).setVisible(true)))      ;
    X3D0.toFileX3D("../data/app.new.x3d");
