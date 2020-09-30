import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("CoordinateAxes.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("Don Brutzman, Byounghyun Yoo")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("created")
meta4.setContent("14 July 2000")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("modified")
meta5.setContent("20 October 2019")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame.")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("reference")
meta7.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("identifier")
meta11.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("generator")
meta12.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("license")
meta13.setContent("../license.html")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.setTitle("CoordinateAxes.x3d")

Scene14.addChildren(WorldInfo15)
Collision16 = x3d.Collision()
Collision16.setDEF("DoNotCollideWithVisualizationWidget")
Collision16.setEnabled(True)
Collision16.setBboxCenter([0,0,0])
Collision16.setBboxSize([-1,-1,-1])
#Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.
#This NavigationInfo allows examine mode and will be overridden by any parent scene.
#Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
#Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
Group17 = x3d.Group()
Group17.setBboxCenter([0,0,0])
Group17.setBboxSize([-1,-1,-1])
#Vertical Y arrow and label
Group18 = x3d.Group()
Group18.setDEF("ArrowGreen")
Group18.setBboxCenter([0,0,0])
Group18.setBboxSize([-1,-1,-1])
Shape19 = x3d.Shape()
Shape19.setBboxCenter([0,0,0])
Shape19.setBboxSize([-1,-1,-1])
Cylinder20 = x3d.Cylinder()
Cylinder20.setDEF("ArrowCylinder")
Cylinder20.setRadius(0.025)
Cylinder20.setTop(False)

Shape19.setGeometry(Cylinder20)
Appearance21 = x3d.Appearance()
Appearance21.setDEF("Green")
Material22 = x3d.Material()
Material22.setDiffuseColor([0.1,0.6,0.1])
Material22.setEmissiveColor([0.05,0.2,0.05])

Appearance21.setMaterial(Material22)

Shape19.setAppearance(Appearance21)

Group18.addChildren(Shape19)
Transform23 = x3d.Transform()
Transform23.setTranslation([0,1,0])
Transform23.setBboxCenter([0,0,0])
Transform23.setBboxSize([-1,-1,-1])
Shape24 = x3d.Shape()
Shape24.setBboxCenter([0,0,0])
Shape24.setBboxSize([-1,-1,-1])
Cone25 = x3d.Cone()
Cone25.setDEF("ArrowCone")
Cone25.setBottomRadius(0.05)
Cone25.setHeight(0.1)
Cone25.setSide(True)
Cone25.setBottom(True)
Cone25.setSolid(True)

Shape24.setGeometry(Cone25)
Appearance26 = x3d.Appearance()
Appearance26.setUSE("Green")

Shape24.setAppearance(Appearance26)

Transform23.addChildren(Shape24)

Group18.addChildren(Transform23)

Group17.addChildren(Group18)
Transform27 = x3d.Transform()
Transform27.setTranslation([0,1.08,0])
Transform27.setBboxCenter([0,0,0])
Transform27.setBboxSize([-1,-1,-1])
Billboard28 = x3d.Billboard()
Billboard28.setAxisOfRotation([0,1,0])
Billboard28.setBboxCenter([0,0,0])
Billboard28.setBboxSize([-1,-1,-1])
Shape29 = x3d.Shape()
Shape29.setBboxCenter([0,0,0])
Shape29.setBboxSize([-1,-1,-1])
Appearance30 = x3d.Appearance()
Appearance30.setDEF("LABEL_APPEARANCE")
Material31 = x3d.Material()
Material31.setDiffuseColor([1,1,0.3])
Material31.setEmissiveColor([0.33,0.33,0.1])

Appearance30.setMaterial(Material31)

Shape29.setAppearance(Appearance30)
Text32 = x3d.Text()
Text32.setString(["Y"])
FontStyle33 = x3d.FontStyle()
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
Transform34 = x3d.Transform()
Transform34.setRotation([0,0,1,-1.57079])
Transform34.setBboxCenter([0,0,0])
Transform34.setBboxSize([-1,-1,-1])
#Horizontal X arrow and label
Group35 = x3d.Group()
Group35.setBboxCenter([0,0,0])
Group35.setBboxSize([-1,-1,-1])
Group36 = x3d.Group()
Group36.setDEF("ArrowRed")
Group36.setBboxCenter([0,0,0])
Group36.setBboxSize([-1,-1,-1])
Shape37 = x3d.Shape()
Shape37.setBboxCenter([0,0,0])
Shape37.setBboxSize([-1,-1,-1])
Cylinder38 = x3d.Cylinder()
Cylinder38.setUSE("ArrowCylinder")

Shape37.setGeometry(Cylinder38)
Appearance39 = x3d.Appearance()
Appearance39.setDEF("Red")
Material40 = x3d.Material()
Material40.setDiffuseColor([0.7,0.1,0.1])
Material40.setEmissiveColor([0.33,0,0])

Appearance39.setMaterial(Material40)

Shape37.setAppearance(Appearance39)

Group36.addChildren(Shape37)
Transform41 = x3d.Transform()
Transform41.setTranslation([0,1,0])
Transform41.setBboxCenter([0,0,0])
Transform41.setBboxSize([-1,-1,-1])
Shape42 = x3d.Shape()
Shape42.setBboxCenter([0,0,0])
Shape42.setBboxSize([-1,-1,-1])
Cone43 = x3d.Cone()
Cone43.setUSE("ArrowCone")

Shape42.setGeometry(Cone43)
Appearance44 = x3d.Appearance()
Appearance44.setUSE("Red")

Shape42.setAppearance(Appearance44)

Transform41.addChildren(Shape42)

Group36.addChildren(Transform41)

Group35.addChildren(Group36)
Transform45 = x3d.Transform()
Transform45.setRotation([0,0,1,1.57079])
Transform45.setTranslation([0.072,1.1,0])
Transform45.setBboxCenter([0,0,0])
Transform45.setBboxSize([-1,-1,-1])
#note label rotated back to original coordinate frame
Billboard46 = x3d.Billboard()
Billboard46.setAxisOfRotation([0,1,0])
Billboard46.setBboxCenter([0,0,0])
Billboard46.setBboxSize([-1,-1,-1])
Shape47 = x3d.Shape()
Shape47.setBboxCenter([0,0,0])
Shape47.setBboxSize([-1,-1,-1])
Appearance48 = x3d.Appearance()
Appearance48.setUSE("LABEL_APPEARANCE")

Shape47.setAppearance(Appearance48)
Text49 = x3d.Text()
Text49.setString(["X"])
FontStyle50 = x3d.FontStyle()
FontStyle50.setUSE("LABEL_FONT")

Text49.setFontStyle(FontStyle50)

Shape47.setGeometry(Text49)

Billboard46.addChildren(Shape47)

Transform45.addChildren(Billboard46)

Group35.addChildren(Transform45)

Transform34.addChildren(Group35)

Collision16.setProxy(Transform34)
Transform51 = x3d.Transform()
Transform51.setRotation([1,0,0,1.57079])
Transform51.setBboxCenter([0,0,0])
Transform51.setBboxSize([-1,-1,-1])
#Perpendicular Z arrow and label, note right-hand rule
Group52 = x3d.Group()
Group52.setBboxCenter([0,0,0])
Group52.setBboxSize([-1,-1,-1])
Group53 = x3d.Group()
Group53.setDEF("ArrowBlue")
Group53.setBboxCenter([0,0,0])
Group53.setBboxSize([-1,-1,-1])
Shape54 = x3d.Shape()
Shape54.setBboxCenter([0,0,0])
Shape54.setBboxSize([-1,-1,-1])
Cylinder55 = x3d.Cylinder()
Cylinder55.setUSE("ArrowCylinder")

Shape54.setGeometry(Cylinder55)
Appearance56 = x3d.Appearance()
Appearance56.setDEF("Blue")
Material57 = x3d.Material()
Material57.setDiffuseColor([0.3,0.3,1])
Material57.setEmissiveColor([0.1,0.1,0.33])

Appearance56.setMaterial(Material57)

Shape54.setAppearance(Appearance56)

Group53.addChildren(Shape54)
Transform58 = x3d.Transform()
Transform58.setTranslation([0,1,0])
Transform58.setBboxCenter([0,0,0])
Transform58.setBboxSize([-1,-1,-1])
Shape59 = x3d.Shape()
Shape59.setBboxCenter([0,0,0])
Shape59.setBboxSize([-1,-1,-1])
Cone60 = x3d.Cone()
Cone60.setUSE("ArrowCone")

Shape59.setGeometry(Cone60)
Appearance61 = x3d.Appearance()
Appearance61.setUSE("Blue")

Shape59.setAppearance(Appearance61)

Transform58.addChildren(Shape59)

Group53.addChildren(Transform58)

Group52.addChildren(Group53)
Transform62 = x3d.Transform()
Transform62.setRotation([1,0,0,-1.57079])
Transform62.setTranslation([0,1.1,0.072])
Transform62.setBboxCenter([0,0,0])
Transform62.setBboxSize([-1,-1,-1])
#note label rotated back to original coordinate frame
Billboard63 = x3d.Billboard()
Billboard63.setAxisOfRotation([0,1,0])
Billboard63.setBboxCenter([0,0,0])
Billboard63.setBboxSize([-1,-1,-1])
Shape64 = x3d.Shape()
Shape64.setBboxCenter([0,0,0])
Shape64.setBboxSize([-1,-1,-1])
Appearance65 = x3d.Appearance()
Appearance65.setUSE("LABEL_APPEARANCE")

Shape64.setAppearance(Appearance65)
Text66 = x3d.Text()
Text66.setString(["Z"])
FontStyle67 = x3d.FontStyle()
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
