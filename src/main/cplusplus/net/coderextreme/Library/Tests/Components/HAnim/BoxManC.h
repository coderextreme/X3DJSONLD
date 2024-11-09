//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("H-Anim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("BoxMan.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("A Seamless VRML Human, demonstrating the H-Anim 2001 Specification. Animation scripting via EcmaScript."));
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
meta9.setContent(CString("17 November 2014"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("http://h-anim.org"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("boxman.original.wrl"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("TODO"));
meta12.setContent(CString("reconcile z-coordinate mismatches using source anthropometry, see source for details"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("http://h-anim.org/Models/H-Anim2001/boxman"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("http://h-anim.org/Models/H-Anim2001/boxman/boxman.wrl"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("http://www.vapourtech.com/team/james/boxman.wrl"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("reference"));
meta16.setContent(CString("http://h-anim.org/Specifications/H-Anim2001"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("reference"));
meta17.setContent(CString("http://h-anim.org/Models"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("reference"));
meta18.setContent(CString("http://h-anim.org/Nodes"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("reference"));
meta19.setContent(CString("http://www.web3d.org/x3d/content/X3dToVrml97.xslt"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("rights"));
meta20.setContent(CString("(C) 2000 James Smith - james@vapourtech.com"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("reference"));
meta21.setContent(CString("http://www.vapourtech.com"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("subject"));
meta22.setContent(CString("BoxMan H-Anim 2.0"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("identifier"));
meta23.setContent(CString("http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/BoxMan.x3d"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("generator"));
meta24.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("license"));
meta25.setContent(CString("../license.html"));
head1.addMeta(&meta25);

X3D0.setHead(&head1);

Scene& Scene26 =  Scene();
WorldInfo& WorldInfo27 =  WorldInfo();
WorldInfo27.setInfo(new CString[]{CString("(C) 2000 James Smith - james@vapourtech.com"), CString("http://www.vapourtech.com/team/james/boxman.wrl"), CString("Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com")}, 3);
WorldInfo27.setTitle(CString("BoxMan - A Seamless VRML Human"));
Scene26.addChild(&WorldInfo27);

Background& Background28 =  Background();
Background28.setGroundColor(new float[]{0.6,0.6,0.6}, 3);
Background28.setSkyColor(new float[]{0.75,0.75,0.75}, 3);
Scene26.addChild(&Background28);

//H-Anim node prototypes are provided automatically by the X3dToVrml97.xsl translation stylesheet when converting to VRML97 (which didn't include H-Anim)
HAnimHumanoid& HAnimHumanoid29 =  HAnimHumanoid();
HAnimHumanoid29.X3DNode::setName(CString("Humanoid"));
HAnimHumanoid29.setDEF(CString("HUMANOID"));
HAnimHumanoid29.setInfo(new CString[]{CString("authorName=James Smith"), CString("authorEmail=james@vapourtech.com"), CString("copyright=(C) 2000 James Smith - james@vapourtech.com"), CString("humanoidVersion=2.0")}, 4);
HAnimHumanoid29.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint30 =  HAnimJoint();
HAnimJoint30.X3DNode::setName(CString("HumanoidRoot"));
HAnimJoint30.setDEF(CString("hanim_HumanoidRoot"));
HAnimJoint30.setCenter(new float[]{0.0,0.9723,-0.0728});
HAnimJoint30.setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11}, 12);
HAnimJoint30.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
HAnimJoint30.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint30.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment31 =  HAnimSegment();
HAnimSegment31.X3DNode::setName(CString("sacrum"));
HAnimSegment31.setDEF(CString("hanim_sacrum"));
Transform& Transform32 =  Transform();
Transform32.setTranslation(new float[]{0.0,0.9723,-0.0728});
Shape& Shape33 =  Shape();
Shape33.setDEF(CString("SphereYellow"));
Appearance& Appearance34 =  Appearance();
Material& Material35 =  Material();
Material35.setDiffuseColor(new float[]{1.0,1.0,0.0});
Appearance34.addChild(&Material35);

Shape33.addChild(&Appearance34);

Sphere& Sphere36 =  Sphere();
Sphere36.setRadius(0.02);
Shape33.setGeometry(&Sphere36);

Transform32.addChild(&Shape33);

HAnimSegment31.addChild(&Transform32);

HAnimJoint30.addChildren(&HAnimSegment31);

HAnimJoint& HAnimJoint37 =  HAnimJoint();
HAnimJoint37.X3DNode::setName(CString("l_hip"));
HAnimJoint37.setDEF(CString("hanim_l_hip"));
HAnimJoint37.setCenter(new float[]{0.0956,0.9364,0.0});
HAnimJoint37.setSkinCoordIndex(new int32_t[]{12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43}, 32);
HAnimJoint37.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
HAnimJoint37.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint37.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment38 =  HAnimSegment();
HAnimSegment38.X3DNode::setName(CString("l_thigh"));
HAnimSegment38.setDEF(CString("hanim_l_thigh"));
//TODO reconcile z-coordinate mismatch using source anthropometry
Transform& Transform39 =  Transform();
Transform39.setTranslation(new float[]{0.0956,0.9346,0.0});
Shape& Shape40 =  Shape();
Shape40.setUSE(CString("SphereYellow"));
Transform39.addChild(&Shape40);

HAnimSegment38.addChild(&Transform39);

HAnimJoint37.addChildren(&HAnimSegment38);

HAnimJoint& HAnimJoint41 =  HAnimJoint();
HAnimJoint41.X3DNode::setName(CString("l_knee"));
HAnimJoint41.setDEF(CString("hanim_l_knee"));
HAnimJoint41.setCenter(new float[]{0.0956,0.5095,-0.0036});
HAnimJoint41.setSkinCoordIndex(new int32_t[]{36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63}, 28);
HAnimJoint41.setSkinCoordWeight(new float[]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 28);
HAnimJoint41.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint41.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment42 =  HAnimSegment();
HAnimSegment42.X3DNode::setName(CString("l_calf"));
HAnimSegment42.setDEF(CString("hanim_l_calf"));
Transform& Transform43 =  Transform();
Transform43.setTranslation(new float[]{0.0956,0.5095,-0.0036});
Shape& Shape44 =  Shape();
Shape44.setUSE(CString("SphereYellow"));
Transform43.addChild(&Shape44);

HAnimSegment42.addChild(&Transform43);

HAnimJoint41.addChildren(&HAnimSegment42);

HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.X3DNode::setName(CString("l_ankle"));
HAnimJoint45.setDEF(CString("hanim_l_ankle"));
HAnimJoint45.setCenter(new float[]{0.0946,0.0762,-0.0261});
HAnimJoint45.setSkinCoordIndex(new int32_t[]{64,65,66,67,68,69,70,71}, 8);
HAnimJoint45.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint45.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint45.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment46 =  HAnimSegment();
HAnimSegment46.X3DNode::setName(CString("l_hindfoot"));
HAnimSegment46.setDEF(CString("hanim_l_hindfoot"));
Transform& Transform47 =  Transform();
Transform47.setTranslation(new float[]{0.0946,0.0762,-0.0261});
Shape& Shape48 =  Shape();
Shape48.setUSE(CString("SphereYellow"));
Transform47.addChild(&Shape48);

HAnimSegment46.addChild(&Transform47);

HAnimJoint45.addChildren(&HAnimSegment46);

HAnimJoint& HAnimJoint49 =  HAnimJoint();
HAnimJoint49.X3DNode::setName(CString("l_midtarsal"));
HAnimJoint49.setDEF(CString("hanim_l_midtarsal"));
HAnimJoint49.setCenter(new float[]{0.1079,0.0317,0.067});
HAnimJoint49.setSkinCoordIndex(new int32_t[]{72,73,74,75,76,77,78,79}, 8);
HAnimJoint49.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint49.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint49.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment50 =  HAnimSegment();
HAnimSegment50.X3DNode::setName(CString("l_middistal"));
HAnimSegment50.setDEF(CString("hanim_l_middistal"));
Transform& Transform51 =  Transform();
Transform51.setTranslation(new float[]{0.1079,0.0317,0.067});
Shape& Shape52 =  Shape();
Shape52.setUSE(CString("SphereYellow"));
Transform51.addChild(&Shape52);

HAnimSegment50.addChild(&Transform51);

HAnimSite& HAnimSite53 =  HAnimSite();
HAnimSite53.X3DNode::setName(CString("l_middle_distal_tip"));
HAnimSite53.setDEF(CString("hanim_l_middle_distal_tip"));
HAnimSite53.setTranslation(new float[]{0.095,0.0005,0.1924});
HAnimSegment50.addChild(&HAnimSite53);

Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{0.095,0.0005,0.1924});
Shape& Shape55 =  Shape();
Shape55.setDEF(CString("SphereRed"));
Appearance& Appearance56 =  Appearance();
Material& Material57 =  Material();
Material57.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance56.addChild(&Material57);

Shape55.addChild(&Appearance56);

Sphere& Sphere58 =  Sphere();
Sphere58.setRadius(0.02);
Shape55.setGeometry(&Sphere58);

Transform54.addChild(&Shape55);

HAnimSegment50.addChild(&Transform54);

HAnimJoint49.addChildren(&HAnimSegment50);

HAnimJoint45.addChildren(&HAnimJoint49);

HAnimJoint41.addChildren(&HAnimJoint45);

HAnimJoint37.addChildren(&HAnimJoint41);

HAnimJoint30.addChildren(&HAnimJoint37);

HAnimJoint& HAnimJoint59 =  HAnimJoint();
HAnimJoint59.X3DNode::setName(CString("r_hip"));
HAnimJoint59.setDEF(CString("hanim_r_hip"));
HAnimJoint59.setCenter(new float[]{-0.0956,0.9364,0.0});
HAnimJoint59.setSkinCoordIndex(new int32_t[]{80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111}, 32);
HAnimJoint59.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
HAnimJoint59.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint59.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment60 =  HAnimSegment();
HAnimSegment60.X3DNode::setName(CString("r_thigh"));
HAnimSegment60.setDEF(CString("hanim_r_thigh"));
//TODO reconcile z-coordinate mismatch using source anthropometry
Transform& Transform61 =  Transform();
Transform61.setTranslation(new float[]{-0.0956,0.9346,0.0});
Shape& Shape62 =  Shape();
Shape62.setUSE(CString("SphereYellow"));
Transform61.addChild(&Shape62);

HAnimSegment60.addChild(&Transform61);

HAnimJoint59.addChildren(&HAnimSegment60);

HAnimJoint& HAnimJoint63 =  HAnimJoint();
HAnimJoint63.X3DNode::setName(CString("r_knee"));
HAnimJoint63.setDEF(CString("hanim_r_knee"));
HAnimJoint63.setCenter(new float[]{-0.0956,0.5095,-0.0036});
HAnimJoint63.setSkinCoordIndex(new int32_t[]{104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131}, 28);
HAnimJoint63.setSkinCoordWeight(new float[]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 28);
HAnimJoint63.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint63.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment64 =  HAnimSegment();
HAnimSegment64.X3DNode::setName(CString("r_calf"));
HAnimSegment64.setDEF(CString("hanim_r_calf"));
Transform& Transform65 =  Transform();
Transform65.setTranslation(new float[]{-0.0956,0.5095,-0.0036});
Shape& Shape66 =  Shape();
Shape66.setUSE(CString("SphereYellow"));
Transform65.addChild(&Shape66);

HAnimSegment64.addChild(&Transform65);

HAnimJoint63.addChildren(&HAnimSegment64);

HAnimJoint& HAnimJoint67 =  HAnimJoint();
HAnimJoint67.X3DNode::setName(CString("r_ankle"));
HAnimJoint67.setDEF(CString("hanim_r_ankle"));
HAnimJoint67.setCenter(new float[]{-0.0946,0.0762,-0.0261});
HAnimJoint67.setSkinCoordIndex(new int32_t[]{132,133,134,135,136,137,138,139}, 8);
HAnimJoint67.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint67.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint67.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment68 =  HAnimSegment();
HAnimSegment68.X3DNode::setName(CString("r_hindfoot"));
HAnimSegment68.setDEF(CString("hanim_r_hindfoot"));
Transform& Transform69 =  Transform();
Transform69.setTranslation(new float[]{-0.0946,0.0762,-0.0261});
Shape& Shape70 =  Shape();
Shape70.setUSE(CString("SphereYellow"));
Transform69.addChild(&Shape70);

HAnimSegment68.addChild(&Transform69);

HAnimJoint67.addChildren(&HAnimSegment68);

HAnimJoint& HAnimJoint71 =  HAnimJoint();
HAnimJoint71.X3DNode::setName(CString("r_midtarsal"));
HAnimJoint71.setDEF(CString("hanim_r_midtarsal"));
HAnimJoint71.setCenter(new float[]{-0.1079,0.0317,0.067});
HAnimJoint71.setSkinCoordIndex(new int32_t[]{140,141,142,143,144,145,146,147}, 8);
HAnimJoint71.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint71.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint71.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment72 =  HAnimSegment();
HAnimSegment72.X3DNode::setName(CString("r_middistal"));
HAnimSegment72.setDEF(CString("hanim_r_middistal"));
Transform& Transform73 =  Transform();
Transform73.setTranslation(new float[]{-0.1079,0.0317,0.067});
Shape& Shape74 =  Shape();
Shape74.setUSE(CString("SphereYellow"));
Transform73.addChild(&Shape74);

HAnimSegment72.addChild(&Transform73);

HAnimSite& HAnimSite75 =  HAnimSite();
HAnimSite75.X3DNode::setName(CString("r_middle_distal_tip"));
HAnimSite75.setDEF(CString("hanim_r_middle_distal_tip"));
HAnimSite75.setTranslation(new float[]{-0.095,0.0005,0.1924});
HAnimSegment72.addChild(&HAnimSite75);

Transform& Transform76 =  Transform();
Transform76.setTranslation(new float[]{-0.095,0.0005,0.1924});
Shape& Shape77 =  Shape();
Shape77.setUSE(CString("SphereRed"));
Transform76.addChild(&Shape77);

HAnimSegment72.addChild(&Transform76);

HAnimJoint71.addChildren(&HAnimSegment72);

HAnimJoint67.addChildren(&HAnimJoint71);

HAnimJoint63.addChildren(&HAnimJoint67);

HAnimJoint59.addChildren(&HAnimJoint63);

HAnimJoint30.addChildren(&HAnimJoint59);

HAnimJoint& HAnimJoint78 =  HAnimJoint();
HAnimJoint78.X3DNode::setName(CString("vl5"));
HAnimJoint78.setDEF(CString("hanim_vl5"));
HAnimJoint78.setCenter(new float[]{0.0,1.0817,-0.0728});
HAnimJoint78.setSkinCoordIndex(new int32_t[]{148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167}, 20);
HAnimJoint78.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 20);
HAnimJoint78.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint78.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment79 =  HAnimSegment();
HAnimSegment79.X3DNode::setName(CString("l5"));
HAnimSegment79.setDEF(CString("hanim_l5"));
Transform& Transform80 =  Transform();
Transform80.setTranslation(new float[]{0.0,1.0817,-0.0728});
Shape& Shape81 =  Shape();
Shape81.setUSE(CString("SphereYellow"));
Transform80.addChild(&Shape81);

HAnimSegment79.addChild(&Transform80);

HAnimJoint78.addChildren(&HAnimSegment79);

HAnimJoint& HAnimJoint82 =  HAnimJoint();
HAnimJoint82.X3DNode::setName(CString("skullbase"));
HAnimJoint82.setDEF(CString("hanim_skullbase"));
HAnimJoint82.setCenter(new float[]{0.0,1.644,0.036});
HAnimJoint82.setSkinCoordIndex(new int32_t[]{168,169,170,171,172,173,174,175}, 8);
HAnimJoint82.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint82.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint82.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimDisplacer& HAnimDisplacer83 =  HAnimDisplacer();
HAnimDisplacer83.setDEF(CString("hanim_skullbase_displacer"));
HAnimDisplacer83.setDisplacements(new float[]{0.0,0.031993,0.0}, 3);
HAnimDisplacer83.setCoordIndex(new int32_t[]{168}, 1);
HAnimDisplacer83.setWeight(1);
HAnimJoint82.setDisplacers(HAnimDisplacer83);

HAnimSegment& HAnimSegment84 =  HAnimSegment();
HAnimSegment84.X3DNode::setName(CString("skull"));
HAnimSegment84.setDEF(CString("hanim_skull"));
//TODO reconcile z-coordinate mismatch using source anthropometry
Transform& Transform85 =  Transform();
Transform85.setTranslation(new float[]{0.0,1.644,0.0036});
Shape& Shape86 =  Shape();
Shape86.setUSE(CString("SphereYellow"));
Transform85.addChild(&Shape86);

HAnimSegment84.addChild(&Transform85);

HAnimSite& HAnimSite87 =  HAnimSite();
HAnimSite87.X3DNode::setName(CString("skull_tip"));
HAnimSite87.setDEF(CString("hanim_skull_tip"));
HAnimSite87.setTranslation(new float[]{-0.0029,1.7771,0.0274});
HAnimSegment84.addChild(&HAnimSite87);

Transform& Transform88 =  Transform();
Transform88.setTranslation(new float[]{-0.0029,1.7771,0.0274});
Shape& Shape89 =  Shape();
Shape89.setUSE(CString("SphereYellow"));
Transform88.addChild(&Shape89);

HAnimSegment84.addChild(&Transform88);

HAnimJoint82.addChildren(&HAnimSegment84);

HAnimJoint78.addChildren(&HAnimJoint82);

HAnimJoint& HAnimJoint90 =  HAnimJoint();
HAnimJoint90.X3DNode::setName(CString("l_shoulder"));
HAnimJoint90.setDEF(CString("hanim_l_shoulder"));
HAnimJoint90.setCenter(new float[]{0.1968,1.4642,-0.0265});
HAnimJoint90.setSkinCoordIndex(new int32_t[]{176,177,178,179,180,181,182,183}, 8);
HAnimJoint90.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint90.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint90.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment91 =  HAnimSegment();
HAnimSegment91.X3DNode::setName(CString("l_upperarm"));
HAnimSegment91.setDEF(CString("hanim_l_upperarm"));
Transform& Transform92 =  Transform();
Transform92.setTranslation(new float[]{0.1968,1.4642,-0.0265});
Shape& Shape93 =  Shape();
Shape93.setUSE(CString("SphereYellow"));
Transform92.addChild(&Shape93);

HAnimSegment91.addChild(&Transform92);

HAnimJoint90.addChildren(&HAnimSegment91);

HAnimJoint& HAnimJoint94 =  HAnimJoint();
HAnimJoint94.X3DNode::setName(CString("l_elbow"));
HAnimJoint94.setDEF(CString("hanim_l_elbow"));
HAnimJoint94.setCenter(new float[]{0.1982,1.1622,-0.0557});
HAnimJoint94.setSkinCoordIndex(new int32_t[]{184,185,186,187,188,189,190,191}, 8);
HAnimJoint94.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint94.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint94.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment95 =  HAnimSegment();
HAnimSegment95.X3DNode::setName(CString("l_forearm"));
HAnimSegment95.setDEF(CString("hanim_l_forearm"));
Transform& Transform96 =  Transform();
Transform96.setTranslation(new float[]{0.1982,1.1622,-0.0557});
Shape& Shape97 =  Shape();
Shape97.setUSE(CString("SphereYellow"));
Transform96.addChild(&Shape97);

HAnimSegment95.addChild(&Transform96);

HAnimJoint94.addChildren(&HAnimSegment95);

HAnimJoint& HAnimJoint98 =  HAnimJoint();
HAnimJoint98.X3DNode::setName(CString("l_wrist"));
HAnimJoint98.setDEF(CString("hanim_l_wrist"));
HAnimJoint98.setCenter(new float[]{0.1972,0.8929,-0.069});
HAnimJoint98.setSkinCoordIndex(new int32_t[]{192,193,194,195,196,197,198,199}, 8);
HAnimJoint98.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint98.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint98.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment99 =  HAnimSegment();
HAnimSegment99.X3DNode::setName(CString("l_hand"));
HAnimSegment99.setDEF(CString("hanim_l_hand"));
Transform& Transform100 =  Transform();
Transform100.setTranslation(new float[]{0.1972,0.8929,-0.069});
Shape& Shape101 =  Shape();
Shape101.setUSE(CString("SphereYellow"));
Transform100.addChild(&Shape101);

HAnimSegment99.addChild(&Transform100);

HAnimSite& HAnimSite102 =  HAnimSite();
HAnimSite102.X3DNode::setName(CString("l_hand_tip"));
HAnimSite102.setDEF(CString("hanim_l_hand_tip"));
HAnimSite102.setTranslation(new float[]{0.1912,0.6976,-0.071});
HAnimSegment99.addChild(&HAnimSite102);

Transform& Transform103 =  Transform();
Transform103.setTranslation(new float[]{0.1912,0.6976,-0.071});
Shape& Shape104 =  Shape();
Shape104.setUSE(CString("SphereRed"));
Transform103.addChild(&Shape104);

HAnimSegment99.addChild(&Transform103);

HAnimJoint98.addChildren(&HAnimSegment99);

HAnimJoint94.addChildren(&HAnimJoint98);

HAnimJoint90.addChildren(&HAnimJoint94);

HAnimJoint78.addChildren(&HAnimJoint90);

HAnimJoint& HAnimJoint105 =  HAnimJoint();
HAnimJoint105.X3DNode::setName(CString("r_shoulder"));
HAnimJoint105.setDEF(CString("hanim_r_shoulder"));
HAnimJoint105.setCenter(new float[]{-0.1968,1.4642,-0.0265});
HAnimJoint105.setSkinCoordIndex(new int32_t[]{200,201,202,203,204,205,206,207}, 8);
HAnimJoint105.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint105.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint105.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment106 =  HAnimSegment();
HAnimSegment106.X3DNode::setName(CString("r_upperarm"));
HAnimSegment106.setDEF(CString("hanim_r_upperarm"));
Transform& Transform107 =  Transform();
Transform107.setTranslation(new float[]{-0.1968,1.4642,-0.0265});
Shape& Shape108 =  Shape();
Shape108.setUSE(CString("SphereYellow"));
Transform107.addChild(&Shape108);

HAnimSegment106.addChild(&Transform107);

HAnimJoint105.addChildren(&HAnimSegment106);

HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.X3DNode::setName(CString("r_elbow"));
HAnimJoint109.setDEF(CString("hanim_r_elbow"));
HAnimJoint109.setCenter(new float[]{-0.1982,1.1622,-0.0557});
HAnimJoint109.setSkinCoordIndex(new int32_t[]{208,209,210,211,212,213,214,215}, 8);
HAnimJoint109.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint109.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint109.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment110 =  HAnimSegment();
HAnimSegment110.X3DNode::setName(CString("r_forearm"));
HAnimSegment110.setDEF(CString("hanim_r_forearm"));
Transform& Transform111 =  Transform();
Transform111.setTranslation(new float[]{-0.1982,1.1622,-0.0557});
Shape& Shape112 =  Shape();
Shape112.setUSE(CString("SphereYellow"));
Transform111.addChild(&Shape112);

HAnimSegment110.addChild(&Transform111);

HAnimJoint109.addChildren(&HAnimSegment110);

HAnimJoint& HAnimJoint113 =  HAnimJoint();
HAnimJoint113.X3DNode::setName(CString("r_wrist"));
HAnimJoint113.setDEF(CString("hanim_r_wrist"));
HAnimJoint113.setCenter(new float[]{-0.1972,0.8929,-0.069});
HAnimJoint113.setSkinCoordIndex(new int32_t[]{216,217,218,219,220,221,222,223}, 8);
HAnimJoint113.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint113.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint113.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment114 =  HAnimSegment();
HAnimSegment114.X3DNode::setName(CString("r_hand"));
HAnimSegment114.setDEF(CString("hanim_r_hand"));
Transform& Transform115 =  Transform();
Transform115.setTranslation(new float[]{-0.1972,0.8929,-0.069});
Shape& Shape116 =  Shape();
Shape116.setUSE(CString("SphereYellow"));
Transform115.addChild(&Shape116);

HAnimSegment114.addChild(&Transform115);

HAnimSite& HAnimSite117 =  HAnimSite();
HAnimSite117.X3DNode::setName(CString("r_hand_tip"));
HAnimSite117.setDEF(CString("hanim_r_hand_tip"));
HAnimSite117.setTranslation(new float[]{-0.1912,0.6976,-0.071});
HAnimSegment114.addChild(&HAnimSite117);

Transform& Transform118 =  Transform();
Transform118.setTranslation(new float[]{-0.1912,0.6976,-0.071});
Shape& Shape119 =  Shape();
Shape119.setUSE(CString("SphereRed"));
Transform118.addChild(&Shape119);

HAnimSegment114.addChild(&Transform118);

HAnimJoint113.addChildren(&HAnimSegment114);

HAnimJoint109.addChildren(&HAnimJoint113);

HAnimJoint105.addChildren(&HAnimJoint109);

HAnimJoint78.addChildren(&HAnimJoint105);

HAnimJoint30.addChildren(&HAnimJoint78);

HAnimHumanoid29.setSkeleton(&HAnimJoint30);

//# sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8)
//top-level joint references
//top-level site references
//top-level segment references
//top-level viewpoint references
Coordinate& Coordinate120 =  Coordinate();
Coordinate120.setDEF(CString("SKINCOORD"));
Coordinate120.setPoint(new float[]{-0.05,1.0,0.05,0.05,1.0,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0.0,0.92,0.0,0.0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0.0,-0.075,0.0446,0.0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0.0,0.057,0.0446,0.0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0.0,0.087,0.0446,0.0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0.0,0.1924,0.0446,0.0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0.0,-0.075,-0.0446,0.0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0.0,0.057,-0.0446,0.0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0.0,0.087,-0.0446,0.0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0.0,0.1924,-0.0446,0.0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1}, 672);
HAnimHumanoid29.setSkinCoord(&Coordinate120);

Group& Group121 =  Group();
Shape& Shape122 =  Shape();
Shape122.setDEF(CString("TrouserSkin"));
Appearance& Appearance123 =  Appearance();
Material& Material124 =  Material();
Material124.setDiffuseColor(new float[]{0.0,0.0,1.0});
Material124.setTransparency(0.5);
Appearance123.addChild(&Material124);

Shape122.addChild(&Appearance123);

//# 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)
IndexedFaceSet& IndexedFaceSet125 =  IndexedFaceSet();
IndexedFaceSet125.setCoordIndex(new int32_t[]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1}, 888);
Coordinate& Coordinate126 =  Coordinate();
Coordinate126.setUSE(CString("SKINCOORD"));
IndexedFaceSet125.setCoord(&Coordinate126);

Shape122.setGeometry(&IndexedFaceSet125);

Group121.addChild(&Shape122);

Shape& Shape127 =  Shape();
Shape127.setDEF(CString("ShoeSkin"));
Appearance& Appearance128 =  Appearance();
Material& Material129 =  Material();
Material129.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material129.setTransparency(0.5);
Appearance128.addChild(&Material129);

Shape127.addChild(&Appearance128);

//# 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)
IndexedFaceSet& IndexedFaceSet130 =  IndexedFaceSet();
IndexedFaceSet130.setCoordIndex(new int32_t[]{60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1}, 272);
Coordinate& Coordinate131 =  Coordinate();
Coordinate131.setUSE(CString("SKINCOORD"));
IndexedFaceSet130.setCoord(&Coordinate131);

Shape127.setGeometry(&IndexedFaceSet130);

Group121.addChild(&Shape127);

Shape& Shape132 =  Shape();
Shape132.setDEF(CString("ShirtSkin"));
Appearance& Appearance133 =  Appearance();
Material& Material134 =  Material();
Material134.setDiffuseColor(new float[]{1.0,1.0,0.0});
Material134.setTransparency(0.5);
Appearance133.addChild(&Material134);

Shape132.addChild(&Appearance133);

//# 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)
IndexedFaceSet& IndexedFaceSet135 =  IndexedFaceSet();
IndexedFaceSet135.setCoordIndex(new int32_t[]{148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1}, 400);
Coordinate& Coordinate136 =  Coordinate();
Coordinate136.setUSE(CString("SKINCOORD"));
IndexedFaceSet135.setCoord(&Coordinate136);

Shape132.setGeometry(&IndexedFaceSet135);

Group121.addChild(&Shape132);

Shape& Shape137 =  Shape();
Shape137.setDEF(CString("HeadHandsFleshToneSkin"));
Appearance& Appearance138 =  Appearance();
Material& Material139 =  Material();
Material139.setDiffuseColor(new float[]{1.0,0.75,0.75});
Material139.setTransparency(0.5);
Appearance138.addChild(&Material139);

Shape137.addChild(&Appearance138);

//# 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)
IndexedFaceSet& IndexedFaceSet140 =  IndexedFaceSet();
IndexedFaceSet140.setCoordIndex(new int32_t[]{172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1}, 216);
Coordinate& Coordinate141 =  Coordinate();
Coordinate141.setUSE(CString("SKINCOORD"));
IndexedFaceSet140.setCoord(&Coordinate141);

Shape137.setGeometry(&IndexedFaceSet140);

Group121.addChild(&Shape137);

Shape& Shape142 =  Shape();
Shape142.setDEF(CString("SkinLines"));
Appearance& Appearance143 =  Appearance();
Material& Material144 =  Material();
Material144.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance143.addChild(&Material144);

Shape142.addChild(&Appearance143);

//Combined set of prior IFS coordIndex values
IndexedLineSet& IndexedLineSet145 =  IndexedLineSet();
IndexedLineSet145.setCoordIndex(new int32_t[]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1}, 1776);
Coordinate& Coordinate146 =  Coordinate();
Coordinate146.setUSE(CString("SKINCOORD"));
IndexedLineSet145.setCoord(&Coordinate146);

Shape142.setGeometry(&IndexedLineSet145);

Group121.addChild(&Shape142);

HAnimHumanoid29.setSkin(Group121);

HAnimJoint& HAnimJoint147 =  HAnimJoint();
HAnimJoint147.setUSE(CString("hanim_r_wrist"));
HAnimHumanoid29.setJoints(&HAnimJoint147);

HAnimJoint& HAnimJoint148 =  HAnimJoint();
HAnimJoint148.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid29.setJoints(&HAnimJoint148);

HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid29.setJoints(&HAnimJoint149);

HAnimJoint& HAnimJoint150 =  HAnimJoint();
HAnimJoint150.setUSE(CString("hanim_l_wrist"));
HAnimHumanoid29.setJoints(&HAnimJoint150);

HAnimJoint& HAnimJoint151 =  HAnimJoint();
HAnimJoint151.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid29.setJoints(&HAnimJoint151);

HAnimJoint& HAnimJoint152 =  HAnimJoint();
HAnimJoint152.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid29.setJoints(&HAnimJoint152);

HAnimJoint& HAnimJoint153 =  HAnimJoint();
HAnimJoint153.setUSE(CString("hanim_skullbase"));
HAnimHumanoid29.setJoints(&HAnimJoint153);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.setUSE(CString("hanim_vl5"));
HAnimHumanoid29.setJoints(&HAnimJoint154);

HAnimJoint& HAnimJoint155 =  HAnimJoint();
HAnimJoint155.setUSE(CString("hanim_r_midtarsal"));
HAnimHumanoid29.setJoints(&HAnimJoint155);

HAnimJoint& HAnimJoint156 =  HAnimJoint();
HAnimJoint156.setUSE(CString("hanim_r_ankle"));
HAnimHumanoid29.setJoints(&HAnimJoint156);

HAnimJoint& HAnimJoint157 =  HAnimJoint();
HAnimJoint157.setUSE(CString("hanim_r_knee"));
HAnimHumanoid29.setJoints(&HAnimJoint157);

HAnimJoint& HAnimJoint158 =  HAnimJoint();
HAnimJoint158.setUSE(CString("hanim_r_hip"));
HAnimHumanoid29.setJoints(&HAnimJoint158);

HAnimJoint& HAnimJoint159 =  HAnimJoint();
HAnimJoint159.setUSE(CString("hanim_l_midtarsal"));
HAnimHumanoid29.setJoints(&HAnimJoint159);

HAnimJoint& HAnimJoint160 =  HAnimJoint();
HAnimJoint160.setUSE(CString("hanim_l_ankle"));
HAnimHumanoid29.setJoints(&HAnimJoint160);

HAnimJoint& HAnimJoint161 =  HAnimJoint();
HAnimJoint161.setUSE(CString("hanim_l_knee"));
HAnimHumanoid29.setJoints(&HAnimJoint161);

HAnimJoint& HAnimJoint162 =  HAnimJoint();
HAnimJoint162.setUSE(CString("hanim_l_hip"));
HAnimHumanoid29.setJoints(&HAnimJoint162);

HAnimJoint& HAnimJoint163 =  HAnimJoint();
HAnimJoint163.setUSE(CString("hanim_HumanoidRoot"));
HAnimHumanoid29.setJoints(&HAnimJoint163);

HAnimSite& HAnimSite164 =  HAnimSite();
HAnimSite164.setUSE(CString("hanim_l_middle_distal_tip"));
HAnimHumanoid29.setSites(&HAnimSite164);

HAnimSite& HAnimSite165 =  HAnimSite();
HAnimSite165.setUSE(CString("hanim_r_middle_distal_tip"));
HAnimHumanoid29.setSites(&HAnimSite165);

HAnimSite& HAnimSite166 =  HAnimSite();
HAnimSite166.setUSE(CString("hanim_skull_tip"));
HAnimHumanoid29.setSites(&HAnimSite166);

HAnimSite& HAnimSite167 =  HAnimSite();
HAnimSite167.setUSE(CString("hanim_l_hand_tip"));
HAnimHumanoid29.setSites(&HAnimSite167);

HAnimSite& HAnimSite168 =  HAnimSite();
HAnimSite168.setUSE(CString("hanim_r_hand_tip"));
HAnimHumanoid29.setSites(&HAnimSite168);

HAnimSegment& HAnimSegment169 =  HAnimSegment();
HAnimSegment169.setUSE(CString("hanim_sacrum"));
HAnimHumanoid29.setSegments(&HAnimSegment169);

HAnimSegment& HAnimSegment170 =  HAnimSegment();
HAnimSegment170.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid29.setSegments(&HAnimSegment170);

HAnimSegment& HAnimSegment171 =  HAnimSegment();
HAnimSegment171.setUSE(CString("hanim_l_calf"));
HAnimHumanoid29.setSegments(&HAnimSegment171);

HAnimSegment& HAnimSegment172 =  HAnimSegment();
HAnimSegment172.setUSE(CString("hanim_l_hindfoot"));
HAnimHumanoid29.setSegments(&HAnimSegment172);

HAnimSegment& HAnimSegment173 =  HAnimSegment();
HAnimSegment173.setUSE(CString("hanim_l_middistal"));
HAnimHumanoid29.setSegments(&HAnimSegment173);

HAnimSegment& HAnimSegment174 =  HAnimSegment();
HAnimSegment174.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid29.setSegments(&HAnimSegment174);

HAnimSegment& HAnimSegment175 =  HAnimSegment();
HAnimSegment175.setUSE(CString("hanim_r_calf"));
HAnimHumanoid29.setSegments(&HAnimSegment175);

HAnimSegment& HAnimSegment176 =  HAnimSegment();
HAnimSegment176.setUSE(CString("hanim_r_hindfoot"));
HAnimHumanoid29.setSegments(&HAnimSegment176);

HAnimSegment& HAnimSegment177 =  HAnimSegment();
HAnimSegment177.setUSE(CString("hanim_r_middistal"));
HAnimHumanoid29.setSegments(&HAnimSegment177);

HAnimSegment& HAnimSegment178 =  HAnimSegment();
HAnimSegment178.setUSE(CString("hanim_l5"));
HAnimHumanoid29.setSegments(&HAnimSegment178);

HAnimSegment& HAnimSegment179 =  HAnimSegment();
HAnimSegment179.setUSE(CString("hanim_skull"));
HAnimHumanoid29.setSegments(&HAnimSegment179);

HAnimSegment& HAnimSegment180 =  HAnimSegment();
HAnimSegment180.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid29.setSegments(&HAnimSegment180);

HAnimSegment& HAnimSegment181 =  HAnimSegment();
HAnimSegment181.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid29.setSegments(&HAnimSegment181);

HAnimSegment& HAnimSegment182 =  HAnimSegment();
HAnimSegment182.setUSE(CString("hanim_l_hand"));
HAnimHumanoid29.setSegments(&HAnimSegment182);

HAnimSegment& HAnimSegment183 =  HAnimSegment();
HAnimSegment183.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid29.setSegments(&HAnimSegment183);

HAnimSegment& HAnimSegment184 =  HAnimSegment();
HAnimSegment184.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid29.setSegments(&HAnimSegment184);

HAnimSegment& HAnimSegment185 =  HAnimSegment();
HAnimSegment185.setUSE(CString("hanim_r_hand"));
HAnimHumanoid29.setSegments(&HAnimSegment185);

Viewpoint& Viewpoint186 =  Viewpoint();
Viewpoint186.setDEF(CString("Inclined_View"));
Viewpoint186.setDescription(CString("Inclined View"));
Viewpoint186.setOrientation(new float[]{0.0,1.0,0.0,0.78});
Viewpoint186.setPosition(new float[]{2.0,1.0,2.0});
HAnimHumanoid29.setViewpoint(&Viewpoint186);

Viewpoint& Viewpoint187 =  Viewpoint();
Viewpoint187.setDEF(CString("Best_View"));
Viewpoint187.setDescription(CString("Best View"));
Viewpoint187.setOrientation(new float[]{0.0,1.0,0.0,-1.57});
Viewpoint187.setPosition(new float[]{-2.0,0.25,0.0});
HAnimHumanoid29.addViewpoint(&Viewpoint187);

Viewpoint& Viewpoint188 =  Viewpoint();
Viewpoint188.setDEF(CString("Front_View"));
Viewpoint188.setDescription(CString("Front View"));
Viewpoint188.setPosition(new float[]{0.0,1.0,3.0});
HAnimHumanoid29.addViewpoint(&Viewpoint188);

Viewpoint& Viewpoint189 =  Viewpoint();
Viewpoint189.setDEF(CString("Side_View"));
Viewpoint189.setDescription(CString("Side View"));
Viewpoint189.setOrientation(new float[]{0.0,1.0,0.0,1.57});
Viewpoint189.setPosition(new float[]{3.0,1.0,0.0});
HAnimHumanoid29.addViewpoint(&Viewpoint189);

Viewpoint& Viewpoint190 =  Viewpoint();
Viewpoint190.setDEF(CString("Top_View"));
Viewpoint190.setDescription(CString("Top View"));
Viewpoint190.setOrientation(new float[]{1.0,0.0,0.0,-1.57});
Viewpoint190.setPosition(new float[]{0.0,3.0,0.0});
HAnimHumanoid29.addViewpoint(&Viewpoint190);

Scene26.addChild(&HAnimHumanoid29);

//ExternProtoDeclare name='LOA1_WalkAnimation' url='\"LOA1_WalkAnimation.wrl#LOA1_WalkAnimation\" \"http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation\" \"http://h-anim.org/Models/H-Anim2001/boxman/protos/LOA1WalkAnimation.wrl#LOA1WalkAnimation\" \"LOA1_WalkAnimation.x3d#LOA1_WalkAnimation\" \"http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation\" \"http://h-anim.org/Models/H-Anim2001/boxman/protos/LOA1WalkAnimation.x3d#LOA1WalkAnimation\"'> <field accessType='inputOutput' name='cycleInterval' type='SFTime'/> <field accessType='inputOutput' name='enabled' type='SFBool'/> <field accessType='inputOutput' name='loop' type='SFBool'/> <field accessType='inputOutput' name='startTime' type='SFTime'/> <field accessType='inputOutput' name='stopTime' type='SFTime'/> <field accessType='outputOnly' name='fraction_changed' type='SFFloat'/> <field accessType='outputOnly' name='HumanoidRoot_translation_changed' type='SFVec3f'/> <field accessType='outputOnly' name='HumanoidRoot_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_hip_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_knee_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_ankle_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_midtarsal_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_hip_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_knee_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_ankle_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_midtarsal_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='vl5_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='skullbase_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_shoulder_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_elbow_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_wrist_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_shoulder_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_elbow_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_wrist_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='isActive' type='SFBool'/> </ExternProtoDeclare> <ProtoInstance DEF='ANIMATOR' name='LOA1_WalkAnimation'/
Group& Group191 =  Group();
//ROUTE information for TIMER node: [from fraction_changed to HUMANOIDROOT_POSITION_ANIMATOR.set_fraction ] [from fraction_changed to HUMANOIDROOT_ANIMATOR.set_fraction ] [from fraction_changed to SACROILIAC_ANIMATOR.set_fraction ] [from fraction_changed to L_HIP_ANIMATOR.set_fraction ] [from fraction_changed to L_KNEE_ANIMATOR.set_fraction ] [from fraction_changed to L_ANKLE_ANIMATOR.set_fraction ] [from fraction_changed to L_MIDTARSAL_ANIMATOR.set_fraction ] [from fraction_changed to R_HIP_ANIMATOR.set_fraction ] [from fraction_changed to R_KNEE_ANIMATOR.set_fraction ] [from fraction_changed to R_ANKLE_ANIMATOR.set_fraction ] [from fraction_changed to R_MIDTARSAL_ANIMATOR.set_fraction ] [from fraction_changed to VL5_ANIMATOR.set_fraction ] [from fraction_changed to SKULLBASE_ANIMATOR.set_fraction ] [from fraction_changed to L_SHOULDER_ANIMATOR.set_fraction ] [from fraction_changed to L_ELBOW_ANIMATOR.set_fraction ] [from fraction_changed to L_WRIST_ANIMATOR.set_fraction ] [from fraction_changed to R_SHOULDER_ANIMATOR.set_fraction ] [from fraction_changed to R_ELBOW_ANIMATOR.set_fraction ] [from fraction_changed to R_WRIST_ANIMATOR.set_fraction ]
TimeSensor& TimeSensor192 =  TimeSensor();
TimeSensor192.setDEF(CString("TIMER"));
TimeSensor192.setCycleInterval(2);
TimeSensor192.setLoop(true);
//field name='cycleInterval' type='SFTime' value='2' accessType='inputOutput'/> <field name='enabled' type='SFBool' value='true' accessType='inputOutput'/> <field name='loop' type='SFBool' value='true' accessType='inputOutput'/> <field name='startTime' type='SFTime' value='0' accessType='inputOutput'/> <field name='stopTime' type='SFTime' value='-1' accessType='inputOutput'/!
//IS> <connect nodeField='cycleInterval' protoField='cycleInterval'/> <connect nodeField='enabled' protoField='enabled'/> <connect nodeField='loop' protoField='loop'/> <connect nodeField='startTime' protoField='startTime'/> <connect nodeField='stopTime' protoField='stopTime'/> <connect nodeField='fraction_changed' protoField='fraction_changed'/> <connect nodeField='isActive' protoField='isActive'/> </IS
Group191.addChild(&TimeSensor192);

//ROUTE information for HUMANOIDROOT_POSITION_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
PositionInterpolator& PositionInterpolator193 =  PositionInterpolator();
PositionInterpolator193.setDEF(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
PositionInterpolator193.setKey(new float[]{0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
PositionInterpolator193.setKeyValue(new float[]{0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0}, 57);
//IS> <connect nodeField='value_changed' protoField='HumanoidRoot_translation_changed'/> </IS
Group191.addChild(&PositionInterpolator193);

//ROUTE information for HUMANOIDROOT_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator194 =  OrientationInterpolator();
OrientationInterpolator194.setDEF(CString("HUMANOIDROOT_ANIMATOR"));
OrientationInterpolator194.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator194.setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 8);
//IS> <connect nodeField='value_changed' protoField='HumanoidRoot_rotation_changed'/> </IS
Group191.addChild(&OrientationInterpolator194);

//ROUTE information for SACROILIAC_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator195 =  OrientationInterpolator();
OrientationInterpolator195.setDEF(CString("SACROILIAC_ANIMATOR"));
OrientationInterpolator195.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator195.setKeyValue(new float[]{0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056}, 12);
//IS> <connect nodeField='value_changed' protoField='lower_body_rotation_changed'/> </IS
Group191.addChild(&OrientationInterpolator195);

//ROUTE information for L_HIP_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator196 =  OrientationInterpolator();
OrientationInterpolator196.setDEF(CString("L_HIP_ANIMATOR"));
OrientationInterpolator196.setKey(new float[]{0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
OrientationInterpolator196.setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 32);
//IS> <connect nodeField='value_changed' protoField='l_hip_rotation_changed'/> </IS
Group191.addChild(&OrientationInterpolator196);

//ROUTE information for L_KNEE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator197 =  OrientationInterpolator();
OrientationInterpolator197.setDEF(CString("L_KNEE_ANIMATOR"));
OrientationInterpolator197.setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
OrientationInterpolator197.setKeyValue(new float[]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
//IS> <connect nodeField='value_changed' protoField='l_knee_rotation_changed'/> </IS
Group191.addChild(&OrientationInterpolator197);

//ROUTE information for L_ANKLE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator198 =  OrientationInterpolator();
OrientationInterpolator198.setDEF(CString("L_ANKLE_ANIMATOR"));
OrientationInterpolator198.setKey(new float[]{0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0}, 7);
OrientationInterpolator198.setKeyValue(new float[]{-1.0,0.0,0.0,0.06714,-1.0,0.0,0.0,0.2152,-1.0,0.0,0.0,0.3184,-1.0,0.0,0.0,0.4717,-1.0,0.0,0.0,0.2912,1.0,0.0,0.0,0.1222,-1.0,0.0,0.0,0.06714}, 28);
//IS> <connect nodeField='value_changed' protoField='l_ankle_rotation_changed'/> </IS
Group191.addChild(&OrientationInterpolator198);

//ROUTE information for L_MIDTARSAL_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator199 =  OrientationInterpolator();
OrientationInterpolator199.setDEF(CString("L_MIDTARSAL_ANIMATOR"));
OrientationInterpolator199.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator199.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0}, 12);
//IS> <connect nodeField='value_changed' protoField='l_midtarsal_rotation_changed'/> </IS
Group191.addChild(&OrientationInterpolator199);

//ROUTE information for R_HIP_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator200 =  OrientationInterpolator();
OrientationInterpolator200.setDEF(CString("R_HIP_ANIMATOR"));
OrientationInterpolator200.setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
OrientationInterpolator200.setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 40);
//IS> <connect nodeField='value_changed' protoField='r_hip_rotation_changed'/> </IS
Group191.addChild(&OrientationInterpolator200);

//ROUTE information for R_KNEE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator201 =  OrientationInterpolator();
OrientationInterpolator201.setDEF(CString("R_KNEE_ANIMATOR"));
OrientationInterpolator201.setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
OrientationInterpolator201.setKeyValue(new float[]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.8926,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,-1.176e-8,-4.971e-9,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.2475,1.0,0.0,0.0,0.8573}, 40);
//IS> <connect nodeField='value_changed' protoField='r_knee_rotation_changed'/> <IS
Group191.addChild(&OrientationInterpolator201);

//ROUTE information for R_ANKLE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator202 =  OrientationInterpolator();
OrientationInterpolator202.setDEF(CString("R_ANKLE_ANIMATOR"));
OrientationInterpolator202.setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
OrientationInterpolator202.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.3533,-1.0,0.0,0.0,0.1072,1.0,0.0,0.0,0.2612,1.0,-1.641e-7,1.827e-8,0.1268,-1.0,0.0,0.0,0.01793,-1.0,0.0,0.0,0.05824,-1.0,0.0,0.0,0.2398,-1.0,0.0,0.0,0.35,-1.0,0.0,0.0,0.3322,0.0,0.0,1.0,0.0}, 44);
//IS> <connect nodeField='value_changed' protoField='r_ankle_rotation_changed'/> <IS
Group191.addChild(&OrientationInterpolator202);

//ROUTE information for R_MIDTARSAL_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator203 =  OrientationInterpolator();
OrientationInterpolator203.setDEF(CString("R_MIDTARSAL_ANIMATOR"));
OrientationInterpolator203.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator203.setKeyValue(new float[]{1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2}, 12);
//IS> <connect nodeField='value_changed' protoField='r_midtarsal_rotation_changed'/> <IS
Group191.addChild(&OrientationInterpolator203);

//ROUTE information for VL5_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator204 =  OrientationInterpolator();
OrientationInterpolator204.setDEF(CString("VL5_ANIMATOR"));
OrientationInterpolator204.setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
OrientationInterpolator204.setKeyValue(new float[]{0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
//IS> <connect nodeField='value_changed' protoField='vl5_rotation_changed'/> <IS
Group191.addChild(&OrientationInterpolator204);

//ROUTE information for SKULLBASE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator205 =  OrientationInterpolator();
OrientationInterpolator205.setDEF(CString("SKULLBASE_ANIMATOR"));
OrientationInterpolator205.setKey(new float[]{0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0}, 10);
OrientationInterpolator205.setKeyValue(new float[]{0.0,-1.0,0.0,0.08642,0.0,1.0,0.0,0.1825,0.0,1.0,0.0,0.1505,0.0,1.0,0.0,0.1053,0.0,1.0,0.0,0.04391,0.0,-1.0,0.0,0.03119,0.0,-1.0,0.0,0.07936,0.0,-1.0,0.0,0.1616,0.0,-1.0,0.0,0.155,0.0,-1.0,0.0,0.08642}, 40);
//IS> <connect nodeField='value_changed' protoField='skullbase_rotation_changed'/> <IS
Group191.addChild(&OrientationInterpolator205);

//ROUTE information for L_SHOULDER_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator206 =  OrientationInterpolator();
OrientationInterpolator206.setDEF(CString("L_SHOULDER_ANIMATOR"));
OrientationInterpolator206.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator206.setKeyValue(new float[]{1.0,0.0,0.0,0.1189,-1.0,-5.928e-7,1.525e-7,0.1861,1.0,-2.038e-7,-1.257e-7,0.3357,1.0,0.0,0.0,0.1189}, 16);
//IS> <connect nodeField='value_changed' protoField='l_shoulder_rotation_changed'/> <IS
Group191.addChild(&OrientationInterpolator206);

//ROUTE information for L_ELBOW_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator207 =  OrientationInterpolator();
OrientationInterpolator207.setDEF(CString("L_ELBOW_ANIMATOR"));
OrientationInterpolator207.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator207.setKeyValue(new float[]{-1.0,-1.58298e-7,8.15967e-8,0.0659878,-1.0,-3.28826e-8,-2.31665e-8,0.488383,-1.0,0.00000306462,-0.00000311947,0.0177536,-1.0,-1.58298e-7,8.15967e-8,0.0659878}, 16);
//IS> <connect nodeField='value_changed' protoField='l_elbow_rotation_changed'/> <IS
Group191.addChild(&OrientationInterpolator207);

//ROUTE information for L_WRIST_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator208 =  OrientationInterpolator();
OrientationInterpolator208.setDEF(CString("L_WRIST_ANIMATOR"));
OrientationInterpolator208.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator208.setKeyValue(new float[]{0.00000151276,-1.0,0.0000017724,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.00000151276,-1.0,0.0000017724,0.461076}, 16);
//IS> <connect nodeField='value_changed' protoField='l_wrist_rotation_changed'/> <IS
Group191.addChild(&OrientationInterpolator208);

//ROUTE information for R_SHOULDER_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator209 =  OrientationInterpolator();
OrientationInterpolator209.setDEF(CString("R_SHOULDER_ANIMATOR"));
OrientationInterpolator209.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator209.setKeyValue(new float[]{-1.0,-7.689e-7,-1.48e-7,0.09346,1.0,5.004e-8,2.254e-8,0.3197,-1.0,-1.104e-7,5.267e-10,0.1564,-1.0,-7.689e-7,-1.48e-7,0.09346}, 16);
//IS> <connect nodeField='value_changed' protoField='r_shoulder_rotation_changed'/> <IS
Group191.addChild(&OrientationInterpolator209);

//ROUTE information for R_ELBOW_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator210 =  OrientationInterpolator();
OrientationInterpolator210.setDEF(CString("R_ELBOW_ANIMATOR"));
OrientationInterpolator210.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator210.setKeyValue(new float[]{-1.0,-4.45619e-8,2.70318e-8,0.411508,-1.0,8.16742e-7,-1.09556e-7,0.0925011,-1.0,-2.47628e-8,-7.02862e-9,0.572568,-1.0,-4.45619e-8,2.70318e-8,0.411508}, 16);
//IS> <connect nodeField='value_changed' protoField='r_elbow_rotation_changed'/> <IS
Group191.addChild(&OrientationInterpolator210);

//ROUTE information for R_WRIST_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator& OrientationInterpolator211 =  OrientationInterpolator();
OrientationInterpolator211.setDEF(CString("R_WRIST_ANIMATOR"));
OrientationInterpolator211.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator211.setKeyValue(new float[]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346}, 16);
//IS> <connect nodeField='value_changed' protoField='r_wrist_rotation_changed'/> <IS
Group191.addChild(&OrientationInterpolator211);

Scene26.addChild(&Group191);

ROUTE& ROUTE212 =  ROUTE();
ROUTE212.setFromNode(CString("TIMER"));
ROUTE212.setFromField(CString("fraction_changed"));
ROUTE212.setToNode(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
ROUTE212.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE212);

ROUTE& ROUTE213 =  ROUTE();
ROUTE213.setFromNode(CString("TIMER"));
ROUTE213.setFromField(CString("fraction_changed"));
ROUTE213.setToNode(CString("HUMANOIDROOT_ANIMATOR"));
ROUTE213.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE213);

ROUTE& ROUTE214 =  ROUTE();
ROUTE214.setFromNode(CString("TIMER"));
ROUTE214.setFromField(CString("fraction_changed"));
ROUTE214.setToNode(CString("SACROILIAC_ANIMATOR"));
ROUTE214.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE214);

ROUTE& ROUTE215 =  ROUTE();
ROUTE215.setFromNode(CString("TIMER"));
ROUTE215.setFromField(CString("fraction_changed"));
ROUTE215.setToNode(CString("L_HIP_ANIMATOR"));
ROUTE215.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE215);

ROUTE& ROUTE216 =  ROUTE();
ROUTE216.setFromNode(CString("TIMER"));
ROUTE216.setFromField(CString("fraction_changed"));
ROUTE216.setToNode(CString("L_KNEE_ANIMATOR"));
ROUTE216.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE216);

ROUTE& ROUTE217 =  ROUTE();
ROUTE217.setFromNode(CString("TIMER"));
ROUTE217.setFromField(CString("fraction_changed"));
ROUTE217.setToNode(CString("L_ANKLE_ANIMATOR"));
ROUTE217.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE217);

ROUTE& ROUTE218 =  ROUTE();
ROUTE218.setFromNode(CString("TIMER"));
ROUTE218.setFromField(CString("fraction_changed"));
ROUTE218.setToNode(CString("L_MIDTARSAL_ANIMATOR"));
ROUTE218.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE218);

ROUTE& ROUTE219 =  ROUTE();
ROUTE219.setFromNode(CString("TIMER"));
ROUTE219.setFromField(CString("fraction_changed"));
ROUTE219.setToNode(CString("R_HIP_ANIMATOR"));
ROUTE219.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE219);

