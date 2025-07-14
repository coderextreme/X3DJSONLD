print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "abox.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "generator"
meta4.content = "manual"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "a box"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
ProtoDeclare8 = x3d.ProtoDeclare()
ProtoDeclare8.name = "anyShape"
ProtoInterface9 = x3d.ProtoInterface()
field10 = x3d.field()
field10.name = "myShape"
field10.accessType = "inputOutput"
field10.type = "MFNode"
Shape11 = x3d.Shape()
Sphere12 = x3d.Sphere()

Shape11.geometry = Sphere12

field10.children.append(Shape11)

ProtoInterface9.field.append(field10)

ProtoDeclare8.ProtoInterface = ProtoInterface9
ProtoBody13 = x3d.ProtoBody()
Transform14 = x3d.Transform()
IS15 = x3d.IS()
connect16 = x3d.connect()
connect16.nodeField = "children"
connect16.protoField = "myShape"

IS15.connect.append(connect16)

Transform14.IS = IS15

ProtoBody13.children.append(Transform14)

ProtoDeclare8.ProtoBody = ProtoBody13

Scene7.children.append(ProtoDeclare8)
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.name = "one"
ProtoInterface18 = x3d.ProtoInterface()
field19 = x3d.field()
field19.name = "myShape"
field19.accessType = "inputOutput"
field19.type = "MFNode"
Shape20 = x3d.Shape()
Cylinder21 = x3d.Cylinder()

Shape20.geometry = Cylinder21

field19.children.append(Shape20)

ProtoInterface18.field.append(field19)

ProtoDeclare17.ProtoInterface = ProtoInterface18
ProtoBody22 = x3d.ProtoBody()
Transform23 = x3d.Transform()
ProtoInstance24 = x3d.ProtoInstance()
ProtoInstance24.name = "anyShape"
IS25 = x3d.IS()
connect26 = x3d.connect()
connect26.nodeField = "myShape"
connect26.protoField = "myShape"

IS25.connect.append(connect26)

ProtoInstance24.IS = IS25

Transform23.children.append(ProtoInstance24)

ProtoBody22.children.append(Transform23)

ProtoDeclare17.ProtoBody = ProtoBody22

Scene7.children.append(ProtoDeclare17)
ProtoInstance27 = x3d.ProtoInstance()
ProtoInstance27.name = "one"
fieldValue28 = x3d.fieldValue()
fieldValue28.name = "myShape"
Shape29 = x3d.Shape()
Box30 = x3d.Box()
Box30.size = [140,140,140]

Shape29.geometry = Box30

fieldValue28.children.append(Shape29)

ProtoInstance27.fieldValue.append(fieldValue28)

Scene7.children.append(ProtoInstance27)

X3D0.Scene = Scene7
f = open("../data/abox.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/abox.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
