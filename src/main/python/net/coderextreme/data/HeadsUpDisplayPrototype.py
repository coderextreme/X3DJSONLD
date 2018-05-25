# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("HeadsUpDisplayPrototype.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("Generic Heads Up Display (HUD) prototype to keep children on screen.")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("9 November 2003")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("14 January 2014")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("subject")
meta7.setContent("HUD Heads Up Display")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("identifier")
meta8.setContent("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("generator")
meta9.setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("license")
meta10.setContent("../../license.html")

head1.addMeta(meta10)
X3D0.setHead(head1)
Scene11 = SceneObject()

ProtoDeclare12 = ProtoDeclareObject()
ProtoDeclare12.setName("HeadsUpDisplay")
ProtoDeclare12.setAppinfo("HeadsUpDisplay positions child geometry in screen space, movable by the user")

ProtoInterface13 = ProtoInterfaceObject()

field14 = fieldObject()
field14.setType(fieldObject.TYPE_MFNODE)
field14.setName("children")
field14.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field14.setAppinfo("Displayed subscene positioned as a HUD.")


field14.addComments(CommentsBlock("""default is null array of nodes"""))
ProtoInterface13.addField(field14)
field15 = fieldObject()
field15.setType(fieldObject.TYPE_MFNODE)
field15.setName("dragChildren")
field15.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field15.setAppinfo("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.")


field15.addComments(CommentsBlock("""default is null array of nodes"""))
ProtoInterface13.addField(field15)
field16 = fieldObject()
field16.setType(fieldObject.TYPE_SFVEC3F)
field16.setName("locationOffset")
field16.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field16.setAppinfo("Modified screen location and distance (for size).")
field16.setValue("-2 -2 0")

ProtoInterface13.addField(field16)
field17 = fieldObject()
field17.setType(fieldObject.TYPE_SFBOOL)
field17.setName("traceEnabled")
field17.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field17.setAppinfo("Enable/disable console output for troubleshooting.")
field17.setValue("false")

ProtoInterface13.addField(field17)
ProtoDeclare12.setProtoInterface(ProtoInterface13)
ProtoBody18 = ProtoBodyObject()

Group19 = GroupObject()

ProximitySensor20 = ProximitySensorObject()
ProximitySensor20.setDEF("WhereSensor")
ProximitySensor20.setSize([1000000000,1000000000,1000000000])

IS21 = ISObject()

connect22 = connectObject()
connect22.setNodeField("center")
connect22.setProtoField("locationOffset")

IS21.addConnect(connect22)
ProximitySensor20.setIS(IS21)
Group19.addChild(ProximitySensor20)
Transform23 = TransformObject()
Transform23.setDEF("FixedLocation")

Transform24 = TransformObject()
Transform24.setDEF("MovableLocation")

Transform25 = TransformObject()
Transform25.setDEF("LocationOffset")

IS26 = ISObject()

connect27 = connectObject()
connect27.setNodeField("translation")
connect27.setProtoField("locationOffset")

IS26.addConnect(connect27)
Transform25.setIS(IS26)
Transform28 = TransformObject()
Transform28.setTranslation([0,0,-10])

Group29 = GroupObject()

IS30 = ISObject()

connect31 = connectObject()
connect31.setNodeField("children")
connect31.setProtoField("children")

IS30.addConnect(connect31)
Group29.setIS(IS30)
Transform28.addChild(Group29)
Group32 = GroupObject()
Group32.setDEF("PlaneMovementSensorGroup")

Group33 = GroupObject()
Group33.setDEF("DragGeometry")

IS34 = ISObject()

connect35 = connectObject()
connect35.setNodeField("children")
connect35.setProtoField("dragChildren")

IS34.addConnect(connect35)
Group33.setIS(IS34)
Group32.addChild(Group33)
PlaneSensor36 = PlaneSensorObject()
PlaneSensor36.setDEF("PlaneMovementSensor")
PlaneSensor36.setDescription("click and drag to move interface")

IS37 = ISObject()

connect38 = connectObject()
connect38.setNodeField("offset")
connect38.setProtoField("locationOffset")

IS37.addConnect(connect38)
PlaneSensor36.setIS(IS37)
Group32.addChild(PlaneSensor36)
VisibilitySensor39 = VisibilitySensorObject()
VisibilitySensor39.setDEF("MovementVisibilitySensor")

Group32.addChild(VisibilitySensor39)
Script40 = ScriptObject()
Script40.setDEF("VisibilityControlScript")

field41 = fieldObject()
field41.setType(fieldObject.TYPE_SFBOOL)
field41.setName("traceEnabled")
field41.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script40.addField(field41)
field42 = fieldObject()
field42.setType(fieldObject.TYPE_SFBOOL)
field42.setName("isVisible")
field42.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field42.setValue("true")

Script40.addField(field42)
field43 = fieldObject()
field43.setType(fieldObject.TYPE_SFVEC3F)
field43.setName("planeSensorTranslation")
field43.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field43.setValue("0 0 0")

Script40.addField(field43)
field44 = fieldObject()
field44.setType(fieldObject.TYPE_SFBOOL)
field44.setName("setIsVisible")
field44.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script40.addField(field44)
field45 = fieldObject()
field45.setType(fieldObject.TYPE_SFBOOL)
field45.setName("setPlaneSensorIsActive")
field45.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script40.addField(field45)
field46 = fieldObject()
field46.setType(fieldObject.TYPE_SFVEC3F)
field46.setName("setPlaneSensorTranslation")
field46.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script40.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFVEC3F)
field47.setName("translationChanged")
field47.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script40.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFVEC3F)
field48.setName("translationOffsetChanged")
field48.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script40.addField(field48)
IS49 = ISObject()

