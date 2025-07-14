print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Scripting"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John W Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "created"
meta4.content = "December 13 2015"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "modified"
meta5.content = "July 14 2025"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "title"
meta6.content = "fors2.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "identifier"
meta7.content = "https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "description"
meta8.content = "beginnings of a force directed graph in 3D"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "generator"
meta9.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
ProtoDeclare11 = x3d.ProtoDeclare()
ProtoDeclare11.name = "node"
ProtoInterface12 = x3d.ProtoInterface()
field13 = x3d.field()
field13.name = "position"
field13.accessType = "inputOutput"
field13.type = "SFVec3f"
field13.value = [0,0,0]

ProtoInterface12.field.append(field13)

ProtoDeclare11.ProtoInterface = ProtoInterface12
ProtoBody14 = x3d.ProtoBody()
Group15 = x3d.Group()
Transform16 = x3d.Transform()
Transform16.DEF = "transform"
IS17 = x3d.IS()
connect18 = x3d.connect()
connect18.nodeField = "translation"
connect18.protoField = "position"

IS17.connect.append(connect18)

Transform16.IS = IS17
Shape19 = x3d.Shape()
"""comment before Sphere"""
"""comment after Sphere"""
"""comment after Appearance"""
Sphere20 = x3d.Sphere()

Shape19.geometry = Sphere20
Appearance21 = x3d.Appearance()
"""comment before Material"""
"""comment after Material"""
Material22 = x3d.Material()
Material22.diffuseColor = [1,0,0]

Appearance21.material = Material22

Shape19.appearance = Appearance21

Transform16.children.append(Shape19)

Group15.children.append(Transform16)
PositionInterpolator23 = x3d.PositionInterpolator()
PositionInterpolator23.DEF = "NodePosition"
PositionInterpolator23.key = [0,1]

Group15.children.append(PositionInterpolator23)
Script24 = x3d.Script()
Script24.DEF = "MoveBall"
field25 = x3d.field()
field25.name = "translation"
field25.accessType = "inputOutput"
field25.type = "SFVec3f"
field25.value = [50,50,0]

Script24.field.append(field25)
field26 = x3d.field()
field26.name = "old"
field26.accessType = "inputOutput"
field26.type = "SFVec3f"
field26.value = [0,0,0]

Script24.field.append(field26)
field27 = x3d.field()
field27.name = "set_cycle"
field27.accessType = "inputOnly"
field27.type = "SFTime"

Script24.field.append(field27)
field28 = x3d.field()
field28.name = "keyValue"
field28.accessType = "outputOnly"
field28.type = "MFVec3f"

Script24.field.append(field28)

Script24.sourceCode = '''ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}'''

Group15.children.append(Script24)
TimeSensor29 = x3d.TimeSensor()
TimeSensor29.DEF = "nodeClock"
TimeSensor29.cycleInterval = 3
TimeSensor29.loop = True

Group15.children.append(TimeSensor29)
ROUTE30 = x3d.ROUTE()
ROUTE30.fromNode = "nodeClock"
ROUTE30.fromField = "cycleTime"
ROUTE30.toNode = "MoveBall"
ROUTE30.toField = "set_cycle"

Group15.children.append(ROUTE30)
ROUTE31 = x3d.ROUTE()
ROUTE31.fromNode = "nodeClock"
ROUTE31.fromField = "fraction_changed"
ROUTE31.toNode = "NodePosition"
ROUTE31.toField = "set_fraction"

Group15.children.append(ROUTE31)
ROUTE32 = x3d.ROUTE()
ROUTE32.fromNode = "MoveBall"
ROUTE32.fromField = "keyValue"
ROUTE32.toNode = "NodePosition"
ROUTE32.toField = "keyValue"

Group15.children.append(ROUTE32)
ROUTE33 = x3d.ROUTE()
ROUTE33.fromNode = "NodePosition"
ROUTE33.fromField = "value_changed"
ROUTE33.toNode = "transform"
ROUTE33.toField = "set_translation"

Group15.children.append(ROUTE33)

ProtoBody14.children.append(Group15)

