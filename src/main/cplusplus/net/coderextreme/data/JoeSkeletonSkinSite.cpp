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
component2.setLevel(2);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("JoeSkeletonSkinSite.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Comprehensive LOA4 example showing skeleton, skin, sites with no interpolator animation, includes EXPORT to enable separate Inline/IMPORT usage. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Joe D. Williams"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("translator"));
meta6.setContent(CString("Michalis Kamburelis"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("translator"));
meta7.setContent(CString("Don Brutzman"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("translator"));
meta8.setContent(CString("Joe D. Williams"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("created"));
meta9.setContent(CString("9 January 2004"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("translated"));
meta10.setContent(CString("4 December 2022"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("modified"));
meta11.setContent(CString("16 March 2026"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("Image"));
meta12.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("drawing"));
meta13.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("Image"));
meta14.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("Image"));
meta15.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("Image"));
meta16.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("Image"));
meta17.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("Image"));
meta18.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("Image"));
meta19.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("Image"));
meta20.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_Octaga.png"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("Image"));
meta21.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_vivaty.png"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("generator"));
meta22.setContent(CString("tovrmlx3d, https://castle-engine.io/convert.php"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("reference"));
meta23.setContent(CString("https://castle-engine.io/view3dscene.php#section_converting"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("translator"));
meta24.setContent(CString("Michalis Kamburelis"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("translator"));
meta25.setContent(CString("Don Brutzman"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("translator"));
meta26.setContent(CString("Joe D. Williams"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(CString("generator"));
meta27.setContent(CString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(CString("generator"));
meta28.setContent(CString("X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html"));
head1.addMeta(&meta28);

meta& meta29 =  meta();
meta29.setName(CString("identifier"));
meta29.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d"));
head1.addMeta(&meta29);

meta& meta30 =  meta();
meta30.setName(CString("license"));
meta30.setContent(CString("../license.html"));
head1.addMeta(&meta30);

meta& meta31 =  meta();
meta31.setName(CString("generator"));
meta31.setContent(CString("X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html"));
head1.addMeta(&meta31);

X3D0.setHead(&head1);

Scene& Scene32 =  Scene();
WorldInfo& WorldInfo33 =  WorldInfo();
WorldInfo33.setInfo(new CString[]{CString("By Joe for Joe"), CString("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3")}, 2);
WorldInfo33.setTitle(CString("JoeSkeletonSkinSite.x3d"));
Scene32.addChild(&WorldInfo33);

NavigationInfo& NavigationInfo34 =  NavigationInfo();
NavigationInfo34.setDEF(CString("HeadlightOnRevealsSkinTextureAndColors"));
Scene32.addChild(&NavigationInfo34);

Background& Background35 =  Background();
Background35.setGroundAngle(new float[]{1.57}, 1);
Background35.setGroundColor(new float[]{0,0.1,0,0,0.1,0}, 6);
Background35.setSkyColor(new float[]{0,0,0.1}, 3);
Scene32.addChild(&Background35);

//Authoring hint: these axes are aligned within local coordinate system
Group& Group36 =  Group();
Group36.setDEF(CString("ViewpointGroup"));
Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setDescription(CString("Front Up View"));
Viewpoint37.setOrientation(new float[]{-1,-1,0,0.55});
Viewpoint37.setPosition(new float[]{-1,2,2.5});
Group36.addChild(&Viewpoint37);

Viewpoint& Viewpoint38 =  Viewpoint();
Viewpoint38.setDescription(CString("From Left View"));
Viewpoint38.setOrientation(new float[]{0.3,1,0,-1.57});
Viewpoint38.setPosition(new float[]{-2.5,1.5,0});
Group36.addChild(&Viewpoint38);

Viewpoint& Viewpoint39 =  Viewpoint();
Viewpoint39.setDescription(CString("Front Mid View"));
Viewpoint39.setPosition(new float[]{0,0.5,1.25});
Group36.addChild(&Viewpoint39);

Viewpoint& Viewpoint40 =  Viewpoint();
Viewpoint40.setDescription(CString("Front Feet View"));
Viewpoint40.setPosition(new float[]{0,0,0.75});
Group36.addChild(&Viewpoint40);

Viewpoint& Viewpoint41 =  Viewpoint();
Viewpoint41.setDescription(CString("From Right View"));
Viewpoint41.setOrientation(new float[]{0,1,0,1.57});
Viewpoint41.setPosition(new float[]{1,1,0});
Group36.addChild(&Viewpoint41);

Viewpoint& Viewpoint42 =  Viewpoint();
Viewpoint42.setCenterOfRotation(new float[]{0,1.65,0});
Viewpoint42.setDescription(CString("Front Head View"));
Viewpoint42.setPosition(new float[]{0,1.65,0.75});
Group36.addChild(&Viewpoint42);

Viewpoint& Viewpoint43 =  Viewpoint();
Viewpoint43.setDescription(CString("Front Mid View"));
Viewpoint43.setPosition(new float[]{0,1,1.75});
Group36.addChild(&Viewpoint43);

Viewpoint& Viewpoint44 =  Viewpoint();
Viewpoint44.setDescription(CString("Rear View"));
Viewpoint44.setOrientation(new float[]{0,1,0,3.14});
Viewpoint44.setPosition(new float[]{0,1.5,-4});
Group36.addChild(&Viewpoint44);

Viewpoint& Viewpoint45 =  Viewpoint();
Viewpoint45.setDescription(CString("Top View"));
Viewpoint45.setOrientation(new float[]{1,0,0,-1.57});
Viewpoint45.setPosition(new float[]{0,4,0});
Group36.addChild(&Viewpoint45);

Viewpoint& Viewpoint46 =  Viewpoint();
Viewpoint46.setDescription(CString("Bottom View"));
Viewpoint46.setOrientation(new float[]{1,0,0,1.57});
Viewpoint46.setPosition(new float[]{0,-4,0});
Group36.addChild(&Viewpoint46);

Viewpoint& Viewpoint47 =  Viewpoint();
Viewpoint47.setDescription(CString("Right View"));
Viewpoint47.setOrientation(new float[]{0,1,0,1.57});
Viewpoint47.setPosition(new float[]{4,1.5,0});
Group36.addChild(&Viewpoint47);

Scene32.addChild(&Group36);

Group& Group48 =  Group();
Group48.setDEF(CString("VisualizationShapes"));
Group48.setVisible(False);
Transform& Transform49 =  Transform();
Transform49.setScale(new float[]{5,5,5});
Transform49.setTranslation(new float[]{0,2.1,0});
Shape& Shape50 =  Shape();
Shape50.setDEF(CString("jointbox"));
Appearance& Appearance51 =  Appearance();
Material& Material52 =  Material();
Material52.setAmbientIntensity(0.5);
Material52.setDiffuseColor(new float[]{0,0,0});
Material52.setShininess(1);
Appearance51.addChild(&Material52);

Shape50.addChild(&Appearance51);

IndexedFaceSet& IndexedFaceSet53 =  IndexedFaceSet();
IndexedFaceSet53.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet53.setCreaseAngle(0.1);
CColor& Color54 =  CColor();
Color54.setColor(new float[]{1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0}, 18);
IndexedFaceSet53.setColor(&Color54);

Coordinate& Coordinate55 =  Coordinate();
Coordinate55.setDEF(CString("boxCoords"));
Coordinate55.setPoint(new float[]{0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet53.setCoord(&Coordinate55);

Shape50.setGeometry(&IndexedFaceSet53);

Transform49.addChild(&Shape50);

Group48.addChild(&Transform49);

Transform& Transform56 =  Transform();
Transform56.setScale(new float[]{0.1,0.1,0.1});
Transform56.setTranslation(new float[]{-0.2,0.773,-0.016});
Shape& Shape57 =  Shape();
Shape57.setDEF(CString("sitebox"));
Appearance& Appearance58 =  Appearance();
Material& Material59 =  Material();
Material59.setAmbientIntensity(1);
Material59.setDiffuseColor(new float[]{1,0,0});
Material59.setEmissiveColor(new float[]{1,0,0});
Material59.setShininess(0.7);
Material59.setSpecularColor(new float[]{1,0,0});
Appearance58.addChild(&Material59);

Shape57.addChild(&Appearance58);

IndexedFaceSet& IndexedFaceSet60 =  IndexedFaceSet();
IndexedFaceSet60.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet60.setCreaseAngle(0.1);
Coordinate& Coordinate61 =  Coordinate();
Coordinate61.setUSE(CString("boxCoords"));
IndexedFaceSet60.setCoord(&Coordinate61);

Shape57.setGeometry(&IndexedFaceSet60);

Transform56.addChild(&Shape57);

Group48.addChild(&Transform56);

Transform& Transform62 =  Transform();
Transform62.setScale(new float[]{0.1,0.1,0.1});
Transform62.setTranslation(new float[]{0,0.2,0});
Shape& Shape63 =  Shape();
Appearance& Appearance64 =  Appearance();
Appearance64.setDEF(CString("SegmentLine"));
Material& Material65 =  Material();
Material65.setDiffuseColor(new float[]{0,1,0});
Material65.setEmissiveColor(new float[]{0,1,0});
Material65.setSpecularColor(new float[]{0,1,0});
Appearance64.addChild(&Material65);

Shape63.addChild(&Appearance64);

IndexedLineSet& IndexedLineSet66 =  IndexedLineSet();
IndexedLineSet66.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate67 =  Coordinate();
Coordinate67.setPoint(new float[]{0,0,0,0,0.0001,0}, 6);
IndexedLineSet66.setCoord(&Coordinate67);

Shape63.setGeometry(&IndexedLineSet66);

Transform62.addChild(&Shape63);

Group48.addChild(&Transform62);

Transform& Transform68 =  Transform();
Transform68.setScale(new float[]{0.1,0.1,0.1});
Transform68.setTranslation(new float[]{-0.2,0.773,-0.016});
Shape& Shape69 =  Shape();
Shape69.setDEF(CString("skinsphere"));
Appearance& Appearance70 =  Appearance();
Material& Material71 =  Material();
Material71.setAmbientIntensity(0.5);
Material71.setDiffuseColor(new float[]{0,1,0});
Material71.setEmissiveColor(new float[]{0,1,0});
Material71.setShininess(1);
Material71.setSpecularColor(new float[]{0,1,0});
Appearance70.addChild(&Material71);

Shape69.addChild(&Appearance70);

Sphere& Sphere72 =  Sphere();
Sphere72.setRadius(0.005);
Shape69.setGeometry(&Sphere72);

Transform68.addChild(&Shape69);

Group48.addChild(&Transform68);

Scene32.addChild(&Group48);

Group& Group73 =  Group();
Group73.setDEF(CString("SpecHumanoid"));
Group& Group74 =  Group();
Group74.setDEF(CString("JoeISOHumanoid"));
HAnimHumanoid& HAnimHumanoid75 =  HAnimHumanoid();
HAnimHumanoid75.X3DNode::setName(CString("Human"));
HAnimHumanoid75.setDEF(CString("Joe_Human"));
HAnimHumanoid75.setLoa(4);
HAnimHumanoid75.setVersion(CString("2.0"));
//original HAnimHumanoid info='\"humanoidVersion=2.0\"'
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
MetadataSet& MetadataSet76 =  MetadataSet();
MetadataSet76.X3DNode::setName(CString("HAnimHumanoid.info"));
MetadataSet76.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString77 =  MetadataString();
MetadataString77.X3DNode::setName(CString("humanoidVersion"));
MetadataString77.setValue(new CString[]{CString("2.0")}, 1);
MetadataSet76.setValue((X3DNode *)&MetadataString77);

HAnimHumanoid75.setMetadata(&MetadataSet76);

HAnimJoint& HAnimJoint78 =  HAnimJoint();
HAnimJoint78.X3DNode::setName(CString("humanoid_root"));
HAnimJoint78.setDEF(CString("Joe_humanoid_root"));
HAnimJoint78.setCenter(new float[]{0,0.875,0});
HAnimSegment& HAnimSegment79 =  HAnimSegment();
HAnimSegment79.X3DNode::setName(CString("sacrum"));
HAnimSegment79.setDEF(CString("Joe_sacrum"));
Transform& Transform80 =  Transform();
Transform80.setTranslation(new float[]{0,0.875,0});
Shape& Shape81 =  Shape();
Shape81.setUSE(CString("jointbox"));
Transform80.addChild(&Shape81);

HAnimSegment79.addChild(&Transform80);

Shape& Shape82 =  Shape();
Appearance& Appearance83 =  Appearance();
Appearance83.setUSE(CString("SegmentLine"));
Shape82.addChild(&Appearance83);

IndexedLineSet& IndexedLineSet84 =  IndexedLineSet();
IndexedLineSet84.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate85 =  Coordinate();
Coordinate85.setPoint(new float[]{0,0.875,0,0,0.92,0}, 6);
IndexedLineSet84.setCoord(&Coordinate85);

Shape82.setGeometry(&IndexedLineSet84);

HAnimSegment79.addChild(&Shape82);

Transform& Transform86 =  Transform();
Transform86.setTranslation(new float[]{0,0.92,0.08});
Shape& Shape87 =  Shape();
Shape87.setUSE(CString("skinsphere"));
Transform86.addChild(&Shape87);

HAnimSegment79.addChild(&Transform86);

Transform& Transform88 =  Transform();
Transform88.setTranslation(new float[]{0,0.87,-0.022});
Shape& Shape89 =  Shape();
Shape89.setUSE(CString("skinsphere"));
Transform88.addChild(&Shape89);

HAnimSegment79.addChild(&Transform88);

HAnimJoint78.addChildren(&HAnimSegment79);

HAnimJoint& HAnimJoint90 =  HAnimJoint();
HAnimJoint90.X3DNode::setName(CString("sacroiliac"));
HAnimJoint90.setDEF(CString("Joe_sacroiliac"));
HAnimJoint90.setCenter(new float[]{0,0.92,0});
HAnimJoint90.setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
HAnimJoint90.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,0.35,0.35,1}, 13);
HAnimSegment& HAnimSegment91 =  HAnimSegment();
HAnimSegment91.X3DNode::setName(CString("pelvis"));
HAnimSegment91.setDEF(CString("Joe_pelvis"));
Transform& Transform92 =  Transform();
Transform92.setTranslation(new float[]{0,0.9149,0.0016});
Transform& Transform93 =  Transform();
Shape& Shape94 =  Shape();
Shape94.setUSE(CString("jointbox"));
Transform93.addChild(&Shape94);

Transform92.addChild(&Transform93);

HAnimSegment91.addChild(&Transform92);

Shape& Shape95 =  Shape();
Appearance& Appearance96 =  Appearance();
Appearance96.setUSE(CString("SegmentLine"));
Shape95.addChild(&Appearance96);

IndexedLineSet& IndexedLineSet97 =  IndexedLineSet();
IndexedLineSet97.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate98 =  Coordinate();
Coordinate98.setPoint(new float[]{0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095}, 12);
IndexedLineSet97.setCoord(&Coordinate98);

Shape95.setGeometry(&IndexedLineSet97);

HAnimSegment91.addChild(&Shape95);

HAnimSite& HAnimSite99 =  HAnimSite();
HAnimSite99.X3DNode::setName(CString("l_iliocristale_pt"));
HAnimSite99.setDEF(CString("Joe_l_iliocristale_pt"));
HAnimSite99.setTranslation(new float[]{0.1425,1.065,0.0033});
Shape& Shape100 =  Shape();
Shape100.setUSE(CString("sitebox"));
HAnimSite99.addChild(&Shape100);

HAnimSegment91.addChild(&HAnimSite99);

HAnimSite& HAnimSite101 =  HAnimSite();
HAnimSite101.X3DNode::setName(CString("l_trochanterion_pt"));
HAnimSite101.setDEF(CString("Joe_l_trochanterion_pt"));
HAnimSite101.setTranslation(new float[]{0.15,0.9,-0.01});
Shape& Shape102 =  Shape();
Shape102.setUSE(CString("sitebox"));
HAnimSite101.addChild(&Shape102);

HAnimSegment91.addChild(&HAnimSite101);

HAnimSite& HAnimSite103 =  HAnimSite();
HAnimSite103.X3DNode::setName(CString("r_iliocristale_pt"));
HAnimSite103.setDEF(CString("Joe_r_iliocristale_pt"));
HAnimSite103.setTranslation(new float[]{-0.1425,1.065,0.0033});
Shape& Shape104 =  Shape();
Shape104.setUSE(CString("sitebox"));
HAnimSite103.addChild(&Shape104);

HAnimSegment91.addChild(&HAnimSite103);

HAnimSite& HAnimSite105 =  HAnimSite();
HAnimSite105.X3DNode::setName(CString("r_trochanterion_pt"));
HAnimSite105.setDEF(CString("Joe_r_trochanterion_pt"));
HAnimSite105.setTranslation(new float[]{-0.15,0.9,-0.01});
Shape& Shape106 =  Shape();
Shape106.setUSE(CString("sitebox"));
HAnimSite105.addChild(&Shape106);

HAnimSegment91.addChild(&HAnimSite105);

HAnimSite& HAnimSite107 =  HAnimSite();
HAnimSite107.X3DNode::setName(CString("l_asis_pt"));
HAnimSite107.setDEF(CString("Joe_l_asis_pt"));
HAnimSite107.setTranslation(new float[]{0.0935,1.03,0.075});
Shape& Shape108 =  Shape();
Shape108.setUSE(CString("sitebox"));
HAnimSite107.addChild(&Shape108);

HAnimSegment91.addChild(&HAnimSite107);

HAnimSite& HAnimSite109 =  HAnimSite();
HAnimSite109.X3DNode::setName(CString("r_asis_pt"));
HAnimSite109.setDEF(CString("Joe_r_asis_pt"));
HAnimSite109.setTranslation(new float[]{-0.0935,1.03,0.075});
Shape& Shape110 =  Shape();
Shape110.setUSE(CString("sitebox"));
HAnimSite109.addChild(&Shape110);

HAnimSegment91.addChild(&HAnimSite109);

HAnimSite& HAnimSite111 =  HAnimSite();
HAnimSite111.X3DNode::setName(CString("l_psis_pt"));
HAnimSite111.setDEF(CString("Joe_l_psis_pt"));
HAnimSite111.setTranslation(new float[]{0.0773,1.019,-0.12});
Shape& Shape112 =  Shape();
Shape112.setUSE(CString("sitebox"));
HAnimSite111.addChild(&Shape112);

HAnimSegment91.addChild(&HAnimSite111);

HAnimSite& HAnimSite113 =  HAnimSite();
HAnimSite113.X3DNode::setName(CString("r_psis_pt"));
HAnimSite113.setDEF(CString("Joe_r_psis_pt"));
HAnimSite113.setTranslation(new float[]{-0.0773,1.019,-0.12});
Shape& Shape114 =  Shape();
Shape114.setUSE(CString("sitebox"));
HAnimSite113.addChild(&Shape114);

HAnimSegment91.addChild(&HAnimSite113);

HAnimSite& HAnimSite115 =  HAnimSite();
HAnimSite115.X3DNode::setName(CString("floormarker_pt"));
HAnimSite115.setDEF(CString("Joe_floormarker_pt"));
Transform& Transform116 =  Transform();
Transform116.setScale(new float[]{3,3,3});
Shape& Shape117 =  Shape();
Shape117.setUSE(CString("sitebox"));
Transform116.addChild(&Shape117);

HAnimSite115.addChild(&Transform116);

HAnimSegment91.addChild(&HAnimSite115);

HAnimSite& HAnimSite118 =  HAnimSite();
HAnimSite118.X3DNode::setName(CString("crotch_pt"));
HAnimSite118.setDEF(CString("Joe_crotch_pt"));
HAnimSite118.setTranslation(new float[]{0,0.87,-0.022});
Shape& Shape119 =  Shape();
Shape119.setUSE(CString("sitebox"));
HAnimSite118.addChild(&Shape119);

HAnimSegment91.addChild(&HAnimSite118);

HAnimJoint90.addChildren(&HAnimSegment91);

HAnimJoint& HAnimJoint120 =  HAnimJoint();
HAnimJoint120.X3DNode::setName(CString("l_hip"));
HAnimJoint120.setDEF(CString("Joe_l_hip"));
HAnimJoint120.setCenter(new float[]{0.1,0.92,0});
HAnimJoint120.setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
HAnimJoint120.setSkinCoordWeight(new float[]{0.65,1,1,1,1,1}, 6);
HAnimSegment& HAnimSegment121 =  HAnimSegment();
HAnimSegment121.X3DNode::setName(CString("l_thigh"));
HAnimSegment121.setDEF(CString("Joe_l_thigh"));
Transform& Transform122 =  Transform();
Transform122.setTranslation(new float[]{0.1,0.92,0});
Shape& Shape123 =  Shape();
Shape123.setUSE(CString("jointbox"));
Transform122.addChild(&Shape123);

HAnimSegment121.addChild(&Transform122);

Shape& Shape124 =  Shape();
Appearance& Appearance125 =  Appearance();
Appearance125.setUSE(CString("SegmentLine"));
Shape124.addChild(&Appearance125);

IndexedLineSet& IndexedLineSet126 =  IndexedLineSet();
IndexedLineSet126.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate127 =  Coordinate();
Coordinate127.setPoint(new float[]{0.1,0.92,0,0.115,0.466,0}, 6);
IndexedLineSet126.setCoord(&Coordinate127);

Shape124.setGeometry(&IndexedLineSet126);

HAnimSegment121.addChild(&Shape124);

Transform& Transform128 =  Transform();
Transform128.setTranslation(new float[]{0.1,0.9,0.0775});
Shape& Shape129 =  Shape();
Shape129.setUSE(CString("skinsphere"));
Transform128.addChild(&Shape129);

HAnimSegment121.addChild(&Transform128);

Transform& Transform130 =  Transform();
Transform130.setTranslation(new float[]{0.079,0.92,-0.14});
Shape& Shape131 =  Shape();
Shape131.setUSE(CString("skinsphere"));
Transform130.addChild(&Shape131);

HAnimSegment121.addChild(&Transform130);

Transform& Transform132 =  Transform();
Transform132.setTranslation(new float[]{0.171,0.65,0});
Shape& Shape133 =  Shape();
Shape133.setUSE(CString("skinsphere"));
Transform132.addChild(&Shape133);

HAnimSegment121.addChild(&Transform132);

Transform& Transform134 =  Transform();
Transform134.setTranslation(new float[]{0.02,0.65,0});
Shape& Shape135 =  Shape();
Shape135.setUSE(CString("skinsphere"));
Transform134.addChild(&Shape135);

HAnimSegment121.addChild(&Transform134);

Transform& Transform136 =  Transform();
Transform136.setTranslation(new float[]{0.1,0.65,-0.08});
Shape& Shape137 =  Shape();
Shape137.setUSE(CString("skinsphere"));
Transform136.addChild(&Shape137);

HAnimSegment121.addChild(&Transform136);

Transform& Transform138 =  Transform();
Transform138.setTranslation(new float[]{0.1,0.65,0.07});
Shape& Shape139 =  Shape();
Shape139.setUSE(CString("skinsphere"));
Transform138.addChild(&Shape139);

HAnimSegment121.addChild(&Transform138);

HAnimSite& HAnimSite140 =  HAnimSite();
HAnimSite140.X3DNode::setName(CString("l_knee_crease_pt"));
HAnimSite140.setDEF(CString("Joe_l_knee_crease_pt"));
HAnimSite140.setTranslation(new float[]{0.115,0.466,-0.055});
Shape& Shape141 =  Shape();
Shape141.setUSE(CString("sitebox"));
HAnimSite140.addChild(&Shape141);

HAnimSegment121.addChild(&HAnimSite140);

HAnimSite& HAnimSite142 =  HAnimSite();
HAnimSite142.X3DNode::setName(CString("l_femoral_lateral_epicondyle_pt"));
HAnimSite142.setDEF(CString("Joe_l_femoral_lateral_epicondyle_pt"));
HAnimSite142.setTranslation(new float[]{0.17,0.466,0});
Shape& Shape143 =  Shape();
Shape143.setUSE(CString("sitebox"));
HAnimSite142.addChild(&Shape143);

HAnimSegment121.addChild(&HAnimSite142);

HAnimSite& HAnimSite144 =  HAnimSite();
HAnimSite144.X3DNode::setName(CString("l_femoral_medial_epicondyle_pt"));
HAnimSite144.setDEF(CString("Joe_l_femoral_medial_epicondyle_pt"));
HAnimSite144.setTranslation(new float[]{0.05,0.466,0});
Shape& Shape145 =  Shape();
Shape145.setUSE(CString("sitebox"));
HAnimSite144.addChild(&Shape145);

HAnimSegment121.addChild(&HAnimSite144);

HAnimJoint120.addChildren(&HAnimSegment121);

HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.X3DNode::setName(CString("l_knee"));
HAnimJoint146.setDEF(CString("Joe_l_knee"));
HAnimJoint146.setCenter(new float[]{0.115,0.466,0});
HAnimJoint146.setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
HAnimJoint146.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment147 =  HAnimSegment();
HAnimSegment147.X3DNode::setName(CString("l_calf"));
HAnimSegment147.setDEF(CString("Joe_l_calf"));
Transform& Transform148 =  Transform();
Transform148.setTranslation(new float[]{0.115,0.466,0});
Shape& Shape149 =  Shape();
Shape149.setUSE(CString("jointbox"));
Transform148.addChild(&Shape149);

HAnimSegment147.addChild(&Transform148);

Shape& Shape150 =  Shape();
Appearance& Appearance151 =  Appearance();
Appearance151.setUSE(CString("SegmentLine"));
Shape150.addChild(&Appearance151);

IndexedLineSet& IndexedLineSet152 =  IndexedLineSet();
IndexedLineSet152.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate153 =  Coordinate();
Coordinate153.setPoint(new float[]{0.115,0.466,0,0.1,0.069,0}, 6);
IndexedLineSet152.setCoord(&Coordinate153);

Shape150.setGeometry(&IndexedLineSet152);

HAnimSegment147.addChild(&Shape150);

Transform& Transform154 =  Transform();
Transform154.setTranslation(new float[]{0.115,0.466,0.06});
Shape& Shape155 =  Shape();
Shape155.setUSE(CString("skinsphere"));
Transform154.addChild(&Shape155);

HAnimSegment147.addChild(&Transform154);

Transform& Transform156 =  Transform();
Transform156.setTranslation(new float[]{0.115,0.466,-0.055});
Shape& Shape157 =  Shape();
Shape157.setUSE(CString("skinsphere"));
Transform156.addChild(&Shape157);

HAnimSegment147.addChild(&Transform156);

Transform& Transform158 =  Transform();
Transform158.setTranslation(new float[]{0.17,0.466,0});
Shape& Shape159 =  Shape();
Shape159.setUSE(CString("skinsphere"));
Transform158.addChild(&Shape159);

HAnimSegment147.addChild(&Transform158);

Transform& Transform160 =  Transform();
Transform160.setTranslation(new float[]{0.05,0.466,0});
Shape& Shape161 =  Shape();
Shape161.setUSE(CString("skinsphere"));
Transform160.addChild(&Shape161);

HAnimSegment147.addChild(&Transform160);

Transform& Transform162 =  Transform();
Transform162.setTranslation(new float[]{0.17,0.3,0});
Shape& Shape163 =  Shape();
Shape163.setUSE(CString("skinsphere"));
Transform162.addChild(&Shape163);

HAnimSegment147.addChild(&Transform162);

Transform& Transform164 =  Transform();
Transform164.setTranslation(new float[]{0.06,0.3,0});
Shape& Shape165 =  Shape();
Shape165.setUSE(CString("skinsphere"));
Transform164.addChild(&Shape165);

HAnimSegment147.addChild(&Transform164);

Transform& Transform166 =  Transform();
Transform166.setTranslation(new float[]{0.1,0.3,-0.05});
Shape& Shape167 =  Shape();
Shape167.setUSE(CString("skinsphere"));
Transform166.addChild(&Shape167);

HAnimSegment147.addChild(&Transform166);

Transform& Transform168 =  Transform();
Transform168.setTranslation(new float[]{0.1,0.3,0.05});
Shape& Shape169 =  Shape();
Shape169.setUSE(CString("skinsphere"));
Transform168.addChild(&Shape169);

HAnimSegment147.addChild(&Transform168);

HAnimSite& HAnimSite170 =  HAnimSite();
HAnimSite170.X3DNode::setName(CString("l_lateral_malleolus_pt"));
HAnimSite170.setDEF(CString("Joe_l_lateral_malleolus_pt"));
HAnimSite170.setTranslation(new float[]{0.15,0.07,0});
Shape& Shape171 =  Shape();
Shape171.setUSE(CString("sitebox"));
HAnimSite170.addChild(&Shape171);

HAnimSegment147.addChild(&HAnimSite170);

HAnimSite& HAnimSite172 =  HAnimSite();
HAnimSite172.X3DNode::setName(CString("l_medial_malleolus_pt"));
HAnimSite172.setDEF(CString("Joe_l_medial_malleolus_pt"));
HAnimSite172.setTranslation(new float[]{0.085,0.086,0.0125});
Shape& Shape173 =  Shape();
Shape173.setUSE(CString("sitebox"));
HAnimSite172.addChild(&Shape173);

HAnimSegment147.addChild(&HAnimSite172);

HAnimJoint146.addChildren(&HAnimSegment147);

HAnimJoint& HAnimJoint174 =  HAnimJoint();
HAnimJoint174.X3DNode::setName(CString("l_talocrural"));
HAnimJoint174.setDEF(CString("Joe_l_talocrural"));
HAnimJoint174.setCenter(new float[]{0.115,0.069,0});
HAnimJoint174.setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
HAnimJoint174.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment175 =  HAnimSegment();
HAnimSegment175.X3DNode::setName(CString("l_talus"));
HAnimSegment175.setDEF(CString("Joe_l_talus"));
Transform& Transform176 =  Transform();
Transform176.setTranslation(new float[]{0.115,0.069,0});
Shape& Shape177 =  Shape();
Shape177.setUSE(CString("jointbox"));
Transform176.addChild(&Shape177);

HAnimSegment175.addChild(&Transform176);

Shape& Shape178 =  Shape();
Appearance& Appearance179 =  Appearance();
Appearance179.setUSE(CString("SegmentLine"));
Shape178.addChild(&Appearance179);

IndexedLineSet& IndexedLineSet180 =  IndexedLineSet();
IndexedLineSet180.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate181 =  Coordinate();
Coordinate181.setPoint(new float[]{0.1,0.069,0,0.115,0.031,0.03}, 6);
IndexedLineSet180.setCoord(&Coordinate181);

Shape178.setGeometry(&IndexedLineSet180);

HAnimSegment175.addChild(&Shape178);

Transform& Transform182 =  Transform();
Transform182.setTranslation(new float[]{0.15,0.07,0});
Shape& Shape183 =  Shape();
Shape183.setUSE(CString("skinsphere"));
Transform182.addChild(&Shape183);

HAnimSegment175.addChild(&Transform182);

Transform& Transform184 =  Transform();
Transform184.setTranslation(new float[]{0.085,0.086,0.0125});
Shape& Shape185 =  Shape();
Shape185.setUSE(CString("skinsphere"));
Transform184.addChild(&Shape185);

HAnimSegment175.addChild(&Transform184);

Transform& Transform186 =  Transform();
Transform186.setTranslation(new float[]{0.115,0.069,-0.045});
Shape& Shape187 =  Shape();
Shape187.setUSE(CString("skinsphere"));
Transform186.addChild(&Shape187);

HAnimSegment175.addChild(&Transform186);

Transform& Transform188 =  Transform();
Transform188.setTranslation(new float[]{0.117,0.0975,0.0615});
Shape& Shape189 =  Shape();
Shape189.setUSE(CString("skinsphere"));
Transform188.addChild(&Shape189);

HAnimSegment175.addChild(&Transform188);

HAnimSite& HAnimSite190 =  HAnimSite();
HAnimSite190.X3DNode::setName(CString("l_sphyrion_pt"));
HAnimSite190.setDEF(CString("Joe_l_sphyrion_pt"));
HAnimSite190.setTranslation(new float[]{0.09,0.056,0.0125});
Shape& Shape191 =  Shape();
Shape191.setUSE(CString("sitebox"));
HAnimSite190.addChild(&Shape191);

HAnimSegment175.addChild(&HAnimSite190);

HAnimSite& HAnimSite192 =  HAnimSite();
HAnimSite192.X3DNode::setName(CString("l_calcaneus_posterior_pt"));
HAnimSite192.setDEF(CString("Joe_l_calcaneus_posterior_pt"));
HAnimSite192.setTranslation(new float[]{0.115,0.04,-0.055});
Shape& Shape193 =  Shape();
Shape193.setUSE(CString("sitebox"));
HAnimSite192.addChild(&Shape193);

HAnimSegment175.addChild(&HAnimSite192);

HAnimJoint174.addChildren(&HAnimSegment175);

HAnimJoint& HAnimJoint194 =  HAnimJoint();
HAnimJoint194.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint194.setDEF(CString("Joe_l_tarsometatarsal_2"));
HAnimJoint194.setCenter(new float[]{0.115,0.031,0.03});
HAnimJoint194.setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
HAnimJoint194.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment195 =  HAnimSegment();
HAnimSegment195.X3DNode::setName(CString("l_metatarsal_2"));
HAnimSegment195.setDEF(CString("Joe_l_metatarsal_2"));
Transform& Transform196 =  Transform();
Transform196.setTranslation(new float[]{0.115,0.031,0.03});
Shape& Shape197 =  Shape();
Shape197.setUSE(CString("jointbox"));
Transform196.addChild(&Shape197);

HAnimSegment195.addChild(&Transform196);

Shape& Shape198 =  Shape();
Appearance& Appearance199 =  Appearance();
Appearance199.setUSE(CString("SegmentLine"));
Shape198.addChild(&Appearance199);

IndexedLineSet& IndexedLineSet200 =  IndexedLineSet();
IndexedLineSet200.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate201 =  Coordinate();
Coordinate201.setPoint(new float[]{0.115,0.031,0.03,0.115,0.037,0.09}, 6);
IndexedLineSet200.setCoord(&Coordinate201);

Shape198.setGeometry(&IndexedLineSet200);

HAnimSegment195.addChild(&Shape198);

Transform& Transform202 =  Transform();
Transform202.setTranslation(new float[]{0.1375,0.006,-0.03});
Shape& Shape203 =  Shape();
Shape203.setUSE(CString("skinsphere"));
Transform202.addChild(&Shape203);

HAnimSegment195.addChild(&Transform202);

Transform& Transform204 =  Transform();
Transform204.setTranslation(new float[]{0.095,0.006,-0.03});
Shape& Shape205 =  Shape();
Shape205.setUSE(CString("skinsphere"));
Transform204.addChild(&Shape205);

HAnimSegment195.addChild(&Transform204);

Transform& Transform206 =  Transform();
Transform206.setTranslation(new float[]{0.115,0.015,-0.045});
Shape& Shape207 =  Shape();
Shape207.setUSE(CString("skinsphere"));
Transform206.addChild(&Shape207);

HAnimSegment195.addChild(&Transform206);

HAnimJoint194.addChildren(&HAnimSegment195);

HAnimJoint& HAnimJoint208 =  HAnimJoint();
HAnimJoint208.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint208.setDEF(CString("Joe_l_metatarsophalangeal_2"));
HAnimJoint208.setCenter(new float[]{0.115,0.037,0.09});
HAnimJoint208.setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
HAnimJoint208.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment209 =  HAnimSegment();
HAnimSegment209.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment209.setDEF(CString("Joe_l_tarsal_proximal_phalanx_2"));
Transform& Transform210 =  Transform();
Transform210.setTranslation(new float[]{0.115,0.037,0.09});
Shape& Shape211 =  Shape();
Shape211.setUSE(CString("jointbox"));
Transform210.addChild(&Shape211);

HAnimSegment209.addChild(&Transform210);

Shape& Shape212 =  Shape();
Appearance& Appearance213 =  Appearance();
Appearance213.setUSE(CString("SegmentLine"));
Shape212.addChild(&Appearance213);

IndexedLineSet& IndexedLineSet214 =  IndexedLineSet();
IndexedLineSet214.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate215 =  Coordinate();
Coordinate215.setPoint(new float[]{0.115,0.037,0.09,0.115,0.02,0.122}, 6);
IndexedLineSet214.setCoord(&Coordinate215);

Shape212.setGeometry(&IndexedLineSet214);

HAnimSegment209.addChild(&Shape212);

Transform& Transform216 =  Transform();
Transform216.setTranslation(new float[]{0.115,0.06,0.1});
Shape& Shape217 =  Shape();
Shape217.setUSE(CString("skinsphere"));
Transform216.addChild(&Shape217);

HAnimSegment209.addChild(&Transform216);

Transform& Transform218 =  Transform();
Transform218.setTranslation(new float[]{0.115,0,0.07});
Shape& Shape219 =  Shape();
Shape219.setUSE(CString("skinsphere"));
Transform218.addChild(&Shape219);

HAnimSegment209.addChild(&Transform218);

Transform& Transform220 =  Transform();
Transform220.setTranslation(new float[]{0.165,0,0.07});
Shape& Shape221 =  Shape();
Shape221.setUSE(CString("skinsphere"));
Transform220.addChild(&Shape221);

HAnimSegment209.addChild(&Transform220);

Transform& Transform222 =  Transform();
Transform222.setTranslation(new float[]{0.095,0,0.07});
Shape& Shape223 =  Shape();
Shape223.setUSE(CString("skinsphere"));
Transform222.addChild(&Shape223);

HAnimSegment209.addChild(&Transform222);

HAnimSite& HAnimSite224 =  HAnimSite();
HAnimSite224.X3DNode::setName(CString("l_metatarsal_phalanx_1_pt"));
HAnimSite224.setDEF(CString("Joe_l_metatarsal_phalanx_1_pt"));
HAnimSite224.setTranslation(new float[]{0.087,0.01,0.122});
Shape& Shape225 =  Shape();
Shape225.setUSE(CString("sitebox"));
HAnimSite224.addChild(&Shape225);

HAnimSegment209.addChild(&HAnimSite224);

HAnimJoint208.addChildren(&HAnimSegment209);

HAnimJoint& HAnimJoint226 =  HAnimJoint();
HAnimJoint226.X3DNode::setName(CString("l_metatarsal"));
HAnimJoint226.setDEF(CString("Joe_l_metatarsal"));
HAnimJoint226.setCenter(new float[]{0.115,0.02,0.122});
HAnimJoint226.setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
HAnimJoint226.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment227 =  HAnimSegment();
HAnimSegment227.X3DNode::setName(CString("l_tarsal_distal_phalanx_2"));
HAnimSegment227.setDEF(CString("Joe_l_tarsal_distal_phalanx_2"));
Transform& Transform228 =  Transform();
Transform228.setTranslation(new float[]{0.115,0.02,0.13});
Shape& Shape229 =  Shape();
Shape229.setUSE(CString("jointbox"));
Transform228.addChild(&Shape229);

HAnimSegment227.addChild(&Transform228);

Shape& Shape230 =  Shape();
Appearance& Appearance231 =  Appearance();
Appearance231.setUSE(CString("SegmentLine"));
Shape230.addChild(&Appearance231);

IndexedLineSet& IndexedLineSet232 =  IndexedLineSet();
IndexedLineSet232.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate233 =  Coordinate();
Coordinate233.setPoint(new float[]{0.115,0.02,0.122,0.132,0.013,0.19}, 6);
IndexedLineSet232.setCoord(&Coordinate233);

Shape230.setGeometry(&IndexedLineSet232);

HAnimSegment227.addChild(&Shape230);

Transform& Transform234 =  Transform();
Transform234.setTranslation(new float[]{0.115,0.04,0.13});
Shape& Shape235 =  Shape();
Shape235.setUSE(CString("skinsphere"));
Transform234.addChild(&Shape235);

HAnimSegment227.addChild(&Transform234);

Transform& Transform236 =  Transform();
Transform236.setTranslation(new float[]{0.125,0,0.12});
Shape& Shape237 =  Shape();
Shape237.setUSE(CString("skinsphere"));
Transform236.addChild(&Shape237);

HAnimSegment227.addChild(&Transform236);

Transform& Transform238 =  Transform();
Transform238.setTranslation(new float[]{0.165,0,0.12});
Shape& Shape239 =  Shape();
Shape239.setUSE(CString("skinsphere"));
Transform238.addChild(&Shape239);

HAnimSegment227.addChild(&Transform238);

Transform& Transform240 =  Transform();
Transform240.setTranslation(new float[]{0.087,0,0.122});
Shape& Shape241 =  Shape();
Shape241.setUSE(CString("skinsphere"));
Transform240.addChild(&Shape241);

HAnimSegment227.addChild(&Transform240);

Transform& Transform242 =  Transform();
Transform242.setTranslation(new float[]{0.09,0.012,0.188});
Shape& Shape243 =  Shape();
Shape243.setUSE(CString("skinsphere"));
Transform242.addChild(&Shape243);

HAnimSegment227.addChild(&Transform242);

Transform& Transform244 =  Transform();
Transform244.setTranslation(new float[]{0.11,0.011,0.19});
Shape& Shape245 =  Shape();
Shape245.setUSE(CString("skinsphere"));
Transform244.addChild(&Shape245);

HAnimSegment227.addChild(&Transform244);

Transform& Transform246 =  Transform();
Transform246.setTranslation(new float[]{0.128,0.011,0.185});
Shape& Shape247 =  Shape();
Shape247.setUSE(CString("skinsphere"));
Transform246.addChild(&Shape247);

HAnimSegment227.addChild(&Transform246);

Transform& Transform248 =  Transform();
Transform248.setTranslation(new float[]{0.142,0.011,0.178});
Shape& Shape249 =  Shape();
Shape249.setUSE(CString("skinsphere"));
Transform248.addChild(&Shape249);

HAnimSegment227.addChild(&Transform248);

Transform& Transform250 =  Transform();
Transform250.setTranslation(new float[]{0.154,0.01,0.168});
Shape& Shape251 =  Shape();
Shape251.setUSE(CString("skinsphere"));
Transform250.addChild(&Shape251);

HAnimSegment227.addChild(&Transform250);

HAnimSite& HAnimSite252 =  HAnimSite();
HAnimSite252.X3DNode::setName(CString("l_metatarsal_phalanx_5_pt"));
HAnimSite252.setDEF(CString("Joe_l_metatarsal_phalanx_5_pt"));
HAnimSite252.setTranslation(new float[]{0.165,0.01,0.12});
Shape& Shape253 =  Shape();
Shape253.setUSE(CString("sitebox"));
HAnimSite252.addChild(&Shape253);

HAnimSegment227.addChild(&HAnimSite252);

HAnimSite& HAnimSite254 =  HAnimSite();
HAnimSite254.X3DNode::setName(CString("l_tarsal_distal_phalanx_2_pt"));
HAnimSite254.setDEF(CString("Joe_l_tarsal_distal_phalanx_2_pt"));
HAnimSite254.setTranslation(new float[]{0.11,0.011,0.19});
Shape& Shape255 =  Shape();
Shape255.setUSE(CString("sitebox"));
HAnimSite254.addChild(&Shape255);

HAnimSegment227.addChild(&HAnimSite254);

HAnimJoint226.addChildren(&HAnimSegment227);

HAnimJoint208.addChildren(&HAnimJoint226);

HAnimJoint194.addChildren(&HAnimJoint208);

HAnimJoint174.addChildren(&HAnimJoint194);

HAnimJoint146.addChildren(&HAnimJoint174);

HAnimJoint120.addChildren(&HAnimJoint146);

HAnimJoint90.addChildren(&HAnimJoint120);

HAnimJoint& HAnimJoint256 =  HAnimJoint();
HAnimJoint256.X3DNode::setName(CString("r_hip"));
HAnimJoint256.setDEF(CString("Joe_r_hip"));
HAnimJoint256.setCenter(new float[]{-0.1,0.92,0});
HAnimJoint256.setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101}, 6);
HAnimJoint256.setSkinCoordWeight(new float[]{0.65,1,1,1,1,1}, 6);
HAnimSegment& HAnimSegment257 =  HAnimSegment();
HAnimSegment257.X3DNode::setName(CString("r_thigh"));
HAnimSegment257.setDEF(CString("Joe_r_thigh"));
Transform& Transform258 =  Transform();
Transform258.setTranslation(new float[]{-0.1,0.92,0});
Shape& Shape259 =  Shape();
Shape259.setUSE(CString("jointbox"));
Transform258.addChild(&Shape259);

HAnimSegment257.addChild(&Transform258);

Shape& Shape260 =  Shape();
Appearance& Appearance261 =  Appearance();
Appearance261.setUSE(CString("SegmentLine"));
Shape260.addChild(&Appearance261);

IndexedLineSet& IndexedLineSet262 =  IndexedLineSet();
IndexedLineSet262.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate263 =  Coordinate();
Coordinate263.setPoint(new float[]{-0.1,0.92,0,-0.1,0.4913,0}, 6);
IndexedLineSet262.setCoord(&Coordinate263);

Shape260.setGeometry(&IndexedLineSet262);

HAnimSegment257.addChild(&Shape260);

Transform& Transform264 =  Transform();
Transform264.setTranslation(new float[]{-0.079,0.92,-0.14});
Shape& Shape265 =  Shape();
Shape265.setUSE(CString("skinsphere"));
Transform264.addChild(&Shape265);

HAnimSegment257.addChild(&Transform264);

Transform& Transform266 =  Transform();
Transform266.setTranslation(new float[]{-0.1,0.9,0.075});
Shape& Shape267 =  Shape();
Shape267.setUSE(CString("skinsphere"));
Transform266.addChild(&Shape267);

HAnimSegment257.addChild(&Transform266);

Transform& Transform268 =  Transform();
Transform268.setTranslation(new float[]{-0.171,0.65,0});
Shape& Shape269 =  Shape();
Shape269.setUSE(CString("skinsphere"));
Transform268.addChild(&Shape269);

HAnimSegment257.addChild(&Transform268);

Transform& Transform270 =  Transform();
Transform270.setTranslation(new float[]{-0.02,0.65,0});
Shape& Shape271 =  Shape();
Shape271.setUSE(CString("skinsphere"));
Transform270.addChild(&Shape271);

HAnimSegment257.addChild(&Transform270);

Transform& Transform272 =  Transform();
Transform272.setTranslation(new float[]{-0.1,0.65,-0.08});
Shape& Shape273 =  Shape();
Shape273.setUSE(CString("skinsphere"));
Transform272.addChild(&Shape273);

HAnimSegment257.addChild(&Transform272);

Transform& Transform274 =  Transform();
Transform274.setTranslation(new float[]{-0.1,0.65,0.07});
Shape& Shape275 =  Shape();
Shape275.setUSE(CString("skinsphere"));
Transform274.addChild(&Shape275);

HAnimSegment257.addChild(&Transform274);

HAnimSite& HAnimSite276 =  HAnimSite();
HAnimSite276.X3DNode::setName(CString("r_knee_crease_pt"));
HAnimSite276.setDEF(CString("Joe_r_knee_crease_pt"));
HAnimSite276.setTranslation(new float[]{-0.115,0.466,-0.055});
Shape& Shape277 =  Shape();
Shape277.setUSE(CString("sitebox"));
HAnimSite276.addChild(&Shape277);

HAnimSegment257.addChild(&HAnimSite276);

HAnimSite& HAnimSite278 =  HAnimSite();
HAnimSite278.X3DNode::setName(CString("r_femoral_lateral_epicondyle_pt"));
HAnimSite278.setDEF(CString("Joe_r_femoral_lateral_epicondyle_pt"));
HAnimSite278.setTranslation(new float[]{-0.17,0.466,0});
Shape& Shape279 =  Shape();
Shape279.setUSE(CString("sitebox"));
HAnimSite278.addChild(&Shape279);

HAnimSegment257.addChild(&HAnimSite278);

HAnimSite& HAnimSite280 =  HAnimSite();
HAnimSite280.X3DNode::setName(CString("r_femoral_medial_epicondyle_pt"));
HAnimSite280.setDEF(CString("Joe_r_femoral_medial_epicondyle_pt"));
HAnimSite280.setTranslation(new float[]{-0.05,0.466,0});
Shape& Shape281 =  Shape();
Shape281.setUSE(CString("sitebox"));
HAnimSite280.addChild(&Shape281);

HAnimSegment257.addChild(&HAnimSite280);

HAnimJoint256.addChildren(&HAnimSegment257);

HAnimJoint& HAnimJoint282 =  HAnimJoint();
HAnimJoint282.X3DNode::setName(CString("r_knee"));
HAnimJoint282.setDEF(CString("Joe_r_knee"));
HAnimJoint282.setCenter(new float[]{-0.05,0.466,0});
HAnimJoint282.setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369}, 8);
HAnimJoint282.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment283 =  HAnimSegment();
HAnimSegment283.X3DNode::setName(CString("r_calf"));
HAnimSegment283.setDEF(CString("Joe_r_calf"));
Transform& Transform284 =  Transform();
Transform284.setTranslation(new float[]{-0.1,0.4913,0});
Shape& Shape285 =  Shape();
Shape285.setUSE(CString("jointbox"));
Transform284.addChild(&Shape285);

HAnimSegment283.addChild(&Transform284);

Shape& Shape286 =  Shape();
Appearance& Appearance287 =  Appearance();
Appearance287.setUSE(CString("SegmentLine"));
Shape286.addChild(&Appearance287);

IndexedLineSet& IndexedLineSet288 =  IndexedLineSet();
IndexedLineSet288.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate289 =  Coordinate();
Coordinate289.setPoint(new float[]{-0.1,0.4913,0,-0.1,0.0712,0}, 6);
IndexedLineSet288.setCoord(&Coordinate289);

Shape286.setGeometry(&IndexedLineSet288);

HAnimSegment283.addChild(&Shape286);

Transform& Transform290 =  Transform();
Transform290.setTranslation(new float[]{-0.115,0.466,0.06});
Shape& Shape291 =  Shape();
Shape291.setUSE(CString("skinsphere"));
Transform290.addChild(&Shape291);

HAnimSegment283.addChild(&Transform290);

Transform& Transform292 =  Transform();
Transform292.setTranslation(new float[]{-0.115,0.466,-0.055});
Shape& Shape293 =  Shape();
Shape293.setUSE(CString("skinsphere"));
Transform292.addChild(&Shape293);

HAnimSegment283.addChild(&Transform292);

Transform& Transform294 =  Transform();
Transform294.setTranslation(new float[]{-0.17,0.466,0});
Shape& Shape295 =  Shape();
Shape295.setUSE(CString("skinsphere"));
Transform294.addChild(&Shape295);

HAnimSegment283.addChild(&Transform294);

Transform& Transform296 =  Transform();
Transform296.setTranslation(new float[]{-0.05,0.466,0});
Shape& Shape297 =  Shape();
Shape297.setUSE(CString("skinsphere"));
Transform296.addChild(&Shape297);

HAnimSegment283.addChild(&Transform296);

Transform& Transform298 =  Transform();
Transform298.setTranslation(new float[]{-0.17,0.3,0});
Shape& Shape299 =  Shape();
Shape299.setUSE(CString("skinsphere"));
Transform298.addChild(&Shape299);

HAnimSegment283.addChild(&Transform298);

Transform& Transform300 =  Transform();
Transform300.setTranslation(new float[]{-0.06,0.3,0});
Shape& Shape301 =  Shape();
Shape301.setUSE(CString("skinsphere"));
Transform300.addChild(&Shape301);

HAnimSegment283.addChild(&Transform300);

Transform& Transform302 =  Transform();
Transform302.setTranslation(new float[]{-0.1,0.3,-0.05});
Shape& Shape303 =  Shape();
Shape303.setUSE(CString("skinsphere"));
Transform302.addChild(&Shape303);

HAnimSegment283.addChild(&Transform302);

Transform& Transform304 =  Transform();
Transform304.setTranslation(new float[]{-0.1,0.3,0.05});
Shape& Shape305 =  Shape();
Shape305.setUSE(CString("skinsphere"));
Transform304.addChild(&Shape305);

HAnimSegment283.addChild(&Transform304);

HAnimSite& HAnimSite306 =  HAnimSite();
HAnimSite306.X3DNode::setName(CString("r_lateral_malleolus_pt"));
HAnimSite306.setDEF(CString("Joe_r_lateral_malleolus_pt"));
HAnimSite306.setTranslation(new float[]{-0.15,0.07,0});
Shape& Shape307 =  Shape();
Shape307.setUSE(CString("sitebox"));
HAnimSite306.addChild(&Shape307);

HAnimSegment283.addChild(&HAnimSite306);

HAnimSite& HAnimSite308 =  HAnimSite();
HAnimSite308.X3DNode::setName(CString("r_medial_malleolus_pt"));
HAnimSite308.setDEF(CString("Joe_r_medial_malleolus_pt"));
HAnimSite308.setTranslation(new float[]{-0.085,0.086,0.0125});
Shape& Shape309 =  Shape();
Shape309.setUSE(CString("sitebox"));
HAnimSite308.addChild(&Shape309);

HAnimSegment283.addChild(&HAnimSite308);

HAnimJoint282.addChildren(&HAnimSegment283);

HAnimJoint& HAnimJoint310 =  HAnimJoint();
HAnimJoint310.X3DNode::setName(CString("r_talocrural"));
HAnimJoint310.setDEF(CString("Joe_r_talocrural"));
HAnimJoint310.setCenter(new float[]{-0.115,0.069,0});
HAnimJoint310.setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
HAnimJoint310.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment311 =  HAnimSegment();
HAnimSegment311.X3DNode::setName(CString("r_talus"));
HAnimSegment311.setDEF(CString("Joe_r_talus"));
Transform& Transform312 =  Transform();
Transform312.setTranslation(new float[]{-0.1,0.0712,0});
Shape& Shape313 =  Shape();
Shape313.setUSE(CString("jointbox"));
Transform312.addChild(&Shape313);

HAnimSegment311.addChild(&Transform312);

Shape& Shape314 =  Shape();
Appearance& Appearance315 =  Appearance();
Appearance315.setUSE(CString("SegmentLine"));
Shape314.addChild(&Appearance315);

IndexedLineSet& IndexedLineSet316 =  IndexedLineSet();
IndexedLineSet316.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate317 =  Coordinate();
Coordinate317.setPoint(new float[]{-0.1,0.0712,0,-0.1,0.015,-0.01}, 6);
IndexedLineSet316.setCoord(&Coordinate317);

Shape314.setGeometry(&IndexedLineSet316);

HAnimSegment311.addChild(&Shape314);

Transform& Transform318 =  Transform();
Transform318.setTranslation(new float[]{-0.15,0.07,0});
Shape& Shape319 =  Shape();
Shape319.setUSE(CString("skinsphere"));
Transform318.addChild(&Shape319);

HAnimSegment311.addChild(&Transform318);

Transform& Transform320 =  Transform();
Transform320.setTranslation(new float[]{-0.085,0.086,0.0125});
Shape& Shape321 =  Shape();
Shape321.setUSE(CString("skinsphere"));
Transform320.addChild(&Shape321);

HAnimSegment311.addChild(&Transform320);

Transform& Transform322 =  Transform();
Transform322.setTranslation(new float[]{-0.115,0.069,-0.045});
Shape& Shape323 =  Shape();
Shape323.setUSE(CString("skinsphere"));
Transform322.addChild(&Shape323);

HAnimSegment311.addChild(&Transform322);

Transform& Transform324 =  Transform();
Transform324.setTranslation(new float[]{-0.117,0.0975,0.0615});
Shape& Shape325 =  Shape();
Shape325.setUSE(CString("skinsphere"));
Transform324.addChild(&Shape325);

HAnimSegment311.addChild(&Transform324);

HAnimSite& HAnimSite326 =  HAnimSite();
HAnimSite326.X3DNode::setName(CString("r_sphyrion_pt"));
HAnimSite326.setDEF(CString("Joe_r_sphyrion_pt"));
HAnimSite326.setTranslation(new float[]{-0.09,0.056,0.0125});
Shape& Shape327 =  Shape();
Shape327.setUSE(CString("sitebox"));
HAnimSite326.addChild(&Shape327);

HAnimSegment311.addChild(&HAnimSite326);

HAnimSite& HAnimSite328 =  HAnimSite();
HAnimSite328.X3DNode::setName(CString("r_calcaneus_posterior_pt"));
HAnimSite328.setDEF(CString("Joe_r_calcaneus_posterior_pt"));
HAnimSite328.setTranslation(new float[]{-0.115,0.04,-0.055});
Shape& Shape329 =  Shape();
Shape329.setUSE(CString("sitebox"));
HAnimSite328.addChild(&Shape329);

HAnimSegment311.addChild(&HAnimSite328);

HAnimJoint310.addChildren(&HAnimSegment311);

HAnimJoint& HAnimJoint330 =  HAnimJoint();
HAnimJoint330.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint330.setDEF(CString("Joe_r_tarsometatarsal_2"));
HAnimJoint330.setCenter(new float[]{-0.1,0.015,-0.01});
HAnimJoint330.setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
HAnimJoint330.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimSegment& HAnimSegment331 =  HAnimSegment();
HAnimSegment331.X3DNode::setName(CString("r_metatarsal_2"));
HAnimSegment331.setDEF(CString("Joe_r_metatarsal_2"));
Transform& Transform332 =  Transform();
Transform332.setTranslation(new float[]{-0.1,0.015,-0.01});
Shape& Shape333 =  Shape();
Shape333.setUSE(CString("jointbox"));
Transform332.addChild(&Shape333);

HAnimSegment331.addChild(&Transform332);

Shape& Shape334 =  Shape();
Appearance& Appearance335 =  Appearance();
Appearance335.setUSE(CString("SegmentLine"));
Shape334.addChild(&Appearance335);

IndexedLineSet& IndexedLineSet336 =  IndexedLineSet();
IndexedLineSet336.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate337 =  Coordinate();
Coordinate337.setPoint(new float[]{-0.1,0.015,-0.01,-0.1,0.02,0.07}, 6);
IndexedLineSet336.setCoord(&Coordinate337);

Shape334.setGeometry(&IndexedLineSet336);

HAnimSegment331.addChild(&Shape334);

Transform& Transform338 =  Transform();
Transform338.setTranslation(new float[]{-0.1375,0.006,-0.03});
Shape& Shape339 =  Shape();
Shape339.setUSE(CString("skinsphere"));
Transform338.addChild(&Shape339);

HAnimSegment331.addChild(&Transform338);

Transform& Transform340 =  Transform();
Transform340.setTranslation(new float[]{-0.095,0.006,-0.03});
Shape& Shape341 =  Shape();
Shape341.setUSE(CString("skinsphere"));
Transform340.addChild(&Shape341);

HAnimSegment331.addChild(&Transform340);

Transform& Transform342 =  Transform();
Transform342.setTranslation(new float[]{-0.095,0.006,-0.03});
Shape& Shape343 =  Shape();
Shape343.setUSE(CString("skinsphere"));
Transform342.addChild(&Shape343);

HAnimSegment331.addChild(&Transform342);

HAnimJoint330.addChildren(&HAnimSegment331);

HAnimJoint& HAnimJoint344 =  HAnimJoint();
HAnimJoint344.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint344.setDEF(CString("Joe_r_metatarsophalangeal_2"));
HAnimJoint344.setCenter(new float[]{-0.115,0.037,0.09});
HAnimJoint344.setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
HAnimJoint344.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment345 =  HAnimSegment();
HAnimSegment345.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment345.setDEF(CString("Joe_r_tarsal_proximal_phalanx_2"));
Transform& Transform346 =  Transform();
Transform346.setTranslation(new float[]{-0.1,0.02,0.07});
Shape& Shape347 =  Shape();
Shape347.setUSE(CString("jointbox"));
Transform346.addChild(&Shape347);

HAnimSegment345.addChild(&Transform346);

Shape& Shape348 =  Shape();
Appearance& Appearance349 =  Appearance();
Appearance349.setUSE(CString("SegmentLine"));
Shape348.addChild(&Appearance349);

IndexedLineSet& IndexedLineSet350 =  IndexedLineSet();
IndexedLineSet350.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate351 =  Coordinate();
Coordinate351.setPoint(new float[]{-0.1,0.02,0.07,-0.1,0.01,0.14}, 6);
IndexedLineSet350.setCoord(&Coordinate351);

Shape348.setGeometry(&IndexedLineSet350);

HAnimSegment345.addChild(&Shape348);

Transform& Transform352 =  Transform();
Transform352.setTranslation(new float[]{-0.115,0.06,0.1});
Shape& Shape353 =  Shape();
Shape353.setUSE(CString("skinsphere"));
Transform352.addChild(&Shape353);

HAnimSegment345.addChild(&Transform352);

Transform& Transform354 =  Transform();
Transform354.setTranslation(new float[]{-0.115,0,0.07});
Shape& Shape355 =  Shape();
Shape355.setUSE(CString("skinsphere"));
Transform354.addChild(&Shape355);

HAnimSegment345.addChild(&Transform354);

Transform& Transform356 =  Transform();
Transform356.setTranslation(new float[]{-0.165,0,0.07});
Shape& Shape357 =  Shape();
Shape357.setUSE(CString("skinsphere"));
Transform356.addChild(&Shape357);

HAnimSegment345.addChild(&Transform356);

Transform& Transform358 =  Transform();
Transform358.setTranslation(new float[]{-0.165,0,0.07});
Shape& Shape359 =  Shape();
Shape359.setUSE(CString("skinsphere"));
Transform358.addChild(&Shape359);

HAnimSegment345.addChild(&Transform358);

HAnimSite& HAnimSite360 =  HAnimSite();
HAnimSite360.X3DNode::setName(CString("r_metatarsal_phalanx_1_pt"));
HAnimSite360.setDEF(CString("Joe_r_metatarsal_phalanx_1_pt"));
HAnimSite360.setTranslation(new float[]{-0.115,0.02,0.122});
Shape& Shape361 =  Shape();
Shape361.setUSE(CString("sitebox"));
HAnimSite360.addChild(&Shape361);

HAnimSegment345.addChild(&HAnimSite360);

HAnimJoint344.addChildren(&HAnimSegment345);

HAnimJoint& HAnimJoint362 =  HAnimJoint();
HAnimJoint362.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint362.setDEF(CString("Joe_r_tarsal_distal_interphalangeal_2"));
HAnimJoint362.setCenter(new float[]{-0.1,0.01,0.14});
HAnimJoint362.setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
HAnimJoint362.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment363 =  HAnimSegment();
HAnimSegment363.X3DNode::setName(CString("r_tarsal_distal_phalanx_2"));
HAnimSegment363.setDEF(CString("Joe_r_tarsal_distal_phalanx_2"));
Transform& Transform364 =  Transform();
Transform364.setTranslation(new float[]{-0.1086,0.01,0.14});
Shape& Shape365 =  Shape();
Shape365.setUSE(CString("jointbox"));
Transform364.addChild(&Shape365);

HAnimSegment363.addChild(&Transform364);

Shape& Shape366 =  Shape();
Appearance& Appearance367 =  Appearance();
Appearance367.setUSE(CString("SegmentLine"));
Shape366.addChild(&Appearance367);

IndexedLineSet& IndexedLineSet368 =  IndexedLineSet();
IndexedLineSet368.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate369 =  Coordinate();
Coordinate369.setPoint(new float[]{-0.1,0.01,0.14,-0.1043,0.0016,0.2}, 6);
IndexedLineSet368.setCoord(&Coordinate369);

Shape366.setGeometry(&IndexedLineSet368);

HAnimSegment363.addChild(&Shape366);

Transform& Transform370 =  Transform();
Transform370.setTranslation(new float[]{-0.115,0.04,0.13});
Shape& Shape371 =  Shape();
Shape371.setUSE(CString("skinsphere"));
Transform370.addChild(&Shape371);

HAnimSegment363.addChild(&Transform370);

Transform& Transform372 =  Transform();
Transform372.setTranslation(new float[]{-0.125,0,0.12});
Shape& Shape373 =  Shape();
Shape373.setUSE(CString("skinsphere"));
Transform372.addChild(&Shape373);

HAnimSegment363.addChild(&Transform372);

Transform& Transform374 =  Transform();
Transform374.setTranslation(new float[]{-0.165,0,0.12});
Shape& Shape375 =  Shape();
Shape375.setUSE(CString("skinsphere"));
Transform374.addChild(&Shape375);

HAnimSegment363.addChild(&Transform374);

Transform& Transform376 =  Transform();
Transform376.setTranslation(new float[]{-0.087,0,0.122});
Shape& Shape377 =  Shape();
Shape377.setUSE(CString("skinsphere"));
Transform376.addChild(&Shape377);

HAnimSegment363.addChild(&Transform376);

Transform& Transform378 =  Transform();
Transform378.setTranslation(new float[]{-0.09,0.012,0.188});
Shape& Shape379 =  Shape();
Shape379.setUSE(CString("skinsphere"));
Transform378.addChild(&Shape379);

HAnimSegment363.addChild(&Transform378);

Transform& Transform380 =  Transform();
Transform380.setTranslation(new float[]{-0.11,0.011,0.19});
Shape& Shape381 =  Shape();
Shape381.setUSE(CString("skinsphere"));
Transform380.addChild(&Shape381);

HAnimSegment363.addChild(&Transform380);

Transform& Transform382 =  Transform();
Transform382.setTranslation(new float[]{-0.128,0.011,0.185});
Shape& Shape383 =  Shape();
Shape383.setUSE(CString("skinsphere"));
Transform382.addChild(&Shape383);

HAnimSegment363.addChild(&Transform382);

Transform& Transform384 =  Transform();
Transform384.setTranslation(new float[]{-0.142,0.011,0.178});
Shape& Shape385 =  Shape();
Shape385.setUSE(CString("skinsphere"));
Transform384.addChild(&Shape385);

HAnimSegment363.addChild(&Transform384);

Transform& Transform386 =  Transform();
Transform386.setTranslation(new float[]{-0.154,0.01,0.168});
Shape& Shape387 =  Shape();
Shape387.setUSE(CString("skinsphere"));
Transform386.addChild(&Shape387);

HAnimSegment363.addChild(&Transform386);

HAnimSite& HAnimSite388 =  HAnimSite();
HAnimSite388.X3DNode::setName(CString("r_metatarsal_phalanx_5_pt"));
HAnimSite388.setDEF(CString("Joe_r_metatarsal_phalanx_5_pt"));
HAnimSite388.setTranslation(new float[]{-0.165,0.01,0.12});
Shape& Shape389 =  Shape();
Shape389.setUSE(CString("sitebox"));
HAnimSite388.addChild(&Shape389);

HAnimSegment363.addChild(&HAnimSite388);

HAnimSite& HAnimSite390 =  HAnimSite();
HAnimSite390.X3DNode::setName(CString("r_tarsal_distal_phalanx_2_pt"));
HAnimSite390.setDEF(CString("Joe_r_tarsal_distal_phalanx_2_pt"));
HAnimSite390.setTranslation(new float[]{-0.11,0.011,0.19});
Shape& Shape391 =  Shape();
Shape391.setUSE(CString("sitebox"));
HAnimSite390.addChild(&Shape391);

HAnimSegment363.addChild(&HAnimSite390);

HAnimJoint362.addChildren(&HAnimSegment363);

HAnimJoint344.addChildren(&HAnimJoint362);

HAnimJoint330.addChildren(&HAnimJoint344);

HAnimJoint310.addChildren(&HAnimJoint330);

HAnimJoint282.addChildren(&HAnimJoint310);

HAnimJoint256.addChildren(&HAnimJoint282);

HAnimJoint90.addChildren(&HAnimJoint256);

HAnimJoint78.addChildren(&HAnimJoint90);

HAnimJoint& HAnimJoint392 =  HAnimJoint();
HAnimJoint392.X3DNode::setName(CString("vl5"));
HAnimJoint392.setDEF(CString("Joe_vl5"));
HAnimJoint392.setCenter(new float[]{0,1.045,-0.095});
HAnimJoint392.setSkinCoordIndex(new int32_t[]{28,76}, 2);
HAnimJoint392.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment393 =  HAnimSegment();
HAnimSegment393.X3DNode::setName(CString("toPelvis"));
HAnimSegment393.setDEF(CString("Joe_toPelvis"));
Shape& Shape394 =  Shape();
Appearance& Appearance395 =  Appearance();
Appearance395.setUSE(CString("SegmentLine"));
Shape394.addChild(&Appearance395);

IndexedLineSet& IndexedLineSet396 =  IndexedLineSet();
IndexedLineSet396.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate397 =  Coordinate();
Coordinate397.setPoint(new float[]{0,1.045,-0.095,0,0.9149,0.0016}, 6);
IndexedLineSet396.setCoord(&Coordinate397);

Shape394.setGeometry(&IndexedLineSet396);

HAnimSegment393.addChild(&Shape394);

HAnimJoint392.addChildren(&HAnimSegment393);

HAnimSegment& HAnimSegment398 =  HAnimSegment();
HAnimSegment398.X3DNode::setName(CString("l5"));
HAnimSegment398.setDEF(CString("Joe_l5"));
Shape& Shape399 =  Shape();
Appearance& Appearance400 =  Appearance();
Appearance400.setUSE(CString("SegmentLine"));
Shape399.addChild(&Appearance400);

IndexedLineSet& IndexedLineSet401 =  IndexedLineSet();
IndexedLineSet401.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate402 =  Coordinate();
Coordinate402.setPoint(new float[]{0,1.045,-0.095,0,1.068,-0.085}, 6);
IndexedLineSet401.setCoord(&Coordinate402);

Shape399.setGeometry(&IndexedLineSet401);

HAnimSegment398.addChild(&Shape399);

HAnimSite& HAnimSite403 =  HAnimSite();
HAnimSite403.X3DNode::setName(CString("waist_preferred_posterior_pt"));
HAnimSite403.setDEF(CString("Joe_waist_preferred_posterior_pt"));
HAnimSite403.setTranslation(new float[]{0,1.0915,-0.1091});
Shape& Shape404 =  Shape();
Shape404.setUSE(CString("sitebox"));
HAnimSite403.addChild(&Shape404);

HAnimSegment398.addChild(&HAnimSite403);

HAnimSite& HAnimSite405 =  HAnimSite();
HAnimSite405.X3DNode::setName(CString("navel_pt"));
HAnimSite405.setDEF(CString("Joe_navel_pt"));
HAnimSite405.setTranslation(new float[]{0,1.0723,0.09});
Shape& Shape406 =  Shape();
Shape406.setUSE(CString("sitebox"));
HAnimSite405.addChild(&Shape406);

HAnimSegment398.addChild(&HAnimSite405);

HAnimJoint392.addChildren(&HAnimSegment398);

HAnimJoint& HAnimJoint407 =  HAnimJoint();
HAnimJoint407.X3DNode::setName(CString("vl4"));
HAnimJoint407.setDEF(CString("Joe_vl4"));
HAnimJoint407.setCenter(new float[]{0,1.068,-0.085});
HAnimSegment& HAnimSegment408 =  HAnimSegment();
HAnimSegment408.X3DNode::setName(CString("l4"));
HAnimSegment408.setDEF(CString("Joe_l4"));
Shape& Shape409 =  Shape();
Appearance& Appearance410 =  Appearance();
Appearance410.setUSE(CString("SegmentLine"));
Shape409.addChild(&Appearance410);

IndexedLineSet& IndexedLineSet411 =  IndexedLineSet();
IndexedLineSet411.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate412 =  Coordinate();
Coordinate412.setPoint(new float[]{0,1.068,-0.085,0,1.092,-0.0725}, 6);
IndexedLineSet411.setCoord(&Coordinate412);

Shape409.setGeometry(&IndexedLineSet411);

HAnimSegment408.addChild(&Shape409);

Transform& Transform413 =  Transform();
Transform413.setTranslation(new float[]{0,1.068,-0.085});
Shape& Shape414 =  Shape();
Shape414.setUSE(CString("jointbox"));
Transform413.addChild(&Shape414);

HAnimSegment408.addChild(&Transform413);

HAnimJoint407.addChildren(&HAnimSegment408);

HAnimJoint& HAnimJoint415 =  HAnimJoint();
HAnimJoint415.X3DNode::setName(CString("vl3"));
HAnimJoint415.setDEF(CString("Joe_vl3"));
HAnimJoint415.setCenter(new float[]{0,1.092,-0.0725});
HAnimSegment& HAnimSegment416 =  HAnimSegment();
HAnimSegment416.X3DNode::setName(CString("l3"));
HAnimSegment416.setDEF(CString("Joe_l3"));
Shape& Shape417 =  Shape();
Appearance& Appearance418 =  Appearance();
Appearance418.setUSE(CString("SegmentLine"));
Shape417.addChild(&Appearance418);

IndexedLineSet& IndexedLineSet419 =  IndexedLineSet();
IndexedLineSet419.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate420 =  Coordinate();
Coordinate420.setPoint(new float[]{0,1.092,-0.0725,0,1.12,-0.065}, 6);
IndexedLineSet419.setCoord(&Coordinate420);

Shape417.setGeometry(&IndexedLineSet419);

HAnimSegment416.addChild(&Shape417);

Transform& Transform421 =  Transform();
Transform421.setTranslation(new float[]{0,1.092,-0.0725});
Shape& Shape422 =  Shape();
Shape422.setUSE(CString("jointbox"));
Transform421.addChild(&Shape422);

HAnimSegment416.addChild(&Transform421);

HAnimJoint415.addChildren(&HAnimSegment416);

HAnimJoint& HAnimJoint423 =  HAnimJoint();
HAnimJoint423.X3DNode::setName(CString("vl2"));
HAnimJoint423.setDEF(CString("Joe_vl2"));
HAnimJoint423.setCenter(new float[]{0,1.12,-0.065});
HAnimJoint423.setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
HAnimJoint423.setSkinCoordWeight(new float[]{1,1,1,1,1,1,0.7,1,0.8}, 9);
HAnimSegment& HAnimSegment424 =  HAnimSegment();
HAnimSegment424.X3DNode::setName(CString("l2"));
HAnimSegment424.setDEF(CString("Joe_l2"));
Shape& Shape425 =  Shape();
Appearance& Appearance426 =  Appearance();
Appearance426.setUSE(CString("SegmentLine"));
Shape425.addChild(&Appearance426);

IndexedLineSet& IndexedLineSet427 =  IndexedLineSet();
IndexedLineSet427.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate428 =  Coordinate();
Coordinate428.setPoint(new float[]{0,1.12,-0.065,0,1.1459,-0.0625}, 6);
IndexedLineSet427.setCoord(&Coordinate428);

Shape425.setGeometry(&IndexedLineSet427);

HAnimSegment424.addChild(&Shape425);

Transform& Transform429 =  Transform();
Transform429.setTranslation(new float[]{0,1.12,-0.065});
Shape& Shape430 =  Shape();
Shape430.setUSE(CString("jointbox"));
Transform429.addChild(&Shape430);

HAnimSegment424.addChild(&Transform429);

Transform& Transform431 =  Transform();
Transform431.setTranslation(new float[]{-0.087,1.19,-0.09});
Shape& Shape432 =  Shape();
Shape432.setUSE(CString("skinsphere"));
Transform431.addChild(&Shape432);

HAnimSegment424.addChild(&Transform431);

Transform& Transform433 =  Transform();
Transform433.setTranslation(new float[]{0.087,1.19,-0.09});
Shape& Shape434 =  Shape();
Shape434.setUSE(CString("skinsphere"));
Transform433.addChild(&Shape434);

HAnimSegment424.addChild(&Transform433);

Transform& Transform435 =  Transform();
Transform435.setTranslation(new float[]{0.172,1.32,-0.03});
Shape& Shape436 =  Shape();
Shape436.setUSE(CString("skinsphere"));
Transform435.addChild(&Shape436);

HAnimSegment424.addChild(&Transform435);

Transform& Transform437 =  Transform();
Transform437.setTranslation(new float[]{-0.172,1.32,-0.03});
Shape& Shape438 =  Shape();
Shape438.setUSE(CString("skinsphere"));
Transform437.addChild(&Shape438);

HAnimSegment424.addChild(&Transform437);

Transform& Transform439 =  Transform();
Transform439.setTranslation(new float[]{0.15,1.23,-0.015});
Shape& Shape440 =  Shape();
Shape440.setUSE(CString("skinsphere"));
Transform439.addChild(&Shape440);

HAnimSegment424.addChild(&Transform439);

Transform& Transform441 =  Transform();
Transform441.setTranslation(new float[]{-0.15,1.23,-0.015});
Shape& Shape442 =  Shape();
Shape442.setUSE(CString("skinsphere"));
Transform441.addChild(&Shape442);

HAnimSegment424.addChild(&Transform441);

HAnimSite& HAnimSite443 =  HAnimSite();
HAnimSite443.X3DNode::setName(CString("r_rib10_pt"));
HAnimSite443.setDEF(CString("Joe_r_rib10_pt"));
HAnimSite443.setTranslation(new float[]{-0.087,1.19,0.09});
Shape& Shape444 =  Shape();
Shape444.setUSE(CString("sitebox"));
HAnimSite443.addChild(&Shape444);

HAnimSegment424.addChild(&HAnimSite443);

HAnimSite& HAnimSite445 =  HAnimSite();
HAnimSite445.X3DNode::setName(CString("l_rib10_pt"));
HAnimSite445.setDEF(CString("Joe_l_rib10_pt"));
HAnimSite445.setTranslation(new float[]{0.087,1.19,0.09});
Shape& Shape446 =  Shape();
Shape446.setUSE(CString("sitebox"));
HAnimSite445.addChild(&Shape446);

HAnimSegment424.addChild(&HAnimSite445);

HAnimSite& HAnimSite447 =  HAnimSite();
HAnimSite447.X3DNode::setName(CString("rib10_midspine_pt"));
HAnimSite447.setDEF(CString("Joe_rib10_midspine_pt"));
HAnimSite447.setTranslation(new float[]{0,1.1908,-0.1113});
Shape& Shape448 =  Shape();
Shape448.setUSE(CString("sitebox"));
HAnimSite447.addChild(&Shape448);

HAnimSegment424.addChild(&HAnimSite447);

HAnimJoint423.addChildren(&HAnimSegment424);

HAnimJoint& HAnimJoint449 =  HAnimJoint();
HAnimJoint449.X3DNode::setName(CString("vl1"));
HAnimJoint449.setDEF(CString("Joe_vl1"));
HAnimJoint449.setCenter(new float[]{0,1.1459,-0.0625});
HAnimSegment& HAnimSegment450 =  HAnimSegment();
HAnimSegment450.X3DNode::setName(CString("l1"));
HAnimSegment450.setDEF(CString("Joe_l1"));
Shape& Shape451 =  Shape();
Appearance& Appearance452 =  Appearance();
Appearance452.setUSE(CString("SegmentLine"));
Shape451.addChild(&Appearance452);

IndexedLineSet& IndexedLineSet453 =  IndexedLineSet();
IndexedLineSet453.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate454 =  Coordinate();
Coordinate454.setPoint(new float[]{0,1.1459,-0.0625,0,1.179,-0.068}, 6);
IndexedLineSet453.setCoord(&Coordinate454);

Shape451.setGeometry(&IndexedLineSet453);

HAnimSegment450.addChild(&Shape451);

Transform& Transform455 =  Transform();
Transform455.setTranslation(new float[]{0,1.1459,-0.0625});
Shape& Shape456 =  Shape();
Shape456.setUSE(CString("jointbox"));
Transform455.addChild(&Shape456);

HAnimSegment450.addChild(&Transform455);

HAnimJoint449.addChildren(&HAnimSegment450);

HAnimJoint& HAnimJoint457 =  HAnimJoint();
HAnimJoint457.X3DNode::setName(CString("vt12"));
HAnimJoint457.setDEF(CString("Joe_vt12"));
HAnimJoint457.setCenter(new float[]{0,1.179,-0.068});
HAnimSegment& HAnimSegment458 =  HAnimSegment();
HAnimSegment458.X3DNode::setName(CString("t12"));
HAnimSegment458.setDEF(CString("Joe_t12"));
Shape& Shape459 =  Shape();
Appearance& Appearance460 =  Appearance();
Appearance460.setUSE(CString("SegmentLine"));
Shape459.addChild(&Appearance460);

IndexedLineSet& IndexedLineSet461 =  IndexedLineSet();
IndexedLineSet461.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate462 =  Coordinate();
Coordinate462.setPoint(new float[]{0,1.179,-0.068,0,1.242,-0.09}, 6);
IndexedLineSet461.setCoord(&Coordinate462);

Shape459.setGeometry(&IndexedLineSet461);

HAnimSegment458.addChild(&Shape459);

Transform& Transform463 =  Transform();
Transform463.setTranslation(new float[]{0,1.179,-0.068});
Shape& Shape464 =  Shape();
Shape464.setUSE(CString("jointbox"));
Transform463.addChild(&Shape464);

HAnimSegment458.addChild(&Transform463);

HAnimJoint457.addChildren(&HAnimSegment458);

HAnimJoint& HAnimJoint465 =  HAnimJoint();
HAnimJoint465.X3DNode::setName(CString("vt11"));
HAnimJoint465.setDEF(CString("Joe_vt11"));
HAnimJoint465.setCenter(new float[]{0,1.2679,-0.081});
HAnimSegment& HAnimSegment466 =  HAnimSegment();
HAnimSegment466.X3DNode::setName(CString("t11"));
HAnimSegment466.setDEF(CString("Joe_t11"));
Shape& Shape467 =  Shape();
Appearance& Appearance468 =  Appearance();
Appearance468.setUSE(CString("SegmentLine"));
Shape467.addChild(&Appearance468);

IndexedLineSet& IndexedLineSet469 =  IndexedLineSet();
IndexedLineSet469.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate470 =  Coordinate();
Coordinate470.setPoint(new float[]{0,1.2145,-0.0755,0,1.242,-0.09}, 6);
IndexedLineSet469.setCoord(&Coordinate470);

Shape467.setGeometry(&IndexedLineSet469);

HAnimSegment466.addChild(&Shape467);

Transform& Transform471 =  Transform();
Transform471.setTranslation(new float[]{0,1.2145,-0.0755});
Shape& Shape472 =  Shape();
Shape472.setUSE(CString("jointbox"));
Transform471.addChild(&Shape472);

HAnimSegment466.addChild(&Transform471);

HAnimJoint465.addChildren(&HAnimSegment466);

HAnimJoint& HAnimJoint473 =  HAnimJoint();
HAnimJoint473.X3DNode::setName(CString("vt10"));
HAnimJoint473.setDEF(CString("Joe_vt10"));
HAnimJoint473.setCenter(new float[]{0,1.242,-0.09});
HAnimJoint473.setSkinCoordIndex(new int32_t[]{15}, 1);
HAnimJoint473.setSkinCoordWeight(new float[]{1}, 1);
HAnimSegment& HAnimSegment474 =  HAnimSegment();
HAnimSegment474.X3DNode::setName(CString("t10"));
HAnimSegment474.setDEF(CString("Joe_t10"));
Shape& Shape475 =  Shape();
Appearance& Appearance476 =  Appearance();
Appearance476.setUSE(CString("SegmentLine"));
Shape475.addChild(&Appearance476);

IndexedLineSet& IndexedLineSet477 =  IndexedLineSet();
IndexedLineSet477.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate478 =  Coordinate();
Coordinate478.setPoint(new float[]{0,1.242,-0.09,0,1.268,-0.1}, 6);
IndexedLineSet477.setCoord(&Coordinate478);

Shape475.setGeometry(&IndexedLineSet477);

HAnimSegment474.addChild(&Shape475);

Transform& Transform479 =  Transform();
Transform479.setTranslation(new float[]{0,1.242,-0.09});
Shape& Shape480 =  Shape();
Shape480.setUSE(CString("jointbox"));
Transform479.addChild(&Shape480);

HAnimSegment474.addChild(&Transform479);

HAnimSite& HAnimSite481 =  HAnimSite();
HAnimSite481.X3DNode::setName(CString("substernale_pt"));
HAnimSite481.setDEF(CString("Joe_substernale_pt"));
HAnimSite481.setTranslation(new float[]{0,1.25,0.113});
Shape& Shape482 =  Shape();
Shape482.setUSE(CString("sitebox"));
HAnimSite481.addChild(&Shape482);

HAnimSegment474.addChild(&HAnimSite481);

HAnimJoint473.addChildren(&HAnimSegment474);

HAnimJoint& HAnimJoint483 =  HAnimJoint();
HAnimJoint483.X3DNode::setName(CString("vt9"));
HAnimJoint483.setDEF(CString("Joe_vt9"));
HAnimJoint483.setCenter(new float[]{0,1.268,-0.1});
HAnimJoint483.setSkinCoordIndex(new int32_t[]{13,14}, 2);
HAnimJoint483.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment484 =  HAnimSegment();
HAnimSegment484.X3DNode::setName(CString("t9"));
HAnimSegment484.setDEF(CString("Joe_t9"));
Shape& Shape485 =  Shape();
Appearance& Appearance486 =  Appearance();
Appearance486.setUSE(CString("SegmentLine"));
Shape485.addChild(&Appearance486);

IndexedLineSet& IndexedLineSet487 =  IndexedLineSet();
IndexedLineSet487.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate488 =  Coordinate();
Coordinate488.setPoint(new float[]{0,1.268,-0.1,0,1.294,-0.11}, 6);
IndexedLineSet487.setCoord(&Coordinate488);

Shape485.setGeometry(&IndexedLineSet487);

HAnimSegment484.addChild(&Shape485);

Transform& Transform489 =  Transform();
Transform489.setTranslation(new float[]{0,1.268,-0.1});
Shape& Shape490 =  Shape();
Shape490.setUSE(CString("jointbox"));
Transform489.addChild(&Shape490);

HAnimSegment484.addChild(&Transform489);

HAnimSite& HAnimSite491 =  HAnimSite();
HAnimSite491.X3DNode::setName(CString("r_thelion_pt"));
HAnimSite491.setDEF(CString("Joe_r_thelion_pt"));
HAnimSite491.setTranslation(new float[]{-0.1135,1.318,0.095});
Shape& Shape492 =  Shape();
Shape492.setUSE(CString("sitebox"));
HAnimSite491.addChild(&Shape492);

HAnimSegment484.addChild(&HAnimSite491);

HAnimSite& HAnimSite493 =  HAnimSite();
HAnimSite493.X3DNode::setName(CString("l_thelion_pt"));
HAnimSite493.setDEF(CString("Joe_l_thelion_pt"));
HAnimSite493.setTranslation(new float[]{0.1135,1.318,0.095});
Shape& Shape494 =  Shape();
Shape494.setUSE(CString("sitebox"));
HAnimSite493.addChild(&Shape494);

HAnimSegment484.addChild(&HAnimSite493);

HAnimJoint483.addChildren(&HAnimSegment484);

HAnimJoint& HAnimJoint495 =  HAnimJoint();
HAnimJoint495.X3DNode::setName(CString("vt8"));
HAnimJoint495.setDEF(CString("Joe_vt8"));
HAnimJoint495.setCenter(new float[]{0,1.294,-0.11});
HAnimSegment& HAnimSegment496 =  HAnimSegment();
HAnimSegment496.X3DNode::setName(CString("t8"));
HAnimSegment496.setDEF(CString("Joe_t8"));
Shape& Shape497 =  Shape();
Appearance& Appearance498 =  Appearance();
Appearance498.setUSE(CString("SegmentLine"));
Shape497.addChild(&Appearance498);

IndexedLineSet& IndexedLineSet499 =  IndexedLineSet();
IndexedLineSet499.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate500 =  Coordinate();
Coordinate500.setPoint(new float[]{0,1.294,-0.11,0,1.352,-0.12}, 6);
IndexedLineSet499.setCoord(&Coordinate500);

Shape497.setGeometry(&IndexedLineSet499);

HAnimSegment496.addChild(&Shape497);

Transform& Transform501 =  Transform();
Transform501.setTranslation(new float[]{0,1.294,-0.11});
Shape& Shape502 =  Shape();
Shape502.setUSE(CString("jointbox"));
Transform501.addChild(&Shape502);

HAnimSegment496.addChild(&Transform501);

HAnimJoint495.addChildren(&HAnimSegment496);

HAnimJoint& HAnimJoint503 =  HAnimJoint();
HAnimJoint503.X3DNode::setName(CString("vt7"));
HAnimJoint503.setDEF(CString("Joe_vt7"));
HAnimJoint503.setCenter(new float[]{0,1.323,-0.1155});
HAnimSegment& HAnimSegment504 =  HAnimSegment();
HAnimSegment504.X3DNode::setName(CString("t7"));
HAnimSegment504.setDEF(CString("Joe_t7"));
Shape& Shape505 =  Shape();
Appearance& Appearance506 =  Appearance();
Appearance506.setUSE(CString("SegmentLine"));
Shape505.addChild(&Appearance506);

IndexedLineSet& IndexedLineSet507 =  IndexedLineSet();
IndexedLineSet507.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate508 =  Coordinate();
Coordinate508.setPoint(new float[]{0,1.352,-0.12,0,1.381,-0.1235}, 6);
IndexedLineSet507.setCoord(&Coordinate508);

Shape505.setGeometry(&IndexedLineSet507);

HAnimSegment504.addChild(&Shape505);

Transform& Transform509 =  Transform();
Transform509.setTranslation(new float[]{0,1.323,-0.1155});
Shape& Shape510 =  Shape();
Shape510.setUSE(CString("jointbox"));
Transform509.addChild(&Shape510);

HAnimSegment504.addChild(&Transform509);

HAnimJoint503.addChildren(&HAnimSegment504);

HAnimJoint& HAnimJoint511 =  HAnimJoint();
HAnimJoint511.X3DNode::setName(CString("vt6"));
HAnimJoint511.setDEF(CString("Joe_vt6"));
HAnimJoint511.setCenter(new float[]{0,1.352,-0.12});
HAnimSegment& HAnimSegment512 =  HAnimSegment();
HAnimSegment512.X3DNode::setName(CString("t6"));
HAnimSegment512.setDEF(CString("Joe_t6"));
Shape& Shape513 =  Shape();
Appearance& Appearance514 =  Appearance();
Appearance514.setUSE(CString("SegmentLine"));
Shape513.addChild(&Appearance514);

IndexedLineSet& IndexedLineSet515 =  IndexedLineSet();
IndexedLineSet515.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate516 =  Coordinate();
Coordinate516.setPoint(new float[]{0,1.381,-0.1235,0,1.41,-0.1235}, 6);
IndexedLineSet515.setCoord(&Coordinate516);

Shape513.setGeometry(&IndexedLineSet515);

HAnimSegment512.addChild(&Shape513);

Transform& Transform517 =  Transform();
Transform517.setTranslation(new float[]{0,1.352,-0.12});
Shape& Shape518 =  Shape();
Shape518.setUSE(CString("jointbox"));
Transform517.addChild(&Shape518);

HAnimSegment512.addChild(&Transform517);

HAnimJoint511.addChildren(&HAnimSegment512);

HAnimJoint& HAnimJoint519 =  HAnimJoint();
HAnimJoint519.X3DNode::setName(CString("vt5"));
HAnimJoint519.setDEF(CString("Joe_vt5"));
HAnimJoint519.setCenter(new float[]{0,1.381,-0.1235});
HAnimSegment& HAnimSegment520 =  HAnimSegment();
HAnimSegment520.X3DNode::setName(CString("t5"));
HAnimSegment520.setDEF(CString("Joe_t5"));
Shape& Shape521 =  Shape();
Appearance& Appearance522 =  Appearance();
Appearance522.setUSE(CString("SegmentLine"));
Shape521.addChild(&Appearance522);

IndexedLineSet& IndexedLineSet523 =  IndexedLineSet();
IndexedLineSet523.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate524 =  Coordinate();
Coordinate524.setPoint(new float[]{0,1.41,-0.1235,0,1.438,-0.12}, 6);
IndexedLineSet523.setCoord(&Coordinate524);

Shape521.setGeometry(&IndexedLineSet523);

HAnimSegment520.addChild(&Shape521);

Transform& Transform525 =  Transform();
Transform525.setTranslation(new float[]{0,1.381,-0.1235});
Shape& Shape526 =  Shape();
Shape526.setUSE(CString("jointbox"));
Transform525.addChild(&Shape526);

HAnimSegment520.addChild(&Transform525);

HAnimJoint519.addChildren(&HAnimSegment520);

HAnimJoint& HAnimJoint527 =  HAnimJoint();
HAnimJoint527.X3DNode::setName(CString("vt4"));
HAnimJoint527.setDEF(CString("Joe_vt4"));
HAnimJoint527.setCenter(new float[]{0,1.41,-0.1235});
HAnimJoint527.setSkinCoordIndex(new int32_t[]{81}, 1);
HAnimJoint527.setSkinCoordWeight(new float[]{1}, 1);
HAnimSegment& HAnimSegment528 =  HAnimSegment();
HAnimSegment528.X3DNode::setName(CString("t4"));
HAnimSegment528.setDEF(CString("Joe_t4"));
Shape& Shape529 =  Shape();
Appearance& Appearance530 =  Appearance();
Appearance530.setUSE(CString("SegmentLine"));
Shape529.addChild(&Appearance530);

IndexedLineSet& IndexedLineSet531 =  IndexedLineSet();
IndexedLineSet531.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate532 =  Coordinate();
Coordinate532.setPoint(new float[]{0,1.41,-0.1235,0,1.438,-0.12}, 6);
IndexedLineSet531.setCoord(&Coordinate532);

Shape529.setGeometry(&IndexedLineSet531);

HAnimSegment528.addChild(&Shape529);

Transform& Transform533 =  Transform();
Transform533.setTranslation(new float[]{0,1.41,-0.1235});
Shape& Shape534 =  Shape();
Shape534.setUSE(CString("jointbox"));
Transform533.addChild(&Shape534);

HAnimSegment528.addChild(&Transform533);

Transform& Transform535 =  Transform();
Transform535.setTranslation(new float[]{0,1.41,-0.145});
Shape& Shape536 =  Shape();
Shape536.setUSE(CString("skinsphere"));
Transform535.addChild(&Shape536);

HAnimSegment528.addChild(&Transform535);

HAnimJoint527.addChildren(&HAnimSegment528);

HAnimJoint& HAnimJoint537 =  HAnimJoint();
HAnimJoint537.X3DNode::setName(CString("vt3"));
HAnimJoint537.setDEF(CString("Joe_vt3"));
HAnimJoint537.setCenter(new float[]{0,1.438,-0.12});
HAnimSegment& HAnimSegment538 =  HAnimSegment();
HAnimSegment538.X3DNode::setName(CString("t3"));
HAnimSegment538.setDEF(CString("Joe_t3"));
Shape& Shape539 =  Shape();
Appearance& Appearance540 =  Appearance();
Appearance540.setUSE(CString("SegmentLine"));
Shape539.addChild(&Appearance540);

IndexedLineSet& IndexedLineSet541 =  IndexedLineSet();
IndexedLineSet541.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate542 =  Coordinate();
Coordinate542.setPoint(new float[]{0,1.438,-0.12,0,1.468,-0.105}, 6);
IndexedLineSet541.setCoord(&Coordinate542);

Shape539.setGeometry(&IndexedLineSet541);

HAnimSegment538.addChild(&Shape539);

Transform& Transform543 =  Transform();
Transform543.setTranslation(new float[]{0,1.438,-0.12});
Shape& Shape544 =  Shape();
Shape544.setUSE(CString("jointbox"));
Transform543.addChild(&Shape544);

HAnimSegment538.addChild(&Transform543);

HAnimJoint537.addChildren(&HAnimSegment538);

HAnimJoint& HAnimJoint545 =  HAnimJoint();
HAnimJoint545.X3DNode::setName(CString("vt2"));
HAnimJoint545.setDEF(CString("Joe_vt2"));
HAnimJoint545.setCenter(new float[]{0,1.468,-0.105});
HAnimSegment& HAnimSegment546 =  HAnimSegment();
HAnimSegment546.X3DNode::setName(CString("t2"));
HAnimSegment546.setDEF(CString("Joe_t2"));
Shape& Shape547 =  Shape();
Appearance& Appearance548 =  Appearance();
Appearance548.setUSE(CString("SegmentLine"));
Shape547.addChild(&Appearance548);

IndexedLineSet& IndexedLineSet549 =  IndexedLineSet();
IndexedLineSet549.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate550 =  Coordinate();
Coordinate550.setPoint(new float[]{0,1.468,-0.105,0,1.497,-0.09}, 6);
IndexedLineSet549.setCoord(&Coordinate550);

Shape547.setGeometry(&IndexedLineSet549);

HAnimSegment546.addChild(&Shape547);

Transform& Transform551 =  Transform();
Transform551.setTranslation(new float[]{0,1.468,-0.105});
Shape& Shape552 =  Shape();
Shape552.setUSE(CString("jointbox"));
Transform551.addChild(&Shape552);

HAnimSegment546.addChild(&Transform551);

HAnimJoint545.addChildren(&HAnimSegment546);

HAnimJoint& HAnimJoint553 =  HAnimJoint();
HAnimJoint553.X3DNode::setName(CString("vt1"));
HAnimJoint553.setDEF(CString("Joe_vt1"));
HAnimJoint553.setCenter(new float[]{0,1.497,-0.09});
HAnimJoint553.setSkinCoordIndex(new int32_t[]{11,24}, 2);
HAnimJoint553.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment554 =  HAnimSegment();
HAnimSegment554.X3DNode::setName(CString("t1"));
HAnimSegment554.setDEF(CString("Joe_t1"));
Shape& Shape555 =  Shape();
Appearance& Appearance556 =  Appearance();
Appearance556.setUSE(CString("SegmentLine"));
Shape555.addChild(&Appearance556);

IndexedLineSet& IndexedLineSet557 =  IndexedLineSet();
IndexedLineSet557.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate558 =  Coordinate();
Coordinate558.setPoint(new float[]{0,1.497,-0.09,0,1.525,-0.072}, 6);
IndexedLineSet557.setCoord(&Coordinate558);

Shape555.setGeometry(&IndexedLineSet557);

HAnimSegment554.addChild(&Shape555);

Transform& Transform559 =  Transform();
Transform559.setTranslation(new float[]{0,1.497,-0.09});
Shape& Shape560 =  Shape();
Shape560.setUSE(CString("jointbox"));
Transform559.addChild(&Shape560);

HAnimSegment554.addChild(&Transform559);

HAnimSite& HAnimSite561 =  HAnimSite();
HAnimSite561.X3DNode::setName(CString("suprasternale_pt"));
HAnimSite561.setDEF(CString("Joe_suprasternale_pt"));
HAnimSite561.setTranslation(new float[]{0,1.44,0.03});
Shape& Shape562 =  Shape();
Shape562.setUSE(CString("sitebox"));
HAnimSite561.addChild(&Shape562);

HAnimSegment554.addChild(&HAnimSite561);

HAnimSite& HAnimSite563 =  HAnimSite();
HAnimSite563.X3DNode::setName(CString("cervicale_pt"));
HAnimSite563.setDEF(CString("Joe_cervicale_pt"));
HAnimSite563.setTranslation(new float[]{0,1.53,-0.084});
Shape& Shape564 =  Shape();
Shape564.setUSE(CString("sitebox"));
HAnimSite563.addChild(&Shape564);

HAnimSegment554.addChild(&HAnimSite563);

HAnimJoint553.addChildren(&HAnimSegment554);

HAnimJoint& HAnimJoint565 =  HAnimJoint();
HAnimJoint565.X3DNode::setName(CString("vc7"));
HAnimJoint565.setDEF(CString("Joe_vc7"));
HAnimJoint565.setCenter(new float[]{0,1.525,-0.072});
HAnimJoint565.setSkinCoordIndex(new int32_t[]{74,75}, 2);
HAnimJoint565.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment566 =  HAnimSegment();
HAnimSegment566.X3DNode::setName(CString("c7"));
HAnimSegment566.setDEF(CString("Joe_c7"));
Shape& Shape567 =  Shape();
Appearance& Appearance568 =  Appearance();
Appearance568.setUSE(CString("SegmentLine"));
Shape567.addChild(&Appearance568);

IndexedLineSet& IndexedLineSet569 =  IndexedLineSet();
IndexedLineSet569.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate570 =  Coordinate();
Coordinate570.setPoint(new float[]{0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0,1.54,-0.05}, 12);
IndexedLineSet569.setCoord(&Coordinate570);

Shape567.setGeometry(&IndexedLineSet569);

HAnimSegment566.addChild(&Shape567);

Transform& Transform571 =  Transform();
Transform571.setTranslation(new float[]{0,1.525,-0.072});
Shape& Shape572 =  Shape();
Shape572.setUSE(CString("jointbox"));
Transform571.addChild(&Shape572);

HAnimSegment566.addChild(&Transform571);

HAnimSite& HAnimSite573 =  HAnimSite();
HAnimSite573.X3DNode::setName(CString("r_neck_base_pt"));
HAnimSite573.setDEF(CString("Joe_r_neck_base_pt"));
HAnimSite573.setTranslation(new float[]{-0.0646,1.5149,-0.0385});
Shape& Shape574 =  Shape();
Shape574.setUSE(CString("sitebox"));
HAnimSite573.addChild(&Shape574);

HAnimSegment566.addChild(&HAnimSite573);

HAnimSite& HAnimSite575 =  HAnimSite();
HAnimSite575.X3DNode::setName(CString("l_neck_base_pt"));
HAnimSite575.setDEF(CString("Joe_l_neck_base_pt"));
HAnimSite575.setTranslation(new float[]{0.0646,1.5149,-0.0385});
Shape& Shape576 =  Shape();
Shape576.setUSE(CString("sitebox"));
HAnimSite575.addChild(&Shape576);

HAnimSegment566.addChild(&HAnimSite575);

HAnimJoint565.addChildren(&HAnimSegment566);

HAnimJoint& HAnimJoint577 =  HAnimJoint();
HAnimJoint577.X3DNode::setName(CString("vc6"));
HAnimJoint577.setDEF(CString("Joe_vc6"));
HAnimJoint577.setCenter(new float[]{0,1.54,-0.05});
HAnimSegment& HAnimSegment578 =  HAnimSegment();
HAnimSegment578.X3DNode::setName(CString("c6"));
HAnimSegment578.setDEF(CString("Joe_c6"));
Shape& Shape579 =  Shape();
Appearance& Appearance580 =  Appearance();
Appearance580.setUSE(CString("SegmentLine"));
Shape579.addChild(&Appearance580);

IndexedLineSet& IndexedLineSet581 =  IndexedLineSet();
IndexedLineSet581.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate582 =  Coordinate();
Coordinate582.setPoint(new float[]{0,1.54,-0.05,0,1.5675,-0.0256}, 6);
IndexedLineSet581.setCoord(&Coordinate582);

Shape579.setGeometry(&IndexedLineSet581);

HAnimSegment578.addChild(&Shape579);

Transform& Transform583 =  Transform();
Transform583.setTranslation(new float[]{0,1.54,-0.05});
Shape& Shape584 =  Shape();
Shape584.setUSE(CString("jointbox"));
Transform583.addChild(&Shape584);

HAnimSegment578.addChild(&Transform583);

HAnimJoint577.addChildren(&HAnimSegment578);

HAnimJoint& HAnimJoint585 =  HAnimJoint();
HAnimJoint585.X3DNode::setName(CString("vc5"));
HAnimJoint585.setDEF(CString("Joe_vc5"));
HAnimJoint585.setCenter(new float[]{0,1.552,-0.035});
HAnimSegment& HAnimSegment586 =  HAnimSegment();
HAnimSegment586.X3DNode::setName(CString("c5"));
HAnimSegment586.setDEF(CString("Joe_c5"));
Transform& Transform587 =  Transform();
Transform587.setTranslation(new float[]{0,1.552,-0.035});
Shape& Shape588 =  Shape();
Shape588.setUSE(CString("jointbox"));
Transform587.addChild(&Shape588);

HAnimSegment586.addChild(&Transform587);

Shape& Shape589 =  Shape();
Appearance& Appearance590 =  Appearance();
Appearance590.setUSE(CString("SegmentLine"));
Shape589.addChild(&Appearance590);

IndexedLineSet& IndexedLineSet591 =  IndexedLineSet();
IndexedLineSet591.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate592 =  Coordinate();
Coordinate592.setPoint(new float[]{0,1.5675,-0.0256,0,1.5823,-0.0185}, 6);
IndexedLineSet591.setCoord(&Coordinate592);

Shape589.setGeometry(&IndexedLineSet591);

HAnimSegment586.addChild(&Shape589);

HAnimJoint585.addChildren(&HAnimSegment586);

HAnimJoint& HAnimJoint593 =  HAnimJoint();
HAnimJoint593.X3DNode::setName(CString("vc4"));
HAnimJoint593.setDEF(CString("Joe_vc4"));
HAnimJoint593.setCenter(new float[]{0,1.5675,-0.0256});
HAnimSegment& HAnimSegment594 =  HAnimSegment();
HAnimSegment594.X3DNode::setName(CString("c4"));
HAnimSegment594.setDEF(CString("Joe_c4"));
Shape& Shape595 =  Shape();
Appearance& Appearance596 =  Appearance();
Appearance596.setUSE(CString("SegmentLine"));
Shape595.addChild(&Appearance596);

IndexedLineSet& IndexedLineSet597 =  IndexedLineSet();
IndexedLineSet597.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate598 =  Coordinate();
Coordinate598.setPoint(new float[]{0,1.5823,-0.0185,0,1.595,-0.0175}, 6);
IndexedLineSet597.setCoord(&Coordinate598);

Shape595.setGeometry(&IndexedLineSet597);

HAnimSegment594.addChild(&Shape595);

Transform& Transform599 =  Transform();
Transform599.setTranslation(new float[]{0,1.5675,-0.0256});
Shape& Shape600 =  Shape();
Shape600.setUSE(CString("jointbox"));
Transform599.addChild(&Shape600);

HAnimSegment594.addChild(&Transform599);

HAnimJoint593.addChildren(&HAnimSegment594);

HAnimJoint& HAnimJoint601 =  HAnimJoint();
HAnimJoint601.X3DNode::setName(CString("vc3"));
HAnimJoint601.setDEF(CString("Joe_vc3"));
HAnimJoint601.setCenter(new float[]{0,1.5823,-0.0185});
HAnimSegment& HAnimSegment602 =  HAnimSegment();
HAnimSegment602.X3DNode::setName(CString("c3"));
HAnimSegment602.setDEF(CString("Joe_c3"));
Shape& Shape603 =  Shape();
Appearance& Appearance604 =  Appearance();
Appearance604.setUSE(CString("SegmentLine"));
Shape603.addChild(&Appearance604);

IndexedLineSet& IndexedLineSet605 =  IndexedLineSet();
IndexedLineSet605.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate606 =  Coordinate();
Coordinate606.setPoint(new float[]{0,1.595,-0.0175,0,1.61,-0.015}, 6);
IndexedLineSet605.setCoord(&Coordinate606);

Shape603.setGeometry(&IndexedLineSet605);

HAnimSegment602.addChild(&Shape603);

Transform& Transform607 =  Transform();
Transform607.setTranslation(new float[]{0,1.5823,-0.0185});
Shape& Shape608 =  Shape();
Shape608.setUSE(CString("jointbox"));
Transform607.addChild(&Shape608);

HAnimSegment602.addChild(&Transform607);

HAnimJoint601.addChildren(&HAnimSegment602);

HAnimJoint& HAnimJoint609 =  HAnimJoint();
HAnimJoint609.X3DNode::setName(CString("vc2"));
HAnimJoint609.setDEF(CString("Joe_vc2"));
HAnimJoint609.setCenter(new float[]{0,1.595,-0.0175});
HAnimSegment& HAnimSegment610 =  HAnimSegment();
HAnimSegment610.X3DNode::setName(CString("c2"));
HAnimSegment610.setDEF(CString("Joe_c2"));
Shape& Shape611 =  Shape();
Appearance& Appearance612 =  Appearance();
Appearance612.setUSE(CString("SegmentLine"));
Shape611.addChild(&Appearance612);

IndexedLineSet& IndexedLineSet613 =  IndexedLineSet();
IndexedLineSet613.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate614 =  Coordinate();
Coordinate614.setPoint(new float[]{0,1.61,-0.015,0,1.6144,-0.0034}, 6);
IndexedLineSet613.setCoord(&Coordinate614);

Shape611.setGeometry(&IndexedLineSet613);

HAnimSegment610.addChild(&Shape611);

Transform& Transform615 =  Transform();
Transform615.setTranslation(new float[]{0,1.595,-0.0175});
Shape& Shape616 =  Shape();
Shape616.setUSE(CString("jointbox"));
Transform615.addChild(&Shape616);

HAnimSegment610.addChild(&Transform615);

HAnimJoint609.addChildren(&HAnimSegment610);

HAnimJoint& HAnimJoint617 =  HAnimJoint();
HAnimJoint617.X3DNode::setName(CString("vc1"));
HAnimJoint617.setDEF(CString("Joe_vc1"));
HAnimJoint617.setCenter(new float[]{0,1.61,-0.015});
HAnimSegment& HAnimSegment618 =  HAnimSegment();
HAnimSegment618.X3DNode::setName(CString("c1"));
HAnimSegment618.setDEF(CString("Joe_c1"));
Shape& Shape619 =  Shape();
Appearance& Appearance620 =  Appearance();
Appearance620.setUSE(CString("SegmentLine"));
Shape619.addChild(&Appearance620);

IndexedLineSet& IndexedLineSet621 =  IndexedLineSet();
IndexedLineSet621.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate622 =  Coordinate();
Coordinate622.setPoint(new float[]{0,1.6144,-0.0034,0,1.63,-0.01}, 6);
IndexedLineSet621.setCoord(&Coordinate622);

Shape619.setGeometry(&IndexedLineSet621);

HAnimSegment618.addChild(&Shape619);

Transform& Transform623 =  Transform();
Transform623.setTranslation(new float[]{0,1.61,-0.015});
Shape& Shape624 =  Shape();
Shape624.setUSE(CString("jointbox"));
Transform623.addChild(&Shape624);

HAnimSegment618.addChild(&Transform623);

HAnimJoint617.addChildren(&HAnimSegment618);

HAnimJoint& HAnimJoint625 =  HAnimJoint();
HAnimJoint625.X3DNode::setName(CString("skullbase"));
HAnimJoint625.setDEF(CString("Joe_skullbase"));
HAnimJoint625.setCenter(new float[]{0,1.63,-0.01});
HAnimJoint625.setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimJoint625.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1}, 10);
HAnimSegment& HAnimSegment626 =  HAnimSegment();
HAnimSegment626.X3DNode::setName(CString("skull"));
HAnimSegment626.setDEF(CString("Joe_skull"));
Shape& Shape627 =  Shape();
Appearance& Appearance628 =  Appearance();
Appearance628.setUSE(CString("SegmentLine"));
Shape627.addChild(&Appearance628);

IndexedLineSet& IndexedLineSet629 =  IndexedLineSet();
IndexedLineSet629.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1}, 6);
Coordinate& Coordinate630 =  Coordinate();
Coordinate630.setPoint(new float[]{0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065}, 9);
IndexedLineSet629.setCoord(&Coordinate630);

