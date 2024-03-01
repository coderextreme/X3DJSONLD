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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("StringArrayEncodingExamples.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Demonstrate simple X3D MFString (string array) encoding."))
        .addMeta((new autoclass.meta()).setName("created").setContent("27 May 2017"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("27 May 2017"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("X3dHeaderPrototypeSyntaxExamples.x3d"))
        .addMeta((new autoclass.meta()).setName("specificationSection").setContent("X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString"))
        .addMeta((new autoclass.meta()).setName("specificationUrl").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString"))
        .addMeta((new autoclass.meta()).setName("specificationSection").setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString"))
        .addMeta((new autoclass.meta()).setName("specificationUrl").setContent("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString"))
        .addMeta((new autoclass.meta()).setName("specificationSection").setContent("X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString"))
        .addMeta((new autoclass.meta()).setName("specificationUrl").setContent("https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Viewpoint()).setDEF("EntryView").setDescription("Hello MFString syntax"))
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(0.6), java.newFloat(1), java.newFloat(0.8)])))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["One, Two, Three","","He said, \"Immel did it!\""]))
            .addComments((new autoclass.CommentsBlock("alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'")))
            .addComments((new autoclass.CommentsBlock("alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})")))
            .setFontStyle((new autoclass.FontStyle()).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setStyle("BOLD")))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.6), java.newFloat(0.4), java.newFloat(0.2)]))))))      ;
    X3D0.toFileX3D("../data/StringArrayEncodingExamples.new.node.x3d");
    X3D0.toFileJSON("../data/StringArrayEncodingExamples.new.node.json");
    process.exit(0);
