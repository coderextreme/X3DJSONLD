from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
component2 = component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John W Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("created")
meta4.setContent("December 13 2015")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("title")
meta5.setContent("force.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/force.x3d")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("description")
meta7.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("generator")
meta8.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta8)

X3D0.setHead(head1)
Scene9 = Scene()
ProtoDeclare10 = ProtoDeclare()
ProtoDeclare10.setName("node")
ProtoInterface11 = ProtoInterface()
field12 = field()
field12.setName("position")
field12.setAccessType("inputOutput")
field12.setType("SFVec3f")
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = ProtoBody()
Group14 = Group()
Transform15 = Transform()
Transform15.setDEF("transform")
IS16 = IS()
connect17 = connect()
connect17.setNodeField("translation")
connect17.setProtoField("position")

IS16.addConnect(connect17)

Transform15.setIS(IS16)
Shape18 = Shape()
Sphere19 = Sphere()

Shape18.setGeometry(Sphere19)
Appearance20 = Appearance()
Material21 = Material()
Material21.setDiffuseColor([1,0,0])

Appearance20.setMaterial(Material21)

Shape18.setAppearance(Appearance20)

Transform15.addChildren(Shape18)
Transform22 = Transform()
Transform22.setTranslation([1,0,0])
Shape23 = Shape()
Text24 = Text()
Text24.setString(["Node"])
FontStyle25 = FontStyle()
FontStyle25.setJustify(["MIDDLE","MIDDLE"])
FontStyle25.setSize(5)

Text24.setFontStyle(FontStyle25)

Shape23.setGeometry(Text24)
Appearance26 = Appearance()
Material27 = Material()
Material27.setDiffuseColor([0,0,1])

Appearance26.setMaterial(Material27)

Shape23.setAppearance(Appearance26)

Transform22.addChildren(Shape23)

Transform15.addChildren(Transform22)

Group14.addChildren(Transform15)
PositionInterpolator28 = PositionInterpolator()
PositionInterpolator28.setDEF("NodePosition")
PositionInterpolator28.setKey([0,1])
PositionInterpolator28.setKeyValue([0,0,0,0,5,0])

Group14.addChildren(PositionInterpolator28)
Script29 = Script()
Script29.setDEF("MoveBall")
field30 = field()
field30.setName("translation")
field30.setAccessType("inputOutput")
field30.setType("SFVec3f")
field30.setValue("50 50 0")

Script29.addField(field30)
field31 = field()
field31.setName("old")
field31.setAccessType("inputOutput")
field31.setType("SFVec3f")
field31.setValue("0 0 0")

Script29.addField(field31)
field32 = field()
field32.setName("set_cycle")
field32.setAccessType("inputOnly")
field32.setType("SFTime")

Script29.addField(field32)
field33 = field()
field33.setName("keyValue")
field33.setAccessType("outputOnly")
field33.setType("MFVec3f")

Script29.addField(field33)

Script29.setSourceCode('''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}''')

Group14.addChildren(Script29)
TimeSensor34 = TimeSensor()
TimeSensor34.setDEF("nodeClock")
TimeSensor34.setCycleInterval(3)
TimeSensor34.setLoop(True)

Group14.addChildren(TimeSensor34)
ROUTE35 = ROUTE()
ROUTE35.setFromNode("nodeClock")
ROUTE35.setFromField("cycleTime")
ROUTE35.setToNode("MoveBall")
ROUTE35.setToField("set_cycle")

Group14.addChildren(ROUTE35)
ROUTE36 = ROUTE()
ROUTE36.setFromNode("nodeClock")
ROUTE36.setFromField("fraction_changed")
ROUTE36.setToNode("NodePosition")
ROUTE36.setToField("set_fraction")

Group14.addChildren(ROUTE36)
ROUTE37 = ROUTE()
ROUTE37.setFromNode("MoveBall")
ROUTE37.setFromField("keyValue")
ROUTE37.setToNode("NodePosition")
ROUTE37.setToField("keyValue")

Group14.addChildren(ROUTE37)
ROUTE38 = ROUTE()
ROUTE38.setFromNode("NodePosition")
ROUTE38.setFromField("value_changed")
ROUTE38.setToNode("transform")
ROUTE38.setToField("set_translation")

Group14.addChildren(ROUTE38)

ProtoBody13.addChildren(Group14)

ProtoDeclare10.setProtoBody(ProtoBody13)

