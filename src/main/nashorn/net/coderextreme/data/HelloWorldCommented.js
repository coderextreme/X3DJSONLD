load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HelloWorldCommented.x3d"))
        .addMeta(new meta().setName("description").setContent("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives."))
        .addMeta(new meta().setName("created").setContent("19 December 2015"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("info").setContent("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental."))
        .addMeta(new meta().setName("reference").setContent("HelloWorldCommented.json"))
        .addMeta(new meta().setName("reference").setContent("HelloWorldCommentedOriginalEncoding.json"))
        .addMeta(new meta().setName("reference").setContent("HelloWorldCommentedAlternativeEncoding.json"))
        .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d"))
        .addMeta(new meta().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("Hello world!"))
        .addChild(new Group()
          .addChild(new Viewpoint().setDEF("ViewUpClose").setDescription("Hello world!").setPosition(Java.to([0,-1,7], Java.type("double[]"))).setCenterOfRotation(Java.to([0,-1,0], Java.type("double[]"))))
          .addChild(new Transform().setRotation(Java.to([0,1,0,3], Java.type("double[]")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("MaterialLightBlue").setDiffuseColor(Java.to([0.1,0.5,1], Java.type("double[]"))))
                .setTexture(new ImageTexture().setDEF("ImageCloudlessEarth").setUrl(Java.to(["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"], Java.type("java.lang.String[]")))))
              .setGeometry(new Sphere())))
          .addChild(new Transform().setTranslation(Java.to([0,-2,0], Java.type("double[]")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("MaterialLightBlue")))
              .setGeometry(new Text().setDEF("TextMessage").setString(Java.to(["Hello","world!"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]")))))))))      ;
    X3D0.toFileJSON("../data/HelloWorldCommented.new.graal.json");
