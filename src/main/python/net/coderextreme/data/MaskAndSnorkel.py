print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta6.content = "23 May 2020"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "identifier"
meta7.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "generator"
meta8.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "license"
meta9.content = "../license.html"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.title = "MaskAndSnorkel.x3d"

Scene10.children.append(WorldInfo11)
Background12 = x3d.Background()
Background12.skyColor = [(0, 0, 0.9)]

Scene10.children.append(Background12)
Transform13 = x3d.Transform()
Transform13.DEF = "maskAndSnorkel"
Transform14 = x3d.Transform()
Shape15 = x3d.Shape()
Shape15.DEF = "maskFrame"
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.DEF = "frameColor"
Material17.diffuseColor = [0,0,0]

Appearance16.material = Material17

Shape15.appearance = Appearance16
IndexedFaceSet18 = x3d.IndexedFaceSet()
IndexedFaceSet18.coordIndex = [0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]
IndexedFaceSet18.creaseAngle = 1.45
IndexedFaceSet18.solid = False
Coordinate19 = x3d.Coordinate()
Coordinate19.point = [(0, 0.08, 0),(0.02, 0.05, 0),(0.05, 0.05, 0),(0.06, 0.06, 0),(0.06, 0.09, 0),(0.05, 0.1, 0),(0, 0.1, 0),(-0.05, 0.1, 0),(-0.06, 0.09, 0),(-0.06, 0.06, 0),(-0.05, 0.05, 0),(-0.02, 0.05, 0),(0.005, 0.08, 0),(0.02, 0.055, 0),(0.05, 0.055, 0),(0.055, 0.06, 0),(0.055, 0.09, 0),(0.045, 0.095, 0),(0.005, 0.095, 0),(-0.005, 0.08, 0),(-0.02, 0.055, 0),(-0.05, 0.055, 0),(-0.055, 0.06, 0),(-0.055, 0.09, 0),(-0.045, 0.095, 0),(-0.005, 0.095, 0)]

IndexedFaceSet18.coord = Coordinate19

Shape15.geometry = IndexedFaceSet18

Transform14.children.append(Shape15)

Transform13.children.append(Transform14)
Transform20 = x3d.Transform()
Transform20.DEF = "snorkelHoldRing"
Transform20.translation = [0.075,0.075,-0.02]
Shape21 = x3d.Shape()
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.USE = "frameColor"

Appearance22.material = Material23

Shape21.appearance = Appearance22
Cylinder24 = x3d.Cylinder()
Cylinder24.height = 0.003
Cylinder24.radius = 0.015

Shape21.geometry = Cylinder24

Transform20.children.append(Shape21)

Transform13.children.append(Transform20)
Group25 = x3d.Group()
Group25.DEF = "snorkel"
Transform26 = x3d.Transform()
Transform26.translation = [0,-0.02,0]
Transform27 = x3d.Transform()
Transform27.scale = [0.9,0.9,0.9]
Transform27.translation = [0.035,-0.07,-0.02]
Shape28 = x3d.Shape()
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.DEF = "snorkelTube"
Material30.diffuseColor = [0.678,1,0.184]
Material30.transparency = 0.4

Appearance29.material = Material30

Shape28.appearance = Appearance29
Extrusion31 = x3d.Extrusion()
Extrusion31.crossSection = [(0, 0.013),(0.00494, 0.01196),(0.00923, 0.00923),(0.01196, 0.00494),(0.013, 0),(0.01196, -0.00494),(0.00923, -0.00923),(0.00494, -0.01196),(0, 0.013),(-0.00494, -0.01196),(-0.00923, -0.00923),(-0.01196, -0.00494),(-0.013, 0),(-0.01196, 0.00494),(-0.00923, 0.00923),(-0.00494, 0.01196),(0, 0.013)]
Extrusion31.spine = [(-0.01, -0.04, 0),(0, 0, 0),(0.03, 0.05, 0),(0.05, 0.2, 0),(0.03, 0.4, 0.03)]

Shape28.geometry = Extrusion31

Transform27.children.append(Shape28)

