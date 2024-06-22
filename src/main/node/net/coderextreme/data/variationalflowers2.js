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
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new autoclass.component().setName("Shaders").setLevel(1))
        .addComponent(new autoclass.component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Texturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Rendering").setLevel(1))
        .addComponent(new autoclass.component().setName("Grouping").setLevel(3))
        .addComponent(new autoclass.component().setName("Core").setLevel(1))
        .addComponent(new autoclass.component().setName("ParticleSystems").setLevel(3))
        .addMeta(new autoclass.meta().setName("title").setContent("variationalflowers.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("description").setContent("A flower particle system"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("variationalflowers.x3d"))
        .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["ANY","EXAMINE","FLY","LOOKAT"])))
        .addChild(new autoclass.Viewpoint().setDescription("Tour Views").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(12)])))
        .addChild(new autoclass.Background().setBackUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png"])).setBottomUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])).setFrontUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png"])).setLeftUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png"])).setRightUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png"])).setTopUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png"])))
        .addChild(new autoclass.Transform()
          .addChild(new autoclass.ParticleSystem().setMaxParticles(20).setGeometryType("GEOMETRY")
            .addComments((new autoclass.CommentsBlock("* values - array of MFFloats to pass to ComposedShader * variations in values - array of MFFloats to pass to ComposedShader that varies values")))
            .addVariationPhysicsModel(new autoclass.VariationPhysicsModel().setValues("2 2 5 5 0 0").setVariations("0.2 0.1 0.3 0.3 0.01 0.01"))
            .setEmitter(new autoclass.ExplosionEmitter().setSpeed(java.newFloat(1)).setVariation(java.newFloat(0.75)))
            .setGeometry(new autoclass.Sphere())
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
              .setTexture(new autoclass.ComposedCubeMapTexture().setDEF("texture")
                .setBackTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png"])))
                .setBottomTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])))
                .setFrontTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png"])))
                .setLeftTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png"])))
                .setRightTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png"])))
                .setTopTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png"]))))
              .addShaders(new autoclass.ComposedShader().setDEF("x_ite").setLanguage("GLSL")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("cube").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new autoclass.ComposedCubeMapTexture().setUSE("texture")))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("bias").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0.5"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0.5"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("power").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("2"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_MFFLOAT).setName("x3d_ParticleValues").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("2 1 4 4 0 0"))
                .addParts(new autoclass.ShaderPart().setType("VERTEX").setUrl(java.newArray("java.lang.String", ["../shaders/x_ite_variations.vs"])))
                .addParts(new autoclass.ShaderPart().setType("FRAGMENT").setUrl(java.newArray("java.lang.String", ["../shaders/commonnew.fs"]))))))
          .addChild(new autoclass.Script().setDEF("Animate")
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFFLOAT).setName("values").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("2 2 5 5 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFFLOAT).setName("variations").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.2 0.1 0.3 0.3 0.01 0.01"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("lastframe").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("updaterate").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.1"))
            .setSourceCode("ecmascript:\n"+
"			function set_fraction(f, tm) {\n"+
"			    if (lastframe + updaterate < tm) {\n"+
"			  	lastframe = tm;\n"+
"				for (let v in values) {\n"+
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];\n"+
"				}\n"+
"			    }\n"+
"			}"))
          .addChild(new autoclass.TimeSensor().setDEF("TourTime").setCycleInterval(45).setLoop(true))
          .addChild(new autoclass.ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
          .addChild(new autoclass.ROUTE().setFromNode("Animate").setFromField("values").setToNode("x_ite").setToField("x3d_ParticleValues"))))      ;
    X3D0.toFileX3D("../data/variationalflowers2.new.node.x3d");
    X3D0.toFileJSON("../data/variationalflowers2.new.node.json");
    process.exit(0);