ProtoDeclare11.ProtoBody = ProtoBody14

Scene10.children.append(ProtoDeclare11)
ProtoDeclare34 = x3d.ProtoDeclare()
ProtoDeclare34.name = "cyl"
ProtoInterface35 = x3d.ProtoInterface()
field36 = x3d.field()
field36.name = "positionA"
field36.accessType = "inputOutput"
field36.type = "SFVec3f"

ProtoInterface35.field.append(field36)
field37 = x3d.field()
field37.name = "positionB"
field37.accessType = "inputOutput"
field37.type = "SFVec3f"

ProtoInterface35.field.append(field37)

ProtoDeclare34.ProtoInterface = ProtoInterface35
ProtoBody38 = x3d.ProtoBody()
Group39 = x3d.Group()
Shape40 = x3d.Shape()
Extrusion41 = x3d.Extrusion()
Extrusion41.DEF = "extrusion"
Extrusion41.creaseAngle = 0.785

Shape40.geometry = Extrusion41
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.diffuseColor = [0,1,0]

Appearance42.material = Material43

Shape40.appearance = Appearance42

Group39.children.append(Shape40)
Script44 = x3d.Script()
Script44.DEF = "MoveCylinder"
field45 = x3d.field()
field45.name = "spine"
field45.accessType = "inputOutput"
field45.type = "MFVec3f"

Script44.field.append(field45)
field46 = x3d.field()
field46.name = "endA"
field46.accessType = "inputOutput"
field46.type = "SFVec3f"
field46.value = [0,0,0]

Script44.field.append(field46)
field47 = x3d.field()
field47.name = "endB"
field47.accessType = "inputOutput"
field47.type = "SFVec3f"
field47.value = [50,50,50]

Script44.field.append(field47)
IS48 = x3d.IS()
connect49 = x3d.connect()
connect49.nodeField = "endA"
connect49.protoField = "positionA"

IS48.connect.append(connect49)
connect50 = x3d.connect()
connect50.nodeField = "endB"
connect50.protoField = "positionB"

IS48.connect.append(connect50)

Script44.IS = IS48

Script44.sourceCode = '''ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}'''

Group39.children.append(Script44)
ROUTE51 = x3d.ROUTE()
ROUTE51.fromNode = "MoveCylinder"
ROUTE51.fromField = "spine"
ROUTE51.toNode = "extrusion"
ROUTE51.toField = "set_spine"

Group39.children.append(ROUTE51)

ProtoBody38.children.append(Group39)

ProtoDeclare34.ProtoBody = ProtoBody38

Scene10.children.append(ProtoDeclare34)
Transform52 = x3d.Transform()
Transform52.scale = [0.1,0.1,0.1]
ProtoInstance53 = x3d.ProtoInstance()
ProtoInstance53.name = "node"
ProtoInstance53.DEF = "nodeA"
fieldValue54 = x3d.fieldValue()
fieldValue54.name = "position"
fieldValue54.value = "-50 -50 -50"

ProtoInstance53.fieldValue.append(fieldValue54)

Transform52.children.append(ProtoInstance53)
ProtoInstance55 = x3d.ProtoInstance()
ProtoInstance55.name = "node"
ProtoInstance55.DEF = "nodeB"
fieldValue56 = x3d.fieldValue()
fieldValue56.name = "position"
fieldValue56.value = "50 50 50"

ProtoInstance55.fieldValue.append(fieldValue56)

Transform52.children.append(ProtoInstance55)
ProtoInstance57 = x3d.ProtoInstance()
ProtoInstance57.name = "cyl"
ProtoInstance57.DEF = "linkA"

Transform52.children.append(ProtoInstance57)

Scene10.children.append(Transform52)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "nodeA"
ROUTE58.fromField = "position"
ROUTE58.toNode = "linkA"
ROUTE58.toField = "positionA"

Scene10.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "nodeB"
ROUTE59.fromField = "position"
ROUTE59.toNode = "linkA"
ROUTE59.toField = "positionB"

Scene10.children.append(ROUTE59)

X3D0.Scene = Scene10
f = open("../data/fors2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/fors2.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
