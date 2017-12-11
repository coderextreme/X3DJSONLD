# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("creator")
meta2.setContent("John W Carlson")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("created")
meta3.setContent("December 13 2015")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("modified")
meta4.setContent("April 18 2017")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("title")
meta5.setContent("fors2.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/fors2.x3d")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("description")
meta7.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("generator")
meta8.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta8)
X3D0.setHead(head1)
Scene9 = SceneObject()

ProtoDeclare10 = ProtoDeclareObject()
ProtoDeclare10.setName("node")

ProtoInterface11 = ProtoInterfaceObject()

field12 = fieldObject()
field12.setType(fieldObject.TYPE_SFVEC3F)
field12.setName("position")
field12.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)
ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = ProtoBodyObject()

Transform14 = TransformObject()
Transform14.setDEF("transform")

IS15 = ISObject()

connect16 = connectObject()
connect16.setNodeField("translation")
connect16.setProtoField("position")

IS15.addConnect(connect16)
Transform14.setIS(IS15)
Shape17 = ShapeObject()


Shape17.addComments(CommentsBlock("""comment before Sphere"""))

Shape17.addComments(CommentsBlock("""comment after Sphere"""))

Shape17.addComments(CommentsBlock("""comment after Appearance"""))
Sphere18 = SphereObject()

Shape17.setGeometry(Sphere18)
Appearance19 = AppearanceObject()


Appearance19.addComments(CommentsBlock("""comment before Material"""))

Appearance19.addComments(CommentsBlock("""comment after Material"""))
Material20 = MaterialObject()
Material20.setDiffuseColor([1,0,0])

Appearance19.setMaterial(Material20)
Shape17.setAppearance(Appearance19)
Transform14.addChild(Shape17)
ProtoBody13.addChild(Transform14)
PositionInterpolator21 = PositionInterpolatorObject()
PositionInterpolator21.setDEF("NodePosition")
PositionInterpolator21.setKey([0,1])
PositionInterpolator21.setKeyValue([0,0,0,0,5,0])

ProtoBody13.addChild(PositionInterpolator21)
Script22 = ScriptObject()
Script22.setDEF("MoveBall")

field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFVEC3F)
field23.setName("translation")
field23.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field23.setValue("50 50 0")

Script22.addField(field23)
field24 = fieldObject()
field24.setType(fieldObject.TYPE_SFVEC3F)
field24.setName("old")
field24.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field24.setValue("0 0 0")

Script22.addField(field24)
field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFTIME)
field25.setName("set_cycle")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script22.addField(field25)
field26 = fieldObject()
field26.setType(fieldObject.TYPE_MFVEC3F)
field26.setName("keyValue")
field26.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script22.addField(field26)

Script22.setSourceCode("ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}\n"+
"")
ProtoBody13.addChild(Script22)
TimeSensor27 = TimeSensorObject()
TimeSensor27.setDEF("nodeClock")
TimeSensor27.setCycleInterval(3)
TimeSensor27.setLoop(True)

ProtoBody13.addChild(TimeSensor27)
ROUTE28 = ROUTEObject()
ROUTE28.setFromNode("nodeClock")
ROUTE28.setFromField("cycleTime")
ROUTE28.setToNode("MoveBall")
ROUTE28.setToField("set_cycle")

ProtoBody13.addChild(ROUTE28)
ROUTE29 = ROUTEObject()
ROUTE29.setFromNode("nodeClock")
ROUTE29.setFromField("fraction_changed")
ROUTE29.setToNode("NodePosition")
ROUTE29.setToField("set_fraction")

ProtoBody13.addChild(ROUTE29)
ROUTE30 = ROUTEObject()
ROUTE30.setFromNode("MoveBall")
ROUTE30.setFromField("keyValue")
ROUTE30.setToNode("NodePosition")
ROUTE30.setToField("keyValue")

ProtoBody13.addChild(ROUTE30)
ROUTE31 = ROUTEObject()
ROUTE31.setFromNode("NodePosition")
ROUTE31.setFromField("value_changed")
ROUTE31.setToNode("transform")
ROUTE31.setToField("set_translation")

ProtoBody13.addChild(ROUTE31)
ProtoDeclare10.setProtoBody(ProtoBody13)
Scene9.addChild(ProtoDeclare10)
ProtoDeclare32 = ProtoDeclareObject()
ProtoDeclare32.setName("cylinder")

ProtoInterface33 = ProtoInterfaceObject()

