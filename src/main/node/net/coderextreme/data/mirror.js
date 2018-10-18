var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addComponentSync(new autoclass.component().setNameSync("EnvironmentalEffects").setLevelSync(3))
        .addComponentSync(new autoclass.component().setNameSync("Shaders").setLevelSync(1))
        .addComponentSync(new autoclass.component().setNameSync("CubeMapTexturing").setLevelSync(1))
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("mirror.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manual"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/mirror.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("sphere with alternating backgrounds")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Viewpoint().setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(5), java.newFloat(100)])).setDescriptionSync("Switch background and images texture"))
        .addChildSync(new autoclass.TextureBackground()
          .setLeftTextureSync(new autoclass.ImageTexture().setDEFSync("leftBack").setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"])))
          .setRightTextureSync(new autoclass.ImageTexture().setDEFSync("rightBack").setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"])))
          .setFrontTextureSync(new autoclass.ImageTexture().setDEFSync("frontBack").setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"])))
          .setBackTextureSync(new autoclass.ImageTexture().setDEFSync("backBack").setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"])))
          .setTopTextureSync(new autoclass.ImageTexture().setDEFSync("topBack").setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"])))
          .setBottomTextureSync(new autoclass.ImageTexture().setDEFSync("bottomBack").setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"]))))
        .addChildSync(new autoclass.Transform()
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColorSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
              .setTextureSync(new autoclass.ComposedCubeMapTexture()
                .setBackSync(new autoclass.ImageTexture().setDEFSync("backShader").setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"])))
                .setBottomSync(new autoclass.ImageTexture().setDEFSync("bottomShader").setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"])))
                .setFrontSync(new autoclass.ImageTexture().setDEFSync("frontShader").setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"])))
                .setLeftSync(new autoclass.ImageTexture().setDEFSync("leftShader").setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"])))
                .setRightSync(new autoclass.ImageTexture().setDEFSync("rightShader").setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"])))
                .setTopSync(new autoclass.ImageTexture().setDEFSync("topShader").setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"]))))
              .addShadersSync(new autoclass.ComposedShader().setDEFSync("x3dom").setLanguageSync("GLSL")
                .addCommentsSync(new autoclass.CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("chromaticDispertion").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.98 1 1.033"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFINT32).setNameSync("cube").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("bias").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("scale").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("power").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("2"))
                .addPartsSync(new autoclass.ShaderPart().setTypeSync("VERTEX").setUrlSync(java.newArray("java.lang.String", ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])))
                .addPartsSync(new autoclass.ShaderPart().setTypeSync("FRAGMENT").setUrlSync(java.newArray("java.lang.String", ["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]))))
              .addShadersSync(new autoclass.ComposedShader().setDEFSync("x_ite").setLanguageSync("GLSL")
                .addCommentsSync(new autoclass.CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("chromaticDispertion").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.98 1 1.033"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFINT32).setNameSync("cube").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("bias").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("scale").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("power").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("2"))
                .addPartsSync(new autoclass.ShaderPart().setTypeSync("VERTEX").setUrlSync(java.newArray("java.lang.String", ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x_ite.vs"])))
                .addPartsSync(new autoclass.ShaderPart().setTypeSync("FRAGMENT").setUrlSync(java.newArray("java.lang.String", ["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/mix.fs"])))))
            .setGeometrySync(new autoclass.Sphere().setRadiusSync(java.newFloat(30))))
          .addChildSync(new autoclass.Script().setDEFSync("UrlSelector").setDirectOutputSync(true)
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("frontUrls").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("backUrls").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("leftUrls").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("rightUrls").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("topUrls").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("bottomUrls").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("front_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("back_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("left_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("right_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("top_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("bottom_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("set_fraction").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFINT32).setNameSync("old").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("-1"))
            .setSourceCodeSync("ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }"))
          .addChildSync(new autoclass.TimeSensor().setDEFSync("Clock").setCycleIntervalSync(45).setLoopSync(true))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("Clock").setFromFieldSync("fraction_changed").setToNodeSync("UrlSelector").setToFieldSync("set_fraction"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("UrlSelector").setFromFieldSync("front_changed").setToNodeSync("frontBack").setToFieldSync("url"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("UrlSelector").setFromFieldSync("back_changed").setToNodeSync("backBack").setToFieldSync("url"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("UrlSelector").setFromFieldSync("left_changed").setToNodeSync("leftBack").setToFieldSync("url"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("UrlSelector").setFromFieldSync("right_changed").setToNodeSync("rightBack").setToFieldSync("url"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("UrlSelector").setFromFieldSync("top_changed").setToNodeSync("topBack").setToFieldSync("url"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("UrlSelector").setFromFieldSync("bottom_changed").setToNodeSync("bottomBack").setToFieldSync("url"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("UrlSelector").setFromFieldSync("front_changed").setToNodeSync("frontShader").setToFieldSync("url"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("UrlSelector").setFromFieldSync("back_changed").setToNodeSync("backShader").setToFieldSync("url"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("UrlSelector").setFromFieldSync("left_changed").setToNodeSync("leftShader").setToFieldSync("url"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("UrlSelector").setFromFieldSync("right_changed").setToNodeSync("rightShader").setToFieldSync("url"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("UrlSelector").setFromFieldSync("top_changed").setToNodeSync("topShader").setToFieldSync("url"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("UrlSelector").setFromFieldSync("bottom_changed").setToNodeSync("bottomShader").setToFieldSync("url"))))      ;
    X3D0.toFileX3D("../data/mirror.new.x3d");
