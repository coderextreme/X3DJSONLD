import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("X_ITE")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("Bobble Spheres Full Animation (Final Working)")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Generated from Python script")

head1.addMeta(meta5)

X3D0.setHead(head1)
Scene6 = x3d.Scene()
WorldInfo7 = x3d.WorldInfo()
WorldInfo7.setTitle("Bobble Spheres (PBR Full Animation)")

Scene6.addChild(WorldInfo7)
NavigationInfo8 = x3d.NavigationInfo()

Scene6.addChild(NavigationInfo8)
Background9 = x3d.Background()
Background9.setSkyAngle(x3d.doubleToFloat([1.57]))
Background9.setSkyColor(x3d.doubleToFloat([0.15,0.25,0.8,0.9,0.9,0.9]))

Scene6.addChild(Background9)
Viewpoint10 = x3d.Viewpoint()
Viewpoint10.setDescription("Initial Camera")
Viewpoint10.setPosition(x3d.doubleToFloat([-70,15,-25]))
Viewpoint10.setOrientation(x3d.doubleToFloat([0.147,0.989,0.005,-1.82]))
Viewpoint10.setFieldOfView(0.349)

Scene6.addChild(Viewpoint10)
DirectionalLight11 = x3d.DirectionalLight()
DirectionalLight11.setDirection(x3d.doubleToFloat([-0.5,-1,-0.5]))
DirectionalLight11.setIntensity(2)

Scene6.addChild(DirectionalLight11)

Scene6.addComments(x3d.CommentsBlock("""Static objects"""))
Transform12 = x3d.Transform()
Transform12.setTranslation(x3d.doubleToFloat([0,-1000,-1]))
Shape13 = x3d.Shape()
Appearance14 = x3d.Appearance()
PhysicalMaterial15 = x3d.PhysicalMaterial()
PhysicalMaterial15.setBaseColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance14.setMaterial(PhysicalMaterial15)

Shape13.setAppearance(Appearance14)
Sphere16 = x3d.Sphere()
Sphere16.setRadius(1000)

Shape13.setGeometry(Sphere16)

Transform12.addChild(Shape13)

Scene6.addChild(Transform12)
Transform17 = x3d.Transform()
Transform17.setTranslation(x3d.doubleToFloat([0,1,0]))
Shape18 = x3d.Shape()
Appearance19 = x3d.Appearance()
PhysicalMaterial20 = x3d.PhysicalMaterial()
PhysicalMaterial20.setBaseColor(x3d.doubleToFloat([0.9,0.9,0.9]))
PhysicalMaterial20.setTransmissionFactor("0.9")
PhysicalMaterial20.setRoughness(0)
PhysicalMaterial20.setIndexOfRefraction("1.5")

Appearance19.setMaterial(PhysicalMaterial20)

Shape18.setAppearance(Appearance19)
Sphere21 = x3d.Sphere()

Shape18.setGeometry(Sphere21)

Transform17.addChild(Shape18)

Scene6.addChild(Transform17)
Transform22 = x3d.Transform()
Transform22.setTranslation(x3d.doubleToFloat([-4,1,0]))
Shape23 = x3d.Shape()
Appearance24 = x3d.Appearance()
PhysicalMaterial25 = x3d.PhysicalMaterial()
PhysicalMaterial25.setBaseColor(x3d.doubleToFloat([1,0.95,0.9]))
PhysicalMaterial25.setTransmissionFactor("0.8")
PhysicalMaterial25.setRoughness(0.05)
PhysicalMaterial25.setIndexOfRefraction("1.1")

Appearance24.setMaterial(PhysicalMaterial25)

Shape23.setAppearance(Appearance24)
Sphere26 = x3d.Sphere()

Shape23.setGeometry(Sphere26)

Transform22.addChild(Shape23)

