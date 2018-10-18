var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addComponentSync(new autoclass.component().setNameSync("Shaders").setLevelSync(1))
        .addComponentSync(new autoclass.component().setNameSync("CubeMapTexturing").setLevelSync(1))
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("flowerproto.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("A flower proto with configurable shaders"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/flowerproto.x3d")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("FlowerProto")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("vertex").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("\"../shaders/gl_flowers_chromatic.vs\""))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("fragment").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("\"../shaders/pc_flowers.fs\"")))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Transform().setDEFSync("transform")
              .addChildSync(new autoclass.Shape()
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColorSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
                  .setTextureSync(new autoclass.ComposedCubeMapTexture().setDEFSync("texture")
                    .setBackSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])))
                    .setBottomSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])))
                    .setFrontSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])))
                    .setLeftSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])))
                    .setRightSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])))
                    .setTopSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]))))
                  .addShadersSync(new autoclass.ComposedShader().setDEFSync("shader").setLanguageSync("GLSL")
                    .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFINT32).setNameSync("cube").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0"))
                    .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("chromaticDispertion").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("0.98 1 1.033"))
                    .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("bias").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                    .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("scale").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                    .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("power").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("2"))
                    .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("a").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("10"))
                    .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("b").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("1"))
                    .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("c").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("20"))
                    .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("d").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("20"))
                    .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("tdelta").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0"))
                    .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("pdelta").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0"))
                    .addCommentsSync(new autoclass.CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>"))
                    .addPartsSync(new autoclass.ShaderPart().setTypeSync("VERTEX")
                      .setISSync(new autoclass.IS()
                        .addConnectSync(new autoclass.connect().setNodeFieldSync("url").setProtoFieldSync("vertex"))))
                    .addPartsSync(new autoclass.ShaderPart().setTypeSync("FRAGMENT")
                      .setISSync(new autoclass.IS()
                        .addConnectSync(new autoclass.connect().setNodeFieldSync("url").setProtoFieldSync("fragment"))))))
                .setGeometrySync(new autoclass.Sphere()))
              .addChildSync(new autoclass.Script().setDEFSync("Animate")
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("translation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("velocity").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("set_fraction").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("a").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("b").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("c").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("3"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("d").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("3"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("tdelta").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("pdelta").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                .setSourceCodeSync("ecmascript:\n"+
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
              .addChildSync(new autoclass.TimeSensor().setDEFSync("TourTime").setCycleIntervalSync(5).setLoopSync(true))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("TourTime").setFromFieldSync("fraction_changed").setToNodeSync("Animate").setToFieldSync("set_fraction"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("Animate").setFromFieldSync("translation_changed").setToNodeSync("transform").setToFieldSync("set_translation"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("Animate").setFromFieldSync("a").setToNodeSync("shader").setToFieldSync("a"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("Animate").setFromFieldSync("b").setToNodeSync("shader").setToFieldSync("b"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("Animate").setFromFieldSync("c").setToNodeSync("shader").setToFieldSync("c"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("Animate").setFromFieldSync("d").setToNodeSync("shader").setToFieldSync("d"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("Animate").setFromFieldSync("tdelta").setToNodeSync("shader").setToFieldSync("tdelta"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("Animate").setFromFieldSync("pdelta").setToNodeSync("shader").setToFieldSync("pdelta"))))))      ;
    X3D0.toFileX3D("../data/flowerproto.new.x3d");
