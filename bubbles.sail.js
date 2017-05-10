load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(1))
        .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(3))
        .addMeta(new metaObject().setName("title").setContent("bubbles.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/bubbles.x3d"))
        .addMeta(new metaObject().setName("description").setContent("not sure what this is"))
        .addMeta(new metaObject().setName("translated").setContent("09 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"))
        .addMeta(new metaObject().setName("translated").setContent("9 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))))
        .addChild(new ViewpointObject().setDEF("Tour").setDescription("Tour Views"))
        .addChild(new ViewpointObject().setPosition(Java.to([0,0,4], Java.type("float[]"))).setDescription("sphere in road"))
        .addChild(new BackgroundObject().setBackUrl(Java.to(["cubemap/all_probes/uffizi_cross/uffizi_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_back.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["cubemap/all_probes/uffizi_cross/uffizi_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_bottom.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["cubemap/all_probes/uffizi_cross/uffizi_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_front.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["cubemap/all_probes/uffizi_cross/uffizi_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["cubemap/all_probes/uffizi_cross/uffizi_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["cubemap/all_probes/uffizi_cross/uffizi_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_top.png"], Java.type("java.lang.String[]"))))
        .addChild(new TransformObject().setDEF("Rose01")
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject())
            .setAppearance(new AppearanceObject().setDEF("_01_-_Default")
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,0.7,0.7], Java.type("float[]"))).setSpecularColor(Java.to([0.5,0.5,0.5], Java.type("float[]"))))
              .setTexture(new ComposedCubeMapTextureObject()
                .setBack(new ImageTextureObject().setUrl(Java.to(["cubemap/all_probes/uffizi_cross/uffizi_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_back.png"], Java.type("java.lang.String[]"))))
                .setBottom(new ImageTextureObject().setUrl(Java.to(["cubemap/all_probes/uffizi_cross/uffizi_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_bottom.png"], Java.type("java.lang.String[]"))))
                .setFront(new ImageTextureObject().setUrl(Java.to(["cubemap/all_probes/uffizi_cross/uffizi_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_front.png"], Java.type("java.lang.String[]"))))
                .setLeft(new ImageTextureObject().setUrl(Java.to(["cubemap/all_probes/uffizi_cross/uffizi_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_left.png"], Java.type("java.lang.String[]"))))
                .setRight(new ImageTextureObject().setUrl(Java.to(["cubemap/all_probes/uffizi_cross/uffizi_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_right.png"], Java.type("java.lang.String[]"))))
                .setTop(new ImageTextureObject().setUrl(Java.to(["cubemap/all_probes/uffizi_cross/uffizi_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_top.png"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShaderObject().setDEF("cobweb").setLanguage("GLSL")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(Java.to(["cobweb.vs","http://coderextreme.net/X3DJSONLD/cobweb.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(Java.to(["pc_bubbles.fs","http://coderextreme.net/X3DJSONLD/pc_bubbles.fs"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShaderObject().setDEF("x3dom").setLanguage("GLSL")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(Java.to(["x3dom.vs","http://coderextreme.net/X3DJSONLD/x3dom.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(Java.to(["pc_bubbles.fs","http://coderextreme.net/X3DJSONLD/pc_bubbles.fs"], Java.type("java.lang.String[]"))))))))
        .addChild(new TimeSensorObject().setDEF("TourTime").setCycleInterval(5).setLoop(true))
        .addChild(new PositionInterpolatorObject().setDEF("TourPosition").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,10,0,0,-10], Java.type("float[]"))))
        .addChild(new OrientationInterpolatorObject().setDEF("TourOrientation").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,1,0,0,0,1,0,3.1416], Java.type("float[]"))))
        .addChild(new ScriptObject().setDEF("RandomTourTime")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("lastKey").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFROTATION).setName("orientations").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("positions").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("position").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFROTATION).setName("orientation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"               function set_cycle(value) {\n"+
"                        //var positions = [[0, 0, 10], [-10, 0, 0], [0, 0, -10], [10, 0, 0], [0, 0, 10], [0, 10, 0], [0, 0, 10], [0, -10, 0], [0, 0, 10]];\n"+
"                        //var orientations = [[0, 1, 0, 0], [0, 1, 0, -1.57], [0, 1, 0, 3.14], [0, 1, 0, 1.57], [0, 1, 0, 0] [1, 0, 0, -1.57], [0, 1, 0, 0], [1, 0, 0, 1.57], [0, 1, 0, 0]];\n"+
"                        //Browser.println(lastKey);\n"+
"                        var ov = lastKey;\n"+
"                        // Browser.println(ov);      \n"+
"                        //Browser.println(positions.length);                  \n"+
"                        do {\n"+
"                            lastKey = Math.round(Math.random()*(positions.length-1));\n"+
"                        } while (lastKey === ov);\n"+
"                        // Browser.println(lastKey);\n"+
"                        var vc = lastKey;\n"+
"                        \n"+
"                        // Browser.println(orientations[ov]);\n"+
"                        // Browser.println(orientations[vc]);\n"+
"                        orientation = new MFRotation();\n"+
"                        orientation[0] = new SFRotation(orientations[ov][0], orientations[ov][1], orientations[ov][2], orientations[ov][3]);\n"+
"                        orientation[1] = new SFRotation(orientations[vc][0], orientations[vc][1], orientations[vc][2], orientations[vc][3]);\n"+
"                        // Browser.println(positions[ov]);\n"+
"                        // Browser.println(positions[vc]);\n"+
"                        position = new MFVec3f();\n"+
"                        position[0] = new SFVec3f(positions[ov][0],positions[ov][1],positions[ov][2]);\n"+
"                        position[1] = new SFVec3f(positions[vc][0],positions[vc][1],positions[vc][2]);\n"+
"                    // }\n"+
"               }\n"+
""))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle"))
        .addChild(new ROUTEObject().setFromNode("RandomTourTime").setFromField("orientation").setToNode("TourOrientation").setToField("keyValue"))
        .addChild(new ROUTEObject().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue"))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourOrientation").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TourOrientation").setFromField("value_changed").setToNode("Tour").setToField("set_orientation"))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TourPosition").setFromField("value_changed").setToNode("Tour").setToField("set_position")))      ;
    X3D0.toFileX3D("bubbles.new.x3d");