Shape627.setGeometry(&IndexedLineSet629);

HAnimSegment626.addChild(&Shape627);

Transform& Transform631 =  Transform();
Transform631.setTranslation(new float[]{0,1.63,-0.01});
Shape& Shape632 =  Shape();
Shape632.setUSE(CString("jointbox"));
Transform631.addChild(&Shape632);

HAnimSegment626.addChild(&Transform631);

HAnimSite& HAnimSite633 =  HAnimSite();
HAnimSite633.X3DNode::setName(CString("skull_vertex_tip"));
HAnimSite633.setDEF(CString("Joe_skull_vertex_tip"));
HAnimSite633.setTranslation(new float[]{0,1.77,0});
Shape& Shape634 =  Shape();
Shape634.setUSE(CString("sitebox"));
HAnimSite633.addChild(&Shape634);

HAnimSegment626.addChild(&HAnimSite633);

HAnimSite& HAnimSite635 =  HAnimSite();
HAnimSite635.X3DNode::setName(CString("sellion_pt"));
HAnimSite635.setDEF(CString("Joe_sellion_pt"));
HAnimSite635.setTranslation(new float[]{0,1.665,0.09});
Shape& Shape636 =  Shape();
Shape636.setUSE(CString("sitebox"));
HAnimSite635.addChild(&Shape636);

