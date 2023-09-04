load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new X3D().setProfile("Interchange").setVersion("3.0")
      .setHead(new head()
        .addComponent(new component().setName("Networking").setLevel(2))
        .addMeta(new meta().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta(new meta().setName("source").setContent("t1.wrl")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE","FLY","WALK"], Java.type("java.lang.String[]"))).setSpeed(3).setAvatarSize(Java.to([200,200,120], Java.type("double[]"))))
        .addChild(new WorldInfo().setTitle("Arts Mapper"))
        .addChild(new Viewpoint().setDescription("looking North").setPosition(Java.to([0,60,110], Java.type("double[]"))).setOrientation(Java.to([1,0,0,-0.699999988079071], Java.type("double[]"))).setFieldOfView(0.785398125648499))
        .addChild(new Viewpoint().setDescription("looking East").setPosition(Java.to([-140,30,0], Java.type("double[]"))).setOrientation(Java.to([0,0.400000005960464,0,-1.39999997615814], Java.type("double[]"))).setFieldOfView(0.785398125648499))
        .addChild(new Viewpoint().setDescription("Overhead").setPosition(Java.to([0,150,0], Java.type("double[]"))).setOrientation(Java.to([1,0,0,-1.57000005245209], Java.type("double[]"))).setFieldOfView(0.785398125648499))
        .addChild(new ProtoDeclare().setName("org")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("posi").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFCOLOR).setName("col").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setTransparency(0.400000005960464)
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry(new Sphere().setRadius(1.10000002384186)))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("posi"))))))
        .addChild(new ProtoDeclare().setName("r")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("pos").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance0 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new Anchor().setUrl(Java.to(["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("High Peak Community Arts")
          .addChild(ProtoInstance1 = new ProtoInstance().setName("r"))))      ;
ProtoInstance0
              .addFieldValue(new fieldValue().setName("col").setValue("0 0.300000011920929 1"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("posi"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("pos").setValue("400 0.100000001490116 -385"));
    X3D0.toFileX3D("../data/t2.new.graal.x3d");
