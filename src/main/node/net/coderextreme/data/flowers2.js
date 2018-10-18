var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.0")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("flowers2.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("transcriber").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("23 January 2005"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("21 March 2018"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manually written"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("http://www.web3d.org/x3d/content/examples/license.html")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.NavigationInfo())
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Two mathematical orbitals").setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(50)])))
        .addChildSync(new autoclass.Group()
          .addChildSync(new autoclass.DirectionalLight().setDirectionSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))
          .addChildSync(new autoclass.ProtoDeclare().setNameSync("orbit")
            .setProtoInterfaceSync(new autoclass.ProtoInterface()
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("translation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("-8 0 0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFCOLOR).setNameSync("diffuseColor").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("1 0.5 0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFCOLOR).setNameSync("specularColor").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("1 0.5 0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("transparency").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.75")))
            .setProtoBodySync(new autoclass.ProtoBody()
              .addChildSync(new autoclass.Group()
                .addChildSync(new autoclass.TimeSensor().setDEFSync("Clock").setCycleIntervalSync(16).setLoopSync(true))
                .addChildSync(new autoclass.OrientationInterpolator().setDEFSync("OrbitPath").setKeySync(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValueSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(3.14), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(6.28)])))
                .addChildSync(new autoclass.Transform().setDEFSync("OrbitTransform")
                  .setISSync(new autoclass.IS()
                    .addConnectSync(new autoclass.connect().setNodeFieldSync("translation").setProtoFieldSync("translation")))
                  .addChildSync(new autoclass.Shape()
                    .setAppearanceSync(new autoclass.Appearance()
                      .setMaterialSync(new autoclass.Material()
                        .setISSync(new autoclass.IS()
                          .addConnectSync(new autoclass.connect().setNodeFieldSync("diffuseColor").setProtoFieldSync("diffuseColor"))
                          .addConnectSync(new autoclass.connect().setNodeFieldSync("specularColor").setProtoFieldSync("specularColor"))
                          .addConnectSync(new autoclass.connect().setNodeFieldSync("transparency").setProtoFieldSync("transparency")))))
                    .addCommentsSync(new autoclass.CommentsBlock("<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>"))
                    .setGeometrySync(new autoclass.IndexedFaceSet().setCcwSync(false).setConvexSync(false).setCoordIndexSync(java.newArray("int", [0,1,2,-1])).setDEFSync("Orbit")
                      .setCoordSync(new autoclass.Coordinate().setDEFSync("OrbitCoordinates").setPointSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
                .addChildSync(new autoclass.Script().setDEFSync("OrbitScript")
                  .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("set_fraction").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
                  .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("coordinates").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                  .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFINT32).setNameSync("coordIndexes").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                  .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("e").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValueSync("5"))
                  .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("f").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValueSync("5"))
                  .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("g").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValueSync("5"))
                  .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("h").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValueSync("5"))
                  .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFINT32).setNameSync("resolution").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("50"))
                  .setSourceCodeSync("ecmascript:\n"+
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
                .addChildSync(new autoclass.ROUTE().setFromNodeSync("OrbitScript").setFromFieldSync("coordIndexes").setToNodeSync("Orbit").setToFieldSync("coordIndex"))
                .addChildSync(new autoclass.ROUTE().setFromNodeSync("OrbitScript").setFromFieldSync("coordinates").setToNodeSync("OrbitCoordinates").setToFieldSync("point"))
                .addChildSync(new autoclass.ROUTE().setFromNodeSync("Clock").setFromFieldSync("fraction_changed").setToNodeSync("OrbitScript").setToFieldSync("set_fraction"))
                .addChildSync(new autoclass.ROUTE().setFromNodeSync("OrbitPath").setFromFieldSync("value_changed").setToNodeSync("OrbitTransform").setToFieldSync("rotation"))
                .addChildSync(new autoclass.ROUTE().setFromNodeSync("Clock").setFromFieldSync("fraction_changed").setToNodeSync("OrbitPath").setToFieldSync("set_fraction")))))
          .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("orbit"))
          .addChildSync(ProtoInstance1 = new autoclass.ProtoInstance().setNameSync("orbit"))))      ;
ProtoInstance0
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("translation").setValueSync("-8 0 0"));
ProtoInstance0
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("diffuseColor").setValueSync("1 0.5 0"));
ProtoInstance0
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("specularColor").setValueSync("1 0.5 0"));
ProtoInstance0
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("transparency").setValueSync("0.75"));
ProtoInstance1
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("translation").setValueSync("8 0 0"));
ProtoInstance1
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("diffuseColor").setValueSync("0 0.5 1"));
ProtoInstance1
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("specularColor").setValueSync("0 0.5 1"));
ProtoInstance1
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("transparency").setValueSync("0.5"));
    X3D0.toFileX3D("../data/flowers2.new.x3d");