HAnimSegment626.addChild(&HAnimSite635);

HAnimSite& HAnimSite637 =  HAnimSite();
HAnimSite637.X3DNode::setName(CString("r_infraorbitale_pt"));
HAnimSite637.setDEF(CString("Joe_r_infraorbitale_pt"));
HAnimSite637.setTranslation(new float[]{-0.033,1.62,0.087});
Shape& Shape638 =  Shape();
Shape638.setUSE(CString("sitebox"));
HAnimSite637.addChild(&Shape638);

HAnimSegment626.addChild(&HAnimSite637);

HAnimSite& HAnimSite639 =  HAnimSite();
HAnimSite639.X3DNode::setName(CString("l_infraorbitale_pt"));
HAnimSite639.setDEF(CString("Joe_l_infraorbitale_pt"));
HAnimSite639.setTranslation(new float[]{0.033,1.62,0.087});
Shape& Shape640 =  Shape();
Shape640.setUSE(CString("sitebox"));
HAnimSite639.addChild(&Shape640);

HAnimSegment626.addChild(&HAnimSite639);

HAnimSite& HAnimSite641 =  HAnimSite();
HAnimSite641.X3DNode::setName(CString("supramenton_pt"));
HAnimSite641.setDEF(CString("Joe_supramenton_pt"));
HAnimSite641.setTranslation(new float[]{0,1.55,0.097});
Shape& Shape642 =  Shape();
Shape642.setUSE(CString("sitebox"));
HAnimSite641.addChild(&Shape642);