ROUTE& ROUTE220 =  ROUTE();
ROUTE220.setFromNode(CString("TIMER"));
ROUTE220.setFromField(CString("fraction_changed"));
ROUTE220.setToNode(CString("R_KNEE_ANIMATOR"));
ROUTE220.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE220);

ROUTE& ROUTE221 =  ROUTE();
ROUTE221.setFromNode(CString("TIMER"));
ROUTE221.setFromField(CString("fraction_changed"));
ROUTE221.setToNode(CString("R_ANKLE_ANIMATOR"));
ROUTE221.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE221);

ROUTE& ROUTE222 =  ROUTE();
ROUTE222.setFromNode(CString("TIMER"));
ROUTE222.setFromField(CString("fraction_changed"));
ROUTE222.setToNode(CString("R_MIDTARSAL_ANIMATOR"));
ROUTE222.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE222);

ROUTE& ROUTE223 =  ROUTE();
ROUTE223.setFromNode(CString("TIMER"));
ROUTE223.setFromField(CString("fraction_changed"));
ROUTE223.setToNode(CString("VL5_ANIMATOR"));
ROUTE223.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE223);

ROUTE& ROUTE224 =  ROUTE();
ROUTE224.setFromNode(CString("TIMER"));
ROUTE224.setFromField(CString("fraction_changed"));
ROUTE224.setToNode(CString("SKULLBASE_ANIMATOR"));
ROUTE224.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE224);

