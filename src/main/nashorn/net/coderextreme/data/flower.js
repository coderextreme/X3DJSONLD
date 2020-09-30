load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("flower.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d"))
        .addMeta(new meta().setName("description").setContent("a flower")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new DirectionalLight().setDirection(Java.to([0,-0.8,-0.2], Java.type("float[]"))).setIntensity(0.5))
        .addChild(new Background().setSkyColor(Java.to([1,1,1], Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("One mathematical orbital").setPosition(Java.to([0,0,50], Java.type("float[]"))))
        .addChild(new Transform().setTranslation(Java.to([0,-1,1], Java.type("float[]"))).setRotation(Java.to([0,1,0,3.1415926], Java.type("float[]"))).setScale(Java.to([1.5,1.5,1.5], Java.type("float[]"))).setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
          .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(0.1).setDiffuseColor(Java.to([0.9,0.3,0.3], Java.type("float[]"))).setSpecularColor(Java.to([0.8,0.8,0.8], Java.type("float[]"))).setShininess(0.145)))
            .setGeometry(new IndexedFaceSet().setCcw(false).setConvex(false).setCoordIndex(Java.to([0,1,2,-1], Java.type("int[]"))).setDEF("Orbit")
              .setCoord(new Coordinate().setDEF("OrbitCoordinates").setPoint(Java.to([0,0,1,0,1,0,1,0,0], Java.type("float[]")))))))
        .addChild(new TimeSensor().setDEF("Clock").setCycleInterval(16).setLoop(true))
        .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("coordIndex"))
        .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
        .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction")))      ;
    X3D0.toFileX3D("../data/flower.new.x3d");
