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
meta4.setName("title")
meta4.setContent("force.x3d")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/force.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("generator")
meta7.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)
X3D0.setHead(head1)
Scene8 = SceneObject()

ProtoDeclare9 = ProtoDeclareObject()
ProtoDeclare9.setName("node")

ProtoInterface10 = ProtoInterfaceObject()

field11 = fieldObject()
field11.setType(fieldObject.TYPE_SFVEC3F)
field11.setName("position")
field11.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field11.setValue("0 0 0")

ProtoInterface10.addField(field11)
ProtoDeclare9.setProtoInterface(ProtoInterface10)
ProtoBody12 = ProtoBodyObject()

Group13 = GroupObject()

Transform14 = TransformObject()
Transform14.setDEF("transform")

IS15 = ISObject()

connect16 = connectObject()
connect16.setNodeField("translation")
connect16.setProtoField("position")

IS15.addConnect(connect16)
Transform14.setIS(IS15)
Shape17 = ShapeObject()

Sphere18 = SphereObject()

Shape17.setGeometry(Sphere18)
Appearance19 = AppearanceObject()

Material20 = MaterialObject()
Material20.setDiffuseColor([1,0,0])

Appearance19.setMaterial(Material20)
Shape17.setAppearance(Appearance19)
Transform14.addChild(Shape17)
Transform21 = TransformObject()
Transform21.setTranslation([1,0,0])

Shape22 = ShapeObject()

Text23 = TextObject()
Text23.setString(["Node"])

FontStyle24 = FontStyleObject()
FontStyle24.setJustify(["MIDDLE","MIDDLE"])
FontStyle24.setSize(5)

Text23.setFontStyle(FontStyle24)
Shape22.setGeometry(Text23)
Appearance25 = AppearanceObject()

Material26 = MaterialObject()
Material26.setDiffuseColor([0,0,1])

Appearance25.setMaterial(Material26)
Shape22.setAppearance(Appearance25)
Transform21.addChild(Shape22)
Transform14.addChild(Transform21)
Group13.addChild(Transform14)
PositionInterpolator27 = PositionInterpolatorObject()
PositionInterpolator27.setDEF("NodePosition")
PositionInterpolator27.setKey([0,1])
PositionInterpolator27.setKeyValue([0,0,0,0,5,0])

Group13.addChild(PositionInterpolator27)
Script28 = ScriptObject()
Script28.setDEF("MoveBall")

field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFVEC3F)
field29.setName("translation")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setValue("50 50 0")

Script28.addField(field29)
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFVEC3F)
field30.setName("old")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setValue("0 0 0")

Script28.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFTIME)
field31.setName("set_cycle")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script28.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_MFVEC3F)
field32.setName("keyValue")
field32.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

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
TimeSensor33 = TimeSensorObject()
TimeSensor33.setDEF("nodeClock")
TimeSensor33.setCycleInterval(3)
TimeSensor33.setLoop(True)

Group13.addChild(TimeSensor33)
ROUTE34 = ROUTEObject()
ROUTE34.setFromNode("nodeClock")
ROUTE34.setFromField("cycleTime")
ROUTE34.setToNode("MoveBall")
ROUTE34.setToField("set_cycle")

Group13.addChild(ROUTE34)
ROUTE35 = ROUTEObject()
ROUTE35.setFromNode("nodeClock")
ROUTE35.setFromField("fraction_changed")
ROUTE35.setToNode("NodePosition")
ROUTE35.setToField("set_fraction")

Group13.addChild(ROUTE35)
ROUTE36 = ROUTEObject()
ROUTE36.setFromNode("MoveBall")
ROUTE36.setFromField("keyValue")
ROUTE36.setToNode("NodePosition")
ROUTE36.setToField("keyValue")

Group13.addChild(ROUTE36)
ROUTE37 = ROUTEObject()
ROUTE37.setFromNode("NodePosition")
ROUTE37.setFromField("value_changed")
ROUTE37.setToNode("transform")
ROUTE37.setToField("set_translation")

Group13.addChild(ROUTE37)
ProtoBody12.addChild(Group13)
ProtoDeclare9.setProtoBody(ProtoBody12)
Scene8.addChild(ProtoDeclare9)
ProtoDeclare38 = ProtoDeclareObject()
ProtoDeclare38.setName("cylinder")

