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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("rubikcoord.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/rubik.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("a kind of 2x2x2 rubik cube")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE"])))
        .addChild((new autoclass.Viewpoint()).setDescription("Rubiks Cube").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(12)])))
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))
        .addChild((new autoclass.ProtoDeclare()).setName("boxproto")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("xtranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("xtranslation")))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Box()))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))
                    .setIS((new autoclass.IS())
                      .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("diffuseColor")))))))))
        .addChild((new autoclass.ProtoDeclare()).setName("two")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("ytranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("ytranslation")))
              .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("boxproto"))
              .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("boxproto")))))
        .addChild((new autoclass.ProtoDeclare()).setName("four")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("ztranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("x1diffuseColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("x2diffuseColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 1 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("ztranslation")))
              .addChild(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("two"))
              .addChild(ProtoInstance3 = (new autoclass.ProtoInstance()).setName("two")))))
        .addChild((new autoclass.ProtoDeclare()).setName("eight")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("ttranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("ttranslation")))
              .addChild(ProtoInstance4 = (new autoclass.ProtoInstance()).setName("four"))
              .addChild(ProtoInstance5 = (new autoclass.ProtoInstance()).setName("four")))))
        .addChild(ProtoInstance6 = (new autoclass.ProtoInstance()).setName("eight"))
        .addComments((new autoclass.CommentsBlock("Axes below <Group> <Group DEF='ArrowGreen'> <Shape> <Cylinder DEF='ArrowCylinder' radius='.025' top='false'/> <Appearance DEF='Green'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone DEF='ArrowCone' bottomRadius='.05' height='.1'/> <Appearance USE='Green'/> </Shape> </Transform> </Group> <Transform translation='0 1.08 0'> <Billboard> <Shape> <Appearance DEF='LABEL_APPEARANCE'> <Material diffuseColor='0 0 0'/> </Appearance> <Text string='\"Y\"'> <FontStyle DEF='LABEL_FONT' family='\"SANS\"' justify='\"MIDDLE\" \"MIDDLE\"' size='.2'/> </Text> </Shape> </Billboard> </Transform> </Group> <Transform rotation='0 0 1 -1.57079'> <Group> <Group DEF='ArrowRed'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Red'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Red'/> </Shape> </Transform> </Group> <Transform rotation='0 0 1 1.57079' translation='.072 1.1 0'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"X\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform> <Transform rotation='1 0 0 1.57079'> <Group> <Group DEF='ArrowBlue'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Blue'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Blue'/> </Shape> </Transform> </Group> <Transform rotation='1 0 0 -1.57079' translation='0 1.1 .072'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"Z\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform>"))))      ;
ProtoInstance0
                .addFieldValue((new autoclass.fieldValue()).setName("xtranslation").setValue("0 0 0"));
ProtoInstance0
                .addFieldValue((new autoclass.fieldValue()).setName("diffuseColor").setValue("1 0 0")
                  .setIS((new autoclass.IS())
                    .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("diffuseColor"))));
ProtoInstance1
                .addFieldValue((new autoclass.fieldValue()).setName("xtranslation").setValue("2 0 0"));
ProtoInstance1
                .addFieldValue((new autoclass.fieldValue()).setName("diffuseColor").setValue("1 0 0")
                  .setIS((new autoclass.IS())
                    .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("diffuseColor"))));
ProtoInstance2
                .addFieldValue((new autoclass.fieldValue()).setName("ytranslation").setValue("0 0 0"));
ProtoInstance2
                .addFieldValue((new autoclass.fieldValue()).setName("diffuseColor").setValue("1 0 0")
                  .setIS((new autoclass.IS())
                    .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("x1diffuseColor"))));
ProtoInstance3
                .addFieldValue((new autoclass.fieldValue()).setName("ytranslation").setValue("0 2 0"));
ProtoInstance3
                .addFieldValue((new autoclass.fieldValue()).setName("diffuseColor").setValue("0 1 0")
                  .setIS((new autoclass.IS())
                    .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("x2diffuseColor"))));
ProtoInstance4
                .addFieldValue((new autoclass.fieldValue()).setName("ztranslation").setValue("0 0 0"));
ProtoInstance4
                .addFieldValue((new autoclass.fieldValue()).setName("x1diffuseColor").setValue("1 0 0"));
ProtoInstance4
                .addFieldValue((new autoclass.fieldValue()).setName("x2diffuseColor").setValue("0 1 0"));
ProtoInstance5
                .addFieldValue((new autoclass.fieldValue()).setName("ztranslation").setValue("0 0 2"));
ProtoInstance5
                .addFieldValue((new autoclass.fieldValue()).setName("x1diffuseColor").setValue("0 0 1"));
ProtoInstance5
                .addFieldValue((new autoclass.fieldValue()).setName("x2diffuseColor").setValue("1 1 0"));
ProtoInstance6
          .addFieldValue((new autoclass.fieldValue()).setName("ttranslation").setValue("0 0 0"));
    X3D0.toFileX3D("../data/rubikcoord.new.x3d");
    process.exit(0);
