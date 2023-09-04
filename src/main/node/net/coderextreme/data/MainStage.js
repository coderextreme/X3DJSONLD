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
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("MainStage.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Main stage for HAnim scene Winter and Spring."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Joe Williams"))
        .addMeta((new autoclass.meta()).setName("translator").setContent("Joe Williams and Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("25 May 2023"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("27 May 2023"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("originals/0MainStageScene0525.x3dv"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addComponent((new autoclass.component()).setName("HAnim").setLevel(1)))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("MainStage.x3d"))
        .addChild((new autoclass.NavigationInfo()).setHeadlight(false))
        .addChild((new autoclass.DirectionalLight()).setGlobal(true).setAmbientIntensity(java.newFloat(1)).setDirection(java.newArray("float", [java.newFloat(-0.5), java.newFloat(-0.5), java.newFloat(-0.5)])))
        .addChild((new autoclass.DirectionalLight()).setGlobal(true).setAmbientIntensity(java.newFloat(1)).setDirection(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)])))
        .addChild((new autoclass.DirectionalLight()).setGlobal(true).setIntensity(java.newFloat(0.5)).setAmbientIntensity(java.newFloat(1)).setDirection(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(-1)])))
        .addChild((new autoclass.Viewpoint()).setDEF("Scene_StageFrontViewFar").setDescription("hanim_Stage Front View").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(4), java.newFloat(10)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.449999988)])))
        .addChild((new autoclass.Viewpoint()).setDEF("Scene_InclinedView").setDescription("hanim_Inclined View").setPosition(java.newArray("float", [java.newFloat(2.62), java.newFloat(1.05), java.newFloat(4.06)])).setOrientation(java.newArray("float", [java.newFloat(-0.112999998), java.newFloat(0.992999971), java.newFloat(0.034699999), java.newFloat(0.671000004)])))
        .addChild((new autoclass.Viewpoint()).setDEF("Scene_StageFrontView").setDescription("hanim_Stage Front View").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(5)])))
        .addChild((new autoclass.Viewpoint()).setDEF("Scene_FeetStageBottomView").setDescription("hanim_feet View").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(-10), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.570000052)])))
        .addChild((new autoclass.Viewpoint()).setDEF("Scene_HeadTopView").setDescription("hanim_Head Top View").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(15), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.570000052)])))
        .addChild((new autoclass.Viewpoint()).setDEF("Scene_TopFrontCloseView").setDescription("hanim_Head Top View").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(8), java.newFloat(3)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.100000024)])))
        .addChild((new autoclass.Group()).setDEF("HAnimStage")
          .addChild((new autoclass.Transform()).setDEF("cordsysfloor").setScale(java.newArray("float", [java.newFloat(0.175), java.newFloat(0.175), java.newFloat(0.175)]))
            .addChild((new autoclass.Inline()).setUrl(java.newArray("java.lang.String", ["JointCoordinateAxes.x3dv"]))))
          .addChild((new autoclass.Transform()).setDEF("StageGeometry").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-0.01), java.newFloat(0)])).setScale(java.newArray("float", [java.newFloat(1), java.newFloat(0.01), java.newFloat(1)]))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(0.6))))
              .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(9), java.newFloat(1), java.newFloat(9)]))))
            .addChild((new autoclass.Transform()).setDEF("Circle0")
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setDEF("LineColor")
                  .setMaterial((new autoclass.Material()).setAmbientIntensity(java.newFloat(1)).setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0), java.newFloat(0.9)])).setSpecularColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.45), java.newFloat(0.45), java.newFloat(1)])).setShininess(java.newFloat(1))))
                .setGeometry((new autoclass.IndexedLineSet()).setDEF("Orbit1").setCoordIndex(java.newArray("int", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.995), java.newFloat(0), java.newFloat(-0.105), java.newFloat(0.979), java.newFloat(0), java.newFloat(-0.208), java.newFloat(0.951), java.newFloat(0), java.newFloat(-0.309), java.newFloat(0.914), java.newFloat(0), java.newFloat(-0.407), java.newFloat(0.866), java.newFloat(0), java.newFloat(-0.5), java.newFloat(0.809), java.newFloat(0), java.newFloat(-0.588), java.newFloat(0.743), java.newFloat(0), java.newFloat(-0.669), java.newFloat(0.669), java.newFloat(0), java.newFloat(-0.743), java.newFloat(0.588), java.newFloat(0), java.newFloat(-0.809), java.newFloat(0.5), java.newFloat(0), java.newFloat(-0.866), java.newFloat(0.407), java.newFloat(0), java.newFloat(-0.914), java.newFloat(0.309), java.newFloat(0), java.newFloat(-0.951), java.newFloat(0.208), java.newFloat(0), java.newFloat(-0.978), java.newFloat(0.105), java.newFloat(0), java.newFloat(-0.995), java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.105), java.newFloat(0), java.newFloat(-0.994522), java.newFloat(-0.208), java.newFloat(0), java.newFloat(-0.978), java.newFloat(-0.309), java.newFloat(0), java.newFloat(-0.951), java.newFloat(-0.407), java.newFloat(0), java.newFloat(-0.914), java.newFloat(-0.5), java.newFloat(0), java.newFloat(-0.866), java.newFloat(-0.588), java.newFloat(0), java.newFloat(-0.809), java.newFloat(-0.669), java.newFloat(0), java.newFloat(-0.743), java.newFloat(-0.743), java.newFloat(0), java.newFloat(-0.669), java.newFloat(-0.809), java.newFloat(0), java.newFloat(-0.588), java.newFloat(-0.866), java.newFloat(0), java.newFloat(-0.5), java.newFloat(-0.914), java.newFloat(0), java.newFloat(-0.407), java.newFloat(-0.951), java.newFloat(0), java.newFloat(-0.309), java.newFloat(-0.978), java.newFloat(0), java.newFloat(-0.208), java.newFloat(-0.995), java.newFloat(0), java.newFloat(-0.105), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.995), java.newFloat(0), java.newFloat(0.105), java.newFloat(-0.978), java.newFloat(0), java.newFloat(0.208), java.newFloat(-0.951), java.newFloat(0), java.newFloat(0.309), java.newFloat(-0.914), java.newFloat(0), java.newFloat(0.407), java.newFloat(-0.866), java.newFloat(0), java.newFloat(0.5), java.newFloat(-0.809), java.newFloat(0), java.newFloat(0.588), java.newFloat(-0.743), java.newFloat(0), java.newFloat(0.669), java.newFloat(-0.669), java.newFloat(0), java.newFloat(0.743), java.newFloat(-0.588), java.newFloat(0), java.newFloat(0.809), java.newFloat(-0.5), java.newFloat(0), java.newFloat(0.866), java.newFloat(-0.407), java.newFloat(0), java.newFloat(0.914), java.newFloat(-0.309), java.newFloat(0), java.newFloat(0.951), java.newFloat(-0.208), java.newFloat(0), java.newFloat(0.978), java.newFloat(-0.105), java.newFloat(0), java.newFloat(0.995), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0.105), java.newFloat(0), java.newFloat(0.995), java.newFloat(0.208), java.newFloat(0), java.newFloat(0.978), java.newFloat(0.309), java.newFloat(0), java.newFloat(0.951), java.newFloat(0.407), java.newFloat(0), java.newFloat(0.914), java.newFloat(0.5), java.newFloat(0), java.newFloat(0.866), java.newFloat(0.588), java.newFloat(0), java.newFloat(0.809), java.newFloat(0.669), java.newFloat(0), java.newFloat(0.743), java.newFloat(0.743), java.newFloat(0), java.newFloat(0.669), java.newFloat(0.809), java.newFloat(0), java.newFloat(0.588), java.newFloat(0.866), java.newFloat(0), java.newFloat(0.5), java.newFloat(0.914), java.newFloat(0), java.newFloat(0.407), java.newFloat(0.951), java.newFloat(0), java.newFloat(0.309), java.newFloat(0.978), java.newFloat(0), java.newFloat(0.208), java.newFloat(0.995), java.newFloat(0), java.newFloat(0.104), java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
            .addChild((new autoclass.Transform()).setDEF("Circle1").setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(1), java.newFloat(0.5)]))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("LineColor"))
                .setGeometry((new autoclass.IndexedLineSet()).setUSE("Orbit1"))))
            .addChild((new autoclass.Transform()).setDEF("Circle2").setScale(java.newArray("float", [java.newFloat(0.25), java.newFloat(1), java.newFloat(0.25)]))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("LineColor"))
                .setGeometry((new autoclass.IndexedLineSet()).setUSE("Orbit1"))))
            .addChild((new autoclass.Transform()).setDEF("Circle3").setScale(java.newArray("float", [java.newFloat(2), java.newFloat(1), java.newFloat(2)]))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("LineColor"))
                .setGeometry((new autoclass.IndexedLineSet()).setUSE("Orbit1"))))
            .addChild((new autoclass.Transform()).setDEF("Circle4").setScale(java.newArray("float", [java.newFloat(3), java.newFloat(1), java.newFloat(3)]))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("LineColor"))
                .setGeometry((new autoclass.IndexedLineSet()).setUSE("Orbit1")))))))      ;
    X3D0.toFileX3D("../data/MainStage.new.node.x3d");
    process.exit(0);
