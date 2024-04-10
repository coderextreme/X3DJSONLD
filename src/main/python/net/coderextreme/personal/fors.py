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
meta4.setContent("fors.x3d")

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
Transform13 = x3d.Transform()
Transform13.setDEF("transform")
IS14 = x3d.IS()
connect15 = x3d.connect()
connect15.setNodeField("translation")
connect15.setProtoField("position")

IS14.addConnect(connect15)

Transform13.setIS(IS14)
Shape16 = x3d.Shape()
Sphere17 = x3d.Sphere()

Shape16.setGeometry(Sphere17)
Appearance18 = x3d.Appearance()
Material19 = x3d.Material()
Material19.setDiffuseColor([1,0,0])

Appearance18.setMaterial(Material19)

Shape16.setAppearance(Appearance18)

Transform13.addChild(Shape16)
Transform20 = x3d.Transform()
Transform20.setTranslation([1,0,0])
Shape21 = x3d.Shape()
Text22 = x3d.Text()
Text22.setString(["Node"])
FontStyle23 = x3d.FontStyle()
FontStyle23.setJustify(["MIDDLE","MIDDLE"])
FontStyle23.setSize(5)

Text22.setFontStyle(FontStyle23)

Shape21.setGeometry(Text22)
Appearance24 = x3d.Appearance()
Material25 = x3d.Material()
Material25.setDiffuseColor([0,0,1])

Appearance24.setMaterial(Material25)

Shape21.setAppearance(Appearance24)

Transform20.addChild(Shape21)

Transform13.addChildren(Transform20)

ProtoBody12.addChildren(Transform13)
PositionInterpolator26 = x3d.PositionInterpolator()
PositionInterpolator26.setDEF("NodePosition")
PositionInterpolator26.setKey([0,1])
PositionInterpolator26.setKeyValue([0,0,0,0,5,0])

ProtoBody12.addChildren(PositionInterpolator26)
Script27 = x3d.Script()
Script27.setDEF("MoveBall")
field28 = x3d.field()
field28.setName("translation")
field28.setAccessType("inputOutput")
field28.setType("SFVec3f")
field28.setValue("50 50 0")

Script27.addField(field28)
field29 = x3d.field()
field29.setName("old")
field29.setAccessType("inputOutput")
field29.setType("SFVec3f")
field29.setValue("0 0 0")

Script27.addField(field29)
field30 = x3d.field()
field30.setName("set_cycle")
field30.setAccessType("inputOnly")
field30.setType("SFTime")

Script27.addField(field30)
field31 = x3d.field()
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
TimeSensor32 = x3d.TimeSensor()
TimeSensor32.setDEF("nodeClock")
TimeSensor32.setCycleInterval(3)
TimeSensor32.setLoop(True)

ProtoBody12.addChildren(TimeSensor32)
ROUTE33 = x3d.ROUTE()
ROUTE33.setFromNode("nodeClock")
ROUTE33.setFromField("cycleTime")
ROUTE33.setToNode("MoveBall")
ROUTE33.setToField("set_cycle")

ProtoBody12.addChildren(ROUTE33)
ROUTE34 = x3d.ROUTE()
ROUTE34.setFromNode("nodeClock")
ROUTE34.setFromField("fraction_changed")
ROUTE34.setToNode("NodePosition")
ROUTE34.setToField("set_fraction")

ProtoBody12.addChildren(ROUTE34)
ROUTE35 = x3d.ROUTE()
ROUTE35.setFromNode("MoveBall")
ROUTE35.setFromField("keyValue")
ROUTE35.setToNode("NodePosition")
ROUTE35.setToField("keyValue")

ProtoBody12.addChildren(ROUTE35)
ROUTE36 = x3d.ROUTE()
ROUTE36.setFromNode("NodePosition")
ROUTE36.setFromField("value_changed")
ROUTE36.setToNode("transform")
ROUTE36.setToField("set_translation")

ProtoBody12.addChildren(ROUTE36)

ProtoDeclare9.setProtoBody(ProtoBody12)

Scene8.addChildren(ProtoDeclare9)
ProtoDeclare37 = x3d.ProtoDeclare()
ProtoDeclare37.setName("cylinder")
ProtoInterface38 = x3d.ProtoInterface()
field39 = x3d.field()
field39.setName("set_positionA")
field39.setAccessType("inputOnly")
field39.setType("SFVec3f")

