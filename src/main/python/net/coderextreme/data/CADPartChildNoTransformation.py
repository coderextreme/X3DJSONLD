print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "CADInterchange"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "CADGeometry"
component2.level = 2

head1.children.append(component2)
component3 = x3d.component()
component3.name = "EnvironmentalEffects"
component3.level = 1

head1.children.append(component3)
meta4 = x3d.meta()
meta4.name = "title"
meta4.content = "CADPartChildNoTransformation.x3d"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "description"
meta5.content = "Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children."

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "creator"
meta6.content = "Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "translator"
meta7.content = "Vince Marchetti bushing generation using python scripts"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "https://www.web3d.org/member-only/mantis/view.php?id=528"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "warning"
meta9.content = "This scene is intended for specification development only."

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "created"
meta10.content = "29 June 2012"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "modified"
meta11.content = "20 October 2019"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "identifier"
meta12.content = "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "license"
meta14.content = "../license.html"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.title = "CADPartChildNoTransformation.x3d"

Scene15.children.append(WorldInfo16)
Background17 = x3d.Background()
Background17.skyColor = [(0.9607843, 1, 0.9607843)]

Scene15.children.append(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.description = "Hello CAD bushing"
Viewpoint18.orientation = [1,0,0,-0.321751]
Viewpoint18.position = [0,5,15]

Scene15.children.append(Viewpoint18)
CADAssembly19 = x3d.CADAssembly()
CADAssembly19.name = "DesignPatternAssembly"
CADPart20 = x3d.CADPart()
CADPart20.name = "CADPartExample"
CADPart20.children.append(x3d.Comment("""the rotation and translation attributes serve to position the bushing within the assembly"""))
CADFace21 = x3d.CADFace()
CADFace21.name = "outerSurface"
Shape22 = x3d.Shape()
Shape22.children.append(x3d.Comment("""note solid='true' and so one-sided external rendering only"""))
Cylinder23 = x3d.Cylinder()
Cylinder23.bottom = False
Cylinder23.height = 3
Cylinder23.radius = 2
Cylinder23.top = False

Shape22.geometry = Cylinder23
Appearance24 = x3d.Appearance(DEF="AppearanceGrey")
Material25 = x3d.Material()

Appearance24.material = Material25

Shape22.appearance = Appearance24

CADFace21.shape = Shape22

CADPart20.children.append(CADFace21)
CADFace26 = x3d.CADFace()
CADFace26.name = "innerSurface"
Shape27 = x3d.Shape()
Shape27.children.append(x3d.Comment("""note solid='false' and so two-sided internal + external rendering"""))
Cylinder28 = x3d.Cylinder()
Cylinder28.bottom = False
Cylinder28.height = 3
Cylinder28.solid = False
Cylinder28.top = False

Shape27.geometry = Cylinder28
Appearance29 = x3d.Appearance(USE="AppearanceGrey")

Shape27.appearance = Appearance29

CADFace26.shape = Shape27

CADPart20.children.append(CADFace26)
CADFace30 = x3d.CADFace()
CADFace30.name = "topCap"
Shape31 = x3d.Shape()
IndexedTriangleSet32 = x3d.IndexedTriangleSet()
IndexedTriangleSet32.index = [0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]
Coordinate33 = x3d.Coordinate()
Coordinate33.point = [(2, 1.5, 0),(1, 1.5, 0),(1.9616, 1.5, 0.3902),(0.9808, 1.5, 0.1951),(1.8478, 1.5, 0.7654),(0.9239, 1.5, 0.3827),(1.6629, 1.5, 1.1111),(0.8315, 1.5, 0.5556),(1.4142, 1.5, 1.4142),(0.7071, 1.5, 0.7071),(1.1111, 1.5, 1.6629),(0.5556, 1.5, 0.8315),(0.7654, 1.5, 1.8478),(0.3827, 1.5, 0.9239),(0.3902, 1.5, 1.9616),(0.1951, 1.5, 0.9808),(0, 1.5, 2),(0, 1.5, 1),(-0.3902, 1.5, 1.9616),(-0.1951, 1.5, 0.9808),(-0.7654, 1.5, 1.8478),(-0.3827, 1.5, 0.9239),(-1.1111, 1.5, 1.6629),(-0.5556, 1.5, 0.8315),(-1.4142, 1.5, 1.4142),(-0.7071, 1.5, 0.7071),(-1.6629, 1.5, 1.1111),(-0.8315, 1.5, 0.5556),(-1.8478, 1.5, 0.7654),(-0.9239, 1.5, 0.3827),(-1.9616, 1.5, 0.3902),(-0.9808, 1.5, 0.1951),(-2, 1.5, 0),(-1, 1.5, 0),(-1.9616, 1.5, -0.3902),(-0.9808, 1.5, -0.1951),(-1.8478, 1.5, -0.7654),(-0.9239, 1.5, -0.3827),(-1.6629, 1.5, -1.1111),(-0.8315, 1.5, -0.5556),(-1.4142, 1.5, -1.4142),(-0.7071, 1.5, -0.7071),(-1.1111, 1.5, -1.6629),(-0.5556, 1.5, -0.8315),(-0.7654, 1.5, -1.8478),(-0.3827, 1.5, -0.9239),(-0.3902, 1.5, -1.9616),(-0.1951, 1.5, -0.9808),(0, 1.5, -2),(0, 1.5, -1),(0.3902, 1.5, -1.9616),(0.1951, 1.5, -0.9808),(0.7654, 1.5, -1.8478),(0.3827, 1.5, -0.9239),(1.1111, 1.5, -1.6629),(0.5556, 1.5, -0.8315),(1.4142, 1.5, -1.4142),(0.7071, 1.5, -0.7071),(1.6629, 1.5, -1.1111),(0.8315, 1.5, -0.5556),(1.8478, 1.5, -0.7654),(0.9239, 1.5, -0.3827),(1.9616, 1.5, -0.3902),(0.9808, 1.5, -0.1951),(2, 1.5, 0),(1, 1.5, 0)]

IndexedTriangleSet32.coord = Coordinate33

Shape31.geometry = IndexedTriangleSet32
Appearance34 = x3d.Appearance(USE="AppearanceGrey")

Shape31.appearance = Appearance34

CADFace30.shape = Shape31

CADPart20.children.append(CADFace30)
CADFace35 = x3d.CADFace()
CADFace35.name = "bottomCap"
Shape36 = x3d.Shape()
IndexedTriangleSet37 = x3d.IndexedTriangleSet()
IndexedTriangleSet37.index = [0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]
Coordinate38 = x3d.Coordinate()
Coordinate38.point = [(2, -1.5, 0),(1, -1.5, 0),(1.9616, -1.5, -0.3902),(0.9808, -1.5, -0.1951),(1.8478, -1.5, -0.7654),(0.9239, -1.5, -0.3827),(1.6629, -1.5, -1.1111),(0.8315, -1.5, -0.5556),(1.4142, -1.5, -1.4142),(0.7071, -1.5, -0.7071),(1.1111, -1.5, -1.6629),(0.5556, -1.5, -0.8315),(0.7654, -1.5, -1.8478),(0.3827, -1.5, -0.9239),(0.3902, -1.5, -1.9616),(0.1951, -1.5, -0.9808),(0, -1.5, -2),(0, -1.5, -1),(-0.3902, -1.5, -1.9616),(-0.1951, -1.5, -0.9808),(-0.7654, -1.5, -1.8478),(-0.3827, -1.5, -0.9239),(-1.1111, -1.5, -1.6629),(-0.5556, -1.5, -0.8315),(-1.4142, -1.5, -1.4142),(-0.7071, -1.5, -0.7071),(-1.6629, -1.5, -1.1111),(-0.8315, -1.5, -0.5556),(-1.8478, -1.5, -0.7654),(-0.9239, -1.5, -0.3827),(-1.9616, -1.5, -0.3902),(-0.9808, -1.5, -0.1951),(-2, -1.5, 0),(-1, -1.5, 0),(-1.9616, -1.5, 0.3902),(-0.9808, -1.5, 0.1951),(-1.8478, -1.5, 0.7654),(-0.9239, -1.5, 0.3827),(-1.6629, -1.5, 1.1111),(-0.8315, -1.5, 0.5556),(-1.4142, -1.5, 1.4142),(-0.7071, -1.5, 0.7071),(-1.1111, -1.5, 1.6629),(-0.5556, -1.5, 0.8315),(-0.7654, -1.5, 1.8478),(-0.3827, -1.5, 0.9239),(-0.3902, -1.5, 1.9616),(-0.1951, -1.5, 0.9808),(0, -1.5, 2),(0, -1.5, 1),(0.3902, -1.5, 1.9616),(0.1951, -1.5, 0.9808),(0.7654, -1.5, 1.8478),(0.3827, -1.5, 0.9239),(1.1111, -1.5, 1.6629),(0.5556, -1.5, 0.8315),(1.4142, -1.5, 1.4142),(0.7071, -1.5, 0.7071),(1.6629, -1.5, 1.1111),(0.8315, -1.5, 0.5556),(1.8478, -1.5, 0.7654),(0.9239, -1.5, 0.3827),(1.9616, -1.5, 0.3902),(0.9808, -1.5, 0.1951),(2, -1.5, 0),(1, -1.5, 0)]

IndexedTriangleSet37.coord = Coordinate38

Shape36.geometry = IndexedTriangleSet37
Appearance39 = x3d.Appearance(USE="AppearanceGrey")

Shape36.appearance = Appearance39

CADFace35.shape = Shape36

CADPart20.children.append(CADFace35)

CADAssembly19.children.append(CADPart20)

Scene15.children.append(CADAssembly19)

X3D0.Scene = Scene15
f = open("../data/CADPartChildNoTransformation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/CADPartChildNoTransformation.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/CADPartChildNoTransformation.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
