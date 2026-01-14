print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "HAnimPosePrototype.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Define an experimental new node to simply capture a single pose for an HAnimHumanoid model."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "created"
meta4.content = "4 April 2025"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "modified"
meta5.content = "Mon, 15 Sep 2025 05:20:09 GMT"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "creator"
meta6.content = "Don Brutzman"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "Joe Williams"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "warning"
meta8.content = "under development"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "HAnimPoseDesignNotes19MAR2025.pdf"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "identifier"
meta12.content = "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d"

head1.children.append(meta12)

X3D0.head = head1
Scene13 = x3d.Scene()
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.name = "HAnimPose"
ProtoDeclare14.appinfo = "Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values"
ProtoInterface15 = x3d.ProtoInterface()
field16 = x3d.field()
field16.accessType = "inputOutput"
field16.type = "SFBool"
field16.name = "enabled"
field16.value = True
field16.appinfo = "default value true"

ProtoInterface15.field.append(field16)
field17 = x3d.field()
field17.accessType = "inputOnly"
field17.type = "SFBool"
field17.name = "setPose"
field17.appinfo = "this event tells the HAnimPose node to do it's thing!"

ProtoInterface15.field.append(field17)
field18 = x3d.field()
field18.accessType = "inputOutput"
field18.type = "SFString"
field18.name = "name"
field18.value = "PoseName"
field18.appinfo = "name of this pose"

ProtoInterface15.field.append(field18)
field19 = x3d.field()
field19.accessType = "inputOutput"
field19.type = "MFString"
field19.name = "namesPoseJoints"
field19.value = ["nameJoint1","nameJoint2","nameJoint3","nameJoint4"]
field19.appinfo = "names of joints in pose"

ProtoInterface15.field.append(field19)
field20 = x3d.field()
field20.accessType = "inputOutput"
field20.type = "MFVec3f"
field20.name = "positionsPoseJoints"
field20.appinfo = "positions of joints in pose"

ProtoInterface15.field.append(field20)
field21 = x3d.field()
field21.accessType = "inputOutput"
field21.type = "MFRotation"
field21.name = "rotationsPoseJoints"
field21.appinfo = "rotations of joints in pose"

ProtoInterface15.field.append(field21)
field22 = x3d.field()
field22.accessType = "inputOutput"
field22.type = "SFInt32"
field22.name = "whichChoice"
field22.appinfo = "selects one of the HAnimHumanoid nodes"

ProtoInterface15.field.append(field22)
field23 = x3d.field()
field23.accessType = "inputOutput"
field23.type = "MFNode"
field23.name = "children"
field23.appinfo = "references one or more HAnimHumanoid nodes, typically via USE references"

ProtoInterface15.field.append(field23)
field24 = x3d.field()
field24.accessType = "inputOnly"
field24.type = "MFNode"
field24.name = "addChildren"
field24.appinfo = "references one or more HAnimHumanoid nodes, typically via USE references"

ProtoInterface15.field.append(field24)
field25 = x3d.field()
field25.accessType = "inputOnly"
field25.type = "MFNode"
field25.name = "removeChildren"
field25.appinfo = "references one or more HAnimHumanoid nodes, typically via USE references"

ProtoInterface15.field.append(field25)
field26 = x3d.field()
field26.accessType = "inputOutput"
field26.type = "SFBool"
field26.name = "traceEnabled"
field26.value = True
field26.appinfo = "debug trace to Browser output console"

ProtoInterface15.field.append(field26)

ProtoDeclare14.ProtoInterface = ProtoInterface15
ProtoBody27 = x3d.ProtoBody()
Switch28 = x3d.Switch()
Switch28.DEF = "PrototypeRootNode"
IS29 = x3d.IS()
connect30 = x3d.connect()
connect30.nodeField = "whichChoice"
connect30.protoField = "whichChoice"

IS29.connect.append(connect30)
connect31 = x3d.connect()
connect31.nodeField = "addChildren"
connect31.protoField = "addChildren"

IS29.connect.append(connect31)
connect32 = x3d.connect()
connect32.nodeField = "removeChildren"
connect32.protoField = "removeChildren"

IS29.connect.append(connect32)
connect33 = x3d.connect()
connect33.nodeField = "children"
connect33.protoField = "children"

IS29.connect.append(connect33)

Switch28.IS = IS29

