load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array([d])[0];
}
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
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
        .addChild(new Viewpoint().setDescription("Two mathematical orbitals").setPosition(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(50)], Java.type("float[]"))))
        .addChild(new Group()
          .addChild(new DirectionalLight().setDirection(Java.to([doubleToFloat(1),doubleToFloat(1),doubleToFloat(1)], Java.type("float[]"))))
          .addChild(new ProtoDeclare().setName("orbit")
            .setProtoInterface(new ProtoInterface()
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("-8 0 0"))
              .addField(new field().setType(field.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new field().setType(field.TYPE_SFCOLOR).setName("specularColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("transparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.75")))
            .setProtoBody(new ProtoBody()
              .addChild(new Group()
                .addChild(new TimeSensor().setDEF("Clock").setCycleInterval(16).setLoop(true))
                .addChild(new OrientationInterpolator().setDEF("OrbitPath").setKey(Java.to([doubleToFloat(0),doubleToFloat(0.5),doubleToFloat(1)], Java.type("float[]"))).setKeyValue(Java.to([doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0),doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(3.14),doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(6.28)], Java.type("float[]"))))
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
                      .setCoord(new Coordinate().setDEF("OrbitCoordinates").setPoint(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(1),doubleToFloat(0),doubleToFloat(1),doubleToFloat(0),doubleToFloat(1),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]")))))))
                .addChild(new Script().setDEF("OrbitScript")
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))
                  .addField(new field().setType(field.TYPE_MFVEC3F).setName("coordinates").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                  .addField(new field().setType(field.TYPE_MFINT32).setName("coordIndexes").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("e").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("g").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("h").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType(field.TYPE_SFINT32).setName("resolution").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50"))
                  .setSourceCode(`ecmascript:

			var e = 5;
			var f = 5;
			var g = 5;
			var h = 5;
			var resolution = 100;

			function initialize() {
			     generateCoordinates();
			     var localci = [];
			     for (var i = 0; i < resolution-1; i++) {
				for (var j = 0; j < resolution-1; j++) {
				     localci.push(i*resolution+j);
				     localci.push(i*resolution+j+1);
				     localci.push((i+1)*resolution+j+1);
				     localci.push((i+1)*resolution+j);
				     localci.push(-1);
				}
			    }
			    coordIndexes = new MFInt32(localci);
			}

			function generateCoordinates() {
			     var theta = 0.0;
			     var phi = 0.0;
			     var delta = (2 * 3.141592653) / (resolution-1);
			     var localc = [];
			     for (var i = 0; i < resolution; i++) {
				for (var j = 0; j < resolution; j++) {
					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
					localc.push(new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					));
					theta += delta;
				}
				phi += delta;
			     }
			     
			     coordinates = new MFVec3f(localc);
			}

			function set_fraction(fraction, eventTime) {
				var choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					e += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				case 1:
					f += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				case 2:
					g += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				case 3:
					h += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				}
				if (e < 1) {
					f = 10;
				}
				if (f < 1) {
					f = 10;
				}
				if (g < 1) {
					g = 4;
				}
				if (h < 1) {
					h = 4;
				}
				generateCoordinates();
			}`))
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
    X3D0.toFileJSON("../data/flowers2.new.graal.json");
