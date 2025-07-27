print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "3.3"
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
meta4.content = "April 18 2017"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "title"
meta5.content = "fors2.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/fors2.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "description"
meta7.content = "beginnings of a force directed graph in 3D"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "generator"
meta8.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta8)

X3D0.head = head1
Scene9 = x3d.Scene()
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.name = "node"
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.name = "position"
field12.accessType = "inputOutput"
field12.type = "SFVec3f"
field12.value = [0,0,0]

ProtoInterface11.field.append(field12)

ProtoDeclare10.ProtoInterface = ProtoInterface11
ProtoBody13 = x3d.ProtoBody()
Transform14 = x3d.Transform()
Transform14.DEF = "transform"
IS15 = x3d.IS()
connect16 = x3d.connect()
connect16.nodeField = "translation"
connect16.protoField = "position"

IS15.connect.append(connect16)

Transform14.IS = IS15
Shape17 = x3d.Shape()
"""comment before Sphere"""
"""comment after Sphere"""
"""comment after Appearance"""
Sphere18 = x3d.Sphere()

Shape17.geometry = Sphere18
Appearance19 = x3d.Appearance()
"""comment before Material"""
"""comment after Material"""
Material20 = x3d.Material()
Material20.diffuseColor = [1,0,0]

Appearance19.material = Material20

Shape17.appearance = Appearance19

Transform14.children.append(Shape17)

ProtoBody13.children.append(Transform14)
PositionInterpolator21 = x3d.PositionInterpolator()
PositionInterpolator21.DEF = "NodePosition"
PositionInterpolator21.key = [0,1]

ProtoBody13.children.append(PositionInterpolator21)
Script22 = x3d.Script()
Script22.DEF = "MoveBall"
field23 = x3d.field()
field23.name = "translation"
field23.accessType = "inputOutput"
field23.type = "SFVec3f"
field23.value = [50,50,0]

Script22.field.append(field23)
field24 = x3d.field()
field24.name = "old"
field24.accessType = "inputOutput"
field24.type = "SFVec3f"
field24.value = [0,0,0]

Script22.field.append(field24)
field25 = x3d.field()
field25.name = "set_cycle"
field25.accessType = "inputOnly"
field25.type = "SFTime"

Script22.field.append(field25)
field26 = x3d.field()
field26.name = "keyValue"
field26.accessType = "outputOnly"
field26.type = "MFVec3f"

Script22.field.append(field26)

Script22.sourceCode = '''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}'''

ProtoBody13.children.append(Script22)
TimeSensor27 = x3d.TimeSensor()
TimeSensor27.DEF = "nodeClock"
TimeSensor27.cycleInterval = 3
TimeSensor27.loop = True

ProtoBody13.children.append(TimeSensor27)
ROUTE28 = x3d.ROUTE()
ROUTE28.fromNode = "nodeClock"
ROUTE28.fromField = "cycleTime"
ROUTE28.toNode = "MoveBall"
ROUTE28.toField = "set_cycle"

ProtoBody13.children.append(ROUTE28)
ROUTE29 = x3d.ROUTE()
ROUTE29.fromNode = "nodeClock"
ROUTE29.fromField = "fraction_changed"
ROUTE29.toNode = "NodePosition"
ROUTE29.toField = "set_fraction"

ProtoBody13.children.append(ROUTE29)
ROUTE30 = x3d.ROUTE()
ROUTE30.fromNode = "MoveBall"
ROUTE30.fromField = "keyValue"
ROUTE30.toNode = "NodePosition"
ROUTE30.toField = "keyValue"

ProtoBody13.children.append(ROUTE30)
ROUTE31 = x3d.ROUTE()
ROUTE31.fromNode = "NodePosition"
ROUTE31.fromField = "value_changed"
ROUTE31.toNode = "transform"
ROUTE31.toField = "set_translation"

ProtoBody13.children.append(ROUTE31)

ProtoDeclare10.ProtoBody = ProtoBody13

Scene9.children.append(ProtoDeclare10)
ProtoDeclare32 = x3d.ProtoDeclare()
ProtoDeclare32.name = "cyl"
ProtoInterface33 = x3d.ProtoInterface()
field34 = x3d.field()
field34.name = "positionA"
field34.accessType = "inputOnly"
field34.type = "SFVec3f"