ProtoInterface39 = ProtoInterfaceObject()

field40 = fieldObject()
field40.setType(fieldObject.TYPE_SFVEC3F)
field40.setName("set_positionA")
field40.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ProtoInterface39.addField(field40)
field41 = fieldObject()
field41.setType(fieldObject.TYPE_SFVEC3F)
field41.setName("set_positionB")
field41.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ProtoInterface39.addField(field41)
ProtoDeclare38.setProtoInterface(ProtoInterface39)
ProtoBody42 = ProtoBodyObject()

Group43 = GroupObject()

Shape44 = ShapeObject()

Extrusion45 = ExtrusionObject()
Extrusion45.setDEF("extrusion")
Extrusion45.setCreaseAngle(0.785)
Extrusion45.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion45.setSpine([0,-50,0,0,50,0])

Shape44.setGeometry(Extrusion45)
Appearance46 = AppearanceObject()

Material47 = MaterialObject()
Material47.setDiffuseColor([0,1,0])

Appearance46.setMaterial(Material47)
Shape44.setAppearance(Appearance46)
Group43.addChild(Shape44)
Script48 = ScriptObject()
Script48.setDEF("MoveCylinder")

field49 = fieldObject()
field49.setType(fieldObject.TYPE_MFVEC3F)
field49.setName("spine")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field49.setValue("0 -50 0 0 50 0")

Script48.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_SFVEC3F)
field50.setName("set_endA")
field50.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script48.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFVEC3F)
field51.setName("set_endB")
field51.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script48.addField(field51)
IS52 = ISObject()

connect53 = connectObject()
connect53.setNodeField("set_endA")
connect53.setProtoField("set_positionA")

IS52.addConnect(connect53)
connect54 = connectObject()
connect54.setNodeField("set_endB")
connect54.setProtoField("set_positionB")

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
ROUTE55 = ROUTEObject()
ROUTE55.setFromNode("MoveCylinder")
ROUTE55.setFromField("spine")
ROUTE55.setToNode("extrusion")
ROUTE55.setToField("set_spine")

Group43.addChild(ROUTE55)
ProtoBody42.addChild(Group43)
ProtoDeclare38.setProtoBody(ProtoBody42)
Scene8.addChild(ProtoDeclare38)
Transform56 = TransformObject()
Transform56.setDEF("HoldsContent")
Transform56.setScale([0.1,0.1,0.1])

PlaneSensor57 = PlaneSensorObject()
PlaneSensor57.setDEF("clickGenerator")
PlaneSensor57.setMinPosition([-50,-50])
PlaneSensor57.setMaxPosition([50,50])
PlaneSensor57.setDescription("click on background to add nodes, click on nodes to add links")

Transform56.addChild(PlaneSensor57)
ProtoInstance58 = ProtoInstanceObject()
ProtoInstance58.setName("node")
ProtoInstance58.setDEF("nodeA")

fieldValue59 = fieldValueObject()
fieldValue59.setName("position")
fieldValue59.setValue("0 0 0")

ProtoInstance58.addFieldValue(fieldValue59)
Transform56.addChild(ProtoInstance58)
ProtoInstance60 = ProtoInstanceObject()
ProtoInstance60.setName("node")
ProtoInstance60.setDEF("nodeB")

fieldValue61 = fieldValueObject()
fieldValue61.setName("position")
fieldValue61.setValue("50 50 50")

ProtoInstance60.addFieldValue(fieldValue61)
Transform56.addChild(ProtoInstance60)
ProtoInstance62 = ProtoInstanceObject()
ProtoInstance62.setName("node")
ProtoInstance62.setDEF("nodeC")

fieldValue63 = fieldValueObject()
fieldValue63.setName("position")
fieldValue63.setValue("-50 -50 -50")

ProtoInstance62.addFieldValue(fieldValue63)
Transform56.addChild(ProtoInstance62)
ProtoInstance64 = ProtoInstanceObject()
ProtoInstance64.setName("node")
ProtoInstance64.setDEF("nodeD")

fieldValue65 = fieldValueObject()
fieldValue65.setName("position")
fieldValue65.setValue("50 50 -50")

ProtoInstance64.addFieldValue(fieldValue65)
Transform56.addChild(ProtoInstance64)
ProtoInstance66 = ProtoInstanceObject()
ProtoInstance66.setName("cylinder")
ProtoInstance66.setDEF("linkA")