Scene6.addChild(Transform22)
Transform27 = x3d.Transform()
Transform27.setTranslation(x3d.doubleToFloat([4,1,0]))
Shape28 = x3d.Shape()
Appearance29 = x3d.Appearance()
PhysicalMaterial30 = x3d.PhysicalMaterial()
PhysicalMaterial30.setBaseColor(x3d.doubleToFloat([0.7,0.6,0.5]))
PhysicalMaterial30.setRoughness(0.1)

Appearance29.setMaterial(PhysicalMaterial30)

Shape28.setAppearance(Appearance29)
Sphere31 = x3d.Sphere()

Shape28.setGeometry(Sphere31)

Transform27.addChild(Shape28)

Scene6.addChild(Transform27)

Scene6.addComments(x3d.CommentsBlock("""=== DYNAMICALLY GENERATED SPHERES ==="""))

Scene6.addComments(x3d.CommentsBlock("""Example: Matte Sphere with animated color and roughness (Using initialize())"""))
Transform32 = x3d.Transform()
Transform32.setDEF("T_0")
Transform32.setTranslation(x3d.doubleToFloat([-10.871,0.2,-10.453]))
Shape33 = x3d.Shape()
Appearance34 = x3d.Appearance()
PhysicalMaterial35 = x3d.PhysicalMaterial()
PhysicalMaterial35.setDEF("M_0")
PhysicalMaterial35.setBaseColor(x3d.doubleToFloat([0.627,0.003,0.165]))

Appearance34.setMaterial(PhysicalMaterial35)

Shape33.setAppearance(Appearance34)
Sphere36 = x3d.Sphere()
Sphere36.setRadius(0.2)

Shape33.setGeometry(Sphere36)

Transform32.addChild(Shape33)

Scene6.addChild(Transform32)
TimeSensor37 = x3d.TimeSensor()
TimeSensor37.setDEF("C_0")
TimeSensor37.setCycleInterval(5.21)
TimeSensor37.setLoop(True)

Scene6.addChild(TimeSensor37)
PositionInterpolator38 = x3d.PositionInterpolator()
PositionInterpolator38.setDEF("PI_0")
PositionInterpolator38.setKey(x3d.doubleToFloat([0,0.5,1]))
PositionInterpolator38.setKeyValue(x3d.doubleToFloat([-10.871,0.2,-10.453,-10.871,0.6,-10.453,-10.871,0.2,-10.453]))

Scene6.addChild(PositionInterpolator38)
ColorInterpolator39 = x3d.ColorInterpolator()
ColorInterpolator39.setDEF("CI_0")
ColorInterpolator39.setKey(x3d.doubleToFloat([0,0.5,1]))
ColorInterpolator39.setKeyValue(x3d.doubleToFloat([0.627,0.003,0.165,0.011,0.583,0.443,0.627,0.003,0.165]))

Scene6.addChild(ColorInterpolator39)
ScalarInterpolator40 = x3d.ScalarInterpolator()
ScalarInterpolator40.setDEF("SI_0")
ScalarInterpolator40.setKey(x3d.doubleToFloat([0,0.5,1]))
ScalarInterpolator40.setKeyValue(x3d.doubleToFloat([1,0.4,1]))

Scene6.addChild(ScalarInterpolator40)
Script41 = x3d.Script()
Script41.setDEF("Animator_0")
field42 = x3d.field()
field42.setName("set_color")
field42.setType("SFColor")
field42.setAccessType("inputOnly")

Script41.addField(field42)
field43 = x3d.field()
field43.setName("set_roughness")
field43.setType("SFFloat")
field43.setAccessType("inputOnly")

Script41.addField(field43)
field44 = x3d.field()
field44.setName("targetMaterial")
field44.setType("SFNode")
field44.setAccessType("initializeOnly")
PhysicalMaterial45 = x3d.PhysicalMaterial()
PhysicalMaterial45.setUSE("M_0")

field44.addChild(PhysicalMaterial45)

Script41.addField(field44)

Script41.setSourceCode('''ecmascript:
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
        }''')

