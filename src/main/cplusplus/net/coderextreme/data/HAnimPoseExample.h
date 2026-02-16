//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("4.1"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("HAnimPoseExample.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("11 December 2025"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("modified"));
meta5.setContent(CString("14 December 2025"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Don Brutzman"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("warning"));
meta7.setContent(CString("under development for X3D 4.1"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("specificationSection"));
meta8.setContent(CString("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("specificationUrl"));
meta9.setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("specificationSection"));
meta10.setContent(CString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("specificationUrl"));
meta11.setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("specificationSection"));
meta12.setContent(CString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("specificationUrl"));
meta13.setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("generator"));
meta14.setContent(CString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("identifier"));
meta15.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("license"));
meta16.setContent(CString("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta16);

X3D0.setHead(&head1);

Scene& Scene17 =  Scene();
WorldInfo& WorldInfo18 =  WorldInfo();
WorldInfo18.setDEF(CString("ModelInfo"));
WorldInfo18.setInfo(new CString[]{CString("Example scene for HAnimPose node")}, 1);
WorldInfo18.setTitle(CString("HAnimPoseExample.x3d"));
Scene17.addChild(&WorldInfo18);

Background& Background19 =  Background();
Background19.setSkyColor(new float[]{0.8,0.8,1.0}, 3);
Scene17.addChild(&Background19);

NavigationInfo& NavigationInfo20 =  NavigationInfo();
Scene17.addChild(&NavigationInfo20);

Group& Group21 =  Group();
Group21.setDEF(CString("HandleInlineLoading"));
//Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2
//Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun
Inline& Inline22 =  Inline();
Inline22.setDEF(CString("HumanoidInline"));
Inline22.setDescription(CString("remote HAnimHumanoid for IMPORT"));
Inline22.setUrl(new CString[]{CString("../Skin/JoeSkeletonSkinSite.x3d"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d")}, 2);
Group21.addChild(&Inline22);

//Note that the following importedDEF must match the EXPORT name found in remote file
IMPORT& IMPORT23 =  IMPORT();
IMPORT23.setAS(CString("HumanoidImported"));
IMPORT23.setImportedDEF(CString("JoeSkeletonSkinSite"));
IMPORT23.setInlineDEF(CString("HumanoidInline"));
Group21.addChild(&IMPORT23);

LoadSensor& LoadSensor24 =  LoadSensor();
LoadSensor24.setDEF(CString("HumanoidInlineLoadSensor"));
LoadSensor24.setTimeOut(2);
Inline& Inline25 =  Inline();
Inline25.setUSE(CString("HumanoidInline"));
LoadSensor24.addChildren(Inline25);

Group21.addChild(&LoadSensor24);

Scene17.addChild(&Group21);

Viewpoint& Viewpoint26 =  Viewpoint();
Viewpoint26.setDescription(CString("HAnimPose for HumanoidInline IMPORT model"));
Viewpoint26.setPosition(new float[]{0.0,1.0,4.0});
Scene17.addChild(&Viewpoint26);

//no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...
HAnimPose& HAnimPose27 =  HAnimPose();
HAnimPose27.X3DNode::setName(CString("T"));
HAnimPose27.setDEF(CString("T_Pose"));
HAnimPose27.setDescription(CString("arms stretched outward and level similar to letter T"));
HAnimPose27.setLoa(1);
HAnimPose27.setTransitionDuration(1.3);
MetadataString& MetadataString28 =  MetadataString();
MetadataString28.X3DNode::setName(CString("metadataTest"));
MetadataString28.setValue(new CString[]{CString("hello HAnimPose metadata")}, 1);
HAnimPose27.setMetadata(&MetadataString28);

//test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/
HAnimJoint& HAnimJoint29 =  HAnimJoint();
HAnimJoint29.X3DNode::setName(CString("l_shoulder"));
HAnimJoint29.setDEF(CString("PoseJoint_l_shoulder_1"));
HAnimJoint29.setDescription(CString("left shoulder"));
HAnimJoint29.setRotation(new float[]{0.0,0.0,1.0,1.57});
HAnimJoint29.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint29.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose27.addChildren(&HAnimJoint29);

HAnimJoint& HAnimJoint30 =  HAnimJoint();
HAnimJoint30.X3DNode::setName(CString("r_shoulder"));
HAnimJoint30.setDEF(CString("PoseJoint_r_shoulder_1"));
HAnimJoint30.setDescription(CString("right shoulder"));
HAnimJoint30.setRotation(new float[]{0.0,0.0,-1.0,1.57});
HAnimJoint30.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint30.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose27.addChildren(&HAnimJoint30);

Scene17.addChild(&HAnimPose27);

HAnimPose& HAnimPose31 =  HAnimPose();
HAnimPose31.X3DNode::setName(CString("A"));
HAnimPose31.setDEF(CString("A_Pose"));
HAnimPose31.setDescription(CString("arms stretched outward and downward similar to letter A"));
HAnimPose31.setLoa(1);
HAnimPose31.setTransitionDuration(1.2);
HAnimJoint& HAnimJoint32 =  HAnimJoint();
HAnimJoint32.X3DNode::setName(CString("l_shoulder"));
HAnimJoint32.setDEF(CString("PoseJoint_l_shoulder"));
HAnimJoint32.setDescription(CString("left shoulder"));
HAnimJoint32.setRotation(new float[]{0.0,0.0,1.0,0.5});
HAnimJoint32.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint32.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose31.addChildren(&HAnimJoint32);

HAnimJoint& HAnimJoint33 =  HAnimJoint();
HAnimJoint33.X3DNode::setName(CString("r_shoulder"));
HAnimJoint33.setDEF(CString("PoseJoint_r_shoulder"));
HAnimJoint33.setDescription(CString("right shoulder"));
HAnimJoint33.setRotation(new float[]{0.0,0.0,-1.0,0.5});
HAnimJoint33.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint33.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose31.addChildren(&HAnimJoint33);

Scene17.addChild(&HAnimPose31);

HAnimPose& HAnimPose34 =  HAnimPose();
HAnimPose34.X3DNode::setName(CString("TouchDown"));
HAnimPose34.setDEF(CString("TouchDown_Pose"));
HAnimPose34.setDescription(CString("arms and legs stretched outward providing a TouchDown gesture"));
HAnimPose34.setLoa(1);
HAnimPose34.setTransitionDuration(1.2);
HAnimJoint& HAnimJoint35 =  HAnimJoint();
HAnimJoint35.X3DNode::setName(CString("humanoid_root"));
HAnimJoint35.setRotation(new float[]{0.0,1.0,0.0,-0.698132});
HAnimJoint35.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint35.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint35);

HAnimJoint& HAnimJoint36 =  HAnimJoint();
HAnimJoint36.X3DNode::setName(CString("l_hip"));
HAnimJoint36.setRotation(new float[]{-1.0,1.0,1.0,1.0});
HAnimJoint36.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint36.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint36);

HAnimJoint& HAnimJoint37 =  HAnimJoint();
HAnimJoint37.X3DNode::setName(CString("l_knee"));
HAnimJoint37.setRotation(new float[]{1.0,0.0,0.0,1.0});
HAnimJoint37.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint37.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint37);

HAnimJoint& HAnimJoint38 =  HAnimJoint();
HAnimJoint38.X3DNode::setName(CString("l_talocrural"));
HAnimJoint38.setRotation(new float[]{-0.2,0.0,0.1,0.225});
HAnimJoint38.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint38.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint38);

HAnimJoint& HAnimJoint39 =  HAnimJoint();
HAnimJoint39.X3DNode::setName(CString("r_hip"));
HAnimJoint39.setRotation(new float[]{-1.0,-1.0,-1.0,1.0});
HAnimJoint39.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint39.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint39);

HAnimJoint& HAnimJoint40 =  HAnimJoint();
HAnimJoint40.X3DNode::setName(CString("r_knee"));
HAnimJoint40.setRotation(new float[]{1.0,0.0,0.0,1.0});
HAnimJoint40.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint40.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint40);

