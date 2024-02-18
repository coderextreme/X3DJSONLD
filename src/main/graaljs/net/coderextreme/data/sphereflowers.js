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
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1))
        .addMeta(new meta().setName("title").setContent("sphereflowers.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("Jan 17 2022"))
        .addMeta(new meta().setName("modified").setContent("Sep 3 2023"))
        .addMeta(new meta().setName("description").setContent("5 or more prismatic flowers"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Background().setBackUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))))
        .addChild(new Group()
          .addChild(new ExternProtoDeclare().setName("FlowerProto").setUrl(Java.to(["../data/flowerproto.x3d#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto"], Java.type("java.lang.String[]")))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("vertex").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("fragment").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .addChild(new ProtoDeclare().setName("flower")
            .setProtoBody(new ProtoBody()
              .addChild(new Group()
                .addChild(ProtoInstance0 = new ProtoInstance().setName("FlowerProto")))))
          .addChild(ProtoInstance1 = new ProtoInstance().setName("flower"))
          .addChild(ProtoInstance2 = new ProtoInstance().setName("flower"))
          .addChild(ProtoInstance3 = new ProtoInstance().setName("flower"))
          .addChild(ProtoInstance4 = new ProtoInstance().setName("flower"))
          .addChild(ProtoInstance5 = new ProtoInstance().setName("flower"))
          .addChild(ProtoInstance6 = new ProtoInstance().setName("flower"))
          .addChild(new TimeSensor().setDEF("SongTime").setLoop(true))
          .addChild(new Sound().setMaxBack(100).setMaxFront(100).setMinBack(20).setMinFront(20).setLocation(Java.to([doubleToFloat(0),doubleToFloat(1),doubleToFloat(0)], Java.type("float[]")))
            .setSource(new AudioClip().setDEF("AudioClip").setDescription("Chandubabamusic #1").setUrl(Java.to(["../resources/chandubabamusic1.wav","https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"], Java.type("java.lang.String[]")))))
          .addChild(new ROUTE().setFromField("cycleTime").setFromNode("SongTime").setToField("startTime").setToNode("AudioClip"))))      ;
ProtoInstance0
                  .addFieldValue(new fieldValue().setName("vertex").setValue("\"../shaders/x_ite_flowers_chromatic.vs\""));
ProtoInstance0
                  .addFieldValue(new fieldValue().setName("fragment").setValue("\"../shaders/x_ite.fs\""));
    X3D0.toFileX3D("../data/sphereflowers.new.graal.x3d");
    X3D0.toFileJSON("../data/sphereflowers.new.graal.json");
