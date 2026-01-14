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
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Core").setLevel(1))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"))
        .addMeta(new meta().setName("title").setContent("ball.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("description").setContent("a prismatic sphere")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("ball.x3d"))
        .addChild(new NavigationInfo().setType(Java.to(["ANY","EXAMINE","FLY","LOOKAT"], Java.type("java.lang.String[]"))).setAvatarSize(Java.to(doubleToFloat([0.25,1.60000002384186,0.75]), Java.type("float[]"))))
        .addChild(new Viewpoint().setPosition(Java.to(doubleToFloat([0,0,12]), Java.type("float[]"))).setDescription("Tour Views"))
        .addChild(new Background().setTopUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))).setBackUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.699999988079071,0.699999988079071,0.699999988079071]), Java.type("float[]"))).setSpecularColor(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]"))))
              .addShaders(new ComposedShader().setLanguage("GLSL")
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.980000019073486 1 1.03299999237061"))
                .addField(new field().setType(field.TYPE_SFNODE).setName("cube").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new ComposedCubeMapTexture()
                    .setBackTexture(new ImageTexture().setUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))))
                    .setBottomTexture(new ImageTexture().setUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))))
                    .setFrontTexture(new ImageTexture().setUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))))
                    .setLeftTexture(new ImageTexture().setUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))))
                    .setRightTexture(new ImageTexture().setUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))))
                    .setTopTexture(new ImageTexture().setUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))))))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("bias").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("scale").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("power").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("2"))
                .addParts(new ShaderPart().setType("VERTEX").setUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPart().setType("FRAGMENT").setDEF("commonfs").setUrl(Java.to(["file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.fs"], Java.type("java.lang.String[]")))))))))      ;
    X3D0.toFileX3D("../data/ballcge.new.graal.x3d");
    X3D0.toFileJSON("../data/ballcge.new.graal.x3dj");
