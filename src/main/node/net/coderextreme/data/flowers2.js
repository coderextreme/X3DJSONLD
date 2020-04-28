var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
      .setHead((new autoclass.head())
        .addComponent((new autoclass.component()).setLevel(1).setName("Scripting"))
        .addMeta((new autoclass.meta()).setName("title").setContent("flowers2.x3d"))
        .addMeta((new autoclass.meta()).setContent("John Carlson").setName("creator"))
        .addMeta((new autoclass.meta()).setContent("John Carlson").setName("transcriber"))
        .addMeta((new autoclass.meta()).setContent("23 January 2005").setName("created"))
        .addMeta((new autoclass.meta()).setContent("21 March 2018").setName("modified"))
        .addMeta((new autoclass.meta()).setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)").setName("description"))
        .addMeta((new autoclass.meta()).setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d").setName("identifier"))
        .addMeta((new autoclass.meta()).setContent("manually written").setName("generator"))
        .addMeta((new autoclass.meta()).setContent("http://www.web3d.org/x3d/content/examples/license.html").setName("license")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE","ANY"])))
        .addChild((new autoclass.Viewpoint()).setDescription("Two mathematical orbitals").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(50)])))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.DirectionalLight()).setDirection(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))
          .addChild((new autoclass.ProtoDeclare()).setName("orbit")
            .setProtoInterface((new autoclass.ProtoInterface())
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("-8 0 0"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("specularColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("transparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.75")))
            .setProtoBody((new autoclass.ProtoBody())
              .addChild((new autoclass.Group())
                .addChild((new autoclass.TimeSensor()).setDEF("Clock").setCycleInterval(16).setLoop(true))
                .addChild((new autoclass.OrientationInterpolator()).setDEF("OrbitPath").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(3.14), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(6.28)])))
                .addChild((new autoclass.Transform()).setDEF("OrbitTransform")
                  .setIS((new autoclass.IS())
                    .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material())
                        .setIS((new autoclass.IS())
                          .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("diffuseColor"))
                          .addConnect((new autoclass.connect()).setNodeField("specularColor").setProtoField("specularColor"))
                          .addConnect((new autoclass.connect()).setNodeField("transparency").setProtoField("transparency")))))
                    .addComments((new autoclass.CommentsBlock("")))
                    .addComments((new autoclass.CommentsBlock("				  <IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\">")))
                    .addComments((new autoclass.CommentsBlock("				    <Coordinate DEF=\"OrbitCoordinates\"/>")))
                    .addComments((new autoclass.CommentsBlock("				  </IndexedFaceSet>")))
                    .addComments((new autoclass.CommentsBlock("				  ")))
                    .setGeometry((new autoclass.IndexedFaceSet()).setCcw(false).setConvex(false).setCoordIndex(java.newArray("int", [0,1,2,-1])).setCreaseAngle(java.newFloat(0)).setDEF("Orbit").setSolid(true)
                      .setCoord((new autoclass.Coordinate()).setDEF("OrbitCoordinates").setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
                .addChild((new autoclass.Script()).setDEF("OrbitScript")
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setName("coordinates"))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFINT32).setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setName("coordIndexes"))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("e").setValue("5"))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("f").setValue("5"))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("g").setValue("5"))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("h").setValue("5"))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("resolution").setValue("50"))
                  .setSourceCode("ecmascript:\n"+
"\n"+
"			var e = 5;\n"+
"			var f = 5;\n"+
"			var g = 5;\n"+
"			var h = 5;\n"+
"			var resolution = 100;\n"+
"\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var localci = [];\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     localci.push(i*resolution+j);\n"+
"				     localci.push(i*resolution+j+1);\n"+
"				     localci.push((i+1)*resolution+j+1);\n"+
"				     localci.push((i+1)*resolution+j);\n"+
"				     localci.push(-1);\n"+
"				}\n"+
"			    }\n"+
"			    coordIndexes = new MFInt32(localci);\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var localc = [];\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"					localc.push(new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					));\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			     \n"+
"			     coordinates = new MFVec3f(localc);\n"+
"			}\n"+
"\n"+
"			function set_fraction(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 1:\n"+
"					f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 2:\n"+
"					g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				if (e < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (f < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (g < 1) {\n"+
"					g = 4;\n"+
"				}\n"+
"				if (h < 1) {\n"+
"					h = 4;\n"+
"				}\n"+
"				generateCoordinates();\n"+
"			}"))
                .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("coordIndex"))
                .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
                .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction"))
                .addChild((new autoclass.ROUTE()).setFromNode("OrbitPath").setFromField("value_changed").setToNode("OrbitTransform").setToField("rotation"))
                .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitPath").setToField("set_fraction")))))
          .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("orbit"))
          .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("orbit"))))      ;
ProtoInstance0
            .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-8 0 0"));
ProtoInstance0
            .addFieldValue((new autoclass.fieldValue()).setName("diffuseColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue((new autoclass.fieldValue()).setName("specularColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue((new autoclass.fieldValue()).setName("transparency").setValue("0.75"));
ProtoInstance1
            .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("8 0 0"));
ProtoInstance1
            .addFieldValue((new autoclass.fieldValue()).setName("diffuseColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue((new autoclass.fieldValue()).setName("specularColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue((new autoclass.fieldValue()).setName("transparency").setValue("0.5"));
    X3D0.toFileX3D("../data/flowers2.new.x3d");
