print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "creator"
meta2.content = "John W Carlson"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "created"
meta3.content = "December 13 2015"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "modified"
meta4.content = "Mon, 09 Feb 2026 07:11:19 GMT"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "title"
meta5.content = "fors2.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
ProtoDeclare8 = x3d.ProtoDeclare()
ProtoDeclare8.name = "node"
ProtoInterface9 = x3d.ProtoInterface()
field10 = x3d.field()
field10.accessType = "inputOutput"
field10.type = "SFVec3f"
field10.name = "position"

ProtoInterface9.field.append(field10)

ProtoDeclare8.ProtoInterface = ProtoInterface9
ProtoBody11 = x3d.ProtoBody()
Group12 = x3d.Group()
Transform13 = x3d.Transform(DEF="transform")
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.diffuseColor = [1,0,0]

Appearance15.material = Material16

Shape14.appearance = Appearance15
Sphere17 = x3d.Sphere()

Shape14.geometry = Sphere17

Transform13.children.append(Shape14)
IS18 = x3d.IS()
connect19 = x3d.connect()
connect19.nodeField = "translation"
connect19.protoField = "position"

IS18.connect.append(connect19)

Transform13.IS = IS18

Group12.children.append(Transform13)
PositionInterpolator20 = x3d.PositionInterpolator(DEF="NodePosition")
PositionInterpolator20.key = [0,1]
PositionInterpolator20.keyValue = [(0, 0, 0),(0, 5, 0)]

Group12.children.append(PositionInterpolator20)
Script21 = x3d.Script(DEF="MoveBall")
field22 = x3d.field()
field22.accessType = "inputOutput"
field22.type = "SFVec3f"
field22.name = "translation"
field22.value = [50,50,0]

Script21.field.append(field22)
field23 = x3d.field()
field23.accessType = "inputOutput"
field23.type = "SFVec3f"
field23.name = "old"

Script21.field.append(field23)
field24 = x3d.field()
field24.accessType = "inputOnly"
field24.type = "SFTime"
field24.name = "set_cycle"

Script21.field.append(field24)
field25 = x3d.field()
field25.accessType = "outputOnly"
field25.type = "MFVec3f"
field25.name = "keyValue"

Script21.field.append(field25)

Script21.sourceCode = '''ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}'''

Group12.children.append(Script21)
TimeSensor26 = x3d.TimeSensor(DEF="nodeClock")
TimeSensor26.cycleInterval = 3
TimeSensor26.loop = True

Group12.children.append(TimeSensor26)

ProtoBody11.children.append(Group12)
ROUTE27 = x3d.ROUTE()
ROUTE27.fromNode = "nodeClock"
ROUTE27.fromField = "cycleTime"
ROUTE27.toNode = "MoveBall"
ROUTE27.toField = "set_cycle"

ProtoBody11.children.append(ROUTE27)
ROUTE28 = x3d.ROUTE()
ROUTE28.fromNode = "nodeClock"
ROUTE28.fromField = "fraction_changed"
ROUTE28.toNode = "NodePosition"
ROUTE28.toField = "set_fraction"

ProtoBody11.children.append(ROUTE28)
ROUTE29 = x3d.ROUTE()
ROUTE29.fromNode = "MoveBall"
ROUTE29.fromField = "keyValue"
ROUTE29.toNode = "NodePosition"
ROUTE29.toField = "set_keyValue"

ProtoBody11.children.append(ROUTE29)
ROUTE30 = x3d.ROUTE()
ROUTE30.fromNode = "NodePosition"
ROUTE30.fromField = "value_changed"
ROUTE30.toNode = "transform"
ROUTE30.toField = "set_translation"

ProtoBody11.children.append(ROUTE30)

ProtoDeclare8.ProtoBody = ProtoBody11

Scene7.children.append(ProtoDeclare8)
ProtoDeclare31 = x3d.ProtoDeclare()
ProtoDeclare31.name = "cyl"
ProtoInterface32 = x3d.ProtoInterface()
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "SFVec3f"
field33.name = "positionA"