field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFVEC3F)
field34.setName("positionA")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ProtoInterface33.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFVEC3F)
field35.setName("positionB")
field35.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ProtoInterface33.addField(field35)
ProtoDeclare32.setProtoInterface(ProtoInterface33)
ProtoBody36 = ProtoBodyObject()

Shape37 = ShapeObject()

Extrusion38 = ExtrusionObject()
Extrusion38.setDEF("extrusion")
Extrusion38.setCreaseAngle(0.785)
Extrusion38.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion38.setSpine([0,-50,0,0,0,0,0,50,0])

Shape37.setGeometry(Extrusion38)
Appearance39 = AppearanceObject()

Material40 = MaterialObject()
Material40.setDiffuseColor([0,1,0])

Appearance39.setMaterial(Material40)
Shape37.setAppearance(Appearance39)
ProtoBody36.addChild(Shape37)
Script41 = ScriptObject()
Script41.setDEF("MoveCylinder")

field42 = fieldObject()
field42.setType(fieldObject.TYPE_MFVEC3F)
field42.setName("spine")
field42.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field42.setValue("0 -50 0 0 0 0 0 50 0")

Script41.addField(field42)
field43 = fieldObject()
field43.setType(fieldObject.TYPE_SFVEC3F)
field43.setName("set_endA")
field43.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script41.addField(field43)
field44 = fieldObject()
field44.setType(fieldObject.TYPE_SFVEC3F)
field44.setName("set_endB")
field44.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script41.addField(field44)
IS45 = ISObject()

connect46 = connectObject()
connect46.setNodeField("set_endA")
connect46.setProtoField("positionA")

IS45.addConnect(connect46)
connect47 = connectObject()
connect47.setNodeField("set_endB")
connect47.setProtoField("positionB")

IS45.addConnect(connect47)
Script41.setIS(IS45)

Script41.setSourceCode("ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"                \n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"                \n"+
"                function set_spine(value) {\n"+
"		    Browser.print('\\n'+'\"');\n"+
"                    spine = value;\n"+
"                }\n"+
"")
ProtoBody36.addChild(Script41)
ROUTE48 = ROUTEObject()
ROUTE48.setFromNode("MoveCylinder")
ROUTE48.setFromField("spine")
ROUTE48.setToNode("extrusion")
ROUTE48.setToField("set_spine")

ProtoBody36.addChild(ROUTE48)
ProtoDeclare32.setProtoBody(ProtoBody36)
Scene9.addChild(ProtoDeclare32)
Transform49 = TransformObject()
Transform49.setScale([0.1,0.1,0.1])

ProtoInstance50 = ProtoInstanceObject()
ProtoInstance50.setName("node")
ProtoInstance50.setDEF("nodeA")

fieldValue51 = fieldValueObject()
fieldValue51.setName("position")
fieldValue51.setValue("-50 -50 -50")

ProtoInstance50.addFieldValue(fieldValue51)
Transform49.addChild(ProtoInstance50)
ProtoInstance52 = ProtoInstanceObject()
ProtoInstance52.setName("node")
ProtoInstance52.setDEF("nodeB")

fieldValue53 = fieldValueObject()
fieldValue53.setName("position")
fieldValue53.setValue("50 50 50")

ProtoInstance52.addFieldValue(fieldValue53)
Transform49.addChild(ProtoInstance52)
ProtoInstance54 = ProtoInstanceObject()
ProtoInstance54.setName("cylinder")
ProtoInstance54.setDEF("linkA")

fieldValue55 = fieldValueObject()
fieldValue55.setName("positionA")
fieldValue55.setValue("0 0 0")

ProtoInstance54.addFieldValue(fieldValue55)
fieldValue56 = fieldValueObject()
fieldValue56.setName("positionB")
fieldValue56.setValue("50 50 50")

ProtoInstance54.addFieldValue(fieldValue56)
Transform49.addChild(ProtoInstance54)
Scene9.addChild(Transform49)
ROUTE57 = ROUTEObject()
ROUTE57.setFromNode("nodeA")
ROUTE57.setFromField("position")
ROUTE57.setToNode("linkA")
ROUTE57.setToField("positionA")

Scene9.addChild(ROUTE57)
ROUTE58 = ROUTEObject()
ROUTE58.setFromNode("nodeB")
ROUTE58.setFromField("position")
ROUTE58.setToNode("linkA")
ROUTE58.setToField("positionB")

Scene9.addChild(ROUTE58)
X3D0.setScene(Scene9)

X3D0.toFileX3D("../data/fors2.new.x3d")
