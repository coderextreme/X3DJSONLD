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
var ProtoInstance7 = null;
var ProtoInstance8 = null;
var ProtoInstance9 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("rubikOnFire.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/rubikOnFire.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a white rubik cube")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))))
        .addChild(new ViewpointObject().setDescription("Rubiks Cube on Fire").setPosition(Java.to([0,0,12], Java.type("float[]"))))
        .addChild(new ProtoDeclareObject().setName("anyShape")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("xtranslation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("myShape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new SphereObject())))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("xtranslation")))
              .addChild(new ShapeObject()
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("geometry").setProtoField("myShape")))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,1,1], Java.type("float[]")))))))))
        .addChild(new ProtoDeclareObject().setName("three")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("ytranslation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("myShape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new SphereObject())))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("ytranslation")))
              .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("anyShape")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("anyShape")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("anyShape")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(new ProtoDeclareObject().setName("nine")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("ztranslation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("myShape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new SphereObject())))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("ztranslation")))
              .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("three")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("three")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance5 = new ProtoInstanceObject().setName("three")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(new ProtoDeclareObject().setName("twentyseven")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("ttranslation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("myShape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new SphereObject())))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("ttranslation")))
              .addChild(ProtoInstance6 = new ProtoInstanceObject().setName("nine")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance7 = new ProtoInstanceObject().setName("nine")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance8 = new ProtoInstanceObject().setName("nine")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(ProtoInstance9 = new ProtoInstanceObject().setName("twentyseven")))      ;
ProtoInstance0
                .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("0 0 0"));
ProtoInstance1
                .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("2 0 0"));
ProtoInstance2
                .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("-2 0 0"));
ProtoInstance3
                .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 0 0"));
ProtoInstance4
                .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 2 0"));
ProtoInstance5
                .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 -2 0"));
ProtoInstance6
                .addFieldValue(new fieldValueObject().setName("ztranslation").setValue("0 0 0"));
ProtoInstance7
                .addFieldValue(new fieldValueObject().setName("ztranslation").setValue("0 0 2"));
ProtoInstance8
                .addFieldValue(new fieldValueObject().setName("ztranslation").setValue("0 0 -2"));
ProtoInstance9
          .addFieldValue(new fieldValueObject().setName("ttranslation").setValue("0 0 0"));
ProtoInstance9
          .addFieldValue(new fieldValueObject().setName("myShape")
            .addChild(new BoxObject().setSize(Java.to([1,1,1], Java.type("float[]")))));
    X3D0.toFileX3D("../data/rubikOnFire.new.x3d");