HAnimSegment626.addChild(&HAnimSite641);

HAnimSite& HAnimSite643 =  HAnimSite();
HAnimSite643.X3DNode::setName(CString("r_tragion_pt"));
HAnimSite643.setDEF(CString("Joe_r_tragion_pt"));
HAnimSite643.setTranslation(new float[]{-0.077,1.64,-0.01});
Shape& Shape644 =  Shape();
Shape644.setUSE(CString("sitebox"));
HAnimSite643.addChild(&Shape644);

HAnimSegment626.addChild(&HAnimSite643);

HAnimSite& HAnimSite645 =  HAnimSite();
HAnimSite645.X3DNode::setName(CString("r_gonion_pt"));
HAnimSite645.setDEF(CString("Joe_r_gonion_pt"));
HAnimSite645.setTranslation(new float[]{-0.052,1.58,0.015});
Shape& Shape646 =  Shape();
Shape646.setUSE(CString("sitebox"));
HAnimSite645.addChild(&Shape646);

HAnimSegment626.addChild(&HAnimSite645);

HAnimSite& HAnimSite647 =  HAnimSite();
HAnimSite647.X3DNode::setName(CString("l_tragion_pt"));
HAnimSite647.setDEF(CString("Joe_l_tragion_pt"));
HAnimSite647.setTranslation(new float[]{0.077,1.64,-0.01});
Shape& Shape648 =  Shape();
Shape648.setUSE(CString("sitebox"));
HAnimSite647.addChild(&Shape648);

HAnimSegment626.addChild(&HAnimSite647);

HAnimSite& HAnimSite649 =  HAnimSite();
HAnimSite649.X3DNode::setName(CString("l_gonion_pt"));
HAnimSite649.setDEF(CString("Joe_l_gonion_pt"));
HAnimSite649.setTranslation(new float[]{0.0631,1.58,0.015});
Shape& Shape650 =  Shape();
Shape650.setUSE(CString("sitebox"));
HAnimSite649.addChild(&Shape650);

HAnimSegment626.addChild(&HAnimSite649);

HAnimSite& HAnimSite651 =  HAnimSite();
HAnimSite651.X3DNode::setName(CString("nuchale_pt"));
HAnimSite651.setDEF(CString("Joe_nuchale_pt"));
HAnimSite651.setTranslation(new float[]{0,1.625,-0.0925});
Shape& Shape652 =  Shape();
Shape652.setUSE(CString("sitebox"));
HAnimSite651.addChild(&Shape652);

HAnimSegment626.addChild(&HAnimSite651);

HAnimJoint625.addChildren(&HAnimSegment626);

HAnimJoint& HAnimJoint653 =  HAnimJoint();
HAnimJoint653.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint653.setDEF(CString("Joe_l_eyeball_joint"));
HAnimJoint653.setCenter(new float[]{0.034,1.659,0.06});
HAnimSegment& HAnimSegment654 =  HAnimSegment();
HAnimSegment654.X3DNode::setName(CString("l_eyeball"));
HAnimSegment654.setDEF(CString("Joe_l_eyeball"));
Shape& Shape655 =  Shape();
Appearance& Appearance656 =  Appearance();
Appearance656.setUSE(CString("SegmentLine"));
Shape655.addChild(&Appearance656);

IndexedLineSet& IndexedLineSet657 =  IndexedLineSet();
IndexedLineSet657.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate658 =  Coordinate();
Coordinate658.setPoint(new float[]{0.034,1.655,0.065,-0.034,1.655,0.065}, 6);
IndexedLineSet657.setCoord(&Coordinate658);

Shape655.setGeometry(&IndexedLineSet657);

HAnimSegment654.addChild(&Shape655);

Transform& Transform659 =  Transform();
Transform659.setScale(new float[]{1,1,1.4});
Transform659.setTranslation(new float[]{0.034,1.655,0.065});
Shape& Shape660 =  Shape();
Shape660.setUSE(CString("jointbox"));
Transform659.addChild(&Shape660);

HAnimSegment654.addChild(&Transform659);

HAnimJoint653.addChildren(&HAnimSegment654);

HAnimJoint625.addChildren(&HAnimJoint653);

HAnimJoint& HAnimJoint661 =  HAnimJoint();
HAnimJoint661.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint661.setDEF(CString("Joe_r_eyeball_joint"));
HAnimJoint661.setCenter(new float[]{-0.034,1.659,0.06});
HAnimSegment& HAnimSegment662 =  HAnimSegment();
HAnimSegment662.X3DNode::setName(CString("r_eyeball"));
HAnimSegment662.setDEF(CString("Joe_r_eyeball"));
Shape& Shape663 =  Shape();
Appearance& Appearance664 =  Appearance();
Appearance664.setUSE(CString("SegmentLine"));
Shape663.addChild(&Appearance664);

IndexedLineSet& IndexedLineSet665 =  IndexedLineSet();
IndexedLineSet665.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate666 =  Coordinate();
Coordinate666.setPoint(new float[]{0.034,1.655,0.065,-0.034,1.655,0.065}, 6);
IndexedLineSet665.setCoord(&Coordinate666);

Shape663.setGeometry(&IndexedLineSet665);

HAnimSegment662.addChild(&Shape663);

Transform& Transform667 =  Transform();
Transform667.setScale(new float[]{1,1,1.4});
Transform667.setTranslation(new float[]{-0.034,1.655,0.065});
Shape& Shape668 =  Shape();
Shape668.setUSE(CString("jointbox"));
Transform667.addChild(&Shape668);

HAnimSegment662.addChild(&Transform667);

HAnimJoint661.addChildren(&HAnimSegment662);

HAnimJoint625.addChildren(&HAnimJoint661);

HAnimJoint617.addChildren(&HAnimJoint625);

HAnimJoint609.addChildren(&HAnimJoint617);

HAnimJoint601.addChildren(&HAnimJoint609);

HAnimJoint593.addChildren(&HAnimJoint601);

HAnimJoint585.addChildren(&HAnimJoint593);

HAnimJoint577.addChildren(&HAnimJoint585);

HAnimJoint565.addChildren(&HAnimJoint577);

HAnimJoint553.addChildren(&HAnimJoint565);

HAnimJoint& HAnimJoint669 =  HAnimJoint();
HAnimJoint669.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint669.setDEF(CString("Joe_l_sternoclavicular"));
HAnimJoint669.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimJoint669.setSkinCoordIndex(new int32_t[]{12}, 1);
HAnimJoint669.setSkinCoordWeight(new float[]{1}, 1);
HAnimSegment& HAnimSegment670 =  HAnimSegment();
HAnimSegment670.X3DNode::setName(CString("l_clavicle"));
HAnimSegment670.setDEF(CString("Joe_l_clavicle"));
Shape& Shape671 =  Shape();
Appearance& Appearance672 =  Appearance();
Appearance672.setUSE(CString("SegmentLine"));
Shape671.addChild(&Appearance672);

IndexedLineSet& IndexedLineSet673 =  IndexedLineSet();
IndexedLineSet673.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate674 =  Coordinate();
Coordinate674.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
IndexedLineSet673.setCoord(&Coordinate674);

Shape671.setGeometry(&IndexedLineSet673);

HAnimSegment670.addChild(&Shape671);

Transform& Transform675 =  Transform();
Transform675.setTranslation(new float[]{0.082,1.4488,-0.0353});
Shape& Shape676 =  Shape();
Shape676.setUSE(CString("jointbox"));
Transform675.addChild(&Shape676);

HAnimSegment670.addChild(&Transform675);

HAnimSite& HAnimSite677 =  HAnimSite();
HAnimSite677.X3DNode::setName(CString("l_clavicle_pt"));
HAnimSite677.setDEF(CString("Joe_l_clavicle_pt"));
HAnimSite677.setTranslation(new float[]{0.03,1.46,0.035});
Shape& Shape678 =  Shape();
Shape678.setUSE(CString("sitebox"));
HAnimSite677.addChild(&Shape678);

HAnimSegment670.addChild(&HAnimSite677);

HAnimJoint669.addChildren(&HAnimSegment670);

HAnimJoint& HAnimJoint679 =  HAnimJoint();
HAnimJoint679.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint679.setDEF(CString("Joe_l_acromioclavicular"));
HAnimJoint679.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimJoint679.setSkinCoordIndex(new int32_t[]{79}, 1);
HAnimJoint679.setSkinCoordWeight(new float[]{1}, 1);
HAnimSegment& HAnimSegment680 =  HAnimSegment();
HAnimSegment680.X3DNode::setName(CString("l_scapula"));
HAnimSegment680.setDEF(CString("Joe_l_scapula"));
Shape& Shape681 =  Shape();
Appearance& Appearance682 =  Appearance();
Appearance682.setUSE(CString("SegmentLine"));
Shape681.addChild(&Appearance682);

IndexedLineSet& IndexedLineSet683 =  IndexedLineSet();
IndexedLineSet683.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate684 =  Coordinate();
Coordinate684.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2,1.44,-0.04}, 6);
IndexedLineSet683.setCoord(&Coordinate684);

Shape681.setGeometry(&IndexedLineSet683);

HAnimSegment680.addChild(&Shape681);

Transform& Transform685 =  Transform();
Transform685.setTranslation(new float[]{0.0962,1.4269,-0.0424});
Shape& Shape686 =  Shape();
Shape686.setUSE(CString("jointbox"));
Transform685.addChild(&Shape686);

HAnimSegment680.addChild(&Transform685);

Transform& Transform687 =  Transform();
Transform687.setTranslation(new float[]{0.11,1.427,-0.1375});
Shape& Shape688 =  Shape();
Shape688.setUSE(CString("skinsphere"));
Transform687.addChild(&Shape688);

HAnimSegment680.addChild(&Transform687);

HAnimSite& HAnimSite689 =  HAnimSite();
HAnimSite689.X3DNode::setName(CString("l_acromion_pt"));
HAnimSite689.setDEF(CString("Joe_l_acromion_pt"));
HAnimSite689.setTranslation(new float[]{0.175,1.4825,-0.06});
Shape& Shape690 =  Shape();
Shape690.setUSE(CString("sitebox"));
HAnimSite689.addChild(&Shape690);

HAnimSegment680.addChild(&HAnimSite689);

HAnimSite& HAnimSite691 =  HAnimSite();
HAnimSite691.X3DNode::setName(CString("l_axilla_proximal_pt"));
HAnimSite691.setDEF(CString("Joe_l_axilla_proximal_pt"));
HAnimSite691.setTranslation(new float[]{0.17,1.38,0.007});
Shape& Shape692 =  Shape();
Shape692.setUSE(CString("sitebox"));
HAnimSite691.addChild(&Shape692);

HAnimSegment680.addChild(&HAnimSite691);

HAnimSite& HAnimSite693 =  HAnimSite();
HAnimSite693.X3DNode::setName(CString("l_axilla_distal_pt"));
HAnimSite693.setDEF(CString("Joe_l_axilla_distal_pt"));
HAnimSite693.setTranslation(new float[]{0.16,1.38,-0.125});
Shape& Shape694 =  Shape();
Shape694.setUSE(CString("sitebox"));
HAnimSite693.addChild(&Shape694);

HAnimSegment680.addChild(&HAnimSite693);

HAnimJoint679.addChildren(&HAnimSegment680);

HAnimJoint& HAnimJoint695 =  HAnimJoint();
HAnimJoint695.X3DNode::setName(CString("l_shoulder"));
HAnimJoint695.setDEF(CString("Joe_l_shoulder"));
HAnimJoint695.setCenter(new float[]{0.2,1.44,-0.04});
HAnimJoint695.setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
HAnimJoint695.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment696 =  HAnimSegment();
HAnimSegment696.X3DNode::setName(CString("l_upperarm"));
HAnimSegment696.setDEF(CString("Joe_l_upperarm"));
Shape& Shape697 =  Shape();
Appearance& Appearance698 =  Appearance();
Appearance698.setUSE(CString("SegmentLine"));
Shape697.addChild(&Appearance698);

IndexedLineSet& IndexedLineSet699 =  IndexedLineSet();
IndexedLineSet699.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate700 =  Coordinate();
Coordinate700.setPoint(new float[]{0.2029,1.44,-0.0387,0.2,1.1388,-0.04}, 6);
IndexedLineSet699.setCoord(&Coordinate700);

Shape697.setGeometry(&IndexedLineSet699);

HAnimSegment696.addChild(&Shape697);

Transform& Transform701 =  Transform();
Transform701.setTranslation(new float[]{0.2,1.44,-0.04});
Shape& Shape702 =  Shape();
Shape702.setUSE(CString("jointbox"));
Transform701.addChild(&Shape702);

HAnimSegment696.addChild(&Transform701);

Transform& Transform703 =  Transform();
Transform703.setTranslation(new float[]{0.235,1.42,-0.0625});
Shape& Shape704 =  Shape();
Shape704.setUSE(CString("skinsphere"));
Transform703.addChild(&Shape704);

HAnimSegment696.addChild(&Transform703);

Transform& Transform705 =  Transform();
Transform705.setTranslation(new float[]{0.25,1.27,-0.04});
Shape& Shape706 =  Shape();
Shape706.setUSE(CString("skinsphere"));
Transform705.addChild(&Shape706);

HAnimSegment696.addChild(&Transform705);

Transform& Transform707 =  Transform();
Transform707.setTranslation(new float[]{0.17,1.27,-0.04});
Shape& Shape708 =  Shape();
Shape708.setUSE(CString("skinsphere"));
Transform707.addChild(&Shape708);

HAnimSegment696.addChild(&Transform707);

Transform& Transform709 =  Transform();
Transform709.setTranslation(new float[]{0.2,1.27,-0.09});
Shape& Shape710 =  Shape();
Shape710.setUSE(CString("skinsphere"));
Transform709.addChild(&Shape710);

HAnimSegment696.addChild(&Transform709);

Transform& Transform711 =  Transform();
Transform711.setTranslation(new float[]{0.2,1.27,0.02});
Shape& Shape712 =  Shape();
Shape712.setUSE(CString("skinsphere"));
Transform711.addChild(&Shape712);

HAnimSegment696.addChild(&Transform711);

HAnimSite& HAnimSite713 =  HAnimSite();
HAnimSite713.X3DNode::setName(CString("l_humeral_medial_epicondyle_pt"));
HAnimSite713.setDEF(CString("Joe_l_humeral_medial_epicondyle_pt"));
HAnimSite713.setTranslation(new float[]{0.165,1.1388,-0.04});
Shape& Shape714 =  Shape();
Shape714.setUSE(CString("sitebox"));
HAnimSite713.addChild(&Shape714);

HAnimSegment696.addChild(&HAnimSite713);

HAnimSite& HAnimSite715 =  HAnimSite();
HAnimSite715.X3DNode::setName(CString("l_radiale_pt"));
HAnimSite715.setDEF(CString("Joe_l_radiale_pt"));
HAnimSite715.setTranslation(new float[]{0.23,1.133,-0.055});
Shape& Shape716 =  Shape();
Shape716.setUSE(CString("sitebox"));
HAnimSite715.addChild(&Shape716);

HAnimSegment696.addChild(&HAnimSite715);

HAnimSite& HAnimSite717 =  HAnimSite();
HAnimSite717.X3DNode::setName(CString("l_humeral_lateral_epicondyle_pt"));
HAnimSite717.setDEF(CString("Joe_l_humeral_lateral_epicondyle_pt"));
HAnimSite717.setTranslation(new float[]{0.244,1.1388,-0.04});
Shape& Shape718 =  Shape();
Shape718.setUSE(CString("sitebox"));
HAnimSite717.addChild(&Shape718);

HAnimSegment696.addChild(&HAnimSite717);

HAnimJoint695.addChildren(&HAnimSegment696);

HAnimJoint& HAnimJoint719 =  HAnimJoint();
HAnimJoint719.X3DNode::setName(CString("l_elbow"));
HAnimJoint719.setDEF(CString("Joe_l_elbow"));
HAnimJoint719.setCenter(new float[]{0.2,1.1388,-0.04});
HAnimJoint719.setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
HAnimJoint719.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 15);
HAnimSegment& HAnimSegment720 =  HAnimSegment();
HAnimSegment720.X3DNode::setName(CString("l_forearm"));
HAnimSegment720.setDEF(CString("Joe_l_forearm"));
Shape& Shape721 =  Shape();
Appearance& Appearance722 =  Appearance();
Appearance722.setUSE(CString("SegmentLine"));
Shape721.addChild(&Appearance722);

IndexedLineSet& IndexedLineSet723 =  IndexedLineSet();
IndexedLineSet723.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate724 =  Coordinate();
Coordinate724.setPoint(new float[]{0.2,1.1388,-0.04,0.2,0.87,-0.04}, 6);
IndexedLineSet723.setCoord(&Coordinate724);

Shape721.setGeometry(&IndexedLineSet723);

HAnimSegment720.addChild(&Shape721);

Transform& Transform725 =  Transform();
Transform725.setTranslation(new float[]{0.2,1.1388,-0.04});
Shape& Shape726 =  Shape();
Shape726.setUSE(CString("jointbox"));
Transform725.addChild(&Shape726);

HAnimSegment720.addChild(&Transform725);

Transform& Transform727 =  Transform();
Transform727.setTranslation(new float[]{0.2,1.1388,-0.013});
Shape& Shape728 =  Shape();
Shape728.setUSE(CString("skinsphere"));
Transform727.addChild(&Shape728);

HAnimSegment720.addChild(&Transform727);

Transform& Transform729 =  Transform();
Transform729.setTranslation(new float[]{0.225,1,-0.01});
Shape& Shape730 =  Shape();
Shape730.setUSE(CString("skinsphere"));
Transform729.addChild(&Shape730);

HAnimSegment720.addChild(&Transform729);

Transform& Transform731 =  Transform();
Transform731.setTranslation(new float[]{0.225,1,-0.07});
Shape& Shape732 =  Shape();
Shape732.setUSE(CString("skinsphere"));
Transform731.addChild(&Shape732);

HAnimSegment720.addChild(&Transform731);

Transform& Transform733 =  Transform();
Transform733.setTranslation(new float[]{0.185,1,-0.01});
Shape& Shape734 =  Shape();
Shape734.setUSE(CString("skinsphere"));
Transform733.addChild(&Shape734);

HAnimSegment720.addChild(&Transform733);

Transform& Transform735 =  Transform();
Transform735.setTranslation(new float[]{0.185,1,-0.07});
Shape& Shape736 =  Shape();
Shape736.setUSE(CString("skinsphere"));
Transform735.addChild(&Shape736);

HAnimSegment720.addChild(&Transform735);

HAnimSite& HAnimSite737 =  HAnimSite();
HAnimSite737.X3DNode::setName(CString("l_radial_styloid_pt"));
HAnimSite737.setDEF(CString("Joe_l_radial_styloid_pt"));
HAnimSite737.setTranslation(new float[]{0.1901,0.8645,-0.0415});
Shape& Shape738 =  Shape();
Shape738.setUSE(CString("sitebox"));
HAnimSite737.addChild(&Shape738);

HAnimSegment720.addChild(&HAnimSite737);

HAnimSite& HAnimSite739 =  HAnimSite();
HAnimSite739.X3DNode::setName(CString("l_olecranon_pt"));
HAnimSite739.setDEF(CString("Joe_l_olecranon_pt"));
HAnimSite739.setTranslation(new float[]{0.2,1.1388,-0.08});
Shape& Shape740 =  Shape();
Shape740.setUSE(CString("sitebox"));
HAnimSite739.addChild(&Shape740);

HAnimSegment720.addChild(&HAnimSite739);

HAnimJoint719.addChildren(&HAnimSegment720);

HAnimJoint& HAnimJoint741 =  HAnimJoint();
HAnimJoint741.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint741.setDEF(CString("Joe_l_radiocarpal"));
HAnimJoint741.setCenter(new float[]{0.2,0.87,-0.04});
HAnimJoint741.setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
HAnimJoint741.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment742 =  HAnimSegment();
HAnimSegment742.X3DNode::setName(CString("l_carpal"));
HAnimSegment742.setDEF(CString("Joe_l_carpal"));
Shape& Shape743 =  Shape();
Appearance& Appearance744 =  Appearance();
Appearance744.setUSE(CString("SegmentLine"));
Shape743.addChild(&Appearance744);

IndexedLineSet& IndexedLineSet745 =  IndexedLineSet();
IndexedLineSet745.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1}, 15);
Coordinate& Coordinate746 =  Coordinate();
Coordinate746.setPoint(new float[]{0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036}, 18);
IndexedLineSet745.setCoord(&Coordinate746);

Shape743.setGeometry(&IndexedLineSet745);

HAnimSegment742.addChild(&Shape743);

Transform& Transform747 =  Transform();
Transform747.setTranslation(new float[]{0.2,0.87,-0.04});
Shape& Shape748 =  Shape();
Shape748.setUSE(CString("jointbox"));
Transform747.addChild(&Shape748);

HAnimSegment742.addChild(&Transform747);

HAnimSite& HAnimSite749 =  HAnimSite();
HAnimSite749.X3DNode::setName(CString("l_metacarpal_phalanx_2_pt"));
HAnimSite749.setDEF(CString("Joe_l_metacarpal_phalanx_2_pt"));
HAnimSite749.setTranslation(new float[]{0.2009,0.8139,-0.0237});
Shape& Shape750 =  Shape();
Shape750.setUSE(CString("sitebox"));
HAnimSite749.addChild(&Shape750);

HAnimSegment742.addChild(&HAnimSite749);

HAnimSite& HAnimSite751 =  HAnimSite();
HAnimSite751.X3DNode::setName(CString("l_ulnar_styloid_pt"));
HAnimSite751.setDEF(CString("Joe_l_ulnar_styloid_pt"));
HAnimSite751.setTranslation(new float[]{0.2142,0.8529,-0.0648});
Shape& Shape752 =  Shape();
Shape752.setUSE(CString("sitebox"));
HAnimSite751.addChild(&Shape752);

HAnimSegment742.addChild(&HAnimSite751);

HAnimSite& HAnimSite753 =  HAnimSite();
HAnimSite753.X3DNode::setName(CString("l_metacarpal_phalanx_5_pt"));
HAnimSite753.setDEF(CString("Joe_l_metacarpal_phalanx_5_pt"));
HAnimSite753.setTranslation(new float[]{0.1929,0.786,-0.1122});
Shape& Shape754 =  Shape();
Shape754.setUSE(CString("sitebox"));
HAnimSite753.addChild(&Shape754);

HAnimSegment742.addChild(&HAnimSite753);

HAnimJoint741.addChildren(&HAnimSegment742);

HAnimJoint& HAnimJoint755 =  HAnimJoint();
HAnimJoint755.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint755.setDEF(CString("Joe_l_carpometacarpal_1"));
HAnimJoint755.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimJoint755.setSkinCoordIndex(new int32_t[]{127,128}, 2);
HAnimJoint755.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment756 =  HAnimSegment();
HAnimSegment756.X3DNode::setName(CString("l_metacarpal_1"));
HAnimSegment756.setDEF(CString("Joe_l_metacarpal_1"));
Shape& Shape757 =  Shape();
Appearance& Appearance758 =  Appearance();
Appearance758.setUSE(CString("SegmentLine"));
Shape757.addChild(&Appearance758);

IndexedLineSet& IndexedLineSet759 =  IndexedLineSet();
IndexedLineSet759.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate760 =  Coordinate();
Coordinate760.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
IndexedLineSet759.setCoord(&Coordinate760);

Shape757.setGeometry(&IndexedLineSet759);

HAnimSegment756.addChild(&Shape757);

