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
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Shape").setLevel(4))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1))
        .addComponent(new component().setName("DIS").setLevel(2))
        .addMeta(new meta().setName("title").setContent("bumpyfreewrlsliders.x3d"))
        .addMeta(new meta().setName("description").setContent("Bumpy Orbitals with Sliders for FreeWRL"))
        .addMeta(new meta().setName("creator").setContent("Doug Sanden, Christoph Valentin, John Carlson"))
        .addMeta(new meta().setName("identifier").setContent("https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d"))
        .addMeta(new meta().setName("license").setContent("license.html")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("LayerSet with two layers, navigation happens in layer 1"))
        .addLayerSet(new LayerSet().setActiveLayer(1).setOrder(Java.to([1,2], Java.type("int[]")))
          .addComments(new CommentsBlock("the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\""))
          .addComments(new CommentsBlock("the second layer contains the sliders that are moved with the user's display"))
          .addComments(new CommentsBlock("like a HUD (heads up display)"))
          .addLayers(new Layer().setPickable(true).setObjectType(Java.to(["ALL"], Java.type("java.lang.String[]")))
            .addComments(new CommentsBlock("basic nodes, which might be present in any scene"))
            .addChild(new NavigationInfo().setType(Java.to(["EXAMINE","FLY","LOOKAT","ANY"], Java.type("java.lang.String[]"))).setAvatarSize(Java.to(doubleToFloat([0.25,1.75,0.75]), Java.type("float[]"))))
            .addChild(new DirectionalLight().setAmbientIntensity(0.2).setDirection(Java.to(doubleToFloat([0,-1,0]), Java.type("float[]"))))
            .addChild(new DirectionalLight().setAmbientIntensity(0.2).setDirection(Java.to(doubleToFloat([-1,-0.1,-1]), Java.type("float[]"))))
            .addChild(new Viewpoint().setDescription("My Overview").setFieldOfView(1.570796).setPosition(Java.to(doubleToFloat([0,1.75,60]), Java.type("float[]"))))
            .addComments(new CommentsBlock("this group contains the red/green/blue 3D crosshair"))
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
              .addComments(new CommentsBlock("<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />"))
              .addComments(new CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
              .addChild(new Background().setBackUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))))
              .addChild(new Transform()
                .addChild(new Shape()
                  .setGeometry(new Sphere().setRadius(5))
                  .addComments(new CommentsBlock("<IndexedFaceSet convex=\"false\" DEF=\"Orbit\" creaseAngle=\"0\">"))
                  .addComments(new CommentsBlock("<Coordinate DEF=\"OrbitCoordinates\"/>"))
                  .addComments(new CommentsBlock("</IndexedFaceSet>"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.7,0.7,0.7]), Java.type("float[]"))).setSpecularColor(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]"))))
                    .setTexture(new ComposedCubeMapTexture().setDEF("texture")
                      .setBackTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))))
                      .setBottomTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))))
                      .setFrontTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))))
                      .setLeftTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))))
                      .setRightTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))))
                      .setTopTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]")))))
                    .addShaders(new ComposedShader().setDEF("freewrlShader").setLanguage("GLSL")
                      .addField(new field().setType(field.TYPE_SFINT32).setName("fw_textureCoordGenType").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                      .addField(new field().setType(field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("bias").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("power").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("a").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("15"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("b").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("c").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("20"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("d").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("20"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                      .addComments(new CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\">"))
                      .addComments(new CommentsBlock("<ComposedCubeMapTexture USE=\"texture\"/>"))
                      .addComments(new CommentsBlock("</field>"))
                      .addParts(new ShaderPart().setType("VERTEX")
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("url").setProtoField("vertex"))))
                      .addParts(new ShaderPart().setType("FRAGMENT")
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("url").setProtoField("fragment")))))
                    .addComments(new CommentsBlock("<ComposedShader DEF=\"freewrlShader\" language=\"GLSL\">"))
                    .addComments(new CommentsBlock("<field name='fw_textureCoordGenType' accessType='inputOutput' type='SFInt32' value='0'></field>"))
                    .addComments(new CommentsBlock("<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field>"))
                    .addComments(new CommentsBlock("<field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field>"))
                    .addComments(new CommentsBlock("<field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field>"))
                    .addComments(new CommentsBlock("<field name='power' type='SFFloat' accessType='inputOutput' value='2'></field>"))
                    .addComments(new CommentsBlock("<field name='a' type='SFFloat' accessType='inputOutput' value='15'></field>"))
                    .addComments(new CommentsBlock("<field name='b' type='SFFloat' accessType='inputOutput' value='5'></field>"))
                    .addComments(new CommentsBlock("<field name='c' type='SFFloat' accessType='inputOutput' value='20'></field>"))
                    .addComments(new CommentsBlock("<field name='d' type='SFFloat' accessType='inputOutput' value='20'></field>"))
                    .addComments(new CommentsBlock("<field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>"))
                    .addComments(new CommentsBlock("<field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>"))
                    .addComments(new CommentsBlock("<ShaderPart type='VERTEX'>"))
                    .addComments(new CommentsBlock("<IS>"))
                    .addComments(new CommentsBlock("<connect nodeField=\"url\" protoField=\"vertex\"/>"))
                    .addComments(new CommentsBlock("</IS>"))
                    .addComments(new CommentsBlock("</ShaderPart>"))
                    .addComments(new CommentsBlock("<ShaderPart type='FRAGMENT'>"))
                    .addComments(new CommentsBlock("<IS>"))
                    .addComments(new CommentsBlock("<connect nodeField=\"url\" protoField=\"fragment\"/>"))
                    .addComments(new CommentsBlock("</IS>"))
                    .addComments(new CommentsBlock("</ShaderPart>"))
                    .addComments(new CommentsBlock("</ComposedShader>"))))))
            .addComments(new CommentsBlock("<Script DEF=\"OrbitScript\">"))
            .addComments(new CommentsBlock("<field accessType=\"inputOutput\" name=\"coordinates\" type=\"MFVec3f\"/>"))
            .addComments(new CommentsBlock("<field accessType=\"outputOnly\" name=\"coordIndexes\" type=\"MFInt32\"/>"))
            .addComments(new CommentsBlock("<field name='a' type='SFFloat' accessType='inputOutput' value='10'></field>"))
            .addComments(new CommentsBlock("<field name='b' type='SFFloat' accessType='inputOutput' value='10'></field>"))
            .addComments(new CommentsBlock("<field name='c' type='SFFloat' accessType='inputOutput' value='2'></field>"))
            .addComments(new CommentsBlock("<field name='d' type='SFFloat' accessType='inputOutput' value='2'></field>"))
            .addComments(new CommentsBlock("<field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>"))
            .addComments(new CommentsBlock("<field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>"))
            .addComments(new CommentsBlock("<![CDATA[ecmascript: function initialize() { var resolution = 300; var theta = 0.0; var phi = 0.0; var delta = (2 * 3.141592653) / (resolution-1); var crds = new MFVec3f(); for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; } coordinates = crds; var cis = new MFInt32(); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } coordIndexes = cis; } ]]></Script>"))
            .addComments(new CommentsBlock("<ROUTE fromField=\"coordIndexes\" fromNode=\"OrbitScript\" toField=\"set_coordIndex\" toNode=\"Orbit\"/>"))
            .addComments(new CommentsBlock("<ROUTE fromField=\"coordinates\" fromNode=\"OrbitScript\" toField=\"set_point\" toNode=\"OrbitCoordinates\"/>"))
            .addComments(new CommentsBlock("DIS multiuser facilities"))
            .addChild(new DISEntityManager().setDEF("EntityManager")
              .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(1).setUrl(Java.to(["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"], Java.type("java.lang.String[]"))))
              .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(2).setUrl(Java.to(["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"], Java.type("java.lang.String[]"))))
              .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(3).setUrl(Java.to(["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"], Java.type("java.lang.String[]"))))
              .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(4).setUrl(Java.to(["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Collision()
              .addChild(new Group().setDEF("AvatarHolder")))
            .addChild(new ROUTE().setFromField("addedEntities").setFromNode("EntityManager").setToField("addChildren").setToNode("AvatarHolder"))
            .addChild(new ROUTE().setFromField("removedEntities").setFromNode("EntityManager").setToField("removeChildren").setToNode("AvatarHolder")))
          .addLayers(new LayoutLayer().setPickable(true).setObjectType(Java.to(["ALL"], Java.type("java.lang.String[]")))
            .addComments(new CommentsBlock("positioning the LayoutLayer"))
            .addComments(new CommentsBlock("clipping the LayoutLayer"))
            .addComments(new CommentsBlock("the content (children) of the LayoutLayer"))
            .addComments(new CommentsBlock("first, the slider for scaling the model"))
            .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,0,-3]), Java.type("float[]")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.1,0.1,0.1]), Java.type("float[]"))).setTransparency(1)))
                .setGeometry(new Box().setSize(Java.to(doubleToFloat([100,100,0.02]), Java.type("float[]"))))))
            .addChild(new Transform().setDEF("equationTransform")
              .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,0,-20]), Java.type("float[]")))
                .addChild(new Shape()
                  .setGeometry(new Text().setDEF("equation").setString(Java.to(["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.09)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,1,1]), Java.type("float[]"))))))))
            .addChild(new ProtoDeclare().setName("SliderProto")
              .setProtoInterface(new ProtoInterface()
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("sliderTranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0.7 0"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("transformTranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0.1"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("sensorTranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("numberTranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.2 0 0"))
                .addField(new field().setType(field.TYPE_MFSTRING).setName("textString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("\"a=\""))
                .addField(new field().setType(field.TYPE_SFSTRING).setName("parameterName").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("a"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("parameterScale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("30"))
                .addField(new field().setType(field.TYPE_SFNODE).setName("shaderNode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
              .setProtoBody(new ProtoBody()
                .addChild(new Group()
                  .addChild(new Transform().setDEF("protoSlider").setTranslation(Java.to(doubleToFloat([0,0.7,0]), Java.type("float[]")))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("translation").setProtoField("sliderTranslation")))
                    .addChild(new Transform().setDEF("protoTransform").setTranslation(Java.to(doubleToFloat([0,0,0.1]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("translation").setProtoField("sensorTranslation")))
                      .addChild(new PlaneSensor().setDEF("protoSensor").setMaxPosition(Java.to(doubleToFloat([2,0]), Java.type("float[]"))))
                      .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,0,0]), Java.type("float[]")))
                        .addChild(new TouchSensor().setDEF("protoTS")))
                      .addChild(new Transform()
                        .addChild(new Shape()
                          .setGeometry(new Text().setDEF("protoText").setString(Java.to(["a="], Java.type("java.lang.String[]")))
                            .setIS(new IS()
                              .addConnect(new connect().setNodeField("string").setProtoField("textString")))
                            .setFontStyle(new FontStyle().setSize(0.2)))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]"))))))
                        .addChild(new Transform()
                          .setIS(new IS()
                            .addConnect(new connect().setNodeField("translation").setProtoField("numberTranslation")))
                          .addChild(new Shape()
                            .setGeometry(new Text().setDEF("protoNumber").setString(Java.to(["0"], Java.type("java.lang.String[]")))
                              .setFontStyle(new FontStyle().setSize(0.2)))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]"))))))))))
                  .addChild(new Script().setDEF("protoValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("protoScale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("30"))
                    .addField(new field().setType(field.TYPE_SFNODE).setName("shader").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new field().setType(field.TYPE_SFVEC3F).setName("newTranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("protoValue_changed").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
                    .addField(new field().setType(field.TYPE_MFSTRING).setName("protoNumber_changed").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("\"0.0\""))
                    .addField(new field().setType(field.TYPE_SFSTRING).setName("protoParameterName").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("a"))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("protoScale").setProtoField("parameterScale"))
                      .addConnect(new connect().setNodeField("protoParameterName").setProtoField("parameterName"))
                      .addConnect(new connect().setNodeField("shader").setProtoField("shaderNode")))
                    .setSourceCode(`ecmascript:
	const newTranslation = function(Value) {
	    protoValue_changed = Value[0] * protoScale;
	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());
	    Browser.println(\"In newTranslation:\");
	    Browser.println(shader);
	    Browser.println(Value[0]);
	    Browser.println(Value.x);
	    Browser.println(protoScale);
	    Browser.println(Value[0] * protoScale);
	    Browser.println(protoParameterName);
					// shader[protoParameterName] = Value[0] * protoScale;
	};`))
                  .addChild(new ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("set_translation").setToNode("protoTransform"))
                  .addChild(new ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("newTranslation").setToNode("protoValueTransformerScript"))
                  .addChild(new ROUTE().setFromField("protoNumber_changed").setFromNode("protoValueTransformerScript").setToField("string").setToNode("protoNumber")))))
            .addChild(ProtoInstance0 = new ProtoInstance().setName("SliderProto").setDEF("aPI"))
            .addChild(ProtoInstance1 = new ProtoInstance().setName("SliderProto").setDEF("bPI"))
            .addChild(ProtoInstance2 = new ProtoInstance().setName("SliderProto").setDEF("cPI"))
            .addChild(ProtoInstance3 = new ProtoInstance().setName("SliderProto").setDEF("dPI"))
            .addChild(ProtoInstance4 = new ProtoInstance().setName("SliderProto").setDEF("tdeltaPI"))
            .addChild(ProtoInstance5 = new ProtoInstance().setName("SliderProto").setDEF("pdeltaPI"))
            .setLayout(new Layout().setAlign(Java.to(["LEFT","BOTTOM"], Java.type("java.lang.String[]"))).setOffset(Java.to(doubleToFloat([-0.5,0]), Java.type("float[]"))))
            .setViewport(new Viewport()))))      ;
ProtoInstance0
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 0.7 0"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("numberTranslation").setValue("0.3 0 0"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("textString").setValue("\"a=\""));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("parameterName").setValue("a"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 0.4 0"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("numberTranslation").setValue("0.3 0 0"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("textString").setValue("\"b=\""));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("parameterName").setValue("b"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 0.1 0"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("numberTranslation").setValue("0.3 0 0"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("textString").setValue("\"c=\""));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("parameterName").setValue("c"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 -0.2 0"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("numberTranslation").setValue("0.3 0 0"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("textString").setValue("\"d=\""));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("parameterName").setValue("d"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 -0.5 0"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("numberTranslation").setValue("0.8 0 0"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("textString").setValue("\"tdelta=\""));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("parameterName").setValue("tdelta"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 -0.8 0"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("numberTranslation").setValue("0.8 0 0"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("textString").setValue("\"pdelta=\""));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("parameterName").setValue("pdelta"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
    X3D0.toFileX3D("../data/bumpyfreewrlsliders.new.graal.x3d");
    X3D0.toFileJSON("../data/bumpyfreewrlsliders.new.graal.x3dj");