Scene6.addChild(Script41)
ROUTE46 = x3d.ROUTE()
ROUTE46.setFromNode("C_0")
ROUTE46.setFromField("fraction_changed")
ROUTE46.setToNode("PI_0")
ROUTE46.setToField("set_fraction")

Scene6.addChild(ROUTE46)
ROUTE47 = x3d.ROUTE()
ROUTE47.setFromNode("PI_0")
ROUTE47.setFromField("value_changed")
ROUTE47.setToNode("T_0")
ROUTE47.setToField("set_translation")

Scene6.addChild(ROUTE47)
ROUTE48 = x3d.ROUTE()
ROUTE48.setFromNode("C_0")
ROUTE48.setFromField("fraction_changed")
ROUTE48.setToNode("CI_0")
ROUTE48.setToField("set_fraction")

Scene6.addChild(ROUTE48)
ROUTE49 = x3d.ROUTE()
ROUTE49.setFromNode("CI_0")
ROUTE49.setFromField("value_changed")
ROUTE49.setToNode("Animator_0")
ROUTE49.setToField("set_color")

Scene6.addChild(ROUTE49)
ROUTE50 = x3d.ROUTE()
ROUTE50.setFromNode("C_0")
ROUTE50.setFromField("fraction_changed")
ROUTE50.setToNode("SI_0")
ROUTE50.setToField("set_fraction")

