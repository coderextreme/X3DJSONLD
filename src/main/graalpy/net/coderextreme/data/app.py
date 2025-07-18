import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("app.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("Carlson, I")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Carlson, II")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Carlson, III")

head1.addMeta(meta5)

X3D0.setHead(head1)
Scene6 = x3d.Scene()
Group7 = x3d.Group()
Shape8 = x3d.Shape()
Appearance9 = x3d.Appearance()
Material10 = x3d.Material()
Material10.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance9.setMaterial(Material10)

Shape8.setAppearance(Appearance9)
Box11 = x3d.Box()

Shape8.setGeometry(Box11)

Group7.addChild(Shape8)

Scene6.addChild(Group7)
Transform12 = x3d.Transform()
Transform12.setRotation(x3d.doubleToFloat([7,8,9,3.14]))
Transform12.setScale(x3d.doubleToFloat([4,5,6]))
Transform12.setTranslation(x3d.doubleToFloat([1,2,3]))

Scene6.addChild(Transform12)

X3D0.setScene(Scene6)
X3D0.toFileX3D("../data/app.new.graalpy.x3d")
X3D0.toFileJSON("../data/app.new.graalpy.json")