ProtoInterface38.addField(field39)
field40 = x3d.field()
field40.setName("set_positionB")
field40.setAccessType("inputOnly")
field40.setType("SFVec3f")

ProtoInterface38.addField(field40)

ProtoDeclare37.setProtoInterface(ProtoInterface38)
ProtoBody41 = x3d.ProtoBody()
Shape42 = x3d.Shape()
Extrusion43 = x3d.Extrusion()
Extrusion43.setDEF("extrusion")
Extrusion43.setCreaseAngle(0.785)
Extrusion43.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion43.setSpine([0,-50,0,0,50,0])

Shape42.setGeometry(Extrusion43)
Appearance44 = x3d.Appearance()
Material45 = x3d.Material()
Material45.setDiffuseColor([0,1,0])

Appearance44.setMaterial(Material45)

Shape42.setAppearance(Appearance44)

ProtoBody41.addChildren(Shape42)
Script46 = x3d.Script()
Script46.setDEF("MoveCylinder")
field47 = x3d.field()
field47.setName("spine")
field47.setAccessType("inputOutput")
field47.setType("MFVec3f")
field47.setValue("0 -50 0 0 50 0")

Script46.addField(field47)
field48 = x3d.field()
field48.setName("set_endA")
field48.setAccessType("inputOnly")
field48.setType("SFVec3f")

Script46.addField(field48)
field49 = x3d.field()
field49.setName("set_endB")
field49.setAccessType("inputOnly")
field49.setType("SFVec3f")

Script46.addField(field49)
IS50 = x3d.IS()
connect51 = x3d.connect()
connect51.setNodeField("set_endA")
connect51.setProtoField("set_positionA")

IS50.addConnect(connect51)
connect52 = x3d.connect()
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
ROUTE53 = x3d.ROUTE()
ROUTE53.setFromNode("MoveCylinder")
ROUTE53.setFromField("spine")
ROUTE53.setToNode("extrusion")
ROUTE53.setToField("set_spine")

ProtoBody41.addChildren(ROUTE53)

ProtoDeclare37.setProtoBody(ProtoBody41)

Scene8.addChildren(ProtoDeclare37)
Transform54 = x3d.Transform()
Transform54.setDEF("HoldsContent")
Transform54.setScale([0.1,0.1,0.1])
PlaneSensor55 = x3d.PlaneSensor()
PlaneSensor55.setDEF("clickGenerator")
PlaneSensor55.setMinPosition([-50,-50])
PlaneSensor55.setMaxPosition([50,50])
PlaneSensor55.setDescription("click on background to add nodes, click on nodes to add links")

Transform54.addChildren(PlaneSensor55)
ProtoInstance56 = x3d.ProtoInstance()
ProtoInstance56.setName("node")
ProtoInstance56.setDEF("nodeA")
fieldValue57 = x3d.fieldValue()
fieldValue57.setName("position")
fieldValue57.setValue("0 0 0")

ProtoInstance56.addFieldValue(fieldValue57)

Transform54.addChildren(ProtoInstance56)
ProtoInstance58 = x3d.ProtoInstance()
ProtoInstance58.setName("node")
ProtoInstance58.setDEF("nodeB")
fieldValue59 = x3d.fieldValue()
fieldValue59.setName("position")
fieldValue59.setValue("50 50 50")

ProtoInstance58.addFieldValue(fieldValue59)

Transform54.addChildren(ProtoInstance58)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.setName("cylinder")
ProtoInstance60.setDEF("linkA")
fieldValue61 = x3d.fieldValue()
fieldValue61.setName("set_positionA")
fieldValue61.setValue("0 0 0")

ProtoInstance60.addFieldValue(fieldValue61)
fieldValue62 = x3d.fieldValue()
fieldValue62.setName("set_positionB")
fieldValue62.setValue("50 50 50")

ProtoInstance60.addFieldValue(fieldValue62)

Transform54.addChildren(ProtoInstance60)

Scene8.addChildren(Transform54)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("nodeA")
ROUTE63.setFromField("position")
ROUTE63.setToNode("linkA")
ROUTE63.setToField("set_positionA")

Scene8.addChildren(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("nodeB")
ROUTE64.setFromField("position")
ROUTE64.setToNode("linkA")
ROUTE64.setToField("set_positionB")

Scene8.addChildren(ROUTE64)

X3D0.setScene(Scene8)
X3D0.toFileX3D("../personal/fors.new.python.x3d")
X3D0.toFileJSON("../personal/fors.new.python.json")