ROUTE& ROUTE225 =  ROUTE();
ROUTE225.setFromNode(CString("TIMER"));
ROUTE225.setFromField(CString("fraction_changed"));
ROUTE225.setToNode(CString("L_SHOULDER_ANIMATOR"));
ROUTE225.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE225);

ROUTE& ROUTE226 =  ROUTE();
ROUTE226.setFromNode(CString("TIMER"));
ROUTE226.setFromField(CString("fraction_changed"));
ROUTE226.setToNode(CString("L_ELBOW_ANIMATOR"));
ROUTE226.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE226);

ROUTE& ROUTE227 =  ROUTE();
ROUTE227.setFromNode(CString("TIMER"));
ROUTE227.setFromField(CString("fraction_changed"));
ROUTE227.setToNode(CString("L_WRIST_ANIMATOR"));
ROUTE227.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE227);

ROUTE& ROUTE228 =  ROUTE();
ROUTE228.setFromNode(CString("TIMER"));
ROUTE228.setFromField(CString("fraction_changed"));
ROUTE228.setToNode(CString("R_SHOULDER_ANIMATOR"));
ROUTE228.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE228);

ROUTE& ROUTE229 =  ROUTE();
ROUTE229.setFromNode(CString("TIMER"));
ROUTE229.setFromField(CString("fraction_changed"));
ROUTE229.setToNode(CString("R_ELBOW_ANIMATOR"));
ROUTE229.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE229);

