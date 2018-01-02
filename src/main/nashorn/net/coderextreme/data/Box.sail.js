load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("box.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/box.x3d"))
        .addMeta(new metaObject().setName("description").setContent("3 boxes")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))))
        .addChild(new ViewpointObject().setDescription("Cubes on Fire").setPosition(Java.to([0,0,12], Java.type("float[]"))))
        .addChild(new ProtoDeclareObject().setName("anyShape")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("xtranslation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("myShape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new ShapeObject()
                .setGeometry(new SphereObject())
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,1,1], Java.type("float[]"))))))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("xtranslation"))
                .addConnect(new connectObject().setNodeField("children").setProtoField("myShape"))))))
        .addChild(new ProtoDeclareObject().setName("three")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("ytranslation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("myShape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new ShapeObject()
                .setGeometry(new CylinderObject())
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,1,1], Java.type("float[]"))))))))
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
        .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("three")))      ;
ProtoInstance0
                .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("0 0 0"));
ProtoInstance1
                .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("2 0 0"));
ProtoInstance2
                .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("-2 0 0"));
ProtoInstance3
          .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 0 0"));
ProtoInstance3
          .addFieldValue(new fieldValueObject().setName("myShape")
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject().setSize(Java.to([1,1,1], Java.type("float[]"))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,1,0], Java.type("float[]")))))));
    X3D0.toFileX3D("../data/Box.new.x3d");