HAnimJoint& HAnimJoint41 =  HAnimJoint();
HAnimJoint41.X3DNode::setName(CString("r_talocrural"));
HAnimJoint41.setRotation(new float[]{-0.2,0.0,0.1,0.25});
HAnimJoint41.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint41.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint41);

HAnimJoint& HAnimJoint42 =  HAnimJoint();
HAnimJoint42.X3DNode::setName(CString("vl5"));
HAnimJoint42.setRotation(new float[]{0.0,0.0,0.01,0.2});
HAnimJoint42.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint42.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint42);

HAnimJoint& HAnimJoint43 =  HAnimJoint();
HAnimJoint43.X3DNode::setName(CString("vt10"));
HAnimJoint43.setRotation(new float[]{0.0,0.0,0.01,0.1});
HAnimJoint43.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint43.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint43);

HAnimJoint& HAnimJoint44 =  HAnimJoint();
HAnimJoint44.X3DNode::setName(CString("vc4"));
HAnimJoint44.setRotation(new float[]{0.0,0.0,-0.01,0.15});
HAnimJoint44.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint44.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint44);

HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.X3DNode::setName(CString("l_shoulder"));
HAnimJoint45.setRotation(new float[]{-1.0,0.5,1.0,2.0});
HAnimJoint45.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint45.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint45);

