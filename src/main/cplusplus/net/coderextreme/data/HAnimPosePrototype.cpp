#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("HAnimPosePrototype.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("4 April 2025"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("modified"));
meta5.setContent(CString("Mon, 15 Sep 2025 05:20:09 GMT"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Don Brutzman"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("creator"));
meta7.setContent(CString("Joe Williams"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("warning"));
meta8.setContent(CString("under development"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("HAnimPoseDesignNotes19MAR2025.pdf"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("identifier"));
meta12.setContent(CString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d"));
head1.addMeta(&meta12);

X3D0.setHead(&head1);

Scene& Scene13 =  Scene();
ProtoDeclare& ProtoDeclare14 =  ProtoDeclare();
ProtoDeclare14.setName(CString("HAnimPose"));
ProtoDeclare14.setAppinfo(CString("Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values"));
ProtoInterface& ProtoInterface15 =  ProtoInterface();
field& field16 =  field();
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFBool"));
field16.setName(CString("enabled"));
field16.setValue(CString("true"));
field16.setAppinfo(CString("default value true"));
ProtoInterface15.addChild(&field16);

field& field17 =  field();
field17.setAccessType(CString("inputOnly"));
field17.setType(CString("SFBool"));
field17.setName(CString("setPose"));
field17.setAppinfo(CString("this event tells the HAnimPose node to do it's thing!"));
ProtoInterface15.addChild(&field17);

field& field18 =  field();
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFString"));
field18.setName(CString("name"));
field18.setValue(CString("PoseName"));
field18.setAppinfo(CString("name of this pose"));
ProtoInterface15.addChild(&field18);

field& field19 =  field();
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("MFString"));
field19.setName(CString("namesPoseJoints"));
field19.setValue(CString("\"nameJoint1\" \"nameJoint2\" \"nameJoint3\" \"nameJoint4\""));
field19.setAppinfo(CString("names of joints in pose"));
ProtoInterface15.addChild(&field19);

field& field20 =  field();
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("MFVec3f"));
field20.setName(CString("positionsPoseJoints"));
field20.setAppinfo(CString("positions of joints in pose"));
ProtoInterface15.addChild(&field20);

field& field21 =  field();
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("MFRotation"));
field21.setName(CString("rotationsPoseJoints"));
field21.setAppinfo(CString("rotations of joints in pose"));
ProtoInterface15.addChild(&field21);

field& field22 =  field();
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFInt32"));
field22.setName(CString("whichChoice"));
field22.setAppinfo(CString("selects one of the HAnimHumanoid nodes"));
ProtoInterface15.addChild(&field22);

field& field23 =  field();
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("MFNode"));
field23.setName(CString("children"));
field23.setAppinfo(CString("references one or more HAnimHumanoid nodes, typically via USE references"));
ProtoInterface15.addChild(&field23);

field& field24 =  field();
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("MFNode"));
field24.setName(CString("addChildren"));
field24.setAppinfo(CString("references one or more HAnimHumanoid nodes, typically via USE references"));
ProtoInterface15.addChild(&field24);

field& field25 =  field();
field25.setAccessType(CString("inputOnly"));
field25.setType(CString("MFNode"));
field25.setName(CString("removeChildren"));
field25.setAppinfo(CString("references one or more HAnimHumanoid nodes, typically via USE references"));
ProtoInterface15.addChild(&field25);

field& field26 =  field();
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("SFBool"));
field26.setName(CString("traceEnabled"));
field26.setValue(CString("true"));
field26.setAppinfo(CString("debug trace to Browser output console"));
ProtoInterface15.addChild(&field26);

ProtoDeclare14.addChild(&ProtoInterface15);

ProtoBody& ProtoBody27 =  ProtoBody();
Switch& Switch28 =  Switch();
Switch28.setDEF(CString("PrototypeRootNode"));
IS& IS29 =  IS();
Connect& connect30 =  Connect();
connect30.setNodeField(CString("whichChoice"));
connect30.setProtoField(CString("whichChoice"));
IS29.addChild(&connect30);

