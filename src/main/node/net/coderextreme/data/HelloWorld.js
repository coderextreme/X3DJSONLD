var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addComments((new autoclass.CommentsBlock("Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON")))
        .addMeta(new autoclass.meta().setName("title").setContent("HelloWorld.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Simple X3D model example: Hello World!"))
        .addMeta(new autoclass.meta().setName("created").setContent("30 October 2000"))
        .addMeta(new autoclass.meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new autoclass.meta().setName("Image").setContent("HelloWorld.tall.png"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://en.wikipedia.org/wiki/Hello_world"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://www.HelloWorldExample.net"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/realtime-3d/news/internationalization-x3d"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HelloWorld.x3d"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"))
        .addMeta(new autoclass.meta().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("reference").setContent("HelloWorld.wrl"))
        .addMeta(new autoclass.meta().setName("reference").setContent("HelloWorld.x3dv"))
        .addMeta(new autoclass.meta().setName("reference").setContent("HelloWorld.x3db"))
        .addMeta(new autoclass.meta().setName("reference").setContent("HelloWorld.xhtml"))
        .addMeta(new autoclass.meta().setName("reference").setContent("HelloWorld.json")))
      .setScene(new autoclass.Scene()
        .addComments((new autoclass.CommentsBlock("Example scene to illustrate X3D nodes and fields (XML elements and attributes)")))
        .addChild(new autoclass.WorldInfo().setInfo(java.newArray("java.lang.String", ["Example scene to illustrate a simple X3D model"])).setTitle("Hello World!"))
        .addChild(new autoclass.Group()
          .addChild(new autoclass.Viewpoint().setDEF("ViewUpClose").setCenterOfRotation(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(0)])).setDescription("Hello world!").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(7)])))
          .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(3)]))
            .addChild(new autoclass.Shape()
              .setGeometry(new autoclass.Sphere())
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDEF("MaterialLightBlue").setDiffuseColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.5), java.newFloat(1)])))
                .setTexture(new autoclass.ImageTexture().setDEF("ImageCloudlessEarth").setUrl(java.newArray("java.lang.String", ["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]))))))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2), java.newFloat(0)]))
            .addChild(new autoclass.Shape()
              .setGeometry(new autoclass.Text().setDEF("TextMessage").setString(java.newArray("java.lang.String", ["Hello","world!"]))
                .setFontStyle(new autoclass.FontStyle().setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setUSE("MaterialLightBlue")))))))      ;
    X3D0.toFileX3D("../data/HelloWorld.new.node.x3d");
    X3D0.toFileJSON("../data/HelloWorld.new.node.json");
    process.exit(0);
