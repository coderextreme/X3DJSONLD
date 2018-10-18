var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.NavigationInfo())
        .addChildSync(new autoclass.DirectionalLight().setDirectionSync(java.newArray("float", [java.newFloat(0), java.newFloat(-0.8), java.newFloat(-0.2)])).setIntensitySync(java.newFloat(0.5)))
        .addChildSync(new autoclass.Background().setSkyColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("One mathematical orbital").setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(50)])))
        .addChildSync(new autoclass.Transform().setDEFSync("OrbitTransform").setTranslationSync(java.newArray("float", [java.newFloat(8), java.newFloat(0), java.newFloat(0)]))
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setSpecularColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)]))))
            .setGeometrySync(new autoclass.IndexedFaceSet().setConvexSync(false).setDEFSync("Orbit")
              .setCoordSync(new autoclass.Coordinate().setDEFSync("OrbitCoordinates")))))
        .addChildSync(new autoclass.Script().setDEFSync("OrbitScript")
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("set_fraction").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("coordinates").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFINT32).setNameSync("coordIndexes").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
          .addCommentsSync(new autoclass.CommentsBlock("<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>"))
          .setSourceCodeSync("ecmascript:\n"+
"\n"+
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
        .addChildSync(new autoclass.TimeSensor().setDEFSync("Clock").setCycleIntervalSync(16).setLoopSync(true))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("OrbitScript").setFromFieldSync("coordIndexes").setToNodeSync("Orbit").setToFieldSync("coordIndex"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("OrbitScript").setFromFieldSync("coordinates").setToNodeSync("OrbitCoordinates").setToFieldSync("point"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("Clock").setFromFieldSync("fraction_changed").setToNodeSync("OrbitScript").setToFieldSync("set_fraction")))      ;
    X3D0.toFileX3D("../data/flower3.new.x3d");
