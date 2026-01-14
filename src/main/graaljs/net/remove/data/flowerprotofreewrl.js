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
var ProtoInstance0 = null;
      var X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Shape").setLevel(4))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1))
        .addMeta(new meta().setName("title").setContent("flowerproto.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("description").setContent("A flower proto with configurable shaders"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Viewpoint().setDescription("Tour Views").setPosition(Java.to(doubleToFloat([0,0,50]), Java.type("float[]"))))
        .addChild(new Background().setBackUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))))
        .addChild(new ProtoDeclare().setName("FlowerProto")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_MFSTRING).setName("vertex").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\""))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("fragment").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("transform")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.7,0.7,0.7]), Java.type("float[]"))).setSpecularColor(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]"))))
                  .setTexture(new ComposedCubeMapTexture().setDEF("texture")
                    .setBackTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))))
                    .setBottomTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))))
                    .setFrontTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))))
                    .setLeftTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))))
                    .setRightTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))))
                    .setTopTexture(new ImageTexture().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]")))))
                  .addShaders(new ComposedShader().setDEF("shader").setLanguage("GLSL")
                    .addField(new field().setType(field.TYPE_SFINT32).setName("fw_textureCoordGenType").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new field().setType(field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("bias").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("power").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("a").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("b").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("c").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("20"))
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("d").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("20"))
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new field().setType(field.TYPE_SFFLOAT).setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addComments(new CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>"))
                    .addParts(new ShaderPart().setType("VERTEX")
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("url").setProtoField("vertex"))))
                    .addParts(new ShaderPart().setType("FRAGMENT")
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("url").setProtoField("fragment"))))))
                .setGeometry(new Sphere().setRadius(5)))
              .addChild(new Script().setDEF("Animate").setDirectOutput(true)
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("velocity").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("a").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("b").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("c").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("d").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .setSourceCode(`ecmascript:
			function initialize() {
			    translation = new SFVec3f(0, 0, 0);
			    velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			function set_fraction() {
			    translation = new SFVec3f(
			    	translation.x + velocity.x,
				translation.y + velocity.y,
				translation.z + velocity.z);
			    for (var j = 0; j <= 2; j++) {
				    if (Math.abs(translation.x) > 10) {
					initialize();
				    } else if (Math.abs(translation.y) > 10) {
					initialize();
				    } else if (Math.abs(translation.z) > 10) {
					initialize();
				    } else {
					velocity.x += Math.random() * 0.2 - 0.1;
					velocity.y += Math.random() * 0.2 - 0.1;
					velocity.z += Math.random() * 0.2 - 0.1;
				    }
			    }
			    animate_flowers();
			}

			function animate_flowers(fraction, eventTime) {
				var choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					a += Math.random() * 0.2 - 0.1;
					break;
				case 1:
					b += Math.random() * 0.2 - 0.1;
					break;
				case 2:
					c += Math.random() * 2 - 1;
					break;
				case 3:
					d += Math.random() * 2 - 1;
					break;
				}
				tdelta += 0.5;
				pdelta += 0.5;
				if (a > 1) {
					a =  0.5;
				}
				if (b > 1) {
					b =  0.5;
				}
				if (c < 1) {
					c =  4;
				}
				if (d < 1) {
					d =  4;
				}
				if (c > 10) {
					c = 4;
				}
				if (d > 10) {
					d = 4;
				}
			}`))
              .addChild(new TimeSensor().setDEF("TourTime").setCycleInterval(5).setLoop(true))
              .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("a").setToNode("shader").setToField("a"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("b").setToNode("shader").setToField("b"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("c").setToNode("shader").setToField("c"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("d").setToNode("shader").setToField("d"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("shader").setToField("tdelta"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta").setToNode("shader").setToField("pdelta")))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("FlowerProto")))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("vertex").setValue("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\""));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("fragment").setValue("\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\""));
    X3D0.toFileX3D("../data/flowerprotofreewrl.new.graal.x3d");
    X3D0.toFileJSON("../data/flowerprotofreewrl.new.graal.x3dj");
