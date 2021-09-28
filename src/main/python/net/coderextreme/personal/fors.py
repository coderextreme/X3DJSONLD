from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
meta2 = meta()
meta2.setName("creator")
meta2.setContent("John W Carlson")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("created")
meta3.setContent("December 13 2015")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("title")
meta4.setContent("fors.x3d")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/force.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("generator")
meta7.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)

X3D0.setHead(head1)
Scene8 = Scene()
ProtoDeclare9 = ProtoDeclare()
ProtoDeclare9.setName("node")
ProtoInterface10 = ProtoInterface()
field11 = field()
field11.setName("position")
field11.setAccessType("inputOutput")
field11.setType("SFVec3f")
field11.setValue("0 0 0")

ProtoInterface10.addField(field11)

ProtoDeclare9.setProtoInterface(ProtoInterface10)
ProtoBody12 = ProtoBody()
Transform13 = Transform()
Transform13.setDEF("transform")
IS14 = IS()
connect15 = connect()
connect15.setNodeField("translation")
connect15.setProtoField("position")

IS14.addConnect(connect15)

Transform13.setIS(IS14)
Shape16 = Shape()
Sphere17 = Sphere()

Shape16.setGeometry(Sphere17)
Appearance18 = Appearance()
Material19 = Material()
Material19.setDiffuseColor([1,0,0])

Appearance18.setMaterial(Material19)

Shape16.setAppearance(Appearance18)

Transform13.addChildren(Shape16)
Transform20 = Transform()
Transform20.setTranslation([1,0,0])
Shape21 = Shape()
Text22 = Text()
Text22.setString(["Node"])
FontStyle23 = FontStyle()
FontStyle23.setJustify(["MIDDLE","MIDDLE"])
FontStyle23.setSize(5)

Text22.setFontStyle(FontStyle23)

Shape21.setGeometry(Text22)
Appearance24 = Appearance()
Material25 = Material()
Material25.setDiffuseColor([0,0,1])

Appearance24.setMaterial(Material25)

Shape21.setAppearance(Appearance24)

Transform20.addChildren(Shape21)

Transform13.addChildren(Transform20)

ProtoBody12.addChildren(Transform13)
PositionInterpolator26 = PositionInterpolator()
PositionInterpolator26.setDEF("NodePosition")
PositionInterpolator26.setKey([0,1])
PositionInterpolator26.setKeyValue([0,0,0,0,5,0])

ProtoBody12.addChildren(PositionInterpolator26)
Script27 = Script()
Script27.setDEF("MoveBall")
field28 = field()
field28.setName("translation")
field28.setAccessType("inputOutput")
field28.setType("SFVec3f")
field28.setValue("50 50 0")

Script27.addField(field28)
field29 = field()
field29.setName("old")
field29.setAccessType("inputOutput")
field29.setType("SFVec3f")
field29.setValue("0 0 0")

Script27.addField(field29)
field30 = field()
field30.setName("set_cycle")
field30.setAccessType("inputOnly")
field30.setType("SFTime")

Script27.addField(field30)
field31 = field()
field31.setName("keyValue")
field31.setAccessType("outputOnly")
field31.setType("MFVec3f")

Script27.addField(field31)

Script27.setSourceCode('''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}''')

ProtoBody12.addChildren(Script27)
TimeSensor32 = TimeSensor()
TimeSensor32.setDEF("nodeClock")
TimeSensor32.setCycleInterval(3)
TimeSensor32.setLoop(True)

ProtoBody12.addChildren(TimeSensor32)
ROUTE33 = ROUTE()
ROUTE33.setFromNode("nodeClock")
ROUTE33.setFromField("cycleTime")
ROUTE33.setToNode("MoveBall")
ROUTE33.setToField("set_cycle")

ProtoBody12.addChildren(ROUTE33)
ROUTE34 = ROUTE()
ROUTE34.setFromNode("nodeClock")
ROUTE34.setFromField("fraction_changed")
ROUTE34.setToNode("NodePosition")
ROUTE34.setToField("set_fraction")

ProtoBody12.addChildren(ROUTE34)
ROUTE35 = ROUTE()
ROUTE35.setFromNode("MoveBall")
ROUTE35.setFromField("keyValue")
ROUTE35.setToNode("NodePosition")
ROUTE35.setToField("keyValue")

ProtoBody12.addChildren(ROUTE35)
ROUTE36 = ROUTE()
ROUTE36.setFromNode("NodePosition")
ROUTE36.setFromField("value_changed")
ROUTE36.setToNode("transform")
ROUTE36.setToField("set_translation")

ProtoBody12.addChildren(ROUTE36)

ProtoDeclare9.setProtoBody(ProtoBody12)

Scene8.addChildren(ProtoDeclare9)
ProtoDeclare37 = ProtoDeclare()
ProtoDeclare37.setName("cylinder")
ProtoInterface38 = ProtoInterface()
field39 = field()
field39.setName("set_positionA")
field39.setAccessType("inputOnly")
field39.setType("SFVec3f")

