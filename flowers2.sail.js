load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("flowers2.x3d").setContent("title"))
        .addMeta(new metaObject().setName("author").setContent("John Carlson"))
        .addMeta(new metaObject().setName("transcriber").setContent("John Carlson"))
        .addMeta(new metaObject().setName("created").setContent("23 January 2005"))
        .addMeta(new metaObject().setName("modified").setContent("05 May 2017"))
        .addMeta(new metaObject().setName("description").setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"))
        .addMeta(new metaObject().setName("url").setContent("http://coderextreme.net/x3d/flowers2.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("manually written"))
        .addMeta(new metaObject().setName("translated").setContent("09 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"))
        .addMeta(new metaObject().setName("translated").setContent("9 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addChild(new ViewpointObject().setDescription("Two mathematical orbitals").setPosition(Java.to([0,0,50], Java.type("float[]"))))
        .addChild(new GroupObject()
          .addChild(new DirectionalLightObject().setDirection(Java.to([1,1,1], Java.type("float[]"))))
          .addChild(new TransformObject().setDEF("OrbitTransform").setTranslation(Java.to([8,0,0], Java.type("float[]")))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,0.5,1], Java.type("float[]"))).setSpecularColor(Java.to([0,0.5,1], Java.type("float[]")))))
              .setGeometry(new IndexedFaceSetObject().setDEF("Orbit").setCreaseAngle(1.57)
                .setCoord(new CoordinateObject().setDEF("OrbitCoordinates")))))
          .addChild(new TransformObject().setDEF("OrbitTransform2").setTranslation(Java.to([-8,0,0], Java.type("float[]")))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0.5,0], Java.type("float[]"))).setSpecularColor(Java.to([1,0.5,0], Java.type("float[]"))).setTransparency(0.75)))
              .setGeometry(new IndexedFaceSetObject().setDEF("Orbit2").setCreaseAngle(1.57)
                .setCoord(new CoordinateObject().setDEF("OrbitCoordinates2")))))
          .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(16).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("OrbitPath").setKey(Java.to([0,0.5,1], Java.type("float[]"))).setKeyValue(Java.to([1,0,0,0,1,0,0,3.14,1,0,0,6.28], Java.type("float[]"))))
          .addChild(new ScriptObject().setDEF("OrbitScript")
            .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
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
"     var localci = new MFInt32();\n"+
"     generateCoordinates(resolution);\n"+
"     ci = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     localci[ci] = i*resolution+j;\n"+
"	     localci[ci+1] = i*resolution+j+1;\n"+
"	     localci[ci+2] = (i+1)*resolution+j+1;\n"+
"	     localci[ci+3] = (i+1)*resolution+j;\n"+
"	     localci[ci+4] = -1;\n"+
"	     ci += 5;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = localci;\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     theta = 0.0;\n"+
"     phi = 0.0;\n"+
"     delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = new MFVec3f();\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc[i*resolution+j] = [];\n"+
"		localc[i*resolution+j][0] = rho * Math.cos(phi) * Math.cos(theta);\n"+
"		localc[i*resolution+j][1] = rho * Math.cos(phi) * Math.sin(theta);\n"+
"		localc[i*resolution+j][2] = rho * Math.sin(phi);\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = localc;\n"+
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
"	generateCoordinates(resolution);\n"+
"}\n"+
""))
          .addChild(new ScriptObject().setDEF("OrbitScript2")
            .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
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
"     var localci = new MFInt32();\n"+
"     generateCoordinates(resolution);\n"+
"     ci = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     localci[ci] = i*resolution+j;\n"+
"	     localci[ci+1] = i*resolution+j+1;\n"+
"	     localci[ci+2] = (i+1)*resolution+j+1;\n"+
"	     localci[ci+3] = (i+1)*resolution+j;\n"+
"	     localci[ci+4] = -1;\n"+
"	     ci += 5;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = localci;\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     theta = 0.0;\n"+
"     phi = 0.0;\n"+
"     delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = new MFVec3f();\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc[i*resolution+j] = new SFVec3f();\n"+
"		localc[i*resolution+j][0] = rho * Math.cos(phi) * Math.cos(theta);\n"+
"		localc[i*resolution+j][1] = rho * Math.cos(phi) * Math.sin(theta);\n"+
"		localc[i*resolution+j][2] = rho * Math.sin(phi);\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = localc;\n"+
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
"	generateCoordinates(resolution);\n"+
"}\n"+
"")))
        .addChild(new ROUTEObject().setFromField("coordIndexes").setFromNode("OrbitScript").setToField("set_coordIndex").setToNode("Orbit"))
        .addChild(new ROUTEObject().setFromField("coordinates").setFromNode("OrbitScript").setToField("set_point").setToNode("OrbitCoordinates"))
        .addChild(new ROUTEObject().setFromField("coordIndexes").setFromNode("OrbitScript2").setToField("set_coordIndex").setToNode("Orbit2"))
        .addChild(new ROUTEObject().setFromField("coordinates").setFromNode("OrbitScript2").setToField("set_point").setToNode("OrbitCoordinates2"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("OrbitScript"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("OrbitScript2"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("OrbitPath"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("OrbitPath").setToField("set_rotation").setToNode("OrbitTransform"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("OrbitPath").setToField("set_rotation").setToNode("OrbitTransform2")))      ;
    X3D0.toFileX3D("flowers2.new.x3d");
