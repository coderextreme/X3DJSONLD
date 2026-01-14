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
meta3.setContent(CString("BoxMan3AnimationPanel.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Joe Williams and James Smith - james@vapourtech.com"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("translator"));
meta6.setContent(CString("Joe Williams and Don Brutzman"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("generator"));
meta7.setContent(CString(".x3d to .x3d translation used BS Contact Geo 8.203"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("generator"));
meta8.setContent(CString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("generator"));
meta9.setContent(CString("x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("created"));
meta10.setContent(CString("1 March 2001"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("revision"));
meta11.setContent(CString("12 January 2017"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("translated"));
meta12.setContent(CString("14 January 2017"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("modified"));
meta13.setContent(CString("Tue, 09 Sep 2025 19:37:50 GMT"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("error"));
meta14.setContent(CString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("Image"));
meta15.setContent(CString("BoxManAnimationPanelInclined.png"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("MovingImage"));
meta16.setContent(CString("BoxManAnimationPanel.mp4"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("MovingImage"));
meta17.setContent(CString("https://www.youtube.com/watch?v=8tI83Rtg_DU"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("reference"));
meta18.setContent(CString("https://twitter.com/Web3DConsortium/status/820638047523913728"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("reference"));
meta19.setContent(CString("https://twitter.com/Web3DConsortium/status/820642726009978881"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("reference"));
meta20.setContent(CString("http://HAnim.org"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("reference"));
meta21.setContent(CString("originals/boxman.wrl"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("reference"));
meta22.setContent(CString("BoxMan3.x3d"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("reference"));
meta23.setContent(CString("http://HAnim.org/Models/HAnim2001/boxman"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("reference"));
meta24.setContent(CString("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("reference"));
meta25.setContent(CString("http://www.vapourtech.com/team/james/boxman.wrl"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("reference"));
meta26.setContent(CString("http://HAnim.org/Specifications/HAnim2001"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(CString("reference"));
meta27.setContent(CString("http://HAnim.org/Models"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(CString("reference"));
meta28.setContent(CString("http://HAnim.org/Nodes"));
head1.addMeta(&meta28);

meta& meta29 =  meta();
meta29.setName(CString("reference"));
meta29.setContent(CString("https://www.web3d.org/x3d/content/X3dToVrml97.xslt"));
head1.addMeta(&meta29);

meta& meta30 =  meta();
meta30.setName(CString("reference"));
meta30.setContent(CString("http://www.vapourtech.com"));
head1.addMeta(&meta30);

meta& meta31 =  meta();
meta31.setName(CString("TODO"));
meta31.setContent(CString("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"));
head1.addMeta(&meta31);

meta& meta32 =  meta();
meta32.setName(CString("rights"));
meta32.setContent(CString("(C) 2000 James Smith - james@vapourtech.com"));
head1.addMeta(&meta32);

X3D0.setHead(&head1);

Scene& Scene33 =  Scene();
WorldInfo& WorldInfo34 =  WorldInfo();
WorldInfo34.setTitle(CString("BoxMan3 - A Seamless VRML Human"));
WorldInfo34.setInfo(new CString[]{CString("(C) 2000 James Smith - james@vapourtech.com"), CString("http://www.vapourtech.com/team/james/boxman.wrl"), CString("Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com")}, 3);
Scene33.addChild(&WorldInfo34);

Background& Background35 =  Background();
Background35.setSkyColor(new float[]{0.75,0.75,0.75}, 3);
Background35.setGroundColor(new float[]{0.6,0.6,0.6}, 3);
Scene33.addChild(&Background35);

HAnimHumanoid& HAnimHumanoid36 =  HAnimHumanoid();
HAnimHumanoid36.setDEF(CString("boxman_Humanoid"));
HAnimHumanoid36.X3DNode::setName(CString("Humanoid"));
HAnimHumanoid36.setInfo(new CString[]{CString("authorName=James Smith"), CString("authorEmail=james@vapourtech.com"), CString("copyright=(C) 2000 James Smith - james@vapourtech.com"), CString("humanoidVersion=1.0")}, 4);
HAnimHumanoid36.setVersion(CString("1.0"));
HAnimJoint& HAnimJoint37 =  HAnimJoint();
HAnimJoint37.setDEF(CString("boxman_humanoid_root"));
HAnimJoint37.X3DNode::setName(CString("humanoid_root"));
HAnimJoint37.setCenter(new float[]{0,0.9723,-0.0728});
HAnimJoint37.setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11}, 12);
HAnimJoint37.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimSegment& HAnimSegment38 =  HAnimSegment();
HAnimSegment38.setDEF(CString("boxman_sacrum"));
HAnimSegment38.X3DNode::setName(CString("sacrum"));
Transform& Transform39 =  Transform();
Transform39.setTranslation(new float[]{0,0.9723,-0.0728});
Shape& Shape40 =  Shape();
Shape40.setDEF(CString("SphereYellow"));
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setDiffuseColor(new float[]{1,1,0});
Appearance41.addChild(&Material42);

Shape40.addChild(&Appearance41);

Sphere& Sphere43 =  Sphere();
Sphere43.setRadius(0.02);
Shape40.setGeometry(&Sphere43);

Transform39.addChild(&Shape40);

HAnimSegment38.addChild(&Transform39);

HAnimJoint37.addChildren(&HAnimSegment38);

HAnimJoint& HAnimJoint44 =  HAnimJoint();
HAnimJoint44.setDEF(CString("boxman_l_hip"));
HAnimJoint44.X3DNode::setName(CString("l_hip"));
HAnimJoint44.setCenter(new float[]{0.0956,0.9364,0});
HAnimJoint44.setSkinCoordIndex(new int32_t[]{12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43}, 32);
HAnimJoint44.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
HAnimSegment& HAnimSegment45 =  HAnimSegment();
HAnimSegment45.setDEF(CString("boxman_l_thigh"));
HAnimSegment45.X3DNode::setName(CString("l_thigh"));
Transform& Transform46 =  Transform();
Transform46.setTranslation(new float[]{0.0956,0.9364,0});
Shape& Shape47 =  Shape();
Shape47.setUSE(CString("SphereYellow"));
Transform46.addChild(&Shape47);

HAnimSegment45.addChild(&Transform46);

HAnimJoint44.addChildren(&HAnimSegment45);

HAnimJoint& HAnimJoint48 =  HAnimJoint();
HAnimJoint48.setDEF(CString("boxman_l_knee"));
HAnimJoint48.X3DNode::setName(CString("l_knee"));
HAnimJoint48.setCenter(new float[]{0.0956,0.5095,-0.0036});
HAnimJoint48.setSkinCoordIndex(new int32_t[]{36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63}, 28);
HAnimJoint48.setSkinCoordWeight(new float[]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 28);
HAnimSegment& HAnimSegment49 =  HAnimSegment();
HAnimSegment49.setDEF(CString("boxman_l_calf"));
HAnimSegment49.X3DNode::setName(CString("l_calf"));
Transform& Transform50 =  Transform();
Transform50.setTranslation(new float[]{0.0956,0.5095,-0.0036});
Shape& Shape51 =  Shape();
Shape51.setUSE(CString("SphereYellow"));
Transform50.addChild(&Shape51);

HAnimSegment49.addChild(&Transform50);

HAnimJoint48.addChildren(&HAnimSegment49);

HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.setDEF(CString("boxman_l_ankle"));
HAnimJoint52.X3DNode::setName(CString("l_ankle"));
HAnimJoint52.setRotation(new float[]{-0.999999999999999,0,0,0.934517418078819});
HAnimJoint52.setCenter(new float[]{0.0946,0.0762,-0.0261});
HAnimJoint52.setSkinCoordIndex(new int32_t[]{64,65,66,67,68,69,70,71}, 8);
HAnimJoint52.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment53 =  HAnimSegment();
HAnimSegment53.setDEF(CString("boxman_l_hindfoot"));
HAnimSegment53.X3DNode::setName(CString("l_hindfoot"));
Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{0.0946,0.0762,-0.0261});
Shape& Shape55 =  Shape();
Shape55.setUSE(CString("SphereYellow"));
Transform54.addChild(&Shape55);

HAnimSegment53.addChild(&Transform54);

HAnimJoint52.addChildren(&HAnimSegment53);

HAnimJoint& HAnimJoint56 =  HAnimJoint();
HAnimJoint56.setDEF(CString("boxman_l_midtarsal"));
HAnimJoint56.X3DNode::setName(CString("l_midtarsal"));
HAnimJoint56.setCenter(new float[]{0.1079,0.0317,0.067});
HAnimJoint56.setSkinCoordIndex(new int32_t[]{72,73,74,75,76,77,78,79}, 8);
HAnimJoint56.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment57 =  HAnimSegment();
HAnimSegment57.setDEF(CString("boxman_l_middistal"));
HAnimSegment57.X3DNode::setName(CString("l_middistal"));
Transform& Transform58 =  Transform();
Transform58.setTranslation(new float[]{0.1079,0.0317,0.067});
Shape& Shape59 =  Shape();
Shape59.setUSE(CString("SphereYellow"));
Transform58.addChild(&Shape59);

HAnimSegment57.addChild(&Transform58);

HAnimSite& HAnimSite60 =  HAnimSite();
HAnimSite60.setDEF(CString("boxman_l_middistal_tip"));
HAnimSite60.X3DNode::setName(CString("l_middistal_tip"));
HAnimSite60.setTranslation(new float[]{0.095,0.0005,0.1924});
Shape& Shape61 =  Shape();
Shape61.setDEF(CString("SphereRed"));
Appearance& Appearance62 =  Appearance();
Material& Material63 =  Material();
Material63.setDiffuseColor(new float[]{1,0,0});
Appearance62.addChild(&Material63);

Shape61.addChild(&Appearance62);

Sphere& Sphere64 =  Sphere();
Sphere64.setRadius(0.02);
Shape61.setGeometry(&Sphere64);

HAnimSite60.addChild(&Shape61);

HAnimSegment57.addChild(&HAnimSite60);

HAnimJoint56.addChildren(&HAnimSegment57);

HAnimJoint52.addChildren(&HAnimJoint56);

HAnimJoint48.addChildren(&HAnimJoint52);

HAnimJoint44.addChildren(&HAnimJoint48);

HAnimJoint37.addChildren(&HAnimJoint44);

HAnimJoint& HAnimJoint65 =  HAnimJoint();
HAnimJoint65.setDEF(CString("boxman_r_hip"));
HAnimJoint65.X3DNode::setName(CString("r_hip"));
HAnimJoint65.setRotation(new float[]{-1,0,0,1.84517416925276});
HAnimJoint65.setCenter(new float[]{-0.0956,0.9364,0});
HAnimJoint65.setSkinCoordIndex(new int32_t[]{80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111}, 32);
HAnimJoint65.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
HAnimSegment& HAnimSegment66 =  HAnimSegment();
HAnimSegment66.setDEF(CString("boxman_r_thigh"));
HAnimSegment66.X3DNode::setName(CString("r_thigh"));
Transform& Transform67 =  Transform();
Transform67.setTranslation(new float[]{-0.0956,0.9364,0});
Shape& Shape68 =  Shape();
Shape68.setUSE(CString("SphereYellow"));
Transform67.addChild(&Shape68);

HAnimSegment66.addChild(&Transform67);

HAnimJoint65.addChildren(&HAnimSegment66);

HAnimJoint& HAnimJoint69 =  HAnimJoint();
HAnimJoint69.setDEF(CString("boxman_r_knee"));
HAnimJoint69.X3DNode::setName(CString("r_knee"));
HAnimJoint69.setRotation(new float[]{1,0,0,1.81193032768473});
HAnimJoint69.setCenter(new float[]{-0.0956,0.5095,-0.0036});
HAnimJoint69.setSkinCoordIndex(new int32_t[]{104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131}, 28);
HAnimJoint69.setSkinCoordWeight(new float[]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 28);
HAnimSegment& HAnimSegment70 =  HAnimSegment();
HAnimSegment70.setDEF(CString("boxman_r_calf"));
HAnimSegment70.X3DNode::setName(CString("r_calf"));
Transform& Transform71 =  Transform();
Transform71.setTranslation(new float[]{-0.0956,0.5095,-0.0036});
Shape& Shape72 =  Shape();
Shape72.setUSE(CString("SphereYellow"));
Transform71.addChild(&Shape72);

HAnimSegment70.addChild(&Transform71);

HAnimJoint69.addChildren(&HAnimSegment70);

HAnimJoint& HAnimJoint73 =  HAnimJoint();
HAnimJoint73.setDEF(CString("boxman_r_ankle"));
HAnimJoint73.X3DNode::setName(CString("r_ankle"));
HAnimJoint73.setRotation(new float[]{-0.999999999999999,0,0,0.934517418078819});
HAnimJoint73.setCenter(new float[]{-0.0946,0.0762,-0.0261});
HAnimJoint73.setSkinCoordIndex(new int32_t[]{132,133,134,135,136,137,138,139}, 8);
HAnimJoint73.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment74 =  HAnimSegment();
HAnimSegment74.setDEF(CString("boxman_r_hindfoot"));
HAnimSegment74.X3DNode::setName(CString("r_hindfoot"));
Transform& Transform75 =  Transform();
Transform75.setTranslation(new float[]{-0.0946,0.0762,-0.0261});
Shape& Shape76 =  Shape();
Shape76.setUSE(CString("SphereYellow"));
Transform75.addChild(&Shape76);

HAnimSegment74.addChild(&Transform75);

HAnimJoint73.addChildren(&HAnimSegment74);

HAnimJoint& HAnimJoint77 =  HAnimJoint();
HAnimJoint77.setDEF(CString("boxman_r_midtarsal"));
HAnimJoint77.X3DNode::setName(CString("r_midtarsal"));
HAnimJoint77.setCenter(new float[]{-0.1079,0.0317,0.067});
HAnimJoint77.setSkinCoordIndex(new int32_t[]{140,141,142,143,144,145,146,147}, 8);
HAnimJoint77.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment78 =  HAnimSegment();
HAnimSegment78.setDEF(CString("boxman_r_middistal"));
HAnimSegment78.X3DNode::setName(CString("r_middistal"));
Transform& Transform79 =  Transform();
Transform79.setTranslation(new float[]{-0.1079,0.0317,0.067});
Shape& Shape80 =  Shape();
Shape80.setUSE(CString("SphereYellow"));
Transform79.addChild(&Shape80);

HAnimSegment78.addChild(&Transform79);

HAnimSite& HAnimSite81 =  HAnimSite();
HAnimSite81.setDEF(CString("boxman_r_middistal_tip"));
HAnimSite81.X3DNode::setName(CString("r_middistal_tip"));
HAnimSite81.setTranslation(new float[]{-0.095,0.0005,0.1924});
Shape& Shape82 =  Shape();
Shape82.setUSE(CString("SphereRed"));
HAnimSite81.addChild(&Shape82);

HAnimSegment78.addChild(&HAnimSite81);

HAnimJoint77.addChildren(&HAnimSegment78);

HAnimJoint73.addChildren(&HAnimJoint77);

HAnimJoint69.addChildren(&HAnimJoint73);

HAnimJoint65.addChildren(&HAnimJoint69);

HAnimJoint37.addChildren(&HAnimJoint65);

HAnimJoint& HAnimJoint83 =  HAnimJoint();
HAnimJoint83.setDEF(CString("boxman_vl5"));
HAnimJoint83.X3DNode::setName(CString("vl5"));
HAnimJoint83.setCenter(new float[]{0,1.0817,-0.0728});
HAnimJoint83.setSkinCoordIndex(new int32_t[]{148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167}, 20);
HAnimJoint83.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 20);
HAnimSegment& HAnimSegment84 =  HAnimSegment();
HAnimSegment84.setDEF(CString("boxman_l5"));
HAnimSegment84.X3DNode::setName(CString("l5"));
Transform& Transform85 =  Transform();
Transform85.setTranslation(new float[]{0,1.0817,-0.0728});
Shape& Shape86 =  Shape();
Shape86.setUSE(CString("SphereYellow"));
Transform85.addChild(&Shape86);

HAnimSegment84.addChild(&Transform85);

HAnimJoint83.addChildren(&HAnimSegment84);

HAnimJoint& HAnimJoint87 =  HAnimJoint();
HAnimJoint87.setDEF(CString("boxman_skullbase"));
HAnimJoint87.X3DNode::setName(CString("skullbase"));
HAnimJoint87.setRotation(new float[]{-0.999999999999998,0,0,0.567582977341481});
HAnimJoint87.setCenter(new float[]{0,1.644,0.036});
HAnimJoint87.setSkinCoordIndex(new int32_t[]{168,169,170,171,172,173,174,175}, 8);
HAnimJoint87.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment88 =  HAnimSegment();
HAnimSegment88.setDEF(CString("boxman_skull"));
HAnimSegment88.X3DNode::setName(CString("skull"));
Transform& Transform89 =  Transform();
Transform89.setTranslation(new float[]{0,1.644,0.036});
Shape& Shape90 =  Shape();
Shape90.setUSE(CString("SphereYellow"));
Transform89.addChild(&Shape90);

HAnimSegment88.addChild(&Transform89);

HAnimSite& HAnimSite91 =  HAnimSite();
HAnimSite91.setDEF(CString("boxman_skull_tip"));
HAnimSite91.X3DNode::setName(CString("skull_tip"));
HAnimSite91.setTranslation(new float[]{-0.0029,1.7771,0.0274});
Shape& Shape92 =  Shape();
Shape92.setUSE(CString("SphereYellow"));
HAnimSite91.addChild(&Shape92);

HAnimSegment88.addChild(&HAnimSite91);

HAnimJoint87.addChildren(&HAnimSegment88);

HAnimJoint83.addChildren(&HAnimJoint87);

HAnimJoint& HAnimJoint93 =  HAnimJoint();
HAnimJoint93.setDEF(CString("boxman_l_shoulder"));
HAnimJoint93.X3DNode::setName(CString("l_shoulder"));
HAnimJoint93.setRotation(new float[]{-0.168396082523642,0,0.98571941209996,1.75368175088092});
HAnimJoint93.setCenter(new float[]{0.1968,1.4642,-0.0265});
HAnimJoint93.setSkinCoordIndex(new int32_t[]{176,177,178,179,180,181,182,183}, 8);
HAnimJoint93.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment94 =  HAnimSegment();
HAnimSegment94.setDEF(CString("boxman_l_upperarm"));
HAnimSegment94.X3DNode::setName(CString("l_upperarm"));
Transform& Transform95 =  Transform();
Transform95.setTranslation(new float[]{0.1968,1.4642,-0.0265});
Shape& Shape96 =  Shape();
Shape96.setUSE(CString("SphereYellow"));
Transform95.addChild(&Shape96);

HAnimSegment94.addChild(&Transform95);

HAnimJoint93.addChildren(&HAnimSegment94);

HAnimJoint& HAnimJoint97 =  HAnimJoint();
HAnimJoint97.setDEF(CString("boxman_l_elbow"));
HAnimJoint97.X3DNode::setName(CString("l_elbow"));
HAnimJoint97.setRotation(new float[]{0.976795664618561,-0.214173363382058,0,4.35600755948079});
HAnimJoint97.setCenter(new float[]{0.1982,1.1622,-0.0557});
HAnimJoint97.setSkinCoordIndex(new int32_t[]{184,185,186,187,188,189,190,191}, 8);
HAnimJoint97.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment98 =  HAnimSegment();
HAnimSegment98.setDEF(CString("boxman_l_forearm"));
HAnimSegment98.X3DNode::setName(CString("l_forearm"));
Transform& Transform99 =  Transform();
Transform99.setTranslation(new float[]{0.1982,1.1622,-0.0557});
Shape& Shape100 =  Shape();
Shape100.setUSE(CString("SphereYellow"));
Transform99.addChild(&Shape100);

HAnimSegment98.addChild(&Transform99);

HAnimJoint97.addChildren(&HAnimSegment98);

HAnimJoint& HAnimJoint101 =  HAnimJoint();
HAnimJoint101.setDEF(CString("boxman_l_wrist"));
HAnimJoint101.X3DNode::setName(CString("l_wrist"));
HAnimJoint101.setRotation(new float[]{0,1,0,0.379691598867005});
HAnimJoint101.setCenter(new float[]{0.1972,0.8929,-0.069});
HAnimJoint101.setSkinCoordIndex(new int32_t[]{192,193,194,195,196,197,198,199}, 8);
HAnimJoint101.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment102 =  HAnimSegment();
HAnimSegment102.setDEF(CString("boxman_l_hand"));
HAnimSegment102.X3DNode::setName(CString("l_hand"));
Transform& Transform103 =  Transform();
Transform103.setTranslation(new float[]{0.1972,0.8929,-0.069});
Shape& Shape104 =  Shape();
Shape104.setUSE(CString("SphereYellow"));
Transform103.addChild(&Shape104);

HAnimSegment102.addChild(&Transform103);

HAnimSite& HAnimSite105 =  HAnimSite();
HAnimSite105.setDEF(CString("boxman_l_hand_tip"));
HAnimSite105.X3DNode::setName(CString("l_hand_tip"));
HAnimSite105.setTranslation(new float[]{0.1912,0.6976,-0.071});
Shape& Shape106 =  Shape();
Shape106.setUSE(CString("SphereRed"));
HAnimSite105.addChild(&Shape106);

HAnimSegment102.addChild(&HAnimSite105);

HAnimJoint101.addChildren(&HAnimSegment102);

HAnimJoint97.addChildren(&HAnimJoint101);

HAnimJoint93.addChildren(&HAnimJoint97);

HAnimJoint83.addChildren(&HAnimJoint93);

HAnimJoint& HAnimJoint107 =  HAnimJoint();
HAnimJoint107.setDEF(CString("boxman_r_shoulder"));
HAnimJoint107.X3DNode::setName(CString("r_shoulder"));
HAnimJoint107.setRotation(new float[]{0.168396082523642,0,0.98571941209996,4.52950355629867});
HAnimJoint107.setCenter(new float[]{-0.1968,1.4642,-0.0265});
HAnimJoint107.setSkinCoordIndex(new int32_t[]{200,201,202,203,204,205,206,207}, 8);
HAnimJoint107.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment108 =  HAnimSegment();
HAnimSegment108.setDEF(CString("boxman_r_upperarm"));
HAnimSegment108.X3DNode::setName(CString("r_upperarm"));
Transform& Transform109 =  Transform();
Transform109.setTranslation(new float[]{-0.1968,1.4642,-0.0265});
Shape& Shape110 =  Shape();
Shape110.setUSE(CString("SphereYellow"));
Transform109.addChild(&Shape110);

HAnimSegment108.addChild(&Transform109);

HAnimJoint107.addChildren(&HAnimSegment108);

HAnimJoint& HAnimJoint111 =  HAnimJoint();
HAnimJoint111.setDEF(CString("boxman_r_elbow"));
HAnimJoint111.X3DNode::setName(CString("r_elbow"));
HAnimJoint111.setRotation(new float[]{0.976795664618562,0.214173363382058,0,4.35600755948079});
HAnimJoint111.setCenter(new float[]{-0.1982,1.1622,-0.0557});
HAnimJoint111.setSkinCoordIndex(new int32_t[]{208,209,210,211,212,213,214,215}, 8);
HAnimJoint111.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment112 =  HAnimSegment();
HAnimSegment112.setDEF(CString("boxman_r_forearm"));
HAnimSegment112.X3DNode::setName(CString("r_forearm"));
Transform& Transform113 =  Transform();
Transform113.setTranslation(new float[]{-0.1982,1.1622,-0.0557});
Shape& Shape114 =  Shape();
Shape114.setUSE(CString("SphereYellow"));
Transform113.addChild(&Shape114);

HAnimSegment112.addChild(&Transform113);

HAnimJoint111.addChildren(&HAnimSegment112);

HAnimJoint& HAnimJoint115 =  HAnimJoint();
HAnimJoint115.setDEF(CString("boxman_r_wrist"));
HAnimJoint115.X3DNode::setName(CString("r_wrist"));
HAnimJoint115.setRotation(new float[]{0,-1,0,0.379691598867005});
HAnimJoint115.setCenter(new float[]{-0.1972,0.8929,-0.069});
HAnimJoint115.setSkinCoordIndex(new int32_t[]{216,217,218,219,220,221,222,223}, 8);
HAnimJoint115.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment116 =  HAnimSegment();
HAnimSegment116.setDEF(CString("boxman_r_hand"));
HAnimSegment116.X3DNode::setName(CString("r_hand"));
Transform& Transform117 =  Transform();
Transform117.setTranslation(new float[]{-0.1972,0.8929,-0.069});
Shape& Shape118 =  Shape();
Shape118.setUSE(CString("SphereYellow"));
Transform117.addChild(&Shape118);

HAnimSegment116.addChild(&Transform117);

HAnimSite& HAnimSite119 =  HAnimSite();
HAnimSite119.setDEF(CString("boxman_r_hand_tip"));
HAnimSite119.X3DNode::setName(CString("r_hand_tip"));
HAnimSite119.setTranslation(new float[]{-0.1912,0.6976,-0.071});
Shape& Shape120 =  Shape();
Shape120.setUSE(CString("SphereRed"));
HAnimSite119.addChild(&Shape120);

HAnimSegment116.addChild(&HAnimSite119);

HAnimJoint115.addChildren(&HAnimSegment116);

HAnimJoint111.addChildren(&HAnimJoint115);

HAnimJoint107.addChildren(&HAnimJoint111);

HAnimJoint83.addChildren(&HAnimJoint107);

HAnimJoint37.addChildren(&HAnimJoint83);

HAnimHumanoid36.setSkeleton(&HAnimJoint37);

HAnimJoint& HAnimJoint121 =  HAnimJoint();
HAnimJoint121.setUSE(CString("boxman_humanoid_root"));
HAnimHumanoid36.setJoints(&HAnimJoint121);

HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.setUSE(CString("boxman_skullbase"));
HAnimHumanoid36.setJoints(&HAnimJoint122);

HAnimJoint& HAnimJoint123 =  HAnimJoint();
HAnimJoint123.setUSE(CString("boxman_vl5"));
HAnimHumanoid36.setJoints(&HAnimJoint123);

HAnimJoint& HAnimJoint124 =  HAnimJoint();
HAnimJoint124.setUSE(CString("boxman_r_ankle"));
HAnimHumanoid36.setJoints(&HAnimJoint124);

HAnimJoint& HAnimJoint125 =  HAnimJoint();
HAnimJoint125.setUSE(CString("boxman_l_ankle"));
HAnimHumanoid36.setJoints(&HAnimJoint125);

HAnimJoint& HAnimJoint126 =  HAnimJoint();
HAnimJoint126.setUSE(CString("boxman_r_elbow"));
HAnimHumanoid36.setJoints(&HAnimJoint126);

HAnimJoint& HAnimJoint127 =  HAnimJoint();
HAnimJoint127.setUSE(CString("boxman_l_elbow"));
HAnimHumanoid36.setJoints(&HAnimJoint127);

HAnimJoint& HAnimJoint128 =  HAnimJoint();
HAnimJoint128.setUSE(CString("boxman_r_hip"));
HAnimHumanoid36.setJoints(&HAnimJoint128);

HAnimJoint& HAnimJoint129 =  HAnimJoint();
HAnimJoint129.setUSE(CString("boxman_l_hip"));
HAnimHumanoid36.setJoints(&HAnimJoint129);

HAnimJoint& HAnimJoint130 =  HAnimJoint();
HAnimJoint130.setUSE(CString("boxman_r_knee"));
HAnimHumanoid36.setJoints(&HAnimJoint130);

HAnimJoint& HAnimJoint131 =  HAnimJoint();
HAnimJoint131.setUSE(CString("boxman_l_knee"));
HAnimHumanoid36.setJoints(&HAnimJoint131);

HAnimJoint& HAnimJoint132 =  HAnimJoint();
HAnimJoint132.setUSE(CString("boxman_r_midtarsal"));
HAnimHumanoid36.setJoints(&HAnimJoint132);

HAnimJoint& HAnimJoint133 =  HAnimJoint();
HAnimJoint133.setUSE(CString("boxman_l_midtarsal"));
HAnimHumanoid36.setJoints(&HAnimJoint133);

HAnimJoint& HAnimJoint134 =  HAnimJoint();
HAnimJoint134.setUSE(CString("boxman_r_shoulder"));
HAnimHumanoid36.setJoints(&HAnimJoint134);

HAnimJoint& HAnimJoint135 =  HAnimJoint();
HAnimJoint135.setUSE(CString("boxman_l_shoulder"));
HAnimHumanoid36.setJoints(&HAnimJoint135);

HAnimJoint& HAnimJoint136 =  HAnimJoint();
HAnimJoint136.setUSE(CString("boxman_r_wrist"));
HAnimHumanoid36.setJoints(&HAnimJoint136);

HAnimJoint& HAnimJoint137 =  HAnimJoint();
HAnimJoint137.setUSE(CString("boxman_l_wrist"));
HAnimHumanoid36.setJoints(&HAnimJoint137);

HAnimSegment& HAnimSegment138 =  HAnimSegment();
HAnimSegment138.setUSE(CString("boxman_sacrum"));
HAnimHumanoid36.setSegments(&HAnimSegment138);

HAnimSegment& HAnimSegment139 =  HAnimSegment();
HAnimSegment139.setUSE(CString("boxman_l5"));
HAnimHumanoid36.setSegments(&HAnimSegment139);

HAnimSegment& HAnimSegment140 =  HAnimSegment();
HAnimSegment140.setUSE(CString("boxman_skull"));
HAnimHumanoid36.setSegments(&HAnimSegment140);

HAnimSegment& HAnimSegment141 =  HAnimSegment();
HAnimSegment141.setUSE(CString("boxman_l_calf"));
HAnimHumanoid36.setSegments(&HAnimSegment141);

HAnimSegment& HAnimSegment142 =  HAnimSegment();
HAnimSegment142.setUSE(CString("boxman_r_calf"));
HAnimHumanoid36.setSegments(&HAnimSegment142);

HAnimSegment& HAnimSegment143 =  HAnimSegment();
HAnimSegment143.setUSE(CString("boxman_l_forearm"));
HAnimHumanoid36.setSegments(&HAnimSegment143);

HAnimSegment& HAnimSegment144 =  HAnimSegment();
HAnimSegment144.setUSE(CString("boxman_r_forearm"));
HAnimHumanoid36.setSegments(&HAnimSegment144);

HAnimSegment& HAnimSegment145 =  HAnimSegment();
HAnimSegment145.setUSE(CString("boxman_l_hand"));
HAnimHumanoid36.setSegments(&HAnimSegment145);

HAnimSegment& HAnimSegment146 =  HAnimSegment();
HAnimSegment146.setUSE(CString("boxman_r_hand"));
HAnimHumanoid36.setSegments(&HAnimSegment146);

HAnimSegment& HAnimSegment147 =  HAnimSegment();
HAnimSegment147.setUSE(CString("boxman_l_hindfoot"));
HAnimHumanoid36.setSegments(&HAnimSegment147);

HAnimSegment& HAnimSegment148 =  HAnimSegment();
HAnimSegment148.setUSE(CString("boxman_r_hindfoot"));
HAnimHumanoid36.setSegments(&HAnimSegment148);

HAnimSegment& HAnimSegment149 =  HAnimSegment();
HAnimSegment149.setUSE(CString("boxman_l_middistal"));
HAnimHumanoid36.setSegments(&HAnimSegment149);

HAnimSegment& HAnimSegment150 =  HAnimSegment();
HAnimSegment150.setUSE(CString("boxman_r_middistal"));
HAnimHumanoid36.setSegments(&HAnimSegment150);

HAnimSegment& HAnimSegment151 =  HAnimSegment();
HAnimSegment151.setUSE(CString("boxman_l_thigh"));
HAnimHumanoid36.setSegments(&HAnimSegment151);

HAnimSegment& HAnimSegment152 =  HAnimSegment();
HAnimSegment152.setUSE(CString("boxman_r_thigh"));
HAnimHumanoid36.setSegments(&HAnimSegment152);

HAnimSegment& HAnimSegment153 =  HAnimSegment();
HAnimSegment153.setUSE(CString("boxman_l_upperarm"));
HAnimHumanoid36.setSegments(&HAnimSegment153);

HAnimSegment& HAnimSegment154 =  HAnimSegment();
HAnimSegment154.setUSE(CString("boxman_r_upperarm"));
HAnimHumanoid36.setSegments(&HAnimSegment154);

HAnimSite& HAnimSite155 =  HAnimSite();
HAnimSite155.setUSE(CString("boxman_skull_tip"));
HAnimHumanoid36.setSites(&HAnimSite155);

HAnimSite& HAnimSite156 =  HAnimSite();
HAnimSite156.setUSE(CString("boxman_l_hand_tip"));
HAnimHumanoid36.setSites(&HAnimSite156);

HAnimSite& HAnimSite157 =  HAnimSite();
HAnimSite157.setUSE(CString("boxman_r_hand_tip"));
HAnimHumanoid36.setSites(&HAnimSite157);

HAnimSite& HAnimSite158 =  HAnimSite();
HAnimSite158.setUSE(CString("boxman_l_middistal_tip"));
HAnimHumanoid36.setSites(&HAnimSite158);

HAnimSite& HAnimSite159 =  HAnimSite();
HAnimSite159.setUSE(CString("boxman_r_middistal_tip"));
HAnimHumanoid36.setSites(&HAnimSite159);

HAnimSite& HAnimSite160 =  HAnimSite();
HAnimSite160.setDEF(CString("boxman_BoxMan_view"));
HAnimSite160.X3DNode::setName(CString("BoxMan_view"));
Viewpoint& Viewpoint161 =  Viewpoint();
Viewpoint161.setDEF(CString("Inclined_View"));
Viewpoint161.setDescription(CString("Inclined View"));
Viewpoint161.setPosition(new float[]{2,0.9,2});
Viewpoint161.setOrientation(new float[]{0,1,0,0.78});
HAnimSite160.addChild(&Viewpoint161);

Viewpoint& Viewpoint162 =  Viewpoint();
Viewpoint162.setDEF(CString("Front_View"));
Viewpoint162.setDescription(CString("Front View"));
Viewpoint162.setPosition(new float[]{0,1,3});
HAnimSite160.addChild(&Viewpoint162);

Viewpoint& Viewpoint163 =  Viewpoint();
Viewpoint163.setDEF(CString("Best_View"));
Viewpoint163.setDescription(CString("Right-side View"));
Viewpoint163.setPosition(new float[]{-3,1,0});
Viewpoint163.setOrientation(new float[]{0,1,0,-1.57});
HAnimSite160.addChild(&Viewpoint163);

Viewpoint& Viewpoint164 =  Viewpoint();
Viewpoint164.setDEF(CString("Side_View"));
Viewpoint164.setDescription(CString("Left-side View"));
Viewpoint164.setPosition(new float[]{3,1,0});
Viewpoint164.setOrientation(new float[]{0,1,0,1.57});
HAnimSite160.addChild(&Viewpoint164);

Viewpoint& Viewpoint165 =  Viewpoint();
Viewpoint165.setDEF(CString("Top_View"));
Viewpoint165.setDescription(CString("Top View"));
Viewpoint165.setPosition(new float[]{0,3,0});
Viewpoint165.setOrientation(new float[]{1,0,0,-1.57});
HAnimSite160.addChild(&Viewpoint165);

HAnimHumanoid36.setViewpoints(&HAnimSite160);

Coordinate& Coordinate166 =  Coordinate();
Coordinate166.setDEF(CString("SKINCOORD"));
Coordinate166.setPoint(new float[]{-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1}, 672);
HAnimHumanoid36.setSkinCoord(&Coordinate166);

Group& Group167 =  Group();
Shape& Shape168 =  Shape();
Shape168.setDEF(CString("TrouserSkin"));
Appearance& Appearance169 =  Appearance();
Material& Material170 =  Material();
Material170.setDiffuseColor(new float[]{0,0,1});
Material170.setTransparency(0.5);
Appearance169.addChild(&Material170);

Shape168.addChild(&Appearance169);

IndexedFaceSet& IndexedFaceSet171 =  IndexedFaceSet();
IndexedFaceSet171.setCoordIndex(new int32_t[]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1}, 888);
Coordinate& Coordinate172 =  Coordinate();
Coordinate172.setUSE(CString("SKINCOORD"));
IndexedFaceSet171.setCoord(&Coordinate172);

Shape168.setGeometry(&IndexedFaceSet171);

Group167.addChild(&Shape168);

Shape& Shape173 =  Shape();
Shape173.setDEF(CString("ShoeSkin"));
Appearance& Appearance174 =  Appearance();
Material& Material175 =  Material();
Material175.setDiffuseColor(new float[]{0,0,0});
Material175.setTransparency(0.5);
Appearance174.addChild(&Material175);

Shape173.addChild(&Appearance174);

IndexedFaceSet& IndexedFaceSet176 =  IndexedFaceSet();
IndexedFaceSet176.setCoordIndex(new int32_t[]{60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1}, 272);
Coordinate& Coordinate177 =  Coordinate();
Coordinate177.setUSE(CString("SKINCOORD"));
IndexedFaceSet176.setCoord(&Coordinate177);

Shape173.setGeometry(&IndexedFaceSet176);

Group167.addChild(&Shape173);

Shape& Shape178 =  Shape();
Shape178.setDEF(CString("ShirtSkin"));
Appearance& Appearance179 =  Appearance();
Material& Material180 =  Material();
Material180.setDiffuseColor(new float[]{1,1,0});
Material180.setTransparency(0.5);
Appearance179.addChild(&Material180);

Shape178.addChild(&Appearance179);

IndexedFaceSet& IndexedFaceSet181 =  IndexedFaceSet();
IndexedFaceSet181.setCoordIndex(new int32_t[]{148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1}, 400);
Coordinate& Coordinate182 =  Coordinate();
Coordinate182.setUSE(CString("SKINCOORD"));
IndexedFaceSet181.setCoord(&Coordinate182);

Shape178.setGeometry(&IndexedFaceSet181);

Group167.addChild(&Shape178);

Shape& Shape183 =  Shape();
Shape183.setDEF(CString("HeadHandsFleshToneSkin"));
Appearance& Appearance184 =  Appearance();
Material& Material185 =  Material();
Material185.setDiffuseColor(new float[]{1,0.75,0.75});
Material185.setTransparency(0.5);
Appearance184.addChild(&Material185);

Shape183.addChild(&Appearance184);

IndexedFaceSet& IndexedFaceSet186 =  IndexedFaceSet();
IndexedFaceSet186.setCoordIndex(new int32_t[]{172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1}, 216);
Coordinate& Coordinate187 =  Coordinate();
Coordinate187.setUSE(CString("SKINCOORD"));
IndexedFaceSet186.setCoord(&Coordinate187);

Shape183.setGeometry(&IndexedFaceSet186);

Group167.addChild(&Shape183);

Shape& Shape188 =  Shape();
Shape188.setDEF(CString("SkinLines"));
Appearance& Appearance189 =  Appearance();
Material& Material190 =  Material();
Material190.setDiffuseColor(new float[]{0,0,0});
Appearance189.addChild(&Material190);

Shape188.addChild(&Appearance189);

IndexedLineSet& IndexedLineSet191 =  IndexedLineSet();
IndexedLineSet191.setCoordIndex(new int32_t[]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1}, 1776);
Coordinate& Coordinate192 =  Coordinate();
Coordinate192.setUSE(CString("SKINCOORD"));
IndexedLineSet191.setCoord(&Coordinate192);

Shape188.setGeometry(&IndexedLineSet191);

Group167.addChild(&Shape188);

HAnimHumanoid36.setSkin(Group167);

Scene33.addChild(&HAnimHumanoid36);

Group& Group193 =  Group();
Group193.setDEF(CString("StopAnimation"));
TimeSensor& TimeSensor194 =  TimeSensor();
TimeSensor194.setDEF(CString("StopTimer"));
TimeSensor194.setCycleInterval(5.73);
TimeSensor194.setLoop(True);
Group193.addChild(&TimeSensor194);

PositionInterpolator& PositionInterpolator195 =  PositionInterpolator();
PositionInterpolator195.setDEF(CString("Stop_humanoid_root_TranslationInterpolator"));
PositionInterpolator195.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator195.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0}, 9);
Group193.addChild(&PositionInterpolator195);

OrientationInterpolator& OrientationInterpolator196 =  OrientationInterpolator();
OrientationInterpolator196.setDEF(CString("Stop_humanoid_root_RotationInterpolator"));
OrientationInterpolator196.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator196.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator196);

OrientationInterpolator& OrientationInterpolator197 =  OrientationInterpolator();
OrientationInterpolator197.setDEF(CString("Stop_sacroiliac_RotationInterpolator"));
OrientationInterpolator197.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator197.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator197);

OrientationInterpolator& OrientationInterpolator198 =  OrientationInterpolator();
OrientationInterpolator198.setDEF(CString("Stop_l_hip_RotationInterpolator"));
OrientationInterpolator198.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator198.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator198);

OrientationInterpolator& OrientationInterpolator199 =  OrientationInterpolator();
OrientationInterpolator199.setDEF(CString("Stop_l_knee_RotationInterpolator"));
OrientationInterpolator199.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator199.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator199);

OrientationInterpolator& OrientationInterpolator200 =  OrientationInterpolator();
OrientationInterpolator200.setDEF(CString("Stop_l_ankle_RotationInterpolator"));
OrientationInterpolator200.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator200.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator200);

OrientationInterpolator& OrientationInterpolator201 =  OrientationInterpolator();
OrientationInterpolator201.setDEF(CString("Stop_l_subtalar_RotationInterpolator"));
OrientationInterpolator201.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator201.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator201);

OrientationInterpolator& OrientationInterpolator202 =  OrientationInterpolator();
OrientationInterpolator202.setDEF(CString("Stop_l_midtarsal_RotationInterpolator"));
OrientationInterpolator202.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator202.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator202);

OrientationInterpolator& OrientationInterpolator203 =  OrientationInterpolator();
OrientationInterpolator203.setDEF(CString("Stop_l_metatarsal_RotationInterpolator"));
OrientationInterpolator203.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator203.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator203);

OrientationInterpolator& OrientationInterpolator204 =  OrientationInterpolator();
OrientationInterpolator204.setDEF(CString("Stop_r_hip_RotationInterpolator"));
OrientationInterpolator204.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator204.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator204);

OrientationInterpolator& OrientationInterpolator205 =  OrientationInterpolator();
OrientationInterpolator205.setDEF(CString("Stop_r_knee_RotationInterpolator"));
OrientationInterpolator205.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator205.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator205);

OrientationInterpolator& OrientationInterpolator206 =  OrientationInterpolator();
OrientationInterpolator206.setDEF(CString("Stop_r_ankle_RotationInterpolator"));
OrientationInterpolator206.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator206.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator206);

OrientationInterpolator& OrientationInterpolator207 =  OrientationInterpolator();
OrientationInterpolator207.setDEF(CString("Stop_r_subtalar_RotationInterpolator"));
OrientationInterpolator207.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator207.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator207);

OrientationInterpolator& OrientationInterpolator208 =  OrientationInterpolator();
OrientationInterpolator208.setDEF(CString("Stop_r_midtarsal_RotationInterpolator"));
OrientationInterpolator208.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator208.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator208);

OrientationInterpolator& OrientationInterpolator209 =  OrientationInterpolator();
OrientationInterpolator209.setDEF(CString("Stop_r_metatarsal_RotationInterpolator"));
OrientationInterpolator209.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator209.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator209);

OrientationInterpolator& OrientationInterpolator210 =  OrientationInterpolator();
OrientationInterpolator210.setDEF(CString("Stop_vl5_RotationInterpolator"));
OrientationInterpolator210.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator210.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator210);

OrientationInterpolator& OrientationInterpolator211 =  OrientationInterpolator();
OrientationInterpolator211.setDEF(CString("Stop_vl4_RotationInterpolator"));
OrientationInterpolator211.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator211.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator211);

OrientationInterpolator& OrientationInterpolator212 =  OrientationInterpolator();
OrientationInterpolator212.setDEF(CString("Stop_vl3_RotationInterpolator"));
OrientationInterpolator212.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator212.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator212);

