var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setContent("HelloWorld.x3d").setName("title"))
        .addMeta((new autoclass.meta()).setContent("Simple X3D scene example: Hello World!").setName("description"))
        .addMeta((new autoclass.meta()).setContent("30 October 2000").setName("created"))
        .addMeta((new autoclass.meta()).setContent("14 April 2017").setName("modified"))
        .addMeta((new autoclass.meta()).setContent("Don Brutzman").setName("creator"))
        .addMeta((new autoclass.meta()).setContent("HelloWorld.tall.png").setName("Image"))
        .addMeta((new autoclass.meta()).setContent("http://en.wikipedia.org/wiki/Hello_world").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://www.HelloWorldExample.net").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://www.web3D.org").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://www.web3d.org/realtime-3d/news/internationalization-x3d").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://www.web3d.org/x3d/content/examples/HelloWorld.x3d").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d").setName("identifier"))
        .addMeta((new autoclass.meta()).setContent("http://www.web3d.org/x3d/content/examples/license.html").setName("license"))
        .addMeta((new autoclass.meta()).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta((new autoclass.meta()).setContent("HelloWorld.wrl").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("HelloWorld.x3dv").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("HelloWorld.x3db").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("HelloWorld.xhtml").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("HelloWorld.json").setName("reference"))
        .addComments((new autoclass.CommentsBlock(" Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON "))))
      .setScene((new autoclass.Scene())
        .addComments((new autoclass.CommentsBlock(" Example scene to illustrate X3D nodes and fields (XML elements and attributes) ")))
        .addChild((new autoclass.WorldInfo()).setTitle("Hello world!"))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Viewpoint()).setDEF("ViewUpClose").setCenterOfRotation(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(0)])).setDescription("Hello world!").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(7)])))
          .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(3)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Sphere()))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDEF("MaterialLightBlue").setDiffuseColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.5), java.newFloat(1)])))
                .setTexture((new autoclass.ImageTexture()).setDEF("ImageCloudlessEarth").setUrl(java.newArray("java.lang.String", ["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","http://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]))))))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Text()).setDEF("TextMessage").setString(java.newArray("java.lang.String", ["Hello","world!"]))
                .setFontStyle((new autoclass.FontStyle()).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("MaterialLightBlue")))))))      ;
    X3D0.toFileX3D("../data/HelloWorld.new.x3d");
