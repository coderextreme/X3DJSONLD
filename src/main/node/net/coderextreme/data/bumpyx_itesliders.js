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
      var X3D0 =  (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
      .setHead(new autoclass.head()
        .addComments((new autoclass.CommentsBlock("<component name='Shape' level='4'></component>")))
        .addComments((new autoclass.CommentsBlock("<component name='DIS' level='2'></component>")))
        .addComponent(new autoclass.component().setName("Scripting").setLevel(1))
        .addComponent(new autoclass.component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new autoclass.component().setName("Shaders").setLevel(1))
        .addComponent(new autoclass.component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Texturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Rendering").setLevel(1))
        .addComponent(new autoclass.component().setName("Grouping").setLevel(3))
        .addComponent(new autoclass.component().setName("Core").setLevel(1))
        .addMeta(new autoclass.meta().setName("title").setContent("bumpyx_itesliders.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("*Bumpy flower with prototype sliders*"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Doug Sanden, Christoph Valentin, John Carlson"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("PSPad, http://www.pspad.com/"))
        .addMeta(new autoclass.meta().setName("license").setContent("license.html")))
      .addComments((new autoclass.CommentsBlock("\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\"")))
      .setScene(new autoclass.Scene()
        .addComments((new autoclass.CommentsBlock("LayerSet with two layers, navigation happens in layer 1")))
        .addLayerSet(new autoclass.LayerSet().setActiveLayer(1).setOrder(java.newArray("int", [1,2,3]))
          .addComments((new autoclass.CommentsBlock("the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"")))
          .addLayers(new autoclass.Layer().setPickable(true).setObjectType(java.newArray("java.lang.String", ["ALL"]))
            .addComments((new autoclass.CommentsBlock("basic nodes, which might be present in any scene")))
            .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["EXAMINE"])).setAvatarSize(java.newArray("float", [java.newFloat(0.25), java.newFloat(1.75), java.newFloat(0.75)])))
            .addChild(new autoclass.DirectionalLight().setAmbientIntensity(java.newFloat(0.2)).setDirection(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(0)])))
            .addChild(new autoclass.DirectionalLight().setAmbientIntensity(java.newFloat(0.2)).setDirection(java.newArray("float", [java.newFloat(-1), java.newFloat(-0.1), java.newFloat(-1)])))
            .addChild(new autoclass.Viewpoint().setDescription("My Overview").setFieldOfView(java.newFloat(1.570796)).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(1.75), java.newFloat(60)])))
            .addComments((new autoclass.CommentsBlock("this group contains the red/green/blue 3D crosshair")))
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
              .addComments((new autoclass.CommentsBlock("<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />")))
              .addComments((new autoclass.CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery")))
              .addChild(new autoclass.Background().setBackUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])).setBottomUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])).setFrontUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])).setLeftUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])).setRightUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])).setTopUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])))
              .addChild(new autoclass.Transform()
                .addChild(new autoclass.Shape()
                  .addComments((new autoclass.CommentsBlock("<Sphere radius='40'></Sphere>")))
                  .setGeometry(new autoclass.IndexedFaceSet().setConvex(false).setDEF("Orbit")
                    .setCoord(new autoclass.Coordinate().setDEF("OrbitCoordinates")))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
                    .setTexture(new autoclass.ComposedCubeMapTexture().setDEF("texture")
                      .setBackTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])))
                      .setBottomTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])))
                      .setFrontTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])))
                      .setLeftTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])))
                      .setRightTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])))
                      .setTopTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]))))
                    .addShaders(new autoclass.ComposedShader().setDEF("x_iteShader").setLanguage("GLSL")
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("0.98 1 1.033"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("cube").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY)
                        .addChild(new autoclass.ComposedCubeMapTexture().setUSE("texture")))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("bias").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("power").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("2"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("a").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("15"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("b").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("c").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("d").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("tdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("pdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                      .addParts(new autoclass.ShaderPart().setType("VERTEX").setUrl(java.newArray("java.lang.String", ["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])))
                      .addParts(new autoclass.ShaderPart().setType("FRAGMENT").setUrl(java.newArray("java.lang.String", ["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])))
                      .addComments((new autoclass.CommentsBlock("TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>"))))))))
            .addChild(new autoclass.Script().setDEF("OrbitScript")
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFVEC3F).setName("coordinates").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFINT32).setName("coordIndexes").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("a").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("b").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("c").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("d").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("pdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("tdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
              .setSourceCode("ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 300;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"}"))
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
            .addChild(new autoclass.ProtoDeclare().setName("SliderProto")
              .setProtoInterface(new autoclass.ProtoInterface()
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("sliderTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0.7 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("transformTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0.1"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("sensorTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("textString").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("\"a=\""))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("parameterScale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("30"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("parameterName").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("a"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("petNames").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("shaderNode").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)))
              .setProtoBody(new autoclass.ProtoBody()
                .addChild(new autoclass.Group()
                  .addChild(new autoclass.Transform().setDEF("protoSlider").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(0)]))
                    .setIS(new autoclass.IS()
                      .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("sliderTranslation")))
                    .addChild(new autoclass.Transform().setDEF("protoTransform").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.1)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("sensorTranslation")))
                      .addChild(new autoclass.PlaneSensor().setDEF("protoSensor").setDescription("Grab with mouse to adjust slider").setMaxPosition(java.newArray("float", [java.newFloat(1), java.newFloat(0)])))
                      .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                        .addChild(new autoclass.TouchSensor().setDEF("protoTS")))
                      .addChild(new autoclass.Transform()
                        .addChild(new autoclass.Shape()
                          .setGeometry(new autoclass.Text().setDEF("protoText").setString(java.newArray("java.lang.String", ["a="]))
                            .setIS(new autoclass.IS()
                              .addConnect(new autoclass.connect().setNodeField("string").setProtoField("textString")))
                            .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.23))))
                          .setAppearance(new autoclass.Appearance()
                            .setMaterial(new autoclass.Material()))))))
                  .addChild(new autoclass.Script().setUrl(java.newArray("java.lang.String", ["../javascripts/X3DUser.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js"])).setDEF("protoValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("protoScale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("petNames").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("protoParameterName").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("shader").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("newTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("protoValue_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("protoText_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValue("\"1.0\""))
                    .setIS(new autoclass.IS()
                      .addConnect(new autoclass.connect().setNodeField("protoScale").setProtoField("parameterScale"))
                      .addConnect(new autoclass.connect().setNodeField("petNames").setProtoField("petNames"))
                      .addConnect(new autoclass.connect().setNodeField("protoParameterName").setProtoField("parameterName"))
                      .addConnect(new autoclass.connect().setNodeField("shader").setProtoField("shaderNode"))))
                  .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("set_translation").setToNode("protoTransform"))
                  .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("newTranslation").setToNode("protoValueTransformerScript"))
                  .addChild(new autoclass.ROUTE().setFromField("protoText_changed").setFromNode("protoValueTransformerScript").setToField("string").setToNode("protoText")))))
            .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("aPI"))
            .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("bPI"))
            .addChild(ProtoInstance2 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("cPI"))
            .addChild(ProtoInstance3 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("dPI"))
            .addChild(ProtoInstance4 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("tdeltaPI"))
            .addChild(ProtoInstance5 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("pdeltaPI")))
          .addLayers(new autoclass.Layer().setPickable(true).setObjectType(java.newArray("java.lang.String", ["ALL"]))
            .addChild(new autoclass.Viewpoint().setDescription("My Humanoids").setFieldOfView(java.newFloat(1.570796)).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(1.75), java.newFloat(80)])))
            .addChild(new autoclass.Script().setUrl(java.newArray("java.lang.String", ["../javascripts/X3DAvatar.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js"])).setDEF("HumanoidScript").setDirectOutput(true).setMustEvaluate(true))
            .addChild(new autoclass.Group().setDEF("humanoidGroup")
              .addChild(new autoclass.Group())))))      ;
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 0.7 0"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"a=\""));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("a"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("petNames").setValue("\"yottzumm\" \"group1-petname\""));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("shaderNode")
                .addChild(new autoclass.ComposedShader().setUSE("x_iteShader")));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 0.4 0"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"b=\""));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("b"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("petNames").setValue("\"yottzumm\" \"group1-petname\""));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("shaderNode")
                .addChild(new autoclass.ComposedShader().setUSE("x_iteShader")));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 0.1 0"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"c=\""));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("c"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("petNames").setValue("\"yottzumm\" \"yottzumm2\" \"group1-petname\""));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("shaderNode")
                .addChild(new autoclass.ComposedShader().setUSE("x_iteShader")));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 -0.2 0"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"d=\""));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("d"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("petNames").setValue("\"yottzumm\" \"yottzumm2\" \"group1-petname\""));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("shaderNode")
                .addChild(new autoclass.ComposedShader().setUSE("x_iteShader")));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 -0.5 0"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"tdelta=\""));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("tdelta"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("petNames").setValue("\"yottzumm2\" \"group1-petname\""));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("shaderNode")
                .addChild(new autoclass.ComposedShader().setUSE("x_iteShader")));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 -0.8 0"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"pdelta=\""));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("pdelta"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("petNames").setValue("\"yottzumm2\" \"group1-petname\""));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("shaderNode")
                .addChild(new autoclass.ComposedShader().setUSE("x_iteShader")));
    X3D0.toFileX3D("../data/bumpyx_itesliders.new.node.x3d");
    X3D0.toFileJSON("../data/bumpyx_itesliders.new.node.x3dj");
    process.exit(0);
