var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
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
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("generator").setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ProtoDeclare()).setName("school")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0), java.newFloat(1)])).setTransparency(java.newFloat(0.2))))
                .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(java.newArray("int", [0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.35), java.newFloat(-0.35), java.newFloat(0.35), java.newFloat(0.35), java.newFloat(-0.35), java.newFloat(0.35), java.newFloat(0.35), java.newFloat(-0.35), java.newFloat(-0.35), java.newFloat(-0.35), java.newFloat(-0.35), java.newFloat(-0.35), java.newFloat(0), java.newFloat(0.35), java.newFloat(0)])))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("institute")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0)])).setTransparency(java.newFloat(0.2))))
                .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)]))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("disart_org")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0)]))))
                .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.7))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("org")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("posi"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("col")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(0.4))
                    .setIS((new autoclass.IS())
                      .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(1.1))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("posi"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("l")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("r")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("n")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("i")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance3 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE","FLY","WALK"])).setAvatarSize(java.newArray("float", [java.newFloat(200), java.newFloat(200), java.newFloat(120)])).setSpeed(java.newFloat(3)))
        .addChild((new autoclass.WorldInfo()).setTitle("Arts Mapper"))
        .addChild((new autoclass.Viewpoint()).setDescription("looking North").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(60), java.newFloat(110)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.699999988079071)])).setFieldOfView(java.newFloat(0.7853981)))
        .addChild((new autoclass.Viewpoint()).setDescription("looking East").setPosition(java.newArray("float", [java.newFloat(-140), java.newFloat(30), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(0.400000005960465), java.newFloat(0), java.newFloat(-1.39999997615814)])).setFieldOfView(java.newFloat(0.7853981)))
        .addChild((new autoclass.Viewpoint()).setDescription("Overhead").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(150), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57000005245209)])).setFieldOfView(java.newFloat(0.7853981)))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-468), java.newFloat(0), java.newFloat(315)]))
          .addChild((new autoclass.Inline()).setGlobal(true).setUrl(java.newArray("java.lang.String", ["t.wrl"])))
          .addChild((new autoclass.Anchor()).setDescription("Derby Women's Centre").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance4 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("High Peak Community Arts").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance5 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("Charlesworth Primary School").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance6 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Hope Valley College").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance7 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("People Express").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance8 = (new autoclass.ProtoInstance()).setName("i")))
          .addChild((new autoclass.Anchor()).setDescription("QArts/Studios").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance9 = (new autoclass.ProtoInstance()).setName("i")))
          .addChild((new autoclass.Anchor()).setDescription("Stroke Unit, Derbyshire Royal Infirmary").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance10 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Park View Primary, Derby").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance11 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("First Movement").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance12 = (new autoclass.ProtoInstance()).setName("n")))
          .addChild((new autoclass.Anchor()).setDescription("St. Benedict R.C. School, Visual Impairment Unit").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance13 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Beckett Primary, Derby").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance14 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Brackensdale Junior School, Communty Unit").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance15 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Moorhead Primary, Derby").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance16 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Derby Deaf Club").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance17 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Nightingale Junior, Derby").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance18 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("St Mary's Primary, Derby").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance19 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Griffe Field Primary, Derby").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance20 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Leicester Road Day Centre, Melton Mowbray").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance21 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Ivy House Special School, Derby").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance22 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Oakham Day Centre, Rutland").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance23 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Parkwood School, Alfreton").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance24 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Ash Green, Specialist Learning Disability Resource").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance25 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Ashgate Croft School, Chesterfield").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance26 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Highfields School, Matlock").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance27 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("City Arts").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance28 = (new autoclass.ProtoInstance()).setName("i")))
          .addChild((new autoclass.Anchor()).setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance29 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("Watering Seeds").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance30 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("Red oaks").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance31 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("West Notts College").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance32 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Willow Wood Day Centre").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance33 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Fased In The Arts").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance34 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("27a Access Artspace").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance35 = (new autoclass.ProtoInstance()).setName("n")))
          .addChild((new autoclass.Anchor()).setDescription("Roman Way Day Centre, Market Harborough").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance36 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Mosaic, Leicester Disability Services").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance37 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Bamboozle Theatre Company").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance38 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("Ellesmere College, Leicester").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance39 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Ashmount School, Loughborough").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance40 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Mantle Community Arts").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance41 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("Forrest Way School").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance42 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Ibstock Community College").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance43 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Artlink East").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance44 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("United Hospitals and NHS Trust Lincolnshire").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance45 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Ancaster Day Centre").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance46 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Creations").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance47 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("Nene Day Centre, Northamtpon").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance48 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Delapre Middle School, Northampton").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance49 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("The Links, Brackley").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance50 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("New Perspectives").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance51 = (new autoclass.ProtoInstance()).setName("n")))
          .addChild((new autoclass.Anchor()).setDescription("UKan2").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance52 = (new autoclass.ProtoInstance()).setName("r")))
          .addChild((new autoclass.Anchor()).setDescription("Silverstone County Infants School").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance53 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Anchor()).setDescription("Riverside Resource Centre, Towcester").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance54 = (new autoclass.ProtoInstance()).setName("institute")))
          .addChild((new autoclass.Anchor()).setDescription("Daventry Tertiary College").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
            .addChild(ProtoInstance55 = (new autoclass.ProtoInstance()).setName("school")))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])).setTransparency(java.newFloat(0.2))))
            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]))
              .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(430), java.newFloat(0.02), java.newFloat(-335), java.newFloat(435.8), java.newFloat(0.1), java.newFloat(-335.3), java.newFloat(430), java.newFloat(0.02), java.newFloat(-335), java.newFloat(434.6), java.newFloat(0.1), java.newFloat(-338.6), java.newFloat(430), java.newFloat(0.02), java.newFloat(-335), java.newFloat(432.7), java.newFloat(0.1), java.newFloat(-336.6), java.newFloat(430), java.newFloat(0.02), java.newFloat(-335), java.newFloat(434.7), java.newFloat(0.1), java.newFloat(-336.9), java.newFloat(429.9), java.newFloat(0.02), java.newFloat(-360.3), java.newFloat(474.7), java.newFloat(0.1), java.newFloat(-318.8), java.newFloat(429.9), java.newFloat(0.02), java.newFloat(-360.3), java.newFloat(485.6), java.newFloat(0.1), java.newFloat(-309), java.newFloat(429.9), java.newFloat(0.02), java.newFloat(-360.3), java.newFloat(434.8), java.newFloat(0.1), java.newFloat(-371.5), java.newFloat(454), java.newFloat(0.02), java.newFloat(-361.3), java.newFloat(457.4), java.newFloat(0.1), java.newFloat(-359.6), java.newFloat(454), java.newFloat(0.02), java.newFloat(-361.3), java.newFloat(454.2), java.newFloat(0.1), java.newFloat(-358.6), java.newFloat(454), java.newFloat(0.02), java.newFloat(-361.3), java.newFloat(450.6), java.newFloat(0.1), java.newFloat(-358.6), java.newFloat(458.9), java.newFloat(0.02), java.newFloat(-304.3), java.newFloat(473.5), java.newFloat(0.1), java.newFloat(-287.5), java.newFloat(458.9), java.newFloat(0.02), java.newFloat(-304.3), java.newFloat(458), java.newFloat(0.1), java.newFloat(-304.5), java.newFloat(491.6), java.newFloat(0.02), java.newFloat(-335.7), java.newFloat(491.4), java.newFloat(0.1), java.newFloat(-336.8), java.newFloat(491.6), java.newFloat(0.02), java.newFloat(-335.7), java.newFloat(496.9), java.newFloat(0.1), java.newFloat(-368.9), java.newFloat(467), java.newFloat(0.02), java.newFloat(-243.9), java.newFloat(477.1), java.newFloat(0.1), java.newFloat(-260), java.newFloat(467), java.newFloat(0.02), java.newFloat(-243.9), java.newFloat(459), java.newFloat(0.1), java.newFloat(-236.4), java.newFloat(458.7), java.newFloat(0.02), java.newFloat(-262.7), java.newFloat(469.5), java.newFloat(0.1), java.newFloat(-249.8), java.newFloat(458.7), java.newFloat(0.02), java.newFloat(-262.7), java.newFloat(456.7), java.newFloat(0.1), java.newFloat(-261.8)])))))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])).setTransparency(java.newFloat(0.2))))
            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]))
              .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(400), java.newFloat(0.02), java.newFloat(-385), java.newFloat(400.6), java.newFloat(0.1), java.newFloat(-392.9), java.newFloat(400), java.newFloat(0.02), java.newFloat(-385), java.newFloat(416.7), java.newFloat(0.1), java.newFloat(-383.4), java.newFloat(430), java.newFloat(0.02), java.newFloat(-335), java.newFloat(438.3), java.newFloat(0.1), java.newFloat(-338.6), java.newFloat(430), java.newFloat(0.02), java.newFloat(-335), java.newFloat(434.8), java.newFloat(0.1), java.newFloat(-336), java.newFloat(430), java.newFloat(0.02), java.newFloat(-335), java.newFloat(437.6), java.newFloat(0.1), java.newFloat(-332.6), java.newFloat(430), java.newFloat(0.02), java.newFloat(-335), java.newFloat(436.3), java.newFloat(0.1), java.newFloat(-333.4), java.newFloat(430), java.newFloat(0.02), java.newFloat(-335), java.newFloat(435.2), java.newFloat(0.1), java.newFloat(-336.8), java.newFloat(430), java.newFloat(0.02), java.newFloat(-335), java.newFloat(432.5), java.newFloat(0.1), java.newFloat(-332.5), java.newFloat(429.9), java.newFloat(0.02), java.newFloat(-360.3), java.newFloat(436.1), java.newFloat(0.1), java.newFloat(-334.9), java.newFloat(429.9), java.newFloat(0.02), java.newFloat(-360.3), java.newFloat(440.5), java.newFloat(0.1), java.newFloat(-355.5), java.newFloat(429.9), java.newFloat(0.02), java.newFloat(-360.3), java.newFloat(436.3), java.newFloat(0.1), java.newFloat(-371.7), java.newFloat(429.9), java.newFloat(0.02), java.newFloat(-360.3), java.newFloat(431.2), java.newFloat(0.1), java.newFloat(-361.2), java.newFloat(457.1), java.newFloat(0.02), java.newFloat(-300.8), java.newFloat(456.8), java.newFloat(0.1), java.newFloat(-302.6), java.newFloat(457.1), java.newFloat(0.02), java.newFloat(-300.8), java.newFloat(453.3), java.newFloat(0.1), java.newFloat(-318.6), java.newFloat(442.4), java.newFloat(0.02), java.newFloat(-314.5), java.newFloat(444.6), java.newFloat(0.1), java.newFloat(-313.7), java.newFloat(442.4), java.newFloat(0.02), java.newFloat(-314.5), java.newFloat(440.6), java.newFloat(0.1), java.newFloat(-310.4), java.newFloat(467), java.newFloat(0.02), java.newFloat(-243.9), java.newFloat(474.7), java.newFloat(0.1), java.newFloat(-259.1), java.newFloat(457.4), java.newFloat(0.02), java.newFloat(-262.7), java.newFloat(466.9), java.newFloat(0.1), java.newFloat(-243.8)])))))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(1)])).setTransparency(java.newFloat(0.2))))
            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1]))
              .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(430), java.newFloat(0.02), java.newFloat(-335), java.newFloat(429.9), java.newFloat(0.1), java.newFloat(-360.3), java.newFloat(442.4), java.newFloat(0.02), java.newFloat(-314.5), java.newFloat(429.9), java.newFloat(0.1), java.newFloat(-319.6), java.newFloat(457.4), java.newFloat(0.02), java.newFloat(-262.7), java.newFloat(467), java.newFloat(0.1), java.newFloat(-243.9), java.newFloat(458.7), java.newFloat(0.02), java.newFloat(-262.7), java.newFloat(457.4), java.newFloat(0.1), java.newFloat(-262.7), java.newFloat(458.7), java.newFloat(0.02), java.newFloat(-262.7), java.newFloat(467), java.newFloat(0.1), java.newFloat(-243.9)])))))))      ;
