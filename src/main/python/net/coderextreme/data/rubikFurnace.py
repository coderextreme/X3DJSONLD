print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "rubikFurnace.x3d"

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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "a green rubik cube"

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
field13.type = "MFNode"
Shape14 = x3d.Shape()
Sphere15 = x3d.Sphere()

Shape14.geometry = Sphere15
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.diffuseColor = [1,1,1]

Appearance16.material = Material17

Shape14.appearance = Appearance16

field13.children.append(Shape14)

ProtoInterface11.field.append(field13)

ProtoDeclare10.ProtoInterface = ProtoInterface11
ProtoBody18 = x3d.ProtoBody()
Transform19 = x3d.Transform()
IS20 = x3d.IS()
connect21 = x3d.connect()
connect21.nodeField = "translation"
connect21.protoField = "xtranslation"

IS20.connect.append(connect21)
connect22 = x3d.connect()
connect22.nodeField = "children"
connect22.protoField = "myShape"

IS20.connect.append(connect22)

Transform19.IS = IS20

ProtoBody18.children.append(Transform19)

ProtoDeclare10.ProtoBody = ProtoBody18

Scene7.children.append(ProtoDeclare10)
ProtoDeclare23 = x3d.ProtoDeclare()
ProtoDeclare23.name = "three"
ProtoInterface24 = x3d.ProtoInterface()
field25 = x3d.field()
field25.name = "ytranslation"
field25.accessType = "inputOutput"
field25.type = "SFVec3f"
field25.value = [0,0,0]

ProtoInterface24.field.append(field25)
field26 = x3d.field()
field26.name = "myShape"
field26.accessType = "inputOutput"
field26.type = "MFNode"
Shape27 = x3d.Shape()
Sphere28 = x3d.Sphere()

Shape27.geometry = Sphere28
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.diffuseColor = [1,1,1]

Appearance29.material = Material30

Shape27.appearance = Appearance29

field26.children.append(Shape27)

ProtoInterface24.field.append(field26)

ProtoDeclare23.ProtoInterface = ProtoInterface24
ProtoBody31 = x3d.ProtoBody()
Transform32 = x3d.Transform()
IS33 = x3d.IS()
connect34 = x3d.connect()
connect34.nodeField = "translation"
connect34.protoField = "ytranslation"

IS33.connect.append(connect34)

Transform32.IS = IS33
ProtoInstance35 = x3d.ProtoInstance()
ProtoInstance35.name = "anyShape"
fieldValue36 = x3d.fieldValue()
fieldValue36.name = "xtranslation"
fieldValue36.value = "0 0 0"

ProtoInstance35.fieldValue.append(fieldValue36)
IS37 = x3d.IS()
connect38 = x3d.connect()
connect38.nodeField = "myShape"
connect38.protoField = "myShape"

IS37.connect.append(connect38)

ProtoInstance35.IS = IS37

Transform32.children.append(ProtoInstance35)
ProtoInstance39 = x3d.ProtoInstance()
ProtoInstance39.name = "anyShape"
fieldValue40 = x3d.fieldValue()
fieldValue40.name = "xtranslation"
fieldValue40.value = "2 0 0"

ProtoInstance39.fieldValue.append(fieldValue40)
IS41 = x3d.IS()
connect42 = x3d.connect()
connect42.nodeField = "myShape"
connect42.protoField = "myShape"

IS41.connect.append(connect42)

ProtoInstance39.IS = IS41

Transform32.children.append(ProtoInstance39)
ProtoInstance43 = x3d.ProtoInstance()
ProtoInstance43.name = "anyShape"
fieldValue44 = x3d.fieldValue()
fieldValue44.name = "xtranslation"
fieldValue44.value = "-2 0 0"

ProtoInstance43.fieldValue.append(fieldValue44)
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.nodeField = "myShape"
connect46.protoField = "myShape"

IS45.connect.append(connect46)

ProtoInstance43.IS = IS45

Transform32.children.append(ProtoInstance43)

ProtoBody31.children.append(Transform32)

ProtoDeclare23.ProtoBody = ProtoBody31

Scene7.children.append(ProtoDeclare23)
ProtoDeclare47 = x3d.ProtoDeclare()
ProtoDeclare47.name = "nine"
ProtoInterface48 = x3d.ProtoInterface()
field49 = x3d.field()
field49.name = "ztranslation"
field49.accessType = "inputOutput"
field49.type = "SFVec3f"
field49.value = [0,0,0]

ProtoInterface48.field.append(field49)
field50 = x3d.field()
field50.name = "myShape"
field50.accessType = "inputOutput"
field50.type = "MFNode"
Shape51 = x3d.Shape()
Sphere52 = x3d.Sphere()

Shape51.geometry = Sphere52
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.diffuseColor = [1,1,1]

Appearance53.material = Material54

Shape51.appearance = Appearance53

field50.children.append(Shape51)

ProtoInterface48.field.append(field50)

ProtoDeclare47.ProtoInterface = ProtoInterface48
ProtoBody55 = x3d.ProtoBody()
Transform56 = x3d.Transform()
IS57 = x3d.IS()
connect58 = x3d.connect()
connect58.nodeField = "translation"
connect58.protoField = "ztranslation"

IS57.connect.append(connect58)

Transform56.IS = IS57
ProtoInstance59 = x3d.ProtoInstance()
ProtoInstance59.name = "three"
fieldValue60 = x3d.fieldValue()
fieldValue60.name = "ytranslation"
fieldValue60.value = "0 0 0"

