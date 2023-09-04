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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("HelloWorldCommented.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives."))
        .addMeta((new autoclass.meta()).setName("created").setContent("19 December 2015"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("info").setContent("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental."))
        .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldCommented.json"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldCommentedOriginalEncoding.json"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldCommentedAlternativeEncoding.json"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d"))
        .addMeta((new autoclass.meta()).setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("Hello world!"))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Viewpoint()).setDEF("ViewUpClose").setDescription("Hello world!").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(7)])).setCenterOfRotation(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(0)])))
          .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(3)]))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDEF("MaterialLightBlue").setDiffuseColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.5), java.newFloat(1)])))
                .setTexture((new autoclass.ImageTexture()).setDEF("ImageCloudlessEarth").setUrl(java.newArray("java.lang.String", ["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]))))
              .setGeometry((new autoclass.Sphere()))))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("MaterialLightBlue")))
              .setGeometry((new autoclass.Text()).setDEF("TextMessage").setString(java.newArray("java.lang.String", ["Hello","world!"]))
                .setFontStyle((new autoclass.FontStyle()).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))))))      ;
    X3D0.toFileX3D("../data/HelloWorldCommented.new.node.x3d");
    process.exit(0);
