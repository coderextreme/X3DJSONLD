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
        .addComponent(new autoclass.component().setName("X_ITE").setLevel(1))
        .addMeta(new autoclass.meta().setName("title").setContent("Bobble Spheres Full Animation (Final Working)"))
        .addMeta(new autoclass.meta().setName("description").setContent("Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions."))
        .addMeta(new autoclass.meta().setName("creator").setContent("Generated from Python script")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("Bobble Spheres (PBR Full Animation)"))
        .addChild(new autoclass.NavigationInfo())
        .addChild(new autoclass.Background().setSkyAngle(java.newArray("float", [java.newFloat(1.57)])).setSkyColor(java.newArray("float", [java.newFloat(0.15), java.newFloat(0.25), java.newFloat(0.8), java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)])))
        .addChild(new autoclass.Viewpoint().setDescription("Initial Camera").setPosition(java.newArray("float", [java.newFloat(-70), java.newFloat(15), java.newFloat(-25)])).setOrientation(java.newArray("float", [java.newFloat(0.147), java.newFloat(0.989), java.newFloat(0.005), java.newFloat(-1.82)])).setFieldOfView(java.newFloat(0.349)))
        .addChild(new autoclass.DirectionalLight().setDirection(java.newArray("float", [java.newFloat(-0.5), java.newFloat(-1), java.newFloat(-0.5)])).setIntensity(java.newFloat(2)))
        .addComments((new autoclass.CommentsBlock("Static objects")))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-1000), java.newFloat(-1)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.PhysicalMaterial().setBaseColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))))
            .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(1000)))))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.PhysicalMaterial().setBaseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)])).setTransmissionFactor("0.9").setRoughness(java.newFloat(0)).setIndexOfRefraction("1.5")))
            .setGeometry(new autoclass.Sphere())))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(-4), java.newFloat(1), java.newFloat(0)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.PhysicalMaterial().setBaseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0.95), java.newFloat(0.9)])).setTransmissionFactor("0.8").setRoughness(java.newFloat(0.05)).setIndexOfRefraction("1.1")))
            .setGeometry(new autoclass.Sphere())))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(4), java.newFloat(1), java.newFloat(0)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.PhysicalMaterial().setBaseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.6), java.newFloat(0.5)])).setRoughness(java.newFloat(0.1))))
            .setGeometry(new autoclass.Sphere())))
        .addComments((new autoclass.CommentsBlock("=== DYNAMICALLY GENERATED SPHERES ===")))
        .addComments((new autoclass.CommentsBlock("Example: Matte Sphere with animated color and roughness (Using initialize())")))
        .addChild(new autoclass.Transform().setDEF("T_0").setTranslation(java.newArray("float", [java.newFloat(-10.871), java.newFloat(0.2), java.newFloat(-10.453)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.PhysicalMaterial().setDEF("M_0").setBaseColor(java.newArray("float", [java.newFloat(0.627), java.newFloat(0.003), java.newFloat(0.165)]))))
            .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.2)))))
        .addChild(new autoclass.TimeSensor().setDEF("C_0").setCycleInterval(5.21).setLoop(true))
        .addChild(new autoclass.PositionInterpolator().setDEF("PI_0").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(-10.871), java.newFloat(0.2), java.newFloat(-10.453), java.newFloat(-10.871), java.newFloat(0.6), java.newFloat(-10.453), java.newFloat(-10.871), java.newFloat(0.2), java.newFloat(-10.453)])))
        .addChild(new autoclass.ColorInterpolator().setDEF("CI_0").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0.627), java.newFloat(0.003), java.newFloat(0.165), java.newFloat(0.011), java.newFloat(0.583), java.newFloat(0.443), java.newFloat(0.627), java.newFloat(0.003), java.newFloat(0.165)])))
        .addChild(new autoclass.ScalarInterpolator().setDEF("SI_0").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(0.4), java.newFloat(1)])))
        .addChild(new autoclass.Script().setDEF("Animator_0")
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("set_color").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("set_roughness").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("targetMaterial").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new autoclass.PhysicalMaterial().setUSE("M_0")))
          .setSourceCode("ecmascript:\n"+
"        var matNode = null; // Variable to hold the material node reference\n"+
"\n"+
"        function initialize() {\n"+
"          // This function runs AFTER the targetMaterial field is connected.\n"+
"          // We safely store the reference to the actual material node.\n"+
"          matNode = targetMaterial.value;\n"+
"        }\n"+
"\n"+
"        function set_color(value, timestamp) {\n"+
"          if (matNode) { // Check if the node reference was stored\n"+
"            matNode.baseColor = value;\n"+
"          }\n"+
"        }\n"+
"        function set_roughness(value, timestamp) {\n"+
"          if (matNode) {\n"+
"            matNode.roughness = value;\n"+
"          }\n"+
"        }"))
        .addChild(new autoclass.ROUTE().setFromNode("C_0").setFromField("fraction_changed").setToNode("PI_0").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("PI_0").setFromField("value_changed").setToNode("T_0").setToField("set_translation"))
        .addChild(new autoclass.ROUTE().setFromNode("C_0").setFromField("fraction_changed").setToNode("CI_0").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("CI_0").setFromField("value_changed").setToNode("Animator_0").setToField("set_color"))
        .addChild(new autoclass.ROUTE().setFromNode("C_0").setFromField("fraction_changed").setToNode("SI_0").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("SI_0").setFromField("value_changed").setToNode("Animator_0").setToField("set_roughness"))
        .addComments((new autoclass.CommentsBlock("Example: Metal Sphere with animated roughness (Using initialize())")))
        .addChild(new autoclass.Transform().setDEF("T_1").setTranslation(java.newArray("float", [java.newFloat(-10.411), java.newFloat(0.2), java.newFloat(-9.16)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.PhysicalMaterial().setDEF("M_1").setBaseColor(java.newArray("float", [java.newFloat(0.707), java.newFloat(0.888), java.newFloat(0.536)])).setRoughness(java.newFloat(0.2))))
            .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.2)))))
        .addChild(new autoclass.TimeSensor().setDEF("C_1").setCycleInterval(4.15).setLoop(true))
        .addChild(new autoclass.PositionInterpolator().setDEF("PI_1").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(-10.411), java.newFloat(0.2), java.newFloat(-9.16), java.newFloat(-10.411), java.newFloat(0.6), java.newFloat(-9.16), java.newFloat(-10.411), java.newFloat(0.2), java.newFloat(-9.16)])))
        .addChild(new autoclass.ScalarInterpolator().setDEF("SI_1").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0.5), java.newFloat(0), java.newFloat(0.5)])))
        .addChild(new autoclass.Script().setDEF("Animator_1")
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("set_roughness").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("targetMaterial").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new autoclass.PhysicalMaterial().setUSE("M_1")))
          .setSourceCode("ecmascript:\n"+
"        var matNode = null;\n"+
"\n"+
"        function initialize() {\n"+
"          matNode = targetMaterial.value;\n"+
"        }\n"+
"\n"+
"        function set_roughness(value, timestamp) {\n"+
"          if (matNode) {\n"+
"            matNode.roughness = value;\n"+
"          }\n"+
"        }"))
        .addChild(new autoclass.ROUTE().setFromNode("C_1").setFromField("fraction_changed").setToNode("PI_1").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("PI_1").setFromField("value_changed").setToNode("T_1").setToField("set_translation"))
        .addChild(new autoclass.ROUTE().setFromNode("C_1").setFromField("fraction_changed").setToNode("SI_1").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("SI_1").setFromField("value_changed").setToNode("Animator_1").setToField("set_roughness"))
        .addComments((new autoclass.CommentsBlock("The extension-based spheres were already correct and need no changes")))
        .addChild(new autoclass.Transform().setDEF("T_2").setTranslation(java.newArray("float", [java.newFloat(-10.155), java.newFloat(0.2), java.newFloat(-8.324)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.PhysicalMaterial().setTransmissionFactor("0.95").setRoughness(java.newFloat(0.05))
                .setIORMaterialExtension(new autoclass.IORMaterialExtension().setDEF("IOR_2").setIndexOfRefraction("1.5"))))
            .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.2)))))
        .addChild(new autoclass.TimeSensor().setDEF("C_2").setCycleInterval(3.88).setLoop(true))
        .addChild(new autoclass.PositionInterpolator().setDEF("PI_2").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(-10.155), java.newFloat(0.2), java.newFloat(-8.324), java.newFloat(-10.155), java.newFloat(0.6), java.newFloat(-8.324), java.newFloat(-10.155), java.newFloat(0.2), java.newFloat(-8.324)])))
        .addChild(new autoclass.ScalarInterpolator().setDEF("SI_2").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1.4), java.newFloat(1.7), java.newFloat(1.4)])))
        .addChild(new autoclass.ROUTE().setFromNode("C_2").setFromField("fraction_changed").setToNode("PI_2").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("PI_2").setFromField("value_changed").setToNode("T_2").setToField("set_translation"))
        .addChild(new autoclass.ROUTE().setFromNode("C_2").setFromField("fraction_changed").setToNode("SI_2").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("SI_2").setFromField("value_changed").setToNode("IOR_2").setToField("set_indexOfRefraction"))
        .addChild(new autoclass.Transform().setDEF("T_3").setTranslation(java.newArray("float", [java.newFloat(-10.518), java.newFloat(0.2), java.newFloat(-7.283)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.PhysicalMaterial().setTransmissionFactor("0.95").setRoughness(java.newFloat(0.05)).setIndexOfRefraction("1.33")
                .setIridescenceMaterialExtension(new autoclass.IridescenceMaterialExtension().setDEF("IRI_3").setIridescence("1").setIridescenceIndexOfRefraction("1.3").setIridescenceThicknessMinimum("100"))))
            .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.2)))))
        .addChild(new autoclass.TimeSensor().setDEF("C_3").setCycleInterval(6).setLoop(true))
        .addChild(new autoclass.PositionInterpolator().setDEF("PI_3").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(-10.518), java.newFloat(0.2), java.newFloat(-7.283), java.newFloat(-10.518), java.newFloat(0.6), java.newFloat(-7.283), java.newFloat(-10.518), java.newFloat(0.2), java.newFloat(-7.283)])))
        .addChild(new autoclass.ScalarInterpolator().setDEF("SI_3").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(100), java.newFloat(700), java.newFloat(100)])))
        .addChild(new autoclass.ROUTE().setFromNode("C_3").setFromField("fraction_changed").setToNode("PI_3").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("PI_3").setFromField("value_changed").setToNode("T_3").setToField("set_translation"))
        .addChild(new autoclass.ROUTE().setFromNode("C_3").setFromField("fraction_changed").setToNode("SI_3").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("SI_3").setFromField("value_changed").setToNode("IRI_3").setToField("set_iridescenceThicknessMaximum")))      ;
    X3D0.toFileX3D("../data/bobblespheres.new.node.x3d");
    X3D0.toFileJSON("../data/bobblespheres.new.node.x3dj");
    process.exit(0);
