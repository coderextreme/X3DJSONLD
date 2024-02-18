load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array([d])[0];
}
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1))
        .addMeta(new meta().setName("title").setContent("ball.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/ball.x3d"))
        .addMeta(new meta().setName("description").setContent("a prismatic sphere")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("ball.x3d"))
        .addChild(new NavigationInfo().setType(Java.to(["ANY","EXAMINE","FLY","LOOKAT"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDescription("Tour Views").setPosition(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(12)], Java.type("float[]"))))
        .addChild(new Background().setBackUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(0.7),doubleToFloat(0.7),doubleToFloat(0.7)], Java.type("float[]"))).setSpecularColor(Java.to([doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5)], Java.type("float[]"))))
              .setTexture(new ComposedCubeMapTexture().setDEF("texture")
                .setBackTexture(new ImageTexture().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))))
                .setBottomTexture(new ImageTexture().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))))
                .setFrontTexture(new ImageTexture().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))))
                .setLeftTexture(new ImageTexture().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))))
                .setRightTexture(new ImageTexture().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))))
                .setTopTexture(new ImageTexture().setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShader().setLanguage("GLSL")
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new field().setType(field.TYPE_SFNODE).setName("cube").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
                  .addChild(new ComposedCubeMapTexture().setUSE("texture")))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("bias").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("power").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPart().setType("VERTEX").setUrl(Java.to(["https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPart().setType("FRAGMENT").setDEF("commonfs").setUrl(Java.to(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"], Java.type("java.lang.String[]")))))))))      ;
    X3D0.toFileX3D("../personal/octball.new.graal.x3d");
    X3D0.toFileJSON("../personal/octball.new.graal.json");
