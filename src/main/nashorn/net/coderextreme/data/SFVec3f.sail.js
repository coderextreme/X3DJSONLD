load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("SFVec3f.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("description").setContent("3 prismatic spheres"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/SFVec3f.x3d")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addChild(new TransformObject().setDEF("transform")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,0.7,0.7], Java.type("float[]"))).setSpecularColor(Java.to([0.5,0.5,0.5], Java.type("float[]")))))
            .setGeometry(new SphereObject())))
        .addChild(new ScriptObject().setDEF("Bounce")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_translation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0 0 0"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("0 0 0"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
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
"			}\n"+
""))
        .addChild(new TimeSensorObject().setDEF("TourTime").setCycleInterval(0.15).setLoop(true))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")))      ;
    X3D0.toFileX3D("../data/SFVec3f.new.x3d");
