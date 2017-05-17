load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("geo.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("description").setContent("Tour around a prismatic sphere"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/geo.x3d"))
        .addMeta(new metaObject().setName("translated").setContent("13 March 2016"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))))
        .addChild(new ViewpointObject().setPosition(Java.to([0,0,4], Java.type("float[]"))).setOrientation(Java.to([1,0,0,0], Java.type("float[]"))).setDescription("Bubbles in action"))
        .addChild(new BackgroundObject().setBackUrl(Java.to(["images/BK.png","http://coderextreme.net/X3DJSONLD/images/BK.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["images/BT.png","http://coderextreme.net/X3DJSONLD/images/BT.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["images/FR.png","http://coderextreme.net/X3DJSONLD/images/FR.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["images/LF.png","http://coderextreme.net/X3DJSONLD/images/LF.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["images/RT.png","http://coderextreme.net/X3DJSONLD/images/RT.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["images/TP.png","http://coderextreme.net/X3DJSONLD/images/TP.png"], Java.type("java.lang.String[]"))))
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
"function set_translation(value) {\n"+
"   translation = value;\n"+
"}\n"+
"\n"+
"function set_scale(value) {\n"+
"   scale = value;\n"+
"}\n"+
"\n"+
"function translation_changed() {\n"+
"	return translation;\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    if (typeof translation === 'undefined') {\n"+
"		translation = [0, 0, 0];\n"+
"    }\n"+
"    if (typeof velocity === 'undefined') {\n"+
"		velocity = [0, 0, 0];\n"+
"    }\n"+
"    if (typeof scalevel === 'undefined') {\n"+
"		scalevel = [0, 0, 0];\n"+
"    }\n"+
"    if (typeof scale === 'undefined') {\n"+
"		scale = [1, 1, 1];\n"+
"    }\n"+
"    translation = new SFVec3f(	translation[0] + velocity[0], translation[1] + velocity[1], translation[2] + velocity[2]);\n"+
"    scale = new SFVec3f(scale[0] + scalvel[0], scale[1] + scalvel[1], scale[2] + scalvel[2]);\n"+
"    for (var j = 0; j < 3; j++) {\n"+
"	    // if you get to far away or too big, explode\n"+
"	    if ( Math.abs(translation[j]) > 256) {\n"+
"		translation[j] = 0;\n"+
"		initialize();\n"+
"	    }\n"+
"	    if (Math.abs(scale[j]) > 20) {\n"+
"		scale[j] = scale[j]/2;\n"+
"		translation[j] = 0;\n"+
"		initialize();\n"+
"	    }\n"+
"    }\n"+
"}\n"+
""))
              .addChild(new TimeSensorObject().setDEF("bubbleClock").setCycleInterval(10).setLoop(true))
              .addChild(new ROUTEObject().setFromNode("transform").setFromField("translation_changed").setToNode("bounce").setToField("set_translation"))
              .addChild(new ROUTEObject().setFromNode("transform").setFromField("scale_changed").setToNode("bounce").setToField("set_scale"))
              .addChild(new ROUTEObject().setFromNode("bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
              .addChild(new ROUTEObject().setFromNode("bounce").setFromField("scale_changed").setToNode("transform").setToField("set_scale"))
              .addChild(new ROUTEObject().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction")))))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("Bubble").setDEF("bubbleA"))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("Bubble").setDEF("bubbleB"))
        .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("Bubble").setDEF("bubbleC"))
        .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("Bubble").setDEF("bubbleD")))      ;
    X3D0.toFileX3D("../out/orig/cobweb2.new.x3d");
