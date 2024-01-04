var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("flowers7.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy"))
        .addComponent((new autoclass.component()).setName("Scripting").setLevel(1))
        .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(3))
        .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
        .addComponent((new autoclass.component()).setName("CubeMapTexturing").setLevel(1))
        .addComponent((new autoclass.component()).setName("Texturing").setLevel(1))
        .addComponent((new autoclass.component()).setName("Rendering").setLevel(1))
        .addComponent((new autoclass.component()).setName("Shape").setLevel(4))
        .addComponent((new autoclass.component()).setName("Grouping").setLevel(3))
        .addComponent((new autoclass.component()).setName("Core").setLevel(1)))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()))
        .addChild((new autoclass.Background()).setDEF("background").setFrontUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])).setBackUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])).setLeftUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])).setRightUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])).setTopUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])).setBottomUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])))
        .addChild((new autoclass.Viewpoint()).setDescription("Transparent rose").setPosition(java.newArray("float", [java.newFloat(0f), java.newFloat(0f), java.newFloat(40f)])))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.7f), java.newFloat(0.7f), java.newFloat(0.7f)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5f), java.newFloat(0.5f), java.newFloat(0.5f)])))
              .setTexture((new autoclass.ComposedCubeMapTexture()).setDEF("texture"))
              .addShaders((new autoclass.ComposedShader()).setDEF("x3dom").setLanguage("GLSL")
                .addParts((new autoclass.ShaderPart()).setUrl(java.newArray("java.lang.String", ["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"])))
                .addParts((new autoclass.ShaderPart()).setType("FRAGMENT").setUrl(java.newArray("java.lang.String", ["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("cube"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("chromaticDispertion").setValue("0.98 1 1.033"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("bias").setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("scale").setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("power").setValue("2"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("a").setValue("10"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("b").setValue("1"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("c").setValue("20"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("d").setValue("20"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("tdelta"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("pdelta")))
              .addShaders((new autoclass.ComposedShader()).setDEF("x_ite").setLanguage("GLSL")
                .addParts((new autoclass.ShaderPart()).setUrl(java.newArray("java.lang.String", ["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])))
                .addParts((new autoclass.ShaderPart()).setType("FRAGMENT").setUrl(java.newArray("java.lang.String", ["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("cube")
                  .addChild((new autoclass.ComposedCubeMapTexture()).setUSE("texture")))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("chromaticDispertion").setValue("0.98 1 1.033"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("bias"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("scale"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("power"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("a"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("b"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("c"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("d"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("tdelta"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("pdelta"))))
            .setGeometry((new autoclass.Sphere()))))
        .addChild((new autoclass.Script()).setDEF("UrlSelector").setDirectOutput(true)
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("frontUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("backUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("leftUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("rightUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("topUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("bottomUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("front"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("back"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("left"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("right"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("top"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("bottom"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("old").setValue("-1"))
          .setSourceCode("ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"            var side = Math.floor(f*frontUrls.length);\n"+
"            if (side > frontUrls.length-1) {\n"+
"                side = 0;\n"+
"            }\n"+
"            if (side != old) {\n"+
"                    old = side;\n"+
"                    front[0] = frontUrls[side];\n"+
"                    back[0] = backUrls[side];\n"+
"                    left[0] = leftUrls[side];\n"+
"                    right[0] = rightUrls[side];\n"+
"                    top[0] = topUrls[side];\n"+
"                    bottom[0] = bottomUrls[side];\n"+
"            }\n"+
"        }"))
        .addChild((new autoclass.Script()).setDEF("Animate").setDirectOutput(true)
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("a").setValue("10"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("b").setValue("1"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("c").setValue("20"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("d").setValue("20"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("tdelta"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("pdelta"))
          .setSourceCode("ecmascript:\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		a = a + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		b = b + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		c = c + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		d = d + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	tdelta = tdelta + 0.5;\n"+
"	pdelta = pdelta + 0.5;\n"+
"	if (a < 1) {\n"+
"		a = 10;\n"+
"	}\n"+
"	if (b < 1) {\n"+
"		b = 10;\n"+
"	}\n"+
"	if (c < 1) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (c > 20) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (d < 1) {\n"+
"		d = 4;\n"+
"	}\n"+
"	if (d > 20) {\n"+
"		d = 4;\n"+
"	}\n"+
"}"))
        .addChild((new autoclass.TimeSensor()).setDEF("TourTime").setCycleInterval(5).setLoop(true))
        .addChild((new autoclass.ROUTE()).setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("a").setToNode("x_ite").setToField("a"))
        .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("b").setToNode("x_ite").setToField("b"))
        .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("c").setToNode("x_ite").setToField("c"))
        .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("d").setToNode("x_ite").setToField("d"))
        .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("pdelta").setToNode("x_ite").setToField("pdelta"))
        .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("tdelta").setToNode("x_ite").setToField("tdelta"))
        .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("a").setToNode("x3dom").setToField("a"))
        .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("b").setToNode("x3dom").setToField("b"))
        .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("c").setToNode("x3dom").setToField("c"))
        .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("d").setToNode("x3dom").setToField("d"))
        .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("pdelta").setToNode("x3dom").setToField("pdelta"))
        .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("tdelta").setToNode("x3dom").setToField("tdelta")))      ;
    X3D0.toFileX3D("../data/flowers7.new.node.x3d");
    process.exit(0);
