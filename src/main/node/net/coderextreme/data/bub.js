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
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("Scripting").setLevel(1))
        .addComponent(new autoclass.component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new autoclass.component().setName("Shaders").setLevel(1))
        .addComponent(new autoclass.component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Texturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Rendering").setLevel(1))
        .addComponent(new autoclass.component().setName("Grouping").setLevel(3))
        .addComponent(new autoclass.component().setName("Core").setLevel(1))
        .addComments((new autoclass.CommentsBlock("<component name='Shape' level='4'></component>")))
        .addMeta(new autoclass.meta().setName("title").setContent("bub.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("description").setContent("3 prismatic spheres"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.NavigationInfo())
        .addChild(new autoclass.Background().setBackUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])).setBottomUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])).setFrontUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])).setLeftUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])).setRightUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])).setTopUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])))
        .addChild(new autoclass.Viewpoint().setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(20)])).setDescription("Look at the bubbles flying"))
        .addChild(new autoclass.ProtoDeclare().setName("Bubble")
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Transform().setDEF("transform")
              .addChild(new autoclass.Shape().setDEF("myShape")
                .setAppearance(new autoclass.Appearance()
                  .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
                  .setTexture(new autoclass.ComposedCubeMapTexture().setDEF("texture")
                    .setBackTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])))
                    .setBottomTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])))
                    .setFrontTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])))
                    .setLeftTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])))
                    .setRightTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])))
                    .setTopTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]))))
                  .addComments((new autoclass.CommentsBlock("<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>")))
                  .addComments((new autoclass.CommentsBlock("<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>")))
                  .addShaders(new autoclass.ComposedShader().setDEF("x3dom").setLanguage("GLSL")
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("cube").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("bias").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("power").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                    .addParts(new autoclass.ShaderPart().setType("VERTEX").setUrl(java.newArray("java.lang.String", ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])))
                    .addParts(new autoclass.ShaderPart().setType("FRAGMENT").setUrl(java.newArray("java.lang.String", ["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]))))
                  .addShaders(new autoclass.ComposedShader().setDEF("x_ite").setLanguage("GLSL")
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("cube").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
                      .addChild(new autoclass.ComposedCubeMapTexture().setUSE("texture")))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("bias").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("power").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                    .addParts(new autoclass.ShaderPart().setType("VERTEX").setUrl(java.newArray("java.lang.String", ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])))
                    .addParts(new autoclass.ShaderPart().setType("FRAGMENT").setUrl(java.newArray("java.lang.String", ["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"])))))
                .setGeometry(new autoclass.Sphere())))
            .addChild(new autoclass.Script().setDEF("Bounce")
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("velocity").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("set_fraction").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .setSourceCode("ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    if (Math.abs(translation.x) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.y) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.z) > 10) {\n"+
"				initialize();\n"+
"			    } else {\n"+
"				velocity.x += Math.random() * 0.2 - 0.1;\n"+
"				velocity.y += Math.random() * 0.2 - 0.1;\n"+
"				velocity.z += Math.random() * 0.2 - 0.1;\n"+
"			    }\n"+
"			}"))
            .addChild(new autoclass.TimeSensor().setDEF("TourTime").setCycleInterval(0.15).setLoop(true))
            .addChild(new autoclass.ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction"))
            .addChild(new autoclass.ROUTE().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))))
        .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("Bubble"))
        .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("Bubble"))
        .addChild(ProtoInstance2 = new autoclass.ProtoInstance().setName("Bubble")))      ;
    X3D0.toFileX3D("../data/bub.new.node.x3d");
    X3D0.toFileJSON("../data/bub.new.node.json");
    process.exit(0);
