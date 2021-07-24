from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
#All head/meta tags are optional, WorldInfo is also optional
#Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("HelloWorldMinimal.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("description")
meta3.setContent("Hello World minimal example scene.")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("created")
meta5.setContent("19 January 2020")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("modified")
meta6.setContent("24 January 2020")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("reference")
meta7.setContent("https://helloworldcollection.de")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("reference")
meta8.setContent("https://en.wiktionary.org/wiki/Hello_World")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("reference")
meta9.setContent("https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("reference")
meta10.setContent("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("reference")
meta11.setContent("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("reference")
meta12.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("reference")
meta13.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("identifier")
meta14.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d")

head1.addMeta(meta14)
meta15 = meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = meta()
meta16.setName("license")
meta16.setContent("../license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = Scene()
WorldInfo18 = WorldInfo()
WorldInfo18.setTitle("HelloWorldMinimal.x3d")

Scene17.addChildren(WorldInfo18)
Shape19 = Shape()
Text20 = Text()
Text20.setString(["hello, world"])

Shape19.setGeometry(Text20)

Scene17.addChildren(Shape19)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/HelloWorldMinimal_RoundTrip.x3d")