Connect& connect31 =  Connect();
connect31.setNodeField(CString("addChildren"));
connect31.setProtoField(CString("addChildren"));
IS29.addChild(&connect31);

Connect& connect32 =  Connect();
connect32.setNodeField(CString("removeChildren"));
connect32.setProtoField(CString("removeChildren"));
IS29.addChild(&connect32);

Connect& connect33 =  Connect();
connect33.setNodeField(CString("children"));
connect33.setProtoField(CString("children"));
IS29.addChild(&connect33);

Switch28.addChild(&IS29);

ProtoBody27.addChild(&Switch28);

MetadataString& MetadataString34 =  MetadataString();
MetadataString34.X3DNode::setName(CString("interface"));
MetadataString34.X3DNode::setReference(CString("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy"));
MetadataString34.setValue(new CString[]{CString("X3DGroupingNode")}, 1);
ProtoBody27.addChild(&MetadataString34);

Script& Script35 =  Script();
Script35.setDEF(CString("HAnimPoseScriptOperations"));
Script35.setDirectOutput(True);
field& field36 =  field();
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFBool"));
field36.setName(CString("enabled"));
field36.setAppinfo(CString("default value true"));
Script35.addChild(&field36);

field& field37 =  field();
field37.setAccessType(CString("inputOnly"));
field37.setType(CString("SFBool"));
field37.setName(CString("setPose"));
field37.setAppinfo(CString("this event tells the HAnimPose node to do it's thing!"));
Script35.addChild(&field37);

field& field38 =  field();
field38.setAccessType(CString("inputOutput"));
field38.setType(CString("SFString"));
field38.setName(CString("name"));
field38.setAppinfo(CString("name of this pose"));
Script35.addChild(&field38);

field& field39 =  field();
field39.setAccessType(CString("inputOutput"));
field39.setType(CString("MFString"));
field39.setName(CString("namesPoseJoints"));
field39.setAppinfo(CString("names of joints in pose"));
Script35.addChild(&field39);

field& field40 =  field();
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("MFVec3f"));
field40.setName(CString("positionsPoseJoints"));
field40.setAppinfo(CString("positions of joints in pose"));
Script35.addChild(&field40);

field& field41 =  field();
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("MFRotation"));
field41.setName(CString("rotationsPoseJoints"));
field41.setAppinfo(CString("rotations of joints in pose"));
Script35.addChild(&field41);

field& field42 =  field();
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFInt32"));
field42.setName(CString("whichChoice"));
field42.setAppinfo(CString("selects one of the HAnimHumanoid nodes"));
Script35.addChild(&field42);

field& field43 =  field();
field43.setAccessType(CString("inputOutput"));
field43.setType(CString("MFNode"));
field43.setName(CString("children"));
field43.setAppinfo(CString("references one or more HAnimHumanoid nodes, typically via USE references"));
Script35.addChild(&field43);

field& field44 =  field();
field44.setAccessType(CString("inputOnly"));
field44.setType(CString("MFNode"));
field44.setName(CString("addChildren"));
field44.setAppinfo(CString("references one or more HAnimHumanoid nodes, typically via USE references"));
Script35.addChild(&field44);

field& field45 =  field();
field45.setAccessType(CString("inputOnly"));
field45.setType(CString("MFNode"));
field45.setName(CString("removeChildren"));
field45.setAppinfo(CString("references one or more HAnimHumanoid nodes, typically via USE references"));
Script35.addChild(&field45);

field& field46 =  field();
field46.setAccessType(CString("inputOutput"));
field46.setType(CString("SFBool"));
field46.setName(CString("traceEnabled"));
field46.setAppinfo(CString("debug trace to Browser output console"));
Script35.addChild(&field46);


