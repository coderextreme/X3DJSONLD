load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("sphereflowers.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("Jan 17 2022"))
        .addMeta(new meta().setName("modified").setContent("Sat, 30 Dec 2023 07:58:44 GMT"))
        .addMeta(new meta().setName("description").setContent("5 or more prismatic flowers"))
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1)))
      .setScene(new Scene()
        .addChild(new ExternProtoDeclare().setName("FlowerProto").setUrl(Java.to(["../personal/flowerproto.json#FlowerProto"], Java.type("java.lang.String[]")))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("vertex"))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("fragment")))
        .addChild(new ProtoDeclare().setName("flower")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(ProtoInstance0 = new ProtoInstance().setName("FlowerProto")))))
        .addChild(new NavigationInfo())
        .addChild(new Background().setFrontUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))).setBackUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))))
        .addChild(new Group()
          .addChild(ProtoInstance1 = new ProtoInstance().setName("flower"))
          .addChild(ProtoInstance2 = new ProtoInstance().setName("flower"))
          .addChild(ProtoInstance3 = new ProtoInstance().setName("flower"))
          .addChild(ProtoInstance4 = new ProtoInstance().setName("flower"))
          .addChild(ProtoInstance5 = new ProtoInstance().setName("flower"))
          .addChild(ProtoInstance6 = new ProtoInstance().setName("flower"))
          .addChild(new TimeSensor().setDEF("SongTime").setLoop(true))
          .addChild(new Sound().setLocation(Java.to([0f,1f,0f], Java.type("float[]"))).setMinBack(20f).setMinFront(20f).setMaxBack(100f).setMaxFront(100f)
            .setSource(new AudioClip().setDEF("AudioClip").setDescription("Chandubabamusic #1").setUrl(Java.to(["../resources/chandubabamusic1.wav"], Java.type("java.lang.String[]"))).setStartTime(1703923124.156))))
        .addChild(new ROUTE().setFromNode("SongTime").setFromField("cycleTime").setToNode("AudioClip").setToField("startTime")))      ;
ProtoInstance0
                .addFieldValue(new fieldValue().setName("vertex").setValue("\"../shaders/x_ite_flowers_chromatic.vs\""));
ProtoInstance0
                .addFieldValue(new fieldValue().setName("fragment").setValue("\"../shaders/x_ite.fs\""));
    X3D0.toFileX3D("../data/sphereflowers.new.graal.x3d");
    X3D0.toFileJSON("../data/sphereflowers.new.graal.json");
