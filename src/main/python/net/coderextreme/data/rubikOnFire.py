print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
field10.type = "SFNode"
field10.name = "myShape"
Sphere11 = x3d.Sphere(DEF="_1")

field10.children.append(Sphere11)

ProtoInterface8.field.append(field10)

ProtoDeclare7.ProtoInterface = ProtoInterface8
ProtoBody12 = x3d.ProtoBody()
Transform13 = x3d.Transform()
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.diffuseColor = [1,1,1]

Appearance15.material = Material16

Shape14.appearance = Appearance15
IS17 = x3d.IS()
connect18 = x3d.connect()
connect18.nodeField = "geometry"
connect18.protoField = "myShape"

IS17.connect.append(connect18)

Shape14.IS = IS17

Transform13.children.append(Shape14)
IS19 = x3d.IS()
connect20 = x3d.connect()
connect20.nodeField = "translation"
connect20.protoField = "xtranslation"

IS19.connect.append(connect20)

Transform13.IS = IS19

ProtoBody12.children.append(Transform13)

ProtoDeclare7.ProtoBody = ProtoBody12

Scene6.children.append(ProtoDeclare7)
ProtoDeclare21 = x3d.ProtoDeclare()
ProtoDeclare21.name = "three"
ProtoInterface22 = x3d.ProtoInterface()
field23 = x3d.field()
field23.accessType = "inputOutput"
field23.type = "SFVec3f"
field23.name = "ytranslation"

ProtoInterface22.field.append(field23)
field24 = x3d.field()
field24.accessType = "inputOutput"
field24.type = "SFNode"
field24.name = "myShape"
Sphere25 = x3d.Sphere(DEF="_2")

field24.children.append(Sphere25)

ProtoInterface22.field.append(field24)

ProtoDeclare21.ProtoInterface = ProtoInterface22
ProtoBody26 = x3d.ProtoBody()
Transform27 = x3d.Transform()
ProtoInstance28 = x3d.ProtoInstance()
ProtoInstance28.name = "anyShape"
IS29 = x3d.IS()
connect30 = x3d.connect()
connect30.nodeField = "myShape"
connect30.protoField = "myShape"

IS29.connect.append(connect30)

ProtoInstance28.IS = IS29

Transform27.children.append(ProtoInstance28)
ProtoInstance31 = x3d.ProtoInstance()
ProtoInstance31.name = "anyShape"
fieldValue32 = x3d.fieldValue()
fieldValue32.name = "xtranslation"
fieldValue32.value = "2 0 0"

ProtoInstance31.fieldValue.append(fieldValue32)
IS33 = x3d.IS()
connect34 = x3d.connect()
connect34.nodeField = "myShape"
connect34.protoField = "myShape"

IS33.connect.append(connect34)

ProtoInstance31.IS = IS33

Transform27.children.append(ProtoInstance31)
ProtoInstance35 = x3d.ProtoInstance()
ProtoInstance35.name = "anyShape"
fieldValue36 = x3d.fieldValue()
fieldValue36.name = "xtranslation"
fieldValue36.value = "-2 0 0"

ProtoInstance35.fieldValue.append(fieldValue36)
IS37 = x3d.IS()
connect38 = x3d.connect()
connect38.nodeField = "myShape"
connect38.protoField = "myShape"

IS37.connect.append(connect38)

ProtoInstance35.IS = IS37

Transform27.children.append(ProtoInstance35)
IS39 = x3d.IS()
connect40 = x3d.connect()
connect40.nodeField = "translation"
connect40.protoField = "ytranslation"

IS39.connect.append(connect40)

Transform27.IS = IS39

ProtoBody26.children.append(Transform27)

ProtoDeclare21.ProtoBody = ProtoBody26

Scene6.children.append(ProtoDeclare21)
ProtoDeclare41 = x3d.ProtoDeclare()
ProtoDeclare41.name = "nine"
ProtoInterface42 = x3d.ProtoInterface()
field43 = x3d.field()
field43.accessType = "inputOutput"
field43.type = "SFVec3f"
field43.name = "ztranslation"

ProtoInterface42.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOutput"
field44.type = "SFNode"
field44.name = "myShape"
Sphere45 = x3d.Sphere(DEF="_3")

field44.children.append(Sphere45)

ProtoInterface42.field.append(field44)

ProtoDeclare41.ProtoInterface = ProtoInterface42
ProtoBody46 = x3d.ProtoBody()
Transform47 = x3d.Transform()
ProtoInstance48 = x3d.ProtoInstance()
ProtoInstance48.name = "three"
IS49 = x3d.IS()
connect50 = x3d.connect()
connect50.nodeField = "myShape"
connect50.protoField = "myShape"

IS49.connect.append(connect50)

ProtoInstance48.IS = IS49

