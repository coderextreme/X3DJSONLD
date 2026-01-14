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
meta5.name = "title"
meta5.content = "force.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/force.x3d"

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
Group14 = x3d.Group()
Transform15 = x3d.Transform()
Transform15.DEF = "transform"
IS16 = x3d.IS()
connect17 = x3d.connect()
connect17.nodeField = "translation"
connect17.protoField = "position"

IS16.connect.append(connect17)

Transform15.IS = IS16
Shape18 = x3d.Shape()
Sphere19 = x3d.Sphere()

Shape18.geometry = Sphere19
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.diffuseColor = [1,0,0]

Appearance20.material = Material21

Shape18.appearance = Appearance20

Transform15.children.append(Shape18)
Transform22 = x3d.Transform()
Transform22.translation = [1,0,0]
Shape23 = x3d.Shape()
Text24 = x3d.Text()
Text24.string = ["Node"]
FontStyle25 = x3d.FontStyle()
FontStyle25.justify = ["MIDDLE","MIDDLE"]
FontStyle25.size = 5

Text24.fontStyle = FontStyle25

Shape23.geometry = Text24
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.diffuseColor = [0,0,1]

Appearance26.material = Material27

Shape23.appearance = Appearance26

Transform22.children.append(Shape23)

Transform15.children.append(Transform22)

Group14.children.append(Transform15)
PositionInterpolator28 = x3d.PositionInterpolator()
PositionInterpolator28.DEF = "NodePosition"
PositionInterpolator28.key = [0,1]

Group14.children.append(PositionInterpolator28)
Script29 = x3d.Script()
Script29.DEF = "MoveBall"
field30 = x3d.field()
field30.name = "translation"
field30.accessType = "inputOutput"
field30.type = "SFVec3f"
field30.value = [50,50,0]

Script29.field.append(field30)
field31 = x3d.field()
field31.name = "old"
field31.accessType = "inputOutput"
field31.type = "SFVec3f"
field31.value = [0,0,0]

Script29.field.append(field31)
field32 = x3d.field()
field32.name = "set_cycle"
field32.accessType = "inputOnly"
field32.type = "SFTime"

Script29.field.append(field32)
field33 = x3d.field()
field33.name = "keyValue"
field33.accessType = "outputOnly"
field33.type = "MFVec3f"

Script29.field.append(field33)

Script29.sourceCode = '''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                var tmpkeyValue = new MFVec3f();\n"+
"			    			tmpkeyValue[0] = old;\n"+
"			    			tmpkeyValue[1] = translation;\n"+
"                                                keyValue = tmpkeyValue;\n"+
"			    		\n"+
"						// Browser.println(translation);\n"+
"					}'''

Group14.children.append(Script29)
TimeSensor34 = x3d.TimeSensor()
TimeSensor34.DEF = "nodeClock"
TimeSensor34.cycleInterval = 3
TimeSensor34.loop = True

Group14.children.append(TimeSensor34)
ROUTE35 = x3d.ROUTE()
ROUTE35.fromNode = "nodeClock"
ROUTE35.fromField = "cycleTime"
ROUTE35.toNode = "MoveBall"
ROUTE35.toField = "set_cycle"

Group14.children.append(ROUTE35)
ROUTE36 = x3d.ROUTE()
ROUTE36.fromNode = "nodeClock"
ROUTE36.fromField = "fraction_changed"
ROUTE36.toNode = "NodePosition"
ROUTE36.toField = "set_fraction"

Group14.children.append(ROUTE36)
ROUTE37 = x3d.ROUTE()
ROUTE37.fromNode = "MoveBall"
ROUTE37.fromField = "keyValue"
ROUTE37.toNode = "NodePosition"
ROUTE37.toField = "keyValue"

Group14.children.append(ROUTE37)
ROUTE38 = x3d.ROUTE()
ROUTE38.fromNode = "NodePosition"
ROUTE38.fromField = "value_changed"
ROUTE38.toNode = "transform"
ROUTE38.toField = "set_translation"

Group14.children.append(ROUTE38)

ProtoBody13.children.append(Group14)

ProtoDeclare10.ProtoBody = ProtoBody13

Scene9.children.append(ProtoDeclare10)
ProtoDeclare39 = x3d.ProtoDeclare()
ProtoDeclare39.name = "cyl"
ProtoInterface40 = x3d.ProtoInterface()
field41 = x3d.field()
field41.name = "set_positionA"
field41.accessType = "inputOnly"
field41.type = "SFVec3f"

