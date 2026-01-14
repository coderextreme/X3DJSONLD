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
meta6.content = "fors.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "identifier"
meta7.content = "https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"

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
Sphere20 = x3d.Sphere()

Shape19.geometry = Sphere20
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.diffuseColor = [1,0,0]

Appearance21.material = Material22

Shape19.appearance = Appearance21

Transform16.children.append(Shape19)
Transform23 = x3d.Transform()
Transform23.translation = [1,0,0]
Shape24 = x3d.Shape()
Text25 = x3d.Text()
Text25.string = ["Node"]
FontStyle26 = x3d.FontStyle()
FontStyle26.justify = ["MIDDLE","MIDDLE"]
FontStyle26.size = 5

Text25.fontStyle = FontStyle26

Shape24.geometry = Text25
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.diffuseColor = [0,0,1]

Appearance27.material = Material28

Shape24.appearance = Appearance27

Transform23.children.append(Shape24)

Transform16.children.append(Transform23)

Group15.children.append(Transform16)
PositionInterpolator29 = x3d.PositionInterpolator()
PositionInterpolator29.DEF = "NodePosition"
PositionInterpolator29.key = [0,1]
PositionInterpolator29.keyValue = [(0, 0, 0),(0, 5, 0)]

Group15.children.append(PositionInterpolator29)
Script30 = x3d.Script()
Script30.DEF = "MoveBall"
field31 = x3d.field()
field31.name = "translation"
field31.accessType = "inputOutput"
field31.type = "SFVec3f"
field31.value = [50,50,0]

Script30.field.append(field31)
field32 = x3d.field()
field32.name = "old"
field32.accessType = "inputOutput"
field32.type = "SFVec3f"
field32.value = [0,0,0]

Script30.field.append(field32)
field33 = x3d.field()
field33.name = "set_cycle"
field33.accessType = "inputOnly"
field33.type = "SFTime"

Script30.field.append(field33)
field34 = x3d.field()
field34.name = "keyValue"
field34.accessType = "outputOnly"
field34.type = "MFVec3f"

Script30.field.append(field34)

Script30.sourceCode = '''ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}'''

Group15.children.append(Script30)
TimeSensor35 = x3d.TimeSensor()
TimeSensor35.DEF = "nodeClock"
TimeSensor35.cycleInterval = 3
TimeSensor35.loop = True

Group15.children.append(TimeSensor35)
ROUTE36 = x3d.ROUTE()
ROUTE36.fromNode = "nodeClock"
ROUTE36.fromField = "cycleTime"
ROUTE36.toNode = "MoveBall"
ROUTE36.toField = "set_cycle"

Group15.children.append(ROUTE36)
ROUTE37 = x3d.ROUTE()
ROUTE37.fromNode = "nodeClock"
ROUTE37.fromField = "fraction_changed"
ROUTE37.toNode = "NodePosition"
ROUTE37.toField = "set_fraction"

Group15.children.append(ROUTE37)
ROUTE38 = x3d.ROUTE()
ROUTE38.fromNode = "MoveBall"
ROUTE38.fromField = "keyValue"
ROUTE38.toNode = "NodePosition"
ROUTE38.toField = "keyValue"

Group15.children.append(ROUTE38)
ROUTE39 = x3d.ROUTE()
ROUTE39.fromNode = "NodePosition"
ROUTE39.fromField = "value_changed"
ROUTE39.toNode = "transform"
ROUTE39.toField = "set_translation"

Group15.children.append(ROUTE39)

ProtoBody14.children.append(Group15)

ProtoDeclare11.ProtoBody = ProtoBody14

Scene10.children.append(ProtoDeclare11)
ProtoDeclare40 = x3d.ProtoDeclare()
ProtoDeclare40.name = "cyl"
ProtoInterface41 = x3d.ProtoInterface()
field42 = x3d.field()
field42.name = "set_positionA"
field42.accessType = "inputOutput"
field42.type = "SFVec3f"
field42.value = [0,0,0]

ProtoInterface41.field.append(field42)
field43 = x3d.field()
field43.name = "set_positionB"
field43.accessType = "inputOutput"
field43.type = "SFVec3f"
field43.value = [50,50,50]

ProtoInterface41.field.append(field43)

ProtoDeclare40.ProtoInterface = ProtoInterface41
ProtoBody44 = x3d.ProtoBody()
Group45 = x3d.Group()
Shape46 = x3d.Shape()
Extrusion47 = x3d.Extrusion()
Extrusion47.DEF = "extrusion"
Extrusion47.creaseAngle = 0.785
Extrusion47.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]
Extrusion47.spine = [(0, -50, 0),(0, 0, 0),(0, 50, 0)]

