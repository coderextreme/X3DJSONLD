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
var ProtoInstance18 = null;
var ProtoInstance19 = null;
var ProtoInstance20 = null;
var ProtoInstance21 = null;
var ProtoInstance22 = null;
var ProtoInstance23 = null;
var ProtoInstance24 = null;
var ProtoInstance25 = null;
var ProtoInstance26 = null;
var ProtoInstance27 = null;
var ProtoInstance28 = null;
var ProtoInstance29 = null;
var ProtoInstance30 = null;
var ProtoInstance31 = null;
var ProtoInstance32 = null;
var ProtoInstance33 = null;
var ProtoInstance34 = null;
var ProtoInstance35 = null;
var ProtoInstance36 = null;
var ProtoInstance37 = null;
var ProtoInstance38 = null;
var ProtoInstance39 = null;
var ProtoInstance40 = null;
var ProtoInstance41 = null;
var ProtoInstance42 = null;
var ProtoInstance43 = null;
var ProtoInstance44 = null;
var ProtoInstance45 = null;
var ProtoInstance46 = null;
var ProtoInstance47 = null;
var ProtoInstance48 = null;
var ProtoInstance49 = null;
var ProtoInstance50 = null;
var ProtoInstance51 = null;
var ProtoInstance52 = null;
var ProtoInstance53 = null;
var ProtoInstance54 = null;
var ProtoInstance55 = null;
      var X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("generator").setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("school")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to([0.5,0,1], Java.type("double[]"))).setTransparency(0.2)))
                .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(Java.to([-0.35,-0.35,0.35,0.35,-0.35,0.35,0.35,-0.35,-0.35,-0.35,-0.35,-0.35,0,0.35,0], Java.type("double[]"))))))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("institute")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to([1,1,0], Java.type("double[]"))).setTransparency(0.2)))
                .setGeometry(new Box().setSize(Java.to([0.7,0.7,0.7], Java.type("double[]")))))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("disart_org")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to([1,1,0], Java.type("double[]")))))
                .setGeometry(new Sphere().setRadius(0.7)))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("org")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("posi"))
            .addField(new field().setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("col")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setTransparency(0.4)
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry(new Sphere().setRadius(1.1)))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("posi"))))))
        .addChild(new ProtoDeclare().setName("l")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance0 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("r")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance1 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("n")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance2 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("i")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance3 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE","FLY","WALK"], Java.type("java.lang.String[]"))).setAvatarSize(Java.to([200,200,120], Java.type("double[]"))).setSpeed(3))
        .addChild(new WorldInfo().setTitle("Arts Mapper"))
        .addChild(new Viewpoint().setDescription("looking North").setPosition(Java.to([0,60,110], Java.type("double[]"))).setOrientation(Java.to([1,0,0,-0.699999988079071], Java.type("double[]"))).setFieldOfView(0.7853981))
        .addChild(new Viewpoint().setDescription("looking East").setPosition(Java.to([-140,30,0], Java.type("double[]"))).setOrientation(Java.to([0,0.400000005960465,0,-1.39999997615814], Java.type("double[]"))).setFieldOfView(0.7853981))
        .addChild(new Viewpoint().setDescription("Overhead").setPosition(Java.to([0,150,0], Java.type("double[]"))).setOrientation(Java.to([1,0,0,-1.57000005245209], Java.type("double[]"))).setFieldOfView(0.7853981))
        .addChild(new Transform().setTranslation(Java.to([-468,0,315], Java.type("double[]")))
          .addChild(new Inline().setGlobal(true).setUrl(Java.to(["t.wrl"], Java.type("java.lang.String[]"))))
          .addChild(new Anchor().setDescription("Derby Women's Centre").setUrl(Java.to(["javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance4 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("High Peak Community Arts").setUrl(Java.to(["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance5 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Charlesworth Primary School").setUrl(Java.to(["javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance6 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Hope Valley College").setUrl(Java.to(["javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance7 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("People Express").setUrl(Java.to(["javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance8 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setDescription("QArts/Studios").setUrl(Java.to(["javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance9 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setDescription("Stroke Unit, Derbyshire Royal Infirmary").setUrl(Java.to(["javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance10 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Park View Primary, Derby").setUrl(Java.to(["javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance11 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("First Movement").setUrl(Java.to(["javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance12 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setDescription("St. Benedict R.C. School, Visual Impairment Unit").setUrl(Java.to(["javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance13 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Beckett Primary, Derby").setUrl(Java.to(["javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance14 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Brackensdale Junior School, Communty Unit").setUrl(Java.to(["javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance15 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Moorhead Primary, Derby").setUrl(Java.to(["javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance16 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Derby Deaf Club").setUrl(Java.to(["javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance17 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Nightingale Junior, Derby").setUrl(Java.to(["javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance18 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("St Mary's Primary, Derby").setUrl(Java.to(["javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance19 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Griffe Field Primary, Derby").setUrl(Java.to(["javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance20 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Leicester Road Day Centre, Melton Mowbray").setUrl(Java.to(["javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance21 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Ivy House Special School, Derby").setUrl(Java.to(["javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance22 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Oakham Day Centre, Rutland").setUrl(Java.to(["javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance23 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Parkwood School, Alfreton").setUrl(Java.to(["javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance24 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Ash Green, Specialist Learning Disability Resource").setUrl(Java.to(["javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance25 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Ashgate Croft School, Chesterfield").setUrl(Java.to(["javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance26 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Highfields School, Matlock").setUrl(Java.to(["javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance27 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("City Arts").setUrl(Java.to(["javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance28 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(Java.to(["javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance29 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Watering Seeds").setUrl(Java.to(["javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance30 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Red oaks").setUrl(Java.to(["javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance31 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("West Notts College").setUrl(Java.to(["javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance32 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Willow Wood Day Centre").setUrl(Java.to(["javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance33 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Fased In The Arts").setUrl(Java.to(["javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance34 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("27a Access Artspace").setUrl(Java.to(["javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance35 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setDescription("Roman Way Day Centre, Market Harborough").setUrl(Java.to(["javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance36 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Mosaic, Leicester Disability Services").setUrl(Java.to(["javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance37 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Bamboozle Theatre Company").setUrl(Java.to(["javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance38 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Ellesmere College, Leicester").setUrl(Java.to(["javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance39 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Ashmount School, Loughborough").setUrl(Java.to(["javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance40 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Mantle Community Arts").setUrl(Java.to(["javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance41 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Forrest Way School").setUrl(Java.to(["javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance42 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Ibstock Community College").setUrl(Java.to(["javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance43 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Artlink East").setUrl(Java.to(["javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance44 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("United Hospitals and NHS Trust Lincolnshire").setUrl(Java.to(["javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance45 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Ancaster Day Centre").setUrl(Java.to(["javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance46 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Creations").setUrl(Java.to(["javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance47 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Nene Day Centre, Northamtpon").setUrl(Java.to(["javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance48 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Delapre Middle School, Northampton").setUrl(Java.to(["javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance49 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("The Links, Brackley").setUrl(Java.to(["javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance50 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("New Perspectives").setUrl(Java.to(["javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance51 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setDescription("UKan2").setUrl(Java.to(["javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance52 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Silverstone County Infants School").setUrl(Java.to(["javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance53 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Riverside Resource Centre, Towcester").setUrl(Java.to(["javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance54 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Daventry Tertiary College").setUrl(Java.to(["javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], Java.type("java.lang.String[]")))
            .addChild(ProtoInstance55 = new ProtoInstance().setName("school")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setEmissiveColor(Java.to([1,0,0], Java.type("double[]"))).setTransparency(0.2)))
            .setGeometry(new IndexedLineSet().setCoordIndex(Java.to([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1], Java.type("int[]")))
              .setCoord(new Coordinate().setPoint(Java.to([430,0.02,-335,435.8,0.1,-335.3,430,0.02,-335,434.6,0.1,-338.6,430,0.02,-335,432.7,0.1,-336.6,430,0.02,-335,434.7,0.1,-336.9,429.9,0.02,-360.3,474.7,0.1,-318.8,429.9,0.02,-360.3,485.6,0.1,-309,429.9,0.02,-360.3,434.8,0.1,-371.5,454,0.02,-361.3,457.4,0.1,-359.6,454,0.02,-361.3,454.2,0.1,-358.6,454,0.02,-361.3,450.6,0.1,-358.6,458.9,0.02,-304.3,473.5,0.1,-287.5,458.9,0.02,-304.3,458,0.1,-304.5,491.6,0.02,-335.7,491.4,0.1,-336.8,491.6,0.02,-335.7,496.9,0.1,-368.9,467,0.02,-243.9,477.1,0.1,-260,467,0.02,-243.9,459,0.1,-236.4,458.7,0.02,-262.7,469.5,0.1,-249.8,458.7,0.02,-262.7,456.7,0.1,-261.8], Java.type("double[]"))))))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setEmissiveColor(Java.to([0,1,0], Java.type("double[]"))).setTransparency(0.2)))
            .setGeometry(new IndexedLineSet().setCoordIndex(Java.to([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1], Java.type("int[]")))
              .setCoord(new Coordinate().setPoint(Java.to([400,0.02,-385,400.6,0.1,-392.9,400,0.02,-385,416.7,0.1,-383.4,430,0.02,-335,438.3,0.1,-338.6,430,0.02,-335,434.8,0.1,-336,430,0.02,-335,437.6,0.1,-332.6,430,0.02,-335,436.3,0.1,-333.4,430,0.02,-335,435.2,0.1,-336.8,430,0.02,-335,432.5,0.1,-332.5,429.9,0.02,-360.3,436.1,0.1,-334.9,429.9,0.02,-360.3,440.5,0.1,-355.5,429.9,0.02,-360.3,436.3,0.1,-371.7,429.9,0.02,-360.3,431.2,0.1,-361.2,457.1,0.02,-300.8,456.8,0.1,-302.6,457.1,0.02,-300.8,453.3,0.1,-318.6,442.4,0.02,-314.5,444.6,0.1,-313.7,442.4,0.02,-314.5,440.6,0.1,-310.4,467,0.02,-243.9,474.7,0.1,-259.1,457.4,0.02,-262.7,466.9,0.1,-243.8], Java.type("double[]"))))))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setEmissiveColor(Java.to([1,0,1], Java.type("double[]"))).setTransparency(0.2)))
            .setGeometry(new IndexedLineSet().setCoordIndex(Java.to([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1], Java.type("int[]")))
              .setCoord(new Coordinate().setPoint(Java.to([430,0.02,-335,429.9,0.1,-360.3,442.4,0.02,-314.5,429.9,0.1,-319.6,457.4,0.02,-262.7,467,0.1,-243.9,458.7,0.02,-262.7,457.4,0.1,-262.7,458.7,0.02,-262.7,467,0.1,-243.9], Java.type("double[]"))))))))      ;
ProtoInstance0
              .addFieldValue(new fieldValue().setName("col").setValue("0 0.6 0"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("col").setValue("0 0.3 1"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("col").setValue("1 0 0.2"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("col").setValue("0.6 0 0.6"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("pos").setValue("435.3 0.1 -335.6"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("pos").setValue("400 0.1 -385"));
ProtoInstance6
              .addFieldValue(new fieldValue().setName("pos").setValue("400.6 0.1 -392.9"));
ProtoInstance7
              .addFieldValue(new fieldValue().setName("pos").setValue("416.7 0.1 -383.4"));
ProtoInstance8
              .addFieldValue(new fieldValue().setName("pos").setValue("429.9 0.1 -319.6"));
ProtoInstance9
              .addFieldValue(new fieldValue().setName("pos").setValue("430 0.1 -335"));
ProtoInstance10
              .addFieldValue(new fieldValue().setName("pos").setValue("435.8 0.1 -335.3"));
ProtoInstance11
              .addFieldValue(new fieldValue().setName("pos").setValue("438.3 0.1 -338.6"));
ProtoInstance12
              .addFieldValue(new fieldValue().setName("pos").setValue("429.9 0.1 -360.3"));
ProtoInstance13
              .addFieldValue(new fieldValue().setName("pos").setValue("434.6 0.1 -338.6"));
ProtoInstance14
              .addFieldValue(new fieldValue().setName("pos").setValue("434.8 0.1 -336"));
ProtoInstance15
              .addFieldValue(new fieldValue().setName("pos").setValue("432.7 0.1 -336.6"));
ProtoInstance16
              .addFieldValue(new fieldValue().setName("pos").setValue("437.6 0.1 -332.6"));
ProtoInstance17
              .addFieldValue(new fieldValue().setName("pos").setValue("434.7 0.1 -336.9"));
ProtoInstance18
              .addFieldValue(new fieldValue().setName("pos").setValue("436.3 0.1 -333.4"));
ProtoInstance19
              .addFieldValue(new fieldValue().setName("pos").setValue("435.2 0.1 -336.8"));
ProtoInstance20
              .addFieldValue(new fieldValue().setName("pos").setValue("432.5 0.1 -332.5"));
ProtoInstance21
              .addFieldValue(new fieldValue().setName("pos").setValue("474.7 0.1 -318.8"));
ProtoInstance22
              .addFieldValue(new fieldValue().setName("pos").setValue("436.1 0.1 -334.9"));
ProtoInstance23
              .addFieldValue(new fieldValue().setName("pos").setValue("485.6 0.1 -309"));
ProtoInstance24
              .addFieldValue(new fieldValue().setName("pos").setValue("440.5 0.1 -355.5"));
ProtoInstance25
              .addFieldValue(new fieldValue().setName("pos").setValue("434.8 0.1 -371.5"));
ProtoInstance26
              .addFieldValue(new fieldValue().setName("pos").setValue("436.3 0.1 -371.7"));
ProtoInstance27
              .addFieldValue(new fieldValue().setName("pos").setValue("431.2 0.1 -361.2"));
ProtoInstance28
              .addFieldValue(new fieldValue().setName("pos").setValue("455.9 0.1 -341.3"));
ProtoInstance29
              .addFieldValue(new fieldValue().setName("pos").setValue("456.1 0.1 -341.5"));
ProtoInstance30
              .addFieldValue(new fieldValue().setName("pos").setValue("454 0.1 -361.3"));
ProtoInstance31
              .addFieldValue(new fieldValue().setName("pos").setValue("457.4 0.1 -359.6"));
ProtoInstance32
              .addFieldValue(new fieldValue().setName("pos").setValue("454.2 0.1 -358.6"));
ProtoInstance33
              .addFieldValue(new fieldValue().setName("pos").setValue("450.6 0.1 -358.6"));
ProtoInstance34
              .addFieldValue(new fieldValue().setName("pos").setValue("440 0.1 -350"));
ProtoInstance35
              .addFieldValue(new fieldValue().setName("pos").setValue("458.9 0.1 -304.3"));
ProtoInstance36
              .addFieldValue(new fieldValue().setName("pos").setValue("473.5 0.1 -287.5"));
ProtoInstance37
              .addFieldValue(new fieldValue().setName("pos").setValue("458 0.1 -304.5"));
ProtoInstance38
              .addFieldValue(new fieldValue().setName("pos").setValue("457.1 0.1 -300.8"));
ProtoInstance39
              .addFieldValue(new fieldValue().setName("pos").setValue("456.8 0.1 -302.6"));
ProtoInstance40
              .addFieldValue(new fieldValue().setName("pos").setValue("453.3 0.1 -318.6"));
ProtoInstance41
              .addFieldValue(new fieldValue().setName("pos").setValue("442.4 0.1 -314.5"));
ProtoInstance42
              .addFieldValue(new fieldValue().setName("pos").setValue("444.6 0.1 -313.7"));
ProtoInstance43
              .addFieldValue(new fieldValue().setName("pos").setValue("440.6 0.1 -310.4"));
ProtoInstance44
              .addFieldValue(new fieldValue().setName("pos").setValue("491.6 0.1 -335.7"));
ProtoInstance45
              .addFieldValue(new fieldValue().setName("pos").setValue("491.4 0.1 -336.8"));
ProtoInstance46
              .addFieldValue(new fieldValue().setName("pos").setValue("496.9 0.1 -368.9"));
ProtoInstance47
              .addFieldValue(new fieldValue().setName("pos").setValue("467 0.1 -243.9"));
ProtoInstance48
              .addFieldValue(new fieldValue().setName("pos").setValue("477.1 0.1 -260"));
ProtoInstance49
              .addFieldValue(new fieldValue().setName("pos").setValue("474.7 0.1 -259.1"));
ProtoInstance50
              .addFieldValue(new fieldValue().setName("pos").setValue("459 0.1 -236.4"));
ProtoInstance51
              .addFieldValue(new fieldValue().setName("pos").setValue("457.4 0.1 -262.7"));
ProtoInstance52
              .addFieldValue(new fieldValue().setName("pos").setValue("458.7 0.1 -262.7"));
ProtoInstance53
              .addFieldValue(new fieldValue().setName("pos").setValue("466.9 0.1 -243.8"));
ProtoInstance54
              .addFieldValue(new fieldValue().setName("pos").setValue("469.5 0.1 -249.8"));
ProtoInstance55
              .addFieldValue(new fieldValue().setName("pos").setValue("456.7 0.1 -261.8"));
    X3D0.toFileJSON("../data/t1.new.graal.json");
