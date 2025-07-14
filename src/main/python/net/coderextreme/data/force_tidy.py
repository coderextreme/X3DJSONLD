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
meta11 = x3d.meta()
meta11.name = "modified"
meta11.content = "Sat, 9 Nov 2024 19:29:39 GMT"

head1.children.append(meta11)

X3D0.head = head1
Scene12 = x3d.Scene()
ProtoDeclare13 = x3d.ProtoDeclare()
ProtoDeclare13.name = "node"
ProtoInterface14 = x3d.ProtoInterface()
field15 = x3d.field()
field15.name = "position"
field15.accessType = "inputOutput"
field15.type = "SFVec3f"

ProtoInterface14.field.append(field15)

ProtoDeclare13.ProtoInterface = ProtoInterface14
ProtoBody16 = x3d.ProtoBody()
Group17 = x3d.Group()
Transform18 = x3d.Transform()
Transform18.DEF = "transform"
IS19 = x3d.IS()
connect20 = x3d.connect()
connect20.nodeField = "translation"
connect20.protoField = "position"

IS19.connect.append(connect20)

Transform18.IS = IS19
Shape21 = x3d.Shape()
Sphere22 = x3d.Sphere()

Shape21.geometry = Sphere22
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.diffuseColor = [1,0,0]

Appearance23.material = Material24

Shape21.appearance = Appearance23

Transform18.children.append(Shape21)
Transform25 = x3d.Transform()
Transform25.translation = [1,0,0]
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.diffuseColor = [0,0,1]

Appearance27.material = Material28

Shape26.appearance = Appearance27
Text29 = x3d.Text()
Text29.string = ["Node"]
FontStyle30 = x3d.FontStyle()
FontStyle30.size = 5
FontStyle30.justify = ["MIDDLE","MIDDLE"]

Text29.fontStyle = FontStyle30

Shape26.geometry = Text29

Transform25.children.append(Shape26)

Transform18.children.append(Transform25)

Group17.children.append(Transform18)
PositionInterpolator31 = x3d.PositionInterpolator()
PositionInterpolator31.DEF = "NodePosition"
PositionInterpolator31.key = [0,1]

Group17.children.append(PositionInterpolator31)
Script32 = x3d.Script()
Script32.DEF = "MoveBall"
field33 = x3d.field()
field33.name = "translation"
field33.accessType = "inputOutput"
field33.type = "SFVec3f"
field33.value = [50,50,0]

Script32.field.append(field33)
field34 = x3d.field()
field34.name = "old"
field34.accessType = "inputOutput"
field34.type = "SFVec3f"

Script32.field.append(field34)
field35 = x3d.field()
field35.name = "set_cycle"
field35.accessType = "inputOnly"
field35.type = "SFTime"

Script32.field.append(field35)
field36 = x3d.field()
field36.name = "keyValue"
field36.accessType = "outputOnly"
field36.type = "MFVec3f"

Script32.field.append(field36)

Script32.sourceCode = '''ecmascript:\n"+
"		function set_cycle(value) {\n"+
"			old = translation;\n"+
"			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			keyValue = new MFVec3f(old, translation);\n"+
"		}'''

Group17.children.append(Script32)
TimeSensor37 = x3d.TimeSensor()
TimeSensor37.DEF = "nodeClock"
TimeSensor37.cycleInterval = 3
TimeSensor37.loop = True

Group17.children.append(TimeSensor37)
ROUTE38 = x3d.ROUTE()
ROUTE38.fromNode = "nodeClock"
ROUTE38.fromField = "cycleTime"
ROUTE38.toNode = "MoveBall"
ROUTE38.toField = "set_cycle"

Group17.children.append(ROUTE38)
ROUTE39 = x3d.ROUTE()
ROUTE39.fromNode = "nodeClock"
ROUTE39.fromField = "fraction_changed"
ROUTE39.toNode = "NodePosition"
ROUTE39.toField = "set_fraction"

