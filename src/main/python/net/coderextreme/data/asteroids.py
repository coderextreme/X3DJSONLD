print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
ProtoInstance16 = x3d.ProtoInstance()
ProtoInstance16.name = "anyShape"

Scene6.children.append(ProtoInstance16)

X3D0.Scene = Scene6
f = open("../data/asteroids.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/asteroids.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/asteroids.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
