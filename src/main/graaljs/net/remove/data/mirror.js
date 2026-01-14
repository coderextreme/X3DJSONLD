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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComments(new CommentsBlock("<component name='Shape' level='4'></component>"))
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1))
        .addMeta(new meta().setName("title").setContent("mirror.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d"))
        .addMeta(new meta().setName("description").setContent("sphere with alternating backgrounds")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setPosition(Java.to(doubleToFloat([0,5,100]), Java.type("float[]"))).setDescription("Switch background and images texture"))
        .addChild(new TextureBackground()
          .setLeftTexture(new ImageTexture().setDEF("leftBackgroundTexture").setUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"], Java.type("java.lang.String[]"))))
          .setRightTexture(new ImageTexture().setDEF("rightBackgroundTexture").setUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"], Java.type("java.lang.String[]"))))
          .setFrontTexture(new ImageTexture().setDEF("frontBackgroundTexture").setUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"], Java.type("java.lang.String[]"))))
          .setBackTexture(new ImageTexture().setDEF("backBackgroundTexture").setUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"], Java.type("java.lang.String[]"))))
          .setTopTexture(new ImageTexture().setDEF("topBackgroundTexture").setUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"], Java.type("java.lang.String[]"))))
          .setBottomTexture(new ImageTexture().setDEF("bottomBackgroundTexture").setUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"], Java.type("java.lang.String[]")))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.7,0.7,0.7]), Java.type("float[]"))).setSpecularColor(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]"))))
              .setTexture(new ComposedCubeMapTexture()
                .setBackTexture(new ImageTexture().setDEF("backShader").setUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"], Java.type("java.lang.String[]"))))
                .setBottomTexture(new ImageTexture().setDEF("bottomShader").setUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"], Java.type("java.lang.String[]"))))
                .setFrontTexture(new ImageTexture().setDEF("frontShader").setUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"], Java.type("java.lang.String[]"))))
                .setLeftTexture(new ImageTexture().setDEF("leftShader").setUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"], Java.type("java.lang.String[]"))))
                .setRightTexture(new ImageTexture().setDEF("rightShader").setUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"], Java.type("java.lang.String[]"))))
                .setTopTexture(new ImageTexture().setDEF("topShader").setUrl(Java.to(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShader().setDEF("x3dom").setLanguage("GLSL")
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new field().setType(field.TYPE_SFINT32).setName("cube").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("bias").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("power").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPart().setType("VERTEX").setUrl(Java.to(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(Java.to(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShader().setDEF("x_ite").setLanguage("GLSL")
                .addComments(new CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new field().setType(field.TYPE_SFINT32).setName("cube").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("bias").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("power").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPart().setType("VERTEX").setUrl(Java.to(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(Java.to(["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"], Java.type("java.lang.String[]"))))))
            .setGeometry(new Sphere().setRadius(30)))
          .addChild(new Script().setDEF("UrlSelector").setDirectOutput(true)
            .addField(new field().setType(field.TYPE_MFSTRING).setName("frontUrls").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("backUrls").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("leftUrls").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("rightUrls").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("topUrls").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("bottomUrls").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("front_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("back_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("left_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("right_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("top_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("bottom_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_SFINT32).setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("-1"))
            .setSourceCode(`ecmascript:
        function set_fraction( f, tm ) {
	    var side = Math.floor(f*frontUrls.length);
	    if (side > frontUrls.length-1) {
	    	side = 0;
	    }
	    if (side != old) {
	    	    Browser.print(f+\" \"+side);
	    	    old = side;
		    front_changed[0] = frontUrls[side];
		    back_changed[0] = backUrls[side];
		    left_changed[0] = leftUrls[side];
		    right_changed[0] = rightUrls[side];
		    top_changed[0] = topUrls[side];
		    bottom_changed[0] = bottomUrls[side];
            }
        }`))
          .addChild(new TimeSensor().setDEF("Clock").setCycleInterval(45).setLoop(true))
          .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("UrlSelector").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontBackgroundTexture").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backBackgroundTexture").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftBackgroundTexture").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightBackgroundTexture").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topBackgroundTexture").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomBackgroundTexture").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontShader").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backShader").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftShader").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightShader").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topShader").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomShader").setToField("url"))))      ;
    X3D0.toFileX3D("../data/mirror.new.graal.x3d");
    X3D0.toFileJSON("../data/mirror.new.graal.x3dj");
