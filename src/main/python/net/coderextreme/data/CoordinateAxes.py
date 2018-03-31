# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("CoordinateAxis.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("Unknown, see X3D Resources Archives")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/CoordinateAxis.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("a box")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

Collision8 = CollisionObject()
Collision8.setDEF("DoNotCollideWithVisualizationWidget")


Collision8.addComments(CommentsBlock("""Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph."""))

Collision8.addComments(CommentsBlock("""This NavigationInfo allows examine mode and will be overridden by any parent scene."""))

Collision8.addComments(CommentsBlock("""Each arrow goes from +1m to -1m to allow linear scaling to fit a scene"""))

Collision8.addComments(CommentsBlock("""Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user"""))
Group9 = GroupObject()


Group9.addComments(CommentsBlock("""Vertical Y arrow and label"""))
Group10 = GroupObject()
Group10.setDEF("ArrowGreen")

Shape11 = ShapeObject()

Cylinder12 = CylinderObject()
Cylinder12.setDEF("ArrowCylinder")
Cylinder12.setRadius(0.025)
Cylinder12.setTop(False)

Shape11.setGeometry(Cylinder12)
Appearance13 = AppearanceObject()
Appearance13.setDEF("Green")

Material14 = MaterialObject()
Material14.setDiffuseColor([0.1,0.6,0.1])
Material14.setEmissiveColor([0.05,0.2,0.05])

Appearance13.setMaterial(Material14)
Shape11.setAppearance(Appearance13)
Group10.addChild(Shape11)
Transform15 = TransformObject()
Transform15.setTranslation([0,1,0])

Shape16 = ShapeObject()

Cone17 = ConeObject()
Cone17.setDEF("ArrowCone")
Cone17.setBottomRadius(0.05)
Cone17.setHeight(0.1)

Shape16.setGeometry(Cone17)
Appearance18 = AppearanceObject()
Appearance18.setUSE("Green")

Shape16.setAppearance(Appearance18)
Transform15.addChild(Shape16)
Group10.addChild(Transform15)
Group9.addChild(Group10)
Transform19 = TransformObject()
Transform19.setTranslation([0,1.08,0])

Billboard20 = BillboardObject()

Shape21 = ShapeObject()

Appearance22 = AppearanceObject()
Appearance22.setDEF("LABEL_APPEARANCE")

Material23 = MaterialObject()
Material23.setDiffuseColor([1,1,0.3])
Material23.setEmissiveColor([0.33,0.33,0.1])

Appearance22.setMaterial(Material23)
Shape21.setAppearance(Appearance22)
Text24 = TextObject()
Text24.setString(["Y"])

FontStyle25 = FontStyleObject()
FontStyle25.setDEF("LABEL_FONT")
FontStyle25.setFamily(["SANS"])
FontStyle25.setJustify(["MIDDLE","MIDDLE"])
FontStyle25.setSize(0.2)

Text24.setFontStyle(FontStyle25)
Shape21.setGeometry(Text24)
Billboard20.addChild(Shape21)
Transform19.addChild(Billboard20)
Group9.addChild(Transform19)
Collision8.addChild(Group9)
Transform26 = TransformObject()
Transform26.setRotation([0,0,1,-1.57079])


Transform26.addComments(CommentsBlock("""Horizontal X arrow and label"""))
Group27 = GroupObject()

Group28 = GroupObject()
Group28.setDEF("ArrowRed")

Shape29 = ShapeObject()

Cylinder30 = CylinderObject()
Cylinder30.setUSE("ArrowCylinder")

Shape29.setGeometry(Cylinder30)
Appearance31 = AppearanceObject()
Appearance31.setDEF("Red")

Material32 = MaterialObject()
Material32.setDiffuseColor([0.7,0.1,0.1])
Material32.setEmissiveColor([0.33,0,0])

Appearance31.setMaterial(Material32)
Shape29.setAppearance(Appearance31)
Group28.addChild(Shape29)
Transform33 = TransformObject()
Transform33.setTranslation([0,1,0])

Shape34 = ShapeObject()

Cone35 = ConeObject()
Cone35.setUSE("ArrowCone")

Shape34.setGeometry(Cone35)
Appearance36 = AppearanceObject()
Appearance36.setUSE("Red")

Shape34.setAppearance(Appearance36)
Transform33.addChild(Shape34)
Group28.addChild(Transform33)
Group27.addChild(Group28)
Transform37 = TransformObject()
Transform37.setRotation([0,0,1,1.57079])
Transform37.setTranslation([0.072,1.1,0])


Transform37.addComments(CommentsBlock("""note label rotated back to original coordinate frame"""))
Billboard38 = BillboardObject()

Shape39 = ShapeObject()

Appearance40 = AppearanceObject()
Appearance40.setUSE("LABEL_APPEARANCE")

Shape39.setAppearance(Appearance40)
Text41 = TextObject()
Text41.setString(["X"])

FontStyle42 = FontStyleObject()
FontStyle42.setUSE("LABEL_FONT")

Text41.setFontStyle(FontStyle42)
Shape39.setGeometry(Text41)
Billboard38.addChild(Shape39)
Transform37.addChild(Billboard38)
Group27.addChild(Transform37)
Transform26.addChild(Group27)
Collision8.addChild(Transform26)
Transform43 = TransformObject()
Transform43.setRotation([1,0,0,1.57079])


Transform43.addComments(CommentsBlock("""Perpendicular Z arrow and label, note right-hand rule"""))
Group44 = GroupObject()

Group45 = GroupObject()
Group45.setDEF("ArrowBlue")

Shape46 = ShapeObject()

Cylinder47 = CylinderObject()
Cylinder47.setUSE("ArrowCylinder")

Shape46.setGeometry(Cylinder47)
Appearance48 = AppearanceObject()
Appearance48.setDEF("Blue")

Material49 = MaterialObject()
Material49.setDiffuseColor([0.3,0.3,1])
Material49.setEmissiveColor([0.1,0.1,0.33])

Appearance48.setMaterial(Material49)
Shape46.setAppearance(Appearance48)
Group45.addChild(Shape46)
Transform50 = TransformObject()
Transform50.setTranslation([0,1,0])

Shape51 = ShapeObject()

Cone52 = ConeObject()
Cone52.setUSE("ArrowCone")

Shape51.setGeometry(Cone52)
Appearance53 = AppearanceObject()
Appearance53.setUSE("Blue")

Shape51.setAppearance(Appearance53)
Transform50.addChild(Shape51)
Group45.addChild(Transform50)
Group44.addChild(Group45)
Transform54 = TransformObject()
Transform54.setRotation([1,0,0,-1.57079])
Transform54.setTranslation([0,1.1,0.072])


Transform54.addComments(CommentsBlock("""note label rotated back to original coordinate frame"""))
Billboard55 = BillboardObject()

Shape56 = ShapeObject()

Appearance57 = AppearanceObject()
Appearance57.setUSE("LABEL_APPEARANCE")

Shape56.setAppearance(Appearance57)
Text58 = TextObject()
Text58.setString(["Z"])

FontStyle59 = FontStyleObject()
FontStyle59.setUSE("LABEL_FONT")

Text58.setFontStyle(FontStyle59)
Shape56.setGeometry(Text58)
Billboard55.addChild(Shape56)
Transform54.addChild(Billboard55)
Group44.addChild(Transform54)
Transform43.addChild(Group44)
Collision8.addChild(Transform43)
Scene7.addChild(Collision8)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/CoordinateAxes.new.x3d")
