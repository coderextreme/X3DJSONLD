load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("abox.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/abox.x3d"))
        .addMeta(new meta().setName("description").setContent("a box")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("anyShape")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_MFNODE).setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
                .setGeometry(new Sphere()))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("myShape"))))))
        .addChild(new ProtoDeclare().setName("one")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_MFNODE).setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
                .setGeometry(new Cylinder()))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
              .addChild(ProtoInstance0 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("one")))      ;
ProtoInstance1
          .addFieldValue(new fieldValue().setName("myShape")
            .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
              .setGeometry(new Box().setSize(Java.to([140,140,140], Java.type("float[]"))).setSolid(true))));
    X3D0.toFileX3D("../data/abox.new.x3d");
