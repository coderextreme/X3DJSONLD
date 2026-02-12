print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "CADInterchange"
X3D0.version = "4.1"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "EnvironmentalEffects"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "CADPartChildNoTransformation.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "translator"
meta6.content = "Vince Marchetti bushing generation using python scripts"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "https://www.web3d.org/member-only/mantis/view.php?id=528"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "warning"
meta8.content = "This scene is intended for specification development only."

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "created"
meta9.content = "29 June 2012"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "modified"
meta10.content = "Mon, 09 Feb 2026 12:22:59 GMT"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "identifier"
meta11.content = "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d"

head1.children.append(meta11)

X3D0.head = head1
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.title = "CADPartChildNoTransformation.x3d"

Scene12.children.append(WorldInfo13)
Background14 = x3d.Background()
Background14.skyColor = [(0.9607843, 1, 0.9607843)]

Scene12.children.append(Background14)
Viewpoint15 = x3d.Viewpoint()
Viewpoint15.description = "Hello CAD bushing"
Viewpoint15.position = [0,5,15]
Viewpoint15.orientation = [1,0,0,-0.321751]

Scene12.children.append(Viewpoint15)
CADAssembly16 = x3d.CADAssembly()
CADAssembly16.name = "DesignPatternAssembly"
CADPart17 = x3d.CADPart()
CADPart17.name = "CADPartExample"
CADFace18 = x3d.CADFace()
CADFace18.name = "outerSurface"
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance(DEF="AppearanceGrey")
Material21 = x3d.Material()

Appearance20.material = Material21

Shape19.appearance = Appearance20
Cylinder22 = x3d.Cylinder()
Cylinder22.top = False
Cylinder22.bottom = False
Cylinder22.height = 3
Cylinder22.radius = 2

Shape19.geometry = Cylinder22

CADFace18.shape = Shape19

CADPart17.children.append(CADFace18)
CADFace23 = x3d.CADFace()
CADFace23.name = "innerSurface"
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance(USE="AppearanceGrey")

Shape24.appearance = Appearance25
Cylinder26 = x3d.Cylinder()
Cylinder26.top = False
Cylinder26.bottom = False
Cylinder26.height = 3
Cylinder26.solid = False

Shape24.geometry = Cylinder26

CADFace23.shape = Shape24

CADPart17.children.append(CADFace23)
CADFace27 = x3d.CADFace()
CADFace27.name = "topCap"
Shape28 = x3d.Shape()
Appearance29 = x3d.Appearance(USE="AppearanceGrey")

Shape28.appearance = Appearance29
IndexedTriangleSet30 = x3d.IndexedTriangleSet()
IndexedTriangleSet30.index = [0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]
Coordinate31 = x3d.Coordinate()
Coordinate31.point = [(2, 1.5, 0),(1, 1.5, 0),(1.9616, 1.5, 0.3902),(0.9808, 1.5, 0.1951),(1.8478, 1.5, 0.7654),(0.9239, 1.5, 0.3827),(1.6629, 1.5, 1.1111),(0.8315, 1.5, 0.5556),(1.4142, 1.5, 1.4142),(0.7071, 1.5, 0.7071),(1.1111, 1.5, 1.6629),(0.5556, 1.5, 0.8315),(0.7654, 1.5, 1.8478),(0.3827, 1.5, 0.9239),(0.3902, 1.5, 1.9616),(0.1951, 1.5, 0.9808),(0, 1.5, 2),(0, 1.5, 1),(-0.3902, 1.5, 1.9616),(-0.1951, 1.5, 0.9808),(-0.7654, 1.5, 1.8478),(-0.3827, 1.5, 0.9239),(-1.1111, 1.5, 1.6629),(-0.5556, 1.5, 0.8315),(-1.4142, 1.5, 1.4142),(-0.7071, 1.5, 0.7071),(-1.6629, 1.5, 1.1111),(-0.8315, 1.5, 0.5556),(-1.8478, 1.5, 0.7654),(-0.9239, 1.5, 0.3827),(-1.9616, 1.5, 0.3902),(-0.9808, 1.5, 0.1951),(-2, 1.5, 0),(-1, 1.5, 0),(-1.9616, 1.5, -0.3902),(-0.9808, 1.5, -0.1951),(-1.8478, 1.5, -0.7654),(-0.9239, 1.5, -0.3827),(-1.6629, 1.5, -1.1111),(-0.8315, 1.5, -0.5556),(-1.4142, 1.5, -1.4142),(-0.7071, 1.5, -0.7071),(-1.1111, 1.5, -1.6629),(-0.5556, 1.5, -0.8315),(-0.7654, 1.5, -1.8478),(-0.3827, 1.5, -0.9239),(-0.3902, 1.5, -1.9616),(-0.1951, 1.5, -0.9808),(0, 1.5, -2),(0, 1.5, -1),(0.3902, 1.5, -1.9616),(0.1951, 1.5, -0.9808),(0.7654, 1.5, -1.8478),(0.3827, 1.5, -0.9239),(1.1111, 1.5, -1.6629),(0.5556, 1.5, -0.8315),(1.4142, 1.5, -1.4142),(0.7071, 1.5, -0.7071),(1.6629, 1.5, -1.1111),(0.8315, 1.5, -0.5556),(1.8478, 1.5, -0.7654),(0.9239, 1.5, -0.3827),(1.9616, 1.5, -0.3902),(0.9808, 1.5, -0.1951),(2, 1.5, 0),(1, 1.5, 0)]

