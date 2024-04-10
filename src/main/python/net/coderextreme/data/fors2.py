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
meta4.setName("modified")
meta4.setContent("April 18 2017")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("title")
meta5.setContent("fors2.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("description")
meta7.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("generator")
meta8.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta8)

X3D0.setHead(head1)
Scene9 = x3d.Scene()
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.setName("node")
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.setName("position")
field12.setAccessType("inputOutput")
field12.setType("SFVec3f")
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = x3d.ProtoBody()
Transform14 = x3d.Transform()
Transform14.setDEF("transform")
IS15 = x3d.IS()
connect16 = x3d.connect()
connect16.setNodeField("translation")
connect16.setProtoField("position")

IS15.addConnect(connect16)

Transform14.setIS(IS15)
Shape17 = x3d.Shape()
#comment before Sphere
#comment after Sphere
#comment after Appearance
Sphere18 = x3d.Sphere()

Shape17.setGeometry(Sphere18)
Appearance19 = x3d.Appearance()
#comment before Material
#comment after Material
Material20 = x3d.Material()
Material20.setDiffuseColor([1,0,0])

Appearance19.setMaterial(Material20)

Shape17.setAppearance(Appearance19)

Transform14.addChild(Shape17)

ProtoBody13.addChildren(Transform14)
PositionInterpolator21 = x3d.PositionInterpolator()
PositionInterpolator21.setDEF("NodePosition")
PositionInterpolator21.setKey([0,1])
PositionInterpolator21.setKeyValue([0,0,0,0,5,0])

ProtoBody13.addChildren(PositionInterpolator21)
Script22 = x3d.Script()
Script22.setDEF("MoveBall")
field23 = x3d.field()
field23.setName("translation")
field23.setAccessType("inputOutput")
field23.setType("SFVec3f")
field23.setValue("50 50 0")

Script22.addField(field23)
field24 = x3d.field()
field24.setName("old")
field24.setAccessType("inputOutput")
field24.setType("SFVec3f")
field24.setValue("0 0 0")

Script22.addField(field24)
field25 = x3d.field()
field25.setName("set_cycle")
field25.setAccessType("inputOnly")
field25.setType("SFTime")

Script22.addField(field25)
field26 = x3d.field()
field26.setName("keyValue")
field26.setAccessType("outputOnly")
field26.setType("MFVec3f")

Script22.addField(field26)

Script22.setSourceCode('''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}''')

ProtoBody13.addChildren(Script22)
TimeSensor27 = x3d.TimeSensor()
TimeSensor27.setDEF("nodeClock")
TimeSensor27.setCycleInterval(3)
TimeSensor27.setLoop(True)

ProtoBody13.addChildren(TimeSensor27)
ROUTE28 = x3d.ROUTE()
ROUTE28.setFromNode("nodeClock")
ROUTE28.setFromField("cycleTime")
ROUTE28.setToNode("MoveBall")
ROUTE28.setToField("set_cycle")

ProtoBody13.addChildren(ROUTE28)
ROUTE29 = x3d.ROUTE()
ROUTE29.setFromNode("nodeClock")
ROUTE29.setFromField("fraction_changed")
ROUTE29.setToNode("NodePosition")
ROUTE29.setToField("set_fraction")

ProtoBody13.addChildren(ROUTE29)
ROUTE30 = x3d.ROUTE()
ROUTE30.setFromNode("MoveBall")
ROUTE30.setFromField("keyValue")
ROUTE30.setToNode("NodePosition")
ROUTE30.setToField("keyValue")

ProtoBody13.addChildren(ROUTE30)
ROUTE31 = x3d.ROUTE()
ROUTE31.setFromNode("NodePosition")
ROUTE31.setFromField("value_changed")
ROUTE31.setToNode("transform")
ROUTE31.setToField("set_translation")

ProtoBody13.addChildren(ROUTE31)

ProtoDeclare10.setProtoBody(ProtoBody13)

Scene9.addChildren(ProtoDeclare10)
ProtoDeclare32 = x3d.ProtoDeclare()
ProtoDeclare32.setName("cyl")
ProtoInterface33 = x3d.ProtoInterface()
field34 = x3d.field()
field34.setName("positionA")
field34.setAccessType("inputOnly")
field34.setType("SFVec3f")

