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
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("HAnimPosePrototype.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("info"));
meta4.setContent(CString("This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4)."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("created"));
meta5.setContent(CString("2 October 2025"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("14 December 2025"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("creator"));
meta7.setContent(CString("Don Brutzman"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("creator"));
meta8.setContent(CString("Joe Williams"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("contributor"));
meta9.setContent(CString("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("HAnimPosePrototype.console.txt"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("MovingImage"));
meta11.setContent(CString("demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("Image"));
meta12.setContent(CString("HAnimPoseExampleTouchDown.png"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("Image"));
meta13.setContent(CString("HAnimPoseExampleTouchDownFaceLeftAPose.png"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("Image"));
meta14.setContent(CString("images/HAnimPoseExampleBoxMan1.png"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("Image"));
meta15.setContent(CString("images/HAnimPoseExampleBoxMan2.png"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("Image"));
meta16.setContent(CString("images/HAnimPoseExampleJoeKick.png"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("Image"));
meta17.setContent(CString("images/HAnimPoseExampleJoeSkeletonSkinSite.png"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("Image"));
meta18.setContent(CString("images/HAnimPoseExampleKoreanCharacter01Jin.png"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("Image"));
meta19.setContent(CString("images/HAnimPoseExampleKoreanCharacter02Chul.png"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("Image"));
meta20.setContent(CString("images/HAnimPoseExampleKoreanCharacter03Hyun.png"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("Image"));
meta21.setContent(CString("images/HAnimPoseExampleKoreanCharacter04Young.png"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("Image"));
meta22.setContent(CString("images/HAnimPoseExampleKoreanCharacter05Ju.png"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("Image"));
meta23.setContent(CString("images/HAnimPoseExampleKoreanCharacter06Ga.png"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("Image"));
meta24.setContent(CString("images/HAnimPoseExampleKoreanCharacter07No.png"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("Image"));
meta25.setContent(CString("images/HAnimPoseExampleKoreanCharacter08Da.png"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("Image"));
meta26.setContent(CString("images/HAnimPoseExampleKoreanCharacter09Ru.png"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(CString("Image"));
meta27.setContent(CString("images/HAnimPoseExampleKoreanCharacter10Mi.png"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(CString("Image"));
meta28.setContent(CString("images/HAnimPoseExampleKoreanCharacter11Min.png"));
head1.addMeta(&meta28);

meta& meta29 =  meta();
meta29.setName(CString("Image"));
meta29.setContent(CString("images/HAnimPoseExampleKoreanCharacter12Sun.png"));
head1.addMeta(&meta29);

meta& meta30 =  meta();
meta30.setName(CString("specificationSection"));
meta30.setContent(CString("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"));
head1.addMeta(&meta30);

meta& meta31 =  meta();
meta31.setName(CString("specificationUrl"));
meta31.setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"));
head1.addMeta(&meta31);

meta& meta32 =  meta();
meta32.setName(CString("specificationSection"));
meta32.setContent(CString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"));
head1.addMeta(&meta32);

meta& meta33 =  meta();
meta33.setName(CString("specificationUrl"));
meta33.setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"));
head1.addMeta(&meta33);

meta& meta34 =  meta();
meta34.setName(CString("specificationSection"));
meta34.setContent(CString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"));
head1.addMeta(&meta34);

meta& meta35 =  meta();
meta35.setName(CString("specificationUrl"));
meta35.setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"));
head1.addMeta(&meta35);

meta& meta36 =  meta();
meta36.setName(CString("reference"));
meta36.setContent(CString("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript"));
head1.addMeta(&meta36);

meta& meta37 =  meta();
meta37.setName(CString("reference"));
meta37.setContent(CString("earlier version of this prototype: originals/HAnimPosePreliminary.x3d"));
head1.addMeta(&meta37);

meta& meta38 =  meta();
meta38.setName(CString("generator"));
meta38.setContent(CString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta38);

meta& meta39 =  meta();
meta39.setName(CString("generator"));
meta39.setContent(CString("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize"));
head1.addMeta(&meta39);

meta& meta40 =  meta();
meta40.setName(CString("identifier"));
meta40.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d"));
head1.addMeta(&meta40);

meta& meta41 =  meta();
meta41.setName(CString("license"));
meta41.setContent(CString("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta41);

X3D0.setHead(&head1);

Scene& Scene42 =  Scene();
WorldInfo& WorldInfo43 =  WorldInfo();
WorldInfo43.setDEF(CString("ModelInfo"));
WorldInfo43.setInfo(new CString[]{CString("Design to illustrate a potential HAnimPose node")}, 1);
WorldInfo43.setTitle(CString("HAnimPosePrototype.x3d"));
Scene42.addChild(&WorldInfo43);

Background& Background44 =  Background();
Background44.setSkyColor(new float[]{0.8,0.8,1}, 3);
Scene42.addChild(&Background44);

NavigationInfo& NavigationInfo45 =  NavigationInfo();
Scene42.addChild(&NavigationInfo45);

Group& Group46 =  Group();
Group46.setDEF(CString("HandleInlineLoading"));
//Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2
//Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun
Inline& Inline47 =  Inline();
Inline47.setDEF(CString("HumanoidInline"));
Inline47.setDescription(CString("remote HAnimHumanoid for IMPORT"));
Inline47.setUrl(new CString[]{CString("../Skin/BoxMan2.x3d"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d")}, 2);
Group46.addChild(&Inline47);

//Note that the following importedDEF must match the EXPORT name found in remote file
IMPORT& IMPORT48 =  IMPORT();
IMPORT48.setAS(CString("HumanoidImported"));
IMPORT48.setImportedDEF(CString("BoxMan2"));
IMPORT48.setInlineDEF(CString("HumanoidInline"));
Group46.addChild(&IMPORT48);

LoadSensor& LoadSensor49 =  LoadSensor();
LoadSensor49.setDEF(CString("HumanoidInlineLoadSensor"));
LoadSensor49.setTimeOut(2);
Inline& Inline50 =  Inline();
Inline50.setUSE(CString("HumanoidInline"));
LoadSensor49.addChildren(Inline50);

Group46.addChild(&LoadSensor49);

Scene42.addChild(&Group46);

ProtoDeclare& ProtoDeclare51 =  ProtoDeclare();
ProtoDeclare51.setName(CString("HAnimPose"));
ProtoDeclare51.setAppinfo(CString("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."));
ProtoInterface& ProtoInterface52 =  ProtoInterface();
field& field53 =  field();
field53.setName(CString("parentHAnimHumanoid"));
field53.setAccessType(CString("inputOutput"));
field53.setAppinfo(CString("HAnimHumanoid for this Pose to act upon"));
field53.setType(CString("SFNode"));
//HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation
ProtoInterface52.addChild(&field53);

field& field54 =  field();
field54.setName(CString("name"));
field54.setAccessType(CString("inputOutput"));
field54.setAppinfo(CString("name of this pose"));
field54.setType(CString("SFString"));
field54.setValue(CString("newPoseName"));
ProtoInterface52.addChild(&field54);

field& field55 =  field();
field55.setName(CString("children"));
field55.setAccessType(CString("inputOutput"));
field55.setAppinfo(CString("joint values to apply to HAnimHumanoid"));
field55.setType(CString("MFNode"));
//initializating Joint nodes (if any) go here
ProtoInterface52.addChild(&field55);

field& field56 =  field();
field56.setName(CString("description"));
field56.setAccessType(CString("inputOutput"));
field56.setAppinfo(CString("explanation of purpose"));
field56.setType(CString("SFString"));
ProtoInterface52.addChild(&field56);

field& field57 =  field();
field57.setName(CString("enabled"));
field57.setAccessType(CString("inputOutput"));
field57.setAppinfo(CString("default value true"));
field57.setType(CString("SFBool"));
field57.setValue(CString("true"));
ProtoInterface52.addChild(&field57);

field& field58 =  field();
field58.setName(CString("loa"));
field58.setAccessType(CString("initializeOnly"));
field58.setAppinfo(CString("default is no loa"));
field58.setType(CString("SFInt32"));
field58.setValue(CString("-1"));
ProtoInterface52.addChild(&field58);

field& field59 =  field();
field59.setName(CString("transitionDuration"));
field59.setAccessType(CString("inputOutput"));
field59.setAppinfo(CString("how many seconds to achieve the pose"));
field59.setType(CString("SFTime"));
field59.setValue(CString("0"));
ProtoInterface52.addChild(&field59);

field& field60 =  field();
field60.setName(CString("metadata"));
field60.setAccessType(CString("inputOutput"));
field60.setAppinfo(CString("single Metadata* node"));
field60.setType(CString("SFNode"));
ProtoInterface52.addChild(&field60);

field& field61 =  field();
field61.setName(CString("isActive"));
field61.setAccessType(CString("outputOnly"));
field61.setAppinfo(CString("event indicating when pose transition is active"));
field61.setType(CString("SFBool"));
ProtoInterface52.addChild(&field61);

field& field62 =  field();
field62.setName(CString("commencePose"));
field62.setAccessType(CString("inputOnly"));
field62.setAppinfo(CString("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"));
field62.setType(CString("SFBool"));
ProtoInterface52.addChild(&field62);

field& field63 =  field();
field63.setName(CString("resetAllJoints"));
field63.setAccessType(CString("inputOnly"));
field63.setAppinfo(CString("reset the skeleton to I pose with all joints zeroed"));
field63.setType(CString("SFBool"));
ProtoInterface52.addChild(&field63);

field& field64 =  field();
field64.setName(CString("set_fraction"));
field64.setAccessType(CString("inputOnly"));
field64.setAppinfo(CString("allows transition to proceed incrementally from fraction [0..10"));
field64.setType(CString("SFFloat"));
ProtoInterface52.addChild(&field64);

field& field65 =  field();
field65.setName(CString("set_startTime"));
field65.setAccessType(CString("inputOnly"));
field65.setAppinfo(CString("starts the animation clock"));
field65.setType(CString("SFTime"));
ProtoInterface52.addChild(&field65);

field& field66 =  field();
field66.setName(CString("isLoaded"));
field66.setAccessType(CString("inputOnly"));
field66.setAppinfo(CString("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"));
field66.setType(CString("SFBool"));
ProtoInterface52.addChild(&field66);

field& field67 =  field();
field67.setName(CString("traceEnabled"));
field67.setAccessType(CString("inputOutput"));
field67.setAppinfo(CString("debug trace to Browser output console this is a local prototype field"));
field67.setType(CString("SFBool"));
field67.setValue(CString("true"));
ProtoInterface52.addChild(&field67);

ProtoDeclare51.addChild(&ProtoInterface52);

ProtoBody& ProtoBody68 =  ProtoBody();
TimeSensor& TimeSensor69 =  TimeSensor();
TimeSensor69.setDEF(CString("ClockTimeSensor"));
TimeSensor69.setDescription(CString("control timing of pose animation when triggered"));
IS& IS70 =  IS();
Connect& connect71 =  Connect();
connect71.setNodeField(CString("enabled"));
connect71.setProtoField(CString("enabled"));
IS70.addChild(&connect71);

Connect& connect72 =  Connect();
connect72.setNodeField(CString("cycleInterval"));
connect72.setProtoField(CString("transitionDuration"));
IS70.addChild(&connect72);

Connect& connect73 =  Connect();
connect73.setNodeField(CString("isActive"));
connect73.setProtoField(CString("isActive"));
IS70.addChild(&connect73);

Connect& connect74 =  Connect();
connect74.setNodeField(CString("startTime"));
connect74.setProtoField(CString("set_startTime"));
IS70.addChild(&connect74);

Connect& connect75 =  Connect();
connect75.setNodeField(CString("metadata"));
connect75.setProtoField(CString("metadata"));
IS70.addChild(&connect75);

TimeSensor69.addChild(&IS70);

ProtoBody68.addChild(&TimeSensor69);

TimeSensor& TimeSensor76 =  TimeSensor();
TimeSensor76.setDEF(CString("ResetTimeSensor"));
TimeSensor76.setDescription(CString("control timing of skeleton reset to \"A\" pose when triggered"));
IS& IS77 =  IS();
Connect& connect78 =  Connect();
connect78.setNodeField(CString("enabled"));
connect78.setProtoField(CString("enabled"));
IS77.addChild(&connect78);

Connect& connect79 =  Connect();
connect79.setNodeField(CString("cycleInterval"));
connect79.setProtoField(CString("transitionDuration"));
IS77.addChild(&connect79);

Connect& connect80 =  Connect();
connect80.setNodeField(CString("startTime"));
connect80.setProtoField(CString("set_startTime"));
IS77.addChild(&connect80);

//no need to report isActive since that would be duplicative
TimeSensor76.addChild(&IS77);

ProtoBody68.addChild(&TimeSensor76);

Group& Group81 =  Group();
Group81.setDEF(CString("PoseInterpolatorGroup"));
//interpolators generated by prototype script appear here at runtime
ProtoBody68.addChild(&Group81);

Group& Group82 =  Group();
Group82.setDEF(CString("ResetInterpolatorGroup"));
//interpolators generated by prototype script appear here at runtime
ProtoBody68.addChild(&Group82);

Script& Script83 =  Script();
Script83.setDEF(CString("HAnimPoseScript"));
Script83.setDirectOutput(True);
Script83.setUrl(new CString[]{CString("HAnimPosePrototypeScript.js"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js")}, 2);
field& field84 =  field();
field84.setName(CString("parentHAnimHumanoid"));
field84.setAccessType(CString("inputOutput"));
field84.setAppinfo(CString("Humanoid for this Pose to act upon"));
field84.setType(CString("SFNode"));
//initialization node (if any) goes here
Script83.addChild(&field84);

field& field85 =  field();
field85.setName(CString("name"));
field85.setAccessType(CString("inputOutput"));
field85.setAppinfo(CString("name of this pose"));
field85.setType(CString("SFString"));
Script83.addChild(&field85);

field& field86 =  field();
field86.setName(CString("loa"));
field86.setAccessType(CString("initializeOnly"));
field86.setAppinfo(CString("default is no loa"));
field86.setType(CString("SFInt32"));
Script83.addChild(&field86);

field& field87 =  field();
field87.setName(CString("description"));
field87.setAccessType(CString("inputOutput"));
field87.setAppinfo(CString("explanation of purpose"));
field87.setType(CString("SFString"));
Script83.addChild(&field87);

field& field88 =  field();
field88.setName(CString("enabled"));
field88.setAccessType(CString("inputOutput"));
field88.setAppinfo(CString("default value true"));
field88.setType(CString("SFBool"));
Script83.addChild(&field88);

field& field89 =  field();
field89.setName(CString("resetAllJoints"));
field89.setAccessType(CString("inputOnly"));
field89.setAppinfo(CString("reset the skeleton to I pose with all joints zeroed"));
field89.setType(CString("SFBool"));
Script83.addChild(&field89);

field& field90 =  field();
field90.setName(CString("children"));
field90.setAccessType(CString("inputOutput"));
field90.setAppinfo(CString("joint values to apply to HAnimHumanoid"));
field90.setType(CString("MFNode"));
//initializating Joint nodes (if any) go here
Script83.addChild(&field90);

field& field91 =  field();
field91.setName(CString("transitionDuration"));
field91.setAccessType(CString("inputOutput"));
field91.setAppinfo(CString("how many seconds to achieve the pose"));
field91.setType(CString("SFTime"));
Script83.addChild(&field91);

field& field92 =  field();
field92.setName(CString("commencePose"));
field92.setAccessType(CString("inputOnly"));
field92.setAppinfo(CString("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"));
field92.setType(CString("SFBool"));
Script83.addChild(&field92);

field& field93 =  field();
field93.setName(CString("set_fraction"));
field93.setAccessType(CString("inputOnly"));
field93.setAppinfo(CString("allows transition to proceed incrementally from fraction [0..10"));
field93.setType(CString("SFFloat"));
Script83.addChild(&field93);

field& field94 =  field();
field94.setName(CString("set_startTime"));
field94.setAccessType(CString("inputOnly"));
field94.setAppinfo(CString("starts the animation clock"));
field94.setType(CString("SFTime"));
Script83.addChild(&field94);

field& field95 =  field();
field95.setName(CString("isLoaded"));
field95.setAccessType(CString("inputOnly"));
field95.setAppinfo(CString("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"));
field95.setType(CString("SFBool"));
Script83.addChild(&field95);

field& field96 =  field();
field96.setName(CString("traceEnabled"));
field96.setAccessType(CString("inputOutput"));
field96.setAppinfo(CString("debug trace to Browser output console"));
field96.setType(CString("SFBool"));
Script83.addChild(&field96);

field& field97 =  field();
field97.setName(CString("numberPoseJoints"));
field97.setAccessType(CString("initializeOnly"));
field97.setAppinfo(CString("number of joints found in children field"));
field97.setType(CString("SFInt32"));
field97.setValue(CString("0"));
Script83.addChild(&field97);

field& field98 =  field();
field98.setName(CString("numberSkeletonJoints"));
field98.setAccessType(CString("initializeOnly"));
field98.setAppinfo(CString("number of joints found in Humanoid"));
field98.setType(CString("SFInt32"));
field98.setValue(CString("0"));
Script83.addChild(&field98);

field& field99 =  field();
field99.setName(CString("jointOrientationInterpolators"));
field99.setAccessType(CString("initializeOnly"));
field99.setAppinfo(CString("OrientationInterpolator node array matching number of children"));
field99.setType(CString("MFNode"));
//initializating Joint nodes (if any) go here
Script83.addChild(&field99);

IS& IS100 =  IS();
Connect& connect101 =  Connect();
connect101.setNodeField(CString("parentHAnimHumanoid"));
connect101.setProtoField(CString("parentHAnimHumanoid"));
IS100.addChild(&connect101);

Connect& connect102 =  Connect();
connect102.setNodeField(CString("name"));
connect102.setProtoField(CString("name"));
IS100.addChild(&connect102);

Connect& connect103 =  Connect();
connect103.setNodeField(CString("loa"));
connect103.setProtoField(CString("loa"));
IS100.addChild(&connect103);

Connect& connect104 =  Connect();
connect104.setNodeField(CString("description"));
connect104.setProtoField(CString("description"));
IS100.addChild(&connect104);

Connect& connect105 =  Connect();
connect105.setNodeField(CString("enabled"));
connect105.setProtoField(CString("enabled"));
IS100.addChild(&connect105);

Connect& connect106 =  Connect();
connect106.setNodeField(CString("resetAllJoints"));
connect106.setProtoField(CString("resetAllJoints"));
IS100.addChild(&connect106);

Connect& connect107 =  Connect();
connect107.setNodeField(CString("children"));
connect107.setProtoField(CString("children"));
IS100.addChild(&connect107);

Connect& connect108 =  Connect();
connect108.setNodeField(CString("transitionDuration"));
connect108.setProtoField(CString("transitionDuration"));
IS100.addChild(&connect108);

Connect& connect109 =  Connect();
connect109.setNodeField(CString("commencePose"));
connect109.setProtoField(CString("commencePose"));
IS100.addChild(&connect109);

Connect& connect110 =  Connect();
connect110.setNodeField(CString("set_fraction"));
connect110.setProtoField(CString("set_fraction"));
IS100.addChild(&connect110);

Connect& connect111 =  Connect();
connect111.setNodeField(CString("set_startTime"));
connect111.setProtoField(CString("set_startTime"));
IS100.addChild(&connect111);

Connect& connect112 =  Connect();
connect112.setNodeField(CString("isLoaded"));
connect112.setProtoField(CString("isLoaded"));
IS100.addChild(&connect112);

Connect& connect113 =  Connect();
connect113.setNodeField(CString("traceEnabled"));
connect113.setProtoField(CString("traceEnabled"));
IS100.addChild(&connect113);

Script83.addChild(&IS100);

ProtoBody68.addChild(&Script83);

ProtoDeclare51.addChild(&ProtoBody68);

Scene42.addChild(&ProtoDeclare51);

Viewpoint& Viewpoint114 =  Viewpoint();
Viewpoint114.setDescription(CString("HAnimPose for HumanoidInline IMPORT model"));
Viewpoint114.setPosition(new float[]{0,1,4});
Scene42.addChild(&Viewpoint114);

//no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...
ProtoInstance& ProtoInstance115 =  ProtoInstance();
ProtoInstance115.setName(CString("HAnimPose"));
ProtoInstance115.setDEF(CString("T_Pose"));
fieldValue& fieldValue116 =  fieldValue();
fieldValue116.setName(CString("name"));
fieldValue116.setValue(CString("T"));
ProtoInstance115.addChild(&fieldValue116);

fieldValue& fieldValue117 =  fieldValue();
fieldValue117.setName(CString("enabled"));
fieldValue117.setValue(CString("true"));
ProtoInstance115.addChild(&fieldValue117);

fieldValue& fieldValue118 =  fieldValue();
fieldValue118.setName(CString("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
//debug test case for incorrect node type: <HAnimJoint DEF=\"ErrorDiagnosticsTest\" USE='HumanoidImported'/>
HAnimHumanoid& HAnimHumanoid119 =  HAnimHumanoid();
HAnimHumanoid119.setUSE(CString("HumanoidImported"));
fieldValue118.addChild(&HAnimHumanoid119);

ProtoInstance115.addChild(&fieldValue118);

fieldValue& fieldValue120 =  fieldValue();
fieldValue120.setName(CString("loa"));
fieldValue120.setValue(CString("1"));
ProtoInstance115.addChild(&fieldValue120);

fieldValue& fieldValue121 =  fieldValue();
fieldValue121.setName(CString("description"));
fieldValue121.setValue(CString("arms stretched outward and level similar to letter T"));
ProtoInstance115.addChild(&fieldValue121);

fieldValue& fieldValue122 =  fieldValue();
fieldValue122.setName(CString("children"));
HAnimJoint& HAnimJoint123 =  HAnimJoint();
HAnimJoint123.X3DNode::setName(CString("l_shoulder"));
HAnimJoint123.setDEF(CString("PoseJoint_l_shoulder_1"));
HAnimJoint123.setDescription(CString("left shoulder"));
HAnimJoint123.setRotation(new float[]{0,0,1,1.57});
HAnimJoint123.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint123.setLlimit(new float[]{0,0,0}, 3);
fieldValue122.addChild(&HAnimJoint123);

HAnimJoint& HAnimJoint124 =  HAnimJoint();
HAnimJoint124.X3DNode::setName(CString("r_shoulder"));
HAnimJoint124.setDEF(CString("PoseJoint_r_shoulder_1"));
HAnimJoint124.setDescription(CString("right shoulder"));
HAnimJoint124.setRotation(new float[]{0,0,-1,1.57});
HAnimJoint124.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint124.setLlimit(new float[]{0,0,0}, 3);
fieldValue122.addChild(&HAnimJoint124);

//test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/
ProtoInstance115.addChild(&fieldValue122);

fieldValue& fieldValue125 =  fieldValue();
fieldValue125.setName(CString("transitionDuration"));
fieldValue125.setValue(CString("1.3"));
ProtoInstance115.addChild(&fieldValue125);

Scene42.addChild(&ProtoInstance115);

ProtoInstance& ProtoInstance126 =  ProtoInstance();
ProtoInstance126.setName(CString("HAnimPose"));
ProtoInstance126.setDEF(CString("A_Pose"));
fieldValue& fieldValue127 =  fieldValue();
fieldValue127.setName(CString("name"));
fieldValue127.setValue(CString("A"));
ProtoInstance126.addChild(&fieldValue127);

fieldValue& fieldValue128 =  fieldValue();
fieldValue128.setName(CString("enabled"));
fieldValue128.setValue(CString("true"));
ProtoInstance126.addChild(&fieldValue128);

fieldValue& fieldValue129 =  fieldValue();
fieldValue129.setName(CString("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid& HAnimHumanoid130 =  HAnimHumanoid();
HAnimHumanoid130.setUSE(CString("HumanoidImported"));
fieldValue129.addChild(&HAnimHumanoid130);

ProtoInstance126.addChild(&fieldValue129);

fieldValue& fieldValue131 =  fieldValue();
fieldValue131.setName(CString("loa"));
fieldValue131.setValue(CString("1"));
ProtoInstance126.addChild(&fieldValue131);

fieldValue& fieldValue132 =  fieldValue();
fieldValue132.setName(CString("description"));
fieldValue132.setValue(CString("arms stretched outward and downward similar to letter A"));
ProtoInstance126.addChild(&fieldValue132);

fieldValue& fieldValue133 =  fieldValue();
fieldValue133.setName(CString("children"));
HAnimJoint& HAnimJoint134 =  HAnimJoint();
HAnimJoint134.X3DNode::setName(CString("l_shoulder"));
HAnimJoint134.setDEF(CString("PoseJoint_l_shoulder"));
HAnimJoint134.setDescription(CString("left shoulder"));
HAnimJoint134.setRotation(new float[]{0,0,1,0.5});
HAnimJoint134.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint134.setLlimit(new float[]{0,0,0}, 3);
fieldValue133.addChild(&HAnimJoint134);

HAnimJoint& HAnimJoint135 =  HAnimJoint();
HAnimJoint135.X3DNode::setName(CString("r_shoulder"));
HAnimJoint135.setDEF(CString("PoseJoint_r_shoulder"));
HAnimJoint135.setDescription(CString("right shoulder"));
HAnimJoint135.setRotation(new float[]{0,0,-1,0.5});
HAnimJoint135.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint135.setLlimit(new float[]{0,0,0}, 3);
fieldValue133.addChild(&HAnimJoint135);

ProtoInstance126.addChild(&fieldValue133);

fieldValue& fieldValue136 =  fieldValue();
fieldValue136.setName(CString("transitionDuration"));
fieldValue136.setValue(CString("1.2"));
ProtoInstance126.addChild(&fieldValue136);

fieldValue& fieldValue137 =  fieldValue();
fieldValue137.setName(CString("traceEnabled"));
fieldValue137.setValue(CString("true"));
ProtoInstance126.addChild(&fieldValue137);

Scene42.addChild(&ProtoInstance126);

ProtoInstance& ProtoInstance138 =  ProtoInstance();
ProtoInstance138.setName(CString("HAnimPose"));
ProtoInstance138.setDEF(CString("TouchDown_Pose"));
//thanks Joe
fieldValue& fieldValue139 =  fieldValue();
fieldValue139.setName(CString("name"));
fieldValue139.setValue(CString("TouchDown"));
ProtoInstance138.addChild(&fieldValue139);

fieldValue& fieldValue140 =  fieldValue();
fieldValue140.setName(CString("enabled"));
fieldValue140.setValue(CString("true"));
ProtoInstance138.addChild(&fieldValue140);

fieldValue& fieldValue141 =  fieldValue();
fieldValue141.setName(CString("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid& HAnimHumanoid142 =  HAnimHumanoid();
HAnimHumanoid142.setUSE(CString("HumanoidImported"));
fieldValue141.addChild(&HAnimHumanoid142);

ProtoInstance138.addChild(&fieldValue141);

fieldValue& fieldValue143 =  fieldValue();
fieldValue143.setName(CString("loa"));
fieldValue143.setValue(CString("1"));
ProtoInstance138.addChild(&fieldValue143);

fieldValue& fieldValue144 =  fieldValue();
fieldValue144.setName(CString("description"));
fieldValue144.setValue(CString("arms and legs stretched outward providing a TouchDown gesture"));
ProtoInstance138.addChild(&fieldValue144);

fieldValue& fieldValue145 =  fieldValue();
fieldValue145.setName(CString("children"));
HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.X3DNode::setName(CString("humanoid_root"));
HAnimJoint146.setRotation(new float[]{0,1,0,-0.698132});
HAnimJoint146.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint146.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint146);

HAnimJoint& HAnimJoint147 =  HAnimJoint();
HAnimJoint147.X3DNode::setName(CString("l_hip"));
HAnimJoint147.setRotation(new float[]{-1,1,1,1});
HAnimJoint147.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint147.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint147);

HAnimJoint& HAnimJoint148 =  HAnimJoint();
HAnimJoint148.X3DNode::setName(CString("l_knee"));
HAnimJoint148.setRotation(new float[]{1,0,0,1});
HAnimJoint148.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint148.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint148);

HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.X3DNode::setName(CString("l_talocrural"));
HAnimJoint149.setRotation(new float[]{-0.2,0,0.1,0.225});
HAnimJoint149.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint149.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint149);

HAnimJoint& HAnimJoint150 =  HAnimJoint();
HAnimJoint150.X3DNode::setName(CString("r_hip"));
HAnimJoint150.setRotation(new float[]{-1,-1,-1,1});
HAnimJoint150.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint150.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint150);

HAnimJoint& HAnimJoint151 =  HAnimJoint();
HAnimJoint151.X3DNode::setName(CString("r_knee"));
HAnimJoint151.setRotation(new float[]{1,0,0,1});
HAnimJoint151.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint151.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint151);

HAnimJoint& HAnimJoint152 =  HAnimJoint();
HAnimJoint152.X3DNode::setName(CString("r_talocrural"));
HAnimJoint152.setRotation(new float[]{-0.2,0,0.1,0.25});
HAnimJoint152.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint152.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint152);

HAnimJoint& HAnimJoint153 =  HAnimJoint();
HAnimJoint153.X3DNode::setName(CString("vl5"));
HAnimJoint153.setRotation(new float[]{0,0,0.01,0.2});
HAnimJoint153.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint153.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint153);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.X3DNode::setName(CString("vt10"));
HAnimJoint154.setRotation(new float[]{0,0,0.01,0.1});
HAnimJoint154.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint154.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint154);

HAnimJoint& HAnimJoint155 =  HAnimJoint();
HAnimJoint155.X3DNode::setName(CString("vc4"));
HAnimJoint155.setRotation(new float[]{0,0,-0.01,0.15});
HAnimJoint155.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint155.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint155);

HAnimJoint& HAnimJoint156 =  HAnimJoint();
HAnimJoint156.X3DNode::setName(CString("l_shoulder"));
HAnimJoint156.setRotation(new float[]{-1,0.5,1,2});
HAnimJoint156.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint156.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint156);

HAnimJoint& HAnimJoint157 =  HAnimJoint();
HAnimJoint157.X3DNode::setName(CString("l_elbow"));
HAnimJoint157.setRotation(new float[]{-1,0,0,1});
HAnimJoint157.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint157.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint157);

HAnimJoint& HAnimJoint158 =  HAnimJoint();
HAnimJoint158.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint158.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint158.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint158);

HAnimJoint& HAnimJoint159 =  HAnimJoint();
HAnimJoint159.X3DNode::setName(CString("r_shoulder"));
HAnimJoint159.setRotation(new float[]{-1,-0.5,-1,2.6});
HAnimJoint159.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint159.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint159);

HAnimJoint& HAnimJoint160 =  HAnimJoint();
HAnimJoint160.X3DNode::setName(CString("r_elbow"));
HAnimJoint160.setRotation(new float[]{-1,0,0,1});
HAnimJoint160.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint160.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint160);

HAnimJoint& HAnimJoint161 =  HAnimJoint();
HAnimJoint161.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint161.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint161.setLlimit(new float[]{0,0,0}, 3);
fieldValue145.addChild(&HAnimJoint161);

ProtoInstance138.addChild(&fieldValue145);

fieldValue& fieldValue162 =  fieldValue();
fieldValue162.setName(CString("transitionDuration"));
fieldValue162.setValue(CString("1.2"));
ProtoInstance138.addChild(&fieldValue162);

fieldValue& fieldValue163 =  fieldValue();
fieldValue163.setName(CString("traceEnabled"));
fieldValue163.setValue(CString("true"));
ProtoInstance138.addChild(&fieldValue163);

Scene42.addChild(&ProtoInstance138);

ProtoInstance& ProtoInstance164 =  ProtoInstance();
ProtoInstance164.setName(CString("HAnimPose"));
ProtoInstance164.setDEF(CString("I_Pose"));
fieldValue& fieldValue165 =  fieldValue();
fieldValue165.setName(CString("name"));
fieldValue165.setValue(CString("I"));
ProtoInstance164.addChild(&fieldValue165);

fieldValue& fieldValue166 =  fieldValue();
fieldValue166.setName(CString("enabled"));
fieldValue166.setValue(CString("true"));
ProtoInstance164.addChild(&fieldValue166);

fieldValue& fieldValue167 =  fieldValue();
fieldValue167.setName(CString("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid& HAnimHumanoid168 =  HAnimHumanoid();
HAnimHumanoid168.setUSE(CString("HumanoidImported"));
fieldValue167.addChild(&HAnimHumanoid168);

ProtoInstance164.addChild(&fieldValue167);

fieldValue& fieldValue169 =  fieldValue();
fieldValue169.setName(CString("loa"));
fieldValue169.setValue(CString("1"));
ProtoInstance164.addChild(&fieldValue169);

fieldValue& fieldValue170 =  fieldValue();
fieldValue170.setName(CString("description"));
fieldValue170.setValue(CString("arms and legs straight down default binding pose for baseline Humanoid"));
ProtoInstance164.addChild(&fieldValue170);

fieldValue& fieldValue171 =  fieldValue();
fieldValue171.setName(CString("children"));
//not defining any children equals the default \"I\" pose
ProtoInstance164.addChild(&fieldValue171);

fieldValue& fieldValue172 =  fieldValue();
fieldValue172.setName(CString("transitionDuration"));
fieldValue172.setValue(CString("1.5"));
ProtoInstance164.addChild(&fieldValue172);

fieldValue& fieldValue173 =  fieldValue();
fieldValue173.setName(CString("traceEnabled"));
fieldValue173.setValue(CString("true"));
ProtoInstance164.addChild(&fieldValue173);

Scene42.addChild(&ProtoInstance164);

ProtoInstance& ProtoInstance174 =  ProtoInstance();
ProtoInstance174.setName(CString("HAnimPose"));
ProtoInstance174.setDEF(CString("H_Pose"));
fieldValue& fieldValue175 =  fieldValue();
fieldValue175.setName(CString("name"));
fieldValue175.setValue(CString("H"));
ProtoInstance174.addChild(&fieldValue175);

fieldValue& fieldValue176 =  fieldValue();
fieldValue176.setName(CString("enabled"));
fieldValue176.setValue(CString("false"));
ProtoInstance174.addChild(&fieldValue176);

fieldValue& fieldValue177 =  fieldValue();
fieldValue177.setName(CString("description"));
fieldValue177.setValue(CString("TODO experimental pose not yet implemented"));
ProtoInstance174.addChild(&fieldValue177);

fieldValue& fieldValue178 =  fieldValue();
fieldValue178.setName(CString("transitionDuration"));
fieldValue178.setValue(CString("1.4"));
ProtoInstance174.addChild(&fieldValue178);

fieldValue& fieldValue179 =  fieldValue();
fieldValue179.setName(CString("traceEnabled"));
fieldValue179.setValue(CString("true"));
ProtoInstance174.addChild(&fieldValue179);

//<fieldValue name='loa' value='1'/>
Scene42.addChild(&ProtoInstance174);

ProtoInstance& ProtoInstance180 =  ProtoInstance();
ProtoInstance180.setName(CString("HAnimPose"));
ProtoInstance180.setDEF(CString("FaceLeft_Pose"));
fieldValue& fieldValue181 =  fieldValue();
fieldValue181.setName(CString("name"));
fieldValue181.setValue(CString("FaceLeft"));
ProtoInstance180.addChild(&fieldValue181);

fieldValue& fieldValue182 =  fieldValue();
fieldValue182.setName(CString("enabled"));
fieldValue182.setValue(CString("true"));
ProtoInstance180.addChild(&fieldValue182);

fieldValue& fieldValue183 =  fieldValue();
fieldValue183.setName(CString("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid& HAnimHumanoid184 =  HAnimHumanoid();
HAnimHumanoid184.setUSE(CString("HumanoidImported"));
fieldValue183.addChild(&HAnimHumanoid184);

ProtoInstance180.addChild(&fieldValue183);

fieldValue& fieldValue185 =  fieldValue();
fieldValue185.setName(CString("loa"));
fieldValue185.setValue(CString("0"));
ProtoInstance180.addChild(&fieldValue185);

fieldValue& fieldValue186 =  fieldValue();
fieldValue186.setName(CString("description"));
fieldValue186.setValue(CString("Only modify humanoid_root Joint node to face left"));
ProtoInstance180.addChild(&fieldValue186);

fieldValue& fieldValue187 =  fieldValue();
fieldValue187.setName(CString("children"));
HAnimJoint& HAnimJoint188 =  HAnimJoint();
HAnimJoint188.X3DNode::setName(CString("humanoid_root"));
HAnimJoint188.setDEF(CString("FaceLeft_humanoid_root"));
HAnimJoint188.setDescription(CString("Only rotate the model"));
HAnimJoint188.setRotation(new float[]{0,1,0,1.570796});
HAnimJoint188.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint188.setLlimit(new float[]{0,0,0}, 3);
fieldValue187.addChild(&HAnimJoint188);

ProtoInstance180.addChild(&fieldValue187);

fieldValue& fieldValue189 =  fieldValue();
fieldValue189.setName(CString("transitionDuration"));
fieldValue189.setValue(CString("1.1"));
ProtoInstance180.addChild(&fieldValue189);

fieldValue& fieldValue190 =  fieldValue();
fieldValue190.setName(CString("traceEnabled"));
fieldValue190.setValue(CString("true"));
ProtoInstance180.addChild(&fieldValue190);

Scene42.addChild(&ProtoInstance180);

ProtoInstance& ProtoInstance191 =  ProtoInstance();
ProtoInstance191.setName(CString("HAnimPose"));
ProtoInstance191.setDEF(CString("FaceRight_Pose"));
fieldValue& fieldValue192 =  fieldValue();
fieldValue192.setName(CString("name"));
fieldValue192.setValue(CString("FaceRight"));
ProtoInstance191.addChild(&fieldValue192);

fieldValue& fieldValue193 =  fieldValue();
fieldValue193.setName(CString("enabled"));
fieldValue193.setValue(CString("true"));
ProtoInstance191.addChild(&fieldValue193);

fieldValue& fieldValue194 =  fieldValue();
fieldValue194.setName(CString("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid& HAnimHumanoid195 =  HAnimHumanoid();
HAnimHumanoid195.setUSE(CString("HumanoidImported"));
fieldValue194.addChild(&HAnimHumanoid195);

ProtoInstance191.addChild(&fieldValue194);

fieldValue& fieldValue196 =  fieldValue();
fieldValue196.setName(CString("loa"));
fieldValue196.setValue(CString("0"));
ProtoInstance191.addChild(&fieldValue196);

fieldValue& fieldValue197 =  fieldValue();
fieldValue197.setName(CString("description"));
fieldValue197.setValue(CString("Only modify humanoid_root Joint node to face right"));
ProtoInstance191.addChild(&fieldValue197);

fieldValue& fieldValue198 =  fieldValue();
fieldValue198.setName(CString("children"));
HAnimJoint& HAnimJoint199 =  HAnimJoint();
HAnimJoint199.X3DNode::setName(CString("humanoid_root"));
HAnimJoint199.setDEF(CString("FaceRight_humanoid_root"));
HAnimJoint199.setDescription(CString("Only rotate the model"));
HAnimJoint199.setRotation(new float[]{0,1,0,-1.570796});
HAnimJoint199.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint199.setLlimit(new float[]{0,0,0}, 3);
fieldValue198.addChild(&HAnimJoint199);

ProtoInstance191.addChild(&fieldValue198);

fieldValue& fieldValue200 =  fieldValue();
fieldValue200.setName(CString("transitionDuration"));
fieldValue200.setValue(CString("1.1"));
ProtoInstance191.addChild(&fieldValue200);

fieldValue& fieldValue201 =  fieldValue();
fieldValue201.setName(CString("traceEnabled"));
fieldValue201.setValue(CString("true"));
ProtoInstance191.addChild(&fieldValue201);

Scene42.addChild(&ProtoInstance191);

Group& Group202 =  Group();
Group202.setDEF(CString("InterfaceButtonsGroup"));
Transform& Transform203 =  Transform();
Transform203.setDEF(CString("DisplayHeader"));
Transform203.setTranslation(new float[]{0,2,0});
Shape& Shape204 =  Shape();
Text& Text205 =  Text();
Text205.setString(new CString[]{CString("HAnimPosePrototype example implementation")}, 1);
CFontStyle& FontStyle206 =  CFontStyle();
FontStyle206.setDEF(CString("HeaderFont"));
FontStyle206.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle206.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle206.setSize(0.15);
FontStyle206.setStyle(CString("BOLD"));
Text205.setFontStyle(&FontStyle206);

Shape204.setGeometry(&Text205);

Appearance& Appearance207 =  Appearance();
Appearance207.setDEF(CString("PoseTextAppearance"));
Material& Material208 =  Material();
Material208.setDiffuseColor(new float[]{0.1,0.5,0.3});
Appearance207.addChild(&Material208);

Shape204.addChild(&Appearance207);

Transform203.addChild(&Shape204);

Group202.addChild(&Transform203);

Transform& Transform209 =  Transform();
Transform209.setDEF(CString("T_PoseInterface"));
Transform209.setTranslation(new float[]{-1.5,1.5,0});
Shape& Shape210 =  Shape();
Text& Text211 =  Text();
Text211.setString(new CString[]{CString("\"T\" Pose")}, 1);
CFontStyle& FontStyle212 =  CFontStyle();
FontStyle212.setDEF(CString("SharedFont"));
FontStyle212.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle212.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle212.setSize(0.1);
FontStyle212.setStyle(CString("BOLD"));
Text211.setFontStyle(&FontStyle212);

Shape210.setGeometry(&Text211);

Appearance& Appearance213 =  Appearance();
Appearance213.setUSE(CString("PoseTextAppearance"));
Shape210.addChild(&Appearance213);

Transform209.addChild(&Shape210);

Shape& Shape214 =  Shape();
Appearance& Appearance215 =  Appearance();
Appearance215.setDEF(CString("TransparentAppearance"));
Material& Material216 =  Material();
Material216.setTransparency(0.8);
Appearance215.addChild(&Material216);

Shape214.addChild(&Appearance215);

Box& Box217 =  Box();
Box217.setSize(new float[]{0.45,0.2,0.001});
Shape214.setGeometry(&Box217);

Transform209.addChild(&Shape214);

TouchSensor& TouchSensor218 =  TouchSensor();
TouchSensor218.setDEF(CString("T_PoseTouchSensor"));
TouchSensor218.setDescription(CString("select to move shoulders to \"T\" pose, leave other joints unchanged"));
Transform209.addChild(&TouchSensor218);

ROUTE& ROUTE219 =  ROUTE();
ROUTE219.setFromField(CString("isActive"));
ROUTE219.setFromNode(CString("T_PoseTouchSensor"));
ROUTE219.setToField(CString("commencePose"));
ROUTE219.setToNode(CString("T_Pose"));
Transform209.addChild(&ROUTE219);

Group202.addChild(&Transform209);

Transform& Transform220 =  Transform();
Transform220.setDEF(CString("A_PoseInterface"));
Transform220.setTranslation(new float[]{-1.5,1,0});
Shape& Shape221 =  Shape();
Text& Text222 =  Text();
Text222.setString(new CString[]{CString("\"A\" Pose")}, 1);
CFontStyle& FontStyle223 =  CFontStyle();
FontStyle223.setUSE(CString("SharedFont"));
Text222.setFontStyle(&FontStyle223);

Shape221.setGeometry(&Text222);

Appearance& Appearance224 =  Appearance();
Appearance224.setUSE(CString("PoseTextAppearance"));
Shape221.addChild(&Appearance224);

Transform220.addChild(&Shape221);

Shape& Shape225 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance226 =  Appearance();
Appearance226.setUSE(CString("TransparentAppearance"));
Shape225.addChild(&Appearance226);

Box& Box227 =  Box();
Box227.setSize(new float[]{0.45,0.2,0.001});
Shape225.setGeometry(&Box227);

Transform220.addChild(&Shape225);

TouchSensor& TouchSensor228 =  TouchSensor();
TouchSensor228.setDEF(CString("A_PoseTouchSensor"));
TouchSensor228.setDescription(CString("select to move shoulders to \"A\" pose, leave other joints unchanged"));
Transform220.addChild(&TouchSensor228);

ROUTE& ROUTE229 =  ROUTE();
ROUTE229.setFromField(CString("isActive"));
ROUTE229.setFromNode(CString("A_PoseTouchSensor"));
ROUTE229.setToField(CString("commencePose"));
ROUTE229.setToNode(CString("A_Pose"));
Transform220.addChild(&ROUTE229);

Group202.addChild(&Transform220);

Transform& Transform230 =  Transform();
Transform230.setDEF(CString("TouchDown_PoseInterface"));
Transform230.setTranslation(new float[]{-1.5,0.5,0});
Shape& Shape231 =  Shape();
Text& Text232 =  Text();
Text232.setString(new CString[]{CString("TouchDown Pose")}, 1);
CFontStyle& FontStyle233 =  CFontStyle();
FontStyle233.setUSE(CString("SharedFont"));
Text232.setFontStyle(&FontStyle233);

Shape231.setGeometry(&Text232);

Appearance& Appearance234 =  Appearance();
Appearance234.setUSE(CString("PoseTextAppearance"));
Shape231.addChild(&Appearance234);

Transform230.addChild(&Shape231);

Shape& Shape235 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance236 =  Appearance();
Appearance236.setUSE(CString("TransparentAppearance"));
Shape235.addChild(&Appearance236);

Box& Box237 =  Box();
Box237.setSize(new float[]{0.85,0.2,0.001});
Shape235.setGeometry(&Box237);

Transform230.addChild(&Shape235);

TouchSensor& TouchSensor238 =  TouchSensor();
TouchSensor238.setDEF(CString("TouchDown_PoseTouchSensor"));
TouchSensor238.setDescription(CString("select to transition all joints to TouchDown pose"));
Transform230.addChild(&TouchSensor238);

ROUTE& ROUTE239 =  ROUTE();
ROUTE239.setFromField(CString("isActive"));
ROUTE239.setFromNode(CString("TouchDown_PoseTouchSensor"));
ROUTE239.setToField(CString("commencePose"));
ROUTE239.setToNode(CString("TouchDown_Pose"));
Transform230.addChild(&ROUTE239);

Group202.addChild(&Transform230);

Transform& Transform240 =  Transform();
Transform240.setDEF(CString("I_PoseInterface"));
Transform240.setTranslation(new float[]{-1.5,0,0});
Shape& Shape241 =  Shape();
Text& Text242 =  Text();
Text242.setString(new CString[]{CString("\"I\" Pose")}, 1);
CFontStyle& FontStyle243 =  CFontStyle();
FontStyle243.setUSE(CString("SharedFont"));
Text242.setFontStyle(&FontStyle243);

Shape241.setGeometry(&Text242);

Appearance& Appearance244 =  Appearance();
Appearance244.setUSE(CString("PoseTextAppearance"));
Shape241.addChild(&Appearance244);

Transform240.addChild(&Shape241);

Shape& Shape245 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance246 =  Appearance();
Appearance246.setUSE(CString("TransparentAppearance"));
Shape245.addChild(&Appearance246);

Box& Box247 =  Box();
Box247.setSize(new float[]{0.45,0.2,0.001});
Shape245.setGeometry(&Box247);

Transform240.addChild(&Shape245);

TouchSensor& TouchSensor248 =  TouchSensor();
TouchSensor248.setDEF(CString("I_PoseTouchSensor"));
TouchSensor248.setDescription(CString("select to transition all joints to \"I\" pose"));
Transform240.addChild(&TouchSensor248);

ROUTE& ROUTE249 =  ROUTE();
ROUTE249.setFromField(CString("isActive"));
ROUTE249.setFromNode(CString("I_PoseTouchSensor"));
ROUTE249.setToField(CString("commencePose"));
ROUTE249.setToNode(CString("I_Pose"));
Transform240.addChild(&ROUTE249);

Group202.addChild(&Transform240);

Transform& Transform250 =  Transform();
Transform250.setDEF(CString("FaceLeftPoseInterface"));
Transform250.setTranslation(new float[]{1.5,1.5,0});
Shape& Shape251 =  Shape();
Text& Text252 =  Text();
Text252.setString(new CString[]{CString("Face Left Pose")}, 1);
CFontStyle& FontStyle253 =  CFontStyle();
FontStyle253.setUSE(CString("SharedFont"));
Text252.setFontStyle(&FontStyle253);

Shape251.setGeometry(&Text252);

Appearance& Appearance254 =  Appearance();
Appearance254.setUSE(CString("PoseTextAppearance"));
Shape251.addChild(&Appearance254);

Transform250.addChild(&Shape251);

Shape& Shape255 =  Shape();
Appearance& Appearance256 =  Appearance();
Appearance256.setUSE(CString("TransparentAppearance"));
Shape255.addChild(&Appearance256);

Box& Box257 =  Box();
Box257.setSize(new float[]{0.9,0.2,0.001});
Shape255.setGeometry(&Box257);

Transform250.addChild(&Shape255);

TouchSensor& TouchSensor258 =  TouchSensor();
TouchSensor258.setDEF(CString("FaceLeftTouchSensor"));
TouchSensor258.setDescription(CString("select to rotate body and Face Left, leave other joints unchanged"));
Transform250.addChild(&TouchSensor258);

ROUTE& ROUTE259 =  ROUTE();
ROUTE259.setFromField(CString("isActive"));
ROUTE259.setFromNode(CString("FaceLeftTouchSensor"));
ROUTE259.setToField(CString("commencePose"));
ROUTE259.setToNode(CString("FaceLeft_Pose"));
Transform250.addChild(&ROUTE259);

Group202.addChild(&Transform250);

Transform& Transform260 =  Transform();
Transform260.setDEF(CString("FaceRightPoseInterface"));
Transform260.setTranslation(new float[]{1.5,1,0});
Shape& Shape261 =  Shape();
Text& Text262 =  Text();
Text262.setString(new CString[]{CString("Face Right Pose")}, 1);
CFontStyle& FontStyle263 =  CFontStyle();
FontStyle263.setUSE(CString("SharedFont"));
Text262.setFontStyle(&FontStyle263);

Shape261.setGeometry(&Text262);

Appearance& Appearance264 =  Appearance();
Appearance264.setUSE(CString("PoseTextAppearance"));
Shape261.addChild(&Appearance264);

Transform260.addChild(&Shape261);

Shape& Shape265 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance266 =  Appearance();
Appearance266.setUSE(CString("TransparentAppearance"));
Shape265.addChild(&Appearance266);

Box& Box267 =  Box();
Box267.setSize(new float[]{0.9,0.2,0.001});
Shape265.setGeometry(&Box267);

Transform260.addChild(&Shape265);

TouchSensor& TouchSensor268 =  TouchSensor();
TouchSensor268.setDEF(CString("FaceRightTouchSensor"));
TouchSensor268.setDescription(CString("select to rotate body and Face Right, leave other joints unchanged"));
Transform260.addChild(&TouchSensor268);

ROUTE& ROUTE269 =  ROUTE();
ROUTE269.setFromField(CString("isActive"));
ROUTE269.setFromNode(CString("FaceRightTouchSensor"));
ROUTE269.setToField(CString("commencePose"));
ROUTE269.setToNode(CString("FaceRight_Pose"));
Transform260.addChild(&ROUTE269);

Group202.addChild(&Transform260);

Transform& Transform270 =  Transform();
Transform270.setDEF(CString("AnimatePosesInterface"));
Transform270.setTranslation(new float[]{1.5,0.5,0});
Shape& Shape271 =  Shape();
Text& Text272 =  Text();
Text272.setString(new CString[]{CString("Direct animation"), CString("to, from \"I\" Pose")}, 2);
CFontStyle& FontStyle273 =  CFontStyle();
FontStyle273.setUSE(CString("SharedFont"));
Text272.setFontStyle(&FontStyle273);

Shape271.setGeometry(&Text272);

Appearance& Appearance274 =  Appearance();
Appearance274.setDEF(CString("AnimationTextAppearance"));
Material& Material275 =  Material();
Material275.setDiffuseColor(new float[]{0.1,0.2,0.3});
Appearance274.addChild(&Material275);

Shape271.addChild(&Appearance274);

Transform270.addChild(&Shape271);

Shape& Shape276 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance277 =  Appearance();
Appearance277.setUSE(CString("TransparentAppearance"));
Shape276.addChild(&Appearance277);

Box& Box278 =  Box();
Box278.setSize(new float[]{0.9,0.25,0.001});
Shape276.setGeometry(&Box278);

Transform270.addChild(&Shape276);

TouchSensor& TouchSensor279 =  TouchSensor();
TouchSensor279.setDEF(CString("AnimatePosesTouchSensor"));
TouchSensor279.setDescription(CString("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"));
Transform270.addChild(&TouchSensor279);

//cycleInterval=4 also hard-coded in script execution message
TimeSensor& TimeSensor280 =  TimeSensor();
TimeSensor280.setDEF(CString("AnimatePosesClock"));
TimeSensor280.setCycleInterval(4);
TimeSensor280.setDescription(CString("directly animate several poses"));
Transform270.addChild(&TimeSensor280);

ScalarInterpolator& ScalarInterpolator281 =  ScalarInterpolator();
ScalarInterpolator281.setDEF(CString("AnimatePosesLoopInterpolator"));
ScalarInterpolator281.setKey(new float[]{0,0.05,0.45,0.55,0.95,1}, 6);
ScalarInterpolator281.setKeyValue(new float[]{0,0,1,1,0,0}, 6);
Transform270.addChild(&ScalarInterpolator281);

ROUTE& ROUTE282 =  ROUTE();
ROUTE282.setFromField(CString("touchTime"));
ROUTE282.setFromNode(CString("AnimatePosesTouchSensor"));
ROUTE282.setToField(CString("startTime"));
ROUTE282.setToNode(CString("AnimatePosesClock"));
Transform270.addChild(&ROUTE282);

ROUTE& ROUTE283 =  ROUTE();
ROUTE283.setFromField(CString("fraction_changed"));
ROUTE283.setFromNode(CString("AnimatePosesClock"));
ROUTE283.setToField(CString("set_fraction"));
ROUTE283.setToNode(CString("AnimatePosesLoopInterpolator"));
Transform270.addChild(&ROUTE283);

ROUTE& ROUTE284 =  ROUTE();
ROUTE284.setFromField(CString("value_changed"));
ROUTE284.setFromNode(CString("AnimatePosesLoopInterpolator"));
ROUTE284.setToField(CString("set_fraction"));
ROUTE284.setToNode(CString("I_Pose"));
Transform270.addChild(&ROUTE284);

Group202.addChild(&Transform270);

Transform& Transform285 =  Transform();
Transform285.setDEF(CString("ResetDefaultPoseInterface"));
Transform285.setTranslation(new float[]{1.5,0,0});
Shape& Shape286 =  Shape();
Text& Text287 =  Text();
Text287.setString(new CString[]{CString("Reset All Joints"), CString("to Default \"I\" Pose")}, 2);
CFontStyle& FontStyle288 =  CFontStyle();
FontStyle288.setUSE(CString("SharedFont"));
Text287.setFontStyle(&FontStyle288);

Shape286.setGeometry(&Text287);

Appearance& Appearance289 =  Appearance();
Appearance289.setUSE(CString("AnimationTextAppearance"));
Shape286.addChild(&Appearance289);

Transform285.addChild(&Shape286);

Shape& Shape290 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance291 =  Appearance();
Appearance291.setUSE(CString("TransparentAppearance"));
Shape290.addChild(&Appearance291);

Box& Box292 =  Box();
Box292.setSize(new float[]{0.9,0.25,0.001});
Shape290.setGeometry(&Box292);

Transform285.addChild(&Shape290);

TouchSensor& TouchSensor293 =  TouchSensor();
TouchSensor293.setDEF(CString("ResetPoseTouchSensor"));
TouchSensor293.setDescription(CString("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"));
Transform285.addChild(&TouchSensor293);

ROUTE& ROUTE294 =  ROUTE();
ROUTE294.setFromField(CString("isActive"));
ROUTE294.setFromNode(CString("ResetPoseTouchSensor"));
ROUTE294.setToField(CString("resetAllJoints"));
ROUTE294.setToNode(CString("FaceLeft_Pose"));
Transform285.addChild(&ROUTE294);

Group202.addChild(&Transform285);

Scene42.addChild(&Group202);

Group& Group295 =  Group();
Group295.setDEF(CString("HandleInlineLoadsensorRouting"));
ROUTE& ROUTE296 =  ROUTE();
ROUTE296.setFromField(CString("isLoaded"));
ROUTE296.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE296.setToField(CString("isLoaded"));
ROUTE296.setToNode(CString("A_Pose"));
Group295.addChild(&ROUTE296);

ROUTE& ROUTE297 =  ROUTE();
ROUTE297.setFromField(CString("isLoaded"));
ROUTE297.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE297.setToField(CString("isLoaded"));
ROUTE297.setToNode(CString("H_Pose"));
Group295.addChild(&ROUTE297);

ROUTE& ROUTE298 =  ROUTE();
ROUTE298.setFromField(CString("isLoaded"));
ROUTE298.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE298.setToField(CString("isLoaded"));
ROUTE298.setToNode(CString("I_Pose"));
Group295.addChild(&ROUTE298);

ROUTE& ROUTE299 =  ROUTE();
ROUTE299.setFromField(CString("isLoaded"));
ROUTE299.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE299.setToField(CString("isLoaded"));
ROUTE299.setToNode(CString("T_Pose"));
Group295.addChild(&ROUTE299);

ROUTE& ROUTE300 =  ROUTE();
ROUTE300.setFromField(CString("isLoaded"));
ROUTE300.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE300.setToField(CString("isLoaded"));
ROUTE300.setToNode(CString("FaceLeft_Pose"));
Group295.addChild(&ROUTE300);

ROUTE& ROUTE301 =  ROUTE();
ROUTE301.setFromField(CString("isLoaded"));
ROUTE301.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE301.setToField(CString("isLoaded"));
ROUTE301.setToNode(CString("FaceRight_Pose"));
Group295.addChild(&ROUTE301);

ROUTE& ROUTE302 =  ROUTE();
ROUTE302.setFromField(CString("isLoaded"));
ROUTE302.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE302.setToField(CString("isLoaded"));
ROUTE302.setToNode(CString("TouchDown_Pose"));
Group295.addChild(&ROUTE302);

Scene42.addChild(&Group295);

X3D0.setScene(&Scene42);

}
