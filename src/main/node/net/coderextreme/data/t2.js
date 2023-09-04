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
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addComponent((new autoclass.component()).setName("Networking").setLevel(2)))
      .setScene((new autoclass.Scene())
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
        .addChild((new autoclass.ProtoDeclare()).setName("r")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE","FLY","WALK"])).setAvatarSize(java.newArray("float", [java.newFloat(200), java.newFloat(200), java.newFloat(120)])).setSpeed(java.newFloat(3)))
        .addChild((new autoclass.WorldInfo()).setTitle("Arts Mapper"))
        .addChild((new autoclass.Viewpoint()).setDescription("looking North").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(60), java.newFloat(110)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.699999988079071)])).setFieldOfView(java.newFloat(0.7853981)))
        .addChild((new autoclass.Viewpoint()).setDescription("looking East").setPosition(java.newArray("float", [java.newFloat(-140), java.newFloat(30), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(0.400000005960464), java.newFloat(0), java.newFloat(-1.39999997615814)])).setFieldOfView(java.newFloat(0.7853981)))
        .addChild((new autoclass.Viewpoint()).setDescription("Overhead").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(150), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57000005245209)])).setFieldOfView(java.newFloat(0.7853981)))
        .addChild((new autoclass.Anchor()).setDescription("High Peak Community Arts").setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]))
          .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("r"))))      ;
ProtoInstance0
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.3 1"));
ProtoInstance1
            .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400 0.1 -385"));
    X3D0.toFileX3D("../data/t2.new.node.x3d");
    process.exit(0);
