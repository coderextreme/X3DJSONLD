print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "MaskAndSnorkel.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Diving mask and snorkel tube."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Etsuko Lippi"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "January 24, 2001"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "Mon, 09 Feb 2026 07:12:41 GMT"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "identifier"
meta7.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
WorldInfo9 = x3d.WorldInfo()
WorldInfo9.title = "MaskAndSnorkel.x3d"

Scene8.children.append(WorldInfo9)
Background10 = x3d.Background()
Background10.skyColor = [(0, 0, 0.9)]

Scene8.children.append(Background10)
Transform11 = x3d.Transform(DEF="maskAndSnorkel")
Transform12 = x3d.Transform()
Shape13 = x3d.Shape(DEF="maskFrame")
Appearance14 = x3d.Appearance()
Material15 = x3d.Material(DEF="frameColor")
Material15.diffuseColor = [0,0,0]

Appearance14.material = Material15

Shape13.appearance = Appearance14
IndexedFaceSet16 = x3d.IndexedFaceSet()
IndexedFaceSet16.solid = False
IndexedFaceSet16.creaseAngle = 1.45
IndexedFaceSet16.coordIndex = [0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]
Coordinate17 = x3d.Coordinate()
Coordinate17.point = [(0, 0.08, 0),(0.02, 0.05, 0),(0.05, 0.05, 0),(0.06, 0.06, 0),(0.06, 0.09, 0),(0.05, 0.1, 0),(0, 0.1, 0),(-0.05, 0.1, 0),(-0.06, 0.09, 0),(-0.06, 0.06, 0),(-0.05, 0.05, 0),(-0.02, 0.05, 0),(0.005, 0.08, 0),(0.02, 0.055, 0),(0.05, 0.055, 0),(0.055, 0.06, 0),(0.055, 0.09, 0),(0.045, 0.095, 0),(0.005, 0.095, 0),(-0.005, 0.08, 0),(-0.02, 0.055, 0),(-0.05, 0.055, 0),(-0.055, 0.06, 0),(-0.055, 0.09, 0),(-0.045, 0.095, 0),(-0.005, 0.095, 0)]

IndexedFaceSet16.coord = Coordinate17

Shape13.geometry = IndexedFaceSet16

Transform12.children.append(Shape13)

Transform11.children.append(Transform12)
Transform18 = x3d.Transform(DEF="snorkelHoldRing")
Transform18.translation = [0.075,0.075,-0.02]
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Material21 = x3d.Material(USE="frameColor")

Appearance20.material = Material21

Shape19.appearance = Appearance20
Cylinder22 = x3d.Cylinder()
Cylinder22.height = 0.003
Cylinder22.radius = 0.015

Shape19.geometry = Cylinder22

Transform18.children.append(Shape19)

Transform11.children.append(Transform18)
Group23 = x3d.Group(DEF="snorkel")
Transform24 = x3d.Transform()
Transform24.translation = [0,-0.02,0]
Transform25 = x3d.Transform()
Transform25.translation = [0.035,-0.07,-0.02]
Transform25.scale = [0.9,0.9,0.9]
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Material28 = x3d.Material(DEF="snorkelTube")
Material28.diffuseColor = [0.678,1,0.184]
Material28.transparency = 0.4

Appearance27.material = Material28

Shape26.appearance = Appearance27
Extrusion29 = x3d.Extrusion()
Extrusion29.crossSection = [(0, 0.013),(0.00494, 0.01196),(0.00923, 0.00923),(0.01196, 0.00494),(0.013, 0),(0.01196, -0.00494),(0.00923, -0.00923),(0.00494, -0.01196),(0, 0.013),(-0.00494, -0.01196),(-0.00923, -0.00923),(-0.01196, -0.00494),(-0.013, 0),(-0.01196, 0.00494),(-0.00923, 0.00923),(-0.00494, 0.01196),(0, 0.013)]
Extrusion29.spine = [(-0.01, -0.04, 0),(0, 0, 0),(0.03, 0.05, 0),(0.05, 0.2, 0),(0.03, 0.4, 0.03)]

Shape26.geometry = Extrusion29

Transform25.children.append(Shape26)

