var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("asteroids.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manual"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/asteroids.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("asteroids")))
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
        .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("anyShape")))      ;
    X3D0.toFileX3D("../data/asteroids.new.x3d");
