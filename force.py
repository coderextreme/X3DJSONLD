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
Sphere22 = SphereObject()
Shape21.setGeometry(Sphere22)
Appearance23 = AppearanceObject()
Material24 = MaterialObject().setDiffuseColor([1,0,0])
Appearance23.setMaterial(Material24)
Shape21.setAppearance(Appearance23)
Transform18.addChild(Shape21)
Transform25 = TransformObject().setTranslation([1,0,0])
Shape26 = ShapeObject()
Text27 = TextObject().setString(["Node"])
FontStyle28 = FontStyleObject().setJustify(["MIDDLE","MIDDLE"]).setSize(5)
Text27.setFontStyle(FontStyle28)
Shape26.setGeometry(Text27)
Appearance29 = AppearanceObject()
Material30 = MaterialObject().setDiffuseColor([0,0,1])
Appearance29.setMaterial(Material30)
Shape26.setAppearance(Appearance29)
Transform25.addChild(Shape26)
Transform18.addChild(Transform25)
ProtoBody17.addChild(Transform18)
PositionInterpolator31 = PositionInterpolatorObject().setDEF("NodePosition").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
ProtoBody17.addChild(PositionInterpolator31)
Script32 = ScriptObject().setDEF("MoveBall")
field33 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0")
Script32.addField(field33)
field34 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script32.addField(field34)
field35 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script32.addField(field35)
field36 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script32.addField(field36)

Script32.setSourceCode("ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f(old, translation);\n"+
"						// Browser.println(translation);\n"+
"					}\n"+
"")
ProtoBody17.addChild(Script32)
TimeSensor37 = TimeSensorObject().setDEF("nodeClock").setCycleInterval(3).setLoop(True)
ProtoBody17.addChild(TimeSensor37)
ROUTE38 = ROUTEObject().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle")
ProtoBody17.addChild(ROUTE38)
ROUTE39 = ROUTEObject().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction")
ProtoBody17.addChild(ROUTE39)
ROUTE40 = ROUTEObject().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue")
ProtoBody17.addChild(ROUTE40)
ROUTE41 = ROUTEObject().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")
ProtoBody17.addChild(ROUTE41)
ProtoDeclare14.setProtoBody(ProtoBody17)
Scene13.addChild(ProtoDeclare14)
ProtoDeclare42 = ProtoDeclareObject().setName("cylinder")
ProtoInterface43 = ProtoInterfaceObject()
field44 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_positionA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface43.addField(field44)
field45 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_positionB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface43.addField(field45)
ProtoDeclare42.setProtoInterface(ProtoInterface43)
ProtoBody46 = ProtoBodyObject()
Shape47 = ShapeObject()
Extrusion48 = ExtrusionObject().setDEF("extrusion").setCreaseAngle(0.785).setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]).setSpine([0,-50,0,0,50,0])
Shape47.setGeometry(Extrusion48)
Appearance49 = AppearanceObject()
Material50 = MaterialObject().setDiffuseColor([0,1,0])
Appearance49.setMaterial(Material50)
Shape47.setAppearance(Appearance49)
ProtoBody46.addChild(Shape47)
Script51 = ScriptObject().setDEF("MoveCylinder")
field52 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("spine").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 50 0")
Script51.addField(field52)
field53 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script51.addField(field53)
field54 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script51.addField(field54)
IS55 = ISObject()
connect56 = connectObject().setNodeField("set_endA").setProtoField("set_positionA")
IS55.addConnect(connect56)
connect57 = connectObject().setNodeField("set_endB").setProtoField("set_positionB")
IS55.addConnect(connect57)
Script51.setIS(IS55)

