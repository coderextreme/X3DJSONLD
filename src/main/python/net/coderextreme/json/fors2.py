from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("creator").setContent("John W Carlson")
head1.addMeta(meta2)
meta3 = metaObject().setName("created").setContent("December 13 2015")
head1.addMeta(meta3)
meta4 = metaObject().setName("modified").setContent("April 18 2017")
head1.addMeta(meta4)
meta5 = metaObject().setName("title").setContent("fors2.x3d")
head1.addMeta(meta5)
meta6 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/fors2.x3d")
head1.addMeta(meta6)
meta7 = metaObject().setName("description").setContent("beginnings of a force directed graph in 3D")
head1.addMeta(meta7)
meta8 = metaObject().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta8)
X3D0.setHead(head1)
Scene9 = SceneObject()
ProtoDeclare10 = ProtoDeclareObject().setName("node")
ProtoInterface11 = ProtoInterfaceObject()
field12 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
ProtoInterface11.addField(field12)
ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = ProtoBodyObject()
Transform14 = TransformObject().setDEF("transform")
IS15 = ISObject()
connect16 = connectObject().setNodeField("translation").setProtoField("position")
IS15.addConnect(connect16)
Transform14.setIS(IS15)
Shape17 = ShapeObject()

Shape17.addComments(CommentsBlock("comment before Sphere"))

Shape17.addComments(CommentsBlock("comment after Sphere"))

Shape17.addComments(CommentsBlock("comment after Appearance"))
Sphere18 = SphereObject()
Shape17.setGeometry(Sphere18)
Appearance19 = AppearanceObject()

Appearance19.addComments(CommentsBlock("comment before Material"))

Appearance19.addComments(CommentsBlock("comment after Material"))
Material20 = MaterialObject().setDiffuseColor([1,0,0])
Appearance19.setMaterial(Material20)
Shape17.setAppearance(Appearance19)
Transform14.addChild(Shape17)
ProtoBody13.addChild(Transform14)
PositionInterpolator21 = PositionInterpolatorObject().setDEF("NodePosition").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
ProtoBody13.addChild(PositionInterpolator21)
Script22 = ScriptObject().setDEF("MoveBall")
field23 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0")
Script22.addField(field23)
field24 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script22.addField(field24)
field25 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script22.addField(field25)
field26 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script22.addField(field26)

Script22.setSourceCode("ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f(old, translation);\n"+
"						// Browser.println(translation);\n"+
"					}\n"+
"")
ProtoBody13.addChild(Script22)
TimeSensor27 = TimeSensorObject().setDEF("nodeClock").setCycleInterval(3).setLoop(True)
ProtoBody13.addChild(TimeSensor27)
ROUTE28 = ROUTEObject().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle")
ProtoBody13.addChild(ROUTE28)
ROUTE29 = ROUTEObject().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction")
ProtoBody13.addChild(ROUTE29)
ROUTE30 = ROUTEObject().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue")
ProtoBody13.addChild(ROUTE30)
ROUTE31 = ROUTEObject().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")
ProtoBody13.addChild(ROUTE31)
ProtoDeclare10.setProtoBody(ProtoBody13)
Scene9.addChild(ProtoDeclare10)
ProtoDeclare32 = ProtoDeclareObject().setName("cylinder")
ProtoInterface33 = ProtoInterfaceObject()
field34 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("positionA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface33.addField(field34)
field35 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("positionB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface33.addField(field35)
ProtoDeclare32.setProtoInterface(ProtoInterface33)
ProtoBody36 = ProtoBodyObject()
Shape37 = ShapeObject()
Extrusion38 = ExtrusionObject().setDEF("extrusion").setCreaseAngle(0.785).setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]).setSpine([0,-50,0,0,0,0,0,50,0])
Shape37.setGeometry(Extrusion38)
Appearance39 = AppearanceObject()
Material40 = MaterialObject().setDiffuseColor([0,1,0])
Appearance39.setMaterial(Material40)
Shape37.setAppearance(Appearance39)
ProtoBody36.addChild(Shape37)
Script41 = ScriptObject().setDEF("MoveCylinder")
field42 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("spine").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 0 0 0 50 0")
Script41.addField(field42)
field43 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script41.addField(field43)
field44 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script41.addField(field44)
IS45 = ISObject()
connect46 = connectObject().setNodeField("set_endA").setProtoField("positionA")
IS45.addConnect(connect46)
connect47 = connectObject().setNodeField("set_endB").setProtoField("positionB")
IS45.addConnect(connect47)
Script41.setIS(IS45)

Script41.setSourceCode("ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f(value, value);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f(value, spine[1]);\n"+
"		    }\n"+
"                }\n"+
"                \n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f(value, value);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f(spine[0], value);\n"+
"		    }\n"+
"                }\n"+
"                \n"+
"                function set_spine(value) {\n"+
"		    Browser.print('\\n'+'\"');\n"+
"                    spine = value;\n"+
"                }\n"+
"")
ProtoBody36.addChild(Script41)
ROUTE48 = ROUTEObject().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")
ProtoBody36.addChild(ROUTE48)
ProtoDeclare32.setProtoBody(ProtoBody36)
Scene9.addChild(ProtoDeclare32)
Transform49 = TransformObject().setScale([0.1,0.1,0.1])
ProtoInstance50 = ProtoInstanceObject().setName("node").setDEF("nodeA")
fieldValue51 = fieldValueObject().setName("position").setValue("-50 -50 -50")
ProtoInstance50.addFieldValue(fieldValue51)
Transform49.addChild(ProtoInstance50)
ProtoInstance52 = ProtoInstanceObject().setName("node").setDEF("nodeB")
fieldValue53 = fieldValueObject().setName("position").setValue("50 50 50")
ProtoInstance52.addFieldValue(fieldValue53)
Transform49.addChild(ProtoInstance52)
ProtoInstance54 = ProtoInstanceObject().setName("cylinder").setDEF("linkA")
fieldValue55 = fieldValueObject().setName("positionA").setValue("0 0 0")
ProtoInstance54.addFieldValue(fieldValue55)
fieldValue56 = fieldValueObject().setName("positionB").setValue("50 50 50")
ProtoInstance54.addFieldValue(fieldValue56)
Transform49.addChild(ProtoInstance54)
Scene9.addChild(Transform49)
ROUTE57 = ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("positionA")
Scene9.addChild(ROUTE57)
ROUTE58 = ROUTEObject().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("positionB")
Scene9.addChild(ROUTE58)
X3D0.setScene(Scene9)

X3D0.toFileX3D("../new/json/fors2.new.x3d")