Group17.children.append(ROUTE39)
ROUTE40 = x3d.ROUTE()
ROUTE40.fromNode = "MoveBall"
ROUTE40.fromField = "keyValue"
ROUTE40.toNode = "NodePosition"
ROUTE40.toField = "set_keyValue"

Group17.children.append(ROUTE40)
ROUTE41 = x3d.ROUTE()
ROUTE41.fromNode = "NodePosition"
ROUTE41.fromField = "value_changed"
ROUTE41.toNode = "transform"
ROUTE41.toField = "set_translation"

Group17.children.append(ROUTE41)

ProtoBody16.children.append(Group17)

ProtoDeclare13.ProtoBody = ProtoBody16

Scene12.children.append(ProtoDeclare13)
ProtoDeclare42 = x3d.ProtoDeclare()
ProtoDeclare42.name = "cyl"
ProtoInterface43 = x3d.ProtoInterface()
field44 = x3d.field()
field44.name = "set_positionA"
field44.accessType = "inputOutput"
field44.type = "SFVec3f"

ProtoInterface43.field.append(field44)
field45 = x3d.field()
field45.name = "set_positionB"
field45.accessType = "inputOutput"
field45.type = "SFVec3f"

ProtoInterface43.field.append(field45)

ProtoDeclare42.ProtoInterface = ProtoInterface43
ProtoBody46 = x3d.ProtoBody()
Group47 = x3d.Group()
Shape48 = x3d.Shape()
Appearance49 = x3d.Appearance()
Material50 = x3d.Material()
Material50.diffuseColor = [0,1,0]

Appearance49.material = Material50

Shape48.appearance = Appearance49
Extrusion51 = x3d.Extrusion()
Extrusion51.DEF = "extrusion"
Extrusion51.creaseAngle = 0.785

Shape48.geometry = Extrusion51

Group47.children.append(Shape48)
Script52 = x3d.Script()
Script52.DEF = "MoveCylinder"
field53 = x3d.field()
field53.name = "spine"
field53.accessType = "inputOutput"
field53.type = "MFVec3f"

Script52.field.append(field53)
field54 = x3d.field()
field54.name = "endA"
field54.accessType = "inputOutput"
field54.type = "SFVec3f"

Script52.field.append(field54)
field55 = x3d.field()
field55.name = "endB"
field55.accessType = "inputOutput"
field55.type = "SFVec3f"

Script52.field.append(field55)
IS56 = x3d.IS()
connect57 = x3d.connect()
connect57.nodeField = "endA"
connect57.protoField = "set_positionA"

IS56.connect.append(connect57)
connect58 = x3d.connect()
connect58.nodeField = "endB"
connect58.protoField = "set_positionB"

IS56.connect.append(connect58)

Script52.IS = IS56

Script52.sourceCode = '''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }'''

Group47.children.append(Script52)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "MoveCylinder"
ROUTE59.fromField = "spine_changed"
ROUTE59.toNode = "extrusion"
ROUTE59.toField = "set_spine"

Group47.children.append(ROUTE59)

ProtoBody46.children.append(Group47)

ProtoDeclare42.ProtoBody = ProtoBody46

Scene12.children.append(ProtoDeclare42)
Transform60 = x3d.Transform()
Transform60.DEF = "HoldsContent"
Transform60.scale = [0.1,0.1,0.1]
PlaneSensor61 = x3d.PlaneSensor()
PlaneSensor61.DEF = "clickGenerator"
PlaneSensor61.description = "click on background to add nodes, click on nodes to add links"
PlaneSensor61.minPosition = [-50,-50]
PlaneSensor61.maxPosition = [50,50]

Transform60.children.append(PlaneSensor61)
ProtoInstance62 = x3d.ProtoInstance()
ProtoInstance62.name = "node"
ProtoInstance62.DEF = "nodeA"
fieldValue63 = x3d.fieldValue()
fieldValue63.name = "position"
fieldValue63.value = "0 1.388333 0"

