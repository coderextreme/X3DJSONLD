import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("creator")
meta2.setContent("John W Carlson")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("created")
meta3.setContent("December 13 2015")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("title")
meta4.setContent("forcenode.x3d")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("generator")
meta7.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)

X3D0.setHead(head1)
Scene8 = x3d.Scene()
ProtoDeclare9 = x3d.ProtoDeclare()
ProtoDeclare9.setName("node")
ProtoInterface10 = x3d.ProtoInterface()
field11 = x3d.field()
field11.setName("position")
field11.setAccessType("inputOutput")
field11.setType("SFVec3f")
field11.setValue("0 0 0")

ProtoInterface10.addField(field11)

ProtoDeclare9.setProtoInterface(ProtoInterface10)
ProtoBody12 = x3d.ProtoBody()
Group13 = x3d.Group()
Transform14 = x3d.Transform()
Transform14.setDEF("transform")
IS15 = x3d.IS()
connect16 = x3d.connect()
connect16.setNodeField("translation")
connect16.setProtoField("position")

IS15.addConnect(connect16)

Transform14.setIS(IS15)
Shape17 = x3d.Shape()
Sphere18 = x3d.Sphere()

Shape17.setGeometry(Sphere18)
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.setDiffuseColor([1,0,0])

Appearance19.setMaterial(Material20)

Shape17.setAppearance(Appearance19)

Transform14.addChild(Shape17)
Transform21 = x3d.Transform()
Transform21.setTranslation([1,0,1])
Shape22 = x3d.Shape()
Text23 = x3d.Text()
Text23.setString(["Node"])
FontStyle24 = x3d.FontStyle()
FontStyle24.setJustify(["MIDDLE","MIDDLE"])
FontStyle24.setSize(5)

Text23.setFontStyle(FontStyle24)

Shape22.setGeometry(Text23)
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.setDiffuseColor([0,0,1])

Appearance25.setMaterial(Material26)

Shape22.setAppearance(Appearance25)

Transform21.addChild(Shape22)

Transform14.addChildren(Transform21)

Group13.addChildren(Transform14)
PositionInterpolator27 = x3d.PositionInterpolator()
PositionInterpolator27.setDEF("NodePosition")
PositionInterpolator27.setKey([0,1])
PositionInterpolator27.setKeyValue([0,0,0,0,5,0])

Group13.addChildren(PositionInterpolator27)
Script28 = x3d.Script()
Script28.setDEF("MoveBall")
field29 = x3d.field()
field29.setName("translation")
field29.setAccessType("inputOutput")
field29.setType("SFVec3f")
field29.setValue("50 50 0")

Script28.addField(field29)
field30 = x3d.field()
field30.setName("old")
field30.setAccessType("inputOutput")
field30.setType("SFVec3f")
field30.setValue("0 0 0")

Script28.addField(field30)
field31 = x3d.field()
field31.setName("set_cycle")
field31.setAccessType("inputOnly")
field31.setType("SFTime")

Script28.addField(field31)
field32 = x3d.field()
field32.setName("keyValue")
field32.setAccessType("outputOnly")
field32.setType("MFVec3f")

Script28.addField(field32)

Script28.setSourceCode('''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}''')

Group13.addChildren(Script28)
TimeSensor33 = x3d.TimeSensor()
TimeSensor33.setDEF("nodeClock")
TimeSensor33.setCycleInterval(3)
TimeSensor33.setLoop(True)

Group13.addChildren(TimeSensor33)
ROUTE34 = x3d.ROUTE()
ROUTE34.setFromNode("nodeClock")
ROUTE34.setFromField("cycleTime")
ROUTE34.setToNode("MoveBall")
ROUTE34.setToField("set_cycle")

Group13.addChildren(ROUTE34)
ROUTE35 = x3d.ROUTE()
ROUTE35.setFromNode("nodeClock")
ROUTE35.setFromField("fraction_changed")
ROUTE35.setToNode("NodePosition")
ROUTE35.setToField("set_fraction")

Group13.addChildren(ROUTE35)
ROUTE36 = x3d.ROUTE()
ROUTE36.setFromNode("MoveBall")
ROUTE36.setFromField("keyValue")
ROUTE36.setToNode("NodePosition")
ROUTE36.setToField("keyValue")

Group13.addChildren(ROUTE36)
ROUTE37 = x3d.ROUTE()
ROUTE37.setFromNode("NodePosition")
ROUTE37.setFromField("value_changed")
ROUTE37.setToNode("transform")
ROUTE37.setToField("set_translation")

