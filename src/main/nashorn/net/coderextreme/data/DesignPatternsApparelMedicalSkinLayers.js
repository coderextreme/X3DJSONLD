load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("DesignPatternsApparelMedicalSkinLayers.x3d"))
        .addMeta(new meta().setName("description").setContent("Design patterns for skin and apparel using HAnim2 standard in X3D4"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("creator").setContent("Joe D. Williams"))
        .addMeta(new meta().setName("creator").setContent("Dick Puk"))
        .addMeta(new meta().setName("created").setContent("23 December 2022"))
        .addMeta(new meta().setName("modified").setContent("2 July 2023"))
        .addMeta(new meta().setName("reference").setContent("DesignPatternsApparelVariations.txt"))
        .addMeta(new meta().setName("reference").setContent("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"))
        .addMeta(new meta().setName("reference").setContent("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"))
        .addMeta(new meta().setName("reference").setContent("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"))
        .addMeta(new meta().setName("warning").setContent("Under development. This template example does not produce renderable HAnim models."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnimHumanoid skin design patterns for apparel, medical"))
        .addChild(new Background().setSkyColor(Java.to([0,0.6,0.6], Java.type("double[]"))))
        .addChild(new Group().setDEF("MultipleHumanoids")
          .setMetadata(new MetadataString().setName("HAnimArchitecture").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile").setValue(Java.to(["E.4 Multiple humanoids per file"], Java.type("java.lang.String[]")))))
        .addChild(new Viewpoint().setDEF("ViewHelpText").setDescription("Select text to see website").setPosition(Java.to([0,0,12], Java.type("double[]"))))
        .addChild(new Anchor().setDescription("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches").setUrl(Java.to(["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"], Java.type("java.lang.String[]"))).setParameter(Java.to(["target=blank"], Java.type("java.lang.String[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([0.9,0.9,0.9], Java.type("double[]")))))
            .setGeometry(new Text().setString(Java.to(["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyle().setFamily(Java.to(["SANS"], Java.type("java.lang.String[]"))).setStyle("BOLD").setSize(0.6).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(1)))
            .setGeometry(new Box().setSize(Java.to([11,2,0.001], Java.type("double[]")))))))      ;
    X3D0.toFileJSON("../data/DesignPatternsApparelMedicalSkinLayers.new.graal.json");