Script35.setSourceCode(CString("ecmascript:")+
_T("// Needed functionality:")+
_T("// a. get access to a humanoid")+
_T("// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose")+
_T("// c. walk the tree for all joints, then set transation, scale, rotation to default values")+
_T("// d. for each name/position/rotation triplet in the pose arrays, update the appropriate")+
_T("//    HAnimJoint nodes to that corresponding set of values")+
_T("var scriptName='HAnimPoseScript';")+
_T("function initialize ()")+
_T("{")+
_T("    // TODO author initialization code (if any) goes here")+
_T("    ")+
_T("    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints")+
_T("    ")+
_T("    // check humanoid connectivity")+
_T("    tracePrint ('initialization() successful');")+
_T("}")+
_T("function set_enabled (eventValue)")+
_T("{")+
_T("    // input eventValue received for inputOutput field enabled")+
_T("    enabled = eventValue;")+
_T("    tracePrint ('enabled = ' + enabled);")+
_T("    // TODO author code (if any) goes here")+
_T("}")+
_T("function setPose (eventValue)")+
_T("{")+
_T("    // input eventValue received for inputOnly field setPose")+
_T("    setPose = eventValue;")+
_T("    tracePrint ('setPose = ' + setPose);")+
_T("    // TODO author code (if any) goes here")+
_T("}")+
_T("function set_name (eventValue)")+
_T("{")+
_T("    // input eventValue received for inputOutput field name")+
_T("    name = eventValue;")+
_T("    tracePrint ('name = ' + name);")+
_T("    // TODO author code (if any) goes here")+
_T("}")+
_T("function set_namesPoseJoints (eventValue)")+
_T("{")+
_T("    // input eventValue received for inputOutput field namesPoseJoints")+
_T("    namesPoseJoints = eventValue;")+
_T("    tracePrint ('namesPoseJoints = ' + namesPoseJoints);")+
_T("    // TODO author code (if any) goes here")+
_T("}")+
_T("function set_positionsPoseJoints (eventValue)")+
_T("{")+
_T("    // input eventValue received for inputOutput field positionsPoseJoints")+
_T("    positionsPoseJoints = eventValue;")+
_T("    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);")+
_T("    // TODO author code (if any) goes here")+
_T("}")+
_T("function set_rotationsPoseJoints (eventValue)")+
_T("{")+
_T("    // input eventValue received for inputOutput field rotationsPoseJoints")+
_T("    rotationsPoseJoints = eventValue;")+
_T("    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);")+
_T("    // TODO author code (if any) goes here")+
_T("}")+
_T("function set_humanoid (eventValue)")+
_T("{")+
_T("    // input eventValue received for inputOutput field humanoid")+
_T("    humanoid = eventValue;")+
_T("    tracePrint ('humanoid = ' + humanoid);")+
_T("    // TODO author code (if any) goes here")+
_T("}")+
_T("// ================== Trace output functions ==================")+
_T("function tracePrint (outputString)")+
_T("{")+
_T("   // if traceEnabled is true, print outputString on X3D browser console")+
_T("   if (traceEnabled)")+
_T("      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');")+
_T("}")+
_T("function alwaysPrint (outputString)")+
_T("{")+
_T("      // always print outputString on X3D browser console")+
_T("      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');")+
_T("}")+
_T("function set_traceEnabled (eventValue)")+
_T("{")+
_T("      // input eventValue received for inputOutput field")+
_T("      traceEnabled = eventValue;")+
_T("}")+
_T("// ==========================================================="));
IS& IS47 =  IS();
Connect& connect48 =  Connect();
connect48.setNodeField(CString("enabled"));
connect48.setProtoField(CString("enabled"));
IS47.addChild(&connect48);

Connect& connect49 =  Connect();
connect49.setNodeField(CString("setPose"));
connect49.setProtoField(CString("setPose"));
IS47.addChild(&connect49);

Connect& connect50 =  Connect();
connect50.setNodeField(CString("name"));
connect50.setProtoField(CString("name"));
IS47.addChild(&connect50);

Connect& connect51 =  Connect();
connect51.setNodeField(CString("namesPoseJoints"));
connect51.setProtoField(CString("namesPoseJoints"));
IS47.addChild(&connect51);

Connect& connect52 =  Connect();
connect52.setNodeField(CString("positionsPoseJoints"));
connect52.setProtoField(CString("positionsPoseJoints"));
IS47.addChild(&connect52);

