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
        .addMeta((new autoclass.meta()).setName("title").setContent("geo.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d"))
        .addComponent((new autoclass.component()).setName("Scripting").setLevel(1))
        .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(3))
        .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
        .addComponent((new autoclass.component()).setName("CubeMapTexturing").setLevel(1))
        .addComponent((new autoclass.component()).setName("Texturing").setLevel(1))
        .addComponent((new autoclass.component()).setName("Rendering").setLevel(1))
        .addComponent((new autoclass.component()).setName("Shape").setLevel(4))
        .addComponent((new autoclass.component()).setName("Grouping").setLevel(3))
        .addComponent((new autoclass.component()).setName("Core").setLevel(1)))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["ANY","EXAMINE","FLY","LOOKAT"])))
        .addChild((new autoclass.Viewpoint()).setDEF("Tour").setDescription("Tour Views"))
        .addChild((new autoclass.Background()).setFrontUrl(java.newArray("java.lang.String", ["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"])).setBackUrl(java.newArray("java.lang.String", ["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"])).setLeftUrl(java.newArray("java.lang.String", ["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"])).setRightUrl(java.newArray("java.lang.String", ["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"])).setTopUrl(java.newArray("java.lang.String", ["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"])).setBottomUrl(java.newArray("java.lang.String", ["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"])))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
              .setTexture((new autoclass.ComposedCubeMapTexture()).setDEF("texture"))
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
                .addParts((new autoclass.ShaderPart()).setType("FRAGMENT").setUrl(java.newArray("java.lang.String", ["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("chromaticDispertion").setValue("0.98 1 1.033"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("cube")
                  .addChild((new autoclass.ComposedCubeMapTexture()).setUSE("texture")))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("bias").setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("scale").setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("power").setValue("2"))))
            .setGeometry((new autoclass.Sphere())))))      ;
    X3D0.toFileX3D("../data/geo.new.node.x3d");
    process.exit(0);
