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
meta4.name = "title"
meta4.content = "fors.x3d"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/force.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "beginnings of a force directed graph in 3D"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "generator"
meta7.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
ProtoDeclare9 = x3d.ProtoDeclare()
ProtoDeclare9.name = "node"
ProtoInterface10 = x3d.ProtoInterface()
field11 = x3d.field()
field11.name = "position"
field11.accessType = "inputOutput"
field11.type = "SFVec3f"
field11.value = [0,0,0]

ProtoInterface10.field.append(field11)

ProtoDeclare9.ProtoInterface = ProtoInterface10
ProtoBody12 = x3d.ProtoBody()
Transform13 = x3d.Transform()
Transform13.DEF = "transform"
IS14 = x3d.IS()
connect15 = x3d.connect()
connect15.nodeField = "translation"
connect15.protoField = "position"

IS14.connect.append(connect15)

Transform13.IS = IS14
Shape16 = x3d.Shape()
Sphere17 = x3d.Sphere()

Shape16.geometry = Sphere17
Appearance18 = x3d.Appearance()
Material19 = x3d.Material()
Material19.diffuseColor = [1,0,0]

Appearance18.material = Material19

Shape16.appearance = Appearance18

Transform13.children.append(Shape16)
Transform20 = x3d.Transform()
Transform20.translation = [1,0,0]
Shape21 = x3d.Shape()
Text22 = x3d.Text()
Text22.string = ["Node"]
FontStyle23 = x3d.FontStyle()
FontStyle23.justify = ["MIDDLE","MIDDLE"]
FontStyle23.size = 5

Text22.fontStyle = FontStyle23

Shape21.geometry = Text22
Appearance24 = x3d.Appearance()
Material25 = x3d.Material()
Material25.diffuseColor = [0,0,1]

Appearance24.material = Material25

Shape21.appearance = Appearance24

Transform20.children.append(Shape21)

Transform13.children.append(Transform20)

ProtoBody12.children.append(Transform13)
PositionInterpolator26 = x3d.PositionInterpolator()
PositionInterpolator26.DEF = "NodePosition"
PositionInterpolator26.key = [0,1]

ProtoBody12.children.append(PositionInterpolator26)
Script27 = x3d.Script()
Script27.DEF = "MoveBall"
field28 = x3d.field()
field28.name = "translation"
field28.accessType = "inputOutput"
field28.type = "SFVec3f"
field28.value = [50,50,0]

Script27.field.append(field28)
field29 = x3d.field()
field29.name = "old"
field29.accessType = "inputOutput"
field29.type = "SFVec3f"
field29.value = [0,0,0]

Script27.field.append(field29)
field30 = x3d.field()
field30.name = "set_cycle"
field30.accessType = "inputOnly"
field30.type = "SFTime"

Script27.field.append(field30)
field31 = x3d.field()
field31.name = "keyValue"
field31.accessType = "outputOnly"
field31.type = "MFVec3f"

Script27.field.append(field31)

Script27.sourceCode = '''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}'''

ProtoBody12.children.append(Script27)
TimeSensor32 = x3d.TimeSensor()
TimeSensor32.DEF = "nodeClock"
TimeSensor32.cycleInterval = 3
TimeSensor32.loop = True

ProtoBody12.children.append(TimeSensor32)
ROUTE33 = x3d.ROUTE()
ROUTE33.fromNode = "nodeClock"
ROUTE33.fromField = "cycleTime"
ROUTE33.toNode = "MoveBall"
ROUTE33.toField = "set_cycle"

ProtoBody12.children.append(ROUTE33)
ROUTE34 = x3d.ROUTE()
ROUTE34.fromNode = "nodeClock"
ROUTE34.fromField = "fraction_changed"
ROUTE34.toNode = "NodePosition"
ROUTE34.toField = "set_fraction"

ProtoBody12.children.append(ROUTE34)
ROUTE35 = x3d.ROUTE()
ROUTE35.fromNode = "MoveBall"
ROUTE35.fromField = "keyValue"
ROUTE35.toNode = "NodePosition"
ROUTE35.toField = "keyValue"

ProtoBody12.children.append(ROUTE35)
ROUTE36 = x3d.ROUTE()
ROUTE36.fromNode = "NodePosition"
ROUTE36.fromField = "value_changed"
ROUTE36.toNode = "transform"
ROUTE36.toField = "set_translation"

ProtoBody12.children.append(ROUTE36)

ProtoDeclare9.ProtoBody = ProtoBody12

