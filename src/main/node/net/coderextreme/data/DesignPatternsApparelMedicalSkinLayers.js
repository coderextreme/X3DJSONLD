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
        .addMeta((new autoclass.meta()).setName("title").setContent("DesignPatternsApparelMedicalSkinLayers.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Design patterns for skin and apparel using HAnim2 standard in X3D4"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Joe D. Williams"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Dick Puk"))
        .addMeta((new autoclass.meta()).setName("created").setContent("23 December 2022"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("2 July 2023"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("DesignPatternsApparelVariations.txt"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"))
        .addMeta((new autoclass.meta()).setName("warning").setContent("Under development. This template example does not produce renderable HAnim models."))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("HAnimHumanoid skin design patterns for apparel, medical"))
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(0), java.newFloat(0.6), java.newFloat(0.6)])))
        .addChild((new autoclass.Group()).setDEF("MultipleHumanoids")
          .setMetadata((new autoclass.MetadataString()).setName("HAnimArchitecture").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile").setValue(java.newArray("java.lang.String", ["E.4 Multiple humanoids per file"]))))
        .addChild((new autoclass.Viewpoint()).setDEF("ViewHelpText").setDescription("Select text to see website").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(12)])))
        .addChild((new autoclass.Anchor()).setDescription("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches").setUrl(java.newArray("java.lang.String", ["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"])).setParameter(java.newArray("java.lang.String", ["target=blank"]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
            .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"]))
              .setFontStyle((new autoclass.FontStyle()).setFamily(java.newArray("java.lang.String", ["SANS"])).setStyle("BOLD").setSize(java.newFloat(0.6)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(1))))
            .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(11), java.newFloat(2), java.newFloat(0.001)]))))))      ;
    X3D0.toFileX3D("../data/DesignPatternsApparelMedicalSkinLayers.new.node.x3d");
    process.exit(0);
