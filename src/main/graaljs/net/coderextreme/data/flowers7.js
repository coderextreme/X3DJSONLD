load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("flowers7.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("generator").setContent("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy"))
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Shape").setLevel(4))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1)))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Background().setDEF("background").setFrontUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"], Java.type("java.lang.String[]"))).setBackUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDescription("Transparent rose").setPosition(Java.to([0f,0f,40f], Java.type("float[]"))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([0.7f,0.7f,0.7f], Java.type("float[]"))).setSpecularColor(Java.to([0.5f,0.5f,0.5f], Java.type("float[]"))))
              .setTexture(new ComposedCubeMapTexture().setDEF("texture"))
              .addShaders(new ComposedShader().setDEF("x3dom").setLanguage("GLSL")
                .addParts(new ShaderPart().setUrl(Java.to(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(Java.to(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"], Java.type("java.lang.String[]"))))
                .addField(new field().setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("cube"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("chromaticDispertion").setValue("0.98 1 1.033"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("bias").setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("scale").setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("power").setValue("2"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("a").setValue("10"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("b").setValue("1"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("c").setValue("20"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("d").setValue("20"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("tdelta"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("pdelta")))
              .addShaders(new ComposedShader().setDEF("x_ite").setLanguage("GLSL")
                .addParts(new ShaderPart().setUrl(Java.to(["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(Java.to(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"], Java.type("java.lang.String[]"))))
                .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("cube")
                  .addChild(new ComposedCubeMapTexture().setUSE("texture")))
                .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("chromaticDispertion").setValue("0.98 1 1.033"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("bias"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("scale"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("power"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("a"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("b"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("c"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("d"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("tdelta"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("pdelta"))))
            .setGeometry(new Sphere())))
        .addChild(new Script().setDEF("UrlSelector").setDirectOutput(true)
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("frontUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("backUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("leftUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("rightUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("topUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("bottomUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("front"))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("back"))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("left"))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("right"))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("top"))
          .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("bottom"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
          .addField(new field().setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("old").setValue("-1"))
          .setSourceCode("ecmascript:
        function set_fraction( f, tm ) {
            var side = Math.floor(f*frontUrls.length);
            if (side > frontUrls.length-1) {
                side = 0;
            }
            if (side != old) {
                    old = side;
                    front[0] = frontUrls[side];
                    back[0] = backUrls[side];
                    left[0] = leftUrls[side];
                    right[0] = rightUrls[side];
                    top[0] = topUrls[side];
                    bottom[0] = bottomUrls[side];
            }
        }"))
        .addChild(new Script().setDEF("Animate").setDirectOutput(true)
          .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("a").setValue("10"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("b").setValue("1"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("c").setValue("20"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("d").setValue("20"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("tdelta"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("pdelta"))
          .setSourceCode("ecmascript:

function set_fraction() {
	var choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		a = a + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		b = b + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		c = c + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		d = d + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	tdelta = tdelta + 0.5;
	pdelta = pdelta + 0.5;
	if (a < 1) {
		a = 10;
	}
	if (b < 1) {
		b = 10;
	}
	if (c < 1) {
		c = 4;
	}
	if (c > 20) {
		c = 4;
	}
	if (d < 1) {
		d = 4;
	}
	if (d > 20) {
		d = 4;
	}
}"))
        .addChild(new TimeSensor().setDEF("TourTime").setCycleInterval(5).setLoop(true))
        .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("a").setToNode("x_ite").setToField("a"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("b").setToNode("x_ite").setToField("b"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("c").setToNode("x_ite").setToField("c"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("d").setToNode("x_ite").setToField("d"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta").setToNode("x_ite").setToField("pdelta"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("x_ite").setToField("tdelta"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("a").setToNode("x3dom").setToField("a"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("b").setToNode("x3dom").setToField("b"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("c").setToNode("x3dom").setToField("c"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("d").setToNode("x3dom").setToField("d"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta").setToNode("x3dom").setToField("pdelta"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("x3dom").setToField("tdelta")))      ;
    X3D0.toFileX3D("../data/flowers7.new.graal.x3d");
    X3D0.toFileJSON("../data/flowers7.new.graal.json");
