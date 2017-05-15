load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("mirro2.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/mirro2.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a mirrored sphere"))
        .addMeta(new metaObject().setName("translated").setContent("14 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"))
        .addMeta(new metaObject().setName("translated").setContent("15 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setPosition(Java.to([0,5,100], Java.type("float[]"))).setDescription("Switch background and cubemap texture"))
        .addChild(new BackgroundObject().setDEF("cube").setLeftUrl(Java.to(["cubemap/all_probes/beach_cross/beach_left.png","http://coderextreme.net/cubemap/all_probes/beach_cross/beach_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["cubemap/all_probes/beach_cross/beach_right.png","http://coderextreme.net/cubemap/all_probes/beach_cross/beach_right.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["cubemap/all_probes/beach_cross/beach_front.png","http://coderextreme.net/cubemap/all_probes/beach_cross/beach_front.png"], Java.type("java.lang.String[]"))).setBackUrl(Java.to(["cubemap/all_probes/beach_cross/beach_back.png","http://coderextreme.net/cubemap/all_probes/beach_cross/beach_back.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["cubemap/all_probes/beach_cross/beach_top.png","http://coderextreme.net/cubemap/all_probes/beach_cross/beach_top.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["cubemap/all_probes/beach_cross/beach_bottom.png","http://coderextreme.net/cubemap/all_probes/beach_cross/beach_bottom.png"], Java.type("java.lang.String[]"))))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,0.7,0.7], Java.type("float[]"))).setSpecularColor(Java.to([0.5,0.5,0.5], Java.type("float[]"))))
              .setTexture(new ComposedCubeMapTextureObject()
                .setBack(new ImageTextureObject().setDEF("backShader").setUrl(Java.to(["cubemap/all_probes/beach_cross/beach_back.png","http://coderextreme.net/cubemap/all_probes/beach_cross/beach_back.png"], Java.type("java.lang.String[]"))))
                .setBottom(new ImageTextureObject().setDEF("bottomShader").setUrl(Java.to(["cubemap/all_probes/beach_cross/beach_bottom.png","http://coderextreme.net/cubemap/all_probes/beach_cross/beach_bottom.png"], Java.type("java.lang.String[]"))))
                .setFront(new ImageTextureObject().setDEF("frontShader").setUrl(Java.to(["cubemap/all_probes/beach_cross/beach_front.png","http://coderextreme.net/cubemap/all_probes/beach_cross/beach_front.png"], Java.type("java.lang.String[]"))))
                .setLeft(new ImageTextureObject().setDEF("leftShader").setUrl(Java.to(["cubemap/all_probes/beach_cross/beach_left.png","http://coderextreme.net/cubemap/all_probes/beach_cross/beach_left.png"], Java.type("java.lang.String[]"))))
                .setRight(new ImageTextureObject().setDEF("rightShader").setUrl(Java.to(["cubemap/all_probes/beach_cross/beach_right.png","http://coderextreme.net/cubemap/all_probes/beach_cross/beach_right.png"], Java.type("java.lang.String[]"))))
                .setTop(new ImageTextureObject().setDEF("topShader").setUrl(Java.to(["cubemap/all_probes/beach_cross/beach_top.png","http://coderextreme.net/cubemap/all_probes/beach_cross/beach_top.png"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShaderObject().setDEF("cobweb").setLanguage("GLSL")
                .addComments(new CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(Java.to(["cobweb.vs","http://coderextreme.net/X3DJSONLD/cobweb.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(Java.to(["mix.fs","http://coderextreme.net/X3DJSONLD/mix.fs"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShaderObject().setDEF("x3dom").setLanguage("GLSL")
                .addComments(new CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(Java.to(["x3dom.vs","http://coderextreme.net/X3DJSONLD/x3dom.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(Java.to(["mix.fs","http://coderextreme.net/X3DJSONLD/mix.fs"], Java.type("java.lang.String[]"))))))
            .setGeometry(new SphereObject().setRadius(30)))
          .addChild(new ScriptObject().setDEF("UrlSelector").setDirectOutput(true)
            .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("frontUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_front.png\" \"cubemap/all_probes/building_cross/building_front.png\" \"cubemap/all_probes/campus_cross/campus_front.png\" \"cubemap/all_probes/galileo_cross/galileo_front.png\" \"cubemap/all_probes/grace_cross/grace_front.png\" \"cubemap/all_probes/kitchen_cross/kitchen_front.png\" \"cubemap/all_probes/rnl_cross/rnl_front.png\" \"cubemap/all_probes/stpeters_cross/stpeters_front.png\" \"cubemap/all_probes/uffizi_cross/uffizi_front.png\""))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("backUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_back.png\" \"cubemap/all_probes/building_cross/building_back.png\" \"cubemap/all_probes/campus_cross/campus_back.png\" \"cubemap/all_probes/galileo_cross/galileo_back.png\" \"cubemap/all_probes/grace_cross/grace_back.png\" \"cubemap/all_probes/kitchen_cross/kitchen_back.png\" \"cubemap/all_probes/rnl_cross/rnl_back.png\" \"cubemap/all_probes/stpeters_cross/stpeters_back.png\" \"cubemap/all_probes/uffizi_cross/uffizi_back.png\""))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("leftUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_left.png\" \"cubemap/all_probes/building_cross/building_left.png\" \"cubemap/all_probes/campus_cross/campus_left.png\" \"cubemap/all_probes/galileo_cross/galileo_left.png\" \"cubemap/all_probes/grace_cross/grace_left.png\" \"cubemap/all_probes/kitchen_cross/kitchen_left.png\" \"cubemap/all_probes/rnl_cross/rnl_left.png\" \"cubemap/all_probes/stpeters_cross/stpeters_left.png\" \"cubemap/all_probes/uffizi_cross/uffizi_left.png\""))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("rightUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_right.png\" \"cubemap/all_probes/building_cross/building_right.png\" \"cubemap/all_probes/campus_cross/campus_right.png\" \"cubemap/all_probes/galileo_cross/galileo_right.png\" \"cubemap/all_probes/grace_cross/grace_right.png\" \"cubemap/all_probes/kitchen_cross/kitchen_right.png\" \"cubemap/all_probes/rnl_cross/rnl_right.png\" \"cubemap/all_probes/stpeters_cross/stpeters_right.png\" \"cubemap/all_probes/uffizi_cross/uffizi_right.png\""))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("topUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_top.png\" \"cubemap/all_probes/building_cross/building_top.png\" \"cubemap/all_probes/campus_cross/campus_top.png\" \"cubemap/all_probes/galileo_cross/galileo_top.png\" \"cubemap/all_probes/grace_cross/grace_top.png\" \"cubemap/all_probes/kitchen_cross/kitchen_top.png\" \"cubemap/all_probes/rnl_cross/rnl_top.png\" \"cubemap/all_probes/stpeters_cross/stpeters_top.png\" \"cubemap/all_probes/uffizi_cross/uffizi_top.png\""))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("bottomUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_bottom.png\" \"cubemap/all_probes/building_cross/building_bottom.png\" \"cubemap/all_probes/campus_cross/campus_bottom.png\" \"cubemap/all_probes/galileo_cross/galileo_bottom.png\" \"cubemap/all_probes/grace_cross/grace_bottom.png\" \"cubemap/all_probes/kitchen_cross/kitchen_bottom.png\" \"cubemap/all_probes/rnl_cross/rnl_bottom.png\" \"cubemap/all_probes/stpeters_cross/stpeters_bottom.png\" \"cubemap/all_probes/uffizi_cross/uffizi_bottom.png\""))
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
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    // Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }\n"+
""))
          .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(45).setLoop(true))
          .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("UrlSelector").setToField("set_fraction"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("cube").setToField("frontUrl"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("cube").setToField("backUrl"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("cube").setToField("leftUrl"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("cube").setToField("rightUrl"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("cube").setToField("topUrl"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("cube").setToField("bottomUrl"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontShader").setToField("url"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backShader").setToField("url"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftShader").setToField("url"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightShader").setToField("url"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topShader").setToField("url"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomShader").setToField("url"))))      ;
    X3D0.toFileX3D("mirror2.new.x3d");
