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
        .addMeta((new autoclass.meta()).setName("title").setContent("DiamondManLOA0.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Matthew T. Beitler"))
        .addMeta((new autoclass.meta()).setName("translator").setContent("Joel S. Pawloski"))
        .addMeta((new autoclass.meta()).setName("created").setContent("12 November 2001"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("Thu, 14 Dec 2023 22:20:20 GMT"))
        .addMeta((new autoclass.meta()).setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
        .addMeta((new autoclass.meta()).setName("reference").setContent("HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://ece.uwaterloo.ca/~HAnim"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.cis.upenn.edu/~beitler"))
        .addMeta((new autoclass.meta()).setName("Image").setContent("humanoid_landmark_locations.gif"))
        .addMeta((new autoclass.meta()).setName("Image").setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d"))
        .addComponent((new autoclass.component()).setName("HAnim").setLevel(1)))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("HANIM 2.0 Default Joint Centers, LOA0").setInfo(java.newArray("java.lang.String", ["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"])))
        .addChild((new autoclass.NavigationInfo()).setSpeed(java.newFloat(1.5)))
        .addChild((new autoclass.Viewpoint()).setDescription("Diamond Man, LOA 0").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(3)])).setCenterOfRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])))
        .addChild((new autoclass.HAnimHumanoid()).setDEF("hanim_humanoid").setName("humanoid").setLoa(0)
          .setMetadata((new autoclass.MetadataSet()).setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .addValue((new autoclass.MetadataString()).setName("authorEmail").setValue(java.newArray("java.lang.String", ["beitler@graphics.cis.upenn.edu beitler@acm.org"])))
            .addValue((new autoclass.MetadataString()).setName("authorName").setValue(java.newArray("java.lang.String", ["Matthew T. Beitler"])))
            .addValue((new autoclass.MetadataString()).setName("copyright").setValue(java.newArray("java.lang.String", ["Copyright 1999 Matthew T. Beitler"])))
            .addValue((new autoclass.MetadataString()).setName("creationDate").setValue(java.newArray("java.lang.String", ["05/12/99"])))
            .addValue((new autoclass.MetadataString()).setName("humanoidVersion").setValue(java.newArray("java.lang.String", ["JointCenters 1.1 LOA0"])))
            .addValue((new autoclass.MetadataString()).setName("usageRestrictions").setValue(java.newArray("java.lang.String", ["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."]))))
          .addSkeleton((new autoclass.HAnimJoint()).setDEF("hanim_humanoid_root").setName("humanoid_root").setCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0.824), java.newFloat(0.0277)]))
            .addChild((new autoclass.HAnimJoint()).setDEF("hanim_sacroiliac").setName("sacroiliac").setCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0.9149), java.newFloat(0.0016)]))
              .addChild((new autoclass.HAnimSegment()).setDEF("hanim_pelvis").setName("pelvis")
                .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.9149), java.newFloat(0.0016)]))
                  .addChild((new autoclass.Shape()).setDEF("DiamondShape")
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0)]))))
                    .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(java.newFloat(0.5)).setCoordIndex(java.newArray("int", [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.01), java.newFloat(0), java.newFloat(-0.01), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-0.01), java.newFloat(0), java.newFloat(-0.01), java.newFloat(0)])))))))))
          .addViewpoints((new autoclass.HAnimSite()).setDEF("hanim_site_view").setName("site_view")
            .addChild((new autoclass.Viewpoint()).setDEF("InclinedView").setDescription("Inclined View").setPosition(java.newArray("float", [java.newFloat(1.62), java.newFloat(1.05), java.newFloat(2.06)])).setOrientation(java.newArray("float", [java.newFloat(-0.113), java.newFloat(0.993), java.newFloat(0.0347), java.newFloat(0.671)])))
            .addChild((new autoclass.Viewpoint()).setDEF("FrontView").setDescription("Front View").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0.854), java.newFloat(2.57665)])))
            .addChild((new autoclass.Viewpoint()).setDEF("SideView").setDescription("Side View").setPosition(java.newArray("float", [java.newFloat(2.5929), java.newFloat(0.854), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57079)])))
            .addChild((new autoclass.Viewpoint()).setDEF("TopView").setDescription("Top View").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(3.4495), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57079)]))))
          .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_pelvis"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_humanoid_root"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_sacroiliac"))))      ;
    X3D0.toFileX3D("../data/DiamondManLOA0_patched2.new.node.x3d");
    process.exit(0);
