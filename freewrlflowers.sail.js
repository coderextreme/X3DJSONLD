load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
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
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/sphereflowers.x3d"))
        .addMeta(new metaObject().setName("translated").setContent("09 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"))
        .addMeta(new metaObject().setName("translated").setContent("9 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addChild(new BackgroundObject().setBackUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))))
        .addChild(new GroupObject()
          .addChild(new ExternProtoDeclareObject().setName("FlowerProto").setUrl(Java.to(["flowerproto.x3d#FlowerProto"], Java.type("java.lang.String[]")))
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
                  .addFieldValue(new fieldValueObject().setName("vertex").setValue("\"freewrl_flowers_chromatic.vs\""));
ProtoInstance0
                  .addFieldValue(new fieldValueObject().setName("fragment").setValue("\"freewrl.fs\""));
    X3D0.toFileX3D("freewrlflowers.new.x3d");
