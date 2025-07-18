import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("ifscubeworks.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("identifier")
meta3.setContent("http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Template for an Indexed Face Set")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("John Carlson")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("4 April 2017")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("license")
meta7.setContent("https://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("generator")
meta8.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta8)

X3D0.setHead(head1)
Scene9 = x3d.Scene()
WorldInfo10 = x3d.WorldInfo()
WorldInfo10.setTitle("ifscubeworks.x3d")

Scene9.addChild(WorldInfo10)
Group11 = x3d.Group()
Shape12 = x3d.Shape()
IndexedFaceSet13 = x3d.IndexedFaceSet()
IndexedFaceSet13.setDEF("IndexedFaceSet")
IndexedFaceSet13.setCoordIndex([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1])
IndexedFaceSet13.setNormalIndex([0,0,1,2,3,4,5])
IndexedFaceSet13.setNormalPerVertex(False)
IndexedFaceSet13.setColorIndex([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1])
Coordinate14 = x3d.Coordinate()
Coordinate14.setPoint(x3d.doubleToFloat([0,0,1,0,1,1,1,1,1,1,0,1]))

IndexedFaceSet13.setCoord(Coordinate14)
Normal15 = x3d.Normal()
Normal15.setVector(x3d.doubleToFloat([1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1]))

IndexedFaceSet13.setNormal(Normal15)
Color16 = x3d.Color()
Color16.setColor(x3d.doubleToFloat([0,1,0]))

IndexedFaceSet13.setColor(Color16)

Shape12.setGeometry(IndexedFaceSet13)

Group11.addChild(Shape12)

Scene9.addChild(Group11)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../data/ifscubeworks.new.graalpy.x3d")
X3D0.toFileJSON("../data/ifscubeworks.new.graalpy.json")
