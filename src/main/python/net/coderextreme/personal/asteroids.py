print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "3.3"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "asteroids.x3d"

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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/asteroids.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "asteroids"

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
ProtoInstance17 = x3d.ProtoInstance()
ProtoInstance17.name = "anyShape"

Scene7.children.append(ProtoInstance17)

X3D0.Scene = Scene7
f = open("../personal/asteroids.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/asteroids.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
