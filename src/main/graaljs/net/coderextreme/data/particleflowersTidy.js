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
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("ParticleSystems").setLevel(3))
        .addMeta(new meta().setName("title").setContent("particleflowers.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("description").setContent("A flower particle system"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"))
        .addMeta(new meta().setName("generator").setContent("Vim")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("particleflowers.x3d"))
        .addChild(new NavigationInfo().setType(Java.to(["ANY","EXAMINE","FLY","LOOKAT"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDescription("Tour Views").setPosition(Java.to(doubleToFloat([0,0,12]), Java.type("float[]"))))
        .addChild(new Background().setFrontUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))).setBackUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))))
        .addChild(new Group()
          .addChild(new ParticleSystem().setGeometryType("GEOMETRY").setMaxParticles(20)
            .setEmitter(new ExplosionEmitter().setSpeed(2).setVariation(0.75))
            .addPhysics(new BoundedPhysicsModel()
              .setGeometry(new Sphere().setRadius(100)))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.7,0.7,0.7]), Java.type("float[]"))).setSpecularColor(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]"))))
              .setTexture(new ComposedCubeMapTexture().setDEF("texture")
                .setFrontTexture(new ImageTexture().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))))
                .setBackTexture(new ImageTexture().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))))
                .setLeftTexture(new ImageTexture().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))))
                .setRightTexture(new ImageTexture().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))))
                .setTopTexture(new ImageTexture().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))))
                .setBottomTexture(new ImageTexture().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShader().setDEF("x_ite").setLanguage("GLSL")
                .addParts(new ShaderPart().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs","../shaders/x_ite_flower_particles.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs","../shaders/commonnew.fs"], Java.type("java.lang.String[]"))))
                .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("chromaticDispertion").setValue("0.98 1 1.033"))
                .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("cube")
                  .addChild(new ComposedCubeMapTexture().setUSE("texture")))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("bias").setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("scale").setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("power").setValue("2"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("a").setValue("2"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("b").setValue("1"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("c").setValue("5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("d").setValue("5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("tdelta"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("pdelta"))))
            .setGeometry(new Sphere()))
          .addChild(new Script().setDEF("Animate")
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("translation"))
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("velocity"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("a").setValue("0.5"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("b").setValue("0.5"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("c").setValue("3"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("d").setValue("3"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("tdelta").setValue("0.5"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("pdelta").setValue("0.5"))
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
				tdelta = tdelta + 0.05;
				pdelta = pdelta + 0.05;
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
          .addChild(new TimeSensor().setDEF("TourTime").setCycleInterval(5).setLoop(true)))
        .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("a_changed").setToNode("x_ite").setToField("set_a"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("b_changed").setToNode("x_ite").setToField("set_b"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("c_changed").setToNode("x_ite").setToField("set_c"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("d_changed").setToNode("x_ite").setToField("set_d"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta_changed").setToNode("x_ite").setToField("set_pdelta"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta_changed").setToNode("x_ite").setToField("set_tdelta")))      ;
    X3D0.toFileX3D("../data/particleflowersTidy.new.graal.x3d");
    X3D0.toFileJSON("../data/particleflowersTidy.new.graal.x3dj");
