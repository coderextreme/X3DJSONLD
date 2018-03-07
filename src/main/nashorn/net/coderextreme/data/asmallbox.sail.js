load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("abox.x3d").setDir("").setHttp_equiv("").setLang("").setScheme(""))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson").setDir("").setHttp_equiv("").setLang("").setScheme(""))
        .addMeta(new metaObject().setName("generator").setContent("manual").setDir("").setHttp_equiv("").setLang("").setScheme(""))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/abox.x3d").setDir("").setHttp_equiv("").setLang("").setScheme(""))
        .addMeta(new metaObject().setName("description").setContent("a box").setDir("").setHttp_equiv("").setLang("").setScheme("")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setName("anyShape").setAppinfo("").setDocumentation("")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("myShape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("").setDocumentation("").setValue("")
              .addChild(new ShapeObject().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]"))).setCssClass("")
                .setGeometry(new SphereObject().setRadius(1).setSolid(true).setCssClass("")))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]"))).setCenter(Java.to([0,0,0], Java.type("float[]"))).setRotation(Java.to([0,0,1,0], Java.type("float[]"))).setScale(Java.to([1,1,1], Java.type("float[]"))).setScaleOrientation(Java.to([0,0,1,0], Java.type("float[]"))).setTranslation(Java.to([0,0,0], Java.type("float[]"))).setCssClass("")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("children").setProtoField("myShape"))))))
        .addChild(new ProtoDeclareObject().setName("one").setAppinfo("").setDocumentation("")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("myShape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("").setDocumentation("").setValue("")
              .addChild(new ShapeObject().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]"))).setCssClass("")
                .setGeometry(new CylinderObject().setBottom(true).setHeight(2).setRadius(1).setSide(true).setSolid(true).setTop(true).setCssClass("")))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]"))).setCenter(Java.to([0,0,0], Java.type("float[]"))).setRotation(Java.to([0,0,1,0], Java.type("float[]"))).setScale(Java.to([1,1,1], Java.type("float[]"))).setScaleOrientation(Java.to([0,0,1,0], Java.type("float[]"))).setTranslation(Java.to([0,0,0], Java.type("float[]"))).setCssClass("")
              .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("anyShape").setCssClass("")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("one").setCssClass("")))      ;
ProtoInstance1
          .addFieldValue(new fieldValueObject().setName("myShape").setValue("")
            .addChild(new ShapeObject().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]"))).setCssClass("")
              .setGeometry(new BoxObject().setSize(Java.to([0.125,0.125,0.125], Java.type("float[]"))).setSolid(true).setCssClass(""))));
    X3D0.toFileX3D("../data/asmallbox.new.x3d");