Transform26.children.append(Transform27)
Transform32 = x3d.Transform()
Transform32.rotation = [0,0,1,1.57]
Transform32.scale = [0.9,0.9,0.9]
Transform32.translation = [0.01,-0.04,-0.02]
Shape33 = x3d.Shape()
Appearance34 = x3d.Appearance()
Material35 = x3d.Material()
Material35.DEF = "Mouthpiece"
Material35.diffuseColor = [0.678,1,0.8]
Material35.transparency = 0.4

Appearance34.material = Material35

Shape33.appearance = Appearance34
Extrusion36 = x3d.Extrusion()
Extrusion36.crossSection = [(0, 0.013),(0.00494, 0.01196),(0.00923, 0.00923),(0.01196, 0.00494),(0.013, 0),(0.01196, -0.00494),(0.00923, -0.00923),(0.00494, -0.01196),(0, 0.013),(-0.00494, -0.01196),(-0.00923, -0.00923),(-0.01196, -0.00494),(-0.013, 0),(-0.01196, 0.00494),(-0.00923, 0.00923),(-0.00494, 0.01196),(0, 0.013)]
Extrusion36.spine = [(-0.01, -0.03, 0),(0, 0, 0),(0.02, 0.01, 0)]

Shape33.geometry = Extrusion36

Transform32.children.append(Shape33)

Transform26.children.append(Transform32)
Transform37 = x3d.Transform()
Transform37.rotation = [0,0,1,-0.85]
Transform37.scale = [0.9,0.9,0.9]
Transform37.translation = [0.005,-0.01,-0.02]
Shape38 = x3d.Shape()
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.USE = "Mouthpiece"

Appearance39.material = Material40

Shape38.appearance = Appearance39
Extrusion41 = x3d.Extrusion()
Extrusion41.crossSection = [(0, 0.013),(0.00494, 0.01196),(0.00923, 0.00923),(0.01196, 0.00494),(0.013, 0),(0.01196, -0.00494),(0.00923, -0.00923),(0.00494, -0.01196),(0, 0.013)]
Extrusion41.spine = [(-0.02, -0.03, 0),(-0.01, -0.03, 0),(0, -0.0175, 0),(0, -0.0135, 0),(-0.01, 0, 0),(-0.02, 0, 0)]

Shape38.geometry = Extrusion41

Transform37.children.append(Shape38)

Transform26.children.append(Transform37)

Group25.children.append(Transform26)

Transform13.children.append(Group25)
Transform42 = x3d.Transform()
Shape43 = x3d.Shape()
Shape43.DEF = "maskLensR"
Appearance44 = x3d.Appearance()
Material45 = x3d.Material()
Material45.DEF = "plastic"
Material45.diffuseColor = [0.941,0.973,1]
Material45.transparency = 0.8

Appearance44.material = Material45

Shape43.appearance = Appearance44
IndexedFaceSet46 = x3d.IndexedFaceSet()
IndexedFaceSet46.coordIndex = [12,13,14,15,16,17,18,12,-1]
IndexedFaceSet46.creaseAngle = 1.45
IndexedFaceSet46.solid = False
Coordinate47 = x3d.Coordinate()
Coordinate47.point = [(0, 0.08, 0),(0.02, 0.05, 0),(0.05, 0.05, 0),(0.06, 0.06, 0),(0.06, 0.09, 0),(0.05, 0.1, 0),(0, 0.1, 0),(-0.05, 0.1, 0),(-0.06, 0.09, 0),(-0.06, 0.06, 0),(-0.05, 0.05, 0),(-0.02, 0.05, 0),(0.005, 0.08, 0),(0.02, 0.055, 0),(0.05, 0.055, 0),(0.055, 0.06, 0),(0.055, 0.09, 0),(0.045, 0.095, 0),(0.005, 0.095, 0),(-0.005, 0.08, 0),(-0.02, 0.055, 0),(-0.05, 0.055, 0),(-0.055, 0.06, 0),(-0.055, 0.09, 0),(-0.045, 0.095, 0),(-0.005, 0.095, 0)]

IndexedFaceSet46.coord = Coordinate47

Shape43.geometry = IndexedFaceSet46

Transform42.children.append(Shape43)

Transform13.children.append(Transform42)
Transform48 = x3d.Transform()
Shape49 = x3d.Shape()
Shape49.DEF = "maskLensL"
Appearance50 = x3d.Appearance()
Material51 = x3d.Material()
Material51.USE = "plastic"

