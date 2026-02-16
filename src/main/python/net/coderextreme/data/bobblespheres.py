print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "X_ITE"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "Bobble Spheres Full Animation (Final Working)"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Generated from Python script"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
WorldInfo7 = x3d.WorldInfo()
WorldInfo7.title = "Bobble Spheres (PBR Full Animation)"

Scene6.children.append(WorldInfo7)
NavigationInfo8 = x3d.NavigationInfo()

Scene6.children.append(NavigationInfo8)
Background9 = x3d.Background()
Background9.skyAngle = [1.57]
Background9.skyColor = [(0.15, 0.25, 0.8),(0.9, 0.9, 0.9)]

Scene6.children.append(Background9)
Viewpoint10 = x3d.Viewpoint()
Viewpoint10.description = "Initial Camera"
Viewpoint10.position = [-70,15,-25]
Viewpoint10.orientation = [0.147,0.989,0.005,-1.82]
Viewpoint10.fieldOfView = 0.349

Scene6.children.append(Viewpoint10)
DirectionalLight11 = x3d.DirectionalLight()
DirectionalLight11.direction = [-0.5,-1,-0.5]
DirectionalLight11.intensity = 2

Scene6.children.append(DirectionalLight11)
Scene6.children.append(x3d.Comment("""Static objects"""))
Transform12 = x3d.Transform()
Transform12.translation = [0,-1000,-1]
Shape13 = x3d.Shape()
Appearance14 = x3d.Appearance()
PhysicalMaterial15 = x3d.PhysicalMaterial()
PhysicalMaterial15.baseColor = [0.5,0.5,0.5]

Appearance14.material = PhysicalMaterial15

Shape13.appearance = Appearance14
Sphere16 = x3d.Sphere()
Sphere16.radius = 1000

Shape13.geometry = Sphere16

Transform12.children.append(Shape13)

Scene6.children.append(Transform12)
Transform17 = x3d.Transform()
Transform17.translation = [0,1,0]
Shape18 = x3d.Shape()
Appearance19 = x3d.Appearance()
PhysicalMaterial20 = x3d.PhysicalMaterial()
PhysicalMaterial20.baseColor = [0.9,0.9,0.9]
PhysicalMaterial20.transmissionFactor = "0.9"
PhysicalMaterial20.roughness = 0
PhysicalMaterial20.indexOfRefraction = "1.5"

Appearance19.material = PhysicalMaterial20

Shape18.appearance = Appearance19
Sphere21 = x3d.Sphere()

Shape18.geometry = Sphere21

Transform17.children.append(Shape18)

Scene6.children.append(Transform17)
Transform22 = x3d.Transform()
Transform22.translation = [-4,1,0]
Shape23 = x3d.Shape()
Appearance24 = x3d.Appearance()
PhysicalMaterial25 = x3d.PhysicalMaterial()
PhysicalMaterial25.baseColor = [1,0.95,0.9]
PhysicalMaterial25.transmissionFactor = "0.8"
PhysicalMaterial25.roughness = 0.05
PhysicalMaterial25.indexOfRefraction = "1.1"

Appearance24.material = PhysicalMaterial25

Shape23.appearance = Appearance24
Sphere26 = x3d.Sphere()

Shape23.geometry = Sphere26

Transform22.children.append(Shape23)

Scene6.children.append(Transform22)
Transform27 = x3d.Transform()
Transform27.translation = [4,1,0]
Shape28 = x3d.Shape()
Appearance29 = x3d.Appearance()
PhysicalMaterial30 = x3d.PhysicalMaterial()
PhysicalMaterial30.baseColor = [0.7,0.6,0.5]
PhysicalMaterial30.roughness = 0.1

Appearance29.material = PhysicalMaterial30

Shape28.appearance = Appearance29
Sphere31 = x3d.Sphere()

Shape28.geometry = Sphere31

Transform27.children.append(Shape28)

Scene6.children.append(Transform27)
Scene6.children.append(x3d.Comment("""=== DYNAMICALLY GENERATED SPHERES ==="""))
Scene6.children.append(x3d.Comment("""Example: Matte Sphere with animated color and roughness (Using initialize())"""))
Transform32 = x3d.Transform(DEF="T_0")
Transform32.translation = [-10.871,0.2,-10.453]
Shape33 = x3d.Shape()
Appearance34 = x3d.Appearance()
PhysicalMaterial35 = x3d.PhysicalMaterial(DEF="M_0")
PhysicalMaterial35.baseColor = [0.627,0.003,0.165]

