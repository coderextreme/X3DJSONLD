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
meta3.setContent(CString("DiamondManLOA_2.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("hanim skeletal structure at level of articulation two, one diamond at the base node for the structure"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Matthew T. Beitler"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("translator"));
meta6.setContent(CString("Joel S. Pawloski"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("translator"));
meta7.setContent(CString("Don Brutzman"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("created"));
meta8.setContent(CString("12 November 2001"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("modified"));
meta9.setContent(CString("Tue, 09 Sep 2025 19:37:54 GMT"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("../Templates/DiamondManLOA_2.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("error"));
meta12.setContent(CString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("Image"));
meta13.setContent(CString("DiamondManLOA_2.png"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("Image"));
meta14.setContent(CString("images/BonesAllSkeletonFrontViewLOA2.png"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("motto"));
meta15.setContent(CString("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("subject"));
meta16.setContent(CString("human animation, x3d, vrml, animation"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("identifier"));
meta17.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_2.x3d"));
head1.addMeta(&meta17);

X3D0.setHead(&head1);

Scene& Scene18 =  Scene();
WorldInfo& WorldInfo19 =  WorldInfo();
WorldInfo19.setTitle(CString("HANIM 1.1 Default Joint Centers, LOA1"));
WorldInfo19.setInfo(new CString[]{CString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")}, 1);
Scene18.addChild(&WorldInfo19);

NavigationInfo& NavigationInfo20 =  NavigationInfo();
NavigationInfo20.setSpeed(1.5);
Scene18.addChild(&NavigationInfo20);

Viewpoint& Viewpoint21 =  Viewpoint();
Viewpoint21.setDescription(CString("Diamond Man, LOA 2"));
Viewpoint21.setPosition(new float[]{0,1,3});
Viewpoint21.setCenterOfRotation(new float[]{0,1,0});
Scene18.addChild(&Viewpoint21);

Transform& Transform22 =  Transform();
Transform22.setTranslation(new float[]{1,1.5,0});
Billboard& Billboard23 =  Billboard();
Shape& Shape24 =  Shape();
Appearance& Appearance25 =  Appearance();
Material& Material26 =  Material();
Material26.setDEF(CString("TextMaterial"));
Material26.setDiffuseColor(new float[]{0.9,0.9,0.9});
Appearance25.addChild(&Material26);

Shape24.addChild(&Appearance25);

Text& Text27 =  Text();
Text27.setString(new CString[]{CString("Diamond Man Key")}, 1);
CFontStyle& FontStyle28 =  CFontStyle();
FontStyle28.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle28.setSize(0.1);
Text27.setFontStyle(&FontStyle28);

Shape24.setGeometry(&Text27);

Billboard23.addChild(&Shape24);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{0,-0.3,0});
Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
Material& Material32 =  Material();
Material32.setDEF(CString("MIN_COLOR"));
Material32.setDiffuseColor(new float[]{1,0,0});
Appearance31.addChild(&Material32);

Shape30.addChild(&Appearance31);

Sphere& Sphere33 =  Sphere();
Sphere33.setRadius(0.08);
Shape30.setGeometry(&Sphere33);

Transform29.addChild(&Shape30);

Transform& Transform34 =  Transform();
Transform34.setTranslation(new float[]{0.2,0,0});
Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
Material& Material37 =  Material();
Material37.setUSE(CString("TextMaterial"));
Appearance36.addChild(&Material37);

Shape35.addChild(&Appearance36);

Text& Text38 =  Text();
Text38.setString(new CString[]{CString("Minimal Humanoid Joints")}, 1);
CFontStyle& FontStyle39 =  CFontStyle();
FontStyle39.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle39.setSize(0.1);
Text38.setFontStyle(&FontStyle39);

Shape35.setGeometry(&Text38);

Transform34.addChild(&Shape35);

Transform29.addChild(&Transform34);

Billboard23.addChild(&Transform29);

Transform& Transform40 =  Transform();
Transform40.setTranslation(new float[]{0,-0.5,0});
Shape& Shape41 =  Shape();
Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setDEF(CString("JOINT_COLOR"));
Material43.setDiffuseColor(new float[]{1,1,0});
Appearance42.addChild(&Material43);

Shape41.addChild(&Appearance42);

Sphere& Sphere44 =  Sphere();
Sphere44.setRadius(0.08);
Shape41.setGeometry(&Sphere44);

Transform40.addChild(&Shape41);

Transform& Transform45 =  Transform();
Transform45.setTranslation(new float[]{0.2,0,0});
Shape& Shape46 =  Shape();
Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Material48.setUSE(CString("TextMaterial"));
Appearance47.addChild(&Material48);

Shape46.addChild(&Appearance47);

Text& Text49 =  Text();
Text49.setString(new CString[]{CString("Humanoid Joints")}, 1);
CFontStyle& FontStyle50 =  CFontStyle();
FontStyle50.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle50.setSize(0.1);
Text49.setFontStyle(&FontStyle50);

Shape46.setGeometry(&Text49);

Transform45.addChild(&Shape46);

Transform40.addChild(&Transform45);

Billboard23.addChild(&Transform40);

Transform& Transform51 =  Transform();
Transform51.setTranslation(new float[]{0,-0.7,0});
Shape& Shape52 =  Shape();
Appearance& Appearance53 =  Appearance();
Material& Material54 =  Material();
Material54.setDEF(CString("REC_SPINAL_COLOR"));
Material54.setDiffuseColor(new float[]{1,0,1});
Appearance53.addChild(&Material54);

Shape52.addChild(&Appearance53);

Sphere& Sphere55 =  Sphere();
Sphere55.setRadius(0.08);
Shape52.setGeometry(&Sphere55);

Transform51.addChild(&Shape52);

Transform& Transform56 =  Transform();
Transform56.setTranslation(new float[]{0.2,0,0});
Shape& Shape57 =  Shape();
Appearance& Appearance58 =  Appearance();
Material& Material59 =  Material();
Material59.setUSE(CString("TextMaterial"));
Appearance58.addChild(&Material59);

Shape57.addChild(&Appearance58);

Text& Text60 =  Text();
Text60.setString(new CString[]{CString("Recommended Spinal Joints")}, 1);
CFontStyle& FontStyle61 =  CFontStyle();
FontStyle61.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle61.setSize(0.1);
Text60.setFontStyle(&FontStyle61);

Shape57.setGeometry(&Text60);

Transform56.addChild(&Shape57);

Transform51.addChild(&Transform56);

Billboard23.addChild(&Transform51);

Transform& Transform62 =  Transform();
Transform62.setTranslation(new float[]{0,-0.9,0});
Shape& Shape63 =  Shape();
Appearance& Appearance64 =  Appearance();
Material& Material65 =  Material();
Material65.setDEF(CString("SPINAL_COLOR"));
Material65.setDiffuseColor(new float[]{0,1,0});
Appearance64.addChild(&Material65);

Shape63.addChild(&Appearance64);

Sphere& Sphere66 =  Sphere();
Sphere66.setRadius(0.08);
Shape63.setGeometry(&Sphere66);

Transform62.addChild(&Shape63);

Transform& Transform67 =  Transform();
Transform67.setTranslation(new float[]{0.2,0,0});
Shape& Shape68 =  Shape();
Appearance& Appearance69 =  Appearance();
Material& Material70 =  Material();
Material70.setUSE(CString("TextMaterial"));
Appearance69.addChild(&Material70);

Shape68.addChild(&Appearance69);

Text& Text71 =  Text();
Text71.setString(new CString[]{CString("Spinal Joints")}, 1);
CFontStyle& FontStyle72 =  CFontStyle();
FontStyle72.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle72.setSize(0.1);
Text71.setFontStyle(&FontStyle72);

Shape68.setGeometry(&Text71);

Transform67.addChild(&Shape68);

Transform62.addChild(&Transform67);

Billboard23.addChild(&Transform62);

Transform& Transform73 =  Transform();
Transform73.setTranslation(new float[]{0,-1.3,0});
Shape& Shape74 =  Shape();
Appearance& Appearance75 =  Appearance();
Material& Material76 =  Material();
Material76.setDEF(CString("SITE_COLOR"));
Material76.setDiffuseColor(new float[]{0,0,1});
Appearance75.addChild(&Material76);

Shape74.addChild(&Appearance75);

Sphere& Sphere77 =  Sphere();
Sphere77.setRadius(0.08);
Shape74.setGeometry(&Sphere77);

Transform73.addChild(&Shape74);

Transform& Transform78 =  Transform();
Transform78.setTranslation(new float[]{0.2,0,0});
Shape& Shape79 =  Shape();
Appearance& Appearance80 =  Appearance();
Material& Material81 =  Material();
Material81.setUSE(CString("TextMaterial"));
Appearance80.addChild(&Material81);

Shape79.addChild(&Appearance80);

Text& Text82 =  Text();
Text82.setString(new CString[]{CString("Humanoid Sites")}, 1);
CFontStyle& FontStyle83 =  CFontStyle();
FontStyle83.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle83.setSize(0.1);
Text82.setFontStyle(&FontStyle83);

Shape79.setGeometry(&Text82);

Transform78.addChild(&Shape79);

Transform73.addChild(&Transform78);

Billboard23.addChild(&Transform73);

Transform& Transform84 =  Transform();
Transform84.setTranslation(new float[]{0,-1.1,0});
Shape& Shape85 =  Shape();
Appearance& Appearance86 =  Appearance();
Material& Material87 =  Material();
Material87.setDEF(CString("HAND_FEET_COLOR"));
Material87.setDiffuseColor(new float[]{0,1,1});
Appearance86.addChild(&Material87);

Shape85.addChild(&Appearance86);

Sphere& Sphere88 =  Sphere();
Sphere88.setRadius(0.08);
Shape85.setGeometry(&Sphere88);

Transform84.addChild(&Shape85);

Transform& Transform89 =  Transform();
Transform89.setTranslation(new float[]{0.2,0,0});
Shape& Shape90 =  Shape();
Appearance& Appearance91 =  Appearance();
Material& Material92 =  Material();
Material92.setUSE(CString("TextMaterial"));
Appearance91.addChild(&Material92);

Shape90.addChild(&Appearance91);

Text& Text93 =  Text();
Text93.setString(new CString[]{CString("Hand & Feet Joints")}, 1);
CFontStyle& FontStyle94 =  CFontStyle();
FontStyle94.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle94.setSize(0.1);
Text93.setFontStyle(&FontStyle94);

Shape90.setGeometry(&Text93);

Transform89.addChild(&Shape90);

Transform84.addChild(&Transform89);

Billboard23.addChild(&Transform84);

Transform22.addChild(&Billboard23);

Scene18.addChild(&Transform22);

HAnimHumanoid& HAnimHumanoid95 =  HAnimHumanoid();
HAnimHumanoid95.setDEF(CString("hanim_humanoid"));
HAnimHumanoid95.X3DNode::setName(CString("humanoid"));
HAnimHumanoid95.setVersion(CString("1.0"));
MetadataSet& MetadataSet96 =  MetadataSet();
MetadataSet96.X3DNode::setName(CString("HAnimHumanoid.info"));
MetadataSet96.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString97 =  MetadataString();
MetadataString97.X3DNode::setName(CString("authorName"));
MetadataSet96.setMetadata(&MetadataString97);

HAnimHumanoid95.setMetadata(&MetadataSet96);

HAnimJoint& HAnimJoint98 =  HAnimJoint();
HAnimJoint98.setDEF(CString("hanim_HumanoidRoot"));
HAnimJoint98.X3DNode::setName(CString("humanoid_root"));
HAnimJoint98.setCenter(new float[]{0,0.824,0.0277});
HAnimSegment& HAnimSegment99 =  HAnimSegment();
HAnimSegment99.setDEF(CString("hanim_sacrum"));
HAnimSegment99.X3DNode::setName(CString("sacrum"));
Transform& Transform100 =  Transform();
Transform100.setTranslation(new float[]{0,0.824,0.0277});
Shape& Shape101 =  Shape();
Shape101.setDEF(CString("DiamondShape"));
Appearance& Appearance102 =  Appearance();
Material& Material103 =  Material();
Material103.setDEF(CString("ROOT_COLOR"));
Material103.setDiffuseColor(new float[]{1,1,1});
Appearance102.addChild(&Material103);

Shape101.addChild(&Appearance102);

IndexedFaceSet& IndexedFaceSet104 =  IndexedFaceSet();
IndexedFaceSet104.setCreaseAngle(0.5);
IndexedFaceSet104.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate105 =  Coordinate();
Coordinate105.setDEF(CString("points"));
Coordinate105.setPoint(new float[]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet104.setCoord(&Coordinate105);

Shape101.setGeometry(&IndexedFaceSet104);

Transform100.addChild(&Shape101);

Transform& Transform106 =  Transform();
Transform106.setTranslation(new float[]{0,0.01,0});
Billboard& Billboard107 =  Billboard();
Shape& Shape108 =  Shape();
Appearance& Appearance109 =  Appearance();
Material& Material110 =  Material();
Material110.setDiffuseColor(new float[]{0.039216,1,0.568627});
Appearance109.addChild(&Material110);

Shape108.addChild(&Appearance109);

Text& Text111 =  Text();
Text111.setString(new CString[]{CString("Humanoid Root")}, 1);
CFontStyle& FontStyle112 =  CFontStyle();
FontStyle112.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle112.setStyle(CString("ITALIC"));
FontStyle112.setSize(0.01);
Text111.setFontStyle(&FontStyle112);

Shape108.setGeometry(&Text111);

Billboard107.addChild(&Shape108);

Transform106.addChild(&Billboard107);

Transform100.addChild(&Transform106);

HAnimSegment99.addChild(&Transform100);

HAnimJoint98.addChildren(&HAnimSegment99);

HAnimJoint& HAnimJoint113 =  HAnimJoint();
HAnimJoint113.setDEF(CString("hanim_sacroiliac"));
HAnimJoint113.X3DNode::setName(CString("sacroiliac"));
HAnimJoint113.setCenter(new float[]{0,0.9149,0.0016});
HAnimSegment& HAnimSegment114 =  HAnimSegment();
HAnimSegment114.setDEF(CString("hanim_pelvis"));
HAnimSegment114.X3DNode::setName(CString("pelvis"));
Transform& Transform115 =  Transform();
Transform115.setDEF(CString("sacroiliacPos"));
Transform115.setTranslation(new float[]{0,0.9149,0.0016});
Shape& Shape116 =  Shape();
Appearance& Appearance117 =  Appearance();
Material& Material118 =  Material();
Material118.setUSE(CString("MIN_COLOR"));
Appearance117.addChild(&Material118);

Shape116.addChild(&Appearance117);

IndexedFaceSet& IndexedFaceSet119 =  IndexedFaceSet();
IndexedFaceSet119.setCreaseAngle(0.5);
IndexedFaceSet119.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate120 =  Coordinate();
Coordinate120.setUSE(CString("points"));
IndexedFaceSet119.setCoord(&Coordinate120);

Shape116.setGeometry(&IndexedFaceSet119);

Transform115.addChild(&Shape116);

HAnimSegment114.addChild(&Transform115);

HAnimSite& HAnimSite121 =  HAnimSite();
HAnimSite121.setDEF(CString("hanim_r_iliocristale_pt"));
HAnimSite121.X3DNode::setName(CString("r_iliocristale_pt"));
HAnimSite121.setTranslation(new float[]{-0.1525,1.0628,0.0035});
Shape& Shape122 =  Shape();
Appearance& Appearance123 =  Appearance();
Material& Material124 =  Material();
Material124.setUSE(CString("SITE_COLOR"));
Appearance123.addChild(&Material124);

Shape122.addChild(&Appearance123);

IndexedFaceSet& IndexedFaceSet125 =  IndexedFaceSet();
IndexedFaceSet125.setCreaseAngle(0.5);
IndexedFaceSet125.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate126 =  Coordinate();
Coordinate126.setUSE(CString("points"));
IndexedFaceSet125.setCoord(&Coordinate126);

Shape122.setGeometry(&IndexedFaceSet125);

HAnimSite121.addChild(&Shape122);

HAnimSegment114.addChild(&HAnimSite121);

HAnimSite& HAnimSite127 =  HAnimSite();
HAnimSite127.setDEF(CString("hanim_r_trochanterion_pt"));
HAnimSite127.X3DNode::setName(CString("r_trochanterion_pt"));
HAnimSite127.setTranslation(new float[]{-0.1689,0.8419,0.0352});
Shape& Shape128 =  Shape();
Appearance& Appearance129 =  Appearance();
Material& Material130 =  Material();
Material130.setUSE(CString("SITE_COLOR"));
Appearance129.addChild(&Material130);

Shape128.addChild(&Appearance129);

IndexedFaceSet& IndexedFaceSet131 =  IndexedFaceSet();
IndexedFaceSet131.setCreaseAngle(0.5);
IndexedFaceSet131.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate132 =  Coordinate();
Coordinate132.setUSE(CString("points"));
IndexedFaceSet131.setCoord(&Coordinate132);

Shape128.setGeometry(&IndexedFaceSet131);

HAnimSite127.addChild(&Shape128);

HAnimSegment114.addChild(&HAnimSite127);

HAnimSite& HAnimSite133 =  HAnimSite();
HAnimSite133.setDEF(CString("hanim_l_iliocristale_pt"));
HAnimSite133.X3DNode::setName(CString("l_iliocristale_pt"));
HAnimSite133.setTranslation(new float[]{0.1612,1.0537,0.0008});
Shape& Shape134 =  Shape();
Appearance& Appearance135 =  Appearance();
Material& Material136 =  Material();
Material136.setUSE(CString("SITE_COLOR"));
Appearance135.addChild(&Material136);

Shape134.addChild(&Appearance135);

IndexedFaceSet& IndexedFaceSet137 =  IndexedFaceSet();
IndexedFaceSet137.setCreaseAngle(0.5);
IndexedFaceSet137.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate138 =  Coordinate();
Coordinate138.setUSE(CString("points"));
IndexedFaceSet137.setCoord(&Coordinate138);

Shape134.setGeometry(&IndexedFaceSet137);

HAnimSite133.addChild(&Shape134);

HAnimSegment114.addChild(&HAnimSite133);

HAnimSite& HAnimSite139 =  HAnimSite();
HAnimSite139.setDEF(CString("hanim_l_trochanterion_pt"));
HAnimSite139.X3DNode::setName(CString("l_trochanterion_pt"));
HAnimSite139.setTranslation(new float[]{0.1677,0.8336,0.0303});
Shape& Shape140 =  Shape();
Appearance& Appearance141 =  Appearance();
Material& Material142 =  Material();
Material142.setUSE(CString("SITE_COLOR"));
Appearance141.addChild(&Material142);

Shape140.addChild(&Appearance141);

IndexedFaceSet& IndexedFaceSet143 =  IndexedFaceSet();
IndexedFaceSet143.setCreaseAngle(0.5);
IndexedFaceSet143.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate144 =  Coordinate();
Coordinate144.setUSE(CString("points"));
IndexedFaceSet143.setCoord(&Coordinate144);

Shape140.setGeometry(&IndexedFaceSet143);

HAnimSite139.addChild(&Shape140);

HAnimSegment114.addChild(&HAnimSite139);

HAnimSite& HAnimSite145 =  HAnimSite();
HAnimSite145.setDEF(CString("hanim_r_asis_pt"));
HAnimSite145.X3DNode::setName(CString("r_asis_pt"));
HAnimSite145.setTranslation(new float[]{-0.0887,1.0021,0.1112});
Shape& Shape146 =  Shape();
Appearance& Appearance147 =  Appearance();
Material& Material148 =  Material();
Material148.setUSE(CString("SITE_COLOR"));
Appearance147.addChild(&Material148);

Shape146.addChild(&Appearance147);

IndexedFaceSet& IndexedFaceSet149 =  IndexedFaceSet();
IndexedFaceSet149.setCreaseAngle(0.5);
IndexedFaceSet149.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate150 =  Coordinate();
Coordinate150.setUSE(CString("points"));
IndexedFaceSet149.setCoord(&Coordinate150);

Shape146.setGeometry(&IndexedFaceSet149);

HAnimSite145.addChild(&Shape146);

HAnimSegment114.addChild(&HAnimSite145);

HAnimSite& HAnimSite151 =  HAnimSite();
HAnimSite151.setDEF(CString("hanim_l_asis_pt"));
HAnimSite151.X3DNode::setName(CString("l_asis_pt"));
HAnimSite151.setTranslation(new float[]{0.0925,0.9983,0.1052});
Shape& Shape152 =  Shape();
Appearance& Appearance153 =  Appearance();
Material& Material154 =  Material();
Material154.setUSE(CString("SITE_COLOR"));
Appearance153.addChild(&Material154);

Shape152.addChild(&Appearance153);

IndexedFaceSet& IndexedFaceSet155 =  IndexedFaceSet();
IndexedFaceSet155.setCreaseAngle(0.5);
IndexedFaceSet155.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate156 =  Coordinate();
Coordinate156.setUSE(CString("points"));
IndexedFaceSet155.setCoord(&Coordinate156);

Shape152.setGeometry(&IndexedFaceSet155);

HAnimSite151.addChild(&Shape152);

HAnimSegment114.addChild(&HAnimSite151);

HAnimSite& HAnimSite157 =  HAnimSite();
HAnimSite157.setDEF(CString("hanim_r_psis_pt"));
HAnimSite157.X3DNode::setName(CString("r_psis_pt"));
HAnimSite157.setTranslation(new float[]{-0.0716,1.019,-0.1138});
Shape& Shape158 =  Shape();
Appearance& Appearance159 =  Appearance();
Material& Material160 =  Material();
Material160.setUSE(CString("SITE_COLOR"));
Appearance159.addChild(&Material160);

Shape158.addChild(&Appearance159);

IndexedFaceSet& IndexedFaceSet161 =  IndexedFaceSet();
IndexedFaceSet161.setCreaseAngle(0.5);
IndexedFaceSet161.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate162 =  Coordinate();
Coordinate162.setUSE(CString("points"));
IndexedFaceSet161.setCoord(&Coordinate162);

Shape158.setGeometry(&IndexedFaceSet161);

HAnimSite157.addChild(&Shape158);

HAnimSegment114.addChild(&HAnimSite157);

HAnimSite& HAnimSite163 =  HAnimSite();
HAnimSite163.setDEF(CString("hanim_l_psis_pt"));
HAnimSite163.X3DNode::setName(CString("l_psis_pt"));
HAnimSite163.setTranslation(new float[]{0.0774,1.019,-0.1151});
Shape& Shape164 =  Shape();
Appearance& Appearance165 =  Appearance();
Material& Material166 =  Material();
Material166.setUSE(CString("SITE_COLOR"));
Appearance165.addChild(&Material166);

Shape164.addChild(&Appearance165);

IndexedFaceSet& IndexedFaceSet167 =  IndexedFaceSet();
IndexedFaceSet167.setCreaseAngle(0.5);
IndexedFaceSet167.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate168 =  Coordinate();
Coordinate168.setUSE(CString("points"));
IndexedFaceSet167.setCoord(&Coordinate168);

Shape164.setGeometry(&IndexedFaceSet167);

HAnimSite163.addChild(&Shape164);

HAnimSegment114.addChild(&HAnimSite163);

HAnimSite& HAnimSite169 =  HAnimSite();
HAnimSite169.setDEF(CString("hanim_crotch_pt"));
HAnimSite169.X3DNode::setName(CString("crotch_pt"));
HAnimSite169.setTranslation(new float[]{0.0034,0.8266,0.0257});
Shape& Shape170 =  Shape();
Appearance& Appearance171 =  Appearance();
Material& Material172 =  Material();
Material172.setUSE(CString("SITE_COLOR"));
Appearance171.addChild(&Material172);

Shape170.addChild(&Appearance171);

IndexedFaceSet& IndexedFaceSet173 =  IndexedFaceSet();
IndexedFaceSet173.setCreaseAngle(0.5);
IndexedFaceSet173.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate174 =  Coordinate();
Coordinate174.setUSE(CString("points"));
IndexedFaceSet173.setCoord(&Coordinate174);

Shape170.setGeometry(&IndexedFaceSet173);

HAnimSite169.addChild(&Shape170);

HAnimSegment114.addChild(&HAnimSite169);

HAnimJoint113.addChildren(&HAnimSegment114);

HAnimJoint& HAnimJoint175 =  HAnimJoint();
HAnimJoint175.setDEF(CString("hanim_l_hip"));
HAnimJoint175.X3DNode::setName(CString("l_hip"));
HAnimJoint175.setCenter(new float[]{0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment176 =  HAnimSegment();
HAnimSegment176.setDEF(CString("hanim_l_thigh"));
HAnimSegment176.X3DNode::setName(CString("l_thigh"));
Transform& Transform177 =  Transform();
Transform177.setTranslation(new float[]{0.0961,0.9124,-0.0001});
Shape& Shape178 =  Shape();
Appearance& Appearance179 =  Appearance();
Material& Material180 =  Material();
Material180.setUSE(CString("MIN_COLOR"));
Appearance179.addChild(&Material180);

Shape178.addChild(&Appearance179);

IndexedFaceSet& IndexedFaceSet181 =  IndexedFaceSet();
IndexedFaceSet181.setCreaseAngle(0.5);
IndexedFaceSet181.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate182 =  Coordinate();
Coordinate182.setUSE(CString("points"));
IndexedFaceSet181.setCoord(&Coordinate182);

Shape178.setGeometry(&IndexedFaceSet181);

Transform177.addChild(&Shape178);

HAnimSegment176.addChild(&Transform177);

HAnimSite& HAnimSite183 =  HAnimSite();
HAnimSite183.setDEF(CString("hanim_l_knee_crease_pt"));
HAnimSite183.X3DNode::setName(CString("l_knee_crease_pt"));
HAnimSite183.setTranslation(new float[]{0.0993,0.4881,-0.0309});
Shape& Shape184 =  Shape();
Appearance& Appearance185 =  Appearance();
Material& Material186 =  Material();
Material186.setUSE(CString("SITE_COLOR"));
Appearance185.addChild(&Material186);

Shape184.addChild(&Appearance185);

IndexedFaceSet& IndexedFaceSet187 =  IndexedFaceSet();
IndexedFaceSet187.setCreaseAngle(0.5);
IndexedFaceSet187.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate188 =  Coordinate();
Coordinate188.setUSE(CString("points"));
IndexedFaceSet187.setCoord(&Coordinate188);

Shape184.setGeometry(&IndexedFaceSet187);

HAnimSite183.addChild(&Shape184);

HAnimSegment176.addChild(&HAnimSite183);

HAnimSite& HAnimSite189 =  HAnimSite();
HAnimSite189.setDEF(CString("hanim_l_femoral_lateral_epicn_pt"));
HAnimSite189.X3DNode::setName(CString("l_femoral_lateral_epicn_pt"));
HAnimSite189.setTranslation(new float[]{0.1598,0.4967,0.0297});
Shape& Shape190 =  Shape();
Appearance& Appearance191 =  Appearance();
Material& Material192 =  Material();
Material192.setUSE(CString("SITE_COLOR"));
Appearance191.addChild(&Material192);

Shape190.addChild(&Appearance191);

IndexedFaceSet& IndexedFaceSet193 =  IndexedFaceSet();
IndexedFaceSet193.setCreaseAngle(0.5);
IndexedFaceSet193.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate194 =  Coordinate();
Coordinate194.setUSE(CString("points"));
IndexedFaceSet193.setCoord(&Coordinate194);

Shape190.setGeometry(&IndexedFaceSet193);

HAnimSite189.addChild(&Shape190);

HAnimSegment176.addChild(&HAnimSite189);

HAnimSite& HAnimSite195 =  HAnimSite();
HAnimSite195.setDEF(CString("hanim_l_femoral_medial_epicn_pt"));
HAnimSite195.X3DNode::setName(CString("l_femoral_medial_epicn_pt"));
HAnimSite195.setTranslation(new float[]{0.0398,0.4946,0.0303});
Shape& Shape196 =  Shape();
Appearance& Appearance197 =  Appearance();
Material& Material198 =  Material();
Material198.setUSE(CString("SITE_COLOR"));
Appearance197.addChild(&Material198);

Shape196.addChild(&Appearance197);

IndexedFaceSet& IndexedFaceSet199 =  IndexedFaceSet();
IndexedFaceSet199.setCreaseAngle(0.5);
IndexedFaceSet199.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate200 =  Coordinate();
Coordinate200.setUSE(CString("points"));
IndexedFaceSet199.setCoord(&Coordinate200);

Shape196.setGeometry(&IndexedFaceSet199);

HAnimSite195.addChild(&Shape196);

HAnimSegment176.addChild(&HAnimSite195);

HAnimJoint175.addChildren(&HAnimSegment176);

HAnimJoint& HAnimJoint201 =  HAnimJoint();
HAnimJoint201.setDEF(CString("hanim_l_knee"));
HAnimJoint201.X3DNode::setName(CString("l_knee"));
HAnimJoint201.setCenter(new float[]{0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment202 =  HAnimSegment();
HAnimSegment202.setDEF(CString("hanim_l_calf"));
HAnimSegment202.X3DNode::setName(CString("l_calf"));
Transform& Transform203 =  Transform();
Transform203.setTranslation(new float[]{0.104,0.4867,0.0308});
Shape& Shape204 =  Shape();
Appearance& Appearance205 =  Appearance();
Material& Material206 =  Material();
Material206.setUSE(CString("MIN_COLOR"));
Appearance205.addChild(&Material206);

Shape204.addChild(&Appearance205);

IndexedFaceSet& IndexedFaceSet207 =  IndexedFaceSet();
IndexedFaceSet207.setCreaseAngle(0.5);
IndexedFaceSet207.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate208 =  Coordinate();
Coordinate208.setUSE(CString("points"));
IndexedFaceSet207.setCoord(&Coordinate208);

Shape204.setGeometry(&IndexedFaceSet207);

Transform203.addChild(&Shape204);

HAnimSegment202.addChild(&Transform203);

HAnimJoint201.addChildren(&HAnimSegment202);

HAnimJoint& HAnimJoint209 =  HAnimJoint();
HAnimJoint209.setDEF(CString("hanim_l_ankle"));
HAnimJoint209.X3DNode::setName(CString("l_ankle"));
HAnimJoint209.setCenter(new float[]{0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment210 =  HAnimSegment();
HAnimSegment210.setDEF(CString("hanim_l_hindfoot"));
HAnimSegment210.X3DNode::setName(CString("l_hindfoot"));
Transform& Transform211 =  Transform();
Transform211.setTranslation(new float[]{0.1101,0.0656,-0.0736});
Shape& Shape212 =  Shape();
Appearance& Appearance213 =  Appearance();
Material& Material214 =  Material();
Material214.setUSE(CString("MIN_COLOR"));
Appearance213.addChild(&Material214);

Shape212.addChild(&Appearance213);

IndexedFaceSet& IndexedFaceSet215 =  IndexedFaceSet();
IndexedFaceSet215.setCreaseAngle(0.5);
IndexedFaceSet215.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate216 =  Coordinate();
Coordinate216.setUSE(CString("points"));
IndexedFaceSet215.setCoord(&Coordinate216);

Shape212.setGeometry(&IndexedFaceSet215);

Transform211.addChild(&Shape212);

HAnimSegment210.addChild(&Transform211);

HAnimSite& HAnimSite217 =  HAnimSite();
HAnimSite217.setDEF(CString("hanim_l_lateral_malleolus_pt"));
HAnimSite217.X3DNode::setName(CString("l_lateral_malleolus_pt"));
HAnimSite217.setTranslation(new float[]{0.1308,0.0597,-0.1032});
Shape& Shape218 =  Shape();
Appearance& Appearance219 =  Appearance();
Material& Material220 =  Material();
Material220.setUSE(CString("HAND_FEET_COLOR"));
Appearance219.addChild(&Material220);

Shape218.addChild(&Appearance219);

IndexedFaceSet& IndexedFaceSet221 =  IndexedFaceSet();
IndexedFaceSet221.setCreaseAngle(0.5);
IndexedFaceSet221.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate222 =  Coordinate();
Coordinate222.setUSE(CString("points"));
IndexedFaceSet221.setCoord(&Coordinate222);

Shape218.setGeometry(&IndexedFaceSet221);

HAnimSite217.addChild(&Shape218);

HAnimSegment210.addChild(&HAnimSite217);

HAnimSite& HAnimSite223 =  HAnimSite();
HAnimSite223.setDEF(CString("hanim_l_medial_malleolus_pt"));
HAnimSite223.X3DNode::setName(CString("l_medial_malleolus_pt"));
HAnimSite223.setTranslation(new float[]{0.089,0.0716,-0.0881});
Shape& Shape224 =  Shape();
Appearance& Appearance225 =  Appearance();
Material& Material226 =  Material();
Material226.setUSE(CString("HAND_FEET_COLOR"));
Appearance225.addChild(&Material226);

Shape224.addChild(&Appearance225);

IndexedFaceSet& IndexedFaceSet227 =  IndexedFaceSet();
IndexedFaceSet227.setCreaseAngle(0.5);
IndexedFaceSet227.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate228 =  Coordinate();
Coordinate228.setUSE(CString("points"));
IndexedFaceSet227.setCoord(&Coordinate228);

Shape224.setGeometry(&IndexedFaceSet227);

HAnimSite223.addChild(&Shape224);

HAnimSegment210.addChild(&HAnimSite223);

HAnimSite& HAnimSite229 =  HAnimSite();
HAnimSite229.setDEF(CString("hanim_l_sphyrion_pt"));
HAnimSite229.X3DNode::setName(CString("l_sphyrion_pt"));
HAnimSite229.setTranslation(new float[]{0.089,0.0575,-0.0943});
Shape& Shape230 =  Shape();
Appearance& Appearance231 =  Appearance();
Material& Material232 =  Material();
Material232.setUSE(CString("HAND_FEET_COLOR"));
Appearance231.addChild(&Material232);

Shape230.addChild(&Appearance231);

IndexedFaceSet& IndexedFaceSet233 =  IndexedFaceSet();
IndexedFaceSet233.setCreaseAngle(0.5);
IndexedFaceSet233.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate234 =  Coordinate();
Coordinate234.setUSE(CString("points"));
IndexedFaceSet233.setCoord(&Coordinate234);

Shape230.setGeometry(&IndexedFaceSet233);

HAnimSite229.addChild(&Shape230);

HAnimSegment210.addChild(&HAnimSite229);

HAnimSite& HAnimSite235 =  HAnimSite();
HAnimSite235.setDEF(CString("hanim_l_calcaneous_post_pt"));
HAnimSite235.X3DNode::setName(CString("l_calcaneous_post_pt"));
HAnimSite235.setTranslation(new float[]{0.0974,0.0259,-0.1171});
Shape& Shape236 =  Shape();
Appearance& Appearance237 =  Appearance();
Material& Material238 =  Material();
Material238.setUSE(CString("HAND_FEET_COLOR"));
Appearance237.addChild(&Material238);

Shape236.addChild(&Appearance237);

IndexedFaceSet& IndexedFaceSet239 =  IndexedFaceSet();
IndexedFaceSet239.setCreaseAngle(0.5);
IndexedFaceSet239.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate240 =  Coordinate();
Coordinate240.setUSE(CString("points"));
IndexedFaceSet239.setCoord(&Coordinate240);

Shape236.setGeometry(&IndexedFaceSet239);

HAnimSite235.addChild(&Shape236);

HAnimSegment210.addChild(&HAnimSite235);

HAnimJoint209.addChildren(&HAnimSegment210);

HAnimJoint& HAnimJoint241 =  HAnimJoint();
HAnimJoint241.setDEF(CString("hanim_l_subtalar"));
HAnimJoint241.X3DNode::setName(CString("l_subtalar"));
HAnimJoint241.setCenter(new float[]{0.1086,0.0001,-0.0368});
HAnimSegment& HAnimSegment242 =  HAnimSegment();
HAnimSegment242.setDEF(CString("hanim_midproximal"));
HAnimSegment242.X3DNode::setName(CString("midproximal"));
Transform& Transform243 =  Transform();
Transform243.setTranslation(new float[]{0.1086,0.0001,-0.0368});
Shape& Shape244 =  Shape();
Appearance& Appearance245 =  Appearance();
Material& Material246 =  Material();
Material246.setUSE(CString("MIN_COLOR"));
Appearance245.addChild(&Material246);

Shape244.addChild(&Appearance245);

IndexedFaceSet& IndexedFaceSet247 =  IndexedFaceSet();
IndexedFaceSet247.setCreaseAngle(0.5);
IndexedFaceSet247.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate248 =  Coordinate();
Coordinate248.setUSE(CString("points"));
IndexedFaceSet247.setCoord(&Coordinate248);

Shape244.setGeometry(&IndexedFaceSet247);

Transform243.addChild(&Shape244);

HAnimSegment242.addChild(&Transform243);

HAnimJoint241.addChildren(&HAnimSegment242);

HAnimJoint& HAnimJoint249 =  HAnimJoint();
HAnimJoint249.setDEF(CString("hanim_l_midtarsal"));
HAnimJoint249.X3DNode::setName(CString("l_midtarsal"));
HAnimJoint249.setCenter(new float[]{0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment250 =  HAnimSegment();
HAnimSegment250.setDEF(CString("hanim_l_middistal"));
HAnimSegment250.X3DNode::setName(CString("l_middistal"));
Transform& Transform251 =  Transform();
Transform251.setTranslation(new float[]{0.1086,0.0001,0.0368});
Shape& Shape252 =  Shape();
Appearance& Appearance253 =  Appearance();
Material& Material254 =  Material();
Material254.setUSE(CString("JOINT_COLOR"));
Appearance253.addChild(&Material254);

Shape252.addChild(&Appearance253);

IndexedFaceSet& IndexedFaceSet255 =  IndexedFaceSet();
IndexedFaceSet255.setCreaseAngle(0.5);
IndexedFaceSet255.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate256 =  Coordinate();
Coordinate256.setUSE(CString("points"));
IndexedFaceSet255.setCoord(&Coordinate256);

Shape252.setGeometry(&IndexedFaceSet255);

Transform251.addChild(&Shape252);

HAnimSegment250.addChild(&Transform251);

HAnimSite& HAnimSite257 =  HAnimSite();
HAnimSite257.setDEF(CString("hanim_l_middistal_tip"));
HAnimSite257.X3DNode::setName(CString("l_middistal_tip"));
HAnimSite257.setTranslation(new float[]{0.1354,0.0016,0.1476});
Shape& Shape258 =  Shape();
Appearance& Appearance259 =  Appearance();
Material& Material260 =  Material();
Material260.setUSE(CString("HAND_FEET_COLOR"));
Appearance259.addChild(&Material260);

Shape258.addChild(&Appearance259);

IndexedFaceSet& IndexedFaceSet261 =  IndexedFaceSet();
IndexedFaceSet261.setCreaseAngle(0.5);
IndexedFaceSet261.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate262 =  Coordinate();
Coordinate262.setUSE(CString("points"));
IndexedFaceSet261.setCoord(&Coordinate262);

Shape258.setGeometry(&IndexedFaceSet261);

HAnimSite257.addChild(&Shape258);

HAnimSegment250.addChild(&HAnimSite257);

HAnimSite& HAnimSite263 =  HAnimSite();
HAnimSite263.setDEF(CString("hanim_l_metatarsal_pha1_pt"));
HAnimSite263.X3DNode::setName(CString("l_metatarsal_pha1_pt"));
HAnimSite263.setTranslation(new float[]{0.0816,0.0232,0.0106});
Shape& Shape264 =  Shape();
Appearance& Appearance265 =  Appearance();
Material& Material266 =  Material();
Material266.setUSE(CString("HAND_FEET_COLOR"));
Appearance265.addChild(&Material266);

Shape264.addChild(&Appearance265);

IndexedFaceSet& IndexedFaceSet267 =  IndexedFaceSet();
IndexedFaceSet267.setCreaseAngle(0.5);
IndexedFaceSet267.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate268 =  Coordinate();
Coordinate268.setUSE(CString("points"));
IndexedFaceSet267.setCoord(&Coordinate268);

Shape264.setGeometry(&IndexedFaceSet267);

HAnimSite263.addChild(&Shape264);

HAnimSegment250.addChild(&HAnimSite263);

HAnimJoint249.addChildren(&HAnimSegment250);

HAnimJoint& HAnimJoint269 =  HAnimJoint();
HAnimJoint269.setDEF(CString("hanim_l_metatarsal"));
HAnimJoint269.X3DNode::setName(CString("l_metatarsal"));
HAnimJoint269.setCenter(new float[]{0.1086,0,0.0762});
HAnimSegment& HAnimSegment270 =  HAnimSegment();
HAnimSegment270.setDEF(CString("hanim_l_forefoot"));
HAnimSegment270.X3DNode::setName(CString("l_forefoot"));
Transform& Transform271 =  Transform();
Transform271.setTranslation(new float[]{0.1086,0,0.0762});
Shape& Shape272 =  Shape();
Appearance& Appearance273 =  Appearance();
Material& Material274 =  Material();
Material274.setUSE(CString("JOINT_COLOR"));
Appearance273.addChild(&Material274);

Shape272.addChild(&Appearance273);

IndexedFaceSet& IndexedFaceSet275 =  IndexedFaceSet();
IndexedFaceSet275.setCreaseAngle(0.5);
IndexedFaceSet275.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate276 =  Coordinate();
Coordinate276.setUSE(CString("points"));
IndexedFaceSet275.setCoord(&Coordinate276);

Shape272.setGeometry(&IndexedFaceSet275);

Transform271.addChild(&Shape272);

HAnimSegment270.addChild(&Transform271);

HAnimSite& HAnimSite277 =  HAnimSite();
HAnimSite277.setDEF(CString("hanim_l_forefoot_tip"));
HAnimSite277.X3DNode::setName(CString("l_forefoot_tip"));
HAnimSite277.setTranslation(new float[]{0.1354,0.0016,0.1476});
Shape& Shape278 =  Shape();
Appearance& Appearance279 =  Appearance();
Material& Material280 =  Material();
Material280.setUSE(CString("HAND_FEET_COLOR"));
Appearance279.addChild(&Material280);

Shape278.addChild(&Appearance279);

IndexedFaceSet& IndexedFaceSet281 =  IndexedFaceSet();
IndexedFaceSet281.setCreaseAngle(0.5);
IndexedFaceSet281.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate282 =  Coordinate();
Coordinate282.setUSE(CString("points"));
IndexedFaceSet281.setCoord(&Coordinate282);

Shape278.setGeometry(&IndexedFaceSet281);

HAnimSite277.addChild(&Shape278);

HAnimSegment270.addChild(&HAnimSite277);

HAnimSite& HAnimSite283 =  HAnimSite();
HAnimSite283.setDEF(CString("hanim_l_metatarsal_pha5_pt"));
HAnimSite283.X3DNode::setName(CString("l_metatarsal_pha5_pt"));
HAnimSite283.setTranslation(new float[]{0.1825,0.007,0.0928});
Shape& Shape284 =  Shape();
Appearance& Appearance285 =  Appearance();
Material& Material286 =  Material();
Material286.setUSE(CString("HAND_FEET_COLOR"));
Appearance285.addChild(&Material286);

Shape284.addChild(&Appearance285);

IndexedFaceSet& IndexedFaceSet287 =  IndexedFaceSet();
IndexedFaceSet287.setCreaseAngle(0.5);
IndexedFaceSet287.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate288 =  Coordinate();
Coordinate288.setUSE(CString("points"));
IndexedFaceSet287.setCoord(&Coordinate288);

Shape284.setGeometry(&IndexedFaceSet287);

HAnimSite283.addChild(&Shape284);

HAnimSegment270.addChild(&HAnimSite283);

HAnimSite& HAnimSite289 =  HAnimSite();
HAnimSite289.setDEF(CString("hanim_l_digit2_pt"));
HAnimSite289.X3DNode::setName(CString("l_digit2_pt"));
HAnimSite289.setTranslation(new float[]{0.1195,0.0079,0.1433});
Shape& Shape290 =  Shape();
Appearance& Appearance291 =  Appearance();
Material& Material292 =  Material();
Material292.setUSE(CString("HAND_FEET_COLOR"));
Appearance291.addChild(&Material292);

Shape290.addChild(&Appearance291);

IndexedFaceSet& IndexedFaceSet293 =  IndexedFaceSet();
IndexedFaceSet293.setCreaseAngle(0.5);
IndexedFaceSet293.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate294 =  Coordinate();
Coordinate294.setUSE(CString("points"));
IndexedFaceSet293.setCoord(&Coordinate294);

Shape290.setGeometry(&IndexedFaceSet293);

HAnimSite289.addChild(&Shape290);

HAnimSegment270.addChild(&HAnimSite289);

HAnimJoint269.addChildren(&HAnimSegment270);

HAnimJoint249.addChildren(&HAnimJoint269);

HAnimJoint241.addChildren(&HAnimJoint249);

HAnimJoint209.addChildren(&HAnimJoint241);

HAnimJoint201.addChildren(&HAnimJoint209);

HAnimJoint175.addChildren(&HAnimJoint201);

HAnimJoint113.addChildren(&HAnimJoint175);

HAnimJoint& HAnimJoint295 =  HAnimJoint();
HAnimJoint295.setDEF(CString("hanim_r_hip"));
HAnimJoint295.X3DNode::setName(CString("r_hip"));
HAnimJoint295.setCenter(new float[]{-0.095,0.9171,0.0029});
HAnimSegment& HAnimSegment296 =  HAnimSegment();
HAnimSegment296.setDEF(CString("hanim_r_thigh"));
HAnimSegment296.X3DNode::setName(CString("r_thigh"));
Transform& Transform297 =  Transform();
Transform297.setTranslation(new float[]{-0.095,0.9171,0.0029});
Shape& Shape298 =  Shape();
Appearance& Appearance299 =  Appearance();
Material& Material300 =  Material();
Material300.setUSE(CString("MIN_COLOR"));
Appearance299.addChild(&Material300);

Shape298.addChild(&Appearance299);

IndexedFaceSet& IndexedFaceSet301 =  IndexedFaceSet();
IndexedFaceSet301.setCreaseAngle(0.5);
IndexedFaceSet301.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate302 =  Coordinate();
Coordinate302.setUSE(CString("points"));
IndexedFaceSet301.setCoord(&Coordinate302);

Shape298.setGeometry(&IndexedFaceSet301);

Transform297.addChild(&Shape298);

HAnimSegment296.addChild(&Transform297);

HAnimSite& HAnimSite303 =  HAnimSite();
HAnimSite303.setDEF(CString("hanim_r_knee_crease_pt"));
HAnimSite303.X3DNode::setName(CString("r_knee_crease_pt"));
HAnimSite303.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
Shape& Shape304 =  Shape();
Appearance& Appearance305 =  Appearance();
Material& Material306 =  Material();
Material306.setUSE(CString("SITE_COLOR"));
Appearance305.addChild(&Material306);

Shape304.addChild(&Appearance305);

IndexedFaceSet& IndexedFaceSet307 =  IndexedFaceSet();
IndexedFaceSet307.setCreaseAngle(0.5);
IndexedFaceSet307.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate308 =  Coordinate();
Coordinate308.setUSE(CString("points"));
IndexedFaceSet307.setCoord(&Coordinate308);

Shape304.setGeometry(&IndexedFaceSet307);

HAnimSite303.addChild(&Shape304);

HAnimSegment296.addChild(&HAnimSite303);

HAnimSite& HAnimSite309 =  HAnimSite();
HAnimSite309.setDEF(CString("hanim_r_femoral_lateral_epicn_pt"));
HAnimSite309.X3DNode::setName(CString("r_femoral_lateral_epicn_pt"));
HAnimSite309.setTranslation(new float[]{-0.1421,0.4992,0.031});
Shape& Shape310 =  Shape();
Appearance& Appearance311 =  Appearance();
Material& Material312 =  Material();
Material312.setUSE(CString("SITE_COLOR"));
Appearance311.addChild(&Material312);

Shape310.addChild(&Appearance311);

IndexedFaceSet& IndexedFaceSet313 =  IndexedFaceSet();
IndexedFaceSet313.setCreaseAngle(0.5);
IndexedFaceSet313.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate314 =  Coordinate();
Coordinate314.setUSE(CString("points"));
IndexedFaceSet313.setCoord(&Coordinate314);

Shape310.setGeometry(&IndexedFaceSet313);

HAnimSite309.addChild(&Shape310);

HAnimSegment296.addChild(&HAnimSite309);

HAnimSite& HAnimSite315 =  HAnimSite();
HAnimSite315.setDEF(CString("hanim_r_femoral_medial_epicn_pt"));
HAnimSite315.X3DNode::setName(CString("r_femoral_medial_epicn_pt"));
HAnimSite315.setTranslation(new float[]{-0.0221,0.5014,0.0289});
Shape& Shape316 =  Shape();
Appearance& Appearance317 =  Appearance();
Material& Material318 =  Material();
Material318.setUSE(CString("SITE_COLOR"));
Appearance317.addChild(&Material318);

Shape316.addChild(&Appearance317);

IndexedFaceSet& IndexedFaceSet319 =  IndexedFaceSet();
IndexedFaceSet319.setCreaseAngle(0.5);
IndexedFaceSet319.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate320 =  Coordinate();
Coordinate320.setUSE(CString("points"));
IndexedFaceSet319.setCoord(&Coordinate320);

Shape316.setGeometry(&IndexedFaceSet319);

HAnimSite315.addChild(&Shape316);

HAnimSegment296.addChild(&HAnimSite315);

HAnimJoint295.addChildren(&HAnimSegment296);

HAnimJoint& HAnimJoint321 =  HAnimJoint();
HAnimJoint321.setDEF(CString("hanim_r_knee"));
HAnimJoint321.X3DNode::setName(CString("r_knee"));
HAnimJoint321.setCenter(new float[]{-0.0867,0.4913,0.0318});
HAnimSegment& HAnimSegment322 =  HAnimSegment();
HAnimSegment322.setDEF(CString("hanim_r_calf"));
HAnimSegment322.X3DNode::setName(CString("r_calf"));
Transform& Transform323 =  Transform();
Transform323.setTranslation(new float[]{-0.0867,0.4913,0.0318});
Shape& Shape324 =  Shape();
Appearance& Appearance325 =  Appearance();
Material& Material326 =  Material();
Material326.setUSE(CString("SITE_COLOR"));
Appearance325.addChild(&Material326);

Shape324.addChild(&Appearance325);

IndexedFaceSet& IndexedFaceSet327 =  IndexedFaceSet();
IndexedFaceSet327.setCreaseAngle(0.5);
IndexedFaceSet327.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate328 =  Coordinate();
Coordinate328.setUSE(CString("points"));
IndexedFaceSet327.setCoord(&Coordinate328);

Shape324.setGeometry(&IndexedFaceSet327);

Transform323.addChild(&Shape324);

HAnimSegment322.addChild(&Transform323);

HAnimJoint321.addChildren(&HAnimSegment322);

HAnimJoint& HAnimJoint329 =  HAnimJoint();
HAnimJoint329.setDEF(CString("hanim_r_ankle"));
HAnimJoint329.X3DNode::setName(CString("r_ankle"));
HAnimJoint329.setCenter(new float[]{-0.0801,0.0712,-0.0766});
HAnimSegment& HAnimSegment330 =  HAnimSegment();
HAnimSegment330.setDEF(CString("hanim_r_hindfoot"));
HAnimSegment330.X3DNode::setName(CString("r_hindfoot"));
Transform& Transform331 =  Transform();
Transform331.setTranslation(new float[]{-0.0801,0.0712,-0.0766});
Shape& Shape332 =  Shape();
Appearance& Appearance333 =  Appearance();
Material& Material334 =  Material();
Material334.setUSE(CString("MIN_COLOR"));
Appearance333.addChild(&Material334);

Shape332.addChild(&Appearance333);

IndexedFaceSet& IndexedFaceSet335 =  IndexedFaceSet();
IndexedFaceSet335.setCreaseAngle(0.5);
IndexedFaceSet335.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate336 =  Coordinate();
Coordinate336.setUSE(CString("points"));
IndexedFaceSet335.setCoord(&Coordinate336);

Shape332.setGeometry(&IndexedFaceSet335);

Transform331.addChild(&Shape332);

HAnimSegment330.addChild(&Transform331);

HAnimSite& HAnimSite337 =  HAnimSite();
HAnimSite337.setDEF(CString("hanim_r_lateral_malleolus_pt"));
HAnimSite337.X3DNode::setName(CString("r_lateral_malleolus_pt"));
HAnimSite337.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
Shape& Shape338 =  Shape();
Appearance& Appearance339 =  Appearance();
Material& Material340 =  Material();
Material340.setUSE(CString("HAND_FEET_COLOR"));
Appearance339.addChild(&Material340);

Shape338.addChild(&Appearance339);

IndexedFaceSet& IndexedFaceSet341 =  IndexedFaceSet();
IndexedFaceSet341.setCreaseAngle(0.5);
IndexedFaceSet341.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate342 =  Coordinate();
Coordinate342.setUSE(CString("points"));
IndexedFaceSet341.setCoord(&Coordinate342);

Shape338.setGeometry(&IndexedFaceSet341);

HAnimSite337.addChild(&Shape338);

HAnimSegment330.addChild(&HAnimSite337);

HAnimSite& HAnimSite343 =  HAnimSite();
HAnimSite343.setDEF(CString("hanim_r_medial_malleolus_pt"));
HAnimSite343.X3DNode::setName(CString("r_medial_malleolus_pt"));
HAnimSite343.setTranslation(new float[]{-0.0591,0.076,-0.0928});
Shape& Shape344 =  Shape();
Appearance& Appearance345 =  Appearance();
Material& Material346 =  Material();
Material346.setUSE(CString("HAND_FEET_COLOR"));
Appearance345.addChild(&Material346);

Shape344.addChild(&Appearance345);

IndexedFaceSet& IndexedFaceSet347 =  IndexedFaceSet();
IndexedFaceSet347.setCreaseAngle(0.5);
IndexedFaceSet347.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate348 =  Coordinate();
Coordinate348.setUSE(CString("points"));
IndexedFaceSet347.setCoord(&Coordinate348);

Shape344.setGeometry(&IndexedFaceSet347);

HAnimSite343.addChild(&Shape344);

HAnimSegment330.addChild(&HAnimSite343);

HAnimSite& HAnimSite349 =  HAnimSite();
HAnimSite349.setDEF(CString("hanim_r_sphyrion_pt"));
HAnimSite349.X3DNode::setName(CString("r_sphyrion_pt"));
HAnimSite349.setTranslation(new float[]{-0.0603,0.061,-0.1002});
Shape& Shape350 =  Shape();
Appearance& Appearance351 =  Appearance();
Material& Material352 =  Material();
Material352.setUSE(CString("HAND_FEET_COLOR"));
Appearance351.addChild(&Material352);

Shape350.addChild(&Appearance351);

IndexedFaceSet& IndexedFaceSet353 =  IndexedFaceSet();
IndexedFaceSet353.setCreaseAngle(0.5);
IndexedFaceSet353.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate354 =  Coordinate();
Coordinate354.setUSE(CString("points"));
IndexedFaceSet353.setCoord(&Coordinate354);

Shape350.setGeometry(&IndexedFaceSet353);

HAnimSite349.addChild(&Shape350);

HAnimSegment330.addChild(&HAnimSite349);

HAnimSite& HAnimSite355 =  HAnimSite();
HAnimSite355.setDEF(CString("hanim_r_calcaneous_post_pt"));
HAnimSite355.X3DNode::setName(CString("r_calcaneous_post_pt"));
HAnimSite355.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
Shape& Shape356 =  Shape();
Appearance& Appearance357 =  Appearance();
Material& Material358 =  Material();
Material358.setUSE(CString("HAND_FEET_COLOR"));
Appearance357.addChild(&Material358);

Shape356.addChild(&Appearance357);

IndexedFaceSet& IndexedFaceSet359 =  IndexedFaceSet();
IndexedFaceSet359.setCreaseAngle(0.5);
IndexedFaceSet359.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate360 =  Coordinate();
Coordinate360.setUSE(CString("points"));
IndexedFaceSet359.setCoord(&Coordinate360);

Shape356.setGeometry(&IndexedFaceSet359);

HAnimSite355.addChild(&Shape356);

HAnimSegment330.addChild(&HAnimSite355);

HAnimJoint329.addChildren(&HAnimSegment330);

HAnimJoint& HAnimJoint361 =  HAnimJoint();
HAnimJoint361.setDEF(CString("hanim_r_midtarsal"));
HAnimJoint361.X3DNode::setName(CString("r_midtarsal"));
HAnimJoint361.setCenter(new float[]{-0.0801,0,0.0368});
HAnimSegment& HAnimSegment362 =  HAnimSegment();
HAnimSegment362.setDEF(CString("hanim_r_middistal"));
HAnimSegment362.X3DNode::setName(CString("r_middistal"));
Transform& Transform363 =  Transform();
Transform363.setTranslation(new float[]{-0.0801,0,0.0368});
Shape& Shape364 =  Shape();
Appearance& Appearance365 =  Appearance();
Material& Material366 =  Material();
Material366.setUSE(CString("JOINT_COLOR"));
Appearance365.addChild(&Material366);

Shape364.addChild(&Appearance365);

IndexedFaceSet& IndexedFaceSet367 =  IndexedFaceSet();
IndexedFaceSet367.setCreaseAngle(0.5);
IndexedFaceSet367.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate368 =  Coordinate();
Coordinate368.setUSE(CString("points"));
IndexedFaceSet367.setCoord(&Coordinate368);

Shape364.setGeometry(&IndexedFaceSet367);

Transform363.addChild(&Shape364);

HAnimSegment362.addChild(&Transform363);

HAnimSite& HAnimSite369 =  HAnimSite();
HAnimSite369.setDEF(CString("hanim_r_middistal_tip"));
HAnimSite369.X3DNode::setName(CString("r_middistal_tip"));
HAnimSite369.setTranslation(new float[]{-0.1043,-0.0227,0.145});
Shape& Shape370 =  Shape();
Appearance& Appearance371 =  Appearance();
Material& Material372 =  Material();
Material372.setUSE(CString("HAND_FEET_COLOR"));
Appearance371.addChild(&Material372);

Shape370.addChild(&Appearance371);

IndexedFaceSet& IndexedFaceSet373 =  IndexedFaceSet();
IndexedFaceSet373.setCreaseAngle(0.5);
IndexedFaceSet373.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate374 =  Coordinate();
Coordinate374.setUSE(CString("points"));
IndexedFaceSet373.setCoord(&Coordinate374);

Shape370.setGeometry(&IndexedFaceSet373);

HAnimSite369.addChild(&Shape370);

HAnimSegment362.addChild(&HAnimSite369);

HAnimSite& HAnimSite375 =  HAnimSite();
HAnimSite375.setDEF(CString("hanim_r_metatarsal_pha5_pt"));
HAnimSite375.X3DNode::setName(CString("r_metatarsal_pha5_pt"));
HAnimSite375.setTranslation(new float[]{-0.1523,0.0166,0.0895});
Shape& Shape376 =  Shape();
Appearance& Appearance377 =  Appearance();
Material& Material378 =  Material();
Material378.setUSE(CString("HAND_FEET_COLOR"));
Appearance377.addChild(&Material378);

Shape376.addChild(&Appearance377);

IndexedFaceSet& IndexedFaceSet379 =  IndexedFaceSet();
IndexedFaceSet379.setCreaseAngle(0.5);
IndexedFaceSet379.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate380 =  Coordinate();
Coordinate380.setUSE(CString("points"));
IndexedFaceSet379.setCoord(&Coordinate380);

Shape376.setGeometry(&IndexedFaceSet379);

HAnimSite375.addChild(&Shape376);

HAnimSegment362.addChild(&HAnimSite375);

HAnimSite& HAnimSite381 =  HAnimSite();
HAnimSite381.setDEF(CString("hanim_r_metatarsal_pha1_pt"));
HAnimSite381.X3DNode::setName(CString("r_metatarsal_pha1_pt"));
HAnimSite381.setTranslation(new float[]{-0.0521,0.026,0.0127});
Shape& Shape382 =  Shape();
Appearance& Appearance383 =  Appearance();
Material& Material384 =  Material();
Material384.setUSE(CString("HAND_FEET_COLOR"));
Appearance383.addChild(&Material384);

Shape382.addChild(&Appearance383);

IndexedFaceSet& IndexedFaceSet385 =  IndexedFaceSet();
IndexedFaceSet385.setCreaseAngle(0.5);
IndexedFaceSet385.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate386 =  Coordinate();
Coordinate386.setUSE(CString("points"));
IndexedFaceSet385.setCoord(&Coordinate386);

Shape382.setGeometry(&IndexedFaceSet385);

HAnimSite381.addChild(&Shape382);

HAnimSegment362.addChild(&HAnimSite381);

HAnimSite& HAnimSite387 =  HAnimSite();
HAnimSite387.setDEF(CString("hanim_r_digit2_pt"));
HAnimSite387.X3DNode::setName(CString("r_digit2_pt"));
HAnimSite387.setTranslation(new float[]{-0.0883,0.0134,0.1383});
Shape& Shape388 =  Shape();
Appearance& Appearance389 =  Appearance();
Material& Material390 =  Material();
Material390.setUSE(CString("HAND_FEET_COLOR"));
Appearance389.addChild(&Material390);

Shape388.addChild(&Appearance389);

IndexedFaceSet& IndexedFaceSet391 =  IndexedFaceSet();
IndexedFaceSet391.setCreaseAngle(0.5);
IndexedFaceSet391.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate392 =  Coordinate();
Coordinate392.setUSE(CString("points"));
IndexedFaceSet391.setCoord(&Coordinate392);

Shape388.setGeometry(&IndexedFaceSet391);

HAnimSite387.addChild(&Shape388);

HAnimSegment362.addChild(&HAnimSite387);

HAnimJoint361.addChildren(&HAnimSegment362);

HAnimJoint329.addChildren(&HAnimJoint361);

HAnimJoint321.addChildren(&HAnimJoint329);

HAnimJoint295.addChildren(&HAnimJoint321);

HAnimJoint113.addChildren(&HAnimJoint295);

HAnimJoint98.addChildren(&HAnimJoint113);

HAnimJoint& HAnimJoint393 =  HAnimJoint();
HAnimJoint393.setDEF(CString("hanim_vl5"));
HAnimJoint393.X3DNode::setName(CString("vl5"));
HAnimJoint393.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimSegment& HAnimSegment394 =  HAnimSegment();
HAnimSegment394.setDEF(CString("hanim_l5"));
HAnimSegment394.X3DNode::setName(CString("l5"));
Transform& Transform395 =  Transform();
Transform395.setTranslation(new float[]{0.0028,1.0568,-0.0776});
Shape& Shape396 =  Shape();
Appearance& Appearance397 =  Appearance();
Material& Material398 =  Material();
Material398.setUSE(CString("REC_SPINAL_COLOR"));
Appearance397.addChild(&Material398);

Shape396.addChild(&Appearance397);

IndexedFaceSet& IndexedFaceSet399 =  IndexedFaceSet();
IndexedFaceSet399.setCreaseAngle(0.5);
IndexedFaceSet399.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate400 =  Coordinate();
Coordinate400.setUSE(CString("points"));
IndexedFaceSet399.setCoord(&Coordinate400);

Shape396.setGeometry(&IndexedFaceSet399);

Transform395.addChild(&Shape396);

HAnimSegment394.addChild(&Transform395);

HAnimJoint393.addChildren(&HAnimSegment394);

HAnimJoint& HAnimJoint401 =  HAnimJoint();
HAnimJoint401.setDEF(CString("hanim_vl4"));
HAnimJoint401.X3DNode::setName(CString("vl4"));
HAnimJoint401.setCenter(new float[]{0.0035,1.0925,-0.0787});
HAnimSegment& HAnimSegment402 =  HAnimSegment();
HAnimSegment402.setDEF(CString("hanim_l4"));
HAnimSegment402.X3DNode::setName(CString("l4"));
Transform& Transform403 =  Transform();
Transform403.setTranslation(new float[]{0.0035,1.0925,-0.0787});
Shape& Shape404 =  Shape();
Appearance& Appearance405 =  Appearance();
Material& Material406 =  Material();
Material406.setUSE(CString("SPINAL_COLOR"));
Appearance405.addChild(&Material406);

Shape404.addChild(&Appearance405);

IndexedFaceSet& IndexedFaceSet407 =  IndexedFaceSet();
IndexedFaceSet407.setCreaseAngle(0.5);
IndexedFaceSet407.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate408 =  Coordinate();
Coordinate408.setUSE(CString("points"));
IndexedFaceSet407.setCoord(&Coordinate408);

Shape404.setGeometry(&IndexedFaceSet407);

Transform403.addChild(&Shape404);

HAnimSegment402.addChild(&Transform403);

HAnimJoint401.addChildren(&HAnimSegment402);

HAnimJoint& HAnimJoint409 =  HAnimJoint();
HAnimJoint409.setDEF(CString("hanim_vl3"));
HAnimJoint409.X3DNode::setName(CString("vl3"));
HAnimJoint409.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimSegment& HAnimSegment410 =  HAnimSegment();
HAnimSegment410.setDEF(CString("hanim_l3"));
HAnimSegment410.X3DNode::setName(CString("l3"));
Transform& Transform411 =  Transform();
Transform411.setTranslation(new float[]{0.0041,1.1276,-0.0796});
Shape& Shape412 =  Shape();
Appearance& Appearance413 =  Appearance();
Material& Material414 =  Material();
Material414.setUSE(CString("REC_SPINAL_COLOR"));
Appearance413.addChild(&Material414);

Shape412.addChild(&Appearance413);

IndexedFaceSet& IndexedFaceSet415 =  IndexedFaceSet();
IndexedFaceSet415.setCreaseAngle(0.5);
IndexedFaceSet415.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate416 =  Coordinate();
Coordinate416.setUSE(CString("points"));
IndexedFaceSet415.setCoord(&Coordinate416);

Shape412.setGeometry(&IndexedFaceSet415);

Transform411.addChild(&Shape412);

HAnimSegment410.addChild(&Transform411);

HAnimJoint409.addChildren(&HAnimSegment410);

HAnimJoint& HAnimJoint417 =  HAnimJoint();
HAnimJoint417.setDEF(CString("hanim_vl2"));
HAnimJoint417.X3DNode::setName(CString("vl2"));
HAnimJoint417.setCenter(new float[]{0.0045,1.1546,-0.08});
HAnimSegment& HAnimSegment418 =  HAnimSegment();
HAnimSegment418.setDEF(CString("hanim_l2"));
HAnimSegment418.X3DNode::setName(CString("l2"));
Transform& Transform419 =  Transform();
Transform419.setTranslation(new float[]{0.0045,1.1546,-0.08});
Shape& Shape420 =  Shape();
Appearance& Appearance421 =  Appearance();
Material& Material422 =  Material();
Material422.setUSE(CString("SPINAL_COLOR"));
Appearance421.addChild(&Material422);

Shape420.addChild(&Appearance421);

IndexedFaceSet& IndexedFaceSet423 =  IndexedFaceSet();
IndexedFaceSet423.setCreaseAngle(0.5);
IndexedFaceSet423.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate424 =  Coordinate();
Coordinate424.setUSE(CString("points"));
IndexedFaceSet423.setCoord(&Coordinate424);

Shape420.setGeometry(&IndexedFaceSet423);

Transform419.addChild(&Shape420);

HAnimSegment418.addChild(&Transform419);

HAnimJoint417.addChildren(&HAnimSegment418);

HAnimJoint& HAnimJoint425 =  HAnimJoint();
HAnimJoint425.setDEF(CString("hanim_vl1"));
HAnimJoint425.X3DNode::setName(CString("vl1"));
HAnimJoint425.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimSegment& HAnimSegment426 =  HAnimSegment();
HAnimSegment426.setDEF(CString("hanim_l1"));
HAnimSegment426.X3DNode::setName(CString("l1"));
Transform& Transform427 =  Transform();
Transform427.setTranslation(new float[]{0.0048,1.1912,-0.0805});
Shape& Shape428 =  Shape();
Appearance& Appearance429 =  Appearance();
Material& Material430 =  Material();
Material430.setUSE(CString("REC_SPINAL_COLOR"));
Appearance429.addChild(&Material430);

Shape428.addChild(&Appearance429);

IndexedFaceSet& IndexedFaceSet431 =  IndexedFaceSet();
IndexedFaceSet431.setCreaseAngle(0.5);
IndexedFaceSet431.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate432 =  Coordinate();
Coordinate432.setUSE(CString("points"));
IndexedFaceSet431.setCoord(&Coordinate432);

Shape428.setGeometry(&IndexedFaceSet431);

Transform427.addChild(&Shape428);

HAnimSegment426.addChild(&Transform427);

HAnimJoint425.addChildren(&HAnimSegment426);

HAnimJoint& HAnimJoint433 =  HAnimJoint();
HAnimJoint433.setDEF(CString("hanim_vt12"));
HAnimJoint433.X3DNode::setName(CString("vt12"));
HAnimJoint433.setCenter(new float[]{0.0051,1.2278,-0.0808});
HAnimSegment& HAnimSegment434 =  HAnimSegment();
HAnimSegment434.setDEF(CString("hanim_t12"));
HAnimSegment434.X3DNode::setName(CString("t12"));
Transform& Transform435 =  Transform();
Transform435.setTranslation(new float[]{0.0051,1.2278,-0.0808});
Shape& Shape436 =  Shape();
Appearance& Appearance437 =  Appearance();
Material& Material438 =  Material();
Material438.setUSE(CString("SPINAL_COLOR"));
Appearance437.addChild(&Material438);

Shape436.addChild(&Appearance437);

IndexedFaceSet& IndexedFaceSet439 =  IndexedFaceSet();
IndexedFaceSet439.setCreaseAngle(0.5);
IndexedFaceSet439.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate440 =  Coordinate();
Coordinate440.setUSE(CString("points"));
IndexedFaceSet439.setCoord(&Coordinate440);

Shape436.setGeometry(&IndexedFaceSet439);

Transform435.addChild(&Shape436);

HAnimSegment434.addChild(&Transform435);

HAnimJoint433.addChildren(&HAnimSegment434);

HAnimJoint& HAnimJoint441 =  HAnimJoint();
HAnimJoint441.setDEF(CString("hanim_vt11"));
HAnimJoint441.X3DNode::setName(CString("vt11"));
HAnimJoint441.setCenter(new float[]{0.0053,1.2679,-0.081});
HAnimSegment& HAnimSegment442 =  HAnimSegment();
HAnimSegment442.setDEF(CString("hanim_t11"));
HAnimSegment442.X3DNode::setName(CString("t11"));
Transform& Transform443 =  Transform();
Transform443.setTranslation(new float[]{0.0053,1.2679,-0.081});
Shape& Shape444 =  Shape();
Appearance& Appearance445 =  Appearance();
Material& Material446 =  Material();
Material446.setUSE(CString("SPINAL_COLOR"));
Appearance445.addChild(&Material446);

Shape444.addChild(&Appearance445);

IndexedFaceSet& IndexedFaceSet447 =  IndexedFaceSet();
IndexedFaceSet447.setCreaseAngle(0.5);
IndexedFaceSet447.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate448 =  Coordinate();
Coordinate448.setUSE(CString("points"));
IndexedFaceSet447.setCoord(&Coordinate448);

Shape444.setGeometry(&IndexedFaceSet447);

Transform443.addChild(&Shape444);

HAnimSegment442.addChild(&Transform443);

HAnimJoint441.addChildren(&HAnimSegment442);

HAnimJoint& HAnimJoint449 =  HAnimJoint();
HAnimJoint449.setDEF(CString("hanim_vt10"));
HAnimJoint449.X3DNode::setName(CString("vt10"));
HAnimJoint449.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimSegment& HAnimSegment450 =  HAnimSegment();
HAnimSegment450.setDEF(CString("hanim_t10"));
HAnimSegment450.X3DNode::setName(CString("t10"));
Transform& Transform451 =  Transform();
Transform451.setTranslation(new float[]{0.0056,1.2848,-0.0822});
Shape& Shape452 =  Shape();
Appearance& Appearance453 =  Appearance();
Material& Material454 =  Material();
Material454.setUSE(CString("REC_SPINAL_COLOR"));
Appearance453.addChild(&Material454);

Shape452.addChild(&Appearance453);

IndexedFaceSet& IndexedFaceSet455 =  IndexedFaceSet();
IndexedFaceSet455.setCreaseAngle(0.5);
IndexedFaceSet455.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate456 =  Coordinate();
Coordinate456.setUSE(CString("points"));
IndexedFaceSet455.setCoord(&Coordinate456);

Shape452.setGeometry(&IndexedFaceSet455);

Transform451.addChild(&Shape452);

HAnimSegment450.addChild(&Transform451);

HAnimJoint449.addChildren(&HAnimSegment450);

HAnimJoint& HAnimJoint457 =  HAnimJoint();
HAnimJoint457.setDEF(CString("hanim_vt9"));
HAnimJoint457.X3DNode::setName(CString("vt9"));
HAnimJoint457.setCenter(new float[]{0.0057,1.3126,-0.0838});
HAnimSegment& HAnimSegment458 =  HAnimSegment();
HAnimSegment458.setDEF(CString("hanim_t9"));
HAnimSegment458.X3DNode::setName(CString("t9"));
Transform& Transform459 =  Transform();
Transform459.setTranslation(new float[]{0.0057,1.3126,-0.0838});
Shape& Shape460 =  Shape();
Appearance& Appearance461 =  Appearance();
Material& Material462 =  Material();
Material462.setUSE(CString("SPINAL_COLOR"));
Appearance461.addChild(&Material462);

Shape460.addChild(&Appearance461);

IndexedFaceSet& IndexedFaceSet463 =  IndexedFaceSet();
IndexedFaceSet463.setCreaseAngle(0.5);
IndexedFaceSet463.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate464 =  Coordinate();
Coordinate464.setUSE(CString("points"));
IndexedFaceSet463.setCoord(&Coordinate464);

Shape460.setGeometry(&IndexedFaceSet463);

Transform459.addChild(&Shape460);

HAnimSegment458.addChild(&Transform459);

HAnimJoint457.addChildren(&HAnimSegment458);

HAnimJoint& HAnimJoint465 =  HAnimJoint();
HAnimJoint465.setDEF(CString("hanim_vt8"));
HAnimJoint465.X3DNode::setName(CString("vt8"));
HAnimJoint465.setCenter(new float[]{0.0057,1.3382,-0.0845});
HAnimSegment& HAnimSegment466 =  HAnimSegment();
HAnimSegment466.setDEF(CString("hanim_t8"));
HAnimSegment466.X3DNode::setName(CString("t8"));
Transform& Transform467 =  Transform();
Transform467.setTranslation(new float[]{0.0057,1.3382,-0.0845});
Shape& Shape468 =  Shape();
Appearance& Appearance469 =  Appearance();
Material& Material470 =  Material();
Material470.setUSE(CString("SPINAL_COLOR"));
Appearance469.addChild(&Material470);

Shape468.addChild(&Appearance469);

IndexedFaceSet& IndexedFaceSet471 =  IndexedFaceSet();
IndexedFaceSet471.setCreaseAngle(0.5);
IndexedFaceSet471.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate472 =  Coordinate();
Coordinate472.setUSE(CString("points"));
IndexedFaceSet471.setCoord(&Coordinate472);

Shape468.setGeometry(&IndexedFaceSet471);

Transform467.addChild(&Shape468);

HAnimSegment466.addChild(&Transform467);

HAnimJoint465.addChildren(&HAnimSegment466);

HAnimJoint& HAnimJoint473 =  HAnimJoint();
HAnimJoint473.setDEF(CString("hanim_vt7"));
HAnimJoint473.X3DNode::setName(CString("vt7"));
HAnimJoint473.setCenter(new float[]{0.0058,1.3625,-0.0833});
HAnimSegment& HAnimSegment474 =  HAnimSegment();
HAnimSegment474.setDEF(CString("hanim_t7"));
HAnimSegment474.X3DNode::setName(CString("t7"));
Transform& Transform475 =  Transform();
Transform475.setTranslation(new float[]{0.0058,1.3625,-0.0833});
Shape& Shape476 =  Shape();
Appearance& Appearance477 =  Appearance();
Material& Material478 =  Material();
Material478.setUSE(CString("SPINAL_COLOR"));
Appearance477.addChild(&Material478);

Shape476.addChild(&Appearance477);

IndexedFaceSet& IndexedFaceSet479 =  IndexedFaceSet();
IndexedFaceSet479.setCreaseAngle(0.5);
IndexedFaceSet479.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate480 =  Coordinate();
Coordinate480.setUSE(CString("points"));
IndexedFaceSet479.setCoord(&Coordinate480);

Shape476.setGeometry(&IndexedFaceSet479);

Transform475.addChild(&Shape476);

HAnimSegment474.addChild(&Transform475);

HAnimJoint473.addChildren(&HAnimSegment474);

HAnimJoint& HAnimJoint481 =  HAnimJoint();
HAnimJoint481.setDEF(CString("hanim_vt6"));
HAnimJoint481.X3DNode::setName(CString("vt6"));
HAnimJoint481.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimSegment& HAnimSegment482 =  HAnimSegment();
HAnimSegment482.setDEF(CString("hanim_t6"));
HAnimSegment482.X3DNode::setName(CString("t6"));
Transform& Transform483 =  Transform();
Transform483.setTranslation(new float[]{0.0059,1.3866,-0.08});
Shape& Shape484 =  Shape();
Appearance& Appearance485 =  Appearance();
Material& Material486 =  Material();
Material486.setUSE(CString("REC_SPINAL_COLOR"));
Appearance485.addChild(&Material486);

Shape484.addChild(&Appearance485);

IndexedFaceSet& IndexedFaceSet487 =  IndexedFaceSet();
IndexedFaceSet487.setCreaseAngle(0.5);
IndexedFaceSet487.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate488 =  Coordinate();
Coordinate488.setUSE(CString("points"));
IndexedFaceSet487.setCoord(&Coordinate488);

Shape484.setGeometry(&IndexedFaceSet487);

Transform483.addChild(&Shape484);

HAnimSegment482.addChild(&Transform483);

HAnimJoint481.addChildren(&HAnimSegment482);

HAnimJoint& HAnimJoint489 =  HAnimJoint();
HAnimJoint489.setDEF(CString("hanim_vt5"));
HAnimJoint489.X3DNode::setName(CString("vt5"));
HAnimJoint489.setCenter(new float[]{0.006,1.4102,-0.0745});
HAnimSegment& HAnimSegment490 =  HAnimSegment();
HAnimSegment490.setDEF(CString("hanim_t5"));
HAnimSegment490.X3DNode::setName(CString("t5"));
Transform& Transform491 =  Transform();
Transform491.setTranslation(new float[]{0.006,1.4102,-0.0745});
Shape& Shape492 =  Shape();
Appearance& Appearance493 =  Appearance();
Material& Material494 =  Material();
Material494.setUSE(CString("SPINAL_COLOR"));
Appearance493.addChild(&Material494);

Shape492.addChild(&Appearance493);

IndexedFaceSet& IndexedFaceSet495 =  IndexedFaceSet();
IndexedFaceSet495.setCreaseAngle(0.5);
IndexedFaceSet495.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate496 =  Coordinate();
Coordinate496.setUSE(CString("points"));
IndexedFaceSet495.setCoord(&Coordinate496);

Shape492.setGeometry(&IndexedFaceSet495);

Transform491.addChild(&Shape492);

HAnimSegment490.addChild(&Transform491);

HAnimJoint489.addChildren(&HAnimSegment490);

HAnimJoint& HAnimJoint497 =  HAnimJoint();
HAnimJoint497.setDEF(CString("hanim_vt4"));
HAnimJoint497.X3DNode::setName(CString("vt4"));
HAnimJoint497.setCenter(new float[]{0.0061,1.432,-0.0675});
HAnimSegment& HAnimSegment498 =  HAnimSegment();
HAnimSegment498.setDEF(CString("hanim_t4"));
HAnimSegment498.X3DNode::setName(CString("t4"));
Transform& Transform499 =  Transform();
Transform499.setTranslation(new float[]{0.0061,1.432,-0.0675});
Shape& Shape500 =  Shape();
Appearance& Appearance501 =  Appearance();
Material& Material502 =  Material();
Material502.setUSE(CString("SPINAL_COLOR"));
Appearance501.addChild(&Material502);

Shape500.addChild(&Appearance501);

IndexedFaceSet& IndexedFaceSet503 =  IndexedFaceSet();
IndexedFaceSet503.setCreaseAngle(0.5);
IndexedFaceSet503.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate504 =  Coordinate();
Coordinate504.setUSE(CString("points"));
IndexedFaceSet503.setCoord(&Coordinate504);

Shape500.setGeometry(&IndexedFaceSet503);

Transform499.addChild(&Shape500);

HAnimSegment498.addChild(&Transform499);

HAnimJoint497.addChildren(&HAnimSegment498);

HAnimJoint& HAnimJoint505 =  HAnimJoint();
HAnimJoint505.setDEF(CString("hanim_vt3"));
HAnimJoint505.X3DNode::setName(CString("vt3"));
HAnimJoint505.setCenter(new float[]{0.0062,1.4583,-0.057});
HAnimSegment& HAnimSegment506 =  HAnimSegment();
HAnimSegment506.setDEF(CString("hanim_t3"));
HAnimSegment506.X3DNode::setName(CString("t3"));
Transform& Transform507 =  Transform();
Transform507.setTranslation(new float[]{0.0062,1.4583,-0.057});
Shape& Shape508 =  Shape();
Appearance& Appearance509 =  Appearance();
Material& Material510 =  Material();
Material510.setUSE(CString("SPINAL_COLOR"));
Appearance509.addChild(&Material510);

Shape508.addChild(&Appearance509);

IndexedFaceSet& IndexedFaceSet511 =  IndexedFaceSet();
IndexedFaceSet511.setCreaseAngle(0.5);
IndexedFaceSet511.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate512 =  Coordinate();
Coordinate512.setUSE(CString("points"));
IndexedFaceSet511.setCoord(&Coordinate512);

Shape508.setGeometry(&IndexedFaceSet511);

Transform507.addChild(&Shape508);

HAnimSegment506.addChild(&Transform507);

HAnimJoint505.addChildren(&HAnimSegment506);

HAnimJoint& HAnimJoint513 =  HAnimJoint();
HAnimJoint513.setDEF(CString("hanim_vt2"));
HAnimJoint513.X3DNode::setName(CString("vt2"));
HAnimJoint513.setCenter(new float[]{0.0063,1.4761,-0.0484});
HAnimSegment& HAnimSegment514 =  HAnimSegment();
HAnimSegment514.setDEF(CString("hanim_t2"));
HAnimSegment514.X3DNode::setName(CString("t2"));
Transform& Transform515 =  Transform();
Transform515.setTranslation(new float[]{0.0063,1.4761,-0.0484});
Shape& Shape516 =  Shape();
Appearance& Appearance517 =  Appearance();
Material& Material518 =  Material();
Material518.setUSE(CString("SPINAL_COLOR"));
Appearance517.addChild(&Material518);

Shape516.addChild(&Appearance517);

IndexedFaceSet& IndexedFaceSet519 =  IndexedFaceSet();
IndexedFaceSet519.setCreaseAngle(0.5);
IndexedFaceSet519.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate520 =  Coordinate();
Coordinate520.setUSE(CString("points"));
IndexedFaceSet519.setCoord(&Coordinate520);

Shape516.setGeometry(&IndexedFaceSet519);

Transform515.addChild(&Shape516);

HAnimSegment514.addChild(&Transform515);

HAnimJoint513.addChildren(&HAnimSegment514);

HAnimJoint& HAnimJoint521 =  HAnimJoint();
HAnimJoint521.setDEF(CString("hanim_vt1"));
HAnimJoint521.X3DNode::setName(CString("vt1"));
HAnimJoint521.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimSegment& HAnimSegment522 =  HAnimSegment();
HAnimSegment522.setDEF(CString("hanim_t1"));
HAnimSegment522.X3DNode::setName(CString("t1"));
Transform& Transform523 =  Transform();
Transform523.setTranslation(new float[]{0.0065,1.4951,-0.0387});
Shape& Shape524 =  Shape();
Appearance& Appearance525 =  Appearance();
Material& Material526 =  Material();
Material526.setUSE(CString("REC_SPINAL_COLOR"));
Appearance525.addChild(&Material526);

Shape524.addChild(&Appearance525);

IndexedFaceSet& IndexedFaceSet527 =  IndexedFaceSet();
IndexedFaceSet527.setCreaseAngle(0.5);
IndexedFaceSet527.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate528 =  Coordinate();
Coordinate528.setUSE(CString("points"));
IndexedFaceSet527.setCoord(&Coordinate528);

Shape524.setGeometry(&IndexedFaceSet527);

Transform523.addChild(&Shape524);

HAnimSegment522.addChild(&Transform523);

HAnimJoint521.addChildren(&HAnimSegment522);

HAnimJoint& HAnimJoint529 =  HAnimJoint();
HAnimJoint529.setDEF(CString("hanim_l_shoulder"));
HAnimJoint529.X3DNode::setName(CString("l_shoulder"));
HAnimJoint529.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment530 =  HAnimSegment();
HAnimSegment530.setDEF(CString("hanim_l_upperarm"));
HAnimSegment530.X3DNode::setName(CString("l_upperarm"));
Transform& Transform531 =  Transform();
Transform531.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Shape& Shape532 =  Shape();
Appearance& Appearance533 =  Appearance();
Material& Material534 =  Material();
Material534.setUSE(CString("MIN_COLOR"));
Appearance533.addChild(&Material534);

Shape532.addChild(&Appearance533);

IndexedFaceSet& IndexedFaceSet535 =  IndexedFaceSet();
IndexedFaceSet535.setCreaseAngle(0.5);
IndexedFaceSet535.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate536 =  Coordinate();
Coordinate536.setUSE(CString("points"));
IndexedFaceSet535.setCoord(&Coordinate536);

Shape532.setGeometry(&IndexedFaceSet535);

Transform531.addChild(&Shape532);

HAnimSegment530.addChild(&Transform531);

Transform& Transform537 =  Transform();
Transform537.setDEF(CString("l_upperarm_adjust"));
Transform537.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Transform537.setRotation(new float[]{1,0,0,0.119});
Transform537.setCenter(new float[]{0.182,1.22,-0.047});
HAnimSegment530.addChild(&Transform537);

HAnimSite& HAnimSite538 =  HAnimSite();
HAnimSite538.setDEF(CString("hanim_l_humeral_lateral_epicn_pt"));
HAnimSite538.X3DNode::setName(CString("l_humeral_lateral_epicn_pt"));
HAnimSite538.setTranslation(new float[]{0.228,1.1482,-0.11});
Shape& Shape539 =  Shape();
Appearance& Appearance540 =  Appearance();
Material& Material541 =  Material();
Material541.setUSE(CString("SITE_COLOR"));
Appearance540.addChild(&Material541);

Shape539.addChild(&Appearance540);

IndexedFaceSet& IndexedFaceSet542 =  IndexedFaceSet();
IndexedFaceSet542.setCreaseAngle(0.5);
IndexedFaceSet542.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate543 =  Coordinate();
Coordinate543.setUSE(CString("points"));
IndexedFaceSet542.setCoord(&Coordinate543);

Shape539.setGeometry(&IndexedFaceSet542);

HAnimSite538.addChild(&Shape539);

HAnimSegment530.addChild(&HAnimSite538);

HAnimJoint529.addChildren(&HAnimSegment530);

HAnimJoint& HAnimJoint544 =  HAnimJoint();
HAnimJoint544.setDEF(CString("hanim_l_elbow"));
HAnimJoint544.X3DNode::setName(CString("l_elbow"));
HAnimJoint544.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment545 =  HAnimSegment();
HAnimSegment545.setDEF(CString("hanim_l_forearm"));
HAnimSegment545.X3DNode::setName(CString("l_forearm"));
Transform& Transform546 =  Transform();
Transform546.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Shape& Shape547 =  Shape();
Appearance& Appearance548 =  Appearance();
Material& Material549 =  Material();
Material549.setUSE(CString("MIN_COLOR"));
Appearance548.addChild(&Material549);

Shape547.addChild(&Appearance548);

IndexedFaceSet& IndexedFaceSet550 =  IndexedFaceSet();
IndexedFaceSet550.setCreaseAngle(0.5);
IndexedFaceSet550.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate551 =  Coordinate();
Coordinate551.setUSE(CString("points"));
IndexedFaceSet550.setCoord(&Coordinate551);

Shape547.setGeometry(&IndexedFaceSet550);

Transform546.addChild(&Shape547);

HAnimSegment545.addChild(&Transform546);

Transform& Transform552 =  Transform();
Transform552.setDEF(CString("l_forearm_adjust"));
Transform552.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Transform552.setRotation(new float[]{-1,0,0,0.1});
Transform552.setCenter(new float[]{0.198,0.961,-0.0405});
HAnimSegment545.addChild(&Transform552);

HAnimSite& HAnimSite553 =  HAnimSite();
HAnimSite553.setDEF(CString("hanim_l_radial_styloid_pt"));
HAnimSite553.X3DNode::setName(CString("l_radial_styloid_pt"));
HAnimSite553.setTranslation(new float[]{0.1901,0.8645,-0.0415});
Shape& Shape554 =  Shape();
Appearance& Appearance555 =  Appearance();
Material& Material556 =  Material();
Material556.setUSE(CString("SITE_COLOR"));
Appearance555.addChild(&Material556);

Shape554.addChild(&Appearance555);

IndexedFaceSet& IndexedFaceSet557 =  IndexedFaceSet();
IndexedFaceSet557.setCreaseAngle(0.5);
IndexedFaceSet557.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate558 =  Coordinate();
Coordinate558.setUSE(CString("points"));
IndexedFaceSet557.setCoord(&Coordinate558);

Shape554.setGeometry(&IndexedFaceSet557);

HAnimSite553.addChild(&Shape554);

HAnimSegment545.addChild(&HAnimSite553);

HAnimSite& HAnimSite559 =  HAnimSite();
HAnimSite559.setDEF(CString("hanim_l_olecranon_pt"));
HAnimSite559.X3DNode::setName(CString("l_olecranon_pt"));
HAnimSite559.setTranslation(new float[]{-0.1962,1.1375,-0.1123});
Shape& Shape560 =  Shape();
Appearance& Appearance561 =  Appearance();
Material& Material562 =  Material();
Material562.setUSE(CString("SITE_COLOR"));
Appearance561.addChild(&Material562);

Shape560.addChild(&Appearance561);

IndexedFaceSet& IndexedFaceSet563 =  IndexedFaceSet();
IndexedFaceSet563.setCreaseAngle(0.5);
IndexedFaceSet563.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate564 =  Coordinate();
Coordinate564.setUSE(CString("points"));
IndexedFaceSet563.setCoord(&Coordinate564);

Shape560.setGeometry(&IndexedFaceSet563);

HAnimSite559.addChild(&Shape560);

HAnimSegment545.addChild(&HAnimSite559);

HAnimSite& HAnimSite565 =  HAnimSite();
HAnimSite565.setDEF(CString("hanim_l_humeral_medial_epicn_pt"));
HAnimSite565.X3DNode::setName(CString("l_humeral_medial_epicn_pt"));
HAnimSite565.setTranslation(new float[]{0.1735,1.1272,-0.1113});
Shape& Shape566 =  Shape();
Appearance& Appearance567 =  Appearance();
Material& Material568 =  Material();
Material568.setUSE(CString("SITE_COLOR"));
Appearance567.addChild(&Material568);

Shape566.addChild(&Appearance567);

IndexedFaceSet& IndexedFaceSet569 =  IndexedFaceSet();
IndexedFaceSet569.setCreaseAngle(0.5);
IndexedFaceSet569.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate570 =  Coordinate();
Coordinate570.setUSE(CString("points"));
IndexedFaceSet569.setCoord(&Coordinate570);

Shape566.setGeometry(&IndexedFaceSet569);

HAnimSite565.addChild(&Shape566);

HAnimSegment545.addChild(&HAnimSite565);

HAnimSite& HAnimSite571 =  HAnimSite();
HAnimSite571.setDEF(CString("hanim_l_radiale_pt"));
HAnimSite571.X3DNode::setName(CString("l_radiale_pt"));
HAnimSite571.setTranslation(new float[]{0.2182,1.1212,-0.1167});
Shape& Shape572 =  Shape();
Appearance& Appearance573 =  Appearance();
Material& Material574 =  Material();
Material574.setUSE(CString("SITE_COLOR"));
Appearance573.addChild(&Material574);

Shape572.addChild(&Appearance573);

IndexedFaceSet& IndexedFaceSet575 =  IndexedFaceSet();
IndexedFaceSet575.setCreaseAngle(0.5);
IndexedFaceSet575.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate576 =  Coordinate();
Coordinate576.setUSE(CString("points"));
IndexedFaceSet575.setCoord(&Coordinate576);

Shape572.setGeometry(&IndexedFaceSet575);

HAnimSite571.addChild(&Shape572);

HAnimSegment545.addChild(&HAnimSite571);

HAnimJoint544.addChildren(&HAnimSegment545);

HAnimJoint& HAnimJoint577 =  HAnimJoint();
HAnimJoint577.setDEF(CString("hanim_l_wrist"));
HAnimJoint577.X3DNode::setName(CString("l_wrist"));
HAnimJoint577.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment578 =  HAnimSegment();
HAnimSegment578.setDEF(CString("hanim_l_hand"));
HAnimSegment578.X3DNode::setName(CString("l_hand"));
Transform& Transform579 =  Transform();
Transform579.setTranslation(new float[]{0.1984,0.8663,-0.0583});
Shape& Shape580 =  Shape();
Appearance& Appearance581 =  Appearance();
Material& Material582 =  Material();
Material582.setUSE(CString("MIN_COLOR"));
Appearance581.addChild(&Material582);

Shape580.addChild(&Appearance581);

IndexedFaceSet& IndexedFaceSet583 =  IndexedFaceSet();
IndexedFaceSet583.setCreaseAngle(0.5);
IndexedFaceSet583.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate584 =  Coordinate();
Coordinate584.setUSE(CString("points"));
IndexedFaceSet583.setCoord(&Coordinate584);

Shape580.setGeometry(&IndexedFaceSet583);

Transform579.addChild(&Shape580);

HAnimSegment578.addChild(&Transform579);

Transform& Transform585 =  Transform();
Transform585.setDEF(CString("l_hand_adjust"));
Transform585.setTranslation(new float[]{0.1984,0.8663,-0.0583});
Transform585.setRotation(new float[]{-0.06361,-0.9967,0.04988,1.333});
Transform585.setCenter(new float[]{0.213,0.811,-0.0338});
HAnimSegment578.addChild(&Transform585);

HAnimSite& HAnimSite586 =  HAnimSite();
HAnimSite586.setDEF(CString("hanim_l_hand_tip"));
HAnimSite586.X3DNode::setName(CString("l_hand_tip"));
HAnimSite586.setTranslation(new float[]{0.208,0.6731,-0.0491});
Shape& Shape587 =  Shape();
Appearance& Appearance588 =  Appearance();
Material& Material589 =  Material();
Material589.setUSE(CString("SITE_COLOR"));
Appearance588.addChild(&Material589);

Shape587.addChild(&Appearance588);

IndexedFaceSet& IndexedFaceSet590 =  IndexedFaceSet();
IndexedFaceSet590.setCreaseAngle(0.5);
IndexedFaceSet590.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate591 =  Coordinate();
Coordinate591.setUSE(CString("points"));
IndexedFaceSet590.setCoord(&Coordinate591);

Shape587.setGeometry(&IndexedFaceSet590);

HAnimSite586.addChild(&Shape587);

HAnimSegment578.addChild(&HAnimSite586);

HAnimSite& HAnimSite592 =  HAnimSite();
HAnimSite592.setDEF(CString("hanim_l_metacarpal_pha2_pt"));
HAnimSite592.X3DNode::setName(CString("l_metacarpal_pha2_pt"));
HAnimSite592.setTranslation(new float[]{0.2009,0.8139,-0.0237});
Shape& Shape593 =  Shape();
Appearance& Appearance594 =  Appearance();
Material& Material595 =  Material();
Material595.setUSE(CString("SITE_COLOR"));
Appearance594.addChild(&Material595);

Shape593.addChild(&Appearance594);

IndexedFaceSet& IndexedFaceSet596 =  IndexedFaceSet();
IndexedFaceSet596.setCreaseAngle(0.5);
IndexedFaceSet596.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate597 =  Coordinate();
Coordinate597.setUSE(CString("points"));
IndexedFaceSet596.setCoord(&Coordinate597);

Shape593.setGeometry(&IndexedFaceSet596);

HAnimSite592.addChild(&Shape593);

HAnimSegment578.addChild(&HAnimSite592);

HAnimSite& HAnimSite598 =  HAnimSite();
HAnimSite598.setDEF(CString("hanim_l_dactylion_pt"));
HAnimSite598.X3DNode::setName(CString("l_dactylion_pt"));
HAnimSite598.setTranslation(new float[]{0.2056,0.6743,-0.0482});
Shape& Shape599 =  Shape();
Appearance& Appearance600 =  Appearance();
Material& Material601 =  Material();
Material601.setUSE(CString("SITE_COLOR"));
Appearance600.addChild(&Material601);

Shape599.addChild(&Appearance600);

IndexedFaceSet& IndexedFaceSet602 =  IndexedFaceSet();
IndexedFaceSet602.setCreaseAngle(0.5);
IndexedFaceSet602.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate603 =  Coordinate();
Coordinate603.setUSE(CString("points"));
IndexedFaceSet602.setCoord(&Coordinate603);

Shape599.setGeometry(&IndexedFaceSet602);

HAnimSite598.addChild(&Shape599);

HAnimSegment578.addChild(&HAnimSite598);

HAnimSite& HAnimSite604 =  HAnimSite();
HAnimSite604.setDEF(CString("hanim_l_ulnar_styloid_pt"));
HAnimSite604.X3DNode::setName(CString("l_ulnar_styloid_pt"));
HAnimSite604.setTranslation(new float[]{-0.2142,0.8529,-0.0648});
Shape& Shape605 =  Shape();
Appearance& Appearance606 =  Appearance();
Material& Material607 =  Material();
Material607.setUSE(CString("SITE_COLOR"));
Appearance606.addChild(&Material607);

Shape605.addChild(&Appearance606);

IndexedFaceSet& IndexedFaceSet608 =  IndexedFaceSet();
IndexedFaceSet608.setCreaseAngle(0.5);
IndexedFaceSet608.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate609 =  Coordinate();
Coordinate609.setUSE(CString("points"));
IndexedFaceSet608.setCoord(&Coordinate609);

Shape605.setGeometry(&IndexedFaceSet608);

HAnimSite604.addChild(&Shape605);

HAnimSegment578.addChild(&HAnimSite604);

HAnimSite& HAnimSite610 =  HAnimSite();
HAnimSite610.setDEF(CString("hanim_l_metacarpal_pha5_pt"));
HAnimSite610.X3DNode::setName(CString("l_metacarpal_pha5_pt"));
HAnimSite610.setTranslation(new float[]{0.1929,0.786,-0.1122});
Shape& Shape611 =  Shape();
Appearance& Appearance612 =  Appearance();
Material& Material613 =  Material();
Material613.setUSE(CString("SITE_COLOR"));
Appearance612.addChild(&Material613);

Shape611.addChild(&Appearance612);

IndexedFaceSet& IndexedFaceSet614 =  IndexedFaceSet();
IndexedFaceSet614.setCreaseAngle(0.5);
IndexedFaceSet614.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate615 =  Coordinate();
Coordinate615.setUSE(CString("points"));
IndexedFaceSet614.setCoord(&Coordinate615);

Shape611.setGeometry(&IndexedFaceSet614);

HAnimSite610.addChild(&Shape611);

HAnimSegment578.addChild(&HAnimSite610);

HAnimJoint577.addChildren(&HAnimSegment578);

HAnimJoint& HAnimJoint616 =  HAnimJoint();
HAnimJoint616.setDEF(CString("hanim_l_thumb1"));
HAnimJoint616.X3DNode::setName(CString("l_thumb1"));
HAnimJoint616.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment617 =  HAnimSegment();
HAnimSegment617.setDEF(CString("hanim_l_thumb_metacarpal"));
HAnimSegment617.X3DNode::setName(CString("l_thumb_metacarpal"));
Transform& Transform618 =  Transform();
Transform618.setTranslation(new float[]{0.1924,0.8472,-0.0534});
Shape& Shape619 =  Shape();
Appearance& Appearance620 =  Appearance();
Material& Material621 =  Material();
Material621.setUSE(CString("JOINT_COLOR"));
Appearance620.addChild(&Material621);

Shape619.addChild(&Appearance620);

IndexedFaceSet& IndexedFaceSet622 =  IndexedFaceSet();
IndexedFaceSet622.setCreaseAngle(0.5);
IndexedFaceSet622.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate623 =  Coordinate();
Coordinate623.setUSE(CString("points"));
IndexedFaceSet622.setCoord(&Coordinate623);

Shape619.setGeometry(&IndexedFaceSet622);

Transform618.addChild(&Shape619);

HAnimSegment617.addChild(&Transform618);

HAnimJoint616.addChildren(&HAnimSegment617);

HAnimJoint& HAnimJoint624 =  HAnimJoint();
HAnimJoint624.setDEF(CString("hanim_l_thumb2"));
HAnimJoint624.X3DNode::setName(CString("l_thumb2"));
HAnimJoint624.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment625 =  HAnimSegment();
HAnimSegment625.setDEF(CString("hanim_l_thumb_proximal"));
HAnimSegment625.X3DNode::setName(CString("l_thumb_proximal"));
Transform& Transform626 =  Transform();
Transform626.setTranslation(new float[]{0.1951,0.8226,0.0246});
Shape& Shape627 =  Shape();
Appearance& Appearance628 =  Appearance();
Material& Material629 =  Material();
Material629.setUSE(CString("JOINT_COLOR"));
Appearance628.addChild(&Material629);

Shape627.addChild(&Appearance628);

IndexedFaceSet& IndexedFaceSet630 =  IndexedFaceSet();
IndexedFaceSet630.setCreaseAngle(0.5);
IndexedFaceSet630.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate631 =  Coordinate();
Coordinate631.setUSE(CString("points"));
IndexedFaceSet630.setCoord(&Coordinate631);

Shape627.setGeometry(&IndexedFaceSet630);

Transform626.addChild(&Shape627);

HAnimSegment625.addChild(&Transform626);

HAnimJoint624.addChildren(&HAnimSegment625);

HAnimJoint& HAnimJoint632 =  HAnimJoint();
HAnimJoint632.setDEF(CString("hanim_l_thumb3"));
HAnimJoint632.X3DNode::setName(CString("l_thumb3"));
HAnimJoint632.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimSegment& HAnimSegment633 =  HAnimSegment();
HAnimSegment633.setDEF(CString("hanim_l_thumb_distal"));
HAnimSegment633.X3DNode::setName(CString("l_thumb_distal"));
Transform& Transform634 =  Transform();
Transform634.setTranslation(new float[]{0.1955,0.8159,0.0464});
Shape& Shape635 =  Shape();
Appearance& Appearance636 =  Appearance();
Material& Material637 =  Material();
Material637.setUSE(CString("JOINT_COLOR"));
Appearance636.addChild(&Material637);

Shape635.addChild(&Appearance636);

IndexedFaceSet& IndexedFaceSet638 =  IndexedFaceSet();
IndexedFaceSet638.setCreaseAngle(0.5);
IndexedFaceSet638.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate639 =  Coordinate();
Coordinate639.setUSE(CString("points"));
IndexedFaceSet638.setCoord(&Coordinate639);

Shape635.setGeometry(&IndexedFaceSet638);

Transform634.addChild(&Shape635);

HAnimSegment633.addChild(&Transform634);

HAnimSite& HAnimSite640 =  HAnimSite();
HAnimSite640.setDEF(CString("hanim_l_thumb_distal_tip"));
HAnimSite640.X3DNode::setName(CString("l_thumb_distal_tip"));
HAnimSite640.setTranslation(new float[]{0.1982,0.8061,0.0759});
Shape& Shape641 =  Shape();
Appearance& Appearance642 =  Appearance();
Material& Material643 =  Material();
Material643.setUSE(CString("HAND_FEET_COLOR"));
Appearance642.addChild(&Material643);

Shape641.addChild(&Appearance642);

IndexedFaceSet& IndexedFaceSet644 =  IndexedFaceSet();
IndexedFaceSet644.setCreaseAngle(0.5);
IndexedFaceSet644.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate645 =  Coordinate();
Coordinate645.setUSE(CString("points"));
IndexedFaceSet644.setCoord(&Coordinate645);

Shape641.setGeometry(&IndexedFaceSet644);

HAnimSite640.addChild(&Shape641);

HAnimSegment633.addChild(&HAnimSite640);

HAnimJoint632.addChildren(&HAnimSegment633);

HAnimJoint624.addChildren(&HAnimJoint632);

HAnimJoint616.addChildren(&HAnimJoint624);

HAnimJoint577.addChildren(&HAnimJoint616);

HAnimJoint& HAnimJoint646 =  HAnimJoint();
HAnimJoint646.setDEF(CString("hanim_l_index0"));
HAnimJoint646.X3DNode::setName(CString("l_index0"));
HAnimJoint646.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment647 =  HAnimSegment();
HAnimSegment647.setDEF(CString("hanim_l_index_metacarpal"));
HAnimSegment647.X3DNode::setName(CString("l_index_metacarpal"));
Transform& Transform648 =  Transform();
Transform648.setTranslation(new float[]{0.1983,0.8024,-0.028});
Shape& Shape649 =  Shape();
Appearance& Appearance650 =  Appearance();
Material& Material651 =  Material();
Material651.setUSE(CString("JOINT_COLOR"));
Appearance650.addChild(&Material651);

Shape649.addChild(&Appearance650);

IndexedFaceSet& IndexedFaceSet652 =  IndexedFaceSet();
IndexedFaceSet652.setCreaseAngle(0.5);
IndexedFaceSet652.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate653 =  Coordinate();
Coordinate653.setUSE(CString("points"));
IndexedFaceSet652.setCoord(&Coordinate653);

Shape649.setGeometry(&IndexedFaceSet652);

Transform648.addChild(&Shape649);

HAnimSegment647.addChild(&Transform648);

HAnimJoint646.addChildren(&HAnimSegment647);

HAnimJoint& HAnimJoint654 =  HAnimJoint();
HAnimJoint654.setDEF(CString("hanim_l_index1"));
HAnimJoint654.X3DNode::setName(CString("l_index1"));
HAnimJoint654.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment655 =  HAnimSegment();
HAnimSegment655.setDEF(CString("hanim_l_index_proximal"));
HAnimSegment655.X3DNode::setName(CString("l_index_proximal"));
Transform& Transform656 =  Transform();
Transform656.setTranslation(new float[]{0.1983,0.7815,-0.028});
Shape& Shape657 =  Shape();
Appearance& Appearance658 =  Appearance();
Material& Material659 =  Material();
Material659.setUSE(CString("JOINT_COLOR"));
Appearance658.addChild(&Material659);

Shape657.addChild(&Appearance658);

IndexedFaceSet& IndexedFaceSet660 =  IndexedFaceSet();
IndexedFaceSet660.setCreaseAngle(0.5);
IndexedFaceSet660.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate661 =  Coordinate();
Coordinate661.setUSE(CString("points"));
IndexedFaceSet660.setCoord(&Coordinate661);

Shape657.setGeometry(&IndexedFaceSet660);

Transform656.addChild(&Shape657);

HAnimSegment655.addChild(&Transform656);

HAnimJoint654.addChildren(&HAnimSegment655);

HAnimJoint& HAnimJoint662 =  HAnimJoint();
HAnimJoint662.setDEF(CString("hanim_l_index2"));
HAnimJoint662.X3DNode::setName(CString("l_index2"));
HAnimJoint662.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment663 =  HAnimSegment();
HAnimSegment663.setDEF(CString("hanim_l_index_middle"));
HAnimSegment663.X3DNode::setName(CString("l_index_middle"));
Transform& Transform664 =  Transform();
Transform664.setTranslation(new float[]{0.2017,0.7363,-0.0248});
Shape& Shape665 =  Shape();
Appearance& Appearance666 =  Appearance();
Material& Material667 =  Material();
Material667.setUSE(CString("JOINT_COLOR"));
Appearance666.addChild(&Material667);

Shape665.addChild(&Appearance666);

IndexedFaceSet& IndexedFaceSet668 =  IndexedFaceSet();
IndexedFaceSet668.setCreaseAngle(0.5);
IndexedFaceSet668.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate669 =  Coordinate();
Coordinate669.setUSE(CString("points"));
IndexedFaceSet668.setCoord(&Coordinate669);

Shape665.setGeometry(&IndexedFaceSet668);

Transform664.addChild(&Shape665);

HAnimSegment663.addChild(&Transform664);

HAnimJoint662.addChildren(&HAnimSegment663);

HAnimJoint& HAnimJoint670 =  HAnimJoint();
HAnimJoint670.setDEF(CString("hanim_l_index3"));
HAnimJoint670.X3DNode::setName(CString("l_index3"));
HAnimJoint670.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimSegment& HAnimSegment671 =  HAnimSegment();
HAnimSegment671.setDEF(CString("hanim_l_index_distal"));
HAnimSegment671.X3DNode::setName(CString("l_index_distal"));
Transform& Transform672 =  Transform();
Transform672.setTranslation(new float[]{0.2028,0.7139,-0.0236});
Shape& Shape673 =  Shape();
Appearance& Appearance674 =  Appearance();
Material& Material675 =  Material();
Material675.setUSE(CString("JOINT_COLOR"));
Appearance674.addChild(&Material675);

Shape673.addChild(&Appearance674);

IndexedFaceSet& IndexedFaceSet676 =  IndexedFaceSet();
IndexedFaceSet676.setCreaseAngle(0.5);
IndexedFaceSet676.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate677 =  Coordinate();
Coordinate677.setUSE(CString("points"));
IndexedFaceSet676.setCoord(&Coordinate677);

Shape673.setGeometry(&IndexedFaceSet676);

Transform672.addChild(&Shape673);

HAnimSegment671.addChild(&Transform672);

HAnimSite& HAnimSite678 =  HAnimSite();
HAnimSite678.setDEF(CString("hanim_l_index_distal_tip"));
HAnimSite678.X3DNode::setName(CString("l_index_distal_tip"));
HAnimSite678.setTranslation(new float[]{0.2089,0.6858,-0.0245});
Shape& Shape679 =  Shape();
Appearance& Appearance680 =  Appearance();
Material& Material681 =  Material();
Material681.setUSE(CString("HAND_FEET_COLOR"));
Appearance680.addChild(&Material681);

Shape679.addChild(&Appearance680);

IndexedFaceSet& IndexedFaceSet682 =  IndexedFaceSet();
IndexedFaceSet682.setCreaseAngle(0.5);
IndexedFaceSet682.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate683 =  Coordinate();
Coordinate683.setUSE(CString("points"));
IndexedFaceSet682.setCoord(&Coordinate683);

Shape679.setGeometry(&IndexedFaceSet682);

HAnimSite678.addChild(&Shape679);

HAnimSegment671.addChild(&HAnimSite678);

HAnimJoint670.addChildren(&HAnimSegment671);

HAnimJoint662.addChildren(&HAnimJoint670);

HAnimJoint654.addChildren(&HAnimJoint662);

HAnimJoint646.addChildren(&HAnimJoint654);

HAnimJoint577.addChildren(&HAnimJoint646);

HAnimJoint544.addChildren(&HAnimJoint577);

HAnimJoint529.addChildren(&HAnimJoint544);

HAnimJoint521.addChildren(&HAnimJoint529);

HAnimJoint& HAnimJoint684 =  HAnimJoint();
HAnimJoint684.setDEF(CString("hanim_r_shoulder"));
HAnimJoint684.X3DNode::setName(CString("r_shoulder"));
HAnimJoint684.setCenter(new float[]{-0.1907,1.4407,-0.0325});
HAnimSegment& HAnimSegment685 =  HAnimSegment();
HAnimSegment685.setDEF(CString("hanim_r_upperarm"));
HAnimSegment685.X3DNode::setName(CString("r_upperarm"));
Transform& Transform686 =  Transform();
Transform686.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Shape& Shape687 =  Shape();
Appearance& Appearance688 =  Appearance();
Material& Material689 =  Material();
Material689.setUSE(CString("MIN_COLOR"));
Appearance688.addChild(&Material689);

Shape687.addChild(&Appearance688);

IndexedFaceSet& IndexedFaceSet690 =  IndexedFaceSet();
IndexedFaceSet690.setCreaseAngle(0.5);
IndexedFaceSet690.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate691 =  Coordinate();
Coordinate691.setUSE(CString("points"));
IndexedFaceSet690.setCoord(&Coordinate691);

Shape687.setGeometry(&IndexedFaceSet690);

Transform686.addChild(&Shape687);

HAnimSegment685.addChild(&Transform686);

Transform& Transform692 =  Transform();
Transform692.setDEF(CString("r_upperarm_adjust"));
Transform692.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Transform692.setRotation(new float[]{1,0,0,0.0836});
Transform692.setCenter(new float[]{-0.182,1.22,-0.047});
HAnimSegment685.addChild(&Transform692);

HAnimSite& HAnimSite693 =  HAnimSite();
HAnimSite693.setDEF(CString("hanim_r_humeral_lateral_epicn_pt"));
HAnimSite693.X3DNode::setName(CString("r_humeral_lateral_epicn_pt"));
HAnimSite693.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
Shape& Shape694 =  Shape();
Appearance& Appearance695 =  Appearance();
Material& Material696 =  Material();
Material696.setUSE(CString("SITE_COLOR"));
Appearance695.addChild(&Material696);

Shape694.addChild(&Appearance695);

IndexedFaceSet& IndexedFaceSet697 =  IndexedFaceSet();
IndexedFaceSet697.setCreaseAngle(0.5);
IndexedFaceSet697.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate698 =  Coordinate();
Coordinate698.setUSE(CString("points"));
IndexedFaceSet697.setCoord(&Coordinate698);

Shape694.setGeometry(&IndexedFaceSet697);

HAnimSite693.addChild(&Shape694);

HAnimSegment685.addChild(&HAnimSite693);

HAnimJoint684.addChildren(&HAnimSegment685);

HAnimJoint& HAnimJoint699 =  HAnimJoint();
HAnimJoint699.setDEF(CString("hanim_r_elbow"));
HAnimJoint699.X3DNode::setName(CString("r_elbow"));
HAnimJoint699.setCenter(new float[]{-0.1949,1.1388,-0.062});
HAnimSegment& HAnimSegment700 =  HAnimSegment();
HAnimSegment700.setDEF(CString("hanim_r_forearm"));
HAnimSegment700.X3DNode::setName(CString("r_forearm"));
Transform& Transform701 =  Transform();
Transform701.setTranslation(new float[]{-0.1949,1.1388,-0.062});
Shape& Shape702 =  Shape();
Appearance& Appearance703 =  Appearance();
Material& Material704 =  Material();
Material704.setUSE(CString("MIN_COLOR"));
Appearance703.addChild(&Material704);

Shape702.addChild(&Appearance703);

IndexedFaceSet& IndexedFaceSet705 =  IndexedFaceSet();
IndexedFaceSet705.setCreaseAngle(0.5);
IndexedFaceSet705.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate706 =  Coordinate();
Coordinate706.setUSE(CString("points"));
IndexedFaceSet705.setCoord(&Coordinate706);

Shape702.setGeometry(&IndexedFaceSet705);

Transform701.addChild(&Shape702);

HAnimSegment700.addChild(&Transform701);

Transform& Transform707 =  Transform();
Transform707.setDEF(CString("r_forearm_adjust"));
Transform707.setTranslation(new float[]{-0.1949,1.1388,-0.062});
Transform707.setRotation(new float[]{-1,0,0,0.1254});
Transform707.setCenter(new float[]{-0.198,0.961,-0.0397});
HAnimSegment700.addChild(&Transform707);

HAnimSite& HAnimSite708 =  HAnimSite();
HAnimSite708.setDEF(CString("hanim_r_radial_styloid_pt"));
HAnimSite708.X3DNode::setName(CString("r_radial_styloid_pt"));
HAnimSite708.setTranslation(new float[]{-0.1884,0.8676,-0.036});
Shape& Shape709 =  Shape();
Appearance& Appearance710 =  Appearance();
Material& Material711 =  Material();
Material711.setUSE(CString("SITE_COLOR"));
Appearance710.addChild(&Material711);

Shape709.addChild(&Appearance710);

IndexedFaceSet& IndexedFaceSet712 =  IndexedFaceSet();
IndexedFaceSet712.setCreaseAngle(0.5);
IndexedFaceSet712.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate713 =  Coordinate();
Coordinate713.setUSE(CString("points"));
IndexedFaceSet712.setCoord(&Coordinate713);

Shape709.setGeometry(&IndexedFaceSet712);

HAnimSite708.addChild(&Shape709);

HAnimSegment700.addChild(&HAnimSite708);

HAnimSite& HAnimSite714 =  HAnimSite();
HAnimSite714.setDEF(CString("hanim_r_olecranon_pt"));
HAnimSite714.X3DNode::setName(CString("r_olecranon_pt"));
HAnimSite714.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
Shape& Shape715 =  Shape();
Appearance& Appearance716 =  Appearance();
Material& Material717 =  Material();
Material717.setUSE(CString("SITE_COLOR"));
Appearance716.addChild(&Material717);

Shape715.addChild(&Appearance716);

IndexedFaceSet& IndexedFaceSet718 =  IndexedFaceSet();
IndexedFaceSet718.setCreaseAngle(0.5);
IndexedFaceSet718.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate719 =  Coordinate();
Coordinate719.setUSE(CString("points"));
IndexedFaceSet718.setCoord(&Coordinate719);

Shape715.setGeometry(&IndexedFaceSet718);

HAnimSite714.addChild(&Shape715);

HAnimSegment700.addChild(&HAnimSite714);

HAnimSite& HAnimSite720 =  HAnimSite();
HAnimSite720.setDEF(CString("hanim_r_humeral_medial_epicn_pt"));
HAnimSite720.X3DNode::setName(CString("r_humeral_medial_epicn_pt"));
HAnimSite720.setTranslation(new float[]{-0.168,1.1298,-0.1062});
Shape& Shape721 =  Shape();
Appearance& Appearance722 =  Appearance();
Material& Material723 =  Material();
Material723.setUSE(CString("SITE_COLOR"));
Appearance722.addChild(&Material723);

Shape721.addChild(&Appearance722);

IndexedFaceSet& IndexedFaceSet724 =  IndexedFaceSet();
IndexedFaceSet724.setCreaseAngle(0.5);
IndexedFaceSet724.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate725 =  Coordinate();
Coordinate725.setUSE(CString("points"));
IndexedFaceSet724.setCoord(&Coordinate725);

Shape721.setGeometry(&IndexedFaceSet724);

HAnimSite720.addChild(&Shape721);

HAnimSegment700.addChild(&HAnimSite720);

HAnimSite& HAnimSite726 =  HAnimSite();
HAnimSite726.setDEF(CString("hanim_r_radiale_pt"));
HAnimSite726.X3DNode::setName(CString("r_radiale_pt"));
HAnimSite726.setTranslation(new float[]{-0.213,1.1305,-0.1091});
Shape& Shape727 =  Shape();
Appearance& Appearance728 =  Appearance();
Material& Material729 =  Material();
Material729.setUSE(CString("SITE_COLOR"));
Appearance728.addChild(&Material729);

Shape727.addChild(&Appearance728);

IndexedFaceSet& IndexedFaceSet730 =  IndexedFaceSet();
IndexedFaceSet730.setCreaseAngle(0.5);
IndexedFaceSet730.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate731 =  Coordinate();
Coordinate731.setUSE(CString("points"));
IndexedFaceSet730.setCoord(&Coordinate731);

Shape727.setGeometry(&IndexedFaceSet730);

HAnimSite726.addChild(&Shape727);

HAnimSegment700.addChild(&HAnimSite726);

HAnimJoint699.addChildren(&HAnimSegment700);

HAnimJoint& HAnimJoint732 =  HAnimJoint();
HAnimJoint732.setDEF(CString("hanim_r_wrist"));
HAnimJoint732.X3DNode::setName(CString("r_wrist"));
HAnimJoint732.setCenter(new float[]{-0.1959,0.8694,-0.0521});
HAnimSegment& HAnimSegment733 =  HAnimSegment();
HAnimSegment733.setDEF(CString("hanim_r_hand"));
HAnimSegment733.X3DNode::setName(CString("r_hand"));
Transform& Transform734 =  Transform();
Transform734.setTranslation(new float[]{-0.1959,0.8694,-0.0521});
Shape& Shape735 =  Shape();
Appearance& Appearance736 =  Appearance();
Material& Material737 =  Material();
Material737.setUSE(CString("MIN_COLOR"));
Appearance736.addChild(&Material737);

Shape735.addChild(&Appearance736);

IndexedFaceSet& IndexedFaceSet738 =  IndexedFaceSet();
IndexedFaceSet738.setCreaseAngle(0.5);
IndexedFaceSet738.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate739 =  Coordinate();
Coordinate739.setUSE(CString("points"));
IndexedFaceSet738.setCoord(&Coordinate739);

Shape735.setGeometry(&IndexedFaceSet738);

Transform734.addChild(&Shape735);

HAnimSegment733.addChild(&Transform734);

Transform& Transform740 =  Transform();
Transform740.setDEF(CString("r_hand_adjust"));
Transform740.setRotation(new float[]{-0.09024,0.994,-0.0624,1.216});
Transform740.setCenter(new float[]{-0.217,0.811,-0.0338});
HAnimSegment733.addChild(&Transform740);

HAnimSite& HAnimSite741 =  HAnimSite();
HAnimSite741.setDEF(CString("hanim_r_hand_tip"));
HAnimSite741.X3DNode::setName(CString("r_hand_tip"));
HAnimSite741.setTranslation(new float[]{-0.1969,0.6758,-0.0427});
Shape& Shape742 =  Shape();
Appearance& Appearance743 =  Appearance();
Material& Material744 =  Material();
Material744.setUSE(CString("SITE_COLOR"));
Appearance743.addChild(&Material744);

Shape742.addChild(&Appearance743);

IndexedFaceSet& IndexedFaceSet745 =  IndexedFaceSet();
IndexedFaceSet745.setCreaseAngle(0.5);
IndexedFaceSet745.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate746 =  Coordinate();
Coordinate746.setUSE(CString("points"));
IndexedFaceSet745.setCoord(&Coordinate746);

Shape742.setGeometry(&IndexedFaceSet745);

HAnimSite741.addChild(&Shape742);

HAnimSegment733.addChild(&HAnimSite741);

HAnimSite& HAnimSite747 =  HAnimSite();
HAnimSite747.setDEF(CString("hanim_r_metacarpal_pha2_pt"));
HAnimSite747.X3DNode::setName(CString("r_metacarpal_pha2_pt"));
HAnimSite747.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
Shape& Shape748 =  Shape();
Appearance& Appearance749 =  Appearance();
Material& Material750 =  Material();
Material750.setUSE(CString("SITE_COLOR"));
Appearance749.addChild(&Material750);

Shape748.addChild(&Appearance749);

IndexedFaceSet& IndexedFaceSet751 =  IndexedFaceSet();
IndexedFaceSet751.setCreaseAngle(0.5);
IndexedFaceSet751.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate752 =  Coordinate();
Coordinate752.setUSE(CString("points"));
IndexedFaceSet751.setCoord(&Coordinate752);

Shape748.setGeometry(&IndexedFaceSet751);

HAnimSite747.addChild(&Shape748);

HAnimSegment733.addChild(&HAnimSite747);

HAnimSite& HAnimSite753 =  HAnimSite();
HAnimSite753.setDEF(CString("hanim_r_dactylion_pt"));
HAnimSite753.X3DNode::setName(CString("r_dactylion_pt"));
HAnimSite753.setTranslation(new float[]{-0.1941,0.6772,-0.0423});
Shape& Shape754 =  Shape();
Appearance& Appearance755 =  Appearance();
Material& Material756 =  Material();
Material756.setUSE(CString("SITE_COLOR"));
Appearance755.addChild(&Material756);

Shape754.addChild(&Appearance755);

IndexedFaceSet& IndexedFaceSet757 =  IndexedFaceSet();
IndexedFaceSet757.setCreaseAngle(0.5);
IndexedFaceSet757.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate758 =  Coordinate();
Coordinate758.setUSE(CString("points"));
IndexedFaceSet757.setCoord(&Coordinate758);

Shape754.setGeometry(&IndexedFaceSet757);

HAnimSite753.addChild(&Shape754);

HAnimSegment733.addChild(&HAnimSite753);

HAnimSite& HAnimSite759 =  HAnimSite();
HAnimSite759.setDEF(CString("hanim_r_ulnar_styloid_pt"));
HAnimSite759.X3DNode::setName(CString("r_ulnar_styloid_pt"));
HAnimSite759.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
Shape& Shape760 =  Shape();
Appearance& Appearance761 =  Appearance();
Material& Material762 =  Material();
Material762.setUSE(CString("SITE_COLOR"));
Appearance761.addChild(&Material762);

Shape760.addChild(&Appearance761);

IndexedFaceSet& IndexedFaceSet763 =  IndexedFaceSet();
IndexedFaceSet763.setCreaseAngle(0.5);
IndexedFaceSet763.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate764 =  Coordinate();
Coordinate764.setUSE(CString("points"));
IndexedFaceSet763.setCoord(&Coordinate764);

Shape760.setGeometry(&IndexedFaceSet763);

HAnimSite759.addChild(&Shape760);

HAnimSegment733.addChild(&HAnimSite759);

HAnimSite& HAnimSite765 =  HAnimSite();
HAnimSite765.setDEF(CString("hanim_r_metacarpal_pha5_pt"));
HAnimSite765.X3DNode::setName(CString("r_metacarpal_pha5_pt"));
HAnimSite765.setTranslation(new float[]{-0.1929,0.789,-0.1064});
Shape& Shape766 =  Shape();
Appearance& Appearance767 =  Appearance();
Material& Material768 =  Material();
Material768.setUSE(CString("SITE_COLOR"));
Appearance767.addChild(&Material768);

Shape766.addChild(&Appearance767);

IndexedFaceSet& IndexedFaceSet769 =  IndexedFaceSet();
IndexedFaceSet769.setCreaseAngle(0.5);
IndexedFaceSet769.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate770 =  Coordinate();
Coordinate770.setUSE(CString("points"));
IndexedFaceSet769.setCoord(&Coordinate770);

Shape766.setGeometry(&IndexedFaceSet769);

HAnimSite765.addChild(&Shape766);

HAnimSegment733.addChild(&HAnimSite765);

HAnimJoint732.addChildren(&HAnimSegment733);

HAnimJoint699.addChildren(&HAnimJoint732);

HAnimJoint684.addChildren(&HAnimJoint699);

HAnimJoint521.addChildren(&HAnimJoint684);

HAnimJoint& HAnimJoint771 =  HAnimJoint();
HAnimJoint771.setDEF(CString("hanim_vc7"));
HAnimJoint771.X3DNode::setName(CString("vc7"));
HAnimJoint771.setCenter(new float[]{0.0066,1.5132,-0.0301});
HAnimSegment& HAnimSegment772 =  HAnimSegment();
HAnimSegment772.setDEF(CString("hanim_c7"));
HAnimSegment772.X3DNode::setName(CString("c7"));
Transform& Transform773 =  Transform();
Transform773.setTranslation(new float[]{0.0066,1.5132,-0.0301});
Shape& Shape774 =  Shape();
Appearance& Appearance775 =  Appearance();
Material& Material776 =  Material();
Material776.setUSE(CString("SPINAL_COLOR"));
Appearance775.addChild(&Material776);

Shape774.addChild(&Appearance775);

IndexedFaceSet& IndexedFaceSet777 =  IndexedFaceSet();
IndexedFaceSet777.setCreaseAngle(0.5);
IndexedFaceSet777.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate778 =  Coordinate();
Coordinate778.setUSE(CString("points"));
IndexedFaceSet777.setCoord(&Coordinate778);

Shape774.setGeometry(&IndexedFaceSet777);

Transform773.addChild(&Shape774);

HAnimSegment772.addChild(&Transform773);

HAnimJoint771.addChildren(&HAnimSegment772);

HAnimJoint& HAnimJoint779 =  HAnimJoint();
HAnimJoint779.setDEF(CString("hanim_vc6"));
HAnimJoint779.X3DNode::setName(CString("vc6"));
HAnimJoint779.setCenter(new float[]{0.0066,1.5357,-0.0143});
HAnimSegment& HAnimSegment780 =  HAnimSegment();
HAnimSegment780.setDEF(CString("hanim_c6"));
HAnimSegment780.X3DNode::setName(CString("c6"));
Transform& Transform781 =  Transform();
Transform781.setTranslation(new float[]{0.0066,1.5357,-0.0143});
Shape& Shape782 =  Shape();
Appearance& Appearance783 =  Appearance();
Material& Material784 =  Material();
Material784.setUSE(CString("SPINAL_COLOR"));
Appearance783.addChild(&Material784);

Shape782.addChild(&Appearance783);

IndexedFaceSet& IndexedFaceSet785 =  IndexedFaceSet();
IndexedFaceSet785.setCreaseAngle(0.5);
IndexedFaceSet785.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate786 =  Coordinate();
Coordinate786.setUSE(CString("points"));
IndexedFaceSet785.setCoord(&Coordinate786);

Shape782.setGeometry(&IndexedFaceSet785);

Transform781.addChild(&Shape782);

HAnimSegment780.addChild(&Transform781);

HAnimJoint779.addChildren(&HAnimSegment780);

HAnimJoint& HAnimJoint787 =  HAnimJoint();
HAnimJoint787.setDEF(CString("hanim_vc5"));
HAnimJoint787.X3DNode::setName(CString("vc5"));
HAnimJoint787.setCenter(new float[]{0.0066,1.552,-0.0082});
HAnimSegment& HAnimSegment788 =  HAnimSegment();
HAnimSegment788.setDEF(CString("hanim_c5"));
HAnimSegment788.X3DNode::setName(CString("c5"));
Transform& Transform789 =  Transform();
Transform789.setTranslation(new float[]{0.0066,1.552,-0.0082});
Shape& Shape790 =  Shape();
Appearance& Appearance791 =  Appearance();
Material& Material792 =  Material();
Material792.setUSE(CString("SPINAL_COLOR"));
Appearance791.addChild(&Material792);

Shape790.addChild(&Appearance791);

IndexedFaceSet& IndexedFaceSet793 =  IndexedFaceSet();
IndexedFaceSet793.setCreaseAngle(0.5);
IndexedFaceSet793.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate794 =  Coordinate();
Coordinate794.setUSE(CString("points"));
IndexedFaceSet793.setCoord(&Coordinate794);

Shape790.setGeometry(&IndexedFaceSet793);

Transform789.addChild(&Shape790);

HAnimSegment788.addChild(&Transform789);

HAnimJoint787.addChildren(&HAnimSegment788);

HAnimJoint& HAnimJoint795 =  HAnimJoint();
HAnimJoint795.setDEF(CString("hanim_vc4"));
HAnimJoint795.X3DNode::setName(CString("vc4"));
HAnimJoint795.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimSegment& HAnimSegment796 =  HAnimSegment();
HAnimSegment796.setDEF(CString("hanim_c4"));
HAnimSegment796.X3DNode::setName(CString("c4"));
Transform& Transform797 =  Transform();
Transform797.setTranslation(new float[]{0.0066,1.5662,-0.0084});
Shape& Shape798 =  Shape();
Appearance& Appearance799 =  Appearance();
Material& Material800 =  Material();
Material800.setUSE(CString("SPINAL_COLOR"));
Appearance799.addChild(&Material800);

Shape798.addChild(&Appearance799);

IndexedFaceSet& IndexedFaceSet801 =  IndexedFaceSet();
IndexedFaceSet801.setCreaseAngle(0.5);
IndexedFaceSet801.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate802 =  Coordinate();
Coordinate802.setUSE(CString("points"));
IndexedFaceSet801.setCoord(&Coordinate802);

Shape798.setGeometry(&IndexedFaceSet801);

Transform797.addChild(&Shape798);

HAnimSegment796.addChild(&Transform797);

HAnimJoint795.addChildren(&HAnimSegment796);

HAnimJoint& HAnimJoint803 =  HAnimJoint();
HAnimJoint803.setDEF(CString("hanim_vc3"));
HAnimJoint803.X3DNode::setName(CString("vc3"));
HAnimJoint803.setCenter(new float[]{0.0066,1.58,-0.0103});
HAnimSegment& HAnimSegment804 =  HAnimSegment();
HAnimSegment804.setDEF(CString("hanim_c3"));
HAnimSegment804.X3DNode::setName(CString("c3"));
Transform& Transform805 =  Transform();
Transform805.setTranslation(new float[]{0.0066,1.58,-0.0103});
Shape& Shape806 =  Shape();
Appearance& Appearance807 =  Appearance();
Material& Material808 =  Material();
Material808.setUSE(CString("SPINAL_COLOR"));
Appearance807.addChild(&Material808);

Shape806.addChild(&Appearance807);

IndexedFaceSet& IndexedFaceSet809 =  IndexedFaceSet();
IndexedFaceSet809.setCreaseAngle(0.5);
IndexedFaceSet809.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate810 =  Coordinate();
Coordinate810.setUSE(CString("points"));
IndexedFaceSet809.setCoord(&Coordinate810);

Shape806.setGeometry(&IndexedFaceSet809);

Transform805.addChild(&Shape806);

HAnimSegment804.addChild(&Transform805);

HAnimJoint803.addChildren(&HAnimSegment804);

HAnimJoint& HAnimJoint811 =  HAnimJoint();
HAnimJoint811.setDEF(CString("hanim_vc2"));
HAnimJoint811.X3DNode::setName(CString("vc2"));
HAnimJoint811.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimSegment& HAnimSegment812 =  HAnimSegment();
HAnimSegment812.setDEF(CString("hanim_c2"));
HAnimSegment812.X3DNode::setName(CString("c2"));
Transform& Transform813 =  Transform();
Transform813.setTranslation(new float[]{0.0066,1.5928,-0.0103});
Shape& Shape814 =  Shape();
Appearance& Appearance815 =  Appearance();
Material& Material816 =  Material();
Material816.setUSE(CString("REC_SPINAL_COLOR"));
Appearance815.addChild(&Material816);

Shape814.addChild(&Appearance815);

IndexedFaceSet& IndexedFaceSet817 =  IndexedFaceSet();
IndexedFaceSet817.setCreaseAngle(0.5);
IndexedFaceSet817.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate818 =  Coordinate();
Coordinate818.setUSE(CString("points"));
IndexedFaceSet817.setCoord(&Coordinate818);

Shape814.setGeometry(&IndexedFaceSet817);

Transform813.addChild(&Shape814);

HAnimSegment812.addChild(&Transform813);

HAnimJoint811.addChildren(&HAnimSegment812);

HAnimJoint& HAnimJoint819 =  HAnimJoint();
HAnimJoint819.setDEF(CString("hanim_vc1"));
HAnimJoint819.X3DNode::setName(CString("vc1"));
HAnimJoint819.setCenter(new float[]{0.0066,1.6144,-0.0034});
HAnimSegment& HAnimSegment820 =  HAnimSegment();
HAnimSegment820.setDEF(CString("hanim_c1"));
HAnimSegment820.X3DNode::setName(CString("c1"));
Transform& Transform821 =  Transform();
Transform821.setTranslation(new float[]{0.0066,1.6144,-0.0034});
Shape& Shape822 =  Shape();
Appearance& Appearance823 =  Appearance();
Material& Material824 =  Material();
Material824.setUSE(CString("SPINAL_COLOR"));
Appearance823.addChild(&Material824);

Shape822.addChild(&Appearance823);

IndexedFaceSet& IndexedFaceSet825 =  IndexedFaceSet();
IndexedFaceSet825.setCreaseAngle(0.5);
IndexedFaceSet825.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate826 =  Coordinate();
Coordinate826.setUSE(CString("points"));
IndexedFaceSet825.setCoord(&Coordinate826);

Shape822.setGeometry(&IndexedFaceSet825);

Transform821.addChild(&Shape822);

HAnimSegment820.addChild(&Transform821);

HAnimJoint819.addChildren(&HAnimSegment820);

HAnimJoint& HAnimJoint827 =  HAnimJoint();
HAnimJoint827.setDEF(CString("hanim_skullbase"));
HAnimJoint827.X3DNode::setName(CString("skullbase"));
HAnimJoint827.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimSegment& HAnimSegment828 =  HAnimSegment();
HAnimSegment828.setDEF(CString("hanim_skull"));
HAnimSegment828.X3DNode::setName(CString("skull"));
Transform& Transform829 =  Transform();
Transform829.setTranslation(new float[]{0.0044,1.6209,0.0236});
Shape& Shape830 =  Shape();
Appearance& Appearance831 =  Appearance();
Material& Material832 =  Material();
Material832.setUSE(CString("MIN_COLOR"));
Appearance831.addChild(&Material832);

Shape830.addChild(&Appearance831);

IndexedFaceSet& IndexedFaceSet833 =  IndexedFaceSet();
IndexedFaceSet833.setCreaseAngle(0.5);
IndexedFaceSet833.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate834 =  Coordinate();
Coordinate834.setUSE(CString("points"));
IndexedFaceSet833.setCoord(&Coordinate834);

Shape830.setGeometry(&IndexedFaceSet833);

Transform829.addChild(&Shape830);

HAnimSegment828.addChild(&Transform829);

HAnimSite& HAnimSite835 =  HAnimSite();
HAnimSite835.setDEF(CString("hanim_skull_tip"));
HAnimSite835.X3DNode::setName(CString("skull_tip"));
HAnimSite835.setTranslation(new float[]{0.005,1.7504,0.0055});
Shape& Shape836 =  Shape();
Appearance& Appearance837 =  Appearance();
Material& Material838 =  Material();
Material838.setUSE(CString("SITE_COLOR"));
Appearance837.addChild(&Material838);

Shape836.addChild(&Appearance837);

IndexedFaceSet& IndexedFaceSet839 =  IndexedFaceSet();
IndexedFaceSet839.setCreaseAngle(0.5);
IndexedFaceSet839.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate840 =  Coordinate();
Coordinate840.setUSE(CString("points"));
IndexedFaceSet839.setCoord(&Coordinate840);

Shape836.setGeometry(&IndexedFaceSet839);

HAnimSite835.addChild(&Shape836);

HAnimSegment828.addChild(&HAnimSite835);

HAnimSite& HAnimSite841 =  HAnimSite();
HAnimSite841.setDEF(CString("hanim_sellion_pt"));
HAnimSite841.X3DNode::setName(CString("sellion_pt"));
HAnimSite841.setTranslation(new float[]{0.0058,1.6316,0.0852});
Shape& Shape842 =  Shape();
Appearance& Appearance843 =  Appearance();
Material& Material844 =  Material();
Material844.setUSE(CString("SITE_COLOR"));
Appearance843.addChild(&Material844);

Shape842.addChild(&Appearance843);

IndexedFaceSet& IndexedFaceSet845 =  IndexedFaceSet();
IndexedFaceSet845.setCreaseAngle(0.5);
IndexedFaceSet845.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate846 =  Coordinate();
Coordinate846.setUSE(CString("points"));
IndexedFaceSet845.setCoord(&Coordinate846);

Shape842.setGeometry(&IndexedFaceSet845);

HAnimSite841.addChild(&Shape842);

HAnimSegment828.addChild(&HAnimSite841);

HAnimSite& HAnimSite847 =  HAnimSite();
HAnimSite847.setDEF(CString("hanim_r_infraorbitale_pt"));
HAnimSite847.X3DNode::setName(CString("r_infraorbitale_pt"));
HAnimSite847.setTranslation(new float[]{-0.0237,1.6171,0.0752});
Shape& Shape848 =  Shape();
Appearance& Appearance849 =  Appearance();
Material& Material850 =  Material();
Material850.setUSE(CString("SITE_COLOR"));
Appearance849.addChild(&Material850);

Shape848.addChild(&Appearance849);

IndexedFaceSet& IndexedFaceSet851 =  IndexedFaceSet();
IndexedFaceSet851.setCreaseAngle(0.5);
IndexedFaceSet851.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate852 =  Coordinate();
Coordinate852.setUSE(CString("points"));
IndexedFaceSet851.setCoord(&Coordinate852);

Shape848.setGeometry(&IndexedFaceSet851);

HAnimSite847.addChild(&Shape848);

HAnimSegment828.addChild(&HAnimSite847);

HAnimSite& HAnimSite853 =  HAnimSite();
HAnimSite853.setDEF(CString("hanim_l_infraorbitale_pt"));
HAnimSite853.X3DNode::setName(CString("l_infraorbitale_pt"));
HAnimSite853.setTranslation(new float[]{0.0341,1.6171,0.0752});
Shape& Shape854 =  Shape();
Appearance& Appearance855 =  Appearance();
Material& Material856 =  Material();
Material856.setUSE(CString("SITE_COLOR"));
Appearance855.addChild(&Material856);

Shape854.addChild(&Appearance855);

IndexedFaceSet& IndexedFaceSet857 =  IndexedFaceSet();
IndexedFaceSet857.setCreaseAngle(0.5);
IndexedFaceSet857.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate858 =  Coordinate();
Coordinate858.setUSE(CString("points"));
IndexedFaceSet857.setCoord(&Coordinate858);

Shape854.setGeometry(&IndexedFaceSet857);

HAnimSite853.addChild(&Shape854);

HAnimSegment828.addChild(&HAnimSite853);

HAnimSite& HAnimSite859 =  HAnimSite();
HAnimSite859.setDEF(CString("hanim_supramenton_pt"));
HAnimSite859.X3DNode::setName(CString("supramenton_pt"));
HAnimSite859.setTranslation(new float[]{0.0061,1.541,0.0805});
Shape& Shape860 =  Shape();
Appearance& Appearance861 =  Appearance();
Material& Material862 =  Material();
Material862.setUSE(CString("SITE_COLOR"));
Appearance861.addChild(&Material862);

Shape860.addChild(&Appearance861);

IndexedFaceSet& IndexedFaceSet863 =  IndexedFaceSet();
IndexedFaceSet863.setCreaseAngle(0.5);
IndexedFaceSet863.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate864 =  Coordinate();
Coordinate864.setUSE(CString("points"));
IndexedFaceSet863.setCoord(&Coordinate864);

Shape860.setGeometry(&IndexedFaceSet863);

HAnimSite859.addChild(&Shape860);

HAnimSegment828.addChild(&HAnimSite859);

HAnimSite& HAnimSite865 =  HAnimSite();
HAnimSite865.setDEF(CString("hanim_r_tragion_pt"));
HAnimSite865.X3DNode::setName(CString("r_tragion_pt"));
HAnimSite865.setTranslation(new float[]{-0.0646,1.6347,0.0302});
Shape& Shape866 =  Shape();
Appearance& Appearance867 =  Appearance();
Material& Material868 =  Material();
Material868.setUSE(CString("SITE_COLOR"));
Appearance867.addChild(&Material868);

Shape866.addChild(&Appearance867);

IndexedFaceSet& IndexedFaceSet869 =  IndexedFaceSet();
IndexedFaceSet869.setCreaseAngle(0.5);
IndexedFaceSet869.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate870 =  Coordinate();
Coordinate870.setUSE(CString("points"));
IndexedFaceSet869.setCoord(&Coordinate870);

Shape866.setGeometry(&IndexedFaceSet869);

HAnimSite865.addChild(&Shape866);

HAnimSegment828.addChild(&HAnimSite865);

HAnimSite& HAnimSite871 =  HAnimSite();
HAnimSite871.setDEF(CString("hanim_r_gonion_pt"));
HAnimSite871.X3DNode::setName(CString("r_gonion_pt"));
HAnimSite871.setTranslation(new float[]{-0.052,1.5529,0.0347});
Shape& Shape872 =  Shape();
Appearance& Appearance873 =  Appearance();
Material& Material874 =  Material();
Material874.setUSE(CString("SITE_COLOR"));
Appearance873.addChild(&Material874);

Shape872.addChild(&Appearance873);

IndexedFaceSet& IndexedFaceSet875 =  IndexedFaceSet();
IndexedFaceSet875.setCreaseAngle(0.5);
IndexedFaceSet875.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate876 =  Coordinate();
Coordinate876.setUSE(CString("points"));
IndexedFaceSet875.setCoord(&Coordinate876);

Shape872.setGeometry(&IndexedFaceSet875);

HAnimSite871.addChild(&Shape872);

HAnimSegment828.addChild(&HAnimSite871);

HAnimSite& HAnimSite877 =  HAnimSite();
HAnimSite877.setDEF(CString("hanim_l_tragion_pt"));
HAnimSite877.X3DNode::setName(CString("l_tragion_pt"));
HAnimSite877.setTranslation(new float[]{0.0739,1.6348,0.0282});
Shape& Shape878 =  Shape();
Appearance& Appearance879 =  Appearance();
Material& Material880 =  Material();
Material880.setUSE(CString("SITE_COLOR"));
Appearance879.addChild(&Material880);

Shape878.addChild(&Appearance879);

IndexedFaceSet& IndexedFaceSet881 =  IndexedFaceSet();
IndexedFaceSet881.setCreaseAngle(0.5);
IndexedFaceSet881.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate882 =  Coordinate();
Coordinate882.setUSE(CString("points"));
IndexedFaceSet881.setCoord(&Coordinate882);

Shape878.setGeometry(&IndexedFaceSet881);

HAnimSite877.addChild(&Shape878);

HAnimSegment828.addChild(&HAnimSite877);

HAnimSite& HAnimSite883 =  HAnimSite();
HAnimSite883.setDEF(CString("hanim_l_gonion_pt"));
HAnimSite883.X3DNode::setName(CString("l_gonion_pt"));
HAnimSite883.setTranslation(new float[]{0.0631,1.553,0.033});
Shape& Shape884 =  Shape();
Appearance& Appearance885 =  Appearance();
Material& Material886 =  Material();
Material886.setUSE(CString("SITE_COLOR"));
Appearance885.addChild(&Material886);

Shape884.addChild(&Appearance885);

IndexedFaceSet& IndexedFaceSet887 =  IndexedFaceSet();
IndexedFaceSet887.setCreaseAngle(0.5);
IndexedFaceSet887.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate888 =  Coordinate();
Coordinate888.setUSE(CString("points"));
IndexedFaceSet887.setCoord(&Coordinate888);

Shape884.setGeometry(&IndexedFaceSet887);

HAnimSite883.addChild(&Shape884);

HAnimSegment828.addChild(&HAnimSite883);

HAnimSite& HAnimSite889 =  HAnimSite();
HAnimSite889.setDEF(CString("hanim_nuchale_pt"));
HAnimSite889.X3DNode::setName(CString("nuchale_pt"));
HAnimSite889.setTranslation(new float[]{0.0039,1.5972,-0.0796});
Shape& Shape890 =  Shape();
Appearance& Appearance891 =  Appearance();
Material& Material892 =  Material();
Material892.setUSE(CString("SITE_COLOR"));
Appearance891.addChild(&Material892);

Shape890.addChild(&Appearance891);

IndexedFaceSet& IndexedFaceSet893 =  IndexedFaceSet();
IndexedFaceSet893.setCreaseAngle(0.5);
IndexedFaceSet893.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate894 =  Coordinate();
Coordinate894.setUSE(CString("points"));
IndexedFaceSet893.setCoord(&Coordinate894);

Shape890.setGeometry(&IndexedFaceSet893);

HAnimSite889.addChild(&Shape890);

HAnimSegment828.addChild(&HAnimSite889);

HAnimJoint827.addChildren(&HAnimSegment828);

HAnimJoint819.addChildren(&HAnimJoint827);

HAnimJoint811.addChildren(&HAnimJoint819);

HAnimJoint803.addChildren(&HAnimJoint811);

HAnimJoint795.addChildren(&HAnimJoint803);

HAnimJoint787.addChildren(&HAnimJoint795);

HAnimJoint779.addChildren(&HAnimJoint787);

HAnimJoint771.addChildren(&HAnimJoint779);

HAnimJoint521.addChildren(&HAnimJoint771);

HAnimJoint513.addChildren(&HAnimJoint521);

HAnimJoint505.addChildren(&HAnimJoint513);

HAnimJoint497.addChildren(&HAnimJoint505);

HAnimJoint489.addChildren(&HAnimJoint497);

HAnimJoint481.addChildren(&HAnimJoint489);

HAnimJoint473.addChildren(&HAnimJoint481);

HAnimJoint465.addChildren(&HAnimJoint473);

HAnimJoint457.addChildren(&HAnimJoint465);

HAnimJoint449.addChildren(&HAnimJoint457);

HAnimJoint441.addChildren(&HAnimJoint449);

HAnimJoint433.addChildren(&HAnimJoint441);

HAnimJoint425.addChildren(&HAnimJoint433);

HAnimJoint417.addChildren(&HAnimJoint425);

HAnimJoint409.addChildren(&HAnimJoint417);

HAnimJoint401.addChildren(&HAnimJoint409);

HAnimJoint393.addChildren(&HAnimJoint401);

HAnimJoint98.addChildren(&HAnimJoint393);

HAnimHumanoid95.setSkeleton(&HAnimJoint98);

HAnimJoint& HAnimJoint895 =  HAnimJoint();
HAnimJoint895.setUSE(CString("hanim_HumanoidRoot"));
HAnimHumanoid95.setJoints(&HAnimJoint895);

HAnimJoint& HAnimJoint896 =  HAnimJoint();
HAnimJoint896.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid95.setJoints(&HAnimJoint896);

HAnimJoint& HAnimJoint897 =  HAnimJoint();
HAnimJoint897.setUSE(CString("hanim_vl1"));
HAnimHumanoid95.setJoints(&HAnimJoint897);

HAnimJoint& HAnimJoint898 =  HAnimJoint();
HAnimJoint898.setUSE(CString("hanim_vc4"));
HAnimHumanoid95.setJoints(&HAnimJoint898);

HAnimJoint& HAnimJoint899 =  HAnimJoint();
HAnimJoint899.setUSE(CString("hanim_skullbase"));
HAnimHumanoid95.setJoints(&HAnimJoint899);

HAnimJoint& HAnimJoint900 =  HAnimJoint();
HAnimJoint900.setUSE(CString("hanim_vl5"));
HAnimHumanoid95.setJoints(&HAnimJoint900);

HAnimJoint& HAnimJoint901 =  HAnimJoint();
HAnimJoint901.setUSE(CString("hanim_vl4"));
HAnimHumanoid95.setJoints(&HAnimJoint901);

HAnimJoint& HAnimJoint902 =  HAnimJoint();
HAnimJoint902.setUSE(CString("hanim_vl3"));
HAnimHumanoid95.setJoints(&HAnimJoint902);

HAnimJoint& HAnimJoint903 =  HAnimJoint();
HAnimJoint903.setUSE(CString("hanim_vl2"));
HAnimHumanoid95.setJoints(&HAnimJoint903);

HAnimJoint& HAnimJoint904 =  HAnimJoint();
HAnimJoint904.setUSE(CString("hanim_vt12"));
HAnimHumanoid95.setJoints(&HAnimJoint904);

HAnimJoint& HAnimJoint905 =  HAnimJoint();
HAnimJoint905.setUSE(CString("hanim_vt11"));
HAnimHumanoid95.setJoints(&HAnimJoint905);

HAnimJoint& HAnimJoint906 =  HAnimJoint();
HAnimJoint906.setUSE(CString("hanim_vt10"));
HAnimHumanoid95.setJoints(&HAnimJoint906);

HAnimJoint& HAnimJoint907 =  HAnimJoint();
HAnimJoint907.setUSE(CString("hanim_vt9"));
HAnimHumanoid95.setJoints(&HAnimJoint907);

HAnimJoint& HAnimJoint908 =  HAnimJoint();
HAnimJoint908.setUSE(CString("hanim_vt8"));
HAnimHumanoid95.setJoints(&HAnimJoint908);

HAnimJoint& HAnimJoint909 =  HAnimJoint();
HAnimJoint909.setUSE(CString("hanim_vt7"));
HAnimHumanoid95.setJoints(&HAnimJoint909);

HAnimJoint& HAnimJoint910 =  HAnimJoint();
HAnimJoint910.setUSE(CString("hanim_vt6"));
HAnimHumanoid95.setJoints(&HAnimJoint910);

HAnimJoint& HAnimJoint911 =  HAnimJoint();
HAnimJoint911.setUSE(CString("hanim_vt5"));
HAnimHumanoid95.setJoints(&HAnimJoint911);

HAnimJoint& HAnimJoint912 =  HAnimJoint();
HAnimJoint912.setUSE(CString("hanim_vt4"));
HAnimHumanoid95.setJoints(&HAnimJoint912);

HAnimJoint& HAnimJoint913 =  HAnimJoint();
HAnimJoint913.setUSE(CString("hanim_vt3"));
HAnimHumanoid95.setJoints(&HAnimJoint913);

HAnimJoint& HAnimJoint914 =  HAnimJoint();
HAnimJoint914.setUSE(CString("hanim_vt2"));
HAnimHumanoid95.setJoints(&HAnimJoint914);

HAnimJoint& HAnimJoint915 =  HAnimJoint();
HAnimJoint915.setUSE(CString("hanim_vt1"));
HAnimHumanoid95.setJoints(&HAnimJoint915);

HAnimJoint& HAnimJoint916 =  HAnimJoint();
HAnimJoint916.setUSE(CString("hanim_vc7"));
HAnimHumanoid95.setJoints(&HAnimJoint916);

HAnimJoint& HAnimJoint917 =  HAnimJoint();
HAnimJoint917.setUSE(CString("hanim_vc6"));
HAnimHumanoid95.setJoints(&HAnimJoint917);

HAnimJoint& HAnimJoint918 =  HAnimJoint();
HAnimJoint918.setUSE(CString("hanim_vc5"));
HAnimHumanoid95.setJoints(&HAnimJoint918);

HAnimJoint& HAnimJoint919 =  HAnimJoint();
HAnimJoint919.setUSE(CString("hanim_vc3"));
HAnimHumanoid95.setJoints(&HAnimJoint919);

HAnimJoint& HAnimJoint920 =  HAnimJoint();
HAnimJoint920.setUSE(CString("hanim_vc2"));
HAnimHumanoid95.setJoints(&HAnimJoint920);

HAnimJoint& HAnimJoint921 =  HAnimJoint();
HAnimJoint921.setUSE(CString("hanim_vc1"));
HAnimHumanoid95.setJoints(&HAnimJoint921);

HAnimJoint& HAnimJoint922 =  HAnimJoint();
HAnimJoint922.setUSE(CString("hanim_l_ankle"));
HAnimHumanoid95.setJoints(&HAnimJoint922);

HAnimJoint& HAnimJoint923 =  HAnimJoint();
HAnimJoint923.setUSE(CString("hanim_r_ankle"));
HAnimHumanoid95.setJoints(&HAnimJoint923);

HAnimJoint& HAnimJoint924 =  HAnimJoint();
HAnimJoint924.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid95.setJoints(&HAnimJoint924);

HAnimJoint& HAnimJoint925 =  HAnimJoint();
HAnimJoint925.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid95.setJoints(&HAnimJoint925);

HAnimJoint& HAnimJoint926 =  HAnimJoint();
HAnimJoint926.setUSE(CString("hanim_l_hip"));
HAnimHumanoid95.setJoints(&HAnimJoint926);

HAnimJoint& HAnimJoint927 =  HAnimJoint();
HAnimJoint927.setUSE(CString("hanim_r_hip"));
HAnimHumanoid95.setJoints(&HAnimJoint927);

HAnimJoint& HAnimJoint928 =  HAnimJoint();
HAnimJoint928.setUSE(CString("hanim_l_index0"));
HAnimHumanoid95.setJoints(&HAnimJoint928);

HAnimJoint& HAnimJoint929 =  HAnimJoint();
HAnimJoint929.setUSE(CString("hanim_l_index1"));
HAnimHumanoid95.setJoints(&HAnimJoint929);

HAnimJoint& HAnimJoint930 =  HAnimJoint();
HAnimJoint930.setUSE(CString("hanim_l_index2"));
HAnimHumanoid95.setJoints(&HAnimJoint930);

HAnimJoint& HAnimJoint931 =  HAnimJoint();
HAnimJoint931.setUSE(CString("hanim_l_index3"));
HAnimHumanoid95.setJoints(&HAnimJoint931);

HAnimJoint& HAnimJoint932 =  HAnimJoint();
HAnimJoint932.setUSE(CString("hanim_l_knee"));
HAnimHumanoid95.setJoints(&HAnimJoint932);

HAnimJoint& HAnimJoint933 =  HAnimJoint();
HAnimJoint933.setUSE(CString("hanim_r_knee"));
HAnimHumanoid95.setJoints(&HAnimJoint933);

HAnimJoint& HAnimJoint934 =  HAnimJoint();
HAnimJoint934.setUSE(CString("hanim_l_metatarsal"));
HAnimHumanoid95.setJoints(&HAnimJoint934);

HAnimJoint& HAnimJoint935 =  HAnimJoint();
HAnimJoint935.setUSE(CString("hanim_l_midtarsal"));
HAnimHumanoid95.setJoints(&HAnimJoint935);

HAnimJoint& HAnimJoint936 =  HAnimJoint();
HAnimJoint936.setUSE(CString("hanim_r_midtarsal"));
HAnimHumanoid95.setJoints(&HAnimJoint936);

HAnimJoint& HAnimJoint937 =  HAnimJoint();
HAnimJoint937.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid95.setJoints(&HAnimJoint937);

HAnimJoint& HAnimJoint938 =  HAnimJoint();
HAnimJoint938.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid95.setJoints(&HAnimJoint938);

HAnimJoint& HAnimJoint939 =  HAnimJoint();
HAnimJoint939.setUSE(CString("hanim_l_subtalar"));
HAnimHumanoid95.setJoints(&HAnimJoint939);

HAnimJoint& HAnimJoint940 =  HAnimJoint();
HAnimJoint940.setUSE(CString("hanim_l_thumb1"));
HAnimHumanoid95.setJoints(&HAnimJoint940);

HAnimJoint& HAnimJoint941 =  HAnimJoint();
HAnimJoint941.setUSE(CString("hanim_l_thumb2"));
HAnimHumanoid95.setJoints(&HAnimJoint941);

HAnimJoint& HAnimJoint942 =  HAnimJoint();
HAnimJoint942.setUSE(CString("hanim_l_thumb3"));
HAnimHumanoid95.setJoints(&HAnimJoint942);

HAnimJoint& HAnimJoint943 =  HAnimJoint();
HAnimJoint943.setUSE(CString("hanim_l_wrist"));
HAnimHumanoid95.setJoints(&HAnimJoint943);

HAnimJoint& HAnimJoint944 =  HAnimJoint();
HAnimJoint944.setUSE(CString("hanim_r_wrist"));
HAnimHumanoid95.setJoints(&HAnimJoint944);

HAnimSegment& HAnimSegment945 =  HAnimSegment();
HAnimSegment945.setUSE(CString("hanim_pelvis"));
HAnimHumanoid95.setSegments(&HAnimSegment945);

HAnimSegment& HAnimSegment946 =  HAnimSegment();
HAnimSegment946.setUSE(CString("hanim_c7"));
HAnimHumanoid95.setSegments(&HAnimSegment946);

HAnimSegment& HAnimSegment947 =  HAnimSegment();
HAnimSegment947.setUSE(CString("hanim_c4"));
HAnimHumanoid95.setSegments(&HAnimSegment947);

HAnimSegment& HAnimSegment948 =  HAnimSegment();
HAnimSegment948.setUSE(CString("hanim_skull"));
HAnimHumanoid95.setSegments(&HAnimSegment948);

HAnimSegment& HAnimSegment949 =  HAnimSegment();
HAnimSegment949.setUSE(CString("hanim_sacrum"));
HAnimHumanoid95.setSegments(&HAnimSegment949);

HAnimSegment& HAnimSegment950 =  HAnimSegment();
HAnimSegment950.setUSE(CString("hanim_midproximal"));
HAnimHumanoid95.setSegments(&HAnimSegment950);

HAnimSegment& HAnimSegment951 =  HAnimSegment();
HAnimSegment951.setUSE(CString("hanim_l5"));
HAnimHumanoid95.setSegments(&HAnimSegment951);

HAnimSegment& HAnimSegment952 =  HAnimSegment();
HAnimSegment952.setUSE(CString("hanim_l4"));
HAnimHumanoid95.setSegments(&HAnimSegment952);

HAnimSegment& HAnimSegment953 =  HAnimSegment();
HAnimSegment953.setUSE(CString("hanim_l3"));
HAnimHumanoid95.setSegments(&HAnimSegment953);

HAnimSegment& HAnimSegment954 =  HAnimSegment();
HAnimSegment954.setUSE(CString("hanim_l2"));
HAnimHumanoid95.setSegments(&HAnimSegment954);

HAnimSegment& HAnimSegment955 =  HAnimSegment();
HAnimSegment955.setUSE(CString("hanim_l1"));
HAnimHumanoid95.setSegments(&HAnimSegment955);

HAnimSegment& HAnimSegment956 =  HAnimSegment();
HAnimSegment956.setUSE(CString("hanim_t12"));
HAnimHumanoid95.setSegments(&HAnimSegment956);

HAnimSegment& HAnimSegment957 =  HAnimSegment();
HAnimSegment957.setUSE(CString("hanim_t11"));
HAnimHumanoid95.setSegments(&HAnimSegment957);

HAnimSegment& HAnimSegment958 =  HAnimSegment();
HAnimSegment958.setUSE(CString("hanim_t10"));
HAnimHumanoid95.setSegments(&HAnimSegment958);

HAnimSegment& HAnimSegment959 =  HAnimSegment();
HAnimSegment959.setUSE(CString("hanim_t9"));
HAnimHumanoid95.setSegments(&HAnimSegment959);

HAnimSegment& HAnimSegment960 =  HAnimSegment();
HAnimSegment960.setUSE(CString("hanim_t8"));
HAnimHumanoid95.setSegments(&HAnimSegment960);

HAnimSegment& HAnimSegment961 =  HAnimSegment();
HAnimSegment961.setUSE(CString("hanim_t7"));
HAnimHumanoid95.setSegments(&HAnimSegment961);

HAnimSegment& HAnimSegment962 =  HAnimSegment();
HAnimSegment962.setUSE(CString("hanim_t6"));
HAnimHumanoid95.setSegments(&HAnimSegment962);

HAnimSegment& HAnimSegment963 =  HAnimSegment();
HAnimSegment963.setUSE(CString("hanim_t5"));
HAnimHumanoid95.setSegments(&HAnimSegment963);

HAnimSegment& HAnimSegment964 =  HAnimSegment();
HAnimSegment964.setUSE(CString("hanim_t4"));
HAnimHumanoid95.setSegments(&HAnimSegment964);

HAnimSegment& HAnimSegment965 =  HAnimSegment();
HAnimSegment965.setUSE(CString("hanim_t3"));
HAnimHumanoid95.setSegments(&HAnimSegment965);

HAnimSegment& HAnimSegment966 =  HAnimSegment();
HAnimSegment966.setUSE(CString("hanim_t2"));
HAnimHumanoid95.setSegments(&HAnimSegment966);

HAnimSegment& HAnimSegment967 =  HAnimSegment();
HAnimSegment967.setUSE(CString("hanim_t1"));
HAnimHumanoid95.setSegments(&HAnimSegment967);

HAnimSegment& HAnimSegment968 =  HAnimSegment();
HAnimSegment968.setUSE(CString("hanim_c6"));
HAnimHumanoid95.setSegments(&HAnimSegment968);

HAnimSegment& HAnimSegment969 =  HAnimSegment();
HAnimSegment969.setUSE(CString("hanim_c5"));
HAnimHumanoid95.setSegments(&HAnimSegment969);

HAnimSegment& HAnimSegment970 =  HAnimSegment();
HAnimSegment970.setUSE(CString("hanim_c3"));
HAnimHumanoid95.setSegments(&HAnimSegment970);

HAnimSegment& HAnimSegment971 =  HAnimSegment();
HAnimSegment971.setUSE(CString("hanim_c2"));
HAnimHumanoid95.setSegments(&HAnimSegment971);

HAnimSegment& HAnimSegment972 =  HAnimSegment();
HAnimSegment972.setUSE(CString("hanim_c1"));
HAnimHumanoid95.setSegments(&HAnimSegment972);

HAnimSegment& HAnimSegment973 =  HAnimSegment();
HAnimSegment973.setUSE(CString("hanim_l_calf"));
HAnimHumanoid95.setSegments(&HAnimSegment973);

HAnimSegment& HAnimSegment974 =  HAnimSegment();
HAnimSegment974.setUSE(CString("hanim_r_calf"));
HAnimHumanoid95.setSegments(&HAnimSegment974);

HAnimSegment& HAnimSegment975 =  HAnimSegment();
HAnimSegment975.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid95.setSegments(&HAnimSegment975);

HAnimSegment& HAnimSegment976 =  HAnimSegment();
HAnimSegment976.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid95.setSegments(&HAnimSegment976);

HAnimSegment& HAnimSegment977 =  HAnimSegment();
HAnimSegment977.setUSE(CString("hanim_l_forefoot"));
HAnimHumanoid95.setSegments(&HAnimSegment977);

HAnimSegment& HAnimSegment978 =  HAnimSegment();
HAnimSegment978.setUSE(CString("hanim_l_hand"));
HAnimHumanoid95.setSegments(&HAnimSegment978);

HAnimSegment& HAnimSegment979 =  HAnimSegment();
HAnimSegment979.setUSE(CString("hanim_r_hand"));
HAnimHumanoid95.setSegments(&HAnimSegment979);

HAnimSegment& HAnimSegment980 =  HAnimSegment();
HAnimSegment980.setUSE(CString("hanim_l_hindfoot"));
HAnimHumanoid95.setSegments(&HAnimSegment980);

HAnimSegment& HAnimSegment981 =  HAnimSegment();
HAnimSegment981.setUSE(CString("hanim_r_hindfoot"));
HAnimHumanoid95.setSegments(&HAnimSegment981);

HAnimSegment& HAnimSegment982 =  HAnimSegment();
HAnimSegment982.setUSE(CString("hanim_l_index_distal"));
HAnimHumanoid95.setSegments(&HAnimSegment982);

HAnimSegment& HAnimSegment983 =  HAnimSegment();
HAnimSegment983.setUSE(CString("hanim_l_index_metacarpal"));
HAnimHumanoid95.setSegments(&HAnimSegment983);

HAnimSegment& HAnimSegment984 =  HAnimSegment();
HAnimSegment984.setUSE(CString("hanim_l_index_middle"));
HAnimHumanoid95.setSegments(&HAnimSegment984);

HAnimSegment& HAnimSegment985 =  HAnimSegment();
HAnimSegment985.setUSE(CString("hanim_l_index_proximal"));
HAnimHumanoid95.setSegments(&HAnimSegment985);

HAnimSegment& HAnimSegment986 =  HAnimSegment();
HAnimSegment986.setUSE(CString("hanim_l_middistal"));
HAnimHumanoid95.setSegments(&HAnimSegment986);

HAnimSegment& HAnimSegment987 =  HAnimSegment();
HAnimSegment987.setUSE(CString("hanim_r_middistal"));
HAnimHumanoid95.setSegments(&HAnimSegment987);

HAnimSegment& HAnimSegment988 =  HAnimSegment();
HAnimSegment988.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid95.setSegments(&HAnimSegment988);

HAnimSegment& HAnimSegment989 =  HAnimSegment();
HAnimSegment989.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid95.setSegments(&HAnimSegment989);

HAnimSegment& HAnimSegment990 =  HAnimSegment();
HAnimSegment990.setUSE(CString("hanim_l_thumb_distal"));
HAnimHumanoid95.setSegments(&HAnimSegment990);

HAnimSegment& HAnimSegment991 =  HAnimSegment();
HAnimSegment991.setUSE(CString("hanim_l_thumb_metacarpal"));
HAnimHumanoid95.setSegments(&HAnimSegment991);

HAnimSegment& HAnimSegment992 =  HAnimSegment();
HAnimSegment992.setUSE(CString("hanim_l_thumb_proximal"));
HAnimHumanoid95.setSegments(&HAnimSegment992);

HAnimSegment& HAnimSegment993 =  HAnimSegment();
HAnimSegment993.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid95.setSegments(&HAnimSegment993);

HAnimSegment& HAnimSegment994 =  HAnimSegment();
HAnimSegment994.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid95.setSegments(&HAnimSegment994);

HAnimSite& HAnimSite995 =  HAnimSite();
HAnimSite995.setUSE(CString("hanim_crotch_pt"));
HAnimHumanoid95.setSites(&HAnimSite995);

HAnimSite& HAnimSite996 =  HAnimSite();
HAnimSite996.setUSE(CString("hanim_skull_tip"));
HAnimHumanoid95.setSites(&HAnimSite996);

HAnimSite& HAnimSite997 =  HAnimSite();
HAnimSite997.setUSE(CString("hanim_sellion_pt"));
HAnimHumanoid95.setSites(&HAnimSite997);

HAnimSite& HAnimSite998 =  HAnimSite();
HAnimSite998.setUSE(CString("hanim_supramenton_pt"));
HAnimHumanoid95.setSites(&HAnimSite998);

HAnimSite& HAnimSite999 =  HAnimSite();
HAnimSite999.setUSE(CString("hanim_nuchale_pt"));
HAnimHumanoid95.setSites(&HAnimSite999);

HAnimSite& HAnimSite1000 =  HAnimSite();
HAnimSite1000.setUSE(CString("hanim_r_asis_pt"));
HAnimHumanoid95.setSites(&HAnimSite1000);

HAnimSite& HAnimSite1001 =  HAnimSite();
HAnimSite1001.setUSE(CString("hanim_l_asis_pt"));
HAnimHumanoid95.setSites(&HAnimSite1001);

HAnimSite& HAnimSite1002 =  HAnimSite();
HAnimSite1002.setUSE(CString("hanim_l_calcaneous_post_pt"));
HAnimHumanoid95.setSites(&HAnimSite1002);

HAnimSite& HAnimSite1003 =  HAnimSite();
HAnimSite1003.setUSE(CString("hanim_r_calcaneous_post_pt"));
HAnimHumanoid95.setSites(&HAnimSite1003);

HAnimSite& HAnimSite1004 =  HAnimSite();
HAnimSite1004.setUSE(CString("hanim_l_dactylion_pt"));
HAnimHumanoid95.setSites(&HAnimSite1004);

HAnimSite& HAnimSite1005 =  HAnimSite();
HAnimSite1005.setUSE(CString("hanim_r_dactylion_pt"));
HAnimHumanoid95.setSites(&HAnimSite1005);

HAnimSite& HAnimSite1006 =  HAnimSite();
HAnimSite1006.setUSE(CString("hanim_l_digit2_pt"));
HAnimHumanoid95.setSites(&HAnimSite1006);

HAnimSite& HAnimSite1007 =  HAnimSite();
HAnimSite1007.setUSE(CString("hanim_r_digit2_pt"));
HAnimHumanoid95.setSites(&HAnimSite1007);

HAnimSite& HAnimSite1008 =  HAnimSite();
HAnimSite1008.setUSE(CString("hanim_l_femoral_lateral_epicn_pt"));
HAnimHumanoid95.setSites(&HAnimSite1008);

HAnimSite& HAnimSite1009 =  HAnimSite();
HAnimSite1009.setUSE(CString("hanim_r_femoral_lateral_epicn_pt"));
HAnimHumanoid95.setSites(&HAnimSite1009);

HAnimSite& HAnimSite1010 =  HAnimSite();
HAnimSite1010.setUSE(CString("hanim_l_femoral_medial_epicn_pt"));
HAnimHumanoid95.setSites(&HAnimSite1010);

HAnimSite& HAnimSite1011 =  HAnimSite();
HAnimSite1011.setUSE(CString("hanim_r_femoral_medial_epicn_pt"));
HAnimHumanoid95.setSites(&HAnimSite1011);

HAnimSite& HAnimSite1012 =  HAnimSite();
HAnimSite1012.setUSE(CString("hanim_l_forefoot_tip"));
HAnimHumanoid95.setSites(&HAnimSite1012);

HAnimSite& HAnimSite1013 =  HAnimSite();
HAnimSite1013.setUSE(CString("hanim_r_gonion_pt"));
HAnimHumanoid95.setSites(&HAnimSite1013);

HAnimSite& HAnimSite1014 =  HAnimSite();
HAnimSite1014.setUSE(CString("hanim_l_gonion_pt"));
HAnimHumanoid95.setSites(&HAnimSite1014);

HAnimSite& HAnimSite1015 =  HAnimSite();
HAnimSite1015.setUSE(CString("hanim_l_hand_tip"));
HAnimHumanoid95.setSites(&HAnimSite1015);

HAnimSite& HAnimSite1016 =  HAnimSite();
HAnimSite1016.setUSE(CString("hanim_r_hand_tip"));
HAnimHumanoid95.setSites(&HAnimSite1016);

HAnimSite& HAnimSite1017 =  HAnimSite();
HAnimSite1017.setUSE(CString("hanim_l_humeral_lateral_epicn_pt"));
HAnimHumanoid95.setSites(&HAnimSite1017);

HAnimSite& HAnimSite1018 =  HAnimSite();
HAnimSite1018.setUSE(CString("hanim_r_humeral_lateral_epicn_pt"));
HAnimHumanoid95.setSites(&HAnimSite1018);

HAnimSite& HAnimSite1019 =  HAnimSite();
HAnimSite1019.setUSE(CString("hanim_l_humeral_medial_epicn_pt"));
HAnimHumanoid95.setSites(&HAnimSite1019);

HAnimSite& HAnimSite1020 =  HAnimSite();
HAnimSite1020.setUSE(CString("hanim_r_humeral_medial_epicn_pt"));
HAnimHumanoid95.setSites(&HAnimSite1020);

HAnimSite& HAnimSite1021 =  HAnimSite();
HAnimSite1021.setUSE(CString("hanim_r_iliocristale_pt"));
HAnimHumanoid95.setSites(&HAnimSite1021);

HAnimSite& HAnimSite1022 =  HAnimSite();
HAnimSite1022.setUSE(CString("hanim_l_iliocristale_pt"));
HAnimHumanoid95.setSites(&HAnimSite1022);

HAnimSite& HAnimSite1023 =  HAnimSite();
HAnimSite1023.setUSE(CString("hanim_l_index_distal_tip"));
HAnimHumanoid95.setSites(&HAnimSite1023);

HAnimSite& HAnimSite1024 =  HAnimSite();
HAnimSite1024.setUSE(CString("hanim_r_infraorbitale_pt"));
HAnimHumanoid95.setSites(&HAnimSite1024);

HAnimSite& HAnimSite1025 =  HAnimSite();
HAnimSite1025.setUSE(CString("hanim_l_infraorbitale_pt"));
HAnimHumanoid95.setSites(&HAnimSite1025);

HAnimSite& HAnimSite1026 =  HAnimSite();
HAnimSite1026.setUSE(CString("hanim_l_knee_crease_pt"));
HAnimHumanoid95.setSites(&HAnimSite1026);

HAnimSite& HAnimSite1027 =  HAnimSite();
HAnimSite1027.setUSE(CString("hanim_r_knee_crease_pt"));
HAnimHumanoid95.setSites(&HAnimSite1027);

HAnimSite& HAnimSite1028 =  HAnimSite();
HAnimSite1028.setUSE(CString("hanim_l_lateral_malleolus_pt"));
HAnimHumanoid95.setSites(&HAnimSite1028);

HAnimSite& HAnimSite1029 =  HAnimSite();
HAnimSite1029.setUSE(CString("hanim_r_lateral_malleolus_pt"));
HAnimHumanoid95.setSites(&HAnimSite1029);

HAnimSite& HAnimSite1030 =  HAnimSite();
HAnimSite1030.setUSE(CString("hanim_l_medial_malleolus_pt"));
HAnimHumanoid95.setSites(&HAnimSite1030);

HAnimSite& HAnimSite1031 =  HAnimSite();
HAnimSite1031.setUSE(CString("hanim_r_medial_malleolus_pt"));
HAnimHumanoid95.setSites(&HAnimSite1031);

HAnimSite& HAnimSite1032 =  HAnimSite();
HAnimSite1032.setUSE(CString("hanim_l_metacarpal_pha2_pt"));
HAnimHumanoid95.setSites(&HAnimSite1032);

HAnimSite& HAnimSite1033 =  HAnimSite();
HAnimSite1033.setUSE(CString("hanim_r_metacarpal_pha2_pt"));
HAnimHumanoid95.setSites(&HAnimSite1033);

HAnimSite& HAnimSite1034 =  HAnimSite();
HAnimSite1034.setUSE(CString("hanim_l_metacarpal_pha5_pt"));
HAnimHumanoid95.setSites(&HAnimSite1034);

HAnimSite& HAnimSite1035 =  HAnimSite();
HAnimSite1035.setUSE(CString("hanim_r_metacarpal_pha5_pt"));
HAnimHumanoid95.setSites(&HAnimSite1035);

HAnimSite& HAnimSite1036 =  HAnimSite();
HAnimSite1036.setUSE(CString("hanim_l_metatarsal_pha1_pt"));
HAnimHumanoid95.setSites(&HAnimSite1036);

HAnimSite& HAnimSite1037 =  HAnimSite();
HAnimSite1037.setUSE(CString("hanim_r_metatarsal_pha1_pt"));
HAnimHumanoid95.setSites(&HAnimSite1037);

HAnimSite& HAnimSite1038 =  HAnimSite();
HAnimSite1038.setUSE(CString("hanim_l_metatarsal_pha5_pt"));
HAnimHumanoid95.setSites(&HAnimSite1038);

HAnimSite& HAnimSite1039 =  HAnimSite();
HAnimSite1039.setUSE(CString("hanim_r_metatarsal_pha5_pt"));
HAnimHumanoid95.setSites(&HAnimSite1039);

HAnimSite& HAnimSite1040 =  HAnimSite();
HAnimSite1040.setUSE(CString("hanim_l_middistal_tip"));
HAnimHumanoid95.setSites(&HAnimSite1040);

HAnimSite& HAnimSite1041 =  HAnimSite();
HAnimSite1041.setUSE(CString("hanim_r_middistal_tip"));
HAnimHumanoid95.setSites(&HAnimSite1041);

HAnimSite& HAnimSite1042 =  HAnimSite();
HAnimSite1042.setUSE(CString("hanim_l_olecranon_pt"));
HAnimHumanoid95.setSites(&HAnimSite1042);

HAnimSite& HAnimSite1043 =  HAnimSite();
HAnimSite1043.setUSE(CString("hanim_r_olecranon_pt"));
HAnimHumanoid95.setSites(&HAnimSite1043);

HAnimSite& HAnimSite1044 =  HAnimSite();
HAnimSite1044.setUSE(CString("hanim_r_psis_pt"));
HAnimHumanoid95.setSites(&HAnimSite1044);

HAnimSite& HAnimSite1045 =  HAnimSite();
HAnimSite1045.setUSE(CString("hanim_l_psis_pt"));
HAnimHumanoid95.setSites(&HAnimSite1045);

HAnimSite& HAnimSite1046 =  HAnimSite();
HAnimSite1046.setUSE(CString("hanim_l_radial_styloid_pt"));
HAnimHumanoid95.setSites(&HAnimSite1046);

HAnimSite& HAnimSite1047 =  HAnimSite();
HAnimSite1047.setUSE(CString("hanim_r_radial_styloid_pt"));
HAnimHumanoid95.setSites(&HAnimSite1047);

HAnimSite& HAnimSite1048 =  HAnimSite();
HAnimSite1048.setUSE(CString("hanim_l_radiale_pt"));
HAnimHumanoid95.setSites(&HAnimSite1048);

HAnimSite& HAnimSite1049 =  HAnimSite();
HAnimSite1049.setUSE(CString("hanim_r_radiale_pt"));
HAnimHumanoid95.setSites(&HAnimSite1049);

HAnimSite& HAnimSite1050 =  HAnimSite();
HAnimSite1050.setUSE(CString("hanim_l_sphyrion_pt"));
HAnimHumanoid95.setSites(&HAnimSite1050);

HAnimSite& HAnimSite1051 =  HAnimSite();
HAnimSite1051.setUSE(CString("hanim_r_sphyrion_pt"));
HAnimHumanoid95.setSites(&HAnimSite1051);

HAnimSite& HAnimSite1052 =  HAnimSite();
HAnimSite1052.setUSE(CString("hanim_l_thumb_distal_tip"));
HAnimHumanoid95.setSites(&HAnimSite1052);

HAnimSite& HAnimSite1053 =  HAnimSite();
HAnimSite1053.setUSE(CString("hanim_r_tragion_pt"));
HAnimHumanoid95.setSites(&HAnimSite1053);

HAnimSite& HAnimSite1054 =  HAnimSite();
HAnimSite1054.setUSE(CString("hanim_l_tragion_pt"));
HAnimHumanoid95.setSites(&HAnimSite1054);

HAnimSite& HAnimSite1055 =  HAnimSite();
HAnimSite1055.setUSE(CString("hanim_r_trochanterion_pt"));
HAnimHumanoid95.setSites(&HAnimSite1055);

HAnimSite& HAnimSite1056 =  HAnimSite();
HAnimSite1056.setUSE(CString("hanim_l_trochanterion_pt"));
HAnimHumanoid95.setSites(&HAnimSite1056);

HAnimSite& HAnimSite1057 =  HAnimSite();
HAnimSite1057.setUSE(CString("hanim_l_ulnar_styloid_pt"));
HAnimHumanoid95.setSites(&HAnimSite1057);

HAnimSite& HAnimSite1058 =  HAnimSite();
HAnimSite1058.setUSE(CString("hanim_r_ulnar_styloid_pt"));
HAnimHumanoid95.setSites(&HAnimSite1058);

HAnimSite& HAnimSite1059 =  HAnimSite();
HAnimSite1059.setDEF(CString("hanim_DiamondManLOA_2_view"));
HAnimSite1059.X3DNode::setName(CString("DiamondManLOA_2_view"));
Viewpoint& Viewpoint1060 =  Viewpoint();
Viewpoint1060.setDEF(CString("FrontView"));
Viewpoint1060.setDescription(CString("Front View"));
Viewpoint1060.setPosition(new float[]{0.35,0.854,2.57665});
HAnimSite1059.addChild(&Viewpoint1060);

Viewpoint& Viewpoint1061 =  Viewpoint();
Viewpoint1061.setDEF(CString("SideView"));
Viewpoint1061.setDescription(CString("Side View"));
Viewpoint1061.setPosition(new float[]{2,0.854,0});
Viewpoint1061.setOrientation(new float[]{0,1,0,1.57079});
HAnimSite1059.addChild(&Viewpoint1061);

Viewpoint& Viewpoint1062 =  Viewpoint();
Viewpoint1062.setDEF(CString("TopView"));
Viewpoint1062.setDescription(CString("Top View"));
Viewpoint1062.setPosition(new float[]{0,3.4495,0});
Viewpoint1062.setOrientation(new float[]{1,0,0,-1.57079});
HAnimSite1059.addChild(&Viewpoint1062);

Viewpoint& Viewpoint1063 =  Viewpoint();
Viewpoint1063.setDEF(CString("RootView"));
Viewpoint1063.setDescription(CString("Humanoid Root View"));
Viewpoint1063.setPosition(new float[]{0,0.824,0.277});
HAnimSite1059.addChild(&Viewpoint1063);

Viewpoint& Viewpoint1064 =  Viewpoint();
Viewpoint1064.setDEF(CString("InclinedView"));
Viewpoint1064.setDescription(CString("Inclined View"));
Viewpoint1064.setPosition(new float[]{1.62,1.05,2.06});
Viewpoint1064.setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
HAnimSite1059.addChild(&Viewpoint1064);

HAnimHumanoid95.setViewpoints(&HAnimSite1059);

Scene18.addChild(&HAnimHumanoid95);

X3D0.setScene(&Scene18);

}
