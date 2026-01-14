import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("HAnim").setLevel(1))
        .addMeta(new autoclass.meta().setName("title").setContent("DiamondManLOA_0.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid."))
        .addMeta(new autoclass.meta().setName("creator").setContent("Matthew T. Beitler"))
        .addMeta(new autoclass.meta().setName("translator").setContent("Joel S. Pawloski"))
        .addMeta(new autoclass.meta().setName("created").setContent("12 November 2001"))
        .addMeta(new autoclass.meta().setName("modified").setContent("Tue, 09 Sep 2025 19:37:54 GMT"))
        .addMeta(new autoclass.meta().setName("reference").setContent("../Templates/DiamondManLOA_0.x3d"))
        .addMeta(new autoclass.meta().setName("reference").setContent("HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero"))
        .addMeta(new autoclass.meta().setName("reference").setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://ece.uwaterloo.ca/~HAnim"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://www.cis.upenn.edu/~beitler"))
        .addMeta(new autoclass.meta().setName("error").setContent("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"))
        .addMeta(new autoclass.meta().setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
        .addMeta(new autoclass.meta().setName("Image").setContent("humanoid_landmark_locations.gif"))
        .addMeta(new autoclass.meta().setName("Image").setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_0.x3d")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("HANIM 2.0 Default Joint Centers, LOA0").setInfo(java.newArray("java.lang.String", ["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"])))
        .addChild(new autoclass.NavigationInfo().setSpeed(java.newFloat(1.5)))
        .addChild(new autoclass.Viewpoint().setDescription("Diamond Man, LOA 0").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(3)])).setCenterOfRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])))
        .addChild(new autoclass.HAnimHumanoid().setDEF("hanim_humanoid").setName("humanoid").setVersion("1.0")
          .setMetadata(new autoclass.MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .addValue(new autoclass.MetadataString().setName("authorEmail"))
            .addValue(new autoclass.MetadataString().setName("authorName"))
            .addValue(new autoclass.MetadataString().setName("copyright"))
            .addValue(new autoclass.MetadataString().setName("creationDate"))
            .addValue(new autoclass.MetadataString().setName("humanoidVersion"))
            .addValue(new autoclass.MetadataString().setName("usageRestrictions")))
          .addSkeleton(new autoclass.HAnimJoint("hanim_humanoid").setContainerFieldOverride("skeleton").setDEF("hanim_HumanoidRoot").setName("humanoid_root").setCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0.824), java.newFloat(0.0277)]))
            .addChild(new autoclass.HAnimJoint("hanim_HumanoidRoot").setDEF("hanim_sacroiliac").setName("sacroiliac").setCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0.9149), java.newFloat(0.0016)]))
              .addChild(new autoclass.HAnimSegment("hanim_sacroiliac").setDEF("hanim_pelvis").setName("pelvis")
                .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.9149), java.newFloat(0.0016)]))
                  .addChild(new autoclass.Shape().setDEF("DiamondShape")
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0)]))))
                    .setGeometry(new autoclass.IndexedFaceSet().setCreaseAngle(java.newFloat(0.5)).setCoordIndex(java.newArray("int", [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]))
                      .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.01), java.newFloat(0), java.newFloat(-0.01), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-0.01), java.newFloat(0), java.newFloat(-0.01), java.newFloat(0)])))))))))
          .addJoints(new autoclass.HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints").setUSE("hanim_HumanoidRoot"))
          .addJoints(new autoclass.HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints").setUSE("hanim_sacroiliac"))
          .addSegments(new autoclass.HAnimSegment("hanim_humanoid").setContainerFieldOverride("segments").setUSE("hanim_pelvis"))
          .addViewpoints(new autoclass.HAnimSite("hanim_humanoid").setContainerFieldOverride("viewpoints").setDEF("hanim_site_view").setName("site_view")
            .addChild(new autoclass.Viewpoint().setDEF("InclinedView").setDescription("Inclined View").setPosition(java.newArray("float", [java.newFloat(1.62), java.newFloat(1.05), java.newFloat(2.06)])).setOrientation(java.newArray("float", [java.newFloat(-0.113), java.newFloat(0.993), java.newFloat(0.0347), java.newFloat(0.671)])))
            .addChild(new autoclass.Viewpoint().setDEF("FrontView").setDescription("Front View").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0.854), java.newFloat(2.57665)])))
            .addChild(new autoclass.Viewpoint().setDEF("SideView").setDescription("Side View").setPosition(java.newArray("float", [java.newFloat(2.5929), java.newFloat(0.854), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57079)])))
            .addChild(new autoclass.Viewpoint().setDEF("TopView").setDescription("Top View").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(3.4495), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57079)]))))))      ;
    X3D0.toFileX3D("../data/DiamondManLOA_0.new.node.x3d");
    X3D0.toFileJSON("../data/DiamondManLOA_0.new.node.json");
    process.exit(0);