Transform47.children.append(ProtoInstance48)
ProtoInstance51 = x3d.ProtoInstance()
ProtoInstance51.name = "three"
fieldValue52 = x3d.fieldValue()
fieldValue52.name = "ytranslation"
fieldValue52.value = "0 2 0"

ProtoInstance51.fieldValue.append(fieldValue52)
IS53 = x3d.IS()
connect54 = x3d.connect()
connect54.nodeField = "myShape"
connect54.protoField = "myShape"

IS53.connect.append(connect54)

ProtoInstance51.IS = IS53

Transform47.children.append(ProtoInstance51)
ProtoInstance55 = x3d.ProtoInstance()
ProtoInstance55.name = "three"
fieldValue56 = x3d.fieldValue()
fieldValue56.name = "ytranslation"
fieldValue56.value = "0 -2 0"

ProtoInstance55.fieldValue.append(fieldValue56)
IS57 = x3d.IS()
connect58 = x3d.connect()
connect58.nodeField = "myShape"
connect58.protoField = "myShape"

IS57.connect.append(connect58)

ProtoInstance55.IS = IS57

Transform47.children.append(ProtoInstance55)
IS59 = x3d.IS()
connect60 = x3d.connect()
connect60.nodeField = "translation"
connect60.protoField = "ztranslation"

IS59.connect.append(connect60)

Transform47.IS = IS59

ProtoBody46.children.append(Transform47)

ProtoDeclare41.ProtoBody = ProtoBody46

Scene6.children.append(ProtoDeclare41)
ProtoDeclare61 = x3d.ProtoDeclare()
ProtoDeclare61.name = "twentyseven"
ProtoInterface62 = x3d.ProtoInterface()
field63 = x3d.field()
field63.accessType = "inputOutput"
field63.type = "SFVec3f"
field63.name = "ttranslation"

ProtoInterface62.field.append(field63)
field64 = x3d.field()
field64.accessType = "inputOutput"
field64.type = "SFNode"
field64.name = "myShape"
Sphere65 = x3d.Sphere(DEF="_4")

field64.children.append(Sphere65)

ProtoInterface62.field.append(field64)

ProtoDeclare61.ProtoInterface = ProtoInterface62
ProtoBody66 = x3d.ProtoBody()
Transform67 = x3d.Transform()
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.name = "nine"
IS69 = x3d.IS()
connect70 = x3d.connect()
connect70.nodeField = "myShape"
connect70.protoField = "myShape"

IS69.connect.append(connect70)

ProtoInstance68.IS = IS69

Transform67.children.append(ProtoInstance68)
ProtoInstance71 = x3d.ProtoInstance()
ProtoInstance71.name = "nine"
fieldValue72 = x3d.fieldValue()
fieldValue72.name = "ztranslation"
fieldValue72.value = "0 0 2"

ProtoInstance71.fieldValue.append(fieldValue72)
IS73 = x3d.IS()
connect74 = x3d.connect()
connect74.nodeField = "myShape"
connect74.protoField = "myShape"

IS73.connect.append(connect74)

ProtoInstance71.IS = IS73

Transform67.children.append(ProtoInstance71)
ProtoInstance75 = x3d.ProtoInstance()
ProtoInstance75.name = "nine"
fieldValue76 = x3d.fieldValue()
fieldValue76.name = "ztranslation"
fieldValue76.value = "0 0 -2"

ProtoInstance75.fieldValue.append(fieldValue76)
IS77 = x3d.IS()
connect78 = x3d.connect()
connect78.nodeField = "myShape"
connect78.protoField = "myShape"

IS77.connect.append(connect78)

ProtoInstance75.IS = IS77

Transform67.children.append(ProtoInstance75)
IS79 = x3d.IS()
connect80 = x3d.connect()
connect80.nodeField = "translation"
connect80.protoField = "ttranslation"

IS79.connect.append(connect80)

Transform67.IS = IS79

ProtoBody66.children.append(Transform67)

ProtoDeclare61.ProtoBody = ProtoBody66

Scene6.children.append(ProtoDeclare61)
NavigationInfo81 = x3d.NavigationInfo()
NavigationInfo81.type = ["ANY","EXAMINE","WALK","FLY","LOOKAT"]

Scene6.children.append(NavigationInfo81)
Viewpoint82 = x3d.Viewpoint()
Viewpoint82.description = "Rubiks Cube on Fire"
Viewpoint82.position = [0,0,12]

Scene6.children.append(Viewpoint82)
ProtoInstance83 = x3d.ProtoInstance()
ProtoInstance83.name = "twentyseven"
fieldValue84 = x3d.fieldValue()
fieldValue84.name = "myShape"
Box85 = x3d.Box(DEF="_5")
Box85.size = [1,1,1]

fieldValue84.children.append(Box85)

ProtoInstance83.fieldValue.append(fieldValue84)

Scene6.children.append(ProtoInstance83)

X3D0.Scene = Scene6
f = open("../data/rubikOnFire.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/rubikOnFire.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/rubikOnFire.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
