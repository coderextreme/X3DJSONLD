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
meta9 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta9)
meta10 = metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")
head1.addMeta(meta10)
meta11 = metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
head1.addMeta(meta11)
meta12 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta12)
meta13 = metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")
head1.addMeta(meta13)
X3D0.setHead(head1)
Scene14 = SceneObject()
ProtoDeclare15 = ProtoDeclareObject().setName("node")
ProtoInterface16 = ProtoInterfaceObject()
field17 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
ProtoInterface16.addField(field17)
ProtoDeclare15.setProtoInterface(ProtoInterface16)
ProtoBody18 = ProtoBodyObject()
Transform19 = TransformObject().setDEF("transform")
IS20 = ISObject()
connect21 = connectObject().setNodeField("translation").setProtoField("position")
IS20.addConnect(connect21)
Transform19.setIS(IS20)
Shape22 = ShapeObject()

Shape22.addComments(CommentsBlock("comment before Sphere"))

Shape22.addComments(CommentsBlock("comment after Sphere"))

Shape22.addComments(CommentsBlock("comment after Appearance"))
Sphere23 = SphereObject()
Shape22.setGeometry(Sphere23)
Appearance24 = AppearanceObject()

Appearance24.addComments(CommentsBlock("comment before Material"))

Appearance24.addComments(CommentsBlock("comment after Material"))
Material25 = MaterialObject().setDiffuseColor([1,0,0])
Appearance24.setMaterial(Material25)
Shape22.setAppearance(Appearance24)
Transform19.addChild(Shape22)
ProtoBody18.addChild(Transform19)
PositionInterpolator26 = PositionInterpolatorObject().setDEF("NodePosition").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
ProtoBody18.addChild(PositionInterpolator26)
Script27 = ScriptObject().setDEF("MoveBall")
field28 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0")
Script27.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script27.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script27.addField(field30)
field31 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script27.addField(field31)

Script27.setSourceCode("ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f(old, translation);\n"+
"						// Browser.println(translation);\n"+
"					}\n"+
"")
ProtoBody18.addChild(Script27)
TimeSensor32 = TimeSensorObject().setDEF("nodeClock").setCycleInterval(3).setLoop(True)
ProtoBody18.addChild(TimeSensor32)
ROUTE33 = ROUTEObject().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle")
ProtoBody18.addChild(ROUTE33)
ROUTE34 = ROUTEObject().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction")
ProtoBody18.addChild(ROUTE34)
ROUTE35 = ROUTEObject().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue")
ProtoBody18.addChild(ROUTE35)
ROUTE36 = ROUTEObject().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")
ProtoBody18.addChild(ROUTE36)
ProtoDeclare15.setProtoBody(ProtoBody18)
Scene14.addChild(ProtoDeclare15)
ProtoDeclare37 = ProtoDeclareObject().setName("cylinder")
ProtoInterface38 = ProtoInterfaceObject()
field39 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("positionA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface38.addField(field39)
field40 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("positionB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface38.addField(field40)
ProtoDeclare37.setProtoInterface(ProtoInterface38)
ProtoBody41 = ProtoBodyObject()
Shape42 = ShapeObject()
Extrusion43 = ExtrusionObject().setDEF("extrusion").setCreaseAngle(0.785).setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]).setSpine([0,-50,0,0,0,0,0,50,0])
Shape42.setGeometry(Extrusion43)
Appearance44 = AppearanceObject()
Material45 = MaterialObject().setDiffuseColor([0,1,0])
Appearance44.setMaterial(Material45)
Shape42.setAppearance(Appearance44)
ProtoBody41.addChild(Shape42)
Script46 = ScriptObject().setDEF("MoveCylinder")
field47 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("spine").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 0 0 0 50 0")
Script46.addField(field47)
field48 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script46.addField(field48)
field49 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script46.addField(field49)
IS50 = ISObject()
connect51 = connectObject().setNodeField("set_endA").setProtoField("positionA")
IS50.addConnect(connect51)
connect52 = connectObject().setNodeField("set_endB").setProtoField("positionB")
IS50.addConnect(connect52)
Script46.setIS(IS50)

Script46.setSourceCode("ecmascript:\n"+
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
ProtoBody41.addChild(Script46)
ROUTE53 = ROUTEObject().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")
ProtoBody41.addChild(ROUTE53)
ProtoDeclare37.setProtoBody(ProtoBody41)
Scene14.addChild(ProtoDeclare37)
Transform54 = TransformObject().setScale([0.1,0.1,0.1])
ProtoInstance55 = ProtoInstanceObject().setName("node").setDEF("nodeA")
fieldValue56 = fieldValueObject().setName("position").setValue("-50 -50 -50")
ProtoInstance55.addFieldValue(fieldValue56)
Transform54.addChild(ProtoInstance55)
ProtoInstance57 = ProtoInstanceObject().setName("node").setDEF("nodeB")
fieldValue58 = fieldValueObject().setName("position").setValue("50 50 50")
ProtoInstance57.addFieldValue(fieldValue58)
Transform54.addChild(ProtoInstance57)
ProtoInstance59 = ProtoInstanceObject().setName("cylinder").setDEF("linkA")
fieldValue60 = fieldValueObject().setName("positionA").setValue("0 0 0")
ProtoInstance59.addFieldValue(fieldValue60)
fieldValue61 = fieldValueObject().setName("positionB").setValue("50 50 50")
ProtoInstance59.addFieldValue(fieldValue61)
Transform54.addChild(ProtoInstance59)
Scene14.addChild(Transform54)
ROUTE62 = ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("positionA")
Scene14.addChild(ROUTE62)
ROUTE63 = ROUTEObject().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("positionB")
Scene14.addChild(ROUTE63)
X3D0.setScene(Scene14)

X3D0.toFileX3D("fors2.new.x3d")
