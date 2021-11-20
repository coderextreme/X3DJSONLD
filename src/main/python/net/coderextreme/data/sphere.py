from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.3")
head1 = head()
component2 = component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = meta()
meta3.setName("title")
meta3.setContent("sphere.x3d")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("creator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("generator")
meta5.setContent("manual")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/sphere.x3d")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("description")
meta7.setContent("a sphere")

head1.addMeta(meta7)

X3D0.setHead(head1)
Scene8 = Scene()
Group9 = Group()
Shape10 = Shape()
Appearance11 = Appearance()
Material12 = Material()
Material12.setDiffuseColor([1,1,1])

Appearance11.setMaterial(Material12)

Shape10.setAppearance(Appearance11)
Sphere13 = Sphere()

Shape10.setGeometry(Sphere13)

Group9.addChildren(Shape10)

Scene8.addChildren(Group9)

X3D0.setScene(Scene8)
X3D0.toFileX3D("../data/sphere_RoundTrip.x3d")