ROUTE& ROUTE230 =  ROUTE();
ROUTE230.setFromNode(CString("TIMER"));
ROUTE230.setFromField(CString("fraction_changed"));
ROUTE230.setToNode(CString("R_WRIST_ANIMATOR"));
ROUTE230.setToField(CString("set_fraction"));
Scene26.addChild(&ROUTE230);

//Animation ROUTEs
ROUTE& ROUTE231 =  ROUTE();
ROUTE231.setFromField(CString("value_changed"));
ROUTE231.setFromNode(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
ROUTE231.setToField(CString("set_translation"));
ROUTE231.setToNode(CString("hanim_HumanoidRoot"));
Scene26.addChild(&ROUTE231);

ROUTE& ROUTE232 =  ROUTE();
ROUTE232.setFromField(CString("value_changed"));
ROUTE232.setFromNode(CString("HUMANOIDROOT_ANIMATOR"));
ROUTE232.setToField(CString("set_rotation"));
ROUTE232.setToNode(CString("hanim_HumanoidRoot"));
Scene26.addChild(&ROUTE232);

ROUTE& ROUTE233 =  ROUTE();
ROUTE233.setFromField(CString("value_changed"));
ROUTE233.setFromNode(CString("L_HIP_ANIMATOR"));
ROUTE233.setToField(CString("set_rotation"));
ROUTE233.setToNode(CString("hanim_l_hip"));
Scene26.addChild(&ROUTE233);

ROUTE& ROUTE234 =  ROUTE();
ROUTE234.setFromField(CString("value_changed"));
ROUTE234.setFromNode(CString("L_KNEE_ANIMATOR"));
ROUTE234.setToField(CString("set_rotation"));
ROUTE234.setToNode(CString("hanim_l_knee"));
Scene26.addChild(&ROUTE234);

ROUTE& ROUTE235 =  ROUTE();
ROUTE235.setFromField(CString("value_changed"));
ROUTE235.setFromNode(CString("L_ANKLE_ANIMATOR"));
ROUTE235.setToField(CString("set_rotation"));
ROUTE235.setToNode(CString("hanim_l_ankle"));
Scene26.addChild(&ROUTE235);

ROUTE& ROUTE236 =  ROUTE();
ROUTE236.setFromField(CString("value_changed"));
ROUTE236.setFromNode(CString("L_MIDTARSAL_ANIMATOR"));
ROUTE236.setToField(CString("set_rotation"));
ROUTE236.setToNode(CString("hanim_l_midtarsal"));
Scene26.addChild(&ROUTE236);

ROUTE& ROUTE237 =  ROUTE();
ROUTE237.setFromField(CString("value_changed"));
ROUTE237.setFromNode(CString("R_HIP_ANIMATOR"));
ROUTE237.setToField(CString("set_rotation"));
ROUTE237.setToNode(CString("hanim_r_hip"));
Scene26.addChild(&ROUTE237);

ROUTE& ROUTE238 =  ROUTE();
ROUTE238.setFromField(CString("value_changed"));
ROUTE238.setFromNode(CString("R_KNEE_ANIMATOR"));
ROUTE238.setToField(CString("set_rotation"));
ROUTE238.setToNode(CString("hanim_r_knee"));
Scene26.addChild(&ROUTE238);

ROUTE& ROUTE239 =  ROUTE();
ROUTE239.setFromField(CString("value_changed"));
ROUTE239.setFromNode(CString("R_ANKLE_ANIMATOR"));
ROUTE239.setToField(CString("set_rotation"));
ROUTE239.setToNode(CString("hanim_r_ankle"));
Scene26.addChild(&ROUTE239);

ROUTE& ROUTE240 =  ROUTE();
ROUTE240.setFromField(CString("value_changed"));
ROUTE240.setFromNode(CString("R_MIDTARSAL_ANIMATOR"));
ROUTE240.setToField(CString("set_rotation"));
ROUTE240.setToNode(CString("hanim_r_midtarsal"));
Scene26.addChild(&ROUTE240);

ROUTE& ROUTE241 =  ROUTE();
ROUTE241.setFromField(CString("value_changed"));
ROUTE241.setFromNode(CString("VL5_ANIMATOR"));
ROUTE241.setToField(CString("set_rotation"));
ROUTE241.setToNode(CString("hanim_vl5"));
Scene26.addChild(&ROUTE241);

ROUTE& ROUTE242 =  ROUTE();
ROUTE242.setFromField(CString("value_changed"));
ROUTE242.setFromNode(CString("SKULLBASE_ANIMATOR"));
ROUTE242.setToField(CString("set_rotation"));
ROUTE242.setToNode(CString("hanim_skullbase"));
Scene26.addChild(&ROUTE242);

ROUTE& ROUTE243 =  ROUTE();
ROUTE243.setFromField(CString("value_changed"));
ROUTE243.setFromNode(CString("L_SHOULDER_ANIMATOR"));
ROUTE243.setToField(CString("set_rotation"));
ROUTE243.setToNode(CString("hanim_l_shoulder"));
Scene26.addChild(&ROUTE243);

ROUTE& ROUTE244 =  ROUTE();
ROUTE244.setFromField(CString("value_changed"));
ROUTE244.setFromNode(CString("L_ELBOW_ANIMATOR"));
ROUTE244.setToField(CString("set_rotation"));
ROUTE244.setToNode(CString("hanim_l_elbow"));
Scene26.addChild(&ROUTE244);

ROUTE& ROUTE245 =  ROUTE();
ROUTE245.setFromField(CString("value_changed"));
ROUTE245.setFromNode(CString("L_WRIST_ANIMATOR"));
ROUTE245.setToField(CString("set_rotation"));
ROUTE245.setToNode(CString("hanim_l_wrist"));
Scene26.addChild(&ROUTE245);

ROUTE& ROUTE246 =  ROUTE();
ROUTE246.setFromField(CString("value_changed"));
ROUTE246.setFromNode(CString("R_SHOULDER_ANIMATOR"));
ROUTE246.setToField(CString("set_rotation"));
ROUTE246.setToNode(CString("hanim_r_shoulder"));
Scene26.addChild(&ROUTE246);

ROUTE& ROUTE247 =  ROUTE();
ROUTE247.setFromField(CString("value_changed"));
ROUTE247.setFromNode(CString("R_ELBOW_ANIMATOR"));
ROUTE247.setToField(CString("set_rotation"));
ROUTE247.setToNode(CString("hanim_r_elbow"));
Scene26.addChild(&ROUTE247);

ROUTE& ROUTE248 =  ROUTE();
ROUTE248.setFromField(CString("value_changed"));
ROUTE248.setFromNode(CString("R_WRIST_ANIMATOR"));
ROUTE248.setToField(CString("set_rotation"));
ROUTE248.setToNode(CString("hanim_r_wrist"));
Scene26.addChild(&ROUTE248);

ROUTE& ROUTE249 =  ROUTE();
ROUTE249.setFromNode(CString("TIMER"));
ROUTE249.setFromField(CString("fraction_changed"));
ROUTE249.setToNode(CString("hanim_skullbase_displacer"));
ROUTE249.setToField(CString("weight"));
Scene26.addChild(&ROUTE249);

X3D0.setScene(&Scene26);

//}
