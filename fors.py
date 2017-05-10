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
meta8 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta8)
meta9 = metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")
head1.addMeta(meta9)
meta10 = metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
head1.addMeta(meta10)
meta11 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta11)
meta12 = metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")
head1.addMeta(meta12)
X3D0.setHead(head1)
Scene13 = SceneObject()
ProtoDeclare14 = ProtoDeclareObject().setName("node")
ProtoInterface15 = ProtoInterfaceObject()
field16 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
ProtoInterface15.addField(field16)
ProtoDeclare14.setProtoInterface(ProtoInterface15)
ProtoBody17 = ProtoBodyObject()
Transform18 = TransformObject().setDEF("transform")
IS19 = ISObject()
connect20 = connectObject().setNodeField("translation").setProtoField("position")
IS19.addConnect(connect20)
Transform18.setIS(IS19)
Shape21 = ShapeObject()

Shape21.addComments(CommentsBlock("comment before Sphere"))

Shape21.addComments(CommentsBlock("comment after Sphere"))

Shape21.addComments(CommentsBlock("comment after Appearance"))
Sphere22 = SphereObject()
Shape21.setGeometry(Sphere22)
Appearance23 = AppearanceObject()

Appearance23.addComments(CommentsBlock("comment before Material"))

Appearance23.addComments(CommentsBlock("comment after Material"))
Material24 = MaterialObject().setDiffuseColor([1,0,0])
Appearance23.setMaterial(Material24)
Shape21.setAppearance(Appearance23)
Transform18.addChild(Shape21)
ProtoBody17.addChild(Transform18)
PositionInterpolator25 = PositionInterpolatorObject().setDEF("NodePosition").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
ProtoBody17.addChild(PositionInterpolator25)
Script26 = ScriptObject().setDEF("MoveBall")
field27 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0")
Script26.addField(field27)
field28 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script26.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script26.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script26.addField(field30)

Script26.setSourceCode("ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f(old, translation);\n"+
"						// Browser.println(translation);\n"+
"					}\n"+
"")
ProtoBody17.addChild(Script26)
TimeSensor31 = TimeSensorObject().setDEF("nodeClock").setCycleInterval(3).setLoop(True)
ProtoBody17.addChild(TimeSensor31)
ROUTE32 = ROUTEObject().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle")
ProtoBody17.addChild(ROUTE32)
ROUTE33 = ROUTEObject().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction")
ProtoBody17.addChild(ROUTE33)
ROUTE34 = ROUTEObject().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue")
ProtoBody17.addChild(ROUTE34)
ROUTE35 = ROUTEObject().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")
ProtoBody17.addChild(ROUTE35)
ProtoDeclare14.setProtoBody(ProtoBody17)
Scene13.addChild(ProtoDeclare14)
ProtoDeclare36 = ProtoDeclareObject().setName("cylinder")
ProtoInterface37 = ProtoInterfaceObject()
field38 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("positionA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface37.addField(field38)
field39 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("positionB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface37.addField(field39)
ProtoDeclare36.setProtoInterface(ProtoInterface37)
ProtoBody40 = ProtoBodyObject()
Shape41 = ShapeObject()
Extrusion42 = ExtrusionObject().setDEF("extrusion").setCreaseAngle(0.785).setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]).setSpine([0,-50,0,0,0,0,0,50,0])
Shape41.setGeometry(Extrusion42)
Appearance43 = AppearanceObject()
Material44 = MaterialObject().setDiffuseColor([0,1,0])
Appearance43.setMaterial(Material44)
Shape41.setAppearance(Appearance43)
ProtoBody40.addChild(Shape41)
Script45 = ScriptObject().setDEF("MoveCylinder")
field46 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("spine").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 0 0 0 50 0")
Script45.addField(field46)
field47 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script45.addField(field47)
field48 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script45.addField(field48)
IS49 = ISObject()
connect50 = connectObject().setNodeField("set_endA").setProtoField("positionA")
IS49.addConnect(connect50)
connect51 = connectObject().setNodeField("set_endB").setProtoField("positionB")
IS49.addConnect(connect51)
Script45.setIS(IS49)

Script45.setSourceCode("ecmascript:\n"+
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
ProtoBody40.addChild(Script45)
ROUTE52 = ROUTEObject().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")
ProtoBody40.addChild(ROUTE52)
ProtoDeclare36.setProtoBody(ProtoBody40)
Scene13.addChild(ProtoDeclare36)
Transform53 = TransformObject().setScale([0.1,0.1,0.1])
ProtoInstance54 = ProtoInstanceObject().setName("node").setDEF("nodeA")
fieldValue55 = fieldValueObject().setName("position").setValue("-50 -50 -50")
ProtoInstance54.addFieldValue(fieldValue55)
Transform53.addChild(ProtoInstance54)
ProtoInstance56 = ProtoInstanceObject().setName("node").setDEF("nodeB")
fieldValue57 = fieldValueObject().setName("position").setValue("50 50 50")
ProtoInstance56.addFieldValue(fieldValue57)
Transform53.addChild(ProtoInstance56)
ProtoInstance58 = ProtoInstanceObject().setName("cylinder").setDEF("linkA")
fieldValue59 = fieldValueObject().setName("positionA").setValue("0 0 0")
ProtoInstance58.addFieldValue(fieldValue59)
fieldValue60 = fieldValueObject().setName("positionB").setValue("50 50 50")
ProtoInstance58.addFieldValue(fieldValue60)
Transform53.addChild(ProtoInstance58)
Scene13.addChild(Transform53)
ROUTE61 = ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("positionA")
Scene13.addChild(ROUTE61)
ROUTE62 = ROUTEObject().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("positionB")
Scene13.addChild(ROUTE62)
X3D0.setScene(Scene13)

X3D0.toFileX3D("fors.new.x3d")
