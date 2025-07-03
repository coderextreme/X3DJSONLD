load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
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
        .addComments(new CommentsBlock("<component name='Shape' level='4'></component>"))
        .addMeta(new meta().setName("title").setContent("geo.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d"))
        .addMeta(new meta().setName("description").setContent("a sphere")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType(Java.to(["ANY","EXAMINE","FLY","LOOKAT"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDEF("Tour").setDescription("Tour Views"))
        .addComments(new CommentsBlock("Viewpoint position='0 0 4' description='sphere in road'/"))
        .addChild(new Background().setBackUrl(Java.to(["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"], Java.type("java.lang.String[]"))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.7,0.7,0.7]), Java.type("float[]"))).setSpecularColor(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]"))))
              .setTexture(new ComposedCubeMapTexture().setDEF("texture")
                .setBackTexture(new ImageTexture().setUrl(Java.to(["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"], Java.type("java.lang.String[]"))))
                .setBottomTexture(new ImageTexture().setUrl(Java.to(["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"], Java.type("java.lang.String[]"))))
                .setFrontTexture(new ImageTexture().setUrl(Java.to(["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"], Java.type("java.lang.String[]"))))
                .setLeftTexture(new ImageTexture().setUrl(Java.to(["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"], Java.type("java.lang.String[]"))))
                .setRightTexture(new ImageTexture().setUrl(Java.to(["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"], Java.type("java.lang.String[]"))))
                .setTopTexture(new ImageTexture().setUrl(Java.to(["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShader().setLanguage("GLSL")
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new field().setType(field.TYPE_SFNODE).setName("cube").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
                  .addChild(new ComposedCubeMapTexture().setUSE("texture")))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("bias").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("power").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPart().setType("VERTEX").setUrl(Java.to(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPart().setType("FRAGMENT").setDEF("common").setUrl(Java.to(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShader().setLanguage("GLSL")
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                .addField(new field().setType(field.TYPE_SFNODE).setName("cube").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new ComposedCubeMapTexture().setUSE("texture")))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("bias").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("scale").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("power").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("2"))
                .addParts(new ShaderPart().setType("VERTEX").setUrl(Java.to(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(Java.to(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"], Java.type("java.lang.String[]")))))))))      ;
    X3D0.toFileX3D(".././geo.new.graal.x3d");
    X3D0.toFileJSON(".././geo.new.graal.json");