HAnimJoint& HAnimJoint46 =  HAnimJoint();
HAnimJoint46.X3DNode::setName(CString("l_elbow"));
HAnimJoint46.setRotation(new float[]{-1.0,0.0,0.0,1.0});
HAnimJoint46.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint46.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint46);

HAnimJoint& HAnimJoint47 =  HAnimJoint();
HAnimJoint47.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint47.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint47.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint47);

HAnimJoint& HAnimJoint48 =  HAnimJoint();
HAnimJoint48.X3DNode::setName(CString("r_shoulder"));
HAnimJoint48.setRotation(new float[]{-1.0,-0.5,-1.0,2.6});
HAnimJoint48.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint48.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint48);

HAnimJoint& HAnimJoint49 =  HAnimJoint();
HAnimJoint49.X3DNode::setName(CString("r_elbow"));
HAnimJoint49.setRotation(new float[]{-1.0,0.0,0.0,1.0});
HAnimJoint49.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint49.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint49);

HAnimJoint& HAnimJoint50 =  HAnimJoint();
HAnimJoint50.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint50.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint50.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose34.addChildren(&HAnimJoint50);

Scene17.addChild(&HAnimPose34);

HAnimPose& HAnimPose51 =  HAnimPose();
HAnimPose51.X3DNode::setName(CString("I"));
HAnimPose51.setDEF(CString("I_Pose"));
HAnimPose51.setDescription(CString("arms and legs straight down default binding pose for baseline Humanoid"));
HAnimPose51.setLoa(1);
HAnimPose51.setTransitionDuration(1.5);
//not defining any poseJoint HAnimJoint nodes equals the default \"I\" pose
Scene17.addChild(&HAnimPose51);

HAnimPose& HAnimPose52 =  HAnimPose();
HAnimPose52.X3DNode::setName(CString("H"));
HAnimPose52.setDEF(CString("H_Pose"));
HAnimPose52.setDescription(CString("TODO experimental pose not yet implemented"));
HAnimPose52.setEnabled(false);
HAnimPose52.setTransitionDuration(1.4);
HAnimPose52.setLoa(-1);
//TODO define poseJoint HAnimJoint nodes
Scene17.addChild(&HAnimPose52);

HAnimPose& HAnimPose53 =  HAnimPose();
HAnimPose53.X3DNode::setName(CString("FaceLeft"));
HAnimPose53.setDEF(CString("FaceLeft_Pose"));
HAnimPose53.setDescription(CString("Only modify humanoid_root Joint node to face left"));
HAnimPose53.setLoa(0);
HAnimPose53.setTransitionDuration(1.1);
HAnimJoint& HAnimJoint54 =  HAnimJoint();
HAnimJoint54.X3DNode::setName(CString("humanoid_root"));
HAnimJoint54.setDEF(CString("FaceLeft_humanoid_root"));
HAnimJoint54.setDescription(CString("Only rotate the model"));
HAnimJoint54.setRotation(new float[]{0.0,1.0,0.0,1.570796});
HAnimJoint54.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint54.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose53.addChildren(&HAnimJoint54);

Scene17.addChild(&HAnimPose53);