Script51.setSourceCode("ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f(value, value);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f(value, spine[1]);\n"+
"		    }\n"+
"                }\n"+
"                \n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
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
ProtoBody46.addChild(Script51)
ROUTE58 = ROUTEObject().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")
ProtoBody46.addChild(ROUTE58)
ProtoDeclare42.setProtoBody(ProtoBody46)
Scene13.addChild(ProtoDeclare42)
Transform59 = TransformObject().setDEF("HoldsContent").setScale([0.1,0.1,0.1])
PlaneSensor60 = PlaneSensorObject().setDEF("clickGenerator").setMinPosition([-50,-50]).setMaxPosition([50,50]).setDescription("click on background to add nodes, click on nodes to add links")
Transform59.addChild(PlaneSensor60)
ProtoInstance61 = ProtoInstanceObject().setName("node").setDEF("nodeA")
fieldValue62 = fieldValueObject().setName("position").setValue("0 0 0")
ProtoInstance61.addFieldValue(fieldValue62)
Transform59.addChild(ProtoInstance61)
ProtoInstance63 = ProtoInstanceObject().setName("node").setDEF("nodeB")
fieldValue64 = fieldValueObject().setName("position").setValue("50 50 50")
ProtoInstance63.addFieldValue(fieldValue64)
Transform59.addChild(ProtoInstance63)
ProtoInstance65 = ProtoInstanceObject().setName("node").setDEF("nodeC")
fieldValue66 = fieldValueObject().setName("position").setValue("-50 -50 -50")
ProtoInstance65.addFieldValue(fieldValue66)
Transform59.addChild(ProtoInstance65)
ProtoInstance67 = ProtoInstanceObject().setName("node").setDEF("nodeD")
fieldValue68 = fieldValueObject().setName("position").setValue("50 50 -50")
ProtoInstance67.addFieldValue(fieldValue68)
Transform59.addChild(ProtoInstance67)
ProtoInstance69 = ProtoInstanceObject().setName("cylinder").setDEF("linkA")
fieldValue70 = fieldValueObject().setName("set_positionA").setValue("0 0 0")
ProtoInstance69.addFieldValue(fieldValue70)
fieldValue71 = fieldValueObject().setName("set_positionB").setValue("50 50 50")
ProtoInstance69.addFieldValue(fieldValue71)
Transform59.addChild(ProtoInstance69)
ProtoInstance72 = ProtoInstanceObject().setName("cylinder").setDEF("linkB")
fieldValue73 = fieldValueObject().setName("set_positionA").setValue("0 0 0")
ProtoInstance72.addFieldValue(fieldValue73)
fieldValue74 = fieldValueObject().setName("set_positionB").setValue("-50 -50 -50")
ProtoInstance72.addFieldValue(fieldValue74)
Transform59.addChild(ProtoInstance72)
ProtoInstance75 = ProtoInstanceObject().setName("cylinder").setDEF("linkC")
fieldValue76 = fieldValueObject().setName("set_positionA").setValue("50 50 50")
ProtoInstance75.addFieldValue(fieldValue76)
fieldValue77 = fieldValueObject().setName("set_positionB").setValue("50 50 -50")
ProtoInstance75.addFieldValue(fieldValue77)
Transform59.addChild(ProtoInstance75)
Scene13.addChild(Transform59)
Script78 = ScriptObject().setDEF("clickHandler")
field79 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("counter").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
Script78.addField(field79)
field80 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("node_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script78.addField(field80)
field81 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("add_node").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("false")
Script78.addField(field81)
field82 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("ModifiableNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Transform83 = TransformObject().setUSE("HoldsContent")
field82.addChild(Transform83)
Script78.addField(field82)

Script78.setSourceCode("ecmascript:\n"+
"	function add_node(value) {\n"+
"                // Browser.print('hey ', counter);\n"+
"                counter = counter++;\n"+
"		Browser.appendTo(Browser.getDocument().getElementById(\"MN\"),\n"+
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
"                \n"+
"        }\n"+
"")
Scene13.addChild(Script78)
ROUTE84 = ROUTEObject().setFromNode("clickGenerator").setFromField("isActive").setToNode("clickHandler").setToField("add_node")
Scene13.addChild(ROUTE84)
ROUTE85 = ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("set_positionA")
Scene13.addChild(ROUTE85)
ROUTE86 = ROUTEObject().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("set_positionB")
Scene13.addChild(ROUTE86)
ROUTE87 = ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkB").setToField("set_positionA")
Scene13.addChild(ROUTE87)
ROUTE88 = ROUTEObject().setFromNode("nodeC").setFromField("position").setToNode("linkB").setToField("set_positionB")
Scene13.addChild(ROUTE88)
ROUTE89 = ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkC").setToField("set_positionA")
Scene13.addChild(ROUTE89)
ROUTE90 = ROUTEObject().setFromNode("nodeD").setFromField("position").setToNode("linkC").setToField("set_positionB")
Scene13.addChild(ROUTE90)
X3D0.setScene(Scene13)

X3D0.toFileX3D("force.new.x3d")
