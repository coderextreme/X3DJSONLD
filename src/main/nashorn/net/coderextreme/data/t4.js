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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("Networking").setLevel(2))
        .addComponent(new component().setName("Core").setLevel(2))
        .addMeta(new meta().setName("title").setContent("t4.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d"))
        .addMeta(new meta().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta(new meta().setName("creator").setContent("Andreas Plesch and John Carlson"))
        .addMeta(new meta().setName("source").setContent("t1.wrl"))
        .addMeta(new meta().setName("description").setContent("Test Case for Proto Expander"))
        .addMeta(new meta().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE","FLY","WALK"], Java.type("java.lang.String[]"))).setSpeed(3).setAvatarSize(Java.to([200,200,120], Java.type("float[]"))))
        .addChild(new WorldInfo().setTitle("Arts Mapper"))
        .addChild(new Viewpoint().setDescription("looking North").setPosition(Java.to([0,60,110], Java.type("float[]"))).setOrientation(Java.to([1,0,0,-0.699999988079071], Java.type("float[]"))).setFieldOfView(0.785398125648499))
        .addChild(new ProtoDeclare().setName("org")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("posi").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFCOLOR).setName("col").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("posi")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to([1,1,1], Java.type("float[]")))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry(new Sphere().setRadius(5.10000002384186))))))
        .addChild(new ProtoDeclare().setName("r")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("pos").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance0 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("n")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("pos").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance1 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("i")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("pos").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance2 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new Transform().setTranslation(Java.to([-468,0,315], Java.type("float[]")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("High Peak Community Arts")
            .addChild(ProtoInstance3 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("People Express")
            .addChild(ProtoInstance4 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("QArts/Studios")
            .addChild(ProtoInstance5 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("First Movement")
            .addChild(ProtoInstance6 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("City Arts")
            .addChild(ProtoInstance7 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("Indigo Dance Group (Salamanda Tandem)")
            .addChild(ProtoInstance8 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("Watering Seeds")
            .addChild(ProtoInstance9 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("Fased In The Arts")
            .addChild(ProtoInstance10 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("27a Access Artspace")
            .addChild(ProtoInstance11 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("Bamboozle Theatre Company")
            .addChild(ProtoInstance12 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("Mantle Community Arts")
            .addChild(ProtoInstance13 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("Artlink East")
            .addChild(ProtoInstance14 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("Creations")
            .addChild(ProtoInstance15 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("New Perspectives")
            .addChild(ProtoInstance16 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setUrl(Java.to([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("UKan2")
            .addChild(ProtoInstance17 = new ProtoInstance().setName("r")))))      ;
ProtoInstance0
              .addFieldValue(new fieldValue().setName("col").setValue("0 0.300000011920929 1"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("col").setValue("1 0 0.200000002980232"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("col").setValue("0.600000023841858 0 0.600000023841858"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("pos").setValue("400 0.100000001490116 -385"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("pos").setValue("429.899993896484 0.100000001490116 -319.600006103516"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("pos").setValue("430 0.100000001490116 -335"));
ProtoInstance6
              .addFieldValue(new fieldValue().setName("pos").setValue("429.899993896484 0.100000001490116 -360.299987792969"));
ProtoInstance7
              .addFieldValue(new fieldValue().setName("pos").setValue("455.899993896484 0.100000001490116 -341.299987792969"));
ProtoInstance8
              .addFieldValue(new fieldValue().setName("pos").setValue("456.100006103516 0.100000001490116 -341.5"));
ProtoInstance9
              .addFieldValue(new fieldValue().setName("pos").setValue("454 0.100000001490116 -361.299987792969"));
ProtoInstance10
              .addFieldValue(new fieldValue().setName("pos").setValue("440 0.100000001490116 -350"));
ProtoInstance11
              .addFieldValue(new fieldValue().setName("pos").setValue("458.899993896484 0.100000001490116 -304.299987792969"));
ProtoInstance12
              .addFieldValue(new fieldValue().setName("pos").setValue("457.100006103516 0.100000001490116 -300.799987792969"));
ProtoInstance13
              .addFieldValue(new fieldValue().setName("pos").setValue("442.399993896484 0.100000001490116 -314.5"));
ProtoInstance14
              .addFieldValue(new fieldValue().setName("pos").setValue("491.600006103516 0.100000001490116 -335.700012207031"));
ProtoInstance15
              .addFieldValue(new fieldValue().setName("pos").setValue("467 0.100000001490116 -243.899993896484"));
ProtoInstance16
              .addFieldValue(new fieldValue().setName("pos").setValue("457.399993896484 0.100000001490116 -262.700012207031"));
ProtoInstance17
              .addFieldValue(new fieldValue().setName("pos").setValue("458.700012207031 0.100000001490116 -262.700012207031"));
    X3D0.toFileX3D("../data/t4.new.x3d");
