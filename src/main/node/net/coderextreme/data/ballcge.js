import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("Shaders").setLevel(1))
        .addComponent(new autoclass.component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new autoclass.component().setName("Rendering").setLevel(1))
        .addComponent(new autoclass.component().setName("Texturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Grouping").setLevel(3))
        .addComponent(new autoclass.component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Core").setLevel(1))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"))
        .addMeta(new autoclass.meta().setName("title").setContent("ball.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("generator").setContent("manual"))
        .addMeta(new autoclass.meta().setName("description").setContent("a prismatic sphere")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("ball.x3d"))
        .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["ANY","EXAMINE","FLY","LOOKAT"])).setAvatarSize(java.newArray("float", [java.newFloat(0.25), java.newFloat(1.60000002384186), java.newFloat(0.75)])))
        .addChild(new autoclass.Viewpoint().setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(12)])).setDescription("Tour Views"))
        .addChild(new autoclass.Background().setTopUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])).setBackUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])).setLeftUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])).setFrontUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])).setRightUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])).setBottomUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])))
        .addChild(new autoclass.Transform()
          .addChild(new autoclass.Shape()
            .setGeometry(new autoclass.Sphere())
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.699999988079071), java.newFloat(0.699999988079071), java.newFloat(0.699999988079071)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
              .addShaders(new autoclass.ComposedShader().setLanguage("GLSL")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0.980000019073486 1 1.03299999237061"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("cube").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new autoclass.ComposedCubeMapTexture()
                    .setBackTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])))
                    .setBottomTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])))
                    .setFrontTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])))
                    .setLeftTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])))
                    .setRightTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])))
                    .setTopTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])))))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("bias").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0.5"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0.5"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("power").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("2"))
                .addParts(new autoclass.ShaderPart().setType("VERTEX").setUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.vs"])))
                .addParts(new autoclass.ShaderPart().setType("FRAGMENT").setDEF("commonfs").setUrl(java.newArray("java.lang.String", ["file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.fs"]))))))))      ;
    X3D0.toFileX3D("../data/ballcge.new.node.x3d");
    X3D0.toFileJSON("../data/ballcge.new.node.x3dj");
    process.exit(0);
