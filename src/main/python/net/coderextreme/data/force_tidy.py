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
meta6.content = "force.x3d"

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
meta10 = x3d.meta()
meta10.name = "generator"
meta10.content = "x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
ProtoDeclare12 = x3d.ProtoDeclare()
ProtoDeclare12.name = "node"
ProtoInterface13 = x3d.ProtoInterface()
field14 = x3d.field()
field14.name = "position"
field14.accessType = "inputOutput"
field14.type = "SFVec3f"

ProtoInterface13.field.append(field14)

ProtoDeclare12.ProtoInterface = ProtoInterface13
ProtoBody15 = x3d.ProtoBody()
Group16 = x3d.Group()
Transform17 = x3d.Transform()
Transform17.DEF = "transform"
IS18 = x3d.IS()
connect19 = x3d.connect()
connect19.nodeField = "translation"
connect19.protoField = "position"

IS18.connect.append(connect19)

Transform17.IS = IS18
Shape20 = x3d.Shape()
Sphere21 = x3d.Sphere()

Shape20.geometry = Sphere21
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.diffuseColor = [1,0,0]

Appearance22.material = Material23

Shape20.appearance = Appearance22

Transform17.children.append(Shape20)
Transform24 = x3d.Transform()
Transform24.translation = [1,0,0]
Shape25 = x3d.Shape()
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.diffuseColor = [0,0,1]

Appearance26.material = Material27

Shape25.appearance = Appearance26
Text28 = x3d.Text()
Text28.string = ["Node"]
FontStyle29 = x3d.FontStyle()
FontStyle29.size = 5
FontStyle29.justify = ["MIDDLE","MIDDLE"]

Text28.fontStyle = FontStyle29

Shape25.geometry = Text28

Transform24.children.append(Shape25)

Transform17.children.append(Transform24)

Group16.children.append(Transform17)
PositionInterpolator30 = x3d.PositionInterpolator()
PositionInterpolator30.DEF = "NodePosition"
PositionInterpolator30.key = [0,1]

Group16.children.append(PositionInterpolator30)
Script31 = x3d.Script()
Script31.DEF = "MoveBall"
field32 = x3d.field()
field32.name = "translation"
field32.accessType = "inputOutput"
field32.type = "SFVec3f"
field32.value = [50,50,0]

Script31.field.append(field32)
field33 = x3d.field()
field33.name = "old"
field33.accessType = "inputOutput"
field33.type = "SFVec3f"

Script31.field.append(field33)
field34 = x3d.field()
field34.name = "set_cycle"
field34.accessType = "inputOnly"
field34.type = "SFTime"

Script31.field.append(field34)
field35 = x3d.field()
field35.name = "keyValue"
field35.accessType = "outputOnly"
field35.type = "MFVec3f"

Script31.field.append(field35)

Script31.sourceCode = '''ecmascript:\n"+
"		function set_cycle(value) {\n"+
"			old = translation;\n"+
"			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			keyValue = new MFVec3f(old, translation);\n"+
"		}'''

Group16.children.append(Script31)
TimeSensor36 = x3d.TimeSensor()
TimeSensor36.DEF = "nodeClock"
TimeSensor36.cycleInterval = 3
TimeSensor36.loop = True

Group16.children.append(TimeSensor36)
ROUTE37 = x3d.ROUTE()
ROUTE37.fromNode = "nodeClock"
ROUTE37.fromField = "cycleTime"
ROUTE37.toNode = "MoveBall"
ROUTE37.toField = "set_cycle"

Group16.children.append(ROUTE37)
ROUTE38 = x3d.ROUTE()
ROUTE38.fromNode = "nodeClock"
ROUTE38.fromField = "fraction_changed"
ROUTE38.toNode = "NodePosition"
ROUTE38.toField = "set_fraction"