Scene6.addChild(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.setFromNode("SI_0")
ROUTE51.setFromField("value_changed")
ROUTE51.setToNode("Animator_0")
ROUTE51.setToField("set_roughness")

Scene6.addChild(ROUTE51)

Scene6.addComments(x3d.CommentsBlock("""Example: Metal Sphere with animated roughness (Using initialize())"""))
Transform52 = x3d.Transform()
Transform52.setDEF("T_1")
Transform52.setTranslation(x3d.doubleToFloat([-10.411,0.2,-9.16]))
Shape53 = x3d.Shape()
Appearance54 = x3d.Appearance()
PhysicalMaterial55 = x3d.PhysicalMaterial()
PhysicalMaterial55.setDEF("M_1")
PhysicalMaterial55.setBaseColor(x3d.doubleToFloat([0.707,0.888,0.536]))
PhysicalMaterial55.setRoughness(0.2)

Appearance54.setMaterial(PhysicalMaterial55)

Shape53.setAppearance(Appearance54)
Sphere56 = x3d.Sphere()
Sphere56.setRadius(0.2)

Shape53.setGeometry(Sphere56)

Transform52.addChild(Shape53)

Scene6.addChild(Transform52)
TimeSensor57 = x3d.TimeSensor()
TimeSensor57.setDEF("C_1")
TimeSensor57.setCycleInterval(4.15)
TimeSensor57.setLoop(True)

Scene6.addChild(TimeSensor57)
PositionInterpolator58 = x3d.PositionInterpolator()
PositionInterpolator58.setDEF("PI_1")
PositionInterpolator58.setKey(x3d.doubleToFloat([0,0.5,1]))
PositionInterpolator58.setKeyValue(x3d.doubleToFloat([-10.411,0.2,-9.16,-10.411,0.6,-9.16,-10.411,0.2,-9.16]))

Scene6.addChild(PositionInterpolator58)
ScalarInterpolator59 = x3d.ScalarInterpolator()
ScalarInterpolator59.setDEF("SI_1")
ScalarInterpolator59.setKey(x3d.doubleToFloat([0,0.5,1]))
ScalarInterpolator59.setKeyValue(x3d.doubleToFloat([0.5,0,0.5]))

Scene6.addChild(ScalarInterpolator59)
Script60 = x3d.Script()
Script60.setDEF("Animator_1")
field61 = x3d.field()
field61.setName("set_roughness")
field61.setType("SFFloat")
field61.setAccessType("inputOnly")

Script60.addField(field61)
field62 = x3d.field()
field62.setName("targetMaterial")
field62.setType("SFNode")
field62.setAccessType("initializeOnly")
PhysicalMaterial63 = x3d.PhysicalMaterial()
PhysicalMaterial63.setUSE("M_1")

field62.addChild(PhysicalMaterial63)

Script60.addField(field62)

Script60.setSourceCode('''ecmascript:
        var matNode = null;

        function initialize() {
          matNode = targetMaterial.value;
        }

        function set_roughness(value, timestamp) {
          if (matNode) {
            matNode.roughness = value;
          }
        }''')

Scene6.addChild(Script60)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("C_1")
ROUTE64.setFromField("fraction_changed")
ROUTE64.setToNode("PI_1")
ROUTE64.setToField("set_fraction")

Scene6.addChild(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("PI_1")
ROUTE65.setFromField("value_changed")
ROUTE65.setToNode("T_1")
ROUTE65.setToField("set_translation")

Scene6.addChild(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("C_1")
ROUTE66.setFromField("fraction_changed")
ROUTE66.setToNode("SI_1")
ROUTE66.setToField("set_fraction")

Scene6.addChild(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.setFromNode("SI_1")
ROUTE67.setFromField("value_changed")
ROUTE67.setToNode("Animator_1")
ROUTE67.setToField("set_roughness")

Scene6.addChild(ROUTE67)

Scene6.addComments(x3d.CommentsBlock("""The extension-based spheres were already correct and need no changes"""))
Transform68 = x3d.Transform()
Transform68.setDEF("T_2")
Transform68.setTranslation(x3d.doubleToFloat([-10.155,0.2,-8.324]))
Shape69 = x3d.Shape()
Appearance70 = x3d.Appearance()
PhysicalMaterial71 = x3d.PhysicalMaterial()
PhysicalMaterial71.setTransmissionFactor("0.95")
PhysicalMaterial71.setRoughness(0.05)
IORMaterialExtension72 = x3d.IORMaterialExtension()
IORMaterialExtension72.setDEF("IOR_2")
IORMaterialExtension72.setIndexOfRefraction("1.5")

PhysicalMaterial71.setIORMaterialExtension(IORMaterialExtension72)

Appearance70.setMaterial(PhysicalMaterial71)

Shape69.setAppearance(Appearance70)
Sphere73 = x3d.Sphere()
Sphere73.setRadius(0.2)

Shape69.setGeometry(Sphere73)

Transform68.addChild(Shape69)

Scene6.addChild(Transform68)
TimeSensor74 = x3d.TimeSensor()
TimeSensor74.setDEF("C_2")
TimeSensor74.setCycleInterval(3.88)
TimeSensor74.setLoop(True)

Scene6.addChild(TimeSensor74)
PositionInterpolator75 = x3d.PositionInterpolator()
PositionInterpolator75.setDEF("PI_2")
PositionInterpolator75.setKey(x3d.doubleToFloat([0,0.5,1]))
PositionInterpolator75.setKeyValue(x3d.doubleToFloat([-10.155,0.2,-8.324,-10.155,0.6,-8.324,-10.155,0.2,-8.324]))

Scene6.addChild(PositionInterpolator75)
ScalarInterpolator76 = x3d.ScalarInterpolator()
ScalarInterpolator76.setDEF("SI_2")
ScalarInterpolator76.setKey(x3d.doubleToFloat([0,0.5,1]))
ScalarInterpolator76.setKeyValue(x3d.doubleToFloat([1.4,1.7,1.4]))

Scene6.addChild(ScalarInterpolator76)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromNode("C_2")
ROUTE77.setFromField("fraction_changed")
ROUTE77.setToNode("PI_2")
ROUTE77.setToField("set_fraction")

Scene6.addChild(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("PI_2")
ROUTE78.setFromField("value_changed")
ROUTE78.setToNode("T_2")
ROUTE78.setToField("set_translation")

Scene6.addChild(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromNode("C_2")
ROUTE79.setFromField("fraction_changed")
ROUTE79.setToNode("SI_2")
ROUTE79.setToField("set_fraction")

Scene6.addChild(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromNode("SI_2")
ROUTE80.setFromField("value_changed")
ROUTE80.setToNode("IOR_2")
ROUTE80.setToField("set_indexOfRefraction")

Scene6.addChild(ROUTE80)
Transform81 = x3d.Transform()
Transform81.setDEF("T_3")
Transform81.setTranslation(x3d.doubleToFloat([-10.518,0.2,-7.283]))
Shape82 = x3d.Shape()
Appearance83 = x3d.Appearance()
PhysicalMaterial84 = x3d.PhysicalMaterial()
PhysicalMaterial84.setTransmissionFactor("0.95")
PhysicalMaterial84.setRoughness(0.05)
PhysicalMaterial84.setIndexOfRefraction("1.33")
IridescenceMaterialExtension85 = x3d.IridescenceMaterialExtension()
IridescenceMaterialExtension85.setDEF("IRI_3")
IridescenceMaterialExtension85.setIridescence("1")
IridescenceMaterialExtension85.setIridescenceIndexOfRefraction("1.3")
IridescenceMaterialExtension85.setIridescenceThicknessMinimum("100")

PhysicalMaterial84.setIridescenceMaterialExtension(IridescenceMaterialExtension85)

Appearance83.setMaterial(PhysicalMaterial84)

Shape82.setAppearance(Appearance83)
Sphere86 = x3d.Sphere()
Sphere86.setRadius(0.2)

Shape82.setGeometry(Sphere86)

Transform81.addChild(Shape82)

Scene6.addChild(Transform81)
TimeSensor87 = x3d.TimeSensor()
TimeSensor87.setDEF("C_3")
TimeSensor87.setCycleInterval(6)
TimeSensor87.setLoop(True)

Scene6.addChild(TimeSensor87)
PositionInterpolator88 = x3d.PositionInterpolator()
PositionInterpolator88.setDEF("PI_3")
PositionInterpolator88.setKey(x3d.doubleToFloat([0,0.5,1]))
PositionInterpolator88.setKeyValue(x3d.doubleToFloat([-10.518,0.2,-7.283,-10.518,0.6,-7.283,-10.518,0.2,-7.283]))

Scene6.addChild(PositionInterpolator88)
ScalarInterpolator89 = x3d.ScalarInterpolator()
ScalarInterpolator89.setDEF("SI_3")
ScalarInterpolator89.setKey(x3d.doubleToFloat([0,0.5,1]))
ScalarInterpolator89.setKeyValue(x3d.doubleToFloat([100,700,100]))

Scene6.addChild(ScalarInterpolator89)
ROUTE90 = x3d.ROUTE()
ROUTE90.setFromNode("C_3")
ROUTE90.setFromField("fraction_changed")
ROUTE90.setToNode("PI_3")
ROUTE90.setToField("set_fraction")

Scene6.addChild(ROUTE90)
ROUTE91 = x3d.ROUTE()
ROUTE91.setFromNode("PI_3")
ROUTE91.setFromField("value_changed")
ROUTE91.setToNode("T_3")
ROUTE91.setToField("set_translation")

Scene6.addChild(ROUTE91)
ROUTE92 = x3d.ROUTE()
ROUTE92.setFromNode("C_3")
ROUTE92.setFromField("fraction_changed")
ROUTE92.setToNode("SI_3")
ROUTE92.setToField("set_fraction")

Scene6.addChild(ROUTE92)
ROUTE93 = x3d.ROUTE()
ROUTE93.setFromNode("SI_3")
ROUTE93.setFromField("value_changed")
ROUTE93.setToNode("IRI_3")
ROUTE93.setToField("set_iridescenceThicknessMaximum")

Scene6.addChild(ROUTE93)

X3D0.setScene(Scene6)
X3D0.toFileX3D("../data/bobblespheres.new.graalpy.x3d")
X3D0.toFileJSON("../data/bobblespheres.new.graalpy.x3dj")
