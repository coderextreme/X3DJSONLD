load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("BoxEm2.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("generator").setContent("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("anyShape")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("xtranslation"))
            .addField(new field().setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("myShape")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to([1f,1f,1f], Java.type("float[]")))))
                .setGeometry(new Sphere()))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("xtranslation"))
                .addConnect(new connect().setNodeField("children").setProtoField("myShape"))))))
        .addChild(new ProtoDeclare().setName("three")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("ytranslation"))
            .addField(new field().setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("myShape")
              .addChild(new Shape().setDEF("_1")
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to([1f,1f,1f], Java.type("float[]")))))
                .setGeometry(new Cylinder()))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(ProtoInstance0 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance1 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance2 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ytranslation"))))))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDescription("Cubes on Fire").setPosition(Java.to([0f,0f,12f], Java.type("float[]"))))
        .addChild(ProtoInstance3 = new ProtoInstance().setDEF("threepi").setName("three"))
        .addChild(new Transform().setTranslation(Java.to([0f,2f,0f], Java.type("float[]")))
          .addChild(new Shape().setUSE("box"))))      ;
ProtoInstance1
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("2 0 0"));
ProtoInstance2
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("-2 0 0"));
ProtoInstance3
          .addFieldValue(new fieldValue().setName("myShape")
            .addChild(new Shape().setDEF("box")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to([0f,1f,0f], Java.type("float[]")))))
              .setGeometry(new Box().setSize(Java.to([1f,1f,1f], Java.type("float[]"))))));
    X3D0.toFileX3D("../data/BoxEm2.new.graal.x3d");
    X3D0.toFileJSON("../data/BoxEm2.new.graal.json");