Group16.children.append(ROUTE38)
ROUTE39 = x3d.ROUTE()
ROUTE39.fromNode = "MoveBall"
ROUTE39.fromField = "keyValue"
ROUTE39.toNode = "NodePosition"
ROUTE39.toField = "set_keyValue"

Group16.children.append(ROUTE39)
ROUTE40 = x3d.ROUTE()
ROUTE40.fromNode = "NodePosition"
ROUTE40.fromField = "value_changed"
ROUTE40.toNode = "transform"
ROUTE40.toField = "set_translation"

Group16.children.append(ROUTE40)

ProtoBody15.children.append(Group16)

ProtoDeclare12.ProtoBody = ProtoBody15

Scene11.children.append(ProtoDeclare12)
ProtoDeclare41 = x3d.ProtoDeclare()
ProtoDeclare41.name = "cyl"
ProtoInterface42 = x3d.ProtoInterface()
field43 = x3d.field()
field43.name = "set_positionA"
field43.accessType = "inputOutput"
field43.type = "SFVec3f"

ProtoInterface42.field.append(field43)
field44 = x3d.field()
field44.name = "set_positionB"
field44.accessType = "inputOutput"
field44.type = "SFVec3f"

ProtoInterface42.field.append(field44)

ProtoDeclare41.ProtoInterface = ProtoInterface42
ProtoBody45 = x3d.ProtoBody()
Group46 = x3d.Group()
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.diffuseColor = [0,1,0]

Appearance48.material = Material49

Shape47.appearance = Appearance48
Extrusion50 = x3d.Extrusion()
Extrusion50.DEF = "extrusion"
Extrusion50.creaseAngle = 0.785

Shape47.geometry = Extrusion50

Group46.children.append(Shape47)
Script51 = x3d.Script()
Script51.DEF = "MoveCylinder"
field52 = x3d.field()
field52.name = "spine"
field52.accessType = "inputOutput"
field52.type = "MFVec3f"

Script51.field.append(field52)
field53 = x3d.field()
field53.name = "endA"
field53.accessType = "inputOutput"
field53.type = "SFVec3f"

Script51.field.append(field53)
field54 = x3d.field()
field54.name = "endB"
field54.accessType = "inputOutput"
field54.type = "SFVec3f"

Script51.field.append(field54)
IS55 = x3d.IS()
connect56 = x3d.connect()
connect56.nodeField = "endA"
connect56.protoField = "set_positionA"

IS55.connect.append(connect56)
connect57 = x3d.connect()
connect57.nodeField = "endB"
connect57.protoField = "set_positionB"

IS55.connect.append(connect57)

Script51.IS = IS55

Script51.sourceCode = '''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }'''

Group46.children.append(Script51)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "MoveCylinder"
ROUTE58.fromField = "spine_changed"
ROUTE58.toNode = "extrusion"
ROUTE58.toField = "set_spine"

Group46.children.append(ROUTE58)

ProtoBody45.children.append(Group46)

ProtoDeclare41.ProtoBody = ProtoBody45

Scene11.children.append(ProtoDeclare41)
Transform59 = x3d.Transform()
Transform59.DEF = "HoldsContent"
Transform59.scale = [0.1,0.1,0.1]
PlaneSensor60 = x3d.PlaneSensor()
PlaneSensor60.DEF = "clickGenerator"
PlaneSensor60.description = "click on background to add nodes, click on nodes to add links"
PlaneSensor60.minPosition = [-50,-50]
PlaneSensor60.maxPosition = [50,50]

Transform59.children.append(PlaneSensor60)
ProtoInstance61 = x3d.ProtoInstance()
ProtoInstance61.name = "node"
ProtoInstance61.DEF = "nodeA"
fieldValue62 = x3d.fieldValue()
fieldValue62.name = "position"
fieldValue62.value = "0 1.388333 0"

ProtoInstance61.fieldValue.append(fieldValue62)