OrientationInterpolator& OrientationInterpolator213 =  OrientationInterpolator();
OrientationInterpolator213.setDEF(CString("Stop_vl2_RotationInterpolator"));
OrientationInterpolator213.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator213.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator213);

OrientationInterpolator& OrientationInterpolator214 =  OrientationInterpolator();
OrientationInterpolator214.setDEF(CString("Stop_vl1_RotationInterpolator"));
OrientationInterpolator214.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator214.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator214);

OrientationInterpolator& OrientationInterpolator215 =  OrientationInterpolator();
OrientationInterpolator215.setDEF(CString("Stop_vt12_RotationInterpolator"));
OrientationInterpolator215.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator215.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator215);

OrientationInterpolator& OrientationInterpolator216 =  OrientationInterpolator();
OrientationInterpolator216.setDEF(CString("Stop_vt11_RotationInterpolator"));
OrientationInterpolator216.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator216.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator216);

OrientationInterpolator& OrientationInterpolator217 =  OrientationInterpolator();
OrientationInterpolator217.setDEF(CString("Stop_vt10_RotationInterpolator"));
OrientationInterpolator217.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator217.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator217);

OrientationInterpolator& OrientationInterpolator218 =  OrientationInterpolator();
OrientationInterpolator218.setDEF(CString("Stop_vt9_RotationInterpolator"));
OrientationInterpolator218.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator218.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator218);

OrientationInterpolator& OrientationInterpolator219 =  OrientationInterpolator();
OrientationInterpolator219.setDEF(CString("Stop_vt8_RotationInterpolator"));
OrientationInterpolator219.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator219.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator219);

OrientationInterpolator& OrientationInterpolator220 =  OrientationInterpolator();
OrientationInterpolator220.setDEF(CString("Stop_vt7_RotationInterpolator"));
OrientationInterpolator220.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator220.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator220);

OrientationInterpolator& OrientationInterpolator221 =  OrientationInterpolator();
OrientationInterpolator221.setDEF(CString("Stop_vt6_RotationInterpolator"));
OrientationInterpolator221.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator221.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator221);

OrientationInterpolator& OrientationInterpolator222 =  OrientationInterpolator();
OrientationInterpolator222.setDEF(CString("Stop_vt5_RotationInterpolator"));
OrientationInterpolator222.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator222.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator222);

OrientationInterpolator& OrientationInterpolator223 =  OrientationInterpolator();
OrientationInterpolator223.setDEF(CString("Stop_vt4_RotationInterpolator"));
OrientationInterpolator223.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator223.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator223);

OrientationInterpolator& OrientationInterpolator224 =  OrientationInterpolator();
OrientationInterpolator224.setDEF(CString("Stop_vt3_RotationInterpolator"));
OrientationInterpolator224.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator224.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator224);

OrientationInterpolator& OrientationInterpolator225 =  OrientationInterpolator();
OrientationInterpolator225.setDEF(CString("Stop_vt2_RotationInterpolator"));
OrientationInterpolator225.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator225.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator225);

OrientationInterpolator& OrientationInterpolator226 =  OrientationInterpolator();
OrientationInterpolator226.setDEF(CString("Stop_vt1_RotationInterpolator"));
OrientationInterpolator226.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator226.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator226);

OrientationInterpolator& OrientationInterpolator227 =  OrientationInterpolator();
OrientationInterpolator227.setDEF(CString("Stop_vc7_RotationInterpolator"));
OrientationInterpolator227.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator227.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator227);

OrientationInterpolator& OrientationInterpolator228 =  OrientationInterpolator();
OrientationInterpolator228.setDEF(CString("Stop_vc6_RotationInterpolator"));
OrientationInterpolator228.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator228.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator228);

OrientationInterpolator& OrientationInterpolator229 =  OrientationInterpolator();
OrientationInterpolator229.setDEF(CString("Stop_vc5_RotationInterpolator"));
OrientationInterpolator229.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator229.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator229);

OrientationInterpolator& OrientationInterpolator230 =  OrientationInterpolator();
OrientationInterpolator230.setDEF(CString("Stop_vc4_RotationInterpolator"));
OrientationInterpolator230.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator230.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator230);

OrientationInterpolator& OrientationInterpolator231 =  OrientationInterpolator();
OrientationInterpolator231.setDEF(CString("Stop_vc3_RotationInterpolator"));
OrientationInterpolator231.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator231.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator231);

OrientationInterpolator& OrientationInterpolator232 =  OrientationInterpolator();
OrientationInterpolator232.setDEF(CString("Stop_vc2_RotationInterpolator"));
OrientationInterpolator232.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator232.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator232);

OrientationInterpolator& OrientationInterpolator233 =  OrientationInterpolator();
OrientationInterpolator233.setDEF(CString("Stop_vc1_RotationInterpolator"));
OrientationInterpolator233.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator233.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator233);

OrientationInterpolator& OrientationInterpolator234 =  OrientationInterpolator();
OrientationInterpolator234.setDEF(CString("Stop_skullbase_RotationInterpolator"));
OrientationInterpolator234.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator234.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator234);

OrientationInterpolator& OrientationInterpolator235 =  OrientationInterpolator();
OrientationInterpolator235.setDEF(CString("Stop_l_eyeball_joint_RotationInterpolator"));
OrientationInterpolator235.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator235.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator235);

OrientationInterpolator& OrientationInterpolator236 =  OrientationInterpolator();
OrientationInterpolator236.setDEF(CString("Stop_r_eyeball_joint_RotationInterpolator"));
OrientationInterpolator236.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator236.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator236);

OrientationInterpolator& OrientationInterpolator237 =  OrientationInterpolator();
OrientationInterpolator237.setDEF(CString("Stop_l_sternoclavicular_RotationInterpolator"));
OrientationInterpolator237.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator237.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator237);

OrientationInterpolator& OrientationInterpolator238 =  OrientationInterpolator();
OrientationInterpolator238.setDEF(CString("Stop_l_acromioclavicular_RotationInterpolator"));
OrientationInterpolator238.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator238.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator238);

OrientationInterpolator& OrientationInterpolator239 =  OrientationInterpolator();
OrientationInterpolator239.setDEF(CString("Stop_l_shoulder_RotationInterpolator"));
OrientationInterpolator239.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator239.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator239);

OrientationInterpolator& OrientationInterpolator240 =  OrientationInterpolator();
OrientationInterpolator240.setDEF(CString("Stop_l_elbow_RotationInterpolator"));
OrientationInterpolator240.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator240.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator240);

OrientationInterpolator& OrientationInterpolator241 =  OrientationInterpolator();
OrientationInterpolator241.setDEF(CString("Stop_l_wrist_RotationInterpolator"));
OrientationInterpolator241.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator241.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator241);

OrientationInterpolator& OrientationInterpolator242 =  OrientationInterpolator();
OrientationInterpolator242.setDEF(CString("Stop_l_thumb1_RotationInterpolator"));
OrientationInterpolator242.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator242.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator242);

OrientationInterpolator& OrientationInterpolator243 =  OrientationInterpolator();
OrientationInterpolator243.setDEF(CString("Stop_l_thumb2_RotationInterpolator"));
OrientationInterpolator243.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator243.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator243);

OrientationInterpolator& OrientationInterpolator244 =  OrientationInterpolator();
OrientationInterpolator244.setDEF(CString("Stop_l_thumb3_RotationInterpolator"));
OrientationInterpolator244.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator244.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator244);

OrientationInterpolator& OrientationInterpolator245 =  OrientationInterpolator();
OrientationInterpolator245.setDEF(CString("Stop_l_index0_RotationInterpolator"));
OrientationInterpolator245.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator245.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator245);

OrientationInterpolator& OrientationInterpolator246 =  OrientationInterpolator();
OrientationInterpolator246.setDEF(CString("Stop_l_index1_RotationInterpolator"));
OrientationInterpolator246.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator246.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator246);

OrientationInterpolator& OrientationInterpolator247 =  OrientationInterpolator();
OrientationInterpolator247.setDEF(CString("Stop_l_index2_RotationInterpolator"));
OrientationInterpolator247.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator247.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator247);

OrientationInterpolator& OrientationInterpolator248 =  OrientationInterpolator();
OrientationInterpolator248.setDEF(CString("Stop_l_index3_RotationInterpolator"));
OrientationInterpolator248.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator248.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator248);

OrientationInterpolator& OrientationInterpolator249 =  OrientationInterpolator();
OrientationInterpolator249.setDEF(CString("Stop_l_middle0_RotationInterpolator"));
OrientationInterpolator249.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator249.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator249);

OrientationInterpolator& OrientationInterpolator250 =  OrientationInterpolator();
OrientationInterpolator250.setDEF(CString("Stop_l_middle1_RotationInterpolator"));
OrientationInterpolator250.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator250.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator250);

OrientationInterpolator& OrientationInterpolator251 =  OrientationInterpolator();
OrientationInterpolator251.setDEF(CString("Stop_l_middle2_RotationInterpolator"));
OrientationInterpolator251.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator251.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator251);

OrientationInterpolator& OrientationInterpolator252 =  OrientationInterpolator();
OrientationInterpolator252.setDEF(CString("Stop_l_middle3_RotationInterpolator"));
OrientationInterpolator252.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator252.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator252);

OrientationInterpolator& OrientationInterpolator253 =  OrientationInterpolator();
OrientationInterpolator253.setDEF(CString("Stop_l_ring0_RotationInterpolator"));
OrientationInterpolator253.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator253.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator253);

OrientationInterpolator& OrientationInterpolator254 =  OrientationInterpolator();
OrientationInterpolator254.setDEF(CString("Stop_l_ring1_RotationInterpolator"));
OrientationInterpolator254.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator254.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator254);

OrientationInterpolator& OrientationInterpolator255 =  OrientationInterpolator();
OrientationInterpolator255.setDEF(CString("Stop_l_ring2_RotationInterpolator"));
OrientationInterpolator255.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator255.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator255);

OrientationInterpolator& OrientationInterpolator256 =  OrientationInterpolator();
OrientationInterpolator256.setDEF(CString("Stop_l_ring3_RotationInterpolator"));
OrientationInterpolator256.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator256.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator256);

OrientationInterpolator& OrientationInterpolator257 =  OrientationInterpolator();
OrientationInterpolator257.setDEF(CString("Stop_l_pinky0_RotationInterpolator"));
OrientationInterpolator257.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator257.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator257);

OrientationInterpolator& OrientationInterpolator258 =  OrientationInterpolator();
OrientationInterpolator258.setDEF(CString("Stop_l_pinky1_RotationInterpolator"));
OrientationInterpolator258.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator258.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator258);

OrientationInterpolator& OrientationInterpolator259 =  OrientationInterpolator();
OrientationInterpolator259.setDEF(CString("Stop_l_pinky2_RotationInterpolator"));
OrientationInterpolator259.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator259.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator259);

OrientationInterpolator& OrientationInterpolator260 =  OrientationInterpolator();
OrientationInterpolator260.setDEF(CString("Stop_l_pinky3_RotationInterpolator"));
OrientationInterpolator260.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator260.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator260);

OrientationInterpolator& OrientationInterpolator261 =  OrientationInterpolator();
OrientationInterpolator261.setDEF(CString("Stop_r_sternoclavicular_RotationInterpolator"));
OrientationInterpolator261.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator261.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator261);

OrientationInterpolator& OrientationInterpolator262 =  OrientationInterpolator();
OrientationInterpolator262.setDEF(CString("Stop_r_acromioclavicular_RotationInterpolator"));
OrientationInterpolator262.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator262.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator262);

OrientationInterpolator& OrientationInterpolator263 =  OrientationInterpolator();
OrientationInterpolator263.setDEF(CString("Stop_r_shoulder_RotationInterpolator"));
OrientationInterpolator263.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator263.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator263);

OrientationInterpolator& OrientationInterpolator264 =  OrientationInterpolator();
OrientationInterpolator264.setDEF(CString("Stop_r_elbow_RotationInterpolator"));
OrientationInterpolator264.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator264.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator264);

OrientationInterpolator& OrientationInterpolator265 =  OrientationInterpolator();
OrientationInterpolator265.setDEF(CString("Stop_r_wrist_RotationInterpolator"));
OrientationInterpolator265.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator265.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator265);

OrientationInterpolator& OrientationInterpolator266 =  OrientationInterpolator();
OrientationInterpolator266.setDEF(CString("Stop_r_thumb1_RotationInterpolator"));
OrientationInterpolator266.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator266.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator266);

OrientationInterpolator& OrientationInterpolator267 =  OrientationInterpolator();
OrientationInterpolator267.setDEF(CString("Stop_r_thumb2_RotationInterpolator"));
OrientationInterpolator267.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator267.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator267);

OrientationInterpolator& OrientationInterpolator268 =  OrientationInterpolator();
OrientationInterpolator268.setDEF(CString("Stop_r_thumb3_RotationInterpolator"));
OrientationInterpolator268.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator268.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator268);

OrientationInterpolator& OrientationInterpolator269 =  OrientationInterpolator();
OrientationInterpolator269.setDEF(CString("Stop_r_index0_RotationInterpolator"));
OrientationInterpolator269.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator269.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator269);

OrientationInterpolator& OrientationInterpolator270 =  OrientationInterpolator();
OrientationInterpolator270.setDEF(CString("Stop_r_index1_RotationInterpolator"));
OrientationInterpolator270.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator270.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator270);

OrientationInterpolator& OrientationInterpolator271 =  OrientationInterpolator();
OrientationInterpolator271.setDEF(CString("Stop_r_index2_RotationInterpolator"));
OrientationInterpolator271.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator271.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator271);

OrientationInterpolator& OrientationInterpolator272 =  OrientationInterpolator();
OrientationInterpolator272.setDEF(CString("Stop_r_index3_RotationInterpolator"));
OrientationInterpolator272.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator272.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator272);

OrientationInterpolator& OrientationInterpolator273 =  OrientationInterpolator();
OrientationInterpolator273.setDEF(CString("Stop_r_middle0_RotationInterpolator"));
OrientationInterpolator273.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator273.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator273);

OrientationInterpolator& OrientationInterpolator274 =  OrientationInterpolator();
OrientationInterpolator274.setDEF(CString("Stop_r_middle1_RotationInterpolator"));
OrientationInterpolator274.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator274.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator274);

OrientationInterpolator& OrientationInterpolator275 =  OrientationInterpolator();
OrientationInterpolator275.setDEF(CString("Stop_r_middle2_RotationInterpolator"));
OrientationInterpolator275.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator275.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator275);

OrientationInterpolator& OrientationInterpolator276 =  OrientationInterpolator();
OrientationInterpolator276.setDEF(CString("Stop_r_middle3_RotationInterpolator"));
OrientationInterpolator276.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator276.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator276);

OrientationInterpolator& OrientationInterpolator277 =  OrientationInterpolator();
OrientationInterpolator277.setDEF(CString("Stop_r_ring0_RotationInterpolator"));
OrientationInterpolator277.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator277.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator277);

OrientationInterpolator& OrientationInterpolator278 =  OrientationInterpolator();
OrientationInterpolator278.setDEF(CString("Stop_r_ring1_RotationInterpolator"));
OrientationInterpolator278.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator278.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator278);

OrientationInterpolator& OrientationInterpolator279 =  OrientationInterpolator();
OrientationInterpolator279.setDEF(CString("Stop_r_ring2_RotationInterpolator"));
OrientationInterpolator279.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator279.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator279);

OrientationInterpolator& OrientationInterpolator280 =  OrientationInterpolator();
OrientationInterpolator280.setDEF(CString("Stop_r_ring3_RotationInterpolator"));
OrientationInterpolator280.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator280.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator280);

OrientationInterpolator& OrientationInterpolator281 =  OrientationInterpolator();
OrientationInterpolator281.setDEF(CString("Stop_r_pinky0_RotationInterpolator"));
OrientationInterpolator281.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator281.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator281);

OrientationInterpolator& OrientationInterpolator282 =  OrientationInterpolator();
OrientationInterpolator282.setDEF(CString("Stop_r_pinky1_RotationInterpolator"));
OrientationInterpolator282.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator282.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator282);

OrientationInterpolator& OrientationInterpolator283 =  OrientationInterpolator();
OrientationInterpolator283.setDEF(CString("Stop_r_pinky2_RotationInterpolator"));
OrientationInterpolator283.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator283.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator283);

OrientationInterpolator& OrientationInterpolator284 =  OrientationInterpolator();
OrientationInterpolator284.setDEF(CString("Stop_r_pinky3_RotationInterpolator"));
OrientationInterpolator284.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator284.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group193.addChild(&OrientationInterpolator284);

Scene33.addChild(&Group193);

Group& Group285 =  Group();
Group285.setDEF(CString("StandAnimation"));
TimeSensor& TimeSensor286 =  TimeSensor();
TimeSensor286.setDEF(CString("StandTimer"));
TimeSensor286.setCycleInterval(5.73);
TimeSensor286.setLoop(True);
Group285.addChild(&TimeSensor286);

OrientationInterpolator& OrientationInterpolator287 =  OrientationInterpolator();
OrientationInterpolator287.setDEF(CString("Stand_r_metatarsal_PitchInterpolator"));
OrientationInterpolator287.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator287.setKeyValue(new float[]{1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0}, 24);
Group285.addChild(&OrientationInterpolator287);

OrientationInterpolator& OrientationInterpolator288 =  OrientationInterpolator();
OrientationInterpolator288.setDEF(CString("Stand_r_ankle_RotationInterpolator"));
OrientationInterpolator288.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator288.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator288);

OrientationInterpolator& OrientationInterpolator289 =  OrientationInterpolator();
OrientationInterpolator289.setDEF(CString("Stand_r_knee_RotationInterpolator"));
OrientationInterpolator289.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator289.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator289);

OrientationInterpolator& OrientationInterpolator290 =  OrientationInterpolator();
OrientationInterpolator290.setDEF(CString("Stand_r_hip_RotationInterpolator"));
OrientationInterpolator290.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator290.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator290);

OrientationInterpolator& OrientationInterpolator291 =  OrientationInterpolator();
OrientationInterpolator291.setDEF(CString("Stand_l_ankle_RotationInterpolator"));
OrientationInterpolator291.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator291.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator291);

OrientationInterpolator& OrientationInterpolator292 =  OrientationInterpolator();
OrientationInterpolator292.setDEF(CString("Stand_l_knee_RotationInterpolator"));
OrientationInterpolator292.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator292.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator292);

OrientationInterpolator& OrientationInterpolator293 =  OrientationInterpolator();
OrientationInterpolator293.setDEF(CString("Stand_l_hip_RotationInterpolator"));
OrientationInterpolator293.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator293.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator293);

OrientationInterpolator& OrientationInterpolator294 =  OrientationInterpolator();
OrientationInterpolator294.setDEF(CString("Stand_r_wrist_RotationInterpolator"));
OrientationInterpolator294.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator294.setKeyValue(new float[]{0,0,1,0,0,0,-1,0.25,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator294);

OrientationInterpolator& OrientationInterpolator295 =  OrientationInterpolator();
OrientationInterpolator295.setDEF(CString("Stand_r_elbow_RotationInterpolator"));
OrientationInterpolator295.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator295.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator295);

OrientationInterpolator& OrientationInterpolator296 =  OrientationInterpolator();
OrientationInterpolator296.setDEF(CString("Stand_r_shoulder_RotationInterpolator"));
OrientationInterpolator296.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator296.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator296);

OrientationInterpolator& OrientationInterpolator297 =  OrientationInterpolator();
OrientationInterpolator297.setDEF(CString("Stand_l_wrist_RotationInterpolator"));
OrientationInterpolator297.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator297.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator297);

OrientationInterpolator& OrientationInterpolator298 =  OrientationInterpolator();
OrientationInterpolator298.setDEF(CString("Stand_l_elbow_RotationInterpolator"));
OrientationInterpolator298.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator298.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator298);

OrientationInterpolator& OrientationInterpolator299 =  OrientationInterpolator();
OrientationInterpolator299.setDEF(CString("Stand_l_shoulder_RotationInterpolator"));
OrientationInterpolator299.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator299.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator299);

OrientationInterpolator& OrientationInterpolator300 =  OrientationInterpolator();
OrientationInterpolator300.setDEF(CString("Stand_head_RotationInterpolator"));
OrientationInterpolator300.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator300.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator300);

OrientationInterpolator& OrientationInterpolator301 =  OrientationInterpolator();
OrientationInterpolator301.setDEF(CString("Stand_neck_RotationInterpolator"));
OrientationInterpolator301.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator301.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.5,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator301);

OrientationInterpolator& OrientationInterpolator302 =  OrientationInterpolator();
OrientationInterpolator302.setDEF(CString("Stand_l_eyeball_RotationInterpolator"));
OrientationInterpolator302.setKey(new float[]{0,0.4,0.7,1}, 4);
OrientationInterpolator302.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0}, 16);
Group285.addChild(&OrientationInterpolator302);

OrientationInterpolator& OrientationInterpolator303 =  OrientationInterpolator();
OrientationInterpolator303.setDEF(CString("Stand_r_eyeball_RotationInterpolator"));
OrientationInterpolator303.setKey(new float[]{0,0.4,0.7,1}, 4);
OrientationInterpolator303.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0}, 16);
Group285.addChild(&OrientationInterpolator303);

OrientationInterpolator& OrientationInterpolator304 =  OrientationInterpolator();
OrientationInterpolator304.setDEF(CString("Stand_lower_body_RotationInterpolator"));
OrientationInterpolator304.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator304.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator304);

OrientationInterpolator& OrientationInterpolator305 =  OrientationInterpolator();
OrientationInterpolator305.setDEF(CString("Stand_upper_body_RotationInterpolator"));
OrientationInterpolator305.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator305.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator305);

OrientationInterpolator& OrientationInterpolator306 =  OrientationInterpolator();
OrientationInterpolator306.setDEF(CString("Stand_whole_body_RotationInterpolator"));
OrientationInterpolator306.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator306.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group285.addChild(&OrientationInterpolator306);

PositionInterpolator& PositionInterpolator307 =  PositionInterpolator();
PositionInterpolator307.setDEF(CString("Stand_whole_body_TranslationInterpolator"));
PositionInterpolator307.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator307.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0}, 9);
Group285.addChild(&PositionInterpolator307);

