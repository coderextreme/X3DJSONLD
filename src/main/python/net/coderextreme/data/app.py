import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("John W")
meta2.setContent("Carlson, I")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("John A")
meta3.setContent("Carlson, II")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("John R")
meta4.setContent("Carlson, III")

head1.addMeta(meta4)

X3D0.setHead(head1)
Scene5 = x3d.Scene()
Group6 = x3d.Group()
Group6.setBboxCenter([0,0,0])
Group6.setBboxSize([-1,-1,-1])
Group6.setVisible(True)
Shape7 = x3d.Shape()
Shape7.setBboxCenter([0,0,0])
Shape7.setBboxSize([-1,-1,-1])
Shape7.setVisible(True)
Appearance8 = x3d.Appearance()
Material9 = x3d.Material()
Material9.setDiffuseColor([1,0,0])

Appearance8.setMaterial(Material9)

Shape7.setAppearance(Appearance8)
Box10 = x3d.Box()
Box10.setSize([2,2,2])
Box10.setSolid(True)

Shape7.setGeometry(Box10)

Group6.addChildren(Shape7)

Scene5.addChildren(Group6)
Transform11 = x3d.Transform()
Transform11.setBboxCenter([0,0,0])
Transform11.setBboxSize([-1,-1,-1])
Transform11.setRotation([7,8,9,3.14])
Transform11.setScale([4,5,6])
Transform11.setTranslation([1,2,3])
Transform11.setVisible(True)

Scene5.addChildren(Transform11)

X3D0.setScene(Scene5)
X3D0.toFileX3D("../data/app_RoundTrip.x3d")
