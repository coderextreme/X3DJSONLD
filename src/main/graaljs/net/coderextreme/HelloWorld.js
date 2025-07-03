load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComments(new CommentsBlock("Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON"))
        .addMeta(new meta().setName("title").setContent("HelloWorld.x3d"))
        .addMeta(new meta().setName("description").setContent("Simple X3D model example: Hello World!"))
        .addMeta(new meta().setName("created").setContent("30 October 2000"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("Image").setContent("HelloWorld.tall.png"))
        .addMeta(new meta().setName("reference").setContent("http://en.wikipedia.org/wiki/Hello_world"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"))
        .addMeta(new meta().setName("reference").setContent("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"))
        .addMeta(new meta().setName("reference").setContent("http://www.HelloWorldExample.net"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/realtime-3d/news/internationalization-x3d"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HelloWorld.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"))
        .addMeta(new meta().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.wrl"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.x3dv"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.x3db"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.xhtml"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.json")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Example scene to illustrate X3D nodes and fields (XML elements and attributes)"))
        .addChild(new WorldInfo().setInfo(Java.to(["Example scene to illustrate a simple X3D model"], Java.type("java.lang.String[]"))).setTitle("Hello World!"))
        .addChild(new Group()
          .addChild(new Viewpoint().setDEF("ViewUpClose").setCenterOfRotation(Java.to(doubleToFloat([0,-1,0]), Java.type("float[]"))).setDescription("Hello world!").setPosition(Java.to(doubleToFloat([0,-1,7]), Java.type("float[]"))))
          .addChild(new Transform().setRotation(Java.to(doubleToFloat([0,1,0,3]), Java.type("float[]")))
            .addChild(new Shape()
              .setGeometry(new Sphere())
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("MaterialLightBlue").setDiffuseColor(Java.to(doubleToFloat([0.1,0.5,1]), Java.type("float[]"))))
                .setTexture(new ImageTexture().setDEF("ImageCloudlessEarth").setUrl(Java.to(["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"], Java.type("java.lang.String[]")))))))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,-2,0]), Java.type("float[]")))
            .addChild(new Shape()
              .setGeometry(new Text().setDEF("TextMessage").setString(Java.to(["Hello","world!"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]")))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("MaterialLightBlue")))))))      ;
    X3D0.toFileX3D(".././HelloWorld.new.graal.x3d");
    X3D0.toFileJSON(".././HelloWorld.new.graal.json");