OrientationInterpolator& OrientationInterpolator308 =  OrientationInterpolator();
OrientationInterpolator308.setDEF(CString("Stand_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator308.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator308.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group285.addChild(&OrientationInterpolator308);

OrientationInterpolator& OrientationInterpolator309 =  OrientationInterpolator();
OrientationInterpolator309.setDEF(CString("Stand_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator309.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator309.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group285.addChild(&OrientationInterpolator309);

OrientationInterpolator& OrientationInterpolator310 =  OrientationInterpolator();
OrientationInterpolator310.setDEF(CString("Stand_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator310.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator310.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group285.addChild(&OrientationInterpolator310);

OrientationInterpolator& OrientationInterpolator311 =  OrientationInterpolator();
OrientationInterpolator311.setDEF(CString("Stand_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator311.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator311.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group285.addChild(&OrientationInterpolator311);

OrientationInterpolator& OrientationInterpolator312 =  OrientationInterpolator();
OrientationInterpolator312.setDEF(CString("Stand_sacroiliac_YawInterpolator"));
OrientationInterpolator312.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator312.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group285.addChild(&OrientationInterpolator312);

OrientationInterpolator& OrientationInterpolator313 =  OrientationInterpolator();
OrientationInterpolator313.setDEF(CString("Stand_vl5_YawInterpolator"));
OrientationInterpolator313.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator313.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group285.addChild(&OrientationInterpolator313);

OrientationInterpolator& OrientationInterpolator314 =  OrientationInterpolator();
OrientationInterpolator314.setDEF(CString("Stand_vc6_YawInterpolator"));
OrientationInterpolator314.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator314.setKeyValue(new float[]{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0}, 28);
Group285.addChild(&OrientationInterpolator314);

OrientationInterpolator& OrientationInterpolator315 =  OrientationInterpolator();
OrientationInterpolator315.setDEF(CString("Stand_l_thumb1_PitchInterpolator"));
OrientationInterpolator315.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator315.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group285.addChild(&OrientationInterpolator315);

OrientationInterpolator& OrientationInterpolator316 =  OrientationInterpolator();
OrientationInterpolator316.setDEF(CString("Stand_r_thumb1_PitchInterpolator"));
OrientationInterpolator316.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator316.setKeyValue(new float[]{1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0}, 24);
Group285.addChild(&OrientationInterpolator316);

OrientationInterpolator& OrientationInterpolator317 =  OrientationInterpolator();
OrientationInterpolator317.setDEF(CString("Stand_r_index1_RollInterpolator"));
OrientationInterpolator317.setKey(new float[]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator317.setKeyValue(new float[]{0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0}, 24);
Group285.addChild(&OrientationInterpolator317);

OrientationInterpolator& OrientationInterpolator318 =  OrientationInterpolator();
OrientationInterpolator318.setDEF(CString("Stand_r_index2_RollInterpolator"));
OrientationInterpolator318.setKey(new float[]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator318.setKeyValue(new float[]{0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0}, 24);
Group285.addChild(&OrientationInterpolator318);

OrientationInterpolator& OrientationInterpolator319 =  OrientationInterpolator();
OrientationInterpolator319.setDEF(CString("Stand_r_index3_RollInterpolator"));
OrientationInterpolator319.setKey(new float[]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator319.setKeyValue(new float[]{0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0}, 24);
Group285.addChild(&OrientationInterpolator319);

Scene33.addChild(&Group285);

Group& Group320 =  Group();
Group320.setDEF(CString("PitchesAnimation"));
TimeSensor& TimeSensor321 =  TimeSensor();
TimeSensor321.setDEF(CString("PitchTimer"));
TimeSensor321.setCycleInterval(5.73);
TimeSensor321.setLoop(True);
Group320.addChild(&TimeSensor321);

OrientationInterpolator& OrientationInterpolator322 =  OrientationInterpolator();
OrientationInterpolator322.setDEF(CString("Pitch_r_metatarsal_PitchInterpolator"));
OrientationInterpolator322.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator322.setKeyValue(new float[]{1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0}, 24);
Group320.addChild(&OrientationInterpolator322);

OrientationInterpolator& OrientationInterpolator323 =  OrientationInterpolator();
OrientationInterpolator323.setDEF(CString("Pitches_r_ankle_RotationInterpolator"));
OrientationInterpolator323.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator323.setKeyValue(new float[]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0}, 20);
Group320.addChild(&OrientationInterpolator323);

OrientationInterpolator& OrientationInterpolator324 =  OrientationInterpolator();
OrientationInterpolator324.setDEF(CString("Pitches_r_knee_RotationInterpolator"));
OrientationInterpolator324.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator324.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group320.addChild(&OrientationInterpolator324);

OrientationInterpolator& OrientationInterpolator325 =  OrientationInterpolator();
OrientationInterpolator325.setDEF(CString("Pitches_r_hip_RotationInterpolator"));
OrientationInterpolator325.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator325.setKeyValue(new float[]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0}, 20);
Group320.addChild(&OrientationInterpolator325);

OrientationInterpolator& OrientationInterpolator326 =  OrientationInterpolator();
OrientationInterpolator326.setDEF(CString("Pitches_l_ankle_RotationInterpolator"));
OrientationInterpolator326.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator326.setKeyValue(new float[]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0}, 20);
Group320.addChild(&OrientationInterpolator326);

OrientationInterpolator& OrientationInterpolator327 =  OrientationInterpolator();
OrientationInterpolator327.setDEF(CString("Pitches_l_knee_RotationInterpolator"));
OrientationInterpolator327.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator327.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group320.addChild(&OrientationInterpolator327);

OrientationInterpolator& OrientationInterpolator328 =  OrientationInterpolator();
OrientationInterpolator328.setDEF(CString("Pitches_l_hip_RotationInterpolator"));
OrientationInterpolator328.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator328.setKeyValue(new float[]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0}, 20);
Group320.addChild(&OrientationInterpolator328);

OrientationInterpolator& OrientationInterpolator329 =  OrientationInterpolator();
OrientationInterpolator329.setDEF(CString("Pitches_r_wrist_RotationInterpolator"));
OrientationInterpolator329.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator329.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group320.addChild(&OrientationInterpolator329);

OrientationInterpolator& OrientationInterpolator330 =  OrientationInterpolator();
OrientationInterpolator330.setDEF(CString("Pitches_r_elbow_RotationInterpolator"));
OrientationInterpolator330.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator330.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group320.addChild(&OrientationInterpolator330);

OrientationInterpolator& OrientationInterpolator331 =  OrientationInterpolator();
OrientationInterpolator331.setDEF(CString("Pitches_r_shoulder_RotationInterpolator"));
OrientationInterpolator331.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator331.setKeyValue(new float[]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0}, 20);
Group320.addChild(&OrientationInterpolator331);

OrientationInterpolator& OrientationInterpolator332 =  OrientationInterpolator();
OrientationInterpolator332.setDEF(CString("Pitches_l_wrist_RotationInterpolator"));
OrientationInterpolator332.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator332.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group320.addChild(&OrientationInterpolator332);

OrientationInterpolator& OrientationInterpolator333 =  OrientationInterpolator();
OrientationInterpolator333.setDEF(CString("Pitches_l_elbow_RotationInterpolator"));
OrientationInterpolator333.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator333.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group320.addChild(&OrientationInterpolator333);

OrientationInterpolator& OrientationInterpolator334 =  OrientationInterpolator();
OrientationInterpolator334.setDEF(CString("Pitches_l_shoulder_RotationInterpolator"));
OrientationInterpolator334.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator334.setKeyValue(new float[]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0}, 20);
Group320.addChild(&OrientationInterpolator334);

OrientationInterpolator& OrientationInterpolator335 =  OrientationInterpolator();
OrientationInterpolator335.setDEF(CString("Pitches_head_RotationInterpolator"));
OrientationInterpolator335.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator335.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group320.addChild(&OrientationInterpolator335);

OrientationInterpolator& OrientationInterpolator336 =  OrientationInterpolator();
OrientationInterpolator336.setDEF(CString("Pitches_neck_RotationInterpolator"));
OrientationInterpolator336.setKey(new float[]{0,0.25,0.55,1}, 4);
OrientationInterpolator336.setKeyValue(new float[]{0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0}, 16);
Group320.addChild(&OrientationInterpolator336);

OrientationInterpolator& OrientationInterpolator337 =  OrientationInterpolator();
OrientationInterpolator337.setDEF(CString("Pitches_lower_body_RotationInterpolator"));
OrientationInterpolator337.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator337.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group320.addChild(&OrientationInterpolator337);

OrientationInterpolator& OrientationInterpolator338 =  OrientationInterpolator();
OrientationInterpolator338.setDEF(CString("Pitches_upper_body_RotationInterpolator"));
OrientationInterpolator338.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator338.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group320.addChild(&OrientationInterpolator338);

OrientationInterpolator& OrientationInterpolator339 =  OrientationInterpolator();
OrientationInterpolator339.setDEF(CString("Pitches_whole_body_RotationInterpolator"));
OrientationInterpolator339.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator339.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group320.addChild(&OrientationInterpolator339);

PositionInterpolator& PositionInterpolator340 =  PositionInterpolator();
PositionInterpolator340.setDEF(CString("Pitches_whole_body_TranslationInterpolator"));
PositionInterpolator340.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
PositionInterpolator340.setKeyValue(new float[]{0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0}, 27);
Group320.addChild(&PositionInterpolator340);

OrientationInterpolator& OrientationInterpolator341 =  OrientationInterpolator();
OrientationInterpolator341.setDEF(CString("Pitch_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator341.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator341.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group320.addChild(&OrientationInterpolator341);

OrientationInterpolator& OrientationInterpolator342 =  OrientationInterpolator();
OrientationInterpolator342.setDEF(CString("Pitch_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator342.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator342.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group320.addChild(&OrientationInterpolator342);

OrientationInterpolator& OrientationInterpolator343 =  OrientationInterpolator();
OrientationInterpolator343.setDEF(CString("Pitch_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator343.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator343.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group320.addChild(&OrientationInterpolator343);

OrientationInterpolator& OrientationInterpolator344 =  OrientationInterpolator();
OrientationInterpolator344.setDEF(CString("Pitch_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator344.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator344.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group320.addChild(&OrientationInterpolator344);

OrientationInterpolator& OrientationInterpolator345 =  OrientationInterpolator();
OrientationInterpolator345.setDEF(CString("Pitch_sacroiliac_YawInterpolator"));
OrientationInterpolator345.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator345.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group320.addChild(&OrientationInterpolator345);

OrientationInterpolator& OrientationInterpolator346 =  OrientationInterpolator();
OrientationInterpolator346.setDEF(CString("Pitch_vl5_YawInterpolator"));
OrientationInterpolator346.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator346.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group320.addChild(&OrientationInterpolator346);

OrientationInterpolator& OrientationInterpolator347 =  OrientationInterpolator();
OrientationInterpolator347.setDEF(CString("Pitch_vc6_YawInterpolator"));
OrientationInterpolator347.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator347.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group320.addChild(&OrientationInterpolator347);

OrientationInterpolator& OrientationInterpolator348 =  OrientationInterpolator();
OrientationInterpolator348.setDEF(CString("Pitch_l_thumb1_PitchInterpolator"));
OrientationInterpolator348.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator348.setKeyValue(new float[]{1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0}, 24);
Group320.addChild(&OrientationInterpolator348);

OrientationInterpolator& OrientationInterpolator349 =  OrientationInterpolator();
OrientationInterpolator349.setDEF(CString("Pitch_r_thumb1_PitchInterpolator"));
OrientationInterpolator349.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator349.setKeyValue(new float[]{1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0}, 24);
Group320.addChild(&OrientationInterpolator349);

Scene33.addChild(&Group320);

Group& Group350 =  Group();
Group350.setDEF(CString("YawsAnimation"));
TimeSensor& TimeSensor351 =  TimeSensor();
TimeSensor351.setDEF(CString("YawTimer"));
TimeSensor351.setCycleInterval(5.73);
TimeSensor351.setLoop(True);
Group350.addChild(&TimeSensor351);

OrientationInterpolator& OrientationInterpolator352 =  OrientationInterpolator();
OrientationInterpolator352.setDEF(CString("Yaw_r_metatarsal_PitchInterpolator"));
OrientationInterpolator352.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator352.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group350.addChild(&OrientationInterpolator352);

OrientationInterpolator& OrientationInterpolator353 =  OrientationInterpolator();
OrientationInterpolator353.setDEF(CString("Yaws_r_ankle_RotationInterpolator"));
OrientationInterpolator353.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator353.setKeyValue(new float[]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0}, 20);
Group350.addChild(&OrientationInterpolator353);

OrientationInterpolator& OrientationInterpolator354 =  OrientationInterpolator();
OrientationInterpolator354.setDEF(CString("Yaws_r_knee_RotationInterpolator"));
OrientationInterpolator354.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator354.setKeyValue(new float[]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0}, 20);
Group350.addChild(&OrientationInterpolator354);

OrientationInterpolator& OrientationInterpolator355 =  OrientationInterpolator();
OrientationInterpolator355.setDEF(CString("Yaws_r_hip_RotationInterpolator"));
OrientationInterpolator355.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator355.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group350.addChild(&OrientationInterpolator355);

OrientationInterpolator& OrientationInterpolator356 =  OrientationInterpolator();
OrientationInterpolator356.setDEF(CString("Yaws_l_ankle_RotationInterpolator"));
OrientationInterpolator356.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator356.setKeyValue(new float[]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0}, 20);
Group350.addChild(&OrientationInterpolator356);

OrientationInterpolator& OrientationInterpolator357 =  OrientationInterpolator();
OrientationInterpolator357.setDEF(CString("Yaws_l_knee_RotationInterpolator"));
OrientationInterpolator357.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator357.setKeyValue(new float[]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0}, 20);
Group350.addChild(&OrientationInterpolator357);

OrientationInterpolator& OrientationInterpolator358 =  OrientationInterpolator();
OrientationInterpolator358.setDEF(CString("Yaws_l_hip_RotationInterpolator"));
OrientationInterpolator358.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator358.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group350.addChild(&OrientationInterpolator358);

OrientationInterpolator& OrientationInterpolator359 =  OrientationInterpolator();
OrientationInterpolator359.setDEF(CString("Yaws_r_wrist_RotationInterpolator"));
OrientationInterpolator359.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator359.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group350.addChild(&OrientationInterpolator359);

OrientationInterpolator& OrientationInterpolator360 =  OrientationInterpolator();
OrientationInterpolator360.setDEF(CString("Yaws_r_elbow_RotationInterpolator"));
OrientationInterpolator360.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator360.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group350.addChild(&OrientationInterpolator360);

OrientationInterpolator& OrientationInterpolator361 =  OrientationInterpolator();
OrientationInterpolator361.setDEF(CString("Yaws_r_shoulder_RotationInterpolator"));
OrientationInterpolator361.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator361.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group350.addChild(&OrientationInterpolator361);

OrientationInterpolator& OrientationInterpolator362 =  OrientationInterpolator();
OrientationInterpolator362.setDEF(CString("Yaws_l_wrist_RotationInterpolator"));
OrientationInterpolator362.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator362.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group350.addChild(&OrientationInterpolator362);

OrientationInterpolator& OrientationInterpolator363 =  OrientationInterpolator();
OrientationInterpolator363.setDEF(CString("Yaws_l_elbow_RotationInterpolator"));
OrientationInterpolator363.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator363.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group350.addChild(&OrientationInterpolator363);

OrientationInterpolator& OrientationInterpolator364 =  OrientationInterpolator();
OrientationInterpolator364.setDEF(CString("Yaws_l_shoulder_RotationInterpolator"));
OrientationInterpolator364.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator364.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group350.addChild(&OrientationInterpolator364);

OrientationInterpolator& OrientationInterpolator365 =  OrientationInterpolator();
OrientationInterpolator365.setDEF(CString("Yaws_head_RotationInterpolator"));
OrientationInterpolator365.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator365.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group350.addChild(&OrientationInterpolator365);

OrientationInterpolator& OrientationInterpolator366 =  OrientationInterpolator();
OrientationInterpolator366.setDEF(CString("Yaws_neck_RotationInterpolator"));
OrientationInterpolator366.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator366.setKeyValue(new float[]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0}, 20);
Group350.addChild(&OrientationInterpolator366);

OrientationInterpolator& OrientationInterpolator367 =  OrientationInterpolator();
OrientationInterpolator367.setDEF(CString("Yaws_upper_body_RotationInterpolator"));
OrientationInterpolator367.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator367.setKeyValue(new float[]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0}, 20);
Group350.addChild(&OrientationInterpolator367);

OrientationInterpolator& OrientationInterpolator368 =  OrientationInterpolator();
OrientationInterpolator368.setDEF(CString("Yaws_lower_body_RotationInterpolator"));
OrientationInterpolator368.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator368.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group350.addChild(&OrientationInterpolator368);

OrientationInterpolator& OrientationInterpolator369 =  OrientationInterpolator();
OrientationInterpolator369.setDEF(CString("Yaws_whole_body_RotationInterpolator"));
OrientationInterpolator369.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator369.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group350.addChild(&OrientationInterpolator369);

PositionInterpolator& PositionInterpolator370 =  PositionInterpolator();
PositionInterpolator370.setDEF(CString("Yaws_whole_body_TranslationInterpolator"));
PositionInterpolator370.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator370.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0}, 9);
Group350.addChild(&PositionInterpolator370);

OrientationInterpolator& OrientationInterpolator371 =  OrientationInterpolator();
OrientationInterpolator371.setDEF(CString("Yaw_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator371.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator371.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group350.addChild(&OrientationInterpolator371);

OrientationInterpolator& OrientationInterpolator372 =  OrientationInterpolator();
OrientationInterpolator372.setDEF(CString("Yaw_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator372.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator372.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group350.addChild(&OrientationInterpolator372);

OrientationInterpolator& OrientationInterpolator373 =  OrientationInterpolator();
OrientationInterpolator373.setDEF(CString("Yaw_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator373.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator373.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group350.addChild(&OrientationInterpolator373);

OrientationInterpolator& OrientationInterpolator374 =  OrientationInterpolator();
OrientationInterpolator374.setDEF(CString("Yaw_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator374.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator374.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group350.addChild(&OrientationInterpolator374);

OrientationInterpolator& OrientationInterpolator375 =  OrientationInterpolator();
OrientationInterpolator375.setDEF(CString("Yaw_sacroiliac_YawInterpolator"));
OrientationInterpolator375.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator375.setKeyValue(new float[]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0}, 24);
Group350.addChild(&OrientationInterpolator375);

OrientationInterpolator& OrientationInterpolator376 =  OrientationInterpolator();
OrientationInterpolator376.setDEF(CString("Yaw_vl5_YawInterpolator"));
OrientationInterpolator376.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator376.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group350.addChild(&OrientationInterpolator376);

OrientationInterpolator& OrientationInterpolator377 =  OrientationInterpolator();
OrientationInterpolator377.setDEF(CString("Yaw_vc6_YawInterpolator"));
OrientationInterpolator377.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator377.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group350.addChild(&OrientationInterpolator377);

OrientationInterpolator& OrientationInterpolator378 =  OrientationInterpolator();
OrientationInterpolator378.setDEF(CString("Yaw_l_thumb1_PitchInterpolator"));
OrientationInterpolator378.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator378.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group350.addChild(&OrientationInterpolator378);

OrientationInterpolator& OrientationInterpolator379 =  OrientationInterpolator();
OrientationInterpolator379.setDEF(CString("Yaw_r_thumb1_PitchInterpolator"));
OrientationInterpolator379.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator379.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group350.addChild(&OrientationInterpolator379);

Scene33.addChild(&Group350);

Group& Group380 =  Group();
Group380.setDEF(CString("RollsAnimation"));
TimeSensor& TimeSensor381 =  TimeSensor();
TimeSensor381.setDEF(CString("RollTimer"));
TimeSensor381.setCycleInterval(5.73);
TimeSensor381.setLoop(True);
Group380.addChild(&TimeSensor381);

OrientationInterpolator& OrientationInterpolator382 =  OrientationInterpolator();
OrientationInterpolator382.setDEF(CString("Roll_r_metatarsal_PitchInterpolator"));
OrientationInterpolator382.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator382.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group380.addChild(&OrientationInterpolator382);

OrientationInterpolator& OrientationInterpolator383 =  OrientationInterpolator();
OrientationInterpolator383.setDEF(CString("Rolls_r_ankle_RotationInterpolator"));
OrientationInterpolator383.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator383.setKeyValue(new float[]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0}, 20);
Group380.addChild(&OrientationInterpolator383);

OrientationInterpolator& OrientationInterpolator384 =  OrientationInterpolator();
OrientationInterpolator384.setDEF(CString("Rolls_r_knee_RotationInterpolator"));
OrientationInterpolator384.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator384.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group380.addChild(&OrientationInterpolator384);

OrientationInterpolator& OrientationInterpolator385 =  OrientationInterpolator();
OrientationInterpolator385.setDEF(CString("Rolls_r_hip_RotationInterpolator"));
OrientationInterpolator385.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator385.setKeyValue(new float[]{0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0}, 20);
Group380.addChild(&OrientationInterpolator385);

OrientationInterpolator& OrientationInterpolator386 =  OrientationInterpolator();
OrientationInterpolator386.setDEF(CString("Rolls_l_ankle_RotationInterpolator"));
OrientationInterpolator386.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator386.setKeyValue(new float[]{0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0}, 20);
Group380.addChild(&OrientationInterpolator386);

OrientationInterpolator& OrientationInterpolator387 =  OrientationInterpolator();
OrientationInterpolator387.setDEF(CString("Rolls_l_knee_RotationInterpolator"));
OrientationInterpolator387.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator387.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group380.addChild(&OrientationInterpolator387);

OrientationInterpolator& OrientationInterpolator388 =  OrientationInterpolator();
OrientationInterpolator388.setDEF(CString("Rolls_l_hip_RotationInterpolator"));
OrientationInterpolator388.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator388.setKeyValue(new float[]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0}, 20);
Group380.addChild(&OrientationInterpolator388);

OrientationInterpolator& OrientationInterpolator389 =  OrientationInterpolator();
OrientationInterpolator389.setDEF(CString("Rolls_r_wrist_RotationInterpolator"));
OrientationInterpolator389.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator389.setKeyValue(new float[]{0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0}, 20);
Group380.addChild(&OrientationInterpolator389);

OrientationInterpolator& OrientationInterpolator390 =  OrientationInterpolator();
OrientationInterpolator390.setDEF(CString("Rolls_r_elbow_RotationInterpolator"));
OrientationInterpolator390.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator390.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group380.addChild(&OrientationInterpolator390);

OrientationInterpolator& OrientationInterpolator391 =  OrientationInterpolator();
OrientationInterpolator391.setDEF(CString("Rolls_r_shoulder_RotationInterpolator"));
OrientationInterpolator391.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator391.setKeyValue(new float[]{0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0}, 20);
Group380.addChild(&OrientationInterpolator391);

OrientationInterpolator& OrientationInterpolator392 =  OrientationInterpolator();
OrientationInterpolator392.setDEF(CString("Rolls_l_wrist_RotationInterpolator"));
OrientationInterpolator392.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator392.setKeyValue(new float[]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0}, 20);
Group380.addChild(&OrientationInterpolator392);

OrientationInterpolator& OrientationInterpolator393 =  OrientationInterpolator();
OrientationInterpolator393.setDEF(CString("Rolls_l_elbow_RotationInterpolator"));
OrientationInterpolator393.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator393.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group380.addChild(&OrientationInterpolator393);

OrientationInterpolator& OrientationInterpolator394 =  OrientationInterpolator();
OrientationInterpolator394.setDEF(CString("Rolls_l_shoulder_RotationInterpolator"));
OrientationInterpolator394.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator394.setKeyValue(new float[]{0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0}, 20);
Group380.addChild(&OrientationInterpolator394);

OrientationInterpolator& OrientationInterpolator395 =  OrientationInterpolator();
OrientationInterpolator395.setDEF(CString("Rolls_head_RotationInterpolator"));
OrientationInterpolator395.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator395.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group380.addChild(&OrientationInterpolator395);

OrientationInterpolator& OrientationInterpolator396 =  OrientationInterpolator();
OrientationInterpolator396.setDEF(CString("Rolls_neck_RotationInterpolator"));
OrientationInterpolator396.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator396.setKeyValue(new float[]{0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0}, 20);
Group380.addChild(&OrientationInterpolator396);

OrientationInterpolator& OrientationInterpolator397 =  OrientationInterpolator();
OrientationInterpolator397.setDEF(CString("Rolls_lower_body_RotationInterpolator"));
OrientationInterpolator397.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator397.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group380.addChild(&OrientationInterpolator397);

OrientationInterpolator& OrientationInterpolator398 =  OrientationInterpolator();
OrientationInterpolator398.setDEF(CString("Rolls_upper_body_RotationInterpolator"));
OrientationInterpolator398.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator398.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group380.addChild(&OrientationInterpolator398);

OrientationInterpolator& OrientationInterpolator399 =  OrientationInterpolator();
OrientationInterpolator399.setDEF(CString("Rolls_whole_body_RotationInterpolator"));
OrientationInterpolator399.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator399.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group380.addChild(&OrientationInterpolator399);

PositionInterpolator& PositionInterpolator400 =  PositionInterpolator();
PositionInterpolator400.setDEF(CString("Rolls_whole_body_TranslationInterpolator"));
PositionInterpolator400.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
PositionInterpolator400.setKeyValue(new float[]{0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0}, 27);
Group380.addChild(&PositionInterpolator400);

OrientationInterpolator& OrientationInterpolator401 =  OrientationInterpolator();
OrientationInterpolator401.setDEF(CString("Roll_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator401.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator401.setKeyValue(new float[]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0}, 24);
Group380.addChild(&OrientationInterpolator401);

OrientationInterpolator& OrientationInterpolator402 =  OrientationInterpolator();
OrientationInterpolator402.setDEF(CString("Roll_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator402.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator402.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group380.addChild(&OrientationInterpolator402);

OrientationInterpolator& OrientationInterpolator403 =  OrientationInterpolator();
OrientationInterpolator403.setDEF(CString("Roll_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator403.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator403.setKeyValue(new float[]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0}, 24);
Group380.addChild(&OrientationInterpolator403);

OrientationInterpolator& OrientationInterpolator404 =  OrientationInterpolator();
OrientationInterpolator404.setDEF(CString("Roll_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator404.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator404.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group380.addChild(&OrientationInterpolator404);

OrientationInterpolator& OrientationInterpolator405 =  OrientationInterpolator();
OrientationInterpolator405.setDEF(CString("Roll_sacroiliac_YawInterpolator"));
OrientationInterpolator405.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator405.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group380.addChild(&OrientationInterpolator405);

OrientationInterpolator& OrientationInterpolator406 =  OrientationInterpolator();
OrientationInterpolator406.setDEF(CString("Roll_vl5_YawInterpolator"));
OrientationInterpolator406.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator406.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group380.addChild(&OrientationInterpolator406);

OrientationInterpolator& OrientationInterpolator407 =  OrientationInterpolator();
OrientationInterpolator407.setDEF(CString("Roll_vc6_YawInterpolator"));
OrientationInterpolator407.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator407.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group380.addChild(&OrientationInterpolator407);

OrientationInterpolator& OrientationInterpolator408 =  OrientationInterpolator();
OrientationInterpolator408.setDEF(CString("Roll_l_thumb1_PitchInterpolator"));
OrientationInterpolator408.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator408.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group380.addChild(&OrientationInterpolator408);

OrientationInterpolator& OrientationInterpolator409 =  OrientationInterpolator();
OrientationInterpolator409.setDEF(CString("Roll_r_thumb1_PitchInterpolator"));
OrientationInterpolator409.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator409.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group380.addChild(&OrientationInterpolator409);

Scene33.addChild(&Group380);

Group& Group410 =  Group();
Group410.setDEF(CString("WalkAnimation"));
TimeSensor& TimeSensor411 =  TimeSensor();
TimeSensor411.setDEF(CString("WalkTimer"));
TimeSensor411.setCycleInterval(1.73);
TimeSensor411.setLoop(True);
Group410.addChild(&TimeSensor411);

OrientationInterpolator& OrientationInterpolator412 =  OrientationInterpolator();
OrientationInterpolator412.setDEF(CString("Walk_r_metatarsal_PitchInterpolator"));
OrientationInterpolator412.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator412.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group410.addChild(&OrientationInterpolator412);

OrientationInterpolator& OrientationInterpolator413 =  OrientationInterpolator();
OrientationInterpolator413.setDEF(CString("Walk_r_ankle_RotationInterpolator"));
OrientationInterpolator413.setKey(new float[]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator413.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0}, 44);
Group410.addChild(&OrientationInterpolator413);

OrientationInterpolator& OrientationInterpolator414 =  OrientationInterpolator();
OrientationInterpolator414.setDEF(CString("Walk_r_knee_RotationInterpolator"));
OrientationInterpolator414.setKey(new float[]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator414.setKeyValue(new float[]{1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573}, 40);
Group410.addChild(&OrientationInterpolator414);

OrientationInterpolator& OrientationInterpolator415 =  OrientationInterpolator();
OrientationInterpolator415.setDEF(CString("Walk_r_hip_RotationInterpolator"));
OrientationInterpolator415.setKey(new float[]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator415.setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 40);
Group410.addChild(&OrientationInterpolator415);

OrientationInterpolator& OrientationInterpolator416 =  OrientationInterpolator();
OrientationInterpolator416.setDEF(CString("Walk_l_ankle_RotationInterpolator"));
OrientationInterpolator416.setKey(new float[]{0,0.125,0.2083,0.375,0.6667,0.9167,1}, 7);
OrientationInterpolator416.setKeyValue(new float[]{-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714}, 28);
Group410.addChild(&OrientationInterpolator416);

OrientationInterpolator& OrientationInterpolator417 =  OrientationInterpolator();
OrientationInterpolator417.setDEF(CString("Walk_l_knee_RotationInterpolator"));
OrientationInterpolator417.setKey(new float[]{0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator417.setKeyValue(new float[]{1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226}, 32);
Group410.addChild(&OrientationInterpolator417);

OrientationInterpolator& OrientationInterpolator418 =  OrientationInterpolator();
OrientationInterpolator418.setDEF(CString("Walk_l_hip_RotationInterpolator"));
OrientationInterpolator418.setKey(new float[]{0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator418.setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 32);
Group410.addChild(&OrientationInterpolator418);

OrientationInterpolator& OrientationInterpolator419 =  OrientationInterpolator();
OrientationInterpolator419.setDEF(CString("Walk_lower_body_RotationInterpolator"));
OrientationInterpolator419.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator419.setKeyValue(new float[]{0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056}, 12);
Group410.addChild(&OrientationInterpolator419);

OrientationInterpolator& OrientationInterpolator420 =  OrientationInterpolator();
OrientationInterpolator420.setDEF(CString("Walk_r_wrist_RotationInterpolator"));
OrientationInterpolator420.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator420.setKeyValue(new float[]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346}, 16);
Group410.addChild(&OrientationInterpolator420);

OrientationInterpolator& OrientationInterpolator421 =  OrientationInterpolator();
OrientationInterpolator421.setDEF(CString("Walk_r_elbow_RotationInterpolator"));
OrientationInterpolator421.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator421.setKeyValue(new float[]{-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508}, 16);
Group410.addChild(&OrientationInterpolator421);

OrientationInterpolator& OrientationInterpolator422 =  OrientationInterpolator();
OrientationInterpolator422.setDEF(CString("Walk_r_shoulder_RotationInterpolator"));
OrientationInterpolator422.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator422.setKeyValue(new float[]{-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346}, 16);
Group410.addChild(&OrientationInterpolator422);

OrientationInterpolator& OrientationInterpolator423 =  OrientationInterpolator();
OrientationInterpolator423.setDEF(CString("Walk_l_wrist_RotationInterpolator"));
OrientationInterpolator423.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator423.setKeyValue(new float[]{0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076}, 16);
Group410.addChild(&OrientationInterpolator423);

OrientationInterpolator& OrientationInterpolator424 =  OrientationInterpolator();
OrientationInterpolator424.setDEF(CString("Walk_l_elbow_RotationInterpolator"));
OrientationInterpolator424.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator424.setKeyValue(new float[]{-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878}, 16);
Group410.addChild(&OrientationInterpolator424);

OrientationInterpolator& OrientationInterpolator425 =  OrientationInterpolator();
OrientationInterpolator425.setDEF(CString("Walk_l_shoulder_RotationInterpolator"));
OrientationInterpolator425.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator425.setKeyValue(new float[]{1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189}, 16);
Group410.addChild(&OrientationInterpolator425);

OrientationInterpolator& OrientationInterpolator426 =  OrientationInterpolator();
OrientationInterpolator426.setDEF(CString("Walk_head_RotationInterpolator"));
OrientationInterpolator426.setKey(new float[]{0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1}, 10);
OrientationInterpolator426.setKeyValue(new float[]{0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642}, 40);
Group410.addChild(&OrientationInterpolator426);

OrientationInterpolator& OrientationInterpolator427 =  OrientationInterpolator();
OrientationInterpolator427.setDEF(CString("Walk_neck_RotationInterpolator"));
OrientationInterpolator427.setKey(new float[]{0,1}, 2);
OrientationInterpolator427.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group410.addChild(&OrientationInterpolator427);

OrientationInterpolator& OrientationInterpolator428 =  OrientationInterpolator();
OrientationInterpolator428.setDEF(CString("Walk_upper_body_RotationInterpolator"));
OrientationInterpolator428.setKey(new float[]{0,0.2083,0.375,0.75,0.8333,1}, 6);
OrientationInterpolator428.setKeyValue(new float[]{0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826}, 24);
Group410.addChild(&OrientationInterpolator428);

OrientationInterpolator& OrientationInterpolator429 =  OrientationInterpolator();
OrientationInterpolator429.setDEF(CString("Walk_whole_body_RotationInterpolator"));
OrientationInterpolator429.setKey(new float[]{0,1}, 2);
OrientationInterpolator429.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group410.addChild(&OrientationInterpolator429);

PositionInterpolator& PositionInterpolator430 =  PositionInterpolator();
PositionInterpolator430.setDEF(CString("Walk_whole_body_TranslationInterpolator"));
PositionInterpolator430.setKey(new float[]{0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1}, 19);
PositionInterpolator430.setKeyValue(new float[]{0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0}, 57);
Group410.addChild(&PositionInterpolator430);

OrientationInterpolator& OrientationInterpolator431 =  OrientationInterpolator();
OrientationInterpolator431.setDEF(CString("Walk_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator431.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator431.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group410.addChild(&OrientationInterpolator431);

OrientationInterpolator& OrientationInterpolator432 =  OrientationInterpolator();
OrientationInterpolator432.setDEF(CString("Walk_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator432.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator432.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group410.addChild(&OrientationInterpolator432);

OrientationInterpolator& OrientationInterpolator433 =  OrientationInterpolator();
OrientationInterpolator433.setDEF(CString("Walk_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator433.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator433.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group410.addChild(&OrientationInterpolator433);

OrientationInterpolator& OrientationInterpolator434 =  OrientationInterpolator();
OrientationInterpolator434.setDEF(CString("Walk_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator434.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator434.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group410.addChild(&OrientationInterpolator434);

OrientationInterpolator& OrientationInterpolator435 =  OrientationInterpolator();
OrientationInterpolator435.setDEF(CString("Walk_sacroiliac_YawInterpolator"));
OrientationInterpolator435.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator435.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group410.addChild(&OrientationInterpolator435);

OrientationInterpolator& OrientationInterpolator436 =  OrientationInterpolator();
OrientationInterpolator436.setDEF(CString("Walk_vl5_YawInterpolator"));
OrientationInterpolator436.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator436.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group410.addChild(&OrientationInterpolator436);

OrientationInterpolator& OrientationInterpolator437 =  OrientationInterpolator();
OrientationInterpolator437.setDEF(CString("Walk_vc6_YawInterpolator"));
OrientationInterpolator437.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator437.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group410.addChild(&OrientationInterpolator437);

OrientationInterpolator& OrientationInterpolator438 =  OrientationInterpolator();
OrientationInterpolator438.setDEF(CString("Walk_l_thumb1_PitchInterpolator"));
OrientationInterpolator438.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator438.setKeyValue(new float[]{1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0}, 24);
Group410.addChild(&OrientationInterpolator438);

OrientationInterpolator& OrientationInterpolator439 =  OrientationInterpolator();
OrientationInterpolator439.setDEF(CString("Walk_r_thumb1_PitchInterpolator"));
OrientationInterpolator439.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator439.setKeyValue(new float[]{1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0}, 24);
Group410.addChild(&OrientationInterpolator439);

Scene33.addChild(&Group410);

Group& Group440 =  Group();
Group440.setDEF(CString("RunAnimation"));
TimeSensor& TimeSensor441 =  TimeSensor();
TimeSensor441.setDEF(CString("RunTimer"));
TimeSensor441.setCycleInterval(0.9);
TimeSensor441.setLoop(True);
Group440.addChild(&TimeSensor441);

OrientationInterpolator& OrientationInterpolator442 =  OrientationInterpolator();
OrientationInterpolator442.setDEF(CString("Run_r_metatarsal_PitchInterpolator"));
OrientationInterpolator442.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator442.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group440.addChild(&OrientationInterpolator442);

OrientationInterpolator& OrientationInterpolator443 =  OrientationInterpolator();
OrientationInterpolator443.setDEF(CString("Run_l_hip_RotationInterpolator_Run"));
OrientationInterpolator443.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator443.setKeyValue(new float[]{-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42}, 20);
Group440.addChild(&OrientationInterpolator443);

OrientationInterpolator& OrientationInterpolator444 =  OrientationInterpolator();
OrientationInterpolator444.setDEF(CString("Run_l_knee_RotationInterpolator_Run"));
OrientationInterpolator444.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator444.setKeyValue(new float[]{1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01}, 20);
Group440.addChild(&OrientationInterpolator444);

OrientationInterpolator& OrientationInterpolator445 =  OrientationInterpolator();
OrientationInterpolator445.setDEF(CString("Run_l_ankle_RotationInterpolator_Run"));
OrientationInterpolator445.setKey(new float[]{0,0.22,0.3,0.4,1}, 5);
OrientationInterpolator445.setKeyValue(new float[]{1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574}, 20);
Group440.addChild(&OrientationInterpolator445);

OrientationInterpolator& OrientationInterpolator446 =  OrientationInterpolator();
OrientationInterpolator446.setDEF(CString("Run_r_hip_RotationInterpolator_Run"));
OrientationInterpolator446.setKey(new float[]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator446.setKeyValue(new float[]{0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9}, 20);
Group440.addChild(&OrientationInterpolator446);

OrientationInterpolator& OrientationInterpolator447 =  OrientationInterpolator();
OrientationInterpolator447.setDEF(CString("Run_r_knee_RotationInterpolator_Run"));
OrientationInterpolator447.setKey(new float[]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator447.setKeyValue(new float[]{1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705}, 20);
Group440.addChild(&OrientationInterpolator447);

OrientationInterpolator& OrientationInterpolator448 =  OrientationInterpolator();
OrientationInterpolator448.setDEF(CString("Run_r_ankle_RotationInterpolator_Run"));
OrientationInterpolator448.setKey(new float[]{0,0.4,0.71,0.8,0.82,1}, 6);
OrientationInterpolator448.setKeyValue(new float[]{1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323}, 24);
Group440.addChild(&OrientationInterpolator448);

OrientationInterpolator& OrientationInterpolator449 =  OrientationInterpolator();
OrientationInterpolator449.setDEF(CString("Run_l_shoulder_RotationInterpolator_Run"));
OrientationInterpolator449.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator449.setKeyValue(new float[]{0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5}, 20);
Group440.addChild(&OrientationInterpolator449);

OrientationInterpolator& OrientationInterpolator450 =  OrientationInterpolator();
OrientationInterpolator450.setDEF(CString("Run_l_elbow_RotationInterpolator_Run"));
OrientationInterpolator450.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator450.setKeyValue(new float[]{-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85}, 20);
Group440.addChild(&OrientationInterpolator450);

OrientationInterpolator& OrientationInterpolator451 =  OrientationInterpolator();
OrientationInterpolator451.setDEF(CString("Run_l_wrist_RotationInterpolator_Run"));
OrientationInterpolator451.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator451.setKeyValue(new float[]{-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14}, 20);
Group440.addChild(&OrientationInterpolator451);

OrientationInterpolator& OrientationInterpolator452 =  OrientationInterpolator();
OrientationInterpolator452.setDEF(CString("Run_r_shoulder_RotationInterpolator_Run"));
OrientationInterpolator452.setKey(new float[]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator452.setKeyValue(new float[]{-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85}, 20);
Group440.addChild(&OrientationInterpolator452);

OrientationInterpolator& OrientationInterpolator453 =  OrientationInterpolator();
OrientationInterpolator453.setDEF(CString("Run_r_elbow_RotationInterpolator_Run"));
OrientationInterpolator453.setKey(new float[]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator453.setKeyValue(new float[]{-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975}, 20);
Group440.addChild(&OrientationInterpolator453);

OrientationInterpolator& OrientationInterpolator454 =  OrientationInterpolator();
OrientationInterpolator454.setDEF(CString("Run_r_wrist_RotationInterpolator_Run"));
OrientationInterpolator454.setKey(new float[]{0,1}, 2);
OrientationInterpolator454.setKeyValue(new float[]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273}, 8);
Group440.addChild(&OrientationInterpolator454);

OrientationInterpolator& OrientationInterpolator455 =  OrientationInterpolator();
OrientationInterpolator455.setDEF(CString("Run_lower_body_RotationInterpolator_Run"));
OrientationInterpolator455.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator455.setKeyValue(new float[]{0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125}, 20);
Group440.addChild(&OrientationInterpolator455);

OrientationInterpolator& OrientationInterpolator456 =  OrientationInterpolator();
OrientationInterpolator456.setDEF(CString("Run_head_RotationInterpolator_Run"));
OrientationInterpolator456.setKey(new float[]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator456.setKeyValue(new float[]{1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08}, 20);
Group440.addChild(&OrientationInterpolator456);

OrientationInterpolator& OrientationInterpolator457 =  OrientationInterpolator();
OrientationInterpolator457.setDEF(CString("Run_neck_RotationInterpolator_Run"));
OrientationInterpolator457.setKey(new float[]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator457.setKeyValue(new float[]{0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4}, 20);
Group440.addChild(&OrientationInterpolator457);

OrientationInterpolator& OrientationInterpolator458 =  OrientationInterpolator();
OrientationInterpolator458.setDEF(CString("Run_upper_body_RotationInterpolator_Run"));
OrientationInterpolator458.setKey(new float[]{0,0.2545,0.4909,0.7636,1}, 5);
OrientationInterpolator458.setKeyValue(new float[]{0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5}, 20);
Group440.addChild(&OrientationInterpolator458);

OrientationInterpolator& OrientationInterpolator459 =  OrientationInterpolator();
OrientationInterpolator459.setDEF(CString("Run_whole_body_RotationInterpolator_Run"));
OrientationInterpolator459.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator459.setKeyValue(new float[]{1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06}, 20);
Group440.addChild(&OrientationInterpolator459);

PositionInterpolator& PositionInterpolator460 =  PositionInterpolator();
PositionInterpolator460.setDEF(CString("Run_whole_body_TranslationInterpolator_Run"));
PositionInterpolator460.setKey(new float[]{0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1}, 9);
PositionInterpolator460.setKeyValue(new float[]{0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0}, 27);
Group440.addChild(&PositionInterpolator460);

OrientationInterpolator& OrientationInterpolator461 =  OrientationInterpolator();
OrientationInterpolator461.setDEF(CString("Run_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator461.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator461.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group440.addChild(&OrientationInterpolator461);

OrientationInterpolator& OrientationInterpolator462 =  OrientationInterpolator();
OrientationInterpolator462.setDEF(CString("Run_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator462.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator462.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group440.addChild(&OrientationInterpolator462);

OrientationInterpolator& OrientationInterpolator463 =  OrientationInterpolator();
OrientationInterpolator463.setDEF(CString("Run_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator463.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator463.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group440.addChild(&OrientationInterpolator463);

OrientationInterpolator& OrientationInterpolator464 =  OrientationInterpolator();
OrientationInterpolator464.setDEF(CString("Run_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator464.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator464.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group440.addChild(&OrientationInterpolator464);

OrientationInterpolator& OrientationInterpolator465 =  OrientationInterpolator();
OrientationInterpolator465.setDEF(CString("Run_sacroiliac_YawInterpolator"));
OrientationInterpolator465.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator465.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group440.addChild(&OrientationInterpolator465);

OrientationInterpolator& OrientationInterpolator466 =  OrientationInterpolator();
OrientationInterpolator466.setDEF(CString("Run_vl5_YawInterpolator"));
OrientationInterpolator466.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator466.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group440.addChild(&OrientationInterpolator466);

OrientationInterpolator& OrientationInterpolator467 =  OrientationInterpolator();
OrientationInterpolator467.setDEF(CString("Run_vc6_YawInterpolator"));
OrientationInterpolator467.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator467.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group440.addChild(&OrientationInterpolator467);

OrientationInterpolator& OrientationInterpolator468 =  OrientationInterpolator();
OrientationInterpolator468.setDEF(CString("Run_l_thumb1_PitchInterpolator"));
OrientationInterpolator468.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator468.setKeyValue(new float[]{1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0}, 24);
Group440.addChild(&OrientationInterpolator468);

OrientationInterpolator& OrientationInterpolator469 =  OrientationInterpolator();
OrientationInterpolator469.setDEF(CString("Run_r_thumb1_PitchInterpolator"));
OrientationInterpolator469.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator469.setKeyValue(new float[]{1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0}, 24);
Group440.addChild(&OrientationInterpolator469);

Scene33.addChild(&Group440);

Group& Group470 =  Group();
Group470.setDEF(CString("JumpAnimation"));
TimeSensor& TimeSensor471 =  TimeSensor();
TimeSensor471.setDEF(CString("JumpTimer"));
TimeSensor471.setCycleInterval(3.73);
TimeSensor471.setLoop(True);
Group470.addChild(&TimeSensor471);

OrientationInterpolator& OrientationInterpolator472 =  OrientationInterpolator();
OrientationInterpolator472.setDEF(CString("Jump_r_metatarsal_PitchInterpolator"));
OrientationInterpolator472.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator472.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group470.addChild(&OrientationInterpolator472);

OrientationInterpolator& OrientationInterpolator473 =  OrientationInterpolator();
OrientationInterpolator473.setDEF(CString("Jump_r_ankle_RotationInterpolator"));
OrientationInterpolator473.setKey(new float[]{0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator473.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0}, 56);
Group470.addChild(&OrientationInterpolator473);

OrientationInterpolator& OrientationInterpolator474 =  OrientationInterpolator();
OrientationInterpolator474.setDEF(CString("Jump_r_knee_RotationInterpolator"));
OrientationInterpolator474.setKey(new float[]{0,0.2,0.25,0.3,0.64,0.76,0.88,1}, 8);
OrientationInterpolator474.setKeyValue(new float[]{0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0}, 32);
Group470.addChild(&OrientationInterpolator474);

OrientationInterpolator& OrientationInterpolator475 =  OrientationInterpolator();
OrientationInterpolator475.setDEF(CString("Jump_r_hip_RotationInterpolator"));
OrientationInterpolator475.setKey(new float[]{0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator475.setKeyValue(new float[]{0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0}, 44);
Group470.addChild(&OrientationInterpolator475);

OrientationInterpolator& OrientationInterpolator476 =  OrientationInterpolator();
OrientationInterpolator476.setDEF(CString("Jump_l_ankle_RotationInterpolator"));
OrientationInterpolator476.setKey(new float[]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator476.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0}, 56);
Group470.addChild(&OrientationInterpolator476);

OrientationInterpolator& OrientationInterpolator477 =  OrientationInterpolator();
OrientationInterpolator477.setDEF(CString("Jump_l_knee_RotationInterpolator"));
OrientationInterpolator477.setKey(new float[]{0,0.28,0.32,0.48,0.64,0.76,0.88,1}, 8);
OrientationInterpolator477.setKeyValue(new float[]{0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0}, 32);
Group470.addChild(&OrientationInterpolator477);

OrientationInterpolator& OrientationInterpolator478 =  OrientationInterpolator();
OrientationInterpolator478.setDEF(CString("Jump_l_hip_RotationInterpolator"));
OrientationInterpolator478.setKey(new float[]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator478.setKeyValue(new float[]{0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0}, 44);
Group470.addChild(&OrientationInterpolator478);

OrientationInterpolator& OrientationInterpolator479 =  OrientationInterpolator();
OrientationInterpolator479.setDEF(CString("Jump_lower_body_RotationInterpolator"));
OrientationInterpolator479.setKey(new float[]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator479.setKeyValue(new float[]{0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group470.addChild(&OrientationInterpolator479);

OrientationInterpolator& OrientationInterpolator480 =  OrientationInterpolator();
OrientationInterpolator480.setDEF(CString("Jump_r_wrist_RotationInterpolator"));
OrientationInterpolator480.setKey(new float[]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator480.setKeyValue(new float[]{0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0}, 24);
Group470.addChild(&OrientationInterpolator480);

OrientationInterpolator& OrientationInterpolator481 =  OrientationInterpolator();
OrientationInterpolator481.setDEF(CString("Jump_r_elbow_RotationInterpolator"));
OrientationInterpolator481.setKey(new float[]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator481.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0}, 24);
Group470.addChild(&OrientationInterpolator481);

OrientationInterpolator& OrientationInterpolator482 =  OrientationInterpolator();
OrientationInterpolator482.setDEF(CString("Jump_r_shoulder_RotationInterpolator"));
OrientationInterpolator482.setKey(new float[]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator482.setKeyValue(new float[]{0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0}, 28);
Group470.addChild(&OrientationInterpolator482);

OrientationInterpolator& OrientationInterpolator483 =  OrientationInterpolator();
OrientationInterpolator483.setDEF(CString("Jump_l_wrist_RotationInterpolator"));
OrientationInterpolator483.setKey(new float[]{0,0.48,0.52,0.64,0.76,0.88,1}, 7);
OrientationInterpolator483.setKeyValue(new float[]{0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0}, 28);
Group470.addChild(&OrientationInterpolator483);

OrientationInterpolator& OrientationInterpolator484 =  OrientationInterpolator();
OrientationInterpolator484.setDEF(CString("Jump_l_elbow_RotationInterpolator"));
OrientationInterpolator484.setKey(new float[]{0,0.28,0.32,0.58,0.72,1}, 6);
OrientationInterpolator484.setKeyValue(new float[]{0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0}, 24);
Group470.addChild(&OrientationInterpolator484);

OrientationInterpolator& OrientationInterpolator485 =  OrientationInterpolator();
OrientationInterpolator485.setDEF(CString("Jump_l_shoulder_RotationInterpolator"));
OrientationInterpolator485.setKey(new float[]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator485.setKeyValue(new float[]{0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0}, 28);
Group470.addChild(&OrientationInterpolator485);

OrientationInterpolator& OrientationInterpolator486 =  OrientationInterpolator();
OrientationInterpolator486.setDEF(CString("Jump_head_RotationInterpolator"));
OrientationInterpolator486.setKey(new float[]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator486.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0}, 24);
Group470.addChild(&OrientationInterpolator486);

OrientationInterpolator& OrientationInterpolator487 =  OrientationInterpolator();
OrientationInterpolator487.setDEF(CString("Jump_neck_RotationInterpolator"));
OrientationInterpolator487.setKey(new float[]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator487.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0}, 24);
Group470.addChild(&OrientationInterpolator487);

OrientationInterpolator& OrientationInterpolator488 =  OrientationInterpolator();
OrientationInterpolator488.setDEF(CString("Jump_upper_body_RotationInterpolator"));
OrientationInterpolator488.setKey(new float[]{0,0.22,0.28,0.34,0.71,0.88,1}, 7);
OrientationInterpolator488.setKeyValue(new float[]{0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0}, 28);
Group470.addChild(&OrientationInterpolator488);

OrientationInterpolator& OrientationInterpolator489 =  OrientationInterpolator();
OrientationInterpolator489.setDEF(CString("Jump_whole_body_RotationInterpolator"));
OrientationInterpolator489.setKey(new float[]{0,0.28,0.32,0.48,0.64,0.76,1}, 7);
OrientationInterpolator489.setKeyValue(new float[]{0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group470.addChild(&OrientationInterpolator489);

PositionInterpolator& PositionInterpolator490 =  PositionInterpolator();
PositionInterpolator490.setDEF(CString("Jump_whole_body_TranslationInterpolator"));
PositionInterpolator490.setKey(new float[]{0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1}, 22);
PositionInterpolator490.setKeyValue(new float[]{0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0}, 66);
Group470.addChild(&PositionInterpolator490);

OrientationInterpolator& OrientationInterpolator491 =  OrientationInterpolator();
OrientationInterpolator491.setDEF(CString("Jump_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator491.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator491.setKeyValue(new float[]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0}, 24);
Group470.addChild(&OrientationInterpolator491);

OrientationInterpolator& OrientationInterpolator492 =  OrientationInterpolator();
OrientationInterpolator492.setDEF(CString("Jump_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator492.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator492.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group470.addChild(&OrientationInterpolator492);

OrientationInterpolator& OrientationInterpolator493 =  OrientationInterpolator();
OrientationInterpolator493.setDEF(CString("Jump_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator493.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator493.setKeyValue(new float[]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0}, 24);
Group470.addChild(&OrientationInterpolator493);

OrientationInterpolator& OrientationInterpolator494 =  OrientationInterpolator();
OrientationInterpolator494.setDEF(CString("Jump_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator494.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator494.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group470.addChild(&OrientationInterpolator494);

OrientationInterpolator& OrientationInterpolator495 =  OrientationInterpolator();
OrientationInterpolator495.setDEF(CString("Jump_sacroiliac_YawInterpolator"));
OrientationInterpolator495.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator495.setKeyValue(new float[]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0}, 24);
Group470.addChild(&OrientationInterpolator495);

OrientationInterpolator& OrientationInterpolator496 =  OrientationInterpolator();
OrientationInterpolator496.setDEF(CString("Jump_vl5_YawInterpolator"));
OrientationInterpolator496.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator496.setKeyValue(new float[]{0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0}, 28);
Group470.addChild(&OrientationInterpolator496);

OrientationInterpolator& OrientationInterpolator497 =  OrientationInterpolator();
OrientationInterpolator497.setDEF(CString("Jump_vc6_YawInterpolator"));
OrientationInterpolator497.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator497.setKeyValue(new float[]{0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0}, 28);
Group470.addChild(&OrientationInterpolator497);

OrientationInterpolator& OrientationInterpolator498 =  OrientationInterpolator();
OrientationInterpolator498.setDEF(CString("Jump_l_thumb1_PitchInterpolator"));
OrientationInterpolator498.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator498.setKeyValue(new float[]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0}, 24);
Group470.addChild(&OrientationInterpolator498);

OrientationInterpolator& OrientationInterpolator499 =  OrientationInterpolator();
OrientationInterpolator499.setDEF(CString("Jump_r_thumb1_PitchInterpolator"));
OrientationInterpolator499.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator499.setKeyValue(new float[]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0}, 24);
Group470.addChild(&OrientationInterpolator499);

Scene33.addChild(&Group470);

Group& Group500 =  Group();
Group500.setDEF(CString("KickAnimation"));
TimeSensor& TimeSensor501 =  TimeSensor();
TimeSensor501.setDEF(CString("KickTimer"));
TimeSensor501.setCycleInterval(3.73);
TimeSensor501.setLoop(True);
Group500.addChild(&TimeSensor501);

OrientationInterpolator& OrientationInterpolator502 =  OrientationInterpolator();
OrientationInterpolator502.setDEF(CString("Kick_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator502.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator502.setKeyValue(new float[]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0}, 24);
Group500.addChild(&OrientationInterpolator502);

OrientationInterpolator& OrientationInterpolator503 =  OrientationInterpolator();
OrientationInterpolator503.setDEF(CString("Kick_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator503.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator503.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group500.addChild(&OrientationInterpolator503);

OrientationInterpolator& OrientationInterpolator504 =  OrientationInterpolator();
OrientationInterpolator504.setDEF(CString("Kick_l_shoulder_RollInterpolator"));
OrientationInterpolator504.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator504.setKeyValue(new float[]{0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0}, 24);
Group500.addChild(&OrientationInterpolator504);

OrientationInterpolator& OrientationInterpolator505 =  OrientationInterpolator();
OrientationInterpolator505.setDEF(CString("Kick_l_ForeArm_PitchInterpolator"));
OrientationInterpolator505.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator505.setKeyValue(new float[]{1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0}, 24);
Group500.addChild(&OrientationInterpolator505);

OrientationInterpolator& OrientationInterpolator506 =  OrientationInterpolator();
OrientationInterpolator506.setDEF(CString("Kick_l_wrist_RollInterpolator"));
OrientationInterpolator506.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator506.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group500.addChild(&OrientationInterpolator506);

OrientationInterpolator& OrientationInterpolator507 =  OrientationInterpolator();
OrientationInterpolator507.setDEF(CString("Kick_l_thumb1_PitchInterpolator"));
OrientationInterpolator507.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator507.setKeyValue(new float[]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0}, 24);
Group500.addChild(&OrientationInterpolator507);

OrientationInterpolator& OrientationInterpolator508 =  OrientationInterpolator();
OrientationInterpolator508.setDEF(CString("Kick_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator508.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator508.setKeyValue(new float[]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0}, 24);
Group500.addChild(&OrientationInterpolator508);

OrientationInterpolator& OrientationInterpolator509 =  OrientationInterpolator();
OrientationInterpolator509.setDEF(CString("Kick_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator509.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator509.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group500.addChild(&OrientationInterpolator509);

OrientationInterpolator& OrientationInterpolator510 =  OrientationInterpolator();
OrientationInterpolator510.setDEF(CString("Kick_r_shoulder_RollInterpolator"));
OrientationInterpolator510.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator510.setKeyValue(new float[]{0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0}, 24);
Group500.addChild(&OrientationInterpolator510);

OrientationInterpolator& OrientationInterpolator511 =  OrientationInterpolator();
OrientationInterpolator511.setDEF(CString("Kick_r_ForeArm_PitchInterpolator"));
OrientationInterpolator511.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator511.setKeyValue(new float[]{1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0}, 24);
Group500.addChild(&OrientationInterpolator511);

OrientationInterpolator& OrientationInterpolator512 =  OrientationInterpolator();
OrientationInterpolator512.setDEF(CString("Kick_r_wrist_RollInterpolator"));
OrientationInterpolator512.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator512.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group500.addChild(&OrientationInterpolator512);

OrientationInterpolator& OrientationInterpolator513 =  OrientationInterpolator();
OrientationInterpolator513.setDEF(CString("Kick_r_thumb1_PitchInterpolator"));
OrientationInterpolator513.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator513.setKeyValue(new float[]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0}, 24);
Group500.addChild(&OrientationInterpolator513);

OrientationInterpolator& OrientationInterpolator514 =  OrientationInterpolator();
OrientationInterpolator514.setDEF(CString("Kick_r_hip_PitchInterpolator"));
OrientationInterpolator514.setKey(new float[]{0,0.2,0.3,0.5,0.6,0.9,1}, 7);
OrientationInterpolator514.setKeyValue(new float[]{1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0}, 28);
Group500.addChild(&OrientationInterpolator514);

OrientationInterpolator& OrientationInterpolator515 =  OrientationInterpolator();
OrientationInterpolator515.setDEF(CString("Kick_r_knee_PitchInterpolator"));
OrientationInterpolator515.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator515.setKeyValue(new float[]{0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0}, 24);
Group500.addChild(&OrientationInterpolator515);

OrientationInterpolator& OrientationInterpolator516 =  OrientationInterpolator();
OrientationInterpolator516.setDEF(CString("Kick_l_hip_PitchInterpolator"));
OrientationInterpolator516.setKey(new float[]{0,0.2,0.3,0.5,0.6,0.9,1}, 7);
OrientationInterpolator516.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group500.addChild(&OrientationInterpolator516);

OrientationInterpolator& OrientationInterpolator517 =  OrientationInterpolator();
OrientationInterpolator517.setDEF(CString("Kick_l_knee_PitchInterpolator"));
OrientationInterpolator517.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator517.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group500.addChild(&OrientationInterpolator517);

OrientationInterpolator& OrientationInterpolator518 =  OrientationInterpolator();
OrientationInterpolator518.setDEF(CString("Kick_r_ankle_PitchInterpolator"));
OrientationInterpolator518.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator518.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0}, 24);
Group500.addChild(&OrientationInterpolator518);

OrientationInterpolator& OrientationInterpolator519 =  OrientationInterpolator();
OrientationInterpolator519.setDEF(CString("Kick_r_metatarsal_PitchInterpolator"));
OrientationInterpolator519.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator519.setKeyValue(new float[]{1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0}, 24);
Group500.addChild(&OrientationInterpolator519);

OrientationInterpolator& OrientationInterpolator520 =  OrientationInterpolator();
OrientationInterpolator520.setDEF(CString("Kick_sacroiliac_YawInterpolator"));
OrientationInterpolator520.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator520.setKeyValue(new float[]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0}, 24);
Group500.addChild(&OrientationInterpolator520);

OrientationInterpolator& OrientationInterpolator521 =  OrientationInterpolator();
OrientationInterpolator521.setDEF(CString("Kick_vl5_YawInterpolator"));
OrientationInterpolator521.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator521.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group500.addChild(&OrientationInterpolator521);

OrientationInterpolator& OrientationInterpolator522 =  OrientationInterpolator();
OrientationInterpolator522.setDEF(CString("Kick_vc6_YawInterpolator"));
OrientationInterpolator522.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator522.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group500.addChild(&OrientationInterpolator522);

OrientationInterpolator& OrientationInterpolator523 =  OrientationInterpolator();
OrientationInterpolator523.setDEF(CString("Kick_lower_body_RotationInterpolator"));
OrientationInterpolator523.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator523.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group500.addChild(&OrientationInterpolator523);

OrientationInterpolator& OrientationInterpolator524 =  OrientationInterpolator();
OrientationInterpolator524.setDEF(CString("Kick_upper_body_RotationInterpolator"));
OrientationInterpolator524.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator524.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group500.addChild(&OrientationInterpolator524);

OrientationInterpolator& OrientationInterpolator525 =  OrientationInterpolator();
OrientationInterpolator525.setDEF(CString("Kick_whole_body_RotationInterpolator"));
OrientationInterpolator525.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator525.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group500.addChild(&OrientationInterpolator525);

PositionInterpolator& PositionInterpolator526 =  PositionInterpolator();
PositionInterpolator526.setDEF(CString("Kick_whole_body_TranslationInterpolator"));
PositionInterpolator526.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator526.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0}, 9);
Group500.addChild(&PositionInterpolator526);

OrientationInterpolator& OrientationInterpolator527 =  OrientationInterpolator();
OrientationInterpolator527.setDEF(CString("Kick_neck_RotationInterpolator"));
OrientationInterpolator527.setKey(new float[]{0,0.25,0.55,1}, 4);
OrientationInterpolator527.setKeyValue(new float[]{0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0}, 16);
Group500.addChild(&OrientationInterpolator527);

Scene33.addChild(&Group500);

Group& Group528 =  Group();
Group528.setDEF(CString("Interface"));
Transform& Transform529 =  Transform();
Transform529.setDEF(CString("CoordinateSystemFloor"));
Transform529.setScale(new float[]{0.1,0.1,0.1});
Shape& Shape530 =  Shape();
Shape530.setDEF(CString("AxisLinesShape"));
IndexedLineSet& IndexedLineSet531 =  IndexedLineSet();
IndexedLineSet531.setColorPerVertex(False);
IndexedLineSet531.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet531.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
CColor& Color532 =  CColor();
Color532.setColor(new float[]{1,0,0,0,0.6,0,0,0,1}, 9);
IndexedLineSet531.setColor(&Color532);

Coordinate& Coordinate533 =  Coordinate();
Coordinate533.setPoint(new float[]{0,0,0,1,0,0,0,1,0,0,0,1}, 12);
IndexedLineSet531.setCoord(&Coordinate533);

Shape530.setGeometry(&IndexedLineSet531);

Transform529.addChild(&Shape530);

Group528.addChild(&Transform529);

ProximitySensor& ProximitySensor534 =  ProximitySensor();
ProximitySensor534.setDEF(CString("HudProx"));
ProximitySensor534.setSize(new float[]{50,50,50});
Group528.addChild(&ProximitySensor534);

Transform& Transform535 =  Transform();
Transform535.setDEF(CString("HudXform"));
Transform535.setTranslation(new float[]{2,1,2});
Transform535.setRotation(new float[]{0,1,0,0.78});
Transform& Transform536 =  Transform();
Transform536.setTranslation(new float[]{-0.4,-0.01,-0.75});
Transform536.setScale(new float[]{0.02,0.02,0.02});
Transform& Transform537 =  Transform();
Transform537.setDEF(CString("Stand_Text"));
Transform537.setTranslation(new float[]{0,-0.9,0});
TouchSensor& TouchSensor538 =  TouchSensor();
TouchSensor538.setDEF(CString("Stand_Touch"));
Transform537.addChild(&TouchSensor538);

Shape& Shape539 =  Shape();
Shape539.setDEF(CString("StandText"));
Appearance& Appearance540 =  Appearance();
Material& Material541 =  Material();
Material541.setDEF(CString("text_color"));
Material541.setAmbientIntensity(1);
Material541.setDiffuseColor(new float[]{0.819,0.521,0.169});
Material541.setSpecularColor(new float[]{0.819,0.521,0.169});
Material541.setEmissiveColor(new float[]{0.819,0.521,0.169});
Appearance540.addChild(&Material541);

Shape539.addChild(&Appearance540);

Text& Text542 =  Text();
Text542.setString(new CString[]{CString("Stand")}, 1);
CFontStyle& FontStyle543 =  CFontStyle();
FontStyle543.setFamily(new CString[]{CString("SANS")}, 1);
Text542.setFontStyle(&FontStyle543);

Shape539.setGeometry(&Text542);

Transform537.addChild(&Shape539);

Shape& Shape544 =  Shape();
Shape544.setDEF(CString("Stand_Back"));
Appearance& Appearance545 =  Appearance();
Material& Material546 =  Material();
Material546.setDEF(CString("Clear"));
Material546.setAmbientIntensity(1);
Material546.setDiffuseColor(new float[]{0,0.5,0});
Material546.setEmissiveColor(new float[]{0,0.5,0});
Material546.setTransparency(0.8);
Appearance545.addChild(&Material546);

Shape544.addChild(&Appearance545);

IndexedFaceSet& IndexedFaceSet547 =  IndexedFaceSet();
IndexedFaceSet547.setDEF(CString("Backing"));
IndexedFaceSet547.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate548 =  Coordinate();
Coordinate548.setPoint(new float[]{-0.2,-0.25,-0.01,3,-0.25,-0.01,3,1,-0.01,-0.2,1,-0.01}, 12);
IndexedFaceSet547.setCoord(&Coordinate548);

Shape544.setGeometry(&IndexedFaceSet547);

Transform537.addChild(&Shape544);

Transform536.addChild(&Transform537);

Transform& Transform549 =  Transform();
Transform549.setDEF(CString("Pitch_Text"));
Transform549.setTranslation(new float[]{0,-2.4,0});
TouchSensor& TouchSensor550 =  TouchSensor();
TouchSensor550.setDEF(CString("Pitch_Touch"));
Transform549.addChild(&TouchSensor550);

Shape& Shape551 =  Shape();
Shape551.setDEF(CString("PitchText"));
Appearance& Appearance552 =  Appearance();
Material& Material553 =  Material();
Material553.setUSE(CString("text_color"));
Appearance552.addChild(&Material553);

Shape551.addChild(&Appearance552);

Text& Text554 =  Text();
Text554.setString(new CString[]{CString("Pitch")}, 1);
CFontStyle& FontStyle555 =  CFontStyle();
FontStyle555.setFamily(new CString[]{CString("SANS")}, 1);
Text554.setFontStyle(&FontStyle555);

Shape551.setGeometry(&Text554);

Transform549.addChild(&Shape551);

Shape& Shape556 =  Shape();
Shape556.setDEF(CString("Pitch_Back"));
Appearance& Appearance557 =  Appearance();
Material& Material558 =  Material();
Material558.setUSE(CString("Clear"));
Appearance557.addChild(&Material558);

Shape556.addChild(&Appearance557);

IndexedFaceSet& IndexedFaceSet559 =  IndexedFaceSet();
IndexedFaceSet559.setUSE(CString("Backing"));
Shape556.setGeometry(&IndexedFaceSet559);

Transform549.addChild(&Shape556);

Transform536.addChild(&Transform549);

Transform& Transform560 =  Transform();
Transform560.setDEF(CString("Yaw_Text"));
Transform560.setTranslation(new float[]{0,-3.8,0});
TouchSensor& TouchSensor561 =  TouchSensor();
TouchSensor561.setDEF(CString("Yaw_Touch"));
Transform560.addChild(&TouchSensor561);

Shape& Shape562 =  Shape();
Shape562.setDEF(CString("YawText"));
Appearance& Appearance563 =  Appearance();
Material& Material564 =  Material();
Material564.setUSE(CString("text_color"));
Appearance563.addChild(&Material564);

Shape562.addChild(&Appearance563);

Text& Text565 =  Text();
Text565.setString(new CString[]{CString("Yaw")}, 1);
CFontStyle& FontStyle566 =  CFontStyle();
FontStyle566.setFamily(new CString[]{CString("SANS")}, 1);
Text565.setFontStyle(&FontStyle566);

Shape562.setGeometry(&Text565);

Transform560.addChild(&Shape562);

Shape& Shape567 =  Shape();
Shape567.setDEF(CString("Yaw_Back"));
Appearance& Appearance568 =  Appearance();
Material& Material569 =  Material();
Material569.setUSE(CString("Clear"));
Appearance568.addChild(&Material569);

Shape567.addChild(&Appearance568);

IndexedFaceSet& IndexedFaceSet570 =  IndexedFaceSet();
IndexedFaceSet570.setUSE(CString("Backing"));
Shape567.setGeometry(&IndexedFaceSet570);

Transform560.addChild(&Shape567);

Transform536.addChild(&Transform560);

Transform& Transform571 =  Transform();
Transform571.setDEF(CString("Roll_Text"));
Transform571.setTranslation(new float[]{0,-5.2,0});
TouchSensor& TouchSensor572 =  TouchSensor();
TouchSensor572.setDEF(CString("Roll_Touch"));
Transform571.addChild(&TouchSensor572);

Shape& Shape573 =  Shape();
Shape573.setDEF(CString("RollText"));
Appearance& Appearance574 =  Appearance();
Material& Material575 =  Material();
Material575.setUSE(CString("text_color"));
Appearance574.addChild(&Material575);

Shape573.addChild(&Appearance574);

Text& Text576 =  Text();
Text576.setString(new CString[]{CString("Roll")}, 1);
CFontStyle& FontStyle577 =  CFontStyle();
FontStyle577.setFamily(new CString[]{CString("SANS")}, 1);
Text576.setFontStyle(&FontStyle577);

Shape573.setGeometry(&Text576);

Transform571.addChild(&Shape573);

Shape& Shape578 =  Shape();
Shape578.setDEF(CString("Roll_Back"));
Appearance& Appearance579 =  Appearance();
Material& Material580 =  Material();
Material580.setUSE(CString("Clear"));
Appearance579.addChild(&Material580);

Shape578.addChild(&Appearance579);

IndexedFaceSet& IndexedFaceSet581 =  IndexedFaceSet();
IndexedFaceSet581.setUSE(CString("Backing"));
Shape578.setGeometry(&IndexedFaceSet581);

Transform571.addChild(&Shape578);

Transform536.addChild(&Transform571);

Transform& Transform582 =  Transform();
Transform582.setDEF(CString("Walk_Text"));
Transform582.setTranslation(new float[]{0,-6.6,0});
TouchSensor& TouchSensor583 =  TouchSensor();
TouchSensor583.setDEF(CString("Walk_Touch"));
Transform582.addChild(&TouchSensor583);

Shape& Shape584 =  Shape();
Shape584.setDEF(CString("WalkText"));
Appearance& Appearance585 =  Appearance();
Material& Material586 =  Material();
Material586.setUSE(CString("text_color"));
Appearance585.addChild(&Material586);

Shape584.addChild(&Appearance585);

Text& Text587 =  Text();
Text587.setString(new CString[]{CString("Walk")}, 1);
CFontStyle& FontStyle588 =  CFontStyle();
FontStyle588.setFamily(new CString[]{CString("SANS")}, 1);
Text587.setFontStyle(&FontStyle588);

Shape584.setGeometry(&Text587);

Transform582.addChild(&Shape584);

Shape& Shape589 =  Shape();
Shape589.setDEF(CString("Walk_Back"));
Appearance& Appearance590 =  Appearance();
Material& Material591 =  Material();
Material591.setUSE(CString("Clear"));
Appearance590.addChild(&Material591);

Shape589.addChild(&Appearance590);

IndexedFaceSet& IndexedFaceSet592 =  IndexedFaceSet();
IndexedFaceSet592.setUSE(CString("Backing"));
Shape589.setGeometry(&IndexedFaceSet592);

Transform582.addChild(&Shape589);

Transform536.addChild(&Transform582);

Transform& Transform593 =  Transform();
Transform593.setDEF(CString("Run_Text"));
Transform593.setTranslation(new float[]{0,-8,0});
TouchSensor& TouchSensor594 =  TouchSensor();
TouchSensor594.setDEF(CString("Run_Touch"));
Transform593.addChild(&TouchSensor594);

Shape& Shape595 =  Shape();
Shape595.setDEF(CString("RunText"));
Appearance& Appearance596 =  Appearance();
Material& Material597 =  Material();
Material597.setUSE(CString("text_color"));
Appearance596.addChild(&Material597);

Shape595.addChild(&Appearance596);

Text& Text598 =  Text();
Text598.setString(new CString[]{CString("Run")}, 1);
CFontStyle& FontStyle599 =  CFontStyle();
FontStyle599.setFamily(new CString[]{CString("SANS")}, 1);
Text598.setFontStyle(&FontStyle599);

Shape595.setGeometry(&Text598);

Transform593.addChild(&Shape595);

Shape& Shape600 =  Shape();
Shape600.setDEF(CString("Run_Back"));
Appearance& Appearance601 =  Appearance();
Material& Material602 =  Material();
Material602.setUSE(CString("Clear"));
Appearance601.addChild(&Material602);

Shape600.addChild(&Appearance601);

IndexedFaceSet& IndexedFaceSet603 =  IndexedFaceSet();
IndexedFaceSet603.setUSE(CString("Backing"));
Shape600.setGeometry(&IndexedFaceSet603);

Transform593.addChild(&Shape600);

Transform536.addChild(&Transform593);

Transform& Transform604 =  Transform();
Transform604.setDEF(CString("Jump_Text"));
Transform604.setTranslation(new float[]{0,-9.4,0});
TouchSensor& TouchSensor605 =  TouchSensor();
TouchSensor605.setDEF(CString("Jump_Touch"));
Transform604.addChild(&TouchSensor605);

Shape& Shape606 =  Shape();
Shape606.setDEF(CString("JumpText"));
Appearance& Appearance607 =  Appearance();
Material& Material608 =  Material();
Material608.setUSE(CString("text_color"));
Appearance607.addChild(&Material608);

Shape606.addChild(&Appearance607);

Text& Text609 =  Text();
Text609.setString(new CString[]{CString("Jump")}, 1);
CFontStyle& FontStyle610 =  CFontStyle();
FontStyle610.setFamily(new CString[]{CString("SANS")}, 1);
Text609.setFontStyle(&FontStyle610);

Shape606.setGeometry(&Text609);

Transform604.addChild(&Shape606);

Shape& Shape611 =  Shape();
Shape611.setDEF(CString("Jump_Back"));
Appearance& Appearance612 =  Appearance();
Material& Material613 =  Material();
Material613.setUSE(CString("Clear"));
Appearance612.addChild(&Material613);

Shape611.addChild(&Appearance612);

IndexedFaceSet& IndexedFaceSet614 =  IndexedFaceSet();
IndexedFaceSet614.setUSE(CString("Backing"));
Shape611.setGeometry(&IndexedFaceSet614);

Transform604.addChild(&Shape611);

Transform536.addChild(&Transform604);

Transform& Transform615 =  Transform();
Transform615.setDEF(CString("Kick_Text"));
Transform615.setTranslation(new float[]{0,-10.8,0});
TouchSensor& TouchSensor616 =  TouchSensor();
TouchSensor616.setDEF(CString("Kick_Touch"));
Transform615.addChild(&TouchSensor616);

Shape& Shape617 =  Shape();
Shape617.setDEF(CString("KickText"));
Appearance& Appearance618 =  Appearance();
Material& Material619 =  Material();
Material619.setUSE(CString("text_color"));
Appearance618.addChild(&Material619);

Shape617.addChild(&Appearance618);

Text& Text620 =  Text();
Text620.setString(new CString[]{CString("Kick")}, 1);
CFontStyle& FontStyle621 =  CFontStyle();
FontStyle621.setFamily(new CString[]{CString("SANS")}, 1);
Text620.setFontStyle(&FontStyle621);

Shape617.setGeometry(&Text620);

Transform615.addChild(&Shape617);

Shape& Shape622 =  Shape();
Shape622.setDEF(CString("Kick_Back"));
Appearance& Appearance623 =  Appearance();
Material& Material624 =  Material();
Material624.setUSE(CString("Clear"));
Appearance623.addChild(&Material624);

Shape622.addChild(&Appearance623);

IndexedFaceSet& IndexedFaceSet625 =  IndexedFaceSet();
IndexedFaceSet625.setUSE(CString("Backing"));
Shape622.setGeometry(&IndexedFaceSet625);

Transform615.addChild(&Shape622);

Transform536.addChild(&Transform615);

Transform& Transform626 =  Transform();
Transform626.setDEF(CString("Stop_Text"));
Transform626.setTranslation(new float[]{0,0.4,0});
TouchSensor& TouchSensor627 =  TouchSensor();
TouchSensor627.setDEF(CString("Stop_Touch"));
Transform626.addChild(&TouchSensor627);

Shape& Shape628 =  Shape();
Shape628.setDEF(CString("StopText"));
Appearance& Appearance629 =  Appearance();
Material& Material630 =  Material();
Material630.setUSE(CString("text_color"));
Appearance629.addChild(&Material630);

Shape628.addChild(&Appearance629);

Text& Text631 =  Text();
Text631.setString(new CString[]{CString("Default")}, 1);
CFontStyle& FontStyle632 =  CFontStyle();
FontStyle632.setFamily(new CString[]{CString("SANS")}, 1);
Text631.setFontStyle(&FontStyle632);

Shape628.setGeometry(&Text631);

Transform626.addChild(&Shape628);

Shape& Shape633 =  Shape();
Shape633.setDEF(CString("Stop_Back"));
Appearance& Appearance634 =  Appearance();
Material& Material635 =  Material();
Material635.setUSE(CString("Clear"));
Appearance634.addChild(&Material635);

Shape633.addChild(&Appearance634);

IndexedFaceSet& IndexedFaceSet636 =  IndexedFaceSet();
IndexedFaceSet636.setUSE(CString("Backing"));
Shape633.setGeometry(&IndexedFaceSet636);

Transform626.addChild(&Shape633);

Transform536.addChild(&Transform626);

Transform& Transform637 =  Transform();
Transform637.setDEF(CString("SceneLabel"));
Transform637.setTranslation(new float[]{1.3,3,0});
Shape& Shape638 =  Shape();
Shape638.setDEF(CString("SceneLabelText"));
Appearance& Appearance639 =  Appearance();
Material& Material640 =  Material();
Material640.setUSE(CString("text_color"));
Appearance639.addChild(&Material640);

Shape638.addChild(&Appearance639);

Text& Text641 =  Text();
Text641.setString(new CString[]{CString("BoxMan3"), CString("Animation")}, 2);
CFontStyle& FontStyle642 =  CFontStyle();
FontStyle642.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle642.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text641.setFontStyle(&FontStyle642);

Shape638.setGeometry(&Text641);

Transform637.addChild(&Shape638);

Transform536.addChild(&Transform637);

Transform535.addChild(&Transform536);

Group528.addChild(&Transform535);

Scene33.addChild(&Group528);

ROUTE& ROUTE643 =  ROUTE();
ROUTE643.setFromNode(CString("StopTimer"));
ROUTE643.setFromField(CString("fraction_changed"));
ROUTE643.setToNode(CString("Stop_humanoid_root_TranslationInterpolator"));
ROUTE643.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE643);

ROUTE& ROUTE644 =  ROUTE();
ROUTE644.setFromNode(CString("StopTimer"));
ROUTE644.setFromField(CString("fraction_changed"));
ROUTE644.setToNode(CString("Stop_humanoid_root_RotationInterpolator"));
ROUTE644.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE644);

ROUTE& ROUTE645 =  ROUTE();
ROUTE645.setFromNode(CString("StopTimer"));
ROUTE645.setFromField(CString("fraction_changed"));
ROUTE645.setToNode(CString("Stop_sacroiliac_RotationInterpolator"));
ROUTE645.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE645);

ROUTE& ROUTE646 =  ROUTE();
ROUTE646.setFromNode(CString("StopTimer"));
ROUTE646.setFromField(CString("fraction_changed"));
ROUTE646.setToNode(CString("Stop_l_hip_RotationInterpolator"));
ROUTE646.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE646);

ROUTE& ROUTE647 =  ROUTE();
ROUTE647.setFromNode(CString("StopTimer"));
ROUTE647.setFromField(CString("fraction_changed"));
ROUTE647.setToNode(CString("Stop_l_knee_RotationInterpolator"));
ROUTE647.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE647);

ROUTE& ROUTE648 =  ROUTE();
ROUTE648.setFromNode(CString("StopTimer"));
ROUTE648.setFromField(CString("fraction_changed"));
ROUTE648.setToNode(CString("Stop_l_ankle_RotationInterpolator"));
ROUTE648.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE648);

ROUTE& ROUTE649 =  ROUTE();
ROUTE649.setFromNode(CString("StopTimer"));
ROUTE649.setFromField(CString("fraction_changed"));
ROUTE649.setToNode(CString("Stop_l_subtalar_RotationInterpolator"));
ROUTE649.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE649);

ROUTE& ROUTE650 =  ROUTE();
ROUTE650.setFromNode(CString("StopTimer"));
ROUTE650.setFromField(CString("fraction_changed"));
ROUTE650.setToNode(CString("Stop_l_midtarsal_RotationInterpolator"));
ROUTE650.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE650);

ROUTE& ROUTE651 =  ROUTE();
ROUTE651.setFromNode(CString("StopTimer"));
ROUTE651.setFromField(CString("fraction_changed"));
ROUTE651.setToNode(CString("Stop_l_metatarsal_RotationInterpolator"));
ROUTE651.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE651);

ROUTE& ROUTE652 =  ROUTE();
ROUTE652.setFromNode(CString("StopTimer"));
ROUTE652.setFromField(CString("fraction_changed"));
ROUTE652.setToNode(CString("Stop_r_hip_RotationInterpolator"));
ROUTE652.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE652);

ROUTE& ROUTE653 =  ROUTE();
ROUTE653.setFromNode(CString("StopTimer"));
ROUTE653.setFromField(CString("fraction_changed"));
ROUTE653.setToNode(CString("Stop_r_knee_RotationInterpolator"));
ROUTE653.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE653);

ROUTE& ROUTE654 =  ROUTE();
ROUTE654.setFromNode(CString("StopTimer"));
ROUTE654.setFromField(CString("fraction_changed"));
ROUTE654.setToNode(CString("Stop_r_ankle_RotationInterpolator"));
ROUTE654.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE654);

ROUTE& ROUTE655 =  ROUTE();
ROUTE655.setFromNode(CString("StopTimer"));
ROUTE655.setFromField(CString("fraction_changed"));
ROUTE655.setToNode(CString("Stop_r_subtalar_RotationInterpolator"));
ROUTE655.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE655);

ROUTE& ROUTE656 =  ROUTE();
ROUTE656.setFromNode(CString("StopTimer"));
ROUTE656.setFromField(CString("fraction_changed"));
ROUTE656.setToNode(CString("Stop_r_midtarsal_RotationInterpolator"));
ROUTE656.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE656);

ROUTE& ROUTE657 =  ROUTE();
ROUTE657.setFromNode(CString("StopTimer"));
ROUTE657.setFromField(CString("fraction_changed"));
ROUTE657.setToNode(CString("Stop_r_metatarsal_RotationInterpolator"));
ROUTE657.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE657);

ROUTE& ROUTE658 =  ROUTE();
ROUTE658.setFromNode(CString("StopTimer"));
ROUTE658.setFromField(CString("fraction_changed"));
ROUTE658.setToNode(CString("Stop_vl5_RotationInterpolator"));
ROUTE658.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE658);

ROUTE& ROUTE659 =  ROUTE();
ROUTE659.setFromNode(CString("StopTimer"));
ROUTE659.setFromField(CString("fraction_changed"));
ROUTE659.setToNode(CString("Stop_vl4_RotationInterpolator"));
ROUTE659.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE659);

ROUTE& ROUTE660 =  ROUTE();
ROUTE660.setFromNode(CString("StopTimer"));
ROUTE660.setFromField(CString("fraction_changed"));
ROUTE660.setToNode(CString("Stop_vl3_RotationInterpolator"));
ROUTE660.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE660);

ROUTE& ROUTE661 =  ROUTE();
ROUTE661.setFromNode(CString("StopTimer"));
ROUTE661.setFromField(CString("fraction_changed"));
ROUTE661.setToNode(CString("Stop_vl2_RotationInterpolator"));
ROUTE661.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE661);

ROUTE& ROUTE662 =  ROUTE();
ROUTE662.setFromNode(CString("StopTimer"));
ROUTE662.setFromField(CString("fraction_changed"));
ROUTE662.setToNode(CString("Stop_vl1_RotationInterpolator"));
ROUTE662.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE662);

ROUTE& ROUTE663 =  ROUTE();
ROUTE663.setFromNode(CString("StopTimer"));
ROUTE663.setFromField(CString("fraction_changed"));
ROUTE663.setToNode(CString("Stop_vt12_RotationInterpolator"));
ROUTE663.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE663);

ROUTE& ROUTE664 =  ROUTE();
ROUTE664.setFromNode(CString("StopTimer"));
ROUTE664.setFromField(CString("fraction_changed"));
ROUTE664.setToNode(CString("Stop_vt11_RotationInterpolator"));
ROUTE664.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE664);

ROUTE& ROUTE665 =  ROUTE();
ROUTE665.setFromNode(CString("StopTimer"));
ROUTE665.setFromField(CString("fraction_changed"));
ROUTE665.setToNode(CString("Stop_vt10_RotationInterpolator"));
ROUTE665.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE665);

ROUTE& ROUTE666 =  ROUTE();
ROUTE666.setFromNode(CString("StopTimer"));
ROUTE666.setFromField(CString("fraction_changed"));
ROUTE666.setToNode(CString("Stop_vt9_RotationInterpolator"));
ROUTE666.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE666);

ROUTE& ROUTE667 =  ROUTE();
ROUTE667.setFromNode(CString("StopTimer"));
ROUTE667.setFromField(CString("fraction_changed"));
ROUTE667.setToNode(CString("Stop_vt8_RotationInterpolator"));
ROUTE667.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE667);

ROUTE& ROUTE668 =  ROUTE();
ROUTE668.setFromNode(CString("StopTimer"));
ROUTE668.setFromField(CString("fraction_changed"));
ROUTE668.setToNode(CString("Stop_vt7_RotationInterpolator"));
ROUTE668.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE668);

ROUTE& ROUTE669 =  ROUTE();
ROUTE669.setFromNode(CString("StopTimer"));
ROUTE669.setFromField(CString("fraction_changed"));
ROUTE669.setToNode(CString("Stop_vt6_RotationInterpolator"));
ROUTE669.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE669);

ROUTE& ROUTE670 =  ROUTE();
ROUTE670.setFromNode(CString("StopTimer"));
ROUTE670.setFromField(CString("fraction_changed"));
ROUTE670.setToNode(CString("Stop_vt5_RotationInterpolator"));
ROUTE670.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE670);

ROUTE& ROUTE671 =  ROUTE();
ROUTE671.setFromNode(CString("StopTimer"));
ROUTE671.setFromField(CString("fraction_changed"));
ROUTE671.setToNode(CString("Stop_vt4_RotationInterpolator"));
ROUTE671.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE671);

ROUTE& ROUTE672 =  ROUTE();
ROUTE672.setFromNode(CString("StopTimer"));
ROUTE672.setFromField(CString("fraction_changed"));
ROUTE672.setToNode(CString("Stop_vt3_RotationInterpolator"));
ROUTE672.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE672);

ROUTE& ROUTE673 =  ROUTE();
ROUTE673.setFromNode(CString("StopTimer"));
ROUTE673.setFromField(CString("fraction_changed"));
ROUTE673.setToNode(CString("Stop_vt2_RotationInterpolator"));
ROUTE673.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE673);

ROUTE& ROUTE674 =  ROUTE();
ROUTE674.setFromNode(CString("StopTimer"));
ROUTE674.setFromField(CString("fraction_changed"));
ROUTE674.setToNode(CString("Stop_vt1_RotationInterpolator"));
ROUTE674.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE674);

ROUTE& ROUTE675 =  ROUTE();
ROUTE675.setFromNode(CString("StopTimer"));
ROUTE675.setFromField(CString("fraction_changed"));
ROUTE675.setToNode(CString("Stop_vc7_RotationInterpolator"));
ROUTE675.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE675);

ROUTE& ROUTE676 =  ROUTE();
ROUTE676.setFromNode(CString("StopTimer"));
ROUTE676.setFromField(CString("fraction_changed"));
ROUTE676.setToNode(CString("Stop_vc6_RotationInterpolator"));
ROUTE676.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE676);

ROUTE& ROUTE677 =  ROUTE();
ROUTE677.setFromNode(CString("StopTimer"));
ROUTE677.setFromField(CString("fraction_changed"));
ROUTE677.setToNode(CString("Stop_vc5_RotationInterpolator"));
ROUTE677.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE677);

ROUTE& ROUTE678 =  ROUTE();
ROUTE678.setFromNode(CString("StopTimer"));
ROUTE678.setFromField(CString("fraction_changed"));
ROUTE678.setToNode(CString("Stop_vc4_RotationInterpolator"));
ROUTE678.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE678);

ROUTE& ROUTE679 =  ROUTE();
ROUTE679.setFromNode(CString("StopTimer"));
ROUTE679.setFromField(CString("fraction_changed"));
ROUTE679.setToNode(CString("Stop_vc3_RotationInterpolator"));
ROUTE679.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE679);

ROUTE& ROUTE680 =  ROUTE();
ROUTE680.setFromNode(CString("StopTimer"));
ROUTE680.setFromField(CString("fraction_changed"));
ROUTE680.setToNode(CString("Stop_vc2_RotationInterpolator"));
ROUTE680.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE680);

ROUTE& ROUTE681 =  ROUTE();
ROUTE681.setFromNode(CString("StopTimer"));
ROUTE681.setFromField(CString("fraction_changed"));
ROUTE681.setToNode(CString("Stop_vc1_RotationInterpolator"));
ROUTE681.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE681);

ROUTE& ROUTE682 =  ROUTE();
ROUTE682.setFromNode(CString("StopTimer"));
ROUTE682.setFromField(CString("fraction_changed"));
ROUTE682.setToNode(CString("Stop_skullbase_RotationInterpolator"));
ROUTE682.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE682);

ROUTE& ROUTE683 =  ROUTE();
ROUTE683.setFromNode(CString("StopTimer"));
ROUTE683.setFromField(CString("fraction_changed"));
ROUTE683.setToNode(CString("Stop_l_eyeball_joint_RotationInterpolator"));
ROUTE683.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE683);

ROUTE& ROUTE684 =  ROUTE();
ROUTE684.setFromNode(CString("StopTimer"));
ROUTE684.setFromField(CString("fraction_changed"));
ROUTE684.setToNode(CString("Stop_r_eyeball_joint_RotationInterpolator"));
ROUTE684.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE684);

ROUTE& ROUTE685 =  ROUTE();
ROUTE685.setFromNode(CString("StopTimer"));
ROUTE685.setFromField(CString("fraction_changed"));
ROUTE685.setToNode(CString("Stop_l_sternoclavicular_RotationInterpolator"));
ROUTE685.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE685);

ROUTE& ROUTE686 =  ROUTE();
ROUTE686.setFromNode(CString("StopTimer"));
ROUTE686.setFromField(CString("fraction_changed"));
ROUTE686.setToNode(CString("Stop_l_acromioclavicular_RotationInterpolator"));
ROUTE686.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE686);

ROUTE& ROUTE687 =  ROUTE();
ROUTE687.setFromNode(CString("StopTimer"));
ROUTE687.setFromField(CString("fraction_changed"));
ROUTE687.setToNode(CString("Stop_l_shoulder_RotationInterpolator"));
ROUTE687.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE687);

ROUTE& ROUTE688 =  ROUTE();
ROUTE688.setFromNode(CString("StopTimer"));
ROUTE688.setFromField(CString("fraction_changed"));
ROUTE688.setToNode(CString("Stop_l_elbow_RotationInterpolator"));
ROUTE688.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE688);

ROUTE& ROUTE689 =  ROUTE();
ROUTE689.setFromNode(CString("StopTimer"));
ROUTE689.setFromField(CString("fraction_changed"));
ROUTE689.setToNode(CString("Stop_l_wrist_RotationInterpolator"));
ROUTE689.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE689);

ROUTE& ROUTE690 =  ROUTE();
ROUTE690.setFromNode(CString("StopTimer"));
ROUTE690.setFromField(CString("fraction_changed"));
ROUTE690.setToNode(CString("Stop_l_thumb1_RotationInterpolator"));
ROUTE690.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE690);

ROUTE& ROUTE691 =  ROUTE();
ROUTE691.setFromNode(CString("StopTimer"));
ROUTE691.setFromField(CString("fraction_changed"));
ROUTE691.setToNode(CString("Stop_l_thumb2_RotationInterpolator"));
ROUTE691.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE691);

ROUTE& ROUTE692 =  ROUTE();
ROUTE692.setFromNode(CString("StopTimer"));
ROUTE692.setFromField(CString("fraction_changed"));
ROUTE692.setToNode(CString("Stop_l_thumb3_RotationInterpolator"));
ROUTE692.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE692);

ROUTE& ROUTE693 =  ROUTE();
ROUTE693.setFromNode(CString("StopTimer"));
ROUTE693.setFromField(CString("fraction_changed"));
ROUTE693.setToNode(CString("Stop_l_index0_RotationInterpolator"));
ROUTE693.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE693);

ROUTE& ROUTE694 =  ROUTE();
ROUTE694.setFromNode(CString("StopTimer"));
ROUTE694.setFromField(CString("fraction_changed"));
ROUTE694.setToNode(CString("Stop_l_index1_RotationInterpolator"));
ROUTE694.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE694);

ROUTE& ROUTE695 =  ROUTE();
ROUTE695.setFromNode(CString("StopTimer"));
ROUTE695.setFromField(CString("fraction_changed"));
ROUTE695.setToNode(CString("Stop_l_index2_RotationInterpolator"));
ROUTE695.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE695);

