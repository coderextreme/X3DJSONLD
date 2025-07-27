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
meta4.content = "forcenode.x3d"

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
Group13 = x3d.Group()
Transform14 = x3d.Transform()
Transform14.DEF = "transform"
IS15 = x3d.IS()
connect16 = x3d.connect()
connect16.nodeField = "translation"
connect16.protoField = "position"

IS15.connect.append(connect16)

Transform14.IS = IS15
Shape17 = x3d.Shape()
Sphere18 = x3d.Sphere()

Shape17.geometry = Sphere18
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.diffuseColor = [1,0,0]

Appearance19.material = Material20

Shape17.appearance = Appearance19

Transform14.children.append(Shape17)
Transform21 = x3d.Transform()
Transform21.translation = [1,0,1]
Shape22 = x3d.Shape()
Text23 = x3d.Text()
Text23.string = ["Node"]
FontStyle24 = x3d.FontStyle()
FontStyle24.justify = ["MIDDLE","MIDDLE"]
FontStyle24.size = 5

Text23.fontStyle = FontStyle24

Shape22.geometry = Text23
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.diffuseColor = [0,0,1]

Appearance25.material = Material26

Shape22.appearance = Appearance25

Transform21.children.append(Shape22)

Transform14.children.append(Transform21)

Group13.children.append(Transform14)
PositionInterpolator27 = x3d.PositionInterpolator()
PositionInterpolator27.DEF = "NodePosition"
PositionInterpolator27.key = [0,1]

Group13.children.append(PositionInterpolator27)
Script28 = x3d.Script()
Script28.DEF = "MoveBall"
field29 = x3d.field()
field29.name = "translation"
field29.accessType = "inputOutput"
field29.type = "SFVec3f"
field29.value = [50,50,0]

Script28.field.append(field29)
field30 = x3d.field()
field30.name = "old"
field30.accessType = "inputOutput"
field30.type = "SFVec3f"
field30.value = [0,0,0]

Script28.field.append(field30)
field31 = x3d.field()
field31.name = "set_cycle"
field31.accessType = "inputOnly"
field31.type = "SFTime"

Script28.field.append(field31)
field32 = x3d.field()
field32.name = "keyValue"
field32.accessType = "outputOnly"
field32.type = "MFVec3f"

Script28.field.append(field32)

Script28.sourceCode = '''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f(...[old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}'''

Group13.children.append(Script28)
TimeSensor33 = x3d.TimeSensor()
TimeSensor33.DEF = "nodeClock"
TimeSensor33.cycleInterval = 3
TimeSensor33.loop = True

Group13.children.append(TimeSensor33)
ROUTE34 = x3d.ROUTE()
ROUTE34.fromNode = "nodeClock"
ROUTE34.fromField = "cycleTime"
ROUTE34.toNode = "MoveBall"
ROUTE34.toField = "set_cycle"

Group13.children.append(ROUTE34)
ROUTE35 = x3d.ROUTE()
ROUTE35.fromNode = "nodeClock"
ROUTE35.fromField = "fraction_changed"
ROUTE35.toNode = "NodePosition"
ROUTE35.toField = "set_fraction"

Group13.children.append(ROUTE35)
ROUTE36 = x3d.ROUTE()
ROUTE36.fromNode = "MoveBall"
ROUTE36.fromField = "keyValue"
ROUTE36.toNode = "NodePosition"
ROUTE36.toField = "keyValue"

Group13.children.append(ROUTE36)
ROUTE37 = x3d.ROUTE()
ROUTE37.fromNode = "NodePosition"
ROUTE37.fromField = "value_changed"
ROUTE37.toNode = "transform"
ROUTE37.toField = "set_translation"

Group13.children.append(ROUTE37)

ProtoBody12.children.append(Group13)

ProtoDeclare9.ProtoBody = ProtoBody12

Scene8.children.append(ProtoDeclare9)
ProtoDeclare38 = x3d.ProtoDeclare()
ProtoDeclare38.name = "cylinder"
ProtoInterface39 = x3d.ProtoInterface()
field40 = x3d.field()
field40.name = "set_positionA"
field40.accessType = "inputOnly"
field40.type = "SFVec3f"

ProtoInterface39.field.append(field40)
field41 = x3d.field()
field41.name = "set_positionB"
field41.accessType = "inputOnly"
field41.type = "SFVec3f"

