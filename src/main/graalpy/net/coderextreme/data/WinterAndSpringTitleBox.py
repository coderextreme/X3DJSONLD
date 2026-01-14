import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("WinterAndSpringTitleBox.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Credits for scene.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Carol McDonald")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("translator")
meta5.setContent("Joe Williams and Don Brutzman")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("26 June 2023")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("Mon, 15 Sep 2025 05:21:02 GMT")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("identifier")
meta9.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringTitleBox.x3d")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.setTitle("WinterAndSpringTitleBox.x3d")

Scene10.addChild(WorldInfo11)
Viewpoint12 = x3d.Viewpoint()
Viewpoint12.setDEF("WinterAndSpringTitleView")
Viewpoint12.setDescription("Look at main title")
Viewpoint12.setPosition(x3d.doubleToFloat([10,11,5]))
Viewpoint12.setOrientation(x3d.doubleToFloat([-0.15,0,0,0.2]))

Scene10.addChild(Viewpoint12)
Transform13 = x3d.Transform()
Transform13.setDEF("WinterAndSpringTitle")
Transform13.setTranslation(x3d.doubleToFloat([10,10,0]))
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()

Appearance15.setMaterial(Material16)
ImageTexture17 = x3d.ImageTexture()
ImageTexture17.setUrl(["images/WinterAndSpring.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WinterAndSpring.png"])

Appearance15.setTexture(ImageTexture17)

Shape14.setAppearance(Appearance15)
Box18 = x3d.Box()
Box18.setSize(x3d.doubleToFloat([4,3,0.25]))

Shape14.setGeometry(Box18)

Transform13.addChild(Shape14)

Scene10.addChild(Transform13)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/WinterAndSpringTitleBox.new.graalpy.x3d")
X3D0.toFileJSON("../data/WinterAndSpringTitleBox.new.graalpy.x3dj")
