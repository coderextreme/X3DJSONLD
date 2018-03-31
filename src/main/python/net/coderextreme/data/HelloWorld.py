# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("HelloWorld.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("Simple X3D scene example: Hello World!")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("created")
meta4.setContent("30 October 2000")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("modified")
meta5.setContent("14 April 2017")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("creator")
meta6.setContent("Don Brutzman")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("Image")
meta7.setContent("HelloWorld.tall.png")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("reference")
meta8.setContent("http://en.wikipedia.org/wiki/Hello_world")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("reference")
meta9.setContent("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("reference")
meta10.setContent("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("reference")
meta11.setContent("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("reference")
meta12.setContent("http://www.HelloWorldExample.net")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("reference")
meta13.setContent("http://www.web3D.org")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("reference")
meta14.setContent("http://www.web3d.org/realtime-3d/news/internationalization-x3d")

head1.addMeta(meta14)
meta15 = metaObject()
meta15.setName("reference")
meta15.setContent("http://www.web3d.org/x3d/content/examples/HelloWorld.x3d")

head1.addMeta(meta15)
meta16 = metaObject()
meta16.setName("reference")
meta16.setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes")

head1.addMeta(meta16)
meta17 = metaObject()
meta17.setName("identifier")
meta17.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d")

head1.addMeta(meta17)
meta18 = metaObject()
meta18.setName("license")
meta18.setContent("http://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta18)
meta19 = metaObject()
meta19.setName("generator")
meta19.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta19)
meta20 = metaObject()
meta20.setName("reference")
meta20.setContent("HelloWorld.wrl")

head1.addMeta(meta20)
meta21 = metaObject()
meta21.setName("reference")
meta21.setContent("HelloWorld.x3dv")

head1.addMeta(meta21)
meta22 = metaObject()
meta22.setName("reference")
meta22.setContent("HelloWorld.x3db")

head1.addMeta(meta22)
meta23 = metaObject()
meta23.setName("reference")
meta23.setContent("HelloWorld.xhtml")

head1.addMeta(meta23)
meta24 = metaObject()
meta24.setName("reference")
meta24.setContent("HelloWorld.json")

head1.addMeta(meta24)

head1.addComments(CommentsBlock("""Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON"""))
X3D0.setHead(head1)
Scene25 = SceneObject()


Scene25.addComments(CommentsBlock("""Example scene to illustrate X3D nodes and fields (XML elements and attributes)"""))
WorldInfo26 = WorldInfoObject()
WorldInfo26.setTitle("Hello world!")

Scene25.addChild(WorldInfo26)
Group27 = GroupObject()

Viewpoint28 = ViewpointObject()
Viewpoint28.setDEF("ViewUpClose")
Viewpoint28.setCenterOfRotation([0,-1,0])
Viewpoint28.setDescription("Hello world!")
Viewpoint28.setPosition([0,-1,7])

Group27.addChild(Viewpoint28)
Transform29 = TransformObject()
Transform29.setRotation([0,1,0,3])

Shape30 = ShapeObject()

Sphere31 = SphereObject()

Shape30.setGeometry(Sphere31)
Appearance32 = AppearanceObject()

Material33 = MaterialObject()
Material33.setDEF("MaterialLightBlue")
Material33.setDiffuseColor([0.1,0.5,1])

Appearance32.setMaterial(Material33)
ImageTexture34 = ImageTextureObject()
ImageTexture34.setDEF("ImageCloudlessEarth")
ImageTexture34.setUrl(["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","http://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])

Appearance32.setTexture(ImageTexture34)
Shape30.setAppearance(Appearance32)
Transform29.addChild(Shape30)
Group27.addChild(Transform29)
Transform35 = TransformObject()
Transform35.setTranslation([0,-2,0])

Shape36 = ShapeObject()

Text37 = TextObject()
Text37.setDEF("TextMessage")
Text37.setString(["Hello","world!"])

FontStyle38 = FontStyleObject()
FontStyle38.setJustify(["MIDDLE","MIDDLE"])

Text37.setFontStyle(FontStyle38)
Shape36.setGeometry(Text37)
Appearance39 = AppearanceObject()

Material40 = MaterialObject()
Material40.setUSE("MaterialLightBlue")

Appearance39.setMaterial(Material40)
Shape36.setAppearance(Appearance39)
Transform35.addChild(Shape36)
Group27.addChild(Transform35)
Scene25.addChild(Group27)
X3D0.setScene(Scene25)

X3D0.toFileX3D("../data/HelloWorld.new.x3d")