Transform& Transform761 =  Transform();
Transform761.setTranslation(new float[]{0.1924,0.8472,-0.0534});
Shape& Shape762 =  Shape();
Shape762.setUSE(CString("jointbox"));
Transform761.addChild(&Shape762);

HAnimSegment756.addChild(&Transform761);

HAnimJoint755.addChildren(&HAnimSegment756);

HAnimJoint& HAnimJoint763 =  HAnimJoint();
HAnimJoint763.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint763.setDEF(CString("Joe_l_metacarpophalangeal_1"));
HAnimJoint763.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimJoint763.setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
HAnimJoint763.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1}, 6);
HAnimSegment& HAnimSegment764 =  HAnimSegment();
HAnimSegment764.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment764.setDEF(CString("Joe_l_carpal_proximal_phalanx_1"));
Shape& Shape765 =  Shape();
Appearance& Appearance766 =  Appearance();
Appearance766.setUSE(CString("SegmentLine"));
Shape765.addChild(&Appearance766);

IndexedLineSet& IndexedLineSet767 =  IndexedLineSet();
IndexedLineSet767.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate768 =  Coordinate();
Coordinate768.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
IndexedLineSet767.setCoord(&Coordinate768);

Shape765.setGeometry(&IndexedLineSet767);

HAnimSegment764.addChild(&Shape765);

Transform& Transform769 =  Transform();
Transform769.setTranslation(new float[]{0.1951,0.8226,0.0246});
Shape& Shape770 =  Shape();
Shape770.setUSE(CString("jointbox"));
Transform769.addChild(&Shape770);

HAnimSegment764.addChild(&Transform769);

HAnimJoint763.addChildren(&HAnimSegment764);

HAnimJoint& HAnimJoint771 =  HAnimJoint();
HAnimJoint771.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint771.setDEF(CString("Joe_l_carpal_interphalangeal_1"));
HAnimJoint771.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint771.setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
HAnimJoint771.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment772 =  HAnimSegment();
HAnimSegment772.X3DNode::setName(CString("l_carpal_distal_phalanx_1"));
HAnimSegment772.setDEF(CString("Joe_l_carpal_distal_phalanx_1"));
Shape& Shape773 =  Shape();
Appearance& Appearance774 =  Appearance();
Appearance774.setUSE(CString("SegmentLine"));
Shape773.addChild(&Appearance774);

IndexedLineSet& IndexedLineSet775 =  IndexedLineSet();
IndexedLineSet775.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate776 =  Coordinate();
Coordinate776.setPoint(new float[]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759}, 6);
IndexedLineSet775.setCoord(&Coordinate776);

Shape773.setGeometry(&IndexedLineSet775);

HAnimSegment772.addChild(&Shape773);

Transform& Transform777 =  Transform();
Transform777.setTranslation(new float[]{0.1955,0.8159,0.0464});
Shape& Shape778 =  Shape();
Shape778.setUSE(CString("jointbox"));
Transform777.addChild(&Shape778);

HAnimSegment772.addChild(&Transform777);

HAnimSite& HAnimSite779 =  HAnimSite();
HAnimSite779.X3DNode::setName(CString("l_carpal_distal_phalanx_1_tip"));
HAnimSite779.setDEF(CString("Joe_l_carpal_distal_phalanx_1_tip"));
HAnimSite779.setTranslation(new float[]{0.1982,0.8061,0.0759});
Shape& Shape780 =  Shape();
Shape780.setUSE(CString("sitebox"));
HAnimSite779.addChild(&Shape780);

HAnimSegment772.addChild(&HAnimSite779);

HAnimJoint771.addChildren(&HAnimSegment772);

HAnimJoint763.addChildren(&HAnimJoint771);

HAnimJoint755.addChildren(&HAnimJoint763);

HAnimJoint741.addChildren(&HAnimJoint755);

HAnimJoint& HAnimJoint781 =  HAnimJoint();
HAnimJoint781.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint781.setDEF(CString("Joe_l_carpometacarpal_2"));
HAnimJoint781.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimJoint781.setSkinCoordIndex(new int32_t[]{129,130}, 2);
HAnimJoint781.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment782 =  HAnimSegment();
HAnimSegment782.X3DNode::setName(CString("l_metacarpal_2"));
HAnimSegment782.setDEF(CString("Joe_l_metacarpal_2"));
Shape& Shape783 =  Shape();
Appearance& Appearance784 =  Appearance();
Appearance784.setUSE(CString("SegmentLine"));
Shape783.addChild(&Appearance784);

IndexedLineSet& IndexedLineSet785 =  IndexedLineSet();
IndexedLineSet785.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate786 =  Coordinate();
Coordinate786.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
IndexedLineSet785.setCoord(&Coordinate786);

Shape783.setGeometry(&IndexedLineSet785);

HAnimSegment782.addChild(&Shape783);

Transform& Transform787 =  Transform();
Transform787.setTranslation(new float[]{0.1983,0.8024,-0.028});
Shape& Shape788 =  Shape();
Shape788.setUSE(CString("jointbox"));
Transform787.addChild(&Shape788);

HAnimSegment782.addChild(&Transform787);

HAnimJoint781.addChildren(&HAnimSegment782);

HAnimJoint& HAnimJoint789 =  HAnimJoint();
HAnimJoint789.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint789.setDEF(CString("Joe_l_metacarpophalangeal_2"));
HAnimJoint789.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimJoint789.setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
HAnimJoint789.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimSegment& HAnimSegment790 =  HAnimSegment();
HAnimSegment790.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment790.setDEF(CString("Joe_l_carpal_proximal_phalanx_2"));
Shape& Shape791 =  Shape();
Appearance& Appearance792 =  Appearance();
Appearance792.setUSE(CString("SegmentLine"));
Shape791.addChild(&Appearance792);

IndexedLineSet& IndexedLineSet793 =  IndexedLineSet();
IndexedLineSet793.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate794 =  Coordinate();
Coordinate794.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
IndexedLineSet793.setCoord(&Coordinate794);

Shape791.setGeometry(&IndexedLineSet793);

HAnimSegment790.addChild(&Shape791);

Transform& Transform795 =  Transform();
Transform795.setTranslation(new float[]{0.1983,0.7815,-0.028});
Shape& Shape796 =  Shape();
Shape796.setUSE(CString("jointbox"));
Transform795.addChild(&Shape796);

HAnimSegment790.addChild(&Transform795);

HAnimJoint789.addChildren(&HAnimSegment790);

HAnimJoint& HAnimJoint797 =  HAnimJoint();
HAnimJoint797.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint797.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_2"));
HAnimJoint797.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimJoint797.setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
HAnimJoint797.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment798 =  HAnimSegment();
HAnimSegment798.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment798.setDEF(CString("Joe_l_carpal_middle_phalanx_2"));
Shape& Shape799 =  Shape();
Appearance& Appearance800 =  Appearance();
Appearance800.setUSE(CString("SegmentLine"));
Shape799.addChild(&Appearance800);

IndexedLineSet& IndexedLineSet801 =  IndexedLineSet();
IndexedLineSet801.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate802 =  Coordinate();
Coordinate802.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
IndexedLineSet801.setCoord(&Coordinate802);

Shape799.setGeometry(&IndexedLineSet801);

HAnimSegment798.addChild(&Shape799);

Transform& Transform803 =  Transform();
Transform803.setTranslation(new float[]{0.2017,0.7363,-0.0248});
Shape& Shape804 =  Shape();
Shape804.setUSE(CString("jointbox"));
Transform803.addChild(&Shape804);

HAnimSegment798.addChild(&Transform803);

HAnimJoint797.addChildren(&HAnimSegment798);

HAnimJoint& HAnimJoint805 =  HAnimJoint();
HAnimJoint805.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint805.setDEF(CString("Joe_l_carpal_distal_interphalangeal_2"));
HAnimJoint805.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint805.setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
HAnimJoint805.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment806 =  HAnimSegment();
HAnimSegment806.X3DNode::setName(CString("l_carpal_distal_phalanx_2"));
HAnimSegment806.setDEF(CString("Joe_l_carpal_distal_phalanx_2"));
Shape& Shape807 =  Shape();
Appearance& Appearance808 =  Appearance();
Appearance808.setUSE(CString("SegmentLine"));
Shape807.addChild(&Appearance808);

IndexedLineSet& IndexedLineSet809 =  IndexedLineSet();
IndexedLineSet809.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate810 =  Coordinate();
Coordinate810.setPoint(new float[]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245}, 6);
IndexedLineSet809.setCoord(&Coordinate810);

Shape807.setGeometry(&IndexedLineSet809);

HAnimSegment806.addChild(&Shape807);

Transform& Transform811 =  Transform();
Transform811.setTranslation(new float[]{0.2028,0.7139,-0.0236});
Shape& Shape812 =  Shape();
Shape812.setUSE(CString("jointbox"));
Transform811.addChild(&Shape812);

HAnimSegment806.addChild(&Transform811);

HAnimSite& HAnimSite813 =  HAnimSite();
HAnimSite813.X3DNode::setName(CString("l_carpal_distal_phalanx_2_tip"));
HAnimSite813.setDEF(CString("Joe_l_carpal_distal_phalanx_2_tip"));
HAnimSite813.setTranslation(new float[]{0.2089,0.6858,-0.0245});
Shape& Shape814 =  Shape();
Shape814.setUSE(CString("sitebox"));
HAnimSite813.addChild(&Shape814);

HAnimSegment806.addChild(&HAnimSite813);

HAnimSite& HAnimSite815 =  HAnimSite();
HAnimSite815.X3DNode::setName(CString("l_dactylion_pt"));
HAnimSite815.setDEF(CString("Joe_l_dactylion_pt"));
HAnimSite815.setTranslation(new float[]{0.2056,0.6743,-0.0482});
Shape& Shape816 =  Shape();
Shape816.setUSE(CString("sitebox"));
HAnimSite815.addChild(&Shape816);

HAnimSegment806.addChild(&HAnimSite815);

HAnimJoint805.addChildren(&HAnimSegment806);

HAnimJoint797.addChildren(&HAnimJoint805);

HAnimJoint789.addChildren(&HAnimJoint797);

HAnimJoint781.addChildren(&HAnimJoint789);

HAnimJoint741.addChildren(&HAnimJoint781);

HAnimJoint& HAnimJoint817 =  HAnimJoint();
HAnimJoint817.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint817.setDEF(CString("Joe_l_carpometacarpal_3"));
HAnimJoint817.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimJoint817.setSkinCoordIndex(new int32_t[]{131,132}, 2);
HAnimJoint817.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment818 =  HAnimSegment();
HAnimSegment818.X3DNode::setName(CString("l_metacarpal_3"));
HAnimSegment818.setDEF(CString("Joe_l_metacarpal_3"));
Shape& Shape819 =  Shape();
Appearance& Appearance820 =  Appearance();
Appearance820.setUSE(CString("SegmentLine"));
Shape819.addChild(&Appearance820);

IndexedLineSet& IndexedLineSet821 =  IndexedLineSet();
IndexedLineSet821.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate822 =  Coordinate();
Coordinate822.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
IndexedLineSet821.setCoord(&Coordinate822);

Shape819.setGeometry(&IndexedLineSet821);

HAnimSegment818.addChild(&Shape819);

Transform& Transform823 =  Transform();
Transform823.setTranslation(new float[]{0.1987,0.8029,-0.053});
Shape& Shape824 =  Shape();
Shape824.setUSE(CString("jointbox"));
Transform823.addChild(&Shape824);

HAnimSegment818.addChild(&Transform823);

HAnimJoint817.addChildren(&HAnimSegment818);

HAnimJoint& HAnimJoint825 =  HAnimJoint();
HAnimJoint825.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint825.setDEF(CString("Joe_l_metacarpophalangeal_3"));
HAnimJoint825.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimJoint825.setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
HAnimJoint825.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimSegment& HAnimSegment826 =  HAnimSegment();
HAnimSegment826.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment826.setDEF(CString("Joe_l_carpal_proximal_phalanx_3"));
Shape& Shape827 =  Shape();
Appearance& Appearance828 =  Appearance();
Appearance828.setUSE(CString("SegmentLine"));
Shape827.addChild(&Appearance828);

IndexedLineSet& IndexedLineSet829 =  IndexedLineSet();
IndexedLineSet829.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate830 =  Coordinate();
Coordinate830.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
IndexedLineSet829.setCoord(&Coordinate830);

Shape827.setGeometry(&IndexedLineSet829);

HAnimSegment826.addChild(&Shape827);

Transform& Transform831 =  Transform();
Transform831.setTranslation(new float[]{0.1987,0.7818,-0.053});
Shape& Shape832 =  Shape();
Shape832.setUSE(CString("jointbox"));
Transform831.addChild(&Shape832);

HAnimSegment826.addChild(&Transform831);

HAnimJoint825.addChildren(&HAnimSegment826);

HAnimJoint& HAnimJoint833 =  HAnimJoint();
HAnimJoint833.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint833.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_3"));
HAnimJoint833.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimJoint833.setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
HAnimJoint833.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment834 =  HAnimSegment();
HAnimSegment834.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment834.setDEF(CString("Joe_l_carpal_middle_phalanx_3"));
Shape& Shape835 =  Shape();
Appearance& Appearance836 =  Appearance();
Appearance836.setUSE(CString("SegmentLine"));
Shape835.addChild(&Appearance836);

IndexedLineSet& IndexedLineSet837 =  IndexedLineSet();
IndexedLineSet837.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate838 =  Coordinate();
Coordinate838.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
IndexedLineSet837.setCoord(&Coordinate838);

Shape835.setGeometry(&IndexedLineSet837);

HAnimSegment834.addChild(&Shape835);

Transform& Transform839 =  Transform();
Transform839.setTranslation(new float[]{0.2013,0.7273,-0.0503});
Shape& Shape840 =  Shape();
Shape840.setUSE(CString("jointbox"));
Transform839.addChild(&Shape840);

HAnimSegment834.addChild(&Transform839);

HAnimJoint833.addChildren(&HAnimSegment834);

HAnimJoint& HAnimJoint841 =  HAnimJoint();
HAnimJoint841.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint841.setDEF(CString("Joe_l_carpal_distal_interphalangeal_3"));
HAnimJoint841.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint841.setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
HAnimJoint841.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment842 =  HAnimSegment();
HAnimSegment842.X3DNode::setName(CString("l_carpal_distal_phalanx_3"));
HAnimSegment842.setDEF(CString("Joe_l_carpal_distal_phalanx_3"));
Shape& Shape843 =  Shape();
Appearance& Appearance844 =  Appearance();
Appearance844.setUSE(CString("SegmentLine"));
Shape843.addChild(&Appearance844);

IndexedLineSet& IndexedLineSet845 =  IndexedLineSet();
IndexedLineSet845.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate846 =  Coordinate();
Coordinate846.setPoint(new float[]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491}, 6);
IndexedLineSet845.setCoord(&Coordinate846);

Shape843.setGeometry(&IndexedLineSet845);

HAnimSegment842.addChild(&Shape843);

HAnimSite& HAnimSite847 =  HAnimSite();
HAnimSite847.X3DNode::setName(CString("l_carpal_distal_phalanx_3_tip"));
HAnimSite847.setDEF(CString("Joe_l_carpal_distal_phalanx_3_tip"));
HAnimSite847.setTranslation(new float[]{0.208,0.6731,-0.0491});
Shape& Shape848 =  Shape();
Shape848.setUSE(CString("sitebox"));
HAnimSite847.addChild(&Shape848);

HAnimSegment842.addChild(&HAnimSite847);

Transform& Transform849 =  Transform();
Transform849.setTranslation(new float[]{0.2026,0.7011,-0.0494});
Shape& Shape850 =  Shape();
Shape850.setUSE(CString("jointbox"));
Transform849.addChild(&Shape850);

HAnimSegment842.addChild(&Transform849);

HAnimJoint841.addChildren(&HAnimSegment842);

HAnimJoint833.addChildren(&HAnimJoint841);

HAnimJoint825.addChildren(&HAnimJoint833);

HAnimJoint817.addChildren(&HAnimJoint825);

HAnimJoint741.addChildren(&HAnimJoint817);

HAnimJoint& HAnimJoint851 =  HAnimJoint();
HAnimJoint851.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint851.setDEF(CString("Joe_l_carpometacarpal_4"));
HAnimJoint851.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimJoint851.setSkinCoordIndex(new int32_t[]{133,134}, 2);
HAnimJoint851.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment852 =  HAnimSegment();
HAnimSegment852.X3DNode::setName(CString("l_metacarpal_4"));
HAnimSegment852.setDEF(CString("Joe_l_metacarpal_4"));
Shape& Shape853 =  Shape();
Appearance& Appearance854 =  Appearance();
Appearance854.setUSE(CString("SegmentLine"));
Shape853.addChild(&Appearance854);

IndexedLineSet& IndexedLineSet855 =  IndexedLineSet();
IndexedLineSet855.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate856 =  Coordinate();
Coordinate856.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
IndexedLineSet855.setCoord(&Coordinate856);

Shape853.setGeometry(&IndexedLineSet855);

HAnimSegment852.addChild(&Shape853);

Transform& Transform857 =  Transform();
Transform857.setTranslation(new float[]{0.1956,0.8019,-0.0794});
Shape& Shape858 =  Shape();
Shape858.setUSE(CString("jointbox"));
Transform857.addChild(&Shape858);

HAnimSegment852.addChild(&Transform857);

HAnimJoint851.addChildren(&HAnimSegment852);

HAnimJoint& HAnimJoint859 =  HAnimJoint();
HAnimJoint859.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint859.setDEF(CString("Joe_l_metacarpophalangeal_4"));
HAnimJoint859.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimJoint859.setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
HAnimJoint859.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimSegment& HAnimSegment860 =  HAnimSegment();
HAnimSegment860.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment860.setDEF(CString("Joe_l_carpal_proximal_phalanx_4"));
Shape& Shape861 =  Shape();
Appearance& Appearance862 =  Appearance();
Appearance862.setUSE(CString("SegmentLine"));
Shape861.addChild(&Appearance862);

IndexedLineSet& IndexedLineSet863 =  IndexedLineSet();
IndexedLineSet863.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate864 =  Coordinate();
Coordinate864.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
IndexedLineSet863.setCoord(&Coordinate864);

Shape861.setGeometry(&IndexedLineSet863);

HAnimSegment860.addChild(&Shape861);

Transform& Transform865 =  Transform();
Transform865.setTranslation(new float[]{0.1956,0.7815,-0.0794});
Shape& Shape866 =  Shape();
Shape866.setUSE(CString("jointbox"));
Transform865.addChild(&Shape866);

HAnimSegment860.addChild(&Transform865);

HAnimJoint859.addChildren(&HAnimSegment860);

HAnimJoint& HAnimJoint867 =  HAnimJoint();
HAnimJoint867.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint867.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_4"));
HAnimJoint867.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimJoint867.setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
HAnimJoint867.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment868 =  HAnimSegment();
HAnimSegment868.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment868.setDEF(CString("Joe_l_carpal_middle_phalanx_4"));
Shape& Shape869 =  Shape();
Appearance& Appearance870 =  Appearance();
Appearance870.setUSE(CString("SegmentLine"));
Shape869.addChild(&Appearance870);

IndexedLineSet& IndexedLineSet871 =  IndexedLineSet();
IndexedLineSet871.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate872 =  Coordinate();
Coordinate872.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
IndexedLineSet871.setCoord(&Coordinate872);

Shape869.setGeometry(&IndexedLineSet871);

HAnimSegment868.addChild(&Shape869);

Transform& Transform873 =  Transform();
Transform873.setTranslation(new float[]{0.1973,0.7287,-0.0777});
Shape& Shape874 =  Shape();
Shape874.setUSE(CString("jointbox"));
Transform873.addChild(&Shape874);

HAnimSegment868.addChild(&Transform873);

HAnimJoint867.addChildren(&HAnimSegment868);

HAnimJoint& HAnimJoint875 =  HAnimJoint();
HAnimJoint875.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint875.setDEF(CString("Joe_l_carpal_distal_interphalangeal_4"));
HAnimJoint875.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint875.setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
HAnimJoint875.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment876 =  HAnimSegment();
HAnimSegment876.X3DNode::setName(CString("l_carpal_distal_phalanx_4"));
HAnimSegment876.setDEF(CString("Joe_l_carpal_distal_phalanx_4"));
Shape& Shape877 =  Shape();
Appearance& Appearance878 =  Appearance();
Appearance878.setUSE(CString("SegmentLine"));
Shape877.addChild(&Appearance878);

IndexedLineSet& IndexedLineSet879 =  IndexedLineSet();
IndexedLineSet879.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate880 =  Coordinate();
Coordinate880.setPoint(new float[]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756}, 6);
IndexedLineSet879.setCoord(&Coordinate880);

Shape877.setGeometry(&IndexedLineSet879);

HAnimSegment876.addChild(&Shape877);

Transform& Transform881 =  Transform();
Transform881.setTranslation(new float[]{0.1983,0.7045,-0.0767});
Shape& Shape882 =  Shape();
Shape882.setUSE(CString("jointbox"));
Transform881.addChild(&Shape882);

HAnimSegment876.addChild(&Transform881);

HAnimSite& HAnimSite883 =  HAnimSite();
HAnimSite883.X3DNode::setName(CString("l_carpal_distal_phalanx_4_tip"));
HAnimSite883.setDEF(CString("Joe_l_carpal_distal_phalanx_4_tip"));
HAnimSite883.setTranslation(new float[]{0.2035,0.675,-0.0756});
Shape& Shape884 =  Shape();
Shape884.setUSE(CString("sitebox"));
HAnimSite883.addChild(&Shape884);

HAnimSegment876.addChild(&HAnimSite883);

HAnimJoint875.addChildren(&HAnimSegment876);

HAnimJoint867.addChildren(&HAnimJoint875);

HAnimJoint859.addChildren(&HAnimJoint867);

HAnimJoint851.addChildren(&HAnimJoint859);

HAnimJoint741.addChildren(&HAnimJoint851);

HAnimJoint& HAnimJoint885 =  HAnimJoint();
HAnimJoint885.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint885.setDEF(CString("Joe_l_carpometacarpal_5"));
HAnimJoint885.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimJoint885.setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
HAnimJoint885.setSkinCoordWeight(new float[]{1,1,1,0.5}, 4);
HAnimSegment& HAnimSegment886 =  HAnimSegment();
HAnimSegment886.X3DNode::setName(CString("l_metacarpal_5"));
HAnimSegment886.setDEF(CString("Joe_l_metacarpal_5"));
Shape& Shape887 =  Shape();
Appearance& Appearance888 =  Appearance();
Appearance888.setUSE(CString("SegmentLine"));
Shape887.addChild(&Appearance888);

IndexedLineSet& IndexedLineSet889 =  IndexedLineSet();
IndexedLineSet889.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate890 =  Coordinate();
Coordinate890.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
IndexedLineSet889.setCoord(&Coordinate890);

Shape887.setGeometry(&IndexedLineSet889);

HAnimSegment886.addChild(&Shape887);

Transform& Transform891 =  Transform();
Transform891.setTranslation(new float[]{0.1925,0.8066,-0.1036});
Shape& Shape892 =  Shape();
Shape892.setUSE(CString("jointbox"));
Transform891.addChild(&Shape892);

HAnimSegment886.addChild(&Transform891);

HAnimJoint885.addChildren(&HAnimSegment886);

HAnimJoint& HAnimJoint893 =  HAnimJoint();
HAnimJoint893.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint893.setDEF(CString("Joe_l_metacarpophalangeal_5"));
HAnimJoint893.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimJoint893.setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
HAnimJoint893.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimSegment& HAnimSegment894 =  HAnimSegment();
HAnimSegment894.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment894.setDEF(CString("Joe_l_carpal_proximal_phalanx_5"));
Shape& Shape895 =  Shape();
Appearance& Appearance896 =  Appearance();
Appearance896.setUSE(CString("SegmentLine"));
Shape895.addChild(&Appearance896);

IndexedLineSet& IndexedLineSet897 =  IndexedLineSet();
IndexedLineSet897.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate898 =  Coordinate();
Coordinate898.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
IndexedLineSet897.setCoord(&Coordinate898);

Shape895.setGeometry(&IndexedLineSet897);

HAnimSegment894.addChild(&Shape895);

Transform& Transform899 =  Transform();
Transform899.setTranslation(new float[]{0.1925,0.7866,-0.1036});
Shape& Shape900 =  Shape();
Shape900.setUSE(CString("jointbox"));
Transform899.addChild(&Shape900);

HAnimSegment894.addChild(&Transform899);

HAnimJoint893.addChildren(&HAnimSegment894);

HAnimJoint& HAnimJoint901 =  HAnimJoint();
HAnimJoint901.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint901.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_5"));
HAnimJoint901.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimJoint901.setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
HAnimJoint901.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment902 =  HAnimSegment();
HAnimSegment902.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment902.setDEF(CString("Joe_l_carpal_middle_phalanx_5"));
Transform& Transform903 =  Transform();
Transform903.setTranslation(new float[]{0.1938,0.7452,-0.1024});
Shape& Shape904 =  Shape();
Shape904.setUSE(CString("jointbox"));
Transform903.addChild(&Shape904);

HAnimSegment902.addChild(&Transform903);

Shape& Shape905 =  Shape();
Appearance& Appearance906 =  Appearance();
Appearance906.setUSE(CString("SegmentLine"));
Shape905.addChild(&Appearance906);

IndexedLineSet& IndexedLineSet907 =  IndexedLineSet();
IndexedLineSet907.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate908 =  Coordinate();
Coordinate908.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
IndexedLineSet907.setCoord(&Coordinate908);

Shape905.setGeometry(&IndexedLineSet907);

HAnimSegment902.addChild(&Shape905);

HAnimJoint901.addChildren(&HAnimSegment902);

HAnimJoint& HAnimJoint909 =  HAnimJoint();
HAnimJoint909.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint909.setDEF(CString("Joe_l_carpal_distal_interphalangeal_5"));
HAnimJoint909.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint909.setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
HAnimJoint909.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment910 =  HAnimSegment();
HAnimSegment910.X3DNode::setName(CString("l_carpal_distal_phalanx_5"));
HAnimSegment910.setDEF(CString("Joe_l_carpal_distal_phalanx_5"));
Shape& Shape911 =  Shape();
Appearance& Appearance912 =  Appearance();
Appearance912.setUSE(CString("SegmentLine"));
Shape911.addChild(&Appearance912);

IndexedLineSet& IndexedLineSet913 =  IndexedLineSet();
IndexedLineSet913.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate914 =  Coordinate();
Coordinate914.setPoint(new float[]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012}, 6);
IndexedLineSet913.setCoord(&Coordinate914);

Shape911.setGeometry(&IndexedLineSet913);

HAnimSegment910.addChild(&Shape911);

Transform& Transform915 =  Transform();
Transform915.setTranslation(new float[]{0.1948,0.7277,-0.1017});
Shape& Shape916 =  Shape();
Shape916.setUSE(CString("jointbox"));
Transform915.addChild(&Shape916);

HAnimSegment910.addChild(&Transform915);

HAnimSite& HAnimSite917 =  HAnimSite();
HAnimSite917.X3DNode::setName(CString("l_carpal_distal_phalanx_5_tip"));
HAnimSite917.setDEF(CString("Joe_l_carpal_distal_phalanx_5_tip"));
HAnimSite917.setTranslation(new float[]{0.2014,0.7009,-0.1012});
Shape& Shape918 =  Shape();
Shape918.setUSE(CString("sitebox"));
HAnimSite917.addChild(&Shape918);

HAnimSegment910.addChild(&HAnimSite917);

HAnimJoint909.addChildren(&HAnimSegment910);

HAnimJoint901.addChildren(&HAnimJoint909);

HAnimJoint893.addChildren(&HAnimJoint901);

HAnimJoint885.addChildren(&HAnimJoint893);

HAnimJoint741.addChildren(&HAnimJoint885);

HAnimJoint719.addChildren(&HAnimJoint741);

HAnimJoint695.addChildren(&HAnimJoint719);

HAnimJoint679.addChildren(&HAnimJoint695);

HAnimJoint669.addChildren(&HAnimJoint679);

HAnimJoint553.addChildren(&HAnimJoint669);

HAnimJoint& HAnimJoint919 =  HAnimJoint();
HAnimJoint919.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint919.setDEF(CString("Joe_r_sternoclavicular"));
HAnimJoint919.setCenter(new float[]{-0.03,1.46,0});
HAnimJoint919.setSkinCoordIndex(new int32_t[]{10}, 1);
HAnimJoint919.setSkinCoordWeight(new float[]{1}, 1);
HAnimSegment& HAnimSegment920 =  HAnimSegment();
HAnimSegment920.X3DNode::setName(CString("r_clavicle"));
HAnimSegment920.setDEF(CString("Joe_r_clavicle"));
Shape& Shape921 =  Shape();
Appearance& Appearance922 =  Appearance();
Appearance922.setUSE(CString("SegmentLine"));
Shape921.addChild(&Appearance922);

IndexedLineSet& IndexedLineSet923 =  IndexedLineSet();
IndexedLineSet923.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate924 =  Coordinate();
Coordinate924.setPoint(new float[]{-0.03,1.46,0.02,-0.09,1.41,-0.09}, 6);
IndexedLineSet923.setCoord(&Coordinate924);

Shape921.setGeometry(&IndexedLineSet923);

HAnimSegment920.addChild(&Shape921);

Transform& Transform925 =  Transform();
Transform925.setTranslation(new float[]{-0.03,1.46,0.02});
Shape& Shape926 =  Shape();
Shape926.setUSE(CString("jointbox"));
Transform925.addChild(&Shape926);

HAnimSegment920.addChild(&Transform925);

HAnimSite& HAnimSite927 =  HAnimSite();
HAnimSite927.X3DNode::setName(CString("r_clavicle_pt"));
HAnimSite927.setDEF(CString("Joe_r_clavicle_pt"));
HAnimSite927.setTranslation(new float[]{-0.03,1.46,0.035});
Shape& Shape928 =  Shape();
Shape928.setUSE(CString("sitebox"));
HAnimSite927.addChild(&Shape928);

HAnimSegment920.addChild(&HAnimSite927);

HAnimJoint919.addChildren(&HAnimSegment920);

HAnimJoint& HAnimJoint929 =  HAnimJoint();
HAnimJoint929.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint929.setDEF(CString("Joe_r_acromioclavicular"));
HAnimJoint929.setCenter(new float[]{-0.09,1.41,-0.11});
HAnimJoint929.setSkinCoordIndex(new int32_t[]{77,29}, 2);
HAnimJoint929.setSkinCoordWeight(new float[]{1,0.9}, 2);
HAnimSegment& HAnimSegment930 =  HAnimSegment();
HAnimSegment930.X3DNode::setName(CString("r_scapula"));
HAnimSegment930.setDEF(CString("Joe_r_scapula"));
Shape& Shape931 =  Shape();
Appearance& Appearance932 =  Appearance();
Appearance932.setUSE(CString("SegmentLine"));
Shape931.addChild(&Appearance932);

IndexedLineSet& IndexedLineSet933 =  IndexedLineSet();
IndexedLineSet933.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate934 =  Coordinate();
Coordinate934.setPoint(new float[]{-0.09,1.41,-0.09,-0.2,1.44,-0.04}, 6);
IndexedLineSet933.setCoord(&Coordinate934);

Shape931.setGeometry(&IndexedLineSet933);

HAnimSegment930.addChild(&Shape931);

Transform& Transform935 =  Transform();
Transform935.setTranslation(new float[]{-0.09,1.41,-0.09});
Shape& Shape936 =  Shape();
Shape936.setUSE(CString("jointbox"));
Transform935.addChild(&Shape936);

HAnimSegment930.addChild(&Transform935);

Transform& Transform937 =  Transform();
Transform937.setTranslation(new float[]{-0.11,1.427,-0.1375});
Shape& Shape938 =  Shape();
Shape938.setUSE(CString("skinsphere"));
Transform937.addChild(&Shape938);

HAnimSegment930.addChild(&Transform937);

HAnimSite& HAnimSite939 =  HAnimSite();
HAnimSite939.X3DNode::setName(CString("r_acromion_pt"));
HAnimSite939.setDEF(CString("Joe_r_acromion_pt"));
HAnimSite939.setTranslation(new float[]{-0.178,1.4825,-0.0625});
Shape& Shape940 =  Shape();
Shape940.setUSE(CString("sitebox"));
HAnimSite939.addChild(&Shape940);

HAnimSegment930.addChild(&HAnimSite939);

HAnimSite& HAnimSite941 =  HAnimSite();
HAnimSite941.X3DNode::setName(CString("r_axilla_proximal_pt"));
HAnimSite941.setDEF(CString("Joe_r_axilla_proximal_pt"));
HAnimSite941.setTranslation(new float[]{-0.17,1.38,0.007});
Shape& Shape942 =  Shape();
Shape942.setUSE(CString("sitebox"));
HAnimSite941.addChild(&Shape942);

HAnimSegment930.addChild(&HAnimSite941);

HAnimSite& HAnimSite943 =  HAnimSite();
HAnimSite943.X3DNode::setName(CString("r_axilla_distal_pt"));
HAnimSite943.setDEF(CString("Joe_r_axilla_distal_pt"));
HAnimSite943.setTranslation(new float[]{-0.16,1.38,-0.127});
Shape& Shape944 =  Shape();
Shape944.setUSE(CString("sitebox"));
HAnimSite943.addChild(&Shape944);

HAnimSegment930.addChild(&HAnimSite943);

HAnimJoint929.addChildren(&HAnimSegment930);

HAnimJoint& HAnimJoint945 =  HAnimJoint();
HAnimJoint945.X3DNode::setName(CString("r_shoulder"));
HAnimJoint945.setDEF(CString("Joe_r_shoulder"));
HAnimJoint945.setCenter(new float[]{-0.2,1.44,-0.04});
HAnimJoint945.setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
HAnimJoint945.setSkinCoordWeight(new float[]{0.1,1,1,1,1,1,1,1,0.3,0.2}, 10);
HAnimSegment& HAnimSegment946 =  HAnimSegment();
HAnimSegment946.X3DNode::setName(CString("r_upperarm"));
HAnimSegment946.setDEF(CString("Joe_r_upperarm"));
Transform& Transform947 =  Transform();
Transform947.setTranslation(new float[]{-0.2,1.44,-0.04});
Shape& Shape948 =  Shape();
Shape948.setUSE(CString("jointbox"));
Transform947.addChild(&Shape948);