ProtoInstance62.fieldValue.append(fieldValue63)

Transform60.children.append(ProtoInstance62)
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.name = "node"
ProtoInstance64.DEF = "nodeB"
fieldValue65 = x3d.fieldValue()
fieldValue65.name = "position"
fieldValue65.value = "0 1.388333 0"

ProtoInstance64.fieldValue.append(fieldValue65)

Transform60.children.append(ProtoInstance64)
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.name = "node"
ProtoInstance66.DEF = "nodeC"
fieldValue67 = x3d.fieldValue()
fieldValue67.name = "position"
fieldValue67.value = "0 1.388333 0"

ProtoInstance66.fieldValue.append(fieldValue67)

Transform60.children.append(ProtoInstance66)
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.name = "node"
ProtoInstance68.DEF = "nodeD"
fieldValue69 = x3d.fieldValue()
fieldValue69.name = "position"
fieldValue69.value = "0 1.388333 0"

ProtoInstance68.fieldValue.append(fieldValue69)

Transform60.children.append(ProtoInstance68)
ProtoInstance70 = x3d.ProtoInstance()
ProtoInstance70.name = "cyl"
ProtoInstance70.DEF = "linkA"

Transform60.children.append(ProtoInstance70)
ProtoInstance71 = x3d.ProtoInstance()
ProtoInstance71.name = "cyl"
ProtoInstance71.DEF = "linkB"

Transform60.children.append(ProtoInstance71)
ProtoInstance72 = x3d.ProtoInstance()
ProtoInstance72.name = "cyl"
ProtoInstance72.DEF = "linkC"

Transform60.children.append(ProtoInstance72)

Scene12.children.append(Transform60)
Script73 = x3d.Script()
Script73.DEF = "clickHandler"
field74 = x3d.field()
field74.name = "counter"
field74.accessType = "inputOutput"
field74.type = "SFInt32"

Script73.field.append(field74)
field75 = x3d.field()
field75.name = "node_changed"
field75.accessType = "outputOnly"
field75.type = "SFNode"

Script73.field.append(field75)
field76 = x3d.field()
field76.name = "add_node"
field76.accessType = "inputOnly"
field76.type = "SFBool"

Script73.field.append(field76)

Script73.sourceCode = '''ecmascript:\n"+
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

Scene12.children.append(Script73)
ROUTE77 = x3d.ROUTE()
ROUTE77.fromNode = "clickGenerator"
ROUTE77.fromField = "isActive"
ROUTE77.toNode = "clickHandler"
ROUTE77.toField = "add_node"

Scene12.children.append(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.fromNode = "nodeA"
ROUTE78.fromField = "position_changed"
ROUTE78.toNode = "linkA"
ROUTE78.toField = "set_positionA"

Scene12.children.append(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.fromNode = "nodeB"
ROUTE79.fromField = "position_changed"
ROUTE79.toNode = "linkA"
ROUTE79.toField = "set_positionB"

Scene12.children.append(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.fromNode = "nodeA"
ROUTE80.fromField = "position_changed"
ROUTE80.toNode = "linkB"
ROUTE80.toField = "set_positionA"

Scene12.children.append(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.fromNode = "nodeC"
ROUTE81.fromField = "position_changed"
ROUTE81.toNode = "linkB"
ROUTE81.toField = "set_positionB"

Scene12.children.append(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.fromNode = "nodeA"
ROUTE82.fromField = "position_changed"
ROUTE82.toNode = "linkC"
ROUTE82.toField = "set_positionA"

Scene12.children.append(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.fromNode = "nodeD"
ROUTE83.fromField = "position_changed"
ROUTE83.toNode = "linkC"
ROUTE83.toField = "set_positionB"

Scene12.children.append(ROUTE83)

X3D0.Scene = Scene12
f = open("../data/force_tidy.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/force_tidy.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