ProtoInterface39.field.append(field41)

ProtoDeclare38.ProtoInterface = ProtoInterface39
ProtoBody42 = x3d.ProtoBody()
Group43 = x3d.Group()
Shape44 = x3d.Shape()
Extrusion45 = x3d.Extrusion()
Extrusion45.DEF = "extrusion"
Extrusion45.creaseAngle = 0.785

Shape44.geometry = Extrusion45
Appearance46 = x3d.Appearance()
Material47 = x3d.Material()
Material47.diffuseColor = [0,1,0]

Appearance46.material = Material47

Shape44.appearance = Appearance46

Group43.children.append(Shape44)
Script48 = x3d.Script()
Script48.DEF = "MoveCylinder"
field49 = x3d.field()
field49.name = "spine"
field49.accessType = "inputOutput"
field49.type = "MFVec3f"

Script48.field.append(field49)
field50 = x3d.field()
field50.name = "set_endA"
field50.accessType = "inputOnly"
field50.type = "SFVec3f"

Script48.field.append(field50)
field51 = x3d.field()
field51.name = "set_endB"
field51.accessType = "inputOnly"
field51.type = "SFVec3f"

Script48.field.append(field51)
IS52 = x3d.IS()
connect53 = x3d.connect()
connect53.nodeField = "set_endA"
connect53.protoField = "set_positionA"

IS52.connect.append(connect53)
connect54 = x3d.connect()
connect54.nodeField = "set_endB"
connect54.protoField = "set_positionB"

IS52.connect.append(connect54)

Script48.IS = IS52

Script48.sourceCode = '''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f(...[value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f(...[value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f(...[value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f(...[spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }'''

Group43.children.append(Script48)
ROUTE55 = x3d.ROUTE()
ROUTE55.fromNode = "MoveCylinder"
ROUTE55.fromField = "spine"
ROUTE55.toNode = "extrusion"
ROUTE55.toField = "set_spine"

Group43.children.append(ROUTE55)

ProtoBody42.children.append(Group43)

ProtoDeclare38.ProtoBody = ProtoBody42

Scene8.children.append(ProtoDeclare38)
Transform56 = x3d.Transform()
Transform56.DEF = "HoldsContent"
Transform56.scale = [0.1,0.1,0.1]
PlaneSensor57 = x3d.PlaneSensor()
PlaneSensor57.DEF = "clickGenerator"
PlaneSensor57.minPosition = [-50,-50]
PlaneSensor57.maxPosition = [50,50]
PlaneSensor57.description = "click on background to add nodes, click on nodes to add links"

Transform56.children.append(PlaneSensor57)
ProtoInstance58 = x3d.ProtoInstance()
ProtoInstance58.name = "node"
ProtoInstance58.DEF = "nodeA"
fieldValue59 = x3d.fieldValue()
fieldValue59.name = "position"
fieldValue59.value = "0 0 0"

ProtoInstance58.fieldValue.append(fieldValue59)

Transform56.children.append(ProtoInstance58)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.name = "node"
ProtoInstance60.DEF = "nodeB"
fieldValue61 = x3d.fieldValue()
fieldValue61.name = "position"
fieldValue61.value = "50 50 50"

ProtoInstance60.fieldValue.append(fieldValue61)

Transform56.children.append(ProtoInstance60)
ProtoInstance62 = x3d.ProtoInstance()
ProtoInstance62.name = "node"
ProtoInstance62.DEF = "nodeC"
fieldValue63 = x3d.fieldValue()
fieldValue63.name = "position"
fieldValue63.value = "-50 -50 -50"

ProtoInstance62.fieldValue.append(fieldValue63)

Transform56.children.append(ProtoInstance62)
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.name = "node"
ProtoInstance64.DEF = "nodeD"
fieldValue65 = x3d.fieldValue()
fieldValue65.name = "position"
fieldValue65.value = "50 50 -50"

ProtoInstance64.fieldValue.append(fieldValue65)

Transform56.children.append(ProtoInstance64)
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.name = "cylinder"
ProtoInstance66.DEF = "linkA"
fieldValue67 = x3d.fieldValue()
fieldValue67.name = "set_positionA"
fieldValue67.value = "0 0 0"

