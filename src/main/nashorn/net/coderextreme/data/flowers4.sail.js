load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Shaders").setLevel(1))
        .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("flowers4.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowers4.x3d"))
        .addMeta(new metaObject().setName("description").setContent("an animated flower")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addChild(new BackgroundObject().setBackUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
        .addChild(new TransformObject().setDEF("transform")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,0.7,0.7], Java.type("float[]"))).setSpecularColor(Java.to([0.5,0.5,0.5], Java.type("float[]"))))
              .setTexture(new ComposedCubeMapTextureObject()
                .setBack(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
                .setBottom(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
                .setFront(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
                .setLeft(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
                .setRight(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
                .setTop(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShaderObject().setDEF("shader").setLanguage("GLSL")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(Java.to(["../shaders/x3dom.vs".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(Java.to(["../shaders/pc_bubbles.fs".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))))
            .addComments(new CommentsBlock("<Sphere>"))
            .setGeometry(new IndexedFaceSetObject().setConvex(false).setDEF("Orbit")
              .setCoord(new CoordinateObject().setDEF("OrbitCoordinates")))))
        .addChild(new ScriptObject().setDEF("OrbitScript")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFINT32).setName("coordIndexes").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"\n"+
"function initialize() {\n"+
"     resolution = 100;\n"+
"     updateCoordinates(resolution);\n"+
"     var cis = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(cis);\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     theta = 0.0;\n"+
"     phi = 0.0;\n"+
"     delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(crds);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	resolution = 100;\n"+
"	updateCoordinates(resolution);\n"+
"}\n"+
""))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(16).setLoop(true))
        .addChild(new ROUTEObject().setFromField("coordIndexes").setFromNode("OrbitScript").setToField("set_coordIndex").setToNode("Orbit"))
        .addChild(new ROUTEObject().setFromField("coordinates").setFromNode("OrbitScript").setToField("set_point").setToNode("OrbitCoordinates"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("OrbitScript")))      ;
    X3D0.toFileX3D("../data/flowers4.new.x3d");
