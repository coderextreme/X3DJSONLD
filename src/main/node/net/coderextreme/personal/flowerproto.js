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
        .addComponent((new autoclass.component()).setName("Scripting").setLevel(1))
        .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(3))
        .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
        .addComponent((new autoclass.component()).setName("CubeMapTexturing").setLevel(1))
        .addComponent((new autoclass.component()).setName("Texturing").setLevel(1))
        .addComponent((new autoclass.component()).setName("Rendering").setLevel(1))
        .addComponent((new autoclass.component()).setName("Shape").setLevel(4))
        .addComponent((new autoclass.component()).setName("Grouping").setLevel(3))
        .addComponent((new autoclass.component()).setName("Core").setLevel(1))
        .addMeta((new autoclass.meta()).setName("title").setContent("flowerproto.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("description").setContent("A flower proto with configurable shaders"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ProtoDeclare()).setName("FlowerProto")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setName("vertex").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("\"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\""))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setName("fragment").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("\"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\"")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform()).setDEF("transform")
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
                  .setTexture((new autoclass.ComposedCubeMapTexture()).setDEF("texture")
                    .setBackTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])))
                    .setBottomTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])))
                    .setFrontTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])))
                    .setLeftTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])))
                    .setRightTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])))
                    .setTopTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]))))
                  .addShaders((new autoclass.ComposedShader()).setDEF("shader").setLanguage("GLSL")
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setName("cube").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("bias").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("power").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("a").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("b").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("c").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("20"))
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("d").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("20"))
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("tdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("pdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addComments((new autoclass.CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>")))
                    .addParts((new autoclass.ShaderPart()).setType("VERTEX")
                      .setIS((new autoclass.IS())
                        .addConnect((new autoclass.connect()).setNodeField("url").setProtoField("vertex"))))
                    .addParts((new autoclass.ShaderPart()).setType("FRAGMENT")
                      .setIS((new autoclass.IS())
                        .addConnect((new autoclass.connect()).setNodeField("url").setProtoField("fragment"))))))
                .setGeometry((new autoclass.Sphere())))
              .addChild((new autoclass.Script()).setDEF("Animate")
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("velocity").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("a").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("b").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("c").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("d").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("tdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("pdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .setSourceCode("ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}"))
              .addChild((new autoclass.TimeSensor()).setDEF("TourTime").setCycleInterval(5).setLoop(true))
              .addChild((new autoclass.ROUTE()).setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
              .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
              .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("a").setToNode("shader").setToField("a"))
              .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("b").setToNode("shader").setToField("b"))
              .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("c").setToNode("shader").setToField("c"))
              .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("d").setToNode("shader").setToField("d"))
              .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("tdelta").setToNode("shader").setToField("tdelta"))
              .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("pdelta").setToNode("shader").setToField("pdelta"))))))      ;
    X3D0.toFileX3D("../personal/flowerproto.new.node.x3d");
    X3D0.toFileJSON("../personal/flowerproto.new.node.json");
    process.exit(0);
