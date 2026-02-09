print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "BoxEm2.x3d"

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
field9.type = "SFVec3f"
field9.name = "xtranslation"

ProtoInterface8.field.append(field9)
field10 = x3d.field()
field10.accessType = "inputOutput"
field10.type = "MFNode"
field10.name = "myShape"
Shape11 = x3d.Shape(DEF="_1")
Appearance12 = x3d.Appearance()
Material13 = x3d.Material()
Material13.diffuseColor = [1,1,1]

Appearance12.material = Material13

Shape11.appearance = Appearance12
Sphere14 = x3d.Sphere()

Shape11.geometry = Sphere14

field10.children.append(Shape11)

ProtoInterface8.field.append(field10)

ProtoDeclare7.ProtoInterface = ProtoInterface8
ProtoBody15 = x3d.ProtoBody()
Transform16 = x3d.Transform()
IS17 = x3d.IS()
connect18 = x3d.connect()
connect18.nodeField = "translation"
connect18.protoField = "xtranslation"

IS17.connect.append(connect18)
connect19 = x3d.connect()
connect19.nodeField = "children"
connect19.protoField = "myShape"

IS17.connect.append(connect19)

Transform16.IS = IS17

ProtoBody15.children.append(Transform16)

ProtoDeclare7.ProtoBody = ProtoBody15

Scene6.children.append(ProtoDeclare7)
ProtoDeclare20 = x3d.ProtoDeclare()
ProtoDeclare20.name = "three"
ProtoInterface21 = x3d.ProtoInterface()
field22 = x3d.field()
field22.accessType = "inputOutput"
field22.type = "SFVec3f"
field22.name = "ytranslation"

ProtoInterface21.field.append(field22)
field23 = x3d.field()
field23.accessType = "inputOutput"
field23.type = "MFNode"
field23.name = "myShape"
Shape24 = x3d.Shape(DEF="_2")
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.diffuseColor = [1,1,1]

Appearance25.material = Material26

Shape24.appearance = Appearance25
Cylinder27 = x3d.Cylinder()

Shape24.geometry = Cylinder27

field23.children.append(Shape24)

ProtoInterface21.field.append(field23)

ProtoDeclare20.ProtoInterface = ProtoInterface21
ProtoBody28 = x3d.ProtoBody()
Transform29 = x3d.Transform()
ProtoInstance30 = x3d.ProtoInstance()
ProtoInstance30.name = "anyShape"
IS31 = x3d.IS()
connect32 = x3d.connect()
connect32.nodeField = "myShape"
connect32.protoField = "myShape"

IS31.connect.append(connect32)

ProtoInstance30.IS = IS31

Transform29.children.append(ProtoInstance30)
ProtoInstance33 = x3d.ProtoInstance()
ProtoInstance33.name = "anyShape"
fieldValue34 = x3d.fieldValue()
fieldValue34.name = "xtranslation"
fieldValue34.value = "2 0 0"

ProtoInstance33.fieldValue.append(fieldValue34)
IS35 = x3d.IS()
connect36 = x3d.connect()
connect36.nodeField = "myShape"
connect36.protoField = "myShape"

IS35.connect.append(connect36)

ProtoInstance33.IS = IS35

Transform29.children.append(ProtoInstance33)
ProtoInstance37 = x3d.ProtoInstance()
ProtoInstance37.name = "anyShape"
fieldValue38 = x3d.fieldValue()
fieldValue38.name = "xtranslation"
fieldValue38.value = "-2 0 0"

ProtoInstance37.fieldValue.append(fieldValue38)
IS39 = x3d.IS()
connect40 = x3d.connect()
connect40.nodeField = "myShape"
connect40.protoField = "myShape"

IS39.connect.append(connect40)

ProtoInstance37.IS = IS39

Transform29.children.append(ProtoInstance37)
IS41 = x3d.IS()
connect42 = x3d.connect()
connect42.nodeField = "translation"
connect42.protoField = "ytranslation"

IS41.connect.append(connect42)

Transform29.IS = IS41

ProtoBody28.children.append(Transform29)

ProtoDeclare20.ProtoBody = ProtoBody28

Scene6.children.append(ProtoDeclare20)
NavigationInfo43 = x3d.NavigationInfo()
NavigationInfo43.type = ["EXAMINE"]

Scene6.children.append(NavigationInfo43)
Viewpoint44 = x3d.Viewpoint()
Viewpoint44.description = "Cubes on Fire"
Viewpoint44.position = [0,0,12]

Scene6.children.append(Viewpoint44)
ProtoInstance45 = x3d.ProtoInstance(DEF="threepi")
ProtoInstance45.name = "three"
fieldValue46 = x3d.fieldValue()
fieldValue46.name = "myShape"
Shape47 = x3d.Shape(DEF="box")
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.diffuseColor = [0,1,0]

Appearance48.material = Material49

Shape47.appearance = Appearance48
Box50 = x3d.Box()
Box50.size = [1,1,1]

Shape47.geometry = Box50

fieldValue46.children.append(Shape47)

ProtoInstance45.fieldValue.append(fieldValue46)

Scene6.children.append(ProtoInstance45)
Transform51 = x3d.Transform()
Transform51.translation = [0,2,0]
Shape52 = x3d.Shape(USE="box")

Transform51.children.append(Shape52)

Scene6.children.append(Transform51)

X3D0.Scene = Scene6
f = open("../data/BoxEm2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/BoxEm2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/BoxEm2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
