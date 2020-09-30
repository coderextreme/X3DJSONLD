load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("flower3.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d"))
        .addMeta(new meta().setName("description").setContent("a flower")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new DirectionalLight().setDirection(Java.to([0,-0.8,-0.2], Java.type("float[]"))).setIntensity(0.5))
        .addChild(new Background().setSkyColor(Java.to([1,1,1], Java.type("float[]"))).setTransparency(0))
        .addChild(new Viewpoint().setDescription("One mathematical orbital").setPosition(Java.to([0,0,50], Java.type("float[]"))))
        .addChild(new Transform().setDEF("OrbitTransform").setTranslation(Java.to([8,0,0], Java.type("float[]"))).setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
          .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([0,0.5,1], Java.type("float[]"))).setSpecularColor(Java.to([0,0.5,1], Java.type("float[]")))))
            .setGeometry(new IndexedFaceSet().setConvex(false).setDEF("Orbit")
              .setCoord(new Coordinate().setDEF("OrbitCoordinates")))))
        .addChild(new TimeSensor().setDEF("Clock").setCycleInterval(16).setLoop(true))
        .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("coordIndex"))
        .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
        .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction")))      ;
    X3D0.toFileX3D("../data/flower3.new.x3d");
