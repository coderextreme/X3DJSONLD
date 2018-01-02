load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("bubble.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("description").setContent("Tour around a prismatic sphere"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/bubble.x3d")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))))
        .addChild(new ViewpointObject().setPosition(Java.to([0,0,4], Java.type("float[]"))).setOrientation(Java.to([1,0,0,0], Java.type("float[]"))).setDescription("Bubble in action"))
        .addChild(new ProtoDeclareObject().setName("Bubble")
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("transform")
              .addChild(new ShapeObject()
                .setGeometry(new SphereObject().setRadius(0.25))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]"))).setTransparency(0.2))))
              .addChild(new ScriptObject().setDEF("bounce")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scalvel").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
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
"}\n"+
""))
              .addChild(new TimeSensorObject().setDEF("bubbleClock").setCycleInterval(10).setLoop(true))
              .addChild(new ROUTEObject().setFromNode("bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
              .addChild(new ROUTEObject().setFromNode("bounce").setFromField("scale_changed").setToNode("transform").setToField("set_scale"))
              .addChild(new ROUTEObject().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction")))))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("Bubble").setDEF("bubbleA")))      ;
    X3D0.toFileX3D("../data/bubble.new.x3d");