Appearance50.material = Material51

Shape49.appearance = Appearance50
IndexedFaceSet52 = x3d.IndexedFaceSet()
IndexedFaceSet52.coordIndex = [19,20,21,22,23,24,25,19,-1]
IndexedFaceSet52.creaseAngle = 1.45
IndexedFaceSet52.solid = False
Coordinate53 = x3d.Coordinate()
Coordinate53.point = [(0, 0.08, 0),(0.02, 0.05, 0),(0.05, 0.05, 0),(0.06, 0.06, 0),(0.06, 0.09, 0),(0.05, 0.1, 0),(0, 0.1, 0),(-0.05, 0.1, 0),(-0.06, 0.09, 0),(-0.06, 0.06, 0),(-0.05, 0.05, 0),(-0.02, 0.05, 0),(0.005, 0.08, 0),(0.02, 0.055, 0),(0.05, 0.055, 0),(0.055, 0.06, 0),(0.055, 0.09, 0),(0.045, 0.095, 0),(0.005, 0.095, 0),(-0.005, 0.08, 0),(-0.02, 0.055, 0),(-0.05, 0.055, 0),(-0.055, 0.06, 0),(-0.055, 0.09, 0),(-0.045, 0.095, 0),(-0.005, 0.095, 0)]

IndexedFaceSet52.coord = Coordinate53

Shape49.geometry = IndexedFaceSet52

Transform48.children.append(Shape49)

Transform13.children.append(Transform48)
Transform54 = x3d.Transform()
Shape55 = x3d.Shape()
Shape55.DEF = "nose"
Appearance56 = x3d.Appearance()
Material57 = x3d.Material()
Material57.DEF = "plasticFit"
Material57.diffuseColor = [0.678,1,0.184]
Material57.transparency = 0.7

Appearance56.material = Material57

Shape55.appearance = Appearance56
IndexedFaceSet58 = x3d.IndexedFaceSet()
IndexedFaceSet58.coordIndex = [0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]
IndexedFaceSet58.creaseAngle = 1.45
IndexedFaceSet58.solid = False
Coordinate59 = x3d.Coordinate()
Coordinate59.point = [(0, 0.08, 0),(0.02, 0.05, 0),(0.05, 0.05, 0),(0.06, 0.06, 0),(0.06, 0.09, 0),(0.05, 0.1, 0),(0, 0.1, 0),(-0.05, 0.1, 0),(-0.06, 0.09, 0),(-0.06, 0.06, 0),(-0.05, 0.05, 0),(-0.02, 0.05, 0),(0.005, 0.08, 0),(0.02, 0.055, 0),(0.05, 0.055, 0),(0.055, 0.06, 0),(0.055, 0.09, 0),(0.045, 0.095, 0),(0.005, 0.095, 0),(-0.005, 0.08, 0),(-0.02, 0.055, 0),(-0.05, 0.055, 0),(-0.055, 0.06, 0),(-0.055, 0.09, 0),(-0.045, 0.095, 0),(-0.005, 0.095, 0),(0, 0.04, 0.015),(0.05, 0.04, -0.03),(0.06, 0.05, -0.03),(0.07, 0.095, -0.03),(0.055, 0.11, -0.03),(0, 0.11, -0.02),(-0.055, 0.11, -0.03),(-0.07, 0.095, -0.03),(-0.06, 0.05, -0.03),(-0.05, 0.04, -0.03),(-0.02, 0.04, -0.02),(0.02, 0.04, -0.02)]

IndexedFaceSet58.coord = Coordinate59

Shape55.geometry = IndexedFaceSet58

Transform54.children.append(Shape55)

Transform13.children.append(Transform54)
Transform60 = x3d.Transform()
Shape61 = x3d.Shape()
Shape61.DEF = "faceFit"
Appearance62 = x3d.Appearance()
Material63 = x3d.Material()
Material63.USE = "plasticFit"

Appearance62.material = Material63

