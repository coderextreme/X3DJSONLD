load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("flowers7.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/flowers7.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a flower")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addComments(new CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
        .addChild(new BackgroundObject().setDEF("background").setBackUrl(Java.to(["images/all_probes/beach_cross/beach_back.png","http://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["images/all_probes/beach_cross/beach_bottom.png","http://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["images/all_probes/beach_cross/beach_front.png","http://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["images/all_probes/beach_cross/beach_left.png","http://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["images/all_probes/beach_cross/beach_right.png","http://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["images/all_probes/beach_cross/beach_top.png","http://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"], Java.type("java.lang.String[]"))))
        .addChild(new ViewpointObject().setPosition(Java.to([0,0,40], Java.type("float[]"))).setDescription("Transparent rose"))
        .addChild(new TransformObject().setDEF("Rose01")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,0.7,0.7], Java.type("float[]"))).setSpecularColor(Java.to([0.5,0.5,0.5], Java.type("float[]"))))
              .setTexture(new ComposedCubeMapTextureObject()
                .setBack(new ImageTextureObject().setDEF("backShader").setUrl(Java.to(["images/all_probes/beach_cross/beach_back.png","http://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"], Java.type("java.lang.String[]"))))
                .setBottom(new ImageTextureObject().setDEF("bottomShader").setUrl(Java.to(["images/all_probes/beach_cross/beach_bottom.png","http://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"], Java.type("java.lang.String[]"))))
                .setFront(new ImageTextureObject().setDEF("frontShader").setUrl(Java.to(["images/all_probes/beach_cross/beach_front.png","http://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"], Java.type("java.lang.String[]"))))
                .setLeft(new ImageTextureObject().setDEF("leftShader").setUrl(Java.to(["images/all_probes/beach_cross/beach_left.png","http://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"], Java.type("java.lang.String[]"))))
                .setRight(new ImageTextureObject().setDEF("rightShader").setUrl(Java.to(["images/all_probes/beach_cross/beach_right.png","http://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"], Java.type("java.lang.String[]"))))
                .setTop(new ImageTextureObject().setDEF("topShader").setUrl(Java.to(["images/all_probes/beach_cross/beach_top.png","http://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShaderObject().setDEF("cobweb").setLanguage("GLSL")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("set_cube").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_bias").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_scale").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_power").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("2"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("10"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("1"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(Java.to(["cobweb_flowers_input.vs","http://coderextreme.net/X3DJSONLD/cobweb_flowers_input.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(Java.to(["pc_input_flowers.fs","http://coderextreme.net/X3DJSONLD/pc_input_flowers.fs"], Java.type("java.lang.String[]"))))))
            .setGeometry(new SphereObject().setSolid(false).setRadius(20))))
        .addChild(new ScriptObject().setDEF("UrlSelector").setDirectOutput(true)
          .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("frontUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"images/all_probes/beach_cross/beach_front.png\" \"images/all_probes/building_cross/building_front.png\" \"images/all_probes/campus_cross/campus_front.png\" \"images/all_probes/galileo_cross/galileo_front.png\" \"images/all_probes/grace_cross/grace_front.png\" \"images/all_probes/kitchen_cross/kitchen_front.png\" \"images/all_probes/rnl_cross/rnl_front.png\" \"images/all_probes/stpeters_cross/stpeters_front.png\" \"images/all_probes/uffizi_cross/uffizi_front.png\""))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("backUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"images/all_probes/beach_cross/beach_back.png\" \"images/all_probes/building_cross/building_back.png\" \"images/all_probes/campus_cross/campus_back.png\" \"images/all_probes/galileo_cross/galileo_back.png\" \"images/all_probes/grace_cross/grace_back.png\" \"images/all_probes/kitchen_cross/kitchen_back.png\" \"images/all_probes/rnl_cross/rnl_back.png\" \"images/all_probes/stpeters_cross/stpeters_back.png\" \"images/all_probes/uffizi_cross/uffizi_back.png\""))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("leftUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"images/all_probes/beach_cross/beach_left.png\" \"images/all_probes/building_cross/building_left.png\" \"images/all_probes/campus_cross/campus_left.png\" \"images/all_probes/galileo_cross/galileo_left.png\" \"images/all_probes/grace_cross/grace_left.png\" \"images/all_probes/kitchen_cross/kitchen_left.png\" \"images/all_probes/rnl_cross/rnl_left.png\" \"images/all_probes/stpeters_cross/stpeters_left.png\" \"images/all_probes/uffizi_cross/uffizi_left.png\""))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("rightUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"images/all_probes/beach_cross/beach_right.png\" \"images/all_probes/building_cross/building_right.png\" \"images/all_probes/campus_cross/campus_right.png\" \"images/all_probes/galileo_cross/galileo_right.png\" \"images/all_probes/grace_cross/grace_right.png\" \"images/all_probes/kitchen_cross/kitchen_right.png\" \"images/all_probes/rnl_cross/rnl_right.png\" \"images/all_probes/stpeters_cross/stpeters_right.png\" \"images/all_probes/uffizi_cross/uffizi_right.png\""))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("topUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"images/all_probes/beach_cross/beach_top.png\" \"images/all_probes/building_cross/building_top.png\" \"images/all_probes/campus_cross/campus_top.png\" \"images/all_probes/galileo_cross/galileo_top.png\" \"images/all_probes/grace_cross/grace_top.png\" \"images/all_probes/kitchen_cross/kitchen_top.png\" \"images/all_probes/rnl_cross/rnl_top.png\" \"images/all_probes/stpeters_cross/stpeters_top.png\" \"images/all_probes/uffizi_cross/uffizi_top.png\""))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("bottomUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"images/all_probes/beach_cross/beach_bottom.png\" \"images/all_probes/building_cross/building_bottom.png\" \"images/all_probes/campus_cross/campus_bottom.png\" \"images/all_probes/galileo_cross/galileo_bottom.png\" \"images/all_probes/grace_cross/grace_bottom.png\" \"images/all_probes/kitchen_cross/kitchen_bottom.png\" \"images/all_probes/rnl_cross/rnl_bottom.png\" \"images/all_probes/stpeters_cross/stpeters_bottom.png\" \"images/all_probes/uffizi_cross/uffizi_bottom.png\""))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("front_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("back_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("left_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("right_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("top_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("bottom_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("-1"))
          .setSourceCode("ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"            var side = Math.floor(f*frontUrls.length);\n"+
"            if (side > frontUrls.length-1) {\n"+
"                side = 0;\n"+
"            }\n"+
"            if (side != old) {\n"+
"                    old = side;\n"+
"                    front_changed[0] = frontUrls[side];\n"+
"                    back_changed[0] = backUrls[side];\n"+
"                    left_changed[0] = leftUrls[side];\n"+
"                    right_changed[0] = rightUrls[side];\n"+
"                    top_changed[0] = topUrls[side];\n"+
"                    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }\n"+
""))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(45).setLoop(true))
        .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("UrlSelector").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("background").setToField("frontUrl"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("background").setToField("backUrl"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("background").setToField("leftUrl"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("background").setToField("rightUrl"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("background").setToField("topUrl"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("background").setToField("bottomUrl"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontShader").setToField("url"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backShader").setToField("url"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftShader").setToField("url"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightShader").setToField("url"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topShader").setToField("url"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomShader").setToField("url"))
        .addChild(new ScriptObject().setDEF("Animate").setDirectOutput(true)
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("10"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("1"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("20"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("20"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("0"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("0"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("10"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("1"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0"))
          .setSourceCode("ecmascript:\n"+
"\n"+
"function set_a(value) {\n"+
"	a = value;\n"+
"}\n"+
"\n"+
"function set_b(value) {\n"+
"	b = value;\n"+
"}\n"+
"\n"+
"function set_c(value) {\n"+
"	c = value;\n"+
"}\n"+
"\n"+
"function set_d(value) {\n"+
"	d = value;\n"+
"}\n"+
"\n"+
"function set_tdelta(value) {\n"+
"	tdelta = value;\n"+
"}\n"+
"\n"+
"function set_tdelta(value) {\n"+
"	tdelta = value;\n"+
"}\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	if (choice == 0) {\n"+
"		set_a(a + Math.floor(Math.random() * 2) * 2 - 1);\n"+
"	} else if (choice == 1) {\n"+
"		set_b(b + Math.floor(Math.random() * 2) * 2 - 1);\n"+
"	} else if (choice == 2) {\n"+
"		set_c(c + Math.floor(Math.random() * 2) * 2 - 1);\n"+
"	} else if (choice == 3) {\n"+
"		set_d(d + Math.floor(Math.random() * 2) * 2 - 1);\n"+
"	}\n"+
"	set_tdelta(tdelta + 0.5);\n"+
"	set_pdelta(pdelta + 0.5);\n"+
"	if (a < 1) {\n"+
"		set_a(10);\n"+
"	}\n"+
"	if (b < 1) {\n"+
"		set_b(10);\n"+
"	}\n"+
"	if (c < 1) {\n"+
"		set_c(4);\n"+
"	}\n"+
"	if (c > 20) {\n"+
"		set_c(4);\n"+
"	}\n"+
"	if (d < 1) {\n"+
"		set_d(4);\n"+
"	}\n"+
"	if (d > 20) {\n"+
"		set_d(4);\n"+
"	}\n"+
"	// console.log(a, b, c, d, tdelta, pdelta);\n"+
"}\n"+
""))
        .addChild(new ROUTEObject().setFromNode("Animate").setFromField("a_changed").setToNode("cobweb").setToField("set_a"))
        .addChild(new ROUTEObject().setFromNode("Animate").setFromField("b_changed").setToNode("cobweb").setToField("set_b"))
        .addChild(new ROUTEObject().setFromNode("Animate").setFromField("c_changed").setToNode("cobweb").setToField("set_c"))
        .addChild(new ROUTEObject().setFromNode("Animate").setFromField("d_changed").setToNode("cobweb").setToField("set_d"))
        .addChild(new ROUTEObject().setFromNode("Animate").setFromField("pdelta_changed").setToNode("cobweb").setToField("set_pdelta"))
        .addChild(new ROUTEObject().setFromNode("Animate").setFromField("tdelta_changed").setToNode("cobweb").setToField("set_tdelta")))      ;
    X3D0.toFileX3D("../new/json/flowers7.new.x3d");
