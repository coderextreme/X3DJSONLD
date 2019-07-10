# -*- coding: UTF-8 -*-
from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("CoordinateAxis.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("Unknown, see X3D Resources Archives")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/CoordinateAxis.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("a box")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
Collision8 = Collision()
Collision8.setDEF("DoNotCollideWithVisualizationWidget")
#Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.
#This NavigationInfo allows examine mode and will be overridden by any parent scene.
#Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
#Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
Group9 = Group()
#Vertical Y arrow and label
Group10 = Group()
Group10.setDEF("ArrowGreen")
Shape11 = Shape()
Cylinder12 = Cylinder()
Cylinder12.setDEF("ArrowCylinder")
Cylinder12.setRadius(0.025)
Cylinder12.setTop(False)

Shape11.setGeometry(Cylinder12)
Appearance13 = Appearance()
Appearance13.setDEF("Green")
Material14 = Material()
Material14.setDiffuseColor([0.1,0.6,0.1])
Material14.setEmissiveColor([0.05,0.2,0.05])

Appearance13.setMaterial(Material14)

Shape11.setAppearance(Appearance13)

Group10.addChildren(Shape11)
Transform15 = Transform()
Transform15.setTranslation([0,1,0])
Shape16 = Shape()
Cone17 = Cone()
Cone17.setDEF("ArrowCone")
Cone17.setBottomRadius(0.05)
Cone17.setHeight(0.1)

Shape16.setGeometry(Cone17)
Appearance18 = Appearance()
Appearance18.setUSE("Green")

Shape16.setAppearance(Appearance18)

Transform15.addChildren(Shape16)

Group10.addChildren(Transform15)

Group9.addChildren(Group10)
Transform19 = Transform()
Transform19.setTranslation([0,1.08,0])
Billboard20 = Billboard()
Shape21 = Shape()
Appearance22 = Appearance()
Appearance22.setDEF("LABEL_APPEARANCE")
Material23 = Material()
Material23.setDiffuseColor([1,1,0.3])
Material23.setEmissiveColor([0.33,0.33,0.1])

Appearance22.setMaterial(Material23)

Shape21.setAppearance(Appearance22)
Text24 = Text()
Text24.setString(["Y"])
FontStyle25 = FontStyle()
FontStyle25.setDEF("LABEL_FONT")
FontStyle25.setFamily(["SANS"])
FontStyle25.setJustify(["MIDDLE","MIDDLE"])
FontStyle25.setSize(0.2)

Text24.setFontStyle(FontStyle25)

Shape21.setGeometry(Text24)

Billboard20.addChildren(Shape21)

Transform19.addChildren(Billboard20)

Group9.addChildren(Transform19)

Collision8.setProxy(Group9)
Transform26 = Transform()
Transform26.setRotation([0,0,1,-1.57079])
#Horizontal X arrow and label
Group27 = Group()
Group28 = Group()
Group28.setDEF("ArrowRed")
Shape29 = Shape()
Cylinder30 = Cylinder()
Cylinder30.setUSE("ArrowCylinder")

Shape29.setGeometry(Cylinder30)
Appearance31 = Appearance()
Appearance31.setDEF("Red")
Material32 = Material()
Material32.setDiffuseColor([0.7,0.1,0.1])
Material32.setEmissiveColor([0.33,0,0])

Appearance31.setMaterial(Material32)

Shape29.setAppearance(Appearance31)

Group28.addChildren(Shape29)
Transform33 = Transform()
Transform33.setTranslation([0,1,0])
Shape34 = Shape()
Cone35 = Cone()
Cone35.setUSE("ArrowCone")

Shape34.setGeometry(Cone35)
Appearance36 = Appearance()
Appearance36.setUSE("Red")

Shape34.setAppearance(Appearance36)

Transform33.addChildren(Shape34)

Group28.addChildren(Transform33)

Group27.addChildren(Group28)
Transform37 = Transform()
Transform37.setRotation([0,0,1,1.57079])
Transform37.setTranslation([0.072,1.1,0])
#note label rotated back to original coordinate frame
Billboard38 = Billboard()
Shape39 = Shape()
Appearance40 = Appearance()
Appearance40.setUSE("LABEL_APPEARANCE")

Shape39.setAppearance(Appearance40)
Text41 = Text()
Text41.setString(["X"])
FontStyle42 = FontStyle()
FontStyle42.setUSE("LABEL_FONT")

Text41.setFontStyle(FontStyle42)

Shape39.setGeometry(Text41)

Billboard38.addChildren(Shape39)

Transform37.addChildren(Billboard38)

Group27.addChildren(Transform37)

Transform26.addChildren(Group27)

Collision8.setProxy(Transform26)
Transform43 = Transform()
Transform43.setRotation([1,0,0,1.57079])
#Perpendicular Z arrow and label, note right-hand rule
Group44 = Group()
Group45 = Group()
Group45.setDEF("ArrowBlue")
Shape46 = Shape()
Cylinder47 = Cylinder()
Cylinder47.setUSE("ArrowCylinder")

Shape46.setGeometry(Cylinder47)
Appearance48 = Appearance()
Appearance48.setDEF("Blue")
Material49 = Material()
Material49.setDiffuseColor([0.3,0.3,1])
Material49.setEmissiveColor([0.1,0.1,0.33])

Appearance48.setMaterial(Material49)

Shape46.setAppearance(Appearance48)

Group45.addChildren(Shape46)
Transform50 = Transform()
Transform50.setTranslation([0,1,0])
Shape51 = Shape()
Cone52 = Cone()
Cone52.setUSE("ArrowCone")

Shape51.setGeometry(Cone52)
Appearance53 = Appearance()
Appearance53.setUSE("Blue")

Shape51.setAppearance(Appearance53)

Transform50.addChildren(Shape51)

Group45.addChildren(Transform50)

Group44.addChildren(Group45)
Transform54 = Transform()
Transform54.setRotation([1,0,0,-1.57079])
Transform54.setTranslation([0,1.1,0.072])
#note label rotated back to original coordinate frame
Billboard55 = Billboard()
Shape56 = Shape()
Appearance57 = Appearance()
Appearance57.setUSE("LABEL_APPEARANCE")

Shape56.setAppearance(Appearance57)
Text58 = Text()
Text58.setString(["Z"])
FontStyle59 = FontStyle()
FontStyle59.setUSE("LABEL_FONT")

Text58.setFontStyle(FontStyle59)

Shape56.setGeometry(Text58)

Billboard55.addChildren(Shape56)

Transform54.addChildren(Billboard55)

Group44.addChildren(Transform54)

Transform43.addChildren(Group44)

Collision8.setProxy(Transform43)

Scene7.addChildren(Collision8)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/CoordinateAxes.new.x3d")