Shape61.appearance = Appearance62
IndexedFaceSet64 = x3d.IndexedFaceSet()
IndexedFaceSet64.coordIndex = [1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]
IndexedFaceSet64.creaseAngle = 1.45
IndexedFaceSet64.solid = False
Coordinate65 = x3d.Coordinate()
Coordinate65.point = [(0, 0.08, 0),(0.02, 0.05, 0),(0.05, 0.05, 0),(0.06, 0.06, 0),(0.06, 0.09, 0),(0.05, 0.1, 0),(0, 0.1, 0),(-0.05, 0.1, 0),(-0.06, 0.09, 0),(-0.06, 0.06, 0),(-0.05, 0.05, 0),(-0.02, 0.05, 0),(0.005, 0.08, 0),(0.02, 0.055, 0),(0.05, 0.055, 0),(0.055, 0.06, 0),(0.055, 0.09, 0),(0.045, 0.095, 0),(0.005, 0.095, 0),(-0.005, 0.08, 0),(-0.02, 0.055, 0),(-0.05, 0.055, 0),(-0.055, 0.06, 0),(-0.055, 0.09, 0),(-0.045, 0.095, 0),(-0.005, 0.095, 0),(0, 0.05, 0.015),(0.05, 0.04, -0.03),(0.06, 0.05, -0.03),(0.07, 0.095, -0.03),(0.055, 0.11, -0.03),(0, 0.11, -0.02),(-0.055, 0.11, -0.03),(-0.07, 0.095, -0.03),(-0.06, 0.05, -0.03),(-0.05, 0.04, -0.03),(-0.02, 0.04, -0.02),(0.02, 0.04, -0.02)]

IndexedFaceSet64.coord = Coordinate65

Shape61.geometry = IndexedFaceSet64

Transform60.children.append(Shape61)

Transform13.children.append(Transform60)
Transform66 = x3d.Transform()
Shape67 = x3d.Shape()
Shape67.DEF = "belt"
Appearance68 = x3d.Appearance()
Material69 = x3d.Material()
Material69.USE = "plastic"

Appearance68.material = Material69

Shape67.appearance = Appearance68
IndexedFaceSet70 = x3d.IndexedFaceSet()
IndexedFaceSet70.coordIndex = [3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]
IndexedFaceSet70.creaseAngle = 1.45
IndexedFaceSet70.solid = False
Coordinate71 = x3d.Coordinate()
Coordinate71.point = [(0, 0.08, 0),(0.02, 0.05, 0),(0.05, 0.05, 0),(0.06, 0.06, 0),(0.06, 0.09, 0),(0.05, 0.1, 0),(0, 0.1, 0),(-0.05, 0.1, 0),(-0.06, 0.09, 0),(-0.06, 0.06, 0),(-0.05, 0.05, 0),(-0.02, 0.05, 0),(0.005, 0.08, 0),(0.02, 0.055, 0),(0.05, 0.055, 0),(0.055, 0.06, 0),(0.055, 0.09, 0),(0.045, 0.095, 0),(0.005, 0.095, 0),(-0.005, 0.08, 0),(-0.02, 0.055, 0),(-0.05, 0.055, 0),(-0.055, 0.06, 0),(-0.055, 0.09, 0),(-0.045, 0.095, 0),(-0.005, 0.095, 0),(0, 0.05, 0.015),(0.05, 0.04, -0.03),(0.06, 0.05, -0.03),(0.07, 0.095, -0.03),(0.055, 0.11, -0.03),(0, 0.11, -0.02),(-0.055, 0.11, -0.03),(-0.07, 0.095, -0.03),(-0.06, 0.05, -0.03),(-0.05, 0.04, -0.03),(-0.02, 0.04, -0.02),(0.02, 0.04, -0.02),(0.075, 0.06, -0.135),(0.075, 0.09, -0.135),(-0.075, 0.06, -0.135),(-0.075, 0.09, -0.135),(0.06, 0.09, -0.165),(0.06, 0.06, -0.165),(-0.06, 0.09, -0.165),(-0.06, 0.06, -0.165),(0, 0.09, -0.2),(0, 0.06, -0.175)]

IndexedFaceSet70.coord = Coordinate71

Shape67.geometry = IndexedFaceSet70

Transform66.children.append(Shape67)

Transform13.children.append(Transform66)

Scene10.children.append(Transform13)

X3D0.Scene = Scene10
f = open("../data/MaskAndSnorkel.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/MaskAndSnorkel.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/MaskAndSnorkel.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