Group13.addChildren(ROUTE37)

ProtoBody12.addChildren(Group13)

ProtoDeclare9.setProtoBody(ProtoBody12)

Scene8.addChildren(ProtoDeclare9)
ProtoDeclare38 = x3d.ProtoDeclare()
ProtoDeclare38.setName("cyl")
ProtoInterface39 = x3d.ProtoInterface()
field40 = x3d.field()
field40.setName("set_positionA")
field40.setAccessType("inputOnly")
field40.setType("SFVec3f")

ProtoInterface39.addField(field40)
field41 = x3d.field()
field41.setName("set_positionB")
field41.setAccessType("inputOnly")
field41.setType("SFVec3f")

ProtoInterface39.addField(field41)

ProtoDeclare38.setProtoInterface(ProtoInterface39)
ProtoBody42 = x3d.ProtoBody()
Group43 = x3d.Group()
Shape44 = x3d.Shape()
Extrusion45 = x3d.Extrusion()
Extrusion45.setDEF("extrusion")
Extrusion45.setCreaseAngle(0.785)
Extrusion45.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion45.setSpine([0,-50,0,0,50,0])

Shape44.setGeometry(Extrusion45)
Appearance46 = x3d.Appearance()
Material47 = x3d.Material()
Material47.setDiffuseColor([0,1,0])

Appearance46.setMaterial(Material47)

Shape44.setAppearance(Appearance46)

Group43.addChildren(Shape44)
Script48 = x3d.Script()
Script48.setDEF("MoveCylinder")
field49 = x3d.field()
field49.setName("spine")
field49.setAccessType("inputOutput")
field49.setType("MFVec3f")
field49.setValue("0 -50 0 0 50 0")

Script48.addField(field49)
field50 = x3d.field()
field50.setName("set_endA")
field50.setAccessType("inputOnly")
field50.setType("SFVec3f")

Script48.addField(field50)
field51 = x3d.field()
field51.setName("set_endB")
field51.setAccessType("inputOnly")
field51.setType("SFVec3f")

Script48.addField(field51)
IS52 = x3d.IS()
connect53 = x3d.connect()
connect53.setNodeField("set_endA")
connect53.setProtoField("set_positionA")

IS52.addConnect(connect53)
connect54 = x3d.connect()
connect54.setNodeField("set_endB")
connect54.setProtoField("set_positionB")

IS52.addConnect(connect54)

Script48.setIS(IS52)

