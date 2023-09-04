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
        .addMeta((new autoclass.meta()).setName("title").setContent("ball.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"))
        .addComponent((new autoclass.component()).setName("Scripting").setLevel(1))
        .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(3))
        .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
        .addComponent((new autoclass.component()).setName("CubeMapTexturing").setLevel(1))
        .addComponent((new autoclass.component()).setName("Texturing").setLevel(1))
        .addComponent((new autoclass.component()).setName("Rendering").setLevel(1))
        .addComponent((new autoclass.component()).setName("Grouping").setLevel(3))
        .addComponent((new autoclass.component()).setName("Core").setLevel(1)))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("ball.x3d"))
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["ANY","EXAMINE","FLY","LOOKAT"])))
        .addChild((new autoclass.Viewpoint()).setDescription("Tour Views"))
        .addChild((new autoclass.Background()).setFrontUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])).setBackUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])).setLeftUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])).setRightUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])).setTopUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])).setBottomUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
              .setTexture((new autoclass.ComposedCubeMapTexture()).setDEF("texture")
                .setFrontTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])))
                .setBackTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])))
                .setLeftTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])))
                .setRightTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])))
                .setTopTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])))
                .setBottomTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]))))
              .addShaders((new autoclass.ComposedShader()).setLanguage("GLSL")
                .addParts((new autoclass.ShaderPart()).setUrl(java.newArray("java.lang.String", ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])))
                .addParts((new autoclass.ShaderPart()).setType("FRAGMENT").setDEF("common").setUrl(java.newArray("java.lang.String", ["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("chromaticDispertion").setValue("0.98 1 1.033"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("cube")
                  .addChild((new autoclass.ComposedCubeMapTexture()).setUSE("texture")))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("bias").setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("scale").setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("power").setValue("2")))
              .addShaders((new autoclass.ComposedShader()).setLanguage("GLSL")
                .addParts((new autoclass.ShaderPart()).setUrl(java.newArray("java.lang.String", ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])))
                .addParts((new autoclass.ShaderPart()).setType("FRAGMENT").setUrl(java.newArray("java.lang.String", ["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"])))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("chromaticDispertion").setValue("0.98 1 1.033"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("cube")
                  .addChild((new autoclass.ComposedCubeMapTexture()).setUSE("texture")))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("bias").setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("scale").setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("power").setValue("2"))))
            .setGeometry((new autoclass.Sphere())))))      ;
    X3D0.toFileX3D("../data/ball.new.node.x3d");
    process.exit(0);