Appearance34.material = PhysicalMaterial35

Shape33.appearance = Appearance34
Sphere36 = x3d.Sphere()
Sphere36.radius = 0.2

Shape33.geometry = Sphere36

Transform32.children.append(Shape33)

Scene6.children.append(Transform32)
TimeSensor37 = x3d.TimeSensor(DEF="C_0")
TimeSensor37.cycleInterval = 5.21
TimeSensor37.loop = True

Scene6.children.append(TimeSensor37)
PositionInterpolator38 = x3d.PositionInterpolator(DEF="PI_0")
PositionInterpolator38.key = [0,0.5,1]
PositionInterpolator38.keyValue = [(-10.871, 0.2, -10.453),(-10.871, 0.6, -10.453),(-10.871, 0.2, -10.453)]

Scene6.children.append(PositionInterpolator38)
ColorInterpolator39 = x3d.ColorInterpolator(DEF="CI_0")
ColorInterpolator39.key = [0,0.5,1]
ColorInterpolator39.keyValue = [(0.627, 0.003, 0.165),(0.011, 0.583, 0.443),(0.627, 0.003, 0.165)]

Scene6.children.append(ColorInterpolator39)
ScalarInterpolator40 = x3d.ScalarInterpolator(DEF="SI_0")
ScalarInterpolator40.key = [0,0.5,1]
ScalarInterpolator40.keyValue = [1,0.4,1]

Scene6.children.append(ScalarInterpolator40)
Script41 = x3d.Script(DEF="Animator_0")
field42 = x3d.field()
field42.name = "set_color"
field42.type = "SFColor"
field42.accessType = "inputOnly"

Script41.field.append(field42)
field43 = x3d.field()
field43.name = "set_roughness"
field43.type = "SFFloat"
field43.accessType = "inputOnly"

Script41.field.append(field43)
field44 = x3d.field()
field44.name = "targetMaterial"
field44.type = "SFNode"
field44.accessType = "initializeOnly"
PhysicalMaterial45 = x3d.PhysicalMaterial(USE="M_0")

field44.children.append(PhysicalMaterial45)

Script41.field.append(field44)

Script41.sourceCode = '''ecmascript:\n"+
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
"        }'''

Scene6.children.append(Script41)
ROUTE46 = x3d.ROUTE()
ROUTE46.fromNode = "C_0"
ROUTE46.fromField = "fraction_changed"
ROUTE46.toNode = "PI_0"
ROUTE46.toField = "set_fraction"

Scene6.children.append(ROUTE46)
ROUTE47 = x3d.ROUTE()
ROUTE47.fromNode = "PI_0"
ROUTE47.fromField = "value_changed"
ROUTE47.toNode = "T_0"
ROUTE47.toField = "set_translation"

Scene6.children.append(ROUTE47)
ROUTE48 = x3d.ROUTE()
ROUTE48.fromNode = "C_0"
ROUTE48.fromField = "fraction_changed"
ROUTE48.toNode = "CI_0"
ROUTE48.toField = "set_fraction"

Scene6.children.append(ROUTE48)
ROUTE49 = x3d.ROUTE()
ROUTE49.fromNode = "CI_0"
ROUTE49.fromField = "value_changed"
ROUTE49.toNode = "Animator_0"
ROUTE49.toField = "set_color"

Scene6.children.append(ROUTE49)
ROUTE50 = x3d.ROUTE()
ROUTE50.fromNode = "C_0"
ROUTE50.fromField = "fraction_changed"
ROUTE50.toNode = "SI_0"
ROUTE50.toField = "set_fraction"

