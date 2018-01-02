load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
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
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("sphereflowers.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("description").setContent("5 or more prismatic flowers"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/sphereflowers.x3d")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addChild(new BackgroundObject().setBackUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
        .addChild(new GroupObject()
          .addChild(new ExternProtoDeclareObject().setName("FlowerProto").setUrl(Java.to(["../data/flowerproto.json#FlowerProto".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("vertex").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("fragment").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
          .addChild(new ProtoDeclareObject().setName("flower")
            .setProtoBody(new ProtoBodyObject()
              .addChild(new GroupObject()
                .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("FlowerProto")))))
          .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("flower"))
          .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("flower"))
          .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("flower"))
          .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("flower"))
          .addChild(ProtoInstance5 = new ProtoInstanceObject().setName("flower"))
          .addChild(ProtoInstance6 = new ProtoInstanceObject().setName("flower"))))      ;
ProtoInstance0
                  .addFieldValue(new fieldValueObject().setName("vertex").setValue("\"../shaders/x3dom_flowers_chromatic.vs\""));
ProtoInstance0
                  .addFieldValue(new fieldValueObject().setName("fragment").setValue("\"../shaders/common.fs\""));
    X3D0.toFileX3D("../data/x3domflowers.new.x3d");
