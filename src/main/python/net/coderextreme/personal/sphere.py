from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("4.0")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("sphere.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/sphere.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("a sphere")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
Group8 = Group()
Shape9 = Shape()
Appearance10 = Appearance()
Material11 = Material()
Material11.setDiffuseColor([1,1,1])

Appearance10.setMaterial(Material11)

Shape9.setAppearance(Appearance10)
Sphere12 = Sphere()

Shape9.setGeometry(Sphere12)

Group8.addChildren(Shape9)

Scene7.addChildren(Group8)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../personal/sphere_RoundTrip.x3d")
