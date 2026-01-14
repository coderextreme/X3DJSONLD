print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "rubikOnFire.x3d"

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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/rubikOnFire.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "a white rubik cube"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.type = ["ANY","EXAMINE","WALK","FLY","LOOKAT"]

Scene7.children.append(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.description = "Rubiks Cube on Fire"
Viewpoint9.position = [0,0,12]

Scene7.children.append(Viewpoint9)
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.name = "anyShape"
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.name = "xtranslation"
field12.accessType = "inputOutput"
field12.type = "SFVec3f"
field12.value = [0,0,0]

ProtoInterface11.field.append(field12)
field13 = x3d.field()
field13.name = "myShape"
field13.accessType = "inputOutput"
field13.type = "SFNode"
Sphere14 = x3d.Sphere()

field13.children.append(Sphere14)

ProtoInterface11.field.append(field13)

ProtoDeclare10.ProtoInterface = ProtoInterface11
ProtoBody15 = x3d.ProtoBody()
Transform16 = x3d.Transform()
IS17 = x3d.IS()
connect18 = x3d.connect()
connect18.nodeField = "translation"
connect18.protoField = "xtranslation"

IS17.connect.append(connect18)

Transform16.IS = IS17
Shape19 = x3d.Shape()
IS20 = x3d.IS()
connect21 = x3d.connect()
connect21.nodeField = "geometry"
connect21.protoField = "myShape"

IS20.connect.append(connect21)

Shape19.IS = IS20
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.diffuseColor = [1,1,1]

Appearance22.material = Material23

Shape19.appearance = Appearance22

Transform16.children.append(Shape19)

ProtoBody15.children.append(Transform16)

ProtoDeclare10.ProtoBody = ProtoBody15

Scene7.children.append(ProtoDeclare10)
ProtoDeclare24 = x3d.ProtoDeclare()
ProtoDeclare24.name = "three"
ProtoInterface25 = x3d.ProtoInterface()
field26 = x3d.field()
field26.name = "ytranslation"
field26.accessType = "inputOutput"
field26.type = "SFVec3f"
field26.value = [0,0,0]

ProtoInterface25.field.append(field26)
field27 = x3d.field()
field27.name = "myShape"
field27.accessType = "inputOutput"
field27.type = "SFNode"
Sphere28 = x3d.Sphere()

field27.children.append(Sphere28)

ProtoInterface25.field.append(field27)

ProtoDeclare24.ProtoInterface = ProtoInterface25
ProtoBody29 = x3d.ProtoBody()
Transform30 = x3d.Transform()
IS31 = x3d.IS()
connect32 = x3d.connect()
connect32.nodeField = "translation"
connect32.protoField = "ytranslation"

IS31.connect.append(connect32)

Transform30.IS = IS31
ProtoInstance33 = x3d.ProtoInstance()
ProtoInstance33.name = "anyShape"
fieldValue34 = x3d.fieldValue()
fieldValue34.name = "xtranslation"
fieldValue34.value = "0 0 0"

ProtoInstance33.fieldValue.append(fieldValue34)
IS35 = x3d.IS()
connect36 = x3d.connect()
connect36.nodeField = "myShape"
connect36.protoField = "myShape"

IS35.connect.append(connect36)

ProtoInstance33.IS = IS35

Transform30.children.append(ProtoInstance33)
ProtoInstance37 = x3d.ProtoInstance()
ProtoInstance37.name = "anyShape"
fieldValue38 = x3d.fieldValue()
fieldValue38.name = "xtranslation"
fieldValue38.value = "2 0 0"

ProtoInstance37.fieldValue.append(fieldValue38)
IS39 = x3d.IS()
connect40 = x3d.connect()
connect40.nodeField = "myShape"
connect40.protoField = "myShape"

IS39.connect.append(connect40)

ProtoInstance37.IS = IS39

Transform30.children.append(ProtoInstance37)
ProtoInstance41 = x3d.ProtoInstance()
ProtoInstance41.name = "anyShape"
fieldValue42 = x3d.fieldValue()
fieldValue42.name = "xtranslation"
fieldValue42.value = "-2 0 0"

ProtoInstance41.fieldValue.append(fieldValue42)
IS43 = x3d.IS()
connect44 = x3d.connect()
connect44.nodeField = "myShape"
connect44.protoField = "myShape"

IS43.connect.append(connect44)

ProtoInstance41.IS = IS43

Transform30.children.append(ProtoInstance41)

ProtoBody29.children.append(Transform30)

ProtoDeclare24.ProtoBody = ProtoBody29

Scene7.children.append(ProtoDeclare24)
ProtoDeclare45 = x3d.ProtoDeclare()
ProtoDeclare45.name = "nine"
ProtoInterface46 = x3d.ProtoInterface()
field47 = x3d.field()
field47.name = "ztranslation"
field47.accessType = "inputOutput"
field47.type = "SFVec3f"
field47.value = [0,0,0]

ProtoInterface46.field.append(field47)
field48 = x3d.field()
field48.name = "myShape"
field48.accessType = "inputOutput"
field48.type = "SFNode"
Sphere49 = x3d.Sphere()

field48.children.append(Sphere49)

ProtoInterface46.field.append(field48)

ProtoDeclare45.ProtoInterface = ProtoInterface46
ProtoBody50 = x3d.ProtoBody()
Transform51 = x3d.Transform()
IS52 = x3d.IS()
connect53 = x3d.connect()
connect53.nodeField = "translation"
connect53.protoField = "ztranslation"

IS52.connect.append(connect53)

Transform51.IS = IS52
ProtoInstance54 = x3d.ProtoInstance()
ProtoInstance54.name = "three"
fieldValue55 = x3d.fieldValue()
fieldValue55.name = "ytranslation"
fieldValue55.value = "0 0 0"

ProtoInstance54.fieldValue.append(fieldValue55)
IS56 = x3d.IS()
connect57 = x3d.connect()
connect57.nodeField = "myShape"
connect57.protoField = "myShape"

IS56.connect.append(connect57)

ProtoInstance54.IS = IS56

Transform51.children.append(ProtoInstance54)
ProtoInstance58 = x3d.ProtoInstance()
ProtoInstance58.name = "three"
fieldValue59 = x3d.fieldValue()
fieldValue59.name = "ytranslation"
fieldValue59.value = "0 2 0"

ProtoInstance58.fieldValue.append(fieldValue59)
IS60 = x3d.IS()
connect61 = x3d.connect()
connect61.nodeField = "myShape"
connect61.protoField = "myShape"

IS60.connect.append(connect61)

ProtoInstance58.IS = IS60

Transform51.children.append(ProtoInstance58)
ProtoInstance62 = x3d.ProtoInstance()
ProtoInstance62.name = "three"
fieldValue63 = x3d.fieldValue()
fieldValue63.name = "ytranslation"
fieldValue63.value = "0 -2 0"

ProtoInstance62.fieldValue.append(fieldValue63)
IS64 = x3d.IS()
connect65 = x3d.connect()
connect65.nodeField = "myShape"
connect65.protoField = "myShape"

IS64.connect.append(connect65)

ProtoInstance62.IS = IS64

Transform51.children.append(ProtoInstance62)

ProtoBody50.children.append(Transform51)

ProtoDeclare45.ProtoBody = ProtoBody50

Scene7.children.append(ProtoDeclare45)
ProtoDeclare66 = x3d.ProtoDeclare()
ProtoDeclare66.name = "twentyseven"
ProtoInterface67 = x3d.ProtoInterface()
field68 = x3d.field()
field68.name = "ttranslation"
field68.accessType = "inputOutput"
field68.type = "SFVec3f"
field68.value = [0,0,0]

ProtoInterface67.field.append(field68)
field69 = x3d.field()
field69.name = "myShape"
field69.accessType = "inputOutput"
field69.type = "SFNode"
Sphere70 = x3d.Sphere()

field69.children.append(Sphere70)

ProtoInterface67.field.append(field69)

ProtoDeclare66.ProtoInterface = ProtoInterface67
ProtoBody71 = x3d.ProtoBody()
Transform72 = x3d.Transform()
IS73 = x3d.IS()
connect74 = x3d.connect()
connect74.nodeField = "translation"
connect74.protoField = "ttranslation"

IS73.connect.append(connect74)

Transform72.IS = IS73
ProtoInstance75 = x3d.ProtoInstance()
ProtoInstance75.name = "nine"
fieldValue76 = x3d.fieldValue()
fieldValue76.name = "ztranslation"
fieldValue76.value = "0 0 0"

ProtoInstance75.fieldValue.append(fieldValue76)
IS77 = x3d.IS()
connect78 = x3d.connect()
connect78.nodeField = "myShape"
connect78.protoField = "myShape"

IS77.connect.append(connect78)

ProtoInstance75.IS = IS77

Transform72.children.append(ProtoInstance75)
ProtoInstance79 = x3d.ProtoInstance()
ProtoInstance79.name = "nine"
fieldValue80 = x3d.fieldValue()
fieldValue80.name = "ztranslation"
fieldValue80.value = "0 0 2"

ProtoInstance79.fieldValue.append(fieldValue80)
IS81 = x3d.IS()
connect82 = x3d.connect()
connect82.nodeField = "myShape"
connect82.protoField = "myShape"

IS81.connect.append(connect82)

ProtoInstance79.IS = IS81

Transform72.children.append(ProtoInstance79)
ProtoInstance83 = x3d.ProtoInstance()
ProtoInstance83.name = "nine"
fieldValue84 = x3d.fieldValue()
fieldValue84.name = "ztranslation"
fieldValue84.value = "0 0 -2"

ProtoInstance83.fieldValue.append(fieldValue84)
IS85 = x3d.IS()
connect86 = x3d.connect()
connect86.nodeField = "myShape"
connect86.protoField = "myShape"

IS85.connect.append(connect86)

ProtoInstance83.IS = IS85

Transform72.children.append(ProtoInstance83)

ProtoBody71.children.append(Transform72)

ProtoDeclare66.ProtoBody = ProtoBody71

Scene7.children.append(ProtoDeclare66)
ProtoInstance87 = x3d.ProtoInstance()
ProtoInstance87.name = "twentyseven"
fieldValue88 = x3d.fieldValue()
fieldValue88.name = "ttranslation"
fieldValue88.value = "0 0 0"

ProtoInstance87.fieldValue.append(fieldValue88)
fieldValue89 = x3d.fieldValue()
fieldValue89.name = "myShape"
Box90 = x3d.Box()
Box90.size = [1,1,1]

fieldValue89.children.append(Box90)

ProtoInstance87.fieldValue.append(fieldValue89)

Scene7.children.append(ProtoInstance87)

X3D0.Scene = Scene7
f = open("../data/rubikOnFire.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/rubikOnFire.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/rubikOnFire.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
