load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("filename").setContent("blenderSkeleton.x3d"))
        .addMeta(new meta().setName("copyright").setContent("2023"))
        .addMeta(new meta().setName("reference").setContent("http://www.web3D.org"))
        .addMeta(new meta().setName("generator").setContent("Blender 3.6.4"))
        .addComponent(new component().setName("HAnim").setLevel(3)))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Background().setDEF("WO_World").setSkyColor(Java.to([0.05087609f,0.05087609f,0.05087609f], Java.type("float[]"))).setGroundColor(Java.to([0.05087609f,0.05087609f,0.05087609f], Java.type("float[]"))))
        .addChild(new Transform()
          .addChild(new Shape().setDEF("SiteShape")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([0f,0f,1f], Java.type("float[]")))))
            .setGeometry(new Box().setSize(Java.to([0.05f,0.05f,0.05f], Java.type("float[]"))))))
        .addChild(new Transform()
          .addChild(new Shape().setDEF("JointShape")
            .setAppearance(new Appearance().setDEF("JointAppearance")
              .setMaterial(new Material().setDiffuseColor(Java.to([1f,0.5f,0f], Java.type("float[]"))).setTransparency(0.5f)))
            .setGeometry(new Sphere().setRadius(0.06f))))
        .addChild(new Transform().setDEF("Light_TRANSFORM").setTranslation(Java.to([4.07625f,1.00545f,5.90386f], Java.type("float[]"))).setRotation(Java.to([0.20594f,0.33152f,0.9207f,1.92627f], Java.type("float[]")))
          .addChild(new PointLight().setDEF("LA_Light").setLocation(Java.to([-8.940697e-8f,-3.576279e-7f,4.61936e-7f], Java.type("float[]"))).setRadius(29.99998f)))
        .addChild(new Transform().setDEF("Camera_TRANSFORM").setTranslation(Java.to([7.35889f,-6.92579f,4.95831f], Java.type("float[]"))).setRotation(Java.to([0.77344f,0.33383f,0.53884f,1.35072f], Java.type("float[]")))
          .addChild(new Viewpoint().setDEF("CA_Camera").setPosition(Java.to([-3.92708e-7f,-2.123415e-7f,2.384186e-7f], Java.type("float[]"))).setFieldOfView(0.6911112f)))
        .addChild(new Transform().setDEF("Humanoid_collection_TRANSFORM")
          .addChild(new HAnimHumanoid().setDEF("hanim_armature_Humanoid_collection").setName("armature_Humanoid_collection"))))      ;
    X3D0.toFileX3D("../data/blenderSkeleton.new.graal.x3d");
    X3D0.toFileJSON("../data/blenderSkeleton.new.graal.json");
