import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("ScubaTank.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Scuba gear used by Nancy Diving example.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Etsuko Lippi")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("24 January 2001")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("23 May 2020")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("identifier")
meta7.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("generator")
meta8.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("license")
meta9.setContent("../license.html")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.setTitle("ScubaTank.x3d")

Scene10.addChildren(WorldInfo11)
Transform12 = x3d.Transform()
Transform12.setDEF("ScubaTank")
Transform13 = x3d.Transform()
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.setDEF("tank")
Material16.setAmbientIntensity(0.3)
Material16.setDiffuseColor([0.3,0.3,0.5])
Material16.setShininess(0.1)
Material16.setSpecularColor([0.7,0.7,0.8])

Appearance15.setMaterial(Material16)

Shape14.setAppearance(Appearance15)
Cylinder17 = x3d.Cylinder()
Cylinder17.setHeight(0.7)
Cylinder17.setRadius(0.1)

Shape14.setGeometry(Cylinder17)

Transform13.addChild(Shape14)

Transform12.addChildren(Transform13)
Transform18 = x3d.Transform()
Transform18.setTranslation([0,0.35,0])
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.setUSE("tank")

Appearance20.setMaterial(Material21)

Shape19.setAppearance(Appearance20)
Sphere22 = x3d.Sphere()
Sphere22.setRadius(0.098)

Shape19.setGeometry(Sphere22)

Transform18.addChild(Shape19)

Transform12.addChildren(Transform18)
Transform23 = x3d.Transform()
Transform23.setTranslation([0,-0.35,0])
Shape24 = x3d.Shape()
Shape24.setDEF("tankBottom")
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.setDEF("black")
Material26.setAmbientIntensity(0.3)
Material26.setDiffuseColor([0,0,0])

Appearance25.setMaterial(Material26)

Shape24.setAppearance(Appearance25)
Cylinder27 = x3d.Cylinder()
Cylinder27.setHeight(0.06)
Cylinder27.setRadius(0.115)

Shape24.setGeometry(Cylinder27)

Transform23.addChild(Shape24)

Transform12.addChildren(Transform23)
Group28 = x3d.Group()
Group28.setDEF("tankNozzle")
Transform29 = x3d.Transform()
Transform30 = x3d.Transform()
Transform30.setTranslation([0,0.45,0])
Shape31 = x3d.Shape()
Shape31.setDEF("pressure")
Appearance32 = x3d.Appearance()
Material33 = x3d.Material()
Material33.setDEF("pressureColor")
Material33.setAmbientIntensity(0.4)
Material33.setDiffuseColor([0.91,0.91,0.91])
Material33.setShininess(0.16)
Material33.setSpecularColor([0.91,0.9,0.91])

Appearance32.setMaterial(Material33)

Shape31.setAppearance(Appearance32)
Cylinder34 = x3d.Cylinder()
Cylinder34.setHeight(0.1)
Cylinder34.setRadius(0.015)

Shape31.setGeometry(Cylinder34)

Transform30.addChild(Shape31)

Transform29.addChildren(Transform30)
Transform35 = x3d.Transform()
Transform35.setTranslation([0,0.5,0])
Shape36 = x3d.Shape()
Shape36.setDEF("pressureTop")
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.setUSE("black")

Appearance37.setMaterial(Material38)

Shape36.setAppearance(Appearance37)
Cylinder39 = x3d.Cylinder()
Cylinder39.setHeight(0.02)
Cylinder39.setRadius(0.025)

Shape36.setGeometry(Cylinder39)

Transform35.addChild(Shape36)

Transform29.addChildren(Transform35)
Transform40 = x3d.Transform()
Transform40.setRotation([0,0,1,1.57])
Transform40.setTranslation([-0.028,0.462,0])
Transform41 = x3d.Transform()
Shape42 = x3d.Shape()
Shape42.setDEF("connectorToRegulator")
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.setUSE("pressureColor")

Appearance43.setMaterial(Material44)

Shape42.setAppearance(Appearance43)
Cylinder45 = x3d.Cylinder()
Cylinder45.setHeight(0.03)
Cylinder45.setRadius(0.01)

Shape42.setGeometry(Cylinder45)

Transform41.addChild(Shape42)

Transform40.addChildren(Transform41)
Transform46 = x3d.Transform()
Transform46.setTranslation([0,0.02,0])
Shape47 = x3d.Shape()
Shape47.setDEF("connectorToRegulatorTop")
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.setUSE("black")

Appearance48.setMaterial(Material49)

Shape47.setAppearance(Appearance48)
Cylinder50 = x3d.Cylinder()
Cylinder50.setHeight(0.02)
Cylinder50.setRadius(0.02)

Shape47.setGeometry(Cylinder50)

Transform46.addChild(Shape47)

Transform40.addChildren(Transform46)

Transform29.addChildren(Transform40)

Group28.addChildren(Transform29)

Transform12.addChildren(Group28)
Transform51 = x3d.Transform()
Transform51.setTranslation([0,0.2,0])
Shape52 = x3d.Shape()
Shape52.setDEF("tankHoldBelt")
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.setUSE("black")

Appearance53.setMaterial(Material54)

Shape52.setAppearance(Appearance53)
Cylinder55 = x3d.Cylinder()
Cylinder55.setHeight(0.1)
Cylinder55.setRadius(0.115)

Shape52.setGeometry(Cylinder55)

Transform51.addChild(Shape52)

Transform12.addChildren(Transform51)

Scene10.addChildren(Transform12)
Background56 = x3d.Background()
Background56.setSkyColor([0.6,0.6,0.6])

Scene10.addChildren(Background56)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/ScubaTank.new.python.x3d")