Shape46.geometry = Extrusion47
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.diffuseColor = [0,1,0]

Appearance48.material = Material49

Shape46.appearance = Appearance48

Group45.children.append(Shape46)
Script50 = x3d.Script()
Script50.DEF = "MoveCylinder"
field51 = x3d.field()
field51.name = "spine"
field51.accessType = "inputOutput"
field51.type = "MFVec3f"
field51.value = [(0, -50, 0),(0, 0, 0),(0, 50, 0)]

Script50.field.append(field51)
field52 = x3d.field()
field52.name = "endA"
field52.accessType = "inputOutput"
field52.type = "SFVec3f"
field52.value = [0,0,0]

Script50.field.append(field52)
field53 = x3d.field()
field53.name = "endB"
field53.accessType = "inputOutput"
field53.type = "SFVec3f"
field53.value = [50,50,50]

Script50.field.append(field53)
IS54 = x3d.IS()
connect55 = x3d.connect()
connect55.nodeField = "endA"
connect55.protoField = "set_positionA"

IS54.connect.append(connect55)
connect56 = x3d.connect()
connect56.nodeField = "endB"
connect56.protoField = "set_positionB"

IS54.connect.append(connect56)

Script50.IS = IS54

Script50.sourceCode = '''ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}'''

Group45.children.append(Script50)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "MoveCylinder"
ROUTE57.fromField = "spine"
ROUTE57.toNode = "extrusion"
ROUTE57.toField = "set_spine"

Group45.children.append(ROUTE57)

ProtoBody44.children.append(Group45)

ProtoDeclare40.ProtoBody = ProtoBody44

Scene10.children.append(ProtoDeclare40)
Transform58 = x3d.Transform()
Transform58.DEF = "HoldsContent"
Transform58.scale = [0.1,0.1,0.1]
PlaneSensor59 = x3d.PlaneSensor()
PlaneSensor59.DEF = "clickGenerator"
PlaneSensor59.minPosition = [-50,-50]
PlaneSensor59.maxPosition = [50,50]
PlaneSensor59.description = "click on background to add nodes, click on nodes to add links"

Transform58.children.append(PlaneSensor59)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.name = "node"
ProtoInstance60.DEF = "nodeA"
fieldValue61 = x3d.fieldValue()
fieldValue61.name = "position"
fieldValue61.value = "0 0 0"

ProtoInstance60.fieldValue.append(fieldValue61)

Transform58.children.append(ProtoInstance60)
ProtoInstance62 = x3d.ProtoInstance()
ProtoInstance62.name = "node"
ProtoInstance62.DEF = "nodeB"
fieldValue63 = x3d.fieldValue()
fieldValue63.name = "position"
fieldValue63.value = "50 50 50"

ProtoInstance62.fieldValue.append(fieldValue63)

Transform58.children.append(ProtoInstance62)
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.name = "cyl"
ProtoInstance64.DEF = "linkA"

Transform58.children.append(ProtoInstance64)

Scene10.children.append(Transform58)
Script65 = x3d.Script()
Script65.DEF = "clickHandler"
field66 = x3d.field()
field66.name = "counter"
field66.accessType = "inputOutput"
field66.value = 0
field66.type = "SFInt32"

Script65.field.append(field66)
field67 = x3d.field()
field67.name = "add_node"
field67.accessType = "inputOnly"
field67.value = False
field67.type = "SFBool"

Script65.field.append(field67)
"""<field accessType=\"outputOnly\" name=\"node_changed\" type=\"SFNode\"/> <field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>"""

Script65.sourceCode = '''ecmascript:\n"+
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

Scene10.children.append(Script65)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "clickGenerator"
ROUTE68.fromField = "isActive"
ROUTE68.toNode = "clickHandler"
ROUTE68.toField = "add_node"

Scene10.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "nodeA"
ROUTE69.fromField = "position"
ROUTE69.toNode = "linkA"
ROUTE69.toField = "set_positionA"

Scene10.children.append(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromNode = "nodeB"
ROUTE70.fromField = "position"
ROUTE70.toNode = "linkA"
ROUTE70.toField = "set_positionB"

Scene10.children.append(ROUTE70)

X3D0.Scene = Scene10
f = open("../data/fors.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/fors.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/fors.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