Scene9.addChildren(ProtoDeclare10)
ProtoDeclare39 = ProtoDeclare()
ProtoDeclare39.setName("cylinder")
ProtoInterface40 = ProtoInterface()
field41 = field()
field41.setName("set_positionA")
field41.setAccessType("inputOnly")
field41.setType("SFVec3f")

ProtoInterface40.addField(field41)
field42 = field()
field42.setName("set_positionB")
field42.setAccessType("inputOnly")
field42.setType("SFVec3f")

ProtoInterface40.addField(field42)

ProtoDeclare39.setProtoInterface(ProtoInterface40)
ProtoBody43 = ProtoBody()
Group44 = Group()
Shape45 = Shape()
Extrusion46 = Extrusion()
Extrusion46.setDEF("extrusion")
Extrusion46.setCreaseAngle(0.785)
Extrusion46.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion46.setSpine([0,-50,0,0,50,0])

Shape45.setGeometry(Extrusion46)
Appearance47 = Appearance()
Material48 = Material()
Material48.setDiffuseColor([0,1,0])

Appearance47.setMaterial(Material48)

Shape45.setAppearance(Appearance47)

Group44.addChildren(Shape45)
Script49 = Script()
Script49.setDEF("MoveCylinder")
field50 = field()
field50.setName("spine")
field50.setAccessType("inputOutput")
field50.setType("MFVec3f")
field50.setValue("0 -50 0 0 50 0")

Script49.addField(field50)
field51 = field()
field51.setName("set_endA")
field51.setAccessType("inputOnly")
field51.setType("SFVec3f")

Script49.addField(field51)
field52 = field()
field52.setName("set_endB")
field52.setAccessType("inputOnly")
field52.setType("SFVec3f")

Script49.addField(field52)
IS53 = IS()
connect54 = connect()
connect54.setNodeField("set_endA")
connect54.setProtoField("set_positionA")

IS53.addConnect(connect54)
connect55 = connect()
connect55.setNodeField("set_endB")
connect55.setProtoField("set_positionB")

IS53.addConnect(connect55)

Script49.setIS(IS53)

Script49.setSourceCode('''ecmascript:\n"+
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
"                }''')

Group44.addChildren(Script49)
ROUTE56 = ROUTE()
ROUTE56.setFromNode("MoveCylinder")
ROUTE56.setFromField("spine")
ROUTE56.setToNode("extrusion")
ROUTE56.setToField("set_spine")

Group44.addChildren(ROUTE56)

ProtoBody43.addChildren(Group44)

ProtoDeclare39.setProtoBody(ProtoBody43)

Scene9.addChildren(ProtoDeclare39)
Transform57 = Transform()
Transform57.setDEF("HoldsContent")
Transform57.setScale([0.1,0.1,0.1])
PlaneSensor58 = PlaneSensor()
PlaneSensor58.setDEF("clickGenerator")
PlaneSensor58.setMinPosition([-50,-50])
PlaneSensor58.setMaxPosition([50,50])
PlaneSensor58.setDescription("click on background to add nodes, click on nodes to add links")

Transform57.addChildren(PlaneSensor58)
ProtoInstance59 = ProtoInstance()
ProtoInstance59.setName("node")
ProtoInstance59.setDEF("nodeA")
fieldValue60 = fieldValue()
fieldValue60.setName("position")
fieldValue60.setValue("0 0 0")

ProtoInstance59.addFieldValue(fieldValue60)

Transform57.addChildren(ProtoInstance59)
ProtoInstance61 = ProtoInstance()
ProtoInstance61.setName("node")
ProtoInstance61.setDEF("nodeB")
fieldValue62 = fieldValue()
fieldValue62.setName("position")
fieldValue62.setValue("50 50 50")

ProtoInstance61.addFieldValue(fieldValue62)

Transform57.addChildren(ProtoInstance61)
ProtoInstance63 = ProtoInstance()
ProtoInstance63.setName("node")
ProtoInstance63.setDEF("nodeC")
fieldValue64 = fieldValue()
fieldValue64.setName("position")
fieldValue64.setValue("-50 -50 -50")

ProtoInstance63.addFieldValue(fieldValue64)

Transform57.addChildren(ProtoInstance63)
ProtoInstance65 = ProtoInstance()
ProtoInstance65.setName("node")
ProtoInstance65.setDEF("nodeD")
fieldValue66 = fieldValue()
fieldValue66.setName("position")
fieldValue66.setValue("50 50 -50")

