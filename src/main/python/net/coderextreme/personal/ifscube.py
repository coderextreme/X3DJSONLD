import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("ifscube.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("identifier")
meta3.setContent("http://coderextreme.net/X3DJSONLD/src/main/personal/ifscube.x3d")

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

X3D0.setHead(head1)
Scene7 = x3d.Scene()
Group8 = x3d.Group()
Shape9 = x3d.Shape()
IndexedFaceSet10 = x3d.IndexedFaceSet()
IndexedFaceSet10.setCreaseAngle(1.57)
IndexedFaceSet10.setDEF("IndexedFaceSet")
IndexedFaceSet10.setCoordIndex([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1])
IndexedFaceSet10.setNormalIndex([0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1])
IndexedFaceSet10.setNormalPerVertex(False)
IndexedFaceSet10.setColorIndex([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1])
Coordinate11 = x3d.Coordinate()
Coordinate11.setPoint([0,0,1,0,1,1,1,1,1,1,0,1])

IndexedFaceSet10.setCoord(Coordinate11)
Normal12 = x3d.Normal()
Normal12.setVector([1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1])

IndexedFaceSet10.setNormal(Normal12)
Color13 = x3d.Color()
Color13.setColor([0,1,0])

IndexedFaceSet10.setColor(Color13)

Shape9.setGeometry(IndexedFaceSet10)

Group8.addChildren(Shape9)

Scene7.addChildren(Group8)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../personal/ifscube.new.python.x3d")
X3D0.toFileJSON("../personal/ifscube.new.python.json")
