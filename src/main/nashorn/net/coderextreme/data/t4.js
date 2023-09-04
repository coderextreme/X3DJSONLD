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
var ProtoInstance10 = null;
var ProtoInstance11 = null;
var ProtoInstance12 = null;
var ProtoInstance13 = null;
var ProtoInstance14 = null;
var ProtoInstance15 = null;
var ProtoInstance16 = null;
var ProtoInstance17 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("t4.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d"))
        .addMeta(new meta().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta(new meta().setName("creator").setContent("Andreas Plesch and John Carlson"))
        .addMeta(new meta().setName("source").setContent("t1.wrl"))
        .addMeta(new meta().setName("description").setContent("Test Case for Proto Expander"))
        .addComponent(new component().setName("Networking").setLevel(2))
        .addComponent(new component().setName("Core").setLevel(2)))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("org")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("posi"))
            .addField(new field().setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("col")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to([1,1,1], Java.type("double[]")))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry(new Sphere().setRadius(5.1)))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("posi"))))))
        .addChild(new ProtoDeclare().setName("r")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance0 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("n")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance1 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("i")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance2 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE","FLY","WALK"], Java.type("java.lang.String[]"))).setAvatarSize(Java.to([200,200,120], Java.type("double[]"))).setSpeed(3))
        .addChild(new WorldInfo().setTitle("Arts Mapper"))
        .addChild(new Viewpoint().setDescription("looking North").setPosition(Java.to([0,60,110], Java.type("double[]"))).setOrientation(Java.to([1,0,0,-0.699999988079071], Java.type("double[]"))).setFieldOfView(0.7853981))
        .addChild(new Transform().setTranslation(Java.to([-468,0,315], Java.type("double[]")))
          .addChild(new Anchor().setDescription("High Peak Community Arts").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance3 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("People Express").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance4 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setDescription("QArts/Studios").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance5 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setDescription("First Movement").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance6 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setDescription("City Arts").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance7 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance8 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Watering Seeds").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance9 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Fased In The Arts").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance10 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("27a Access Artspace").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance11 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setDescription("Bamboozle Theatre Company").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance12 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Mantle Community Arts").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance13 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Artlink East").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance14 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Creations").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance15 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("New Perspectives").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance16 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setDescription("UKan2").setUrl(Java.to(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance17 = new ProtoInstance().setName("r")))))      ;
ProtoInstance0
              .addFieldValue(new fieldValue().setName("col").setValue("0 0.3 1"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("col").setValue("1 0 0.2"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("col").setValue("0.6 0 0.6"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("pos").setValue("400 0.1 -385"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("pos").setValue("429.9 0.1 -319.6"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("pos").setValue("430 0.1 -335"));
ProtoInstance6
              .addFieldValue(new fieldValue().setName("pos").setValue("429.9 0.1 -360.3"));
ProtoInstance7
              .addFieldValue(new fieldValue().setName("pos").setValue("455.9 0.1 -341.3"));
ProtoInstance8
              .addFieldValue(new fieldValue().setName("pos").setValue("456.1 0.1 -341.5"));
ProtoInstance9
              .addFieldValue(new fieldValue().setName("pos").setValue("454 0.1 -361.3"));
ProtoInstance10
              .addFieldValue(new fieldValue().setName("pos").setValue("440 0.1 -350"));
ProtoInstance11
              .addFieldValue(new fieldValue().setName("pos").setValue("458.9 0.1 -304.3"));
ProtoInstance12
              .addFieldValue(new fieldValue().setName("pos").setValue("457.1 0.1 -300.8"));
ProtoInstance13
              .addFieldValue(new fieldValue().setName("pos").setValue("442.4 0.1 -314.5"));
ProtoInstance14
              .addFieldValue(new fieldValue().setName("pos").setValue("491.6 0.1 -335.7"));
ProtoInstance15
              .addFieldValue(new fieldValue().setName("pos").setValue("467 0.1 -243.9"));
ProtoInstance16
              .addFieldValue(new fieldValue().setName("pos").setValue("457.4 0.1 -262.7"));
ProtoInstance17
              .addFieldValue(new fieldValue().setName("pos").setValue("458.7 0.1 -262.7"));
    X3D0.toFileJSON("../data/t4.new.graal.json");
