load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("flower3.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a flower")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(Java.to(["EXAMINE","ANY"], Java.type("java.lang.String[]"))))
        .addChild(new DirectionalLightObject().setDirection(Java.to([0,-0.8,-0.2], Java.type("float[]"))).setIntensity(0.5))
        .addChild(new BackgroundObject().setSkyColor(Java.to([1,1,1], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDescription("One mathematical orbital").setPosition(Java.to([0,0,50], Java.type("float[]"))))
        .addChild(new TransformObject().setDEF("OrbitTransform").setTranslation(Java.to([8,0,0], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,0.5,1], Java.type("float[]"))).setSpecularColor(Java.to([0,0.5,1], Java.type("float[]")))))
            .setGeometry(new IndexedFaceSetObject().setConvex(false).setDEF("Orbit").setCreaseAngle(0)
              .setCoord(new CoordinateObject().setDEF("OrbitCoordinates")))))
        .addChild(new ScriptObject().setDEF("OrbitScript")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setName("coordinates"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFINT32).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setName("coordIndexes"))
          .addComments(new CommentsBlock(""))
          .addComments(new CommentsBlock("        <field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/>"))
          .addComments(new CommentsBlock("        <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/>"))
          .addComments(new CommentsBlock("        <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/>"))
          .addComments(new CommentsBlock("        <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/>"))
          .addComments(new CommentsBlock("        <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/>"))
          .addComments(new CommentsBlock("        <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/>"))
          .addComments(new CommentsBlock("        <field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>"))
          .addComments(new CommentsBlock("	"))
          .setSourceCode("ecmascript:\n"+
"    \n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"var resolution = 100;\n"+
"var t = 0;\n"+
"var p = 0;\n"+
"\n"+
"function initialize() {\n"+
"     generateCoordinates(resolution);\n"+
"     var localci = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     localci.push(i*resolution+j);\n"+
"	     localci.push(i*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j);\n"+
"	     localci.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(localci);\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = [];\n"+
"     for (var  i = 0; i < resolution; i++) {\n"+
"     	for (var  j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(localc);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	t += 0.5;\n"+
"	p += 0.5;\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
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
"	generateCoordinates(resolution);\n"+
"}"))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(16).setLoop(true))
        .addChild(new ROUTEObject().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("coordIndex"))
        .addChild(new ROUTEObject().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
        .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction")))      ;
    X3D0.toFileX3D("../data/flower3.new.x3d");