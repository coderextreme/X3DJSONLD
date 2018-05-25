load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(1))
        .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new componentObject().setName("Shaders").setLevel(1))
        .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("bubbles.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/bubbles.x3d"))
        .addMeta(new metaObject().setName("description").setContent("not sure what this is")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))))
        .addChild(new ViewpointObject().setDEF("Tour").setDescription("Tour Views"))
        .addChild(new ViewpointObject().setPosition(Java.to([0,0,4], Java.type("float[]"))).setDescription("sphere in road"))
        .addChild(new BackgroundObject().setBackUrl(Java.to(["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png"], Java.type("java.lang.String[]"))))
        .addChild(new TransformObject().setDEF("Rose01")
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject())
            .setAppearance(new AppearanceObject().setDEF("_01_-_Default")
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,0.7,0.7], Java.type("float[]"))).setSpecularColor(Java.to([0.5,0.5,0.5], Java.type("float[]"))))
              .setTexture(new ComposedCubeMapTextureObject()
                .setBack(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png"], Java.type("java.lang.String[]"))))
                .setBottom(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png"], Java.type("java.lang.String[]"))))
                .setFront(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png"], Java.type("java.lang.String[]"))))
                .setLeft(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png"], Java.type("java.lang.String[]"))))
                .setRight(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png"], Java.type("java.lang.String[]"))))
                .setTop(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShaderObject().setDEF("x_ite").setLanguage("GLSL")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(Java.to(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(Java.to(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShaderObject().setDEF("x3dom").setLanguage("GLSL")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(Java.to(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(Java.to(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"], Java.type("java.lang.String[]"))))))))
        .addChild(new TimeSensorObject().setDEF("TourTime").setCycleInterval(5).setLoop(true))
        .addChild(new PositionInterpolatorObject().setDEF("TourPosition").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,10,0,0,-10], Java.type("float[]"))))
        .addChild(new OrientationInterpolatorObject().setDEF("TourOrientation").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,1,0,0,0,1,0,3.1416], Java.type("float[]"))))
        .addChild(new ScriptObject().setDEF("RandomTourTime")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("lastKey").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFROTATION).setName("orientations").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("positions").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("position_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFROTATION).setName("set_orientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFROTATION).setName("orientation_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"               function set_cycle(value) {\n"+
"	       	   try {\n"+
"                        var ov = lastKey;\n"+
"                        do {\n"+
"                            lastKey = Math.round(Math.random()*(positions.length-1));\n"+
"                        } while (lastKey === ov);\n"+
"                        var vc = lastKey;\n"+
"\n"+
"                        position_changed = new MFVec3f();\n"+
"                        position_changed[0] = new SFVec3f(positions[ov].x,positions[ov].y,positions[ov].z);\n"+
"                        position_changed[1] = new SFVec3f(positions[vc].x,positions[vc].y,positions[vc].z);\n"+
"\n"+
"                        orientation_changed = new MFRotation();\n"+
"                        orientation_changed[0] = new SFRotation(orientations[ov].x, orientations[ov].y, orientations[ov].z, orientations[ov].w);\n"+
"                        orientation_changed[1] = new SFRotation(orientations[vc].x, orientations[vc].y, orientations[vc].z, orientations[vc].w);\n"+
"		   } catch (e) {\n"+
"				alert(e);\n"+
"		   }\n"+
"               }"))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("cycleTime_changed").setToNode("RandomTourTime").setToField("set_cycle"))
        .addChild(new ROUTEObject().setFromNode("RandomTourTime").setFromField("orientation_changed").setToNode("TourOrientation").setToField("set_keyValue"))
        .addChild(new ROUTEObject().setFromNode("RandomTourTime").setFromField("position_changed").setToNode("TourPosition").setToField("set_keyValue"))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourOrientation").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TourOrientation").setFromField("value_changed").setToNode("Tour").setToField("set_orientation"))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TourPosition").setFromField("value_changed").setToNode("Tour").setToField("set_position")))      ;
    X3D0.toFileX3D("../data/bubbles.new.x3d");
