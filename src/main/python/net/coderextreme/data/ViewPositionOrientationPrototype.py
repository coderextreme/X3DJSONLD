import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("ViewPositionOrientationPrototype.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("Leonard Daly and Don Brutzman")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("translator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("1 November 2000")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("27 May 2017")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("description")
meta7.setContent("ViewPositionOrientation prototype provides local position and orientation as user navigates, with optional console output")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("info")
meta8.setContent("Note fix: metadata is no longer an allowed ProtoDeclare field name, since ProtoInstance already includes a metadata field")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("ViewPositionOrientationExample.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIExample.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototype.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("http://www.realism.com/Web3D/Examples#WhereAmI")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("http://www.realism.com/vrml/Example/WhereAmI/WhereAmI_Proto.wrl")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("license")
meta16.setContent("../../license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()
#Thanks to Leonard Daly for the original design of this prototype
ProtoDeclare18 = x3d.ProtoDeclare()
ProtoDeclare18.setName("ViewPositionOrientation")
ProtoDeclare18.setAppinfo("ViewPositionOrientation provides provides console output of local position and orientation as user navigates")
ProtoInterface19 = x3d.ProtoInterface()
field20 = x3d.field()
field20.setName("enabled")
field20.setAccessType("inputOutput")
field20.setAppinfo("Whether or not ViewPositionOrientation sends output to console")
field20.setType("SFBool")
field20.setValue("true")

ProtoInterface19.addField(field20)
field21 = x3d.field()
field21.setName("traceEnabled")
field21.setAccessType("initializeOnly")
field21.setAppinfo("Output internal trace messages for debugging this node, intended for developer use only")
field21.setType("SFBool")
field21.setValue("true")

ProtoInterface19.addField(field21)
field22 = x3d.field()
field22.setName("set_traceEnabled")
field22.setAccessType("inputOnly")
field22.setAppinfo("Ability to turn output tracing on/off at runtime")
field22.setType("SFBool")

ProtoInterface19.addField(field22)
field23 = x3d.field()
field23.setName("position_changed")
field23.setAccessType("outputOnly")
field23.setAppinfo("Output local position")
field23.setType("SFVec3f")

ProtoInterface19.addField(field23)
field24 = x3d.field()
field24.setName("orientation_changed")
field24.setAccessType("outputOnly")
field24.setAppinfo("Output local orientation")
field24.setType("SFRotation")

ProtoInterface19.addField(field24)
field25 = x3d.field()
field25.setName("outputViewpointString")
field25.setAccessType("outputOnly")
field25.setAppinfo("MFString value of new Viewpoint, suitable for use in string field of a Text node")
field25.setType("MFString")

ProtoInterface19.addField(field25)

ProtoDeclare18.setProtoInterface(ProtoInterface19)
ProtoBody26 = x3d.ProtoBody()
ProximitySensor27 = x3d.ProximitySensor()
ProximitySensor27.setDEF("WhereSensor")
ProximitySensor27.setSize([1000000000,1000000000,1000000000])
IS28 = x3d.IS()
connect29 = x3d.connect()
connect29.setNodeField("enabled")
connect29.setProtoField("enabled")

IS28.addConnect(connect29)

ProximitySensor27.setIS(IS28)

ProtoBody26.addChildren(ProximitySensor27)
#it's a big old world out there! large box likely handles most use cases.
Script30 = x3d.Script()
Script30.setDEF("OutputPositionOrientation")
field31 = x3d.field()
field31.setName("traceEnabled")
field31.setAccessType("initializeOnly")
field31.setType("SFBool")

Script30.addField(field31)
field32 = x3d.field()
field32.setName("set_traceEnabled")
field32.setAccessType("inputOnly")
field32.setType("SFBool")

Script30.addField(field32)
field33 = x3d.field()
field33.setName("set_position")
field33.setAccessType("inputOnly")
field33.setType("SFVec3f")

Script30.addField(field33)
field34 = x3d.field()
field34.setName("set_orientation")
field34.setAccessType("inputOnly")
field34.setType("SFRotation")

Script30.addField(field34)
field35 = x3d.field()
field35.setName("position")
field35.setAccessType("initializeOnly")
field35.setType("SFVec3f")
field35.setValue("0 0 0")

Script30.addField(field35)
field36 = x3d.field()
field36.setName("orientation")
field36.setAccessType("initializeOnly")
field36.setType("SFRotation")
field36.setValue("0 1 0 0")

Script30.addField(field36)
field37 = x3d.field()
field37.setName("position_changed")
field37.setAccessType("outputOnly")
field37.setType("SFVec3f")

Script30.addField(field37)
field38 = x3d.field()
field38.setName("orientation_changed")
field38.setAccessType("outputOnly")
field38.setType("SFRotation")

Script30.addField(field38)
field39 = x3d.field()
field39.setName("outputViewpointString")
field39.setAccessType("outputOnly")
field39.setType("MFString")

Script30.addField(field39)
IS40 = x3d.IS()
connect41 = x3d.connect()
connect41.setNodeField("traceEnabled")
connect41.setProtoField("traceEnabled")

IS40.addConnect(connect41)
connect42 = x3d.connect()
connect42.setNodeField("set_traceEnabled")
connect42.setProtoField("set_traceEnabled")

IS40.addConnect(connect42)
connect43 = x3d.connect()
connect43.setNodeField("position_changed")
connect43.setProtoField("position_changed")

IS40.addConnect(connect43)
connect44 = x3d.connect()
connect44.setNodeField("orientation_changed")
connect44.setProtoField("orientation_changed")

IS40.addConnect(connect44)
connect45 = x3d.connect()
connect45.setNodeField("outputViewpointString")
connect45.setProtoField("outputViewpointString")

IS40.addConnect(connect45)

Script30.setIS(IS40)

Script30.setSourceCode('''ecmascript:\n"+
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
"}''')

ProtoBody26.addChildren(Script30)
ROUTE46 = x3d.ROUTE()
ROUTE46.setFromField("position_changed")
ROUTE46.setFromNode("WhereSensor")
ROUTE46.setToField("set_position")
ROUTE46.setToNode("OutputPositionOrientation")

ProtoBody26.addChildren(ROUTE46)
ROUTE47 = x3d.ROUTE()
ROUTE47.setFromField("orientation_changed")
ROUTE47.setFromNode("WhereSensor")
ROUTE47.setToField("set_orientation")
ROUTE47.setToNode("OutputPositionOrientation")

ProtoBody26.addChildren(ROUTE47)

ProtoDeclare18.setProtoBody(ProtoBody26)

Scene17.addChildren(ProtoDeclare18)
#====================
Viewpoint48 = x3d.Viewpoint()
Viewpoint48.setDescription("ViewPositionOrientation prototype")
Viewpoint48.setPosition([0,0,14])

Scene17.addChildren(Viewpoint48)
Anchor49 = x3d.Anchor()
Anchor49.setDescription("ViewPositionOrientation Example")
Anchor49.setParameter(["target=_blank"])
Anchor49.setUrl(["ViewPositionOrientationExample.x3d","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.x3d","ViewPositionOrientationExample.wrl","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.wrl"])
Shape50 = x3d.Shape()
Text51 = x3d.Text()
Text51.setString(["ViewPositionOrientationPrototype","is a prototype definition file","","Click this text to see","ViewPositionOrientationExample"])
FontStyle52 = x3d.FontStyle()
FontStyle52.setJustify(["MIDDLE","MIDDLE"])
FontStyle52.setSize(1.2)

Text51.setFontStyle(FontStyle52)

Shape50.setGeometry(Text51)
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.setDiffuseColor([0.6,0.8,0.4])

Appearance53.setMaterial(Material54)

Shape50.setAppearance(Appearance53)

Anchor49.addChildren(Shape50)
#Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
Shape55 = x3d.Shape()
#Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
Box56 = x3d.Box()
Box56.setSize([16,7,0.001])

Shape55.setGeometry(Box56)
Appearance57 = x3d.Appearance()
Material58 = x3d.Material()
Material58.setTransparency(1)

Appearance57.setMaterial(Material58)

Shape55.setAppearance(Appearance57)

Anchor49.addChildren(Shape55)

Scene17.addChildren(Anchor49)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/ViewPositionOrientationPrototype_RoundTrip.x3d")