ProtoInterface32.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "SFVec3f"
field34.name = "positionB"

ProtoInterface32.field.append(field34)

ProtoDeclare31.ProtoInterface = ProtoInterface32
ProtoBody35 = x3d.ProtoBody()
Group36 = x3d.Group()
Shape37 = x3d.Shape()
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.diffuseColor = [0,1,0]

Appearance38.material = Material39

Shape37.appearance = Appearance38
Extrusion40 = x3d.Extrusion(DEF="extrusion")
Extrusion40.creaseAngle = 0.785
Extrusion40.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]
Extrusion40.spine = [(0, -50, 0),(0, 0, 0),(0, 50, 0)]

Shape37.geometry = Extrusion40

Group36.children.append(Shape37)
Script41 = x3d.Script(DEF="MoveCylinder")
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "MFVec3f"
field42.name = "spine"
field42.value = [(0, -50, 0),(0, 0, 0),(0, 50, 0)]

Script41.field.append(field42)
field43 = x3d.field()
field43.accessType = "inputOutput"
field43.type = "SFVec3f"
field43.name = "endA"

Script41.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOutput"
field44.type = "SFVec3f"
field44.name = "endB"

Script41.field.append(field44)

Script41.sourceCode = '''ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}'''
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.nodeField = "endA"
connect46.protoField = "positionA"

IS45.connect.append(connect46)
connect47 = x3d.connect()
connect47.nodeField = "endB"
connect47.protoField = "positionB"

IS45.connect.append(connect47)

Script41.IS = IS45

Group36.children.append(Script41)

ProtoBody35.children.append(Group36)
ROUTE48 = x3d.ROUTE()
ROUTE48.fromNode = "MoveCylinder"
ROUTE48.fromField = "spine_changed"
ROUTE48.toNode = "extrusion"
ROUTE48.toField = "set_spine"

ProtoBody35.children.append(ROUTE48)

ProtoDeclare31.ProtoBody = ProtoBody35

Scene7.children.append(ProtoDeclare31)
Transform49 = x3d.Transform()
Transform49.scale = [0.1,0.1,0.1]
ProtoInstance50 = x3d.ProtoInstance(DEF="nodeA")
ProtoInstance50.name = "node"
fieldValue51 = x3d.fieldValue()
fieldValue51.name = "position"
fieldValue51.value = "0 1.965 0"

ProtoInstance50.fieldValue.append(fieldValue51)

Transform49.children.append(ProtoInstance50)
ProtoInstance52 = x3d.ProtoInstance(DEF="nodeB")
ProtoInstance52.name = "node"
fieldValue53 = x3d.fieldValue()
fieldValue53.name = "position"
fieldValue53.value = "0 1.965 0"

ProtoInstance52.fieldValue.append(fieldValue53)

Transform49.children.append(ProtoInstance52)
ProtoInstance54 = x3d.ProtoInstance(DEF="linkA")
ProtoInstance54.name = "cyl"
fieldValue55 = x3d.fieldValue()
fieldValue55.name = "positionA"
fieldValue55.value = "0 1.965 0"

ProtoInstance54.fieldValue.append(fieldValue55)
fieldValue56 = x3d.fieldValue()
fieldValue56.name = "positionB"
fieldValue56.value = "0 1.965 0"

ProtoInstance54.fieldValue.append(fieldValue56)

Transform49.children.append(ProtoInstance54)

Scene7.children.append(Transform49)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "nodeA"
ROUTE57.fromField = "position_changed"
ROUTE57.toNode = "linkA"
ROUTE57.toField = "set_positionA"

Scene7.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "nodeB"
ROUTE58.fromField = "position_changed"
ROUTE58.toNode = "linkA"
ROUTE58.toField = "set_positionB"

Scene7.children.append(ROUTE58)

X3D0.Scene = Scene7
f = open("../data/fors2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/fors2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/fors2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
