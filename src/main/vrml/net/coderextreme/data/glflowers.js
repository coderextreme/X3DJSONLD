var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("glflowers.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("description").setContent("5 or more prismatic flowers"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/sphereflowers.x3d")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Background().setBackUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])).setBottomUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])).setFrontUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])).setLeftUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])).setRightUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])).setTopUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])))
        .addChild(new Group()
          .addChild(new ExternProtoDeclare().setName("FlowerProto").setUrl(java.newArray("java.lang.String", ["../data/flowerproto.x3d#FlowerProto"]))
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
          .addChild(ProtoInstance6 = new ProtoInstance().setName("flower"))))      ;
ProtoInstance0
                  .addFieldValue(new fieldValue().setName("vertex").setValue("\"../shaders/gl_flowers_chromatic.vs\""));
ProtoInstance0
                  .addFieldValue(new fieldValue().setName("fragment").setValue("\"../shaders/common.fs\""));
    X3D0.toFileX3D("../data/glflowers.new.x3d");
