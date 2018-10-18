var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("SFVec3f.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("3 prismatic spheres"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/SFVec3f.x3d")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.NavigationInfo())
        .addChildSync(new autoclass.Transform().setDEFSync("transform")
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColorSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))))
            .setGeometrySync(new autoclass.Sphere())))
        .addChildSync(new autoclass.Script().setDEFSync("Bounce")
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_translation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setValueSync("0 0 0"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("translation_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValueSync("0 0 0"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("translation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("velocity").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("set_fraction").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
          .setSourceCodeSync("ecmascript:\n"+
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
        .addChildSync(new autoclass.TimeSensor().setDEFSync("TourTime").setCycleIntervalSync(0.15).setLoopSync(true))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("TourTime").setFromFieldSync("cycleTime").setToNodeSync("Bounce").setToFieldSync("set_fraction"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("Bounce").setFromFieldSync("translation_changed").setToNodeSync("transform").setToFieldSync("set_translation")))      ;
    X3D0.toFileX3D("../data/SFVec3f.new.x3d");