HAnimSegment946.addChild(&Transform947);

Shape& Shape949 =  Shape();
Appearance& Appearance950 =  Appearance();
Appearance950.setUSE(CString("SegmentLine"));
Shape949.addChild(&Appearance950);

IndexedLineSet& IndexedLineSet951 =  IndexedLineSet();
IndexedLineSet951.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate952 =  Coordinate();
Coordinate952.setPoint(new float[]{-0.2,1.44,-0.04,-0.2,1.1388,-0.04}, 6);
IndexedLineSet951.setCoord(&Coordinate952);

Shape949.setGeometry(&IndexedLineSet951);

HAnimSegment946.addChild(&Shape949);

Transform& Transform953 =  Transform();
Transform953.setTranslation(new float[]{-0.178,1.4825,-0.0625});
Shape& Shape954 =  Shape();
Shape954.setUSE(CString("skinsphere"));
Transform953.addChild(&Shape954);

HAnimSegment946.addChild(&Transform953);

Transform& Transform955 =  Transform();
Transform955.setTranslation(new float[]{-0.17,1.38,0.007});
Shape& Shape956 =  Shape();
Shape956.setUSE(CString("skinsphere"));
Transform955.addChild(&Shape956);

HAnimSegment946.addChild(&Transform955);

Transform& Transform957 =  Transform();
Transform957.setTranslation(new float[]{-0.16,1.38,-0.127});
Shape& Shape958 =  Shape();
Shape958.setUSE(CString("skinsphere"));
Transform957.addChild(&Shape958);

HAnimSegment946.addChild(&Transform957);

Transform& Transform959 =  Transform();
Transform959.setTranslation(new float[]{-0.235,1.42,-0.0625});
Shape& Shape960 =  Shape();
Shape960.setUSE(CString("skinsphere"));
Transform959.addChild(&Shape960);

HAnimSegment946.addChild(&Transform959);

Transform& Transform961 =  Transform();
Transform961.setTranslation(new float[]{-0.23,1.235,-0.04});
Shape& Shape962 =  Shape();
Shape962.setUSE(CString("skinsphere"));
Transform961.addChild(&Shape962);

HAnimSegment946.addChild(&Transform961);

Transform& Transform963 =  Transform();
Transform963.setTranslation(new float[]{-0.16,1.23,-0.04});
Shape& Shape964 =  Shape();
Shape964.setUSE(CString("skinsphere"));
Transform963.addChild(&Shape964);

HAnimSegment946.addChild(&Transform963);

Transform& Transform965 =  Transform();
Transform965.setTranslation(new float[]{-0.2,1.23,-0.105});
Shape& Shape966 =  Shape();
Shape966.setUSE(CString("skinsphere"));
Transform965.addChild(&Shape966);

HAnimSegment946.addChild(&Transform965);

Transform& Transform967 =  Transform();
Transform967.setTranslation(new float[]{-0.2,1.235,0.02});
Shape& Shape968 =  Shape();
Shape968.setUSE(CString("skinsphere"));
Transform967.addChild(&Shape968);

HAnimSegment946.addChild(&Transform967);

HAnimSite& HAnimSite969 =  HAnimSite();
HAnimSite969.X3DNode::setName(CString("r_humeral_medial_epicondyle_pt"));
HAnimSite969.setDEF(CString("Joe_r_humeral_medial_epicondyle_pt"));
HAnimSite969.setTranslation(new float[]{-0.165,1.1388,-0.04});
Shape& Shape970 =  Shape();
Shape970.setUSE(CString("sitebox"));
HAnimSite969.addChild(&Shape970);

HAnimSegment946.addChild(&HAnimSite969);

HAnimSite& HAnimSite971 =  HAnimSite();
HAnimSite971.X3DNode::setName(CString("r_radiale_pt"));
HAnimSite971.setDEF(CString("Joe_r_radiale_pt"));
HAnimSite971.setTranslation(new float[]{-0.23,1.133,-0.055});
Shape& Shape972 =  Shape();
Shape972.setUSE(CString("sitebox"));
HAnimSite971.addChild(&Shape972);

HAnimSegment946.addChild(&HAnimSite971);

HAnimSite& HAnimSite973 =  HAnimSite();
HAnimSite973.X3DNode::setName(CString("r_humeral_lateral_epicondyle_pt"));
HAnimSite973.setDEF(CString("Joe_r_humeral_lateral_epicondyle_pt"));
HAnimSite973.setTranslation(new float[]{-0.244,1.1388,-0.04});
Shape& Shape974 =  Shape();
Shape974.setUSE(CString("sitebox"));
HAnimSite973.addChild(&Shape974);

HAnimSegment946.addChild(&HAnimSite973);

HAnimJoint945.addChildren(&HAnimSegment946);

HAnimJoint& HAnimJoint975 =  HAnimJoint();
HAnimJoint975.X3DNode::setName(CString("r_elbow"));
HAnimJoint975.setDEF(CString("Joe_r_elbow"));
HAnimJoint975.setCenter(new float[]{-0.2,1.1388,-0.04});
HAnimJoint975.setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
HAnimJoint975.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimSegment& HAnimSegment976 =  HAnimSegment();
HAnimSegment976.X3DNode::setName(CString("r_forearm"));
HAnimSegment976.setDEF(CString("Joe_r_forearm"));
Shape& Shape977 =  Shape();
Appearance& Appearance978 =  Appearance();
Appearance978.setUSE(CString("SegmentLine"));
Shape977.addChild(&Appearance978);

IndexedLineSet& IndexedLineSet979 =  IndexedLineSet();
IndexedLineSet979.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate980 =  Coordinate();
Coordinate980.setPoint(new float[]{-0.2,1.1388,-0.04,-0.2,0.89,-0.04}, 6);
IndexedLineSet979.setCoord(&Coordinate980);

Shape977.setGeometry(&IndexedLineSet979);

HAnimSegment976.addChild(&Shape977);

Transform& Transform981 =  Transform();
Transform981.setTranslation(new float[]{-0.2,1.1388,-0.04});
Shape& Shape982 =  Shape();
Shape982.setUSE(CString("jointbox"));
Transform981.addChild(&Shape982);

HAnimSegment976.addChild(&Transform981);

Transform& Transform983 =  Transform();
Transform983.setTranslation(new float[]{-0.2,1.1388,0.013});
Shape& Shape984 =  Shape();
Shape984.setUSE(CString("skinsphere"));
Transform983.addChild(&Shape984);

HAnimSegment976.addChild(&Transform983);

Transform& Transform985 =  Transform();
Transform985.setTranslation(new float[]{-0.225,1,-0.01});
Shape& Shape986 =  Shape();
Shape986.setUSE(CString("skinsphere"));
Transform985.addChild(&Shape986);

HAnimSegment976.addChild(&Transform985);

Transform& Transform987 =  Transform();
Transform987.setTranslation(new float[]{-0.225,1,-0.07});
Shape& Shape988 =  Shape();
Shape988.setUSE(CString("skinsphere"));
Transform987.addChild(&Shape988);

HAnimSegment976.addChild(&Transform987);

Transform& Transform989 =  Transform();
Transform989.setTranslation(new float[]{-0.185,1,-0.01});
Shape& Shape990 =  Shape();
Shape990.setUSE(CString("skinsphere"));
Transform989.addChild(&Shape990);

HAnimSegment976.addChild(&Transform989);

Transform& Transform991 =  Transform();
Transform991.setTranslation(new float[]{-0.185,1,-0.07});
Shape& Shape992 =  Shape();
Shape992.setUSE(CString("skinsphere"));
Transform991.addChild(&Shape992);

HAnimSegment976.addChild(&Transform991);

HAnimSite& HAnimSite993 =  HAnimSite();
HAnimSite993.X3DNode::setName(CString("r_radial_styloid_pt"));
HAnimSite993.setDEF(CString("Joe_r_radial_styloid_pt"));
HAnimSite993.setTranslation(new float[]{-0.2,0.9,-0.015});
Shape& Shape994 =  Shape();
Shape994.setUSE(CString("sitebox"));
HAnimSite993.addChild(&Shape994);

HAnimSegment976.addChild(&HAnimSite993);

HAnimSite& HAnimSite995 =  HAnimSite();
HAnimSite995.X3DNode::setName(CString("r_olecranon_pt"));
HAnimSite995.setDEF(CString("Joe_r_olecranon_pt"));
HAnimSite995.setTranslation(new float[]{-0.2,1.1388,-0.08});
Shape& Shape996 =  Shape();
Shape996.setUSE(CString("sitebox"));
HAnimSite995.addChild(&Shape996);

HAnimSegment976.addChild(&HAnimSite995);

HAnimJoint975.addChildren(&HAnimSegment976);

HAnimJoint& HAnimJoint997 =  HAnimJoint();
HAnimJoint997.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint997.setDEF(CString("Joe_r_radiocarpal"));
HAnimJoint997.setCenter(new float[]{-0.2,0.89,-0.04});
HAnimJoint997.setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
HAnimJoint997.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment998 =  HAnimSegment();
HAnimSegment998.X3DNode::setName(CString("r_carpal"));
HAnimSegment998.setDEF(CString("Joe_r_carpal"));
Shape& Shape999 =  Shape();
Appearance& Appearance1000 =  Appearance();
Appearance1000.setUSE(CString("SegmentLine"));
Shape999.addChild(&Appearance1000);

IndexedLineSet& IndexedLineSet1001 =  IndexedLineSet();
IndexedLineSet1001.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1}, 15);
Coordinate& Coordinate1002 =  Coordinate();
Coordinate1002.setPoint(new float[]{-0.2,0.89,-0.04,-0.2,0.85,0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085}, 18);
IndexedLineSet1001.setCoord(&Coordinate1002);

Shape999.setGeometry(&IndexedLineSet1001);

HAnimSegment998.addChild(&Shape999);

Transform& Transform1003 =  Transform();
Transform1003.setTranslation(new float[]{-0.2,0.89,-0.04});
Shape& Shape1004 =  Shape();
Shape1004.setUSE(CString("jointbox"));
Transform1003.addChild(&Shape1004);

HAnimSegment998.addChild(&Transform1003);

HAnimSite& HAnimSite1005 =  HAnimSite();
HAnimSite1005.X3DNode::setName(CString("r_ulnar_styloid_pt"));
HAnimSite1005.setDEF(CString("Joe_r_ulnar_styloid_pt"));
HAnimSite1005.setTranslation(new float[]{-0.2,0.9,-0.085});
Shape& Shape1006 =  Shape();
Shape1006.setUSE(CString("sitebox"));
HAnimSite1005.addChild(&Shape1006);

HAnimSegment998.addChild(&HAnimSite1005);

HAnimJoint997.addChildren(&HAnimSegment998);

HAnimJoint& HAnimJoint1007 =  HAnimJoint();
HAnimJoint1007.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint1007.setDEF(CString("Joe_r_carpometacarpal_1"));
HAnimJoint1007.setCenter(new float[]{-0.2,0.85,0});
HAnimJoint1007.setSkinCoordIndex(new int32_t[]{243,244}, 2);
HAnimJoint1007.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment1008 =  HAnimSegment();
HAnimSegment1008.X3DNode::setName(CString("r_metacarpal_1"));
HAnimSegment1008.setDEF(CString("Joe_r_metacarpal_1"));
Shape& Shape1009 =  Shape();
Appearance& Appearance1010 =  Appearance();
Appearance1010.setUSE(CString("SegmentLine"));
Shape1009.addChild(&Appearance1010);

IndexedLineSet& IndexedLineSet1011 =  IndexedLineSet();
IndexedLineSet1011.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1012 =  Coordinate();
Coordinate1012.setPoint(new float[]{-0.2,0.85,0,-0.2,0.82,0.03}, 6);
IndexedLineSet1011.setCoord(&Coordinate1012);

Shape1009.setGeometry(&IndexedLineSet1011);

HAnimSegment1008.addChild(&Shape1009);

Transform& Transform1013 =  Transform();
Transform1013.setTranslation(new float[]{-0.2,0.85,0});
Shape& Shape1014 =  Shape();
Shape1014.setUSE(CString("jointbox"));
Transform1013.addChild(&Shape1014);

HAnimSegment1008.addChild(&Transform1013);

HAnimJoint1007.addChildren(&HAnimSegment1008);

HAnimJoint& HAnimJoint1015 =  HAnimJoint();
HAnimJoint1015.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1015.setDEF(CString("Joe_r_metacarpophalangeal_1"));
HAnimJoint1015.setCenter(new float[]{-0.2,0.82,0.03});
HAnimJoint1015.setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
HAnimJoint1015.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1}, 6);
HAnimSegment& HAnimSegment1016 =  HAnimSegment();
HAnimSegment1016.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment1016.setDEF(CString("Joe_r_carpal_proximal_phalanx_1"));
Shape& Shape1017 =  Shape();
Appearance& Appearance1018 =  Appearance();
Appearance1018.setUSE(CString("SegmentLine"));
Shape1017.addChild(&Appearance1018);

IndexedLineSet& IndexedLineSet1019 =  IndexedLineSet();
IndexedLineSet1019.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1020 =  Coordinate();
Coordinate1020.setPoint(new float[]{-0.2,0.82,0.03,-0.2,0.8,0.05}, 6);
IndexedLineSet1019.setCoord(&Coordinate1020);

Shape1017.setGeometry(&IndexedLineSet1019);

HAnimSegment1016.addChild(&Shape1017);

Transform& Transform1021 =  Transform();
Transform1021.setTranslation(new float[]{-0.2,0.82,0.03});
Shape& Shape1022 =  Shape();
Shape1022.setUSE(CString("jointbox"));
Transform1021.addChild(&Shape1022);

HAnimSegment1016.addChild(&Transform1021);

HAnimJoint1015.addChildren(&HAnimSegment1016);

HAnimJoint& HAnimJoint1023 =  HAnimJoint();
HAnimJoint1023.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1023.setDEF(CString("Joe_r_carpal_interphalangeal_1"));
HAnimJoint1023.setCenter(new float[]{-0.2,0.8,0.05});
HAnimJoint1023.setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
HAnimJoint1023.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment1024 =  HAnimSegment();
HAnimSegment1024.X3DNode::setName(CString("r_carpal_distal_phalanx_1"));
HAnimSegment1024.setDEF(CString("Joe_r_carpal_distal_phalanx_1"));
Shape& Shape1025 =  Shape();
Appearance& Appearance1026 =  Appearance();
Appearance1026.setUSE(CString("SegmentLine"));
Shape1025.addChild(&Appearance1026);

IndexedLineSet& IndexedLineSet1027 =  IndexedLineSet();
IndexedLineSet1027.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1028 =  Coordinate();
Coordinate1028.setPoint(new float[]{-0.2,0.8,0.05,-0.2,0.78,0.07}, 6);
IndexedLineSet1027.setCoord(&Coordinate1028);

Shape1025.setGeometry(&IndexedLineSet1027);

HAnimSegment1024.addChild(&Shape1025);

Transform& Transform1029 =  Transform();
Transform1029.setDEF(CString("Thumbnail"));
Transform1029.setTranslation(new float[]{-0.2,0.785,0.075});
Shape& Shape1030 =  Shape();
Shape1030.setUSE(CString("skinsphere"));
Transform1029.addChild(&Shape1030);

HAnimSegment1024.addChild(&Transform1029);

Transform& Transform1031 =  Transform();
Transform1031.setTranslation(new float[]{-0.2,0.8,0.05});
Shape& Shape1032 =  Shape();
Shape1032.setUSE(CString("jointbox"));
Transform1031.addChild(&Shape1032);

HAnimSegment1024.addChild(&Transform1031);

HAnimSite& HAnimSite1033 =  HAnimSite();
HAnimSite1033.X3DNode::setName(CString("r_carpal_distal_phalanx_1_tip"));
HAnimSite1033.setDEF(CString("Joe_r_carpal_distal_phalanx_1_tip"));
HAnimSite1033.setTranslation(new float[]{-0.2,0.78,0.07});
Shape& Shape1034 =  Shape();
Shape1034.setUSE(CString("sitebox"));
HAnimSite1033.addChild(&Shape1034);

HAnimSegment1024.addChild(&HAnimSite1033);

HAnimJoint1023.addChildren(&HAnimSegment1024);

HAnimJoint1015.addChildren(&HAnimJoint1023);

HAnimJoint1007.addChildren(&HAnimJoint1015);

HAnimJoint997.addChildren(&HAnimJoint1007);

HAnimJoint& HAnimJoint1035 =  HAnimJoint();
HAnimJoint1035.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint1035.setDEF(CString("Joe_r_carpometacarpal_2"));
HAnimJoint1035.setCenter(new float[]{-0.2,0.84,-0.015});
HAnimJoint1035.setSkinCoordIndex(new int32_t[]{245,246}, 2);
HAnimJoint1035.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment1036 =  HAnimSegment();
HAnimSegment1036.X3DNode::setName(CString("r_metacarpal_2"));
HAnimSegment1036.setDEF(CString("Joe_r_metacarpal_2"));
Shape& Shape1037 =  Shape();
Appearance& Appearance1038 =  Appearance();
Appearance1038.setUSE(CString("SegmentLine"));
Shape1037.addChild(&Appearance1038);

IndexedLineSet& IndexedLineSet1039 =  IndexedLineSet();
IndexedLineSet1039.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1040 =  Coordinate();
Coordinate1040.setPoint(new float[]{-0.2,0.84,-0.015,-0.2,0.793,-0.015}, 6);
IndexedLineSet1039.setCoord(&Coordinate1040);

Shape1037.setGeometry(&IndexedLineSet1039);

HAnimSegment1036.addChild(&Shape1037);

Transform& Transform1041 =  Transform();
Transform1041.setTranslation(new float[]{-0.2,0.84,-0.015});
Shape& Shape1042 =  Shape();
Shape1042.setUSE(CString("jointbox"));
Transform1041.addChild(&Shape1042);

HAnimSegment1036.addChild(&Transform1041);

HAnimSite& HAnimSite1043 =  HAnimSite();
HAnimSite1043.X3DNode::setName(CString("r_metacarpal_phalanx_2_pt"));
HAnimSite1043.setDEF(CString("Joe_r_metacarpal_phalanx_2_pt"));
HAnimSite1043.setTranslation(new float[]{-0.2,0.793,-0.005});
Shape& Shape1044 =  Shape();
Shape1044.setUSE(CString("sitebox"));
HAnimSite1043.addChild(&Shape1044);

HAnimSegment1036.addChild(&HAnimSite1043);

HAnimJoint1035.addChildren(&HAnimSegment1036);

HAnimJoint& HAnimJoint1045 =  HAnimJoint();
HAnimJoint1045.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1045.setDEF(CString("Joe_r_metacarpophalangeal_2"));
HAnimJoint1045.setCenter(new float[]{-0.2,0.793,-0.015});
HAnimJoint1045.setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
HAnimJoint1045.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimSegment& HAnimSegment1046 =  HAnimSegment();
HAnimSegment1046.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment1046.setDEF(CString("Joe_r_carpal_proximal_phalanx_2"));
Shape& Shape1047 =  Shape();
Appearance& Appearance1048 =  Appearance();
Appearance1048.setUSE(CString("SegmentLine"));
Shape1047.addChild(&Appearance1048);

IndexedLineSet& IndexedLineSet1049 =  IndexedLineSet();
IndexedLineSet1049.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1050 =  Coordinate();
Coordinate1050.setPoint(new float[]{-0.2,0.793,-0.015,-0.2,0.745,-0.015}, 6);
IndexedLineSet1049.setCoord(&Coordinate1050);

Shape1047.setGeometry(&IndexedLineSet1049);

HAnimSegment1046.addChild(&Shape1047);

Transform& Transform1051 =  Transform();
Transform1051.setTranslation(new float[]{-0.2,0.793,-0.015});
Shape& Shape1052 =  Shape();
Shape1052.setUSE(CString("jointbox"));
Transform1051.addChild(&Shape1052);

HAnimSegment1046.addChild(&Transform1051);

HAnimJoint1045.addChildren(&HAnimSegment1046);

HAnimJoint& HAnimJoint1053 =  HAnimJoint();
HAnimJoint1053.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1053.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1053.setCenter(new float[]{-0.2,0.745,-0.015});
HAnimJoint1053.setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
HAnimJoint1053.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment1054 =  HAnimSegment();
HAnimSegment1054.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment1054.setDEF(CString("Joe_r_carpal_middle_phalanx_2"));
Shape& Shape1055 =  Shape();
Appearance& Appearance1056 =  Appearance();
Appearance1056.setUSE(CString("SegmentLine"));
Shape1055.addChild(&Appearance1056);

IndexedLineSet& IndexedLineSet1057 =  IndexedLineSet();
IndexedLineSet1057.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1058 =  Coordinate();
Coordinate1058.setPoint(new float[]{-0.2,0.745,-0.015,-0.2,0.72,-0.015}, 6);
IndexedLineSet1057.setCoord(&Coordinate1058);

Shape1055.setGeometry(&IndexedLineSet1057);

HAnimSegment1054.addChild(&Shape1055);

Transform& Transform1059 =  Transform();
Transform1059.setTranslation(new float[]{-0.2,0.745,-0.015});
Shape& Shape1060 =  Shape();
Shape1060.setUSE(CString("jointbox"));
Transform1059.addChild(&Shape1060);

HAnimSegment1054.addChild(&Transform1059);

HAnimJoint1053.addChildren(&HAnimSegment1054);

HAnimJoint& HAnimJoint1061 =  HAnimJoint();
HAnimJoint1061.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1061.setDEF(CString("Joe_r_carpal_distal_interphalangeal_2"));
HAnimJoint1061.setCenter(new float[]{-0.2,0.72,-0.015});
HAnimJoint1061.setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
HAnimJoint1061.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment1062 =  HAnimSegment();
HAnimSegment1062.X3DNode::setName(CString("r_carpal_distal_phalanx_2"));
HAnimSegment1062.setDEF(CString("Joe_r_carpal_distal_phalanx_2"));
Shape& Shape1063 =  Shape();
Appearance& Appearance1064 =  Appearance();
Appearance1064.setUSE(CString("SegmentLine"));
Shape1063.addChild(&Appearance1064);

IndexedLineSet& IndexedLineSet1065 =  IndexedLineSet();
IndexedLineSet1065.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1066 =  Coordinate();
Coordinate1066.setPoint(new float[]{-0.2,0.72,-0.015,-0.2,0.695,-0.015}, 6);
IndexedLineSet1065.setCoord(&Coordinate1066);

Shape1063.setGeometry(&IndexedLineSet1065);

HAnimSegment1062.addChild(&Shape1063);

Transform& Transform1067 =  Transform();
Transform1067.setTranslation(new float[]{-0.2,0.72,-0.015});
Shape& Shape1068 =  Shape();
Shape1068.setUSE(CString("jointbox"));
Transform1067.addChild(&Shape1068);

HAnimSegment1062.addChild(&Transform1067);

HAnimSite& HAnimSite1069 =  HAnimSite();
HAnimSite1069.X3DNode::setName(CString("r_carpal_distal_phalanx_2_tip"));
HAnimSite1069.setDEF(CString("Joe_r_carpal_distal_phalanx_2_tip"));
HAnimSite1069.setTranslation(new float[]{-0.2,0.695,-0.015});
Shape& Shape1070 =  Shape();
Shape1070.setUSE(CString("sitebox"));
HAnimSite1069.addChild(&Shape1070);

HAnimSegment1062.addChild(&HAnimSite1069);

HAnimJoint1061.addChildren(&HAnimSegment1062);

HAnimJoint1053.addChildren(&HAnimJoint1061);

HAnimJoint1045.addChildren(&HAnimJoint1053);

HAnimJoint1035.addChildren(&HAnimJoint1045);

HAnimJoint997.addChildren(&HAnimJoint1035);

HAnimJoint& HAnimJoint1071 =  HAnimJoint();
HAnimJoint1071.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint1071.setDEF(CString("Joe_r_carpometacarpal_3"));
HAnimJoint1071.setCenter(new float[]{-0.2,0.835,-0.04});
HAnimJoint1071.setSkinCoordIndex(new int32_t[]{247,248}, 2);
HAnimJoint1071.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment1072 =  HAnimSegment();
HAnimSegment1072.X3DNode::setName(CString("r_metacarpal_3"));
HAnimSegment1072.setDEF(CString("Joe_r_metacarpal_3"));
Shape& Shape1073 =  Shape();
Appearance& Appearance1074 =  Appearance();
Appearance1074.setUSE(CString("SegmentLine"));
Shape1073.addChild(&Appearance1074);

IndexedLineSet& IndexedLineSet1075 =  IndexedLineSet();
IndexedLineSet1075.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1076 =  Coordinate();
Coordinate1076.setPoint(new float[]{-0.2,0.835,-0.04,-0.2,0.788,-0.04}, 6);
IndexedLineSet1075.setCoord(&Coordinate1076);

Shape1073.setGeometry(&IndexedLineSet1075);

HAnimSegment1072.addChild(&Shape1073);

Transform& Transform1077 =  Transform();
Transform1077.setTranslation(new float[]{-0.2,0.835,-0.04});
Shape& Shape1078 =  Shape();
Shape1078.setUSE(CString("jointbox"));
Transform1077.addChild(&Shape1078);

HAnimSegment1072.addChild(&Transform1077);

HAnimJoint1071.addChildren(&HAnimSegment1072);

HAnimJoint& HAnimJoint1079 =  HAnimJoint();
HAnimJoint1079.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1079.setDEF(CString("Joe_r_metacarpophalangeal_3"));
HAnimJoint1079.setCenter(new float[]{-0.2,0.788,-0.04});
HAnimJoint1079.setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
HAnimJoint1079.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimSegment& HAnimSegment1080 =  HAnimSegment();
HAnimSegment1080.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment1080.setDEF(CString("Joe_r_carpal_proximal_phalanx_3"));
Shape& Shape1081 =  Shape();
Appearance& Appearance1082 =  Appearance();
Appearance1082.setUSE(CString("SegmentLine"));
Shape1081.addChild(&Appearance1082);

IndexedLineSet& IndexedLineSet1083 =  IndexedLineSet();
IndexedLineSet1083.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1084 =  Coordinate();
Coordinate1084.setPoint(new float[]{-0.2,0.788,-0.04,-0.2,0.74,-0.04}, 6);
IndexedLineSet1083.setCoord(&Coordinate1084);

Shape1081.setGeometry(&IndexedLineSet1083);

HAnimSegment1080.addChild(&Shape1081);

Transform& Transform1085 =  Transform();
Transform1085.setTranslation(new float[]{-0.2,0.788,-0.04});
Shape& Shape1086 =  Shape();
Shape1086.setUSE(CString("jointbox"));
Transform1085.addChild(&Shape1086);

HAnimSegment1080.addChild(&Transform1085);

HAnimJoint1079.addChildren(&HAnimSegment1080);

HAnimJoint& HAnimJoint1087 =  HAnimJoint();
HAnimJoint1087.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1087.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1087.setCenter(new float[]{-0.2,0.74,-0.04});
HAnimJoint1087.setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
HAnimJoint1087.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment1088 =  HAnimSegment();
HAnimSegment1088.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment1088.setDEF(CString("Joe_r_carpal_middle_phalanx_3"));
Shape& Shape1089 =  Shape();
Appearance& Appearance1090 =  Appearance();
Appearance1090.setUSE(CString("SegmentLine"));
Shape1089.addChild(&Appearance1090);

IndexedLineSet& IndexedLineSet1091 =  IndexedLineSet();
IndexedLineSet1091.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1092 =  Coordinate();
Coordinate1092.setPoint(new float[]{-0.2,0.74,-0.04,-0.2,0.7142,-0.04}, 6);
IndexedLineSet1091.setCoord(&Coordinate1092);

Shape1089.setGeometry(&IndexedLineSet1091);

HAnimSegment1088.addChild(&Shape1089);

Transform& Transform1093 =  Transform();
Transform1093.setTranslation(new float[]{-0.2,0.74,-0.04});
Shape& Shape1094 =  Shape();
Shape1094.setUSE(CString("jointbox"));
Transform1093.addChild(&Shape1094);

HAnimSegment1088.addChild(&Transform1093);

HAnimJoint1087.addChildren(&HAnimSegment1088);

HAnimJoint& HAnimJoint1095 =  HAnimJoint();
HAnimJoint1095.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1095.setDEF(CString("Joe_r_carpal_distal_interphalangeal_3"));
HAnimJoint1095.setCenter(new float[]{-0.2,0.7142,-0.04});
HAnimJoint1095.setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
HAnimJoint1095.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment1096 =  HAnimSegment();
HAnimSegment1096.X3DNode::setName(CString("r_carpal_distal_phalanx_3"));
HAnimSegment1096.setDEF(CString("Joe_r_carpal_distal_phalanx_3"));
Shape& Shape1097 =  Shape();
Appearance& Appearance1098 =  Appearance();
Appearance1098.setUSE(CString("SegmentLine"));
Shape1097.addChild(&Appearance1098);

IndexedLineSet& IndexedLineSet1099 =  IndexedLineSet();
IndexedLineSet1099.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1100 =  Coordinate();
Coordinate1100.setPoint(new float[]{-0.2,0.7142,-0.04,-0.2,0.6758,-0.04}, 6);
IndexedLineSet1099.setCoord(&Coordinate1100);

Shape1097.setGeometry(&IndexedLineSet1099);

HAnimSegment1096.addChild(&Shape1097);

Transform& Transform1101 =  Transform();
Transform1101.setTranslation(new float[]{-0.2,0.7142,-0.04});
Shape& Shape1102 =  Shape();
Shape1102.setUSE(CString("jointbox"));
Transform1101.addChild(&Shape1102);

HAnimSegment1096.addChild(&Transform1101);

HAnimSite& HAnimSite1103 =  HAnimSite();
HAnimSite1103.X3DNode::setName(CString("r_dactylion_pt"));
HAnimSite1103.setDEF(CString("Joe_r_dactylion_pt"));
HAnimSite1103.setTranslation(new float[]{-0.2,0.68,-0.04});
Shape& Shape1104 =  Shape();
Shape1104.setUSE(CString("sitebox"));
HAnimSite1103.addChild(&Shape1104);

HAnimSegment1096.addChild(&HAnimSite1103);

HAnimSite& HAnimSite1105 =  HAnimSite();
HAnimSite1105.X3DNode::setName(CString("r_carpal_distal_phalanx_3_tip"));
HAnimSite1105.setDEF(CString("Joe_r_carpal_distal_phalanx_3_tip"));
HAnimSite1105.setTranslation(new float[]{-0.2,0.68,-0.04});
Shape& Shape1106 =  Shape();
Shape1106.setUSE(CString("sitebox"));
HAnimSite1105.addChild(&Shape1106);

HAnimSegment1096.addChild(&HAnimSite1105);

HAnimJoint1095.addChildren(&HAnimSegment1096);

HAnimJoint1087.addChildren(&HAnimJoint1095);

HAnimJoint1079.addChildren(&HAnimJoint1087);

HAnimJoint1071.addChildren(&HAnimJoint1079);

HAnimJoint997.addChildren(&HAnimJoint1071);

HAnimJoint& HAnimJoint1107 =  HAnimJoint();
HAnimJoint1107.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint1107.setDEF(CString("Joe_r_carpometacarpal_4"));
HAnimJoint1107.setCenter(new float[]{-0.2,0.835,-0.065});
HAnimJoint1107.setSkinCoordIndex(new int32_t[]{249,250}, 2);
HAnimJoint1107.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment1108 =  HAnimSegment();
HAnimSegment1108.X3DNode::setName(CString("r_metacarpal_4"));
HAnimSegment1108.setDEF(CString("Joe_r_metacarpal_4"));
Shape& Shape1109 =  Shape();
Appearance& Appearance1110 =  Appearance();
Appearance1110.setUSE(CString("SegmentLine"));
Shape1109.addChild(&Appearance1110);

IndexedLineSet& IndexedLineSet1111 =  IndexedLineSet();
IndexedLineSet1111.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1112 =  Coordinate();
Coordinate1112.setPoint(new float[]{-0.2,0.835,-0.065,-0.2,0.793,-0.065}, 6);
IndexedLineSet1111.setCoord(&Coordinate1112);

Shape1109.setGeometry(&IndexedLineSet1111);

HAnimSegment1108.addChild(&Shape1109);

Transform& Transform1113 =  Transform();
Transform1113.setTranslation(new float[]{-0.2,0.835,-0.065});
Shape& Shape1114 =  Shape();
Shape1114.setUSE(CString("jointbox"));
Transform1113.addChild(&Shape1114);

HAnimSegment1108.addChild(&Transform1113);

HAnimJoint1107.addChildren(&HAnimSegment1108);

HAnimJoint& HAnimJoint1115 =  HAnimJoint();
HAnimJoint1115.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1115.setDEF(CString("Joe_r_metacarpophalangeal_4"));
HAnimJoint1115.setCenter(new float[]{-0.2,0.793,-0.065});
HAnimJoint1115.setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
HAnimJoint1115.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimSegment& HAnimSegment1116 =  HAnimSegment();
HAnimSegment1116.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment1116.setDEF(CString("Joe_r_carpal_proximal_phalanx_4"));
Shape& Shape1117 =  Shape();
Appearance& Appearance1118 =  Appearance();
Appearance1118.setUSE(CString("SegmentLine"));
Shape1117.addChild(&Appearance1118);

IndexedLineSet& IndexedLineSet1119 =  IndexedLineSet();
IndexedLineSet1119.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1120 =  Coordinate();
Coordinate1120.setPoint(new float[]{-0.2,0.793,-0.065,-0.2,0.74,-0.065}, 6);
IndexedLineSet1119.setCoord(&Coordinate1120);

Shape1117.setGeometry(&IndexedLineSet1119);

HAnimSegment1116.addChild(&Shape1117);

Transform& Transform1121 =  Transform();
Transform1121.setTranslation(new float[]{-0.2,0.793,-0.065});
Shape& Shape1122 =  Shape();
Shape1122.setUSE(CString("jointbox"));
Transform1121.addChild(&Shape1122);

HAnimSegment1116.addChild(&Transform1121);

HAnimJoint1115.addChildren(&HAnimSegment1116);

HAnimJoint& HAnimJoint1123 =  HAnimJoint();
HAnimJoint1123.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1123.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1123.setCenter(new float[]{-0.2,0.74,-0.065});
HAnimJoint1123.setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
HAnimJoint1123.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment1124 =  HAnimSegment();
HAnimSegment1124.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment1124.setDEF(CString("Joe_r_carpal_middle_phalanx_4"));
Shape& Shape1125 =  Shape();
Appearance& Appearance1126 =  Appearance();
Appearance1126.setUSE(CString("SegmentLine"));
Shape1125.addChild(&Appearance1126);

