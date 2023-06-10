import java from 'java';
import util from 'util';
import promisify from 'util';
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
import autoclass from '../../../X3Dautoclass.mjs';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
      .setHead((new autoclass.head())
        .addComponent((new autoclass.component()).setName("Networking").setLevel(2))
        .addMeta((new autoclass.meta()).setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta((new autoclass.meta()).setName("source").setContent("t1.wrl")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE","FLY","WALK"])).setSpeed(java.newFloat(3)).setAvatarSize(java.newArray("float", [java.newFloat(200), java.newFloat(200), java.newFloat(120)])))
        .addChild((new autoclass.WorldInfo()).setTitle("Arts Mapper"))
        .addChild((new autoclass.Viewpoint()).setDescription("looking North").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(60), java.newFloat(110)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.699999988079071)])).setFieldOfView(java.newFloat(0.785398125648499)))
        .addChild((new autoclass.Viewpoint()).setDescription("looking East").setPosition(java.newArray("float", [java.newFloat(-140), java.newFloat(30), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(0.400000005960464), java.newFloat(0), java.newFloat(-1.39999997615814)])).setFieldOfView(java.newFloat(0.785398125648499)))
        .addChild((new autoclass.Viewpoint()).setDescription("Overhead").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(150), java.newFloat(0)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57000005245209)])).setFieldOfView(java.newFloat(0.785398125648499)))
        .addChild((new autoclass.ProtoDeclare()).setName("org")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("posi").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("col").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
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
        .addChild((new autoclass.ProtoDeclare()).setName("r")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("pos").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("org")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
        .addChild((new autoclass.Anchor()).setUrl(java.newArray("java.lang.String", ["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])).setDescription("High Peak Community Arts")
          .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("r"))))      ;
ProtoInstance0
              .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.300000011920929 1"));
ProtoInstance0
              .addFieldValue((new autoclass.fieldValue()).setName("posi"));
ProtoInstance1
            .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400 0.100000001490116 -385"));
    X3D0.toFileX3D("../data/t2.new.x3d");
    process.exit(0);