ROUTE& ROUTE696 =  ROUTE();
ROUTE696.setFromNode(CString("StopTimer"));
ROUTE696.setFromField(CString("fraction_changed"));
ROUTE696.setToNode(CString("Stop_l_index3_RotationInterpolator"));
ROUTE696.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE696);

ROUTE& ROUTE697 =  ROUTE();
ROUTE697.setFromNode(CString("StopTimer"));
ROUTE697.setFromField(CString("fraction_changed"));
ROUTE697.setToNode(CString("Stop_l_middle0_RotationInterpolator"));
ROUTE697.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE697);

ROUTE& ROUTE698 =  ROUTE();
ROUTE698.setFromNode(CString("StopTimer"));
ROUTE698.setFromField(CString("fraction_changed"));
ROUTE698.setToNode(CString("Stop_l_middle1_RotationInterpolator"));
ROUTE698.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE698);

ROUTE& ROUTE699 =  ROUTE();
ROUTE699.setFromNode(CString("StopTimer"));
ROUTE699.setFromField(CString("fraction_changed"));
ROUTE699.setToNode(CString("Stop_l_middle2_RotationInterpolator"));
ROUTE699.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE699);

ROUTE& ROUTE700 =  ROUTE();
ROUTE700.setFromNode(CString("StopTimer"));
ROUTE700.setFromField(CString("fraction_changed"));
ROUTE700.setToNode(CString("Stop_l_middle3_RotationInterpolator"));
ROUTE700.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE700);

