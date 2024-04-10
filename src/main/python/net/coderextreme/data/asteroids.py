import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("asteroids.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/asteroids.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("asteroids")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
ProtoDeclare8 = x3d.ProtoDeclare()
ProtoDeclare8.setName("anyShape")
ProtoInterface9 = x3d.ProtoInterface()
field10 = x3d.field()
field10.setName("myShape")
field10.setAccessType("inputOutput")
field10.setType("MFNode")
Shape11 = x3d.Shape()
Sphere12 = x3d.Sphere()

Shape11.setGeometry(Sphere12)

field10.addChildren(Shape11)

ProtoInterface9.addField(field10)

ProtoDeclare8.setProtoInterface(ProtoInterface9)
ProtoBody13 = x3d.ProtoBody()
Transform14 = x3d.Transform()
IS15 = x3d.IS()
connect16 = x3d.connect()
connect16.setNodeField("children")
connect16.setProtoField("myShape")

IS15.addConnect(connect16)

Transform14.setIS(IS15)

ProtoBody13.addChildren(Transform14)

ProtoDeclare8.setProtoBody(ProtoBody13)

Scene7.addChildren(ProtoDeclare8)
ProtoInstance17 = x3d.ProtoInstance()
ProtoInstance17.setName("anyShape")

Scene7.addChildren(ProtoInstance17)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/asteroids.new.python.x3d")
X3D0.toFileJSON("../data/asteroids.new.python.json")