ProtoInterface38.addField(field39)
field40 = field()
field40.setName("set_positionB")
field40.setAccessType("inputOnly")
field40.setType("SFVec3f")

ProtoInterface38.addField(field40)

ProtoDeclare37.setProtoInterface(ProtoInterface38)
ProtoBody41 = ProtoBody()
Shape42 = Shape()
Extrusion43 = Extrusion()
Extrusion43.setDEF("extrusion")
Extrusion43.setCreaseAngle(0.785)
Extrusion43.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion43.setSpine([0,-50,0,0,50,0])

Shape42.setGeometry(Extrusion43)
Appearance44 = Appearance()
Material45 = Material()
Material45.setDiffuseColor([0,1,0])

Appearance44.setMaterial(Material45)

Shape42.setAppearance(Appearance44)

ProtoBody41.addChildren(Shape42)
Script46 = Script()
Script46.setDEF("MoveCylinder")
field47 = field()
field47.setName("spine")
field47.setAccessType("inputOutput")
field47.setType("MFVec3f")
field47.setValue("0 -50 0 0 50 0")

Script46.addField(field47)
field48 = field()
field48.setName("set_endA")
field48.setAccessType("inputOnly")
field48.setType("SFVec3f")

Script46.addField(field48)
field49 = field()
field49.setName("set_endB")
field49.setAccessType("inputOnly")
field49.setType("SFVec3f")

Script46.addField(field49)
IS50 = IS()
connect51 = connect()
connect51.setNodeField("set_endA")
connect51.setProtoField("set_positionA")

IS50.addConnect(connect51)
connect52 = connect()
connect52.setNodeField("set_endB")
connect52.setProtoField("set_positionB")

IS50.addConnect(connect52)

Script46.setIS(IS50)

Script46.setSourceCode('''ecmascript:\n"+
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

ProtoBody41.addChildren(Script46)
ROUTE53 = ROUTE()
ROUTE53.setFromNode("MoveCylinder")
ROUTE53.setFromField("spine")
ROUTE53.setToNode("extrusion")
ROUTE53.setToField("set_spine")

ProtoBody41.addChildren(ROUTE53)

ProtoDeclare37.setProtoBody(ProtoBody41)

Scene8.addChildren(ProtoDeclare37)
Transform54 = Transform()
Transform54.setDEF("HoldsContent")
Transform54.setScale([0.1,0.1,0.1])
PlaneSensor55 = PlaneSensor()
PlaneSensor55.setDEF("clickGenerator")
PlaneSensor55.setMinPosition([-50,-50])
PlaneSensor55.setMaxPosition([50,50])
PlaneSensor55.setDescription("click on background to add nodes, click on nodes to add links")

Transform54.addChildren(PlaneSensor55)
ProtoInstance56 = ProtoInstance()
ProtoInstance56.setName("node")
ProtoInstance56.setDEF("nodeA")
fieldValue57 = fieldValue()
fieldValue57.setName("position")
fieldValue57.setValue("0 0 0")

ProtoInstance56.addFieldValue(fieldValue57)

Transform54.addChildren(ProtoInstance56)
ProtoInstance58 = ProtoInstance()
ProtoInstance58.setName("node")
ProtoInstance58.setDEF("nodeB")
fieldValue59 = fieldValue()
fieldValue59.setName("position")
fieldValue59.setValue("50 50 50")

ProtoInstance58.addFieldValue(fieldValue59)

Transform54.addChildren(ProtoInstance58)
ProtoInstance60 = ProtoInstance()
ProtoInstance60.setName("cylinder")
ProtoInstance60.setDEF("linkA")
fieldValue61 = fieldValue()
fieldValue61.setName("set_positionA")
fieldValue61.setValue("0 0 0")

ProtoInstance60.addFieldValue(fieldValue61)
fieldValue62 = fieldValue()
fieldValue62.setName("set_positionB")
fieldValue62.setValue("50 50 50")

ProtoInstance60.addFieldValue(fieldValue62)

Transform54.addChildren(ProtoInstance60)

Scene8.addChildren(Transform54)
ROUTE63 = ROUTE()
ROUTE63.setFromNode("nodeA")
ROUTE63.setFromField("position")
ROUTE63.setToNode("linkA")
ROUTE63.setToField("set_positionA")

Scene8.addChildren(ROUTE63)
ROUTE64 = ROUTE()
ROUTE64.setFromNode("nodeB")
ROUTE64.setFromField("position")
ROUTE64.setToNode("linkA")
ROUTE64.setToField("set_positionB")

Scene8.addChildren(ROUTE64)

X3D0.setScene(Scene8)
X3D0.toFileX3D("../personal/fors_RoundTrip.x3d")