IndexedLineSet& IndexedLineSet1127 =  IndexedLineSet();
IndexedLineSet1127.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1128 =  Coordinate();
Coordinate1128.setPoint(new float[]{-0.2,0.74,-0.065,-0.2,0.7177,-0.065}, 6);
IndexedLineSet1127.setCoord(&Coordinate1128);

Shape1125.setGeometry(&IndexedLineSet1127);

HAnimSegment1124.addChild(&Shape1125);

Transform& Transform1129 =  Transform();
Transform1129.setTranslation(new float[]{-0.2,0.74,-0.065});
Shape& Shape1130 =  Shape();
Shape1130.setUSE(CString("jointbox"));
Transform1129.addChild(&Shape1130);

HAnimSegment1124.addChild(&Transform1129);

HAnimJoint1123.addChildren(&HAnimSegment1124);

HAnimJoint& HAnimJoint1131 =  HAnimJoint();
HAnimJoint1131.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1131.setDEF(CString("Joe_r_carpal_distal_interphalangeal_4"));
HAnimJoint1131.setCenter(new float[]{-0.2,0.7177,-0.065});
HAnimJoint1131.setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
HAnimJoint1131.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment1132 =  HAnimSegment();
HAnimSegment1132.X3DNode::setName(CString("r_carpal_distal_phalanx_4"));
HAnimSegment1132.setDEF(CString("Joe_r_carpal_distal_phalanx_4"));
Shape& Shape1133 =  Shape();
Appearance& Appearance1134 =  Appearance();
Appearance1134.setUSE(CString("SegmentLine"));
Shape1133.addChild(&Appearance1134);

IndexedLineSet& IndexedLineSet1135 =  IndexedLineSet();
IndexedLineSet1135.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1136 =  Coordinate();
Coordinate1136.setPoint(new float[]{-0.2,0.7177,-0.065,-0.2,0.695,-0.065}, 6);
IndexedLineSet1135.setCoord(&Coordinate1136);

Shape1133.setGeometry(&IndexedLineSet1135);

HAnimSegment1132.addChild(&Shape1133);

Transform& Transform1137 =  Transform();
Transform1137.setTranslation(new float[]{-0.2,0.7177,-0.065});
Shape& Shape1138 =  Shape();
Shape1138.setUSE(CString("jointbox"));
Transform1137.addChild(&Shape1138);

HAnimSegment1132.addChild(&Transform1137);

HAnimSite& HAnimSite1139 =  HAnimSite();
HAnimSite1139.X3DNode::setName(CString("r_carpal_distal_phalanx_4_tip"));
HAnimSite1139.setDEF(CString("Joe_r_carpal_distal_phalanx_4_tip"));
HAnimSite1139.setTranslation(new float[]{-0.2,0.695,-0.065});
Shape& Shape1140 =  Shape();
Shape1140.setUSE(CString("sitebox"));
HAnimSite1139.addChild(&Shape1140);

HAnimSegment1132.addChild(&HAnimSite1139);

HAnimJoint1131.addChildren(&HAnimSegment1132);

HAnimJoint1123.addChildren(&HAnimJoint1131);

HAnimJoint1115.addChildren(&HAnimJoint1123);

HAnimJoint1107.addChildren(&HAnimJoint1115);

HAnimJoint997.addChildren(&HAnimJoint1107);

HAnimJoint& HAnimJoint1141 =  HAnimJoint();
HAnimJoint1141.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint1141.setDEF(CString("Joe_r_carpometacarpal_5"));
HAnimJoint1141.setCenter(new float[]{-0.2,0.84,-0.085});
HAnimJoint1141.setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
HAnimJoint1141.setSkinCoordWeight(new float[]{1,1,1,0.5}, 4);
HAnimSegment& HAnimSegment1142 =  HAnimSegment();
HAnimSegment1142.X3DNode::setName(CString("r_metacarpal_5"));
HAnimSegment1142.setDEF(CString("Joe_r_metacarpal_5"));
Shape& Shape1143 =  Shape();
Appearance& Appearance1144 =  Appearance();
Appearance1144.setUSE(CString("SegmentLine"));
Shape1143.addChild(&Appearance1144);

IndexedLineSet& IndexedLineSet1145 =  IndexedLineSet();
IndexedLineSet1145.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1146 =  Coordinate();
Coordinate1146.setPoint(new float[]{-0.2,0.84,-0.085,-0.2,0.79,-0.085}, 6);
IndexedLineSet1145.setCoord(&Coordinate1146);

Shape1143.setGeometry(&IndexedLineSet1145);

HAnimSegment1142.addChild(&Shape1143);

Transform& Transform1147 =  Transform();
Transform1147.setTranslation(new float[]{-0.2,0.84,-0.085});
Shape& Shape1148 =  Shape();
Shape1148.setUSE(CString("jointbox"));
Transform1147.addChild(&Shape1148);

HAnimSegment1142.addChild(&Transform1147);

HAnimSite& HAnimSite1149 =  HAnimSite();
HAnimSite1149.X3DNode::setName(CString("r_metacarpal_phalanx_5_pt"));
HAnimSite1149.setDEF(CString("Joe_r_metacarpal_phalanx_5_pt"));
HAnimSite1149.setTranslation(new float[]{-0.2,0.79,-0.095});
Shape& Shape1150 =  Shape();
Shape1150.setUSE(CString("sitebox"));
HAnimSite1149.addChild(&Shape1150);

HAnimSegment1142.addChild(&HAnimSite1149);

HAnimJoint1141.addChildren(&HAnimSegment1142);

HAnimJoint& HAnimJoint1151 =  HAnimJoint();
HAnimJoint1151.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1151.setDEF(CString("Joe_r_metacarpophalangeal_5"));
HAnimJoint1151.setCenter(new float[]{-0.2,0.79,-0.085});
HAnimJoint1151.setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
HAnimJoint1151.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimSegment& HAnimSegment1152 =  HAnimSegment();
HAnimSegment1152.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment1152.setDEF(CString("Joe_r_carpal_proximal_phalanx_5"));
Shape& Shape1153 =  Shape();
Appearance& Appearance1154 =  Appearance();
Appearance1154.setUSE(CString("SegmentLine"));
Shape1153.addChild(&Appearance1154);

IndexedLineSet& IndexedLineSet1155 =  IndexedLineSet();
IndexedLineSet1155.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1156 =  Coordinate();
Coordinate1156.setPoint(new float[]{-0.2,0.79,-0.085,-0.2,0.755,-0.085}, 6);
IndexedLineSet1155.setCoord(&Coordinate1156);

Shape1153.setGeometry(&IndexedLineSet1155);

HAnimSegment1152.addChild(&Shape1153);

Transform& Transform1157 =  Transform();
Transform1157.setTranslation(new float[]{-0.2,0.79,-0.085});
Shape& Shape1158 =  Shape();
Shape1158.setUSE(CString("jointbox"));
Transform1157.addChild(&Shape1158);

HAnimSegment1152.addChild(&Transform1157);

HAnimJoint1151.addChildren(&HAnimSegment1152);

HAnimJoint& HAnimJoint1159 =  HAnimJoint();
HAnimJoint1159.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1159.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1159.setCenter(new float[]{-0.2,0.755,-0.085});
HAnimJoint1159.setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
HAnimJoint1159.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment1160 =  HAnimSegment();
HAnimSegment1160.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment1160.setDEF(CString("Joe_r_carpal_middle_phalanx_5"));
Shape& Shape1161 =  Shape();
Appearance& Appearance1162 =  Appearance();
Appearance1162.setUSE(CString("SegmentLine"));
Shape1161.addChild(&Appearance1162);

IndexedLineSet& IndexedLineSet1163 =  IndexedLineSet();
IndexedLineSet1163.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1164 =  Coordinate();
Coordinate1164.setPoint(new float[]{-0.2,0.755,-0.085,-0.2,0.735,-0.085}, 6);
IndexedLineSet1163.setCoord(&Coordinate1164);

Shape1161.setGeometry(&IndexedLineSet1163);

HAnimSegment1160.addChild(&Shape1161);

Transform& Transform1165 =  Transform();
Transform1165.setTranslation(new float[]{-0.2,0.755,-0.085});
Shape& Shape1166 =  Shape();
Shape1166.setUSE(CString("jointbox"));
Transform1165.addChild(&Shape1166);

HAnimSegment1160.addChild(&Transform1165);

HAnimJoint1159.addChildren(&HAnimSegment1160);

HAnimJoint& HAnimJoint1167 =  HAnimJoint();
HAnimJoint1167.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1167.setDEF(CString("Joe_r_carpal_distal_interphalangeal_5"));
HAnimJoint1167.setCenter(new float[]{-0.2,0.735,-0.09});
HAnimJoint1167.setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
HAnimJoint1167.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment1168 =  HAnimSegment();
HAnimSegment1168.X3DNode::setName(CString("r_carpal_distal_phalanx_5"));
HAnimSegment1168.setDEF(CString("Joe_r_carpal_distal_phalanx_5"));
Shape& Shape1169 =  Shape();
Appearance& Appearance1170 =  Appearance();
Appearance1170.setUSE(CString("SegmentLine"));
Shape1169.addChild(&Appearance1170);

IndexedLineSet& IndexedLineSet1171 =  IndexedLineSet();
IndexedLineSet1171.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1172 =  Coordinate();
Coordinate1172.setPoint(new float[]{-0.2,0.735,-0.085,-0.2,0.72,-0.085}, 6);
IndexedLineSet1171.setCoord(&Coordinate1172);

Shape1169.setGeometry(&IndexedLineSet1171);

HAnimSegment1168.addChild(&Shape1169);

Transform& Transform1173 =  Transform();
Transform1173.setTranslation(new float[]{-0.2,0.735,-0.085});
Shape& Shape1174 =  Shape();
Shape1174.setUSE(CString("jointbox"));
Transform1173.addChild(&Shape1174);

HAnimSegment1168.addChild(&Transform1173);

HAnimSite& HAnimSite1175 =  HAnimSite();
HAnimSite1175.X3DNode::setName(CString("r_carpal_distal_phalanx_5_tip"));
HAnimSite1175.setDEF(CString("Joe_r_carpal_distal_phalanx_5_tip"));
HAnimSite1175.setTranslation(new float[]{-0.2,0.72,-0.085});
Shape& Shape1176 =  Shape();
Shape1176.setUSE(CString("sitebox"));
HAnimSite1175.addChild(&Shape1176);

HAnimSegment1168.addChild(&HAnimSite1175);

HAnimJoint1167.addChildren(&HAnimSegment1168);

HAnimJoint1159.addChildren(&HAnimJoint1167);

HAnimJoint1151.addChildren(&HAnimJoint1159);

HAnimJoint1141.addChildren(&HAnimJoint1151);

HAnimJoint997.addChildren(&HAnimJoint1141);

HAnimJoint975.addChildren(&HAnimJoint997);

HAnimJoint945.addChildren(&HAnimJoint975);

HAnimJoint929.addChildren(&HAnimJoint945);

HAnimJoint919.addChildren(&HAnimJoint929);

HAnimJoint553.addChildren(&HAnimJoint919);

HAnimJoint545.addChildren(&HAnimJoint553);

HAnimJoint537.addChildren(&HAnimJoint545);

HAnimJoint527.addChildren(&HAnimJoint537);

HAnimJoint519.addChildren(&HAnimJoint527);

HAnimJoint511.addChildren(&HAnimJoint519);

HAnimJoint503.addChildren(&HAnimJoint511);

HAnimJoint495.addChildren(&HAnimJoint503);

HAnimJoint483.addChildren(&HAnimJoint495);

HAnimJoint473.addChildren(&HAnimJoint483);

HAnimJoint465.addChildren(&HAnimJoint473);

HAnimJoint457.addChildren(&HAnimJoint465);

HAnimJoint449.addChildren(&HAnimJoint457);

HAnimJoint423.addChildren(&HAnimJoint449);

HAnimJoint415.addChildren(&HAnimJoint423);

HAnimJoint407.addChildren(&HAnimJoint415);

HAnimJoint392.addChildren(&HAnimJoint407);

HAnimJoint78.addChildren(&HAnimJoint392);

HAnimHumanoid75.setSkeleton(&HAnimJoint78);

Shape& Shape1177 =  Shape();
Shape1177.setDEF(CString("SkinShape"));
Appearance& Appearance1178 =  Appearance();
Appearance1178.setDEF(CString("SkinAppearance"));
Material& Material1179 =  Material();
Material1179.setDEF(CString("SkinMaterial"));
Material1179.setAmbientIntensity(0.6);
Material1179.setDiffuseColor(new float[]{1,1,1});
Material1179.setShininess(0.6);
Material1179.setTransparency(0.2);
Appearance1178.addChild(&Material1179);

