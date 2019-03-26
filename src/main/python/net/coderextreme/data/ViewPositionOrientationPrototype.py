# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("ViewPositionOrientationPrototype.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("Leonard Daly and Don Brutzman")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("translator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("1 November 2000")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("27 May 2017")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("description")
meta7.setContent("ViewPositionOrientation prototype provides local position and orientation as user navigates, with optional console output")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("info")
meta8.setContent("Note fix: metadata is no longer an allowed ProtoDeclare field name, since ProtoInstance already includes a metadata field")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("reference")
meta9.setContent("ViewPositionOrientationExample.x3d")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("reference")
meta10.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIExample.x3d")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("reference")
meta11.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototype.x3d")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("reference")
meta12.setContent("http://www.realism.com/Web3D/Examples#WhereAmI")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("reference")
meta13.setContent("http://www.realism.com/vrml/Example/WhereAmI/WhereAmI_Proto.wrl")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("identifier")
meta14.setContent("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d")

head1.addMeta(meta14)
meta15 = metaObject()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = metaObject()
meta16.setName("license")
meta16.setContent("../../license.html")

head1.addMeta(meta16)
X3D0.setHead(head1)
Scene17 = SceneObject()


Scene17.addComments(CommentsBlock("""Thanks to Leonard Daly for the original design of this prototype"""))
ProtoDeclare18 = ProtoDeclareObject()
ProtoDeclare18.setName("ViewPositionOrientation")
ProtoDeclare18.setAppinfo("ViewPositionOrientation provides provides console output of local position and orientation as user navigates")

ProtoInterface19 = ProtoInterfaceObject()

field20 = fieldObject()
field20.setType(fieldObject.TYPE_SFBOOL)
field20.setName("enabled")
field20.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field20.setAppinfo("Whether or not ViewPositionOrientation sends output to console")
field20.setValue("true")

ProtoInterface19.addField(field20)
field21 = fieldObject()
field21.setType(fieldObject.TYPE_SFBOOL)
field21.setName("traceEnabled")
field21.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field21.setAppinfo("Output internal trace messages for debugging this node, intended for developer use only")
field21.setValue("true")

ProtoInterface19.addField(field21)
field22 = fieldObject()
field22.setType(fieldObject.TYPE_SFBOOL)
field22.setName("set_traceEnabled")
field22.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field22.setAppinfo("Ability to turn output tracing on/off at runtime")

ProtoInterface19.addField(field22)
field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFVEC3F)
field23.setName("position_changed")
field23.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field23.setAppinfo("Output local position")

ProtoInterface19.addField(field23)
field24 = fieldObject()
field24.setType(fieldObject.TYPE_SFROTATION)
field24.setName("orientation_changed")
field24.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field24.setAppinfo("Output local orientation")

ProtoInterface19.addField(field24)
field25 = fieldObject()
field25.setType(fieldObject.TYPE_MFSTRING)
field25.setName("outputViewpointString")
field25.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field25.setAppinfo("MFString value of new Viewpoint, suitable for use in string field of a Text node")

ProtoInterface19.addField(field25)
ProtoDeclare18.setProtoInterface(ProtoInterface19)
ProtoBody26 = ProtoBodyObject()

ProximitySensor27 = ProximitySensorObject()
ProximitySensor27.setDEF("WhereSensor")
ProximitySensor27.setSize([1000000000,1000000000,1000000000])

IS28 = ISObject()

connect29 = connectObject()
connect29.setNodeField("enabled")
connect29.setProtoField("enabled")

IS28.addConnect(connect29)
ProximitySensor27.setIS(IS28)
ProtoBody26.addChild(ProximitySensor27)

ProtoBody26.addComments(CommentsBlock("""it's a big old world out there! large box likely handles most use cases."""))
Script30 = ScriptObject()
Script30.setDEF("OutputPositionOrientation")

field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFBOOL)
field31.setName("traceEnabled")
field31.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script30.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFBOOL)
field32.setName("set_traceEnabled")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script30.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFVEC3F)
field33.setName("set_position")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script30.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFROTATION)
field34.setName("set_orientation")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script30.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFVEC3F)
field35.setName("position")
field35.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field35.setValue("0 0 0")

Script30.addField(field35)
field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFROTATION)
field36.setName("orientation")
field36.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field36.setValue("0 1 0 0")

Script30.addField(field36)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFVEC3F)
field37.setName("position_changed")
field37.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script30.addField(field37)
field38 = fieldObject()
field38.setType(fieldObject.TYPE_SFROTATION)
field38.setName("orientation_changed")
field38.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script30.addField(field38)
field39 = fieldObject()
field39.setType(fieldObject.TYPE_MFSTRING)
field39.setName("outputViewpointString")
field39.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script30.addField(field39)
IS40 = ISObject()

connect41 = connectObject()
connect41.setNodeField("traceEnabled")
connect41.setProtoField("traceEnabled")

IS40.addConnect(connect41)
connect42 = connectObject()
connect42.setNodeField("set_traceEnabled")
connect42.setProtoField("set_traceEnabled")

IS40.addConnect(connect42)
connect43 = connectObject()
connect43.setNodeField("position_changed")
connect43.setProtoField("position_changed")

