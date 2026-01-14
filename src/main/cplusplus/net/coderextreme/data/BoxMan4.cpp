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
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("BoxMan.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare)."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("James Smith - james@vapourtech.com"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("translator"));
meta6.setContent(CString("Don Brutzman and Matt Beitler"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("created"));
meta7.setContent(CString("1 March 2001"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("translated"));
meta8.setContent(CString("19 October 2001"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("modified"));
meta9.setContent(CString("Tue, 09 Sep 2025 19:37:51 GMT"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("Original site http://HAnim.org"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("../Legacy/originals/boxman.wrl"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("BoxMan.js"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("BoxManAnimationPanel.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("http://www.vapourtech.com/team/james/boxman.wrl"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("reference"));
meta16.setContent(CString("http://HAnim.org/Specifications/HAnim2001"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("reference"));
meta17.setContent(CString("http://HAnim.org/Models"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("reference"));
meta18.setContent(CString("http://HAnim.org/Nodes"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("reference"));
meta19.setContent(CString("https://www.web3d.org/x3d/content/X3dToVrml97.xslt"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("reference"));
meta20.setContent(CString("http://www.vapourtech.com"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("warning"));
meta21.setContent(CString("Skin mesh is split across multiple shapes within a Group, should that be allowed?"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("TODO"));
meta22.setContent(CString("What does the original animation script accomplish? It is not hooked up, script source contains errors..."));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("TODO"));
meta23.setContent(CString("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("Image"));
meta24.setContent(CString("BoxManViewInclined.png"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("Image"));
meta25.setContent(CString("BoxManViewFront.png"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("Image"));
meta26.setContent(CString("BoxManViewRight.png"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(CString("Image"));
meta27.setContent(CString("BoxManViewLeft.png"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(CString("Image"));
meta28.setContent(CString("BoxManViewTop.png"));
head1.addMeta(&meta28);

meta& meta29 =  meta();
meta29.setName(CString("rights"));
meta29.setContent(CString("(C) 2000 James Smith - james@vapourtech.com"));
head1.addMeta(&meta29);

meta& meta30 =  meta();
meta30.setName(CString("subject"));
meta30.setContent(CString("BoxMan HAnim 2.0"));
head1.addMeta(&meta30);

meta& meta31 =  meta();
meta31.setName(CString("identifier"));
meta31.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.x3d"));
head1.addMeta(&meta31);

X3D0.setHead(&head1);

Scene& Scene32 =  Scene();
ExternProtoDeclare& ExternProtoDeclare33 =  ExternProtoDeclare();
ExternProtoDeclare33.setName(CString("LOA1_WalkAnimation"));
ExternProtoDeclare33.setUrl(new CString[]{CString("../Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation"), CString("../Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation")}, 4);
field& field34 =  field();
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("SFTime"));
field34.setName(CString("cycleInterval"));
ExternProtoDeclare33.addChild(&field34);

field& field35 =  field();
field35.setAccessType(CString("inputOutput"));
field35.setType(CString("SFBool"));
field35.setName(CString("enabled"));
ExternProtoDeclare33.addChild(&field35);

field& field36 =  field();
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFBool"));
field36.setName(CString("loop"));
ExternProtoDeclare33.addChild(&field36);

field& field37 =  field();
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("SFTime"));
field37.setName(CString("startTime"));
ExternProtoDeclare33.addChild(&field37);

field& field38 =  field();
field38.setAccessType(CString("inputOutput"));
field38.setType(CString("SFTime"));
field38.setName(CString("stopTime"));
ExternProtoDeclare33.addChild(&field38);

field& field39 =  field();
field39.setAccessType(CString("outputOnly"));
field39.setType(CString("SFFloat"));
field39.setName(CString("fraction_changed"));
ExternProtoDeclare33.addChild(&field39);

field& field40 =  field();
field40.setAccessType(CString("outputOnly"));
field40.setType(CString("SFVec3f"));
field40.setName(CString("HumanoidRoot_translation_changed"));
ExternProtoDeclare33.addChild(&field40);

field& field41 =  field();
field41.setAccessType(CString("outputOnly"));
field41.setType(CString("SFRotation"));
field41.setName(CString("HumanoidRoot_rotation_changed"));
ExternProtoDeclare33.addChild(&field41);

field& field42 =  field();
field42.setAccessType(CString("outputOnly"));
field42.setType(CString("SFRotation"));
field42.setName(CString("l_hip_rotation_changed"));
ExternProtoDeclare33.addChild(&field42);

field& field43 =  field();
field43.setAccessType(CString("outputOnly"));
field43.setType(CString("SFRotation"));
field43.setName(CString("l_knee_rotation_changed"));
ExternProtoDeclare33.addChild(&field43);

field& field44 =  field();
field44.setAccessType(CString("outputOnly"));
field44.setType(CString("SFRotation"));
field44.setName(CString("l_ankle_rotation_changed"));
ExternProtoDeclare33.addChild(&field44);

field& field45 =  field();
field45.setAccessType(CString("outputOnly"));
field45.setType(CString("SFRotation"));
field45.setName(CString("l_midtarsal_rotation_changed"));
ExternProtoDeclare33.addChild(&field45);

field& field46 =  field();
field46.setAccessType(CString("outputOnly"));
field46.setType(CString("SFRotation"));
field46.setName(CString("r_hip_rotation_changed"));
ExternProtoDeclare33.addChild(&field46);

field& field47 =  field();
field47.setAccessType(CString("outputOnly"));
field47.setType(CString("SFRotation"));
field47.setName(CString("r_knee_rotation_changed"));
ExternProtoDeclare33.addChild(&field47);

field& field48 =  field();
field48.setAccessType(CString("outputOnly"));
field48.setType(CString("SFRotation"));
field48.setName(CString("r_ankle_rotation_changed"));
ExternProtoDeclare33.addChild(&field48);

field& field49 =  field();
field49.setAccessType(CString("outputOnly"));
field49.setType(CString("SFRotation"));
field49.setName(CString("r_midtarsal_rotation_changed"));
ExternProtoDeclare33.addChild(&field49);

field& field50 =  field();
field50.setAccessType(CString("outputOnly"));
field50.setType(CString("SFRotation"));
field50.setName(CString("vl5_rotation_changed"));
ExternProtoDeclare33.addChild(&field50);

field& field51 =  field();
field51.setAccessType(CString("outputOnly"));
field51.setType(CString("SFRotation"));
field51.setName(CString("skullbase_rotation_changed"));
ExternProtoDeclare33.addChild(&field51);

field& field52 =  field();
field52.setAccessType(CString("outputOnly"));
field52.setType(CString("SFRotation"));
field52.setName(CString("l_shoulder_rotation_changed"));
ExternProtoDeclare33.addChild(&field52);

field& field53 =  field();
field53.setAccessType(CString("outputOnly"));
field53.setType(CString("SFRotation"));
field53.setName(CString("l_elbow_rotation_changed"));
ExternProtoDeclare33.addChild(&field53);

field& field54 =  field();
field54.setAccessType(CString("outputOnly"));
field54.setType(CString("SFRotation"));
field54.setName(CString("l_wrist_rotation_changed"));
ExternProtoDeclare33.addChild(&field54);

field& field55 =  field();
field55.setAccessType(CString("outputOnly"));
field55.setType(CString("SFRotation"));
field55.setName(CString("r_shoulder_rotation_changed"));
ExternProtoDeclare33.addChild(&field55);

field& field56 =  field();
field56.setAccessType(CString("outputOnly"));
field56.setType(CString("SFRotation"));
field56.setName(CString("r_elbow_rotation_changed"));
ExternProtoDeclare33.addChild(&field56);

field& field57 =  field();
field57.setAccessType(CString("outputOnly"));
field57.setType(CString("SFRotation"));
field57.setName(CString("r_wrist_rotation_changed"));
ExternProtoDeclare33.addChild(&field57);

field& field58 =  field();
field58.setAccessType(CString("outputOnly"));
field58.setType(CString("SFBool"));
field58.setName(CString("isActive"));
ExternProtoDeclare33.addChild(&field58);

Scene32.addChild(&ExternProtoDeclare33);

WorldInfo& WorldInfo59 =  WorldInfo();
WorldInfo59.setTitle(CString("BoxMan - A Seamless VRML Human"));
WorldInfo59.setInfo(new CString[]{CString("(C) 2000 James Smith - james@vapourtech.com"), CString("http://www.vapourtech.com/team/james/boxman.wrl"), CString("Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com")}, 3);
Scene32.addChild(&WorldInfo59);

Background& Background60 =  Background();
Background60.setSkyColor(new float[]{0.75,0.75,0.75}, 3);
Background60.setGroundColor(new float[]{0.6,0.6,0.6}, 3);
Scene32.addChild(&Background60);

HAnimHumanoid& HAnimHumanoid61 =  HAnimHumanoid();
HAnimHumanoid61.setDEF(CString("boxman_Humanoid"));
HAnimHumanoid61.X3DNode::setName(CString("Humanoid"));
HAnimHumanoid61.setInfo(new CString[]{CString("authorName=James Smith"), CString("authorEmail=james@vapourtech.com"), CString("copyright=(C) 2000 James Smith - james@vapourtech.com"), CString("humanoidVersion=1.0")}, 4);
HAnimHumanoid61.setVersion(CString("1.0"));
HAnimJoint& HAnimJoint62 =  HAnimJoint();
HAnimJoint62.setDEF(CString("boxman_humanoid_root"));
HAnimJoint62.X3DNode::setName(CString("humanoid_root"));
HAnimJoint62.setCenter(new float[]{0,0.9723,-0.0728});
HAnimJoint62.setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11}, 12);
HAnimJoint62.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimSegment& HAnimSegment63 =  HAnimSegment();
HAnimSegment63.setDEF(CString("boxman_sacrum"));
HAnimSegment63.X3DNode::setName(CString("sacrum"));
Transform& Transform64 =  Transform();
Transform64.setTranslation(new float[]{0,0.9723,-0.0728});
Shape& Shape65 =  Shape();
Shape65.setDEF(CString("SphereYellow"));
Appearance& Appearance66 =  Appearance();
Material& Material67 =  Material();
Material67.setDiffuseColor(new float[]{1,1,0});
Appearance66.addChild(&Material67);

Shape65.addChild(&Appearance66);

Sphere& Sphere68 =  Sphere();
Sphere68.setRadius(0.02);
Shape65.setGeometry(&Sphere68);

Transform64.addChild(&Shape65);

HAnimSegment63.addChild(&Transform64);

HAnimJoint62.addChildren(&HAnimSegment63);

HAnimJoint& HAnimJoint69 =  HAnimJoint();
HAnimJoint69.setDEF(CString("boxman_l_hip"));
HAnimJoint69.X3DNode::setName(CString("l_hip"));
HAnimJoint69.setCenter(new float[]{0.0956,0.9364,0});
HAnimJoint69.setSkinCoordIndex(new int32_t[]{12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43}, 32);
HAnimJoint69.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
HAnimSegment& HAnimSegment70 =  HAnimSegment();
HAnimSegment70.setDEF(CString("boxman_l_thigh"));
HAnimSegment70.X3DNode::setName(CString("l_thigh"));
Transform& Transform71 =  Transform();
Transform71.setTranslation(new float[]{0.0956,0.9364,0});
Shape& Shape72 =  Shape();
Shape72.setUSE(CString("SphereYellow"));
Transform71.addChild(&Shape72);

HAnimSegment70.addChild(&Transform71);

HAnimJoint69.addChildren(&HAnimSegment70);

HAnimJoint& HAnimJoint73 =  HAnimJoint();
HAnimJoint73.setDEF(CString("boxman_l_knee"));
HAnimJoint73.X3DNode::setName(CString("l_knee"));
HAnimJoint73.setCenter(new float[]{0.0956,0.5095,-0.0036});
HAnimJoint73.setSkinCoordIndex(new int32_t[]{36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63}, 28);
HAnimJoint73.setSkinCoordWeight(new float[]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 28);
HAnimSegment& HAnimSegment74 =  HAnimSegment();
HAnimSegment74.setDEF(CString("boxman_l_calf"));
HAnimSegment74.X3DNode::setName(CString("l_calf"));
Transform& Transform75 =  Transform();
Transform75.setTranslation(new float[]{0.0956,0.5095,-0.0036});
Shape& Shape76 =  Shape();
Shape76.setUSE(CString("SphereYellow"));
Transform75.addChild(&Shape76);

HAnimSegment74.addChild(&Transform75);

HAnimJoint73.addChildren(&HAnimSegment74);

HAnimJoint& HAnimJoint77 =  HAnimJoint();
HAnimJoint77.setDEF(CString("boxman_l_ankle"));
HAnimJoint77.X3DNode::setName(CString("l_ankle"));
HAnimJoint77.setCenter(new float[]{0.0946,0.0762,-0.0261});
HAnimJoint77.setSkinCoordIndex(new int32_t[]{64,65,66,67,68,69,70,71}, 8);
HAnimJoint77.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment78 =  HAnimSegment();
HAnimSegment78.setDEF(CString("boxman_l_hindfoot"));
HAnimSegment78.X3DNode::setName(CString("l_hindfoot"));
Transform& Transform79 =  Transform();
Transform79.setTranslation(new float[]{0.0946,0.0762,-0.0261});
Shape& Shape80 =  Shape();
Shape80.setUSE(CString("SphereYellow"));
Transform79.addChild(&Shape80);

HAnimSegment78.addChild(&Transform79);

HAnimJoint77.addChildren(&HAnimSegment78);

HAnimJoint& HAnimJoint81 =  HAnimJoint();
HAnimJoint81.setDEF(CString("boxman_l_midtarsal"));
HAnimJoint81.X3DNode::setName(CString("l_midtarsal"));
HAnimJoint81.setCenter(new float[]{0.1079,0.0317,0.067});
HAnimJoint81.setSkinCoordIndex(new int32_t[]{72,73,74,75,76,77,78,79}, 8);
HAnimJoint81.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment82 =  HAnimSegment();
HAnimSegment82.setDEF(CString("boxman_l_middistal"));
HAnimSegment82.X3DNode::setName(CString("l_middistal"));
Transform& Transform83 =  Transform();
Transform83.setTranslation(new float[]{0.1079,0.0317,0.067});
Shape& Shape84 =  Shape();
Shape84.setUSE(CString("SphereYellow"));
Transform83.addChild(&Shape84);

HAnimSegment82.addChild(&Transform83);

HAnimSite& HAnimSite85 =  HAnimSite();
HAnimSite85.setDEF(CString("boxman_l_middistal_tip"));
HAnimSite85.X3DNode::setName(CString("l_middistal_tip"));
HAnimSite85.setTranslation(new float[]{0.095,0.0005,0.1924});
Shape& Shape86 =  Shape();
Shape86.setDEF(CString("SphereRed"));
Appearance& Appearance87 =  Appearance();
Material& Material88 =  Material();
Material88.setDiffuseColor(new float[]{1,0,0});
Appearance87.addChild(&Material88);

Shape86.addChild(&Appearance87);

Sphere& Sphere89 =  Sphere();
Sphere89.setRadius(0.02);
Shape86.setGeometry(&Sphere89);

HAnimSite85.addChild(&Shape86);

HAnimSegment82.addChild(&HAnimSite85);

HAnimJoint81.addChildren(&HAnimSegment82);

HAnimJoint77.addChildren(&HAnimJoint81);

HAnimJoint73.addChildren(&HAnimJoint77);

HAnimJoint69.addChildren(&HAnimJoint73);

HAnimJoint62.addChildren(&HAnimJoint69);

HAnimJoint& HAnimJoint90 =  HAnimJoint();
HAnimJoint90.setDEF(CString("boxman_r_hip"));
HAnimJoint90.X3DNode::setName(CString("r_hip"));
HAnimJoint90.setCenter(new float[]{-0.0956,0.9364,0});
HAnimJoint90.setSkinCoordIndex(new int32_t[]{80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111}, 32);
HAnimJoint90.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
HAnimSegment& HAnimSegment91 =  HAnimSegment();
HAnimSegment91.setDEF(CString("boxman_r_thigh"));
HAnimSegment91.X3DNode::setName(CString("r_thigh"));
Transform& Transform92 =  Transform();
Transform92.setTranslation(new float[]{-0.0956,0.9364,0});
Shape& Shape93 =  Shape();
Shape93.setUSE(CString("SphereYellow"));
Transform92.addChild(&Shape93);

HAnimSegment91.addChild(&Transform92);

HAnimJoint90.addChildren(&HAnimSegment91);

HAnimJoint& HAnimJoint94 =  HAnimJoint();
HAnimJoint94.setDEF(CString("boxman_r_knee"));
HAnimJoint94.X3DNode::setName(CString("r_knee"));
HAnimJoint94.setCenter(new float[]{-0.0956,0.5095,-0.0036});
HAnimJoint94.setSkinCoordIndex(new int32_t[]{104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131}, 28);
HAnimJoint94.setSkinCoordWeight(new float[]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 28);
HAnimSegment& HAnimSegment95 =  HAnimSegment();
HAnimSegment95.setDEF(CString("boxman_r_calf"));
HAnimSegment95.X3DNode::setName(CString("r_calf"));
Transform& Transform96 =  Transform();
Transform96.setTranslation(new float[]{-0.0956,0.5095,-0.0036});
Shape& Shape97 =  Shape();
Shape97.setUSE(CString("SphereYellow"));
Transform96.addChild(&Shape97);

HAnimSegment95.addChild(&Transform96);

HAnimJoint94.addChildren(&HAnimSegment95);

HAnimJoint& HAnimJoint98 =  HAnimJoint();
HAnimJoint98.setDEF(CString("boxman_r_ankle"));
HAnimJoint98.X3DNode::setName(CString("r_ankle"));
HAnimJoint98.setCenter(new float[]{-0.0946,0.0762,-0.0261});
HAnimJoint98.setSkinCoordIndex(new int32_t[]{132,133,134,135,136,137,138,139}, 8);
HAnimJoint98.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment99 =  HAnimSegment();
HAnimSegment99.setDEF(CString("boxman_r_hindfoot"));
HAnimSegment99.X3DNode::setName(CString("r_hindfoot"));
Transform& Transform100 =  Transform();
Transform100.setTranslation(new float[]{-0.0946,0.0762,-0.0261});
Shape& Shape101 =  Shape();
Shape101.setUSE(CString("SphereYellow"));
Transform100.addChild(&Shape101);

HAnimSegment99.addChild(&Transform100);

HAnimJoint98.addChildren(&HAnimSegment99);

HAnimJoint& HAnimJoint102 =  HAnimJoint();
HAnimJoint102.setDEF(CString("boxman_r_midtarsal"));
HAnimJoint102.X3DNode::setName(CString("r_midtarsal"));
HAnimJoint102.setCenter(new float[]{-0.1079,0.0317,0.067});
HAnimJoint102.setSkinCoordIndex(new int32_t[]{140,141,142,143,144,145,146,147}, 8);
HAnimJoint102.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment103 =  HAnimSegment();
HAnimSegment103.setDEF(CString("boxman_r_middistal"));
HAnimSegment103.X3DNode::setName(CString("r_middistal"));
Transform& Transform104 =  Transform();
Transform104.setTranslation(new float[]{-0.1079,0.0317,0.067});
Shape& Shape105 =  Shape();
Shape105.setUSE(CString("SphereYellow"));
Transform104.addChild(&Shape105);

HAnimSegment103.addChild(&Transform104);

HAnimSite& HAnimSite106 =  HAnimSite();
HAnimSite106.setDEF(CString("boxman_r_middistal_tip"));
HAnimSite106.X3DNode::setName(CString("r_middistal_tip"));
HAnimSite106.setTranslation(new float[]{-0.095,0.0005,0.1924});
Shape& Shape107 =  Shape();
Shape107.setUSE(CString("SphereRed"));
HAnimSite106.addChild(&Shape107);

HAnimSegment103.addChild(&HAnimSite106);

HAnimJoint102.addChildren(&HAnimSegment103);

HAnimJoint98.addChildren(&HAnimJoint102);

HAnimJoint94.addChildren(&HAnimJoint98);

HAnimJoint90.addChildren(&HAnimJoint94);

HAnimJoint62.addChildren(&HAnimJoint90);

HAnimJoint& HAnimJoint108 =  HAnimJoint();
HAnimJoint108.setDEF(CString("boxman_vl5"));
HAnimJoint108.X3DNode::setName(CString("vl5"));
HAnimJoint108.setCenter(new float[]{0,1.0817,-0.0728});
HAnimJoint108.setSkinCoordIndex(new int32_t[]{148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167}, 20);
HAnimJoint108.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 20);
HAnimSegment& HAnimSegment109 =  HAnimSegment();
HAnimSegment109.setDEF(CString("boxman_l5"));
HAnimSegment109.X3DNode::setName(CString("l5"));
Transform& Transform110 =  Transform();
Transform110.setTranslation(new float[]{0,1.0817,-0.0728});
Shape& Shape111 =  Shape();
Shape111.setUSE(CString("SphereYellow"));
Transform110.addChild(&Shape111);

HAnimSegment109.addChild(&Transform110);

HAnimJoint108.addChildren(&HAnimSegment109);

HAnimJoint& HAnimJoint112 =  HAnimJoint();
HAnimJoint112.setDEF(CString("boxman_skullbase"));
HAnimJoint112.X3DNode::setName(CString("skullbase"));
HAnimJoint112.setCenter(new float[]{0,1.644,0.036});
HAnimJoint112.setSkinCoordIndex(new int32_t[]{168,169,170,171,172,173,174,175}, 8);
HAnimJoint112.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment113 =  HAnimSegment();
HAnimSegment113.setDEF(CString("boxman_skull"));
HAnimSegment113.X3DNode::setName(CString("skull"));
Transform& Transform114 =  Transform();
Transform114.setTranslation(new float[]{0,1.644,0.036});
Shape& Shape115 =  Shape();
Shape115.setUSE(CString("SphereYellow"));
Transform114.addChild(&Shape115);

HAnimSegment113.addChild(&Transform114);

HAnimSite& HAnimSite116 =  HAnimSite();
HAnimSite116.setDEF(CString("boxman_skull_tip"));
HAnimSite116.X3DNode::setName(CString("skull_tip"));
HAnimSite116.setTranslation(new float[]{-0.0029,1.7771,0.0274});
Shape& Shape117 =  Shape();
Shape117.setUSE(CString("SphereYellow"));
HAnimSite116.addChild(&Shape117);

HAnimSegment113.addChild(&HAnimSite116);

HAnimJoint112.addChildren(&HAnimSegment113);

HAnimJoint108.addChildren(&HAnimJoint112);

HAnimJoint& HAnimJoint118 =  HAnimJoint();
HAnimJoint118.setDEF(CString("boxman_l_shoulder"));
HAnimJoint118.X3DNode::setName(CString("l_shoulder"));
HAnimJoint118.setCenter(new float[]{0.1968,1.4642,-0.0265});
HAnimJoint118.setSkinCoordIndex(new int32_t[]{176,177,178,179,180,181,182,183}, 8);
HAnimJoint118.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment119 =  HAnimSegment();
HAnimSegment119.setDEF(CString("boxman_l_upperarm"));
HAnimSegment119.X3DNode::setName(CString("l_upperarm"));
Transform& Transform120 =  Transform();
Transform120.setTranslation(new float[]{0.1968,1.4642,-0.0265});
Shape& Shape121 =  Shape();
Shape121.setUSE(CString("SphereYellow"));
Transform120.addChild(&Shape121);

HAnimSegment119.addChild(&Transform120);

HAnimJoint118.addChildren(&HAnimSegment119);

HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.setDEF(CString("boxman_l_elbow"));
HAnimJoint122.X3DNode::setName(CString("l_elbow"));
HAnimJoint122.setCenter(new float[]{0.1982,1.1622,-0.0557});
HAnimJoint122.setSkinCoordIndex(new int32_t[]{184,185,186,187,188,189,190,191}, 8);
HAnimJoint122.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment123 =  HAnimSegment();
HAnimSegment123.setDEF(CString("boxman_l_forearm"));
HAnimSegment123.X3DNode::setName(CString("l_forearm"));
Transform& Transform124 =  Transform();
Transform124.setTranslation(new float[]{0.1982,1.1622,-0.0557});
Shape& Shape125 =  Shape();
Shape125.setUSE(CString("SphereYellow"));
Transform124.addChild(&Shape125);

HAnimSegment123.addChild(&Transform124);

HAnimJoint122.addChildren(&HAnimSegment123);

HAnimJoint& HAnimJoint126 =  HAnimJoint();
HAnimJoint126.setDEF(CString("boxman_l_wrist"));
HAnimJoint126.X3DNode::setName(CString("l_wrist"));
HAnimJoint126.setCenter(new float[]{0.1972,0.8929,-0.069});
HAnimJoint126.setSkinCoordIndex(new int32_t[]{192,193,194,195,196,197,198,199}, 8);
HAnimJoint126.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment127 =  HAnimSegment();
HAnimSegment127.setDEF(CString("boxman_l_hand"));
HAnimSegment127.X3DNode::setName(CString("l_hand"));
Transform& Transform128 =  Transform();
Transform128.setTranslation(new float[]{0.1972,0.8929,-0.069});
Shape& Shape129 =  Shape();
Shape129.setUSE(CString("SphereYellow"));
Transform128.addChild(&Shape129);

HAnimSegment127.addChild(&Transform128);

HAnimSite& HAnimSite130 =  HAnimSite();
HAnimSite130.setDEF(CString("boxman_l_hand_tip"));
HAnimSite130.X3DNode::setName(CString("l_hand_tip"));
HAnimSite130.setTranslation(new float[]{0.1912,0.6976,-0.071});
Shape& Shape131 =  Shape();
Shape131.setUSE(CString("SphereRed"));
HAnimSite130.addChild(&Shape131);

HAnimSegment127.addChild(&HAnimSite130);

HAnimJoint126.addChildren(&HAnimSegment127);

HAnimJoint122.addChildren(&HAnimJoint126);

HAnimJoint118.addChildren(&HAnimJoint122);

HAnimJoint108.addChildren(&HAnimJoint118);

HAnimJoint& HAnimJoint132 =  HAnimJoint();
HAnimJoint132.setDEF(CString("boxman_r_shoulder"));
HAnimJoint132.X3DNode::setName(CString("r_shoulder"));
HAnimJoint132.setCenter(new float[]{-0.1968,1.4642,-0.0265});
HAnimJoint132.setSkinCoordIndex(new int32_t[]{200,201,202,203,204,205,206,207}, 8);
HAnimJoint132.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment133 =  HAnimSegment();
HAnimSegment133.setDEF(CString("boxman_r_upperarm"));
HAnimSegment133.X3DNode::setName(CString("r_upperarm"));
Transform& Transform134 =  Transform();
Transform134.setTranslation(new float[]{-0.1968,1.4642,-0.0265});
Shape& Shape135 =  Shape();
Shape135.setUSE(CString("SphereYellow"));
Transform134.addChild(&Shape135);

HAnimSegment133.addChild(&Transform134);

HAnimJoint132.addChildren(&HAnimSegment133);

HAnimJoint& HAnimJoint136 =  HAnimJoint();
HAnimJoint136.setDEF(CString("boxman_r_elbow"));
HAnimJoint136.X3DNode::setName(CString("r_elbow"));
HAnimJoint136.setCenter(new float[]{-0.1982,1.1622,-0.0557});
HAnimJoint136.setSkinCoordIndex(new int32_t[]{208,209,210,211,212,213,214,215}, 8);
HAnimJoint136.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment137 =  HAnimSegment();
HAnimSegment137.setDEF(CString("boxman_r_forearm"));
HAnimSegment137.X3DNode::setName(CString("r_forearm"));
Transform& Transform138 =  Transform();
Transform138.setTranslation(new float[]{-0.1982,1.1622,-0.0557});
Shape& Shape139 =  Shape();
Shape139.setUSE(CString("SphereYellow"));
Transform138.addChild(&Shape139);

HAnimSegment137.addChild(&Transform138);

HAnimJoint136.addChildren(&HAnimSegment137);

HAnimJoint& HAnimJoint140 =  HAnimJoint();
HAnimJoint140.setDEF(CString("boxman_r_wrist"));
HAnimJoint140.X3DNode::setName(CString("r_wrist"));
HAnimJoint140.setCenter(new float[]{-0.1972,0.8929,-0.069});
HAnimJoint140.setSkinCoordIndex(new int32_t[]{216,217,218,219,220,221,222,223}, 8);
HAnimJoint140.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment141 =  HAnimSegment();
HAnimSegment141.setDEF(CString("boxman_r_hand"));
HAnimSegment141.X3DNode::setName(CString("r_hand"));
Transform& Transform142 =  Transform();
Transform142.setTranslation(new float[]{-0.1972,0.8929,-0.069});
Shape& Shape143 =  Shape();
Shape143.setUSE(CString("SphereYellow"));
Transform142.addChild(&Shape143);

HAnimSegment141.addChild(&Transform142);

HAnimSite& HAnimSite144 =  HAnimSite();
HAnimSite144.setDEF(CString("boxman_r_hand_tip"));
HAnimSite144.X3DNode::setName(CString("r_hand_tip"));
HAnimSite144.setTranslation(new float[]{-0.1912,0.6976,-0.071});
Shape& Shape145 =  Shape();
Shape145.setUSE(CString("SphereRed"));
HAnimSite144.addChild(&Shape145);

HAnimSegment141.addChild(&HAnimSite144);

HAnimJoint140.addChildren(&HAnimSegment141);

HAnimJoint136.addChildren(&HAnimJoint140);

HAnimJoint132.addChildren(&HAnimJoint136);

HAnimJoint108.addChildren(&HAnimJoint132);

HAnimJoint62.addChildren(&HAnimJoint108);

HAnimHumanoid61.setSkeleton(&HAnimJoint62);

HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.setUSE(CString("boxman_humanoid_root"));
HAnimHumanoid61.setJoints(&HAnimJoint146);

HAnimJoint& HAnimJoint147 =  HAnimJoint();
HAnimJoint147.setUSE(CString("boxman_skullbase"));
HAnimHumanoid61.setJoints(&HAnimJoint147);

HAnimJoint& HAnimJoint148 =  HAnimJoint();
HAnimJoint148.setUSE(CString("boxman_vl5"));
HAnimHumanoid61.setJoints(&HAnimJoint148);

HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.setUSE(CString("boxman_l_ankle"));
HAnimHumanoid61.setJoints(&HAnimJoint149);

HAnimJoint& HAnimJoint150 =  HAnimJoint();
HAnimJoint150.setUSE(CString("boxman_r_ankle"));
HAnimHumanoid61.setJoints(&HAnimJoint150);

HAnimJoint& HAnimJoint151 =  HAnimJoint();
HAnimJoint151.setUSE(CString("boxman_l_elbow"));
HAnimHumanoid61.setJoints(&HAnimJoint151);

HAnimJoint& HAnimJoint152 =  HAnimJoint();
HAnimJoint152.setUSE(CString("boxman_r_elbow"));
HAnimHumanoid61.setJoints(&HAnimJoint152);

HAnimJoint& HAnimJoint153 =  HAnimJoint();
HAnimJoint153.setUSE(CString("boxman_l_hip"));
HAnimHumanoid61.setJoints(&HAnimJoint153);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.setUSE(CString("boxman_r_hip"));
HAnimHumanoid61.setJoints(&HAnimJoint154);

HAnimJoint& HAnimJoint155 =  HAnimJoint();
HAnimJoint155.setUSE(CString("boxman_l_knee"));
HAnimHumanoid61.setJoints(&HAnimJoint155);

HAnimJoint& HAnimJoint156 =  HAnimJoint();
HAnimJoint156.setUSE(CString("boxman_r_knee"));
HAnimHumanoid61.setJoints(&HAnimJoint156);

HAnimJoint& HAnimJoint157 =  HAnimJoint();
HAnimJoint157.setUSE(CString("boxman_l_midtarsal"));
HAnimHumanoid61.setJoints(&HAnimJoint157);

HAnimJoint& HAnimJoint158 =  HAnimJoint();
HAnimJoint158.setUSE(CString("boxman_r_midtarsal"));
HAnimHumanoid61.setJoints(&HAnimJoint158);

HAnimJoint& HAnimJoint159 =  HAnimJoint();
HAnimJoint159.setUSE(CString("boxman_l_shoulder"));
HAnimHumanoid61.setJoints(&HAnimJoint159);

HAnimJoint& HAnimJoint160 =  HAnimJoint();
HAnimJoint160.setUSE(CString("boxman_r_shoulder"));
HAnimHumanoid61.setJoints(&HAnimJoint160);

HAnimJoint& HAnimJoint161 =  HAnimJoint();
HAnimJoint161.setUSE(CString("boxman_l_wrist"));
HAnimHumanoid61.setJoints(&HAnimJoint161);

HAnimJoint& HAnimJoint162 =  HAnimJoint();
HAnimJoint162.setUSE(CString("boxman_r_wrist"));
HAnimHumanoid61.setJoints(&HAnimJoint162);

HAnimSegment& HAnimSegment163 =  HAnimSegment();
HAnimSegment163.setUSE(CString("boxman_l5"));
HAnimHumanoid61.setSegments(&HAnimSegment163);

HAnimSegment& HAnimSegment164 =  HAnimSegment();
HAnimSegment164.setUSE(CString("boxman_sacrum"));
HAnimHumanoid61.setSegments(&HAnimSegment164);

HAnimSegment& HAnimSegment165 =  HAnimSegment();
HAnimSegment165.setUSE(CString("boxman_skull"));
HAnimHumanoid61.setSegments(&HAnimSegment165);

HAnimSegment& HAnimSegment166 =  HAnimSegment();
HAnimSegment166.setUSE(CString("boxman_l_calf"));
HAnimHumanoid61.setSegments(&HAnimSegment166);

HAnimSegment& HAnimSegment167 =  HAnimSegment();
HAnimSegment167.setUSE(CString("boxman_r_calf"));
HAnimHumanoid61.setSegments(&HAnimSegment167);

HAnimSegment& HAnimSegment168 =  HAnimSegment();
HAnimSegment168.setUSE(CString("boxman_l_forearm"));
HAnimHumanoid61.setSegments(&HAnimSegment168);

HAnimSegment& HAnimSegment169 =  HAnimSegment();
HAnimSegment169.setUSE(CString("boxman_r_forearm"));
HAnimHumanoid61.setSegments(&HAnimSegment169);

HAnimSegment& HAnimSegment170 =  HAnimSegment();
HAnimSegment170.setUSE(CString("boxman_l_hand"));
HAnimHumanoid61.setSegments(&HAnimSegment170);

HAnimSegment& HAnimSegment171 =  HAnimSegment();
HAnimSegment171.setUSE(CString("boxman_r_hand"));
HAnimHumanoid61.setSegments(&HAnimSegment171);

HAnimSegment& HAnimSegment172 =  HAnimSegment();
HAnimSegment172.setUSE(CString("boxman_l_hindfoot"));
HAnimHumanoid61.setSegments(&HAnimSegment172);

HAnimSegment& HAnimSegment173 =  HAnimSegment();
HAnimSegment173.setUSE(CString("boxman_r_hindfoot"));
HAnimHumanoid61.setSegments(&HAnimSegment173);

HAnimSegment& HAnimSegment174 =  HAnimSegment();
HAnimSegment174.setUSE(CString("boxman_l_middistal"));
HAnimHumanoid61.setSegments(&HAnimSegment174);

HAnimSegment& HAnimSegment175 =  HAnimSegment();
HAnimSegment175.setUSE(CString("boxman_r_middistal"));
HAnimHumanoid61.setSegments(&HAnimSegment175);

HAnimSegment& HAnimSegment176 =  HAnimSegment();
HAnimSegment176.setUSE(CString("boxman_l_thigh"));
HAnimHumanoid61.setSegments(&HAnimSegment176);

HAnimSegment& HAnimSegment177 =  HAnimSegment();
HAnimSegment177.setUSE(CString("boxman_r_thigh"));
HAnimHumanoid61.setSegments(&HAnimSegment177);

HAnimSegment& HAnimSegment178 =  HAnimSegment();
HAnimSegment178.setUSE(CString("boxman_l_upperarm"));
HAnimHumanoid61.setSegments(&HAnimSegment178);

HAnimSegment& HAnimSegment179 =  HAnimSegment();
HAnimSegment179.setUSE(CString("boxman_r_upperarm"));
HAnimHumanoid61.setSegments(&HAnimSegment179);

HAnimSite& HAnimSite180 =  HAnimSite();
HAnimSite180.setUSE(CString("boxman_skull_tip"));
HAnimHumanoid61.setSites(&HAnimSite180);

HAnimSite& HAnimSite181 =  HAnimSite();
HAnimSite181.setUSE(CString("boxman_l_hand_tip"));
HAnimHumanoid61.setSites(&HAnimSite181);

HAnimSite& HAnimSite182 =  HAnimSite();
HAnimSite182.setUSE(CString("boxman_r_hand_tip"));
HAnimHumanoid61.setSites(&HAnimSite182);

HAnimSite& HAnimSite183 =  HAnimSite();
HAnimSite183.setUSE(CString("boxman_l_middistal_tip"));
HAnimHumanoid61.setSites(&HAnimSite183);

HAnimSite& HAnimSite184 =  HAnimSite();
HAnimSite184.setUSE(CString("boxman_r_middistal_tip"));
HAnimHumanoid61.setSites(&HAnimSite184);

HAnimSite& HAnimSite185 =  HAnimSite();
HAnimSite185.setDEF(CString("boxman_BoxMan_view"));
HAnimSite185.X3DNode::setName(CString("BoxMan_view"));
Viewpoint& Viewpoint186 =  Viewpoint();
Viewpoint186.setDEF(CString("Inclined_View"));
Viewpoint186.setDescription(CString("Inclined View"));
Viewpoint186.setPosition(new float[]{2,0.9,2});
Viewpoint186.setOrientation(new float[]{0,1,0,0.78});
HAnimSite185.addChild(&Viewpoint186);

Viewpoint& Viewpoint187 =  Viewpoint();
Viewpoint187.setDEF(CString("Front_View"));
Viewpoint187.setDescription(CString("Front View"));
Viewpoint187.setPosition(new float[]{0,1,3});
HAnimSite185.addChild(&Viewpoint187);

Viewpoint& Viewpoint188 =  Viewpoint();
Viewpoint188.setDEF(CString("Right_View"));
Viewpoint188.setDescription(CString("Right-side View"));
Viewpoint188.setPosition(new float[]{-3,1,0});
Viewpoint188.setOrientation(new float[]{0,1,0,-1.57});
HAnimSite185.addChild(&Viewpoint188);

Viewpoint& Viewpoint189 =  Viewpoint();
Viewpoint189.setDEF(CString("Left_View"));
Viewpoint189.setDescription(CString("Left-side View"));
Viewpoint189.setPosition(new float[]{3,1,0});
Viewpoint189.setOrientation(new float[]{0,1,0,1.57});
HAnimSite185.addChild(&Viewpoint189);

Viewpoint& Viewpoint190 =  Viewpoint();
Viewpoint190.setDEF(CString("Top_View"));
Viewpoint190.setDescription(CString("Top View"));
Viewpoint190.setPosition(new float[]{0,3,0});
Viewpoint190.setOrientation(new float[]{1,0,0,-1.57});
HAnimSite185.addChild(&Viewpoint190);

HAnimHumanoid61.setViewpoints(&HAnimSite185);

Coordinate& Coordinate191 =  Coordinate();
Coordinate191.setDEF(CString("SKINCOORD"));
Coordinate191.setPoint(new float[]{-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1}, 672);
HAnimHumanoid61.setSkinCoord(&Coordinate191);

Group& Group192 =  Group();
Shape& Shape193 =  Shape();
Shape193.setDEF(CString("TrouserSkin"));
Appearance& Appearance194 =  Appearance();
Material& Material195 =  Material();
Material195.setDiffuseColor(new float[]{0,0,1});
Material195.setTransparency(0.5);
Appearance194.addChild(&Material195);

Shape193.addChild(&Appearance194);

IndexedFaceSet& IndexedFaceSet196 =  IndexedFaceSet();
IndexedFaceSet196.setCoordIndex(new int32_t[]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1}, 888);
Coordinate& Coordinate197 =  Coordinate();
Coordinate197.setUSE(CString("SKINCOORD"));
IndexedFaceSet196.setCoord(&Coordinate197);

Shape193.setGeometry(&IndexedFaceSet196);

Group192.addChild(&Shape193);

Shape& Shape198 =  Shape();
Shape198.setDEF(CString("ShoeSkin"));
Appearance& Appearance199 =  Appearance();
Material& Material200 =  Material();
Material200.setDiffuseColor(new float[]{0,0,0});
Material200.setTransparency(0.5);
Appearance199.addChild(&Material200);

Shape198.addChild(&Appearance199);

IndexedFaceSet& IndexedFaceSet201 =  IndexedFaceSet();
IndexedFaceSet201.setCoordIndex(new int32_t[]{60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1}, 272);
Coordinate& Coordinate202 =  Coordinate();
Coordinate202.setUSE(CString("SKINCOORD"));
IndexedFaceSet201.setCoord(&Coordinate202);

Shape198.setGeometry(&IndexedFaceSet201);

Group192.addChild(&Shape198);

Shape& Shape203 =  Shape();
Shape203.setDEF(CString("ShirtSkin"));
Appearance& Appearance204 =  Appearance();
Material& Material205 =  Material();
Material205.setDiffuseColor(new float[]{1,1,0});
Material205.setTransparency(0.5);
Appearance204.addChild(&Material205);

Shape203.addChild(&Appearance204);

IndexedFaceSet& IndexedFaceSet206 =  IndexedFaceSet();
IndexedFaceSet206.setCoordIndex(new int32_t[]{148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1}, 400);
Coordinate& Coordinate207 =  Coordinate();
Coordinate207.setUSE(CString("SKINCOORD"));
IndexedFaceSet206.setCoord(&Coordinate207);

Shape203.setGeometry(&IndexedFaceSet206);

Group192.addChild(&Shape203);

Shape& Shape208 =  Shape();
Shape208.setDEF(CString("HeadHandsFleshToneSkin"));
Appearance& Appearance209 =  Appearance();
Material& Material210 =  Material();
Material210.setDiffuseColor(new float[]{1,0.75,0.75});
Material210.setTransparency(0.5);
Appearance209.addChild(&Material210);

Shape208.addChild(&Appearance209);

IndexedFaceSet& IndexedFaceSet211 =  IndexedFaceSet();
IndexedFaceSet211.setCoordIndex(new int32_t[]{172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1}, 216);
Coordinate& Coordinate212 =  Coordinate();
Coordinate212.setUSE(CString("SKINCOORD"));
IndexedFaceSet211.setCoord(&Coordinate212);

Shape208.setGeometry(&IndexedFaceSet211);

Group192.addChild(&Shape208);

Shape& Shape213 =  Shape();
Shape213.setDEF(CString("SkinLines"));
Appearance& Appearance214 =  Appearance();
Material& Material215 =  Material();
Material215.setDiffuseColor(new float[]{0,0,0});
Appearance214.addChild(&Material215);

Shape213.addChild(&Appearance214);

IndexedLineSet& IndexedLineSet216 =  IndexedLineSet();
IndexedLineSet216.setCoordIndex(new int32_t[]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1}, 1776);
Coordinate& Coordinate217 =  Coordinate();
Coordinate217.setUSE(CString("SKINCOORD"));
IndexedLineSet216.setCoord(&Coordinate217);

Shape213.setGeometry(&IndexedLineSet216);

Group192.addChild(&Shape213);

HAnimHumanoid61.setSkin(Group192);

Scene32.addChild(&HAnimHumanoid61);

ProtoInstance& ProtoInstance218 =  ProtoInstance();
ProtoInstance218.setDEF(CString("ANIMATOR"));
ProtoInstance218.setName(CString("LOA1_WalkAnimation"));
Scene32.addChild(&ProtoInstance218);

Script& Script219 =  Script();
Script219.setDEF(CString("ENGINE"));
Script219.setUrl(new CString[]{CString("BoxMan.js"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.js")}, 2);
Script219.setDirectOutput(True);
field& field220 =  field();
field220.setAccessType(CString("inputOnly"));
field220.setType(CString("SFRotation"));
field220.setName(CString("update"));
Script219.addChild(&field220);

field& field221 =  field();
field221.setAccessType(CString("initializeOnly"));
field221.setType(CString("SFNode"));
field221.setName(CString("humanoid"));
HAnimHumanoid& HAnimHumanoid222 =  HAnimHumanoid();
HAnimHumanoid222.setUSE(CString("boxman_Humanoid"));
field221.addChild(&HAnimHumanoid222);

Script219.addChild(&field221);

field& field223 =  field();
field223.setAccessType(CString("initializeOnly"));
field223.setType(CString("MFVec3f"));
field223.setName(CString("coordList"));
Script219.addChild(&field223);

field& field224 =  field();
field224.setAccessType(CString("initializeOnly"));
field224.setType(CString("SFNode"));
field224.setName(CString("joint"));
Script219.addChild(&field224);

field& field225 =  field();
field225.setAccessType(CString("initializeOnly"));
field225.setType(CString("SFVec3f"));
field225.setName(CString("translation"));
Script219.addChild(&field225);

field& field226 =  field();
field226.setAccessType(CString("initializeOnly"));
field226.setType(CString("SFRotation"));
field226.setName(CString("rotation"));
Script219.addChild(&field226);

field& field227 =  field();
field227.setAccessType(CString("initializeOnly"));
field227.setType(CString("SFVec3f"));
field227.setName(CString("scale"));
field227.setValue(CString("1 1 1"));
Script219.addChild(&field227);

Scene32.addChild(&Script219);

ROUTE& ROUTE228 =  ROUTE();
ROUTE228.setFromNode(CString("ANIMATOR"));
ROUTE228.setFromField(CString("HumanoidRoot_translation_changed"));
ROUTE228.setToNode(CString("boxman_humanoid_root"));
ROUTE228.setToField(CString("set_translation"));
Scene32.addChild(&ROUTE228);

ROUTE& ROUTE229 =  ROUTE();
ROUTE229.setFromNode(CString("ANIMATOR"));
ROUTE229.setFromField(CString("HumanoidRoot_rotation_changed"));
ROUTE229.setToNode(CString("boxman_humanoid_root"));
ROUTE229.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE229);

ROUTE& ROUTE230 =  ROUTE();
ROUTE230.setFromNode(CString("ANIMATOR"));
ROUTE230.setFromField(CString("l_hip_rotation_changed"));
ROUTE230.setToNode(CString("boxman_l_hip"));
ROUTE230.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE230);

ROUTE& ROUTE231 =  ROUTE();
ROUTE231.setFromNode(CString("ANIMATOR"));
ROUTE231.setFromField(CString("l_knee_rotation_changed"));
ROUTE231.setToNode(CString("boxman_l_knee"));
ROUTE231.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE231);

ROUTE& ROUTE232 =  ROUTE();
ROUTE232.setFromNode(CString("ANIMATOR"));
ROUTE232.setFromField(CString("l_ankle_rotation_changed"));
ROUTE232.setToNode(CString("boxman_l_ankle"));
ROUTE232.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE232);

ROUTE& ROUTE233 =  ROUTE();
ROUTE233.setFromNode(CString("ANIMATOR"));
ROUTE233.setFromField(CString("l_midtarsal_rotation_changed"));
ROUTE233.setToNode(CString("boxman_l_midtarsal"));
ROUTE233.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE233);

ROUTE& ROUTE234 =  ROUTE();
ROUTE234.setFromNode(CString("ANIMATOR"));
ROUTE234.setFromField(CString("r_hip_rotation_changed"));
ROUTE234.setToNode(CString("boxman_r_hip"));
ROUTE234.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE234);

ROUTE& ROUTE235 =  ROUTE();
ROUTE235.setFromNode(CString("ANIMATOR"));
ROUTE235.setFromField(CString("r_knee_rotation_changed"));
ROUTE235.setToNode(CString("boxman_r_knee"));
ROUTE235.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE235);

ROUTE& ROUTE236 =  ROUTE();
ROUTE236.setFromNode(CString("ANIMATOR"));
ROUTE236.setFromField(CString("r_ankle_rotation_changed"));
ROUTE236.setToNode(CString("boxman_r_ankle"));
ROUTE236.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE236);

ROUTE& ROUTE237 =  ROUTE();
ROUTE237.setFromNode(CString("ANIMATOR"));
ROUTE237.setFromField(CString("r_midtarsal_rotation_changed"));
ROUTE237.setToNode(CString("boxman_r_midtarsal"));
ROUTE237.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE237);

ROUTE& ROUTE238 =  ROUTE();
ROUTE238.setFromNode(CString("ANIMATOR"));
ROUTE238.setFromField(CString("vl5_rotation_changed"));
ROUTE238.setToNode(CString("boxman_vl5"));
ROUTE238.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE238);

ROUTE& ROUTE239 =  ROUTE();
ROUTE239.setFromNode(CString("ANIMATOR"));
ROUTE239.setFromField(CString("skullbase_rotation_changed"));
ROUTE239.setToNode(CString("boxman_skullbase"));
ROUTE239.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE239);

ROUTE& ROUTE240 =  ROUTE();
ROUTE240.setFromNode(CString("ANIMATOR"));
ROUTE240.setFromField(CString("l_shoulder_rotation_changed"));
ROUTE240.setToNode(CString("boxman_l_shoulder"));
ROUTE240.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE240);

ROUTE& ROUTE241 =  ROUTE();
ROUTE241.setFromNode(CString("ANIMATOR"));
ROUTE241.setFromField(CString("l_elbow_rotation_changed"));
ROUTE241.setToNode(CString("boxman_l_elbow"));
ROUTE241.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE241);

ROUTE& ROUTE242 =  ROUTE();
ROUTE242.setFromNode(CString("ANIMATOR"));
ROUTE242.setFromField(CString("l_wrist_rotation_changed"));
ROUTE242.setToNode(CString("boxman_l_wrist"));
ROUTE242.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE242);

ROUTE& ROUTE243 =  ROUTE();
ROUTE243.setFromNode(CString("ANIMATOR"));
ROUTE243.setFromField(CString("r_shoulder_rotation_changed"));
ROUTE243.setToNode(CString("boxman_r_shoulder"));
ROUTE243.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE243);

ROUTE& ROUTE244 =  ROUTE();
ROUTE244.setFromNode(CString("ANIMATOR"));
ROUTE244.setFromField(CString("r_elbow_rotation_changed"));
ROUTE244.setToNode(CString("boxman_r_elbow"));
ROUTE244.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE244);

ROUTE& ROUTE245 =  ROUTE();
ROUTE245.setFromNode(CString("ANIMATOR"));
ROUTE245.setFromField(CString("r_wrist_rotation_changed"));
ROUTE245.setToNode(CString("boxman_r_wrist"));
ROUTE245.setToField(CString("set_rotation"));
Scene32.addChild(&ROUTE245);

X3D0.setScene(&Scene32);

}