ROUTE& ROUTE701 =  ROUTE();
ROUTE701.setFromNode(CString("StopTimer"));
ROUTE701.setFromField(CString("fraction_changed"));
ROUTE701.setToNode(CString("Stop_l_ring0_RotationInterpolator"));
ROUTE701.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE701);

ROUTE& ROUTE702 =  ROUTE();
ROUTE702.setFromNode(CString("StopTimer"));
ROUTE702.setFromField(CString("fraction_changed"));
ROUTE702.setToNode(CString("Stop_l_ring1_RotationInterpolator"));
ROUTE702.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE702);

ROUTE& ROUTE703 =  ROUTE();
ROUTE703.setFromNode(CString("StopTimer"));
ROUTE703.setFromField(CString("fraction_changed"));
ROUTE703.setToNode(CString("Stop_l_ring2_RotationInterpolator"));
ROUTE703.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE703);

ROUTE& ROUTE704 =  ROUTE();
ROUTE704.setFromNode(CString("StopTimer"));
ROUTE704.setFromField(CString("fraction_changed"));
ROUTE704.setToNode(CString("Stop_l_ring3_RotationInterpolator"));
ROUTE704.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE704);

ROUTE& ROUTE705 =  ROUTE();
ROUTE705.setFromNode(CString("StopTimer"));
ROUTE705.setFromField(CString("fraction_changed"));
ROUTE705.setToNode(CString("Stop_l_pinky0_RotationInterpolator"));
ROUTE705.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE705);

ROUTE& ROUTE706 =  ROUTE();
ROUTE706.setFromNode(CString("StopTimer"));
ROUTE706.setFromField(CString("fraction_changed"));
ROUTE706.setToNode(CString("Stop_l_pinky1_RotationInterpolator"));
ROUTE706.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE706);

ROUTE& ROUTE707 =  ROUTE();
ROUTE707.setFromNode(CString("StopTimer"));
ROUTE707.setFromField(CString("fraction_changed"));
ROUTE707.setToNode(CString("Stop_l_pinky2_RotationInterpolator"));
ROUTE707.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE707);

ROUTE& ROUTE708 =  ROUTE();
ROUTE708.setFromNode(CString("StopTimer"));
ROUTE708.setFromField(CString("fraction_changed"));
ROUTE708.setToNode(CString("Stop_l_pinky3_RotationInterpolator"));
ROUTE708.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE708);

ROUTE& ROUTE709 =  ROUTE();
ROUTE709.setFromNode(CString("StopTimer"));
ROUTE709.setFromField(CString("fraction_changed"));
ROUTE709.setToNode(CString("Stop_r_sternoclavicular_RotationInterpolator"));
ROUTE709.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE709);

ROUTE& ROUTE710 =  ROUTE();
ROUTE710.setFromNode(CString("StopTimer"));
ROUTE710.setFromField(CString("fraction_changed"));
ROUTE710.setToNode(CString("Stop_r_acromioclavicular_RotationInterpolator"));
ROUTE710.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE710);

ROUTE& ROUTE711 =  ROUTE();
ROUTE711.setFromNode(CString("StopTimer"));
ROUTE711.setFromField(CString("fraction_changed"));
ROUTE711.setToNode(CString("Stop_r_shoulder_RotationInterpolator"));
ROUTE711.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE711);

ROUTE& ROUTE712 =  ROUTE();
ROUTE712.setFromNode(CString("StopTimer"));
ROUTE712.setFromField(CString("fraction_changed"));
ROUTE712.setToNode(CString("Stop_r_elbow_RotationInterpolator"));
ROUTE712.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE712);

ROUTE& ROUTE713 =  ROUTE();
ROUTE713.setFromNode(CString("StopTimer"));
ROUTE713.setFromField(CString("fraction_changed"));
ROUTE713.setToNode(CString("Stop_r_wrist_RotationInterpolator"));
ROUTE713.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE713);

ROUTE& ROUTE714 =  ROUTE();
ROUTE714.setFromNode(CString("StopTimer"));
ROUTE714.setFromField(CString("fraction_changed"));
ROUTE714.setToNode(CString("Stop_r_thumb1_RotationInterpolator"));
ROUTE714.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE714);

ROUTE& ROUTE715 =  ROUTE();
ROUTE715.setFromNode(CString("StopTimer"));
ROUTE715.setFromField(CString("fraction_changed"));
ROUTE715.setToNode(CString("Stop_r_thumb2_RotationInterpolator"));
ROUTE715.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE715);

ROUTE& ROUTE716 =  ROUTE();
ROUTE716.setFromNode(CString("StopTimer"));
ROUTE716.setFromField(CString("fraction_changed"));
ROUTE716.setToNode(CString("Stop_r_thumb3_RotationInterpolator"));
ROUTE716.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE716);

ROUTE& ROUTE717 =  ROUTE();
ROUTE717.setFromNode(CString("StopTimer"));
ROUTE717.setFromField(CString("fraction_changed"));
ROUTE717.setToNode(CString("Stop_r_index0_RotationInterpolator"));
ROUTE717.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE717);

ROUTE& ROUTE718 =  ROUTE();
ROUTE718.setFromNode(CString("StopTimer"));
ROUTE718.setFromField(CString("fraction_changed"));
ROUTE718.setToNode(CString("Stop_r_index1_RotationInterpolator"));
ROUTE718.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE718);

ROUTE& ROUTE719 =  ROUTE();
ROUTE719.setFromNode(CString("StopTimer"));
ROUTE719.setFromField(CString("fraction_changed"));
ROUTE719.setToNode(CString("Stop_r_index2_RotationInterpolator"));
ROUTE719.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE719);

ROUTE& ROUTE720 =  ROUTE();
ROUTE720.setFromNode(CString("StopTimer"));
ROUTE720.setFromField(CString("fraction_changed"));
ROUTE720.setToNode(CString("Stop_r_index3_RotationInterpolator"));
ROUTE720.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE720);

ROUTE& ROUTE721 =  ROUTE();
ROUTE721.setFromNode(CString("StopTimer"));
ROUTE721.setFromField(CString("fraction_changed"));
ROUTE721.setToNode(CString("Stop_r_middle0_RotationInterpolator"));
ROUTE721.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE721);

ROUTE& ROUTE722 =  ROUTE();
ROUTE722.setFromNode(CString("StopTimer"));
ROUTE722.setFromField(CString("fraction_changed"));
ROUTE722.setToNode(CString("Stop_r_middle1_RotationInterpolator"));
ROUTE722.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE722);

ROUTE& ROUTE723 =  ROUTE();
ROUTE723.setFromNode(CString("StopTimer"));
ROUTE723.setFromField(CString("fraction_changed"));
ROUTE723.setToNode(CString("Stop_r_middle2_RotationInterpolator"));
ROUTE723.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE723);

ROUTE& ROUTE724 =  ROUTE();
ROUTE724.setFromNode(CString("StopTimer"));
ROUTE724.setFromField(CString("fraction_changed"));
ROUTE724.setToNode(CString("Stop_r_middle3_RotationInterpolator"));
ROUTE724.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE724);

ROUTE& ROUTE725 =  ROUTE();
ROUTE725.setFromNode(CString("StopTimer"));
ROUTE725.setFromField(CString("fraction_changed"));
ROUTE725.setToNode(CString("Stop_r_ring0_RotationInterpolator"));
ROUTE725.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE725);

ROUTE& ROUTE726 =  ROUTE();
ROUTE726.setFromNode(CString("StopTimer"));
ROUTE726.setFromField(CString("fraction_changed"));
ROUTE726.setToNode(CString("Stop_r_ring1_RotationInterpolator"));
ROUTE726.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE726);

ROUTE& ROUTE727 =  ROUTE();
ROUTE727.setFromNode(CString("StopTimer"));
ROUTE727.setFromField(CString("fraction_changed"));
ROUTE727.setToNode(CString("Stop_r_ring2_RotationInterpolator"));
ROUTE727.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE727);

ROUTE& ROUTE728 =  ROUTE();
ROUTE728.setFromNode(CString("StopTimer"));
ROUTE728.setFromField(CString("fraction_changed"));
ROUTE728.setToNode(CString("Stop_r_ring3_RotationInterpolator"));
ROUTE728.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE728);

ROUTE& ROUTE729 =  ROUTE();
ROUTE729.setFromNode(CString("StopTimer"));
ROUTE729.setFromField(CString("fraction_changed"));
ROUTE729.setToNode(CString("Stop_r_pinky0_RotationInterpolator"));
ROUTE729.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE729);

ROUTE& ROUTE730 =  ROUTE();
ROUTE730.setFromNode(CString("StopTimer"));
ROUTE730.setFromField(CString("fraction_changed"));
ROUTE730.setToNode(CString("Stop_r_pinky1_RotationInterpolator"));
ROUTE730.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE730);

ROUTE& ROUTE731 =  ROUTE();
ROUTE731.setFromNode(CString("StopTimer"));
ROUTE731.setFromField(CString("fraction_changed"));
ROUTE731.setToNode(CString("Stop_r_pinky2_RotationInterpolator"));
ROUTE731.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE731);

ROUTE& ROUTE732 =  ROUTE();
ROUTE732.setFromNode(CString("StopTimer"));
ROUTE732.setFromField(CString("fraction_changed"));
ROUTE732.setToNode(CString("Stop_r_pinky3_RotationInterpolator"));
ROUTE732.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE732);

ROUTE& ROUTE733 =  ROUTE();
ROUTE733.setFromNode(CString("Stop_humanoid_root_TranslationInterpolator"));
ROUTE733.setFromField(CString("value_changed"));
ROUTE733.setToNode(CString("boxman_humanoid_root"));
ROUTE733.setToField(CString("set_translation"));
Scene33.addChild(&ROUTE733);

ROUTE& ROUTE734 =  ROUTE();
ROUTE734.setFromNode(CString("Stop_humanoid_root_RotationInterpolator"));
ROUTE734.setFromField(CString("value_changed"));
ROUTE734.setToNode(CString("boxman_humanoid_root"));
ROUTE734.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE734);

ROUTE& ROUTE735 =  ROUTE();
ROUTE735.setFromNode(CString("Stop_l_hip_RotationInterpolator"));
ROUTE735.setFromField(CString("value_changed"));
ROUTE735.setToNode(CString("boxman_l_hip"));
ROUTE735.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE735);

ROUTE& ROUTE736 =  ROUTE();
ROUTE736.setFromNode(CString("Stop_l_knee_RotationInterpolator"));
ROUTE736.setFromField(CString("value_changed"));
ROUTE736.setToNode(CString("boxman_l_knee"));
ROUTE736.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE736);

ROUTE& ROUTE737 =  ROUTE();
ROUTE737.setFromNode(CString("Stop_l_ankle_RotationInterpolator"));
ROUTE737.setFromField(CString("value_changed"));
ROUTE737.setToNode(CString("boxman_l_ankle"));
ROUTE737.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE737);

ROUTE& ROUTE738 =  ROUTE();
ROUTE738.setFromNode(CString("Stop_l_midtarsal_RotationInterpolator"));
ROUTE738.setFromField(CString("value_changed"));
ROUTE738.setToNode(CString("boxman_l_midtarsal"));
ROUTE738.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE738);

ROUTE& ROUTE739 =  ROUTE();
ROUTE739.setFromNode(CString("Stop_r_hip_RotationInterpolator"));
ROUTE739.setFromField(CString("value_changed"));
ROUTE739.setToNode(CString("boxman_r_hip"));
ROUTE739.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE739);

ROUTE& ROUTE740 =  ROUTE();
ROUTE740.setFromNode(CString("Stop_r_knee_RotationInterpolator"));
ROUTE740.setFromField(CString("value_changed"));
ROUTE740.setToNode(CString("boxman_r_knee"));
ROUTE740.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE740);

ROUTE& ROUTE741 =  ROUTE();
ROUTE741.setFromNode(CString("Stop_r_ankle_RotationInterpolator"));
ROUTE741.setFromField(CString("value_changed"));
ROUTE741.setToNode(CString("boxman_r_ankle"));
ROUTE741.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE741);

ROUTE& ROUTE742 =  ROUTE();
ROUTE742.setFromNode(CString("Stop_r_midtarsal_RotationInterpolator"));
ROUTE742.setFromField(CString("value_changed"));
ROUTE742.setToNode(CString("boxman_r_midtarsal"));
ROUTE742.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE742);

ROUTE& ROUTE743 =  ROUTE();
ROUTE743.setFromNode(CString("Stop_vl5_RotationInterpolator"));
ROUTE743.setFromField(CString("value_changed"));
ROUTE743.setToNode(CString("boxman_vl5"));
ROUTE743.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE743);

ROUTE& ROUTE744 =  ROUTE();
ROUTE744.setFromNode(CString("Stop_skullbase_RotationInterpolator"));
ROUTE744.setFromField(CString("value_changed"));
ROUTE744.setToNode(CString("boxman_skullbase"));
ROUTE744.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE744);

ROUTE& ROUTE745 =  ROUTE();
ROUTE745.setFromNode(CString("Stop_l_shoulder_RotationInterpolator"));
ROUTE745.setFromField(CString("value_changed"));
ROUTE745.setToNode(CString("boxman_l_shoulder"));
ROUTE745.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE745);

ROUTE& ROUTE746 =  ROUTE();
ROUTE746.setFromNode(CString("Stop_l_elbow_RotationInterpolator"));
ROUTE746.setFromField(CString("value_changed"));
ROUTE746.setToNode(CString("boxman_l_elbow"));
ROUTE746.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE746);

ROUTE& ROUTE747 =  ROUTE();
ROUTE747.setFromNode(CString("Stop_l_wrist_RotationInterpolator"));
ROUTE747.setFromField(CString("value_changed"));
ROUTE747.setToNode(CString("boxman_l_wrist"));
ROUTE747.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE747);

ROUTE& ROUTE748 =  ROUTE();
ROUTE748.setFromNode(CString("Stop_r_shoulder_RotationInterpolator"));
ROUTE748.setFromField(CString("value_changed"));
ROUTE748.setToNode(CString("boxman_r_shoulder"));
ROUTE748.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE748);

ROUTE& ROUTE749 =  ROUTE();
ROUTE749.setFromNode(CString("Stop_r_elbow_RotationInterpolator"));
ROUTE749.setFromField(CString("value_changed"));
ROUTE749.setToNode(CString("boxman_r_elbow"));
ROUTE749.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE749);

ROUTE& ROUTE750 =  ROUTE();
ROUTE750.setFromNode(CString("Stop_r_wrist_RotationInterpolator"));
ROUTE750.setFromField(CString("value_changed"));
ROUTE750.setToNode(CString("boxman_r_wrist"));
ROUTE750.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE750);

ROUTE& ROUTE751 =  ROUTE();
ROUTE751.setFromNode(CString("StandTimer"));
ROUTE751.setFromField(CString("fraction_changed"));
ROUTE751.setToNode(CString("Stand_r_ankle_RotationInterpolator"));
ROUTE751.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE751);

ROUTE& ROUTE752 =  ROUTE();
ROUTE752.setFromNode(CString("StandTimer"));
ROUTE752.setFromField(CString("fraction_changed"));
ROUTE752.setToNode(CString("Stand_r_knee_RotationInterpolator"));
ROUTE752.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE752);

ROUTE& ROUTE753 =  ROUTE();
ROUTE753.setFromNode(CString("StandTimer"));
ROUTE753.setFromField(CString("fraction_changed"));
ROUTE753.setToNode(CString("Stand_r_hip_RotationInterpolator"));
ROUTE753.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE753);

ROUTE& ROUTE754 =  ROUTE();
ROUTE754.setFromNode(CString("StandTimer"));
ROUTE754.setFromField(CString("fraction_changed"));
ROUTE754.setToNode(CString("Stand_l_ankle_RotationInterpolator"));
ROUTE754.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE754);

ROUTE& ROUTE755 =  ROUTE();
ROUTE755.setFromNode(CString("StandTimer"));
ROUTE755.setFromField(CString("fraction_changed"));
ROUTE755.setToNode(CString("Stand_l_knee_RotationInterpolator"));
ROUTE755.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE755);

ROUTE& ROUTE756 =  ROUTE();
ROUTE756.setFromNode(CString("StandTimer"));
ROUTE756.setFromField(CString("fraction_changed"));
ROUTE756.setToNode(CString("Stand_l_hip_RotationInterpolator"));
ROUTE756.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE756);

ROUTE& ROUTE757 =  ROUTE();
ROUTE757.setFromNode(CString("StandTimer"));
ROUTE757.setFromField(CString("fraction_changed"));
ROUTE757.setToNode(CString("Stand_lower_body_RotationInterpolator"));
ROUTE757.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE757);

ROUTE& ROUTE758 =  ROUTE();
ROUTE758.setFromNode(CString("StandTimer"));
ROUTE758.setFromField(CString("fraction_changed"));
ROUTE758.setToNode(CString("Stand_r_wrist_RotationInterpolator"));
ROUTE758.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE758);

ROUTE& ROUTE759 =  ROUTE();
ROUTE759.setFromNode(CString("StandTimer"));
ROUTE759.setFromField(CString("fraction_changed"));
ROUTE759.setToNode(CString("Stand_r_elbow_RotationInterpolator"));
ROUTE759.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE759);

ROUTE& ROUTE760 =  ROUTE();
ROUTE760.setFromNode(CString("StandTimer"));
ROUTE760.setFromField(CString("fraction_changed"));
ROUTE760.setToNode(CString("Stand_r_shoulder_RotationInterpolator"));
ROUTE760.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE760);

ROUTE& ROUTE761 =  ROUTE();
ROUTE761.setFromNode(CString("StandTimer"));
ROUTE761.setFromField(CString("fraction_changed"));
ROUTE761.setToNode(CString("Stand_l_wrist_RotationInterpolator"));
ROUTE761.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE761);

ROUTE& ROUTE762 =  ROUTE();
ROUTE762.setFromNode(CString("StandTimer"));
ROUTE762.setFromField(CString("fraction_changed"));
ROUTE762.setToNode(CString("Stand_l_elbow_RotationInterpolator"));
ROUTE762.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE762);

ROUTE& ROUTE763 =  ROUTE();
ROUTE763.setFromNode(CString("StandTimer"));
ROUTE763.setFromField(CString("fraction_changed"));
ROUTE763.setToNode(CString("Stand_l_shoulder_RotationInterpolator"));
ROUTE763.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE763);

ROUTE& ROUTE764 =  ROUTE();
ROUTE764.setFromNode(CString("StandTimer"));
ROUTE764.setFromField(CString("fraction_changed"));
ROUTE764.setToNode(CString("Stand_head_RotationInterpolator"));
ROUTE764.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE764);

ROUTE& ROUTE765 =  ROUTE();
ROUTE765.setFromNode(CString("StandTimer"));
ROUTE765.setFromField(CString("fraction_changed"));
ROUTE765.setToNode(CString("Stand_neck_RotationInterpolator"));
ROUTE765.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE765);

ROUTE& ROUTE766 =  ROUTE();
ROUTE766.setFromNode(CString("StandTimer"));
ROUTE766.setFromField(CString("fraction_changed"));
ROUTE766.setToNode(CString("Stand_l_eyeball_RotationInterpolator"));
ROUTE766.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE766);

ROUTE& ROUTE767 =  ROUTE();
ROUTE767.setFromNode(CString("StandTimer"));
ROUTE767.setFromField(CString("fraction_changed"));
ROUTE767.setToNode(CString("Stand_r_eyeball_RotationInterpolator"));
ROUTE767.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE767);

ROUTE& ROUTE768 =  ROUTE();
ROUTE768.setFromNode(CString("StandTimer"));
ROUTE768.setFromField(CString("fraction_changed"));
ROUTE768.setToNode(CString("Stand_upper_body_RotationInterpolator"));
ROUTE768.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE768);

ROUTE& ROUTE769 =  ROUTE();
ROUTE769.setFromNode(CString("StandTimer"));
ROUTE769.setFromField(CString("fraction_changed"));
ROUTE769.setToNode(CString("Stand_whole_body_RotationInterpolator"));
ROUTE769.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE769);

ROUTE& ROUTE770 =  ROUTE();
ROUTE770.setFromNode(CString("StandTimer"));
ROUTE770.setFromField(CString("fraction_changed"));
ROUTE770.setToNode(CString("Stand_whole_body_TranslationInterpolator"));
ROUTE770.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE770);

ROUTE& ROUTE771 =  ROUTE();
ROUTE771.setFromNode(CString("StandTimer"));
ROUTE771.setFromField(CString("fraction_changed"));
ROUTE771.setToNode(CString("Stand_l_sternoclavicular_RollInterpolator"));
ROUTE771.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE771);

ROUTE& ROUTE772 =  ROUTE();
ROUTE772.setFromNode(CString("StandTimer"));
ROUTE772.setFromField(CString("fraction_changed"));
ROUTE772.setToNode(CString("Stand_l_acromioclavicular_RollInterpolator"));
ROUTE772.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE772);

ROUTE& ROUTE773 =  ROUTE();
ROUTE773.setFromNode(CString("StandTimer"));
ROUTE773.setFromField(CString("fraction_changed"));
ROUTE773.setToNode(CString("Stand_r_sternoclavicular_RollInterpolator"));
ROUTE773.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE773);

ROUTE& ROUTE774 =  ROUTE();
ROUTE774.setFromNode(CString("StandTimer"));
ROUTE774.setFromField(CString("fraction_changed"));
ROUTE774.setToNode(CString("Stand_r_acromioclavicular_RollInterpolator"));
ROUTE774.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE774);

ROUTE& ROUTE775 =  ROUTE();
ROUTE775.setFromNode(CString("StandTimer"));
ROUTE775.setFromField(CString("fraction_changed"));
ROUTE775.setToNode(CString("Stand_r_metatarsal_PitchInterpolator"));
ROUTE775.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE775);

ROUTE& ROUTE776 =  ROUTE();
ROUTE776.setFromNode(CString("StandTimer"));
ROUTE776.setFromField(CString("fraction_changed"));
ROUTE776.setToNode(CString("Stand_sacroiliac_YawInterpolator"));
ROUTE776.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE776);

ROUTE& ROUTE777 =  ROUTE();
ROUTE777.setFromNode(CString("StandTimer"));
ROUTE777.setFromField(CString("fraction_changed"));
ROUTE777.setToNode(CString("Stand_vl5_YawInterpolator"));
ROUTE777.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE777);

ROUTE& ROUTE778 =  ROUTE();
ROUTE778.setFromNode(CString("StandTimer"));
ROUTE778.setFromField(CString("fraction_changed"));
ROUTE778.setToNode(CString("Stand_vc6_YawInterpolator"));
ROUTE778.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE778);

ROUTE& ROUTE779 =  ROUTE();
ROUTE779.setFromNode(CString("StandTimer"));
ROUTE779.setFromField(CString("fraction_changed"));
ROUTE779.setToNode(CString("Stand_l_thumb1_PitchInterpolator"));
ROUTE779.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE779);

ROUTE& ROUTE780 =  ROUTE();
ROUTE780.setFromNode(CString("StandTimer"));
ROUTE780.setFromField(CString("fraction_changed"));
ROUTE780.setToNode(CString("Stand_r_thumb1_PitchInterpolator"));
ROUTE780.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE780);

ROUTE& ROUTE781 =  ROUTE();
ROUTE781.setFromNode(CString("StandTimer"));
ROUTE781.setFromField(CString("fraction_changed"));
ROUTE781.setToNode(CString("Stand_r_index1_RollInterpolator"));
ROUTE781.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE781);

ROUTE& ROUTE782 =  ROUTE();
ROUTE782.setFromNode(CString("StandTimer"));
ROUTE782.setFromField(CString("fraction_changed"));
ROUTE782.setToNode(CString("Stand_r_index2_RollInterpolator"));
ROUTE782.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE782);

ROUTE& ROUTE783 =  ROUTE();
ROUTE783.setFromNode(CString("StandTimer"));
ROUTE783.setFromField(CString("fraction_changed"));
ROUTE783.setToNode(CString("Stand_r_index3_RollInterpolator"));
ROUTE783.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE783);

ROUTE& ROUTE784 =  ROUTE();
ROUTE784.setFromNode(CString("Stand_r_ankle_RotationInterpolator"));
ROUTE784.setFromField(CString("value_changed"));
ROUTE784.setToNode(CString("boxman_r_ankle"));
ROUTE784.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE784);

ROUTE& ROUTE785 =  ROUTE();
ROUTE785.setFromNode(CString("Stand_r_knee_RotationInterpolator"));
ROUTE785.setFromField(CString("value_changed"));
ROUTE785.setToNode(CString("boxman_r_knee"));
ROUTE785.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE785);

ROUTE& ROUTE786 =  ROUTE();
ROUTE786.setFromNode(CString("Stand_r_hip_RotationInterpolator"));
ROUTE786.setFromField(CString("value_changed"));
ROUTE786.setToNode(CString("boxman_r_hip"));
ROUTE786.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE786);

ROUTE& ROUTE787 =  ROUTE();
ROUTE787.setFromNode(CString("Stand_l_ankle_RotationInterpolator"));
ROUTE787.setFromField(CString("value_changed"));
ROUTE787.setToNode(CString("boxman_l_ankle"));
ROUTE787.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE787);

ROUTE& ROUTE788 =  ROUTE();
ROUTE788.setFromNode(CString("Stand_l_knee_RotationInterpolator"));
ROUTE788.setFromField(CString("value_changed"));
ROUTE788.setToNode(CString("boxman_l_knee"));
ROUTE788.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE788);

ROUTE& ROUTE789 =  ROUTE();
ROUTE789.setFromNode(CString("Stand_l_hip_RotationInterpolator"));
ROUTE789.setFromField(CString("value_changed"));
ROUTE789.setToNode(CString("boxman_l_hip"));
ROUTE789.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE789);

ROUTE& ROUTE790 =  ROUTE();
ROUTE790.setFromNode(CString("Stand_r_wrist_RotationInterpolator"));
ROUTE790.setFromField(CString("value_changed"));
ROUTE790.setToNode(CString("boxman_r_wrist"));
ROUTE790.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE790);

ROUTE& ROUTE791 =  ROUTE();
ROUTE791.setFromNode(CString("Stand_r_elbow_RotationInterpolator"));
ROUTE791.setFromField(CString("value_changed"));
ROUTE791.setToNode(CString("boxman_r_elbow"));
ROUTE791.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE791);

ROUTE& ROUTE792 =  ROUTE();
ROUTE792.setFromNode(CString("Stand_r_shoulder_RotationInterpolator"));
ROUTE792.setFromField(CString("value_changed"));
ROUTE792.setToNode(CString("boxman_r_shoulder"));
ROUTE792.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE792);

ROUTE& ROUTE793 =  ROUTE();
ROUTE793.setFromNode(CString("Stand_l_wrist_RotationInterpolator"));
ROUTE793.setFromField(CString("value_changed"));
ROUTE793.setToNode(CString("boxman_l_wrist"));
ROUTE793.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE793);