ProtoBody27.children.append(Switch28)
MetadataString34 = x3d.MetadataString()
MetadataString34.name = "interface"
MetadataString34.reference = "https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy"
MetadataString34.value = ["X3DGroupingNode"]

ProtoBody27.children.append(MetadataString34)
Script35 = x3d.Script()
Script35.DEF = "HAnimPoseScriptOperations"
Script35.directOutput = True
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "SFBool"
field36.name = "enabled"
field36.appinfo = "default value true"

Script35.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOnly"
field37.type = "SFBool"
field37.name = "setPose"
field37.appinfo = "this event tells the HAnimPose node to do it's thing!"

Script35.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFString"
field38.name = "name"
field38.appinfo = "name of this pose"

Script35.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "MFString"
field39.name = "namesPoseJoints"
field39.appinfo = "names of joints in pose"

Script35.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "MFVec3f"
field40.name = "positionsPoseJoints"
field40.appinfo = "positions of joints in pose"

Script35.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "MFRotation"
field41.name = "rotationsPoseJoints"
field41.appinfo = "rotations of joints in pose"

Script35.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "SFInt32"
field42.name = "whichChoice"
field42.appinfo = "selects one of the HAnimHumanoid nodes"

Script35.field.append(field42)
field43 = x3d.field()
field43.accessType = "inputOutput"
field43.type = "MFNode"
field43.name = "children"
field43.appinfo = "references one or more HAnimHumanoid nodes, typically via USE references"

Script35.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOnly"
field44.type = "MFNode"
field44.name = "addChildren"
field44.appinfo = "references one or more HAnimHumanoid nodes, typically via USE references"

Script35.field.append(field44)
field45 = x3d.field()
field45.accessType = "inputOnly"
field45.type = "MFNode"
field45.name = "removeChildren"
field45.appinfo = "references one or more HAnimHumanoid nodes, typically via USE references"

Script35.field.append(field45)
field46 = x3d.field()
field46.accessType = "inputOutput"
field46.type = "SFBool"
field46.name = "traceEnabled"
field46.appinfo = "debug trace to Browser output console"

Script35.field.append(field46)

Script35.sourceCode = '''ecmascript:\n"+
"\n"+
"// Needed functionality:\n"+
"// a. get access to a humanoid\n"+
"// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose\n"+
"// c. walk the tree for all joints, then set transation, scale, rotation to default values\n"+
"// d. for each name/position/rotation triplet in the pose arrays, update the appropriate\n"+
"//    HAnimJoint nodes to that corresponding set of values\n"+
"\n"+
"var scriptName='HAnimPoseScript';\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"    // TODO author initialization code (if any) goes here\n"+
"    \n"+
"    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints\n"+
"    \n"+
"    // check humanoid connectivity\n"+
"\n"+
"    tracePrint ('initialization() successful');\n"+
"}\n"+
"function set_enabled (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field enabled\n"+
"    enabled = eventValue;\n"+
"    tracePrint ('enabled = ' + enabled);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function setPose (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOnly field setPose\n"+
"    setPose = eventValue;\n"+
"\n"+
"    tracePrint ('setPose = ' + setPose);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_name (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field name\n"+
"    name = eventValue;\n"+
"    tracePrint ('name = ' + name);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_namesPoseJoints (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field namesPoseJoints\n"+
"    namesPoseJoints = eventValue;\n"+
"    tracePrint ('namesPoseJoints = ' + namesPoseJoints);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_positionsPoseJoints (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field positionsPoseJoints\n"+
"    positionsPoseJoints = eventValue;\n"+
"    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_rotationsPoseJoints (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field rotationsPoseJoints\n"+
"    rotationsPoseJoints = eventValue;\n"+
"    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_humanoid (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field humanoid\n"+
"    humanoid = eventValue;\n"+
"    tracePrint ('humanoid = ' + humanoid);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"// ================== Trace output functions ==================\n"+
"\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"   // if traceEnabled is true, print outputString on X3D browser console\n"+
"   if (traceEnabled)\n"+
"      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');\n"+
"}\n"+
"function alwaysPrint (outputString)\n"+
"{\n"+
"      // always print outputString on X3D browser console\n"+
"      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');\n"+
"}\n"+
"function set_traceEnabled (eventValue)\n"+
"{\n"+
"      // input eventValue received for inputOutput field\n"+
"      traceEnabled = eventValue;\n"+
"}\n"+
"// ==========================================================='''
IS47 = x3d.IS()
connect48 = x3d.connect()
connect48.nodeField = "enabled"
connect48.protoField = "enabled"

