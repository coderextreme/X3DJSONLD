load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.0")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Networking").setLevel(2))
        .addMeta(new metaObject().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta(new metaObject().setName("source").setContent("t1.wrl")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(Java.to(["EXAMINE","FLY","WALK"], Java.type("java.lang.String[]"))).setSpeed(3).setAvatarSize(Java.to([200,200,120], Java.type("float[]"))))
        .addChild(new WorldInfoObject().setTitle("Arts Mapper"))
        .addChild(new ViewpointObject().setDescription("looking North").setPosition(Java.to([0,60,110], Java.type("float[]"))).setOrientation(Java.to([1,0,0,-0.699999988079071], Java.type("float[]"))).setFieldOfView(0.785398125648499))
        .addChild(new ViewpointObject().setDescription("looking East").setPosition(Java.to([-140,30,0], Java.type("float[]"))).setOrientation(Java.to([0,0.400000005960464,0,-1.39999997615814], Java.type("float[]"))).setFieldOfView(0.785398125648499))
        .addChild(new ViewpointObject().setDescription("Overhead").setPosition(Java.to([0,150,0], Java.type("float[]"))).setOrientation(Java.to([1,0,0,-1.57000005245209], Java.type("float[]"))).setFieldOfView(0.785398125648499))
        .addChild(new ProtoDeclareObject().setName("org")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("posi").setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("col").setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setTransparency(0.400000005960464)
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry(new SphereObject().setRadius(1.10000002384186)))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("posi"))))))
        .addChild(new ProtoDeclareObject().setName("r")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("org")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new AnchorObject().setUrl(Java.to(["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]"))).setDescription("High Peak Community Arts")
          .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("r"))))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("col").setValue("0 0.300000011920929 1"));
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("posi"));
ProtoInstance1
            .addFieldValue(new fieldValueObject().setName("pos").setValue("400 0.100000001490116 -385"));
    X3D0.toFileX3D("../data/t2.new.x3d");
