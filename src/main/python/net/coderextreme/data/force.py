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
meta5 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/force.x3d")
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
Group13 = GroupObject()
Transform14 = TransformObject().setDEF("transform")
IS15 = ISObject()
connect16 = connectObject().setNodeField("translation").setProtoField("position")
IS15.addConnect(connect16)
Transform14.setIS(IS15)
Shape17 = ShapeObject()
Sphere18 = SphereObject()
Shape17.setGeometry(Sphere18)
Appearance19 = AppearanceObject()
Material20 = MaterialObject().setDiffuseColor([1,0,0])
Appearance19.setMaterial(Material20)
Shape17.setAppearance(Appearance19)
Transform14.addChild(Shape17)
Transform21 = TransformObject().setTranslation([1,0,0])
Shape22 = ShapeObject()
Text23 = TextObject().setString(["Node"])
FontStyle24 = FontStyleObject().setJustify(["MIDDLE","MIDDLE"]).setSize(5)
Text23.setFontStyle(FontStyle24)
Shape22.setGeometry(Text23)
Appearance25 = AppearanceObject()
Material26 = MaterialObject().setDiffuseColor([0,0,1])
Appearance25.setMaterial(Material26)
Shape22.setAppearance(Appearance25)
Transform21.addChild(Shape22)
Transform14.addChild(Transform21)
Group13.addChild(Transform14)
PositionInterpolator27 = PositionInterpolatorObject().setDEF("NodePosition").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
Group13.addChild(PositionInterpolator27)
Script28 = ScriptObject().setDEF("MoveBall")
field29 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0")
Script28.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script28.addField(field30)
field31 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script28.addField(field31)
field32 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script28.addField(field32)

Script28.setSourceCode("ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}\n"+
"")
Group13.addChild(Script28)
TimeSensor33 = TimeSensorObject().setDEF("nodeClock").setCycleInterval(3).setLoop(True)
Group13.addChild(TimeSensor33)
ROUTE34 = ROUTEObject().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle")
Group13.addChild(ROUTE34)
ROUTE35 = ROUTEObject().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction")
Group13.addChild(ROUTE35)
ROUTE36 = ROUTEObject().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue")
Group13.addChild(ROUTE36)
ROUTE37 = ROUTEObject().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")
Group13.addChild(ROUTE37)
ProtoBody12.addChild(Group13)
ProtoDeclare9.setProtoBody(ProtoBody12)
Scene8.addChild(ProtoDeclare9)
ProtoDeclare38 = ProtoDeclareObject().setName("cylinder")
ProtoInterface39 = ProtoInterfaceObject()
field40 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_positionA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface39.addField(field40)
field41 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_positionB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface39.addField(field41)
ProtoDeclare38.setProtoInterface(ProtoInterface39)
ProtoBody42 = ProtoBodyObject()
Group43 = GroupObject()
Shape44 = ShapeObject()
Extrusion45 = ExtrusionObject().setDEF("extrusion").setCreaseAngle(0.785).setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]).setSpine([0,-50,0,0,50,0])
Shape44.setGeometry(Extrusion45)
Appearance46 = AppearanceObject()
Material47 = MaterialObject().setDiffuseColor([0,1,0])
Appearance46.setMaterial(Material47)
Shape44.setAppearance(Appearance46)
Group43.addChild(Shape44)
Script48 = ScriptObject().setDEF("MoveCylinder")
field49 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("spine").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 50 0")
Script48.addField(field49)
field50 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script48.addField(field50)
field51 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script48.addField(field51)
IS52 = ISObject()
connect53 = connectObject().setNodeField("set_endA").setProtoField("set_positionA")
IS52.addConnect(connect53)
connect54 = connectObject().setNodeField("set_endB").setProtoField("set_positionB")
IS52.addConnect(connect54)
Script48.setIS(IS52)

