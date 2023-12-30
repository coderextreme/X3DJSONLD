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
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
var ProtoInstance7 = null;
var ProtoInstance8 = null;
var ProtoInstance9 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("rubik.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("generator").setContent("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("sphereproto")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("xtranslation")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to([1f,1f,1f], Java.type("float[]")))))
                .setGeometry(new Sphere()))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("xtranslation"))))))
        .addChild(new ProtoDeclare().setName("three")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("ytranslation")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(ProtoInstance0 = new ProtoInstance().setName("sphereproto"))
              .addChild(ProtoInstance1 = new ProtoInstance().setName("sphereproto"))
              .addChild(ProtoInstance2 = new ProtoInstance().setName("sphereproto"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ytranslation"))))))
        .addChild(new ProtoDeclare().setName("nine")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("ztranslation")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(ProtoInstance3 = new ProtoInstance().setName("three"))
              .addChild(ProtoInstance4 = new ProtoInstance().setName("three"))
              .addChild(ProtoInstance5 = new ProtoInstance().setName("three"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ztranslation"))))))
        .addChild(new ProtoDeclare().setName("twentyseven")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("ttranslation")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(ProtoInstance6 = new ProtoInstance().setName("nine"))
              .addChild(ProtoInstance7 = new ProtoInstance().setName("nine"))
              .addChild(ProtoInstance8 = new ProtoInstance().setName("nine"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ttranslation"))))))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDescription("Rubiks Cube").setPosition(Java.to([0f,0f,12f], Java.type("float[]"))))
        .addChild(ProtoInstance9 = new ProtoInstance().setName("twentyseven")))      ;
ProtoInstance1
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("2 0 0"));
ProtoInstance2
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("-2 0 0"));
ProtoInstance4
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 2 0"));
ProtoInstance5
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 -2 0"));
ProtoInstance7
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 2"));
ProtoInstance8
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 -2"));
    X3D0.toFileX3D("../data/rubik.new.graal.x3d");
    X3D0.toFileJSON("../data/rubik.new.graal.json");
