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
meta3.setContent("Unknown, see X3D Resources Archives")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/CoordinateAxes.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("a box")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
Collision8 = x3d.Collision()
Collision8.setDEF("DoNotCollideWithVisualizationWidget")
#Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.
#This NavigationInfo allows examine mode and will be overridden by any parent scene.
#Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
#Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
Group9 = x3d.Group()
#Vertical Y arrow and label
Group10 = x3d.Group()
Group10.setDEF("ArrowGreen")
Shape11 = x3d.Shape()
Cylinder12 = x3d.Cylinder()
Cylinder12.setDEF("ArrowCylinder")
Cylinder12.setRadius(0.025)
Cylinder12.setTop(False)

Shape11.setGeometry(Cylinder12)
Appearance13 = x3d.Appearance()
Appearance13.setDEF("Green")
Material14 = x3d.Material()
Material14.setDiffuseColor([0.1,0.6,0.1])
Material14.setEmissiveColor([0.05,0.2,0.05])

Appearance13.setMaterial(Material14)

Shape11.setAppearance(Appearance13)

Group10.addChildren(Shape11)
Transform15 = x3d.Transform()
Transform15.setTranslation([0,1,0])
Shape16 = x3d.Shape()
Cone17 = x3d.Cone()
Cone17.setDEF("ArrowCone")
Cone17.setBottomRadius(0.05)
Cone17.setHeight(0.1)

Shape16.setGeometry(Cone17)
Appearance18 = x3d.Appearance()
Appearance18.setUSE("Green")

Shape16.setAppearance(Appearance18)

Transform15.addChildren(Shape16)

Group10.addChildren(Transform15)

Group9.addChildren(Group10)
Transform19 = x3d.Transform()
Transform19.setTranslation([0,1.08,0])
Billboard20 = x3d.Billboard()
Shape21 = x3d.Shape()
Appearance22 = x3d.Appearance()
Appearance22.setDEF("LABEL_APPEARANCE")
Material23 = x3d.Material()
Material23.setDiffuseColor([1,1,0.3])
Material23.setEmissiveColor([0.33,0.33,0.1])

Appearance22.setMaterial(Material23)

Shape21.setAppearance(Appearance22)
Text24 = x3d.Text()
Text24.setString(["Y"])
FontStyle25 = x3d.FontStyle()
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
Transform26 = x3d.Transform()
Transform26.setRotation([0,0,1,-1.57079])
#Horizontal X arrow and label
Group27 = x3d.Group()
Group28 = x3d.Group()
Group28.setDEF("ArrowRed")
Shape29 = x3d.Shape()
Cylinder30 = x3d.Cylinder()
Cylinder30.setUSE("ArrowCylinder")

Shape29.setGeometry(Cylinder30)
Appearance31 = x3d.Appearance()
Appearance31.setDEF("Red")
Material32 = x3d.Material()
Material32.setDiffuseColor([0.7,0.1,0.1])
Material32.setEmissiveColor([0.33,0,0])

Appearance31.setMaterial(Material32)

Shape29.setAppearance(Appearance31)

Group28.addChildren(Shape29)
Transform33 = x3d.Transform()
Transform33.setTranslation([0,1,0])
Shape34 = x3d.Shape()
Cone35 = x3d.Cone()
Cone35.setUSE("ArrowCone")

Shape34.setGeometry(Cone35)
Appearance36 = x3d.Appearance()
Appearance36.setUSE("Red")

Shape34.setAppearance(Appearance36)

Transform33.addChildren(Shape34)

Group28.addChildren(Transform33)

Group27.addChildren(Group28)
Transform37 = x3d.Transform()
Transform37.setRotation([0,0,1,1.57079])
Transform37.setTranslation([0.072,1.1,0])
#note label rotated back to original coordinate frame
Billboard38 = x3d.Billboard()
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Appearance40.setUSE("LABEL_APPEARANCE")

Shape39.setAppearance(Appearance40)
Text41 = x3d.Text()
Text41.setString(["X"])
FontStyle42 = x3d.FontStyle()
FontStyle42.setUSE("LABEL_FONT")

Text41.setFontStyle(FontStyle42)

Shape39.setGeometry(Text41)

Billboard38.addChildren(Shape39)

Transform37.addChildren(Billboard38)

Group27.addChildren(Transform37)

Transform26.addChildren(Group27)

Collision8.setProxy(Transform26)
Transform43 = x3d.Transform()
Transform43.setRotation([1,0,0,1.57079])
#Perpendicular Z arrow and label, note right-hand rule
Group44 = x3d.Group()
Group45 = x3d.Group()
Group45.setDEF("ArrowBlue")
Shape46 = x3d.Shape()
Cylinder47 = x3d.Cylinder()
Cylinder47.setUSE("ArrowCylinder")

Shape46.setGeometry(Cylinder47)
Appearance48 = x3d.Appearance()
Appearance48.setDEF("Blue")
Material49 = x3d.Material()
Material49.setDiffuseColor([0.3,0.3,1])
Material49.setEmissiveColor([0.1,0.1,0.33])

Appearance48.setMaterial(Material49)

Shape46.setAppearance(Appearance48)

Group45.addChildren(Shape46)
Transform50 = x3d.Transform()
Transform50.setTranslation([0,1,0])
Shape51 = x3d.Shape()
Cone52 = x3d.Cone()
Cone52.setUSE("ArrowCone")

Shape51.setGeometry(Cone52)
Appearance53 = x3d.Appearance()
Appearance53.setUSE("Blue")

Shape51.setAppearance(Appearance53)

Transform50.addChildren(Shape51)

Group45.addChildren(Transform50)

Group44.addChildren(Group45)
Transform54 = x3d.Transform()
Transform54.setRotation([1,0,0,-1.57079])
Transform54.setTranslation([0,1.1,0.072])
#note label rotated back to original coordinate frame
Billboard55 = x3d.Billboard()
Shape56 = x3d.Shape()
Appearance57 = x3d.Appearance()
Appearance57.setUSE("LABEL_APPEARANCE")

Shape56.setAppearance(Appearance57)
Text58 = x3d.Text()
Text58.setString(["Z"])
FontStyle59 = x3d.FontStyle()
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
X3D0.toFileX3D("../data/CoordinateAxes_RoundTrip.x3d")
