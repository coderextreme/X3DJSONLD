load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("IFS.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d"))
        .addMeta(new meta().setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
        .addMeta(new meta().setName("generator").setContent("h2.pl"))
        .addMeta(new meta().setName("modified").setContent("18 Jan 2023"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("9 November 2020"))
        .addComponent(new component().setName("HAnim").setLevel(1)))
      .setScene(new Scene()
        .addChild(new Group()
          .addChild(new Transform().setTranslation(Java.to([0,2.1,0], Java.type("double[]")))
            .addChild(new Shape().setDEF("HAnimSiteShape")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to([1,1,0], Java.type("double[]"))).setTransparency(0.3)))
              .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setSolid(false).setCreaseAngle(0.5).setCoordIndex(Java.to([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1], Java.type("int[]")))
                .setColor(new ColorRGBA().setDEF("HAnimSiteColorRGBA").setColor(Java.to([1,1,0,1,1,1,0,0.1], Java.type("double[]"))))
                .setCoord(new Coordinate().setPoint(Java.to([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0], Java.type("double[]"))))))))
        .addChild(new NavigationInfo().setSpeed(1.5))
        .addChild(new Viewpoint().setDescription("default")))      ;
    X3D0.toFileJSON("../data/IFS.new.graal.json");
