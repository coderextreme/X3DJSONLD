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
meta4.content = "Mon, 09 Feb 2026 12:23:02 GMT"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "title"
meta5.content = "force.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"

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
Transform18 = x3d.Transform()
Transform18.translation = [1,0,0]
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.diffuseColor = [0,0,1]

Appearance20.material = Material21

Shape19.appearance = Appearance20
Text22 = x3d.Text()
Text22.string = ["Node"]
FontStyle23 = x3d.FontStyle()
FontStyle23.size = 5
FontStyle23.justify = ["MIDDLE","MIDDLE"]

Text22.fontStyle = FontStyle23

Shape19.geometry = Text22

Transform18.children.append(Shape19)

Transform13.children.append(Transform18)
IS24 = x3d.IS()
connect25 = x3d.connect()
connect25.nodeField = "translation"
connect25.protoField = "position"

IS24.connect.append(connect25)

Transform13.IS = IS24

Group12.children.append(Transform13)
PositionInterpolator26 = x3d.PositionInterpolator(DEF="NodePosition")
PositionInterpolator26.key = [0,1]
PositionInterpolator26.keyValue = [(0, 0, 0),(0, 5, 0)]

Group12.children.append(PositionInterpolator26)
Script27 = x3d.Script(DEF="MoveBall")
field28 = x3d.field()
field28.accessType = "inputOutput"
field28.type = "SFVec3f"
field28.name = "translation"
field28.value = [50,50,0]

Script27.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFVec3f"
field29.name = "old"

Script27.field.append(field29)
field30 = x3d.field()
field30.accessType = "inputOnly"
field30.type = "SFTime"
field30.name = "set_cycle"

Script27.field.append(field30)
field31 = x3d.field()
field31.accessType = "outputOnly"
field31.type = "MFVec3f"
field31.name = "keyValue"

Script27.field.append(field31)

Script27.sourceCode = '''ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}'''

Group12.children.append(Script27)
TimeSensor32 = x3d.TimeSensor(DEF="nodeClock")
TimeSensor32.cycleInterval = 3
TimeSensor32.loop = True

Group12.children.append(TimeSensor32)

ProtoBody11.children.append(Group12)
ROUTE33 = x3d.ROUTE()
ROUTE33.fromNode = "nodeClock"
ROUTE33.fromField = "cycleTime"
ROUTE33.toNode = "MoveBall"
ROUTE33.toField = "set_cycle"

ProtoBody11.children.append(ROUTE33)
ROUTE34 = x3d.ROUTE()
ROUTE34.fromNode = "nodeClock"
ROUTE34.fromField = "fraction_changed"
ROUTE34.toNode = "NodePosition"
ROUTE34.toField = "set_fraction"

ProtoBody11.children.append(ROUTE34)
ROUTE35 = x3d.ROUTE()
ROUTE35.fromNode = "MoveBall"
ROUTE35.fromField = "keyValue"
ROUTE35.toNode = "NodePosition"
ROUTE35.toField = "set_keyValue"

ProtoBody11.children.append(ROUTE35)
ROUTE36 = x3d.ROUTE()
ROUTE36.fromNode = "NodePosition"
ROUTE36.fromField = "value_changed"
ROUTE36.toNode = "transform"
ROUTE36.toField = "set_translation"

ProtoBody11.children.append(ROUTE36)

ProtoDeclare8.ProtoBody = ProtoBody11

Scene7.children.append(ProtoDeclare8)
ProtoDeclare37 = x3d.ProtoDeclare()
ProtoDeclare37.name = "cyl"
ProtoInterface38 = x3d.ProtoInterface()
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFVec3f"
field39.name = "set_positionA"

ProtoInterface38.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFVec3f"
field40.name = "set_positionB"
field40.value = [50,50,50]

ProtoInterface38.field.append(field40)