ImageTexture& ImageTexture1180 =  ImageTexture();
ImageTexture1180.setDEF(CString("zBlueSpiralBkg2"));
ImageTexture1180.setDescription(CString("Blue Spiral Pattern"));
ImageTexture1180.setUrl(new CString[]{CString("zBlueSpiralBkg2.gif"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")}, 2);
Appearance1178.addChild(&ImageTexture1180);

Shape1177.addChild(&Appearance1178);

IndexedFaceSet& IndexedFaceSet1181 =  IndexedFaceSet();
IndexedFaceSet1181.setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
IndexedFaceSet1181.setCreaseAngle(3.1);
CColor& Color1182 =  CColor();
Color1182.setColor(new float[]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1}, 2079);
IndexedFaceSet1181.setColor(&Color1182);

Coordinate& Coordinate1183 =  Coordinate();
Coordinate1183.setDEF(CString("TheSkinCoord"));
Coordinate1183.setPoint(new float[]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
IndexedFaceSet1181.setCoord(&Coordinate1183);

Shape1177.setGeometry(&IndexedFaceSet1181);

HAnimHumanoid75.setSkin(&Shape1177);

Coordinate& Coordinate1184 =  Coordinate();
Coordinate1184.setUSE(CString("TheSkinCoord"));
HAnimHumanoid75.setSkinCoord(&Coordinate1184);

HAnimJoint& HAnimJoint1185 =  HAnimJoint();
HAnimJoint1185.setUSE(CString("Joe_humanoid_root"));
HAnimHumanoid75.setJoints(&HAnimJoint1185);

HAnimJoint& HAnimJoint1186 =  HAnimJoint();
HAnimJoint1186.setUSE(CString("Joe_sacroiliac"));
HAnimHumanoid75.setJoints(&HAnimJoint1186);

HAnimJoint& HAnimJoint1187 =  HAnimJoint();
HAnimJoint1187.setUSE(CString("Joe_vl5"));
HAnimHumanoid75.setJoints(&HAnimJoint1187);

HAnimJoint& HAnimJoint1188 =  HAnimJoint();
HAnimJoint1188.setUSE(CString("Joe_vl4"));
HAnimHumanoid75.setJoints(&HAnimJoint1188);

HAnimJoint& HAnimJoint1189 =  HAnimJoint();
HAnimJoint1189.setUSE(CString("Joe_vl3"));
HAnimHumanoid75.setJoints(&HAnimJoint1189);

HAnimJoint& HAnimJoint1190 =  HAnimJoint();
HAnimJoint1190.setUSE(CString("Joe_vl2"));
HAnimHumanoid75.setJoints(&HAnimJoint1190);

HAnimJoint& HAnimJoint1191 =  HAnimJoint();
HAnimJoint1191.setUSE(CString("Joe_vl1"));
HAnimHumanoid75.setJoints(&HAnimJoint1191);

HAnimJoint& HAnimJoint1192 =  HAnimJoint();
HAnimJoint1192.setUSE(CString("Joe_vt12"));
HAnimHumanoid75.setJoints(&HAnimJoint1192);

HAnimJoint& HAnimJoint1193 =  HAnimJoint();
HAnimJoint1193.setUSE(CString("Joe_vt11"));
HAnimHumanoid75.setJoints(&HAnimJoint1193);

HAnimJoint& HAnimJoint1194 =  HAnimJoint();
HAnimJoint1194.setUSE(CString("Joe_vt10"));
HAnimHumanoid75.setJoints(&HAnimJoint1194);

HAnimJoint& HAnimJoint1195 =  HAnimJoint();
HAnimJoint1195.setUSE(CString("Joe_vt9"));
HAnimHumanoid75.setJoints(&HAnimJoint1195);

HAnimJoint& HAnimJoint1196 =  HAnimJoint();
HAnimJoint1196.setUSE(CString("Joe_vt8"));
HAnimHumanoid75.setJoints(&HAnimJoint1196);

HAnimJoint& HAnimJoint1197 =  HAnimJoint();
HAnimJoint1197.setUSE(CString("Joe_vt7"));
HAnimHumanoid75.setJoints(&HAnimJoint1197);

HAnimJoint& HAnimJoint1198 =  HAnimJoint();
HAnimJoint1198.setUSE(CString("Joe_vt6"));
HAnimHumanoid75.setJoints(&HAnimJoint1198);

HAnimJoint& HAnimJoint1199 =  HAnimJoint();
HAnimJoint1199.setUSE(CString("Joe_vt5"));
HAnimHumanoid75.setJoints(&HAnimJoint1199);

HAnimJoint& HAnimJoint1200 =  HAnimJoint();
HAnimJoint1200.setUSE(CString("Joe_vt4"));
HAnimHumanoid75.setJoints(&HAnimJoint1200);

HAnimJoint& HAnimJoint1201 =  HAnimJoint();
HAnimJoint1201.setUSE(CString("Joe_vt3"));
HAnimHumanoid75.setJoints(&HAnimJoint1201);

HAnimJoint& HAnimJoint1202 =  HAnimJoint();
HAnimJoint1202.setUSE(CString("Joe_vt2"));
HAnimHumanoid75.setJoints(&HAnimJoint1202);

HAnimJoint& HAnimJoint1203 =  HAnimJoint();
HAnimJoint1203.setUSE(CString("Joe_vt1"));
HAnimHumanoid75.setJoints(&HAnimJoint1203);

HAnimJoint& HAnimJoint1204 =  HAnimJoint();
HAnimJoint1204.setUSE(CString("Joe_vc7"));
HAnimHumanoid75.setJoints(&HAnimJoint1204);

HAnimJoint& HAnimJoint1205 =  HAnimJoint();
HAnimJoint1205.setUSE(CString("Joe_vc6"));
HAnimHumanoid75.setJoints(&HAnimJoint1205);

HAnimJoint& HAnimJoint1206 =  HAnimJoint();
HAnimJoint1206.setUSE(CString("Joe_vc5"));
HAnimHumanoid75.setJoints(&HAnimJoint1206);

HAnimJoint& HAnimJoint1207 =  HAnimJoint();
HAnimJoint1207.setUSE(CString("Joe_vc4"));
HAnimHumanoid75.setJoints(&HAnimJoint1207);

HAnimJoint& HAnimJoint1208 =  HAnimJoint();
HAnimJoint1208.setUSE(CString("Joe_vc3"));
HAnimHumanoid75.setJoints(&HAnimJoint1208);

HAnimJoint& HAnimJoint1209 =  HAnimJoint();
HAnimJoint1209.setUSE(CString("Joe_vc2"));
HAnimHumanoid75.setJoints(&HAnimJoint1209);

HAnimJoint& HAnimJoint1210 =  HAnimJoint();
HAnimJoint1210.setUSE(CString("Joe_vc1"));
HAnimHumanoid75.setJoints(&HAnimJoint1210);

HAnimJoint& HAnimJoint1211 =  HAnimJoint();
HAnimJoint1211.setUSE(CString("Joe_skullbase"));
HAnimHumanoid75.setJoints(&HAnimJoint1211);

HAnimJoint& HAnimJoint1212 =  HAnimJoint();
HAnimJoint1212.setUSE(CString("Joe_l_acromioclavicular"));
HAnimHumanoid75.setJoints(&HAnimJoint1212);

HAnimJoint& HAnimJoint1213 =  HAnimJoint();
HAnimJoint1213.setUSE(CString("Joe_r_acromioclavicular"));
HAnimHumanoid75.setJoints(&HAnimJoint1213);

HAnimJoint& HAnimJoint1214 =  HAnimJoint();
HAnimJoint1214.setUSE(CString("Joe_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1214);

HAnimJoint& HAnimJoint1215 =  HAnimJoint();
HAnimJoint1215.setUSE(CString("Joe_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1215);

HAnimJoint& HAnimJoint1216 =  HAnimJoint();
HAnimJoint1216.setUSE(CString("Joe_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid75.setJoints(&HAnimJoint1216);

HAnimJoint& HAnimJoint1217 =  HAnimJoint();
HAnimJoint1217.setUSE(CString("Joe_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid75.setJoints(&HAnimJoint1217);

HAnimJoint& HAnimJoint1218 =  HAnimJoint();
HAnimJoint1218.setUSE(CString("Joe_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid75.setJoints(&HAnimJoint1218);

HAnimJoint& HAnimJoint1219 =  HAnimJoint();
HAnimJoint1219.setUSE(CString("Joe_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid75.setJoints(&HAnimJoint1219);

HAnimJoint& HAnimJoint1220 =  HAnimJoint();
HAnimJoint1220.setUSE(CString("Joe_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid75.setJoints(&HAnimJoint1220);

HAnimJoint& HAnimJoint1221 =  HAnimJoint();
HAnimJoint1221.setUSE(CString("Joe_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid75.setJoints(&HAnimJoint1221);

HAnimJoint& HAnimJoint1222 =  HAnimJoint();
HAnimJoint1222.setUSE(CString("Joe_l_carpal_interphalangeal_1"));
HAnimHumanoid75.setJoints(&HAnimJoint1222);

HAnimJoint& HAnimJoint1223 =  HAnimJoint();
HAnimJoint1223.setUSE(CString("Joe_r_carpal_interphalangeal_1"));
HAnimHumanoid75.setJoints(&HAnimJoint1223);

HAnimJoint& HAnimJoint1224 =  HAnimJoint();
HAnimJoint1224.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1224);

HAnimJoint& HAnimJoint1225 =  HAnimJoint();
HAnimJoint1225.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1225);

HAnimJoint& HAnimJoint1226 =  HAnimJoint();
HAnimJoint1226.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid75.setJoints(&HAnimJoint1226);

HAnimJoint& HAnimJoint1227 =  HAnimJoint();
HAnimJoint1227.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid75.setJoints(&HAnimJoint1227);

HAnimJoint& HAnimJoint1228 =  HAnimJoint();
HAnimJoint1228.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid75.setJoints(&HAnimJoint1228);

HAnimJoint& HAnimJoint1229 =  HAnimJoint();
HAnimJoint1229.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid75.setJoints(&HAnimJoint1229);

HAnimJoint& HAnimJoint1230 =  HAnimJoint();
HAnimJoint1230.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid75.setJoints(&HAnimJoint1230);

HAnimJoint& HAnimJoint1231 =  HAnimJoint();
HAnimJoint1231.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid75.setJoints(&HAnimJoint1231);

HAnimJoint& HAnimJoint1232 =  HAnimJoint();
HAnimJoint1232.setUSE(CString("Joe_l_carpometacarpal_1"));
HAnimHumanoid75.setJoints(&HAnimJoint1232);

HAnimJoint& HAnimJoint1233 =  HAnimJoint();
HAnimJoint1233.setUSE(CString("Joe_r_carpometacarpal_1"));
HAnimHumanoid75.setJoints(&HAnimJoint1233);

HAnimJoint& HAnimJoint1234 =  HAnimJoint();
HAnimJoint1234.setUSE(CString("Joe_l_carpometacarpal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1234);

HAnimJoint& HAnimJoint1235 =  HAnimJoint();
HAnimJoint1235.setUSE(CString("Joe_r_carpometacarpal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1235);

HAnimJoint& HAnimJoint1236 =  HAnimJoint();
HAnimJoint1236.setUSE(CString("Joe_l_carpometacarpal_3"));
HAnimHumanoid75.setJoints(&HAnimJoint1236);

HAnimJoint& HAnimJoint1237 =  HAnimJoint();
HAnimJoint1237.setUSE(CString("Joe_r_carpometacarpal_3"));
HAnimHumanoid75.setJoints(&HAnimJoint1237);

HAnimJoint& HAnimJoint1238 =  HAnimJoint();
HAnimJoint1238.setUSE(CString("Joe_l_carpometacarpal_4"));
HAnimHumanoid75.setJoints(&HAnimJoint1238);

HAnimJoint& HAnimJoint1239 =  HAnimJoint();
HAnimJoint1239.setUSE(CString("Joe_r_carpometacarpal_4"));
HAnimHumanoid75.setJoints(&HAnimJoint1239);

HAnimJoint& HAnimJoint1240 =  HAnimJoint();
HAnimJoint1240.setUSE(CString("Joe_l_carpometacarpal_5"));
HAnimHumanoid75.setJoints(&HAnimJoint1240);

HAnimJoint& HAnimJoint1241 =  HAnimJoint();
HAnimJoint1241.setUSE(CString("Joe_r_carpometacarpal_5"));
HAnimHumanoid75.setJoints(&HAnimJoint1241);

HAnimJoint& HAnimJoint1242 =  HAnimJoint();
HAnimJoint1242.setUSE(CString("Joe_l_elbow"));
HAnimHumanoid75.setJoints(&HAnimJoint1242);

HAnimJoint& HAnimJoint1243 =  HAnimJoint();
HAnimJoint1243.setUSE(CString("Joe_r_elbow"));
HAnimHumanoid75.setJoints(&HAnimJoint1243);

HAnimJoint& HAnimJoint1244 =  HAnimJoint();
HAnimJoint1244.setUSE(CString("Joe_l_eyeball_joint"));
HAnimHumanoid75.setJoints(&HAnimJoint1244);

HAnimJoint& HAnimJoint1245 =  HAnimJoint();
HAnimJoint1245.setUSE(CString("Joe_r_eyeball_joint"));
HAnimHumanoid75.setJoints(&HAnimJoint1245);

HAnimJoint& HAnimJoint1246 =  HAnimJoint();
HAnimJoint1246.setUSE(CString("Joe_l_hip"));
HAnimHumanoid75.setJoints(&HAnimJoint1246);

HAnimJoint& HAnimJoint1247 =  HAnimJoint();
HAnimJoint1247.setUSE(CString("Joe_r_hip"));
HAnimHumanoid75.setJoints(&HAnimJoint1247);

HAnimJoint& HAnimJoint1248 =  HAnimJoint();
HAnimJoint1248.setUSE(CString("Joe_l_knee"));
HAnimHumanoid75.setJoints(&HAnimJoint1248);

HAnimJoint& HAnimJoint1249 =  HAnimJoint();
HAnimJoint1249.setUSE(CString("Joe_r_knee"));
HAnimHumanoid75.setJoints(&HAnimJoint1249);

HAnimJoint& HAnimJoint1250 =  HAnimJoint();
HAnimJoint1250.setUSE(CString("Joe_l_metacarpophalangeal_1"));
HAnimHumanoid75.setJoints(&HAnimJoint1250);

HAnimJoint& HAnimJoint1251 =  HAnimJoint();
HAnimJoint1251.setUSE(CString("Joe_r_metacarpophalangeal_1"));
HAnimHumanoid75.setJoints(&HAnimJoint1251);

HAnimJoint& HAnimJoint1252 =  HAnimJoint();
HAnimJoint1252.setUSE(CString("Joe_l_metacarpophalangeal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1252);

HAnimJoint& HAnimJoint1253 =  HAnimJoint();
HAnimJoint1253.setUSE(CString("Joe_r_metacarpophalangeal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1253);

HAnimJoint& HAnimJoint1254 =  HAnimJoint();
HAnimJoint1254.setUSE(CString("Joe_l_metacarpophalangeal_3"));
HAnimHumanoid75.setJoints(&HAnimJoint1254);

HAnimJoint& HAnimJoint1255 =  HAnimJoint();
HAnimJoint1255.setUSE(CString("Joe_r_metacarpophalangeal_3"));
HAnimHumanoid75.setJoints(&HAnimJoint1255);

HAnimJoint& HAnimJoint1256 =  HAnimJoint();
HAnimJoint1256.setUSE(CString("Joe_l_metacarpophalangeal_4"));
HAnimHumanoid75.setJoints(&HAnimJoint1256);

HAnimJoint& HAnimJoint1257 =  HAnimJoint();
HAnimJoint1257.setUSE(CString("Joe_r_metacarpophalangeal_4"));
HAnimHumanoid75.setJoints(&HAnimJoint1257);

HAnimJoint& HAnimJoint1258 =  HAnimJoint();
HAnimJoint1258.setUSE(CString("Joe_l_metacarpophalangeal_5"));
HAnimHumanoid75.setJoints(&HAnimJoint1258);

HAnimJoint& HAnimJoint1259 =  HAnimJoint();
HAnimJoint1259.setUSE(CString("Joe_r_metacarpophalangeal_5"));
HAnimHumanoid75.setJoints(&HAnimJoint1259);

HAnimJoint& HAnimJoint1260 =  HAnimJoint();
HAnimJoint1260.setUSE(CString("Joe_l_metatarsal"));
HAnimHumanoid75.setJoints(&HAnimJoint1260);

HAnimJoint& HAnimJoint1261 =  HAnimJoint();
HAnimJoint1261.setUSE(CString("Joe_l_metatarsophalangeal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1261);

HAnimJoint& HAnimJoint1262 =  HAnimJoint();
HAnimJoint1262.setUSE(CString("Joe_r_metatarsophalangeal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1262);

HAnimJoint& HAnimJoint1263 =  HAnimJoint();
HAnimJoint1263.setUSE(CString("Joe_l_radiocarpal"));
HAnimHumanoid75.setJoints(&HAnimJoint1263);

HAnimJoint& HAnimJoint1264 =  HAnimJoint();
HAnimJoint1264.setUSE(CString("Joe_r_radiocarpal"));
HAnimHumanoid75.setJoints(&HAnimJoint1264);

HAnimJoint& HAnimJoint1265 =  HAnimJoint();
HAnimJoint1265.setUSE(CString("Joe_l_shoulder"));
HAnimHumanoid75.setJoints(&HAnimJoint1265);

HAnimJoint& HAnimJoint1266 =  HAnimJoint();
HAnimJoint1266.setUSE(CString("Joe_r_shoulder"));
HAnimHumanoid75.setJoints(&HAnimJoint1266);

HAnimJoint& HAnimJoint1267 =  HAnimJoint();
HAnimJoint1267.setUSE(CString("Joe_l_sternoclavicular"));
HAnimHumanoid75.setJoints(&HAnimJoint1267);

HAnimJoint& HAnimJoint1268 =  HAnimJoint();
HAnimJoint1268.setUSE(CString("Joe_r_sternoclavicular"));
HAnimHumanoid75.setJoints(&HAnimJoint1268);

HAnimJoint& HAnimJoint1269 =  HAnimJoint();
HAnimJoint1269.setUSE(CString("Joe_l_talocrural"));
HAnimHumanoid75.setJoints(&HAnimJoint1269);

HAnimJoint& HAnimJoint1270 =  HAnimJoint();
HAnimJoint1270.setUSE(CString("Joe_r_talocrural"));
HAnimHumanoid75.setJoints(&HAnimJoint1270);

HAnimJoint& HAnimJoint1271 =  HAnimJoint();
HAnimJoint1271.setUSE(CString("Joe_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1271);

HAnimJoint& HAnimJoint1272 =  HAnimJoint();
HAnimJoint1272.setUSE(CString("Joe_l_tarsometatarsal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1272);

HAnimJoint& HAnimJoint1273 =  HAnimJoint();
HAnimJoint1273.setUSE(CString("Joe_r_tarsometatarsal_2"));
HAnimHumanoid75.setJoints(&HAnimJoint1273);

HAnimSegment& HAnimSegment1274 =  HAnimSegment();
HAnimSegment1274.setUSE(CString("Joe_c1"));
HAnimHumanoid75.setSegments(&HAnimSegment1274);

HAnimSegment& HAnimSegment1275 =  HAnimSegment();
HAnimSegment1275.setUSE(CString("Joe_c2"));
HAnimHumanoid75.setSegments(&HAnimSegment1275);

HAnimSegment& HAnimSegment1276 =  HAnimSegment();
HAnimSegment1276.setUSE(CString("Joe_c3"));
HAnimHumanoid75.setSegments(&HAnimSegment1276);

HAnimSegment& HAnimSegment1277 =  HAnimSegment();
HAnimSegment1277.setUSE(CString("Joe_c4"));
HAnimHumanoid75.setSegments(&HAnimSegment1277);

HAnimSegment& HAnimSegment1278 =  HAnimSegment();
HAnimSegment1278.setUSE(CString("Joe_c5"));
HAnimHumanoid75.setSegments(&HAnimSegment1278);

HAnimSegment& HAnimSegment1279 =  HAnimSegment();
HAnimSegment1279.setUSE(CString("Joe_c6"));
HAnimHumanoid75.setSegments(&HAnimSegment1279);

HAnimSegment& HAnimSegment1280 =  HAnimSegment();
HAnimSegment1280.setUSE(CString("Joe_c7"));
HAnimHumanoid75.setSegments(&HAnimSegment1280);

HAnimSegment& HAnimSegment1281 =  HAnimSegment();
HAnimSegment1281.setUSE(CString("Joe_l1"));
HAnimHumanoid75.setSegments(&HAnimSegment1281);

HAnimSegment& HAnimSegment1282 =  HAnimSegment();
HAnimSegment1282.setUSE(CString("Joe_l2"));
HAnimHumanoid75.setSegments(&HAnimSegment1282);

HAnimSegment& HAnimSegment1283 =  HAnimSegment();
HAnimSegment1283.setUSE(CString("Joe_l3"));
HAnimHumanoid75.setSegments(&HAnimSegment1283);

HAnimSegment& HAnimSegment1284 =  HAnimSegment();
HAnimSegment1284.setUSE(CString("Joe_l4"));
HAnimHumanoid75.setSegments(&HAnimSegment1284);

HAnimSegment& HAnimSegment1285 =  HAnimSegment();
HAnimSegment1285.setUSE(CString("Joe_l5"));
HAnimHumanoid75.setSegments(&HAnimSegment1285);

HAnimSegment& HAnimSegment1286 =  HAnimSegment();
HAnimSegment1286.setUSE(CString("Joe_pelvis"));
HAnimHumanoid75.setSegments(&HAnimSegment1286);

HAnimSegment& HAnimSegment1287 =  HAnimSegment();
HAnimSegment1287.setUSE(CString("Joe_sacrum"));
HAnimHumanoid75.setSegments(&HAnimSegment1287);

HAnimSegment& HAnimSegment1288 =  HAnimSegment();
HAnimSegment1288.setUSE(CString("Joe_skull"));
HAnimHumanoid75.setSegments(&HAnimSegment1288);

HAnimSegment& HAnimSegment1289 =  HAnimSegment();
HAnimSegment1289.setUSE(CString("Joe_t1"));
HAnimHumanoid75.setSegments(&HAnimSegment1289);

HAnimSegment& HAnimSegment1290 =  HAnimSegment();
HAnimSegment1290.setUSE(CString("Joe_t10"));
HAnimHumanoid75.setSegments(&HAnimSegment1290);

HAnimSegment& HAnimSegment1291 =  HAnimSegment();
HAnimSegment1291.setUSE(CString("Joe_t11"));
HAnimHumanoid75.setSegments(&HAnimSegment1291);

HAnimSegment& HAnimSegment1292 =  HAnimSegment();
HAnimSegment1292.setUSE(CString("Joe_t12"));
HAnimHumanoid75.setSegments(&HAnimSegment1292);

HAnimSegment& HAnimSegment1293 =  HAnimSegment();
HAnimSegment1293.setUSE(CString("Joe_t2"));
HAnimHumanoid75.setSegments(&HAnimSegment1293);

HAnimSegment& HAnimSegment1294 =  HAnimSegment();
HAnimSegment1294.setUSE(CString("Joe_t3"));
HAnimHumanoid75.setSegments(&HAnimSegment1294);

HAnimSegment& HAnimSegment1295 =  HAnimSegment();
HAnimSegment1295.setUSE(CString("Joe_t4"));
HAnimHumanoid75.setSegments(&HAnimSegment1295);

HAnimSegment& HAnimSegment1296 =  HAnimSegment();
HAnimSegment1296.setUSE(CString("Joe_t5"));
HAnimHumanoid75.setSegments(&HAnimSegment1296);

HAnimSegment& HAnimSegment1297 =  HAnimSegment();
HAnimSegment1297.setUSE(CString("Joe_t6"));
HAnimHumanoid75.setSegments(&HAnimSegment1297);

HAnimSegment& HAnimSegment1298 =  HAnimSegment();
HAnimSegment1298.setUSE(CString("Joe_t7"));
HAnimHumanoid75.setSegments(&HAnimSegment1298);

HAnimSegment& HAnimSegment1299 =  HAnimSegment();
HAnimSegment1299.setUSE(CString("Joe_t8"));
HAnimHumanoid75.setSegments(&HAnimSegment1299);

HAnimSegment& HAnimSegment1300 =  HAnimSegment();
HAnimSegment1300.setUSE(CString("Joe_t9"));
HAnimHumanoid75.setSegments(&HAnimSegment1300);

HAnimSegment& HAnimSegment1301 =  HAnimSegment();
HAnimSegment1301.setUSE(CString("Joe_toPelvis"));
HAnimHumanoid75.setSegments(&HAnimSegment1301);

HAnimSegment& HAnimSegment1302 =  HAnimSegment();
HAnimSegment1302.setUSE(CString("Joe_l_calf"));
HAnimHumanoid75.setSegments(&HAnimSegment1302);

HAnimSegment& HAnimSegment1303 =  HAnimSegment();
HAnimSegment1303.setUSE(CString("Joe_r_calf"));
HAnimHumanoid75.setSegments(&HAnimSegment1303);

HAnimSegment& HAnimSegment1304 =  HAnimSegment();
HAnimSegment1304.setUSE(CString("Joe_l_carpal"));
HAnimHumanoid75.setSegments(&HAnimSegment1304);

HAnimSegment& HAnimSegment1305 =  HAnimSegment();
HAnimSegment1305.setUSE(CString("Joe_r_carpal"));
HAnimHumanoid75.setSegments(&HAnimSegment1305);

HAnimSegment& HAnimSegment1306 =  HAnimSegment();
HAnimSegment1306.setUSE(CString("Joe_l_carpal_distal_phalanx_1"));
HAnimHumanoid75.setSegments(&HAnimSegment1306);

HAnimSegment& HAnimSegment1307 =  HAnimSegment();
HAnimSegment1307.setUSE(CString("Joe_r_carpal_distal_phalanx_1"));
HAnimHumanoid75.setSegments(&HAnimSegment1307);

HAnimSegment& HAnimSegment1308 =  HAnimSegment();
HAnimSegment1308.setUSE(CString("Joe_l_carpal_distal_phalanx_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1308);

HAnimSegment& HAnimSegment1309 =  HAnimSegment();
HAnimSegment1309.setUSE(CString("Joe_r_carpal_distal_phalanx_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1309);

HAnimSegment& HAnimSegment1310 =  HAnimSegment();
HAnimSegment1310.setUSE(CString("Joe_l_carpal_distal_phalanx_3"));
HAnimHumanoid75.setSegments(&HAnimSegment1310);

HAnimSegment& HAnimSegment1311 =  HAnimSegment();
HAnimSegment1311.setUSE(CString("Joe_r_carpal_distal_phalanx_3"));
HAnimHumanoid75.setSegments(&HAnimSegment1311);

HAnimSegment& HAnimSegment1312 =  HAnimSegment();
HAnimSegment1312.setUSE(CString("Joe_l_carpal_distal_phalanx_4"));
HAnimHumanoid75.setSegments(&HAnimSegment1312);

HAnimSegment& HAnimSegment1313 =  HAnimSegment();
HAnimSegment1313.setUSE(CString("Joe_r_carpal_distal_phalanx_4"));
HAnimHumanoid75.setSegments(&HAnimSegment1313);

HAnimSegment& HAnimSegment1314 =  HAnimSegment();
HAnimSegment1314.setUSE(CString("Joe_l_carpal_distal_phalanx_5"));
HAnimHumanoid75.setSegments(&HAnimSegment1314);

HAnimSegment& HAnimSegment1315 =  HAnimSegment();
HAnimSegment1315.setUSE(CString("Joe_r_carpal_distal_phalanx_5"));
HAnimHumanoid75.setSegments(&HAnimSegment1315);

HAnimSegment& HAnimSegment1316 =  HAnimSegment();
HAnimSegment1316.setUSE(CString("Joe_l_carpal_middle_phalanx_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1316);

HAnimSegment& HAnimSegment1317 =  HAnimSegment();
HAnimSegment1317.setUSE(CString("Joe_r_carpal_middle_phalanx_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1317);

HAnimSegment& HAnimSegment1318 =  HAnimSegment();
HAnimSegment1318.setUSE(CString("Joe_l_carpal_middle_phalanx_3"));
HAnimHumanoid75.setSegments(&HAnimSegment1318);

HAnimSegment& HAnimSegment1319 =  HAnimSegment();
HAnimSegment1319.setUSE(CString("Joe_r_carpal_middle_phalanx_3"));
HAnimHumanoid75.setSegments(&HAnimSegment1319);

HAnimSegment& HAnimSegment1320 =  HAnimSegment();
HAnimSegment1320.setUSE(CString("Joe_l_carpal_middle_phalanx_4"));
HAnimHumanoid75.setSegments(&HAnimSegment1320);

HAnimSegment& HAnimSegment1321 =  HAnimSegment();
HAnimSegment1321.setUSE(CString("Joe_r_carpal_middle_phalanx_4"));
HAnimHumanoid75.setSegments(&HAnimSegment1321);

HAnimSegment& HAnimSegment1322 =  HAnimSegment();
HAnimSegment1322.setUSE(CString("Joe_l_carpal_middle_phalanx_5"));
HAnimHumanoid75.setSegments(&HAnimSegment1322);

HAnimSegment& HAnimSegment1323 =  HAnimSegment();
HAnimSegment1323.setUSE(CString("Joe_r_carpal_middle_phalanx_5"));
HAnimHumanoid75.setSegments(&HAnimSegment1323);

HAnimSegment& HAnimSegment1324 =  HAnimSegment();
HAnimSegment1324.setUSE(CString("Joe_l_carpal_proximal_phalanx_1"));
HAnimHumanoid75.setSegments(&HAnimSegment1324);

HAnimSegment& HAnimSegment1325 =  HAnimSegment();
HAnimSegment1325.setUSE(CString("Joe_r_carpal_proximal_phalanx_1"));
HAnimHumanoid75.setSegments(&HAnimSegment1325);

HAnimSegment& HAnimSegment1326 =  HAnimSegment();
HAnimSegment1326.setUSE(CString("Joe_l_carpal_proximal_phalanx_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1326);

HAnimSegment& HAnimSegment1327 =  HAnimSegment();
HAnimSegment1327.setUSE(CString("Joe_r_carpal_proximal_phalanx_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1327);

HAnimSegment& HAnimSegment1328 =  HAnimSegment();
HAnimSegment1328.setUSE(CString("Joe_l_carpal_proximal_phalanx_3"));
HAnimHumanoid75.setSegments(&HAnimSegment1328);

HAnimSegment& HAnimSegment1329 =  HAnimSegment();
HAnimSegment1329.setUSE(CString("Joe_r_carpal_proximal_phalanx_3"));
HAnimHumanoid75.setSegments(&HAnimSegment1329);

HAnimSegment& HAnimSegment1330 =  HAnimSegment();
HAnimSegment1330.setUSE(CString("Joe_l_carpal_proximal_phalanx_4"));
HAnimHumanoid75.setSegments(&HAnimSegment1330);

HAnimSegment& HAnimSegment1331 =  HAnimSegment();
HAnimSegment1331.setUSE(CString("Joe_r_carpal_proximal_phalanx_4"));
HAnimHumanoid75.setSegments(&HAnimSegment1331);

HAnimSegment& HAnimSegment1332 =  HAnimSegment();
HAnimSegment1332.setUSE(CString("Joe_l_carpal_proximal_phalanx_5"));
HAnimHumanoid75.setSegments(&HAnimSegment1332);

HAnimSegment& HAnimSegment1333 =  HAnimSegment();
HAnimSegment1333.setUSE(CString("Joe_r_carpal_proximal_phalanx_5"));
HAnimHumanoid75.setSegments(&HAnimSegment1333);

HAnimSegment& HAnimSegment1334 =  HAnimSegment();
HAnimSegment1334.setUSE(CString("Joe_l_clavicle"));
HAnimHumanoid75.setSegments(&HAnimSegment1334);

HAnimSegment& HAnimSegment1335 =  HAnimSegment();
HAnimSegment1335.setUSE(CString("Joe_r_clavicle"));
HAnimHumanoid75.setSegments(&HAnimSegment1335);

HAnimSegment& HAnimSegment1336 =  HAnimSegment();
HAnimSegment1336.setUSE(CString("Joe_l_eyeball"));
HAnimHumanoid75.setSegments(&HAnimSegment1336);

HAnimSegment& HAnimSegment1337 =  HAnimSegment();
HAnimSegment1337.setUSE(CString("Joe_r_eyeball"));
HAnimHumanoid75.setSegments(&HAnimSegment1337);

HAnimSegment& HAnimSegment1338 =  HAnimSegment();
HAnimSegment1338.setUSE(CString("Joe_l_forearm"));
HAnimHumanoid75.setSegments(&HAnimSegment1338);

HAnimSegment& HAnimSegment1339 =  HAnimSegment();
HAnimSegment1339.setUSE(CString("Joe_r_forearm"));
HAnimHumanoid75.setSegments(&HAnimSegment1339);

HAnimSegment& HAnimSegment1340 =  HAnimSegment();
HAnimSegment1340.setUSE(CString("Joe_l_metacarpal_1"));
HAnimHumanoid75.setSegments(&HAnimSegment1340);

HAnimSegment& HAnimSegment1341 =  HAnimSegment();
HAnimSegment1341.setUSE(CString("Joe_r_metacarpal_1"));
HAnimHumanoid75.setSegments(&HAnimSegment1341);

HAnimSegment& HAnimSegment1342 =  HAnimSegment();
HAnimSegment1342.setUSE(CString("Joe_l_metacarpal_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1342);

HAnimSegment& HAnimSegment1343 =  HAnimSegment();
HAnimSegment1343.setUSE(CString("Joe_r_metacarpal_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1343);

HAnimSegment& HAnimSegment1344 =  HAnimSegment();
HAnimSegment1344.setUSE(CString("Joe_l_metacarpal_3"));
HAnimHumanoid75.setSegments(&HAnimSegment1344);

HAnimSegment& HAnimSegment1345 =  HAnimSegment();
HAnimSegment1345.setUSE(CString("Joe_r_metacarpal_3"));
HAnimHumanoid75.setSegments(&HAnimSegment1345);

HAnimSegment& HAnimSegment1346 =  HAnimSegment();
HAnimSegment1346.setUSE(CString("Joe_l_metacarpal_4"));
HAnimHumanoid75.setSegments(&HAnimSegment1346);

HAnimSegment& HAnimSegment1347 =  HAnimSegment();
HAnimSegment1347.setUSE(CString("Joe_r_metacarpal_4"));
HAnimHumanoid75.setSegments(&HAnimSegment1347);

HAnimSegment& HAnimSegment1348 =  HAnimSegment();
HAnimSegment1348.setUSE(CString("Joe_l_metacarpal_5"));
HAnimHumanoid75.setSegments(&HAnimSegment1348);

HAnimSegment& HAnimSegment1349 =  HAnimSegment();
HAnimSegment1349.setUSE(CString("Joe_r_metacarpal_5"));
HAnimHumanoid75.setSegments(&HAnimSegment1349);

HAnimSegment& HAnimSegment1350 =  HAnimSegment();
HAnimSegment1350.setUSE(CString("Joe_l_metatarsal_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1350);

HAnimSegment& HAnimSegment1351 =  HAnimSegment();
HAnimSegment1351.setUSE(CString("Joe_r_metatarsal_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1351);

HAnimSegment& HAnimSegment1352 =  HAnimSegment();
HAnimSegment1352.setUSE(CString("Joe_l_scapula"));
HAnimHumanoid75.setSegments(&HAnimSegment1352);

HAnimSegment& HAnimSegment1353 =  HAnimSegment();
HAnimSegment1353.setUSE(CString("Joe_r_scapula"));
HAnimHumanoid75.setSegments(&HAnimSegment1353);

HAnimSegment& HAnimSegment1354 =  HAnimSegment();
HAnimSegment1354.setUSE(CString("Joe_l_talus"));
HAnimHumanoid75.setSegments(&HAnimSegment1354);

HAnimSegment& HAnimSegment1355 =  HAnimSegment();
HAnimSegment1355.setUSE(CString("Joe_r_talus"));
HAnimHumanoid75.setSegments(&HAnimSegment1355);

HAnimSegment& HAnimSegment1356 =  HAnimSegment();
HAnimSegment1356.setUSE(CString("Joe_l_tarsal_distal_phalanx_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1356);

HAnimSegment& HAnimSegment1357 =  HAnimSegment();
HAnimSegment1357.setUSE(CString("Joe_r_tarsal_distal_phalanx_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1357);

HAnimSegment& HAnimSegment1358 =  HAnimSegment();
HAnimSegment1358.setUSE(CString("Joe_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1358);

HAnimSegment& HAnimSegment1359 =  HAnimSegment();
HAnimSegment1359.setUSE(CString("Joe_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid75.setSegments(&HAnimSegment1359);

HAnimSegment& HAnimSegment1360 =  HAnimSegment();
HAnimSegment1360.setUSE(CString("Joe_l_thigh"));
HAnimHumanoid75.setSegments(&HAnimSegment1360);

HAnimSegment& HAnimSegment1361 =  HAnimSegment();
HAnimSegment1361.setUSE(CString("Joe_r_thigh"));
HAnimHumanoid75.setSegments(&HAnimSegment1361);

HAnimSegment& HAnimSegment1362 =  HAnimSegment();
HAnimSegment1362.setUSE(CString("Joe_l_upperarm"));
HAnimHumanoid75.setSegments(&HAnimSegment1362);

HAnimSegment& HAnimSegment1363 =  HAnimSegment();
HAnimSegment1363.setUSE(CString("Joe_r_upperarm"));
HAnimHumanoid75.setSegments(&HAnimSegment1363);

HAnimSite& HAnimSite1364 =  HAnimSite();
HAnimSite1364.setUSE(CString("Joe_cervicale_pt"));
HAnimHumanoid75.setSites(&HAnimSite1364);

HAnimSite& HAnimSite1365 =  HAnimSite();
HAnimSite1365.setUSE(CString("Joe_crotch_pt"));
HAnimHumanoid75.setSites(&HAnimSite1365);

HAnimSite& HAnimSite1366 =  HAnimSite();
HAnimSite1366.setUSE(CString("Joe_floormarker_pt"));
HAnimHumanoid75.setSites(&HAnimSite1366);

HAnimSite& HAnimSite1367 =  HAnimSite();
HAnimSite1367.setUSE(CString("Joe_navel_pt"));
HAnimHumanoid75.setSites(&HAnimSite1367);

HAnimSite& HAnimSite1368 =  HAnimSite();
HAnimSite1368.setUSE(CString("Joe_nuchale_pt"));
HAnimHumanoid75.setSites(&HAnimSite1368);

HAnimSite& HAnimSite1369 =  HAnimSite();
HAnimSite1369.setUSE(CString("Joe_rib10_midspine_pt"));
HAnimHumanoid75.setSites(&HAnimSite1369);

HAnimSite& HAnimSite1370 =  HAnimSite();
HAnimSite1370.setUSE(CString("Joe_sellion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1370);

HAnimSite& HAnimSite1371 =  HAnimSite();
HAnimSite1371.setUSE(CString("Joe_skull_vertex_tip"));
HAnimHumanoid75.setSites(&HAnimSite1371);

HAnimSite& HAnimSite1372 =  HAnimSite();
HAnimSite1372.setUSE(CString("Joe_substernale_pt"));
HAnimHumanoid75.setSites(&HAnimSite1372);

HAnimSite& HAnimSite1373 =  HAnimSite();
HAnimSite1373.setUSE(CString("Joe_supramenton_pt"));
HAnimHumanoid75.setSites(&HAnimSite1373);

HAnimSite& HAnimSite1374 =  HAnimSite();
HAnimSite1374.setUSE(CString("Joe_suprasternale_pt"));
HAnimHumanoid75.setSites(&HAnimSite1374);

HAnimSite& HAnimSite1375 =  HAnimSite();
HAnimSite1375.setUSE(CString("Joe_waist_preferred_posterior_pt"));
HAnimHumanoid75.setSites(&HAnimSite1375);

HAnimSite& HAnimSite1376 =  HAnimSite();
HAnimSite1376.setUSE(CString("Joe_l_acromion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1376);

HAnimSite& HAnimSite1377 =  HAnimSite();
HAnimSite1377.setUSE(CString("Joe_r_acromion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1377);

HAnimSite& HAnimSite1378 =  HAnimSite();
HAnimSite1378.setUSE(CString("Joe_l_asis_pt"));
HAnimHumanoid75.setSites(&HAnimSite1378);

HAnimSite& HAnimSite1379 =  HAnimSite();
HAnimSite1379.setUSE(CString("Joe_r_asis_pt"));
HAnimHumanoid75.setSites(&HAnimSite1379);

HAnimSite& HAnimSite1380 =  HAnimSite();
HAnimSite1380.setUSE(CString("Joe_l_axilla_distal_pt"));
HAnimHumanoid75.setSites(&HAnimSite1380);

HAnimSite& HAnimSite1381 =  HAnimSite();
HAnimSite1381.setUSE(CString("Joe_r_axilla_distal_pt"));
HAnimHumanoid75.setSites(&HAnimSite1381);

HAnimSite& HAnimSite1382 =  HAnimSite();
HAnimSite1382.setUSE(CString("Joe_l_axilla_proximal_pt"));
HAnimHumanoid75.setSites(&HAnimSite1382);

HAnimSite& HAnimSite1383 =  HAnimSite();
HAnimSite1383.setUSE(CString("Joe_r_axilla_proximal_pt"));
HAnimHumanoid75.setSites(&HAnimSite1383);

HAnimSite& HAnimSite1384 =  HAnimSite();
HAnimSite1384.setUSE(CString("Joe_l_calcaneus_posterior_pt"));
HAnimHumanoid75.setSites(&HAnimSite1384);

HAnimSite& HAnimSite1385 =  HAnimSite();
HAnimSite1385.setUSE(CString("Joe_r_calcaneus_posterior_pt"));
HAnimHumanoid75.setSites(&HAnimSite1385);

HAnimSite& HAnimSite1386 =  HAnimSite();
HAnimSite1386.setUSE(CString("Joe_l_carpal_distal_phalanx_1_tip"));
HAnimHumanoid75.setSites(&HAnimSite1386);

HAnimSite& HAnimSite1387 =  HAnimSite();
HAnimSite1387.setUSE(CString("Joe_r_carpal_distal_phalanx_1_tip"));
HAnimHumanoid75.setSites(&HAnimSite1387);

HAnimSite& HAnimSite1388 =  HAnimSite();
HAnimSite1388.setUSE(CString("Joe_l_carpal_distal_phalanx_2_tip"));
HAnimHumanoid75.setSites(&HAnimSite1388);

HAnimSite& HAnimSite1389 =  HAnimSite();
HAnimSite1389.setUSE(CString("Joe_r_carpal_distal_phalanx_2_tip"));
HAnimHumanoid75.setSites(&HAnimSite1389);

HAnimSite& HAnimSite1390 =  HAnimSite();
HAnimSite1390.setUSE(CString("Joe_l_carpal_distal_phalanx_3_tip"));
HAnimHumanoid75.setSites(&HAnimSite1390);

HAnimSite& HAnimSite1391 =  HAnimSite();
HAnimSite1391.setUSE(CString("Joe_r_carpal_distal_phalanx_3_tip"));
HAnimHumanoid75.setSites(&HAnimSite1391);

HAnimSite& HAnimSite1392 =  HAnimSite();
HAnimSite1392.setUSE(CString("Joe_l_carpal_distal_phalanx_4_tip"));
HAnimHumanoid75.setSites(&HAnimSite1392);

HAnimSite& HAnimSite1393 =  HAnimSite();
HAnimSite1393.setUSE(CString("Joe_r_carpal_distal_phalanx_4_tip"));
HAnimHumanoid75.setSites(&HAnimSite1393);

HAnimSite& HAnimSite1394 =  HAnimSite();
HAnimSite1394.setUSE(CString("Joe_l_carpal_distal_phalanx_5_tip"));
HAnimHumanoid75.setSites(&HAnimSite1394);

HAnimSite& HAnimSite1395 =  HAnimSite();
HAnimSite1395.setUSE(CString("Joe_r_carpal_distal_phalanx_5_tip"));
HAnimHumanoid75.setSites(&HAnimSite1395);

HAnimSite& HAnimSite1396 =  HAnimSite();
HAnimSite1396.setUSE(CString("Joe_l_clavicle_pt"));
HAnimHumanoid75.setSites(&HAnimSite1396);

HAnimSite& HAnimSite1397 =  HAnimSite();
HAnimSite1397.setUSE(CString("Joe_r_clavicle_pt"));
HAnimHumanoid75.setSites(&HAnimSite1397);

HAnimSite& HAnimSite1398 =  HAnimSite();
HAnimSite1398.setUSE(CString("Joe_l_dactylion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1398);

HAnimSite& HAnimSite1399 =  HAnimSite();
HAnimSite1399.setUSE(CString("Joe_r_dactylion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1399);

HAnimSite& HAnimSite1400 =  HAnimSite();
HAnimSite1400.setUSE(CString("Joe_l_femoral_lateral_epicondyle_pt"));
HAnimHumanoid75.setSites(&HAnimSite1400);

HAnimSite& HAnimSite1401 =  HAnimSite();
HAnimSite1401.setUSE(CString("Joe_r_femoral_lateral_epicondyle_pt"));
HAnimHumanoid75.setSites(&HAnimSite1401);

HAnimSite& HAnimSite1402 =  HAnimSite();
HAnimSite1402.setUSE(CString("Joe_l_femoral_medial_epicondyle_pt"));
HAnimHumanoid75.setSites(&HAnimSite1402);

HAnimSite& HAnimSite1403 =  HAnimSite();
HAnimSite1403.setUSE(CString("Joe_r_femoral_medial_epicondyle_pt"));
HAnimHumanoid75.setSites(&HAnimSite1403);

HAnimSite& HAnimSite1404 =  HAnimSite();
HAnimSite1404.setUSE(CString("Joe_l_gonion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1404);

HAnimSite& HAnimSite1405 =  HAnimSite();
HAnimSite1405.setUSE(CString("Joe_r_gonion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1405);

HAnimSite& HAnimSite1406 =  HAnimSite();
HAnimSite1406.setUSE(CString("Joe_l_humeral_lateral_epicondyle_pt"));
HAnimHumanoid75.setSites(&HAnimSite1406);

HAnimSite& HAnimSite1407 =  HAnimSite();
HAnimSite1407.setUSE(CString("Joe_r_humeral_lateral_epicondyle_pt"));
HAnimHumanoid75.setSites(&HAnimSite1407);

HAnimSite& HAnimSite1408 =  HAnimSite();
HAnimSite1408.setUSE(CString("Joe_l_humeral_medial_epicondyle_pt"));
HAnimHumanoid75.setSites(&HAnimSite1408);

HAnimSite& HAnimSite1409 =  HAnimSite();
HAnimSite1409.setUSE(CString("Joe_r_humeral_medial_epicondyle_pt"));
HAnimHumanoid75.setSites(&HAnimSite1409);

HAnimSite& HAnimSite1410 =  HAnimSite();
HAnimSite1410.setUSE(CString("Joe_l_iliocristale_pt"));
HAnimHumanoid75.setSites(&HAnimSite1410);

HAnimSite& HAnimSite1411 =  HAnimSite();
HAnimSite1411.setUSE(CString("Joe_r_iliocristale_pt"));
HAnimHumanoid75.setSites(&HAnimSite1411);

HAnimSite& HAnimSite1412 =  HAnimSite();
HAnimSite1412.setUSE(CString("Joe_l_infraorbitale_pt"));
HAnimHumanoid75.setSites(&HAnimSite1412);

HAnimSite& HAnimSite1413 =  HAnimSite();
HAnimSite1413.setUSE(CString("Joe_r_infraorbitale_pt"));
HAnimHumanoid75.setSites(&HAnimSite1413);

HAnimSite& HAnimSite1414 =  HAnimSite();
HAnimSite1414.setUSE(CString("Joe_l_knee_crease_pt"));
HAnimHumanoid75.setSites(&HAnimSite1414);

HAnimSite& HAnimSite1415 =  HAnimSite();
HAnimSite1415.setUSE(CString("Joe_r_knee_crease_pt"));
HAnimHumanoid75.setSites(&HAnimSite1415);

HAnimSite& HAnimSite1416 =  HAnimSite();
HAnimSite1416.setUSE(CString("Joe_l_lateral_malleolus_pt"));
HAnimHumanoid75.setSites(&HAnimSite1416);

HAnimSite& HAnimSite1417 =  HAnimSite();
HAnimSite1417.setUSE(CString("Joe_r_lateral_malleolus_pt"));
HAnimHumanoid75.setSites(&HAnimSite1417);

HAnimSite& HAnimSite1418 =  HAnimSite();
HAnimSite1418.setUSE(CString("Joe_l_medial_malleolus_pt"));
HAnimHumanoid75.setSites(&HAnimSite1418);

HAnimSite& HAnimSite1419 =  HAnimSite();
HAnimSite1419.setUSE(CString("Joe_r_medial_malleolus_pt"));
HAnimHumanoid75.setSites(&HAnimSite1419);

HAnimSite& HAnimSite1420 =  HAnimSite();
HAnimSite1420.setUSE(CString("Joe_l_metacarpal_phalanx_2_pt"));
HAnimHumanoid75.setSites(&HAnimSite1420);

HAnimSite& HAnimSite1421 =  HAnimSite();
HAnimSite1421.setUSE(CString("Joe_r_metacarpal_phalanx_2_pt"));
HAnimHumanoid75.setSites(&HAnimSite1421);

HAnimSite& HAnimSite1422 =  HAnimSite();
HAnimSite1422.setUSE(CString("Joe_l_metacarpal_phalanx_5_pt"));
HAnimHumanoid75.setSites(&HAnimSite1422);

HAnimSite& HAnimSite1423 =  HAnimSite();
HAnimSite1423.setUSE(CString("Joe_r_metacarpal_phalanx_5_pt"));
HAnimHumanoid75.setSites(&HAnimSite1423);

HAnimSite& HAnimSite1424 =  HAnimSite();
HAnimSite1424.setUSE(CString("Joe_l_metatarsal_phalanx_1_pt"));
HAnimHumanoid75.setSites(&HAnimSite1424);

HAnimSite& HAnimSite1425 =  HAnimSite();
HAnimSite1425.setUSE(CString("Joe_r_metatarsal_phalanx_1_pt"));
HAnimHumanoid75.setSites(&HAnimSite1425);

HAnimSite& HAnimSite1426 =  HAnimSite();
HAnimSite1426.setUSE(CString("Joe_l_metatarsal_phalanx_5_pt"));
HAnimHumanoid75.setSites(&HAnimSite1426);

HAnimSite& HAnimSite1427 =  HAnimSite();
HAnimSite1427.setUSE(CString("Joe_r_metatarsal_phalanx_5_pt"));
HAnimHumanoid75.setSites(&HAnimSite1427);

HAnimSite& HAnimSite1428 =  HAnimSite();
HAnimSite1428.setUSE(CString("Joe_l_neck_base_pt"));
HAnimHumanoid75.setSites(&HAnimSite1428);

HAnimSite& HAnimSite1429 =  HAnimSite();
HAnimSite1429.setUSE(CString("Joe_r_neck_base_pt"));
HAnimHumanoid75.setSites(&HAnimSite1429);

HAnimSite& HAnimSite1430 =  HAnimSite();
HAnimSite1430.setUSE(CString("Joe_l_olecranon_pt"));
HAnimHumanoid75.setSites(&HAnimSite1430);

HAnimSite& HAnimSite1431 =  HAnimSite();
HAnimSite1431.setUSE(CString("Joe_r_olecranon_pt"));
HAnimHumanoid75.setSites(&HAnimSite1431);

HAnimSite& HAnimSite1432 =  HAnimSite();
HAnimSite1432.setUSE(CString("Joe_l_psis_pt"));
HAnimHumanoid75.setSites(&HAnimSite1432);

HAnimSite& HAnimSite1433 =  HAnimSite();
HAnimSite1433.setUSE(CString("Joe_r_psis_pt"));
HAnimHumanoid75.setSites(&HAnimSite1433);

HAnimSite& HAnimSite1434 =  HAnimSite();
HAnimSite1434.setUSE(CString("Joe_l_radial_styloid_pt"));
HAnimHumanoid75.setSites(&HAnimSite1434);

HAnimSite& HAnimSite1435 =  HAnimSite();
HAnimSite1435.setUSE(CString("Joe_r_radial_styloid_pt"));
HAnimHumanoid75.setSites(&HAnimSite1435);

HAnimSite& HAnimSite1436 =  HAnimSite();
HAnimSite1436.setUSE(CString("Joe_l_radiale_pt"));
HAnimHumanoid75.setSites(&HAnimSite1436);

HAnimSite& HAnimSite1437 =  HAnimSite();
HAnimSite1437.setUSE(CString("Joe_r_radiale_pt"));
HAnimHumanoid75.setSites(&HAnimSite1437);

HAnimSite& HAnimSite1438 =  HAnimSite();
HAnimSite1438.setUSE(CString("Joe_l_rib10_pt"));
HAnimHumanoid75.setSites(&HAnimSite1438);

HAnimSite& HAnimSite1439 =  HAnimSite();
HAnimSite1439.setUSE(CString("Joe_r_rib10_pt"));
HAnimHumanoid75.setSites(&HAnimSite1439);

HAnimSite& HAnimSite1440 =  HAnimSite();
HAnimSite1440.setUSE(CString("Joe_l_sphyrion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1440);

HAnimSite& HAnimSite1441 =  HAnimSite();
HAnimSite1441.setUSE(CString("Joe_r_sphyrion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1441);

HAnimSite& HAnimSite1442 =  HAnimSite();
HAnimSite1442.setUSE(CString("Joe_l_tarsal_distal_phalanx_2_pt"));
HAnimHumanoid75.setSites(&HAnimSite1442);

HAnimSite& HAnimSite1443 =  HAnimSite();
HAnimSite1443.setUSE(CString("Joe_r_tarsal_distal_phalanx_2_pt"));
HAnimHumanoid75.setSites(&HAnimSite1443);

HAnimSite& HAnimSite1444 =  HAnimSite();
HAnimSite1444.setUSE(CString("Joe_l_thelion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1444);

HAnimSite& HAnimSite1445 =  HAnimSite();
HAnimSite1445.setUSE(CString("Joe_r_thelion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1445);

HAnimSite& HAnimSite1446 =  HAnimSite();
HAnimSite1446.setUSE(CString("Joe_l_tragion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1446);

HAnimSite& HAnimSite1447 =  HAnimSite();
HAnimSite1447.setUSE(CString("Joe_r_tragion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1447);

HAnimSite& HAnimSite1448 =  HAnimSite();
HAnimSite1448.setUSE(CString("Joe_l_trochanterion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1448);

HAnimSite& HAnimSite1449 =  HAnimSite();
HAnimSite1449.setUSE(CString("Joe_r_trochanterion_pt"));
HAnimHumanoid75.setSites(&HAnimSite1449);

HAnimSite& HAnimSite1450 =  HAnimSite();
HAnimSite1450.setUSE(CString("Joe_l_ulnar_styloid_pt"));
HAnimHumanoid75.setSites(&HAnimSite1450);

HAnimSite& HAnimSite1451 =  HAnimSite();
HAnimSite1451.setUSE(CString("Joe_r_ulnar_styloid_pt"));
HAnimHumanoid75.setSites(&HAnimSite1451);

Group74.addChild(&HAnimHumanoid75);

Group73.addChild(&Group74);

Scene32.addChild(&Group73);

//expected best practice: EXPORT AS='fileName' for clarity
EXPORT& EXPORT1452 =  EXPORT();
EXPORT1452.setAS(CString("JoeSkeletonSkinSite"));
EXPORT1452.setLocalDEF(CString("Joe_Human"));
Scene32.addChild(&EXPORT1452);

X3D0.setScene(&Scene32);

}
