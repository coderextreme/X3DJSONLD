import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("sphere.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/sphere.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("a sphere")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
Group8 = x3d.Group()
Group8.setBboxCenter([0,0,0])
Group8.setBboxSize([-1,-1,-1])
Shape9 = x3d.Shape()
Shape9.setBboxCenter([0,0,0])
Shape9.setBboxSize([-1,-1,-1])
Appearance10 = x3d.Appearance()
Material11 = x3d.Material()
Material11.setDiffuseColor([1,1,1])

Appearance10.setMaterial(Material11)

Shape9.setAppearance(Appearance10)
Sphere12 = x3d.Sphere()

Shape9.setGeometry(Sphere12)

Group8.addChildren(Shape9)

Scene7.addChildren(Group8)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/sphere_RoundTrip.x3d")