ProtoInstance65.addFieldValue(fieldValue66)

Transform57.addChildren(ProtoInstance65)
ProtoInstance67 = ProtoInstance()
ProtoInstance67.setName("cylinder")
ProtoInstance67.setDEF("linkA")
fieldValue68 = fieldValue()
fieldValue68.setName("set_positionA")
fieldValue68.setValue("0 0 0")

ProtoInstance67.addFieldValue(fieldValue68)
fieldValue69 = fieldValue()
fieldValue69.setName("set_positionB")
fieldValue69.setValue("50 50 50")

ProtoInstance67.addFieldValue(fieldValue69)

Transform57.addChildren(ProtoInstance67)
ProtoInstance70 = ProtoInstance()
ProtoInstance70.setName("cylinder")
ProtoInstance70.setDEF("linkB")
fieldValue71 = fieldValue()
fieldValue71.setName("set_positionA")
fieldValue71.setValue("0 0 0")

ProtoInstance70.addFieldValue(fieldValue71)
fieldValue72 = fieldValue()
fieldValue72.setName("set_positionB")
fieldValue72.setValue("-50 -50 -50")

ProtoInstance70.addFieldValue(fieldValue72)

Transform57.addChildren(ProtoInstance70)
ProtoInstance73 = ProtoInstance()
ProtoInstance73.setName("cylinder")
ProtoInstance73.setDEF("linkC")
fieldValue74 = fieldValue()
fieldValue74.setName("set_positionA")
fieldValue74.setValue("50 50 50")

ProtoInstance73.addFieldValue(fieldValue74)
fieldValue75 = fieldValue()
fieldValue75.setName("set_positionB")
fieldValue75.setValue("50 50 -50")

ProtoInstance73.addFieldValue(fieldValue75)

Transform57.addChildren(ProtoInstance73)

Scene9.addChildren(Transform57)
Script76 = Script()
Script76.setDEF("clickHandler")
field77 = field()
field77.setName("counter")
field77.setAccessType("inputOutput")
field77.setValue("0")
field77.setType("SFInt32")

Script76.addField(field77)
field78 = field()
field78.setName("node_changed")
field78.setAccessType("outputOnly")
field78.setType("SFNode")

Script76.addField(field78)
field79 = field()
field79.setName("add_node")
field79.setAccessType("inputOnly")
field79.setValue("false")
field79.setType("SFBool")

Script76.addField(field79)
#<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script76.setSourceCode('''ecmascript:\n"+
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
"        }''')

Scene9.addChildren(Script76)
ROUTE80 = ROUTE()
ROUTE80.setFromNode("clickGenerator")
ROUTE80.setFromField("isActive")
ROUTE80.setToNode("clickHandler")
ROUTE80.setToField("add_node")

Scene9.addChildren(ROUTE80)
ROUTE81 = ROUTE()
ROUTE81.setFromNode("nodeA")
ROUTE81.setFromField("position")
ROUTE81.setToNode("linkA")
ROUTE81.setToField("set_positionA")

Scene9.addChildren(ROUTE81)
ROUTE82 = ROUTE()
ROUTE82.setFromNode("nodeB")
ROUTE82.setFromField("position")
ROUTE82.setToNode("linkA")
ROUTE82.setToField("set_positionB")

Scene9.addChildren(ROUTE82)
ROUTE83 = ROUTE()
ROUTE83.setFromNode("nodeA")
ROUTE83.setFromField("position")
ROUTE83.setToNode("linkB")
ROUTE83.setToField("set_positionA")

Scene9.addChildren(ROUTE83)
ROUTE84 = ROUTE()
ROUTE84.setFromNode("nodeC")
ROUTE84.setFromField("position")
ROUTE84.setToNode("linkB")
ROUTE84.setToField("set_positionB")

Scene9.addChildren(ROUTE84)
ROUTE85 = ROUTE()
ROUTE85.setFromNode("nodeA")
ROUTE85.setFromField("position")
ROUTE85.setToNode("linkC")
ROUTE85.setToField("set_positionA")

Scene9.addChildren(ROUTE85)
ROUTE86 = ROUTE()
ROUTE86.setFromNode("nodeD")
ROUTE86.setFromField("position")
ROUTE86.setToNode("linkC")
ROUTE86.setToField("set_positionB")

Scene9.addChildren(ROUTE86)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../personal/force_RoundTrip.x3d")