HAnimPose& HAnimPose55 =  HAnimPose();
HAnimPose55.X3DNode::setName(CString("FaceRight"));
HAnimPose55.setDEF(CString("FaceRight_Pose"));
HAnimPose55.setDescription(CString("Only modify humanoid_root Joint node to face right"));
HAnimPose55.setLoa(0);
HAnimPose55.setTransitionDuration(1.1);
HAnimJoint& HAnimJoint56 =  HAnimJoint();
HAnimJoint56.X3DNode::setName(CString("humanoid_root"));
HAnimJoint56.setDEF(CString("FaceRight_humanoid_root"));
HAnimJoint56.setDescription(CString("Only rotate the model"));
HAnimJoint56.setRotation(new float[]{0.0,1.0,0.0,-1.570796});
HAnimJoint56.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint56.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimPose55.addChildren(&HAnimJoint56);

Scene17.addChild(&HAnimPose55);

Group& Group57 =  Group();
Group57.setDEF(CString("InterfaceButtonsGroup"));
Transform& Transform58 =  Transform();
Transform58.setDEF(CString("DisplayHeader"));
Transform58.setTranslation(new float[]{0.0,2.0,0.0});
Shape& Shape59 =  Shape();
Text& Text60 =  Text();
Text60.setString(new CString[]{CString("HAnimPosePrototype example implementation")}, 1);
CFontStyle& FontStyle61 =  CFontStyle();
FontStyle61.setDEF(CString("HeaderFont"));
FontStyle61.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle61.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle61.setSize(0.15);
FontStyle61.setStyle(CString("BOLD"));
Text60.setFontStyle(&FontStyle61);

Shape59.setGeometry(&Text60);

Appearance& Appearance62 =  Appearance();
Appearance62.setDEF(CString("PoseTextAppearance"));
Material& Material63 =  Material();
Material63.setDiffuseColor(new float[]{0.1,0.5,0.3});
Appearance62.addChild(&Material63);

Shape59.addChild(&Appearance62);

Transform58.addChild(&Shape59);

Group57.addChild(&Transform58);

Transform& Transform64 =  Transform();
Transform64.setDEF(CString("T_PoseInterface"));
Transform64.setTranslation(new float[]{-1.5,1.5,0.0});
Shape& Shape65 =  Shape();
Text& Text66 =  Text();
Text66.setString(new CString[]{CString("\"T\" Pose")}, 1);
CFontStyle& FontStyle67 =  CFontStyle();
FontStyle67.setDEF(CString("SharedFont"));
FontStyle67.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle67.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle67.setSize(0.1);
FontStyle67.setStyle(CString("BOLD"));
Text66.setFontStyle(&FontStyle67);

Shape65.setGeometry(&Text66);

Appearance& Appearance68 =  Appearance();
Appearance68.setUSE(CString("PoseTextAppearance"));
Shape65.addChild(&Appearance68);

Transform64.addChild(&Shape65);

Shape& Shape69 =  Shape();
Appearance& Appearance70 =  Appearance();
Appearance70.setDEF(CString("TransparentAppearance"));
Material& Material71 =  Material();
Material71.setTransparency(0.8);
Appearance70.addChild(&Material71);

Shape69.addChild(&Appearance70);

Box& Box72 =  Box();
Box72.setSize(new float[]{0.45,0.2,0.001});
Shape69.setGeometry(&Box72);

Transform64.addChild(&Shape69);

