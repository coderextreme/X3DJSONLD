import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("converter")
meta2.setContent("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("converted")
meta3.setContent("Mon, 31 Jul 2023 03:48:04 GMT")

head1.addMeta(meta3)

X3D0.setHead(head1)
Scene4 = x3d.Scene()
NavigationInfo5 = x3d.NavigationInfo()
NavigationInfo5.setHeadlight(False)

Scene4.addChildren(NavigationInfo5)
Group6 = x3d.Group()
Group7 = x3d.Group()
Group7.setDEF("ARROW")
Shape8 = x3d.Shape()
Appearance9 = x3d.Appearance()
Appearance9.setDEF("ARROW_APPEARANCE")
Material10 = x3d.Material()
Material10.setDiffuseColor([0.3,0.3,1])
Material10.setEmissiveColor([0.3,0.3,0.33])

Appearance9.setMaterial(Material10)

Shape8.setAppearance(Appearance9)
Cylinder11 = x3d.Cylinder()
Cylinder11.setTop(False)
Cylinder11.setBottom(False)
Cylinder11.setRadius(0.025)

Shape8.setGeometry(Cylinder11)

Group7.addChildren(Shape8)
Transform12 = x3d.Transform()
Transform12.setTranslation([0,1,0])
Shape13 = x3d.Shape()
Shape13.setDEF("ARROW_POINTER")
Appearance14 = x3d.Appearance()
Appearance14.setUSE("ARROW_APPEARANCE")

Shape13.setAppearance(Appearance14)
Cone15 = x3d.Cone()
Cone15.setHeight(0.1)
Cone15.setBottomRadius(0.05)

Shape13.setGeometry(Cone15)

Transform12.addChild(Shape13)

Group7.addChildren(Transform12)
Transform16 = x3d.Transform()
Transform16.setTranslation([0,-1,0])
Transform16.setRotation([1,0,0,3.1416])
Shape17 = x3d.Shape()
Shape17.setUSE("ARROW_POINTER")

Transform16.addChild(Shape17)

Group7.addChildren(Transform16)

Group6.addChildren(Group7)
Transform18 = x3d.Transform()
Transform18.setTranslation([0,1.08,0])
Billboard19 = x3d.Billboard()
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Appearance21.setDEF("LABEL_APPEARANCE")
Material22 = x3d.Material()
Material22.setDiffuseColor([1,1,0.3])
Material22.setEmissiveColor([0.33,0.33,0.1])

Appearance21.setMaterial(Material22)

Shape20.setAppearance(Appearance21)
Text23 = x3d.Text()
Text23.setString(["Y"])
FontStyle24 = x3d.FontStyle()
FontStyle24.setDEF("LABEL_FONT")
FontStyle24.setFamily(["SANS"])
FontStyle24.setSize(0.2)
FontStyle24.setJustify(["MIDDLE"])

Text23.setFontStyle(FontStyle24)

Shape20.setGeometry(Text23)

Billboard19.addChildren(Shape20)

Transform18.addChildren(Billboard19)

Group6.addChildren(Transform18)

Scene4.addChildren(Group6)
Transform25 = x3d.Transform()
Transform25.setRotation([0,0,1,-1.5708])
Group26 = x3d.Group()
Group27 = x3d.Group()
Group27.setUSE("ARROW")

Group26.addChildren(Group27)
Transform28 = x3d.Transform()
Transform28.setTranslation([0.072,1.1,0])
Transform28.setRotation([0,0,1,1.5708])
Billboard29 = x3d.Billboard()
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Appearance31.setUSE("LABEL_APPEARANCE")

Shape30.setAppearance(Appearance31)
Text32 = x3d.Text()
Text32.setString(["X"])
FontStyle33 = x3d.FontStyle()
FontStyle33.setUSE("LABEL_FONT")

Text32.setFontStyle(FontStyle33)

Shape30.setGeometry(Text32)

Billboard29.addChildren(Shape30)

Transform28.addChildren(Billboard29)

Group26.addChildren(Transform28)

Transform25.addChildren(Group26)

Scene4.addChildren(Transform25)
Transform34 = x3d.Transform()
Transform34.setRotation([1,0,0,1.5708])
Group35 = x3d.Group()
Group36 = x3d.Group()
Group36.setUSE("ARROW")

Group35.addChildren(Group36)
Transform37 = x3d.Transform()
Transform37.setTranslation([0,1.1,0.072])
Transform37.setRotation([1,0,0,-1.5708])
Billboard38 = x3d.Billboard()
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Appearance40.setUSE("LABEL_APPEARANCE")

Shape39.setAppearance(Appearance40)
Text41 = x3d.Text()
Text41.setString(["Z"])
FontStyle42 = x3d.FontStyle()
FontStyle42.setUSE("LABEL_FONT")

Text41.setFontStyle(FontStyle42)

Shape39.setGeometry(Text41)

Billboard38.addChildren(Shape39)

Transform37.addChildren(Billboard38)

Group35.addChildren(Transform37)

Transform34.addChildren(Group35)

Scene4.addChildren(Transform34)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/JointCoordinateAxes.new.python.x3d")
X3D0.toFileJSON("../data/JointCoordinateAxes.new.python.json")
