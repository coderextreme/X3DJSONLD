from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("CoordinateAxes.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("Don Brutzman, Byounghyun Yoo")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("created")
meta4.setContent("14 July 2000")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("modified")
meta5.setContent("20 October 2019")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame.")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("reference")
meta7.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("reference")
meta8.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("reference")
meta9.setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("reference")
meta10.setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("identifier")
meta11.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("generator")
meta12.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("license")
meta13.setContent("../license.html")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = Scene()
WorldInfo15 = WorldInfo()
WorldInfo15.setTitle("CoordinateAxes.x3d")

Scene14.addChildren(WorldInfo15)
Collision16 = Collision()
Collision16.setDEF("DoNotCollideWithVisualizationWidget")
#Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.
#This NavigationInfo allows examine mode and will be overridden by any parent scene.
#Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
#Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
Group17 = Group()
#Vertical Y arrow and label
Group18 = Group()
Group18.setDEF("ArrowGreen")
Shape19 = Shape()
Cylinder20 = Cylinder()
Cylinder20.setDEF("ArrowCylinder")
Cylinder20.setRadius(0.025)
Cylinder20.setTop(False)

Shape19.setGeometry(Cylinder20)
Appearance21 = Appearance()
Appearance21.setDEF("Green")
Material22 = Material()
Material22.setDiffuseColor([0.1,0.6,0.1])
Material22.setEmissiveColor([0.05,0.2,0.05])

Appearance21.setMaterial(Material22)

Shape19.setAppearance(Appearance21)

Group18.addChildren(Shape19)
Transform23 = Transform()
Transform23.setTranslation([0,1,0])
Shape24 = Shape()
Cone25 = Cone()
Cone25.setDEF("ArrowCone")
Cone25.setBottomRadius(0.05)
Cone25.setHeight(0.1)

Shape24.setGeometry(Cone25)
Appearance26 = Appearance()
Appearance26.setUSE("Green")

Shape24.setAppearance(Appearance26)

Transform23.addChildren(Shape24)

Group18.addChildren(Transform23)

Group17.addChildren(Group18)
Transform27 = Transform()
Transform27.setTranslation([0,1.08,0])
Billboard28 = Billboard()
Shape29 = Shape()
Appearance30 = Appearance()
Appearance30.setDEF("LABEL_APPEARANCE")
Material31 = Material()
Material31.setDiffuseColor([1,1,0.3])
Material31.setEmissiveColor([0.33,0.33,0.1])

Appearance30.setMaterial(Material31)

Shape29.setAppearance(Appearance30)
Text32 = Text()
Text32.setString(["Y"])
FontStyle33 = FontStyle()
FontStyle33.setDEF("LABEL_FONT")
FontStyle33.setFamily(["SANS"])
FontStyle33.setJustify(["MIDDLE","MIDDLE"])
FontStyle33.setSize(0.2)

Text32.setFontStyle(FontStyle33)

Shape29.setGeometry(Text32)

Billboard28.addChildren(Shape29)

Transform27.addChildren(Billboard28)

Group17.addChildren(Transform27)

Collision16.setProxy(Group17)
Transform34 = Transform()
Transform34.setRotation([0,0,1,-1.57079])
#Horizontal X arrow and label
Group35 = Group()
Group36 = Group()
Group36.setDEF("ArrowRed")
Shape37 = Shape()
Cylinder38 = Cylinder()
Cylinder38.setUSE("ArrowCylinder")

Shape37.setGeometry(Cylinder38)
Appearance39 = Appearance()
Appearance39.setDEF("Red")
Material40 = Material()
Material40.setDiffuseColor([0.7,0.1,0.1])
Material40.setEmissiveColor([0.33,0,0])

Appearance39.setMaterial(Material40)

Shape37.setAppearance(Appearance39)

Group36.addChildren(Shape37)
Transform41 = Transform()
Transform41.setTranslation([0,1,0])
Shape42 = Shape()
Cone43 = Cone()
Cone43.setUSE("ArrowCone")

Shape42.setGeometry(Cone43)
Appearance44 = Appearance()
Appearance44.setUSE("Red")

Shape42.setAppearance(Appearance44)

Transform41.addChildren(Shape42)

Group36.addChildren(Transform41)

Group35.addChildren(Group36)
Transform45 = Transform()
Transform45.setRotation([0,0,1,1.57079])
Transform45.setTranslation([0.072,1.1,0])
#note label rotated back to original coordinate frame
Billboard46 = Billboard()
Shape47 = Shape()
Appearance48 = Appearance()
Appearance48.setUSE("LABEL_APPEARANCE")

Shape47.setAppearance(Appearance48)
Text49 = Text()
Text49.setString(["X"])
FontStyle50 = FontStyle()
FontStyle50.setUSE("LABEL_FONT")

Text49.setFontStyle(FontStyle50)

Shape47.setGeometry(Text49)

Billboard46.addChildren(Shape47)

Transform45.addChildren(Billboard46)

Group35.addChildren(Transform45)

Transform34.addChildren(Group35)

Collision16.setProxy(Transform34)
Transform51 = Transform()
Transform51.setRotation([1,0,0,1.57079])
#Perpendicular Z arrow and label, note right-hand rule
Group52 = Group()
Group53 = Group()
Group53.setDEF("ArrowBlue")
Shape54 = Shape()
Cylinder55 = Cylinder()
Cylinder55.setUSE("ArrowCylinder")

Shape54.setGeometry(Cylinder55)
Appearance56 = Appearance()
Appearance56.setDEF("Blue")
Material57 = Material()
Material57.setDiffuseColor([0.3,0.3,1])
Material57.setEmissiveColor([0.1,0.1,0.33])

Appearance56.setMaterial(Material57)

Shape54.setAppearance(Appearance56)

Group53.addChildren(Shape54)
Transform58 = Transform()
Transform58.setTranslation([0,1,0])
Shape59 = Shape()
Cone60 = Cone()
Cone60.setUSE("ArrowCone")

Shape59.setGeometry(Cone60)
Appearance61 = Appearance()
Appearance61.setUSE("Blue")

Shape59.setAppearance(Appearance61)

Transform58.addChildren(Shape59)

Group53.addChildren(Transform58)

Group52.addChildren(Group53)
Transform62 = Transform()
Transform62.setRotation([1,0,0,-1.57079])
Transform62.setTranslation([0,1.1,0.072])
#note label rotated back to original coordinate frame
Billboard63 = Billboard()
Shape64 = Shape()
Appearance65 = Appearance()
Appearance65.setUSE("LABEL_APPEARANCE")

Shape64.setAppearance(Appearance65)
Text66 = Text()
Text66.setString(["Z"])
FontStyle67 = FontStyle()
FontStyle67.setUSE("LABEL_FONT")

Text66.setFontStyle(FontStyle67)

Shape64.setGeometry(Text66)

Billboard63.addChildren(Shape64)

Transform62.addChildren(Billboard63)

Group52.addChildren(Transform62)

Transform51.addChildren(Group52)

Collision16.setProxy(Transform51)

Scene14.addChildren(Collision16)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/CoordinateAxes_RoundTrip.x3d")