Scene6.children.append(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.fromNode = "SI_0"
ROUTE51.fromField = "value_changed"
ROUTE51.toNode = "Animator_0"
ROUTE51.toField = "set_roughness"

Scene6.children.append(ROUTE51)
Scene6.children.append(x3d.Comment("""Example: Metal Sphere with animated roughness (Using initialize())"""))
Transform52 = x3d.Transform(DEF="T_1")
Transform52.translation = [-10.411,0.2,-9.16]
Shape53 = x3d.Shape()
Appearance54 = x3d.Appearance()
PhysicalMaterial55 = x3d.PhysicalMaterial(DEF="M_1")
PhysicalMaterial55.baseColor = [0.707,0.888,0.536]
PhysicalMaterial55.roughness = 0.2

Appearance54.material = PhysicalMaterial55

Shape53.appearance = Appearance54
Sphere56 = x3d.Sphere()
Sphere56.radius = 0.2

Shape53.geometry = Sphere56

Transform52.children.append(Shape53)

Scene6.children.append(Transform52)
TimeSensor57 = x3d.TimeSensor(DEF="C_1")
TimeSensor57.cycleInterval = 4.15
TimeSensor57.loop = True

Scene6.children.append(TimeSensor57)
PositionInterpolator58 = x3d.PositionInterpolator(DEF="PI_1")
PositionInterpolator58.key = [0,0.5,1]
PositionInterpolator58.keyValue = [(-10.411, 0.2, -9.16),(-10.411, 0.6, -9.16),(-10.411, 0.2, -9.16)]

Scene6.children.append(PositionInterpolator58)
ScalarInterpolator59 = x3d.ScalarInterpolator(DEF="SI_1")
ScalarInterpolator59.key = [0,0.5,1]
ScalarInterpolator59.keyValue = [0.5,0,0.5]

Scene6.children.append(ScalarInterpolator59)
Script60 = x3d.Script(DEF="Animator_1")
field61 = x3d.field()
field61.name = "set_roughness"
field61.type = "SFFloat"
field61.accessType = "inputOnly"

Script60.field.append(field61)
field62 = x3d.field()
field62.name = "targetMaterial"
field62.type = "SFNode"
field62.accessType = "initializeOnly"
PhysicalMaterial63 = x3d.PhysicalMaterial(USE="M_1")

field62.children.append(PhysicalMaterial63)

Script60.field.append(field62)

Script60.sourceCode = '''ecmascript:\n"+
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
"        }'''

Scene6.children.append(Script60)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "C_1"
ROUTE64.fromField = "fraction_changed"
ROUTE64.toNode = "PI_1"
ROUTE64.toField = "set_fraction"

Scene6.children.append(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromNode = "PI_1"
ROUTE65.fromField = "value_changed"
ROUTE65.toNode = "T_1"
ROUTE65.toField = "set_translation"

Scene6.children.append(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.fromNode = "C_1"
ROUTE66.fromField = "fraction_changed"
ROUTE66.toNode = "SI_1"
ROUTE66.toField = "set_fraction"

Scene6.children.append(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.fromNode = "SI_1"
ROUTE67.fromField = "value_changed"
ROUTE67.toNode = "Animator_1"
ROUTE67.toField = "set_roughness"

Scene6.children.append(ROUTE67)
Scene6.children.append(x3d.Comment("""The extension-based spheres were already correct and need no changes"""))
Transform68 = x3d.Transform(DEF="T_2")
Transform68.translation = [-10.155,0.2,-8.324]
Shape69 = x3d.Shape()
Appearance70 = x3d.Appearance()
PhysicalMaterial71 = x3d.PhysicalMaterial()
PhysicalMaterial71.transmissionFactor = "0.95"
PhysicalMaterial71.roughness = 0.05
IORMaterialExtension72 = x3d.IORMaterialExtension(DEF="IOR_2")
IORMaterialExtension72.indexOfRefraction = "1.5"

PhysicalMaterial71.materialExtension.append(IORMaterialExtension72)

Appearance70.material = PhysicalMaterial71

Shape69.appearance = Appearance70
Sphere73 = x3d.Sphere()
Sphere73.radius = 0.2

Shape69.geometry = Sphere73

Transform68.children.append(Shape69)

Scene6.children.append(Transform68)
TimeSensor74 = x3d.TimeSensor(DEF="C_2")
TimeSensor74.cycleInterval = 3.88
TimeSensor74.loop = True

Scene6.children.append(TimeSensor74)
PositionInterpolator75 = x3d.PositionInterpolator(DEF="PI_2")
PositionInterpolator75.key = [0,0.5,1]
PositionInterpolator75.keyValue = [(-10.155, 0.2, -8.324),(-10.155, 0.6, -8.324),(-10.155, 0.2, -8.324)]

Scene6.children.append(PositionInterpolator75)
ScalarInterpolator76 = x3d.ScalarInterpolator(DEF="SI_2")
ScalarInterpolator76.key = [0,0.5,1]
ScalarInterpolator76.keyValue = [1.4,1.7,1.4]

Scene6.children.append(ScalarInterpolator76)
ROUTE77 = x3d.ROUTE()
ROUTE77.fromNode = "C_2"
ROUTE77.fromField = "fraction_changed"
ROUTE77.toNode = "PI_2"
ROUTE77.toField = "set_fraction"

Scene6.children.append(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.fromNode = "PI_2"
ROUTE78.fromField = "value_changed"
ROUTE78.toNode = "T_2"
ROUTE78.toField = "set_translation"

Scene6.children.append(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.fromNode = "C_2"
ROUTE79.fromField = "fraction_changed"
ROUTE79.toNode = "SI_2"
ROUTE79.toField = "set_fraction"

Scene6.children.append(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.fromNode = "SI_2"
ROUTE80.fromField = "value_changed"
ROUTE80.toNode = "IOR_2"
ROUTE80.toField = "set_indexOfRefraction"

Scene6.children.append(ROUTE80)
Transform81 = x3d.Transform(DEF="T_3")
Transform81.translation = [-10.518,0.2,-7.283]
Shape82 = x3d.Shape()
Appearance83 = x3d.Appearance()
PhysicalMaterial84 = x3d.PhysicalMaterial()
PhysicalMaterial84.transmissionFactor = "0.95"
PhysicalMaterial84.roughness = 0.05
PhysicalMaterial84.indexOfRefraction = "1.33"
IridescenceMaterialExtension85 = x3d.IridescenceMaterialExtension(DEF="IRI_3")
IridescenceMaterialExtension85.iridescence = "1"
IridescenceMaterialExtension85.iridescenceIndexOfRefraction = "1.3"
IridescenceMaterialExtension85.iridescenceThicknessMinimum = "100"

PhysicalMaterial84.descenceMaterialExtension.append(IridescenceMaterialExtension85)

Appearance83.material = PhysicalMaterial84

Shape82.appearance = Appearance83
Sphere86 = x3d.Sphere()
Sphere86.radius = 0.2

Shape82.geometry = Sphere86

Transform81.children.append(Shape82)

Scene6.children.append(Transform81)
TimeSensor87 = x3d.TimeSensor(DEF="C_3")
TimeSensor87.cycleInterval = 6
TimeSensor87.loop = True

Scene6.children.append(TimeSensor87)
PositionInterpolator88 = x3d.PositionInterpolator(DEF="PI_3")
PositionInterpolator88.key = [0,0.5,1]
PositionInterpolator88.keyValue = [(-10.518, 0.2, -7.283),(-10.518, 0.6, -7.283),(-10.518, 0.2, -7.283)]

Scene6.children.append(PositionInterpolator88)
ScalarInterpolator89 = x3d.ScalarInterpolator(DEF="SI_3")
ScalarInterpolator89.key = [0,0.5,1]
ScalarInterpolator89.keyValue = [100,700,100]

Scene6.children.append(ScalarInterpolator89)
ROUTE90 = x3d.ROUTE()
ROUTE90.fromNode = "C_3"
ROUTE90.fromField = "fraction_changed"
ROUTE90.toNode = "PI_3"
ROUTE90.toField = "set_fraction"

Scene6.children.append(ROUTE90)
ROUTE91 = x3d.ROUTE()
ROUTE91.fromNode = "PI_3"
ROUTE91.fromField = "value_changed"
ROUTE91.toNode = "T_3"
ROUTE91.toField = "set_translation"

Scene6.children.append(ROUTE91)
ROUTE92 = x3d.ROUTE()
ROUTE92.fromNode = "C_3"
ROUTE92.fromField = "fraction_changed"
ROUTE92.toNode = "SI_3"
ROUTE92.toField = "set_fraction"

Scene6.children.append(ROUTE92)
ROUTE93 = x3d.ROUTE()
ROUTE93.fromNode = "SI_3"
ROUTE93.fromField = "value_changed"
ROUTE93.toNode = "IRI_3"
ROUTE93.toField = "set_iridescenceThicknessMaximum"

Scene6.children.append(ROUTE93)

X3D0.Scene = Scene6
f = open("../data/bobblespheres.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bobblespheres.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bobblespheres.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