ProtoDeclare37.ProtoInterface = ProtoInterface38
ProtoBody41 = x3d.ProtoBody()
Group42 = x3d.Group()
Shape43 = x3d.Shape()
Appearance44 = x3d.Appearance()
Material45 = x3d.Material()
Material45.diffuseColor = [0,1,0]

Appearance44.material = Material45

Shape43.appearance = Appearance44
Extrusion46 = x3d.Extrusion(DEF="extrusion")
Extrusion46.creaseAngle = 0.785
Extrusion46.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]
Extrusion46.spine = [(0, -50, 0),(0, 0, 0),(0, 50, 0)]

Shape43.geometry = Extrusion46

Group42.children.append(Shape43)
Script47 = x3d.Script(DEF="MoveCylinder")
field48 = x3d.field()
field48.accessType = "inputOutput"
field48.type = "MFVec3f"
field48.name = "spine"
field48.value = [(0, -50, 0),(0, 0, 0),(0, 50, 0)]

Script47.field.append(field48)
field49 = x3d.field()
field49.accessType = "inputOutput"
field49.type = "SFVec3f"
field49.name = "endA"

Script47.field.append(field49)
field50 = x3d.field()
field50.accessType = "inputOutput"
field50.type = "SFVec3f"
field50.name = "endB"

Script47.field.append(field50)

Script47.sourceCode = '''ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}'''
IS51 = x3d.IS()
connect52 = x3d.connect()
connect52.nodeField = "endA"
connect52.protoField = "set_positionA"

IS51.connect.append(connect52)
connect53 = x3d.connect()
connect53.nodeField = "endB"
connect53.protoField = "set_positionB"

IS51.connect.append(connect53)

Script47.IS = IS51

Group42.children.append(Script47)

ProtoBody41.children.append(Group42)
ROUTE54 = x3d.ROUTE()
ROUTE54.fromNode = "MoveCylinder"
ROUTE54.fromField = "spine_changed"
ROUTE54.toNode = "extrusion"
ROUTE54.toField = "set_spine"

ProtoBody41.children.append(ROUTE54)

ProtoDeclare37.ProtoBody = ProtoBody41

Scene7.children.append(ProtoDeclare37)
Transform55 = x3d.Transform(DEF="HoldsContent")
Transform55.scale = [0.1,0.1,0.1]
PlaneSensor56 = x3d.PlaneSensor(DEF="clickGenerator")
PlaneSensor56.description = "click on background to add nodes, click on nodes to add links"
PlaneSensor56.minPosition = [-50,-50]
PlaneSensor56.maxPosition = [50,50]

Transform55.children.append(PlaneSensor56)
ProtoInstance57 = x3d.ProtoInstance(DEF="nodeA")
ProtoInstance57.name = "node"
fieldValue58 = x3d.fieldValue()
fieldValue58.name = "position"
fieldValue58.value = "0 4.483333 0"

ProtoInstance57.fieldValue.append(fieldValue58)

Transform55.children.append(ProtoInstance57)
ProtoInstance59 = x3d.ProtoInstance(DEF="nodeB")
ProtoInstance59.name = "node"
fieldValue60 = x3d.fieldValue()
fieldValue60.name = "position"
fieldValue60.value = "0 4.483333 0"

ProtoInstance59.fieldValue.append(fieldValue60)

Transform55.children.append(ProtoInstance59)
ProtoInstance61 = x3d.ProtoInstance(DEF="nodeC")
ProtoInstance61.name = "node"
fieldValue62 = x3d.fieldValue()
fieldValue62.name = "position"
fieldValue62.value = "0 4.483333 0"

ProtoInstance61.fieldValue.append(fieldValue62)

Transform55.children.append(ProtoInstance61)
ProtoInstance63 = x3d.ProtoInstance(DEF="nodeD")
ProtoInstance63.name = "node"
fieldValue64 = x3d.fieldValue()
fieldValue64.name = "position"
fieldValue64.value = "0 4.483333 0"