ROUTE& ROUTE794 =  ROUTE();
ROUTE794.setFromNode(CString("Stand_l_elbow_RotationInterpolator"));
ROUTE794.setFromField(CString("value_changed"));
ROUTE794.setToNode(CString("boxman_l_elbow"));
ROUTE794.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE794);

ROUTE& ROUTE795 =  ROUTE();
ROUTE795.setFromNode(CString("Stand_l_shoulder_RotationInterpolator"));
ROUTE795.setFromField(CString("value_changed"));
ROUTE795.setToNode(CString("boxman_l_shoulder"));
ROUTE795.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE795);

ROUTE& ROUTE796 =  ROUTE();
ROUTE796.setFromNode(CString("Stand_head_RotationInterpolator"));
ROUTE796.setFromField(CString("value_changed"));
ROUTE796.setToNode(CString("boxman_skullbase"));
ROUTE796.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE796);

ROUTE& ROUTE797 =  ROUTE();
ROUTE797.setFromNode(CString("Stand_whole_body_RotationInterpolator"));
ROUTE797.setFromField(CString("value_changed"));
ROUTE797.setToNode(CString("boxman_humanoid_root"));
ROUTE797.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE797);

ROUTE& ROUTE798 =  ROUTE();
ROUTE798.setFromNode(CString("Stand_whole_body_TranslationInterpolator"));
ROUTE798.setFromField(CString("value_changed"));
ROUTE798.setToNode(CString("boxman_humanoid_root"));
ROUTE798.setToField(CString("set_translation"));
Scene33.addChild(&ROUTE798);

ROUTE& ROUTE799 =  ROUTE();
ROUTE799.setFromNode(CString("Stand_vl5_YawInterpolator"));
ROUTE799.setFromField(CString("value_changed"));
ROUTE799.setToNode(CString("boxman_vl5"));
ROUTE799.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE799);

ROUTE& ROUTE800 =  ROUTE();
ROUTE800.setFromNode(CString("PitchTimer"));
ROUTE800.setFromField(CString("fraction_changed"));
ROUTE800.setToNode(CString("Pitches_r_ankle_RotationInterpolator"));
ROUTE800.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE800);

ROUTE& ROUTE801 =  ROUTE();
ROUTE801.setFromNode(CString("PitchTimer"));
ROUTE801.setFromField(CString("fraction_changed"));
ROUTE801.setToNode(CString("Pitches_r_knee_RotationInterpolator"));
ROUTE801.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE801);

ROUTE& ROUTE802 =  ROUTE();
ROUTE802.setFromNode(CString("PitchTimer"));
ROUTE802.setFromField(CString("fraction_changed"));
ROUTE802.setToNode(CString("Pitches_r_hip_RotationInterpolator"));
ROUTE802.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE802);

ROUTE& ROUTE803 =  ROUTE();
ROUTE803.setFromNode(CString("PitchTimer"));
ROUTE803.setFromField(CString("fraction_changed"));
ROUTE803.setToNode(CString("Pitches_l_ankle_RotationInterpolator"));
ROUTE803.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE803);

ROUTE& ROUTE804 =  ROUTE();
ROUTE804.setFromNode(CString("PitchTimer"));
ROUTE804.setFromField(CString("fraction_changed"));
ROUTE804.setToNode(CString("Pitches_l_knee_RotationInterpolator"));
ROUTE804.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE804);

ROUTE& ROUTE805 =  ROUTE();
ROUTE805.setFromNode(CString("PitchTimer"));
ROUTE805.setFromField(CString("fraction_changed"));
ROUTE805.setToNode(CString("Pitches_l_hip_RotationInterpolator"));
ROUTE805.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE805);

ROUTE& ROUTE806 =  ROUTE();
ROUTE806.setFromNode(CString("PitchTimer"));
ROUTE806.setFromField(CString("fraction_changed"));
ROUTE806.setToNode(CString("Pitches_lower_body_RotationInterpolator"));
ROUTE806.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE806);

ROUTE& ROUTE807 =  ROUTE();
ROUTE807.setFromNode(CString("PitchTimer"));
ROUTE807.setFromField(CString("fraction_changed"));
ROUTE807.setToNode(CString("Pitches_r_wrist_RotationInterpolator"));
ROUTE807.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE807);

ROUTE& ROUTE808 =  ROUTE();
ROUTE808.setFromNode(CString("PitchTimer"));
ROUTE808.setFromField(CString("fraction_changed"));
ROUTE808.setToNode(CString("Pitches_r_elbow_RotationInterpolator"));
ROUTE808.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE808);

ROUTE& ROUTE809 =  ROUTE();
ROUTE809.setFromNode(CString("PitchTimer"));
ROUTE809.setFromField(CString("fraction_changed"));
ROUTE809.setToNode(CString("Pitches_r_shoulder_RotationInterpolator"));
ROUTE809.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE809);

ROUTE& ROUTE810 =  ROUTE();
ROUTE810.setFromNode(CString("PitchTimer"));
ROUTE810.setFromField(CString("fraction_changed"));
ROUTE810.setToNode(CString("Pitches_l_wrist_RotationInterpolator"));
ROUTE810.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE810);

ROUTE& ROUTE811 =  ROUTE();
ROUTE811.setFromNode(CString("PitchTimer"));
ROUTE811.setFromField(CString("fraction_changed"));
ROUTE811.setToNode(CString("Pitches_l_elbow_RotationInterpolator"));
ROUTE811.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE811);

ROUTE& ROUTE812 =  ROUTE();
ROUTE812.setFromNode(CString("PitchTimer"));
ROUTE812.setFromField(CString("fraction_changed"));
ROUTE812.setToNode(CString("Pitches_l_shoulder_RotationInterpolator"));
ROUTE812.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE812);

ROUTE& ROUTE813 =  ROUTE();
ROUTE813.setFromNode(CString("PitchTimer"));
ROUTE813.setFromField(CString("fraction_changed"));
ROUTE813.setToNode(CString("Pitches_head_RotationInterpolator"));
ROUTE813.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE813);

ROUTE& ROUTE814 =  ROUTE();
ROUTE814.setFromNode(CString("PitchTimer"));
ROUTE814.setFromField(CString("fraction_changed"));
ROUTE814.setToNode(CString("Pitches_neck_RotationInterpolator"));
ROUTE814.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE814);

ROUTE& ROUTE815 =  ROUTE();
ROUTE815.setFromNode(CString("PitchTimer"));
ROUTE815.setFromField(CString("fraction_changed"));
ROUTE815.setToNode(CString("Pitches_upper_body_RotationInterpolator"));
ROUTE815.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE815);

ROUTE& ROUTE816 =  ROUTE();
ROUTE816.setFromNode(CString("PitchTimer"));
ROUTE816.setFromField(CString("fraction_changed"));
ROUTE816.setToNode(CString("Pitches_whole_body_RotationInterpolator"));
ROUTE816.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE816);

ROUTE& ROUTE817 =  ROUTE();
ROUTE817.setFromNode(CString("PitchTimer"));
ROUTE817.setFromField(CString("fraction_changed"));
ROUTE817.setToNode(CString("Pitches_whole_body_TranslationInterpolator"));
ROUTE817.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE817);

ROUTE& ROUTE818 =  ROUTE();
ROUTE818.setFromNode(CString("PitchTimer"));
ROUTE818.setFromField(CString("fraction_changed"));
ROUTE818.setToNode(CString("Pitch_l_sternoclavicular_RollInterpolator"));
ROUTE818.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE818);

ROUTE& ROUTE819 =  ROUTE();
ROUTE819.setFromNode(CString("PitchTimer"));
ROUTE819.setFromField(CString("fraction_changed"));
ROUTE819.setToNode(CString("Pitch_l_acromioclavicular_RollInterpolator"));
ROUTE819.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE819);

ROUTE& ROUTE820 =  ROUTE();
ROUTE820.setFromNode(CString("PitchTimer"));
ROUTE820.setFromField(CString("fraction_changed"));
ROUTE820.setToNode(CString("Pitch_r_sternoclavicular_RollInterpolator"));
ROUTE820.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE820);

ROUTE& ROUTE821 =  ROUTE();
ROUTE821.setFromNode(CString("PitchTimer"));
ROUTE821.setFromField(CString("fraction_changed"));
ROUTE821.setToNode(CString("Pitch_r_acromioclavicular_RollInterpolator"));
ROUTE821.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE821);

ROUTE& ROUTE822 =  ROUTE();
ROUTE822.setFromNode(CString("PitchTimer"));
ROUTE822.setFromField(CString("fraction_changed"));
ROUTE822.setToNode(CString("Pitch_r_metatarsal_PitchInterpolator"));
ROUTE822.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE822);

ROUTE& ROUTE823 =  ROUTE();
ROUTE823.setFromNode(CString("PitchTimer"));
ROUTE823.setFromField(CString("fraction_changed"));
ROUTE823.setToNode(CString("Pitch_sacroiliac_YawInterpolator"));
ROUTE823.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE823);

ROUTE& ROUTE824 =  ROUTE();
ROUTE824.setFromNode(CString("PitchTimer"));
ROUTE824.setFromField(CString("fraction_changed"));
ROUTE824.setToNode(CString("Pitch_vl5_YawInterpolator"));
ROUTE824.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE824);

ROUTE& ROUTE825 =  ROUTE();
ROUTE825.setFromNode(CString("PitchTimer"));
ROUTE825.setFromField(CString("fraction_changed"));
ROUTE825.setToNode(CString("Pitch_vc6_YawInterpolator"));
ROUTE825.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE825);

ROUTE& ROUTE826 =  ROUTE();
ROUTE826.setFromNode(CString("PitchTimer"));
ROUTE826.setFromField(CString("fraction_changed"));
ROUTE826.setToNode(CString("Pitch_l_thumb1_PitchInterpolator"));
ROUTE826.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE826);

ROUTE& ROUTE827 =  ROUTE();
ROUTE827.setFromNode(CString("PitchTimer"));
ROUTE827.setFromField(CString("fraction_changed"));
ROUTE827.setToNode(CString("Pitch_r_thumb1_PitchInterpolator"));
ROUTE827.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE827);

ROUTE& ROUTE828 =  ROUTE();
ROUTE828.setFromNode(CString("Pitches_r_ankle_RotationInterpolator"));
ROUTE828.setFromField(CString("value_changed"));
ROUTE828.setToNode(CString("boxman_r_ankle"));
ROUTE828.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE828);

ROUTE& ROUTE829 =  ROUTE();
ROUTE829.setFromNode(CString("Pitches_r_knee_RotationInterpolator"));
ROUTE829.setFromField(CString("value_changed"));
ROUTE829.setToNode(CString("boxman_r_knee"));
ROUTE829.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE829);

ROUTE& ROUTE830 =  ROUTE();
ROUTE830.setFromNode(CString("Pitches_r_hip_RotationInterpolator"));
ROUTE830.setFromField(CString("value_changed"));
ROUTE830.setToNode(CString("boxman_r_hip"));
ROUTE830.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE830);

ROUTE& ROUTE831 =  ROUTE();
ROUTE831.setFromNode(CString("Pitches_l_ankle_RotationInterpolator"));
ROUTE831.setFromField(CString("value_changed"));
ROUTE831.setToNode(CString("boxman_l_ankle"));
ROUTE831.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE831);

ROUTE& ROUTE832 =  ROUTE();
ROUTE832.setFromNode(CString("Pitches_l_knee_RotationInterpolator"));
ROUTE832.setFromField(CString("value_changed"));
ROUTE832.setToNode(CString("boxman_l_knee"));
ROUTE832.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE832);

ROUTE& ROUTE833 =  ROUTE();
ROUTE833.setFromNode(CString("Pitches_l_hip_RotationInterpolator"));
ROUTE833.setFromField(CString("value_changed"));
ROUTE833.setToNode(CString("boxman_l_hip"));
ROUTE833.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE833);

ROUTE& ROUTE834 =  ROUTE();
ROUTE834.setFromNode(CString("Pitches_r_wrist_RotationInterpolator"));
ROUTE834.setFromField(CString("value_changed"));
ROUTE834.setToNode(CString("boxman_r_wrist"));
ROUTE834.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE834);

ROUTE& ROUTE835 =  ROUTE();
ROUTE835.setFromNode(CString("Pitches_r_elbow_RotationInterpolator"));
ROUTE835.setFromField(CString("value_changed"));
ROUTE835.setToNode(CString("boxman_r_elbow"));
ROUTE835.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE835);

ROUTE& ROUTE836 =  ROUTE();
ROUTE836.setFromNode(CString("Pitches_r_shoulder_RotationInterpolator"));
ROUTE836.setFromField(CString("value_changed"));
ROUTE836.setToNode(CString("boxman_r_shoulder"));
ROUTE836.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE836);

ROUTE& ROUTE837 =  ROUTE();
ROUTE837.setFromNode(CString("Pitches_l_wrist_RotationInterpolator"));
ROUTE837.setFromField(CString("value_changed"));
ROUTE837.setToNode(CString("boxman_l_wrist"));
ROUTE837.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE837);

ROUTE& ROUTE838 =  ROUTE();
ROUTE838.setFromNode(CString("Pitches_l_elbow_RotationInterpolator"));
ROUTE838.setFromField(CString("value_changed"));
ROUTE838.setToNode(CString("boxman_l_elbow"));
ROUTE838.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE838);

ROUTE& ROUTE839 =  ROUTE();
ROUTE839.setFromNode(CString("Pitches_l_shoulder_RotationInterpolator"));
ROUTE839.setFromField(CString("value_changed"));
ROUTE839.setToNode(CString("boxman_l_shoulder"));
ROUTE839.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE839);

ROUTE& ROUTE840 =  ROUTE();
ROUTE840.setFromNode(CString("Pitches_head_RotationInterpolator"));
ROUTE840.setFromField(CString("value_changed"));
ROUTE840.setToNode(CString("boxman_skullbase"));
ROUTE840.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE840);

ROUTE& ROUTE841 =  ROUTE();
ROUTE841.setFromNode(CString("Pitches_whole_body_RotationInterpolator"));
ROUTE841.setFromField(CString("value_changed"));
ROUTE841.setToNode(CString("boxman_humanoid_root"));
ROUTE841.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE841);

ROUTE& ROUTE842 =  ROUTE();
ROUTE842.setFromNode(CString("Pitches_whole_body_TranslationInterpolator"));
ROUTE842.setFromField(CString("value_changed"));
ROUTE842.setToNode(CString("boxman_humanoid_root"));
ROUTE842.setToField(CString("set_translation"));
Scene33.addChild(&ROUTE842);

ROUTE& ROUTE843 =  ROUTE();
ROUTE843.setFromNode(CString("Pitch_vl5_YawInterpolator"));
ROUTE843.setFromField(CString("value_changed"));
ROUTE843.setToNode(CString("boxman_vl5"));
ROUTE843.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE843);

ROUTE& ROUTE844 =  ROUTE();
ROUTE844.setFromNode(CString("YawTimer"));
ROUTE844.setFromField(CString("fraction_changed"));
ROUTE844.setToNode(CString("Yaws_r_ankle_RotationInterpolator"));
ROUTE844.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE844);

ROUTE& ROUTE845 =  ROUTE();
ROUTE845.setFromNode(CString("YawTimer"));
ROUTE845.setFromField(CString("fraction_changed"));
ROUTE845.setToNode(CString("Yaws_r_knee_RotationInterpolator"));
ROUTE845.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE845);

ROUTE& ROUTE846 =  ROUTE();
ROUTE846.setFromNode(CString("YawTimer"));
ROUTE846.setFromField(CString("fraction_changed"));
ROUTE846.setToNode(CString("Yaws_r_hip_RotationInterpolator"));
ROUTE846.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE846);

ROUTE& ROUTE847 =  ROUTE();
ROUTE847.setFromNode(CString("YawTimer"));
ROUTE847.setFromField(CString("fraction_changed"));
ROUTE847.setToNode(CString("Yaws_l_ankle_RotationInterpolator"));
ROUTE847.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE847);

ROUTE& ROUTE848 =  ROUTE();
ROUTE848.setFromNode(CString("YawTimer"));
ROUTE848.setFromField(CString("fraction_changed"));
ROUTE848.setToNode(CString("Yaws_l_knee_RotationInterpolator"));
ROUTE848.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE848);

ROUTE& ROUTE849 =  ROUTE();
ROUTE849.setFromNode(CString("YawTimer"));
ROUTE849.setFromField(CString("fraction_changed"));
ROUTE849.setToNode(CString("Yaws_l_hip_RotationInterpolator"));
ROUTE849.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE849);

ROUTE& ROUTE850 =  ROUTE();
ROUTE850.setFromNode(CString("YawTimer"));
ROUTE850.setFromField(CString("fraction_changed"));
ROUTE850.setToNode(CString("Yaws_lower_body_RotationInterpolator"));
ROUTE850.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE850);

ROUTE& ROUTE851 =  ROUTE();
ROUTE851.setFromNode(CString("YawTimer"));
ROUTE851.setFromField(CString("fraction_changed"));
ROUTE851.setToNode(CString("Yaws_r_wrist_RotationInterpolator"));
ROUTE851.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE851);

ROUTE& ROUTE852 =  ROUTE();
ROUTE852.setFromNode(CString("YawTimer"));
ROUTE852.setFromField(CString("fraction_changed"));
ROUTE852.setToNode(CString("Yaws_r_elbow_RotationInterpolator"));
ROUTE852.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE852);

ROUTE& ROUTE853 =  ROUTE();
ROUTE853.setFromNode(CString("YawTimer"));
ROUTE853.setFromField(CString("fraction_changed"));
ROUTE853.setToNode(CString("Yaws_r_shoulder_RotationInterpolator"));
ROUTE853.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE853);

ROUTE& ROUTE854 =  ROUTE();
ROUTE854.setFromNode(CString("YawTimer"));
ROUTE854.setFromField(CString("fraction_changed"));
ROUTE854.setToNode(CString("Yaws_l_wrist_RotationInterpolator"));
ROUTE854.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE854);

ROUTE& ROUTE855 =  ROUTE();
ROUTE855.setFromNode(CString("YawTimer"));
ROUTE855.setFromField(CString("fraction_changed"));
ROUTE855.setToNode(CString("Yaws_l_elbow_RotationInterpolator"));
ROUTE855.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE855);

ROUTE& ROUTE856 =  ROUTE();
ROUTE856.setFromNode(CString("YawTimer"));
ROUTE856.setFromField(CString("fraction_changed"));
ROUTE856.setToNode(CString("Yaws_l_shoulder_RotationInterpolator"));
ROUTE856.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE856);

ROUTE& ROUTE857 =  ROUTE();
ROUTE857.setFromNode(CString("YawTimer"));
ROUTE857.setFromField(CString("fraction_changed"));
ROUTE857.setToNode(CString("Yaws_head_RotationInterpolator"));
ROUTE857.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE857);

ROUTE& ROUTE858 =  ROUTE();
ROUTE858.setFromNode(CString("YawTimer"));
ROUTE858.setFromField(CString("fraction_changed"));
ROUTE858.setToNode(CString("Yaws_neck_RotationInterpolator"));
ROUTE858.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE858);

ROUTE& ROUTE859 =  ROUTE();
ROUTE859.setFromNode(CString("YawTimer"));
ROUTE859.setFromField(CString("fraction_changed"));
ROUTE859.setToNode(CString("Yaws_upper_body_RotationInterpolator"));
ROUTE859.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE859);

ROUTE& ROUTE860 =  ROUTE();
ROUTE860.setFromNode(CString("YawTimer"));
ROUTE860.setFromField(CString("fraction_changed"));
ROUTE860.setToNode(CString("Yaws_whole_body_RotationInterpolator"));
ROUTE860.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE860);

ROUTE& ROUTE861 =  ROUTE();
ROUTE861.setFromNode(CString("YawTimer"));
ROUTE861.setFromField(CString("fraction_changed"));
ROUTE861.setToNode(CString("Yaws_whole_body_TranslationInterpolator"));
ROUTE861.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE861);

ROUTE& ROUTE862 =  ROUTE();
ROUTE862.setFromNode(CString("YawTimer"));
ROUTE862.setFromField(CString("fraction_changed"));
ROUTE862.setToNode(CString("Yaw_l_sternoclavicular_RollInterpolator"));
ROUTE862.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE862);

ROUTE& ROUTE863 =  ROUTE();
ROUTE863.setFromNode(CString("YawTimer"));
ROUTE863.setFromField(CString("fraction_changed"));
ROUTE863.setToNode(CString("Yaw_l_acromioclavicular_RollInterpolator"));
ROUTE863.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE863);

ROUTE& ROUTE864 =  ROUTE();
ROUTE864.setFromNode(CString("YawTimer"));
ROUTE864.setFromField(CString("fraction_changed"));
ROUTE864.setToNode(CString("Yaw_r_sternoclavicular_RollInterpolator"));
ROUTE864.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE864);

ROUTE& ROUTE865 =  ROUTE();
ROUTE865.setFromNode(CString("YawTimer"));
ROUTE865.setFromField(CString("fraction_changed"));
ROUTE865.setToNode(CString("Yaw_r_acromioclavicular_RollInterpolator"));
ROUTE865.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE865);

ROUTE& ROUTE866 =  ROUTE();
ROUTE866.setFromNode(CString("YawTimer"));
ROUTE866.setFromField(CString("fraction_changed"));
ROUTE866.setToNode(CString("Yaw_r_metatarsal_PitchInterpolator"));
ROUTE866.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE866);

ROUTE& ROUTE867 =  ROUTE();
ROUTE867.setFromNode(CString("YawTimer"));
ROUTE867.setFromField(CString("fraction_changed"));
ROUTE867.setToNode(CString("Yaw_sacroiliac_YawInterpolator"));
ROUTE867.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE867);

ROUTE& ROUTE868 =  ROUTE();
ROUTE868.setFromNode(CString("YawTimer"));
ROUTE868.setFromField(CString("fraction_changed"));
ROUTE868.setToNode(CString("Yaw_vl5_YawInterpolator"));
ROUTE868.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE868);

ROUTE& ROUTE869 =  ROUTE();
ROUTE869.setFromNode(CString("YawTimer"));
ROUTE869.setFromField(CString("fraction_changed"));
ROUTE869.setToNode(CString("Yaw_vc6_YawInterpolator"));
ROUTE869.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE869);

ROUTE& ROUTE870 =  ROUTE();
ROUTE870.setFromNode(CString("YawTimer"));
ROUTE870.setFromField(CString("fraction_changed"));
ROUTE870.setToNode(CString("Yaw_l_thumb1_PitchInterpolator"));
ROUTE870.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE870);

ROUTE& ROUTE871 =  ROUTE();
ROUTE871.setFromNode(CString("YawTimer"));
ROUTE871.setFromField(CString("fraction_changed"));
ROUTE871.setToNode(CString("Yaw_r_thumb1_PitchInterpolator"));
ROUTE871.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE871);

ROUTE& ROUTE872 =  ROUTE();
ROUTE872.setFromNode(CString("Yaws_r_ankle_RotationInterpolator"));
ROUTE872.setFromField(CString("value_changed"));
ROUTE872.setToNode(CString("boxman_r_ankle"));
ROUTE872.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE872);

ROUTE& ROUTE873 =  ROUTE();
ROUTE873.setFromNode(CString("Yaws_r_knee_RotationInterpolator"));
ROUTE873.setFromField(CString("value_changed"));
ROUTE873.setToNode(CString("boxman_r_knee"));
ROUTE873.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE873);

ROUTE& ROUTE874 =  ROUTE();
ROUTE874.setFromNode(CString("Yaws_r_hip_RotationInterpolator"));
ROUTE874.setFromField(CString("value_changed"));
ROUTE874.setToNode(CString("boxman_r_hip"));
ROUTE874.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE874);

ROUTE& ROUTE875 =  ROUTE();
ROUTE875.setFromNode(CString("Yaws_l_ankle_RotationInterpolator"));
ROUTE875.setFromField(CString("value_changed"));
ROUTE875.setToNode(CString("boxman_l_ankle"));
ROUTE875.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE875);

ROUTE& ROUTE876 =  ROUTE();
ROUTE876.setFromNode(CString("Yaws_l_knee_RotationInterpolator"));
ROUTE876.setFromField(CString("value_changed"));
ROUTE876.setToNode(CString("boxman_l_knee"));
ROUTE876.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE876);

ROUTE& ROUTE877 =  ROUTE();
ROUTE877.setFromNode(CString("Yaws_l_hip_RotationInterpolator"));
ROUTE877.setFromField(CString("value_changed"));
ROUTE877.setToNode(CString("boxman_l_hip"));
ROUTE877.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE877);

ROUTE& ROUTE878 =  ROUTE();
ROUTE878.setFromNode(CString("Yaws_r_wrist_RotationInterpolator"));
ROUTE878.setFromField(CString("value_changed"));
ROUTE878.setToNode(CString("boxman_r_wrist"));
ROUTE878.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE878);

ROUTE& ROUTE879 =  ROUTE();
ROUTE879.setFromNode(CString("Yaws_r_elbow_RotationInterpolator"));
ROUTE879.setFromField(CString("value_changed"));
ROUTE879.setToNode(CString("boxman_r_elbow"));
ROUTE879.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE879);

ROUTE& ROUTE880 =  ROUTE();
ROUTE880.setFromNode(CString("Yaws_r_shoulder_RotationInterpolator"));
ROUTE880.setFromField(CString("value_changed"));
ROUTE880.setToNode(CString("boxman_r_shoulder"));
ROUTE880.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE880);

ROUTE& ROUTE881 =  ROUTE();
ROUTE881.setFromNode(CString("Yaws_l_wrist_RotationInterpolator"));
ROUTE881.setFromField(CString("value_changed"));
ROUTE881.setToNode(CString("boxman_l_wrist"));
ROUTE881.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE881);

ROUTE& ROUTE882 =  ROUTE();
ROUTE882.setFromNode(CString("Yaws_l_elbow_RotationInterpolator"));
ROUTE882.setFromField(CString("value_changed"));
ROUTE882.setToNode(CString("boxman_l_elbow"));
ROUTE882.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE882);

ROUTE& ROUTE883 =  ROUTE();
ROUTE883.setFromNode(CString("Yaws_l_shoulder_RotationInterpolator"));
ROUTE883.setFromField(CString("value_changed"));
ROUTE883.setToNode(CString("boxman_l_shoulder"));
ROUTE883.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE883);

ROUTE& ROUTE884 =  ROUTE();
ROUTE884.setFromNode(CString("Yaws_head_RotationInterpolator"));
ROUTE884.setFromField(CString("value_changed"));
ROUTE884.setToNode(CString("boxman_skullbase"));
ROUTE884.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE884);

ROUTE& ROUTE885 =  ROUTE();
ROUTE885.setFromNode(CString("Yaws_whole_body_RotationInterpolator"));
ROUTE885.setFromField(CString("value_changed"));
ROUTE885.setToNode(CString("boxman_humanoid_root"));
ROUTE885.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE885);

ROUTE& ROUTE886 =  ROUTE();
ROUTE886.setFromNode(CString("Yaws_whole_body_TranslationInterpolator"));
ROUTE886.setFromField(CString("value_changed"));
ROUTE886.setToNode(CString("boxman_humanoid_root"));
ROUTE886.setToField(CString("set_translation"));
Scene33.addChild(&ROUTE886);

ROUTE& ROUTE887 =  ROUTE();
ROUTE887.setFromNode(CString("Yaw_vl5_YawInterpolator"));
ROUTE887.setFromField(CString("value_changed"));
ROUTE887.setToNode(CString("boxman_vl5"));
ROUTE887.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE887);

ROUTE& ROUTE888 =  ROUTE();
ROUTE888.setFromNode(CString("RollTimer"));
ROUTE888.setFromField(CString("fraction_changed"));
ROUTE888.setToNode(CString("Rolls_r_ankle_RotationInterpolator"));
ROUTE888.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE888);

ROUTE& ROUTE889 =  ROUTE();
ROUTE889.setFromNode(CString("RollTimer"));
ROUTE889.setFromField(CString("fraction_changed"));
ROUTE889.setToNode(CString("Rolls_r_knee_RotationInterpolator"));
ROUTE889.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE889);

ROUTE& ROUTE890 =  ROUTE();
ROUTE890.setFromNode(CString("RollTimer"));
ROUTE890.setFromField(CString("fraction_changed"));
ROUTE890.setToNode(CString("Rolls_r_hip_RotationInterpolator"));
ROUTE890.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE890);

ROUTE& ROUTE891 =  ROUTE();
ROUTE891.setFromNode(CString("RollTimer"));
ROUTE891.setFromField(CString("fraction_changed"));
ROUTE891.setToNode(CString("Rolls_l_ankle_RotationInterpolator"));
ROUTE891.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE891);

ROUTE& ROUTE892 =  ROUTE();
ROUTE892.setFromNode(CString("RollTimer"));
ROUTE892.setFromField(CString("fraction_changed"));
ROUTE892.setToNode(CString("Rolls_l_knee_RotationInterpolator"));
ROUTE892.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE892);

ROUTE& ROUTE893 =  ROUTE();
ROUTE893.setFromNode(CString("RollTimer"));
ROUTE893.setFromField(CString("fraction_changed"));
ROUTE893.setToNode(CString("Rolls_l_hip_RotationInterpolator"));
ROUTE893.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE893);

ROUTE& ROUTE894 =  ROUTE();
ROUTE894.setFromNode(CString("RollTimer"));
ROUTE894.setFromField(CString("fraction_changed"));
ROUTE894.setToNode(CString("Rolls_lower_body_RotationInterpolator"));
ROUTE894.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE894);

ROUTE& ROUTE895 =  ROUTE();
ROUTE895.setFromNode(CString("RollTimer"));
ROUTE895.setFromField(CString("fraction_changed"));
ROUTE895.setToNode(CString("Rolls_r_wrist_RotationInterpolator"));
ROUTE895.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE895);

ROUTE& ROUTE896 =  ROUTE();
ROUTE896.setFromNode(CString("RollTimer"));
ROUTE896.setFromField(CString("fraction_changed"));
ROUTE896.setToNode(CString("Rolls_r_elbow_RotationInterpolator"));
ROUTE896.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE896);

ROUTE& ROUTE897 =  ROUTE();
ROUTE897.setFromNode(CString("RollTimer"));
ROUTE897.setFromField(CString("fraction_changed"));
ROUTE897.setToNode(CString("Rolls_r_shoulder_RotationInterpolator"));
ROUTE897.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE897);

ROUTE& ROUTE898 =  ROUTE();
ROUTE898.setFromNode(CString("RollTimer"));
ROUTE898.setFromField(CString("fraction_changed"));
ROUTE898.setToNode(CString("Rolls_l_wrist_RotationInterpolator"));
ROUTE898.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE898);

ROUTE& ROUTE899 =  ROUTE();
ROUTE899.setFromNode(CString("RollTimer"));
ROUTE899.setFromField(CString("fraction_changed"));
ROUTE899.setToNode(CString("Rolls_l_elbow_RotationInterpolator"));
ROUTE899.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE899);

ROUTE& ROUTE900 =  ROUTE();
ROUTE900.setFromNode(CString("RollTimer"));
ROUTE900.setFromField(CString("fraction_changed"));
ROUTE900.setToNode(CString("Rolls_l_shoulder_RotationInterpolator"));
ROUTE900.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE900);

ROUTE& ROUTE901 =  ROUTE();
ROUTE901.setFromNode(CString("RollTimer"));
ROUTE901.setFromField(CString("fraction_changed"));
ROUTE901.setToNode(CString("Rolls_head_RotationInterpolator"));
ROUTE901.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE901);

ROUTE& ROUTE902 =  ROUTE();
ROUTE902.setFromNode(CString("RollTimer"));
ROUTE902.setFromField(CString("fraction_changed"));
ROUTE902.setToNode(CString("Rolls_neck_RotationInterpolator"));
ROUTE902.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE902);

ROUTE& ROUTE903 =  ROUTE();
ROUTE903.setFromNode(CString("RollTimer"));
ROUTE903.setFromField(CString("fraction_changed"));
ROUTE903.setToNode(CString("Rolls_upper_body_RotationInterpolator"));
ROUTE903.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE903);

ROUTE& ROUTE904 =  ROUTE();
ROUTE904.setFromNode(CString("RollTimer"));
ROUTE904.setFromField(CString("fraction_changed"));
ROUTE904.setToNode(CString("Rolls_whole_body_RotationInterpolator"));
ROUTE904.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE904);

ROUTE& ROUTE905 =  ROUTE();
ROUTE905.setFromNode(CString("RollTimer"));
ROUTE905.setFromField(CString("fraction_changed"));
ROUTE905.setToNode(CString("Rolls_whole_body_TranslationInterpolator"));
ROUTE905.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE905);

ROUTE& ROUTE906 =  ROUTE();
ROUTE906.setFromNode(CString("RollTimer"));
ROUTE906.setFromField(CString("fraction_changed"));
ROUTE906.setToNode(CString("Roll_l_sternoclavicular_RollInterpolator"));
ROUTE906.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE906);

ROUTE& ROUTE907 =  ROUTE();
ROUTE907.setFromNode(CString("RollTimer"));
ROUTE907.setFromField(CString("fraction_changed"));
ROUTE907.setToNode(CString("Roll_l_acromioclavicular_RollInterpolator"));
ROUTE907.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE907);

ROUTE& ROUTE908 =  ROUTE();
ROUTE908.setFromNode(CString("RollTimer"));
ROUTE908.setFromField(CString("fraction_changed"));
ROUTE908.setToNode(CString("Roll_r_sternoclavicular_RollInterpolator"));
ROUTE908.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE908);

ROUTE& ROUTE909 =  ROUTE();
ROUTE909.setFromNode(CString("RollTimer"));
ROUTE909.setFromField(CString("fraction_changed"));
ROUTE909.setToNode(CString("Roll_r_acromioclavicular_RollInterpolator"));
ROUTE909.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE909);

ROUTE& ROUTE910 =  ROUTE();
ROUTE910.setFromNode(CString("RollTimer"));
ROUTE910.setFromField(CString("fraction_changed"));
ROUTE910.setToNode(CString("Roll_r_metatarsal_PitchInterpolator"));
ROUTE910.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE910);

ROUTE& ROUTE911 =  ROUTE();
ROUTE911.setFromNode(CString("RollTimer"));
ROUTE911.setFromField(CString("fraction_changed"));
ROUTE911.setToNode(CString("Roll_sacroiliac_YawInterpolator"));
ROUTE911.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE911);

ROUTE& ROUTE912 =  ROUTE();
ROUTE912.setFromNode(CString("RollTimer"));
ROUTE912.setFromField(CString("fraction_changed"));
ROUTE912.setToNode(CString("Roll_vl5_YawInterpolator"));
ROUTE912.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE912);

ROUTE& ROUTE913 =  ROUTE();
ROUTE913.setFromNode(CString("RollTimer"));
ROUTE913.setFromField(CString("fraction_changed"));
ROUTE913.setToNode(CString("Roll_vc6_YawInterpolator"));
ROUTE913.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE913);

ROUTE& ROUTE914 =  ROUTE();
ROUTE914.setFromNode(CString("RollTimer"));
ROUTE914.setFromField(CString("fraction_changed"));
ROUTE914.setToNode(CString("Roll_l_thumb1_PitchInterpolator"));
ROUTE914.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE914);

ROUTE& ROUTE915 =  ROUTE();
ROUTE915.setFromNode(CString("RollTimer"));
ROUTE915.setFromField(CString("fraction_changed"));
ROUTE915.setToNode(CString("Roll_r_thumb1_PitchInterpolator"));
ROUTE915.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE915);

ROUTE& ROUTE916 =  ROUTE();
ROUTE916.setFromNode(CString("Rolls_r_ankle_RotationInterpolator"));
ROUTE916.setFromField(CString("value_changed"));
ROUTE916.setToNode(CString("boxman_r_ankle"));
ROUTE916.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE916);

ROUTE& ROUTE917 =  ROUTE();
ROUTE917.setFromNode(CString("Rolls_r_knee_RotationInterpolator"));
ROUTE917.setFromField(CString("value_changed"));
ROUTE917.setToNode(CString("boxman_r_knee"));
ROUTE917.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE917);

ROUTE& ROUTE918 =  ROUTE();
ROUTE918.setFromNode(CString("Rolls_r_hip_RotationInterpolator"));
ROUTE918.setFromField(CString("value_changed"));
ROUTE918.setToNode(CString("boxman_r_hip"));
ROUTE918.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE918);

ROUTE& ROUTE919 =  ROUTE();
ROUTE919.setFromNode(CString("Rolls_l_ankle_RotationInterpolator"));
ROUTE919.setFromField(CString("value_changed"));
ROUTE919.setToNode(CString("boxman_l_ankle"));
ROUTE919.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE919);

ROUTE& ROUTE920 =  ROUTE();
ROUTE920.setFromNode(CString("Rolls_l_knee_RotationInterpolator"));
ROUTE920.setFromField(CString("value_changed"));
ROUTE920.setToNode(CString("boxman_l_knee"));
ROUTE920.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE920);

ROUTE& ROUTE921 =  ROUTE();
ROUTE921.setFromNode(CString("Rolls_l_hip_RotationInterpolator"));
ROUTE921.setFromField(CString("value_changed"));
ROUTE921.setToNode(CString("boxman_l_hip"));
ROUTE921.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE921);

ROUTE& ROUTE922 =  ROUTE();
ROUTE922.setFromNode(CString("Rolls_r_wrist_RotationInterpolator"));
ROUTE922.setFromField(CString("value_changed"));
ROUTE922.setToNode(CString("boxman_r_wrist"));
ROUTE922.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE922);

ROUTE& ROUTE923 =  ROUTE();
ROUTE923.setFromNode(CString("Rolls_r_elbow_RotationInterpolator"));
ROUTE923.setFromField(CString("value_changed"));
ROUTE923.setToNode(CString("boxman_r_elbow"));
ROUTE923.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE923);

ROUTE& ROUTE924 =  ROUTE();
ROUTE924.setFromNode(CString("Rolls_r_shoulder_RotationInterpolator"));
ROUTE924.setFromField(CString("value_changed"));
ROUTE924.setToNode(CString("boxman_r_shoulder"));
ROUTE924.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE924);

