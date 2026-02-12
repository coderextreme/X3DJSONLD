print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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

X3D0.head = head1
Scene5 = x3d.Scene()
WorldInfo6 = x3d.WorldInfo()
WorldInfo6.title = "Bobble Spheres (PBR Full Animation)"

Scene5.children.append(WorldInfo6)
NavigationInfo7 = x3d.NavigationInfo()

Scene5.children.append(NavigationInfo7)
Background8 = x3d.Background()
Background8.skyAngle = [1.57]
Background8.skyColor = [(0.15, 0.25, 0.8),(0.9, 0.9, 0.9)]

Scene5.children.append(Background8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.description = "Initial Camera"
Viewpoint9.position = [-70,15,-25]
Viewpoint9.orientation = [0.147,0.989,0.005,-1.82]
Viewpoint9.fieldOfView = 0.349

Scene5.children.append(Viewpoint9)
DirectionalLight10 = x3d.DirectionalLight()
DirectionalLight10.intensity = 2
DirectionalLight10.direction = [-0.5,-1,-0.5]

Scene5.children.append(DirectionalLight10)
Transform11 = x3d.Transform()
Transform11.translation = [0,-1000,-1]
Shape12 = x3d.Shape()
Appearance13 = x3d.Appearance()
PhysicalMaterial14 = x3d.PhysicalMaterial()
PhysicalMaterial14.baseColor = [0.5,0.5,0.5]

Appearance13.material = PhysicalMaterial14

Shape12.appearance = Appearance13
Sphere15 = x3d.Sphere()
Sphere15.radius = 1000

Shape12.geometry = Sphere15

Transform11.children.append(Shape12)

Scene5.children.append(Transform11)
Transform16 = x3d.Transform()
Transform16.translation = [0,1,0]
Shape17 = x3d.Shape()
Appearance18 = x3d.Appearance()
PhysicalMaterial19 = x3d.PhysicalMaterial()
PhysicalMaterial19.baseColor = [0.9,0.9,0.9]
PhysicalMaterial19.roughness = 0

Appearance18.material = PhysicalMaterial19

Shape17.appearance = Appearance18
Sphere20 = x3d.Sphere()

Shape17.geometry = Sphere20

Transform16.children.append(Shape17)

Scene5.children.append(Transform16)
Transform21 = x3d.Transform()
Transform21.translation = [-4,1,0]
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
PhysicalMaterial24 = x3d.PhysicalMaterial()
PhysicalMaterial24.baseColor = [1,0.95,0.9]
PhysicalMaterial24.roughness = 0.05

Appearance23.material = PhysicalMaterial24

Shape22.appearance = Appearance23
Sphere25 = x3d.Sphere()

Shape22.geometry = Sphere25

Transform21.children.append(Shape22)

Scene5.children.append(Transform21)
Transform26 = x3d.Transform()
Transform26.translation = [4,1,0]
Shape27 = x3d.Shape()
Appearance28 = x3d.Appearance()
PhysicalMaterial29 = x3d.PhysicalMaterial()
PhysicalMaterial29.baseColor = [0.7,0.6,0.5]
PhysicalMaterial29.roughness = 0.1

Appearance28.material = PhysicalMaterial29

Shape27.appearance = Appearance28
Sphere30 = x3d.Sphere()

Shape27.geometry = Sphere30

Transform26.children.append(Shape27)

Scene5.children.append(Transform26)
Transform31 = x3d.Transform(DEF="T_0")
Transform31.translation = [-10.871,0.4108254,-10.453]
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
PhysicalMaterial34 = x3d.PhysicalMaterial(DEF="M_0")
PhysicalMaterial34.baseColor = [0.627,0.003,0.165]

Appearance33.material = PhysicalMaterial34

Shape32.appearance = Appearance33
Sphere35 = x3d.Sphere()
Sphere35.radius = 0.2

Shape32.geometry = Sphere35

Transform31.children.append(Shape32)

Scene5.children.append(Transform31)
TimeSensor36 = x3d.TimeSensor(DEF="C_0")
TimeSensor36.cycleInterval = 5.21
TimeSensor36.loop = True

Scene5.children.append(TimeSensor36)
PositionInterpolator37 = x3d.PositionInterpolator(DEF="PI_0")
PositionInterpolator37.key = [0,0.5,1]
PositionInterpolator37.keyValue = [(-10.871, 0.2, -10.453),(-10.871, 0.6, -10.453),(-10.871, 0.2, -10.453)]

Scene5.children.append(PositionInterpolator37)
ColorInterpolator38 = x3d.ColorInterpolator(DEF="CI_0")
ColorInterpolator38.key = [0,0.5,1]
ColorInterpolator38.keyValue = [(0.627, 0.003, 0.165),(0.011, 0.583, 0.443),(0.627, 0.003, 0.165)]

Scene5.children.append(ColorInterpolator38)
ScalarInterpolator39 = x3d.ScalarInterpolator(DEF="SI_0")
ScalarInterpolator39.key = [0,0.5,1]
ScalarInterpolator39.keyValue = [1,0.4,1]

Scene5.children.append(ScalarInterpolator39)
Script40 = x3d.Script(DEF="Animator_0")
field41 = x3d.field()
field41.accessType = "inputOnly"
field41.type = "SFColor"
field41.name = "set_color"

Script40.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOnly"
field42.type = "SFFloat"
field42.name = "set_roughness"

Script40.field.append(field42)
field43 = x3d.field()
field43.accessType = "initializeOnly"
field43.type = "SFNode"
field43.name = "targetMaterial"
PhysicalMaterial44 = x3d.PhysicalMaterial(USE="M_0")

field43.children.append(PhysicalMaterial44)

Script40.field.append(field43)

Script40.sourceCode = '''ecmascript:\n"+
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

Scene5.children.append(Script40)
Transform45 = x3d.Transform(DEF="T_1")
Transform45.translation = [-10.411,0.4288193,-9.16]
Shape46 = x3d.Shape()
Appearance47 = x3d.Appearance()
PhysicalMaterial48 = x3d.PhysicalMaterial(DEF="M_1")
PhysicalMaterial48.baseColor = [0.707,0.888,0.536]
PhysicalMaterial48.roughness = 0.2

Appearance47.material = PhysicalMaterial48

Shape46.appearance = Appearance47
Sphere49 = x3d.Sphere()
Sphere49.radius = 0.2

Shape46.geometry = Sphere49

Transform45.children.append(Shape46)

Scene5.children.append(Transform45)
TimeSensor50 = x3d.TimeSensor(DEF="C_1")
TimeSensor50.cycleInterval = 4.15
TimeSensor50.loop = True

Scene5.children.append(TimeSensor50)
PositionInterpolator51 = x3d.PositionInterpolator(DEF="PI_1")
PositionInterpolator51.key = [0,0.5,1]
PositionInterpolator51.keyValue = [(-10.411, 0.2, -9.16),(-10.411, 0.6, -9.16),(-10.411, 0.2, -9.16)]

Scene5.children.append(PositionInterpolator51)
ScalarInterpolator52 = x3d.ScalarInterpolator(DEF="SI_1")
ScalarInterpolator52.key = [0,0.5,1]
ScalarInterpolator52.keyValue = [0.5,0,0.5]

Scene5.children.append(ScalarInterpolator52)
Script53 = x3d.Script(DEF="Animator_1")
field54 = x3d.field()
field54.accessType = "inputOnly"
field54.type = "SFFloat"
field54.name = "set_roughness"

Script53.field.append(field54)
field55 = x3d.field()
field55.accessType = "initializeOnly"
field55.type = "SFNode"
field55.name = "targetMaterial"
PhysicalMaterial56 = x3d.PhysicalMaterial(USE="M_1")

field55.children.append(PhysicalMaterial56)

Script53.field.append(field55)

Script53.sourceCode = '''ecmascript:\n"+
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

Scene5.children.append(Script53)
Transform57 = x3d.Transform(DEF="T_2")
Transform57.translation = [-10.155,0.5931959,-8.324]
Shape58 = x3d.Shape()
Appearance59 = x3d.Appearance()
PhysicalMaterial60 = x3d.PhysicalMaterial()
PhysicalMaterial60.roughness = 0.05
IORMaterialExtension61 = x3d.IORMaterialExtension(DEF="IOR_2")
IORMaterialExtension61.indexOfRefraction = "1.694897"

PhysicalMaterial60.materialExtension.append(IORMaterialExtension61)

Appearance59.material = PhysicalMaterial60

Shape58.appearance = Appearance59
Sphere62 = x3d.Sphere()
Sphere62.radius = 0.2

Shape58.geometry = Sphere62

Transform57.children.append(Shape58)

Scene5.children.append(Transform57)
TimeSensor63 = x3d.TimeSensor(DEF="C_2")
TimeSensor63.cycleInterval = 3.88
TimeSensor63.loop = True

Scene5.children.append(TimeSensor63)
PositionInterpolator64 = x3d.PositionInterpolator(DEF="PI_2")
PositionInterpolator64.key = [0,0.5,1]
PositionInterpolator64.keyValue = [(-10.155, 0.2, -8.324),(-10.155, 0.6, -8.324),(-10.155, 0.2, -8.324)]

Scene5.children.append(PositionInterpolator64)
ScalarInterpolator65 = x3d.ScalarInterpolator(DEF="SI_2")
ScalarInterpolator65.key = [0,0.5,1]
ScalarInterpolator65.keyValue = [1.4,1.7,1.4]

Scene5.children.append(ScalarInterpolator65)
Transform66 = x3d.Transform(DEF="T_3")
Transform66.translation = [-10.518,0.3316,-7.283]
Shape67 = x3d.Shape()
Appearance68 = x3d.Appearance()
PhysicalMaterial69 = x3d.PhysicalMaterial()
PhysicalMaterial69.roughness = 0.05
IridescenceMaterialExtension70 = x3d.IridescenceMaterialExtension(DEF="IRI_3")
IridescenceMaterialExtension70.iridescence = "1"
IridescenceMaterialExtension70.iridescenceThicknessMaximum = "297.4"

PhysicalMaterial69.descenceMaterialExtension.append(IridescenceMaterialExtension70)

Appearance68.material = PhysicalMaterial69

Shape67.appearance = Appearance68
Sphere71 = x3d.Sphere()
Sphere71.radius = 0.2

Shape67.geometry = Sphere71

Transform66.children.append(Shape67)

Scene5.children.append(Transform66)
TimeSensor72 = x3d.TimeSensor(DEF="C_3")
TimeSensor72.cycleInterval = 6
TimeSensor72.loop = True

Scene5.children.append(TimeSensor72)
PositionInterpolator73 = x3d.PositionInterpolator(DEF="PI_3")
PositionInterpolator73.key = [0,0.5,1]
PositionInterpolator73.keyValue = [(-10.518, 0.2, -7.283),(-10.518, 0.6, -7.283),(-10.518, 0.2, -7.283)]

Scene5.children.append(PositionInterpolator73)
ScalarInterpolator74 = x3d.ScalarInterpolator(DEF="SI_3")
ScalarInterpolator74.key = [0,0.5,1]
ScalarInterpolator74.keyValue = [100,700,100]

Scene5.children.append(ScalarInterpolator74)
ROUTE75 = x3d.ROUTE()
ROUTE75.fromNode = "C_0"
ROUTE75.fromField = "fraction_changed"
ROUTE75.toNode = "PI_0"
ROUTE75.toField = "set_fraction"

Scene5.children.append(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.fromNode = "PI_0"
ROUTE76.fromField = "value_changed"
ROUTE76.toNode = "T_0"
ROUTE76.toField = "set_translation"

Scene5.children.append(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.fromNode = "C_0"
ROUTE77.fromField = "fraction_changed"
ROUTE77.toNode = "CI_0"
ROUTE77.toField = "set_fraction"

Scene5.children.append(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.fromNode = "CI_0"
ROUTE78.fromField = "value_changed"
ROUTE78.toNode = "Animator_0"
ROUTE78.toField = "set_color"

Scene5.children.append(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.fromNode = "C_0"
ROUTE79.fromField = "fraction_changed"
ROUTE79.toNode = "SI_0"
ROUTE79.toField = "set_fraction"

Scene5.children.append(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.fromNode = "SI_0"
ROUTE80.fromField = "value_changed"
ROUTE80.toNode = "Animator_0"
ROUTE80.toField = "set_roughness"

Scene5.children.append(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.fromNode = "C_1"
ROUTE81.fromField = "fraction_changed"
ROUTE81.toNode = "PI_1"
ROUTE81.toField = "set_fraction"

Scene5.children.append(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.fromNode = "PI_1"
ROUTE82.fromField = "value_changed"
ROUTE82.toNode = "T_1"
ROUTE82.toField = "set_translation"

Scene5.children.append(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.fromNode = "C_1"
ROUTE83.fromField = "fraction_changed"
ROUTE83.toNode = "SI_1"
ROUTE83.toField = "set_fraction"

Scene5.children.append(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.fromNode = "SI_1"
ROUTE84.fromField = "value_changed"
ROUTE84.toNode = "Animator_1"
ROUTE84.toField = "set_roughness"

Scene5.children.append(ROUTE84)
ROUTE85 = x3d.ROUTE()
ROUTE85.fromNode = "C_2"
ROUTE85.fromField = "fraction_changed"
ROUTE85.toNode = "PI_2"
ROUTE85.toField = "set_fraction"

Scene5.children.append(ROUTE85)
ROUTE86 = x3d.ROUTE()
ROUTE86.fromNode = "PI_2"
ROUTE86.fromField = "value_changed"
ROUTE86.toNode = "T_2"
ROUTE86.toField = "set_translation"

Scene5.children.append(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.fromNode = "C_2"
ROUTE87.fromField = "fraction_changed"
ROUTE87.toNode = "SI_2"
ROUTE87.toField = "set_fraction"

Scene5.children.append(ROUTE87)
ROUTE88 = x3d.ROUTE()
ROUTE88.fromNode = "SI_2"
ROUTE88.fromField = "value_changed"
ROUTE88.toNode = "IOR_2"
ROUTE88.toField = "set_indexOfRefraction"

Scene5.children.append(ROUTE88)
ROUTE89 = x3d.ROUTE()
ROUTE89.fromNode = "C_3"
ROUTE89.fromField = "fraction_changed"
ROUTE89.toNode = "PI_3"
ROUTE89.toField = "set_fraction"

Scene5.children.append(ROUTE89)
ROUTE90 = x3d.ROUTE()
ROUTE90.fromNode = "PI_3"
ROUTE90.fromField = "value_changed"
ROUTE90.toNode = "T_3"
ROUTE90.toField = "set_translation"

Scene5.children.append(ROUTE90)
ROUTE91 = x3d.ROUTE()
ROUTE91.fromNode = "C_3"
ROUTE91.fromField = "fraction_changed"
ROUTE91.toNode = "SI_3"
ROUTE91.toField = "set_fraction"

Scene5.children.append(ROUTE91)
ROUTE92 = x3d.ROUTE()
ROUTE92.fromNode = "SI_3"
ROUTE92.fromField = "value_changed"
ROUTE92.toNode = "IRI_3"
ROUTE92.toField = "set_iridescenceThicknessMaximum"

Scene5.children.append(ROUTE92)

X3D0.Scene = Scene5
f = open("../data/bobblespheres.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bobblespheres.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bobblespheres.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