TouchSensor& TouchSensor73 =  TouchSensor();
TouchSensor73.setDEF(CString("T_PoseTouchSensor"));
TouchSensor73.setDescription(CString("select to move shoulders to \"T\" pose, leave other joints unchanged"));
Transform64.addChild(&TouchSensor73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromField(CString("isActive"));
ROUTE74.setFromNode(CString("T_PoseTouchSensor"));
ROUTE74.setToField(CString("commencePose"));
ROUTE74.setToNode(CString("T_Pose"));
Transform64.addChild(&ROUTE74);

Group57.addChild(&Transform64);

Transform& Transform75 =  Transform();
Transform75.setDEF(CString("A_PoseInterface"));
Transform75.setTranslation(new float[]{-1.5,1.0,0.0});
Shape& Shape76 =  Shape();
Text& Text77 =  Text();
Text77.setString(new CString[]{CString("\"A\" Pose")}, 1);
CFontStyle& FontStyle78 =  CFontStyle();
FontStyle78.setUSE(CString("SharedFont"));
Text77.setFontStyle(&FontStyle78);

Shape76.setGeometry(&Text77);

Appearance& Appearance79 =  Appearance();
Appearance79.setUSE(CString("PoseTextAppearance"));
Shape76.addChild(&Appearance79);

Transform75.addChild(&Shape76);

Shape& Shape80 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance81 =  Appearance();
Appearance81.setUSE(CString("TransparentAppearance"));
Shape80.addChild(&Appearance81);

Box& Box82 =  Box();
Box82.setSize(new float[]{0.45,0.2,0.001});
Shape80.setGeometry(&Box82);

Transform75.addChild(&Shape80);

TouchSensor& TouchSensor83 =  TouchSensor();
TouchSensor83.setDEF(CString("A_PoseTouchSensor"));
TouchSensor83.setDescription(CString("select to move shoulders to \"A\" pose, leave other joints unchanged"));
Transform75.addChild(&TouchSensor83);

ROUTE& ROUTE84 =  ROUTE();
ROUTE84.setFromField(CString("isActive"));
ROUTE84.setFromNode(CString("A_PoseTouchSensor"));
ROUTE84.setToField(CString("commencePose"));
ROUTE84.setToNode(CString("A_Pose"));
Transform75.addChild(&ROUTE84);

Group57.addChild(&Transform75);

Transform& Transform85 =  Transform();
Transform85.setDEF(CString("TouchDown_PoseInterface"));
Transform85.setTranslation(new float[]{-1.5,0.5,0.0});
Shape& Shape86 =  Shape();
Text& Text87 =  Text();
Text87.setString(new CString[]{CString("TouchDown Pose")}, 1);
CFontStyle& FontStyle88 =  CFontStyle();
FontStyle88.setUSE(CString("SharedFont"));
Text87.setFontStyle(&FontStyle88);

Shape86.setGeometry(&Text87);

Appearance& Appearance89 =  Appearance();
Appearance89.setUSE(CString("PoseTextAppearance"));
Shape86.addChild(&Appearance89);

Transform85.addChild(&Shape86);

Shape& Shape90 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance91 =  Appearance();
Appearance91.setUSE(CString("TransparentAppearance"));
Shape90.addChild(&Appearance91);

Box& Box92 =  Box();
Box92.setSize(new float[]{0.85,0.2,0.001});
Shape90.setGeometry(&Box92);

Transform85.addChild(&Shape90);

TouchSensor& TouchSensor93 =  TouchSensor();
TouchSensor93.setDEF(CString("TouchDown_PoseTouchSensor"));
TouchSensor93.setDescription(CString("select to transition all joints to TouchDown pose"));
Transform85.addChild(&TouchSensor93);

ROUTE& ROUTE94 =  ROUTE();
ROUTE94.setFromField(CString("isActive"));
ROUTE94.setFromNode(CString("TouchDown_PoseTouchSensor"));
ROUTE94.setToField(CString("commencePose"));
ROUTE94.setToNode(CString("TouchDown_Pose"));
Transform85.addChild(&ROUTE94);

Group57.addChild(&Transform85);

Transform& Transform95 =  Transform();
Transform95.setDEF(CString("I_PoseInterface"));
Transform95.setTranslation(new float[]{-1.5,0.0,0.0});
Shape& Shape96 =  Shape();
Text& Text97 =  Text();
Text97.setString(new CString[]{CString("\"I\" Pose")}, 1);
CFontStyle& FontStyle98 =  CFontStyle();
FontStyle98.setUSE(CString("SharedFont"));
Text97.setFontStyle(&FontStyle98);

Shape96.setGeometry(&Text97);

Appearance& Appearance99 =  Appearance();
Appearance99.setUSE(CString("PoseTextAppearance"));
Shape96.addChild(&Appearance99);

Transform95.addChild(&Shape96);

Shape& Shape100 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance101 =  Appearance();
Appearance101.setUSE(CString("TransparentAppearance"));
Shape100.addChild(&Appearance101);

Box& Box102 =  Box();
Box102.setSize(new float[]{0.45,0.2,0.001});
Shape100.setGeometry(&Box102);

Transform95.addChild(&Shape100);

TouchSensor& TouchSensor103 =  TouchSensor();
TouchSensor103.setDEF(CString("I_PoseTouchSensor"));
TouchSensor103.setDescription(CString("select to transition all joints to \"I\" pose"));
Transform95.addChild(&TouchSensor103);

ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromField(CString("isActive"));
ROUTE104.setFromNode(CString("I_PoseTouchSensor"));
ROUTE104.setToField(CString("commencePose"));
ROUTE104.setToNode(CString("I_Pose"));
Transform95.addChild(&ROUTE104);

Group57.addChild(&Transform95);

Transform& Transform105 =  Transform();
Transform105.setDEF(CString("FaceLeftPoseInterface"));
Transform105.setTranslation(new float[]{1.5,1.5,0.0});
Shape& Shape106 =  Shape();
Text& Text107 =  Text();
Text107.setString(new CString[]{CString("Face Left Pose")}, 1);
CFontStyle& FontStyle108 =  CFontStyle();
FontStyle108.setUSE(CString("SharedFont"));
Text107.setFontStyle(&FontStyle108);

Shape106.setGeometry(&Text107);

Appearance& Appearance109 =  Appearance();
Appearance109.setUSE(CString("PoseTextAppearance"));
Shape106.addChild(&Appearance109);

Transform105.addChild(&Shape106);

Shape& Shape110 =  Shape();
Appearance& Appearance111 =  Appearance();
Appearance111.setUSE(CString("TransparentAppearance"));
Shape110.addChild(&Appearance111);

Box& Box112 =  Box();
Box112.setSize(new float[]{0.9,0.2,0.001});
Shape110.setGeometry(&Box112);

Transform105.addChild(&Shape110);

TouchSensor& TouchSensor113 =  TouchSensor();
TouchSensor113.setDEF(CString("FaceLeftTouchSensor"));
TouchSensor113.setDescription(CString("select to rotate body and Face Left, leave other joints unchanged"));
Transform105.addChild(&TouchSensor113);

ROUTE& ROUTE114 =  ROUTE();
ROUTE114.setFromField(CString("isActive"));
ROUTE114.setFromNode(CString("FaceLeftTouchSensor"));
ROUTE114.setToField(CString("commencePose"));
ROUTE114.setToNode(CString("FaceLeft_Pose"));
Transform105.addChild(&ROUTE114);

Group57.addChild(&Transform105);

Transform& Transform115 =  Transform();
Transform115.setDEF(CString("FaceRightPoseInterface"));
Transform115.setTranslation(new float[]{1.5,1.0,0.0});
Shape& Shape116 =  Shape();
Text& Text117 =  Text();
Text117.setString(new CString[]{CString("Face Right Pose")}, 1);
CFontStyle& FontStyle118 =  CFontStyle();
FontStyle118.setUSE(CString("SharedFont"));
Text117.setFontStyle(&FontStyle118);

Shape116.setGeometry(&Text117);

Appearance& Appearance119 =  Appearance();
Appearance119.setUSE(CString("PoseTextAppearance"));
Shape116.addChild(&Appearance119);

Transform115.addChild(&Shape116);

Shape& Shape120 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance121 =  Appearance();
Appearance121.setUSE(CString("TransparentAppearance"));
Shape120.addChild(&Appearance121);

Box& Box122 =  Box();
Box122.setSize(new float[]{0.9,0.2,0.001});
Shape120.setGeometry(&Box122);

Transform115.addChild(&Shape120);

TouchSensor& TouchSensor123 =  TouchSensor();
TouchSensor123.setDEF(CString("FaceRightTouchSensor"));
TouchSensor123.setDescription(CString("select to rotate body and Face Right, leave other joints unchanged"));
Transform115.addChild(&TouchSensor123);

ROUTE& ROUTE124 =  ROUTE();
ROUTE124.setFromField(CString("isActive"));
ROUTE124.setFromNode(CString("FaceRightTouchSensor"));
ROUTE124.setToField(CString("commencePose"));
ROUTE124.setToNode(CString("FaceRight_Pose"));
Transform115.addChild(&ROUTE124);

Group57.addChild(&Transform115);

Transform& Transform125 =  Transform();
Transform125.setDEF(CString("AnimatePosesInterface"));
Transform125.setTranslation(new float[]{1.5,0.5,0.0});
Shape& Shape126 =  Shape();
Text& Text127 =  Text();
Text127.setString(new CString[]{CString("Direct animation"), CString("to, from \"I\" Pose")}, 2);
CFontStyle& FontStyle128 =  CFontStyle();
FontStyle128.setUSE(CString("SharedFont"));
Text127.setFontStyle(&FontStyle128);

Shape126.setGeometry(&Text127);

Appearance& Appearance129 =  Appearance();
Appearance129.setDEF(CString("AnimationTextAppearance"));
Material& Material130 =  Material();
Material130.setDiffuseColor(new float[]{0.1,0.2,0.3});
Appearance129.addChild(&Material130);

Shape126.addChild(&Appearance129);

Transform125.addChild(&Shape126);

Shape& Shape131 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance132 =  Appearance();
Appearance132.setUSE(CString("TransparentAppearance"));
Shape131.addChild(&Appearance132);

Box& Box133 =  Box();
Box133.setSize(new float[]{0.9,0.25,0.001});
Shape131.setGeometry(&Box133);

Transform125.addChild(&Shape131);

TouchSensor& TouchSensor134 =  TouchSensor();
TouchSensor134.setDEF(CString("AnimatePosesTouchSensor"));
TouchSensor134.setDescription(CString("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"));
Transform125.addChild(&TouchSensor134);

//cycleInterval=4 also hard-coded in script execution message
TimeSensor& TimeSensor135 =  TimeSensor();
TimeSensor135.setDEF(CString("AnimatePosesClock"));
TimeSensor135.setCycleInterval(4);
TimeSensor135.setDescription(CString("directly animate several poses"));
Transform125.addChild(&TimeSensor135);

ScalarInterpolator& ScalarInterpolator136 =  ScalarInterpolator();
ScalarInterpolator136.setDEF(CString("AnimatePosesLoopInterpolator"));
ScalarInterpolator136.setKey(new float[]{0.0,0.05,0.45,0.55,0.95,1.0}, 6);
ScalarInterpolator136.setKeyValue(new float[]{0.0,0.0,1.0,1.0,0.0,0.0}, 6);
Transform125.addChild(&ScalarInterpolator136);

ROUTE& ROUTE137 =  ROUTE();
ROUTE137.setFromField(CString("touchTime"));
ROUTE137.setFromNode(CString("AnimatePosesTouchSensor"));
ROUTE137.setToField(CString("startTime"));
ROUTE137.setToNode(CString("AnimatePosesClock"));
Transform125.addChild(&ROUTE137);

ROUTE& ROUTE138 =  ROUTE();
ROUTE138.setFromField(CString("fraction_changed"));
ROUTE138.setFromNode(CString("AnimatePosesClock"));
ROUTE138.setToField(CString("set_fraction"));
ROUTE138.setToNode(CString("AnimatePosesLoopInterpolator"));
Transform125.addChild(&ROUTE138);

ROUTE& ROUTE139 =  ROUTE();
ROUTE139.setFromField(CString("value_changed"));
ROUTE139.setFromNode(CString("AnimatePosesLoopInterpolator"));
ROUTE139.setToField(CString("set_fraction"));
ROUTE139.setToNode(CString("I_Pose"));
Transform125.addChild(&ROUTE139);

Group57.addChild(&Transform125);

Transform& Transform140 =  Transform();
Transform140.setDEF(CString("ResetDefaultPoseInterface"));
Transform140.setTranslation(new float[]{1.5,0.0,0.0});
Shape& Shape141 =  Shape();
Text& Text142 =  Text();
Text142.setString(new CString[]{CString("Reset All Joints"), CString("to Default \"I\" Pose")}, 2);
CFontStyle& FontStyle143 =  CFontStyle();
FontStyle143.setUSE(CString("SharedFont"));
Text142.setFontStyle(&FontStyle143);

Shape141.setGeometry(&Text142);

Appearance& Appearance144 =  Appearance();
Appearance144.setUSE(CString("AnimationTextAppearance"));
Shape141.addChild(&Appearance144);

Transform140.addChild(&Shape141);

Shape& Shape145 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance146 =  Appearance();
Appearance146.setUSE(CString("TransparentAppearance"));
Shape145.addChild(&Appearance146);

Box& Box147 =  Box();
Box147.setSize(new float[]{0.9,0.25,0.001});
Shape145.setGeometry(&Box147);

Transform140.addChild(&Shape145);

TouchSensor& TouchSensor148 =  TouchSensor();
TouchSensor148.setDEF(CString("ResetPoseTouchSensor"));
TouchSensor148.setDescription(CString("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"));
Transform140.addChild(&TouchSensor148);

ROUTE& ROUTE149 =  ROUTE();
ROUTE149.setFromField(CString("isActive"));
ROUTE149.setFromNode(CString("ResetPoseTouchSensor"));
ROUTE149.setToField(CString("resetAllJoints"));
ROUTE149.setToNode(CString("FaceLeft_Pose"));
Transform140.addChild(&ROUTE149);

Group57.addChild(&Transform140);

Scene17.addChild(&Group57);

Group& Group150 =  Group();
Group150.setDEF(CString("HandleInlineLoadsensorRouting"));
ROUTE& ROUTE151 =  ROUTE();
ROUTE151.setFromField(CString("isLoaded"));
ROUTE151.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE151.setToField(CString("isLoaded"));
ROUTE151.setToNode(CString("A_Pose"));
Group150.addChild(&ROUTE151);

ROUTE& ROUTE152 =  ROUTE();
ROUTE152.setFromField(CString("isLoaded"));
ROUTE152.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE152.setToField(CString("isLoaded"));
ROUTE152.setToNode(CString("H_Pose"));
Group150.addChild(&ROUTE152);

ROUTE& ROUTE153 =  ROUTE();
ROUTE153.setFromField(CString("isLoaded"));
ROUTE153.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE153.setToField(CString("isLoaded"));
ROUTE153.setToNode(CString("I_Pose"));
Group150.addChild(&ROUTE153);

ROUTE& ROUTE154 =  ROUTE();
ROUTE154.setFromField(CString("isLoaded"));
ROUTE154.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE154.setToField(CString("isLoaded"));
ROUTE154.setToNode(CString("T_Pose"));
Group150.addChild(&ROUTE154);

ROUTE& ROUTE155 =  ROUTE();
ROUTE155.setFromField(CString("isLoaded"));
ROUTE155.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE155.setToField(CString("isLoaded"));
ROUTE155.setToNode(CString("FaceLeft_Pose"));
Group150.addChild(&ROUTE155);

ROUTE& ROUTE156 =  ROUTE();
ROUTE156.setFromField(CString("isLoaded"));
ROUTE156.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE156.setToField(CString("isLoaded"));
ROUTE156.setToNode(CString("FaceRight_Pose"));
Group150.addChild(&ROUTE156);

ROUTE& ROUTE157 =  ROUTE();
ROUTE157.setFromField(CString("isLoaded"));
ROUTE157.setFromNode(CString("HumanoidInlineLoadSensor"));
ROUTE157.setToField(CString("isLoaded"));
ROUTE157.setToNode(CString("TouchDown_Pose"));
Group150.addChild(&ROUTE157);

Scene17.addChild(&Group150);

HAnimHumanoid& HAnimHumanoid158 =  HAnimHumanoid();
HAnimHumanoid158.X3DNode::setName(CString("HumanoidStub"));
HAnimHumanoid158.setInfo(new CString[]{CString("humanoidVersion=2.0")}, 1);
HAnimHumanoid158.setVersion(CString("2.0"));
HAnimPose& HAnimPose159 =  HAnimPose();
HAnimPose159.setUSE(CString("A_Pose"));
HAnimHumanoid158.setChildren(HAnimPose159);

HAnimPose& HAnimPose160 =  HAnimPose();
HAnimPose160.setUSE(CString("T_Pose"));
HAnimHumanoid158.setChildren(HAnimPose160);

HAnimPose& HAnimPose161 =  HAnimPose();
HAnimPose161.setUSE(CString("I_Pose"));
HAnimHumanoid158.setChildren(HAnimPose161);

HAnimPose& HAnimPose162 =  HAnimPose();
HAnimPose162.setUSE(CString("H_Pose"));
HAnimHumanoid158.setChildren(HAnimPose162);

HAnimPose& HAnimPose163 =  HAnimPose();
HAnimPose163.setUSE(CString("FaceLeft_Pose"));
HAnimHumanoid158.setChildren(HAnimPose163);

HAnimPose& HAnimPose164 =  HAnimPose();
HAnimPose164.setUSE(CString("FaceRight_Pose"));
HAnimHumanoid158.setChildren(HAnimPose164);

HAnimPose& HAnimPose165 =  HAnimPose();
HAnimPose165.setUSE(CString("TouchDown_Pose"));
HAnimHumanoid158.setChildren(HAnimPose165);

Scene17.addChild(&HAnimHumanoid158);

X3D0.setScene(&Scene17);

//}
