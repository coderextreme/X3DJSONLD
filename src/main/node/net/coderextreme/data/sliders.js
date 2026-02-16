import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Full").setVersion("4.1")
      .setHead(new autoclass.head()
        .addComments((new autoclass.CommentsBlock("<component name='Shape' level='4'></component>")))
        .addComponent(new autoclass.component().setName("Scripting").setLevel(1))
        .addComponent(new autoclass.component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new autoclass.component().setName("Texturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Rendering").setLevel(1))
        .addComponent(new autoclass.component().setName("Grouping").setLevel(3))
        .addComponent(new autoclass.component().setName("Core").setLevel(1))
        .addMeta(new autoclass.meta().setName("title").setContent("sliders.x3d"))
        .addMeta(new autoclass.meta().setName("created").setContent("8 August 2025"))
        .addMeta(new autoclass.meta().setName("description").setContent("*Bumpy flower with prototype sliders*"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Doug Sanden, Christoph Valentin, John Carlson"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d"))
        .addMeta(new autoclass.meta().setName("license").setContent("license.html"))
        .addMeta(new autoclass.meta().setName("generator").setContent("Vim, VI Improved")))
      .setScene(new autoclass.Scene()
        .addLayerSet(new autoclass.LayerSet().setActiveLayer(1).setOrder(java.newArray("int", [1,2,3]))
          .addLayers(new autoclass.Layer().setPickable(true).setObjectType(java.newArray("java.lang.String", ["ALL"]))
            .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["EXAMINE"])).setAvatarSize(java.newArray("float", [java.newFloat(0.25), java.newFloat(1.75), java.newFloat(0.75)])))
            .addChild(new autoclass.DirectionalLight().setAmbientIntensity(java.newFloat(0.2)).setDirection(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(0)])))
            .addChild(new autoclass.DirectionalLight().setAmbientIntensity(java.newFloat(0.2)).setDirection(java.newArray("float", [java.newFloat(-1), java.newFloat(-0.1), java.newFloat(-1)])))
            .addChild(new autoclass.Viewpoint().setDescription("My Overview").setFieldOfView(java.newFloat(1.570796)).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(1.75), java.newFloat(60)])))
            .addChild(new autoclass.Group()
              .addComments((new autoclass.CommentsBlock("Arrow X")))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(25), java.newFloat(0), java.newFloat(0)])).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cylinder().setDEF("Shaft").setRadius(java.newFloat(0.35)).setHeight(java.newFloat(50)))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("RED").setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(50), java.newFloat(0), java.newFloat(0)])).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cone().setDEF("Tip").setBottomRadius(java.newFloat(0.8)).setHeight(java.newFloat(3)))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setUSE("RED")))))
              .addComments((new autoclass.CommentsBlock("Arrow Y")))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(25), java.newFloat(0)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cylinder().setUSE("Shaft"))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("GREEN").setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])).setEmissiveColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))))))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(50), java.newFloat(0)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cone().setUSE("Tip"))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setUSE("GREEN")))))
              .addComments((new autoclass.CommentsBlock("Arrow Z")))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(25)])).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cylinder().setUSE("Shaft"))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("BLUE").setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(50)])).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cone().setUSE("Tip"))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setUSE("BLUE"))))))
            .addComments((new autoclass.CommentsBlock("the model that is being reviewed by the users of this scene")))
            .addChild(new autoclass.Transform().setDEF("FlowerTransform")
              .addChild(new autoclass.Transform()
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.IndexedFaceSet().setConvex(false).setDEF("Orbit")
                    .setCoord(new autoclass.Coordinate().setDEF("OrbitCoordinates")))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))))))
            .addChild(new autoclass.Script().setDEF("OrbitScript")
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFVEC3F).setName("coordinates").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFINT32).setName("coordIndexes").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("a").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("b").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("c").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("d").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("pdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("tdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("resolution").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("50"))
              .setSourceCode("ecmascript:\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = -1;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"			function set_a(value) {\n"+
"				a = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_b(value) {\n"+
"				b = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_c(value) {\n"+
"				c = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_d(value) {\n"+
"				d = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_pdelta(value) {\n"+
"				pdelta = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_tdelta(value) {\n"+
"				tdelta = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function resolution(value) {\n"+
"				resolution = value;\n"+
"				initialize();\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"					coordinates[arrIndex++] = new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			}"))
            .addChild(new autoclass.ROUTE().setFromField("coordIndexes").setFromNode("OrbitScript").setToField("set_coordIndex").setToNode("Orbit"))
            .addChild(new autoclass.ROUTE().setFromField("coordinates").setFromNode("OrbitScript").setToField("set_point").setToNode("OrbitCoordinates")))
          .addLayers(new autoclass.LayoutLayer().setPickable(true).setObjectType(java.newArray("java.lang.String", ["ALL"]))
            .setLayout(new autoclass.Layout().setAlign(java.newArray("java.lang.String", ["LEFT","BOTTOM"])).setOffset(java.newArray("float", [java.newFloat(-0.2), java.newFloat(0.19)])).setSize(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.6)])))
            .setViewport(new autoclass.Viewport().setClipBoundary(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1)])))
            .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-3)]))
              .addChild(new autoclass.Shape()
                .setAppearance(new autoclass.Appearance()
                  .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setTransparency(java.newFloat(0.7))))
                .setGeometry(new autoclass.Box().setSize(java.newArray("float", [java.newFloat(100), java.newFloat(100), java.newFloat(0.02)])))))
            .addChild(new autoclass.Transform().setDEF("equationTransform")
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-20)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Text().setDEF("equation").setString(java.newArray("java.lang.String", ["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.09))))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0)])))))))
            .addComments((new autoclass.CommentsBlock("The slider parameters")))
            .addChild(new autoclass.ProtoDeclare().setName("SliderProto")
              .setProtoInterface(new autoclass.ProtoInterface()
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("sliderTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("textString").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("\"x=\""))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("parameterScale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("15"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("parameterName").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("x"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("orbScript").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)))
              .setProtoBody(new autoclass.ProtoBody()
                .addChild(new autoclass.Group()
                  .addChild(new autoclass.Transform().setDEF("protoSlider").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(0)]))
                    .setIS(new autoclass.IS()
                      .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("sliderTranslation")))
                    .addChild(new autoclass.Transform().setDEF("protoTransform").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.1)]))
                      .addChild(new autoclass.PlaneSensor().setDEF("protoSensor").setDescription("Grab with mouse to adjust slider").setMaxPosition(java.newArray("float", [java.newFloat(1), java.newFloat(0)])))
                      .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                        .addChild(new autoclass.TouchSensor().setDescription("Maybe start dragging this?").setDEF("protoTS")))
                      .addChild(new autoclass.Transform()
                        .addChild(new autoclass.Shape()
                          .setGeometry(new autoclass.Text().setDEF("protoText").setString(java.newArray("java.lang.String", ["a="]))
                            .setIS(new autoclass.IS()
                              .addConnect(new autoclass.connect().setNodeField("string").setProtoField("textString")))
                            .setFontStyle(new autoclass.FontStyle().setStyle("BOLD").setSize(java.newFloat(0.23))))
                          .setAppearance(new autoclass.Appearance()
                            .setMaterial(new autoclass.Material()))))))
                  .addChild(new autoclass.Script().setDEF("protoValueTransformerScript")
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("protoScale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("protoParameterName").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("newTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("protoScript").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("protoValue").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("protoText").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("\"1.0\""))
                    .setIS(new autoclass.IS()
                      .addConnect(new autoclass.connect().setNodeField("protoScale").setProtoField("parameterScale"))
                      .addConnect(new autoclass.connect().setNodeField("protoParameterName").setProtoField("parameterName"))
                      .addConnect(new autoclass.connect().setNodeField("protoScript").setProtoField("orbScript")))
                    .setSourceCode("ecmascript:\n"+
"function set_protoScale(value) {\n"+
"	protoScale = value;\n"+
"}\n"+
"\n"+
"function set_protoParameterName(value) {\n"+
"	protoParameterName = value;\n"+
"}\n"+
"\n"+
"function set_protoScript(value) {\n"+
"	protoScript = value;\n"+
"}\n"+
"\n"+
"function set_protoValue(value) {\n"+
"	protoValue = value;\n"+
"}\n"+
"\n"+
"function set_protoText(value) {\n"+
"	protoText = value;\n"+
"}\n"+
"\n"+
"function newTranslation(value) {\n"+
"       	set_protoValue(value.x * protoScale);\n"+
"       	set_protoText(new MFString(protoParameterName+'='+protoValue.toFixed(2)));\n"+
"	protoScript[protoParameterName] = protoValue;\n"+
"};"))
                  .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("set_translation").setToNode("protoTransform"))
                  .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("newTranslation").setToNode("protoValueTransformerScript"))
                  .addChild(new autoclass.ROUTE().setFromField("protoText").setFromNode("protoValueTransformerScript").setToField("string").setToNode("protoText")))))
            .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("aPI"))
            .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("bPI"))
            .addChild(ProtoInstance2 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("cPI"))
            .addChild(ProtoInstance3 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("dPI"))
            .addChild(ProtoInstance4 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("tdeltaPI"))
            .addChild(ProtoInstance5 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("pdeltaPI")))
          .addLayers(new autoclass.Layer().setPickable(true).setObjectType(java.newArray("java.lang.String", ["ALL"]))
            .addChild(new autoclass.Viewpoint().setDescription("My Humanoids").setFieldOfView(java.newFloat(1.570796)).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(1.75), java.newFloat(80)]))))))      ;
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 0.7 0"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"a=\""));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("a"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("orbScript")
                .addChild(new autoclass.Script().setUSE("OrbitScript")));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 0.4 0"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"b=\""));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("b"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("orbScript")
                .addChild(new autoclass.Script().setUSE("OrbitScript")));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 0.1 0"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"c=\""));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("c"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("orbScript")
                .addChild(new autoclass.Script().setUSE("OrbitScript")));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 -0.2 0"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"d=\""));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("d"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("orbScript")
                .addChild(new autoclass.Script().setUSE("OrbitScript")));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 -0.5 0"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"tdelta=\""));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("tdelta"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("orbScript")
                .addChild(new autoclass.Script().setUSE("OrbitScript")));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 -0.8 0"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"pdelta=\""));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("pdelta"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("orbScript")
                .addChild(new autoclass.Script().setUSE("OrbitScript")));
    X3D0.toFileX3D("../data/sliders.new.node.x3d");
    X3D0.toFileJSON("../data/sliders.new.node.x3dj");
    process.exit(0);
