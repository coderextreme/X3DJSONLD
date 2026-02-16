load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
      var X3D0 =  new X3D().setProfile("Full").setVersion("4.1")
      .setHead(new head()
        .addComments(new CommentsBlock("<component name='Shape' level='4'></component>"))
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1))
        .addMeta(new meta().setName("title").setContent("sliders.x3d"))
        .addMeta(new meta().setName("created").setContent("8 August 2025"))
        .addMeta(new meta().setName("description").setContent("*Bumpy flower with prototype sliders*"))
        .addMeta(new meta().setName("creator").setContent("Doug Sanden, Christoph Valentin, John Carlson"))
        .addMeta(new meta().setName("identifier").setContent("https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d"))
        .addMeta(new meta().setName("license").setContent("license.html"))
        .addMeta(new meta().setName("generator").setContent("Vim, VI Improved")))
      .setScene(new Scene()
        .addLayerSet(new LayerSet().setActiveLayer(1).setOrder(Java.to([1,2,3], Java.type("int[]")))
          .addLayers(new Layer().setPickable(true).setObjectType(Java.to(["ALL"], Java.type("java.lang.String[]")))
            .addChild(new NavigationInfo().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))).setAvatarSize(Java.to(doubleToFloat([0.25,1.75,0.75]), Java.type("float[]"))))
            .addChild(new DirectionalLight().setAmbientIntensity(0.2).setDirection(Java.to(doubleToFloat([0,-1,0]), Java.type("float[]"))))
            .addChild(new DirectionalLight().setAmbientIntensity(0.2).setDirection(Java.to(doubleToFloat([-1,-0.1,-1]), Java.type("float[]"))))
            .addChild(new Viewpoint().setDescription("My Overview").setFieldOfView(1.570796).setPosition(Java.to(doubleToFloat([0,1.75,60]), Java.type("float[]"))))
            .addChild(new Group()
              .addComments(new CommentsBlock("Arrow X"))
              .addChild(new Transform().setTranslation(Java.to(doubleToFloat([25,0,0]), Java.type("float[]"))).setRotation(Java.to(doubleToFloat([0,0,-1,1.57]), Java.type("float[]")))
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setDEF("Shaft").setRadius(0.35).setHeight(50))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("RED").setDiffuseColor(Java.to(doubleToFloat([1,0,0]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([1,0,0]), Java.type("float[]")))))))
              .addChild(new Transform().setTranslation(Java.to(doubleToFloat([50,0,0]), Java.type("float[]"))).setRotation(Java.to(doubleToFloat([0,0,-1,1.57]), Java.type("float[]")))
                .addChild(new Shape()
                  .setGeometry(new Cone().setDEF("Tip").setBottomRadius(0.8).setHeight(3))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("RED")))))
              .addComments(new CommentsBlock("Arrow Y"))
              .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,25,0]), Java.type("float[]")))
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setUSE("Shaft"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("GREEN").setDiffuseColor(Java.to(doubleToFloat([0,1,0]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([0,1,0]), Java.type("float[]")))))))
              .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,50,0]), Java.type("float[]")))
                .addChild(new Shape()
                  .setGeometry(new Cone().setUSE("Tip"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("GREEN")))))
              .addComments(new CommentsBlock("Arrow Z"))
              .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,0,25]), Java.type("float[]"))).setRotation(Java.to(doubleToFloat([1,0,0,1.57]), Java.type("float[]")))
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setUSE("Shaft"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("BLUE").setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))))
              .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,0,50]), Java.type("float[]"))).setRotation(Java.to(doubleToFloat([1,0,0,1.57]), Java.type("float[]")))
                .addChild(new Shape()
                  .setGeometry(new Cone().setUSE("Tip"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("BLUE"))))))
            .addComments(new CommentsBlock("the model that is being reviewed by the users of this scene"))
            .addChild(new Transform().setDEF("FlowerTransform")
              .addChild(new Transform()
                .addChild(new Shape()
                  .setGeometry(new IndexedFaceSet().setConvex(false).setDEF("Orbit")
                    .setCoord(new Coordinate().setDEF("OrbitCoordinates")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.7,0.7,0.7]), Java.type("float[]"))).setSpecularColor(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]"))))))))
            .addChild(new Script().setDEF("OrbitScript")
              .addField(new field().setType(field.TYPE_MFVEC3F).setName("coordinates").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType(field.TYPE_MFINT32).setName("coordIndexes").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("a").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("b").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("c").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("d").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
              .addField(new field().setType(field.TYPE_SFINT32).setName("resolution").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50"))
              .setSourceCode(`ecmascript:
			function initialize() {
			     generateCoordinates();
			     var arrIndex = 0;
			     for (var i = 0; i < resolution-1; i++) {
				for (var j = 0; j < resolution-1; j++) {
				     coordIndexes[arrIndex++] = i*resolution+j;
				     coordIndexes[arrIndex++] = i*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j;
				     coordIndexes[arrIndex++] = -1;
				}
			    }
			}
			function set_a(value) {
				a = value;
				generateCoordinates();
			}

			function set_b(value) {
				b = value;
				generateCoordinates();
			}

			function set_c(value) {
				c = value;
				generateCoordinates();
			}

			function set_d(value) {
				d = value;
				generateCoordinates();
			}

			function set_pdelta(value) {
				pdelta = value;
				generateCoordinates();
			}

			function set_tdelta(value) {
				tdelta = value;
				generateCoordinates();
			}

			function resolution(value) {
				resolution = value;
				initialize();
			}

			function generateCoordinates() {
			     var theta = 0.0;
			     var phi = 0.0;
			     var delta = (2 * 3.141592653) / (resolution-1);
			     var arrIndex = 0;
			     for (var i = 0; i < resolution; i++) {
				for (var j = 0; j < resolution; j++) {
					var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
					coordinates[arrIndex++] = new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					);
					theta += delta;
				}
				phi += delta;
			     }
			}`))
            .addChild(new ROUTE().setFromField("coordIndexes").setFromNode("OrbitScript").setToField("set_coordIndex").setToNode("Orbit"))
            .addChild(new ROUTE().setFromField("coordinates").setFromNode("OrbitScript").setToField("set_point").setToNode("OrbitCoordinates")))
          .addLayers(new LayoutLayer().setPickable(true).setObjectType(Java.to(["ALL"], Java.type("java.lang.String[]")))
            .setLayout(new Layout().setAlign(Java.to(["LEFT","BOTTOM"], Java.type("java.lang.String[]"))).setOffset(Java.to(doubleToFloat([-0.2,0.19]), Java.type("float[]"))).setSize(Java.to(doubleToFloat([0.4,0.6]), Java.type("float[]"))))
            .setViewport(new Viewport().setClipBoundary(Java.to(doubleToFloat([0,1,0,1]), Java.type("float[]"))))
            .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,0,-3]), Java.type("float[]")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setTransparency(0.7)))
                .setGeometry(new Box().setSize(Java.to(doubleToFloat([100,100,0.02]), Java.type("float[]"))))))
            .addChild(new Transform().setDEF("equationTransform")
              .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,0,-20]), Java.type("float[]")))
                .addChild(new Shape()
                  .setGeometry(new Text().setDEF("equation").setString(Java.to(["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.09)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,0]), Java.type("float[]"))))))))
            .addComments(new CommentsBlock("The slider parameters"))
            .addChild(new ProtoDeclare().setName("SliderProto")
              .setProtoInterface(new ProtoInterface()
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("sliderTranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType(field.TYPE_MFSTRING).setName("textString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("\"x=\""))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("parameterScale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("15"))
                .addField(new field().setType(field.TYPE_SFSTRING).setName("parameterName").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("x"))
                .addField(new field().setType(field.TYPE_SFNODE).setName("orbScript").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
              .setProtoBody(new ProtoBody()
                .addChild(new Group()
                  .addChild(new Transform().setDEF("protoSlider").setTranslation(Java.to(doubleToFloat([0,0.7,0]), Java.type("float[]")))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("translation").setProtoField("sliderTranslation")))
                    .addChild(new Transform().setDEF("protoTransform").setTranslation(Java.to(doubleToFloat([0,0,0.1]), Java.type("float[]")))
                      .addChild(new PlaneSensor().setDEF("protoSensor").setDescription("Grab with mouse to adjust slider").setMaxPosition(Java.to(doubleToFloat([1,0]), Java.type("float[]"))))
                      .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,0,0]), Java.type("float[]")))
                        .addChild(new TouchSensor().setDescription("Maybe start dragging this?").setDEF("protoTS")))
                      .addChild(new Transform()
                        .addChild(new Shape()
                          .setGeometry(new Text().setDEF("protoText").setString(Java.to(["a="], Java.type("java.lang.String[]")))
                            .setIS(new IS()
                              .addConnect(new connect().setNodeField("string").setProtoField("textString")))
                            .setFontStyle(new FontStyle().setStyle("BOLD").setSize(0.23)))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material()))))))
                  .addChild(new Script().setDEF("protoValueTransformerScript")
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("protoScale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new field().setType(field.TYPE_SFSTRING).setName("protoParameterName").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new field().setType(field.TYPE_SFVEC3F).setName("newTranslation").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
                    .addField(new field().setType(field.TYPE_SFNODE).setName("protoScript").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("protoValue").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
                    .addField(new field().setType(field.TYPE_MFSTRING).setName("protoText").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("\"1.0\""))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("protoScale").setProtoField("parameterScale"))
                      .addConnect(new connect().setNodeField("protoParameterName").setProtoField("parameterName"))
                      .addConnect(new connect().setNodeField("protoScript").setProtoField("orbScript")))
                    .setSourceCode(`ecmascript:
function set_protoScale(value) {
	protoScale = value;
}

function set_protoParameterName(value) {
	protoParameterName = value;
}

function set_protoScript(value) {
	protoScript = value;
}

function set_protoValue(value) {
	protoValue = value;
}

function set_protoText(value) {
	protoText = value;
}

function newTranslation(value) {
       	set_protoValue(value.x * protoScale);
       	set_protoText(new MFString(protoParameterName+'='+protoValue.toFixed(2)));
	protoScript[protoParameterName] = protoValue;
};`))
                  .addChild(new ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("set_translation").setToNode("protoTransform"))
                  .addChild(new ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("newTranslation").setToNode("protoValueTransformerScript"))
                  .addChild(new ROUTE().setFromField("protoText").setFromNode("protoValueTransformerScript").setToField("string").setToNode("protoText")))))
            .addChild(ProtoInstance0 = new ProtoInstance().setName("SliderProto").setDEF("aPI"))
            .addChild(ProtoInstance1 = new ProtoInstance().setName("SliderProto").setDEF("bPI"))
            .addChild(ProtoInstance2 = new ProtoInstance().setName("SliderProto").setDEF("cPI"))
            .addChild(ProtoInstance3 = new ProtoInstance().setName("SliderProto").setDEF("dPI"))
            .addChild(ProtoInstance4 = new ProtoInstance().setName("SliderProto").setDEF("tdeltaPI"))
            .addChild(ProtoInstance5 = new ProtoInstance().setName("SliderProto").setDEF("pdeltaPI")))
          .addLayers(new Layer().setPickable(true).setObjectType(Java.to(["ALL"], Java.type("java.lang.String[]")))
            .addChild(new Viewpoint().setDescription("My Humanoids").setFieldOfView(1.570796).setPosition(Java.to(doubleToFloat([0,1.75,80]), Java.type("float[]")))))))      ;
ProtoInstance0
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 0.7 0"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("textString").setValue("\"a=\""));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("parameterName").setValue("a"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("orbScript")
                .addChild(new Script().setUSE("OrbitScript")));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 0.4 0"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("textString").setValue("\"b=\""));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("parameterName").setValue("b"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("orbScript")
                .addChild(new Script().setUSE("OrbitScript")));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 0.1 0"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("textString").setValue("\"c=\""));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("parameterName").setValue("c"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("orbScript")
                .addChild(new Script().setUSE("OrbitScript")));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 -0.2 0"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("textString").setValue("\"d=\""));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("parameterName").setValue("d"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("orbScript")
                .addChild(new Script().setUSE("OrbitScript")));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 -0.5 0"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("textString").setValue("\"tdelta=\""));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("parameterName").setValue("tdelta"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("orbScript")
                .addChild(new Script().setUSE("OrbitScript")));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 -0.8 0"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("textString").setValue("\"pdelta=\""));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("parameterName").setValue("pdelta"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("orbScript")
                .addChild(new Script().setUSE("OrbitScript")));
    X3D0.toFileX3D("../data/sliders.new.graal.x3d");
    X3D0.toFileJSON("../data/sliders.new.graal.x3dj");