Connect& connect53 =  Connect();
connect53.setNodeField(CString("rotationsPoseJoints"));
connect53.setProtoField(CString("rotationsPoseJoints"));
IS47.addChild(&connect53);

Connect& connect54 =  Connect();
connect54.setNodeField(CString("whichChoice"));
connect54.setProtoField(CString("whichChoice"));
IS47.addChild(&connect54);

Connect& connect55 =  Connect();
connect55.setNodeField(CString("children"));
connect55.setProtoField(CString("children"));
IS47.addChild(&connect55);

Connect& connect56 =  Connect();
connect56.setNodeField(CString("addChildren"));
connect56.setProtoField(CString("addChildren"));
IS47.addChild(&connect56);

Connect& connect57 =  Connect();
connect57.setNodeField(CString("removeChildren"));
connect57.setProtoField(CString("removeChildren"));
IS47.addChild(&connect57);

Connect& connect58 =  Connect();
connect58.setNodeField(CString("traceEnabled"));
connect58.setProtoField(CString("traceEnabled"));
IS47.addChild(&connect58);

Script35.addChild(&IS47);

ProtoBody27.addChild(&Script35);

ProtoDeclare14.addChild(&ProtoBody27);

Scene13.addChild(&ProtoDeclare14);

WorldInfo& WorldInfo59 =  WorldInfo();
WorldInfo59.setDEF(CString("ModelInfo"));
WorldInfo59.setTitle(CString("HAnimPose Prototype"));
WorldInfo59.setInfo(new CString[]{CString("Design to illustrate a potential HAnimPose node")}, 1);
Scene13.addChild(&WorldInfo59);

NavigationInfo& NavigationInfo60 =  NavigationInfo();
Scene13.addChild(&NavigationInfo60);

ProtoInstance& ProtoInstance61 =  ProtoInstance();
ProtoInstance61.setName(CString("HAnimPose"));
fieldValue& fieldValue62 =  fieldValue();
fieldValue62.setName(CString("name"));
fieldValue62.setValue(CString("A"));
ProtoInstance61.addChild(&fieldValue62);

fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(CString("namesPoseJoints"));
fieldValue63.setValue(CString("\"l_hip\" \"r_hip\""));
ProtoInstance61.addChild(&fieldValue63);

fieldValue& fieldValue64 =  fieldValue();
fieldValue64.setName(CString("positionsPoseJoints"));
fieldValue64.setValue(CString("0 0 0 0 0 0"));
ProtoInstance61.addChild(&fieldValue64);

fieldValue& fieldValue65 =  fieldValue();
fieldValue65.setName(CString("rotationsPoseJoints"));
fieldValue65.setValue(CString("0 0 1 0.2 0 0 1 -0.2"));
ProtoInstance61.addChild(&fieldValue65);

Scene13.addChild(&ProtoInstance61);

ProtoInstance& ProtoInstance66 =  ProtoInstance();
ProtoInstance66.setName(CString("HAnimPose"));
fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(CString("name"));
fieldValue67.setValue(CString("T"));
ProtoInstance66.addChild(&fieldValue67);

fieldValue& fieldValue68 =  fieldValue();
fieldValue68.setName(CString("namesPoseJoints"));
fieldValue68.setValue(CString("\"l_shoulder\" \"r_shoulder\""));
ProtoInstance66.addChild(&fieldValue68);

fieldValue& fieldValue69 =  fieldValue();
fieldValue69.setName(CString("positionsPoseJoints"));
fieldValue69.setValue(CString("0 0 0 0 0 0"));
ProtoInstance66.addChild(&fieldValue69);

fieldValue& fieldValue70 =  fieldValue();
fieldValue70.setName(CString("rotationsPoseJoints"));
fieldValue70.setValue(CString("0 0 1 1.57 0 0 1 -1.57"));
ProtoInstance66.addChild(&fieldValue70);

Scene13.addChild(&ProtoInstance66);

X3D0.setScene(&Scene13);

}
