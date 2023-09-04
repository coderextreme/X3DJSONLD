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
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("plainflowers.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("description").setContent("5 or more prismatic flowers"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ExternProtoDeclare()).setName("FlowerProto").setUrl(java.newArray("java.lang.String", ["../data/flowerproto.x3d#FlowerProto"]))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("vertex"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("fragment")))
        .addChild((new autoclass.ProtoDeclare()).setName("flower")
          .setProtoInterface((new autoclass.ProtoInterface()))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Group())
              .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("FlowerProto")))))
        .addChild((new autoclass.NavigationInfo()))
        .addChild((new autoclass.Background()).setFrontUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])).setBackUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])).setLeftUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])).setRightUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])).setTopUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])).setBottomUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])))
        .addChild((new autoclass.Group())
          .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("flower"))
          .addChild(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("flower"))
          .addChild(ProtoInstance3 = (new autoclass.ProtoInstance()).setName("flower"))
          .addChild(ProtoInstance4 = (new autoclass.ProtoInstance()).setName("flower"))
          .addChild(ProtoInstance5 = (new autoclass.ProtoInstance()).setName("flower"))
          .addChild(ProtoInstance6 = (new autoclass.ProtoInstance()).setName("flower"))))      ;
ProtoInstance0
                .addFieldValue((new autoclass.fieldValue()).setName("vertex").setValue("\"../shaders/x_ite_flowers_plain.vs\""));
ProtoInstance0
                .addFieldValue((new autoclass.fieldValue()).setName("fragment").setValue("\"../shaders/plain.fs\""));
    X3D0.toFileX3D("../data/plainflowers.new.node.x3d");
    process.exit(0);
