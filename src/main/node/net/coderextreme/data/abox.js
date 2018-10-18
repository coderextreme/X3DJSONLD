var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("abox.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manual"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/abox.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("a box")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("anyShape")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("myShape").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addChildSync(new autoclass.Shape()
                .setGeometrySync(new autoclass.Sphere()))))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Transform()
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("children").setProtoFieldSync("myShape"))))))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("one")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("myShape").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addChildSync(new autoclass.Shape()
                .setGeometrySync(new autoclass.Cylinder()))))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Transform()
              .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("anyShape")
                .setISSync(new autoclass.IS()
                  .addConnectSync(new autoclass.connect().setNodeFieldSync("myShape").setProtoFieldSync("myShape")))))))
        .addChildSync(ProtoInstance1 = new autoclass.ProtoInstance().setNameSync("one")))      ;
ProtoInstance1
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("myShape")
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Box().setSizeSync(java.newArray("float", [java.newFloat(140), java.newFloat(140), java.newFloat(140)])))));
    X3D0.toFileX3D("../data/abox.new.x3d");