IS40.addConnect(connect43)
connect44 = connectObject()
connect44.setNodeField("orientation_changed")
connect44.setProtoField("orientation_changed")

IS40.addConnect(connect44)
connect45 = connectObject()
connect45.setNodeField("outputViewpointString")
connect45.setProtoField("outputViewpointString")

IS40.addConnect(connect45)
Script30.setIS(IS40)

Script30.setSourceCode("ecmascript:\n"+
"\n"+
"function roundoff (value, digits) // for local use only\n"+
"{\n"+
"	var resolution = 1;\n"+
"	for (i = 1; i <= digits; i++ )\n"+
"	{\n"+
"		resolution *= 10;\n"+
"	}\n"+
"	return Math.round (value*resolution) / resolution; // round to resolution\n"+
"}\n"+
"function outputViewpoint ()\n"+
"{\n"+
"  var holdString = \n"+
"        '<Viewpoint position=\"' +\n"+
"		roundoff (position.x, 1) + ' ' +\n"+
"		roundoff (position.y, 1) + ' ' +\n"+
"		roundoff (position.z, 1) +\n"+
"        '\" orientation=\"' +\n"+
"		roundoff (orientation.x, 3) + ' ' +\n"+
"		roundoff (orientation.y, 3) + ' ' +\n"+
"		roundoff (orientation.z, 3) + ' ' +\n"+
"		roundoff (orientation.angle, 4) + '\"/>' ;\n"+
"   tracePrint (holdString);\n"+
"   outputViewpointString = new MFString (holdString);\n"+
"}\n"+
"function set_position (value)\n"+
"{\n"+
"	position = value; // save persistent value\n"+
"	position_changed = position; // output event\n"+
"	outputViewpoint ();\n"+
"}\n"+
"function set_orientation (value)\n"+
"{\n"+
"	orientation = value; // save persistent value\n"+
"	orientation_changed = orientation; // output event\n"+
"	outputViewpoint ();\n"+
"}\n"+
"function set_traceEnabled (value)\n"+
"{\n"+
"	traceEnabled = value;\n"+
"	alwaysPrint ('traceEnabled=' + traceEnabled);\n"+
"}\n"+
"function alwaysPrint (text)\n"+
"{\n"+
"	Browser.print ('[ViewPositionOrientation] ' + text + '\\n');\n"+
"}\n"+
"function tracePrint (text)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (text);\n"+
"}")
ProtoBody26.addChild(Script30)
ROUTE46 = ROUTEObject()
ROUTE46.setFromField("position_changed")
ROUTE46.setFromNode("WhereSensor")
ROUTE46.setToField("set_position")
ROUTE46.setToNode("OutputPositionOrientation")

ProtoBody26.addChild(ROUTE46)
ROUTE47 = ROUTEObject()
ROUTE47.setFromField("orientation_changed")
ROUTE47.setFromNode("WhereSensor")
ROUTE47.setToField("set_orientation")
ROUTE47.setToNode("OutputPositionOrientation")

ProtoBody26.addChild(ROUTE47)
ProtoDeclare18.setProtoBody(ProtoBody26)
Scene17.addChild(ProtoDeclare18)

Scene17.addComments(CommentsBlock("""===================="""))
Viewpoint48 = ViewpointObject()
Viewpoint48.setDescription("ViewPositionOrientation prototype")
Viewpoint48.setPosition([0,0,14])

Scene17.addChild(Viewpoint48)
Anchor49 = AnchorObject()
Anchor49.setDescription("ViewPositionOrientation Example")
Anchor49.setParameter(["target=_blank"])
Anchor49.setUrl(["ViewPositionOrientationExample.x3d","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.x3d","ViewPositionOrientationExample.wrl","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.wrl"])

Shape50 = ShapeObject()

Text51 = TextObject()
Text51.setString(["ViewPositionOrientationPrototype","is a prototype definition file","","Click this text to see","ViewPositionOrientationExample"])

FontStyle52 = FontStyleObject()
FontStyle52.setJustify(["MIDDLE","MIDDLE"])
FontStyle52.setSize(1.2)

Text51.setFontStyle(FontStyle52)
Shape50.setGeometry(Text51)
Appearance53 = AppearanceObject()

Material54 = MaterialObject()
Material54.setDiffuseColor([0.6,0.8,0.4])

Appearance53.setMaterial(Material54)
Shape50.setAppearance(Appearance53)
Anchor49.addChild(Shape50)

Anchor49.addComments(CommentsBlock("""Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip"""))
Shape55 = ShapeObject()


Shape55.addComments(CommentsBlock("""Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible."""))
Box56 = BoxObject()
Box56.setSize([16,7,0.001])

Shape55.setGeometry(Box56)
Appearance57 = AppearanceObject()

Material58 = MaterialObject()
Material58.setTransparency(1)

Appearance57.setMaterial(Material58)
Shape55.setAppearance(Appearance57)
Anchor49.addChild(Shape55)
Scene17.addChild(Anchor49)
X3D0.setScene(Scene17)

X3D0.toFileX3D("../data/ViewPositionOrientationPrototype.new.x3d")
