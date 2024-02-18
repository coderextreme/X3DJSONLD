var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("flower.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/flower.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("a flower")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()))
        .addChild((new autoclass.DirectionalLight()).setDirection(java.newArray("float", [java.newFloat(0), java.newFloat(-0.8), java.newFloat(-0.2)])).setIntensity(java.newFloat(0.5)))
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))
        .addChild((new autoclass.Viewpoint()).setDescription("One mathematical orbital").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(50)])))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(1)])).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(3.1415926)])).setScale(java.newArray("float", [java.newFloat(1.5), java.newFloat(1.5), java.newFloat(1.5)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(0.1)).setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.3), java.newFloat(0.3)])).setSpecularColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.8)])).setShininess(java.newFloat(0.145))))
            .setGeometry((new autoclass.IndexedFaceSet()).setCcw(false).setConvex(false).setCoordIndex(java.newArray("int", [0,1,2,-1])).setDEF("Orbit")
              .setCoord((new autoclass.Coordinate()).setDEF("OrbitCoordinates").setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
        .addChild((new autoclass.Script()).setDEF("OrbitScript")
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setName("coordinates").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFINT32).setName("coordIndexes").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
          .addComments((new autoclass.CommentsBlock("<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"resolution\" type=\"SFInt32\" value=\"150\"/>")))
          .setSourceCode("ecmascript:\n"+
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
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
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
        .addChild((new autoclass.TimeSensor()).setDEF("Clock").setCycleInterval(16).setLoop(true))
        .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("set_coordIndex"))
        .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
        .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction")))      ;
    X3D0.toFileX3D("../data/flower.new.node.x3d");
    process.exit(0);