Transform24.children.append(Transform25)
Transform30 = x3d.Transform()
Transform30.translation = [0.01,-0.04,-0.02]
Transform30.rotation = [0,0,1,1.57]
Transform30.scale = [0.9,0.9,0.9]
Shape31 = x3d.Shape()
Appearance32 = x3d.Appearance()
Material33 = x3d.Material(DEF="Mouthpiece")
Material33.diffuseColor = [0.678,1,0.8]
Material33.transparency = 0.4

Appearance32.material = Material33

Shape31.appearance = Appearance32
Extrusion34 = x3d.Extrusion()
Extrusion34.crossSection = [(0, 0.013),(0.00494, 0.01196),(0.00923, 0.00923),(0.01196, 0.00494),(0.013, 0),(0.01196, -0.00494),(0.00923, -0.00923),(0.00494, -0.01196),(0, 0.013),(-0.00494, -0.01196),(-0.00923, -0.00923),(-0.01196, -0.00494),(-0.013, 0),(-0.01196, 0.00494),(-0.00923, 0.00923),(-0.00494, 0.01196),(0, 0.013)]
Extrusion34.spine = [(-0.01, -0.03, 0),(0, 0, 0),(0.02, 0.01, 0)]

Shape31.geometry = Extrusion34

Transform30.children.append(Shape31)

Transform24.children.append(Transform30)
Transform35 = x3d.Transform()
Transform35.translation = [0.005,-0.01,-0.02]
Transform35.rotation = [0,0,1,-0.85]
Transform35.scale = [0.9,0.9,0.9]
Shape36 = x3d.Shape()
Appearance37 = x3d.Appearance()
Material38 = x3d.Material(USE="Mouthpiece")

Appearance37.material = Material38

Shape36.appearance = Appearance37
Extrusion39 = x3d.Extrusion()
Extrusion39.crossSection = [(0, 0.013),(0.00494, 0.01196),(0.00923, 0.00923),(0.01196, 0.00494),(0.013, 0),(0.01196, -0.00494),(0.00923, -0.00923),(0.00494, -0.01196),(0, 0.013)]
Extrusion39.spine = [(-0.02, -0.03, 0),(-0.01, -0.03, 0),(0, -0.0175, 0),(0, -0.0135, 0),(-0.01, 0, 0),(-0.02, 0, 0)]

Shape36.geometry = Extrusion39

Transform35.children.append(Shape36)

Transform24.children.append(Transform35)

Group23.children.append(Transform24)

Transform11.children.append(Group23)
Transform40 = x3d.Transform()
Shape41 = x3d.Shape(DEF="maskLensR")
Appearance42 = x3d.Appearance()
Material43 = x3d.Material(DEF="plastic")
Material43.diffuseColor = [0.941,0.973,1]
Material43.transparency = 0.8

Appearance42.material = Material43

Shape41.appearance = Appearance42
IndexedFaceSet44 = x3d.IndexedFaceSet()
IndexedFaceSet44.solid = False
IndexedFaceSet44.creaseAngle = 1.45
IndexedFaceSet44.coordIndex = [12,13,14,15,16,17,18,12,-1]
Coordinate45 = x3d.Coordinate()
Coordinate45.point = [(0, 0.08, 0),(0.02, 0.05, 0),(0.05, 0.05, 0),(0.06, 0.06, 0),(0.06, 0.09, 0),(0.05, 0.1, 0),(0, 0.1, 0),(-0.05, 0.1, 0),(-0.06, 0.09, 0),(-0.06, 0.06, 0),(-0.05, 0.05, 0),(-0.02, 0.05, 0),(0.005, 0.08, 0),(0.02, 0.055, 0),(0.05, 0.055, 0),(0.055, 0.06, 0),(0.055, 0.09, 0),(0.045, 0.095, 0),(0.005, 0.095, 0),(-0.005, 0.08, 0),(-0.02, 0.055, 0),(-0.05, 0.055, 0),(-0.055, 0.06, 0),(-0.055, 0.09, 0),(-0.045, 0.095, 0),(-0.005, 0.095, 0)]

IndexedFaceSet44.coord = Coordinate45

Shape41.geometry = IndexedFaceSet44

Transform40.children.append(Shape41)

