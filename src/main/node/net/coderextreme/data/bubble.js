import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
var ProtoInstance0 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("bubble.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("description").setContent("Tour around a prismatic sphere"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["EXAMINE"])))
        .addChild(new autoclass.Viewpoint().setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(4)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setDescription("Bubble in action"))
        .addChild(new autoclass.ProtoDeclare().setName("Bubble")
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Transform().setDEF("transform")
              .addChild(new autoclass.Shape()
                .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.25)))
                .setAppearance(new autoclass.Appearance()
                  .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])).setTransparency(java.newFloat(0.2)))))
              .addChild(new autoclass.Script().setDEF("bounce")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("velocity").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("scalvel").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .setSourceCode("ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"	translation = new SFVec3f(\n"+
"		translation.x + velocity.x,\n"+
"		translation.y + velocity.y,\n"+
"		translation.z + velocity.z);\n"+
"	scale = new SFVec3f(\n"+
"		scale.x + scalvel.x,\n"+
"		scale.y + scalvel.y,\n"+
"		scale.z + scalvel.z);\n"+
"        // if you get to far away or too big, explode\n"+
"        if ( Math.abs(translation.x) > 256) {\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.y) > 256) {\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.z) > 256) {\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.x) > 20) {\n"+
"		scale.x = scale.x/2;\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.y) > 20) {\n"+
"		scale.y = scale.y/2;\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.z) > 20) {\n"+
"		scale.z = scale.z/2;\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"}"))
              .addChild(new autoclass.TimeSensor().setDEF("bubbleClock").setCycleInterval(10).setLoop(true))
              .addChild(new autoclass.ROUTE().setFromNode("bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
              .addChild(new autoclass.ROUTE().setFromNode("bounce").setFromField("scale_changed").setToNode("transform").setToField("set_scale"))
              .addChild(new autoclass.ROUTE().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction")))))
        .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("Bubble").setDEF("bubbleA")))      ;
    X3D0.toFileX3D("../data/bubble.new.node.x3d");
    X3D0.toFileJSON("../data/bubble.new.node.json");
    process.exit(0);
