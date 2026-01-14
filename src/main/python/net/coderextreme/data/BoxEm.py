print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "BoxEm.x3d"

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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/box.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "3 boxes"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.type = ["EXAMINE"]

Scene7.children.append(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.description = "Cubes on Fire"
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
Cylinder28 = x3d.Cylinder()

Shape27.geometry = Cylinder28
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
ProtoInstance47 = x3d.ProtoInstance()
ProtoInstance47.name = "three"
ProtoInstance47.DEF = "threepi"
fieldValue48 = x3d.fieldValue()
fieldValue48.name = "ytranslation"
fieldValue48.value = "0 0 0"

ProtoInstance47.fieldValue.append(fieldValue48)
fieldValue49 = x3d.fieldValue()
fieldValue49.name = "myShape"
Shape50 = x3d.Shape()
Shape50.DEF = "box"
Box51 = x3d.Box()
Box51.size = [1,1,1]

Shape50.geometry = Box51
Appearance52 = x3d.Appearance()
Material53 = x3d.Material()
Material53.diffuseColor = [0,1,0]

Appearance52.material = Material53

Shape50.appearance = Appearance52

fieldValue49.children.append(Shape50)

ProtoInstance47.fieldValue.append(fieldValue49)

Scene7.children.append(ProtoInstance47)
Transform54 = x3d.Transform()
Transform54.translation = [0,2,0]
Shape55 = x3d.Shape()
Shape55.USE = "box"

Transform54.children.append(Shape55)

Scene7.children.append(Transform54)

X3D0.Scene = Scene7
f = open("../data/BoxEm.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/BoxEm.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/BoxEm.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
