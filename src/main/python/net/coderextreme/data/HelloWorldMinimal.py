import x3dpsail as x3d
ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
#All head/meta tags are optional, WorldInfo is also optional
#Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("HelloWorldMinimal.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Hello World minimal example scene.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("19 January 2020")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("24 January 2020")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("reference")
meta7.setContent("https://helloworldcollection.de")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("https://en.wiktionary.org/wiki/Hello_World")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("license")
meta16.setContent("../license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()
WorldInfo18 = x3d.WorldInfo()
WorldInfo18.setTitle("HelloWorldMinimal.x3d")

Scene17.addChildren(WorldInfo18)
Shape19 = x3d.Shape()
Text20 = x3d.Text()
Text20.setString(["hello, world"])

Shape19.setGeometry(Text20)

Scene17.addChildren(Shape19)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/HelloWorldMinimal.new.python.x3d")
X3D0.toFileJSON("../data/HelloWorldMinimal.new.python.json")
