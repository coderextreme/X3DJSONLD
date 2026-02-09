print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
Sphere27 = x3d.Sphere()

Shape24.geometry = Sphere27

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
ProtoDeclare43 = x3d.ProtoDeclare()
ProtoDeclare43.name = "nine"
ProtoInterface44 = x3d.ProtoInterface()
field45 = x3d.field()
field45.accessType = "inputOutput"
field45.type = "SFVec3f"
field45.name = "ztranslation"

ProtoInterface44.field.append(field45)
field46 = x3d.field()
field46.accessType = "inputOutput"
field46.type = "MFNode"
field46.name = "myShape"
Shape47 = x3d.Shape(DEF="_3")
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.diffuseColor = [1,1,1]

Appearance48.material = Material49

Shape47.appearance = Appearance48
Sphere50 = x3d.Sphere()

Shape47.geometry = Sphere50

field46.children.append(Shape47)

ProtoInterface44.field.append(field46)

ProtoDeclare43.ProtoInterface = ProtoInterface44
ProtoBody51 = x3d.ProtoBody()
Transform52 = x3d.Transform()
ProtoInstance53 = x3d.ProtoInstance()
ProtoInstance53.name = "three"
IS54 = x3d.IS()
connect55 = x3d.connect()
connect55.nodeField = "myShape"
connect55.protoField = "myShape"

IS54.connect.append(connect55)

ProtoInstance53.IS = IS54

Transform52.children.append(ProtoInstance53)
ProtoInstance56 = x3d.ProtoInstance()
ProtoInstance56.name = "three"
fieldValue57 = x3d.fieldValue()
fieldValue57.name = "ytranslation"
fieldValue57.value = "0 2 0"

ProtoInstance56.fieldValue.append(fieldValue57)
IS58 = x3d.IS()
connect59 = x3d.connect()
connect59.nodeField = "myShape"
connect59.protoField = "myShape"

IS58.connect.append(connect59)

ProtoInstance56.IS = IS58

Transform52.children.append(ProtoInstance56)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.name = "three"
fieldValue61 = x3d.fieldValue()
fieldValue61.name = "ytranslation"
fieldValue61.value = "0 -2 0"

ProtoInstance60.fieldValue.append(fieldValue61)
IS62 = x3d.IS()
connect63 = x3d.connect()
connect63.nodeField = "myShape"
connect63.protoField = "myShape"

IS62.connect.append(connect63)

ProtoInstance60.IS = IS62

Transform52.children.append(ProtoInstance60)
IS64 = x3d.IS()
connect65 = x3d.connect()
connect65.nodeField = "translation"
connect65.protoField = "ztranslation"

IS64.connect.append(connect65)

Transform52.IS = IS64

ProtoBody51.children.append(Transform52)

ProtoDeclare43.ProtoBody = ProtoBody51

Scene6.children.append(ProtoDeclare43)
ProtoDeclare66 = x3d.ProtoDeclare()
ProtoDeclare66.name = "twentyseven"
ProtoInterface67 = x3d.ProtoInterface()
field68 = x3d.field()
field68.accessType = "inputOutput"
field68.type = "SFVec3f"
field68.name = "ttranslation"

ProtoInterface67.field.append(field68)
field69 = x3d.field()
field69.accessType = "inputOutput"
field69.type = "MFNode"
field69.name = "myShape"
Shape70 = x3d.Shape(DEF="_4")
Appearance71 = x3d.Appearance()
Material72 = x3d.Material()
Material72.diffuseColor = [1,1,1]

Appearance71.material = Material72

Shape70.appearance = Appearance71
Sphere73 = x3d.Sphere()

Shape70.geometry = Sphere73

field69.children.append(Shape70)

ProtoInterface67.field.append(field69)

ProtoDeclare66.ProtoInterface = ProtoInterface67
ProtoBody74 = x3d.ProtoBody()
Transform75 = x3d.Transform()
ProtoInstance76 = x3d.ProtoInstance()
ProtoInstance76.name = "nine"
IS77 = x3d.IS()
connect78 = x3d.connect()
connect78.nodeField = "myShape"
connect78.protoField = "myShape"

IS77.connect.append(connect78)

ProtoInstance76.IS = IS77

Transform75.children.append(ProtoInstance76)
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

Transform75.children.append(ProtoInstance79)
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

Transform75.children.append(ProtoInstance83)
IS87 = x3d.IS()
connect88 = x3d.connect()
connect88.nodeField = "translation"
connect88.protoField = "ttranslation"

IS87.connect.append(connect88)

Transform75.IS = IS87

ProtoBody74.children.append(Transform75)

ProtoDeclare66.ProtoBody = ProtoBody74

Scene6.children.append(ProtoDeclare66)
NavigationInfo89 = x3d.NavigationInfo()
NavigationInfo89.type = ["ANY","EXAMINE","WALK","FLY","LOOKAT"]

Scene6.children.append(NavigationInfo89)
Viewpoint90 = x3d.Viewpoint()
Viewpoint90.description = "Rubiks Cube on Fire"
Viewpoint90.position = [0,0,12]

Scene6.children.append(Viewpoint90)
ProtoInstance91 = x3d.ProtoInstance()
ProtoInstance91.name = "twentyseven"
fieldValue92 = x3d.fieldValue()
fieldValue92.name = "myShape"
Shape93 = x3d.Shape(DEF="_5")
Appearance94 = x3d.Appearance()
Material95 = x3d.Material()
Material95.diffuseColor = [0,1,0]

Appearance94.material = Material95

Shape93.appearance = Appearance94
Box96 = x3d.Box()
Box96.size = [1,1,1]

Shape93.geometry = Box96

fieldValue92.children.append(Shape93)

ProtoInstance91.fieldValue.append(fieldValue92)

Scene6.children.append(ProtoInstance91)

X3D0.Scene = Scene6
f = open("../data/rubikFurnace.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/rubikFurnace.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/rubikFurnace.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
