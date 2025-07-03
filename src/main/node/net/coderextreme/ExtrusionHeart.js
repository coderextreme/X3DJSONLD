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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("ExtrusionHeart.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Simple extrusion of a Valentine heart."))
        .addMeta(new autoclass.meta().setName("creator").setContent("Class participants in course Introduction to VRML/X3D."))
        .addMeta(new autoclass.meta().setName("created").setContent("14 February 2001"))
        .addMeta(new autoclass.meta().setName("modified").setContent("27 November 2015"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("license").setContent("../license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.Viewpoint().setDescription("Extrusion Heart").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(-4), java.newFloat(0)])))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-0.5), java.newFloat(0)]))
          .addChild(new autoclass.Shape()
            .setGeometry(new autoclass.Extrusion().setCreaseAngle(java.newFloat(3.14159)).setCrossSection(java.newArray("float", [java.newFloat(0), java.newFloat(0.8), java.newFloat(0.2), java.newFloat(1), java.newFloat(0.7), java.newFloat(0.95), java.newFloat(1), java.newFloat(0.5), java.newFloat(0.8), java.newFloat(0), java.newFloat(0.5), java.newFloat(-0.3), java.newFloat(0), java.newFloat(-0.7), java.newFloat(-0.5), java.newFloat(-0.3), java.newFloat(-0.8), java.newFloat(0), java.newFloat(-1), java.newFloat(0.5), java.newFloat(-0.7), java.newFloat(0.95), java.newFloat(-0.2), java.newFloat(1), java.newFloat(0), java.newFloat(0.8)])).setScale(java.newArray("float", [java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.8), java.newFloat(0.8), java.newFloat(1), java.newFloat(1), java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.01), java.newFloat(0.01)])).setSolid(false).setSpine(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(0), java.newFloat(0.5), java.newFloat(0), java.newFloat(0), java.newFloat(0.9), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)])))
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.3), java.newFloat(0.3)])))))))      ;
    X3D0.toFileX3D(".././ExtrusionHeart.new.node.x3d");
    X3D0.toFileJSON(".././ExtrusionHeart.new.node.json");
    process.exit(0);