ProtoInterface40.field.append(field41)
field42 = x3d.field()
field42.name = "set_positionB"
field42.accessType = "inputOnly"
field42.type = "SFVec3f"

ProtoInterface40.field.append(field42)

ProtoDeclare39.ProtoInterface = ProtoInterface40
ProtoBody43 = x3d.ProtoBody()
Group44 = x3d.Group()
Shape45 = x3d.Shape()
Extrusion46 = x3d.Extrusion()
Extrusion46.DEF = "extrusion"
Extrusion46.creaseAngle = 0.785

Shape45.geometry = Extrusion46
Appearance47 = x3d.Appearance()
Material48 = x3d.Material()
Material48.diffuseColor = [0,1,0]

Appearance47.material = Material48

Shape45.appearance = Appearance47

Group44.children.append(Shape45)
Script49 = x3d.Script()
Script49.DEF = "MoveCylinder"
field50 = x3d.field()
field50.name = "spine"
field50.accessType = "inputOutput"
field50.type = "MFVec3f"

Script49.field.append(field50)
field51 = x3d.field()
field51.name = "set_endA"
field51.accessType = "inputOnly"
field51.type = "SFVec3f"

Script49.field.append(field51)
field52 = x3d.field()
field52.name = "set_endB"
field52.accessType = "inputOnly"
field52.type = "SFVec3f"

Script49.field.append(field52)
IS53 = x3d.IS()
connect54 = x3d.connect()
connect54.nodeField = "set_endA"
connect54.protoField = "set_positionA"

IS53.connect.append(connect54)
connect55 = x3d.connect()
connect55.nodeField = "set_endB"
connect55.protoField = "set_positionB"

IS53.connect.append(connect55)

Script49.IS = IS53

Script49.sourceCode = '''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    } else {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = spine[1];\n"+
"			spine = tmpspine;\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    } else {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = spine[0];\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }'''

Group44.children.append(Script49)
ROUTE56 = x3d.ROUTE()
ROUTE56.fromNode = "MoveCylinder"
ROUTE56.fromField = "spine"
ROUTE56.toNode = "extrusion"
ROUTE56.toField = "set_spine"

Group44.children.append(ROUTE56)

ProtoBody43.children.append(Group44)

ProtoDeclare39.ProtoBody = ProtoBody43

Scene9.children.append(ProtoDeclare39)
Transform57 = x3d.Transform()
Transform57.DEF = "HoldsContent"
Transform57.scale = [0.1,0.1,0.1]
PlaneSensor58 = x3d.PlaneSensor()
PlaneSensor58.DEF = "clickGenerator"
PlaneSensor58.minPosition = [-50,-50]
PlaneSensor58.maxPosition = [50,50]
PlaneSensor58.description = "click on background to add nodes, click on nodes to add links"

Transform57.children.append(PlaneSensor58)
ProtoInstance59 = x3d.ProtoInstance()
ProtoInstance59.name = "node"
ProtoInstance59.DEF = "nodeA"
fieldValue60 = x3d.fieldValue()
fieldValue60.name = "position"
fieldValue60.value = "0 0 0"

ProtoInstance59.fieldValue.append(fieldValue60)

Transform57.children.append(ProtoInstance59)
ProtoInstance61 = x3d.ProtoInstance()
ProtoInstance61.name = "node"
ProtoInstance61.DEF = "nodeB"
fieldValue62 = x3d.fieldValue()
fieldValue62.name = "position"
fieldValue62.value = "50 50 50"

ProtoInstance61.fieldValue.append(fieldValue62)

Transform57.children.append(ProtoInstance61)
ProtoInstance63 = x3d.ProtoInstance()
ProtoInstance63.name = "node"
ProtoInstance63.DEF = "nodeC"
fieldValue64 = x3d.fieldValue()
fieldValue64.name = "position"
fieldValue64.value = "-50 -50 -50"

ProtoInstance63.fieldValue.append(fieldValue64)

Transform57.children.append(ProtoInstance63)
ProtoInstance65 = x3d.ProtoInstance()
ProtoInstance65.name = "node"
ProtoInstance65.DEF = "nodeD"
fieldValue66 = x3d.fieldValue()
fieldValue66.name = "position"
fieldValue66.value = "50 50 -50"

