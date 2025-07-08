import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("AllenBox.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("Allen Box")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("created")
meta4.setContent("8 July 2025")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("license")
meta5.setContent("../license.html")

head1.addMeta(meta5)

X3D0.setHead(head1)
Scene6 = x3d.Scene()
WorldInfo7 = x3d.WorldInfo()
WorldInfo7.setTitle("AllenBox.x3d")

Scene6.addChildren(WorldInfo7)
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.setAvatarSize(x3d.doubleToFloat([0.15,1.53,0.75]))
NavigationInfo8.setSpeed(0.5)
NavigationInfo8.setType(["EXAMINE"])

Scene6.addChildren(NavigationInfo8)
Transform9 = x3d.Transform()
Transform9.setDEF("Floor")
Transform9.setScale(x3d.doubleToFloat([1,0.0125,1]))
Transform9.setTranslation(x3d.doubleToFloat([0,-0.0125,0]))
Shape10 = x3d.Shape()
Box11 = x3d.Box()

Shape10.setGeometry(Box11)
Appearance12 = x3d.Appearance()
Material13 = x3d.Material()

Appearance12.setMaterial(Material13)

Shape10.setAppearance(Appearance12)

Transform9.addChild(Shape10)

Scene6.addChildren(Transform9)

X3D0.setScene(Scene6)
X3D0.toFileX3D("../data/AllenBox.new.python.x3d")
X3D0.toFileJSON("../data/AllenBox.new.python.json")
