# -*- coding: UTF-8 -*-
from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
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
meta4.setName("modified")
meta4.setContent("April 18 2017")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("title")
meta5.setContent("fors2.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/fors2.x3d")

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
Transform14 = Transform()
Transform14.setDEF("transform")
IS15 = IS()
connect16 = connect()
connect16.setNodeField("translation")
connect16.setProtoField("position")

IS15.addConnect(connect16)

Transform14.setIS(IS15)
Shape17 = Shape()
#comment before Sphere
#comment after Sphere
#comment after Appearance
Sphere18 = Sphere()

Shape17.setGeometry(Sphere18)
Appearance19 = Appearance()
#comment before Material
#comment after Material
Material20 = Material()
Material20.setDiffuseColor([1,0,0])

Appearance19.setMaterial(Material20)

Shape17.setAppearance(Appearance19)

Transform14.addChildren(Shape17)

ProtoBody13.addChildren(Transform14)
PositionInterpolator21 = PositionInterpolator()
PositionInterpolator21.setDEF("NodePosition")
PositionInterpolator21.setKey([0,1])
PositionInterpolator21.setKeyValue([0,0,0,0,5,0])

ProtoBody13.addChildren(PositionInterpolator21)
Script22 = Script()
Script22.setDEF("MoveBall")
field23 = field()
field23.setName("translation")
field23.setAccessType("inputOutput")
field23.setType("SFVec3f")
field23.setValue("50 50 0")

Script22.addField(field23)
field24 = field()
field24.setName("old")
field24.setAccessType("inputOutput")
field24.setType("SFVec3f")
field24.setValue("0 0 0")

Script22.addField(field24)
field25 = field()
field25.setName("set_cycle")
field25.setAccessType("inputOnly")
field25.setType("SFTime")

Script22.addField(field25)
field26 = field()
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
TimeSensor27 = TimeSensor()
TimeSensor27.setDEF("nodeClock")
TimeSensor27.setCycleInterval(3)
TimeSensor27.setLoop(True)

ProtoBody13.addChildren(TimeSensor27)
ROUTE28 = ROUTE()
ROUTE28.setFromNode("nodeClock")
ROUTE28.setFromField("cycleTime")
ROUTE28.setToNode("MoveBall")
ROUTE28.setToField("set_cycle")

ProtoBody13.addChildren(ROUTE28)
ROUTE29 = ROUTE()
ROUTE29.setFromNode("nodeClock")
ROUTE29.setFromField("fraction_changed")
ROUTE29.setToNode("NodePosition")
ROUTE29.setToField("set_fraction")

ProtoBody13.addChildren(ROUTE29)
ROUTE30 = ROUTE()
ROUTE30.setFromNode("MoveBall")
ROUTE30.setFromField("keyValue")
ROUTE30.setToNode("NodePosition")
ROUTE30.setToField("keyValue")

ProtoBody13.addChildren(ROUTE30)
ROUTE31 = ROUTE()
ROUTE31.setFromNode("NodePosition")
ROUTE31.setFromField("value_changed")
ROUTE31.setToNode("transform")
ROUTE31.setToField("set_translation")

ProtoBody13.addChildren(ROUTE31)

ProtoDeclare10.setProtoBody(ProtoBody13)

Scene9.addChildren(ProtoDeclare10)
ProtoDeclare32 = ProtoDeclare()
ProtoDeclare32.setName("cylinder")
ProtoInterface33 = ProtoInterface()
field34 = field()
field34.setName("positionA")
field34.setAccessType("inputOnly")
field34.setType("SFVec3f")

ProtoInterface33.addField(field34)
field35 = field()
field35.setName("positionB")
field35.setAccessType("inputOnly")
field35.setType("SFVec3f")

ProtoInterface33.addField(field35)

ProtoDeclare32.setProtoInterface(ProtoInterface33)
ProtoBody36 = ProtoBody()
Shape37 = Shape()
Extrusion38 = Extrusion()
Extrusion38.setDEF("extrusion")
Extrusion38.setCreaseAngle(0.785)
Extrusion38.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion38.setSpine([0,-50,0,0,0,0,0,50,0])

Shape37.setGeometry(Extrusion38)
Appearance39 = Appearance()
Material40 = Material()
Material40.setDiffuseColor([0,1,0])

Appearance39.setMaterial(Material40)

Shape37.setAppearance(Appearance39)

ProtoBody36.addChildren(Shape37)
Script41 = Script()
Script41.setDEF("MoveCylinder")
field42 = field()
field42.setName("spine")
field42.setAccessType("inputOutput")
field42.setType("MFVec3f")
field42.setValue("0 -50 0 0 0 0 0 50 0")

Script41.addField(field42)
field43 = field()
field43.setName("set_endA")
field43.setAccessType("inputOnly")
field43.setType("SFVec3f")

Script41.addField(field43)
field44 = field()
field44.setName("set_endB")
field44.setAccessType("inputOnly")
field44.setType("SFVec3f")

Script41.addField(field44)
IS45 = IS()
connect46 = connect()
connect46.setNodeField("set_endA")
connect46.setProtoField("positionA")

IS45.addConnect(connect46)
connect47 = connect()
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
ROUTE48 = ROUTE()
ROUTE48.setFromNode("MoveCylinder")
ROUTE48.setFromField("spine")
ROUTE48.setToNode("extrusion")
ROUTE48.setToField("set_spine")

ProtoBody36.addChildren(ROUTE48)

ProtoDeclare32.setProtoBody(ProtoBody36)

Scene9.addChildren(ProtoDeclare32)
Transform49 = Transform()
Transform49.setScale([0.1,0.1,0.1])
ProtoInstance50 = ProtoInstance()
ProtoInstance50.setName("node")
ProtoInstance50.setDEF("nodeA")
fieldValue51 = fieldValue()
fieldValue51.setName("position")
fieldValue51.setValue("-50 -50 -50")

ProtoInstance50.addFieldValue(fieldValue51)

Transform49.addChildren(ProtoInstance50)
ProtoInstance52 = ProtoInstance()
ProtoInstance52.setName("node")
ProtoInstance52.setDEF("nodeB")
fieldValue53 = fieldValue()
fieldValue53.setName("position")
fieldValue53.setValue("50 50 50")

ProtoInstance52.addFieldValue(fieldValue53)

Transform49.addChildren(ProtoInstance52)
ProtoInstance54 = ProtoInstance()
ProtoInstance54.setName("cylinder")
ProtoInstance54.setDEF("linkA")
fieldValue55 = fieldValue()
fieldValue55.setName("positionA")
fieldValue55.setValue("0 0 0")

ProtoInstance54.addFieldValue(fieldValue55)
fieldValue56 = fieldValue()
fieldValue56.setName("positionB")
fieldValue56.setValue("50 50 50")

ProtoInstance54.addFieldValue(fieldValue56)

Transform49.addChildren(ProtoInstance54)

Scene9.addChildren(Transform49)
ROUTE57 = ROUTE()
ROUTE57.setFromNode("nodeA")
ROUTE57.setFromField("position")
ROUTE57.setToNode("linkA")
ROUTE57.setToField("positionA")

Scene9.addChildren(ROUTE57)
ROUTE58 = ROUTE()
ROUTE58.setFromNode("nodeB")
ROUTE58.setFromField("position")
ROUTE58.setToNode("linkA")
ROUTE58.setToField("positionB")

Scene9.addChildren(ROUTE58)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../data/fors2.new.x3d")
