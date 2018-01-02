load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Shaders").setLevel(1))
        .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("flowerproto.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("description").setContent("A flower proto with configurable shaders"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowerproto.x3d")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setName("FlowerProto")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("vertex").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("\"../shaders/gl_flowers_chromatic.vs\""))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("fragment").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("\"../shaders/pc_flowers.fs\"")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("transform")
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,0.7,0.7], Java.type("float[]"))))
                  .setTexture(new ComposedCubeMapTextureObject().setDEF("texture")
                    .setBack(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
                    .setBottom(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
                    .setFront(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
                    .setLeft(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
                    .setRight(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
                    .setTop(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))))
                  .addShaders(new ComposedShaderObject().setDEF("shader").setLanguage("GLSL")
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addComments(new CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>"))
                    .addParts(new ShaderPartObject().setType("VERTEX")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("url").setProtoField("vertex"))))
                    .addParts(new ShaderPartObject().setType("FRAGMENT")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("url").setProtoField("fragment"))))))
                .setGeometry(new SphereObject()))
              .addChild(new ScriptObject().setDEF("Bounce")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
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
"				choice = Math.floor(Math.random() * 4);\n"+
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
"			}\n"+
""))
              .addChild(new TimeSensorObject().setDEF("TourTime").setCycleInterval(0.15).setLoop(true))
              .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction"))
              .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
              .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("a").setToNode("shader").setToField("a"))
              .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("b").setToNode("shader").setToField("b"))
              .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("c").setToNode("shader").setToField("c"))
              .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("d").setToNode("shader").setToField("d"))
              .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("tdelta").setToNode("shader").setToField("tdelta"))
              .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("pdelta").setToNode("shader").setToField("pdelta"))))))      ;
    X3D0.toFileX3D("../data/flowerproto.new.x3d");
