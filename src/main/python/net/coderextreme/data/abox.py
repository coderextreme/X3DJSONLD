print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta4.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "manual"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
ProtoDeclare7 = x3d.ProtoDeclare()
ProtoDeclare7.name = "anyShape"
ProtoInterface8 = x3d.ProtoInterface()
field9 = x3d.field()
field9.accessType = "inputOutput"
field9.type = "MFNode"
field9.name = "myShape"
Shape10 = x3d.Shape(DEF="_1")
Sphere11 = x3d.Sphere()

Shape10.geometry = Sphere11

field9.children.append(Shape10)

ProtoInterface8.field.append(field9)

ProtoDeclare7.ProtoInterface = ProtoInterface8
ProtoBody12 = x3d.ProtoBody()
Transform13 = x3d.Transform()
IS14 = x3d.IS()
connect15 = x3d.connect()
connect15.nodeField = "children"
connect15.protoField = "myShape"

IS14.connect.append(connect15)

Transform13.IS = IS14

ProtoBody12.children.append(Transform13)

ProtoDeclare7.ProtoBody = ProtoBody12

Scene6.children.append(ProtoDeclare7)
ProtoDeclare16 = x3d.ProtoDeclare()
ProtoDeclare16.name = "one"
ProtoInterface17 = x3d.ProtoInterface()
field18 = x3d.field()
field18.accessType = "inputOutput"
field18.type = "MFNode"
field18.name = "myShape"
Shape19 = x3d.Shape(DEF="_2")
Cylinder20 = x3d.Cylinder()

Shape19.geometry = Cylinder20

field18.children.append(Shape19)

ProtoInterface17.field.append(field18)

ProtoDeclare16.ProtoInterface = ProtoInterface17
ProtoBody21 = x3d.ProtoBody()
Transform22 = x3d.Transform()
ProtoInstance23 = x3d.ProtoInstance()
ProtoInstance23.name = "anyShape"
IS24 = x3d.IS()
connect25 = x3d.connect()
connect25.nodeField = "myShape"
connect25.protoField = "myShape"

IS24.connect.append(connect25)

ProtoInstance23.IS = IS24

Transform22.children.append(ProtoInstance23)

ProtoBody21.children.append(Transform22)

ProtoDeclare16.ProtoBody = ProtoBody21

Scene6.children.append(ProtoDeclare16)
ProtoInstance26 = x3d.ProtoInstance()
ProtoInstance26.name = "one"
fieldValue27 = x3d.fieldValue()
fieldValue27.name = "myShape"
Shape28 = x3d.Shape(DEF="_3")
Box29 = x3d.Box()
Box29.size = [140,140,140]

Shape28.geometry = Box29

fieldValue27.children.append(Shape28)

ProtoInstance26.fieldValue.append(fieldValue27)

Scene6.children.append(ProtoInstance26)

X3D0.Scene = Scene6
f = open("../data/abox.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/abox.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/abox.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
