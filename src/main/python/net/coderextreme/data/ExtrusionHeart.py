import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setContent("ExtrusionHeart.x3d")
meta2.setName("title")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setContent("Simple extrusion of a Valentine heart.")
meta3.setName("description")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setContent("Class participants in course Introduction to VRML/X3D.")
meta4.setName("creator")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setContent("14 February 2001")
meta5.setName("created")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setContent("27 November 2015")
meta6.setName("modified")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setContent("http://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d")
meta7.setName("identifier")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")
meta8.setName("generator")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setContent("../license.html")
meta9.setName("license")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
Viewpoint11 = x3d.Viewpoint()
Viewpoint11.setDescription("Extrusion Heart")
Viewpoint11.setOrientation([1,0,0,1.57])
Viewpoint11.setPosition([0,-4,0])

Scene10.addChildren(Viewpoint11)
Transform12 = x3d.Transform()
Transform12.setTranslation([0,-0.5,0])
Shape13 = x3d.Shape()
Extrusion14 = x3d.Extrusion()
Extrusion14.setCreaseAngle(3.14159)
Extrusion14.setCrossSection([0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8])
Extrusion14.setScale([0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01])
Extrusion14.setSolid(False)
Extrusion14.setSpine([0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0])

Shape13.setGeometry(Extrusion14)
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.setDiffuseColor([0.8,0.3,0.3])

Appearance15.setMaterial(Material16)

Shape13.setAppearance(Appearance15)

Transform12.addChildren(Shape13)

Scene10.addChildren(Transform12)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/ExtrusionHeart_RoundTrip.x3d")
