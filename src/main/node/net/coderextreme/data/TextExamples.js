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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("TextExamples.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Show different escape-character text examples for embedded quotation marks."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("7 April 2001"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("26 April 2016"))
        .addMeta((new autoclass.meta()).setName("warning").setContent("Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control."))
        .addMeta((new autoclass.meta()).setName("warning").setContent("Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations."))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Compare special character escaping"]))
              .setFontStyle((new autoclass.FontStyle()).setDEF("testFontStyle").setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSize(java.newFloat(0.8))))
            .setAppearance((new autoclass.Appearance()).setDEF("LightBlueAppearance")
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.7), java.newFloat(0.7)]))))))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-3), java.newFloat(0), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["I don't think so","","he said \"Hi\""]))
              .setFontStyle((new autoclass.FontStyle()).setUSE("testFontStyle")))
            .setAppearance((new autoclass.Appearance()).setUSE("LightBlueAppearance"))))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(3), java.newFloat(0), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["I don't think so","","he said \"Hi\""]))
              .setFontStyle((new autoclass.FontStyle()).setUSE("testFontStyle")))
            .setAppearance((new autoclass.Appearance()).setUSE("LightBlueAppearance")))))      ;
    X3D0.toFileX3D("../data/TextExamples.new.node.x3d");
    X3D0.toFileJSON("../data/TextExamples.new.node.json");
    process.exit(0);
