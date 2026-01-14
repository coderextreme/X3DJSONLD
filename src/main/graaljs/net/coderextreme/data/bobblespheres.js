load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("X_ITE").setLevel(1))
        .addMeta(new meta().setName("title").setContent("Bobble Spheres Full Animation (Final Working)"))
        .addMeta(new meta().setName("description").setContent("Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions."))
        .addMeta(new meta().setName("creator").setContent("Generated from Python script")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("Bobble Spheres (PBR Full Animation)"))
        .addChild(new NavigationInfo())
        .addChild(new Background().setSkyAngle(Java.to(doubleToFloat([1.57]), Java.type("float[]"))).setSkyColor(Java.to(doubleToFloat([0.15,0.25,0.8,0.9,0.9,0.9]), Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("Initial Camera").setPosition(Java.to(doubleToFloat([-70,15,-25]), Java.type("float[]"))).setOrientation(Java.to(doubleToFloat([0.147,0.989,0.005,-1.82]), Java.type("float[]"))).setFieldOfView(0.349))
        .addChild(new DirectionalLight().setDirection(Java.to(doubleToFloat([-0.5,-1,-0.5]), Java.type("float[]"))).setIntensity(2))
        .addComments(new CommentsBlock("Static objects"))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,-1000,-1]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setBaseColor(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]")))))
            .setGeometry(new Sphere().setRadius(1000))))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,1,0]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setBaseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]"))).setTransmissionFactor("0.9").setRoughness(0).setIndexOfRefraction("1.5")))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([-4,1,0]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setBaseColor(Java.to(doubleToFloat([1,0.95,0.9]), Java.type("float[]"))).setTransmissionFactor("0.8").setRoughness(0.05).setIndexOfRefraction("1.1")))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([4,1,0]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setBaseColor(Java.to(doubleToFloat([0.7,0.6,0.5]), Java.type("float[]"))).setRoughness(0.1)))
            .setGeometry(new Sphere())))
        .addComments(new CommentsBlock("=== DYNAMICALLY GENERATED SPHERES ==="))
        .addComments(new CommentsBlock("Example: Matte Sphere with animated color and roughness (Using initialize())"))
        .addChild(new Transform().setDEF("T_0").setTranslation(Java.to(doubleToFloat([-10.871,0.2,-10.453]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setDEF("M_0").setBaseColor(Java.to(doubleToFloat([0.627,0.003,0.165]), Java.type("float[]")))))
            .setGeometry(new Sphere().setRadius(0.2))))
        .addChild(new TimeSensor().setDEF("C_0").setCycleInterval(5.21).setLoop(true))
        .addChild(new PositionInterpolator().setDEF("PI_0").setKey(Java.to(doubleToFloat([0,0.5,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([-10.871,0.2,-10.453,-10.871,0.6,-10.453,-10.871,0.2,-10.453]), Java.type("float[]"))))
        .addChild(new ColorInterpolator().setDEF("CI_0").setKey(Java.to(doubleToFloat([0,0.5,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([0.627,0.003,0.165,0.011,0.583,0.443,0.627,0.003,0.165]), Java.type("float[]"))))
        .addChild(new ScalarInterpolator().setDEF("SI_0").setKey(Java.to(doubleToFloat([0,0.5,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([1,0.4,1]), Java.type("float[]"))))
        .addChild(new Script().setDEF("Animator_0")
          .addField(new field().setType(field.TYPE_SFCOLOR).setName("set_color").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("set_roughness").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType(field.TYPE_SFNODE).setName("targetMaterial").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new PhysicalMaterial().setUSE("M_0")))
          .setSourceCode(`ecmascript:
        var matNode = null; // Variable to hold the material node reference

        function initialize() {
          // This function runs AFTER the targetMaterial field is connected.
          // We safely store the reference to the actual material node.
          matNode = targetMaterial.value;
        }

        function set_color(value, timestamp) {
          if (matNode) { // Check if the node reference was stored
            matNode.baseColor = value;
          }
        }
        function set_roughness(value, timestamp) {
          if (matNode) {
            matNode.roughness = value;
          }
        }`))
        .addChild(new ROUTE().setFromNode("C_0").setFromField("fraction_changed").setToNode("PI_0").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PI_0").setFromField("value_changed").setToNode("T_0").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("C_0").setFromField("fraction_changed").setToNode("CI_0").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("CI_0").setFromField("value_changed").setToNode("Animator_0").setToField("set_color"))
        .addChild(new ROUTE().setFromNode("C_0").setFromField("fraction_changed").setToNode("SI_0").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("SI_0").setFromField("value_changed").setToNode("Animator_0").setToField("set_roughness"))
        .addComments(new CommentsBlock("Example: Metal Sphere with animated roughness (Using initialize())"))
        .addChild(new Transform().setDEF("T_1").setTranslation(Java.to(doubleToFloat([-10.411,0.2,-9.16]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setDEF("M_1").setBaseColor(Java.to(doubleToFloat([0.707,0.888,0.536]), Java.type("float[]"))).setRoughness(0.2)))
            .setGeometry(new Sphere().setRadius(0.2))))
        .addChild(new TimeSensor().setDEF("C_1").setCycleInterval(4.15).setLoop(true))
        .addChild(new PositionInterpolator().setDEF("PI_1").setKey(Java.to(doubleToFloat([0,0.5,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([-10.411,0.2,-9.16,-10.411,0.6,-9.16,-10.411,0.2,-9.16]), Java.type("float[]"))))
        .addChild(new ScalarInterpolator().setDEF("SI_1").setKey(Java.to(doubleToFloat([0,0.5,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([0.5,0,0.5]), Java.type("float[]"))))
        .addChild(new Script().setDEF("Animator_1")
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("set_roughness").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType(field.TYPE_SFNODE).setName("targetMaterial").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new PhysicalMaterial().setUSE("M_1")))
          .setSourceCode(`ecmascript:
        var matNode = null;

        function initialize() {
          matNode = targetMaterial.value;
        }

        function set_roughness(value, timestamp) {
          if (matNode) {
            matNode.roughness = value;
          }
        }`))
        .addChild(new ROUTE().setFromNode("C_1").setFromField("fraction_changed").setToNode("PI_1").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PI_1").setFromField("value_changed").setToNode("T_1").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("C_1").setFromField("fraction_changed").setToNode("SI_1").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("SI_1").setFromField("value_changed").setToNode("Animator_1").setToField("set_roughness"))
        .addComments(new CommentsBlock("The extension-based spheres were already correct and need no changes"))
        .addChild(new Transform().setDEF("T_2").setTranslation(Java.to(doubleToFloat([-10.155,0.2,-8.324]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setTransmissionFactor("0.95").setRoughness(0.05)
                .setIORMaterialExtension(new IORMaterialExtension().setDEF("IOR_2").setIndexOfRefraction("1.5"))))
            .setGeometry(new Sphere().setRadius(0.2))))
        .addChild(new TimeSensor().setDEF("C_2").setCycleInterval(3.88).setLoop(true))
        .addChild(new PositionInterpolator().setDEF("PI_2").setKey(Java.to(doubleToFloat([0,0.5,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([-10.155,0.2,-8.324,-10.155,0.6,-8.324,-10.155,0.2,-8.324]), Java.type("float[]"))))
        .addChild(new ScalarInterpolator().setDEF("SI_2").setKey(Java.to(doubleToFloat([0,0.5,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([1.4,1.7,1.4]), Java.type("float[]"))))
        .addChild(new ROUTE().setFromNode("C_2").setFromField("fraction_changed").setToNode("PI_2").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PI_2").setFromField("value_changed").setToNode("T_2").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("C_2").setFromField("fraction_changed").setToNode("SI_2").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("SI_2").setFromField("value_changed").setToNode("IOR_2").setToField("set_indexOfRefraction"))
        .addChild(new Transform().setDEF("T_3").setTranslation(Java.to(doubleToFloat([-10.518,0.2,-7.283]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setTransmissionFactor("0.95").setRoughness(0.05).setIndexOfRefraction("1.33")
                .setIridescenceMaterialExtension(new IridescenceMaterialExtension().setDEF("IRI_3").setIridescence("1").setIridescenceIndexOfRefraction("1.3").setIridescenceThicknessMinimum("100"))))
            .setGeometry(new Sphere().setRadius(0.2))))
        .addChild(new TimeSensor().setDEF("C_3").setCycleInterval(6).setLoop(true))
        .addChild(new PositionInterpolator().setDEF("PI_3").setKey(Java.to(doubleToFloat([0,0.5,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([-10.518,0.2,-7.283,-10.518,0.6,-7.283,-10.518,0.2,-7.283]), Java.type("float[]"))))
        .addChild(new ScalarInterpolator().setDEF("SI_3").setKey(Java.to(doubleToFloat([0,0.5,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([100,700,100]), Java.type("float[]"))))
        .addChild(new ROUTE().setFromNode("C_3").setFromField("fraction_changed").setToNode("PI_3").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PI_3").setFromField("value_changed").setToNode("T_3").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("C_3").setFromField("fraction_changed").setToNode("SI_3").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("SI_3").setFromField("value_changed").setToNode("IRI_3").setToField("set_iridescenceThicknessMaximum")))      ;
    X3D0.toFileX3D("../data/bobblespheres.new.graal.x3d");
    X3D0.toFileJSON("../data/bobblespheres.new.graal.x3dj");