ProtoInstance63.fieldValue.append(fieldValue64)

Transform55.children.append(ProtoInstance63)
ProtoInstance65 = x3d.ProtoInstance(DEF="linkA")
ProtoInstance65.name = "cyl"
fieldValue66 = x3d.fieldValue()
fieldValue66.name = "set_positionA"
fieldValue66.value = "0 4.483333 0"

ProtoInstance65.fieldValue.append(fieldValue66)
fieldValue67 = x3d.fieldValue()
fieldValue67.name = "set_positionB"
fieldValue67.value = "0 4.483333 0"

ProtoInstance65.fieldValue.append(fieldValue67)

Transform55.children.append(ProtoInstance65)
ProtoInstance68 = x3d.ProtoInstance(DEF="linkB")
ProtoInstance68.name = "cyl"
fieldValue69 = x3d.fieldValue()
fieldValue69.name = "set_positionA"
fieldValue69.value = "0 4.483333 0"

ProtoInstance68.fieldValue.append(fieldValue69)
fieldValue70 = x3d.fieldValue()
fieldValue70.name = "set_positionB"
fieldValue70.value = "0 4.483333 0"

ProtoInstance68.fieldValue.append(fieldValue70)

Transform55.children.append(ProtoInstance68)
ProtoInstance71 = x3d.ProtoInstance(DEF="linkC")
ProtoInstance71.name = "cyl"
fieldValue72 = x3d.fieldValue()
fieldValue72.name = "set_positionA"
fieldValue72.value = "0 4.483333 0"

ProtoInstance71.fieldValue.append(fieldValue72)
fieldValue73 = x3d.fieldValue()
fieldValue73.name = "set_positionB"
fieldValue73.value = "0 4.483333 0"

ProtoInstance71.fieldValue.append(fieldValue73)

Transform55.children.append(ProtoInstance71)

Scene7.children.append(Transform55)
Script74 = x3d.Script(DEF="clickHandler")
field75 = x3d.field()
field75.accessType = "inputOutput"
field75.type = "SFInt32"
field75.name = "counter"

Script74.field.append(field75)
field76 = x3d.field()
field76.accessType = "inputOnly"
field76.type = "SFBool"
field76.name = "add_node"

Script74.field.append(field76)

Script74.sourceCode = '''ecmascript:\n"+
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
"                \n"+
"        }'''

Scene7.children.append(Script74)
ROUTE77 = x3d.ROUTE()
ROUTE77.fromNode = "clickGenerator"
ROUTE77.fromField = "isActive"
ROUTE77.toNode = "clickHandler"
ROUTE77.toField = "add_node"

Scene7.children.append(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.fromNode = "nodeA"
ROUTE78.fromField = "position_changed"
ROUTE78.toNode = "linkA"
ROUTE78.toField = "set_set_positionA"

Scene7.children.append(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.fromNode = "nodeB"
ROUTE79.fromField = "position_changed"
ROUTE79.toNode = "linkA"
ROUTE79.toField = "set_set_positionB"

Scene7.children.append(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.fromNode = "nodeA"
ROUTE80.fromField = "position_changed"
ROUTE80.toNode = "linkB"
ROUTE80.toField = "set_set_positionA"

Scene7.children.append(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.fromNode = "nodeC"
ROUTE81.fromField = "position_changed"
ROUTE81.toNode = "linkB"
ROUTE81.toField = "set_set_positionB"

Scene7.children.append(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.fromNode = "nodeA"
ROUTE82.fromField = "position_changed"
ROUTE82.toNode = "linkC"
ROUTE82.toField = "set_set_positionA"

Scene7.children.append(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.fromNode = "nodeD"
ROUTE83.fromField = "position_changed"
ROUTE83.toNode = "linkC"
ROUTE83.toField = "set_set_positionB"

Scene7.children.append(ROUTE83)

X3D0.Scene = Scene7
f = open("../data/force.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/force.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/force.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
