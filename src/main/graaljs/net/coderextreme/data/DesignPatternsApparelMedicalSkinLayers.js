load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array([d])[0];
}
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
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnimHumanoid skin design patterns for apparel, medical"))
        .addChild(new Background().setSkyColor(Java.to([doubleToFloat(0),doubleToFloat(0.6),doubleToFloat(0.6)], Java.type("float[]"))))
        .addChild(new Group().setDEF("MultipleHumanoids")
          .setMetadata(new MetadataString().setName("HAnimArchitecture").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile").setValue(Java.to(["E.4 Multiple humanoids per file"], Java.type("java.lang.String[]"))))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName("SimpleSkeleton").setDEF("a_SimpleSkeleton").setVersion("2.0")
            .addSkeleton(new HAnimJoint("a_SimpleSkeleton").setName("humanoid_root").setUlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setLlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setContainerFieldOverride("skeleton")
              .addChild(new HAnimSegment().setName("sacrum")
                .addChild(new Shape().setDEF("JointVisualization"))
                .addChild(new Shape().setDEF("SegmentVisualization"))
                .addChild(new HAnimSite().setName("feature01_tip").setDEF("a_feature01_tip")
                  .addChild(new Shape().setDEF("SiteVisualization"))))))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName("SimpleSkeletonMesh").setDEF("b_SimpleSkeletonMesh").setVersion("2.0")
            .addSkeleton(new HAnimJoint("b_SimpleSkeletonMesh").setName("humanoid_root").setUlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setLlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setContainerFieldOverride("skeleton")
              .addChild(new HAnimSegment().setName("sacrum")
                .addChild(new Shape()
                  .setGeometry(new IndexedFaceSet().setDEF("SegmentBoneMesh"))))))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName("SkinIndexedGeometry").setDEF("c_SkinIndexedGeometry").setVersion("2.0")
            .addSkeleton(new HAnimJoint("c_SkinIndexedGeometry").setName("humanoid_root").setUlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setLlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setContainerFieldOverride("skeleton")
              .addChild(new HAnimSegment().setName("sacrum")))
            .addSkin(new IndexedFaceSet().setDEF("SkinMeshIFS").setContainerFieldOverride("skin")))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName("SkinShapeIndexedGeometry").setDEF("d_SkinShapeIndexedGeometry").setVersion("2.0")
            .addSkeleton(new HAnimJoint("d_SkinShapeIndexedGeometry").setName("humanoid_root").setUlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setLlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setContainerFieldOverride("skeleton")
              .addChild(new HAnimSegment().setName("sacrum")))
            .addSkin(new Shape().setContainerFieldOverride("skin")
              .setGeometry(new IndexedFaceSet().setUSE("SkinMeshIFS"))))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName("SkinSwitchShapeIndexedGeometry").setDEF("e_SkinSwitchShapeIndexedGeometry").setVersion("2.0")
            .addSkeleton(new HAnimJoint("e_SkinSwitchShapeIndexedGeometry").setName("humanoid_root").setUlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setLlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setContainerFieldOverride("skeleton")
              .addChild(new HAnimSegment().setName("sacrum")))
            .addComments(new CommentsBlock("TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>"))
            .addSkin(new Shape().setContainerFieldOverride("skin")
              .setGeometry(new IndexedFaceSet().setDEF("IndexedSkinMeshIFS")
                .setCoord(new Coordinate().setDEF("SkinMeshCoordinate")))))
          .addComments(new CommentsBlock("similarly for LOD"))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName("SynthesizedSkinShapeIndexedTwoPartGeometry").setDEF("f_SynthesizedSkinShapeIndexedTwoPartGeometry").setVersion("2.0")
            .addSkeleton(new HAnimJoint("f_SynthesizedSkinShapeIndexedTwoPartGeometry").setName("humanoid_root").setUlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setLlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setContainerFieldOverride("skeleton")
              .addChild(new HAnimSegment().setName("sacrum")))
            .addSkin(new Shape().setContainerFieldOverride("skin")
              .setGeometry(new IndexedFaceSet().setDEF("TwoPartIndexedSkinMesh")
                .setCoord(new Coordinate().setDEF("TwoPartSkinMesh")))))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName("ApparelSkinIndexedGeometryMultipleShapes").setDEF("g_ApparelSkinIndexedGeometryMultipleShapes").setVersion("2.0")
            .addSkeleton(new HAnimJoint("g_ApparelSkinIndexedGeometryMultipleShapes").setName("humanoid_root").setUlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setLlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setContainerFieldOverride("skeleton")
              .addChild(new HAnimSegment().setName("sacrum")))
            .addSkin(new Shape().setContainerFieldOverride("skin"))
            .addComments(new CommentsBlock("allow multiple Shape nodes with containerField='apparel', one for each layer of clothing"))
            .addComments(new CommentsBlock("TODO proposed for X3D4.1 <Shape containerField='apparel'/>")))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName("AnatomySkinIndexedGeometryMultipleShapes").setDEF("h_AnatomySkinIndexedGeometryMultipleShapes").setVersion("2.0")
            .addSkeleton(new HAnimJoint("h_AnatomySkinIndexedGeometryMultipleShapes").setName("humanoid_root").setUlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setLlimit(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setContainerFieldOverride("skeleton")
              .addChild(new HAnimSegment().setName("sacrum")))
            .addComments(new CommentsBlock("allow multiple Shape nodes with containerField='skin', one for each layer of skin"))
            .addSkin(new Shape().setContainerFieldOverride("skin")))
          .addComments(new CommentsBlock("==============================")))
        .addChild(new Viewpoint().setDEF("ViewHelpText").setDescription("Select text to see website").setPosition(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(12)], Java.type("float[]"))))
        .addComments(new CommentsBlock("Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip"))
        .addChild(new Anchor().setDescription("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches").setParameter(Java.to(["target=blank"], Java.type("java.lang.String[]"))).setUrl(Java.to(["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"], Java.type("java.lang.String[]")))
          .addChild(new Shape()
            .addComments(new CommentsBlock("TODO adjust Text string and Box size, then set Material transparency='1'"))
            .setGeometry(new Text().setString(Java.to(["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyle().setFamily(Java.to(["SANS"], Java.type("java.lang.String[]"))).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))).setSize(0.6).setStyle("BOLD")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(0.9),doubleToFloat(0.9),doubleToFloat(0.9)], Java.type("float[]"))))))
          .addChild(new Shape()
            .addComments(new CommentsBlock("Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible."))
            .setGeometry(new Box().setSize(Java.to([doubleToFloat(11),doubleToFloat(2),doubleToFloat(0.001)], Java.type("float[]"))))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(1))))))      ;
    X3D0.toFileX3D("../data/DesignPatternsApparelMedicalSkinLayers.new.graal.x3d");
    X3D0.toFileJSON("../data/DesignPatternsApparelMedicalSkinLayers.new.graal.json");