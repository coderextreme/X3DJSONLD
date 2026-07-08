import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("asphere.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("generator")
meta5.setContent("manual")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/asphere.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("description")
meta7.setContent("a sphere")

head1.addMeta(meta7)

X3D0.setHead(head1)
Scene8 = x3d.Scene()
Group9 = x3d.Group()
Shape10 = x3d.Shape()
Appearance11 = x3d.Appearance()
Material12 = x3d.Material()
Material12.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance11.setMaterial(Material12)

Shape10.setAppearance(Appearance11)
Sphere13 = x3d.Sphere()

Shape10.setGeometry(Sphere13)

Group9.addChild(Shape10)

Scene8.addChild(Group9)

X3D0.setScene(Scene8)
X3D0.toFileX3D("../data/asphere.new.graalpy.x3d")
X3D0.toFileJSON("../data/asphere.new.graalpy.x3dj")