ProtoInstance0
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.6 0"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.3 1"));
ProtoInstance2
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("1 0 0.2"));
ProtoInstance3
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0.6 0 0.6"));
ProtoInstance4
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("435.3 0.1 -335.6"));
ProtoInstance5
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400 0.1 -385"));
ProtoInstance6
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400.6 0.1 -392.9"));
ProtoInstance7
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("416.7 0.1 -383.4"));
ProtoInstance8
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.9 0.1 -319.6"));
ProtoInstance9
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("430 0.1 -335"));
ProtoInstance10
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("435.8 0.1 -335.3"));
ProtoInstance11
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("438.3 0.1 -338.6"));
ProtoInstance12
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.9 0.1 -360.3"));
ProtoInstance13
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.6 0.1 -338.6"));
ProtoInstance14
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.8 0.1 -336"));
ProtoInstance15
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("432.7 0.1 -336.6"));
ProtoInstance16
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("437.6 0.1 -332.6"));
ProtoInstance17
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.7 0.1 -336.9"));
ProtoInstance18
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("436.3 0.1 -333.4"));
ProtoInstance19
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("435.2 0.1 -336.8"));
ProtoInstance20
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("432.5 0.1 -332.5"));
ProtoInstance21
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("474.7 0.1 -318.8"));
ProtoInstance22
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("436.1 0.1 -334.9"));
ProtoInstance23
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("485.6 0.1 -309"));
ProtoInstance24
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440.5 0.1 -355.5"));
ProtoInstance25
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.8 0.1 -371.5"));
ProtoInstance26
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("436.3 0.1 -371.7"));
ProtoInstance27
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("431.2 0.1 -361.2"));
ProtoInstance28
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("455.9 0.1 -341.3"));
ProtoInstance29
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.1 0.1 -341.5"));
ProtoInstance30
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("454 0.1 -361.3"));
ProtoInstance31
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.4 0.1 -359.6"));
ProtoInstance32
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("454.2 0.1 -358.6"));
ProtoInstance33
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("450.6 0.1 -358.6"));
ProtoInstance34
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440 0.1 -350"));
ProtoInstance35
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.9 0.1 -304.3"));
ProtoInstance36
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("473.5 0.1 -287.5"));
ProtoInstance37
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458 0.1 -304.5"));
ProtoInstance38
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.1 0.1 -300.8"));
ProtoInstance39
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.8 0.1 -302.6"));
ProtoInstance40
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("453.3 0.1 -318.6"));
ProtoInstance41
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("442.4 0.1 -314.5"));
ProtoInstance42
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("444.6 0.1 -313.7"));
ProtoInstance43
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440.6 0.1 -310.4"));
ProtoInstance44
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("491.6 0.1 -335.7"));
ProtoInstance45
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("491.4 0.1 -336.8"));
ProtoInstance46
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("496.9 0.1 -368.9"));
ProtoInstance47
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("467 0.1 -243.9"));
ProtoInstance48
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("477.1 0.1 -260"));
ProtoInstance49
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("474.7 0.1 -259.1"));
ProtoInstance50
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("459 0.1 -236.4"));
ProtoInstance51
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.4 0.1 -262.7"));
ProtoInstance52
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.7 0.1 -262.7"));
ProtoInstance53
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("466.9 0.1 -243.8"));
ProtoInstance54
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("469.5 0.1 -249.8"));
ProtoInstance55
              .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.7 0.1 -261.8"));
    X3D0.toFileX3D("../data/t1.new.node.x3d");
    process.exit(0);
