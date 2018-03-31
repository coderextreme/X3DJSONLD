load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setContent("title").setName("flowers2.x3d"))
        .addMeta(new metaObject().setContent("John Carlson").setName("creator"))
        .addMeta(new metaObject().setContent("John Carlson").setName("transcriber"))
        .addMeta(new metaObject().setContent("23 January 2005").setName("created"))
        .addMeta(new metaObject().setContent("21 March 2018").setName("modified"))
        .addMeta(new metaObject().setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)").setName("description"))
        .addMeta(new metaObject().setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("manually written").setName("generator"))
        .addMeta(new metaObject().setContent("http://www.web3d.org/x3d/content/examples/license.html").setName("license")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(Java.to(["EXAMINE","ANY"], Java.type("java.lang.String[]"))))
        .addChild(new ViewpointObject().setDescription("Two mathematical orbitals").setPosition(Java.to([0,0,50], Java.type("float[]"))))
        .addChild(new GroupObject()
          .addChild(new DirectionalLightObject().setDirection(Java.to([1,1,1], Java.type("float[]"))))
          .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(16).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("OrbitPath").setKey(Java.to([0,0.5,1], Java.type("float[]"))).setKeyValue(Java.to([1,0,0,0,1,0,0,3.14,1,0,0,6.28], Java.type("float[]"))))
          .addChild(new ProtoDeclareObject().setName("orbit")
            .setProtoInterface(new ProtoInterfaceObject()
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("-8 0 0"))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("diffuseColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("specularColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("transparency").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.75")))
            .setProtoBody(new ProtoBodyObject()
              .addChild(new GroupObject()
                .addChild(new TransformObject().setDEF("OrbitTransform")
                  .setIS(new ISObject()
                    .addConnect(new connectObject().setNodeField("translation").setProtoField("translation")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject()
                        .setIS(new ISObject()
                          .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor"))
                          .addConnect(new connectObject().setNodeField("specularColor").setProtoField("specularColor"))
                          .addConnect(new connectObject().setNodeField("transparency").setProtoField("transparency")))))
                    .setGeometry(new IndexedFaceSetObject().setDEF("Orbit").setCreaseAngle(0)
                      .setCoord(new CoordinateObject().setDEF("OrbitCoordinates")))))
                .addChild(new ScriptObject().setDEF("OrbitScript")
                  .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
                  .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setName("coordinates"))
                  .addField(new fieldObject().setType(fieldObject.TYPE_MFINT32).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setName("coordIndexes"))
                  .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setName("e").setValue("5"))
                  .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setName("f").setValue("5"))
                  .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setName("g").setValue("5"))
                  .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setName("h").setValue("5"))
                  .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setName("resolution").setValue("50"))
                  .setSourceCode("\n"+
"			ecmascript:\n"+
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
"			     for ( i = 0; i < resolution-1; i++) {\n"+
"				for ( j = 0; j < resolution-1; j++) {\n"+
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
"			     theta = 0.0;\n"+
"			     phi = 0.0;\n"+
"			     delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var localc = [];\n"+
"			     for ( i = 0; i < resolution; i++) {\n"+
"				for ( j = 0; j < resolution; j++) {\n"+
"					rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
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
"				choice = Math.floor(Math.random() * 4);\n"+
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
"			}\n"+
"			      \n"+
""))
                .addChild(new ROUTEObject().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("coordIndex"))
                .addChild(new ROUTEObject().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
                .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction"))
                .addChild(new ROUTEObject().setFromNode("OrbitPath").setFromField("value_changed").setToNode("OrbitTransform").setToField("rotation")))))
          .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("orbit"))
          .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("orbit"))
          .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitPath").setToField("set_fraction"))))      ;
ProtoInstance0
            .addFieldValue(new fieldValueObject().setName("translation").setValue("-8 0 0"));
ProtoInstance0
            .addFieldValue(new fieldValueObject().setName("diffuseColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue(new fieldValueObject().setName("specularColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue(new fieldValueObject().setName("transparency").setValue("0.75"));
ProtoInstance1
            .addFieldValue(new fieldValueObject().setName("translation").setValue("8 0 0"));
ProtoInstance1
            .addFieldValue(new fieldValueObject().setName("diffuseColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue(new fieldValueObject().setName("specularColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue(new fieldValueObject().setName("transparency").setValue("0.5"));
    X3D0.toFileX3D("../data/flowers2.new.x3d");
