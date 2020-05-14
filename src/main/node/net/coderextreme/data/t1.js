var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
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
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta((new autoclass.meta()).setName("source").setContent("t1.wrl")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE","FLY","WALK"])).setSpeed(java.newFloat(3)).setAvatarSize(java.newArray("float", [java.newFloat(200), java.newFloat(200), java.newFloat(120)])))
        .addChild((new autoclass.WorldInfo()).setTitle("Arts Mapper"))
        .addChild((new autoclass.Viewpoint()).setDescription("looking North").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(60), java.newFloat(110)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.699999988079071)])).setFieldOfView(java.newFloat(0.785398125648499)))
        .addChild((new autoclass.Viewpoint()).setDescription("looking East").setPosition(java.newArray("float", [java.newFloat(-140), java.newFloat(30), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(0.400000005960464), java.newFloat(0), java.newFloat(-1.39999997615814)])).setFieldOfView(java.newFloat(0.785398125648499)))
        .addChild((new autoclass.Viewpoint()).setDescription("Overhead").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(150), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57000005245209)])).setFieldOfView(java.newFloat(0.785398125648499)))
        .addChild((new autoclass.ProtoDeclare()).setName("school")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(0.200000002980232)).setDiffuseColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0), java.newFloat(1)]))))
                .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(java.newArray("int", [0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.349999994039536), java.newFloat(-0.349999994039536), java.newFloat(0.349999994039536), java.newFloat(0.349999994039536), java.newFloat(-0.349999994039536), java.newFloat(0.349999994039536), java.newFloat(0.349999994039536), java.newFloat(-0.349999994039536), java.newFloat(-0.349999994039536), java.newFloat(-0.349999994039536), java.newFloat(-0.349999994039536), java.newFloat(-0.349999994039536), java.newFloat(0), java.newFloat(0.349999994039536), java.newFloat(0)])))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("institute")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(0.200000002980232)).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0)]))))
                .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(0.699999988079071), java.newFloat(0.699999988079071), java.newFloat(0.699999988079071)]))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("disart_org")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0)]))))
                .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.699999988079071))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("org")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("posi").setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("col").setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(0.400000005960464))
                    .setIS((new autoclass.IS())
                      .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(1.10000002384186))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("posi"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("l")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("r")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("n")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("i")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance3 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-468), java.newFloat(0), java.newFloat(315)]))
          .addChild((new autoclass.Inline()).setUrl(java.newArray("java.lang.String", ["t.wrl"])))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Derby Women's Centre")
            .addChild(ProtoInstance4 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("High Peak Community Arts")
            .addChild(ProtoInstance5 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Charlesworth Primary School")
            .addChild(ProtoInstance6 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Hope Valley College")
            .addChild(ProtoInstance7 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("People Express")
            .addChild(ProtoInstance8 = (new autoclass.ProtoInstance()).setName("i")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("QArts/Studios")
            .addChild(ProtoInstance9 = (new autoclass.ProtoInstance()).setName("i")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Stroke Unit, Derbyshire Royal Infirmary")
            .addChild(ProtoInstance10 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Park View Primary, Derby")
            .addChild(ProtoInstance11 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("First Movement")
            .addChild(ProtoInstance12 = (new autoclass.ProtoInstance()).setName("n")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("St. Benedict R.C. School, Visual Impairment Unit")
            .addChild(ProtoInstance13 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Beckett Primary, Derby")
            .addChild(ProtoInstance14 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Brackensdale Junior School, Communty Unit")
            .addChild(ProtoInstance15 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Moorhead Primary, Derby")
            .addChild(ProtoInstance16 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Derby Deaf Club")
            .addChild(ProtoInstance17 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Nightingale Junior, Derby")
            .addChild(ProtoInstance18 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("St Mary's Primary, Derby")
            .addChild(ProtoInstance19 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Griffe Field Primary, Derby")
            .addChild(ProtoInstance20 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Leicester Road Day Centre, Melton Mowbray")
            .addChild(ProtoInstance21 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Ivy House Special School, Derby")
            .addChild(ProtoInstance22 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Oakham Day Centre, Rutland")
            .addChild(ProtoInstance23 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Parkwood School, Alfreton")
            .addChild(ProtoInstance24 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Ash Green, Specialist Learning Disability Resource")
            .addChild(ProtoInstance25 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Ashgate Croft School, Chesterfield")
            .addChild(ProtoInstance26 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Highfields School, Matlock")
            .addChild(ProtoInstance27 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("City Arts")
            .addChild(ProtoInstance28 = (new autoclass.ProtoInstance()).setName("i")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Indigo Dance Group (Salamanda Tandem)")
            .addChild(ProtoInstance29 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Watering Seeds")
            .addChild(ProtoInstance30 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Red oaks")
            .addChild(ProtoInstance31 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("West Notts College")
            .addChild(ProtoInstance32 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Willow Wood Day Centre")
            .addChild(ProtoInstance33 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Fased In The Arts")
            .addChild(ProtoInstance34 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("27a Access Artspace")
            .addChild(ProtoInstance35 = (new autoclass.ProtoInstance()).setName("n")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Roman Way Day Centre, Market Harborough")
            .addChild(ProtoInstance36 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Mosaic, Leicester Disability Services")
            .addChild(ProtoInstance37 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Bamboozle Theatre Company")
            .addChild(ProtoInstance38 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Ellesmere College, Leicester")
            .addChild(ProtoInstance39 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Ashmount School, Loughborough")
            .addChild(ProtoInstance40 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Mantle Community Arts")
            .addChild(ProtoInstance41 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Forrest Way School")
            .addChild(ProtoInstance42 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Ibstock Community College")
            .addChild(ProtoInstance43 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Artlink East")
            .addChild(ProtoInstance44 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("United Hospitals and NHS Trust Lincolnshire")
            .addChild(ProtoInstance45 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Ancaster Day Centre")
            .addChild(ProtoInstance46 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Creations")
            .addChild(ProtoInstance47 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Nene Day Centre, Northamtpon")
            .addChild(ProtoInstance48 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Delapre Middle School, Northampton")
            .addChild(ProtoInstance49 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("The Links, Brackley")
            .addChild(ProtoInstance50 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("New Perspectives")
            .addChild(ProtoInstance51 = (new autoclass.ProtoInstance()).setName("n")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("UKan2")
            .addChild(ProtoInstance52 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Silverstone County Infants School")
            .addChild(ProtoInstance53 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Riverside Resource Centre, Towcester")
            .addChild(ProtoInstance54 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("Daventry Tertiary College")
            .addChild(ProtoInstance55 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(0.200000002980232)).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))
            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]))
              .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(430), java.newFloat(0.0199999995529652), java.newFloat(-335), java.newFloat(435.799987792969), java.newFloat(0.100000001490116), java.newFloat(-335.299987792969), java.newFloat(430), java.newFloat(0.0199999995529652), java.newFloat(-335), java.newFloat(434.600006103516), java.newFloat(0.100000001490116), java.newFloat(-338.600006103516), java.newFloat(430), java.newFloat(0.0199999995529652), java.newFloat(-335), java.newFloat(432.700012207031), java.newFloat(0.100000001490116), java.newFloat(-336.600006103516), java.newFloat(430), java.newFloat(0.0199999995529652), java.newFloat(-335), java.newFloat(434.700012207031), java.newFloat(0.100000001490116), java.newFloat(-336.899993896484), java.newFloat(429.899993896484), java.newFloat(0.0199999995529652), java.newFloat(-360.299987792969), java.newFloat(474.700012207031), java.newFloat(0.100000001490116), java.newFloat(-318.799987792969), java.newFloat(429.899993896484), java.newFloat(0.0199999995529652), java.newFloat(-360.299987792969), java.newFloat(485.600006103516), java.newFloat(0.100000001490116), java.newFloat(-309), java.newFloat(429.899993896484), java.newFloat(0.0199999995529652), java.newFloat(-360.299987792969), java.newFloat(434.799987792969), java.newFloat(0.100000001490116), java.newFloat(-371.5), java.newFloat(454), java.newFloat(0.0199999995529652), java.newFloat(-361.299987792969), java.newFloat(457.399993896484), java.newFloat(0.100000001490116), java.newFloat(-359.600006103516), java.newFloat(454), java.newFloat(0.0199999995529652), java.newFloat(-361.299987792969), java.newFloat(454.200012207031), java.newFloat(0.100000001490116), java.newFloat(-358.600006103516), java.newFloat(454), java.newFloat(0.0199999995529652), java.newFloat(-361.299987792969), java.newFloat(450.600006103516), java.newFloat(0.100000001490116), java.newFloat(-358.600006103516), java.newFloat(458.899993896484), java.newFloat(0.0199999995529652), java.newFloat(-304.299987792969), java.newFloat(473.5), java.newFloat(0.100000001490116), java.newFloat(-287.5), java.newFloat(458.899993896484), java.newFloat(0.0199999995529652), java.newFloat(-304.299987792969), java.newFloat(458), java.newFloat(0.100000001490116), java.newFloat(-304.5), java.newFloat(491.600006103516), java.newFloat(0.0199999995529652), java.newFloat(-335.700012207031), java.newFloat(491.399993896484), java.newFloat(0.100000001490116), java.newFloat(-336.799987792969), java.newFloat(491.600006103516), java.newFloat(0.0199999995529652), java.newFloat(-335.700012207031), java.newFloat(496.899993896484), java.newFloat(0.100000001490116), java.newFloat(-368.899993896484), java.newFloat(467), java.newFloat(0.0199999995529652), java.newFloat(-243.899993896484), java.newFloat(477.100006103516), java.newFloat(0.100000001490116), java.newFloat(-260), java.newFloat(467), java.newFloat(0.0199999995529652), java.newFloat(-243.899993896484), java.newFloat(459), java.newFloat(0.100000001490116), java.newFloat(-236.399993896484), java.newFloat(458.700012207031), java.newFloat(0.0199999995529652), java.newFloat(-262.700012207031), java.newFloat(469.5), java.newFloat(0.100000001490116), java.newFloat(-249.800003051758), java.newFloat(458.700012207031), java.newFloat(0.0199999995529652), java.newFloat(-262.700012207031), java.newFloat(456.700012207031), java.newFloat(0.100000001490116), java.newFloat(-261.799987792969)])))))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(0.200000002980232)).setEmissiveColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))))
            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]))
              .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(400), java.newFloat(0.0199999995529652), java.newFloat(-385), java.newFloat(400.600006103516), java.newFloat(0.100000001490116), java.newFloat(-392.899993896484), java.newFloat(400), java.newFloat(0.0199999995529652), java.newFloat(-385), java.newFloat(416.700012207031), java.newFloat(0.100000001490116), java.newFloat(-383.399993896484), java.newFloat(430), java.newFloat(0.0199999995529652), java.newFloat(-335), java.newFloat(438.299987792969), java.newFloat(0.100000001490116), java.newFloat(-338.600006103516), java.newFloat(430), java.newFloat(0.0199999995529652), java.newFloat(-335), java.newFloat(434.799987792969), java.newFloat(0.100000001490116), java.newFloat(-336), java.newFloat(430), java.newFloat(0.0199999995529652), java.newFloat(-335), java.newFloat(437.600006103516), java.newFloat(0.100000001490116), java.newFloat(-332.600006103516), java.newFloat(430), java.newFloat(0.0199999995529652), java.newFloat(-335), java.newFloat(436.299987792969), java.newFloat(0.100000001490116), java.newFloat(-333.399993896484), java.newFloat(430), java.newFloat(0.0199999995529652), java.newFloat(-335), java.newFloat(435.200012207031), java.newFloat(0.100000001490116), java.newFloat(-336.799987792969), java.newFloat(430), java.newFloat(0.0199999995529652), java.newFloat(-335), java.newFloat(432.5), java.newFloat(0.100000001490116), java.newFloat(-332.5), java.newFloat(429.899993896484), java.newFloat(0.0199999995529652), java.newFloat(-360.299987792969), java.newFloat(436.100006103516), java.newFloat(0.100000001490116), java.newFloat(-334.899993896484), java.newFloat(429.899993896484), java.newFloat(0.0199999995529652), java.newFloat(-360.299987792969), java.newFloat(440.5), java.newFloat(0.100000001490116), java.newFloat(-355.5), java.newFloat(429.899993896484), java.newFloat(0.0199999995529652), java.newFloat(-360.299987792969), java.newFloat(436.299987792969), java.newFloat(0.100000001490116), java.newFloat(-371.700012207031), java.newFloat(429.899993896484), java.newFloat(0.0199999995529652), java.newFloat(-360.299987792969), java.newFloat(431.200012207031), java.newFloat(0.100000001490116), java.newFloat(-361.200012207031), java.newFloat(457.100006103516), java.newFloat(0.0199999995529652), java.newFloat(-300.799987792969), java.newFloat(456.799987792969), java.newFloat(0.100000001490116), java.newFloat(-302.600006103516), java.newFloat(457.100006103516), java.newFloat(0.0199999995529652), java.newFloat(-300.799987792969), java.newFloat(453.299987792969), java.newFloat(0.100000001490116), java.newFloat(-318.600006103516), java.newFloat(442.399993896484), java.newFloat(0.0199999995529652), java.newFloat(-314.5), java.newFloat(444.600006103516), java.newFloat(0.100000001490116), java.newFloat(-313.700012207031), java.newFloat(442.399993896484), java.newFloat(0.0199999995529652), java.newFloat(-314.5), java.newFloat(440.600006103516), java.newFloat(0.100000001490116), java.newFloat(-310.399993896484), java.newFloat(467), java.newFloat(0.0199999995529652), java.newFloat(-243.899993896484), java.newFloat(474.700012207031), java.newFloat(0.100000001490116), java.newFloat(-259.100006103516), java.newFloat(457.399993896484), java.newFloat(0.0199999995529652), java.newFloat(-262.700012207031), java.newFloat(466.899993896484), java.newFloat(0.100000001490116), java.newFloat(-243.800003051758)])))))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(0.200000002980232)).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(1)]))))
            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1]))
              .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(430), java.newFloat(0.0199999995529652), java.newFloat(-335), java.newFloat(429.899993896484), java.newFloat(0.100000001490116), java.newFloat(-360.299987792969), java.newFloat(442.399993896484), java.newFloat(0.0199999995529652), java.newFloat(-314.5), java.newFloat(429.899993896484), java.newFloat(0.100000001490116), java.newFloat(-319.600006103516), java.newFloat(457.399993896484), java.newFloat(0.0199999995529652), java.newFloat(-262.700012207031), java.newFloat(467), java.newFloat(0.100000001490116), java.newFloat(-243.899993896484), java.newFloat(458.700012207031), java.newFloat(0.0199999995529652), java.newFloat(-262.700012207031), java.newFloat(457.399993896484), java.newFloat(0.100000001490116), java.newFloat(-262.700012207031), java.newFloat(458.700012207031), java.newFloat(0.0199999995529652), java.newFloat(-262.700012207031), java.newFloat(467), java.newFloat(0.100000001490116), java.newFloat(-243.899993896484)])))))))      ;
ProtoInstance0
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.600000023841858 0"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.300000011920929 1"));
ProtoInstance2
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("1 0 0.200000002980232"));
ProtoInstance3
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0.600000023841858 0 0.600000023841858"));
ProtoInstance4
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("435.299987792969 0.100000001490116 -335.600006103516"));
ProtoInstance5
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400 0.100000001490116 -385"));
ProtoInstance6
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400.600006103516 0.100000001490116 -392.899993896484"));
ProtoInstance7
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("416.700012207031 0.100000001490116 -383.399993896484"));
ProtoInstance8
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.899993896484 0.100000001490116 -319.600006103516"));
ProtoInstance9
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("430 0.100000001490116 -335"));
ProtoInstance10
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("435.799987792969 0.100000001490116 -335.299987792969"));
ProtoInstance11
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("438.299987792969 0.100000001490116 -338.600006103516"));
ProtoInstance12
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.899993896484 0.100000001490116 -360.299987792969"));
ProtoInstance13
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.600006103516 0.100000001490116 -338.600006103516"));
ProtoInstance14
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.799987792969 0.100000001490116 -336"));
ProtoInstance15
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("432.700012207031 0.100000001490116 -336.600006103516"));
ProtoInstance16
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("437.600006103516 0.100000001490116 -332.600006103516"));
ProtoInstance17
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.700012207031 0.100000001490116 -336.899993896484"));
ProtoInstance18
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("436.299987792969 0.100000001490116 -333.399993896484"));
ProtoInstance19
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("435.200012207031 0.100000001490116 -336.799987792969"));
ProtoInstance20
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("432.5 0.100000001490116 -332.5"));
ProtoInstance21
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("474.700012207031 0.100000001490116 -318.799987792969"));
ProtoInstance22
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("436.100006103516 0.100000001490116 -334.899993896484"));
ProtoInstance23
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("485.600006103516 0.100000001490116 -309"));
ProtoInstance24
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440.5 0.100000001490116 -355.5"));
ProtoInstance25
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.799987792969 0.100000001490116 -371.5"));
ProtoInstance26
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("436.299987792969 0.100000001490116 -371.700012207031"));
ProtoInstance27
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("431.200012207031 0.100000001490116 -361.200012207031"));
ProtoInstance28
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("455.899993896484 0.100000001490116 -341.299987792969"));
ProtoInstance29
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.100006103516 0.100000001490116 -341.5"));
ProtoInstance30
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("454 0.100000001490116 -361.299987792969"));
ProtoInstance31
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.399993896484 0.100000001490116 -359.600006103516"));
ProtoInstance32
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("454.200012207031 0.100000001490116 -358.600006103516"));
ProtoInstance33
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("450.600006103516 0.100000001490116 -358.600006103516"));
ProtoInstance34
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440 0.100000001490116 -350"));
ProtoInstance35
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.899993896484 0.100000001490116 -304.299987792969"));
ProtoInstance36
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("473.5 0.100000001490116 -287.5"));
ProtoInstance37
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458 0.100000001490116 -304.5"));
ProtoInstance38
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.100006103516 0.100000001490116 -300.799987792969"));
ProtoInstance39
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.799987792969 0.100000001490116 -302.600006103516"));
ProtoInstance40
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("453.299987792969 0.100000001490116 -318.600006103516"));
ProtoInstance41
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("442.399993896484 0.100000001490116 -314.5"));
ProtoInstance42
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("444.600006103516 0.100000001490116 -313.700012207031"));
ProtoInstance43
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440.600006103516 0.100000001490116 -310.399993896484"));
ProtoInstance44
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("491.600006103516 0.100000001490116 -335.700012207031"));
ProtoInstance45
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("491.399993896484 0.100000001490116 -336.799987792969"));
ProtoInstance46
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("496.899993896484 0.100000001490116 -368.899993896484"));
ProtoInstance47
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("467 0.100000001490116 -243.899993896484"));
ProtoInstance48
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("477.100006103516 0.100000001490116 -260"));
ProtoInstance49
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("474.700012207031 0.100000001490116 -259.100006103516"));
ProtoInstance50
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("459 0.100000001490116 -236.399993896484"));
ProtoInstance51
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.399993896484 0.100000001490116 -262.700012207031"));
ProtoInstance52
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.700012207031 0.100000001490116 -262.700012207031"));
ProtoInstance53
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("466.899993896484 0.100000001490116 -243.800003051758"));
ProtoInstance54
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("469.5 0.100000001490116 -249.800003051758"));
ProtoInstance55
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.700012207031 0.100000001490116 -261.799987792969"));
    X3D0.toFileX3D("../data/t1.new.x3d");
