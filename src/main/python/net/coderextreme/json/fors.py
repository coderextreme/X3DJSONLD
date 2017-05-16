from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("creator").setContent("John W Carlson")
head1.addMeta(meta2)
meta3 = metaObject().setName("created").setContent("December 13 2015")
head1.addMeta(meta3)
meta4 = metaObject().setName("title").setContent("force.x3d")
head1.addMeta(meta4)
meta5 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/force.x3d")
head1.addMeta(meta5)
meta6 = metaObject().setName("description").setContent("beginnings of a force directed graph in 3D")
head1.addMeta(meta6)
meta7 = metaObject().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta7)
X3D0.setHead(head1)
Scene8 = SceneObject()
ProtoDeclare9 = ProtoDeclareObject().setName("node")
ProtoInterface10 = ProtoInterfaceObject()
field11 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
ProtoInterface10.addField(field11)
ProtoDeclare9.setProtoInterface(ProtoInterface10)
ProtoBody12 = ProtoBodyObject()
Transform13 = TransformObject().setDEF("transform")
IS14 = ISObject()
connect15 = connectObject().setNodeField("translation").setProtoField("position")
IS14.addConnect(connect15)
Transform13.setIS(IS14)
Shape16 = ShapeObject()

Shape16.addComments(CommentsBlock("comment before Sphere"))

Shape16.addComments(CommentsBlock("comment after Sphere"))

Shape16.addComments(CommentsBlock("comment after Appearance"))
Sphere17 = SphereObject()
Shape16.setGeometry(Sphere17)
Appearance18 = AppearanceObject()

Appearance18.addComments(CommentsBlock("comment before Material"))

Appearance18.addComments(CommentsBlock("comment after Material"))
Material19 = MaterialObject().setDiffuseColor([1,0,0])
Appearance18.setMaterial(Material19)
Shape16.setAppearance(Appearance18)
Transform13.addChild(Shape16)
ProtoBody12.addChild(Transform13)
PositionInterpolator20 = PositionInterpolatorObject().setDEF("NodePosition").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
ProtoBody12.addChild(PositionInterpolator20)
Script21 = ScriptObject().setDEF("MoveBall")
field22 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0")
Script21.addField(field22)
field23 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script21.addField(field23)
field24 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script21.addField(field24)
field25 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script21.addField(field25)

Script21.setSourceCode("ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f(old, translation);\n"+
"						// Browser.println(translation);\n"+
"					}\n"+
"")
ProtoBody12.addChild(Script21)
TimeSensor26 = TimeSensorObject().setDEF("nodeClock").setCycleInterval(3).setLoop(True)
ProtoBody12.addChild(TimeSensor26)
ROUTE27 = ROUTEObject().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle")
ProtoBody12.addChild(ROUTE27)
ROUTE28 = ROUTEObject().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction")
ProtoBody12.addChild(ROUTE28)
ROUTE29 = ROUTEObject().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue")
ProtoBody12.addChild(ROUTE29)
ROUTE30 = ROUTEObject().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")
ProtoBody12.addChild(ROUTE30)
ProtoDeclare9.setProtoBody(ProtoBody12)
Scene8.addChild(ProtoDeclare9)
ProtoDeclare31 = ProtoDeclareObject().setName("cylinder")
ProtoInterface32 = ProtoInterfaceObject()
field33 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("positionA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface32.addField(field33)
field34 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("positionB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface32.addField(field34)
ProtoDeclare31.setProtoInterface(ProtoInterface32)
ProtoBody35 = ProtoBodyObject()
Shape36 = ShapeObject()
Extrusion37 = ExtrusionObject().setDEF("extrusion").setCreaseAngle(0.785).setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]).setSpine([0,-50,0,0,0,0,0,50,0])
Shape36.setGeometry(Extrusion37)
Appearance38 = AppearanceObject()
Material39 = MaterialObject().setDiffuseColor([0,1,0])
Appearance38.setMaterial(Material39)
Shape36.setAppearance(Appearance38)
ProtoBody35.addChild(Shape36)
Script40 = ScriptObject().setDEF("MoveCylinder")
field41 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("spine").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 0 0 0 50 0")
Script40.addField(field41)
field42 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script40.addField(field42)
field43 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script40.addField(field43)
IS44 = ISObject()
connect45 = connectObject().setNodeField("set_endA").setProtoField("positionA")
IS44.addConnect(connect45)
connect46 = connectObject().setNodeField("set_endB").setProtoField("positionB")
IS44.addConnect(connect46)
Script40.setIS(IS44)

Script40.setSourceCode("ecmascript:\n"+
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
"                    spine = value;\n"+
"                }\n"+
"")
ProtoBody35.addChild(Script40)
ROUTE47 = ROUTEObject().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")
ProtoBody35.addChild(ROUTE47)
ProtoDeclare31.setProtoBody(ProtoBody35)
Scene8.addChild(ProtoDeclare31)
Transform48 = TransformObject().setScale([0.1,0.1,0.1])
ProtoInstance49 = ProtoInstanceObject().setName("node").setDEF("nodeA")
fieldValue50 = fieldValueObject().setName("position").setValue("-50 -50 -50")
ProtoInstance49.addFieldValue(fieldValue50)
Transform48.addChild(ProtoInstance49)
ProtoInstance51 = ProtoInstanceObject().setName("node").setDEF("nodeB")
fieldValue52 = fieldValueObject().setName("position").setValue("50 50 50")
ProtoInstance51.addFieldValue(fieldValue52)
Transform48.addChild(ProtoInstance51)
ProtoInstance53 = ProtoInstanceObject().setName("cylinder").setDEF("linkA")
fieldValue54 = fieldValueObject().setName("positionA").setValue("0 0 0")
ProtoInstance53.addFieldValue(fieldValue54)
fieldValue55 = fieldValueObject().setName("positionB").setValue("50 50 50")
ProtoInstance53.addFieldValue(fieldValue55)
Transform48.addChild(ProtoInstance53)
Scene8.addChild(Transform48)
ROUTE56 = ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("positionA")
Scene8.addChild(ROUTE56)
ROUTE57 = ROUTEObject().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("positionB")
Scene8.addChild(ROUTE57)
X3D0.setScene(Scene8)

X3D0.toFileX3D("../new/json/fors.new.x3d")
