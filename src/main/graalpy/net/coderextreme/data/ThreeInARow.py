import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("ThreeInARow.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ThreeInARow.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("3 boxes")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChild(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.setDescription("Cubes")
Viewpoint9.setPosition(x3d.doubleToFloat([0,0,12]))

Scene7.addChild(Viewpoint9)
Transform10 = x3d.Transform()
Transform10.setDEF("first")
Transform10.setTranslation(x3d.doubleToFloat([0,2,0]))
Shape11 = x3d.Shape()
Shape11.setDEF("ball")
Sphere12 = x3d.Sphere()

Shape11.setGeometry(Sphere12)
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance13.setMaterial(Material14)

Shape11.setAppearance(Appearance13)

Transform10.addChild(Shape11)

Scene7.addChild(Transform10)
Transform15 = x3d.Transform()
Shape16 = x3d.Shape()
Shape16.setUSE("ball")

Transform15.addChild(Shape16)

Scene7.addChild(Transform15)
Transform17 = x3d.Transform()
Transform17.setTranslation(x3d.doubleToFloat([0,-2,0]))
Shape18 = x3d.Shape()
Shape18.setUSE("ball")

Transform17.addChild(Shape18)

Scene7.addChild(Transform17)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/ThreeInARow.new.graalpy.x3d")
X3D0.toFileJSON("../data/ThreeInARow.new.graalpy.x3dj")
