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
        .addMeta((new autoclass.meta()).setName("filename").setContent("blenderLily.x3d"))
        .addMeta((new autoclass.meta()).setName("copyright").setContent("2023"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.web3D.org"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("Blender 3.6.4"))
        .addComponent((new autoclass.component()).setName("HAnim").setLevel(3)))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()))
        .addChild((new autoclass.Background()).setDEF("WO_World").setSkyColor(java.newArray("float", [java.newFloat(0.05087609f), java.newFloat(0.05087609f), java.newFloat(0.05087609f)])).setGroundColor(java.newArray("float", [java.newFloat(0.05087609f), java.newFloat(0.05087609f), java.newFloat(0.05087609f)])))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape()).setDEF("SiteShape")
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0f), java.newFloat(0f), java.newFloat(1f)]))))
            .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(0.05f), java.newFloat(0.05f), java.newFloat(0.05f)])))))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape()).setDEF("JointShape")
            .setAppearance((new autoclass.Appearance()).setDEF("JointAppearance")
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1f), java.newFloat(0.5f), java.newFloat(0f)])).setTransparency(java.newFloat(0.5f))))
            .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.06f)))))
        .addChild((new autoclass.Transform()).setDEF("Light_TRANSFORM").setTranslation(java.newArray("float", [java.newFloat(4.07625f), java.newFloat(1.00545f), java.newFloat(5.90386f)])).setRotation(java.newArray("float", [java.newFloat(0.20594f), java.newFloat(0.33152f), java.newFloat(0.9207f), java.newFloat(1.92627f)]))
          .addChild((new autoclass.PointLight()).setDEF("LA_Light").setLocation(java.newArray("float", [java.newFloat(-8.940697e-8f), java.newFloat(-3.576279e-7f), java.newFloat(4.61936e-7f)])).setRadius(java.newFloat(29.99998f))))
        .addChild((new autoclass.Transform()).setDEF("Camera_TRANSFORM").setTranslation(java.newArray("float", [java.newFloat(7.35889f), java.newFloat(-6.92579f), java.newFloat(4.95831f)])).setRotation(java.newArray("float", [java.newFloat(0.77344f), java.newFloat(0.33383f), java.newFloat(0.53884f), java.newFloat(1.35072f)]))
          .addChild((new autoclass.Viewpoint()).setDEF("CA_Camera").setPosition(java.newArray("float", [java.newFloat(-3.92708e-7f), java.newFloat(-2.123415e-7f), java.newFloat(2.384186e-7f)])).setFieldOfView(java.newFloat(0.6911112f))))
        .addChild((new autoclass.Transform()).setDEF("Light_001_TRANSFORM").setTranslation(java.newArray("float", [java.newFloat(4.07625f), java.newFloat(1.00545f), java.newFloat(5.90386f)])).setRotation(java.newArray("float", [java.newFloat(0.20594f), java.newFloat(0.33152f), java.newFloat(0.9207f), java.newFloat(1.92627f)]))
          .addChild((new autoclass.PointLight()).setDEF("LA_Light_001").setLocation(java.newArray("float", [java.newFloat(2.980232e-8f), java.newFloat(-4.023314e-7f), java.newFloat(1.043081e-7f)])).setRadius(java.newFloat(29.99998f))))
        .addChild((new autoclass.Transform()).setDEF("Camera_001_TRANSFORM").setTranslation(java.newArray("float", [java.newFloat(7.35889f), java.newFloat(-6.92579f), java.newFloat(4.95831f)])).setRotation(java.newArray("float", [java.newFloat(0.77344f), java.newFloat(0.33383f), java.newFloat(0.53884f), java.newFloat(1.35072f)]))
          .addChild((new autoclass.Viewpoint()).setDEF("CA_Camera_001").setPosition(java.newArray("float", [java.newFloat(-2.421449e-7f), java.newFloat(4.991889e-7f), java.newFloat(-7.152557e-7f)])).setFieldOfView(java.newFloat(0.6911112f))))
        .addChild((new autoclass.Transform()).setDEF("World_TRANSFORM").setRotation(java.newArray("float", [java.newFloat(1f), java.newFloat(0f), java.newFloat(0f), java.newFloat(1.5708f)])).setScale(java.newArray("float", [java.newFloat(0.01f), java.newFloat(0.01f), java.newFloat(0.01f)]))
          .addChild((new autoclass.Transform()).setDEF("World_001_TRANSFORM")
            .addChild((new autoclass.Transform()).setDEF("lily_7_3_animate_TRANSFORM")
              .addChild((new autoclass.Transform()).setDEF("CINEMA_4D_Editor_TRANSFORM").setTranslation(java.newArray("float", [java.newFloat(-2.3832f), java.newFloat(26.84083f), java.newFloat(170.6878f)])).setRotation(java.newArray("float", [java.newFloat(0.03965f), java.newFloat(0.99809f), java.newFloat(0.04742f), java.newFloat(1.39469f)]))
                .addChild((new autoclass.Transform()).setDEF("CINEMA_4D_Editor_001_TRANSFORM").setTranslation(java.newArray("float", [java.newFloat(0.00001f), java.newFloat(0f), java.newFloat(0f)])).setRotation(java.newArray("float", [java.newFloat(0f), java.newFloat(-1f), java.newFloat(0f), java.newFloat(3.14159f)]))
                  .addChild((new autoclass.Viewpoint()).setDEF("CA_CINEMA_4D_Editor_001").setPosition(java.newArray("float", [java.newFloat(-0.00002747774f), java.newFloat(0.000004980713f), java.newFloat(-0.000003484735f)])).setFieldOfView(java.newFloat(0.9272952f)))))
              .addChild((new autoclass.Transform()).setDEF("node_t_Lily_RV7_Shape_TRANSFORM")
                .addChild((new autoclass.Transform()).setDEF("humanoid_root_TRANSFORM").setTranslation(java.newArray("float", [java.newFloat(0f), java.newFloat(-0.91969f), java.newFloat(0f)])).setRotation(java.newArray("float", [java.newFloat(0f), java.newFloat(-1f), java.newFloat(0f), java.newFloat(1.5708f)]))
                  .addChild((new autoclass.HAnimHumanoid()).setDEF("hanim_armature_humanoid_root").setName("armature_humanoid_root"))))))
          .addChild((new autoclass.Transform()).setDEF("Environment_TRANSFORM")
            .addChild((new autoclass.Transform()).setDEF("Sky_TRANSFORM").setTranslation(java.newArray("float", [java.newFloat(0f), java.newFloat(305f), java.newFloat(0f)])).setRotation(java.newArray("float", [java.newFloat(1f), java.newFloat(0f), java.newFloat(0f), java.newFloat(3.14159f)]))
              .addChild((new autoclass.PointLight()).setDEF("LA_Sky").setIntensity(java.newFloat(0.005714286f)).setLocation(java.newArray("float", [java.newFloat(-9.59824e-19f), java.newFloat(-0.00003051758f), java.newFloat(-9.094947e-12f)])).setRadius(java.newFloat(0.25f))))
            .addChild((new autoclass.Transform()).setDEF("DistantLight_TRANSFORM").setTranslation(java.newArray("float", [java.newFloat(0f), java.newFloat(305f), java.newFloat(0f)])).setRotation(java.newArray("float", [java.newFloat(-0.99144f), java.newFloat(0.13053f), java.newFloat(0f), java.newFloat(3.14159f)]))
              .addChild((new autoclass.DirectionalLight()).setDEF("LA_DistantLight").setGlobal(true).setIntensity(java.newFloat(0.005714286f)).setAmbientIntensity(java.newFloat(0.07f)).setDirection(java.newArray("float", [java.newFloat(5.329071e-15f), java.newFloat(-3.552714e-15f), java.newFloat(-1f)]))))))
        .addChild((new autoclass.Transform()).setDEF("SkinnedMeshes_TRANSFORM").setRotation(java.newArray("float", [java.newFloat(1f), java.newFloat(0f), java.newFloat(0f), java.newFloat(1.5708f)])).setScale(java.newArray("float", [java.newFloat(0.01f), java.newFloat(0.01f), java.newFloat(0.01f)]))))      ;
    X3D0.toFileX3D("../data/blenderLily.new.node.x3d");
    process.exit(0);
