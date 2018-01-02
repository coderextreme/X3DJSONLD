load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addChild(new DirectionalLightObject().setDirection(Java.to([0,-0.8,-0.2], Java.type("float[]"))).setIntensity(0.5))
        .addChild(new BackgroundObject().setSkyColor(Java.to([1,1,1], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDescription("One mathematical orbital").setPosition(Java.to([0,0,50], Java.type("float[]"))))
        .addChild(new TransformObject().setTranslation(Java.to([0,-1,1], Java.type("float[]"))).setRotation(Java.to([0,1,0,3.1415926], Java.type("float[]"))).setScale(Java.to([1.5,1.5,1.5], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.1).setDiffuseColor(Java.to([0.9,0.3,0.3], Java.type("float[]"))).setSpecularColor(Java.to([0.8,0.8,0.8], Java.type("float[]"))).setShininess(0.145)))
            .setGeometry(new IndexedFaceSetObject().setCcw(false).setConvex(false).setCoordIndex(Java.to([0,1,2,-1], Java.type("int[]"))).setDEF("ifs")
              .setCoord(new CoordinateObject().setDEF("crd").setPoint(Java.to([0,0,1,0,1,0,1,0,0], Java.type("float[]")))))))
        .addChild(new ScriptObject().setDEF("FlowerScript")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFINT32).setName("coordIndexes").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"    \n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"var resolution = 150;\n"+
"var t = 0;\n"+
"var p = 0;\n"+
"\n"+
"function initialize() {\n"+
"     var localci = new Array();\n"+
"     var ci = 0;\n"+
"     var buf = [];\n"+
"     for (var i = 0; i < resolution-1; i++) {\n"+
"     	for (var j = 0; j < resolution-1; j++) {\n"+
"	     localci[ci] = i*resolution+j;\n"+
"	     localci[ci+1] = i*resolution+j+1;\n"+
"	     localci[ci+2] = (i+1)*resolution+j+1;\n"+
"	     localci[ci+3] = (i+1)*resolution+j;\n"+
"	     localci[ci+4] = -1;\n"+
"	     buf.push(localci[ci]);\n"+
"	     buf.push(localci[ci+1]);\n"+
"	     buf.push(localci[ci+3]);\n"+
"	     buf.push(localci[ci+4]);\n"+
"\n"+
"	     buf.push(localci[ci+1]);\n"+
"	     buf.push(localci[ci+2]);\n"+
"	     buf.push(localci[ci+3]);\n"+
"	     buf.push(localci[ci+4]);\n"+
"	     ci += 5;\n"+
"	}\n"+
"    }\n"+
"    updateCoordinates(resolution);\n"+
"    coordIndexes = new x3dom.fields.MFInt32(buf);\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     theta = 0.0;\n"+
"     phi = 0.0;\n"+
"     delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var buf = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		rho = e + f * Math.cos(g * theta + t) * Math.cos(h * phi + p);\n"+
"		var coord = new x3dom.fields.SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"	     	buf.push(coord);\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new x3dom.fields.MFVec3f(buf);\n"+
"}\n"+
"\n"+
"function set_fraction() {\n"+
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
"	t += 0.5;\n"+
"	p += 0.5;\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	updateCoordinates(resolution);\n"+
"}\n"+
""))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(16).setLoop(true))
        .addChild(new ROUTEObject().setFromNode("FlowerScript").setFromField("coordIndexes").setToNode("ifs").setToField("coordIndex"))
        .addChild(new ROUTEObject().setFromNode("FlowerScript").setFromField("coordinates").setToNode("crd").setToField("point"))
        .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("FlowerScript").setToField("set_fraction")))      ;
    X3D0.toFileX3D("../data/flower.new.x3d");
