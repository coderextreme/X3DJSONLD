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
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("Scripting").setLevel(1))
        .addMeta(new autoclass.meta().setName("title").setContent("MyBounce.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("description").setContent("3 prismatic spheres"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.NavigationInfo())
        .addChild(new autoclass.Transform().setDEF("transform")
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))))
            .setGeometry(new autoclass.Sphere())))
        .addChild(new autoclass.Script().setDEF("Bounce2")
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("0 0 0"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("translation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValue("0 0 0"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("velocity").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("set_fraction").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
          .setSourceCode("ecmascript:\n"+
"			function newBubble() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"				if (Math.abs(translation.x) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.y) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.z) > 10) {\n"+
"					newBubble();\n"+
"				} else {\n"+
"					velocity = new SFVec3f(\n"+
"						velocity.x + Math.random() * 0.2 - 0.1,\n"+
"						velocity.y + Math.random() * 0.2 - 0.1,\n"+
"						velocity.z + Math.random() * 0.2 - 0.1\n"+
"					);\n"+
"				}\n"+
"			}\n"+
"\n"+
"			function initialize() {\n"+
"			     newBubble();\n"+
"			}"))
        .addChild(new autoclass.TimeSensor().setDEF("TourTime").setCycleInterval(0.15).setLoop(true))
        .addChild(new autoclass.ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce2").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("Bounce2").setFromField("translation_changed").setToNode("transform").setToField("set_translation")))      ;
    X3D0.toFileX3D("../data/MyBounce.new.node.x3d");
    X3D0.toFileJSON("../data/MyBounce.new.node.json");
    process.exit(0);
