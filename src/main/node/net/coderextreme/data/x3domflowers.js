var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("sphereflowers.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("5 or more prismatic flowers"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/sphereflowers.x3d")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.NavigationInfo())
        .addCommentsSync(new autoclass.CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
        .addChildSync(new autoclass.Background().setBackUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])).setBottomUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])).setFrontUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])).setLeftUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])).setRightUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])).setTopUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])))
        .addChildSync(new autoclass.Group()
          .addChildSync(new autoclass.ExternProtoDeclare().setNameSync("FlowerProto").setUrlSync(java.newArray("java.lang.String", ["../data/flowerproto.json#FlowerProto"]))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("vertex").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("fragment").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT)))
          .addChildSync(new autoclass.ProtoDeclare().setNameSync("flower")
            .setProtoBodySync(new autoclass.ProtoBody()
              .addChildSync(new autoclass.Group()
                .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("FlowerProto")))))
          .addChildSync(ProtoInstance1 = new autoclass.ProtoInstance().setNameSync("flower"))
          .addChildSync(ProtoInstance2 = new autoclass.ProtoInstance().setNameSync("flower"))
          .addChildSync(ProtoInstance3 = new autoclass.ProtoInstance().setNameSync("flower"))
          .addChildSync(ProtoInstance4 = new autoclass.ProtoInstance().setNameSync("flower"))
          .addChildSync(ProtoInstance5 = new autoclass.ProtoInstance().setNameSync("flower"))
          .addChildSync(ProtoInstance6 = new autoclass.ProtoInstance().setNameSync("flower"))))      ;
ProtoInstance0
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("vertex").setValueSync("\"../shaders/x3dom_flowers_chromatic.vs\""));
ProtoInstance0
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("fragment").setValueSync("\"../shaders/common.fs\""));
    X3D0.toFileX3D("../data/x3domflowers.new.x3d");
