      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HelloWorld.x3d"))
        .addMeta(new meta().setName("description").setContent("Simple X3D scene example: Hello World!"))
        .addMeta(new meta().setName("created").setContent("30 October 2000"))
        .addMeta(new meta().setName("modified").setContent("14 April 2017"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("Image").setContent("HelloWorld.tall.png"))
        .addMeta(new meta().setName("reference").setContent("http://en.wikipedia.org/wiki/Hello_world"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"))
        .addMeta(new meta().setName("reference").setContent("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"))
        .addMeta(new meta().setName("reference").setContent("http://www.HelloWorldExample.net"))
        .addMeta(new meta().setName("reference").setContent("http://www.web3D.org"))
        .addMeta(new meta().setName("reference").setContent("http://www.web3d.org/realtime-3d/news/internationalization-x3d"))
        .addMeta(new meta().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/HelloWorld.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"))
        .addMeta(new meta().setName("license").setContent("http://www.web3d.org/x3d/content/examples/license.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.wrl"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.x3dv"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.x3db"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.xhtml"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.json"))
        .addComments(new CommentsBlock("Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Example scene to illustrate X3D nodes and fields (XML elements and attributes)"))
        .addChild(new WorldInfo().setTitle("Hello world!"))
        .addChild(new Group()
          .addChild(new Viewpoint().setDEF("ViewUpClose").setCenterOfRotation(java.newArray("float", [0,-1,0])).setDescription("Hello world!").setPosition(java.newArray("float", [0,-1,7])))
          .addChild(new Transform().setRotation(java.newArray("float", [0,1,0,3]))
            .addChild(new Shape()
              .setGeometry(new Sphere())
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("MaterialLightBlue").setDiffuseColor(java.newArray("float", [0.1,0.5,1])))
                .setTexture(new ImageTexture().setDEF("ImageCloudlessEarth").setUrl(java.newArray("java.lang.String", ["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","http://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]))))))
          .addChild(new Transform().setTranslation(java.newArray("float", [0,-2,0]))
            .addChild(new Shape()
              .setGeometry(new Text().setDEF("TextMessage").setString(java.newArray("java.lang.String", ["Hello","world!"]))
                .setFontStyle(new FontStyle().setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("MaterialLightBlue")))))))      ;
    X3D0.toFileX3D("../data/HelloWorld.new.x3d");