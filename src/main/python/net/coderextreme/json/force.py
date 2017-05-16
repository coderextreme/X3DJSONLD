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
Sphere17 = SphereObject()
Shape16.setGeometry(Sphere17)
Appearance18 = AppearanceObject()
Material19 = MaterialObject().setDiffuseColor([1,0,0])
Appearance18.setMaterial(Material19)
Shape16.setAppearance(Appearance18)
Transform13.addChild(Shape16)
Transform20 = TransformObject().setTranslation([1,0,0])
Shape21 = ShapeObject()
Text22 = TextObject().setString(["Node"])
FontStyle23 = FontStyleObject().setJustify(["MIDDLE","MIDDLE"]).setSize(5)
Text22.setFontStyle(FontStyle23)
Shape21.setGeometry(Text22)
Appearance24 = AppearanceObject()
Material25 = MaterialObject().setDiffuseColor([0,0,1])
Appearance24.setMaterial(Material25)
Shape21.setAppearance(Appearance24)
Transform20.addChild(Shape21)
Transform13.addChild(Transform20)
ProtoBody12.addChild(Transform13)
PositionInterpolator26 = PositionInterpolatorObject().setDEF("NodePosition").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
ProtoBody12.addChild(PositionInterpolator26)
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
ProtoBody12.addChild(Script27)
TimeSensor32 = TimeSensorObject().setDEF("nodeClock").setCycleInterval(3).setLoop(True)
ProtoBody12.addChild(TimeSensor32)
ROUTE33 = ROUTEObject().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle")
ProtoBody12.addChild(ROUTE33)
ROUTE34 = ROUTEObject().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction")
ProtoBody12.addChild(ROUTE34)
ROUTE35 = ROUTEObject().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue")
ProtoBody12.addChild(ROUTE35)
ROUTE36 = ROUTEObject().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")
ProtoBody12.addChild(ROUTE36)
ProtoDeclare9.setProtoBody(ProtoBody12)
Scene8.addChild(ProtoDeclare9)
ProtoDeclare37 = ProtoDeclareObject().setName("cylinder")
ProtoInterface38 = ProtoInterfaceObject()
field39 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_positionA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface38.addField(field39)
field40 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_positionB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface38.addField(field40)
ProtoDeclare37.setProtoInterface(ProtoInterface38)
ProtoBody41 = ProtoBodyObject()
Shape42 = ShapeObject()
Extrusion43 = ExtrusionObject().setDEF("extrusion").setCreaseAngle(0.785).setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]).setSpine([0,-50,0,0,50,0])
Shape42.setGeometry(Extrusion43)
Appearance44 = AppearanceObject()
Material45 = MaterialObject().setDiffuseColor([0,1,0])
Appearance44.setMaterial(Material45)
Shape42.setAppearance(Appearance44)
ProtoBody41.addChild(Shape42)
Script46 = ScriptObject().setDEF("MoveCylinder")
field47 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("spine").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 50 0")
Script46.addField(field47)
field48 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script46.addField(field48)
field49 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script46.addField(field49)
IS50 = ISObject()
connect51 = connectObject().setNodeField("set_endA").setProtoField("set_positionA")
IS50.addConnect(connect51)
connect52 = connectObject().setNodeField("set_endB").setProtoField("set_positionB")
IS50.addConnect(connect52)
Script46.setIS(IS50)

Script46.setSourceCode("ecmascript:\n"+
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
ProtoBody41.addChild(Script46)
ROUTE53 = ROUTEObject().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")
ProtoBody41.addChild(ROUTE53)
ProtoDeclare37.setProtoBody(ProtoBody41)
Scene8.addChild(ProtoDeclare37)
Transform54 = TransformObject().setDEF("HoldsContent").setScale([0.1,0.1,0.1])
PlaneSensor55 = PlaneSensorObject().setDEF("clickGenerator").setMinPosition([-50,-50]).setMaxPosition([50,50]).setDescription("click on background to add nodes, click on nodes to add links")
Transform54.addChild(PlaneSensor55)
ProtoInstance56 = ProtoInstanceObject().setName("node").setDEF("nodeA")
fieldValue57 = fieldValueObject().setName("position").setValue("0 0 0")
ProtoInstance56.addFieldValue(fieldValue57)
Transform54.addChild(ProtoInstance56)
ProtoInstance58 = ProtoInstanceObject().setName("node").setDEF("nodeB")
fieldValue59 = fieldValueObject().setName("position").setValue("50 50 50")
ProtoInstance58.addFieldValue(fieldValue59)
Transform54.addChild(ProtoInstance58)
ProtoInstance60 = ProtoInstanceObject().setName("node").setDEF("nodeC")
fieldValue61 = fieldValueObject().setName("position").setValue("-50 -50 -50")
ProtoInstance60.addFieldValue(fieldValue61)
Transform54.addChild(ProtoInstance60)
ProtoInstance62 = ProtoInstanceObject().setName("node").setDEF("nodeD")
fieldValue63 = fieldValueObject().setName("position").setValue("50 50 -50")
ProtoInstance62.addFieldValue(fieldValue63)
Transform54.addChild(ProtoInstance62)
ProtoInstance64 = ProtoInstanceObject().setName("cylinder").setDEF("linkA")
fieldValue65 = fieldValueObject().setName("set_positionA").setValue("0 0 0")
ProtoInstance64.addFieldValue(fieldValue65)
fieldValue66 = fieldValueObject().setName("set_positionB").setValue("50 50 50")
ProtoInstance64.addFieldValue(fieldValue66)
Transform54.addChild(ProtoInstance64)
ProtoInstance67 = ProtoInstanceObject().setName("cylinder").setDEF("linkB")
fieldValue68 = fieldValueObject().setName("set_positionA").setValue("0 0 0")
ProtoInstance67.addFieldValue(fieldValue68)
fieldValue69 = fieldValueObject().setName("set_positionB").setValue("-50 -50 -50")
ProtoInstance67.addFieldValue(fieldValue69)
Transform54.addChild(ProtoInstance67)
ProtoInstance70 = ProtoInstanceObject().setName("cylinder").setDEF("linkC")
fieldValue71 = fieldValueObject().setName("set_positionA").setValue("50 50 50")
ProtoInstance70.addFieldValue(fieldValue71)
fieldValue72 = fieldValueObject().setName("set_positionB").setValue("50 50 -50")
ProtoInstance70.addFieldValue(fieldValue72)
Transform54.addChild(ProtoInstance70)
Scene8.addChild(Transform54)
Script73 = ScriptObject().setDEF("clickHandler")
field74 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("counter").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
Script73.addField(field74)
field75 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("node_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script73.addField(field75)
field76 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("add_node").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("false")
Script73.addField(field76)
field77 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("ModifiableNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Transform78 = TransformObject().setUSE("HoldsContent")
field77.addChild(Transform78)
Script73.addField(field77)

Script73.setSourceCode("ecmascript:\n"+
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
Scene8.addChild(Script73)
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

X3D0.toFileX3D("../new/json/force.new.x3d")
