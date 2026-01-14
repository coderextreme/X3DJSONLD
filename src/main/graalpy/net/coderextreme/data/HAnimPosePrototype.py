import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("HAnimPosePrototype.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("created")
meta4.setContent("4 April 2025")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("modified")
meta5.setContent("Mon, 15 Sep 2025 05:20:09 GMT")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("creator")
meta6.setContent("Don Brutzman")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("creator")
meta7.setContent("Joe Williams")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("warning")
meta8.setContent("under development")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("HAnimPoseDesignNotes19MAR2025.pdf")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("identifier")
meta12.setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = x3d.Scene()
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.setName("HAnimPose")
ProtoDeclare14.setAppinfo("Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values")
ProtoInterface15 = x3d.ProtoInterface()
field16 = x3d.field()
field16.setAccessType("inputOutput")
field16.setType("SFBool")
field16.setName("enabled")
field16.setValue("true")
field16.setAppinfo("default value true")

ProtoInterface15.addField(field16)
field17 = x3d.field()
field17.setAccessType("inputOnly")
field17.setType("SFBool")
field17.setName("setPose")
field17.setAppinfo("this event tells the HAnimPose node to do it's thing!")

ProtoInterface15.addField(field17)
field18 = x3d.field()
field18.setAccessType("inputOutput")
field18.setType("SFString")
field18.setName("name")
field18.setValue("PoseName")
field18.setAppinfo("name of this pose")

ProtoInterface15.addField(field18)
field19 = x3d.field()
field19.setAccessType("inputOutput")
field19.setType("MFString")
field19.setName("namesPoseJoints")
field19.setValue("\"nameJoint1\" \"nameJoint2\" \"nameJoint3\" \"nameJoint4\"")
field19.setAppinfo("names of joints in pose")

ProtoInterface15.addField(field19)
field20 = x3d.field()
field20.setAccessType("inputOutput")
field20.setType("MFVec3f")
field20.setName("positionsPoseJoints")
field20.setAppinfo("positions of joints in pose")

ProtoInterface15.addField(field20)
field21 = x3d.field()
field21.setAccessType("inputOutput")
field21.setType("MFRotation")
field21.setName("rotationsPoseJoints")
field21.setAppinfo("rotations of joints in pose")

ProtoInterface15.addField(field21)
field22 = x3d.field()
field22.setAccessType("inputOutput")
field22.setType("SFInt32")
field22.setName("whichChoice")
field22.setAppinfo("selects one of the HAnimHumanoid nodes")

ProtoInterface15.addField(field22)
field23 = x3d.field()
field23.setAccessType("inputOutput")
field23.setType("MFNode")
field23.setName("children")
field23.setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references")

ProtoInterface15.addField(field23)
field24 = x3d.field()
field24.setAccessType("inputOnly")
field24.setType("MFNode")
field24.setName("addChildren")
field24.setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references")

ProtoInterface15.addField(field24)
field25 = x3d.field()
field25.setAccessType("inputOnly")
field25.setType("MFNode")
field25.setName("removeChildren")
field25.setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references")

ProtoInterface15.addField(field25)
field26 = x3d.field()
field26.setAccessType("inputOutput")
field26.setType("SFBool")
field26.setName("traceEnabled")
field26.setValue("true")
field26.setAppinfo("debug trace to Browser output console")

ProtoInterface15.addField(field26)

ProtoDeclare14.setProtoInterface(ProtoInterface15)
ProtoBody27 = x3d.ProtoBody()
Switch28 = x3d.Switch()
Switch28.setDEF("PrototypeRootNode")
IS29 = x3d.IS()
connect30 = x3d.connect()
connect30.setNodeField("whichChoice")
connect30.setProtoField("whichChoice")

IS29.addConnect(connect30)
connect31 = x3d.connect()
connect31.setNodeField("addChildren")
connect31.setProtoField("addChildren")

IS29.addConnect(connect31)
connect32 = x3d.connect()
connect32.setNodeField("removeChildren")
connect32.setProtoField("removeChildren")

IS29.addConnect(connect32)
connect33 = x3d.connect()
connect33.setNodeField("children")
connect33.setProtoField("children")

IS29.addConnect(connect33)

Switch28.setIS(IS29)

ProtoBody27.addChild(Switch28)
MetadataString34 = x3d.MetadataString()
MetadataString34.setName("interface")
MetadataString34.setReference("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy")
MetadataString34.setValue(["X3DGroupingNode"])

ProtoBody27.addChild(MetadataString34)
Script35 = x3d.Script()
Script35.setDEF("HAnimPoseScriptOperations")
Script35.setDirectOutput(True)
field36 = x3d.field()
field36.setAccessType("inputOutput")
field36.setType("SFBool")
field36.setName("enabled")
field36.setAppinfo("default value true")

Script35.addField(field36)
field37 = x3d.field()
field37.setAccessType("inputOnly")
field37.setType("SFBool")
field37.setName("setPose")
field37.setAppinfo("this event tells the HAnimPose node to do it's thing!")

Script35.addField(field37)
field38 = x3d.field()
field38.setAccessType("inputOutput")
field38.setType("SFString")
field38.setName("name")
field38.setAppinfo("name of this pose")

Script35.addField(field38)
field39 = x3d.field()
field39.setAccessType("inputOutput")
field39.setType("MFString")
field39.setName("namesPoseJoints")
field39.setAppinfo("names of joints in pose")

Script35.addField(field39)
field40 = x3d.field()
field40.setAccessType("inputOutput")
field40.setType("MFVec3f")
field40.setName("positionsPoseJoints")
field40.setAppinfo("positions of joints in pose")

Script35.addField(field40)
field41 = x3d.field()
field41.setAccessType("inputOutput")
field41.setType("MFRotation")
field41.setName("rotationsPoseJoints")
field41.setAppinfo("rotations of joints in pose")

Script35.addField(field41)
field42 = x3d.field()
field42.setAccessType("inputOutput")
field42.setType("SFInt32")
field42.setName("whichChoice")
field42.setAppinfo("selects one of the HAnimHumanoid nodes")

Script35.addField(field42)
field43 = x3d.field()
field43.setAccessType("inputOutput")
field43.setType("MFNode")
field43.setName("children")
field43.setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references")

Script35.addField(field43)
field44 = x3d.field()
field44.setAccessType("inputOnly")
field44.setType("MFNode")
field44.setName("addChildren")
field44.setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references")

Script35.addField(field44)
field45 = x3d.field()
field45.setAccessType("inputOnly")
field45.setType("MFNode")
field45.setName("removeChildren")
field45.setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references")

Script35.addField(field45)
field46 = x3d.field()
field46.setAccessType("inputOutput")
field46.setType("SFBool")
field46.setName("traceEnabled")
field46.setAppinfo("debug trace to Browser output console")

Script35.addField(field46)

Script35.setSourceCode('''ecmascript:

// Needed functionality:
// a. get access to a humanoid
// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose
// c. walk the tree for all joints, then set transation, scale, rotation to default values
// d. for each name/position/rotation triplet in the pose arrays, update the appropriate
//    HAnimJoint nodes to that corresponding set of values

var scriptName='HAnimPoseScript';

function initialize ()
{
    // TODO author initialization code (if any) goes here
    
    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints
    
    // check humanoid connectivity

    tracePrint ('initialization() successful');
}
function set_enabled (eventValue)
{
    // input eventValue received for inputOutput field enabled
    enabled = eventValue;
    tracePrint ('enabled = ' + enabled);

    // TODO author code (if any) goes here
}
function setPose (eventValue)
{
    // input eventValue received for inputOnly field setPose
    setPose = eventValue;

    tracePrint ('setPose = ' + setPose);

    // TODO author code (if any) goes here
}
function set_name (eventValue)
{
    // input eventValue received for inputOutput field name
    name = eventValue;
    tracePrint ('name = ' + name);

    // TODO author code (if any) goes here
}
function set_namesPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field namesPoseJoints
    namesPoseJoints = eventValue;
    tracePrint ('namesPoseJoints = ' + namesPoseJoints);

    // TODO author code (if any) goes here
}
function set_positionsPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field positionsPoseJoints
    positionsPoseJoints = eventValue;
    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);

    // TODO author code (if any) goes here
}
function set_rotationsPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field rotationsPoseJoints
    rotationsPoseJoints = eventValue;
    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);

    // TODO author code (if any) goes here
}
function set_humanoid (eventValue)
{
    // input eventValue received for inputOutput field humanoid
    humanoid = eventValue;
    tracePrint ('humanoid = ' + humanoid);

    // TODO author code (if any) goes here
}
// ================== Trace output functions ==================

function tracePrint (outputString)
{
   // if traceEnabled is true, print outputString on X3D browser console
   if (traceEnabled)
      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
}
function alwaysPrint (outputString)
{
      // always print outputString on X3D browser console
      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
}
function set_traceEnabled (eventValue)
{
      // input eventValue received for inputOutput field
      traceEnabled = eventValue;
}
// ===========================================================''')
IS47 = x3d.IS()
connect48 = x3d.connect()
connect48.setNodeField("enabled")
connect48.setProtoField("enabled")

IS47.addConnect(connect48)
connect49 = x3d.connect()
connect49.setNodeField("setPose")
connect49.setProtoField("setPose")

IS47.addConnect(connect49)
connect50 = x3d.connect()
connect50.setNodeField("name")
connect50.setProtoField("name")

IS47.addConnect(connect50)
connect51 = x3d.connect()
connect51.setNodeField("namesPoseJoints")
connect51.setProtoField("namesPoseJoints")

IS47.addConnect(connect51)
connect52 = x3d.connect()
connect52.setNodeField("positionsPoseJoints")
connect52.setProtoField("positionsPoseJoints")

IS47.addConnect(connect52)
connect53 = x3d.connect()
connect53.setNodeField("rotationsPoseJoints")
connect53.setProtoField("rotationsPoseJoints")

IS47.addConnect(connect53)
connect54 = x3d.connect()
connect54.setNodeField("whichChoice")
connect54.setProtoField("whichChoice")

IS47.addConnect(connect54)
connect55 = x3d.connect()
connect55.setNodeField("children")
connect55.setProtoField("children")

IS47.addConnect(connect55)
connect56 = x3d.connect()
connect56.setNodeField("addChildren")
connect56.setProtoField("addChildren")

IS47.addConnect(connect56)
connect57 = x3d.connect()
connect57.setNodeField("removeChildren")
connect57.setProtoField("removeChildren")

IS47.addConnect(connect57)
connect58 = x3d.connect()
connect58.setNodeField("traceEnabled")
connect58.setProtoField("traceEnabled")

IS47.addConnect(connect58)

Script35.setIS(IS47)

ProtoBody27.addChild(Script35)

ProtoDeclare14.setProtoBody(ProtoBody27)

Scene13.addChild(ProtoDeclare14)
WorldInfo59 = x3d.WorldInfo()
WorldInfo59.setDEF("ModelInfo")
WorldInfo59.setTitle("HAnimPose Prototype")
WorldInfo59.setInfo(["Design to illustrate a potential HAnimPose node"])

Scene13.addChild(WorldInfo59)
NavigationInfo60 = x3d.NavigationInfo()

Scene13.addChild(NavigationInfo60)
ProtoInstance61 = x3d.ProtoInstance()
ProtoInstance61.setName("HAnimPose")
fieldValue62 = x3d.fieldValue()
fieldValue62.setName("name")
fieldValue62.setValue("A")

ProtoInstance61.addFieldValue(fieldValue62)
fieldValue63 = x3d.fieldValue()
fieldValue63.setName("namesPoseJoints")
fieldValue63.setValue("\"l_hip\" \"r_hip\"")

ProtoInstance61.addFieldValue(fieldValue63)
fieldValue64 = x3d.fieldValue()
fieldValue64.setName("positionsPoseJoints")
fieldValue64.setValue("0 0 0 0 0 0")

ProtoInstance61.addFieldValue(fieldValue64)
fieldValue65 = x3d.fieldValue()
fieldValue65.setName("rotationsPoseJoints")
fieldValue65.setValue("0 0 1 0.2 0 0 1 -0.2")

ProtoInstance61.addFieldValue(fieldValue65)

Scene13.addChild(ProtoInstance61)
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.setName("HAnimPose")
fieldValue67 = x3d.fieldValue()
fieldValue67.setName("name")
fieldValue67.setValue("T")

ProtoInstance66.addFieldValue(fieldValue67)
fieldValue68 = x3d.fieldValue()
fieldValue68.setName("namesPoseJoints")
fieldValue68.setValue("\"l_shoulder\" \"r_shoulder\"")

ProtoInstance66.addFieldValue(fieldValue68)
fieldValue69 = x3d.fieldValue()
fieldValue69.setName("positionsPoseJoints")
fieldValue69.setValue("0 0 0 0 0 0")

ProtoInstance66.addFieldValue(fieldValue69)
fieldValue70 = x3d.fieldValue()
fieldValue70.setName("rotationsPoseJoints")
fieldValue70.setValue("0 0 1 1.57 0 0 1 -1.57")

ProtoInstance66.addFieldValue(fieldValue70)

Scene13.addChild(ProtoInstance66)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/HAnimPosePrototype.new.graalpy.x3d")
X3D0.toFileJSON("../data/HAnimPosePrototype.new.graalpy.x3dj")