ProtoInterface33.addField(field34)
field35 = x3d.field()
field35.setName("positionB")
field35.setAccessType("inputOnly")
field35.setType("SFVec3f")

ProtoInterface33.addField(field35)

ProtoDeclare32.setProtoInterface(ProtoInterface33)
ProtoBody36 = x3d.ProtoBody()
Shape37 = x3d.Shape()
Extrusion38 = x3d.Extrusion()
Extrusion38.setDEF("extrusion")
Extrusion38.setCreaseAngle(0.785)
Extrusion38.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion38.setSpine([0,-50,0,0,0,0,0,50,0])

Shape37.setGeometry(Extrusion38)
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.setDiffuseColor([0,1,0])

Appearance39.setMaterial(Material40)

Shape37.setAppearance(Appearance39)

ProtoBody36.addChildren(Shape37)
Script41 = x3d.Script()
Script41.setDEF("MoveCylinder")
field42 = x3d.field()
field42.setName("spine")
field42.setAccessType("inputOutput")
field42.setType("MFVec3f")
field42.setValue("0 -50 0 0 0 0 0 50 0")

Script41.addField(field42)
field43 = x3d.field()
field43.setName("set_endA")
field43.setAccessType("inputOnly")
field43.setType("SFVec3f")

Script41.addField(field43)
field44 = x3d.field()
field44.setName("set_endB")
field44.setAccessType("inputOnly")
field44.setType("SFVec3f")

Script41.addField(field44)
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.setNodeField("set_endA")
connect46.setProtoField("positionA")

IS45.addConnect(connect46)
connect47 = x3d.connect()
connect47.setNodeField("set_endB")
connect47.setProtoField("positionB")

IS45.addConnect(connect47)

Script41.setIS(IS45)

Script41.setSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"		    Browser.print('\\n'+'\"');\n"+
"                    spine = value;\n"+
"                }''')

ProtoBody36.addChildren(Script41)
ROUTE48 = x3d.ROUTE()
ROUTE48.setFromNode("MoveCylinder")
ROUTE48.setFromField("spine")
ROUTE48.setToNode("extrusion")
ROUTE48.setToField("set_spine")

ProtoBody36.addChildren(ROUTE48)

ProtoDeclare32.setProtoBody(ProtoBody36)

Scene9.addChildren(ProtoDeclare32)
Transform49 = x3d.Transform()
Transform49.setScale([0.1,0.1,0.1])
ProtoInstance50 = x3d.ProtoInstance()
ProtoInstance50.setName("node")
ProtoInstance50.setDEF("nodeA")
fieldValue51 = x3d.fieldValue()
fieldValue51.setName("position")
fieldValue51.setValue("-50 -50 -50")

ProtoInstance50.addFieldValue(fieldValue51)

Transform49.addChildren(ProtoInstance50)
ProtoInstance52 = x3d.ProtoInstance()
ProtoInstance52.setName("node")
ProtoInstance52.setDEF("nodeB")
fieldValue53 = x3d.fieldValue()
fieldValue53.setName("position")
fieldValue53.setValue("50 50 50")

ProtoInstance52.addFieldValue(fieldValue53)

Transform49.addChildren(ProtoInstance52)
ProtoInstance54 = x3d.ProtoInstance()
ProtoInstance54.setName("cyl")
ProtoInstance54.setDEF("linkA")
fieldValue55 = x3d.fieldValue()
fieldValue55.setName("positionA")
fieldValue55.setValue("0 0 0")

ProtoInstance54.addFieldValue(fieldValue55)
fieldValue56 = x3d.fieldValue()
fieldValue56.setName("positionB")
fieldValue56.setValue("50 50 50")

ProtoInstance54.addFieldValue(fieldValue56)

Transform49.addChildren(ProtoInstance54)

Scene9.addChildren(Transform49)
ROUTE57 = x3d.ROUTE()
ROUTE57.setFromNode("nodeA")
ROUTE57.setFromField("position")
ROUTE57.setToNode("linkA")
ROUTE57.setToField("positionA")

Scene9.addChildren(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.setFromNode("nodeB")
ROUTE58.setFromField("position")
ROUTE58.setToNode("linkA")
ROUTE58.setToField("positionB")

Scene9.addChildren(ROUTE58)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../data/fors2.new.python.x3d")
X3D0.toFileJSON("../data/fors2.new.python.json")