Transform11.children.append(Transform40)
Transform46 = x3d.Transform()
Shape47 = x3d.Shape(DEF="maskLensL")
Appearance48 = x3d.Appearance()
Material49 = x3d.Material(USE="plastic")

Appearance48.material = Material49

Shape47.appearance = Appearance48
IndexedFaceSet50 = x3d.IndexedFaceSet()
IndexedFaceSet50.solid = False
IndexedFaceSet50.creaseAngle = 1.45
IndexedFaceSet50.coordIndex = [19,20,21,22,23,24,25,19,-1]
Coordinate51 = x3d.Coordinate()
Coordinate51.point = [(0, 0.08, 0),(0.02, 0.05, 0),(0.05, 0.05, 0),(0.06, 0.06, 0),(0.06, 0.09, 0),(0.05, 0.1, 0),(0, 0.1, 0),(-0.05, 0.1, 0),(-0.06, 0.09, 0),(-0.06, 0.06, 0),(-0.05, 0.05, 0),(-0.02, 0.05, 0),(0.005, 0.08, 0),(0.02, 0.055, 0),(0.05, 0.055, 0),(0.055, 0.06, 0),(0.055, 0.09, 0),(0.045, 0.095, 0),(0.005, 0.095, 0),(-0.005, 0.08, 0),(-0.02, 0.055, 0),(-0.05, 0.055, 0),(-0.055, 0.06, 0),(-0.055, 0.09, 0),(-0.045, 0.095, 0),(-0.005, 0.095, 0)]

IndexedFaceSet50.coord = Coordinate51

Shape47.geometry = IndexedFaceSet50

Transform46.children.append(Shape47)

Transform11.children.append(Transform46)
Transform52 = x3d.Transform()
Shape53 = x3d.Shape(DEF="nose")
Appearance54 = x3d.Appearance()
Material55 = x3d.Material(DEF="plasticFit")
Material55.diffuseColor = [0.678,1,0.184]
Material55.transparency = 0.7

Appearance54.material = Material55

Shape53.appearance = Appearance54
IndexedFaceSet56 = x3d.IndexedFaceSet()
IndexedFaceSet56.solid = False
IndexedFaceSet56.creaseAngle = 1.45
IndexedFaceSet56.coordIndex = [0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]
Coordinate57 = x3d.Coordinate()
Coordinate57.point = [(0, 0.08, 0),(0.02, 0.05, 0),(0.05, 0.05, 0),(0.06, 0.06, 0),(0.06, 0.09, 0),(0.05, 0.1, 0),(0, 0.1, 0),(-0.05, 0.1, 0),(-0.06, 0.09, 0),(-0.06, 0.06, 0),(-0.05, 0.05, 0),(-0.02, 0.05, 0),(0.005, 0.08, 0),(0.02, 0.055, 0),(0.05, 0.055, 0),(0.055, 0.06, 0),(0.055, 0.09, 0),(0.045, 0.095, 0),(0.005, 0.095, 0),(-0.005, 0.08, 0),(-0.02, 0.055, 0),(-0.05, 0.055, 0),(-0.055, 0.06, 0),(-0.055, 0.09, 0),(-0.045, 0.095, 0),(-0.005, 0.095, 0),(0, 0.04, 0.015),(0.05, 0.04, -0.03),(0.06, 0.05, -0.03),(0.07, 0.095, -0.03),(0.055, 0.11, -0.03),(0, 0.11, -0.02),(-0.055, 0.11, -0.03),(-0.07, 0.095, -0.03),(-0.06, 0.05, -0.03),(-0.05, 0.04, -0.03),(-0.02, 0.04, -0.02),(0.02, 0.04, -0.02)]

IndexedFaceSet56.coord = Coordinate57

Shape53.geometry = IndexedFaceSet56

Transform52.children.append(Shape53)

Transform11.children.append(Transform52)
Transform58 = x3d.Transform()
Shape59 = x3d.Shape(DEF="faceFit")
Appearance60 = x3d.Appearance()
Material61 = x3d.Material(USE="plasticFit")

Appearance60.material = Material61