ROUTE& ROUTE925 =  ROUTE();
ROUTE925.setFromNode(CString("Rolls_l_wrist_RotationInterpolator"));
ROUTE925.setFromField(CString("value_changed"));
ROUTE925.setToNode(CString("boxman_l_wrist"));
ROUTE925.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE925);

ROUTE& ROUTE926 =  ROUTE();
ROUTE926.setFromNode(CString("Rolls_l_elbow_RotationInterpolator"));
ROUTE926.setFromField(CString("value_changed"));
ROUTE926.setToNode(CString("boxman_l_elbow"));
ROUTE926.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE926);

ROUTE& ROUTE927 =  ROUTE();
ROUTE927.setFromNode(CString("Rolls_l_shoulder_RotationInterpolator"));
ROUTE927.setFromField(CString("value_changed"));
ROUTE927.setToNode(CString("boxman_l_shoulder"));
ROUTE927.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE927);

ROUTE& ROUTE928 =  ROUTE();
ROUTE928.setFromNode(CString("Rolls_head_RotationInterpolator"));
ROUTE928.setFromField(CString("value_changed"));
ROUTE928.setToNode(CString("boxman_skullbase"));
ROUTE928.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE928);

ROUTE& ROUTE929 =  ROUTE();
ROUTE929.setFromNode(CString("Rolls_whole_body_RotationInterpolator"));
ROUTE929.setFromField(CString("value_changed"));
ROUTE929.setToNode(CString("boxman_humanoid_root"));
ROUTE929.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE929);

ROUTE& ROUTE930 =  ROUTE();
ROUTE930.setFromNode(CString("Rolls_whole_body_TranslationInterpolator"));
ROUTE930.setFromField(CString("value_changed"));
ROUTE930.setToNode(CString("boxman_humanoid_root"));
ROUTE930.setToField(CString("set_translation"));
Scene33.addChild(&ROUTE930);

ROUTE& ROUTE931 =  ROUTE();
ROUTE931.setFromNode(CString("Roll_vl5_YawInterpolator"));
ROUTE931.setFromField(CString("value_changed"));
ROUTE931.setToNode(CString("boxman_vl5"));
ROUTE931.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE931);

ROUTE& ROUTE932 =  ROUTE();
ROUTE932.setFromNode(CString("WalkTimer"));
ROUTE932.setFromField(CString("fraction_changed"));
ROUTE932.setToNode(CString("Walk_r_ankle_RotationInterpolator"));
ROUTE932.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE932);

ROUTE& ROUTE933 =  ROUTE();
ROUTE933.setFromNode(CString("WalkTimer"));
ROUTE933.setFromField(CString("fraction_changed"));
ROUTE933.setToNode(CString("Walk_r_knee_RotationInterpolator"));
ROUTE933.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE933);

ROUTE& ROUTE934 =  ROUTE();
ROUTE934.setFromNode(CString("WalkTimer"));
ROUTE934.setFromField(CString("fraction_changed"));
ROUTE934.setToNode(CString("Walk_r_hip_RotationInterpolator"));
ROUTE934.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE934);

ROUTE& ROUTE935 =  ROUTE();
ROUTE935.setFromNode(CString("WalkTimer"));
ROUTE935.setFromField(CString("fraction_changed"));
ROUTE935.setToNode(CString("Walk_l_ankle_RotationInterpolator"));
ROUTE935.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE935);

ROUTE& ROUTE936 =  ROUTE();
ROUTE936.setFromNode(CString("WalkTimer"));
ROUTE936.setFromField(CString("fraction_changed"));
ROUTE936.setToNode(CString("Walk_l_knee_RotationInterpolator"));
ROUTE936.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE936);

ROUTE& ROUTE937 =  ROUTE();
ROUTE937.setFromNode(CString("WalkTimer"));
ROUTE937.setFromField(CString("fraction_changed"));
ROUTE937.setToNode(CString("Walk_l_hip_RotationInterpolator"));
ROUTE937.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE937);

ROUTE& ROUTE938 =  ROUTE();
ROUTE938.setFromNode(CString("WalkTimer"));
ROUTE938.setFromField(CString("fraction_changed"));
ROUTE938.setToNode(CString("Walk_lower_body_RotationInterpolator"));
ROUTE938.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE938);

ROUTE& ROUTE939 =  ROUTE();
ROUTE939.setFromNode(CString("WalkTimer"));
ROUTE939.setFromField(CString("fraction_changed"));
ROUTE939.setToNode(CString("Walk_r_wrist_RotationInterpolator"));
ROUTE939.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE939);

ROUTE& ROUTE940 =  ROUTE();
ROUTE940.setFromNode(CString("WalkTimer"));
ROUTE940.setFromField(CString("fraction_changed"));
ROUTE940.setToNode(CString("Walk_r_elbow_RotationInterpolator"));
ROUTE940.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE940);

ROUTE& ROUTE941 =  ROUTE();
ROUTE941.setFromNode(CString("WalkTimer"));
ROUTE941.setFromField(CString("fraction_changed"));
ROUTE941.setToNode(CString("Walk_r_shoulder_RotationInterpolator"));
ROUTE941.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE941);

ROUTE& ROUTE942 =  ROUTE();
ROUTE942.setFromNode(CString("WalkTimer"));
ROUTE942.setFromField(CString("fraction_changed"));
ROUTE942.setToNode(CString("Walk_l_wrist_RotationInterpolator"));
ROUTE942.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE942);

ROUTE& ROUTE943 =  ROUTE();
ROUTE943.setFromNode(CString("WalkTimer"));
ROUTE943.setFromField(CString("fraction_changed"));
ROUTE943.setToNode(CString("Walk_l_elbow_RotationInterpolator"));
ROUTE943.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE943);

ROUTE& ROUTE944 =  ROUTE();
ROUTE944.setFromNode(CString("WalkTimer"));
ROUTE944.setFromField(CString("fraction_changed"));
ROUTE944.setToNode(CString("Walk_l_shoulder_RotationInterpolator"));
ROUTE944.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE944);

ROUTE& ROUTE945 =  ROUTE();
ROUTE945.setFromNode(CString("WalkTimer"));
ROUTE945.setFromField(CString("fraction_changed"));
ROUTE945.setToNode(CString("Walk_head_RotationInterpolator"));
ROUTE945.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE945);

ROUTE& ROUTE946 =  ROUTE();
ROUTE946.setFromNode(CString("WalkTimer"));
ROUTE946.setFromField(CString("fraction_changed"));
ROUTE946.setToNode(CString("Walk_neck_RotationInterpolator"));
ROUTE946.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE946);

ROUTE& ROUTE947 =  ROUTE();
ROUTE947.setFromNode(CString("WalkTimer"));
ROUTE947.setFromField(CString("fraction_changed"));
ROUTE947.setToNode(CString("Walk_upper_body_RotationInterpolator"));
ROUTE947.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE947);

ROUTE& ROUTE948 =  ROUTE();
ROUTE948.setFromNode(CString("WalkTimer"));
ROUTE948.setFromField(CString("fraction_changed"));
ROUTE948.setToNode(CString("Walk_whole_body_RotationInterpolator"));
ROUTE948.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE948);

ROUTE& ROUTE949 =  ROUTE();
ROUTE949.setFromNode(CString("WalkTimer"));
ROUTE949.setFromField(CString("fraction_changed"));
ROUTE949.setToNode(CString("Walk_whole_body_TranslationInterpolator"));
ROUTE949.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE949);

ROUTE& ROUTE950 =  ROUTE();
ROUTE950.setFromNode(CString("WalkTimer"));
ROUTE950.setFromField(CString("fraction_changed"));
ROUTE950.setToNode(CString("Walk_l_sternoclavicular_RollInterpolator"));
ROUTE950.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE950);

ROUTE& ROUTE951 =  ROUTE();
ROUTE951.setFromNode(CString("WalkTimer"));
ROUTE951.setFromField(CString("fraction_changed"));
ROUTE951.setToNode(CString("Walk_l_acromioclavicular_RollInterpolator"));
ROUTE951.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE951);

ROUTE& ROUTE952 =  ROUTE();
ROUTE952.setFromNode(CString("WalkTimer"));
ROUTE952.setFromField(CString("fraction_changed"));
ROUTE952.setToNode(CString("Walk_r_sternoclavicular_RollInterpolator"));
ROUTE952.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE952);

ROUTE& ROUTE953 =  ROUTE();
ROUTE953.setFromNode(CString("WalkTimer"));
ROUTE953.setFromField(CString("fraction_changed"));
ROUTE953.setToNode(CString("Walk_r_acromioclavicular_RollInterpolator"));
ROUTE953.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE953);

ROUTE& ROUTE954 =  ROUTE();
ROUTE954.setFromNode(CString("WalkTimer"));
ROUTE954.setFromField(CString("fraction_changed"));
ROUTE954.setToNode(CString("Walk_r_metatarsal_PitchInterpolator"));
ROUTE954.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE954);

ROUTE& ROUTE955 =  ROUTE();
ROUTE955.setFromNode(CString("WalkTimer"));
ROUTE955.setFromField(CString("fraction_changed"));
ROUTE955.setToNode(CString("Walk_sacroiliac_YawInterpolator"));
ROUTE955.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE955);

ROUTE& ROUTE956 =  ROUTE();
ROUTE956.setFromNode(CString("WalkTimer"));
ROUTE956.setFromField(CString("fraction_changed"));
ROUTE956.setToNode(CString("Walk_vl5_YawInterpolator"));
ROUTE956.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE956);

ROUTE& ROUTE957 =  ROUTE();
ROUTE957.setFromNode(CString("WalkTimer"));
ROUTE957.setFromField(CString("fraction_changed"));
ROUTE957.setToNode(CString("Walk_vc6_YawInterpolator"));
ROUTE957.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE957);

ROUTE& ROUTE958 =  ROUTE();
ROUTE958.setFromNode(CString("WalkTimer"));
ROUTE958.setFromField(CString("fraction_changed"));
ROUTE958.setToNode(CString("Walk_l_thumb1_PitchInterpolator"));
ROUTE958.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE958);

ROUTE& ROUTE959 =  ROUTE();
ROUTE959.setFromNode(CString("WalkTimer"));
ROUTE959.setFromField(CString("fraction_changed"));
ROUTE959.setToNode(CString("Walk_r_thumb1_PitchInterpolator"));
ROUTE959.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE959);

ROUTE& ROUTE960 =  ROUTE();
ROUTE960.setFromNode(CString("Walk_r_ankle_RotationInterpolator"));
ROUTE960.setFromField(CString("value_changed"));
ROUTE960.setToNode(CString("boxman_r_ankle"));
ROUTE960.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE960);

ROUTE& ROUTE961 =  ROUTE();
ROUTE961.setFromNode(CString("Walk_r_knee_RotationInterpolator"));
ROUTE961.setFromField(CString("value_changed"));
ROUTE961.setToNode(CString("boxman_r_knee"));
ROUTE961.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE961);

ROUTE& ROUTE962 =  ROUTE();
ROUTE962.setFromNode(CString("Walk_r_hip_RotationInterpolator"));
ROUTE962.setFromField(CString("value_changed"));
ROUTE962.setToNode(CString("boxman_r_hip"));
ROUTE962.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE962);

ROUTE& ROUTE963 =  ROUTE();
ROUTE963.setFromNode(CString("Walk_l_ankle_RotationInterpolator"));
ROUTE963.setFromField(CString("value_changed"));
ROUTE963.setToNode(CString("boxman_l_ankle"));
ROUTE963.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE963);

ROUTE& ROUTE964 =  ROUTE();
ROUTE964.setFromNode(CString("Walk_l_knee_RotationInterpolator"));
ROUTE964.setFromField(CString("value_changed"));
ROUTE964.setToNode(CString("boxman_l_knee"));
ROUTE964.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE964);

ROUTE& ROUTE965 =  ROUTE();
ROUTE965.setFromNode(CString("Walk_l_hip_RotationInterpolator"));
ROUTE965.setFromField(CString("value_changed"));
ROUTE965.setToNode(CString("boxman_l_hip"));
ROUTE965.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE965);

ROUTE& ROUTE966 =  ROUTE();
ROUTE966.setFromNode(CString("Walk_r_wrist_RotationInterpolator"));
ROUTE966.setFromField(CString("value_changed"));
ROUTE966.setToNode(CString("boxman_r_wrist"));
ROUTE966.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE966);

ROUTE& ROUTE967 =  ROUTE();
ROUTE967.setFromNode(CString("Walk_r_elbow_RotationInterpolator"));
ROUTE967.setFromField(CString("value_changed"));
ROUTE967.setToNode(CString("boxman_r_elbow"));
ROUTE967.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE967);

ROUTE& ROUTE968 =  ROUTE();
ROUTE968.setFromNode(CString("Walk_r_shoulder_RotationInterpolator"));
ROUTE968.setFromField(CString("value_changed"));
ROUTE968.setToNode(CString("boxman_r_shoulder"));
ROUTE968.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE968);

ROUTE& ROUTE969 =  ROUTE();
ROUTE969.setFromNode(CString("Walk_l_wrist_RotationInterpolator"));
ROUTE969.setFromField(CString("value_changed"));
ROUTE969.setToNode(CString("boxman_l_wrist"));
ROUTE969.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE969);

ROUTE& ROUTE970 =  ROUTE();
ROUTE970.setFromNode(CString("Walk_l_elbow_RotationInterpolator"));
ROUTE970.setFromField(CString("value_changed"));
ROUTE970.setToNode(CString("boxman_l_elbow"));
ROUTE970.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE970);

ROUTE& ROUTE971 =  ROUTE();
ROUTE971.setFromNode(CString("Walk_l_shoulder_RotationInterpolator"));
ROUTE971.setFromField(CString("value_changed"));
ROUTE971.setToNode(CString("boxman_l_shoulder"));
ROUTE971.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE971);

ROUTE& ROUTE972 =  ROUTE();
ROUTE972.setFromNode(CString("Walk_head_RotationInterpolator"));
ROUTE972.setFromField(CString("value_changed"));
ROUTE972.setToNode(CString("boxman_skullbase"));
ROUTE972.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE972);

ROUTE& ROUTE973 =  ROUTE();
ROUTE973.setFromNode(CString("Walk_whole_body_RotationInterpolator"));
ROUTE973.setFromField(CString("value_changed"));
ROUTE973.setToNode(CString("boxman_humanoid_root"));
ROUTE973.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE973);

ROUTE& ROUTE974 =  ROUTE();
ROUTE974.setFromNode(CString("Walk_whole_body_TranslationInterpolator"));
ROUTE974.setFromField(CString("value_changed"));
ROUTE974.setToNode(CString("boxman_humanoid_root"));
ROUTE974.setToField(CString("set_translation"));
Scene33.addChild(&ROUTE974);

ROUTE& ROUTE975 =  ROUTE();
ROUTE975.setFromNode(CString("Walk_vl5_YawInterpolator"));
ROUTE975.setFromField(CString("value_changed"));
ROUTE975.setToNode(CString("boxman_vl5"));
ROUTE975.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE975);

ROUTE& ROUTE976 =  ROUTE();
ROUTE976.setFromNode(CString("RunTimer"));
ROUTE976.setFromField(CString("fraction_changed"));
ROUTE976.setToNode(CString("Run_r_ankle_RotationInterpolator_Run"));
ROUTE976.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE976);

ROUTE& ROUTE977 =  ROUTE();
ROUTE977.setFromNode(CString("RunTimer"));
ROUTE977.setFromField(CString("fraction_changed"));
ROUTE977.setToNode(CString("Run_r_knee_RotationInterpolator_Run"));
ROUTE977.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE977);

ROUTE& ROUTE978 =  ROUTE();
ROUTE978.setFromNode(CString("RunTimer"));
ROUTE978.setFromField(CString("fraction_changed"));
ROUTE978.setToNode(CString("Run_r_hip_RotationInterpolator_Run"));
ROUTE978.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE978);

ROUTE& ROUTE979 =  ROUTE();
ROUTE979.setFromNode(CString("RunTimer"));
ROUTE979.setFromField(CString("fraction_changed"));
ROUTE979.setToNode(CString("Run_l_ankle_RotationInterpolator_Run"));
ROUTE979.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE979);

ROUTE& ROUTE980 =  ROUTE();
ROUTE980.setFromNode(CString("RunTimer"));
ROUTE980.setFromField(CString("fraction_changed"));
ROUTE980.setToNode(CString("Run_l_knee_RotationInterpolator_Run"));
ROUTE980.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE980);

ROUTE& ROUTE981 =  ROUTE();
ROUTE981.setFromNode(CString("RunTimer"));
ROUTE981.setFromField(CString("fraction_changed"));
ROUTE981.setToNode(CString("Run_l_hip_RotationInterpolator_Run"));
ROUTE981.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE981);

ROUTE& ROUTE982 =  ROUTE();
ROUTE982.setFromNode(CString("RunTimer"));
ROUTE982.setFromField(CString("fraction_changed"));
ROUTE982.setToNode(CString("Run_lower_body_RotationInterpolator_Run"));
ROUTE982.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE982);

ROUTE& ROUTE983 =  ROUTE();
ROUTE983.setFromNode(CString("RunTimer"));
ROUTE983.setFromField(CString("fraction_changed"));
ROUTE983.setToNode(CString("Run_r_wrist_RotationInterpolator_Run"));
ROUTE983.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE983);

ROUTE& ROUTE984 =  ROUTE();
ROUTE984.setFromNode(CString("RunTimer"));
ROUTE984.setFromField(CString("fraction_changed"));
ROUTE984.setToNode(CString("Run_r_elbow_RotationInterpolator_Run"));
ROUTE984.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE984);

ROUTE& ROUTE985 =  ROUTE();
ROUTE985.setFromNode(CString("RunTimer"));
ROUTE985.setFromField(CString("fraction_changed"));
ROUTE985.setToNode(CString("Run_r_shoulder_RotationInterpolator_Run"));
ROUTE985.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE985);

ROUTE& ROUTE986 =  ROUTE();
ROUTE986.setFromNode(CString("RunTimer"));
ROUTE986.setFromField(CString("fraction_changed"));
ROUTE986.setToNode(CString("Run_l_wrist_RotationInterpolator_Run"));
ROUTE986.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE986);

ROUTE& ROUTE987 =  ROUTE();
ROUTE987.setFromNode(CString("RunTimer"));
ROUTE987.setFromField(CString("fraction_changed"));
ROUTE987.setToNode(CString("Run_l_elbow_RotationInterpolator_Run"));
ROUTE987.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE987);

ROUTE& ROUTE988 =  ROUTE();
ROUTE988.setFromNode(CString("RunTimer"));
ROUTE988.setFromField(CString("fraction_changed"));
ROUTE988.setToNode(CString("Run_l_shoulder_RotationInterpolator_Run"));
ROUTE988.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE988);

ROUTE& ROUTE989 =  ROUTE();
ROUTE989.setFromNode(CString("RunTimer"));
ROUTE989.setFromField(CString("fraction_changed"));
ROUTE989.setToNode(CString("Run_head_RotationInterpolator_Run"));
ROUTE989.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE989);

ROUTE& ROUTE990 =  ROUTE();
ROUTE990.setFromNode(CString("RunTimer"));
ROUTE990.setFromField(CString("fraction_changed"));
ROUTE990.setToNode(CString("Run_neck_RotationInterpolator_Run"));
ROUTE990.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE990);

ROUTE& ROUTE991 =  ROUTE();
ROUTE991.setFromNode(CString("RunTimer"));
ROUTE991.setFromField(CString("fraction_changed"));
ROUTE991.setToNode(CString("Run_upper_body_RotationInterpolator_Run"));
ROUTE991.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE991);

ROUTE& ROUTE992 =  ROUTE();
ROUTE992.setFromNode(CString("RunTimer"));
ROUTE992.setFromField(CString("fraction_changed"));
ROUTE992.setToNode(CString("Run_whole_body_RotationInterpolator_Run"));
ROUTE992.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE992);

ROUTE& ROUTE993 =  ROUTE();
ROUTE993.setFromNode(CString("RunTimer"));
ROUTE993.setFromField(CString("fraction_changed"));
ROUTE993.setToNode(CString("Run_whole_body_TranslationInterpolator_Run"));
ROUTE993.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE993);

ROUTE& ROUTE994 =  ROUTE();
ROUTE994.setFromNode(CString("RunTimer"));
ROUTE994.setFromField(CString("fraction_changed"));
ROUTE994.setToNode(CString("Run_l_sternoclavicular_RollInterpolator"));
ROUTE994.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE994);

ROUTE& ROUTE995 =  ROUTE();
ROUTE995.setFromNode(CString("RunTimer"));
ROUTE995.setFromField(CString("fraction_changed"));
ROUTE995.setToNode(CString("Run_l_acromioclavicular_RollInterpolator"));
ROUTE995.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE995);

ROUTE& ROUTE996 =  ROUTE();
ROUTE996.setFromNode(CString("RunTimer"));
ROUTE996.setFromField(CString("fraction_changed"));
ROUTE996.setToNode(CString("Run_r_sternoclavicular_RollInterpolator"));
ROUTE996.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE996);

ROUTE& ROUTE997 =  ROUTE();
ROUTE997.setFromNode(CString("RunTimer"));
ROUTE997.setFromField(CString("fraction_changed"));
ROUTE997.setToNode(CString("Run_r_acromioclavicular_RollInterpolator"));
ROUTE997.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE997);

ROUTE& ROUTE998 =  ROUTE();
ROUTE998.setFromNode(CString("RunTimer"));
ROUTE998.setFromField(CString("fraction_changed"));
ROUTE998.setToNode(CString("Run_r_metatarsal_PitchInterpolator"));
ROUTE998.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE998);

ROUTE& ROUTE999 =  ROUTE();
ROUTE999.setFromNode(CString("RunTimer"));
ROUTE999.setFromField(CString("fraction_changed"));
ROUTE999.setToNode(CString("Run_sacroiliac_YawInterpolator"));
ROUTE999.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE999);

ROUTE& ROUTE1000 =  ROUTE();
ROUTE1000.setFromNode(CString("RunTimer"));
ROUTE1000.setFromField(CString("fraction_changed"));
ROUTE1000.setToNode(CString("Run_vl5_YawInterpolator"));
ROUTE1000.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1000);

ROUTE& ROUTE1001 =  ROUTE();
ROUTE1001.setFromNode(CString("RunTimer"));
ROUTE1001.setFromField(CString("fraction_changed"));
ROUTE1001.setToNode(CString("Run_vc6_YawInterpolator"));
ROUTE1001.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1001);

ROUTE& ROUTE1002 =  ROUTE();
ROUTE1002.setFromNode(CString("RunTimer"));
ROUTE1002.setFromField(CString("fraction_changed"));
ROUTE1002.setToNode(CString("Run_l_thumb1_PitchInterpolator"));
ROUTE1002.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1002);

ROUTE& ROUTE1003 =  ROUTE();
ROUTE1003.setFromNode(CString("RunTimer"));
ROUTE1003.setFromField(CString("fraction_changed"));
ROUTE1003.setToNode(CString("Run_r_thumb1_PitchInterpolator"));
ROUTE1003.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1003);

ROUTE& ROUTE1004 =  ROUTE();
ROUTE1004.setFromNode(CString("Run_r_ankle_RotationInterpolator_Run"));
ROUTE1004.setFromField(CString("value_changed"));
ROUTE1004.setToNode(CString("boxman_r_ankle"));
ROUTE1004.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1004);

ROUTE& ROUTE1005 =  ROUTE();
ROUTE1005.setFromNode(CString("Run_r_knee_RotationInterpolator_Run"));
ROUTE1005.setFromField(CString("value_changed"));
ROUTE1005.setToNode(CString("boxman_r_knee"));
ROUTE1005.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1005);

ROUTE& ROUTE1006 =  ROUTE();
ROUTE1006.setFromNode(CString("Run_r_hip_RotationInterpolator_Run"));
ROUTE1006.setFromField(CString("value_changed"));
ROUTE1006.setToNode(CString("boxman_r_hip"));
ROUTE1006.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1006);

ROUTE& ROUTE1007 =  ROUTE();
ROUTE1007.setFromNode(CString("Run_l_ankle_RotationInterpolator_Run"));
ROUTE1007.setFromField(CString("value_changed"));
ROUTE1007.setToNode(CString("boxman_l_ankle"));
ROUTE1007.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1007);

ROUTE& ROUTE1008 =  ROUTE();
ROUTE1008.setFromNode(CString("Run_l_knee_RotationInterpolator_Run"));
ROUTE1008.setFromField(CString("value_changed"));
ROUTE1008.setToNode(CString("boxman_l_knee"));
ROUTE1008.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1008);

ROUTE& ROUTE1009 =  ROUTE();
ROUTE1009.setFromNode(CString("Run_l_hip_RotationInterpolator_Run"));
ROUTE1009.setFromField(CString("value_changed"));
ROUTE1009.setToNode(CString("boxman_l_hip"));
ROUTE1009.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1009);

ROUTE& ROUTE1010 =  ROUTE();
ROUTE1010.setFromNode(CString("Run_r_wrist_RotationInterpolator_Run"));
ROUTE1010.setFromField(CString("value_changed"));
ROUTE1010.setToNode(CString("boxman_r_wrist"));
ROUTE1010.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1010);

ROUTE& ROUTE1011 =  ROUTE();
ROUTE1011.setFromNode(CString("Run_r_elbow_RotationInterpolator_Run"));
ROUTE1011.setFromField(CString("value_changed"));
ROUTE1011.setToNode(CString("boxman_r_elbow"));
ROUTE1011.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1011);

ROUTE& ROUTE1012 =  ROUTE();
ROUTE1012.setFromNode(CString("Run_r_shoulder_RotationInterpolator_Run"));
ROUTE1012.setFromField(CString("value_changed"));
ROUTE1012.setToNode(CString("boxman_r_shoulder"));
ROUTE1012.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1012);

ROUTE& ROUTE1013 =  ROUTE();
ROUTE1013.setFromNode(CString("Run_l_wrist_RotationInterpolator_Run"));
ROUTE1013.setFromField(CString("value_changed"));
ROUTE1013.setToNode(CString("boxman_l_wrist"));
ROUTE1013.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1013);

ROUTE& ROUTE1014 =  ROUTE();
ROUTE1014.setFromNode(CString("Run_l_elbow_RotationInterpolator_Run"));
ROUTE1014.setFromField(CString("value_changed"));
ROUTE1014.setToNode(CString("boxman_l_elbow"));
ROUTE1014.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1014);

ROUTE& ROUTE1015 =  ROUTE();
ROUTE1015.setFromNode(CString("Run_l_shoulder_RotationInterpolator_Run"));
ROUTE1015.setFromField(CString("value_changed"));
ROUTE1015.setToNode(CString("boxman_l_shoulder"));
ROUTE1015.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1015);

ROUTE& ROUTE1016 =  ROUTE();
ROUTE1016.setFromNode(CString("Run_head_RotationInterpolator_Run"));
ROUTE1016.setFromField(CString("value_changed"));
ROUTE1016.setToNode(CString("boxman_skullbase"));
ROUTE1016.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1016);

ROUTE& ROUTE1017 =  ROUTE();
ROUTE1017.setFromNode(CString("Run_whole_body_RotationInterpolator_Run"));
ROUTE1017.setFromField(CString("value_changed"));
ROUTE1017.setToNode(CString("boxman_humanoid_root"));
ROUTE1017.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1017);

ROUTE& ROUTE1018 =  ROUTE();
ROUTE1018.setFromNode(CString("Run_whole_body_TranslationInterpolator_Run"));
ROUTE1018.setFromField(CString("value_changed"));
ROUTE1018.setToNode(CString("boxman_humanoid_root"));
ROUTE1018.setToField(CString("set_translation"));
Scene33.addChild(&ROUTE1018);

ROUTE& ROUTE1019 =  ROUTE();
ROUTE1019.setFromNode(CString("Run_vl5_YawInterpolator"));
ROUTE1019.setFromField(CString("value_changed"));
ROUTE1019.setToNode(CString("boxman_vl5"));
ROUTE1019.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1019);

ROUTE& ROUTE1020 =  ROUTE();
ROUTE1020.setFromNode(CString("JumpTimer"));
ROUTE1020.setFromField(CString("fraction_changed"));
ROUTE1020.setToNode(CString("Jump_r_ankle_RotationInterpolator"));
ROUTE1020.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1020);

ROUTE& ROUTE1021 =  ROUTE();
ROUTE1021.setFromNode(CString("JumpTimer"));
ROUTE1021.setFromField(CString("fraction_changed"));
ROUTE1021.setToNode(CString("Jump_r_knee_RotationInterpolator"));
ROUTE1021.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1021);

ROUTE& ROUTE1022 =  ROUTE();
ROUTE1022.setFromNode(CString("JumpTimer"));
ROUTE1022.setFromField(CString("fraction_changed"));
ROUTE1022.setToNode(CString("Jump_r_hip_RotationInterpolator"));
ROUTE1022.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1022);

ROUTE& ROUTE1023 =  ROUTE();
ROUTE1023.setFromNode(CString("JumpTimer"));
ROUTE1023.setFromField(CString("fraction_changed"));
ROUTE1023.setToNode(CString("Jump_l_ankle_RotationInterpolator"));
ROUTE1023.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1023);

ROUTE& ROUTE1024 =  ROUTE();
ROUTE1024.setFromNode(CString("JumpTimer"));
ROUTE1024.setFromField(CString("fraction_changed"));
ROUTE1024.setToNode(CString("Jump_l_knee_RotationInterpolator"));
ROUTE1024.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1024);

ROUTE& ROUTE1025 =  ROUTE();
ROUTE1025.setFromNode(CString("JumpTimer"));
ROUTE1025.setFromField(CString("fraction_changed"));
ROUTE1025.setToNode(CString("Jump_l_hip_RotationInterpolator"));
ROUTE1025.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1025);

ROUTE& ROUTE1026 =  ROUTE();
ROUTE1026.setFromNode(CString("JumpTimer"));
ROUTE1026.setFromField(CString("fraction_changed"));
ROUTE1026.setToNode(CString("Jump_lower_body_RotationInterpolator"));
ROUTE1026.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1026);

ROUTE& ROUTE1027 =  ROUTE();
ROUTE1027.setFromNode(CString("JumpTimer"));
ROUTE1027.setFromField(CString("fraction_changed"));
ROUTE1027.setToNode(CString("Jump_r_wrist_RotationInterpolator"));
ROUTE1027.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1027);

ROUTE& ROUTE1028 =  ROUTE();
ROUTE1028.setFromNode(CString("JumpTimer"));
ROUTE1028.setFromField(CString("fraction_changed"));
ROUTE1028.setToNode(CString("Jump_r_elbow_RotationInterpolator"));
ROUTE1028.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1028);

ROUTE& ROUTE1029 =  ROUTE();
ROUTE1029.setFromNode(CString("JumpTimer"));
ROUTE1029.setFromField(CString("fraction_changed"));
ROUTE1029.setToNode(CString("Jump_r_shoulder_RotationInterpolator"));
ROUTE1029.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1029);

ROUTE& ROUTE1030 =  ROUTE();
ROUTE1030.setFromNode(CString("JumpTimer"));
ROUTE1030.setFromField(CString("fraction_changed"));
ROUTE1030.setToNode(CString("Jump_l_wrist_RotationInterpolator"));
ROUTE1030.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1030);

ROUTE& ROUTE1031 =  ROUTE();
ROUTE1031.setFromNode(CString("JumpTimer"));
ROUTE1031.setFromField(CString("fraction_changed"));
ROUTE1031.setToNode(CString("Jump_l_elbow_RotationInterpolator"));
ROUTE1031.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1031);

ROUTE& ROUTE1032 =  ROUTE();
ROUTE1032.setFromNode(CString("JumpTimer"));
ROUTE1032.setFromField(CString("fraction_changed"));
ROUTE1032.setToNode(CString("Jump_l_shoulder_RotationInterpolator"));
ROUTE1032.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1032);

ROUTE& ROUTE1033 =  ROUTE();
ROUTE1033.setFromNode(CString("JumpTimer"));
ROUTE1033.setFromField(CString("fraction_changed"));
ROUTE1033.setToNode(CString("Jump_head_RotationInterpolator"));
ROUTE1033.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1033);

ROUTE& ROUTE1034 =  ROUTE();
ROUTE1034.setFromNode(CString("JumpTimer"));
ROUTE1034.setFromField(CString("fraction_changed"));
ROUTE1034.setToNode(CString("Jump_neck_RotationInterpolator"));
ROUTE1034.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1034);

ROUTE& ROUTE1035 =  ROUTE();
ROUTE1035.setFromNode(CString("JumpTimer"));
ROUTE1035.setFromField(CString("fraction_changed"));
ROUTE1035.setToNode(CString("Jump_upper_body_RotationInterpolator"));
ROUTE1035.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1035);

ROUTE& ROUTE1036 =  ROUTE();
ROUTE1036.setFromNode(CString("JumpTimer"));
ROUTE1036.setFromField(CString("fraction_changed"));
ROUTE1036.setToNode(CString("Jump_whole_body_RotationInterpolator"));
ROUTE1036.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1036);

ROUTE& ROUTE1037 =  ROUTE();
ROUTE1037.setFromNode(CString("JumpTimer"));
ROUTE1037.setFromField(CString("fraction_changed"));
ROUTE1037.setToNode(CString("Jump_whole_body_TranslationInterpolator"));
ROUTE1037.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1037);

ROUTE& ROUTE1038 =  ROUTE();
ROUTE1038.setFromNode(CString("JumpTimer"));
ROUTE1038.setFromField(CString("fraction_changed"));
ROUTE1038.setToNode(CString("Jump_l_sternoclavicular_RollInterpolator"));
ROUTE1038.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1038);

ROUTE& ROUTE1039 =  ROUTE();
ROUTE1039.setFromNode(CString("JumpTimer"));
ROUTE1039.setFromField(CString("fraction_changed"));
ROUTE1039.setToNode(CString("Jump_l_acromioclavicular_RollInterpolator"));
ROUTE1039.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1039);

ROUTE& ROUTE1040 =  ROUTE();
ROUTE1040.setFromNode(CString("JumpTimer"));
ROUTE1040.setFromField(CString("fraction_changed"));
ROUTE1040.setToNode(CString("Jump_r_sternoclavicular_RollInterpolator"));
ROUTE1040.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1040);

ROUTE& ROUTE1041 =  ROUTE();
ROUTE1041.setFromNode(CString("JumpTimer"));
ROUTE1041.setFromField(CString("fraction_changed"));
ROUTE1041.setToNode(CString("Jump_r_acromioclavicular_RollInterpolator"));
ROUTE1041.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1041);

ROUTE& ROUTE1042 =  ROUTE();
ROUTE1042.setFromNode(CString("JumpTimer"));
ROUTE1042.setFromField(CString("fraction_changed"));
ROUTE1042.setToNode(CString("Jump_r_metatarsal_PitchInterpolator"));
ROUTE1042.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1042);

ROUTE& ROUTE1043 =  ROUTE();
ROUTE1043.setFromNode(CString("JumpTimer"));
ROUTE1043.setFromField(CString("fraction_changed"));
ROUTE1043.setToNode(CString("Jump_sacroiliac_YawInterpolator"));
ROUTE1043.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1043);

ROUTE& ROUTE1044 =  ROUTE();
ROUTE1044.setFromNode(CString("JumpTimer"));
ROUTE1044.setFromField(CString("fraction_changed"));
ROUTE1044.setToNode(CString("Jump_vl5_YawInterpolator"));
ROUTE1044.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1044);

ROUTE& ROUTE1045 =  ROUTE();
ROUTE1045.setFromNode(CString("JumpTimer"));
ROUTE1045.setFromField(CString("fraction_changed"));
ROUTE1045.setToNode(CString("Jump_vc6_YawInterpolator"));
ROUTE1045.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1045);

ROUTE& ROUTE1046 =  ROUTE();
ROUTE1046.setFromNode(CString("JumpTimer"));
ROUTE1046.setFromField(CString("fraction_changed"));
ROUTE1046.setToNode(CString("Jump_l_thumb1_PitchInterpolator"));
ROUTE1046.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1046);

ROUTE& ROUTE1047 =  ROUTE();
ROUTE1047.setFromNode(CString("JumpTimer"));
ROUTE1047.setFromField(CString("fraction_changed"));
ROUTE1047.setToNode(CString("Jump_r_thumb1_PitchInterpolator"));
ROUTE1047.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1047);

ROUTE& ROUTE1048 =  ROUTE();
ROUTE1048.setFromNode(CString("Jump_r_ankle_RotationInterpolator"));
ROUTE1048.setFromField(CString("value_changed"));
ROUTE1048.setToNode(CString("boxman_r_ankle"));
ROUTE1048.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1048);

ROUTE& ROUTE1049 =  ROUTE();
ROUTE1049.setFromNode(CString("Jump_r_knee_RotationInterpolator"));
ROUTE1049.setFromField(CString("value_changed"));
ROUTE1049.setToNode(CString("boxman_r_knee"));
ROUTE1049.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1049);

ROUTE& ROUTE1050 =  ROUTE();
ROUTE1050.setFromNode(CString("Jump_r_hip_RotationInterpolator"));
ROUTE1050.setFromField(CString("value_changed"));
ROUTE1050.setToNode(CString("boxman_r_hip"));
ROUTE1050.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1050);

ROUTE& ROUTE1051 =  ROUTE();
ROUTE1051.setFromNode(CString("Jump_l_ankle_RotationInterpolator"));
ROUTE1051.setFromField(CString("value_changed"));
ROUTE1051.setToNode(CString("boxman_l_ankle"));
ROUTE1051.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1051);

ROUTE& ROUTE1052 =  ROUTE();
ROUTE1052.setFromNode(CString("Jump_l_knee_RotationInterpolator"));
ROUTE1052.setFromField(CString("value_changed"));
ROUTE1052.setToNode(CString("boxman_l_knee"));
ROUTE1052.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1052);

ROUTE& ROUTE1053 =  ROUTE();
ROUTE1053.setFromNode(CString("Jump_l_hip_RotationInterpolator"));
ROUTE1053.setFromField(CString("value_changed"));
ROUTE1053.setToNode(CString("boxman_l_hip"));
ROUTE1053.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1053);

ROUTE& ROUTE1054 =  ROUTE();
ROUTE1054.setFromNode(CString("Jump_r_wrist_RotationInterpolator"));
ROUTE1054.setFromField(CString("value_changed"));
ROUTE1054.setToNode(CString("boxman_r_wrist"));
ROUTE1054.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1054);