connect50 = connectObject()
connect50.setNodeField("traceEnabled")
connect50.setProtoField("traceEnabled")

IS49.addConnect(connect50)
Script40.setIS(IS49)

Script40.setSourceCode("ecmascript:\n"+
"\n"+
"function tracePrint (text)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);\n"+
"}\n"+
"function setIsVisible (value, timeStamp)\n"+
"{\n"+
"	isVisible = value;\n"+
"	tracePrint('isVisible=' + value);\n"+
"}\n"+
"function setPlaneSensorIsActive (value, timeStamp)\n"+
"{\n"+
"	tracePrint('PlaneSensor isActive=' + value);\n"+
"\n"+
"	if (value == false)\n"+
"	{\n"+
"		tracePrint('planeSensorTranslation=' + planeSensorTranslation);\n"+
"		if (isVisible)\n"+
"		{\n"+
"			translationChanged = planeSensorTranslation;\n"+
"		}\n"+
"		else\n"+
"		{\n"+
"			// fell off screen, reset to center\n"+
"			translationChanged = new SFVec3f(0, 0, 0);\n"+
"			translationOffsetChanged  = new SFVec3f(0, 0, 0);\n"+
"		}\n"+
"	}\n"+
"}\n"+
"function setPlaneSensorTranslation (value, timeStamp)\n"+
"{\n"+
"	planeSensorTranslation = value;\n"+
"	tracePrint('planeSensorTranslation=' + value);\n"+
"}")
Group32.addChild(Script40)
ROUTE51 = ROUTEObject()
ROUTE51.setFromField("isActive")
ROUTE51.setFromNode("PlaneMovementSensor")
ROUTE51.setToField("setPlaneSensorIsActive")
ROUTE51.setToNode("VisibilityControlScript")

Group32.addChild(ROUTE51)
ROUTE52 = ROUTEObject()
ROUTE52.setFromField("translation_changed")
ROUTE52.setFromNode("PlaneMovementSensor")
ROUTE52.setToField("setPlaneSensorTranslation")
ROUTE52.setToNode("VisibilityControlScript")

Group32.addChild(ROUTE52)
ROUTE53 = ROUTEObject()
ROUTE53.setFromField("isActive")
ROUTE53.setFromNode("MovementVisibilitySensor")
ROUTE53.setToField("setIsVisible")
ROUTE53.setToNode("VisibilityControlScript")

Group32.addChild(ROUTE53)
Transform28.addChild(Group32)
Transform25.addChild(Transform28)
Transform24.addChild(Transform25)
ROUTE54 = ROUTEObject()
ROUTE54.setFromField("translation_changed")
ROUTE54.setFromNode("PlaneMovementSensor")
ROUTE54.setToField("set_translation")
ROUTE54.setToNode("MovableLocation")

Transform24.addChild(ROUTE54)
ROUTE55 = ROUTEObject()
ROUTE55.setFromField("translationChanged")
ROUTE55.setFromNode("VisibilityControlScript")
ROUTE55.setToField("set_translation")
ROUTE55.setToNode("MovableLocation")

Transform24.addChild(ROUTE55)
ROUTE56 = ROUTEObject()
ROUTE56.setFromField("translationOffsetChanged")
ROUTE56.setFromNode("VisibilityControlScript")
ROUTE56.setToField("set_offset")
ROUTE56.setToNode("PlaneMovementSensor")

Transform24.addChild(ROUTE56)
Transform23.addChild(Transform24)
Group19.addChild(Transform23)
ROUTE57 = ROUTEObject()
ROUTE57.setFromField("position_changed")
ROUTE57.setFromNode("WhereSensor")
ROUTE57.setToField("set_translation")
ROUTE57.setToNode("FixedLocation")

Group19.addChild(ROUTE57)
ROUTE58 = ROUTEObject()
ROUTE58.setFromField("orientation_changed")
ROUTE58.setFromNode("WhereSensor")
ROUTE58.setToField("set_rotation")
ROUTE58.setToNode("FixedLocation")

Group19.addChild(ROUTE58)
ProtoBody18.addChild(Group19)
ProtoDeclare12.setProtoBody(ProtoBody18)
Scene11.addChild(ProtoDeclare12)

Scene11.addComments(CommentsBlock("""===================="""))
Background59 = BackgroundObject()
Background59.setGroundColor([0.1,0.1,0.3])
Background59.setSkyColor([0.5,0.5,0.1])

Scene11.addChild(Background59)
Anchor60 = AnchorObject()
Anchor60.setDescription("HeadsUpDisplayExample")
Anchor60.setParameter(["target=_blank"])
Anchor60.setUrl(["HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"])

Shape61 = ShapeObject()

Appearance62 = AppearanceObject()

Material63 = MaterialObject()
Material63.setDiffuseColor([0,1,1])
Material63.setEmissiveColor([0,1,1])

Appearance62.setMaterial(Material63)
Shape61.setAppearance(Appearance62)
Text64 = TextObject()
Text64.setString(["HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"])

FontStyle65 = FontStyleObject()
FontStyle65.setJustify(["MIDDLE","MIDDLE"])
FontStyle65.setSize(0.8)

Text64.setFontStyle(FontStyle65)
Shape61.setGeometry(Text64)
Anchor60.addChild(Shape61)
Scene11.addChild(Anchor60)
X3D0.setScene(Scene11)

X3D0.toFileX3D("../data/HeadsUpDisplayPrototype.new.x3d")
