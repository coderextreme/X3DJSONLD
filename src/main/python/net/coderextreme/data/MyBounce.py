import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("MyBounce.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("description")
meta5.setContent("3 prismatic spheres")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/SFVec3f.x3d")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()

Scene7.addChildren(NavigationInfo8)
Transform9 = x3d.Transform()
Transform9.setDEF("transform")
Transform9.setBboxCenter([0,0,0])
Transform9.setBboxSize([-1,-1,-1])
Shape10 = x3d.Shape()
Shape10.setBboxCenter([0,0,0])
Shape10.setBboxSize([-1,-1,-1])
Appearance11 = x3d.Appearance()
Material12 = x3d.Material()
Material12.setDiffuseColor([0.7,0.7,0.7])
Material12.setSpecularColor([0.5,0.5,0.5])

Appearance11.setMaterial(Material12)

Shape10.setAppearance(Appearance11)
Sphere13 = x3d.Sphere()

Shape10.setGeometry(Sphere13)

Transform9.addChildren(Shape10)

Scene7.addChildren(Transform9)
TimeSensor14 = x3d.TimeSensor()
TimeSensor14.setDEF("TourTime")
TimeSensor14.setCycleInterval(0.15)
TimeSensor14.setLoop(True)

Scene7.addChildren(TimeSensor14)
ROUTE15 = x3d.ROUTE()
ROUTE15.setFromNode("TourTime")
ROUTE15.setFromField("cycleTime")
ROUTE15.setToNode("Bounce2")
ROUTE15.setToField("set_fraction")

Scene7.addChildren(ROUTE15)
ROUTE16 = x3d.ROUTE()
ROUTE16.setFromNode("Bounce2")
ROUTE16.setFromField("translation_changed")
ROUTE16.setToNode("transform")
ROUTE16.setToField("set_translation")

Scene7.addChildren(ROUTE16)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/MyBounce_RoundTrip.x3d")
