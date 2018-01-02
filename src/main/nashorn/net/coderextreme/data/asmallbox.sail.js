load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("abox.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/abox.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a box")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setName("anyShape")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("myShape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new ShapeObject()
                .setGeometry(new SphereObject()))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("children").setProtoField("myShape"))))))
        .addChild(new ProtoDeclareObject().setName("one")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("myShape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new ShapeObject()
                .setGeometry(new CylinderObject()))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("anyShape")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("one")))      ;
ProtoInstance1
          .addFieldValue(new fieldValueObject().setName("myShape")
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject().setSize(Java.to([0.125,0.125,0.125], Java.type("float[]"))))));
    X3D0.toFileX3D("../data/asmallbox.new.x3d");
