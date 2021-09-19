from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
meta2 = meta()
meta2.setName("creator")
meta2.setContent("Carlson, I")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("Carlson, II")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("creator")
meta4.setContent("Carlson, III")

head1.addMeta(meta4)

X3D0.setHead(head1)
Scene5 = Scene()
Group6 = Group()
Shape7 = Shape()
Appearance8 = Appearance()
Material9 = Material()
Material9.setDiffuseColor([1,0,0])

Appearance8.setMaterial(Material9)

Shape7.setAppearance(Appearance8)
Box10 = Box()

Shape7.setGeometry(Box10)

Group6.addChildren(Shape7)

Scene5.addChildren(Group6)
Transform11 = Transform()
Transform11.setRotation([7,8,9,3.14])
Transform11.setScale([4,5,6])
Transform11.setTranslation([1,2,3])

Scene5.addChildren(Transform11)

X3D0.setScene(Scene5)
X3D0.toFileX3D("../personal/app_RoundTrip.x3d")