Script48.setSourceCode('''ecmascript:\n"+
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

Group43.addChildren(Script48)
ROUTE55 = x3d.ROUTE()
ROUTE55.setFromNode("MoveCylinder")
ROUTE55.setFromField("spine")
ROUTE55.setToNode("extrusion")
ROUTE55.setToField("set_spine")

Group43.addChildren(ROUTE55)

ProtoBody42.addChildren(Group43)

ProtoDeclare38.setProtoBody(ProtoBody42)

Scene8.addChildren(ProtoDeclare38)
Transform56 = x3d.Transform()
Transform56.setDEF("HoldsContent")
Transform56.setScale([0.1,0.1,0.1])
PlaneSensor57 = x3d.PlaneSensor()
PlaneSensor57.setDEF("clickGenerator")
PlaneSensor57.setMinPosition([-50,-50])
PlaneSensor57.setMaxPosition([50,50])
PlaneSensor57.setDescription("click on background to add nodes, click on nodes to add links")

Transform56.addChildren(PlaneSensor57)
ProtoInstance58 = x3d.ProtoInstance()
ProtoInstance58.setName("node")
ProtoInstance58.setDEF("nodeA")
fieldValue59 = x3d.fieldValue()
fieldValue59.setName("position")
fieldValue59.setValue("0 0 0")

ProtoInstance58.addFieldValue(fieldValue59)

Transform56.addChildren(ProtoInstance58)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.setName("node")
ProtoInstance60.setDEF("nodeB")
fieldValue61 = x3d.fieldValue()
fieldValue61.setName("position")
fieldValue61.setValue("50 50 50")

ProtoInstance60.addFieldValue(fieldValue61)

Transform56.addChildren(ProtoInstance60)
ProtoInstance62 = x3d.ProtoInstance()
ProtoInstance62.setName("node")
ProtoInstance62.setDEF("nodeC")
fieldValue63 = x3d.fieldValue()
fieldValue63.setName("position")
fieldValue63.setValue("-50 -50 -50")

ProtoInstance62.addFieldValue(fieldValue63)

Transform56.addChildren(ProtoInstance62)
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.setName("node")
ProtoInstance64.setDEF("nodeD")
fieldValue65 = x3d.fieldValue()
fieldValue65.setName("position")
fieldValue65.setValue("50 50 -50")

ProtoInstance64.addFieldValue(fieldValue65)

Transform56.addChildren(ProtoInstance64)
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.setName("cyl")
ProtoInstance66.setDEF("linkA")
fieldValue67 = x3d.fieldValue()
fieldValue67.setName("set_positionA")
fieldValue67.setValue("0 0 0")

ProtoInstance66.addFieldValue(fieldValue67)
fieldValue68 = x3d.fieldValue()
fieldValue68.setName("set_positionB")
fieldValue68.setValue("50 50 50")

ProtoInstance66.addFieldValue(fieldValue68)

Transform56.addChildren(ProtoInstance66)
ProtoInstance69 = x3d.ProtoInstance()
ProtoInstance69.setName("cyl")
ProtoInstance69.setDEF("linkB")
fieldValue70 = x3d.fieldValue()
fieldValue70.setName("set_positionA")
fieldValue70.setValue("0 0 0")

ProtoInstance69.addFieldValue(fieldValue70)
fieldValue71 = x3d.fieldValue()
fieldValue71.setName("set_positionB")
fieldValue71.setValue("-50 -50 -50")

ProtoInstance69.addFieldValue(fieldValue71)

Transform56.addChildren(ProtoInstance69)
ProtoInstance72 = x3d.ProtoInstance()
ProtoInstance72.setName("cyl")
ProtoInstance72.setDEF("linkC")
fieldValue73 = x3d.fieldValue()
fieldValue73.setName("set_positionA")
fieldValue73.setValue("50 50 50")

ProtoInstance72.addFieldValue(fieldValue73)
fieldValue74 = x3d.fieldValue()
fieldValue74.setName("set_positionB")
fieldValue74.setValue("50 50 -50")

ProtoInstance72.addFieldValue(fieldValue74)

Transform56.addChildren(ProtoInstance72)

Scene8.addChildren(Transform56)
Script75 = x3d.Script()
Script75.setDEF("clickHandler")
field76 = x3d.field()
field76.setName("counter")
field76.setAccessType("inputOutput")
field76.setValue("0")
field76.setType("SFInt32")

Script75.addField(field76)
field77 = x3d.field()
field77.setName("node_changed")
field77.setAccessType("outputOnly")
field77.setType("SFNode")

Script75.addField(field77)
field78 = x3d.field()
field78.setName("add_node")
field78.setAccessType("inputOnly")
field78.setValue("false")
field78.setType("SFBool")

Script75.addField(field78)
#<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script75.setSourceCode('''ecmascript:\n"+
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

Scene8.addChildren(Script75)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromNode("clickGenerator")
ROUTE79.setFromField("isActive")
ROUTE79.setToNode("clickHandler")
ROUTE79.setToField("add_node")

Scene8.addChildren(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromNode("nodeA")
ROUTE80.setFromField("position")
ROUTE80.setToNode("linkA")
ROUTE80.setToField("set_positionA")

Scene8.addChildren(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.setFromNode("nodeB")
ROUTE81.setFromField("position")
ROUTE81.setToNode("linkA")
ROUTE81.setToField("set_positionB")

Scene8.addChildren(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.setFromNode("nodeA")
ROUTE82.setFromField("position")
ROUTE82.setToNode("linkB")
ROUTE82.setToField("set_positionA")

Scene8.addChildren(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.setFromNode("nodeC")
ROUTE83.setFromField("position")
ROUTE83.setToNode("linkB")
ROUTE83.setToField("set_positionB")

Scene8.addChildren(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.setFromNode("nodeA")
ROUTE84.setFromField("position")
ROUTE84.setToNode("linkC")
ROUTE84.setToField("set_positionA")

Scene8.addChildren(ROUTE84)
ROUTE85 = x3d.ROUTE()
ROUTE85.setFromNode("nodeD")
ROUTE85.setFromField("position")
ROUTE85.setToNode("linkC")
ROUTE85.setToField("set_positionB")

Scene8.addChildren(ROUTE85)

X3D0.setScene(Scene8)
X3D0.toFileX3D("../data/forcenode.new.python.x3d")
