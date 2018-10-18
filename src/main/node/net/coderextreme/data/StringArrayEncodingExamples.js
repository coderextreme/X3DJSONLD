var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("StringArrayEncodingExamples.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Demonstrate simple X3D MFString (string array) encoding."))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("27 May 2017"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("27 May 2017"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Don Brutzman"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("X3dHeaderPrototypeSyntaxExamples.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("specificationSection").setContentSync("X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString"))
        .addMetaSync(new autoclass.meta().setNameSync("specificationUrl").setContentSync("http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString"))
        .addMetaSync(new autoclass.meta().setNameSync("specificationSection").setContentSync("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString"))
        .addMetaSync(new autoclass.meta().setNameSync("specificationUrl").setContentSync("http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString"))
        .addMetaSync(new autoclass.meta().setNameSync("specificationSection").setContentSync("X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString"))
        .addMetaSync(new autoclass.meta().setNameSync("specificationUrl").setContentSync("http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Viewpoint().setDEFSync("EntryView").setDescriptionSync("Hello MFString syntax"))
        .addChildSync(new autoclass.Background().setSkyColorSync(java.newArray("float", [java.newFloat(0.6), java.newFloat(1), java.newFloat(0.8)])))
        .addChildSync(new autoclass.Shape()
          .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["One, Two, Three","","He said, \"Immel did it!\""]))
            .addCommentsSync(new autoclass.CommentsBlock("alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'"))
            .addCommentsSync(new autoclass.CommentsBlock("alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})"))
            .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setStyleSync("BOLD")))
          .setAppearanceSync(new autoclass.Appearance()
            .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.6), java.newFloat(0.4), java.newFloat(0.2)]))))))      ;
    X3D0.toFileX3D("../data/StringArrayEncodingExamples.new.x3d");