ProtoInstance65.fieldValue.append(fieldValue66)

Transform57.children.append(ProtoInstance65)
ProtoInstance67 = x3d.ProtoInstance()
ProtoInstance67.name = "cyl"
ProtoInstance67.DEF = "linkA"
fieldValue68 = x3d.fieldValue()
fieldValue68.name = "set_positionA"
fieldValue68.value = "0 0 0"

ProtoInstance67.fieldValue.append(fieldValue68)
fieldValue69 = x3d.fieldValue()
fieldValue69.name = "set_positionB"
fieldValue69.value = "50 50 50"

ProtoInstance67.fieldValue.append(fieldValue69)

Transform57.children.append(ProtoInstance67)
ProtoInstance70 = x3d.ProtoInstance()
ProtoInstance70.name = "cyl"
ProtoInstance70.DEF = "linkB"
fieldValue71 = x3d.fieldValue()
fieldValue71.name = "set_positionA"
fieldValue71.value = "0 0 0"

ProtoInstance70.fieldValue.append(fieldValue71)
fieldValue72 = x3d.fieldValue()
fieldValue72.name = "set_positionB"
fieldValue72.value = "-50 -50 -50"

ProtoInstance70.fieldValue.append(fieldValue72)

Transform57.children.append(ProtoInstance70)
ProtoInstance73 = x3d.ProtoInstance()
ProtoInstance73.name = "cyl"
ProtoInstance73.DEF = "linkC"
fieldValue74 = x3d.fieldValue()
fieldValue74.name = "set_positionA"
fieldValue74.value = "50 50 50"

ProtoInstance73.fieldValue.append(fieldValue74)
fieldValue75 = x3d.fieldValue()
fieldValue75.name = "set_positionB"
fieldValue75.value = "50 50 -50"

ProtoInstance73.fieldValue.append(fieldValue75)

Transform57.children.append(ProtoInstance73)

Scene9.children.append(Transform57)
Script76 = x3d.Script()
Script76.DEF = "clickHandler"
field77 = x3d.field()
field77.name = "counter"
field77.accessType = "inputOutput"
field77.value = 0
field77.type = "SFInt32"

Script76.field.append(field77)
field78 = x3d.field()
field78.name = "node_changed"
field78.accessType = "outputOnly"
field78.type = "SFNode"

Script76.field.append(field78)
field79 = x3d.field()
field79.name = "add_node"
field79.accessType = "inputOnly"
field79.value = False
field79.type = "SFBool"

Script76.field.append(field79)
"""<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>"""

Script76.sourceCode = '''ecmascript:\n"+
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

Scene9.children.append(Script76)
ROUTE80 = x3d.ROUTE()
ROUTE80.fromNode = "clickGenerator"
ROUTE80.fromField = "isActive"
ROUTE80.toNode = "clickHandler"
ROUTE80.toField = "add_node"

Scene9.children.append(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.fromNode = "nodeA"
ROUTE81.fromField = "position"
ROUTE81.toNode = "linkA"
ROUTE81.toField = "set_positionA"

Scene9.children.append(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.fromNode = "nodeB"
ROUTE82.fromField = "position"
ROUTE82.toNode = "linkA"
ROUTE82.toField = "set_positionB"

Scene9.children.append(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.fromNode = "nodeA"
ROUTE83.fromField = "position"
ROUTE83.toNode = "linkB"
ROUTE83.toField = "set_positionA"

Scene9.children.append(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.fromNode = "nodeC"
ROUTE84.fromField = "position"
ROUTE84.toNode = "linkB"
ROUTE84.toField = "set_positionB"

Scene9.children.append(ROUTE84)
ROUTE85 = x3d.ROUTE()
ROUTE85.fromNode = "nodeA"
ROUTE85.fromField = "position"
ROUTE85.toNode = "linkC"
ROUTE85.toField = "set_positionA"

Scene9.children.append(ROUTE85)
ROUTE86 = x3d.ROUTE()
ROUTE86.fromNode = "nodeD"
ROUTE86.fromField = "position"
ROUTE86.toNode = "linkC"
ROUTE86.toField = "set_positionB"

Scene9.children.append(ROUTE86)

X3D0.Scene = Scene9
f = open("../personal/force.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/force.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
