//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("HAnimPoseExternProtoDeclare.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("1 November 2025"));
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
meta7.setName(CString("creator"));
meta7.setContent(CString("Joe Williams"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("contributor"));
meta8.setContent(CString("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("specificationSection"));
meta9.setContent(CString("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("specificationUrl"));
meta10.setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("specificationSection"));
meta11.setContent(CString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("specificationUrl"));
meta12.setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("specificationSection"));
meta13.setContent(CString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("specificationUrl"));
meta14.setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("generator"));
meta16.setContent(CString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("generator"));
meta17.setContent(CString("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("identifier"));
meta18.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("license"));
meta19.setContent(CString("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta19);

X3D0.setHead(&head1);

Scene& Scene20 =  Scene();
WorldInfo& WorldInfo21 =  WorldInfo();
WorldInfo21.setDEF(CString("ModelInfo"));
WorldInfo21.setInfo(new CString[]{CString("Design to illustrate a potential HAnimPose node")}, 1);
WorldInfo21.setTitle(CString("HAnimPoseExternProtoDeclare"));
Scene20.addChild(&WorldInfo21);

Background& Background22 =  Background();
Background22.setSkyColor(new float[]{0.6,0.6,0.8}, 3);
Scene20.addChild(&Background22);

NavigationInfo& NavigationInfo23 =  NavigationInfo();
Scene20.addChild(&NavigationInfo23);

ExternProtoDeclare& ExternProtoDeclare24 =  ExternProtoDeclare();
ExternProtoDeclare24.setName(CString("HAnimPose"));
ExternProtoDeclare24.setAppinfo(CString("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."));
ExternProtoDeclare24.setUrl(new CString[]{CString("Filename.x3d#HAnimPose"), CString("https://some.address.org/Filename.x3d#HAnimPose")}, 2);
field& field25 =  field();
field25.setName(CString("parentHAnimHumanoid"));
field25.setAccessType(CString("inputOutput"));
field25.setAppinfo(CString("HAnimHumanoid for this Pose to act upon"));
field25.setType(CString("SFNode"));
ExternProtoDeclare24.addChild(&field25);

field& field26 =  field();
field26.setName(CString("name"));
field26.setAccessType(CString("inputOutput"));
field26.setAppinfo(CString("name of this pose"));
field26.setType(CString("SFString"));
ExternProtoDeclare24.addChild(&field26);

field& field27 =  field();
field27.setName(CString("children"));
field27.setAccessType(CString("inputOutput"));
field27.setAppinfo(CString("joint values to apply to HAnimHumanoid"));
field27.setType(CString("MFNode"));
//initializating Joint nodes (if any) go here
ExternProtoDeclare24.addChild(&field27);

field& field28 =  field();
field28.setName(CString("description"));
field28.setAccessType(CString("inputOutput"));
field28.setAppinfo(CString("explanation of purpose"));
field28.setType(CString("SFString"));
ExternProtoDeclare24.addChild(&field28);

field& field29 =  field();
field29.setName(CString("enabled"));
field29.setAccessType(CString("inputOutput"));
field29.setAppinfo(CString("default value true"));
field29.setType(CString("SFBool"));
ExternProtoDeclare24.addChild(&field29);

field& field30 =  field();
field30.setName(CString("loa"));
field30.setAccessType(CString("initializeOnly"));
field30.setAppinfo(CString("default is no loa"));
field30.setType(CString("SFInt32"));
ExternProtoDeclare24.addChild(&field30);

field& field31 =  field();
field31.setName(CString("transitionDuration"));
field31.setAccessType(CString("inputOutput"));
field31.setAppinfo(CString("how many seconds to achieve the pose"));
field31.setType(CString("SFTime"));
ExternProtoDeclare24.addChild(&field31);

field& field32 =  field();
field32.setName(CString("metadata"));
field32.setAccessType(CString("inputOutput"));
field32.setAppinfo(CString("single Metadata* node"));
field32.setType(CString("SFNode"));
ExternProtoDeclare24.addChild(&field32);

field& field33 =  field();
field33.setName(CString("isActive"));
field33.setAccessType(CString("outputOnly"));
field33.setAppinfo(CString("event indicating when pose transition is active"));
field33.setType(CString("SFBool"));
ExternProtoDeclare24.addChild(&field33);

field& field34 =  field();
field34.setName(CString("commencePose"));
field34.setAccessType(CString("inputOnly"));
field34.setAppinfo(CString("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"));
field34.setType(CString("SFBool"));
ExternProtoDeclare24.addChild(&field34);

field& field35 =  field();
field35.setName(CString("resetAllJoints"));
field35.setAccessType(CString("inputOnly"));
field35.setAppinfo(CString("reset the skeleton to I pose with all joints zeroed"));
field35.setType(CString("SFBool"));
ExternProtoDeclare24.addChild(&field35);

field& field36 =  field();
field36.setName(CString("set_fraction"));
field36.setAccessType(CString("inputOnly"));
field36.setAppinfo(CString("allows transition to proceed incrementally from fraction [0..10"));
field36.setType(CString("SFFloat"));
ExternProtoDeclare24.addChild(&field36);

field& field37 =  field();
field37.setName(CString("set_startTime"));
field37.setAccessType(CString("inputOnly"));
field37.setAppinfo(CString("starts the animation clock"));
field37.setType(CString("SFTime"));
ExternProtoDeclare24.addChild(&field37);

field& field38 =  field();
field38.setName(CString("isLoaded"));
field38.setAccessType(CString("inputOnly"));
field38.setAppinfo(CString("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"));
field38.setType(CString("SFBool"));
ExternProtoDeclare24.addChild(&field38);

field& field39 =  field();
field39.setName(CString("traceEnabled"));
field39.setAccessType(CString("inputOutput"));
field39.setAppinfo(CString("debug trace to Browser output console this is a local prototype field"));
field39.setType(CString("SFBool"));
ExternProtoDeclare24.addChild(&field39);

Scene20.addChild(&ExternProtoDeclare24);

Viewpoint& Viewpoint40 =  Viewpoint();
Viewpoint40.setDescription(CString("HAnimPoseExternProtoDeclare description"));
Viewpoint40.setPosition(new float[]{0.0,1.0,4.0});
Scene20.addChild(&Viewpoint40);

Transform& Transform41 =  Transform();
Transform41.setDEF(CString("DisplayHeader1"));
Transform41.setTranslation(new float[]{0.0,1.5,0.0});
Anchor& Anchor42 =  Anchor();
Anchor42.setDescription(CString("go to HAnimPoseExternProtoDeclareIndex page"));
Anchor42.setParameter(new CString[]{CString("target=_blank")}, 1);
Anchor42.setUrl(new CString[]{CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html")}, 1);
Shape& Shape43 =  Shape();
Text& Text44 =  Text();
Text44.setString(new CString[]{CString("Utility scene"), CString("HAnimPoseExternProtoDeclare.x3d")}, 2);
CFontStyle& FontStyle45 =  CFontStyle();
FontStyle45.setDEF(CString("HeaderFont"));
FontStyle45.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle45.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle45.setSize(0.15);
FontStyle45.setStyle(CString("BOLD"));
Text44.setFontStyle(&FontStyle45);

Shape43.setGeometry(&Text44);

Appearance& Appearance46 =  Appearance();
Appearance46.setDEF(CString("PoseTextAppearance"));
Material& Material47 =  Material();
Material47.setDiffuseColor(new float[]{0.1,0.3,0.5});
Appearance46.addChild(&Material47);

Shape43.addChild(&Appearance46);

Anchor42.addChild(&Shape43);

Shape& Shape48 =  Shape();
Box& Box49 =  Box();
Box49.setSize(new float[]{3.5,0.5,0.001});
Shape48.setGeometry(&Box49);

Appearance& Appearance50 =  Appearance();
Appearance50.setDEF(CString("TransparentAppearance"));
Material& Material51 =  Material();
Material51.setTransparency(1);
Appearance50.addChild(&Material51);

Shape48.addChild(&Appearance50);

Anchor42.addChild(&Shape48);

Transform41.addChild(&Anchor42);

Scene20.addChild(&Transform41);

Transform& Transform52 =  Transform();
Transform52.setDEF(CString("DisplayHeader2"));
Transform52.setTranslation(new float[]{0.0,0.5,0.0});
Anchor& Anchor53 =  Anchor();
Anchor53.setDescription(CString("go to HAnimPosePrototypeIndex page"));
Anchor53.setParameter(new CString[]{CString("target=_blank")}, 1);
Anchor53.setUrl(new CString[]{CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html")}, 1);
Shape& Shape54 =  Shape();
Text& Text55 =  Text();
Text55.setString(new CString[]{CString("This model supports"), CString("HAnimPosePrototype.x3d")}, 2);
CFontStyle& FontStyle56 =  CFontStyle();
FontStyle56.setUSE(CString("HeaderFont"));
Text55.setFontStyle(&FontStyle56);

Shape54.setGeometry(&Text55);

Appearance& Appearance57 =  Appearance();
Appearance57.setUSE(CString("PoseTextAppearance"));
Shape54.addChild(&Appearance57);

Anchor53.addChild(&Shape54);

Transform52.addChild(&Anchor53);

Shape& Shape58 =  Shape();
Box& Box59 =  Box();
Box59.setSize(new float[]{2.6,0.5,0.001});
Shape58.setGeometry(&Box59);

Appearance& Appearance60 =  Appearance();
Appearance60.setUSE(CString("TransparentAppearance"));
Shape58.addChild(&Appearance60);

Transform52.addChild(&Shape58);

Scene20.addChild(&Transform52);

X3D0.setScene(&Scene20);

//}
