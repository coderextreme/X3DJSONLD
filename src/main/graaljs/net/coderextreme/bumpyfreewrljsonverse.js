load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
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
      var X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1))
        .addComponent(new component().setName("DIS").setLevel(2))
        .addComments(new CommentsBlock("<component name='Shape' level='4'></component>"))
        .addComments(new CommentsBlock("Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L"))
        .addMeta(new meta().setName("title").setContent("bumpyfreewrljsonverse.x3d"))
        .addMeta(new meta().setName("description").setContent("*enter description here, short-sentence summaries preferred*"))
        .addMeta(new meta().setName("creator").setContent("Doug Sanden, Christoph Valentin, John Carlson"))
        .addMeta(new meta().setName("translator").setContent("*if manually translating VRML-to-X3D, enter name of person translating here*"))
        .addMeta(new meta().setName("created").setContent("*enter date of initial version here*"))
        .addMeta(new meta().setName("translated").setContent("*enter date of translation here*"))
        .addMeta(new meta().setName("modified").setContent("*enter date of latest revision here*"))
        .addMeta(new meta().setName("version").setContent("*enter version here, if any*"))
        .addMeta(new meta().setName("reference").setContent("*enter reference citation or relative/online url here*"))
        .addMeta(new meta().setName("reference").setContent("*enter additional url/bibliographic reference information here*"))
        .addMeta(new meta().setName("requires").setContent("*enter reference resource here if required to support function, delivery, or coherence of content*"))
        .addMeta(new meta().setName("rights").setContent("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"))
        .addMeta(new meta().setName("drawing").setContent("*enter drawing filename/url here*"))
        .addMeta(new meta().setName("MovingImage").setContent("*enter movie filename/url here*"))
        .addMeta(new meta().setName("photo").setContent("*enter photo filename/url here*"))
        .addMeta(new meta().setName("subject").setContent("*enter subject keywords here*"))
        .addMeta(new meta().setName("accessRights").setContent("*enter permission statements or url here*"))
        .addMeta(new meta().setName("identifier").setContent("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"))
        .addMeta(new meta().setName("generator").setContent("PSPad, http://www.pspad.com/"))
        .addMeta(new meta().setName("license").setContent("license.html")))
      .addComments(new CommentsBlock("\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\""))
      .setScene(new Scene()
        .addComments(new CommentsBlock("basic nodes, which might be present in any scene"))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))).setAvatarSize(Java.to(doubleToFloat([0.25,1.75,0.75]), Java.type("float[]"))))
        .addChild(new DirectionalLight().setAmbientIntensity(0.2).setDirection(Java.to(doubleToFloat([0,-1,0]), Java.type("float[]"))))
        .addChild(new DirectionalLight().setAmbientIntensity(0.2).setDirection(Java.to(doubleToFloat([-1,-0.1,-1]), Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("My Overview").setFieldOfView(1.570796).setPosition(Java.to(doubleToFloat([0,1.75,60]), Java.type("float[]"))))
        .addComments(new CommentsBlock("LayerSet with two layers, navigation happens in layer 1"))
        .addLayerSet(new LayerSet().setActiveLayer(1).setOrder(Java.to([1,2], Java.type("int[]")))
          .addComments(new CommentsBlock("the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\""))
          .addComments(new CommentsBlock("the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)"))
          .addLayers(new Layer().setPickable(true).setObjectType(Java.to(["ALL"], Java.type("java.lang.String[]")))
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
                  .addComments(new CommentsBlock("<Sphere radius='40'></Sphere>"))
                  .setGeometry(new IndexedFaceSet().setConvex(false).setDEF("Orbit")
                    .setCoord(new Coordinate().setDEF("OrbitCoordinates")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.7,0.7,0.7]), Java.type("float[]"))).setSpecularColor(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]"))))
                    .setTexture(new ComposedCubeMapTexture().setDEF("texture")
                      .setBackTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))))
                      .setBottomTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))))
                      .setFrontTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))))
                      .setLeftTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))))
                      .setRightTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))))
                      .setTopTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]")))))
                    .addShaders(new ComposedShader().setDEF("freewrlShader").setLanguage("GLSL")
                      .addField(new field().setType(field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0.98 1 1.033"))
                      .addField(new field().setType(field.TYPE_SFINT32).setName("fw_textureCoordGenType").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("bias").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("scale").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("power").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("2"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("a").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("15"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("b").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("c").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("d").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                      .addField(new field().setType(field.TYPE_SFFLOAT).setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                      .addParts(new ShaderPart().setType("VERTEX").setUrl(Java.to(["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"], Java.type("java.lang.String[]"))))
                      .addParts(new ShaderPart().setType("FRAGMENT").setUrl(Java.to(["../shaders/freewrl.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"], Java.type("java.lang.String[]"))))
                      .addComments(new CommentsBlock("TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/freewrl_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>")))))))
            .addChild(new Script().setDEF("OrbitScript")
              .addField(new field().setType(field.TYPE_MFVEC3F).setName("coordinates").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType(field.TYPE_MFINT32).setName("coordIndexes").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("a").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("b").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("c").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("d").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
              .setSourceCode(`ecmascript:
function initialize() {
     var resolution = 100;
     var theta = 0.0;
     var phi = 0.0;
     var delta = (2 * 3.141592653) / (resolution-1);
     var crds = new MFVec3f();
     var vecCount = 0;
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
		crds[vecCount] = new SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		);
		vecCount++;
		theta += delta;
	}
	phi += delta;
     }
     coordinates = crds;
     // coordinates = new MFVec3f(...crds);


     var cis = new MFInt32();
     var intCount = 0;
     for ( i = 0; i < resolution-1; i++) {
     	for ( j = 0; j < resolution-1; j++) {
	     cis[intCount++] = i*resolution+j;
	     cis[intCount++] = i*resolution+j+1;
	     cis[intCount++] = (i+1)*resolution+j+1;
	     cis[intCount++] = (i+1)*resolution+j;
	     cis[intCount++] = -1;
	}
    }
    coordIndexes = cis;
    // coordIndexes = new MFInt32(...cis);
}`))
            .addChild(new ROUTE().setFromField("coordIndexes").setFromNode("OrbitScript").setToField("set_coordIndex").setToNode("Orbit"))
            .addChild(new ROUTE().setFromField("coordinates").setFromNode("OrbitScript").setToField("set_point").setToNode("OrbitCoordinates"))
            .addComments(new CommentsBlock("DIS multiuser facilities"))
            .addChild(new DISEntityManager().setDEF("EntityManager")
              .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(1).setUrl(Java.to(["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"], Java.type("java.lang.String[]"))))
              .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(2).setUrl(Java.to(["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"], Java.type("java.lang.String[]"))))
              .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(3).setUrl(Java.to(["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"], Java.type("java.lang.String[]"))))
              .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(4).setUrl(Java.to(["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Collision().setEnabled(false)
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
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setTransparency(0.7)))
                .setGeometry(new Box().setSize(Java.to(doubleToFloat([100,100,0.02]), Java.type("float[]"))))))
            .addChild(new Transform().setDEF("equationTransform")
              .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,0,-20]), Java.type("float[]")))
                .addChild(new Shape()
                  .setGeometry(new Text().setDEF("equation").setString(Java.to(["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.09)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,0]), Java.type("float[]"))))))))
            .addChild(new ProtoDeclare().setName("SliderProto")
              .setProtoInterface(new ProtoInterface()
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("sliderTranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0.7 0"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("transformTranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0.1"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("sensorTranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType(field.TYPE_MFSTRING).setName("textString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("\"a=\""))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("parameterScale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("30"))
                .addField(new field().setType(field.TYPE_SFSTRING).setName("parameterName").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("a"))
                .addField(new field().setType(field.TYPE_SFNODE).setName("shaderNode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
              .setProtoBody(new ProtoBody()
                .addChild(new Group()
                  .addChild(new Transform().setDEF("protoSlider").setTranslation(Java.to(doubleToFloat([0,0.7,0]), Java.type("float[]")))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("translation").setProtoField("sliderTranslation")))
                    .addChild(new Transform().setDEF("protoTransform").setTranslation(Java.to(doubleToFloat([0,0,0.1]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("translation").setProtoField("sensorTranslation")))
                      .addChild(new PlaneSensor().setDEF("protoSensor").setMaxPosition(Java.to(doubleToFloat([1,0]), Java.type("float[]"))))
                      .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,0,0]), Java.type("float[]")))
                        .addChild(new TouchSensor().setDEF("protoTS")))
                      .addChild(new Transform()
                        .addChild(new Shape()
                          .setGeometry(new Text().setDEF("protoText").setString(Java.to(["a="], Java.type("java.lang.String[]")))
                            .setIS(new IS()
                              .addConnect(new connect().setNodeField("string").setProtoField("textString")))
                            .setFontStyle(new FontStyle().setSize(0.23)))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material()))))))
                  .addChild(new Script().setDEF("protoValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("protoScale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("30"))
                    .addField(new field().setType(field.TYPE_SFSTRING).setName("protoParameterName").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("a"))
                    .addField(new field().setType(field.TYPE_SFNODE).setName("shader").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new field().setType(field.TYPE_SFVEC3F).setName("newTranslation").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("protoValue_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
                    .addField(new field().setType(field.TYPE_MFSTRING).setName("protoText_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue("\"1.0\""))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("protoScale").setProtoField("parameterScale"))
                      .addConnect(new connect().setNodeField("protoParameterName").setProtoField("parameterName"))
                      .addConnect(new connect().setNodeField("shader").setProtoField("shaderNode")))
                    .setSourceCode(`ecmascript:
const newTranslation = function(Value) {
	'use strict';
	protoValue_changed = Value.x * protoScale;
	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));

        var orientation = Value.x;

        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");
        var t = Browser.currentScene.getNamedNode(\"protoTransform\");
        var txt = Browser.currentScene.getNamedNode(\"protoText\");
        if (shader) {
            shader.getField(protoParameterName).setValue(orientation * protoScale);
        }
        if (txt) {
            var stringField = txt.getField(\"string\");
            var label = protoParameterName;
            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));
        }
        if (ps) {
            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);
        }
        if (t) {
            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);
        }
}`))
                  .addChild(new ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("set_translation").setToNode("protoTransform"))
                  .addChild(new ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("newTranslation").setToNode("protoValueTransformerScript"))
                  .addChild(new ROUTE().setFromField("protoText_changed").setFromNode("protoValueTransformerScript").setToField("string").setToNode("protoText")))))
            .addChild(ProtoInstance0 = new ProtoInstance().setName("SliderProto").setDEF("aPI"))
            .addChild(ProtoInstance1 = new ProtoInstance().setName("SliderProto").setDEF("bPI"))
            .addChild(ProtoInstance2 = new ProtoInstance().setName("SliderProto").setDEF("cPI"))
            .addChild(ProtoInstance3 = new ProtoInstance().setName("SliderProto").setDEF("dPI"))
            .addChild(ProtoInstance4 = new ProtoInstance().setName("SliderProto").setDEF("tdeltaPI"))
            .addChild(ProtoInstance5 = new ProtoInstance().setName("SliderProto").setDEF("pdeltaPI"))
            .setLayout(new Layout().setAlign(Java.to(["LEFT","BOTTOM"], Java.type("java.lang.String[]"))).setOffset(Java.to(doubleToFloat([-0.2,0.19]), Java.type("float[]"))).setSize(Java.to(doubleToFloat([0.4,0.6]), Java.type("float[]"))))
            .setViewport(new Viewport().setClipBoundary(Java.to(doubleToFloat([0,1,0,1]), Java.type("float[]")))))))      ;
ProtoInstance0
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 0.7 0"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("textString").setValue("\"a=\""));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("parameterName").setValue("a"));
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
              .addFieldValue(new fieldValue().setName("textString").setValue("\"b=\""));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("parameterName").setValue("b"));
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
              .addFieldValue(new fieldValue().setName("textString").setValue("\"c=\""));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("parameterName").setValue("c"));
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
              .addFieldValue(new fieldValue().setName("textString").setValue("\"d=\""));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("parameterName").setValue("d"));
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
              .addFieldValue(new fieldValue().setName("textString").setValue("\"tdelta=\""));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("parameterName").setValue("tdelta"));
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
              .addFieldValue(new fieldValue().setName("textString").setValue("\"pdelta=\""));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("parameterName").setValue("pdelta"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
    X3D0.toFileX3D(".././bumpyfreewrljsonverse.new.graal.x3d");
    X3D0.toFileJSON(".././bumpyfreewrljsonverse.new.graal.json");
