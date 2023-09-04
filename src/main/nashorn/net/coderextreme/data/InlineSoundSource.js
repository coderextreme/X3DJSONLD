load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("InlineSoundSource.x3d"))
        .addMeta(new meta().setName("description").setContent("This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file."))
        .addMeta(new meta().setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
        .addMeta(new meta().setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("28 October 2020"))
        .addMeta(new meta().setName("modified").setContent("4 August 2021"))
        .addMeta(new meta().setName("reference").setContent("CHANGELOG.txt"))
        .addMeta(new meta().setName("reference").setContent("https://medialab.hmu.gr/minipages/x3domAudio"))
        .addMeta(new meta().setName("TODO").setContent("credit for audio files"))
        .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("InlineSoundSource.x3d"))
        .addChild(new NavigationInfo().setDEF("NAV"))
        .addChild(new Background().setFrontUrl(Java.to(["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"], Java.type("java.lang.String[]"))).setBackUrl(Java.to(["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDEF("Camera001").setDescription("Camera001").setPosition(Java.to([0,2000,3500], Java.type("double[]"))).setOrientation(Java.to([1,0,0,-0.523599], Java.type("double[]"))).setNearDistance(1).setFarDistance(0))
        .addChild(new Transform().setDEF("Floor").setTranslation(Java.to([1.241,0,0.358], Java.type("double[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("WireColor")
              .setMaterial(new Material().setDiffuseColor(Java.to([0.122,0.114,0.125], Java.type("double[]")))))
            .setGeometry(new IndexedFaceSet().setDEF("Box001-GEOMETRY").setSolid(false).setCoordIndex(Java.to([0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1], Java.type("int[]")))
              .setNormal(new Normal().setVector(Java.to([0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0], Java.type("double[]"))))
              .setCoord(new Coordinate().setPoint(Java.to([-1000,0,1000,-1000,0,-1000,1000,0,-1000,1000,0,-1000,1000,0,1000,-1000,0,1000,-1000,8.031588,1000,1000,8.031588,1000,1000,8.031588,-1000,1000,8.031588,-1000,-1000,8.031588,-1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,8.031588,1000,1000,8.031588,1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,0,-1000,1000,8.031588,-1000,1000,8.031588,-1000,1000,8.031588,1000,1000,0,1000,1000,0,-1000,-1000,0,-1000,-1000,8.031588,-1000,-1000,8.031588,-1000,1000,8.031588,-1000,1000,0,-1000,-1000,0,-1000,-1000,0,1000,-1000,8.031588,1000,-1000,8.031588,1000,-1000,8.031588,-1000,-1000,0,-1000], Java.type("double[]")))))))
        .addChild(new Transform().setDEF("InlineScene")
          .addChild(new Inline().setDEF("inline").setUrl(Java.to(["x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"], Java.type("java.lang.String[]"))))))      ;
    X3D0.toFileJSON("../data/InlineSoundSource.new.graal.json");
