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
        .addComponent((new autoclass.component()).setName("HAnim").setLevel(1))
        .addMeta((new autoclass.meta()).setName("title").setContent("MainStage.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Main stage for HAnim scene Winter and Spring."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Joe Williams"))
        .addMeta((new autoclass.meta()).setName("translator").setContent("Joe Williams and Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("25 May 2023"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("27 May 2023"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("originals/0MainStageScene0525.x3dv"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("MainStage.x3d"))
        .addChild((new autoclass.NavigationInfo()).setHeadlight(false))
        .addChild((new autoclass.DirectionalLight()).setAmbientIntensity(java.newFloat(1)).setDirection(java.newArray("float", [java.newFloat(-0.5), java.newFloat(-0.5), java.newFloat(-0.5)])).setGlobal(true))
        .addChild((new autoclass.DirectionalLight()).setAmbientIntensity(java.newFloat(1)).setDirection(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)])).setGlobal(true))
        .addChild((new autoclass.DirectionalLight()).setAmbientIntensity(java.newFloat(1)).setDirection(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(-1)])).setGlobal(true).setIntensity(java.newFloat(0.5)))
        .addChild((new autoclass.Viewpoint()).setDEF("Scene_StageFrontViewFar").setDescription("hanim_Stage Front View").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.449999988)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(4), java.newFloat(10)])))
        .addChild((new autoclass.Viewpoint()).setDEF("Scene_InclinedView").setDescription("hanim_Inclined View").setOrientation(java.newArray("float", [java.newFloat(-0.112999998), java.newFloat(0.992999971), java.newFloat(0.034699999), java.newFloat(0.671000004)])).setPosition(java.newArray("float", [java.newFloat(2.619999886), java.newFloat(1.049999952), java.newFloat(4.059999943)])))
        .addChild((new autoclass.Viewpoint()).setDEF("Scene_StageFrontView").setDescription("hanim_Stage Front View").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(5)])))
        .addChild((new autoclass.Viewpoint()).setDEF("Scene_FeetStageBottomView").setDescription("hanim_feet View").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.570000052)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(-10), java.newFloat(0)])))
        .addChild((new autoclass.Viewpoint()).setDEF("Scene_HeadTopView").setDescription("hanim_Head Top View").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.570000052)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(15), java.newFloat(0)])))
        .addChild((new autoclass.Viewpoint()).setDEF("Scene_TopFrontCloseView").setDescription("hanim_Head Top View").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.100000024)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(8), java.newFloat(3)])))
        .addChild((new autoclass.Group()).setDEF("HAnimStage")
          .addChild((new autoclass.Transform()).setDEF("cordsysfloor").setScale(java.newArray("float", [java.newFloat(0.174999997), java.newFloat(0.174999997), java.newFloat(0.174999997)]))
            .addChild((new autoclass.Inline()).setUrl(java.newArray("java.lang.String", ["JointCoordinateAxes.x3dv"]))))
          .addChild((new autoclass.Transform()).setDEF("StageGeometry").setScale(java.newArray("float", [java.newFloat(1), java.newFloat(0.01), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-0.01), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(0.6))))
              .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(9), java.newFloat(1), java.newFloat(9)]))))
            .addChild((new autoclass.Transform()).setDEF("Circle0")
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setDEF("LineColor")
                  .setMaterial((new autoclass.Material()).setAmbientIntensity(java.newFloat(1)).setDiffuseColor(java.newArray("float", [java.newFloat(0.699999988), java.newFloat(0), java.newFloat(0.899999976)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.449999988), java.newFloat(0.449999988), java.newFloat(1)])).setShininess(java.newFloat(1)).setSpecularColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
                .setGeometry((new autoclass.IndexedLineSet()).setDEF("Orbit1").setCoordIndex(java.newArray("int", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.995000005), java.newFloat(0), java.newFloat(-0.104999997), java.newFloat(0.978999972), java.newFloat(0), java.newFloat(-0.208000004), java.newFloat(0.950999975), java.newFloat(0), java.newFloat(-0.308999985), java.newFloat(0.913999975), java.newFloat(0), java.newFloat(-0.407000005), java.newFloat(0.865999997), java.newFloat(0), java.newFloat(-0.5), java.newFloat(0.809000015), java.newFloat(0), java.newFloat(-0.588), java.newFloat(0.742999971), java.newFloat(0), java.newFloat(-0.66900003), java.newFloat(0.66900003), java.newFloat(0), java.newFloat(-0.742999971), java.newFloat(0.588), java.newFloat(0), java.newFloat(-0.809000015), java.newFloat(0.5), java.newFloat(0), java.newFloat(-0.865999997), java.newFloat(0.407000005), java.newFloat(0), java.newFloat(-0.913999975), java.newFloat(0.308999985), java.newFloat(0), java.newFloat(-0.950999975), java.newFloat(0.208000004), java.newFloat(0), java.newFloat(-0.977999985), java.newFloat(0.104999997), java.newFloat(0), java.newFloat(-0.995000005), java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.104999997), java.newFloat(0), java.newFloat(-0.994521976), java.newFloat(-0.208000004), java.newFloat(0), java.newFloat(-0.977999985), java.newFloat(-0.308999985), java.newFloat(0), java.newFloat(-0.950999975), java.newFloat(-0.407000005), java.newFloat(0), java.newFloat(-0.913999975), java.newFloat(-0.5), java.newFloat(0), java.newFloat(-0.865999997), java.newFloat(-0.588), java.newFloat(0), java.newFloat(-0.809000015), java.newFloat(-0.66900003), java.newFloat(0), java.newFloat(-0.742999971), java.newFloat(-0.742999971), java.newFloat(0), java.newFloat(-0.66900003), java.newFloat(-0.809000015), java.newFloat(0), java.newFloat(-0.588), java.newFloat(-0.865999997), java.newFloat(0), java.newFloat(-0.5), java.newFloat(-0.913999975), java.newFloat(0), java.newFloat(-0.407000005), java.newFloat(-0.950999975), java.newFloat(0), java.newFloat(-0.308999985), java.newFloat(-0.977999985), java.newFloat(0), java.newFloat(-0.208000004), java.newFloat(-0.995000005), java.newFloat(0), java.newFloat(-0.104999997), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.995000005), java.newFloat(0), java.newFloat(0.104999997), java.newFloat(-0.977999985), java.newFloat(0), java.newFloat(0.208000004), java.newFloat(-0.950999975), java.newFloat(0), java.newFloat(0.308999985), java.newFloat(-0.913999975), java.newFloat(0), java.newFloat(0.407000005), java.newFloat(-0.865999997), java.newFloat(0), java.newFloat(0.5), java.newFloat(-0.809000015), java.newFloat(0), java.newFloat(0.588), java.newFloat(-0.742999971), java.newFloat(0), java.newFloat(0.66900003), java.newFloat(-0.66900003), java.newFloat(0), java.newFloat(0.742999971), java.newFloat(-0.588), java.newFloat(0), java.newFloat(0.809000015), java.newFloat(-0.5), java.newFloat(0), java.newFloat(0.865999997), java.newFloat(-0.407000005), java.newFloat(0), java.newFloat(0.913999975), java.newFloat(-0.308999985), java.newFloat(0), java.newFloat(0.950999975), java.newFloat(-0.208000004), java.newFloat(0), java.newFloat(0.977999985), java.newFloat(-0.104999997), java.newFloat(0), java.newFloat(0.995000005), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0.104999997), java.newFloat(0), java.newFloat(0.995000005), java.newFloat(0.208000004), java.newFloat(0), java.newFloat(0.977999985), java.newFloat(0.308999985), java.newFloat(0), java.newFloat(0.950999975), java.newFloat(0.407000005), java.newFloat(0), java.newFloat(0.913999975), java.newFloat(0.5), java.newFloat(0), java.newFloat(0.865999997), java.newFloat(0.588), java.newFloat(0), java.newFloat(0.809000015), java.newFloat(0.66900003), java.newFloat(0), java.newFloat(0.742999971), java.newFloat(0.742999971), java.newFloat(0), java.newFloat(0.66900003), java.newFloat(0.809000015), java.newFloat(0), java.newFloat(0.588), java.newFloat(0.865999997), java.newFloat(0), java.newFloat(0.5), java.newFloat(0.913999975), java.newFloat(0), java.newFloat(0.407000005), java.newFloat(0.950999975), java.newFloat(0), java.newFloat(0.308999985), java.newFloat(0.977999985), java.newFloat(0), java.newFloat(0.208000004), java.newFloat(0.995000005), java.newFloat(0), java.newFloat(0.104000002), java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
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
    X3D0.toFileJSON("../data/MainStage.new.node.json");
    process.exit(0);
