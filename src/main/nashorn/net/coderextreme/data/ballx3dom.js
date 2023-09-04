load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ballx3dom.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"))
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1)))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("ball.x3d"))
        .addChild(new NavigationInfo().setType(Java.to(["ANY","EXAMINE","FLY","LOOKAT"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDescription("Tour Views"))
        .addChild(new Background().setFrontUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))).setBackUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([0.7,0.7,0.7], Java.type("double[]"))).setSpecularColor(Java.to([0.5,0.5,0.5], Java.type("double[]"))))
              .setTexture(new ComposedCubeMapTexture().setDEF("texture"))
              .addShaders(new ComposedShader().setLanguage("GLSL")
                .addParts(new ShaderPart().setUrl(Java.to(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPart().setType("FRAGMENT").setDEF("common").setUrl(Java.to(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"], Java.type("java.lang.String[]"))))
                .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("chromaticDispertion").setValue("0.98 1 1.033"))
                .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("cube")
                  .addChild(new ComposedCubeMapTexture().setUSE("texture")))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("bias").setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("scale").setValue("0.5"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("power").setValue("2"))))
            .setGeometry(new Sphere()))))      ;
    X3D0.toFileJSON("../data/ballx3dom.new.graal.json");