Transform59.children.append(ProtoInstance61)
ProtoInstance63 = x3d.ProtoInstance()
ProtoInstance63.name = "node"
ProtoInstance63.DEF = "nodeB"
fieldValue64 = x3d.fieldValue()
fieldValue64.name = "position"
fieldValue64.value = "0 1.388333 0"

ProtoInstance63.fieldValue.append(fieldValue64)

Transform59.children.append(ProtoInstance63)
ProtoInstance65 = x3d.ProtoInstance()
ProtoInstance65.name = "node"
ProtoInstance65.DEF = "nodeC"
fieldValue66 = x3d.fieldValue()
fieldValue66.name = "position"
fieldValue66.value = "0 1.388333 0"

ProtoInstance65.fieldValue.append(fieldValue66)

Transform59.children.append(ProtoInstance65)
ProtoInstance67 = x3d.ProtoInstance()
ProtoInstance67.name = "node"
ProtoInstance67.DEF = "nodeD"
fieldValue68 = x3d.fieldValue()
fieldValue68.name = "position"
fieldValue68.value = "0 1.388333 0"

ProtoInstance67.fieldValue.append(fieldValue68)

Transform59.children.append(ProtoInstance67)
ProtoInstance69 = x3d.ProtoInstance()
ProtoInstance69.name = "cyl"
ProtoInstance69.DEF = "linkA"

Transform59.children.append(ProtoInstance69)
ProtoInstance70 = x3d.ProtoInstance()
ProtoInstance70.name = "cyl"
ProtoInstance70.DEF = "linkB"

Transform59.children.append(ProtoInstance70)
ProtoInstance71 = x3d.ProtoInstance()
ProtoInstance71.name = "cyl"
ProtoInstance71.DEF = "linkC"

Transform59.children.append(ProtoInstance71)

Scene11.children.append(Transform59)
Script72 = x3d.Script()
Script72.DEF = "clickHandler"
field73 = x3d.field()
field73.name = "counter"
field73.accessType = "inputOutput"
field73.type = "SFInt32"

Script72.field.append(field73)
field74 = x3d.field()
field74.name = "node_changed"
field74.accessType = "outputOnly"
field74.type = "SFNode"

Script72.field.append(field74)
field75 = x3d.field()
field75.name = "add_node"
field75.accessType = "inputOnly"
field75.type = "SFBool"

Script72.field.append(field75)

Script72.sourceCode = '''ecmascript:\n"+
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

Scene11.children.append(Script72)
ROUTE76 = x3d.ROUTE()
ROUTE76.fromNode = "clickGenerator"
ROUTE76.fromField = "isActive"
ROUTE76.toNode = "clickHandler"
ROUTE76.toField = "add_node"

Scene11.children.append(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.fromNode = "nodeA"
ROUTE77.fromField = "position_changed"
ROUTE77.toNode = "linkA"
ROUTE77.toField = "set_positionA"

Scene11.children.append(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.fromNode = "nodeB"
ROUTE78.fromField = "position_changed"
ROUTE78.toNode = "linkA"
ROUTE78.toField = "set_positionB"

Scene11.children.append(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.fromNode = "nodeA"
ROUTE79.fromField = "position_changed"
ROUTE79.toNode = "linkB"
ROUTE79.toField = "set_positionA"

Scene11.children.append(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.fromNode = "nodeC"
ROUTE80.fromField = "position_changed"
ROUTE80.toNode = "linkB"
ROUTE80.toField = "set_positionB"

Scene11.children.append(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.fromNode = "nodeA"
ROUTE81.fromField = "position_changed"
ROUTE81.toNode = "linkC"
ROUTE81.toField = "set_positionA"

Scene11.children.append(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.fromNode = "nodeD"
ROUTE82.fromField = "position_changed"
ROUTE82.toNode = "linkC"
ROUTE82.toField = "set_positionB"

Scene11.children.append(ROUTE82)

X3D0.Scene = Scene11
f = open("../data/force_tidy.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/force_tidy.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