Scene8.children.append(ProtoDeclare9)
ProtoDeclare37 = x3d.ProtoDeclare()
ProtoDeclare37.name = "cyl"
ProtoInterface38 = x3d.ProtoInterface()
field39 = x3d.field()
field39.name = "set_positionA"
field39.accessType = "inputOnly"
field39.type = "SFVec3f"

ProtoInterface38.field.append(field39)
field40 = x3d.field()
field40.name = "set_positionB"
field40.accessType = "inputOnly"
field40.type = "SFVec3f"

ProtoInterface38.field.append(field40)

ProtoDeclare37.ProtoInterface = ProtoInterface38
ProtoBody41 = x3d.ProtoBody()
Shape42 = x3d.Shape()
Extrusion43 = x3d.Extrusion()
Extrusion43.DEF = "extrusion"
Extrusion43.creaseAngle = 0.785

Shape42.geometry = Extrusion43
Appearance44 = x3d.Appearance()
Material45 = x3d.Material()
Material45.diffuseColor = [0,1,0]

Appearance44.material = Material45

Shape42.appearance = Appearance44

ProtoBody41.children.append(Shape42)
Script46 = x3d.Script()
Script46.DEF = "MoveCylinder"
field47 = x3d.field()
field47.name = "spine"
field47.accessType = "inputOutput"
field47.type = "MFVec3f"

Script46.field.append(field47)
field48 = x3d.field()
field48.name = "set_endA"
field48.accessType = "inputOnly"
field48.type = "SFVec3f"

Script46.field.append(field48)
field49 = x3d.field()
field49.name = "set_endB"
field49.accessType = "inputOnly"
field49.type = "SFVec3f"

Script46.field.append(field49)
IS50 = x3d.IS()
connect51 = x3d.connect()
connect51.nodeField = "set_endA"
connect51.protoField = "set_positionA"

IS50.connect.append(connect51)
connect52 = x3d.connect()
connect52.nodeField = "set_endB"
connect52.protoField = "set_positionB"

IS50.connect.append(connect52)

Script46.IS = IS50

Script46.sourceCode = '''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }'''

ProtoBody41.children.append(Script46)
ROUTE53 = x3d.ROUTE()
ROUTE53.fromNode = "MoveCylinder"
ROUTE53.fromField = "spine"
ROUTE53.toNode = "extrusion"
ROUTE53.toField = "set_spine"

ProtoBody41.children.append(ROUTE53)

ProtoDeclare37.ProtoBody = ProtoBody41

Scene8.children.append(ProtoDeclare37)
Transform54 = x3d.Transform()
Transform54.DEF = "HoldsContent"
Transform54.scale = [0.1,0.1,0.1]
PlaneSensor55 = x3d.PlaneSensor()
PlaneSensor55.DEF = "clickGenerator"
PlaneSensor55.minPosition = [-50,-50]
PlaneSensor55.maxPosition = [50,50]
PlaneSensor55.description = "click on background to add nodes, click on nodes to add links"

Transform54.children.append(PlaneSensor55)
ProtoInstance56 = x3d.ProtoInstance()
ProtoInstance56.name = "node"
ProtoInstance56.DEF = "nodeA"
fieldValue57 = x3d.fieldValue()
fieldValue57.name = "position"
fieldValue57.value = "0 0 0"

ProtoInstance56.fieldValue.append(fieldValue57)

Transform54.children.append(ProtoInstance56)
ProtoInstance58 = x3d.ProtoInstance()
ProtoInstance58.name = "node"
ProtoInstance58.DEF = "nodeB"
fieldValue59 = x3d.fieldValue()
fieldValue59.name = "position"
fieldValue59.value = "50 50 50"

ProtoInstance58.fieldValue.append(fieldValue59)

Transform54.children.append(ProtoInstance58)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.name = "cyl"
ProtoInstance60.DEF = "linkA"
fieldValue61 = x3d.fieldValue()
fieldValue61.name = "set_positionA"
fieldValue61.value = "0 0 0"

ProtoInstance60.fieldValue.append(fieldValue61)
fieldValue62 = x3d.fieldValue()
fieldValue62.name = "set_positionB"
fieldValue62.value = "50 50 50"

ProtoInstance60.fieldValue.append(fieldValue62)

Transform54.children.append(ProtoInstance60)

Scene8.children.append(Transform54)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "nodeA"
ROUTE63.fromField = "position"
ROUTE63.toNode = "linkA"
ROUTE63.toField = "set_positionA"

Scene8.children.append(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "nodeB"
ROUTE64.fromField = "position"
ROUTE64.toNode = "linkA"
ROUTE64.toField = "set_positionB"

Scene8.children.append(ROUTE64)

X3D0.Scene = Scene8
f = open("../personal/fors.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/fors.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
