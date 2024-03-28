import x3dpsail as x3d
ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
head1 = x3d.head()

X3D0.setHead(head1)
Scene2 = x3d.Scene()
Transform3 = x3d.Transform()
Transform3.setScale([10,10,1])
Transform3.setRotation([1,0,0,3.14])
Shape4 = x3d.Shape()
Appearance5 = x3d.Appearance()
Material6 = x3d.Material()
Material6.setDiffuseColor([0.5,0.8,0.5])

Appearance5.setMaterial(Material6)
ImageTexture7 = x3d.ImageTexture()
ImageTexture7.setUrl(["./face2.jpg"])

Appearance5.setTexture(ImageTexture7)

Shape4.setAppearance(Appearance5)
Sphere8 = x3d.Sphere()

Shape4.setGeometry(Sphere8)

Transform3.addChild(Shape4)

Scene2.addChildren(Transform3)

X3D0.setScene(Scene2)
X3D0.toFileX3D("../data/smiley2.new.python.x3d")
X3D0.toFileJSON("../data/smiley2.new.python.json")
