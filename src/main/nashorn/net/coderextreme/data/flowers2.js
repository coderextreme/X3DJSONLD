load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addMeta(new meta().setName("title").setContent("flowers2.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("transcriber").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("23 January 2005"))
        .addMeta(new meta().setName("modified").setContent("21 March 2018"))
        .addMeta(new meta().setName("description").setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"))
        .addMeta(new meta().setName("generator").setContent("manually written"))
        .addMeta(new meta().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Viewpoint().setDescription("Two mathematical orbitals").setPosition(Java.to([0,0,50], Java.type("double[]"))))
        .addChild(new Group()
          .addChild(new DirectionalLight().setDirection(Java.to([1,1,1], Java.type("double[]"))))
          .addChild(new ProtoDeclare().setName("orbit")
            .setProtoInterface(new ProtoInterface()
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("-8 0 0"))
              .addField(new field().setType(field.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new field().setType(field.TYPE_SFCOLOR).setName("specularColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("transparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.75")))
            .setProtoBody(new ProtoBody()
              .addChild(new Group()
                .addChild(new TimeSensor().setDEF("Clock").setCycleInterval(16).setLoop(true))
                .addChild(new OrientationInterpolator().setDEF("OrbitPath").setKey(Java.to([0,0.5,1], Java.type("double[]"))).setKeyValue(Java.to([1,0,0,0,1,0,0,3.14,1,0,0,6.28], Java.type("double[]"))))
                .addChild(new Transform().setDEF("OrbitTransform")
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material()
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor"))
                          .addConnect(new connect().setNodeField("specularColor").setProtoField("specularColor"))
                          .addConnect(new connect().setNodeField("transparency").setProtoField("transparency")))))
                    .addComments(new CommentsBlock("<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>"))
                    .setGeometry(new IndexedFaceSet().setCcw(false).setConvex(false).setCoordIndex(Java.to([0,1,2,-1], Java.type("int[]"))).setDEF("Orbit")
                      .setCoord(new Coordinate().setDEF("OrbitCoordinates").setPoint(Java.to([0,0,1,0,1,0,1,0,0], Java.type("double[]")))))))
                .addChild(new Script().setDEF("OrbitScript")
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))
                  .addField(new field().setType(field.TYPE_MFVEC3F).setName("coordinates").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                  .addField(new field().setType(field.TYPE_MFINT32).setName("coordIndexes").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("e").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("g").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("h").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType(field.TYPE_SFINT32).setName("resolution").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50"))
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
                .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("set_coordIndex"))
                .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
                .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction"))
                .addChild(new ROUTE().setFromNode("OrbitPath").setFromField("value_changed").setToNode("OrbitTransform").setToField("rotation"))
                .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitPath").setToField("set_fraction")))))
          .addChild(ProtoInstance0 = new ProtoInstance().setName("orbit"))
          .addChild(ProtoInstance1 = new ProtoInstance().setName("orbit"))))      ;
ProtoInstance0
            .addFieldValue(new fieldValue().setName("translation").setValue("-8 0 0"));
ProtoInstance0
            .addFieldValue(new fieldValue().setName("diffuseColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue(new fieldValue().setName("specularColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue(new fieldValue().setName("transparency").setValue("0.75"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("translation").setValue("8 0 0"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("diffuseColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("specularColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("transparency").setValue("0.5"));
    X3D0.toFileX3D("../data/flowers2.new.graal.x3d");