ProtoInstance59.fieldValue.append(fieldValue60)
IS61 = x3d.IS()
connect62 = x3d.connect()
connect62.nodeField = "myShape"
connect62.protoField = "myShape"

IS61.connect.append(connect62)

ProtoInstance59.IS = IS61

Transform56.children.append(ProtoInstance59)
ProtoInstance63 = x3d.ProtoInstance()
ProtoInstance63.name = "three"
fieldValue64 = x3d.fieldValue()
fieldValue64.name = "ytranslation"
fieldValue64.value = "0 2 0"

ProtoInstance63.fieldValue.append(fieldValue64)
IS65 = x3d.IS()
connect66 = x3d.connect()
connect66.nodeField = "myShape"
connect66.protoField = "myShape"

IS65.connect.append(connect66)

ProtoInstance63.IS = IS65

Transform56.children.append(ProtoInstance63)
ProtoInstance67 = x3d.ProtoInstance()
ProtoInstance67.name = "three"
fieldValue68 = x3d.fieldValue()
fieldValue68.name = "ytranslation"
fieldValue68.value = "0 -2 0"

ProtoInstance67.fieldValue.append(fieldValue68)
IS69 = x3d.IS()
connect70 = x3d.connect()
connect70.nodeField = "myShape"
connect70.protoField = "myShape"

IS69.connect.append(connect70)

ProtoInstance67.IS = IS69

Transform56.children.append(ProtoInstance67)

ProtoBody55.children.append(Transform56)

ProtoDeclare47.ProtoBody = ProtoBody55

Scene7.children.append(ProtoDeclare47)
ProtoDeclare71 = x3d.ProtoDeclare()
ProtoDeclare71.name = "twentyseven"
ProtoInterface72 = x3d.ProtoInterface()
field73 = x3d.field()
field73.name = "ttranslation"
field73.accessType = "inputOutput"
field73.type = "SFVec3f"
field73.value = [0,0,0]

ProtoInterface72.field.append(field73)
field74 = x3d.field()
field74.name = "myShape"
field74.accessType = "inputOutput"
field74.type = "MFNode"
Shape75 = x3d.Shape()
Sphere76 = x3d.Sphere()

Shape75.geometry = Sphere76
Appearance77 = x3d.Appearance()
Material78 = x3d.Material()
Material78.diffuseColor = [1,1,1]

Appearance77.material = Material78

Shape75.appearance = Appearance77

field74.children.append(Shape75)

ProtoInterface72.field.append(field74)

ProtoDeclare71.ProtoInterface = ProtoInterface72
ProtoBody79 = x3d.ProtoBody()
Transform80 = x3d.Transform()
IS81 = x3d.IS()
connect82 = x3d.connect()
connect82.nodeField = "translation"
connect82.protoField = "ttranslation"

IS81.connect.append(connect82)

Transform80.IS = IS81
ProtoInstance83 = x3d.ProtoInstance()
ProtoInstance83.name = "nine"
fieldValue84 = x3d.fieldValue()
fieldValue84.name = "ztranslation"
fieldValue84.value = "0 0 0"

ProtoInstance83.fieldValue.append(fieldValue84)
IS85 = x3d.IS()
connect86 = x3d.connect()
connect86.nodeField = "myShape"
connect86.protoField = "myShape"

IS85.connect.append(connect86)

ProtoInstance83.IS = IS85

Transform80.children.append(ProtoInstance83)
ProtoInstance87 = x3d.ProtoInstance()
ProtoInstance87.name = "nine"
fieldValue88 = x3d.fieldValue()
fieldValue88.name = "ztranslation"
fieldValue88.value = "0 0 2"

ProtoInstance87.fieldValue.append(fieldValue88)
IS89 = x3d.IS()
connect90 = x3d.connect()
connect90.nodeField = "myShape"
connect90.protoField = "myShape"

IS89.connect.append(connect90)

ProtoInstance87.IS = IS89

Transform80.children.append(ProtoInstance87)
ProtoInstance91 = x3d.ProtoInstance()
ProtoInstance91.name = "nine"
fieldValue92 = x3d.fieldValue()
fieldValue92.name = "ztranslation"
fieldValue92.value = "0 0 -2"

ProtoInstance91.fieldValue.append(fieldValue92)
IS93 = x3d.IS()
connect94 = x3d.connect()
connect94.nodeField = "myShape"
connect94.protoField = "myShape"

IS93.connect.append(connect94)

ProtoInstance91.IS = IS93

Transform80.children.append(ProtoInstance91)

ProtoBody79.children.append(Transform80)

ProtoDeclare71.ProtoBody = ProtoBody79

Scene7.children.append(ProtoDeclare71)
ProtoInstance95 = x3d.ProtoInstance()
ProtoInstance95.name = "twentyseven"
fieldValue96 = x3d.fieldValue()
fieldValue96.name = "ttranslation"
fieldValue96.value = "0 0 0"

ProtoInstance95.fieldValue.append(fieldValue96)
fieldValue97 = x3d.fieldValue()
fieldValue97.name = "myShape"
Shape98 = x3d.Shape()
Box99 = x3d.Box()
Box99.size = [1,1,1]

Shape98.geometry = Box99
Appearance100 = x3d.Appearance()
Material101 = x3d.Material()
Material101.diffuseColor = [0,1,0]

Appearance100.material = Material101

Shape98.appearance = Appearance100

fieldValue97.children.append(Shape98)

ProtoInstance95.fieldValue.append(fieldValue97)

Scene7.children.append(ProtoInstance95)

X3D0.Scene = Scene7
f = open("../data/rubikFurnace.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/rubikFurnace.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/rubikFurnace.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