ProtoInstance66.fieldValue.append(fieldValue67)
fieldValue68 = x3d.fieldValue()
fieldValue68.name = "set_positionB"
fieldValue68.value = "50 50 50"

ProtoInstance66.fieldValue.append(fieldValue68)

Transform56.children.append(ProtoInstance66)
ProtoInstance69 = x3d.ProtoInstance()
ProtoInstance69.name = "cylinder"
ProtoInstance69.DEF = "linkB"
fieldValue70 = x3d.fieldValue()
fieldValue70.name = "set_positionA"
fieldValue70.value = "0 0 0"

ProtoInstance69.fieldValue.append(fieldValue70)
fieldValue71 = x3d.fieldValue()
fieldValue71.name = "set_positionB"
fieldValue71.value = "-50 -50 -50"

ProtoInstance69.fieldValue.append(fieldValue71)

Transform56.children.append(ProtoInstance69)
ProtoInstance72 = x3d.ProtoInstance()
ProtoInstance72.name = "cylinder"
ProtoInstance72.DEF = "linkC"
fieldValue73 = x3d.fieldValue()
fieldValue73.name = "set_positionA"
fieldValue73.value = "50 50 50"

ProtoInstance72.fieldValue.append(fieldValue73)
fieldValue74 = x3d.fieldValue()
fieldValue74.name = "set_positionB"
fieldValue74.value = "50 50 -50"

ProtoInstance72.fieldValue.append(fieldValue74)

Transform56.children.append(ProtoInstance72)

Scene8.children.append(Transform56)
Script75 = x3d.Script()
Script75.DEF = "clickHandler"
field76 = x3d.field()
field76.name = "counter"
field76.accessType = "inputOutput"
field76.value = 0
field76.type = "SFInt32"

Script75.field.append(field76)
field77 = x3d.field()
field77.name = "node_changed"
field77.accessType = "outputOnly"
field77.type = "SFNode"

Script75.field.append(field77)
field78 = x3d.field()
field78.name = "add_node"
field78.accessType = "inputOnly"
field78.value = False
field78.type = "SFBool"

Script75.field.append(field78)
"""<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>"""

Script75.sourceCode = '''ecmascript:\n"+
"	function add_node(value) {\n"+
"                // Browser.print('hey ', counter);\n"+
"                counter = counter++;\n"+
"		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),\n"+
"			{ \"ProtoInstance\":\n"+
"				{ \"@name\":\"node\",\n"+
"				  \"@DEF\":\"node'+counter+'\",\n"+
"				  \"fieldValue\": [\n"+
"					{\n"+
"						 \"@name\":\"position\",\n"+
"						 \"@value\":[0.0,0.0,0.0]\n"+
"					}\n"+
"				  ]\n"+
"				}\n"+
"			});\n"+
"\n"+
"        }'''

Scene8.children.append(Script75)
ROUTE79 = x3d.ROUTE()
ROUTE79.fromNode = "clickGenerator"
ROUTE79.fromField = "isActive"
ROUTE79.toNode = "clickHandler"
ROUTE79.toField = "add_node"

Scene8.children.append(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.fromNode = "nodeA"
ROUTE80.fromField = "position"
ROUTE80.toNode = "linkA"
ROUTE80.toField = "set_positionA"

Scene8.children.append(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.fromNode = "nodeB"
ROUTE81.fromField = "position"
ROUTE81.toNode = "linkA"
ROUTE81.toField = "set_positionB"

Scene8.children.append(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.fromNode = "nodeA"
ROUTE82.fromField = "position"
ROUTE82.toNode = "linkB"
ROUTE82.toField = "set_positionA"

Scene8.children.append(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.fromNode = "nodeC"
ROUTE83.fromField = "position"
ROUTE83.toNode = "linkB"
ROUTE83.toField = "set_positionB"

Scene8.children.append(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.fromNode = "nodeA"
ROUTE84.fromField = "position"
ROUTE84.toNode = "linkC"
ROUTE84.toField = "set_positionA"

Scene8.children.append(ROUTE84)
ROUTE85 = x3d.ROUTE()
ROUTE85.fromNode = "nodeD"
ROUTE85.fromField = "position"
ROUTE85.toNode = "linkC"
ROUTE85.toField = "set_positionB"

Scene8.children.append(ROUTE85)

X3D0.Scene = Scene8
f = open("../personal/forcenode.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/forcenode.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
