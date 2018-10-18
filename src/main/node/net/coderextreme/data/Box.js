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
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("box.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manual"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/box.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("3 boxes")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.NavigationInfo().setTypeSync(java.newArray("java.lang.String", ["EXAMINE"])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Cubes on Fire").setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(12)])))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("anyShape")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("xtranslation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("myShape").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addChildSync(new autoclass.Shape()
                .setGeometrySync(new autoclass.Sphere())
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))))))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Transform()
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("translation").setProtoFieldSync("xtranslation"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("children").setProtoFieldSync("myShape"))))))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("three")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("ytranslation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("myShape").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addChildSync(new autoclass.Shape()
                .setGeometrySync(new autoclass.Cylinder())
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))))))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Transform()
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("translation").setProtoFieldSync("ytranslation")))
              .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("anyShape")
                .setISSync(new autoclass.IS()
                  .addConnectSync(new autoclass.connect().setNodeFieldSync("myShape").setProtoFieldSync("myShape"))))
              .addChildSync(ProtoInstance1 = new autoclass.ProtoInstance().setNameSync("anyShape")
                .setISSync(new autoclass.IS()
                  .addConnectSync(new autoclass.connect().setNodeFieldSync("myShape").setProtoFieldSync("myShape"))))
              .addChildSync(ProtoInstance2 = new autoclass.ProtoInstance().setNameSync("anyShape")
                .setISSync(new autoclass.IS()
                  .addConnectSync(new autoclass.connect().setNodeFieldSync("myShape").setProtoFieldSync("myShape")))))))
        .addChildSync(ProtoInstance3 = new autoclass.ProtoInstance().setNameSync("three").setDEFSync("threepi"))
        .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
          .addChildSync(new autoclass.Shape().setUSESync("box"))))      ;
ProtoInstance0
                .addFieldValueSync(new autoclass.fieldValue().setNameSync("xtranslation").setValueSync("0 0 0"));
ProtoInstance1
                .addFieldValueSync(new autoclass.fieldValue().setNameSync("xtranslation").setValueSync("2 0 0"));
ProtoInstance2
                .addFieldValueSync(new autoclass.fieldValue().setNameSync("xtranslation").setValueSync("-2 0 0"));
ProtoInstance3
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("ytranslation").setValueSync("0 0 0"));
ProtoInstance3
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("myShape")
            .addChildSync(new autoclass.Shape().setDEFSync("box")
              .setGeometrySync(new autoclass.Box().setSizeSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))))));
    X3D0.toFileX3D("../data/Box.new.x3d");