Script48.setSourceCode("ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"                \n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"                \n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }\n"+
"")
Group43.addChild(Script48)
ROUTE55 = ROUTEObject().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")
Group43.addChild(ROUTE55)
ProtoBody42.addChild(Group43)
ProtoDeclare38.setProtoBody(ProtoBody42)
Scene8.addChild(ProtoDeclare38)
Transform56 = TransformObject().setDEF("HoldsContent").setScale([0.1,0.1,0.1])
PlaneSensor57 = PlaneSensorObject().setDEF("clickGenerator").setMinPosition([-50,-50]).setMaxPosition([50,50]).setDescription("click on background to add nodes, click on nodes to add links")
Transform56.addChild(PlaneSensor57)
ProtoInstance58 = ProtoInstanceObject().setName("node").setDEF("nodeA")
fieldValue59 = fieldValueObject().setName("position").setValue("0 0 0")
ProtoInstance58.addFieldValue(fieldValue59)
Transform56.addChild(ProtoInstance58)
ProtoInstance60 = ProtoInstanceObject().setName("node").setDEF("nodeB")
fieldValue61 = fieldValueObject().setName("position").setValue("50 50 50")
ProtoInstance60.addFieldValue(fieldValue61)
Transform56.addChild(ProtoInstance60)
ProtoInstance62 = ProtoInstanceObject().setName("node").setDEF("nodeC")
fieldValue63 = fieldValueObject().setName("position").setValue("-50 -50 -50")
ProtoInstance62.addFieldValue(fieldValue63)
Transform56.addChild(ProtoInstance62)
ProtoInstance64 = ProtoInstanceObject().setName("node").setDEF("nodeD")
fieldValue65 = fieldValueObject().setName("position").setValue("50 50 -50")
ProtoInstance64.addFieldValue(fieldValue65)
Transform56.addChild(ProtoInstance64)
ProtoInstance66 = ProtoInstanceObject().setName("cylinder").setDEF("linkA")
fieldValue67 = fieldValueObject().setName("set_positionA").setValue("0 0 0")
ProtoInstance66.addFieldValue(fieldValue67)
fieldValue68 = fieldValueObject().setName("set_positionB").setValue("50 50 50")
ProtoInstance66.addFieldValue(fieldValue68)
Transform56.addChild(ProtoInstance66)
ProtoInstance69 = ProtoInstanceObject().setName("cylinder").setDEF("linkB")
fieldValue70 = fieldValueObject().setName("set_positionA").setValue("0 0 0")
ProtoInstance69.addFieldValue(fieldValue70)
fieldValue71 = fieldValueObject().setName("set_positionB").setValue("-50 -50 -50")
ProtoInstance69.addFieldValue(fieldValue71)
Transform56.addChild(ProtoInstance69)
ProtoInstance72 = ProtoInstanceObject().setName("cylinder").setDEF("linkC")
fieldValue73 = fieldValueObject().setName("set_positionA").setValue("50 50 50")
ProtoInstance72.addFieldValue(fieldValue73)
fieldValue74 = fieldValueObject().setName("set_positionB").setValue("50 50 -50")
ProtoInstance72.addFieldValue(fieldValue74)
Transform56.addChild(ProtoInstance72)
Scene8.addChild(Transform56)
Script75 = ScriptObject().setDEF("clickHandler")
field76 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("counter").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
Script75.addField(field76)
field77 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("node_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script75.addField(field77)
field78 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("add_node").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("false")
Script75.addField(field78)

Script75.addComments(CommentsBlock("<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>"))

Script75.setSourceCode("ecmascript:\n"+
"	function add_node(value) {\n"+
"                // Browser.print('hey ', counter);\n"+
"                counter = counter++;\n"+
"		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),\n"+
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
Scene8.addChild(Script75)
ROUTE79 = ROUTEObject().setFromNode("clickGenerator").setFromField("isActive").setToNode("clickHandler").setToField("add_node")
Scene8.addChild(ROUTE79)
ROUTE80 = ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("set_positionA")
Scene8.addChild(ROUTE80)
ROUTE81 = ROUTEObject().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("set_positionB")
Scene8.addChild(ROUTE81)
ROUTE82 = ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkB").setToField("set_positionA")
Scene8.addChild(ROUTE82)
ROUTE83 = ROUTEObject().setFromNode("nodeC").setFromField("position").setToNode("linkB").setToField("set_positionB")
Scene8.addChild(ROUTE83)
ROUTE84 = ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkC").setToField("set_positionA")
Scene8.addChild(ROUTE84)
ROUTE85 = ROUTEObject().setFromNode("nodeD").setFromField("position").setToNode("linkC").setToField("set_positionB")
Scene8.addChild(ROUTE85)
X3D0.setScene(Scene8)

X3D0.toFileX3D("../data/force.new.x3d")
