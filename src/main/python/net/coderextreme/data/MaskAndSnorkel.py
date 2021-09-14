from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("MaskAndSnorkel.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("description")
meta3.setContent("Diving mask and snorkel tube.")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("creator")
meta4.setContent("Etsuko Lippi")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("created")
meta5.setContent("January 24, 2001")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("modified")
meta6.setContent("23 May 2020")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("identifier")
meta7.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("generator")
meta8.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("license")
meta9.setContent("../license.html")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = Scene()
WorldInfo11 = WorldInfo()
WorldInfo11.setTitle("MaskAndSnorkel.x3d")

Scene10.addChildren(WorldInfo11)
Background12 = Background()
Background12.setSkyColor([0,0,0.9])

Scene10.addChildren(Background12)
Transform13 = Transform()
Transform13.setDEF("maskAndSnorkel")
Transform14 = Transform()
Shape15 = Shape()
Shape15.setDEF("maskFrame")
Appearance16 = Appearance()
Material17 = Material()
Material17.setDEF("frameColor")
Material17.setDiffuseColor([0,0,0])

Appearance16.setMaterial(Material17)

Shape15.setAppearance(Appearance16)
IndexedFaceSet18 = IndexedFaceSet()
IndexedFaceSet18.setCoordIndex([0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1])
IndexedFaceSet18.setCreaseAngle(1.45)
IndexedFaceSet18.setSolid(False)
Coordinate19 = Coordinate()
Coordinate19.setPoint([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0])

IndexedFaceSet18.setCoord(Coordinate19)

Shape15.setGeometry(IndexedFaceSet18)

Transform14.addChildren(Shape15)

Transform13.addChildren(Transform14)
Transform20 = Transform()
Transform20.setDEF("snorkelHoldRing")
Transform20.setTranslation([0.075,0.075,-0.02])
Shape21 = Shape()
Appearance22 = Appearance()
Material23 = Material()
Material23.setUSE("frameColor")

Appearance22.setMaterial(Material23)

Shape21.setAppearance(Appearance22)
Cylinder24 = Cylinder()
Cylinder24.setHeight(0.003)
Cylinder24.setRadius(0.015)

Shape21.setGeometry(Cylinder24)

Transform20.addChildren(Shape21)

Transform13.addChildren(Transform20)
Group25 = Group()
Group25.setDEF("snorkel")
Transform26 = Transform()
Transform26.setTranslation([0,-0.02,0])
Transform27 = Transform()
Transform27.setScale([0.9,0.9,0.9])
Transform27.setTranslation([0.035,-0.07,-0.02])
Shape28 = Shape()
Appearance29 = Appearance()
Material30 = Material()
Material30.setDEF("snorkelTube")
Material30.setDiffuseColor([0.678,1,0.184])
Material30.setTransparency(0.4)

Appearance29.setMaterial(Material30)

Shape28.setAppearance(Appearance29)
Extrusion31 = Extrusion()
Extrusion31.setCrossSection([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013])
Extrusion31.setSpine([-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03])

Shape28.setGeometry(Extrusion31)

Transform27.addChildren(Shape28)

Transform26.addChildren(Transform27)
Transform32 = Transform()
Transform32.setRotation([0,0,1,1.57])
Transform32.setScale([0.9,0.9,0.9])
Transform32.setTranslation([0.01,-0.04,-0.02])
Shape33 = Shape()
Appearance34 = Appearance()
Material35 = Material()
Material35.setDEF("Mouthpiece")
Material35.setDiffuseColor([0.678,1,0.8])
Material35.setTransparency(0.4)

Appearance34.setMaterial(Material35)

Shape33.setAppearance(Appearance34)
Extrusion36 = Extrusion()
Extrusion36.setCrossSection([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013])
Extrusion36.setSpine([-0.01,-0.03,0,0,0,0,0.02,0.01,0])

Shape33.setGeometry(Extrusion36)

Transform32.addChildren(Shape33)

Transform26.addChildren(Transform32)
Transform37 = Transform()
Transform37.setRotation([0,0,1,-0.85])
Transform37.setScale([0.9,0.9,0.9])
Transform37.setTranslation([0.005,-0.01,-0.02])
Shape38 = Shape()
Appearance39 = Appearance()
Material40 = Material()
Material40.setUSE("Mouthpiece")

Appearance39.setMaterial(Material40)

Shape38.setAppearance(Appearance39)
Extrusion41 = Extrusion()
Extrusion41.setCrossSection([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013])
Extrusion41.setSpine([-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0])

Shape38.setGeometry(Extrusion41)

Transform37.addChildren(Shape38)

Transform26.addChildren(Transform37)

Group25.addChildren(Transform26)

Transform13.addChildren(Group25)
Transform42 = Transform()
Shape43 = Shape()
Shape43.setDEF("maskLensR")
Appearance44 = Appearance()
Material45 = Material()
Material45.setDEF("plastic")
Material45.setDiffuseColor([0.941,0.973,1])
Material45.setTransparency(0.8)

Appearance44.setMaterial(Material45)

Shape43.setAppearance(Appearance44)
IndexedFaceSet46 = IndexedFaceSet()
IndexedFaceSet46.setCoordIndex([12,13,14,15,16,17,18,12,-1])
IndexedFaceSet46.setCreaseAngle(1.45)
IndexedFaceSet46.setSolid(False)
Coordinate47 = Coordinate()
Coordinate47.setPoint([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0])

IndexedFaceSet46.setCoord(Coordinate47)

Shape43.setGeometry(IndexedFaceSet46)

Transform42.addChildren(Shape43)

Transform13.addChildren(Transform42)
Transform48 = Transform()
Shape49 = Shape()
Shape49.setDEF("maskLensL")
Appearance50 = Appearance()
Material51 = Material()
Material51.setUSE("plastic")

Appearance50.setMaterial(Material51)

Shape49.setAppearance(Appearance50)
IndexedFaceSet52 = IndexedFaceSet()
IndexedFaceSet52.setCoordIndex([19,20,21,22,23,24,25,19,-1])
IndexedFaceSet52.setCreaseAngle(1.45)
IndexedFaceSet52.setSolid(False)
Coordinate53 = Coordinate()
Coordinate53.setPoint([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0])

IndexedFaceSet52.setCoord(Coordinate53)

Shape49.setGeometry(IndexedFaceSet52)

Transform48.addChildren(Shape49)

Transform13.addChildren(Transform48)
Transform54 = Transform()
Shape55 = Shape()
Shape55.setDEF("nose")
Appearance56 = Appearance()
Material57 = Material()
Material57.setDEF("plasticFit")
Material57.setDiffuseColor([0.678,1,0.184])
Material57.setTransparency(0.7)

Appearance56.setMaterial(Material57)

Shape55.setAppearance(Appearance56)
IndexedFaceSet58 = IndexedFaceSet()
IndexedFaceSet58.setCoordIndex([0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1])
IndexedFaceSet58.setCreaseAngle(1.45)
IndexedFaceSet58.setSolid(False)
Coordinate59 = Coordinate()
Coordinate59.setPoint([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02])

IndexedFaceSet58.setCoord(Coordinate59)

Shape55.setGeometry(IndexedFaceSet58)

Transform54.addChildren(Shape55)

Transform13.addChildren(Transform54)
Transform60 = Transform()
Shape61 = Shape()
Shape61.setDEF("faceFit")
Appearance62 = Appearance()
Material63 = Material()
Material63.setUSE("plasticFit")

Appearance62.setMaterial(Material63)

Shape61.setAppearance(Appearance62)
IndexedFaceSet64 = IndexedFaceSet()
IndexedFaceSet64.setCoordIndex([1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1])
IndexedFaceSet64.setCreaseAngle(1.45)
IndexedFaceSet64.setSolid(False)
Coordinate65 = Coordinate()
Coordinate65.setPoint([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02])

IndexedFaceSet64.setCoord(Coordinate65)

Shape61.setGeometry(IndexedFaceSet64)

Transform60.addChildren(Shape61)

Transform13.addChildren(Transform60)
Transform66 = Transform()
Shape67 = Shape()
Shape67.setDEF("belt")
Appearance68 = Appearance()
Material69 = Material()
Material69.setUSE("plastic")

Appearance68.setMaterial(Material69)

Shape67.setAppearance(Appearance68)
IndexedFaceSet70 = IndexedFaceSet()
IndexedFaceSet70.setCoordIndex([3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1])
IndexedFaceSet70.setCreaseAngle(1.45)
IndexedFaceSet70.setSolid(False)
Coordinate71 = Coordinate()
Coordinate71.setPoint([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175])

IndexedFaceSet70.setCoord(Coordinate71)

Shape67.setGeometry(IndexedFaceSet70)

Transform66.addChildren(Shape67)

Transform13.addChildren(Transform66)

Scene10.addChildren(Transform13)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/MaskAndSnorkel_RoundTrip.x3d")