IS47.connect.append(connect48)
connect49 = x3d.connect()
connect49.nodeField = "setPose"
connect49.protoField = "setPose"

IS47.connect.append(connect49)
connect50 = x3d.connect()
connect50.nodeField = "name"
connect50.protoField = "name"

IS47.connect.append(connect50)
connect51 = x3d.connect()
connect51.nodeField = "namesPoseJoints"
connect51.protoField = "namesPoseJoints"

IS47.connect.append(connect51)
connect52 = x3d.connect()
connect52.nodeField = "positionsPoseJoints"
connect52.protoField = "positionsPoseJoints"

IS47.connect.append(connect52)
connect53 = x3d.connect()
connect53.nodeField = "rotationsPoseJoints"
connect53.protoField = "rotationsPoseJoints"

IS47.connect.append(connect53)
connect54 = x3d.connect()
connect54.nodeField = "whichChoice"
connect54.protoField = "whichChoice"

IS47.connect.append(connect54)
connect55 = x3d.connect()
connect55.nodeField = "children"
connect55.protoField = "children"

IS47.connect.append(connect55)
connect56 = x3d.connect()
connect56.nodeField = "addChildren"
connect56.protoField = "addChildren"

IS47.connect.append(connect56)
connect57 = x3d.connect()
connect57.nodeField = "removeChildren"
connect57.protoField = "removeChildren"

IS47.connect.append(connect57)
connect58 = x3d.connect()
connect58.nodeField = "traceEnabled"
connect58.protoField = "traceEnabled"

IS47.connect.append(connect58)

Script35.IS = IS47

ProtoBody27.children.append(Script35)

ProtoDeclare14.ProtoBody = ProtoBody27

Scene13.children.append(ProtoDeclare14)
WorldInfo59 = x3d.WorldInfo()
WorldInfo59.DEF = "ModelInfo"
WorldInfo59.title = "HAnimPose Prototype"
WorldInfo59.info = ["Design to illustrate a potential HAnimPose node"]

Scene13.children.append(WorldInfo59)
NavigationInfo60 = x3d.NavigationInfo()

Scene13.children.append(NavigationInfo60)
ProtoInstance61 = x3d.ProtoInstance()
ProtoInstance61.name = "HAnimPose"
fieldValue62 = x3d.fieldValue()
fieldValue62.name = "name"
fieldValue62.value = "A"

ProtoInstance61.fieldValue.append(fieldValue62)
fieldValue63 = x3d.fieldValue()
fieldValue63.name = "namesPoseJoints"
fieldValue63.value = "\"l_hip\" \"r_hip\""

ProtoInstance61.fieldValue.append(fieldValue63)
fieldValue64 = x3d.fieldValue()
fieldValue64.name = "positionsPoseJoints"
fieldValue64.value = "0 0 0 0 0 0"

ProtoInstance61.fieldValue.append(fieldValue64)
fieldValue65 = x3d.fieldValue()
fieldValue65.name = "rotationsPoseJoints"
fieldValue65.value = "0 0 1 0.2 0 0 1 -0.2"

ProtoInstance61.fieldValue.append(fieldValue65)

Scene13.children.append(ProtoInstance61)
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.name = "HAnimPose"
fieldValue67 = x3d.fieldValue()
fieldValue67.name = "name"
fieldValue67.value = "T"

ProtoInstance66.fieldValue.append(fieldValue67)
fieldValue68 = x3d.fieldValue()
fieldValue68.name = "namesPoseJoints"
fieldValue68.value = "\"l_shoulder\" \"r_shoulder\""

ProtoInstance66.fieldValue.append(fieldValue68)
fieldValue69 = x3d.fieldValue()
fieldValue69.name = "positionsPoseJoints"
fieldValue69.value = "0 0 0 0 0 0"

ProtoInstance66.fieldValue.append(fieldValue69)
fieldValue70 = x3d.fieldValue()
fieldValue70.name = "rotationsPoseJoints"
fieldValue70.value = "0 0 1 1.57 0 0 1 -1.57"

ProtoInstance66.fieldValue.append(fieldValue70)

Scene13.children.append(ProtoInstance66)

X3D0.Scene = Scene13
f = open("../data/HAnimPosePrototype.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimPosePrototype.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimPosePrototype.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
