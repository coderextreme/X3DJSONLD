load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("app.x3d"))
        .addMeta(new meta().setName("creator").setContent("Carlson, I"))
        .addMeta(new meta().setName("creator").setContent("Carlson, II"))
        .addMeta(new meta().setName("creator").setContent("Carlson, III")))
      .setScene(new Scene()
        .addChild(new Group()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([1,0,0], Java.type("double[]")))))
            .setGeometry(new Box())))
        .addChild(new Transform().setRotation(Java.to([7,8,9,3.14], Java.type("double[]"))).setScale(Java.to([4,5,6], Java.type("double[]"))).setTranslation(Java.to([1,2,3], Java.type("double[]")))))      ;
    X3D0.toFileX3D("../data/app.new.graal.x3d");
    X3D0.toFileJSON("../data/app.new.graal.json");