fieldValue67 = fieldValueObject()
fieldValue67.setName("set_positionA")
fieldValue67.setValue("0 0 0")

ProtoInstance66.addFieldValue(fieldValue67)
fieldValue68 = fieldValueObject()
fieldValue68.setName("set_positionB")
fieldValue68.setValue("50 50 50")

ProtoInstance66.addFieldValue(fieldValue68)
Transform56.addChild(ProtoInstance66)
ProtoInstance69 = ProtoInstanceObject()
ProtoInstance69.setName("cylinder")
ProtoInstance69.setDEF("linkB")

fieldValue70 = fieldValueObject()
fieldValue70.setName("set_positionA")
fieldValue70.setValue("0 0 0")

ProtoInstance69.addFieldValue(fieldValue70)
fieldValue71 = fieldValueObject()
fieldValue71.setName("set_positionB")
fieldValue71.setValue("-50 -50 -50")

ProtoInstance69.addFieldValue(fieldValue71)
Transform56.addChild(ProtoInstance69)
ProtoInstance72 = ProtoInstanceObject()
ProtoInstance72.setName("cylinder")
ProtoInstance72.setDEF("linkC")

fieldValue73 = fieldValueObject()
fieldValue73.setName("set_positionA")
fieldValue73.setValue("50 50 50")

ProtoInstance72.addFieldValue(fieldValue73)
fieldValue74 = fieldValueObject()
fieldValue74.setName("set_positionB")
fieldValue74.setValue("50 50 -50")

ProtoInstance72.addFieldValue(fieldValue74)
Transform56.addChild(ProtoInstance72)
Scene8.addChild(Transform56)
Script75 = ScriptObject()
Script75.setDEF("clickHandler")

field76 = fieldObject()
field76.setType(fieldObject.TYPE_SFINT32)
field76.setName("counter")
field76.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field76.setValue("0")

Script75.addField(field76)
field77 = fieldObject()
field77.setType(fieldObject.TYPE_SFNODE)
field77.setName("node_changed")
field77.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script75.addField(field77)
field78 = fieldObject()
field78.setType(fieldObject.TYPE_SFBOOL)
field78.setName("add_node")
field78.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field78.setValue("false")

Script75.addField(field78)

Script75.addComments(CommentsBlock("""<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>"""))

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
ROUTE79 = ROUTEObject()
ROUTE79.setFromNode("clickGenerator")
ROUTE79.setFromField("isActive")
ROUTE79.setToNode("clickHandler")
ROUTE79.setToField("add_node")

Scene8.addChild(ROUTE79)
ROUTE80 = ROUTEObject()
ROUTE80.setFromNode("nodeA")
ROUTE80.setFromField("position")
ROUTE80.setToNode("linkA")
ROUTE80.setToField("set_positionA")

Scene8.addChild(ROUTE80)
ROUTE81 = ROUTEObject()
ROUTE81.setFromNode("nodeB")
ROUTE81.setFromField("position")
ROUTE81.setToNode("linkA")
ROUTE81.setToField("set_positionB")

Scene8.addChild(ROUTE81)
ROUTE82 = ROUTEObject()
ROUTE82.setFromNode("nodeA")
ROUTE82.setFromField("position")
ROUTE82.setToNode("linkB")
ROUTE82.setToField("set_positionA")

Scene8.addChild(ROUTE82)
ROUTE83 = ROUTEObject()
ROUTE83.setFromNode("nodeC")
ROUTE83.setFromField("position")
ROUTE83.setToNode("linkB")
ROUTE83.setToField("set_positionB")

Scene8.addChild(ROUTE83)
ROUTE84 = ROUTEObject()
ROUTE84.setFromNode("nodeA")
ROUTE84.setFromField("position")
ROUTE84.setToNode("linkC")
ROUTE84.setToField("set_positionA")

Scene8.addChild(ROUTE84)
ROUTE85 = ROUTEObject()
ROUTE85.setFromNode("nodeD")
ROUTE85.setFromField("position")
ROUTE85.setToNode("linkC")
ROUTE85.setToField("set_positionB")

Scene8.addChild(ROUTE85)
X3D0.setScene(Scene8)

X3D0.toFileX3D("../data/force.new.x3d")
