import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("asmallbox.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("a box")

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
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.setName("one")
ProtoInterface18 = x3d.ProtoInterface()
field19 = x3d.field()
field19.setName("myShape")
field19.setAccessType("inputOutput")
field19.setType("MFNode")
Shape20 = x3d.Shape()
Cylinder21 = x3d.Cylinder()

Shape20.setGeometry(Cylinder21)

field19.addChildren(Shape20)

ProtoInterface18.addField(field19)

ProtoDeclare17.setProtoInterface(ProtoInterface18)
ProtoBody22 = x3d.ProtoBody()
Transform23 = x3d.Transform()
ProtoInstance24 = x3d.ProtoInstance()
ProtoInstance24.setName("anyShape")
IS25 = x3d.IS()
connect26 = x3d.connect()
connect26.setNodeField("myShape")
connect26.setProtoField("myShape")

IS25.addConnect(connect26)

ProtoInstance24.setIS(IS25)

Transform23.addChildren(ProtoInstance24)

ProtoBody22.addChildren(Transform23)

ProtoDeclare17.setProtoBody(ProtoBody22)

Scene7.addChildren(ProtoDeclare17)
ProtoInstance27 = x3d.ProtoInstance()
ProtoInstance27.setName("one")
fieldValue28 = x3d.fieldValue()
fieldValue28.setName("myShape")
Shape29 = x3d.Shape()
Box30 = x3d.Box()

Shape29.setGeometry(Box30)

fieldValue28.addChildren(Shape29)

ProtoInstance27.addFieldValue(fieldValue28)

Scene7.addChildren(ProtoInstance27)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/asmallbox.new.python.x3d")
X3D0.toFileJSON("../data/asmallbox.new.python.json")