ProtoInterface33.field.append(field34)
field35 = x3d.field()
field35.name = "positionB"
field35.accessType = "inputOnly"
field35.type = "SFVec3f"

ProtoInterface33.field.append(field35)

ProtoDeclare32.ProtoInterface = ProtoInterface33
ProtoBody36 = x3d.ProtoBody()
Shape37 = x3d.Shape()
Extrusion38 = x3d.Extrusion()
Extrusion38.DEF = "extrusion"
Extrusion38.creaseAngle = 0.785

Shape37.geometry = Extrusion38
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.diffuseColor = [0,1,0]

Appearance39.material = Material40

Shape37.appearance = Appearance39

ProtoBody36.children.append(Shape37)
Script41 = x3d.Script()
Script41.DEF = "MoveCylinder"
field42 = x3d.field()
field42.name = "spine"
field42.accessType = "inputOutput"
field42.type = "MFVec3f"

Script41.field.append(field42)
field43 = x3d.field()
field43.name = "set_endA"
field43.accessType = "inputOnly"
field43.type = "SFVec3f"

Script41.field.append(field43)
field44 = x3d.field()
field44.name = "set_endB"
field44.accessType = "inputOnly"
field44.type = "SFVec3f"

Script41.field.append(field44)
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.nodeField = "set_endA"
connect46.protoField = "positionA"

IS45.connect.append(connect46)
connect47 = x3d.connect()
connect47.nodeField = "set_endB"
connect47.protoField = "positionB"

IS45.connect.append(connect47)

Script41.IS = IS45

Script41.sourceCode = '''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"		    Browser.print('\\n'+'\"');\n"+
"                    spine = value;\n"+
"                }'''

ProtoBody36.children.append(Script41)
ROUTE48 = x3d.ROUTE()
ROUTE48.fromNode = "MoveCylinder"
ROUTE48.fromField = "spine"
ROUTE48.toNode = "extrusion"
ROUTE48.toField = "set_spine"

ProtoBody36.children.append(ROUTE48)

ProtoDeclare32.ProtoBody = ProtoBody36

Scene9.children.append(ProtoDeclare32)
Transform49 = x3d.Transform()
Transform49.scale = [0.1,0.1,0.1]
ProtoInstance50 = x3d.ProtoInstance()
ProtoInstance50.name = "node"
ProtoInstance50.DEF = "nodeA"
fieldValue51 = x3d.fieldValue()
fieldValue51.name = "position"
fieldValue51.value = "-50 -50 -50"

ProtoInstance50.fieldValue.append(fieldValue51)

Transform49.children.append(ProtoInstance50)
ProtoInstance52 = x3d.ProtoInstance()
ProtoInstance52.name = "node"
ProtoInstance52.DEF = "nodeB"
fieldValue53 = x3d.fieldValue()
fieldValue53.name = "position"
fieldValue53.value = "50 50 50"

ProtoInstance52.fieldValue.append(fieldValue53)

Transform49.children.append(ProtoInstance52)
ProtoInstance54 = x3d.ProtoInstance()
ProtoInstance54.name = "cyl"
ProtoInstance54.DEF = "linkA"
fieldValue55 = x3d.fieldValue()
fieldValue55.name = "positionA"
fieldValue55.value = "0 0 0"

ProtoInstance54.fieldValue.append(fieldValue55)
fieldValue56 = x3d.fieldValue()
fieldValue56.name = "positionB"
fieldValue56.value = "50 50 50"

ProtoInstance54.fieldValue.append(fieldValue56)

Transform49.children.append(ProtoInstance54)

Scene9.children.append(Transform49)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "nodeA"
ROUTE57.fromField = "position"
ROUTE57.toNode = "linkA"
ROUTE57.toField = "positionA"

Scene9.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "nodeB"
ROUTE58.fromField = "position"
ROUTE58.toNode = "linkA"
ROUTE58.toField = "positionB"

Scene9.children.append(ROUTE58)

X3D0.Scene = Scene9
f = open("../personal/fors2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/fors2.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