IndexedTriangleSet30.coord = Coordinate31

Shape28.geometry = IndexedTriangleSet30

CADFace27.shape = Shape28

CADPart17.children.append(CADFace27)
CADFace32 = x3d.CADFace()
CADFace32.name = "bottomCap"
Shape33 = x3d.Shape()
Appearance34 = x3d.Appearance(USE="AppearanceGrey")

Shape33.appearance = Appearance34
IndexedTriangleSet35 = x3d.IndexedTriangleSet()
IndexedTriangleSet35.index = [0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]
Coordinate36 = x3d.Coordinate()
Coordinate36.point = [(2, -1.5, 0),(1, -1.5, 0),(1.9616, -1.5, -0.3902),(0.9808, -1.5, -0.1951),(1.8478, -1.5, -0.7654),(0.9239, -1.5, -0.3827),(1.6629, -1.5, -1.1111),(0.8315, -1.5, -0.5556),(1.4142, -1.5, -1.4142),(0.7071, -1.5, -0.7071),(1.1111, -1.5, -1.6629),(0.5556, -1.5, -0.8315),(0.7654, -1.5, -1.8478),(0.3827, -1.5, -0.9239),(0.3902, -1.5, -1.9616),(0.1951, -1.5, -0.9808),(0, -1.5, -2),(0, -1.5, -1),(-0.3902, -1.5, -1.9616),(-0.1951, -1.5, -0.9808),(-0.7654, -1.5, -1.8478),(-0.3827, -1.5, -0.9239),(-1.1111, -1.5, -1.6629),(-0.5556, -1.5, -0.8315),(-1.4142, -1.5, -1.4142),(-0.7071, -1.5, -0.7071),(-1.6629, -1.5, -1.1111),(-0.8315, -1.5, -0.5556),(-1.8478, -1.5, -0.7654),(-0.9239, -1.5, -0.3827),(-1.9616, -1.5, -0.3902),(-0.9808, -1.5, -0.1951),(-2, -1.5, 0),(-1, -1.5, 0),(-1.9616, -1.5, 0.3902),(-0.9808, -1.5, 0.1951),(-1.8478, -1.5, 0.7654),(-0.9239, -1.5, 0.3827),(-1.6629, -1.5, 1.1111),(-0.8315, -1.5, 0.5556),(-1.4142, -1.5, 1.4142),(-0.7071, -1.5, 0.7071),(-1.1111, -1.5, 1.6629),(-0.5556, -1.5, 0.8315),(-0.7654, -1.5, 1.8478),(-0.3827, -1.5, 0.9239),(-0.3902, -1.5, 1.9616),(-0.1951, -1.5, 0.9808),(0, -1.5, 2),(0, -1.5, 1),(0.3902, -1.5, 1.9616),(0.1951, -1.5, 0.9808),(0.7654, -1.5, 1.8478),(0.3827, -1.5, 0.9239),(1.1111, -1.5, 1.6629),(0.5556, -1.5, 0.8315),(1.4142, -1.5, 1.4142),(0.7071, -1.5, 0.7071),(1.6629, -1.5, 1.1111),(0.8315, -1.5, 0.5556),(1.8478, -1.5, 0.7654),(0.9239, -1.5, 0.3827),(1.9616, -1.5, 0.3902),(0.9808, -1.5, 0.1951),(2, -1.5, 0),(1, -1.5, 0)]

IndexedTriangleSet35.coord = Coordinate36

Shape33.geometry = IndexedTriangleSet35

CADFace32.shape = Shape33

CADPart17.children.append(CADFace32)

CADAssembly16.children.append(CADPart17)

Scene12.children.append(CADAssembly16)

X3D0.Scene = Scene12
f = open("../data/CADPartChildNoTransformation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/CADPartChildNoTransformation.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/CADPartChildNoTransformation.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
