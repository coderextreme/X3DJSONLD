from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("asteroids.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/asteroids.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("asteroids")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
ProtoDeclare8 = ProtoDeclare()
ProtoDeclare8.setName("anyShape")
ProtoInterface9 = ProtoInterface()
field10 = field()
field10.setName("myShape")
field10.setAccessType("inputOutput")
field10.setType("MFNode")
Shape11 = Shape()
Sphere12 = Sphere()

Shape11.setGeometry(Sphere12)

field10.addChildren(Shape11)

ProtoInterface9.addField(field10)

ProtoDeclare8.setProtoInterface(ProtoInterface9)
ProtoBody13 = ProtoBody()
Transform14 = Transform()
IS15 = IS()
connect16 = connect()
connect16.setNodeField("children")
connect16.setProtoField("myShape")

IS15.addConnect(connect16)

Transform14.setIS(IS15)

ProtoBody13.addChildren(Transform14)

ProtoDeclare8.setProtoBody(ProtoBody13)

Scene7.addChildren(ProtoDeclare8)
ProtoInstance17 = ProtoInstance()
ProtoInstance17.setName("anyShape")

Scene7.addChildren(ProtoInstance17)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../personal/asteroids_RoundTrip.x3d")