ROUTE& ROUTE1055 =  ROUTE();
ROUTE1055.setFromNode(CString("Jump_r_elbow_RotationInterpolator"));
ROUTE1055.setFromField(CString("value_changed"));
ROUTE1055.setToNode(CString("boxman_r_elbow"));
ROUTE1055.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1055);

ROUTE& ROUTE1056 =  ROUTE();
ROUTE1056.setFromNode(CString("Jump_r_shoulder_RotationInterpolator"));
ROUTE1056.setFromField(CString("value_changed"));
ROUTE1056.setToNode(CString("boxman_r_shoulder"));
ROUTE1056.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1056);

ROUTE& ROUTE1057 =  ROUTE();
ROUTE1057.setFromNode(CString("Jump_l_wrist_RotationInterpolator"));
ROUTE1057.setFromField(CString("value_changed"));
ROUTE1057.setToNode(CString("boxman_l_wrist"));
ROUTE1057.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1057);

ROUTE& ROUTE1058 =  ROUTE();
ROUTE1058.setFromNode(CString("Jump_l_elbow_RotationInterpolator"));
ROUTE1058.setFromField(CString("value_changed"));
ROUTE1058.setToNode(CString("boxman_l_elbow"));
ROUTE1058.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1058);

ROUTE& ROUTE1059 =  ROUTE();
ROUTE1059.setFromNode(CString("Jump_l_shoulder_RotationInterpolator"));
ROUTE1059.setFromField(CString("value_changed"));
ROUTE1059.setToNode(CString("boxman_l_shoulder"));
ROUTE1059.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1059);

ROUTE& ROUTE1060 =  ROUTE();
ROUTE1060.setFromNode(CString("Jump_head_RotationInterpolator"));
ROUTE1060.setFromField(CString("value_changed"));
ROUTE1060.setToNode(CString("boxman_skullbase"));
ROUTE1060.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1060);

ROUTE& ROUTE1061 =  ROUTE();
ROUTE1061.setFromNode(CString("Jump_whole_body_RotationInterpolator"));
ROUTE1061.setFromField(CString("value_changed"));
ROUTE1061.setToNode(CString("boxman_humanoid_root"));
ROUTE1061.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1061);

ROUTE& ROUTE1062 =  ROUTE();
ROUTE1062.setFromNode(CString("Jump_whole_body_TranslationInterpolator"));
ROUTE1062.setFromField(CString("value_changed"));
ROUTE1062.setToNode(CString("boxman_humanoid_root"));
ROUTE1062.setToField(CString("set_translation"));
Scene33.addChild(&ROUTE1062);

ROUTE& ROUTE1063 =  ROUTE();
ROUTE1063.setFromNode(CString("Jump_vl5_YawInterpolator"));
ROUTE1063.setFromField(CString("value_changed"));
ROUTE1063.setToNode(CString("boxman_vl5"));
ROUTE1063.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1063);

ROUTE& ROUTE1064 =  ROUTE();
ROUTE1064.setFromNode(CString("KickTimer"));
ROUTE1064.setFromField(CString("fraction_changed"));
ROUTE1064.setToNode(CString("Kick_l_sternoclavicular_RollInterpolator"));
ROUTE1064.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1064);

ROUTE& ROUTE1065 =  ROUTE();
ROUTE1065.setFromNode(CString("KickTimer"));
ROUTE1065.setFromField(CString("fraction_changed"));
ROUTE1065.setToNode(CString("Kick_l_acromioclavicular_RollInterpolator"));
ROUTE1065.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1065);

ROUTE& ROUTE1066 =  ROUTE();
ROUTE1066.setFromNode(CString("KickTimer"));
ROUTE1066.setFromField(CString("fraction_changed"));
ROUTE1066.setToNode(CString("Kick_l_shoulder_RollInterpolator"));
ROUTE1066.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1066);

ROUTE& ROUTE1067 =  ROUTE();
ROUTE1067.setFromNode(CString("KickTimer"));
ROUTE1067.setFromField(CString("fraction_changed"));
ROUTE1067.setToNode(CString("Kick_l_ForeArm_PitchInterpolator"));
ROUTE1067.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1067);

ROUTE& ROUTE1068 =  ROUTE();
ROUTE1068.setFromNode(CString("KickTimer"));
ROUTE1068.setFromField(CString("fraction_changed"));
ROUTE1068.setToNode(CString("Kick_l_wrist_RollInterpolator"));
ROUTE1068.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1068);

ROUTE& ROUTE1069 =  ROUTE();
ROUTE1069.setFromNode(CString("KickTimer"));
ROUTE1069.setFromField(CString("fraction_changed"));
ROUTE1069.setToNode(CString("Kick_l_thumb1_PitchInterpolator"));
ROUTE1069.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1069);

ROUTE& ROUTE1070 =  ROUTE();
ROUTE1070.setFromNode(CString("KickTimer"));
ROUTE1070.setFromField(CString("fraction_changed"));
ROUTE1070.setToNode(CString("Kick_r_sternoclavicular_RollInterpolator"));
ROUTE1070.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1070);

ROUTE& ROUTE1071 =  ROUTE();
ROUTE1071.setFromNode(CString("KickTimer"));
ROUTE1071.setFromField(CString("fraction_changed"));
ROUTE1071.setToNode(CString("Kick_r_acromioclavicular_RollInterpolator"));
ROUTE1071.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1071);

ROUTE& ROUTE1072 =  ROUTE();
ROUTE1072.setFromNode(CString("KickTimer"));
ROUTE1072.setFromField(CString("fraction_changed"));
ROUTE1072.setToNode(CString("Kick_r_shoulder_RollInterpolator"));
ROUTE1072.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1072);

ROUTE& ROUTE1073 =  ROUTE();
ROUTE1073.setFromNode(CString("KickTimer"));
ROUTE1073.setFromField(CString("fraction_changed"));
ROUTE1073.setToNode(CString("Kick_r_ForeArm_PitchInterpolator"));
ROUTE1073.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1073);

ROUTE& ROUTE1074 =  ROUTE();
ROUTE1074.setFromNode(CString("KickTimer"));
ROUTE1074.setFromField(CString("fraction_changed"));
ROUTE1074.setToNode(CString("Kick_r_wrist_RollInterpolator"));
ROUTE1074.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1074);

ROUTE& ROUTE1075 =  ROUTE();
ROUTE1075.setFromNode(CString("KickTimer"));
ROUTE1075.setFromField(CString("fraction_changed"));
ROUTE1075.setToNode(CString("Kick_r_thumb1_PitchInterpolator"));
ROUTE1075.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1075);

ROUTE& ROUTE1076 =  ROUTE();
ROUTE1076.setFromNode(CString("KickTimer"));
ROUTE1076.setFromField(CString("fraction_changed"));
ROUTE1076.setToNode(CString("Kick_r_hip_PitchInterpolator"));
ROUTE1076.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1076);

ROUTE& ROUTE1077 =  ROUTE();
ROUTE1077.setFromNode(CString("KickTimer"));
ROUTE1077.setFromField(CString("fraction_changed"));
ROUTE1077.setToNode(CString("Kick_r_knee_PitchInterpolator"));
ROUTE1077.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1077);

ROUTE& ROUTE1078 =  ROUTE();
ROUTE1078.setFromNode(CString("KickTimer"));
ROUTE1078.setFromField(CString("fraction_changed"));
ROUTE1078.setToNode(CString("Kick_l_hip_PitchInterpolator"));
ROUTE1078.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1078);

ROUTE& ROUTE1079 =  ROUTE();
ROUTE1079.setFromNode(CString("KickTimer"));
ROUTE1079.setFromField(CString("fraction_changed"));
ROUTE1079.setToNode(CString("Kick_l_knee_PitchInterpolator"));
ROUTE1079.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1079);

ROUTE& ROUTE1080 =  ROUTE();
ROUTE1080.setFromNode(CString("KickTimer"));
ROUTE1080.setFromField(CString("fraction_changed"));
ROUTE1080.setToNode(CString("Kick_r_ankle_PitchInterpolator"));
ROUTE1080.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1080);

ROUTE& ROUTE1081 =  ROUTE();
ROUTE1081.setFromNode(CString("KickTimer"));
ROUTE1081.setFromField(CString("fraction_changed"));
ROUTE1081.setToNode(CString("Kick_r_metatarsal_PitchInterpolator"));
ROUTE1081.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1081);

ROUTE& ROUTE1082 =  ROUTE();
ROUTE1082.setFromNode(CString("KickTimer"));
ROUTE1082.setFromField(CString("fraction_changed"));
ROUTE1082.setToNode(CString("Kick_sacroiliac_YawInterpolator"));
ROUTE1082.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1082);

ROUTE& ROUTE1083 =  ROUTE();
ROUTE1083.setFromNode(CString("KickTimer"));
ROUTE1083.setFromField(CString("fraction_changed"));
ROUTE1083.setToNode(CString("Kick_vl5_YawInterpolator"));
ROUTE1083.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1083);

ROUTE& ROUTE1084 =  ROUTE();
ROUTE1084.setFromNode(CString("KickTimer"));
ROUTE1084.setFromField(CString("fraction_changed"));
ROUTE1084.setToNode(CString("Kick_vc6_YawInterpolator"));
ROUTE1084.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1084);

ROUTE& ROUTE1085 =  ROUTE();
ROUTE1085.setFromNode(CString("KickTimer"));
ROUTE1085.setFromField(CString("fraction_changed"));
ROUTE1085.setToNode(CString("Kick_lower_body_RotationInterpolator"));
ROUTE1085.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1085);

ROUTE& ROUTE1086 =  ROUTE();
ROUTE1086.setFromNode(CString("KickTimer"));
ROUTE1086.setFromField(CString("fraction_changed"));
ROUTE1086.setToNode(CString("Kick_upper_body_RotationInterpolator"));
ROUTE1086.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1086);

ROUTE& ROUTE1087 =  ROUTE();
ROUTE1087.setFromNode(CString("KickTimer"));
ROUTE1087.setFromField(CString("fraction_changed"));
ROUTE1087.setToNode(CString("Kick_whole_body_RotationInterpolator"));
ROUTE1087.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1087);

ROUTE& ROUTE1088 =  ROUTE();
ROUTE1088.setFromNode(CString("KickTimer"));
ROUTE1088.setFromField(CString("fraction_changed"));
ROUTE1088.setToNode(CString("Kick_whole_body_TranslationInterpolator"));
ROUTE1088.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1088);

ROUTE& ROUTE1089 =  ROUTE();
ROUTE1089.setFromNode(CString("KickTimer"));
ROUTE1089.setFromField(CString("fraction_changed"));
ROUTE1089.setToNode(CString("Kick_neck_RotationInterpolator"));
ROUTE1089.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1089);

ROUTE& ROUTE1090 =  ROUTE();
ROUTE1090.setFromNode(CString("Kick_l_shoulder_RollInterpolator"));
ROUTE1090.setFromField(CString("value_changed"));
ROUTE1090.setToNode(CString("boxman_l_shoulder"));
ROUTE1090.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1090);

ROUTE& ROUTE1091 =  ROUTE();
ROUTE1091.setFromNode(CString("Kick_l_ForeArm_PitchInterpolator"));
ROUTE1091.setFromField(CString("value_changed"));
ROUTE1091.setToNode(CString("boxman_l_elbow"));
ROUTE1091.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1091);

ROUTE& ROUTE1092 =  ROUTE();
ROUTE1092.setFromNode(CString("Kick_l_wrist_RollInterpolator"));
ROUTE1092.setFromField(CString("value_changed"));
ROUTE1092.setToNode(CString("boxman_l_wrist"));
ROUTE1092.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1092);

ROUTE& ROUTE1093 =  ROUTE();
ROUTE1093.setFromNode(CString("Kick_r_shoulder_RollInterpolator"));
ROUTE1093.setFromField(CString("value_changed"));
ROUTE1093.setToNode(CString("boxman_r_shoulder"));
ROUTE1093.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1093);

ROUTE& ROUTE1094 =  ROUTE();
ROUTE1094.setFromNode(CString("Kick_r_ForeArm_PitchInterpolator"));
ROUTE1094.setFromField(CString("value_changed"));
ROUTE1094.setToNode(CString("boxman_r_elbow"));
ROUTE1094.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1094);

ROUTE& ROUTE1095 =  ROUTE();
ROUTE1095.setFromNode(CString("Kick_r_wrist_RollInterpolator"));
ROUTE1095.setFromField(CString("value_changed"));
ROUTE1095.setToNode(CString("boxman_r_wrist"));
ROUTE1095.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1095);

ROUTE& ROUTE1096 =  ROUTE();
ROUTE1096.setFromNode(CString("Kick_r_hip_PitchInterpolator"));
ROUTE1096.setFromField(CString("value_changed"));
ROUTE1096.setToNode(CString("boxman_r_hip"));
ROUTE1096.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1096);

ROUTE& ROUTE1097 =  ROUTE();
ROUTE1097.setFromNode(CString("Kick_r_knee_PitchInterpolator"));
ROUTE1097.setFromField(CString("value_changed"));
ROUTE1097.setToNode(CString("boxman_r_knee"));
ROUTE1097.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1097);

ROUTE& ROUTE1098 =  ROUTE();
ROUTE1098.setFromNode(CString("Kick_r_ankle_PitchInterpolator"));
ROUTE1098.setFromField(CString("value_changed"));
ROUTE1098.setToNode(CString("boxman_r_ankle"));
ROUTE1098.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1098);

ROUTE& ROUTE1099 =  ROUTE();
ROUTE1099.setFromNode(CString("Kick_l_hip_PitchInterpolator"));
ROUTE1099.setFromField(CString("value_changed"));
ROUTE1099.setToNode(CString("boxman_l_hip"));
ROUTE1099.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1099);

ROUTE& ROUTE1100 =  ROUTE();
ROUTE1100.setFromNode(CString("Kick_l_knee_PitchInterpolator"));
ROUTE1100.setFromField(CString("value_changed"));
ROUTE1100.setToNode(CString("boxman_l_knee"));
ROUTE1100.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1100);

ROUTE& ROUTE1101 =  ROUTE();
ROUTE1101.setFromNode(CString("Kick_r_ankle_PitchInterpolator"));
ROUTE1101.setFromField(CString("value_changed"));
ROUTE1101.setToNode(CString("boxman_l_ankle"));
ROUTE1101.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1101);

ROUTE& ROUTE1102 =  ROUTE();
ROUTE1102.setFromNode(CString("Kick_vl5_YawInterpolator"));
ROUTE1102.setFromField(CString("value_changed"));
ROUTE1102.setToNode(CString("boxman_vl5"));
ROUTE1102.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1102);

ROUTE& ROUTE1103 =  ROUTE();
ROUTE1103.setFromNode(CString("Kick_whole_body_RotationInterpolator"));
ROUTE1103.setFromField(CString("value_changed"));
ROUTE1103.setToNode(CString("boxman_humanoid_root"));
ROUTE1103.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1103);

ROUTE& ROUTE1104 =  ROUTE();
ROUTE1104.setFromNode(CString("Kick_whole_body_TranslationInterpolator"));
ROUTE1104.setFromField(CString("value_changed"));
ROUTE1104.setToNode(CString("boxman_humanoid_root"));
ROUTE1104.setToField(CString("set_translation"));
Scene33.addChild(&ROUTE1104);

ROUTE& ROUTE1105 =  ROUTE();
ROUTE1105.setFromNode(CString("HudProx"));
ROUTE1105.setFromField(CString("position_changed"));
ROUTE1105.setToNode(CString("HudXform"));
ROUTE1105.setToField(CString("set_translation"));
Scene33.addChild(&ROUTE1105);

ROUTE& ROUTE1106 =  ROUTE();
ROUTE1106.setFromNode(CString("HudProx"));
ROUTE1106.setFromField(CString("orientation_changed"));
ROUTE1106.setToNode(CString("HudXform"));
ROUTE1106.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1106);

ROUTE& ROUTE1107 =  ROUTE();
ROUTE1107.setFromNode(CString("Stand_Touch"));
ROUTE1107.setFromField(CString("touchTime"));
ROUTE1107.setToNode(CString("PitchTimer"));
ROUTE1107.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1107);

ROUTE& ROUTE1108 =  ROUTE();
ROUTE1108.setFromNode(CString("Stand_Touch"));
ROUTE1108.setFromField(CString("touchTime"));
ROUTE1108.setToNode(CString("YawTimer"));
ROUTE1108.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1108);

ROUTE& ROUTE1109 =  ROUTE();
ROUTE1109.setFromNode(CString("Stand_Touch"));
ROUTE1109.setFromField(CString("touchTime"));
ROUTE1109.setToNode(CString("RollTimer"));
ROUTE1109.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1109);

ROUTE& ROUTE1110 =  ROUTE();
ROUTE1110.setFromNode(CString("Stand_Touch"));
ROUTE1110.setFromField(CString("touchTime"));
ROUTE1110.setToNode(CString("WalkTimer"));
ROUTE1110.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1110);

ROUTE& ROUTE1111 =  ROUTE();
ROUTE1111.setFromNode(CString("Stand_Touch"));
ROUTE1111.setFromField(CString("touchTime"));
ROUTE1111.setToNode(CString("RunTimer"));
ROUTE1111.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1111);

ROUTE& ROUTE1112 =  ROUTE();
ROUTE1112.setFromNode(CString("Stand_Touch"));
ROUTE1112.setFromField(CString("touchTime"));
ROUTE1112.setToNode(CString("JumpTimer"));
ROUTE1112.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1112);

ROUTE& ROUTE1113 =  ROUTE();
ROUTE1113.setFromNode(CString("Stand_Touch"));
ROUTE1113.setFromField(CString("touchTime"));
ROUTE1113.setToNode(CString("KickTimer"));
ROUTE1113.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1113);

ROUTE& ROUTE1114 =  ROUTE();
ROUTE1114.setFromNode(CString("Stand_Touch"));
ROUTE1114.setFromField(CString("touchTime"));
ROUTE1114.setToNode(CString("StopTimer"));
ROUTE1114.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1114);

ROUTE& ROUTE1115 =  ROUTE();
ROUTE1115.setFromNode(CString("Stand_Touch"));
ROUTE1115.setFromField(CString("touchTime"));
ROUTE1115.setToNode(CString("StandTimer"));
ROUTE1115.setToField(CString("set_startTime"));
Scene33.addChild(&ROUTE1115);

ROUTE& ROUTE1116 =  ROUTE();
ROUTE1116.setFromNode(CString("Pitch_Touch"));
ROUTE1116.setFromField(CString("touchTime"));
ROUTE1116.setToNode(CString("StandTimer"));
ROUTE1116.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1116);

ROUTE& ROUTE1117 =  ROUTE();
ROUTE1117.setFromNode(CString("Pitch_Touch"));
ROUTE1117.setFromField(CString("touchTime"));
ROUTE1117.setToNode(CString("YawTimer"));
ROUTE1117.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1117);

ROUTE& ROUTE1118 =  ROUTE();
ROUTE1118.setFromNode(CString("Pitch_Touch"));
ROUTE1118.setFromField(CString("touchTime"));
ROUTE1118.setToNode(CString("RollTimer"));
ROUTE1118.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1118);

ROUTE& ROUTE1119 =  ROUTE();
ROUTE1119.setFromNode(CString("Pitch_Touch"));
ROUTE1119.setFromField(CString("touchTime"));
ROUTE1119.setToNode(CString("WalkTimer"));
ROUTE1119.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1119);

ROUTE& ROUTE1120 =  ROUTE();
ROUTE1120.setFromNode(CString("Pitch_Touch"));
ROUTE1120.setFromField(CString("touchTime"));
ROUTE1120.setToNode(CString("RunTimer"));
ROUTE1120.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1120);

ROUTE& ROUTE1121 =  ROUTE();
ROUTE1121.setFromNode(CString("Pitch_Touch"));
ROUTE1121.setFromField(CString("touchTime"));
ROUTE1121.setToNode(CString("JumpTimer"));
ROUTE1121.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1121);

ROUTE& ROUTE1122 =  ROUTE();
ROUTE1122.setFromNode(CString("Pitch_Touch"));
ROUTE1122.setFromField(CString("touchTime"));
ROUTE1122.setToNode(CString("KickTimer"));
ROUTE1122.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1122);

ROUTE& ROUTE1123 =  ROUTE();
ROUTE1123.setFromNode(CString("Pitch_Touch"));
ROUTE1123.setFromField(CString("touchTime"));
ROUTE1123.setToNode(CString("StopTimer"));
ROUTE1123.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1123);

ROUTE& ROUTE1124 =  ROUTE();
ROUTE1124.setFromNode(CString("Pitch_Touch"));
ROUTE1124.setFromField(CString("touchTime"));
ROUTE1124.setToNode(CString("PitchTimer"));
ROUTE1124.setToField(CString("set_startTime"));
Scene33.addChild(&ROUTE1124);

ROUTE& ROUTE1125 =  ROUTE();
ROUTE1125.setFromNode(CString("Yaw_Touch"));
ROUTE1125.setFromField(CString("touchTime"));
ROUTE1125.setToNode(CString("StandTimer"));
ROUTE1125.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1125);

ROUTE& ROUTE1126 =  ROUTE();
ROUTE1126.setFromNode(CString("Yaw_Touch"));
ROUTE1126.setFromField(CString("touchTime"));
ROUTE1126.setToNode(CString("PitchTimer"));
ROUTE1126.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1126);

ROUTE& ROUTE1127 =  ROUTE();
ROUTE1127.setFromNode(CString("Yaw_Touch"));
ROUTE1127.setFromField(CString("touchTime"));
ROUTE1127.setToNode(CString("RollTimer"));
ROUTE1127.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1127);

ROUTE& ROUTE1128 =  ROUTE();
ROUTE1128.setFromNode(CString("Yaw_Touch"));
ROUTE1128.setFromField(CString("touchTime"));
ROUTE1128.setToNode(CString("WalkTimer"));
ROUTE1128.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1128);

ROUTE& ROUTE1129 =  ROUTE();
ROUTE1129.setFromNode(CString("Yaw_Touch"));
ROUTE1129.setFromField(CString("touchTime"));
ROUTE1129.setToNode(CString("RunTimer"));
ROUTE1129.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1129);

ROUTE& ROUTE1130 =  ROUTE();
ROUTE1130.setFromNode(CString("Yaw_Touch"));
ROUTE1130.setFromField(CString("touchTime"));
ROUTE1130.setToNode(CString("JumpTimer"));
ROUTE1130.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1130);

ROUTE& ROUTE1131 =  ROUTE();
ROUTE1131.setFromNode(CString("Yaw_Touch"));
ROUTE1131.setFromField(CString("touchTime"));
ROUTE1131.setToNode(CString("KickTimer"));
ROUTE1131.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1131);

ROUTE& ROUTE1132 =  ROUTE();
ROUTE1132.setFromNode(CString("Yaw_Touch"));
ROUTE1132.setFromField(CString("touchTime"));
ROUTE1132.setToNode(CString("StopTimer"));
ROUTE1132.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1132);

ROUTE& ROUTE1133 =  ROUTE();
ROUTE1133.setFromNode(CString("Yaw_Touch"));
ROUTE1133.setFromField(CString("touchTime"));
ROUTE1133.setToNode(CString("YawTimer"));
ROUTE1133.setToField(CString("set_startTime"));
Scene33.addChild(&ROUTE1133);

ROUTE& ROUTE1134 =  ROUTE();
ROUTE1134.setFromNode(CString("Walk_Touch"));
ROUTE1134.setFromField(CString("touchTime"));
ROUTE1134.setToNode(CString("StandTimer"));
ROUTE1134.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1134);

ROUTE& ROUTE1135 =  ROUTE();
ROUTE1135.setFromNode(CString("Walk_Touch"));
ROUTE1135.setFromField(CString("touchTime"));
ROUTE1135.setToNode(CString("PitchTimer"));
ROUTE1135.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1135);

ROUTE& ROUTE1136 =  ROUTE();
ROUTE1136.setFromNode(CString("Walk_Touch"));
ROUTE1136.setFromField(CString("touchTime"));
ROUTE1136.setToNode(CString("YawTimer"));
ROUTE1136.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1136);

ROUTE& ROUTE1137 =  ROUTE();
ROUTE1137.setFromNode(CString("Walk_Touch"));
ROUTE1137.setFromField(CString("touchTime"));
ROUTE1137.setToNode(CString("RollTimer"));
ROUTE1137.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1137);

ROUTE& ROUTE1138 =  ROUTE();
ROUTE1138.setFromNode(CString("Walk_Touch"));
ROUTE1138.setFromField(CString("touchTime"));
ROUTE1138.setToNode(CString("RunTimer"));
ROUTE1138.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1138);

ROUTE& ROUTE1139 =  ROUTE();
ROUTE1139.setFromNode(CString("Walk_Touch"));
ROUTE1139.setFromField(CString("touchTime"));
ROUTE1139.setToNode(CString("JumpTimer"));
ROUTE1139.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1139);

ROUTE& ROUTE1140 =  ROUTE();
ROUTE1140.setFromNode(CString("Walk_Touch"));
ROUTE1140.setFromField(CString("touchTime"));
ROUTE1140.setToNode(CString("KickTimer"));
ROUTE1140.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1140);

ROUTE& ROUTE1141 =  ROUTE();
ROUTE1141.setFromNode(CString("Walk_Touch"));
ROUTE1141.setFromField(CString("touchTime"));
ROUTE1141.setToNode(CString("StopTimer"));
ROUTE1141.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1141);

ROUTE& ROUTE1142 =  ROUTE();
ROUTE1142.setFromNode(CString("Walk_Touch"));
ROUTE1142.setFromField(CString("touchTime"));
ROUTE1142.setToNode(CString("WalkTimer"));
ROUTE1142.setToField(CString("set_startTime"));
Scene33.addChild(&ROUTE1142);

ROUTE& ROUTE1143 =  ROUTE();
ROUTE1143.setFromNode(CString("Roll_Touch"));
ROUTE1143.setFromField(CString("touchTime"));
ROUTE1143.setToNode(CString("StandTimer"));
ROUTE1143.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1143);

ROUTE& ROUTE1144 =  ROUTE();
ROUTE1144.setFromNode(CString("Roll_Touch"));
ROUTE1144.setFromField(CString("touchTime"));
ROUTE1144.setToNode(CString("PitchTimer"));
ROUTE1144.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1144);

ROUTE& ROUTE1145 =  ROUTE();
ROUTE1145.setFromNode(CString("Roll_Touch"));
ROUTE1145.setFromField(CString("touchTime"));
ROUTE1145.setToNode(CString("YawTimer"));
ROUTE1145.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1145);

ROUTE& ROUTE1146 =  ROUTE();
ROUTE1146.setFromNode(CString("Roll_Touch"));
ROUTE1146.setFromField(CString("touchTime"));
ROUTE1146.setToNode(CString("WalkTimer"));
ROUTE1146.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1146);

ROUTE& ROUTE1147 =  ROUTE();
ROUTE1147.setFromNode(CString("Roll_Touch"));
ROUTE1147.setFromField(CString("touchTime"));
ROUTE1147.setToNode(CString("RunTimer"));
ROUTE1147.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1147);

ROUTE& ROUTE1148 =  ROUTE();
ROUTE1148.setFromNode(CString("Roll_Touch"));
ROUTE1148.setFromField(CString("touchTime"));
ROUTE1148.setToNode(CString("JumpTimer"));
ROUTE1148.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1148);

ROUTE& ROUTE1149 =  ROUTE();
ROUTE1149.setFromNode(CString("Roll_Touch"));
ROUTE1149.setFromField(CString("touchTime"));
ROUTE1149.setToNode(CString("KickTimer"));
ROUTE1149.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1149);

ROUTE& ROUTE1150 =  ROUTE();
ROUTE1150.setFromNode(CString("Roll_Touch"));
ROUTE1150.setFromField(CString("touchTime"));
ROUTE1150.setToNode(CString("StopTimer"));
ROUTE1150.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1150);

ROUTE& ROUTE1151 =  ROUTE();
ROUTE1151.setFromNode(CString("Roll_Touch"));
ROUTE1151.setFromField(CString("touchTime"));
ROUTE1151.setToNode(CString("RollTimer"));
ROUTE1151.setToField(CString("set_startTime"));
Scene33.addChild(&ROUTE1151);

ROUTE& ROUTE1152 =  ROUTE();
ROUTE1152.setFromNode(CString("Run_Touch"));
ROUTE1152.setFromField(CString("touchTime"));
ROUTE1152.setToNode(CString("StandTimer"));
ROUTE1152.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1152);

ROUTE& ROUTE1153 =  ROUTE();
ROUTE1153.setFromNode(CString("Run_Touch"));
ROUTE1153.setFromField(CString("touchTime"));
ROUTE1153.setToNode(CString("PitchTimer"));
ROUTE1153.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1153);

ROUTE& ROUTE1154 =  ROUTE();
ROUTE1154.setFromNode(CString("Run_Touch"));
ROUTE1154.setFromField(CString("touchTime"));
ROUTE1154.setToNode(CString("YawTimer"));
ROUTE1154.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1154);

ROUTE& ROUTE1155 =  ROUTE();
ROUTE1155.setFromNode(CString("Run_Touch"));
ROUTE1155.setFromField(CString("touchTime"));
ROUTE1155.setToNode(CString("RollTimer"));
ROUTE1155.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1155);

ROUTE& ROUTE1156 =  ROUTE();
ROUTE1156.setFromNode(CString("Run_Touch"));
ROUTE1156.setFromField(CString("touchTime"));
ROUTE1156.setToNode(CString("WalkTimer"));
ROUTE1156.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1156);

ROUTE& ROUTE1157 =  ROUTE();
ROUTE1157.setFromNode(CString("Run_Touch"));
ROUTE1157.setFromField(CString("touchTime"));
ROUTE1157.setToNode(CString("JumpTimer"));
ROUTE1157.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1157);

ROUTE& ROUTE1158 =  ROUTE();
ROUTE1158.setFromNode(CString("Run_Touch"));
ROUTE1158.setFromField(CString("touchTime"));
ROUTE1158.setToNode(CString("KickTimer"));
ROUTE1158.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1158);

ROUTE& ROUTE1159 =  ROUTE();
ROUTE1159.setFromNode(CString("Run_Touch"));
ROUTE1159.setFromField(CString("touchTime"));
ROUTE1159.setToNode(CString("StopTimer"));
ROUTE1159.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1159);

ROUTE& ROUTE1160 =  ROUTE();
ROUTE1160.setFromNode(CString("Run_Touch"));
ROUTE1160.setFromField(CString("touchTime"));
ROUTE1160.setToNode(CString("RunTimer"));
ROUTE1160.setToField(CString("set_startTime"));
Scene33.addChild(&ROUTE1160);

ROUTE& ROUTE1161 =  ROUTE();
ROUTE1161.setFromNode(CString("Jump_Touch"));
ROUTE1161.setFromField(CString("touchTime"));
ROUTE1161.setToNode(CString("StandTimer"));
ROUTE1161.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1161);

ROUTE& ROUTE1162 =  ROUTE();
ROUTE1162.setFromNode(CString("Jump_Touch"));
ROUTE1162.setFromField(CString("touchTime"));
ROUTE1162.setToNode(CString("PitchTimer"));
ROUTE1162.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1162);

ROUTE& ROUTE1163 =  ROUTE();
ROUTE1163.setFromNode(CString("Jump_Touch"));
ROUTE1163.setFromField(CString("touchTime"));
ROUTE1163.setToNode(CString("YawTimer"));
ROUTE1163.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1163);

ROUTE& ROUTE1164 =  ROUTE();
ROUTE1164.setFromNode(CString("Jump_Touch"));
ROUTE1164.setFromField(CString("touchTime"));
ROUTE1164.setToNode(CString("RollTimer"));
ROUTE1164.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1164);

ROUTE& ROUTE1165 =  ROUTE();
ROUTE1165.setFromNode(CString("Jump_Touch"));
ROUTE1165.setFromField(CString("touchTime"));
ROUTE1165.setToNode(CString("WalkTimer"));
ROUTE1165.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1165);

ROUTE& ROUTE1166 =  ROUTE();
ROUTE1166.setFromNode(CString("Jump_Touch"));
ROUTE1166.setFromField(CString("touchTime"));
ROUTE1166.setToNode(CString("RunTimer"));
ROUTE1166.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1166);

ROUTE& ROUTE1167 =  ROUTE();
ROUTE1167.setFromNode(CString("Jump_Touch"));
ROUTE1167.setFromField(CString("touchTime"));
ROUTE1167.setToNode(CString("KickTimer"));
ROUTE1167.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1167);

ROUTE& ROUTE1168 =  ROUTE();
ROUTE1168.setFromNode(CString("Jump_Touch"));
ROUTE1168.setFromField(CString("touchTime"));
ROUTE1168.setToNode(CString("StopTimer"));
ROUTE1168.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1168);

ROUTE& ROUTE1169 =  ROUTE();
ROUTE1169.setFromNode(CString("Jump_Touch"));
ROUTE1169.setFromField(CString("touchTime"));
ROUTE1169.setToNode(CString("JumpTimer"));
ROUTE1169.setToField(CString("set_startTime"));
Scene33.addChild(&ROUTE1169);

ROUTE& ROUTE1170 =  ROUTE();
ROUTE1170.setFromNode(CString("Kick_Touch"));
ROUTE1170.setFromField(CString("touchTime"));
ROUTE1170.setToNode(CString("StandTimer"));
ROUTE1170.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1170);

ROUTE& ROUTE1171 =  ROUTE();
ROUTE1171.setFromNode(CString("Kick_Touch"));
ROUTE1171.setFromField(CString("touchTime"));
ROUTE1171.setToNode(CString("PitchTimer"));
ROUTE1171.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1171);

ROUTE& ROUTE1172 =  ROUTE();
ROUTE1172.setFromNode(CString("Kick_Touch"));
ROUTE1172.setFromField(CString("touchTime"));
ROUTE1172.setToNode(CString("YawTimer"));
ROUTE1172.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1172);

ROUTE& ROUTE1173 =  ROUTE();
ROUTE1173.setFromNode(CString("Kick_Touch"));
ROUTE1173.setFromField(CString("touchTime"));
ROUTE1173.setToNode(CString("RollTimer"));
ROUTE1173.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1173);

ROUTE& ROUTE1174 =  ROUTE();
ROUTE1174.setFromNode(CString("Kick_Touch"));
ROUTE1174.setFromField(CString("touchTime"));
ROUTE1174.setToNode(CString("WalkTimer"));
ROUTE1174.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1174);

ROUTE& ROUTE1175 =  ROUTE();
ROUTE1175.setFromNode(CString("Kick_Touch"));
ROUTE1175.setFromField(CString("touchTime"));
ROUTE1175.setToNode(CString("RunTimer"));
ROUTE1175.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1175);

ROUTE& ROUTE1176 =  ROUTE();
ROUTE1176.setFromNode(CString("Kick_Touch"));
ROUTE1176.setFromField(CString("touchTime"));
ROUTE1176.setToNode(CString("JumpTimer"));
ROUTE1176.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1176);

ROUTE& ROUTE1177 =  ROUTE();
ROUTE1177.setFromNode(CString("Kick_Touch"));
ROUTE1177.setFromField(CString("touchTime"));
ROUTE1177.setToNode(CString("StopTimer"));
ROUTE1177.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1177);

ROUTE& ROUTE1178 =  ROUTE();
ROUTE1178.setFromNode(CString("Kick_Touch"));
ROUTE1178.setFromField(CString("touchTime"));
ROUTE1178.setToNode(CString("KickTimer"));
ROUTE1178.setToField(CString("set_startTime"));
Scene33.addChild(&ROUTE1178);

ROUTE& ROUTE1179 =  ROUTE();
ROUTE1179.setFromNode(CString("Stop_Touch"));
ROUTE1179.setFromField(CString("touchTime"));
ROUTE1179.setToNode(CString("StandTimer"));
ROUTE1179.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1179);

ROUTE& ROUTE1180 =  ROUTE();
ROUTE1180.setFromNode(CString("Stop_Touch"));
ROUTE1180.setFromField(CString("touchTime"));
ROUTE1180.setToNode(CString("PitchTimer"));
ROUTE1180.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1180);

ROUTE& ROUTE1181 =  ROUTE();
ROUTE1181.setFromNode(CString("Stop_Touch"));
ROUTE1181.setFromField(CString("touchTime"));
ROUTE1181.setToNode(CString("YawTimer"));
ROUTE1181.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1181);

ROUTE& ROUTE1182 =  ROUTE();
ROUTE1182.setFromNode(CString("Stop_Touch"));
ROUTE1182.setFromField(CString("touchTime"));
ROUTE1182.setToNode(CString("RollTimer"));
ROUTE1182.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1182);

ROUTE& ROUTE1183 =  ROUTE();
ROUTE1183.setFromNode(CString("Stop_Touch"));
ROUTE1183.setFromField(CString("touchTime"));
ROUTE1183.setToNode(CString("WalkTimer"));
ROUTE1183.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1183);

ROUTE& ROUTE1184 =  ROUTE();
ROUTE1184.setFromNode(CString("Stop_Touch"));
ROUTE1184.setFromField(CString("touchTime"));
ROUTE1184.setToNode(CString("RunTimer"));
ROUTE1184.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1184);

ROUTE& ROUTE1185 =  ROUTE();
ROUTE1185.setFromNode(CString("Stop_Touch"));
ROUTE1185.setFromField(CString("touchTime"));
ROUTE1185.setToNode(CString("JumpTimer"));
ROUTE1185.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1185);

ROUTE& ROUTE1186 =  ROUTE();
ROUTE1186.setFromNode(CString("Stop_Touch"));
ROUTE1186.setFromField(CString("touchTime"));
ROUTE1186.setToNode(CString("KickTimer"));
ROUTE1186.setToField(CString("set_stopTime"));
Scene33.addChild(&ROUTE1186);

ROUTE& ROUTE1187 =  ROUTE();
ROUTE1187.setFromNode(CString("Stop_Touch"));
ROUTE1187.setFromField(CString("touchTime"));
ROUTE1187.setToNode(CString("StopTimer"));
ROUTE1187.setToField(CString("set_startTime"));
Scene33.addChild(&ROUTE1187);

X3D0.setScene(&Scene33);

}
