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
        .addComponent((new autoclass.component()).setName("Scripting").setLevel(1))
        .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(3))
        .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
        .addComponent((new autoclass.component()).setName("CubeMapTexturing").setLevel(1))
        .addComponent((new autoclass.component()).setName("Texturing").setLevel(1))
        .addComponent((new autoclass.component()).setName("Rendering").setLevel(1))
        .addComponent((new autoclass.component()).setName("Grouping").setLevel(3))
        .addComponent((new autoclass.component()).setName("Core").setLevel(1))
        .addMeta((new autoclass.meta()).setName("title").setContent("ball.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/ball.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("a prismatic sphere")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("ball.x3d"))
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["ANY","EXAMINE","FLY","LOOKAT"])))
        .addChild((new autoclass.Viewpoint()).setDescription("Tour Views").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(12)])))
        .addChild((new autoclass.Background()).setBackUrl(java.newArray("java.lang.String", ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])).setBottomUrl(java.newArray("java.lang.String", ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])).setFrontUrl(java.newArray("java.lang.String", ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])).setLeftUrl(java.newArray("java.lang.String", ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])).setRightUrl(java.newArray("java.lang.String", ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])).setTopUrl(java.newArray("java.lang.String", ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Sphere()))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
              .setTexture((new autoclass.ComposedCubeMapTexture()).setDEF("texture")
                .setBackTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])))
                .setBottomTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])))
                .setFrontTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])))
                .setLeftTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])))
                .setRightTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])))
                .setTopTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]))))
              .addShaders((new autoclass.ComposedShader()).setLanguage("GLSL")
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("cube").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
                  .addChild((new autoclass.ComposedCubeMapTexture()).setUSE("texture")))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("bias").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("power").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts((new autoclass.ShaderPart()).setType("VERTEX").setUrl(java.newArray("java.lang.String", ["../shaders/freewrl.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"])))
                .addParts((new autoclass.ShaderPart()).setType("FRAGMENT").setUrl(java.newArray("java.lang.String", ["../shaders/freewrl.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"]))))))))      ;
    X3D0.toFileX3D("../personal/fwball.new.node.x3d");
    X3D0.toFileJSON("../personal/fwball.new.node.json");
    process.exit(0);