Shape59.appearance = Appearance60
IndexedFaceSet62 = x3d.IndexedFaceSet()
IndexedFaceSet62.solid = False
IndexedFaceSet62.creaseAngle = 1.45
IndexedFaceSet62.coordIndex = [1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]
Coordinate63 = x3d.Coordinate()
Coordinate63.point = [(0, 0.08, 0),(0.02, 0.05, 0),(0.05, 0.05, 0),(0.06, 0.06, 0),(0.06, 0.09, 0),(0.05, 0.1, 0),(0, 0.1, 0),(-0.05, 0.1, 0),(-0.06, 0.09, 0),(-0.06, 0.06, 0),(-0.05, 0.05, 0),(-0.02, 0.05, 0),(0.005, 0.08, 0),(0.02, 0.055, 0),(0.05, 0.055, 0),(0.055, 0.06, 0),(0.055, 0.09, 0),(0.045, 0.095, 0),(0.005, 0.095, 0),(-0.005, 0.08, 0),(-0.02, 0.055, 0),(-0.05, 0.055, 0),(-0.055, 0.06, 0),(-0.055, 0.09, 0),(-0.045, 0.095, 0),(-0.005, 0.095, 0),(0, 0.05, 0.015),(0.05, 0.04, -0.03),(0.06, 0.05, -0.03),(0.07, 0.095, -0.03),(0.055, 0.11, -0.03),(0, 0.11, -0.02),(-0.055, 0.11, -0.03),(-0.07, 0.095, -0.03),(-0.06, 0.05, -0.03),(-0.05, 0.04, -0.03),(-0.02, 0.04, -0.02),(0.02, 0.04, -0.02)]

IndexedFaceSet62.coord = Coordinate63

Shape59.geometry = IndexedFaceSet62

Transform58.children.append(Shape59)

Transform11.children.append(Transform58)
Transform64 = x3d.Transform()
Shape65 = x3d.Shape(DEF="belt")
Appearance66 = x3d.Appearance()
Material67 = x3d.Material(USE="plastic")

Appearance66.material = Material67

Shape65.appearance = Appearance66
IndexedFaceSet68 = x3d.IndexedFaceSet()
IndexedFaceSet68.solid = False
IndexedFaceSet68.creaseAngle = 1.45
IndexedFaceSet68.coordIndex = [3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]
Coordinate69 = x3d.Coordinate()
Coordinate69.point = [(0, 0.08, 0),(0.02, 0.05, 0),(0.05, 0.05, 0),(0.06, 0.06, 0),(0.06, 0.09, 0),(0.05, 0.1, 0),(0, 0.1, 0),(-0.05, 0.1, 0),(-0.06, 0.09, 0),(-0.06, 0.06, 0),(-0.05, 0.05, 0),(-0.02, 0.05, 0),(0.005, 0.08, 0),(0.02, 0.055, 0),(0.05, 0.055, 0),(0.055, 0.06, 0),(0.055, 0.09, 0),(0.045, 0.095, 0),(0.005, 0.095, 0),(-0.005, 0.08, 0),(-0.02, 0.055, 0),(-0.05, 0.055, 0),(-0.055, 0.06, 0),(-0.055, 0.09, 0),(-0.045, 0.095, 0),(-0.005, 0.095, 0),(0, 0.05, 0.015),(0.05, 0.04, -0.03),(0.06, 0.05, -0.03),(0.07, 0.095, -0.03),(0.055, 0.11, -0.03),(0, 0.11, -0.02),(-0.055, 0.11, -0.03),(-0.07, 0.095, -0.03),(-0.06, 0.05, -0.03),(-0.05, 0.04, -0.03),(-0.02, 0.04, -0.02),(0.02, 0.04, -0.02),(0.075, 0.06, -0.135),(0.075, 0.09, -0.135),(-0.075, 0.06, -0.135),(-0.075, 0.09, -0.135),(0.06, 0.09, -0.165),(0.06, 0.06, -0.165),(-0.06, 0.09, -0.165),(-0.06, 0.06, -0.165),(0, 0.09, -0.2),(0, 0.06, -0.175)]

IndexedFaceSet68.coord = Coordinate69

Shape65.geometry = IndexedFaceSet68

Transform64.children.append(Shape65)

Transform11.children.append(Transform64)

Scene8.children.append(Transform11)

X3D0.Scene = Scene8
f = open("../data/MaskAndSnorkel.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/MaskAndSnorkel.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/MaskAndSnorkel.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
