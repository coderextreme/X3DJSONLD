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
        .addMeta((new autoclass.meta()).setName("title").setContent("HelloWorldMinimal.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Hello World minimal example scene."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("19 January 2020"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("24 January 2020"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://helloworldcollection.de"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://en.wiktionary.org/wiki/Hello_World"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("HelloWorldMinimal.x3d"))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["hello, world"])))))      ;
    X3D0.toFileX3D("../data/HelloWorldMinimal.new.node.x3d");
    process.exit(0);
