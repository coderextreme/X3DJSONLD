load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("Geospatial").setLevel(1))
        .addMeta(new meta().setName("title").setContent("geobubbles.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/geobubbles.x3d"))
        .addMeta(new meta().setName("description").setContent("geo bubbles")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/"))
        .addComments(new CommentsBlock("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/"))
        .addChild(new GeoViewpoint().setDEF("Tour").setPosition(Java.to([0,0,4], Java.type("double[]"))).setOrientation(Java.to([1,0,0,0], Java.type("float[]"))).setDescription("Tour Views"))
        .addChild(new Background().setBackUrl(Java.to(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"], Java.type("java.lang.String[]"))).setSkyColor(Java.to([0,0,0], Java.type("float[]"))).setTransparency(0))
        .addChild(new Transform().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
          .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([0.7,0.7,0.7], Java.type("float[]"))).setSpecularColor(Java.to([0.5,0.5,0.5], Java.type("float[]")))))))
        .addChild(new TimeSensor().setDEF("TourTime").setCycleInterval(5).setLoop(true))
        .addChild(new GeoPositionInterpolator().setDEF("TourPosition").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0.0015708,0,4,0,0.0015708,4], Java.type("double[]"))))
        .addChild(new ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle"))
        .addChild(new ROUTE().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue"))
        .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TourPosition").setFromField("geovalue_changed").setToNode("Tour").setToField("set_position")))      ;
    X3D0.toFileX3D("../data/geobubbles.new.x3d");
