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
meta3.setContent(CString("JoeSkeletonSkinSaluteSiteWalk.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Comprehensive example showing skeleton, skin, sites and interpolator animation together."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Joe D. Williams"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("9 January 2004"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("translated"));
meta7.setContent(CString("4 December 2022"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("Tue, 09 Sep 2025 19:38:38 GMT"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("warning"));
meta9.setContent(CString("Under development, numerous errors and warnings"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("TODO"));
meta10.setContent(CString("This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("TODO"));
meta11.setContent(CString("Provide feedback to tovrmlx3d converter"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("TODO"));
meta12.setContent(CString("HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegment HAnimSite - improve diagnostics."));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("TODO"));
meta13.setContent(CString("ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("JoeSkeletonSkinSaluteSiteWalk.original.x3dv"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("JoeSkeletonSkinSaluteSiteWalk.modified1.x3dv"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("reference"));
meta16.setContent(CString("JoeSkeletonSkinSaluteSiteWalk.modified2.x3dv"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("reference"));
meta17.setContent(CString("https://castle-engine.io/view3dscene.php#section_converting"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("Image"));
meta18.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("Image"));
meta19.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("Image"));
meta20.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("Image"));
meta21.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("Image"));
meta22.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("Image"));
meta23.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("Image"));
meta24.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("Image"));
meta25.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_Octaga.png"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("Image"));
meta26.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_vivaty.png"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(CString("drawing"));
meta27.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(CString("generator"));
meta28.setContent(CString("tovrmlx3d, https://castle-engine.io/convert.php"));
head1.addMeta(&meta28);

meta& meta29 =  meta();
meta29.setName(CString("generator"));
meta29.setContent(CString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta29);

meta& meta30 =  meta();
meta30.setName(CString("generator"));
meta30.setContent(CString("x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy"));
head1.addMeta(&meta30);

meta& meta31 =  meta();
meta31.setName(CString("translator"));
meta31.setContent(CString("Michalis Kamburelis"));
head1.addMeta(&meta31);

meta& meta32 =  meta();
meta32.setName(CString("translator"));
meta32.setContent(CString("Don Brutzman"));
head1.addMeta(&meta32);

X3D0.setHead(&head1);

Scene& Scene33 =  Scene();
WorldInfo& WorldInfo34 =  WorldInfo();
WorldInfo34.setTitle(CString("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3"));
WorldInfo34.setInfo(new CString[]{CString("By Joe for Joe")}, 1);
Scene33.addChild(&WorldInfo34);

WorldInfo& WorldInfo35 =  WorldInfo();
WorldInfo35.setTitle(CString("HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3"));
WorldInfo35.setInfo(new CString[]{CString("By Joe for Joe")}, 1);
Scene33.addChild(&WorldInfo35);

NavigationInfo& NavigationInfo36 =  NavigationInfo();
NavigationInfo36.setDEF(CString("HeadlightOnRevealsSkinTextureAndColors"));
Scene33.addChild(&NavigationInfo36);

Background& Background37 =  Background();
Background37.setSkyColor(new float[]{0,0,0.1}, 3);
Background37.setGroundAngle(new float[]{1.57}, 1);
Background37.setGroundColor(new float[]{0,0.1,0,0,0.1,0}, 6);
Scene33.addChild(&Background37);

Transform& Transform38 =  Transform();
Transform38.setDEF(CString("cordsysfloor"));
Transform38.setScale(new float[]{0.175,0.175,0.175});
Inline& Inline39 =  Inline();
Inline39.setDEF(CString("CoordinateAxes"));
Inline39.setUrl(new CString[]{CString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), CString("../../../Savage/Tools/Authoring/CoordinateAxes.x3d"), CString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), CString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"), CString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), CString("../../../Savage/Tools/Authoring/CoordinateAxes.wrl"), CString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), CString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl")}, 8);
Transform38.addChild(&Inline39);

Scene33.addChild(&Transform38);

Group& Group40 =  Group();
Group40.setDEF(CString("ViewpointGroup"));
Viewpoint& Viewpoint41 =  Viewpoint();
Viewpoint41.setDescription(CString("Front Up View"));
Viewpoint41.setPosition(new float[]{-1,2,2.5});
Viewpoint41.setOrientation(new float[]{-1,-1,0,0.55});
Group40.addChild(&Viewpoint41);

Viewpoint& Viewpoint42 =  Viewpoint();
Viewpoint42.setDescription(CString("From Left View"));
Viewpoint42.setPosition(new float[]{-2.5,1.5,0});
Viewpoint42.setOrientation(new float[]{0.3,1,0,-1.57});
Group40.addChild(&Viewpoint42);

Viewpoint& Viewpoint43 =  Viewpoint();
Viewpoint43.setDescription(CString("Front Mid View"));
Viewpoint43.setPosition(new float[]{0,0.5,1.25});
Group40.addChild(&Viewpoint43);

Viewpoint& Viewpoint44 =  Viewpoint();
Viewpoint44.setDescription(CString("Front Feet View"));
Viewpoint44.setPosition(new float[]{0,0,0.75});
Group40.addChild(&Viewpoint44);

Viewpoint& Viewpoint45 =  Viewpoint();
Viewpoint45.setDescription(CString("From Right View"));
Viewpoint45.setPosition(new float[]{1,1,0});
Viewpoint45.setOrientation(new float[]{0,1,0,1.57});
Group40.addChild(&Viewpoint45);

Viewpoint& Viewpoint46 =  Viewpoint();
Viewpoint46.setDescription(CString("Front Head View"));
Viewpoint46.setPosition(new float[]{0,1.65,0.75});
Viewpoint46.setCenterOfRotation(new float[]{0,1.65,0});
Group40.addChild(&Viewpoint46);

Viewpoint& Viewpoint47 =  Viewpoint();
Viewpoint47.setDescription(CString("Front Mid View"));
Viewpoint47.setPosition(new float[]{0,1,1.75});
Group40.addChild(&Viewpoint47);

Viewpoint& Viewpoint48 =  Viewpoint();
Viewpoint48.setDescription(CString("Rear View"));
Viewpoint48.setPosition(new float[]{0,1.5,-4});
Viewpoint48.setOrientation(new float[]{0,1,0,3.14});
Group40.addChild(&Viewpoint48);

Viewpoint& Viewpoint49 =  Viewpoint();
Viewpoint49.setDescription(CString("Top View"));
Viewpoint49.setPosition(new float[]{0,4,0});
Viewpoint49.setOrientation(new float[]{1,0,0,-1.57});
Group40.addChild(&Viewpoint49);

Viewpoint& Viewpoint50 =  Viewpoint();
Viewpoint50.setDescription(CString("Bottom View"));
Viewpoint50.setPosition(new float[]{0,-4,0});
Viewpoint50.setOrientation(new float[]{1,0,0,1.57});
Group40.addChild(&Viewpoint50);

Viewpoint& Viewpoint51 =  Viewpoint();
Viewpoint51.setDescription(CString("Right View"));
Viewpoint51.setPosition(new float[]{4,1.5,0});
Viewpoint51.setOrientation(new float[]{0,1,0,1.57});
Group40.addChild(&Viewpoint51);

Scene33.addChild(&Group40);

Group& Group52 =  Group();
Group52.setDEF(CString("VisualizationShapes"));
Transform& Transform53 =  Transform();
Transform53.setTranslation(new float[]{0,2.1,0});
Transform53.setScale(new float[]{5,5,5});
Shape& Shape54 =  Shape();
Shape54.setDEF(CString("jointbox"));
Appearance& Appearance55 =  Appearance();
Material& Material56 =  Material();
Material56.setAmbientIntensity(0.5);
Material56.setDiffuseColor(new float[]{0,0,0});
Material56.setShininess(1);
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

IndexedFaceSet& IndexedFaceSet57 =  IndexedFaceSet();
IndexedFaceSet57.setCreaseAngle(0.1);
IndexedFaceSet57.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
CColor& Color58 =  CColor();
Color58.setColor(new float[]{1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0}, 18);
IndexedFaceSet57.setColor(&Color58);

Coordinate& Coordinate59 =  Coordinate();
Coordinate59.setDEF(CString("boxCoords"));
Coordinate59.setPoint(new float[]{0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet57.setCoord(&Coordinate59);

Shape54.setGeometry(&IndexedFaceSet57);

Transform53.addChild(&Shape54);

Group52.addChild(&Transform53);

Transform& Transform60 =  Transform();
Transform60.setTranslation(new float[]{-0.2,0.773,-0.016});
Transform60.setScale(new float[]{0.1,0.1,0.1});
Shape& Shape61 =  Shape();
Shape61.setDEF(CString("sitebox"));
Appearance& Appearance62 =  Appearance();
Material& Material63 =  Material();
Material63.setAmbientIntensity(1);
Material63.setDiffuseColor(new float[]{1,0,0});
Material63.setSpecularColor(new float[]{1,0,0});
Material63.setEmissiveColor(new float[]{1,0,0});
Material63.setShininess(0.7);
Appearance62.addChild(&Material63);

Shape61.addChild(&Appearance62);

IndexedFaceSet& IndexedFaceSet64 =  IndexedFaceSet();
IndexedFaceSet64.setCreaseAngle(0.1);
IndexedFaceSet64.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate65 =  Coordinate();
Coordinate65.setUSE(CString("boxCoords"));
IndexedFaceSet64.setCoord(&Coordinate65);

Shape61.setGeometry(&IndexedFaceSet64);

Transform60.addChild(&Shape61);

Group52.addChild(&Transform60);

Transform& Transform66 =  Transform();
Transform66.setTranslation(new float[]{0,0.2,0});
Transform66.setScale(new float[]{0.1,0.1,0.1});
Shape& Shape67 =  Shape();
Appearance& Appearance68 =  Appearance();
Appearance68.setDEF(CString("SegmentLine"));
Material& Material69 =  Material();
Material69.setDiffuseColor(new float[]{0,1,0});
Material69.setSpecularColor(new float[]{0,1,0});
Material69.setEmissiveColor(new float[]{0,1,0});
Appearance68.addChild(&Material69);

Shape67.addChild(&Appearance68);

IndexedLineSet& IndexedLineSet70 =  IndexedLineSet();
IndexedLineSet70.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate71 =  Coordinate();
Coordinate71.setPoint(new float[]{0,0,0,0,0.0001,0}, 6);
IndexedLineSet70.setCoord(&Coordinate71);

Shape67.setGeometry(&IndexedLineSet70);

Transform66.addChild(&Shape67);

Group52.addChild(&Transform66);

Transform& Transform72 =  Transform();
Transform72.setTranslation(new float[]{-0.2,0.773,-0.016});
Transform72.setScale(new float[]{0.1,0.1,0.1});
Shape& Shape73 =  Shape();
Shape73.setDEF(CString("skinsphere"));
Appearance& Appearance74 =  Appearance();
Material& Material75 =  Material();
Material75.setAmbientIntensity(0.5);
Material75.setDiffuseColor(new float[]{0,1,0});
Material75.setSpecularColor(new float[]{0,1,0});
Material75.setEmissiveColor(new float[]{0,1,0});
Material75.setShininess(1);
Appearance74.addChild(&Material75);

Shape73.addChild(&Appearance74);

Sphere& Sphere76 =  Sphere();
Sphere76.setRadius(0.005);
Shape73.setGeometry(&Sphere76);

Transform72.addChild(&Shape73);

Group52.addChild(&Transform72);

Scene33.addChild(&Group52);

Group& Group77 =  Group();
Group77.setDEF(CString("SpecHumanoid"));
Group& Group78 =  Group();
Group78.setDEF(CString("JoeISOHumanoid"));
HAnimHumanoid& HAnimHumanoid79 =  HAnimHumanoid();
HAnimHumanoid79.setDEF(CString("Joe_Human"));
HAnimHumanoid79.X3DNode::setName(CString("Human"));
HAnimHumanoid79.setInfo(new CString[]{CString("humanoidVersion=2.0")}, 1);
HAnimJoint& HAnimJoint80 =  HAnimJoint();
HAnimJoint80.setDEF(CString("Joe_HumanoidRoot"));
HAnimJoint80.X3DNode::setName(CString("humanoid_root"));
HAnimJoint80.setTranslation(new float[]{0,-0.0293965,0});
HAnimJoint80.setCenter(new float[]{0,0.875,0});
HAnimSegment& HAnimSegment81 =  HAnimSegment();
HAnimSegment81.setDEF(CString("Joe_sacrum"));
HAnimSegment81.X3DNode::setName(CString("sacrum"));
Transform& Transform82 =  Transform();
Transform82.setTranslation(new float[]{0,0.875,0});
Shape& Shape83 =  Shape();
Shape83.setUSE(CString("jointbox"));
Transform82.addChild(&Shape83);

HAnimSegment81.addChild(&Transform82);

Shape& Shape84 =  Shape();
Appearance& Appearance85 =  Appearance();
Appearance85.setUSE(CString("SegmentLine"));
Shape84.addChild(&Appearance85);

IndexedLineSet& IndexedLineSet86 =  IndexedLineSet();
IndexedLineSet86.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate87 =  Coordinate();
Coordinate87.setPoint(new float[]{0,0.875,0,0,0.92,0}, 6);
IndexedLineSet86.setCoord(&Coordinate87);

Shape84.setGeometry(&IndexedLineSet86);

HAnimSegment81.addChild(&Shape84);

Transform& Transform88 =  Transform();
Transform88.setTranslation(new float[]{0,0.92,0.08});
Shape& Shape89 =  Shape();
Shape89.setUSE(CString("skinsphere"));
Transform88.addChild(&Shape89);

HAnimSegment81.addChild(&Transform88);

Transform& Transform90 =  Transform();
Transform90.setTranslation(new float[]{0,0.87,-0.022});
Shape& Shape91 =  Shape();
Shape91.setUSE(CString("skinsphere"));
Transform90.addChild(&Shape91);

HAnimSegment81.addChild(&Transform90);

HAnimJoint80.addChildren(&HAnimSegment81);

HAnimJoint& HAnimJoint92 =  HAnimJoint();
HAnimJoint92.setDEF(CString("Joe_sacroiliac"));
HAnimJoint92.X3DNode::setName(CString("sacroiliac"));
HAnimJoint92.setCenter(new float[]{0,0.92,0});
HAnimJoint92.setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
HAnimJoint92.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,0.35,0.35,1}, 13);
HAnimSegment& HAnimSegment93 =  HAnimSegment();
HAnimSegment93.setDEF(CString("Joe_pelvis"));
HAnimSegment93.X3DNode::setName(CString("pelvis"));
Transform& Transform94 =  Transform();
Transform94.setTranslation(new float[]{0,0.9149,0.0016});
Transform& Transform95 =  Transform();
Shape& Shape96 =  Shape();
Shape96.setUSE(CString("jointbox"));
Transform95.addChild(&Shape96);

Transform94.addChild(&Transform95);

HAnimSegment93.addChild(&Transform94);

Shape& Shape97 =  Shape();
Appearance& Appearance98 =  Appearance();
Appearance98.setUSE(CString("SegmentLine"));
Shape97.addChild(&Appearance98);

IndexedLineSet& IndexedLineSet99 =  IndexedLineSet();
IndexedLineSet99.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate100 =  Coordinate();
Coordinate100.setPoint(new float[]{0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095}, 12);
IndexedLineSet99.setCoord(&Coordinate100);

Shape97.setGeometry(&IndexedLineSet99);

HAnimSegment93.addChild(&Shape97);

HAnimSite& HAnimSite101 =  HAnimSite();
HAnimSite101.setDEF(CString("Joe_l_iliocristale"));
HAnimSite101.X3DNode::setName(CString("l_iliocristale"));
HAnimSite101.setTranslation(new float[]{0.1425,1.065,0.0033});
Shape& Shape102 =  Shape();
Shape102.setUSE(CString("sitebox"));
HAnimSite101.addChild(&Shape102);

HAnimSegment93.addChild(&HAnimSite101);

HAnimSite& HAnimSite103 =  HAnimSite();
HAnimSite103.setDEF(CString("Joe_l_trochanterion"));
HAnimSite103.X3DNode::setName(CString("l_trochanterion"));
HAnimSite103.setTranslation(new float[]{0.15,0.9,-0.01});
Shape& Shape104 =  Shape();
Shape104.setUSE(CString("sitebox"));
HAnimSite103.addChild(&Shape104);

HAnimSegment93.addChild(&HAnimSite103);

HAnimSite& HAnimSite105 =  HAnimSite();
HAnimSite105.setDEF(CString("Joe_r_iliocristale"));
HAnimSite105.X3DNode::setName(CString("r_iliocristale"));
HAnimSite105.setTranslation(new float[]{-0.1425,1.065,0.0033});
Shape& Shape106 =  Shape();
Shape106.setUSE(CString("sitebox"));
HAnimSite105.addChild(&Shape106);

HAnimSegment93.addChild(&HAnimSite105);

HAnimSite& HAnimSite107 =  HAnimSite();
HAnimSite107.setDEF(CString("Joe_r_trochanterion"));
HAnimSite107.X3DNode::setName(CString("r_trochanterion"));
HAnimSite107.setTranslation(new float[]{-0.15,0.9,-0.01});
Shape& Shape108 =  Shape();
Shape108.setUSE(CString("sitebox"));
HAnimSite107.addChild(&Shape108);

HAnimSegment93.addChild(&HAnimSite107);

HAnimSite& HAnimSite109 =  HAnimSite();
HAnimSite109.setDEF(CString("Joe_l_asis"));
HAnimSite109.X3DNode::setName(CString("l_asis"));
HAnimSite109.setTranslation(new float[]{0.0935,1.03,0.075});
Shape& Shape110 =  Shape();
Shape110.setUSE(CString("sitebox"));
HAnimSite109.addChild(&Shape110);

HAnimSegment93.addChild(&HAnimSite109);

HAnimSite& HAnimSite111 =  HAnimSite();
HAnimSite111.setDEF(CString("Joe_r_asis"));
HAnimSite111.X3DNode::setName(CString("r_asis"));
HAnimSite111.setTranslation(new float[]{-0.0935,1.03,0.075});
Shape& Shape112 =  Shape();
Shape112.setUSE(CString("sitebox"));
HAnimSite111.addChild(&Shape112);

HAnimSegment93.addChild(&HAnimSite111);

HAnimSite& HAnimSite113 =  HAnimSite();
HAnimSite113.setDEF(CString("Joe_l_psis"));
HAnimSite113.X3DNode::setName(CString("l_psis"));
HAnimSite113.setTranslation(new float[]{0.0773,1.019,-0.12});
Shape& Shape114 =  Shape();
Shape114.setUSE(CString("sitebox"));
HAnimSite113.addChild(&Shape114);

HAnimSegment93.addChild(&HAnimSite113);

HAnimSite& HAnimSite115 =  HAnimSite();
HAnimSite115.setDEF(CString("Joe_r_psis"));
HAnimSite115.X3DNode::setName(CString("r_psis"));
HAnimSite115.setTranslation(new float[]{-0.0773,1.019,-0.12});
Shape& Shape116 =  Shape();
Shape116.setUSE(CString("sitebox"));
HAnimSite115.addChild(&Shape116);

HAnimSegment93.addChild(&HAnimSite115);

HAnimSite& HAnimSite117 =  HAnimSite();
HAnimSite117.setDEF(CString("Joe_floormarker"));
HAnimSite117.X3DNode::setName(CString("floormarker"));
Transform& Transform118 =  Transform();
Transform118.setScale(new float[]{3,3,3});
Shape& Shape119 =  Shape();
Shape119.setUSE(CString("sitebox"));
Transform118.addChild(&Shape119);

HAnimSite117.addChild(&Transform118);

HAnimSegment93.addChild(&HAnimSite117);

HAnimSite& HAnimSite120 =  HAnimSite();
HAnimSite120.setDEF(CString("Joe_crotch"));
HAnimSite120.X3DNode::setName(CString("crotch"));
HAnimSite120.setTranslation(new float[]{0,0.87,-0.022});
Shape& Shape121 =  Shape();
Shape121.setUSE(CString("sitebox"));
HAnimSite120.addChild(&Shape121);

HAnimSegment93.addChild(&HAnimSite120);

HAnimJoint92.addChildren(&HAnimSegment93);

HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.setDEF(CString("Joe_l_hip"));
HAnimJoint122.X3DNode::setName(CString("l_hip"));
HAnimJoint122.setRotation(new float[]{-0.997243499192129,0.0195458722844272,0.0715776654808345,0.536920945834996});
HAnimJoint122.setCenter(new float[]{0.1,0.92,0});
HAnimJoint122.setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
HAnimJoint122.setSkinCoordWeight(new float[]{0.65,1,1,1,1,1}, 6);
HAnimSegment& HAnimSegment123 =  HAnimSegment();
HAnimSegment123.setDEF(CString("Joe_l_thigh"));
HAnimSegment123.X3DNode::setName(CString("l_thigh"));
Transform& Transform124 =  Transform();
Transform124.setTranslation(new float[]{0.1,0.92,0});
Shape& Shape125 =  Shape();
Shape125.setUSE(CString("jointbox"));
Transform124.addChild(&Shape125);

HAnimSegment123.addChild(&Transform124);

Shape& Shape126 =  Shape();
Appearance& Appearance127 =  Appearance();
Appearance127.setUSE(CString("SegmentLine"));
Shape126.addChild(&Appearance127);

IndexedLineSet& IndexedLineSet128 =  IndexedLineSet();
IndexedLineSet128.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate129 =  Coordinate();
Coordinate129.setPoint(new float[]{0.1,0.92,0,0.115,0.466,0}, 6);
IndexedLineSet128.setCoord(&Coordinate129);

Shape126.setGeometry(&IndexedLineSet128);

HAnimSegment123.addChild(&Shape126);

Transform& Transform130 =  Transform();
Transform130.setTranslation(new float[]{0.1,0.9,0.0775});
Shape& Shape131 =  Shape();
Shape131.setUSE(CString("skinsphere"));
Transform130.addChild(&Shape131);

HAnimSegment123.addChild(&Transform130);

Transform& Transform132 =  Transform();
Transform132.setTranslation(new float[]{0.079,0.92,-0.14});
Shape& Shape133 =  Shape();
Shape133.setUSE(CString("skinsphere"));
Transform132.addChild(&Shape133);

HAnimSegment123.addChild(&Transform132);

Transform& Transform134 =  Transform();
Transform134.setTranslation(new float[]{0.171,0.65,0});
Shape& Shape135 =  Shape();
Shape135.setUSE(CString("skinsphere"));
Transform134.addChild(&Shape135);

HAnimSegment123.addChild(&Transform134);

Transform& Transform136 =  Transform();
Transform136.setTranslation(new float[]{0.02,0.65,0});
Shape& Shape137 =  Shape();
Shape137.setUSE(CString("skinsphere"));
Transform136.addChild(&Shape137);

HAnimSegment123.addChild(&Transform136);

Transform& Transform138 =  Transform();
Transform138.setTranslation(new float[]{0.1,0.65,-0.08});
Shape& Shape139 =  Shape();
Shape139.setUSE(CString("skinsphere"));
Transform138.addChild(&Shape139);

HAnimSegment123.addChild(&Transform138);

Transform& Transform140 =  Transform();
Transform140.setTranslation(new float[]{0.1,0.65,0.07});
Shape& Shape141 =  Shape();
Shape141.setUSE(CString("skinsphere"));
Transform140.addChild(&Shape141);

HAnimSegment123.addChild(&Transform140);

HAnimSite& HAnimSite142 =  HAnimSite();
HAnimSite142.setDEF(CString("Joe_l_knee_crease"));
HAnimSite142.X3DNode::setName(CString("l_knee_crease"));
HAnimSite142.setTranslation(new float[]{0.115,0.466,-0.055});
Shape& Shape143 =  Shape();
Shape143.setUSE(CString("sitebox"));
HAnimSite142.addChild(&Shape143);

HAnimSegment123.addChild(&HAnimSite142);

HAnimSite& HAnimSite144 =  HAnimSite();
HAnimSite144.setDEF(CString("Joe_l_femoral_lateral_epicn"));
HAnimSite144.X3DNode::setName(CString("l_femoral_lateral_epicn"));
HAnimSite144.setTranslation(new float[]{0.17,0.466,0});
Shape& Shape145 =  Shape();
Shape145.setUSE(CString("sitebox"));
HAnimSite144.addChild(&Shape145);

HAnimSegment123.addChild(&HAnimSite144);

HAnimSite& HAnimSite146 =  HAnimSite();
HAnimSite146.setDEF(CString("Joe_l_femoral_medial_epicn"));
HAnimSite146.X3DNode::setName(CString("l_femoral_medial_epicn"));
HAnimSite146.setTranslation(new float[]{0.05,0.466,0});
Shape& Shape147 =  Shape();
Shape147.setUSE(CString("sitebox"));
HAnimSite146.addChild(&Shape147);

HAnimSegment123.addChild(&HAnimSite146);

HAnimJoint122.addChildren(&HAnimSegment123);

HAnimJoint& HAnimJoint148 =  HAnimJoint();
HAnimJoint148.setDEF(CString("Joe_l_knee"));
HAnimJoint148.X3DNode::setName(CString("l_knee"));
HAnimJoint148.setRotation(new float[]{1.00000000000001,0,0,0.224421281773429});
HAnimJoint148.setCenter(new float[]{0.115,0.466,0});
HAnimJoint148.setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
HAnimJoint148.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment149 =  HAnimSegment();
HAnimSegment149.setDEF(CString("Joe_l_calf"));
HAnimSegment149.X3DNode::setName(CString("l_calf"));
Transform& Transform150 =  Transform();
Transform150.setTranslation(new float[]{0.115,0.466,0});
Shape& Shape151 =  Shape();
Shape151.setUSE(CString("jointbox"));
Transform150.addChild(&Shape151);

HAnimSegment149.addChild(&Transform150);

Shape& Shape152 =  Shape();
Appearance& Appearance153 =  Appearance();
Appearance153.setUSE(CString("SegmentLine"));
Shape152.addChild(&Appearance153);

IndexedLineSet& IndexedLineSet154 =  IndexedLineSet();
IndexedLineSet154.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate155 =  Coordinate();
Coordinate155.setPoint(new float[]{0.115,0.466,0,0.1,0.069,0}, 6);
IndexedLineSet154.setCoord(&Coordinate155);

Shape152.setGeometry(&IndexedLineSet154);

HAnimSegment149.addChild(&Shape152);

Transform& Transform156 =  Transform();
Transform156.setTranslation(new float[]{0.115,0.466,0.06});
Shape& Shape157 =  Shape();
Shape157.setUSE(CString("skinsphere"));
Transform156.addChild(&Shape157);

HAnimSegment149.addChild(&Transform156);

Transform& Transform158 =  Transform();
Transform158.setTranslation(new float[]{0.115,0.466,-0.055});
Shape& Shape159 =  Shape();
Shape159.setUSE(CString("skinsphere"));
Transform158.addChild(&Shape159);

HAnimSegment149.addChild(&Transform158);

Transform& Transform160 =  Transform();
Transform160.setTranslation(new float[]{0.17,0.466,0});
Shape& Shape161 =  Shape();
Shape161.setUSE(CString("skinsphere"));
Transform160.addChild(&Shape161);

HAnimSegment149.addChild(&Transform160);

Transform& Transform162 =  Transform();
Transform162.setTranslation(new float[]{0.05,0.466,0});
Shape& Shape163 =  Shape();
Shape163.setUSE(CString("skinsphere"));
Transform162.addChild(&Shape163);

HAnimSegment149.addChild(&Transform162);

Transform& Transform164 =  Transform();
Transform164.setTranslation(new float[]{0.17,0.3,0});
Shape& Shape165 =  Shape();
Shape165.setUSE(CString("skinsphere"));
Transform164.addChild(&Shape165);

HAnimSegment149.addChild(&Transform164);

Transform& Transform166 =  Transform();
Transform166.setTranslation(new float[]{0.06,0.3,0});
Shape& Shape167 =  Shape();
Shape167.setUSE(CString("skinsphere"));
Transform166.addChild(&Shape167);

HAnimSegment149.addChild(&Transform166);

Transform& Transform168 =  Transform();
Transform168.setTranslation(new float[]{0.1,0.3,-0.05});
Shape& Shape169 =  Shape();
Shape169.setUSE(CString("skinsphere"));
Transform168.addChild(&Shape169);

HAnimSegment149.addChild(&Transform168);

Transform& Transform170 =  Transform();
Transform170.setTranslation(new float[]{0.1,0.3,0.05});
Shape& Shape171 =  Shape();
Shape171.setUSE(CString("skinsphere"));
Transform170.addChild(&Shape171);

HAnimSegment149.addChild(&Transform170);

HAnimSite& HAnimSite172 =  HAnimSite();
HAnimSite172.setDEF(CString("Joe_l_lateral_malleolus"));
HAnimSite172.X3DNode::setName(CString("l_lateral_malleolus"));
HAnimSite172.setTranslation(new float[]{0.15,0.07,0});
Shape& Shape173 =  Shape();
Shape173.setUSE(CString("sitebox"));
HAnimSite172.addChild(&Shape173);

HAnimSegment149.addChild(&HAnimSite172);

HAnimSite& HAnimSite174 =  HAnimSite();
HAnimSite174.setDEF(CString("Joe_l_medial_malleolus"));
HAnimSite174.X3DNode::setName(CString("l_medial_malleolus"));
HAnimSite174.setTranslation(new float[]{0.085,0.086,0.0125});
Shape& Shape175 =  Shape();
Shape175.setUSE(CString("sitebox"));
HAnimSite174.addChild(&Shape175);

HAnimSegment149.addChild(&HAnimSite174);

HAnimJoint148.addChildren(&HAnimSegment149);

HAnimJoint& HAnimJoint176 =  HAnimJoint();
HAnimJoint176.setDEF(CString("Joe_l_ankle"));
HAnimJoint176.X3DNode::setName(CString("l_ankle"));
HAnimJoint176.setRotation(new float[]{-1.00000000000007,0,0,0.0655639608914055});
HAnimJoint176.setCenter(new float[]{0.115,0.069,0});
HAnimJoint176.setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
HAnimJoint176.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment177 =  HAnimSegment();
HAnimSegment177.setDEF(CString("Joe_l_hindfoot"));
HAnimSegment177.X3DNode::setName(CString("l_hindfoot"));
Transform& Transform178 =  Transform();
Transform178.setTranslation(new float[]{0.115,0.069,0});
Shape& Shape179 =  Shape();
Shape179.setUSE(CString("jointbox"));
Transform178.addChild(&Shape179);

HAnimSegment177.addChild(&Transform178);

Shape& Shape180 =  Shape();
Appearance& Appearance181 =  Appearance();
Appearance181.setUSE(CString("SegmentLine"));
Shape180.addChild(&Appearance181);

IndexedLineSet& IndexedLineSet182 =  IndexedLineSet();
IndexedLineSet182.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate183 =  Coordinate();
Coordinate183.setPoint(new float[]{0.1,0.069,0,0.115,0.031,0.03}, 6);
IndexedLineSet182.setCoord(&Coordinate183);

Shape180.setGeometry(&IndexedLineSet182);

HAnimSegment177.addChild(&Shape180);

Transform& Transform184 =  Transform();
Transform184.setTranslation(new float[]{0.15,0.07,0});
Shape& Shape185 =  Shape();
Shape185.setUSE(CString("skinsphere"));
Transform184.addChild(&Shape185);

HAnimSegment177.addChild(&Transform184);

Transform& Transform186 =  Transform();
Transform186.setTranslation(new float[]{0.085,0.086,0.0125});
Shape& Shape187 =  Shape();
Shape187.setUSE(CString("skinsphere"));
Transform186.addChild(&Shape187);

HAnimSegment177.addChild(&Transform186);

Transform& Transform188 =  Transform();
Transform188.setTranslation(new float[]{0.115,0.069,-0.045});
Shape& Shape189 =  Shape();
Shape189.setUSE(CString("skinsphere"));
Transform188.addChild(&Shape189);

HAnimSegment177.addChild(&Transform188);

Transform& Transform190 =  Transform();
Transform190.setTranslation(new float[]{0.117,0.0975,0.0615});
Shape& Shape191 =  Shape();
Shape191.setUSE(CString("skinsphere"));
Transform190.addChild(&Shape191);

HAnimSegment177.addChild(&Transform190);

HAnimSite& HAnimSite192 =  HAnimSite();
HAnimSite192.setDEF(CString("Joe_l_sphyrion"));
HAnimSite192.X3DNode::setName(CString("l_sphyrion"));
HAnimSite192.setTranslation(new float[]{0.09,0.056,0.0125});
Shape& Shape193 =  Shape();
Shape193.setUSE(CString("sitebox"));
HAnimSite192.addChild(&Shape193);

HAnimSegment177.addChild(&HAnimSite192);

HAnimSite& HAnimSite194 =  HAnimSite();
HAnimSite194.setDEF(CString("Joe_l_calcaneous_post"));
HAnimSite194.X3DNode::setName(CString("l_calcaneous_post"));
HAnimSite194.setTranslation(new float[]{0.115,0.04,-0.055});
Shape& Shape195 =  Shape();
Shape195.setUSE(CString("sitebox"));
HAnimSite194.addChild(&Shape195);

HAnimSegment177.addChild(&HAnimSite194);

HAnimJoint176.addChildren(&HAnimSegment177);

HAnimJoint& HAnimJoint196 =  HAnimJoint();
HAnimJoint196.setDEF(CString("Joe_l_subtalar"));
HAnimJoint196.X3DNode::setName(CString("l_subtalar"));
HAnimJoint196.setCenter(new float[]{0.115,0.031,0.03});
HAnimJoint196.setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
HAnimJoint196.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment197 =  HAnimSegment();
HAnimSegment197.setDEF(CString("Joe_l_midproximal"));
HAnimSegment197.X3DNode::setName(CString("l_midproximal"));
Transform& Transform198 =  Transform();
Transform198.setTranslation(new float[]{0.115,0.031,0.03});
Shape& Shape199 =  Shape();
Shape199.setUSE(CString("jointbox"));
Transform198.addChild(&Shape199);

HAnimSegment197.addChild(&Transform198);

Shape& Shape200 =  Shape();
Appearance& Appearance201 =  Appearance();
Appearance201.setUSE(CString("SegmentLine"));
Shape200.addChild(&Appearance201);

IndexedLineSet& IndexedLineSet202 =  IndexedLineSet();
IndexedLineSet202.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate203 =  Coordinate();
Coordinate203.setPoint(new float[]{0.115,0.031,0.03,0.115,0.037,0.09}, 6);
IndexedLineSet202.setCoord(&Coordinate203);

Shape200.setGeometry(&IndexedLineSet202);

HAnimSegment197.addChild(&Shape200);

Transform& Transform204 =  Transform();
Transform204.setTranslation(new float[]{0.1375,0.006,-0.03});
Shape& Shape205 =  Shape();
Shape205.setUSE(CString("skinsphere"));
Transform204.addChild(&Shape205);

HAnimSegment197.addChild(&Transform204);

Transform& Transform206 =  Transform();
Transform206.setTranslation(new float[]{0.095,0.006,-0.03});
Shape& Shape207 =  Shape();
Shape207.setUSE(CString("skinsphere"));
Transform206.addChild(&Shape207);

HAnimSegment197.addChild(&Transform206);

Transform& Transform208 =  Transform();
Transform208.setTranslation(new float[]{0.115,0.015,-0.045});
Shape& Shape209 =  Shape();
Shape209.setUSE(CString("skinsphere"));
Transform208.addChild(&Shape209);

HAnimSegment197.addChild(&Transform208);

HAnimJoint196.addChildren(&HAnimSegment197);

HAnimJoint& HAnimJoint210 =  HAnimJoint();
HAnimJoint210.setDEF(CString("Joe_l_midtarsal"));
HAnimJoint210.X3DNode::setName(CString("l_midtarsal"));
HAnimJoint210.setRotation(new float[]{1.00000000000005,0,0,6.19381467367623});
HAnimJoint210.setCenter(new float[]{0.115,0.037,0.09});
HAnimJoint210.setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
HAnimJoint210.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment211 =  HAnimSegment();
HAnimSegment211.setDEF(CString("Joe_l_middistal"));
HAnimSegment211.X3DNode::setName(CString("l_middistal"));
Transform& Transform212 =  Transform();
Transform212.setTranslation(new float[]{0.115,0.037,0.09});
Shape& Shape213 =  Shape();
Shape213.setUSE(CString("jointbox"));
Transform212.addChild(&Shape213);

HAnimSegment211.addChild(&Transform212);

Shape& Shape214 =  Shape();
Appearance& Appearance215 =  Appearance();
Appearance215.setUSE(CString("SegmentLine"));
Shape214.addChild(&Appearance215);

IndexedLineSet& IndexedLineSet216 =  IndexedLineSet();
IndexedLineSet216.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate217 =  Coordinate();
Coordinate217.setPoint(new float[]{0.115,0.037,0.09,0.115,0.02,0.122}, 6);
IndexedLineSet216.setCoord(&Coordinate217);

Shape214.setGeometry(&IndexedLineSet216);

HAnimSegment211.addChild(&Shape214);

Transform& Transform218 =  Transform();
Transform218.setTranslation(new float[]{0.115,0.06,0.1});
Shape& Shape219 =  Shape();
Shape219.setUSE(CString("skinsphere"));
Transform218.addChild(&Shape219);

HAnimSegment211.addChild(&Transform218);

Transform& Transform220 =  Transform();
Transform220.setTranslation(new float[]{0.115,0,0.07});
Shape& Shape221 =  Shape();
Shape221.setUSE(CString("skinsphere"));
Transform220.addChild(&Shape221);

HAnimSegment211.addChild(&Transform220);

Transform& Transform222 =  Transform();
Transform222.setTranslation(new float[]{0.165,0,0.07});
Shape& Shape223 =  Shape();
Shape223.setUSE(CString("skinsphere"));
Transform222.addChild(&Shape223);

HAnimSegment211.addChild(&Transform222);

Transform& Transform224 =  Transform();
Transform224.setTranslation(new float[]{0.095,0,0.07});
Shape& Shape225 =  Shape();
Shape225.setUSE(CString("skinsphere"));
Transform224.addChild(&Shape225);

HAnimSegment211.addChild(&Transform224);

HAnimSite& HAnimSite226 =  HAnimSite();
HAnimSite226.setDEF(CString("Joe_l_metatarsal_pha1"));
HAnimSite226.X3DNode::setName(CString("l_metatarsal_pha1"));
HAnimSite226.setTranslation(new float[]{0.087,0.01,0.122});
Shape& Shape227 =  Shape();
Shape227.setUSE(CString("sitebox"));
HAnimSite226.addChild(&Shape227);

HAnimSegment211.addChild(&HAnimSite226);

HAnimJoint210.addChildren(&HAnimSegment211);

HAnimJoint& HAnimJoint228 =  HAnimJoint();
HAnimJoint228.setDEF(CString("Joe_l_metatarsal"));
HAnimJoint228.X3DNode::setName(CString("l_metatarsal"));
HAnimJoint228.setRotation(new float[]{1.00000000000253,0,0,0.0175699446988144});
HAnimJoint228.setCenter(new float[]{0.115,0.02,0.122});
HAnimJoint228.setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
HAnimJoint228.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment229 =  HAnimSegment();
HAnimSegment229.setDEF(CString("Joe_l_forefoot"));
HAnimSegment229.X3DNode::setName(CString("l_forefoot"));
Transform& Transform230 =  Transform();
Transform230.setTranslation(new float[]{0.115,0.02,0.13});
Shape& Shape231 =  Shape();
Shape231.setUSE(CString("jointbox"));
Transform230.addChild(&Shape231);

HAnimSegment229.addChild(&Transform230);

Shape& Shape232 =  Shape();
Appearance& Appearance233 =  Appearance();
Appearance233.setUSE(CString("SegmentLine"));
Shape232.addChild(&Appearance233);

IndexedLineSet& IndexedLineSet234 =  IndexedLineSet();
IndexedLineSet234.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate235 =  Coordinate();
Coordinate235.setPoint(new float[]{0.115,0.02,0.122,0.132,0.013,0.19}, 6);
IndexedLineSet234.setCoord(&Coordinate235);

Shape232.setGeometry(&IndexedLineSet234);

HAnimSegment229.addChild(&Shape232);

Transform& Transform236 =  Transform();
Transform236.setTranslation(new float[]{0.115,0.04,0.13});
Shape& Shape237 =  Shape();
Shape237.setUSE(CString("skinsphere"));
Transform236.addChild(&Shape237);

HAnimSegment229.addChild(&Transform236);

Transform& Transform238 =  Transform();
Transform238.setTranslation(new float[]{0.125,0,0.12});
Shape& Shape239 =  Shape();
Shape239.setUSE(CString("skinsphere"));
Transform238.addChild(&Shape239);

HAnimSegment229.addChild(&Transform238);

Transform& Transform240 =  Transform();
Transform240.setTranslation(new float[]{0.165,0,0.12});
Shape& Shape241 =  Shape();
Shape241.setUSE(CString("skinsphere"));
Transform240.addChild(&Shape241);

HAnimSegment229.addChild(&Transform240);

Transform& Transform242 =  Transform();
Transform242.setTranslation(new float[]{0.087,0,0.122});
Shape& Shape243 =  Shape();
Shape243.setUSE(CString("skinsphere"));
Transform242.addChild(&Shape243);

HAnimSegment229.addChild(&Transform242);

Transform& Transform244 =  Transform();
Transform244.setTranslation(new float[]{0.09,0.012,0.188});
Shape& Shape245 =  Shape();
Shape245.setUSE(CString("skinsphere"));
Transform244.addChild(&Shape245);

HAnimSegment229.addChild(&Transform244);

Transform& Transform246 =  Transform();
Transform246.setTranslation(new float[]{0.11,0.011,0.19});
Shape& Shape247 =  Shape();
Shape247.setUSE(CString("skinsphere"));
Transform246.addChild(&Shape247);

HAnimSegment229.addChild(&Transform246);

Transform& Transform248 =  Transform();
Transform248.setTranslation(new float[]{0.128,0.011,0.185});
Shape& Shape249 =  Shape();
Shape249.setUSE(CString("skinsphere"));
Transform248.addChild(&Shape249);

HAnimSegment229.addChild(&Transform248);

Transform& Transform250 =  Transform();
Transform250.setTranslation(new float[]{0.142,0.011,0.178});
Shape& Shape251 =  Shape();
Shape251.setUSE(CString("skinsphere"));
Transform250.addChild(&Shape251);

HAnimSegment229.addChild(&Transform250);

Transform& Transform252 =  Transform();
Transform252.setTranslation(new float[]{0.154,0.01,0.168});
Shape& Shape253 =  Shape();
Shape253.setUSE(CString("skinsphere"));
Transform252.addChild(&Shape253);

HAnimSegment229.addChild(&Transform252);

HAnimSite& HAnimSite254 =  HAnimSite();
HAnimSite254.setDEF(CString("Joe_l_metatarsal_pha5"));
HAnimSite254.X3DNode::setName(CString("l_metatarsal_pha5"));
HAnimSite254.setTranslation(new float[]{0.165,0.01,0.12});
Shape& Shape255 =  Shape();
Shape255.setUSE(CString("sitebox"));
HAnimSite254.addChild(&Shape255);

HAnimSegment229.addChild(&HAnimSite254);

HAnimSite& HAnimSite256 =  HAnimSite();
HAnimSite256.setDEF(CString("Joe_l_digit2"));
HAnimSite256.X3DNode::setName(CString("l_digit2"));
HAnimSite256.setTranslation(new float[]{0.11,0.011,0.19});
Shape& Shape257 =  Shape();
Shape257.setUSE(CString("sitebox"));
HAnimSite256.addChild(&Shape257);

HAnimSegment229.addChild(&HAnimSite256);

HAnimJoint228.addChildren(&HAnimSegment229);

HAnimJoint210.addChildren(&HAnimJoint228);

HAnimJoint196.addChildren(&HAnimJoint210);

HAnimJoint176.addChildren(&HAnimJoint196);

HAnimJoint148.addChildren(&HAnimJoint176);

HAnimJoint122.addChildren(&HAnimJoint148);

HAnimJoint92.addChildren(&HAnimJoint122);

HAnimJoint& HAnimJoint258 =  HAnimJoint();
HAnimJoint258.setDEF(CString("Joe_r_hip"));
HAnimJoint258.X3DNode::setName(CString("r_hip"));
HAnimJoint258.setRotation(new float[]{0.999396359667701,-0.00306481646315883,-0.0346052479115659,0.222463685925696});
HAnimJoint258.setCenter(new float[]{-0.1,0.92,0});
HAnimJoint258.setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101}, 6);
HAnimJoint258.setSkinCoordWeight(new float[]{0.65,1,1,1,1,1}, 6);
HAnimSegment& HAnimSegment259 =  HAnimSegment();
HAnimSegment259.setDEF(CString("Joe_r_thigh"));
HAnimSegment259.X3DNode::setName(CString("r_thigh"));
Transform& Transform260 =  Transform();
Transform260.setTranslation(new float[]{-0.1,0.92,0});
Shape& Shape261 =  Shape();
Shape261.setUSE(CString("jointbox"));
Transform260.addChild(&Shape261);

HAnimSegment259.addChild(&Transform260);

Shape& Shape262 =  Shape();
Appearance& Appearance263 =  Appearance();
Appearance263.setUSE(CString("SegmentLine"));
Shape262.addChild(&Appearance263);

IndexedLineSet& IndexedLineSet264 =  IndexedLineSet();
IndexedLineSet264.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate265 =  Coordinate();
Coordinate265.setPoint(new float[]{-0.1,0.92,0,-0.1,0.4913,0}, 6);
IndexedLineSet264.setCoord(&Coordinate265);

Shape262.setGeometry(&IndexedLineSet264);

HAnimSegment259.addChild(&Shape262);

Transform& Transform266 =  Transform();
Transform266.setTranslation(new float[]{-0.079,0.92,-0.14});
Shape& Shape267 =  Shape();
Shape267.setUSE(CString("skinsphere"));
Transform266.addChild(&Shape267);

HAnimSegment259.addChild(&Transform266);

Transform& Transform268 =  Transform();
Transform268.setTranslation(new float[]{-0.1,0.9,0.075});
Shape& Shape269 =  Shape();
Shape269.setUSE(CString("skinsphere"));
Transform268.addChild(&Shape269);

HAnimSegment259.addChild(&Transform268);

Transform& Transform270 =  Transform();
Transform270.setTranslation(new float[]{-0.171,0.65,0});
Shape& Shape271 =  Shape();
Shape271.setUSE(CString("skinsphere"));
Transform270.addChild(&Shape271);

HAnimSegment259.addChild(&Transform270);

Transform& Transform272 =  Transform();
Transform272.setTranslation(new float[]{-0.02,0.65,0});
Shape& Shape273 =  Shape();
Shape273.setUSE(CString("skinsphere"));
Transform272.addChild(&Shape273);

HAnimSegment259.addChild(&Transform272);

Transform& Transform274 =  Transform();
Transform274.setTranslation(new float[]{-0.1,0.65,-0.08});
Shape& Shape275 =  Shape();
Shape275.setUSE(CString("skinsphere"));
Transform274.addChild(&Shape275);

HAnimSegment259.addChild(&Transform274);

Transform& Transform276 =  Transform();
Transform276.setTranslation(new float[]{-0.1,0.65,0.07});
Shape& Shape277 =  Shape();
Shape277.setUSE(CString("skinsphere"));
Transform276.addChild(&Shape277);

HAnimSegment259.addChild(&Transform276);

HAnimSite& HAnimSite278 =  HAnimSite();
HAnimSite278.setDEF(CString("Joe_r_knee_crease"));
HAnimSite278.X3DNode::setName(CString("r_knee_crease"));
HAnimSite278.setTranslation(new float[]{-0.115,0.466,-0.055});
Shape& Shape279 =  Shape();
Shape279.setUSE(CString("sitebox"));
HAnimSite278.addChild(&Shape279);

HAnimSegment259.addChild(&HAnimSite278);

HAnimSite& HAnimSite280 =  HAnimSite();
HAnimSite280.setDEF(CString("Joe_r_femoral_lateral_epicn"));
HAnimSite280.X3DNode::setName(CString("r_femoral_lateral_epicn"));
HAnimSite280.setTranslation(new float[]{-0.17,0.466,0});
Shape& Shape281 =  Shape();
Shape281.setUSE(CString("sitebox"));
HAnimSite280.addChild(&Shape281);

HAnimSegment259.addChild(&HAnimSite280);

HAnimSite& HAnimSite282 =  HAnimSite();
HAnimSite282.setDEF(CString("Joe_r_femoral_medial_epicn"));
HAnimSite282.X3DNode::setName(CString("r_femoral_medial_epicn"));
HAnimSite282.setTranslation(new float[]{-0.05,0.466,0});
Shape& Shape283 =  Shape();
Shape283.setUSE(CString("sitebox"));
HAnimSite282.addChild(&Shape283);

HAnimSegment259.addChild(&HAnimSite282);

HAnimJoint258.addChildren(&HAnimSegment259);

HAnimJoint& HAnimJoint284 =  HAnimJoint();
HAnimJoint284.setDEF(CString("Joe_r_knee"));
HAnimJoint284.X3DNode::setName(CString("r_knee"));
HAnimJoint284.setRotation(new float[]{0.999999999999952,0,0,0.086543259681602});
HAnimJoint284.setCenter(new float[]{-0.05,0.466,0});
HAnimJoint284.setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369}, 8);
HAnimJoint284.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment285 =  HAnimSegment();
HAnimSegment285.setDEF(CString("Joe_r_calf"));
HAnimSegment285.X3DNode::setName(CString("r_calf"));
Transform& Transform286 =  Transform();
Transform286.setTranslation(new float[]{-0.1,0.4913,0});
Shape& Shape287 =  Shape();
Shape287.setUSE(CString("jointbox"));
Transform286.addChild(&Shape287);

HAnimSegment285.addChild(&Transform286);

Shape& Shape288 =  Shape();
Appearance& Appearance289 =  Appearance();
Appearance289.setUSE(CString("SegmentLine"));
Shape288.addChild(&Appearance289);

IndexedLineSet& IndexedLineSet290 =  IndexedLineSet();
IndexedLineSet290.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate291 =  Coordinate();
Coordinate291.setPoint(new float[]{-0.1,0.4913,0,-0.1,0.0712,0}, 6);
IndexedLineSet290.setCoord(&Coordinate291);

Shape288.setGeometry(&IndexedLineSet290);

HAnimSegment285.addChild(&Shape288);

Transform& Transform292 =  Transform();
Transform292.setTranslation(new float[]{-0.115,0.466,0.06});
Shape& Shape293 =  Shape();
Shape293.setUSE(CString("skinsphere"));
Transform292.addChild(&Shape293);

HAnimSegment285.addChild(&Transform292);

Transform& Transform294 =  Transform();
Transform294.setTranslation(new float[]{-0.115,0.466,-0.055});
Shape& Shape295 =  Shape();
Shape295.setUSE(CString("skinsphere"));
Transform294.addChild(&Shape295);

HAnimSegment285.addChild(&Transform294);

Transform& Transform296 =  Transform();
Transform296.setTranslation(new float[]{-0.17,0.466,0});
Shape& Shape297 =  Shape();
Shape297.setUSE(CString("skinsphere"));
Transform296.addChild(&Shape297);

HAnimSegment285.addChild(&Transform296);

Transform& Transform298 =  Transform();
Transform298.setTranslation(new float[]{-0.05,0.466,0});
Shape& Shape299 =  Shape();
Shape299.setUSE(CString("skinsphere"));
Transform298.addChild(&Shape299);

HAnimSegment285.addChild(&Transform298);

Transform& Transform300 =  Transform();
Transform300.setTranslation(new float[]{-0.17,0.3,0});
Shape& Shape301 =  Shape();
Shape301.setUSE(CString("skinsphere"));
Transform300.addChild(&Shape301);

HAnimSegment285.addChild(&Transform300);

Transform& Transform302 =  Transform();
Transform302.setTranslation(new float[]{-0.06,0.3,0});
Shape& Shape303 =  Shape();
Shape303.setUSE(CString("skinsphere"));
Transform302.addChild(&Shape303);

HAnimSegment285.addChild(&Transform302);

Transform& Transform304 =  Transform();
Transform304.setTranslation(new float[]{-0.1,0.3,-0.05});
Shape& Shape305 =  Shape();
Shape305.setUSE(CString("skinsphere"));
Transform304.addChild(&Shape305);

HAnimSegment285.addChild(&Transform304);

Transform& Transform306 =  Transform();
Transform306.setTranslation(new float[]{-0.1,0.3,0.05});
Shape& Shape307 =  Shape();
Shape307.setUSE(CString("skinsphere"));
Transform306.addChild(&Shape307);

HAnimSegment285.addChild(&Transform306);

HAnimSite& HAnimSite308 =  HAnimSite();
HAnimSite308.setDEF(CString("Joe_r_lateral_malleolus"));
HAnimSite308.X3DNode::setName(CString("r_lateral_malleolus"));
HAnimSite308.setTranslation(new float[]{-0.15,0.07,0});
Shape& Shape309 =  Shape();
Shape309.setUSE(CString("sitebox"));
HAnimSite308.addChild(&Shape309);

HAnimSegment285.addChild(&HAnimSite308);

HAnimSite& HAnimSite310 =  HAnimSite();
HAnimSite310.setDEF(CString("Joe_r_medial_malleolus"));
HAnimSite310.X3DNode::setName(CString("r_medial_malleolus"));
HAnimSite310.setTranslation(new float[]{-0.085,0.086,0.0125});
Shape& Shape311 =  Shape();
Shape311.setUSE(CString("sitebox"));
HAnimSite310.addChild(&Shape311);

HAnimSegment285.addChild(&HAnimSite310);

HAnimJoint284.addChildren(&HAnimSegment285);

HAnimJoint& HAnimJoint312 =  HAnimJoint();
HAnimJoint312.setDEF(CString("Joe_r_ankle"));
HAnimJoint312.X3DNode::setName(CString("r_ankle"));
HAnimJoint312.setRotation(new float[]{-1.00000000000001,0,0,0.337435958789841});
HAnimJoint312.setCenter(new float[]{-0.115,0.069,0});
HAnimJoint312.setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
HAnimJoint312.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment313 =  HAnimSegment();
HAnimSegment313.setDEF(CString("Joe_r_hindfoot"));
HAnimSegment313.X3DNode::setName(CString("r_hindfoot"));
Transform& Transform314 =  Transform();
Transform314.setTranslation(new float[]{-0.1,0.0712,0});
Shape& Shape315 =  Shape();
Shape315.setUSE(CString("jointbox"));
Transform314.addChild(&Shape315);

HAnimSegment313.addChild(&Transform314);

Shape& Shape316 =  Shape();
Appearance& Appearance317 =  Appearance();
Appearance317.setUSE(CString("SegmentLine"));
Shape316.addChild(&Appearance317);

IndexedLineSet& IndexedLineSet318 =  IndexedLineSet();
IndexedLineSet318.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate319 =  Coordinate();
Coordinate319.setPoint(new float[]{-0.1,0.0712,0,-0.1,0.015,-0.01}, 6);
IndexedLineSet318.setCoord(&Coordinate319);

Shape316.setGeometry(&IndexedLineSet318);

HAnimSegment313.addChild(&Shape316);

Transform& Transform320 =  Transform();
Transform320.setTranslation(new float[]{-0.15,0.07,0});
Shape& Shape321 =  Shape();
Shape321.setUSE(CString("skinsphere"));
Transform320.addChild(&Shape321);

HAnimSegment313.addChild(&Transform320);

Transform& Transform322 =  Transform();
Transform322.setTranslation(new float[]{-0.085,0.086,0.0125});
Shape& Shape323 =  Shape();
Shape323.setUSE(CString("skinsphere"));
Transform322.addChild(&Shape323);

HAnimSegment313.addChild(&Transform322);

Transform& Transform324 =  Transform();
Transform324.setTranslation(new float[]{-0.115,0.069,-0.045});
Shape& Shape325 =  Shape();
Shape325.setUSE(CString("skinsphere"));
Transform324.addChild(&Shape325);

HAnimSegment313.addChild(&Transform324);

Transform& Transform326 =  Transform();
Transform326.setTranslation(new float[]{-0.117,0.0975,0.0615});
Shape& Shape327 =  Shape();
Shape327.setUSE(CString("skinsphere"));
Transform326.addChild(&Shape327);

HAnimSegment313.addChild(&Transform326);

HAnimSite& HAnimSite328 =  HAnimSite();
HAnimSite328.setDEF(CString("Joe_r_sphyrion"));
HAnimSite328.X3DNode::setName(CString("r_sphyrion"));
HAnimSite328.setTranslation(new float[]{-0.09,0.056,0.0125});
Shape& Shape329 =  Shape();
Shape329.setUSE(CString("sitebox"));
HAnimSite328.addChild(&Shape329);

HAnimSegment313.addChild(&HAnimSite328);

HAnimSite& HAnimSite330 =  HAnimSite();
HAnimSite330.setDEF(CString("Joe_r_calcaneous_post"));
HAnimSite330.X3DNode::setName(CString("r_calcaneous_post"));
HAnimSite330.setTranslation(new float[]{-0.115,0.04,-0.055});
Shape& Shape331 =  Shape();
Shape331.setUSE(CString("sitebox"));
HAnimSite330.addChild(&Shape331);

HAnimSegment313.addChild(&HAnimSite330);

HAnimJoint312.addChildren(&HAnimSegment313);

HAnimJoint& HAnimJoint332 =  HAnimJoint();
HAnimJoint332.setDEF(CString("Joe_r_subtalar"));
HAnimJoint332.X3DNode::setName(CString("r_subtalar"));
HAnimJoint332.setRotation(new float[]{1.00000000000014,0,0,0.0816433505734676});
HAnimJoint332.setCenter(new float[]{-0.1,0.015,-0.01});
HAnimJoint332.setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
HAnimJoint332.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimSegment& HAnimSegment333 =  HAnimSegment();
HAnimSegment333.setDEF(CString("Joe_r_midproximal"));
HAnimSegment333.X3DNode::setName(CString("r_midproximal"));
Transform& Transform334 =  Transform();
Transform334.setTranslation(new float[]{-0.1,0.015,-0.01});
Shape& Shape335 =  Shape();
Shape335.setUSE(CString("jointbox"));
Transform334.addChild(&Shape335);

HAnimSegment333.addChild(&Transform334);

Shape& Shape336 =  Shape();
Appearance& Appearance337 =  Appearance();
Appearance337.setUSE(CString("SegmentLine"));
Shape336.addChild(&Appearance337);

IndexedLineSet& IndexedLineSet338 =  IndexedLineSet();
IndexedLineSet338.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate339 =  Coordinate();
Coordinate339.setPoint(new float[]{-0.1,0.015,-0.01,-0.1,0.02,0.07}, 6);
IndexedLineSet338.setCoord(&Coordinate339);

Shape336.setGeometry(&IndexedLineSet338);

HAnimSegment333.addChild(&Shape336);

Transform& Transform340 =  Transform();
Transform340.setTranslation(new float[]{-0.1375,0.006,-0.03});
Shape& Shape341 =  Shape();
Shape341.setUSE(CString("skinsphere"));
Transform340.addChild(&Shape341);

HAnimSegment333.addChild(&Transform340);

Transform& Transform342 =  Transform();
Transform342.setTranslation(new float[]{-0.095,0.006,-0.03});
Shape& Shape343 =  Shape();
Shape343.setUSE(CString("skinsphere"));
Transform342.addChild(&Shape343);

HAnimSegment333.addChild(&Transform342);

Transform& Transform344 =  Transform();
Transform344.setTranslation(new float[]{-0.095,0.006,-0.03});
Shape& Shape345 =  Shape();
Shape345.setUSE(CString("skinsphere"));
Transform344.addChild(&Shape345);

HAnimSegment333.addChild(&Transform344);

HAnimJoint332.addChildren(&HAnimSegment333);

HAnimJoint& HAnimJoint346 =  HAnimJoint();
HAnimJoint346.setDEF(CString("Joe_r_midtarsal"));
HAnimJoint346.X3DNode::setName(CString("r_midtarsal"));
HAnimJoint346.setRotation(new float[]{-1.00000000000001,0,0,0.14271113543743});
HAnimJoint346.setCenter(new float[]{-0.115,0.037,0.09});
HAnimJoint346.setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
HAnimJoint346.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment347 =  HAnimSegment();
HAnimSegment347.setDEF(CString("Joe_r_middistal"));
HAnimSegment347.X3DNode::setName(CString("r_middistal"));
Transform& Transform348 =  Transform();
Transform348.setTranslation(new float[]{-0.1,0.02,0.07});
Shape& Shape349 =  Shape();
Shape349.setUSE(CString("jointbox"));
Transform348.addChild(&Shape349);

HAnimSegment347.addChild(&Transform348);

Shape& Shape350 =  Shape();
Appearance& Appearance351 =  Appearance();
Appearance351.setUSE(CString("SegmentLine"));
Shape350.addChild(&Appearance351);

IndexedLineSet& IndexedLineSet352 =  IndexedLineSet();
IndexedLineSet352.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate353 =  Coordinate();
Coordinate353.setPoint(new float[]{-0.1,0.02,0.07,-0.1,0.01,0.14}, 6);
IndexedLineSet352.setCoord(&Coordinate353);

Shape350.setGeometry(&IndexedLineSet352);

HAnimSegment347.addChild(&Shape350);

Transform& Transform354 =  Transform();
Transform354.setTranslation(new float[]{-0.115,0.06,0.1});
Shape& Shape355 =  Shape();
Shape355.setUSE(CString("skinsphere"));
Transform354.addChild(&Shape355);

HAnimSegment347.addChild(&Transform354);

Transform& Transform356 =  Transform();
Transform356.setTranslation(new float[]{-0.115,0,0.07});
Shape& Shape357 =  Shape();
Shape357.setUSE(CString("skinsphere"));
Transform356.addChild(&Shape357);

HAnimSegment347.addChild(&Transform356);

Transform& Transform358 =  Transform();
Transform358.setTranslation(new float[]{-0.165,0,0.07});
Shape& Shape359 =  Shape();
Shape359.setUSE(CString("skinsphere"));
Transform358.addChild(&Shape359);

HAnimSegment347.addChild(&Transform358);

Transform& Transform360 =  Transform();
Transform360.setTranslation(new float[]{-0.165,0,0.07});
Shape& Shape361 =  Shape();
Shape361.setUSE(CString("skinsphere"));
Transform360.addChild(&Shape361);

HAnimSegment347.addChild(&Transform360);

HAnimSite& HAnimSite362 =  HAnimSite();
HAnimSite362.setDEF(CString("Joe_r_metatarsal_pha1"));
HAnimSite362.X3DNode::setName(CString("r_metatarsal_pha1"));
HAnimSite362.setTranslation(new float[]{-0.115,0.02,0.122});
Shape& Shape363 =  Shape();
Shape363.setUSE(CString("sitebox"));
HAnimSite362.addChild(&Shape363);

HAnimSegment347.addChild(&HAnimSite362);

HAnimJoint346.addChildren(&HAnimSegment347);

HAnimJoint& HAnimJoint364 =  HAnimJoint();
HAnimJoint364.setDEF(CString("Joe_r_metatarsal"));
HAnimJoint364.X3DNode::setName(CString("r_metatarsal"));
HAnimJoint364.setRotation(new float[]{-1.00000000000001,0,0,0.264860122523209});
HAnimJoint364.setCenter(new float[]{-0.1,0.01,0.14});
HAnimJoint364.setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
HAnimJoint364.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment365 =  HAnimSegment();
HAnimSegment365.setDEF(CString("Joe_r_forefoot"));
HAnimSegment365.X3DNode::setName(CString("r_forefoot"));
Transform& Transform366 =  Transform();
Transform366.setTranslation(new float[]{-0.1086,0.01,0.14});
Shape& Shape367 =  Shape();
Shape367.setUSE(CString("jointbox"));
Transform366.addChild(&Shape367);

HAnimSegment365.addChild(&Transform366);

Shape& Shape368 =  Shape();
Appearance& Appearance369 =  Appearance();
Appearance369.setUSE(CString("SegmentLine"));
Shape368.addChild(&Appearance369);

IndexedLineSet& IndexedLineSet370 =  IndexedLineSet();
IndexedLineSet370.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate371 =  Coordinate();
Coordinate371.setPoint(new float[]{-0.1,0.01,0.14,-0.1043,0.0016,0.2}, 6);
IndexedLineSet370.setCoord(&Coordinate371);

Shape368.setGeometry(&IndexedLineSet370);

HAnimSegment365.addChild(&Shape368);

Transform& Transform372 =  Transform();
Transform372.setTranslation(new float[]{-0.115,0.04,0.13});
Shape& Shape373 =  Shape();
Shape373.setUSE(CString("skinsphere"));
Transform372.addChild(&Shape373);

HAnimSegment365.addChild(&Transform372);

Transform& Transform374 =  Transform();
Transform374.setTranslation(new float[]{-0.125,0,0.12});
Shape& Shape375 =  Shape();
Shape375.setUSE(CString("skinsphere"));
Transform374.addChild(&Shape375);

HAnimSegment365.addChild(&Transform374);

Transform& Transform376 =  Transform();
Transform376.setTranslation(new float[]{-0.165,0,0.12});
Shape& Shape377 =  Shape();
Shape377.setUSE(CString("skinsphere"));
Transform376.addChild(&Shape377);

HAnimSegment365.addChild(&Transform376);

Transform& Transform378 =  Transform();
Transform378.setTranslation(new float[]{-0.087,0,0.122});
Shape& Shape379 =  Shape();
Shape379.setUSE(CString("skinsphere"));
Transform378.addChild(&Shape379);

HAnimSegment365.addChild(&Transform378);

Transform& Transform380 =  Transform();
Transform380.setTranslation(new float[]{-0.09,0.012,0.188});
Shape& Shape381 =  Shape();
Shape381.setUSE(CString("skinsphere"));
Transform380.addChild(&Shape381);

HAnimSegment365.addChild(&Transform380);

Transform& Transform382 =  Transform();
Transform382.setTranslation(new float[]{-0.11,0.011,0.19});
Shape& Shape383 =  Shape();
Shape383.setUSE(CString("skinsphere"));
Transform382.addChild(&Shape383);

HAnimSegment365.addChild(&Transform382);

Transform& Transform384 =  Transform();
Transform384.setTranslation(new float[]{-0.128,0.011,0.185});
Shape& Shape385 =  Shape();
Shape385.setUSE(CString("skinsphere"));
Transform384.addChild(&Shape385);

HAnimSegment365.addChild(&Transform384);

Transform& Transform386 =  Transform();
Transform386.setTranslation(new float[]{-0.142,0.011,0.178});
Shape& Shape387 =  Shape();
Shape387.setUSE(CString("skinsphere"));
Transform386.addChild(&Shape387);

HAnimSegment365.addChild(&Transform386);

Transform& Transform388 =  Transform();
Transform388.setTranslation(new float[]{-0.154,0.01,0.168});
Shape& Shape389 =  Shape();
Shape389.setUSE(CString("skinsphere"));
Transform388.addChild(&Shape389);

HAnimSegment365.addChild(&Transform388);

HAnimSite& HAnimSite390 =  HAnimSite();
HAnimSite390.setDEF(CString("Joe_r_metatarsal_pha5"));
HAnimSite390.X3DNode::setName(CString("r_metatarsal_pha5"));
HAnimSite390.setTranslation(new float[]{-0.165,0.01,0.12});
Shape& Shape391 =  Shape();
Shape391.setUSE(CString("sitebox"));
HAnimSite390.addChild(&Shape391);

HAnimSegment365.addChild(&HAnimSite390);

HAnimSite& HAnimSite392 =  HAnimSite();
HAnimSite392.setDEF(CString("Joe_r_digit2"));
HAnimSite392.X3DNode::setName(CString("r_digit2"));
HAnimSite392.setTranslation(new float[]{-0.11,0.011,0.19});
Shape& Shape393 =  Shape();
Shape393.setUSE(CString("sitebox"));
HAnimSite392.addChild(&Shape393);

HAnimSegment365.addChild(&HAnimSite392);

HAnimJoint364.addChildren(&HAnimSegment365);

HAnimJoint346.addChildren(&HAnimJoint364);

HAnimJoint332.addChildren(&HAnimJoint346);

HAnimJoint312.addChildren(&HAnimJoint332);

HAnimJoint284.addChildren(&HAnimJoint312);

HAnimJoint258.addChildren(&HAnimJoint284);

HAnimJoint92.addChildren(&HAnimJoint258);

HAnimJoint80.addChildren(&HAnimJoint92);

HAnimJoint& HAnimJoint394 =  HAnimJoint();
HAnimJoint394.setDEF(CString("Joe_vl5"));
HAnimJoint394.X3DNode::setName(CString("vl5"));
HAnimJoint394.setRotation(new float[]{-0.0104321818467796,0.961748598508238,-0.273734913464392,0.109829831225253});
HAnimJoint394.setCenter(new float[]{0,1.045,-0.095});
HAnimJoint394.setSkinCoordIndex(new int32_t[]{28,76}, 2);
HAnimJoint394.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment395 =  HAnimSegment();
HAnimSegment395.setDEF(CString("Joe_toPelvisMarker"));
HAnimSegment395.X3DNode::setName(CString("toPelvis"));
Shape& Shape396 =  Shape();
Appearance& Appearance397 =  Appearance();
Appearance397.setUSE(CString("SegmentLine"));
Shape396.addChild(&Appearance397);

IndexedLineSet& IndexedLineSet398 =  IndexedLineSet();
IndexedLineSet398.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate399 =  Coordinate();
Coordinate399.setPoint(new float[]{0,1.045,-0.095,0,0.9149,0.0016}, 6);
IndexedLineSet398.setCoord(&Coordinate399);

Shape396.setGeometry(&IndexedLineSet398);

HAnimSegment395.addChild(&Shape396);

HAnimJoint394.addChildren(&HAnimSegment395);

HAnimSegment& HAnimSegment400 =  HAnimSegment();
HAnimSegment400.setDEF(CString("Joe_l5"));
HAnimSegment400.X3DNode::setName(CString("l5"));
Shape& Shape401 =  Shape();
Appearance& Appearance402 =  Appearance();
Appearance402.setUSE(CString("SegmentLine"));
Shape401.addChild(&Appearance402);

IndexedLineSet& IndexedLineSet403 =  IndexedLineSet();
IndexedLineSet403.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate404 =  Coordinate();
Coordinate404.setPoint(new float[]{0,1.045,-0.095,0,1.068,-0.085}, 6);
IndexedLineSet403.setCoord(&Coordinate404);

Shape401.setGeometry(&IndexedLineSet403);

HAnimSegment400.addChild(&Shape401);

HAnimSite& HAnimSite405 =  HAnimSite();
HAnimSite405.setDEF(CString("Joe_waist_preferred_post"));
HAnimSite405.X3DNode::setName(CString("waist_preferred_post"));
HAnimSite405.setTranslation(new float[]{0,1.0915,-0.1091});
Shape& Shape406 =  Shape();
Shape406.setUSE(CString("sitebox"));
HAnimSite405.addChild(&Shape406);

HAnimSegment400.addChild(&HAnimSite405);

HAnimSite& HAnimSite407 =  HAnimSite();
HAnimSite407.setDEF(CString("Joe_navel"));
HAnimSite407.X3DNode::setName(CString("navel"));
HAnimSite407.setTranslation(new float[]{0,1.07225,0.09});
Shape& Shape408 =  Shape();
Shape408.setUSE(CString("sitebox"));
HAnimSite407.addChild(&Shape408);

HAnimSegment400.addChild(&HAnimSite407);

HAnimJoint394.addChildren(&HAnimSegment400);

HAnimJoint& HAnimJoint409 =  HAnimJoint();
HAnimJoint409.setDEF(CString("Joe_vl4"));
HAnimJoint409.X3DNode::setName(CString("vl4"));
HAnimJoint409.setCenter(new float[]{0,1.068,-0.085});
HAnimSegment& HAnimSegment410 =  HAnimSegment();
HAnimSegment410.setDEF(CString("Joe_l4"));
HAnimSegment410.X3DNode::setName(CString("l4"));
Shape& Shape411 =  Shape();
Appearance& Appearance412 =  Appearance();
Appearance412.setUSE(CString("SegmentLine"));
Shape411.addChild(&Appearance412);

IndexedLineSet& IndexedLineSet413 =  IndexedLineSet();
IndexedLineSet413.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate414 =  Coordinate();
Coordinate414.setPoint(new float[]{0,1.068,-0.085,0,1.092,-0.0725}, 6);
IndexedLineSet413.setCoord(&Coordinate414);

Shape411.setGeometry(&IndexedLineSet413);

HAnimSegment410.addChild(&Shape411);

Transform& Transform415 =  Transform();
Transform415.setTranslation(new float[]{0,1.068,-0.085});
Shape& Shape416 =  Shape();
Shape416.setUSE(CString("jointbox"));
Transform415.addChild(&Shape416);

HAnimSegment410.addChild(&Transform415);

HAnimJoint409.addChildren(&HAnimSegment410);

HAnimJoint& HAnimJoint417 =  HAnimJoint();
HAnimJoint417.setDEF(CString("Joe_vl3"));
HAnimJoint417.X3DNode::setName(CString("vl3"));
HAnimJoint417.setCenter(new float[]{0,1.092,-0.0725});
HAnimSegment& HAnimSegment418 =  HAnimSegment();
HAnimSegment418.setDEF(CString("Joe_l3"));
HAnimSegment418.X3DNode::setName(CString("l3"));
Shape& Shape419 =  Shape();
Appearance& Appearance420 =  Appearance();
Appearance420.setUSE(CString("SegmentLine"));
Shape419.addChild(&Appearance420);

IndexedLineSet& IndexedLineSet421 =  IndexedLineSet();
IndexedLineSet421.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate422 =  Coordinate();
Coordinate422.setPoint(new float[]{0,1.092,-0.0725,0,1.12,-0.065}, 6);
IndexedLineSet421.setCoord(&Coordinate422);

Shape419.setGeometry(&IndexedLineSet421);

HAnimSegment418.addChild(&Shape419);

Transform& Transform423 =  Transform();
Transform423.setTranslation(new float[]{0,1.092,-0.0725});
Shape& Shape424 =  Shape();
Shape424.setUSE(CString("jointbox"));
Transform423.addChild(&Shape424);

HAnimSegment418.addChild(&Transform423);

HAnimJoint417.addChildren(&HAnimSegment418);

HAnimJoint& HAnimJoint425 =  HAnimJoint();
HAnimJoint425.setDEF(CString("Joe_vl2"));
HAnimJoint425.X3DNode::setName(CString("vl2"));
HAnimJoint425.setCenter(new float[]{0,1.12,-0.065});
HAnimJoint425.setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
HAnimJoint425.setSkinCoordWeight(new float[]{1,1,1,1,1,1,0.7,1,0.8}, 9);
HAnimSegment& HAnimSegment426 =  HAnimSegment();
HAnimSegment426.setDEF(CString("Joe_l2"));
HAnimSegment426.X3DNode::setName(CString("l2"));
Shape& Shape427 =  Shape();
Appearance& Appearance428 =  Appearance();
Appearance428.setUSE(CString("SegmentLine"));
Shape427.addChild(&Appearance428);

IndexedLineSet& IndexedLineSet429 =  IndexedLineSet();
IndexedLineSet429.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate430 =  Coordinate();
Coordinate430.setPoint(new float[]{0,1.12,-0.065,0,1.1459,-0.0625}, 6);
IndexedLineSet429.setCoord(&Coordinate430);

Shape427.setGeometry(&IndexedLineSet429);

HAnimSegment426.addChild(&Shape427);

Transform& Transform431 =  Transform();
Transform431.setTranslation(new float[]{0,1.12,-0.065});
Shape& Shape432 =  Shape();
Shape432.setUSE(CString("jointbox"));
Transform431.addChild(&Shape432);

HAnimSegment426.addChild(&Transform431);

Transform& Transform433 =  Transform();
Transform433.setTranslation(new float[]{-0.087,1.19,-0.09});
Shape& Shape434 =  Shape();
Shape434.setUSE(CString("skinsphere"));
Transform433.addChild(&Shape434);

HAnimSegment426.addChild(&Transform433);

Transform& Transform435 =  Transform();
Transform435.setTranslation(new float[]{0.087,1.19,-0.09});
Shape& Shape436 =  Shape();
Shape436.setUSE(CString("skinsphere"));
Transform435.addChild(&Shape436);

HAnimSegment426.addChild(&Transform435);

Transform& Transform437 =  Transform();
Transform437.setTranslation(new float[]{0.172,1.32,-0.03});
Shape& Shape438 =  Shape();
Shape438.setUSE(CString("skinsphere"));
Transform437.addChild(&Shape438);

HAnimSegment426.addChild(&Transform437);

Transform& Transform439 =  Transform();
Transform439.setTranslation(new float[]{-0.172,1.32,-0.03});
Shape& Shape440 =  Shape();
Shape440.setUSE(CString("skinsphere"));
Transform439.addChild(&Shape440);

HAnimSegment426.addChild(&Transform439);

Transform& Transform441 =  Transform();
Transform441.setTranslation(new float[]{0.15,1.23,-0.015});
Shape& Shape442 =  Shape();
Shape442.setUSE(CString("skinsphere"));
Transform441.addChild(&Shape442);

HAnimSegment426.addChild(&Transform441);

Transform& Transform443 =  Transform();
Transform443.setTranslation(new float[]{-0.15,1.23,-0.015});
Shape& Shape444 =  Shape();
Shape444.setUSE(CString("skinsphere"));
Transform443.addChild(&Shape444);

HAnimSegment426.addChild(&Transform443);

HAnimSite& HAnimSite445 =  HAnimSite();
HAnimSite445.setDEF(CString("Joe_r_rib10"));
HAnimSite445.X3DNode::setName(CString("r_rib10"));
HAnimSite445.setTranslation(new float[]{-0.087,1.19,0.09});
Shape& Shape446 =  Shape();
Shape446.setUSE(CString("sitebox"));
HAnimSite445.addChild(&Shape446);

HAnimSegment426.addChild(&HAnimSite445);

HAnimSite& HAnimSite447 =  HAnimSite();
HAnimSite447.setDEF(CString("Joe_l_rib10"));
HAnimSite447.X3DNode::setName(CString("l_rib10"));
HAnimSite447.setTranslation(new float[]{0.087,1.19,0.09});
Shape& Shape448 =  Shape();
Shape448.setUSE(CString("sitebox"));
HAnimSite447.addChild(&Shape448);

HAnimSegment426.addChild(&HAnimSite447);

HAnimSite& HAnimSite449 =  HAnimSite();
HAnimSite449.setDEF(CString("Joe_rib10_midspine"));
HAnimSite449.X3DNode::setName(CString("rib10_midspine"));
HAnimSite449.setTranslation(new float[]{0,1.1908,-0.1113});
Shape& Shape450 =  Shape();
Shape450.setUSE(CString("sitebox"));
HAnimSite449.addChild(&Shape450);

HAnimSegment426.addChild(&HAnimSite449);

HAnimJoint425.addChildren(&HAnimSegment426);

HAnimJoint& HAnimJoint451 =  HAnimJoint();
HAnimJoint451.setDEF(CString("Joe_vl1"));
HAnimJoint451.X3DNode::setName(CString("vl1"));
HAnimJoint451.setCenter(new float[]{0,1.1459,-0.0625});
HAnimSegment& HAnimSegment452 =  HAnimSegment();
HAnimSegment452.setDEF(CString("Joe_l1"));
HAnimSegment452.X3DNode::setName(CString("l1"));
Shape& Shape453 =  Shape();
Appearance& Appearance454 =  Appearance();
Appearance454.setUSE(CString("SegmentLine"));
Shape453.addChild(&Appearance454);

IndexedLineSet& IndexedLineSet455 =  IndexedLineSet();
IndexedLineSet455.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate456 =  Coordinate();
Coordinate456.setPoint(new float[]{0,1.1459,-0.0625,0,1.179,-0.068}, 6);
IndexedLineSet455.setCoord(&Coordinate456);

Shape453.setGeometry(&IndexedLineSet455);

HAnimSegment452.addChild(&Shape453);

Transform& Transform457 =  Transform();
Transform457.setTranslation(new float[]{0,1.1459,-0.0625});
Shape& Shape458 =  Shape();
Shape458.setUSE(CString("jointbox"));
Transform457.addChild(&Shape458);

HAnimSegment452.addChild(&Transform457);

HAnimJoint451.addChildren(&HAnimSegment452);

HAnimJoint& HAnimJoint459 =  HAnimJoint();
HAnimJoint459.setDEF(CString("Joe_vt12"));
HAnimJoint459.X3DNode::setName(CString("vt12"));
HAnimJoint459.setCenter(new float[]{0,1.179,-0.068});
HAnimSegment& HAnimSegment460 =  HAnimSegment();
HAnimSegment460.setDEF(CString("Joe_t12"));
HAnimSegment460.X3DNode::setName(CString("t12"));
Shape& Shape461 =  Shape();
Appearance& Appearance462 =  Appearance();
Appearance462.setUSE(CString("SegmentLine"));
Shape461.addChild(&Appearance462);

IndexedLineSet& IndexedLineSet463 =  IndexedLineSet();
IndexedLineSet463.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate464 =  Coordinate();
Coordinate464.setPoint(new float[]{0,1.179,-0.068,0,1.242,-0.09}, 6);
IndexedLineSet463.setCoord(&Coordinate464);

Shape461.setGeometry(&IndexedLineSet463);

HAnimSegment460.addChild(&Shape461);

Transform& Transform465 =  Transform();
Transform465.setTranslation(new float[]{0,1.179,-0.068});
Shape& Shape466 =  Shape();
Shape466.setUSE(CString("jointbox"));
Transform465.addChild(&Shape466);

HAnimSegment460.addChild(&Transform465);

HAnimJoint459.addChildren(&HAnimSegment460);

HAnimJoint& HAnimJoint467 =  HAnimJoint();
HAnimJoint467.setDEF(CString("Joe_vt11"));
HAnimJoint467.X3DNode::setName(CString("vt11"));
HAnimJoint467.setCenter(new float[]{0,1.2679,-0.081});
HAnimSegment& HAnimSegment468 =  HAnimSegment();
HAnimSegment468.setDEF(CString("Joe_t11"));
HAnimSegment468.X3DNode::setName(CString("t11"));
Shape& Shape469 =  Shape();
Appearance& Appearance470 =  Appearance();
Appearance470.setUSE(CString("SegmentLine"));
Shape469.addChild(&Appearance470);

IndexedLineSet& IndexedLineSet471 =  IndexedLineSet();
IndexedLineSet471.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate472 =  Coordinate();
Coordinate472.setPoint(new float[]{0,1.2145,-0.0755,0,1.242,-0.09}, 6);
IndexedLineSet471.setCoord(&Coordinate472);

Shape469.setGeometry(&IndexedLineSet471);

HAnimSegment468.addChild(&Shape469);

Transform& Transform473 =  Transform();
Transform473.setTranslation(new float[]{0,1.2145,-0.0755});
Shape& Shape474 =  Shape();
Shape474.setUSE(CString("jointbox"));
Transform473.addChild(&Shape474);

HAnimSegment468.addChild(&Transform473);

HAnimJoint467.addChildren(&HAnimSegment468);

HAnimJoint& HAnimJoint475 =  HAnimJoint();
HAnimJoint475.setDEF(CString("Joe_vt10"));
HAnimJoint475.X3DNode::setName(CString("vt10"));
HAnimJoint475.setCenter(new float[]{0,1.242,-0.09});
HAnimJoint475.setSkinCoordIndex(new int32_t[]{15}, 1);
HAnimJoint475.setSkinCoordWeight(new float[]{1}, 1);
HAnimSegment& HAnimSegment476 =  HAnimSegment();
HAnimSegment476.setDEF(CString("Joe_t10"));
HAnimSegment476.X3DNode::setName(CString("t10"));
Shape& Shape477 =  Shape();
Appearance& Appearance478 =  Appearance();
Appearance478.setUSE(CString("SegmentLine"));
Shape477.addChild(&Appearance478);

IndexedLineSet& IndexedLineSet479 =  IndexedLineSet();
IndexedLineSet479.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate480 =  Coordinate();
Coordinate480.setPoint(new float[]{0,1.242,-0.09,0,1.268,-0.1}, 6);
IndexedLineSet479.setCoord(&Coordinate480);

Shape477.setGeometry(&IndexedLineSet479);

HAnimSegment476.addChild(&Shape477);

Transform& Transform481 =  Transform();
Transform481.setTranslation(new float[]{0,1.242,-0.09});
Shape& Shape482 =  Shape();
Shape482.setUSE(CString("jointbox"));
Transform481.addChild(&Shape482);

HAnimSegment476.addChild(&Transform481);

HAnimSite& HAnimSite483 =  HAnimSite();
HAnimSite483.setDEF(CString("Joe_substernale"));
HAnimSite483.X3DNode::setName(CString("substernale"));
HAnimSite483.setTranslation(new float[]{0,1.25,0.113});
Shape& Shape484 =  Shape();
Shape484.setUSE(CString("sitebox"));
HAnimSite483.addChild(&Shape484);

HAnimSegment476.addChild(&HAnimSite483);

HAnimJoint475.addChildren(&HAnimSegment476);

HAnimJoint& HAnimJoint485 =  HAnimJoint();
HAnimJoint485.setDEF(CString("Joe_vt9"));
HAnimJoint485.X3DNode::setName(CString("vt9"));
HAnimJoint485.setCenter(new float[]{0,1.268,-0.1});
HAnimJoint485.setSkinCoordIndex(new int32_t[]{13,14}, 2);
HAnimJoint485.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment486 =  HAnimSegment();
HAnimSegment486.setDEF(CString("Joe_t9"));
HAnimSegment486.X3DNode::setName(CString("t9"));
Shape& Shape487 =  Shape();
Appearance& Appearance488 =  Appearance();
Appearance488.setUSE(CString("SegmentLine"));
Shape487.addChild(&Appearance488);

IndexedLineSet& IndexedLineSet489 =  IndexedLineSet();
IndexedLineSet489.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate490 =  Coordinate();
Coordinate490.setPoint(new float[]{0,1.268,-0.1,0,1.294,-0.11}, 6);
IndexedLineSet489.setCoord(&Coordinate490);

Shape487.setGeometry(&IndexedLineSet489);

HAnimSegment486.addChild(&Shape487);

Transform& Transform491 =  Transform();
Transform491.setTranslation(new float[]{0,1.268,-0.1});
Shape& Shape492 =  Shape();
Shape492.setUSE(CString("jointbox"));
Transform491.addChild(&Shape492);

HAnimSegment486.addChild(&Transform491);

HAnimSite& HAnimSite493 =  HAnimSite();
HAnimSite493.setDEF(CString("Joe_r_thelion"));
HAnimSite493.X3DNode::setName(CString("r_thelion"));
HAnimSite493.setTranslation(new float[]{-0.1135,1.318,0.095});
Shape& Shape494 =  Shape();
Shape494.setUSE(CString("sitebox"));
HAnimSite493.addChild(&Shape494);

HAnimSegment486.addChild(&HAnimSite493);

HAnimSite& HAnimSite495 =  HAnimSite();
HAnimSite495.setDEF(CString("Joe_l_thelion"));
HAnimSite495.X3DNode::setName(CString("l_thelion"));
HAnimSite495.setTranslation(new float[]{0.1135,1.318,0.095});
Shape& Shape496 =  Shape();
Shape496.setUSE(CString("sitebox"));
HAnimSite495.addChild(&Shape496);

HAnimSegment486.addChild(&HAnimSite495);

HAnimJoint485.addChildren(&HAnimSegment486);

HAnimJoint& HAnimJoint497 =  HAnimJoint();
HAnimJoint497.setDEF(CString("Joe_vt8"));
HAnimJoint497.X3DNode::setName(CString("vt8"));
HAnimJoint497.setCenter(new float[]{0,1.294,-0.11});
HAnimSegment& HAnimSegment498 =  HAnimSegment();
HAnimSegment498.setDEF(CString("Joe_t8"));
HAnimSegment498.X3DNode::setName(CString("t8"));
Shape& Shape499 =  Shape();
Appearance& Appearance500 =  Appearance();
Appearance500.setUSE(CString("SegmentLine"));
Shape499.addChild(&Appearance500);

IndexedLineSet& IndexedLineSet501 =  IndexedLineSet();
IndexedLineSet501.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate502 =  Coordinate();
Coordinate502.setPoint(new float[]{0,1.294,-0.11,0,1.352,-0.12}, 6);
IndexedLineSet501.setCoord(&Coordinate502);

Shape499.setGeometry(&IndexedLineSet501);

HAnimSegment498.addChild(&Shape499);

Transform& Transform503 =  Transform();
Transform503.setTranslation(new float[]{0,1.294,-0.11});
Shape& Shape504 =  Shape();
Shape504.setUSE(CString("jointbox"));
Transform503.addChild(&Shape504);

HAnimSegment498.addChild(&Transform503);

HAnimJoint497.addChildren(&HAnimSegment498);

HAnimJoint& HAnimJoint505 =  HAnimJoint();
HAnimJoint505.setDEF(CString("Joe_vt7"));
HAnimJoint505.X3DNode::setName(CString("vt7"));
HAnimJoint505.setCenter(new float[]{0,1.323,-0.1155});
HAnimSegment& HAnimSegment506 =  HAnimSegment();
HAnimSegment506.setDEF(CString("Joe_t7"));
HAnimSegment506.X3DNode::setName(CString("t7"));
Shape& Shape507 =  Shape();
Appearance& Appearance508 =  Appearance();
Appearance508.setUSE(CString("SegmentLine"));
Shape507.addChild(&Appearance508);

IndexedLineSet& IndexedLineSet509 =  IndexedLineSet();
IndexedLineSet509.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate510 =  Coordinate();
Coordinate510.setPoint(new float[]{0,1.352,-0.12,0,1.381,-0.1235}, 6);
IndexedLineSet509.setCoord(&Coordinate510);

Shape507.setGeometry(&IndexedLineSet509);

HAnimSegment506.addChild(&Shape507);

Transform& Transform511 =  Transform();
Transform511.setTranslation(new float[]{0,1.323,-0.1155});
Shape& Shape512 =  Shape();
Shape512.setUSE(CString("jointbox"));
Transform511.addChild(&Shape512);

HAnimSegment506.addChild(&Transform511);

HAnimJoint505.addChildren(&HAnimSegment506);

HAnimJoint& HAnimJoint513 =  HAnimJoint();
HAnimJoint513.setDEF(CString("Joe_vt6"));
HAnimJoint513.X3DNode::setName(CString("vt6"));
HAnimJoint513.setCenter(new float[]{0,1.352,-0.12});
HAnimSegment& HAnimSegment514 =  HAnimSegment();
HAnimSegment514.setDEF(CString("Joe_t6"));
HAnimSegment514.X3DNode::setName(CString("t6"));
Shape& Shape515 =  Shape();
Appearance& Appearance516 =  Appearance();
Appearance516.setUSE(CString("SegmentLine"));
Shape515.addChild(&Appearance516);

IndexedLineSet& IndexedLineSet517 =  IndexedLineSet();
IndexedLineSet517.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate518 =  Coordinate();
Coordinate518.setPoint(new float[]{0,1.381,-0.1235,0,1.41,-0.1235}, 6);
IndexedLineSet517.setCoord(&Coordinate518);

Shape515.setGeometry(&IndexedLineSet517);

HAnimSegment514.addChild(&Shape515);

Transform& Transform519 =  Transform();
Transform519.setTranslation(new float[]{0,1.352,-0.12});
Shape& Shape520 =  Shape();
Shape520.setUSE(CString("jointbox"));
Transform519.addChild(&Shape520);

HAnimSegment514.addChild(&Transform519);

HAnimJoint513.addChildren(&HAnimSegment514);

HAnimJoint& HAnimJoint521 =  HAnimJoint();
HAnimJoint521.setDEF(CString("Joe_vt5"));
HAnimJoint521.X3DNode::setName(CString("vt5"));
HAnimJoint521.setCenter(new float[]{0,1.381,-0.1235});
HAnimSegment& HAnimSegment522 =  HAnimSegment();
HAnimSegment522.setDEF(CString("Joe_t5"));
HAnimSegment522.X3DNode::setName(CString("t5"));
Shape& Shape523 =  Shape();
Appearance& Appearance524 =  Appearance();
Appearance524.setUSE(CString("SegmentLine"));
Shape523.addChild(&Appearance524);

IndexedLineSet& IndexedLineSet525 =  IndexedLineSet();
IndexedLineSet525.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate526 =  Coordinate();
Coordinate526.setPoint(new float[]{0,1.41,-0.1235,0,1.438,-0.12}, 6);
IndexedLineSet525.setCoord(&Coordinate526);

Shape523.setGeometry(&IndexedLineSet525);

HAnimSegment522.addChild(&Shape523);

Transform& Transform527 =  Transform();
Transform527.setTranslation(new float[]{0,1.381,-0.1235});
Shape& Shape528 =  Shape();
Shape528.setUSE(CString("jointbox"));
Transform527.addChild(&Shape528);

HAnimSegment522.addChild(&Transform527);

HAnimJoint521.addChildren(&HAnimSegment522);

HAnimJoint& HAnimJoint529 =  HAnimJoint();
HAnimJoint529.setDEF(CString("Joe_vt4"));
HAnimJoint529.X3DNode::setName(CString("vt4"));
HAnimJoint529.setCenter(new float[]{0,1.41,-0.1235});
HAnimJoint529.setSkinCoordIndex(new int32_t[]{81}, 1);
HAnimJoint529.setSkinCoordWeight(new float[]{1}, 1);
HAnimSegment& HAnimSegment530 =  HAnimSegment();
HAnimSegment530.setDEF(CString("Joe_t4"));
HAnimSegment530.X3DNode::setName(CString("t4"));
Shape& Shape531 =  Shape();
Appearance& Appearance532 =  Appearance();
Appearance532.setUSE(CString("SegmentLine"));
Shape531.addChild(&Appearance532);

IndexedLineSet& IndexedLineSet533 =  IndexedLineSet();
IndexedLineSet533.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate534 =  Coordinate();
Coordinate534.setPoint(new float[]{0,1.41,-0.1235,0,1.438,-0.12}, 6);
IndexedLineSet533.setCoord(&Coordinate534);

Shape531.setGeometry(&IndexedLineSet533);

HAnimSegment530.addChild(&Shape531);

Transform& Transform535 =  Transform();
Transform535.setTranslation(new float[]{0,1.41,-0.1235});
Shape& Shape536 =  Shape();
Shape536.setUSE(CString("jointbox"));
Transform535.addChild(&Shape536);

HAnimSegment530.addChild(&Transform535);

Transform& Transform537 =  Transform();
Transform537.setTranslation(new float[]{0,1.41,-0.145});
Shape& Shape538 =  Shape();
Shape538.setUSE(CString("skinsphere"));
Transform537.addChild(&Shape538);

HAnimSegment530.addChild(&Transform537);

HAnimJoint529.addChildren(&HAnimSegment530);

HAnimJoint& HAnimJoint539 =  HAnimJoint();
HAnimJoint539.setDEF(CString("Joe_vt3"));
HAnimJoint539.X3DNode::setName(CString("vt3"));
HAnimJoint539.setCenter(new float[]{0,1.438,-0.12});
HAnimSegment& HAnimSegment540 =  HAnimSegment();
HAnimSegment540.setDEF(CString("Joe_t3"));
HAnimSegment540.X3DNode::setName(CString("t3"));
Shape& Shape541 =  Shape();
Appearance& Appearance542 =  Appearance();
Appearance542.setUSE(CString("SegmentLine"));
Shape541.addChild(&Appearance542);

IndexedLineSet& IndexedLineSet543 =  IndexedLineSet();
IndexedLineSet543.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate544 =  Coordinate();
Coordinate544.setPoint(new float[]{0,1.438,-0.12,0,1.468,-0.105}, 6);
IndexedLineSet543.setCoord(&Coordinate544);

Shape541.setGeometry(&IndexedLineSet543);

HAnimSegment540.addChild(&Shape541);

Transform& Transform545 =  Transform();
Transform545.setTranslation(new float[]{0,1.438,-0.12});
Shape& Shape546 =  Shape();
Shape546.setUSE(CString("jointbox"));
Transform545.addChild(&Shape546);

HAnimSegment540.addChild(&Transform545);

HAnimJoint539.addChildren(&HAnimSegment540);

HAnimJoint& HAnimJoint547 =  HAnimJoint();
HAnimJoint547.setDEF(CString("Joe_vt2"));
HAnimJoint547.X3DNode::setName(CString("vt2"));
HAnimJoint547.setCenter(new float[]{0,1.468,-0.105});
HAnimSegment& HAnimSegment548 =  HAnimSegment();
HAnimSegment548.setDEF(CString("Joe_t2"));
HAnimSegment548.X3DNode::setName(CString("t2"));
Shape& Shape549 =  Shape();
Appearance& Appearance550 =  Appearance();
Appearance550.setUSE(CString("SegmentLine"));
Shape549.addChild(&Appearance550);

IndexedLineSet& IndexedLineSet551 =  IndexedLineSet();
IndexedLineSet551.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate552 =  Coordinate();
Coordinate552.setPoint(new float[]{0,1.468,-0.105,0,1.497,-0.09}, 6);
IndexedLineSet551.setCoord(&Coordinate552);

Shape549.setGeometry(&IndexedLineSet551);

HAnimSegment548.addChild(&Shape549);

Transform& Transform553 =  Transform();
Transform553.setTranslation(new float[]{0,1.468,-0.105});
Shape& Shape554 =  Shape();
Shape554.setUSE(CString("jointbox"));
Transform553.addChild(&Shape554);

HAnimSegment548.addChild(&Transform553);

HAnimJoint547.addChildren(&HAnimSegment548);

HAnimJoint& HAnimJoint555 =  HAnimJoint();
HAnimJoint555.setDEF(CString("Joe_vt1"));
HAnimJoint555.X3DNode::setName(CString("vt1"));
HAnimJoint555.setCenter(new float[]{0,1.497,-0.09});
HAnimJoint555.setSkinCoordIndex(new int32_t[]{11,24}, 2);
HAnimJoint555.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment556 =  HAnimSegment();
HAnimSegment556.setDEF(CString("Joe_t1"));
HAnimSegment556.X3DNode::setName(CString("t1"));
Shape& Shape557 =  Shape();
Appearance& Appearance558 =  Appearance();
Appearance558.setUSE(CString("SegmentLine"));
Shape557.addChild(&Appearance558);

IndexedLineSet& IndexedLineSet559 =  IndexedLineSet();
IndexedLineSet559.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate560 =  Coordinate();
Coordinate560.setPoint(new float[]{0,1.497,-0.09,0,1.525,-0.072}, 6);
IndexedLineSet559.setCoord(&Coordinate560);

Shape557.setGeometry(&IndexedLineSet559);

HAnimSegment556.addChild(&Shape557);

Transform& Transform561 =  Transform();
Transform561.setTranslation(new float[]{0,1.497,-0.09});
Shape& Shape562 =  Shape();
Shape562.setUSE(CString("jointbox"));
Transform561.addChild(&Shape562);

HAnimSegment556.addChild(&Transform561);

HAnimSite& HAnimSite563 =  HAnimSite();
HAnimSite563.setDEF(CString("Joe_suprasternale"));
HAnimSite563.X3DNode::setName(CString("suprasternale"));
HAnimSite563.setTranslation(new float[]{0,1.44,0.03});
Shape& Shape564 =  Shape();
Shape564.setUSE(CString("sitebox"));
HAnimSite563.addChild(&Shape564);

HAnimSegment556.addChild(&HAnimSite563);

HAnimSite& HAnimSite565 =  HAnimSite();
HAnimSite565.setDEF(CString("Joe_cervicale"));
HAnimSite565.X3DNode::setName(CString("cervicale"));
HAnimSite565.setTranslation(new float[]{0,1.53,-0.084});
Shape& Shape566 =  Shape();
Shape566.setUSE(CString("sitebox"));
HAnimSite565.addChild(&Shape566);

HAnimSegment556.addChild(&HAnimSite565);

HAnimJoint555.addChildren(&HAnimSegment556);

HAnimJoint& HAnimJoint567 =  HAnimJoint();
HAnimJoint567.setDEF(CString("Joe_vc7"));
HAnimJoint567.X3DNode::setName(CString("vc7"));
HAnimJoint567.setCenter(new float[]{0,1.525,-0.072});
HAnimJoint567.setSkinCoordIndex(new int32_t[]{74,75}, 2);
HAnimJoint567.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment568 =  HAnimSegment();
HAnimSegment568.setDEF(CString("Joe_c7"));
HAnimSegment568.X3DNode::setName(CString("c7"));
Shape& Shape569 =  Shape();
Appearance& Appearance570 =  Appearance();
Appearance570.setUSE(CString("SegmentLine"));
Shape569.addChild(&Appearance570);

IndexedLineSet& IndexedLineSet571 =  IndexedLineSet();
IndexedLineSet571.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate572 =  Coordinate();
Coordinate572.setPoint(new float[]{0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0,1.54,-0.05}, 12);
IndexedLineSet571.setCoord(&Coordinate572);

Shape569.setGeometry(&IndexedLineSet571);

HAnimSegment568.addChild(&Shape569);

Transform& Transform573 =  Transform();
Transform573.setTranslation(new float[]{0,1.525,-0.072});
Shape& Shape574 =  Shape();
Shape574.setUSE(CString("jointbox"));
Transform573.addChild(&Shape574);

HAnimSegment568.addChild(&Transform573);

HAnimSite& HAnimSite575 =  HAnimSite();
HAnimSite575.setDEF(CString("Joe_r_neck_base"));
HAnimSite575.X3DNode::setName(CString("r_neck_base"));
HAnimSite575.setTranslation(new float[]{-0.0646,1.5149,-0.0385});
Shape& Shape576 =  Shape();
Shape576.setUSE(CString("sitebox"));
HAnimSite575.addChild(&Shape576);

HAnimSegment568.addChild(&HAnimSite575);

HAnimSite& HAnimSite577 =  HAnimSite();
HAnimSite577.setDEF(CString("Joe_l_neck_base"));
HAnimSite577.X3DNode::setName(CString("l_neck_base"));
HAnimSite577.setTranslation(new float[]{0.0646,1.5149,-0.0385});
Shape& Shape578 =  Shape();
Shape578.setUSE(CString("sitebox"));
HAnimSite577.addChild(&Shape578);

HAnimSegment568.addChild(&HAnimSite577);

HAnimJoint567.addChildren(&HAnimSegment568);

HAnimJoint& HAnimJoint579 =  HAnimJoint();
HAnimJoint579.setDEF(CString("Joe_vc6"));
HAnimJoint579.X3DNode::setName(CString("vc6"));
HAnimJoint579.setRotation(new float[]{-0.37139068112485,-0.928476688976744,0,0.0468530829448654});
HAnimJoint579.setCenter(new float[]{0,1.54,-0.05});
HAnimSegment& HAnimSegment580 =  HAnimSegment();
HAnimSegment580.setDEF(CString("Joe_c6"));
HAnimSegment580.X3DNode::setName(CString("c6"));
Shape& Shape581 =  Shape();
Appearance& Appearance582 =  Appearance();
Appearance582.setUSE(CString("SegmentLine"));
Shape581.addChild(&Appearance582);

IndexedLineSet& IndexedLineSet583 =  IndexedLineSet();
IndexedLineSet583.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate584 =  Coordinate();
Coordinate584.setPoint(new float[]{0,1.54,-0.05,0,1.5675,-0.0256}, 6);
IndexedLineSet583.setCoord(&Coordinate584);

Shape581.setGeometry(&IndexedLineSet583);

HAnimSegment580.addChild(&Shape581);

Transform& Transform585 =  Transform();
Transform585.setTranslation(new float[]{0,1.54,-0.05});
Shape& Shape586 =  Shape();
Shape586.setUSE(CString("jointbox"));
Transform585.addChild(&Shape586);

HAnimSegment580.addChild(&Transform585);

HAnimJoint579.addChildren(&HAnimSegment580);

HAnimJoint& HAnimJoint587 =  HAnimJoint();
HAnimJoint587.setDEF(CString("Joe_vc5"));
HAnimJoint587.X3DNode::setName(CString("vc5"));
HAnimJoint587.setCenter(new float[]{0,1.552,-0.035});
HAnimSegment& HAnimSegment588 =  HAnimSegment();
HAnimSegment588.setDEF(CString("Joe_c5"));
HAnimSegment588.X3DNode::setName(CString("c5"));
Transform& Transform589 =  Transform();
Transform589.setTranslation(new float[]{0,1.552,-0.035});
Shape& Shape590 =  Shape();
Shape590.setUSE(CString("jointbox"));
Transform589.addChild(&Shape590);

HAnimSegment588.addChild(&Transform589);

Shape& Shape591 =  Shape();
Appearance& Appearance592 =  Appearance();
Appearance592.setUSE(CString("SegmentLine"));
Shape591.addChild(&Appearance592);

IndexedLineSet& IndexedLineSet593 =  IndexedLineSet();
IndexedLineSet593.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate594 =  Coordinate();
Coordinate594.setPoint(new float[]{0,1.5675,-0.0256,0,1.58225,-0.0185}, 6);
IndexedLineSet593.setCoord(&Coordinate594);

Shape591.setGeometry(&IndexedLineSet593);

HAnimSegment588.addChild(&Shape591);

HAnimJoint587.addChildren(&HAnimSegment588);

HAnimJoint& HAnimJoint595 =  HAnimJoint();
HAnimJoint595.setDEF(CString("Joe_vc4"));
HAnimJoint595.X3DNode::setName(CString("vc4"));
HAnimJoint595.setCenter(new float[]{0,1.5675,-0.0256});
HAnimSegment& HAnimSegment596 =  HAnimSegment();
HAnimSegment596.setDEF(CString("Joe_c4"));
HAnimSegment596.X3DNode::setName(CString("c4"));
Shape& Shape597 =  Shape();
Appearance& Appearance598 =  Appearance();
Appearance598.setUSE(CString("SegmentLine"));
Shape597.addChild(&Appearance598);

IndexedLineSet& IndexedLineSet599 =  IndexedLineSet();
IndexedLineSet599.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate600 =  Coordinate();
Coordinate600.setPoint(new float[]{0,1.58225,-0.0185,0,1.595,-0.0175}, 6);
IndexedLineSet599.setCoord(&Coordinate600);

Shape597.setGeometry(&IndexedLineSet599);

HAnimSegment596.addChild(&Shape597);

Transform& Transform601 =  Transform();
Transform601.setTranslation(new float[]{0,1.5675,-0.0256});
Shape& Shape602 =  Shape();
Shape602.setUSE(CString("jointbox"));
Transform601.addChild(&Shape602);

HAnimSegment596.addChild(&Transform601);

HAnimJoint595.addChildren(&HAnimSegment596);

HAnimJoint& HAnimJoint603 =  HAnimJoint();
HAnimJoint603.setDEF(CString("Joe_vc3"));
HAnimJoint603.X3DNode::setName(CString("vc3"));
HAnimJoint603.setCenter(new float[]{0,1.58225,-0.0185});
HAnimSegment& HAnimSegment604 =  HAnimSegment();
HAnimSegment604.setDEF(CString("Joe_c3"));
HAnimSegment604.X3DNode::setName(CString("c3"));
Shape& Shape605 =  Shape();
Appearance& Appearance606 =  Appearance();
Appearance606.setUSE(CString("SegmentLine"));
Shape605.addChild(&Appearance606);

IndexedLineSet& IndexedLineSet607 =  IndexedLineSet();
IndexedLineSet607.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate608 =  Coordinate();
Coordinate608.setPoint(new float[]{0,1.595,-0.0175,0,1.61,-0.015}, 6);
IndexedLineSet607.setCoord(&Coordinate608);

Shape605.setGeometry(&IndexedLineSet607);

HAnimSegment604.addChild(&Shape605);

Transform& Transform609 =  Transform();
Transform609.setTranslation(new float[]{0,1.58225,-0.0185});
Shape& Shape610 =  Shape();
Shape610.setUSE(CString("jointbox"));
Transform609.addChild(&Shape610);

HAnimSegment604.addChild(&Transform609);

HAnimJoint603.addChildren(&HAnimSegment604);

HAnimJoint& HAnimJoint611 =  HAnimJoint();
HAnimJoint611.setDEF(CString("Joe_vc2"));
HAnimJoint611.X3DNode::setName(CString("vc2"));
HAnimJoint611.setCenter(new float[]{0,1.595,-0.0175});
HAnimSegment& HAnimSegment612 =  HAnimSegment();
HAnimSegment612.setDEF(CString("Joe_c2"));
HAnimSegment612.X3DNode::setName(CString("c2"));
Shape& Shape613 =  Shape();
Appearance& Appearance614 =  Appearance();
Appearance614.setUSE(CString("SegmentLine"));
Shape613.addChild(&Appearance614);

IndexedLineSet& IndexedLineSet615 =  IndexedLineSet();
IndexedLineSet615.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate616 =  Coordinate();
Coordinate616.setPoint(new float[]{0,1.61,-0.015,0,1.6144,-0.0034}, 6);
IndexedLineSet615.setCoord(&Coordinate616);

Shape613.setGeometry(&IndexedLineSet615);

HAnimSegment612.addChild(&Shape613);

Transform& Transform617 =  Transform();
Transform617.setTranslation(new float[]{0,1.595,-0.0175});
Shape& Shape618 =  Shape();
Shape618.setUSE(CString("jointbox"));
Transform617.addChild(&Shape618);

HAnimSegment612.addChild(&Transform617);

HAnimJoint611.addChildren(&HAnimSegment612);

HAnimJoint& HAnimJoint619 =  HAnimJoint();
HAnimJoint619.setDEF(CString("Joe_vc1"));
HAnimJoint619.X3DNode::setName(CString("vc1"));
HAnimJoint619.setCenter(new float[]{0,1.61,-0.015});
HAnimSegment& HAnimSegment620 =  HAnimSegment();
HAnimSegment620.setDEF(CString("Joe_c1"));
HAnimSegment620.X3DNode::setName(CString("c1"));
Shape& Shape621 =  Shape();
Appearance& Appearance622 =  Appearance();
Appearance622.setUSE(CString("SegmentLine"));
Shape621.addChild(&Appearance622);

IndexedLineSet& IndexedLineSet623 =  IndexedLineSet();
IndexedLineSet623.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate624 =  Coordinate();
Coordinate624.setPoint(new float[]{0,1.6144,-0.0034,0,1.63,-0.01}, 6);
IndexedLineSet623.setCoord(&Coordinate624);

Shape621.setGeometry(&IndexedLineSet623);

HAnimSegment620.addChild(&Shape621);

Transform& Transform625 =  Transform();
Transform625.setTranslation(new float[]{0,1.61,-0.015});
Shape& Shape626 =  Shape();
Shape626.setUSE(CString("jointbox"));
Transform625.addChild(&Shape626);

HAnimSegment620.addChild(&Transform625);

HAnimJoint619.addChildren(&HAnimSegment620);

HAnimJoint& HAnimJoint627 =  HAnimJoint();
HAnimJoint627.setDEF(CString("Joe_skullbase"));
HAnimJoint627.X3DNode::setName(CString("skullbase"));
HAnimJoint627.setRotation(new float[]{0,-1,0,0.105595270685895});
HAnimJoint627.setCenter(new float[]{0,1.63,-0.01});
HAnimJoint627.setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimJoint627.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1}, 10);
HAnimSegment& HAnimSegment628 =  HAnimSegment();
HAnimSegment628.setDEF(CString("Joe_skull"));
HAnimSegment628.X3DNode::setName(CString("skull"));
Shape& Shape629 =  Shape();
Appearance& Appearance630 =  Appearance();
Appearance630.setUSE(CString("SegmentLine"));
Shape629.addChild(&Appearance630);

IndexedLineSet& IndexedLineSet631 =  IndexedLineSet();
IndexedLineSet631.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1}, 6);
Coordinate& Coordinate632 =  Coordinate();
Coordinate632.setPoint(new float[]{0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065}, 9);
IndexedLineSet631.setCoord(&Coordinate632);

Shape629.setGeometry(&IndexedLineSet631);

HAnimSegment628.addChild(&Shape629);

Transform& Transform633 =  Transform();
Transform633.setTranslation(new float[]{0,1.63,-0.01});
Shape& Shape634 =  Shape();
Shape634.setUSE(CString("jointbox"));
Transform633.addChild(&Shape634);

HAnimSegment628.addChild(&Transform633);

HAnimSite& HAnimSite635 =  HAnimSite();
HAnimSite635.setDEF(CString("Joe_skull_tip"));
HAnimSite635.X3DNode::setName(CString("skull_tip"));
HAnimSite635.setTranslation(new float[]{0,1.77,0});
Shape& Shape636 =  Shape();
Shape636.setUSE(CString("sitebox"));
HAnimSite635.addChild(&Shape636);

HAnimSegment628.addChild(&HAnimSite635);

HAnimSite& HAnimSite637 =  HAnimSite();
HAnimSite637.setDEF(CString("Joe_sellion"));
HAnimSite637.X3DNode::setName(CString("sellion"));
HAnimSite637.setTranslation(new float[]{0,1.665,0.09});
Shape& Shape638 =  Shape();
Shape638.setUSE(CString("sitebox"));
HAnimSite637.addChild(&Shape638);

HAnimSegment628.addChild(&HAnimSite637);

HAnimSite& HAnimSite639 =  HAnimSite();
HAnimSite639.setDEF(CString("Joe_r_infraorbitale"));
HAnimSite639.X3DNode::setName(CString("r_infraorbitale"));
HAnimSite639.setTranslation(new float[]{-0.033,1.62,0.087});
Shape& Shape640 =  Shape();
Shape640.setUSE(CString("sitebox"));
HAnimSite639.addChild(&Shape640);

HAnimSegment628.addChild(&HAnimSite639);

HAnimSite& HAnimSite641 =  HAnimSite();
HAnimSite641.setDEF(CString("Joe_l_infraorbitale"));
HAnimSite641.X3DNode::setName(CString("l_infraorbitale"));
HAnimSite641.setTranslation(new float[]{0.033,1.62,0.087});
Shape& Shape642 =  Shape();
Shape642.setUSE(CString("sitebox"));
HAnimSite641.addChild(&Shape642);

HAnimSegment628.addChild(&HAnimSite641);

HAnimSite& HAnimSite643 =  HAnimSite();
HAnimSite643.setDEF(CString("Joe_supramenton"));
HAnimSite643.X3DNode::setName(CString("supramenton"));
HAnimSite643.setTranslation(new float[]{0,1.55,0.097});
Shape& Shape644 =  Shape();
Shape644.setUSE(CString("sitebox"));
HAnimSite643.addChild(&Shape644);

HAnimSegment628.addChild(&HAnimSite643);

HAnimSite& HAnimSite645 =  HAnimSite();
HAnimSite645.setDEF(CString("Joe_r_tragion"));
HAnimSite645.X3DNode::setName(CString("r_tragion"));
HAnimSite645.setTranslation(new float[]{-0.077,1.64,-0.01});
Shape& Shape646 =  Shape();
Shape646.setUSE(CString("sitebox"));
HAnimSite645.addChild(&Shape646);

HAnimSegment628.addChild(&HAnimSite645);

HAnimSite& HAnimSite647 =  HAnimSite();
HAnimSite647.setDEF(CString("Joe_r_gonion"));
HAnimSite647.X3DNode::setName(CString("r_gonion"));
HAnimSite647.setTranslation(new float[]{-0.052,1.58,0.015});
Shape& Shape648 =  Shape();
Shape648.setUSE(CString("sitebox"));
HAnimSite647.addChild(&Shape648);

HAnimSegment628.addChild(&HAnimSite647);

HAnimSite& HAnimSite649 =  HAnimSite();
HAnimSite649.setDEF(CString("Joe_l_tragion"));
HAnimSite649.X3DNode::setName(CString("l_tragion"));
HAnimSite649.setTranslation(new float[]{0.077,1.64,-0.01});
Shape& Shape650 =  Shape();
Shape650.setUSE(CString("sitebox"));
HAnimSite649.addChild(&Shape650);

HAnimSegment628.addChild(&HAnimSite649);

HAnimSite& HAnimSite651 =  HAnimSite();
HAnimSite651.setDEF(CString("Joe_l_gonion"));
HAnimSite651.X3DNode::setName(CString("l_gonion"));
HAnimSite651.setTranslation(new float[]{0.0631,1.58,0.015});
Shape& Shape652 =  Shape();
Shape652.setUSE(CString("sitebox"));
HAnimSite651.addChild(&Shape652);

HAnimSegment628.addChild(&HAnimSite651);

HAnimSite& HAnimSite653 =  HAnimSite();
HAnimSite653.setDEF(CString("Joe_nuchale"));
HAnimSite653.X3DNode::setName(CString("nuchale"));
HAnimSite653.setTranslation(new float[]{0,1.625,-0.0925});
Shape& Shape654 =  Shape();
Shape654.setUSE(CString("sitebox"));
HAnimSite653.addChild(&Shape654);

HAnimSegment628.addChild(&HAnimSite653);

HAnimJoint627.addChildren(&HAnimSegment628);

HAnimJoint& HAnimJoint655 =  HAnimJoint();
HAnimJoint655.setDEF(CString("Joe_l_eyeball_joint"));
HAnimJoint655.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint655.setCenter(new float[]{0.034,1.659,0.06});
HAnimSegment& HAnimSegment656 =  HAnimSegment();
HAnimSegment656.setDEF(CString("Joe_l_eyeball"));
HAnimSegment656.X3DNode::setName(CString("l_eyeball"));
Shape& Shape657 =  Shape();
Appearance& Appearance658 =  Appearance();
Appearance658.setUSE(CString("SegmentLine"));
Shape657.addChild(&Appearance658);

IndexedLineSet& IndexedLineSet659 =  IndexedLineSet();
IndexedLineSet659.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate660 =  Coordinate();
Coordinate660.setPoint(new float[]{0.034,1.655,0.065,-0.034,1.655,0.065}, 6);
IndexedLineSet659.setCoord(&Coordinate660);

Shape657.setGeometry(&IndexedLineSet659);

HAnimSegment656.addChild(&Shape657);

Transform& Transform661 =  Transform();
Transform661.setTranslation(new float[]{0.034,1.655,0.065});
Transform661.setScale(new float[]{1,1,1.4});
Shape& Shape662 =  Shape();
Shape662.setUSE(CString("jointbox"));
Transform661.addChild(&Shape662);

HAnimSegment656.addChild(&Transform661);

HAnimJoint655.addChildren(&HAnimSegment656);

HAnimJoint627.addChildren(&HAnimJoint655);

HAnimJoint& HAnimJoint663 =  HAnimJoint();
HAnimJoint663.setDEF(CString("Joe_r_eyeball_joint"));
HAnimJoint663.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint663.setCenter(new float[]{-0.034,1.659,0.06});
HAnimSegment& HAnimSegment664 =  HAnimSegment();
HAnimSegment664.setDEF(CString("Joe_r_eyeball"));
HAnimSegment664.X3DNode::setName(CString("r_eyeball"));
Shape& Shape665 =  Shape();
Appearance& Appearance666 =  Appearance();
Appearance666.setUSE(CString("SegmentLine"));
Shape665.addChild(&Appearance666);

IndexedLineSet& IndexedLineSet667 =  IndexedLineSet();
IndexedLineSet667.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate668 =  Coordinate();
Coordinate668.setPoint(new float[]{0.034,1.655,0.065,-0.034,1.655,0.065}, 6);
IndexedLineSet667.setCoord(&Coordinate668);

Shape665.setGeometry(&IndexedLineSet667);

HAnimSegment664.addChild(&Shape665);

Transform& Transform669 =  Transform();
Transform669.setTranslation(new float[]{-0.034,1.655,0.065});
Transform669.setScale(new float[]{1,1,1.4});
Shape& Shape670 =  Shape();
Shape670.setUSE(CString("jointbox"));
Transform669.addChild(&Shape670);

HAnimSegment664.addChild(&Transform669);

HAnimJoint663.addChildren(&HAnimSegment664);

HAnimJoint627.addChildren(&HAnimJoint663);

HAnimJoint619.addChildren(&HAnimJoint627);

HAnimJoint611.addChildren(&HAnimJoint619);

HAnimJoint603.addChildren(&HAnimJoint611);

HAnimJoint595.addChildren(&HAnimJoint603);

HAnimJoint587.addChildren(&HAnimJoint595);

HAnimJoint579.addChildren(&HAnimJoint587);

HAnimJoint567.addChildren(&HAnimJoint579);

HAnimJoint555.addChildren(&HAnimJoint567);

HAnimJoint& HAnimJoint671 =  HAnimJoint();
HAnimJoint671.setDEF(CString("Joe_l_sternoclavicular"));
HAnimJoint671.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint671.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimJoint671.setSkinCoordIndex(new int32_t[]{12}, 1);
HAnimJoint671.setSkinCoordWeight(new float[]{1}, 1);
HAnimSegment& HAnimSegment672 =  HAnimSegment();
HAnimSegment672.setDEF(CString("Joe_l_clavicle"));
HAnimSegment672.X3DNode::setName(CString("l_clavicle"));
Shape& Shape673 =  Shape();
Appearance& Appearance674 =  Appearance();
Appearance674.setUSE(CString("SegmentLine"));
Shape673.addChild(&Appearance674);

IndexedLineSet& IndexedLineSet675 =  IndexedLineSet();
IndexedLineSet675.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate676 =  Coordinate();
Coordinate676.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
IndexedLineSet675.setCoord(&Coordinate676);

Shape673.setGeometry(&IndexedLineSet675);

HAnimSegment672.addChild(&Shape673);

Transform& Transform677 =  Transform();
Transform677.setTranslation(new float[]{0.082,1.4488,-0.0353});
Shape& Shape678 =  Shape();
Shape678.setUSE(CString("jointbox"));
Transform677.addChild(&Shape678);

HAnimSegment672.addChild(&Transform677);

HAnimSite& HAnimSite679 =  HAnimSite();
HAnimSite679.setDEF(CString("Joe_l_clavicale"));
HAnimSite679.X3DNode::setName(CString("l_clavicale"));
HAnimSite679.setTranslation(new float[]{0.03,1.46,0.035});
Shape& Shape680 =  Shape();
Shape680.setUSE(CString("sitebox"));
HAnimSite679.addChild(&Shape680);

HAnimSegment672.addChild(&HAnimSite679);

HAnimJoint671.addChildren(&HAnimSegment672);

HAnimJoint& HAnimJoint681 =  HAnimJoint();
HAnimJoint681.setDEF(CString("Joe_l_acromioclavicular"));
HAnimJoint681.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint681.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimJoint681.setSkinCoordIndex(new int32_t[]{79}, 1);
HAnimJoint681.setSkinCoordWeight(new float[]{1}, 1);
HAnimSegment& HAnimSegment682 =  HAnimSegment();
HAnimSegment682.setDEF(CString("Joe_l_scapula"));
HAnimSegment682.X3DNode::setName(CString("l_scapula"));
Shape& Shape683 =  Shape();
Appearance& Appearance684 =  Appearance();
Appearance684.setUSE(CString("SegmentLine"));
Shape683.addChild(&Appearance684);

IndexedLineSet& IndexedLineSet685 =  IndexedLineSet();
IndexedLineSet685.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate686 =  Coordinate();
Coordinate686.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2,1.44,-0.04}, 6);
IndexedLineSet685.setCoord(&Coordinate686);

Shape683.setGeometry(&IndexedLineSet685);

HAnimSegment682.addChild(&Shape683);

Transform& Transform687 =  Transform();
Transform687.setTranslation(new float[]{0.0962,1.4269,-0.0424});
Shape& Shape688 =  Shape();
Shape688.setUSE(CString("jointbox"));
Transform687.addChild(&Shape688);

HAnimSegment682.addChild(&Transform687);

Transform& Transform689 =  Transform();
Transform689.setTranslation(new float[]{0.11,1.427,-0.1375});
Shape& Shape690 =  Shape();
Shape690.setUSE(CString("skinsphere"));
Transform689.addChild(&Shape690);

HAnimSegment682.addChild(&Transform689);

HAnimSite& HAnimSite691 =  HAnimSite();
HAnimSite691.setDEF(CString("Joe_l_acromion"));
HAnimSite691.X3DNode::setName(CString("l_acromion"));
HAnimSite691.setTranslation(new float[]{0.175,1.4825,-0.06});
Shape& Shape692 =  Shape();
Shape692.setUSE(CString("sitebox"));
HAnimSite691.addChild(&Shape692);

HAnimSegment682.addChild(&HAnimSite691);

HAnimSite& HAnimSite693 =  HAnimSite();
HAnimSite693.setDEF(CString("Joe_l_axilla_ant"));
HAnimSite693.X3DNode::setName(CString("l_axilla_ant"));
HAnimSite693.setTranslation(new float[]{0.17,1.38,0.007});
Shape& Shape694 =  Shape();
Shape694.setUSE(CString("sitebox"));
HAnimSite693.addChild(&Shape694);

HAnimSegment682.addChild(&HAnimSite693);

HAnimSite& HAnimSite695 =  HAnimSite();
HAnimSite695.setDEF(CString("Joe_l_axilla_post"));
HAnimSite695.X3DNode::setName(CString("l_axilla_post"));
HAnimSite695.setTranslation(new float[]{0.16,1.38,-0.125});
Shape& Shape696 =  Shape();
Shape696.setUSE(CString("sitebox"));
HAnimSite695.addChild(&Shape696);

HAnimSegment682.addChild(&HAnimSite695);

HAnimJoint681.addChildren(&HAnimSegment682);

HAnimJoint& HAnimJoint697 =  HAnimJoint();
HAnimJoint697.setDEF(CString("Joe_l_shoulder"));
HAnimJoint697.X3DNode::setName(CString("l_shoulder"));
HAnimJoint697.setRotation(new float[]{0.978440403355312,0,0.206529361307055,0.207668332501419});
HAnimJoint697.setCenter(new float[]{0.2,1.44,-0.04});
HAnimJoint697.setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
HAnimJoint697.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment698 =  HAnimSegment();
HAnimSegment698.setDEF(CString("Joe_l_upperarm"));
HAnimSegment698.X3DNode::setName(CString("l_upperarm"));
Shape& Shape699 =  Shape();
Appearance& Appearance700 =  Appearance();
Appearance700.setUSE(CString("SegmentLine"));
Shape699.addChild(&Appearance700);

IndexedLineSet& IndexedLineSet701 =  IndexedLineSet();
IndexedLineSet701.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate702 =  Coordinate();
Coordinate702.setPoint(new float[]{0.2029,1.44,-0.0387,0.2,1.1388,-0.04}, 6);
IndexedLineSet701.setCoord(&Coordinate702);

Shape699.setGeometry(&IndexedLineSet701);

HAnimSegment698.addChild(&Shape699);

Transform& Transform703 =  Transform();
Transform703.setTranslation(new float[]{0.2,1.44,-0.04});
Shape& Shape704 =  Shape();
Shape704.setUSE(CString("jointbox"));
Transform703.addChild(&Shape704);

HAnimSegment698.addChild(&Transform703);

Transform& Transform705 =  Transform();
Transform705.setTranslation(new float[]{0.235,1.42,-0.0625});
Shape& Shape706 =  Shape();
Shape706.setUSE(CString("skinsphere"));
Transform705.addChild(&Shape706);

HAnimSegment698.addChild(&Transform705);

Transform& Transform707 =  Transform();
Transform707.setTranslation(new float[]{0.25,1.27,-0.04});
Shape& Shape708 =  Shape();
Shape708.setUSE(CString("skinsphere"));
Transform707.addChild(&Shape708);

HAnimSegment698.addChild(&Transform707);

Transform& Transform709 =  Transform();
Transform709.setTranslation(new float[]{0.17,1.27,-0.04});
Shape& Shape710 =  Shape();
Shape710.setUSE(CString("skinsphere"));
Transform709.addChild(&Shape710);

HAnimSegment698.addChild(&Transform709);

Transform& Transform711 =  Transform();
Transform711.setTranslation(new float[]{0.2,1.27,-0.09});
Shape& Shape712 =  Shape();
Shape712.setUSE(CString("skinsphere"));
Transform711.addChild(&Shape712);

HAnimSegment698.addChild(&Transform711);

Transform& Transform713 =  Transform();
Transform713.setTranslation(new float[]{0.2,1.27,0.02});
Shape& Shape714 =  Shape();
Shape714.setUSE(CString("skinsphere"));
Transform713.addChild(&Shape714);

HAnimSegment698.addChild(&Transform713);

HAnimSite& HAnimSite715 =  HAnimSite();
HAnimSite715.setDEF(CString("Joe_l_humeral_medial_epicn"));
HAnimSite715.X3DNode::setName(CString("l_humeral_medial_epicn"));
HAnimSite715.setTranslation(new float[]{0.165,1.1388,-0.04});
Shape& Shape716 =  Shape();
Shape716.setUSE(CString("sitebox"));
HAnimSite715.addChild(&Shape716);

HAnimSegment698.addChild(&HAnimSite715);

HAnimSite& HAnimSite717 =  HAnimSite();
HAnimSite717.setDEF(CString("Joe_l_radiale"));
HAnimSite717.X3DNode::setName(CString("l_radiale"));
HAnimSite717.setTranslation(new float[]{0.23,1.133,-0.055});
Shape& Shape718 =  Shape();
Shape718.setUSE(CString("sitebox"));
HAnimSite717.addChild(&Shape718);

HAnimSegment698.addChild(&HAnimSite717);

HAnimSite& HAnimSite719 =  HAnimSite();
HAnimSite719.setDEF(CString("Joe_l_humeral_lateral_epicn"));
HAnimSite719.X3DNode::setName(CString("l_humeral_lateral_epicn"));
HAnimSite719.setTranslation(new float[]{0.244,1.1388,-0.04});
Shape& Shape720 =  Shape();
Shape720.setUSE(CString("sitebox"));
HAnimSite719.addChild(&Shape720);

HAnimSegment698.addChild(&HAnimSite719);

HAnimJoint697.addChildren(&HAnimSegment698);

HAnimJoint& HAnimJoint721 =  HAnimJoint();
HAnimJoint721.setDEF(CString("Joe_l_elbow"));
HAnimJoint721.X3DNode::setName(CString("l_elbow"));
HAnimJoint721.setRotation(new float[]{-0.999999999999982,0,0,0.139356882713934});
HAnimJoint721.setCenter(new float[]{0.2,1.1388,-0.04});
HAnimJoint721.setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
HAnimJoint721.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 15);
HAnimSegment& HAnimSegment722 =  HAnimSegment();
HAnimSegment722.setDEF(CString("Joe_l_forearm"));
HAnimSegment722.X3DNode::setName(CString("l_forearm"));
Shape& Shape723 =  Shape();
Appearance& Appearance724 =  Appearance();
Appearance724.setUSE(CString("SegmentLine"));
Shape723.addChild(&Appearance724);

IndexedLineSet& IndexedLineSet725 =  IndexedLineSet();
IndexedLineSet725.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate726 =  Coordinate();
Coordinate726.setPoint(new float[]{0.2,1.1388,-0.04,0.2,0.87,-0.04}, 6);
IndexedLineSet725.setCoord(&Coordinate726);

Shape723.setGeometry(&IndexedLineSet725);

HAnimSegment722.addChild(&Shape723);

Transform& Transform727 =  Transform();
Transform727.setTranslation(new float[]{0.2,1.1388,-0.04});
Shape& Shape728 =  Shape();
Shape728.setUSE(CString("jointbox"));
Transform727.addChild(&Shape728);

HAnimSegment722.addChild(&Transform727);

Transform& Transform729 =  Transform();
Transform729.setTranslation(new float[]{0.2,1.1388,-0.013});
Shape& Shape730 =  Shape();
Shape730.setUSE(CString("skinsphere"));
Transform729.addChild(&Shape730);

HAnimSegment722.addChild(&Transform729);

Transform& Transform731 =  Transform();
Transform731.setTranslation(new float[]{0.225,1,-0.01});
Shape& Shape732 =  Shape();
Shape732.setUSE(CString("skinsphere"));
Transform731.addChild(&Shape732);

HAnimSegment722.addChild(&Transform731);

Transform& Transform733 =  Transform();
Transform733.setTranslation(new float[]{0.225,1,-0.07});
Shape& Shape734 =  Shape();
Shape734.setUSE(CString("skinsphere"));
Transform733.addChild(&Shape734);

HAnimSegment722.addChild(&Transform733);

Transform& Transform735 =  Transform();
Transform735.setTranslation(new float[]{0.185,1,-0.01});
Shape& Shape736 =  Shape();
Shape736.setUSE(CString("skinsphere"));
Transform735.addChild(&Shape736);

HAnimSegment722.addChild(&Transform735);

Transform& Transform737 =  Transform();
Transform737.setTranslation(new float[]{0.185,1,-0.07});
Shape& Shape738 =  Shape();
Shape738.setUSE(CString("skinsphere"));
Transform737.addChild(&Shape738);

HAnimSegment722.addChild(&Transform737);

HAnimSite& HAnimSite739 =  HAnimSite();
HAnimSite739.setDEF(CString("Joe_l_radial_styloid"));
HAnimSite739.X3DNode::setName(CString("l_radial_styloid"));
HAnimSite739.setTranslation(new float[]{0.1901,0.8645,-0.0415});
Shape& Shape740 =  Shape();
Shape740.setUSE(CString("sitebox"));
HAnimSite739.addChild(&Shape740);

HAnimSegment722.addChild(&HAnimSite739);

HAnimSite& HAnimSite741 =  HAnimSite();
HAnimSite741.setDEF(CString("Joe_l_olecranon"));
HAnimSite741.X3DNode::setName(CString("l_olecranon"));
HAnimSite741.setTranslation(new float[]{0.2,1.1388,-0.08});
Shape& Shape742 =  Shape();
Shape742.setUSE(CString("sitebox"));
HAnimSite741.addChild(&Shape742);

HAnimSegment722.addChild(&HAnimSite741);

HAnimJoint721.addChildren(&HAnimSegment722);

HAnimJoint& HAnimJoint743 =  HAnimJoint();
HAnimJoint743.setDEF(CString("Joe_l_wrist"));
HAnimJoint743.X3DNode::setName(CString("l_wrist"));
HAnimJoint743.setRotation(new float[]{-0.0686990484698033,-0.996963540991216,0.0366624968270793,0.495650570003821});
HAnimJoint743.setCenter(new float[]{0.2,0.87,-0.04});
HAnimJoint743.setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
HAnimJoint743.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment744 =  HAnimSegment();
HAnimSegment744.setDEF(CString("Joe_l_hand"));
HAnimSegment744.X3DNode::setName(CString("l_hand"));
Shape& Shape745 =  Shape();
Appearance& Appearance746 =  Appearance();
Appearance746.setUSE(CString("SegmentLine"));
Shape745.addChild(&Appearance746);

IndexedLineSet& IndexedLineSet747 =  IndexedLineSet();
IndexedLineSet747.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1}, 15);
Coordinate& Coordinate748 =  Coordinate();
Coordinate748.setPoint(new float[]{0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036}, 18);
IndexedLineSet747.setCoord(&Coordinate748);

Shape745.setGeometry(&IndexedLineSet747);

HAnimSegment744.addChild(&Shape745);

Transform& Transform749 =  Transform();
Transform749.setTranslation(new float[]{0.2,0.87,-0.04});
Shape& Shape750 =  Shape();
Shape750.setUSE(CString("jointbox"));
Transform749.addChild(&Shape750);

HAnimSegment744.addChild(&Transform749);

HAnimSite& HAnimSite751 =  HAnimSite();
HAnimSite751.setDEF(CString("Joe_l_metacarpal_pha2"));
HAnimSite751.X3DNode::setName(CString("l_metacarpal_pha2"));
HAnimSite751.setTranslation(new float[]{0.2009,0.8139,-0.0237});
Shape& Shape752 =  Shape();
Shape752.setUSE(CString("sitebox"));
HAnimSite751.addChild(&Shape752);

HAnimSegment744.addChild(&HAnimSite751);

HAnimSite& HAnimSite753 =  HAnimSite();
HAnimSite753.setDEF(CString("Joe_l_ulnar_styloid"));
HAnimSite753.X3DNode::setName(CString("l_ulnar_styloid"));
HAnimSite753.setTranslation(new float[]{0.2142,0.8529,-0.0648});
Shape& Shape754 =  Shape();
Shape754.setUSE(CString("sitebox"));
HAnimSite753.addChild(&Shape754);

HAnimSegment744.addChild(&HAnimSite753);

HAnimSite& HAnimSite755 =  HAnimSite();
HAnimSite755.setDEF(CString("Joe_l_metacarpal_pha5"));
HAnimSite755.X3DNode::setName(CString("l_metacarpal_pha5"));
HAnimSite755.setTranslation(new float[]{0.1929,0.786,-0.1122});
Shape& Shape756 =  Shape();
Shape756.setUSE(CString("sitebox"));
HAnimSite755.addChild(&Shape756);

HAnimSegment744.addChild(&HAnimSite755);

HAnimJoint743.addChildren(&HAnimSegment744);

HAnimJoint& HAnimJoint757 =  HAnimJoint();
HAnimJoint757.setDEF(CString("Joe_l_thumb1"));
HAnimJoint757.X3DNode::setName(CString("l_thumb1"));
HAnimJoint757.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimJoint757.setSkinCoordIndex(new int32_t[]{127,128}, 2);
HAnimJoint757.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment758 =  HAnimSegment();
HAnimSegment758.setDEF(CString("Joe_l_thumb_metacarpal"));
HAnimSegment758.X3DNode::setName(CString("l_thumb_metacarpal"));
Shape& Shape759 =  Shape();
Appearance& Appearance760 =  Appearance();
Appearance760.setUSE(CString("SegmentLine"));
Shape759.addChild(&Appearance760);

IndexedLineSet& IndexedLineSet761 =  IndexedLineSet();
IndexedLineSet761.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate762 =  Coordinate();
Coordinate762.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
IndexedLineSet761.setCoord(&Coordinate762);

Shape759.setGeometry(&IndexedLineSet761);

HAnimSegment758.addChild(&Shape759);

Transform& Transform763 =  Transform();
Transform763.setTranslation(new float[]{0.1924,0.8472,-0.0534});
Shape& Shape764 =  Shape();
Shape764.setUSE(CString("jointbox"));
Transform763.addChild(&Shape764);

HAnimSegment758.addChild(&Transform763);

HAnimJoint757.addChildren(&HAnimSegment758);

HAnimJoint& HAnimJoint765 =  HAnimJoint();
HAnimJoint765.setDEF(CString("Joe_l_thumb2"));
HAnimJoint765.X3DNode::setName(CString("l_thumb2"));
HAnimJoint765.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimJoint765.setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
HAnimJoint765.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1}, 6);
HAnimSegment& HAnimSegment766 =  HAnimSegment();
HAnimSegment766.setDEF(CString("Joe_l_thumb_proximal"));
HAnimSegment766.X3DNode::setName(CString("l_thumb_distal"));
Shape& Shape767 =  Shape();
Appearance& Appearance768 =  Appearance();
Appearance768.setUSE(CString("SegmentLine"));
Shape767.addChild(&Appearance768);

IndexedLineSet& IndexedLineSet769 =  IndexedLineSet();
IndexedLineSet769.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate770 =  Coordinate();
Coordinate770.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
IndexedLineSet769.setCoord(&Coordinate770);

Shape767.setGeometry(&IndexedLineSet769);

HAnimSegment766.addChild(&Shape767);

Transform& Transform771 =  Transform();
Transform771.setTranslation(new float[]{0.1951,0.8226,0.0246});
Shape& Shape772 =  Shape();
Shape772.setUSE(CString("jointbox"));
Transform771.addChild(&Shape772);

HAnimSegment766.addChild(&Transform771);

HAnimJoint765.addChildren(&HAnimSegment766);

HAnimJoint& HAnimJoint773 =  HAnimJoint();
HAnimJoint773.setDEF(CString("Joe_l_thumb3"));
HAnimJoint773.X3DNode::setName(CString("l_thumb3"));
HAnimJoint773.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint773.setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
HAnimJoint773.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment774 =  HAnimSegment();
HAnimSegment774.setDEF(CString("Joe_l_thumb_distal"));
HAnimSegment774.X3DNode::setName(CString("l_thumb_distal"));
Shape& Shape775 =  Shape();
Appearance& Appearance776 =  Appearance();
Appearance776.setUSE(CString("SegmentLine"));
Shape775.addChild(&Appearance776);

IndexedLineSet& IndexedLineSet777 =  IndexedLineSet();
IndexedLineSet777.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate778 =  Coordinate();
Coordinate778.setPoint(new float[]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759}, 6);
IndexedLineSet777.setCoord(&Coordinate778);

Shape775.setGeometry(&IndexedLineSet777);

HAnimSegment774.addChild(&Shape775);

Transform& Transform779 =  Transform();
Transform779.setTranslation(new float[]{0.1955,0.8159,0.0464});
Shape& Shape780 =  Shape();
Shape780.setUSE(CString("jointbox"));
Transform779.addChild(&Shape780);

HAnimSegment774.addChild(&Transform779);

HAnimSite& HAnimSite781 =  HAnimSite();
HAnimSite781.setDEF(CString("Joe_l_thumb_distal_tip"));
HAnimSite781.X3DNode::setName(CString("l_thumb_distal_tip"));
HAnimSite781.setTranslation(new float[]{0.1982,0.8061,0.0759});
Shape& Shape782 =  Shape();
Shape782.setUSE(CString("sitebox"));
HAnimSite781.addChild(&Shape782);

HAnimSegment774.addChild(&HAnimSite781);

HAnimJoint773.addChildren(&HAnimSegment774);

HAnimJoint765.addChildren(&HAnimJoint773);

HAnimJoint757.addChildren(&HAnimJoint765);

HAnimJoint743.addChildren(&HAnimJoint757);

HAnimJoint& HAnimJoint783 =  HAnimJoint();
HAnimJoint783.setDEF(CString("Joe_l_index0"));
HAnimJoint783.X3DNode::setName(CString("l_index0"));
HAnimJoint783.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimJoint783.setSkinCoordIndex(new int32_t[]{129,130}, 2);
HAnimJoint783.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment784 =  HAnimSegment();
HAnimSegment784.setDEF(CString("Joe_l_index_metacarpal"));
HAnimSegment784.X3DNode::setName(CString("l_index_metacarpal"));
Shape& Shape785 =  Shape();
Appearance& Appearance786 =  Appearance();
Appearance786.setUSE(CString("SegmentLine"));
Shape785.addChild(&Appearance786);

IndexedLineSet& IndexedLineSet787 =  IndexedLineSet();
IndexedLineSet787.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate788 =  Coordinate();
Coordinate788.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
IndexedLineSet787.setCoord(&Coordinate788);

Shape785.setGeometry(&IndexedLineSet787);

HAnimSegment784.addChild(&Shape785);

Transform& Transform789 =  Transform();
Transform789.setTranslation(new float[]{0.1983,0.8024,-0.028});
Shape& Shape790 =  Shape();
Shape790.setUSE(CString("jointbox"));
Transform789.addChild(&Shape790);

HAnimSegment784.addChild(&Transform789);

HAnimJoint783.addChildren(&HAnimSegment784);

HAnimJoint& HAnimJoint791 =  HAnimJoint();
HAnimJoint791.setDEF(CString("Joe_l_index1"));
HAnimJoint791.X3DNode::setName(CString("l_index1"));
HAnimJoint791.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimJoint791.setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
HAnimJoint791.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimSegment& HAnimSegment792 =  HAnimSegment();
HAnimSegment792.setDEF(CString("Joe_l_index_proximal"));
HAnimSegment792.X3DNode::setName(CString("l_index_proximal"));
Shape& Shape793 =  Shape();
Appearance& Appearance794 =  Appearance();
Appearance794.setUSE(CString("SegmentLine"));
Shape793.addChild(&Appearance794);

IndexedLineSet& IndexedLineSet795 =  IndexedLineSet();
IndexedLineSet795.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate796 =  Coordinate();
Coordinate796.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
IndexedLineSet795.setCoord(&Coordinate796);

Shape793.setGeometry(&IndexedLineSet795);

HAnimSegment792.addChild(&Shape793);

Transform& Transform797 =  Transform();
Transform797.setTranslation(new float[]{0.1983,0.7815,-0.028});
Shape& Shape798 =  Shape();
Shape798.setUSE(CString("jointbox"));
Transform797.addChild(&Shape798);

HAnimSegment792.addChild(&Transform797);

HAnimJoint791.addChildren(&HAnimSegment792);

HAnimJoint& HAnimJoint799 =  HAnimJoint();
HAnimJoint799.setDEF(CString("Joe_l_index2"));
HAnimJoint799.X3DNode::setName(CString("l_index2"));
HAnimJoint799.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimJoint799.setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
HAnimJoint799.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment800 =  HAnimSegment();
HAnimSegment800.setDEF(CString("Joe_l_index_middle"));
HAnimSegment800.X3DNode::setName(CString("l_index_middle"));
Shape& Shape801 =  Shape();
Appearance& Appearance802 =  Appearance();
Appearance802.setUSE(CString("SegmentLine"));
Shape801.addChild(&Appearance802);

IndexedLineSet& IndexedLineSet803 =  IndexedLineSet();
IndexedLineSet803.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate804 =  Coordinate();
Coordinate804.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
IndexedLineSet803.setCoord(&Coordinate804);

Shape801.setGeometry(&IndexedLineSet803);

HAnimSegment800.addChild(&Shape801);

Transform& Transform805 =  Transform();
Transform805.setTranslation(new float[]{0.2017,0.7363,-0.0248});
Shape& Shape806 =  Shape();
Shape806.setUSE(CString("jointbox"));
Transform805.addChild(&Shape806);

HAnimSegment800.addChild(&Transform805);

HAnimJoint799.addChildren(&HAnimSegment800);

HAnimJoint& HAnimJoint807 =  HAnimJoint();
HAnimJoint807.setDEF(CString("Joe_l_index3"));
HAnimJoint807.X3DNode::setName(CString("l_index3"));
HAnimJoint807.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint807.setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
HAnimJoint807.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment808 =  HAnimSegment();
HAnimSegment808.setDEF(CString("Joe_l_index_distal"));
HAnimSegment808.X3DNode::setName(CString("l_index_distal"));
Shape& Shape809 =  Shape();
Appearance& Appearance810 =  Appearance();
Appearance810.setUSE(CString("SegmentLine"));
Shape809.addChild(&Appearance810);

IndexedLineSet& IndexedLineSet811 =  IndexedLineSet();
IndexedLineSet811.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate812 =  Coordinate();
Coordinate812.setPoint(new float[]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245}, 6);
IndexedLineSet811.setCoord(&Coordinate812);

Shape809.setGeometry(&IndexedLineSet811);

HAnimSegment808.addChild(&Shape809);

Transform& Transform813 =  Transform();
Transform813.setTranslation(new float[]{0.2028,0.7139,-0.0236});
Shape& Shape814 =  Shape();
Shape814.setUSE(CString("jointbox"));
Transform813.addChild(&Shape814);

HAnimSegment808.addChild(&Transform813);

HAnimSite& HAnimSite815 =  HAnimSite();
HAnimSite815.setDEF(CString("Joe_l_index_distal_tip"));
HAnimSite815.X3DNode::setName(CString("l_index_distal_tip"));
HAnimSite815.setTranslation(new float[]{0.2089,0.6858,-0.0245});
Shape& Shape816 =  Shape();
Shape816.setUSE(CString("sitebox"));
HAnimSite815.addChild(&Shape816);

HAnimSegment808.addChild(&HAnimSite815);

HAnimSite& HAnimSite817 =  HAnimSite();
HAnimSite817.setDEF(CString("Joe_l_dactylion"));
HAnimSite817.X3DNode::setName(CString("l_dactylion"));
HAnimSite817.setTranslation(new float[]{0.2056,0.6743,-0.0482});
Shape& Shape818 =  Shape();
Shape818.setUSE(CString("sitebox"));
HAnimSite817.addChild(&Shape818);

HAnimSegment808.addChild(&HAnimSite817);

HAnimJoint807.addChildren(&HAnimSegment808);

HAnimJoint799.addChildren(&HAnimJoint807);

HAnimJoint791.addChildren(&HAnimJoint799);

HAnimJoint783.addChildren(&HAnimJoint791);

HAnimJoint743.addChildren(&HAnimJoint783);

HAnimJoint& HAnimJoint819 =  HAnimJoint();
HAnimJoint819.setDEF(CString("Joe_l_middle0"));
HAnimJoint819.X3DNode::setName(CString("l_middle0"));
HAnimJoint819.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimJoint819.setSkinCoordIndex(new int32_t[]{131,132}, 2);
HAnimJoint819.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment820 =  HAnimSegment();
HAnimSegment820.setDEF(CString("Joe_l_middle_metacarpal"));
HAnimSegment820.X3DNode::setName(CString("l_middle_metacarpal"));
Shape& Shape821 =  Shape();
Appearance& Appearance822 =  Appearance();
Appearance822.setUSE(CString("SegmentLine"));
Shape821.addChild(&Appearance822);

IndexedLineSet& IndexedLineSet823 =  IndexedLineSet();
IndexedLineSet823.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate824 =  Coordinate();
Coordinate824.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
IndexedLineSet823.setCoord(&Coordinate824);

Shape821.setGeometry(&IndexedLineSet823);

HAnimSegment820.addChild(&Shape821);

Transform& Transform825 =  Transform();
Transform825.setTranslation(new float[]{0.1987,0.8029,-0.053});
Shape& Shape826 =  Shape();
Shape826.setUSE(CString("jointbox"));
Transform825.addChild(&Shape826);

HAnimSegment820.addChild(&Transform825);

HAnimJoint819.addChildren(&HAnimSegment820);

HAnimJoint& HAnimJoint827 =  HAnimJoint();
HAnimJoint827.setDEF(CString("Joe_l_middle1"));
HAnimJoint827.X3DNode::setName(CString("l_middle1"));
HAnimJoint827.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimJoint827.setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
HAnimJoint827.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimSegment& HAnimSegment828 =  HAnimSegment();
HAnimSegment828.setDEF(CString("Joe_l_middle_proximal"));
HAnimSegment828.X3DNode::setName(CString("l_middle_proximal"));
Shape& Shape829 =  Shape();
Appearance& Appearance830 =  Appearance();
Appearance830.setUSE(CString("SegmentLine"));
Shape829.addChild(&Appearance830);

IndexedLineSet& IndexedLineSet831 =  IndexedLineSet();
IndexedLineSet831.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate832 =  Coordinate();
Coordinate832.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
IndexedLineSet831.setCoord(&Coordinate832);

Shape829.setGeometry(&IndexedLineSet831);

HAnimSegment828.addChild(&Shape829);

Transform& Transform833 =  Transform();
Transform833.setTranslation(new float[]{0.1987,0.7818,-0.053});
Shape& Shape834 =  Shape();
Shape834.setUSE(CString("jointbox"));
Transform833.addChild(&Shape834);

HAnimSegment828.addChild(&Transform833);

HAnimJoint827.addChildren(&HAnimSegment828);

HAnimJoint& HAnimJoint835 =  HAnimJoint();
HAnimJoint835.setDEF(CString("Joe_l_middle2"));
HAnimJoint835.X3DNode::setName(CString("l_middle2"));
HAnimJoint835.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimJoint835.setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
HAnimJoint835.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment836 =  HAnimSegment();
HAnimSegment836.setDEF(CString("Joe_l_middle_middle"));
HAnimSegment836.X3DNode::setName(CString("l_middle_middle"));
Shape& Shape837 =  Shape();
Appearance& Appearance838 =  Appearance();
Appearance838.setUSE(CString("SegmentLine"));
Shape837.addChild(&Appearance838);

IndexedLineSet& IndexedLineSet839 =  IndexedLineSet();
IndexedLineSet839.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate840 =  Coordinate();
Coordinate840.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
IndexedLineSet839.setCoord(&Coordinate840);

Shape837.setGeometry(&IndexedLineSet839);

HAnimSegment836.addChild(&Shape837);

Transform& Transform841 =  Transform();
Transform841.setTranslation(new float[]{0.2013,0.7273,-0.0503});
Shape& Shape842 =  Shape();
Shape842.setUSE(CString("jointbox"));
Transform841.addChild(&Shape842);

HAnimSegment836.addChild(&Transform841);

HAnimJoint835.addChildren(&HAnimSegment836);

HAnimJoint& HAnimJoint843 =  HAnimJoint();
HAnimJoint843.setDEF(CString("Joe_l_middle3"));
HAnimJoint843.X3DNode::setName(CString("l_middle3"));
HAnimJoint843.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint843.setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
HAnimJoint843.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment844 =  HAnimSegment();
HAnimSegment844.setDEF(CString("Joe_l_middle_distal"));
HAnimSegment844.X3DNode::setName(CString("l_middle_distal"));
Shape& Shape845 =  Shape();
Appearance& Appearance846 =  Appearance();
Appearance846.setUSE(CString("SegmentLine"));
Shape845.addChild(&Appearance846);

IndexedLineSet& IndexedLineSet847 =  IndexedLineSet();
IndexedLineSet847.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate848 =  Coordinate();
Coordinate848.setPoint(new float[]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491}, 6);
IndexedLineSet847.setCoord(&Coordinate848);

Shape845.setGeometry(&IndexedLineSet847);

HAnimSegment844.addChild(&Shape845);

HAnimSite& HAnimSite849 =  HAnimSite();
HAnimSite849.setDEF(CString("Joe_l_middle_distal_tip"));
HAnimSite849.X3DNode::setName(CString("l_middle_distal_tip"));
HAnimSite849.setTranslation(new float[]{0.208,0.6731,-0.0491});
Shape& Shape850 =  Shape();
Shape850.setUSE(CString("sitebox"));
HAnimSite849.addChild(&Shape850);

HAnimSegment844.addChild(&HAnimSite849);

Transform& Transform851 =  Transform();
Transform851.setTranslation(new float[]{0.2026,0.7011,-0.0494});
Shape& Shape852 =  Shape();
Shape852.setUSE(CString("jointbox"));
Transform851.addChild(&Shape852);

HAnimSegment844.addChild(&Transform851);

HAnimJoint843.addChildren(&HAnimSegment844);

HAnimJoint835.addChildren(&HAnimJoint843);

HAnimJoint827.addChildren(&HAnimJoint835);

HAnimJoint819.addChildren(&HAnimJoint827);

HAnimJoint743.addChildren(&HAnimJoint819);

HAnimJoint& HAnimJoint853 =  HAnimJoint();
HAnimJoint853.setDEF(CString("Joe_l_ring0"));
HAnimJoint853.X3DNode::setName(CString("l_ring0"));
HAnimJoint853.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimJoint853.setSkinCoordIndex(new int32_t[]{133,134}, 2);
HAnimJoint853.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment854 =  HAnimSegment();
HAnimSegment854.setDEF(CString("Joe_l_ring_metacarpal"));
HAnimSegment854.X3DNode::setName(CString("l_ring_metacarpal"));
Shape& Shape855 =  Shape();
Appearance& Appearance856 =  Appearance();
Appearance856.setUSE(CString("SegmentLine"));
Shape855.addChild(&Appearance856);

IndexedLineSet& IndexedLineSet857 =  IndexedLineSet();
IndexedLineSet857.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate858 =  Coordinate();
Coordinate858.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
IndexedLineSet857.setCoord(&Coordinate858);

Shape855.setGeometry(&IndexedLineSet857);

HAnimSegment854.addChild(&Shape855);

Transform& Transform859 =  Transform();
Transform859.setTranslation(new float[]{0.1956,0.8019,-0.0794});
Shape& Shape860 =  Shape();
Shape860.setUSE(CString("jointbox"));
Transform859.addChild(&Shape860);

HAnimSegment854.addChild(&Transform859);

HAnimJoint853.addChildren(&HAnimSegment854);

HAnimJoint& HAnimJoint861 =  HAnimJoint();
HAnimJoint861.setDEF(CString("Joe_l_ring1"));
HAnimJoint861.X3DNode::setName(CString("l_ring1"));
HAnimJoint861.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimJoint861.setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
HAnimJoint861.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimSegment& HAnimSegment862 =  HAnimSegment();
HAnimSegment862.setDEF(CString("Joe_l_ring_proximal"));
HAnimSegment862.X3DNode::setName(CString("l_ring_proximal"));
Shape& Shape863 =  Shape();
Appearance& Appearance864 =  Appearance();
Appearance864.setUSE(CString("SegmentLine"));
Shape863.addChild(&Appearance864);

IndexedLineSet& IndexedLineSet865 =  IndexedLineSet();
IndexedLineSet865.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate866 =  Coordinate();
Coordinate866.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
IndexedLineSet865.setCoord(&Coordinate866);

Shape863.setGeometry(&IndexedLineSet865);

HAnimSegment862.addChild(&Shape863);

Transform& Transform867 =  Transform();
Transform867.setTranslation(new float[]{0.1956,0.7815,-0.0794});
Shape& Shape868 =  Shape();
Shape868.setUSE(CString("jointbox"));
Transform867.addChild(&Shape868);

HAnimSegment862.addChild(&Transform867);

HAnimJoint861.addChildren(&HAnimSegment862);

HAnimJoint& HAnimJoint869 =  HAnimJoint();
HAnimJoint869.setDEF(CString("Joe_l_ring2"));
HAnimJoint869.X3DNode::setName(CString("l_ring2"));
HAnimJoint869.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimJoint869.setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
HAnimJoint869.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment870 =  HAnimSegment();
HAnimSegment870.setDEF(CString("Joe_l_ring_middle"));
HAnimSegment870.X3DNode::setName(CString("l_ring_middle"));
Shape& Shape871 =  Shape();
Appearance& Appearance872 =  Appearance();
Appearance872.setUSE(CString("SegmentLine"));
Shape871.addChild(&Appearance872);

IndexedLineSet& IndexedLineSet873 =  IndexedLineSet();
IndexedLineSet873.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate874 =  Coordinate();
Coordinate874.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
IndexedLineSet873.setCoord(&Coordinate874);

Shape871.setGeometry(&IndexedLineSet873);

HAnimSegment870.addChild(&Shape871);

Transform& Transform875 =  Transform();
Transform875.setTranslation(new float[]{0.1973,0.7287,-0.0777});
Shape& Shape876 =  Shape();
Shape876.setUSE(CString("jointbox"));
Transform875.addChild(&Shape876);

HAnimSegment870.addChild(&Transform875);

HAnimJoint869.addChildren(&HAnimSegment870);

HAnimJoint& HAnimJoint877 =  HAnimJoint();
HAnimJoint877.setDEF(CString("Joe_l_ring3"));
HAnimJoint877.X3DNode::setName(CString("l_ring3"));
HAnimJoint877.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint877.setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
HAnimJoint877.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment878 =  HAnimSegment();
HAnimSegment878.setDEF(CString("Joe_l_ring_distal"));
HAnimSegment878.X3DNode::setName(CString("l_ring_distal"));
Shape& Shape879 =  Shape();
Appearance& Appearance880 =  Appearance();
Appearance880.setUSE(CString("SegmentLine"));
Shape879.addChild(&Appearance880);

IndexedLineSet& IndexedLineSet881 =  IndexedLineSet();
IndexedLineSet881.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate882 =  Coordinate();
Coordinate882.setPoint(new float[]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756}, 6);
IndexedLineSet881.setCoord(&Coordinate882);

Shape879.setGeometry(&IndexedLineSet881);

HAnimSegment878.addChild(&Shape879);

Transform& Transform883 =  Transform();
Transform883.setTranslation(new float[]{0.1983,0.7045,-0.0767});
Shape& Shape884 =  Shape();
Shape884.setUSE(CString("jointbox"));
Transform883.addChild(&Shape884);

HAnimSegment878.addChild(&Transform883);

HAnimSite& HAnimSite885 =  HAnimSite();
HAnimSite885.setDEF(CString("Joe_l_ring_distal_tip"));
HAnimSite885.X3DNode::setName(CString("l_ring_distal_tip"));
HAnimSite885.setTranslation(new float[]{0.2035,0.675,-0.0756});
Shape& Shape886 =  Shape();
Shape886.setUSE(CString("sitebox"));
HAnimSite885.addChild(&Shape886);

HAnimSegment878.addChild(&HAnimSite885);

HAnimJoint877.addChildren(&HAnimSegment878);

HAnimJoint869.addChildren(&HAnimJoint877);

HAnimJoint861.addChildren(&HAnimJoint869);

HAnimJoint853.addChildren(&HAnimJoint861);

HAnimJoint743.addChildren(&HAnimJoint853);

HAnimJoint& HAnimJoint887 =  HAnimJoint();
HAnimJoint887.setDEF(CString("Joe_l_pinky0"));
HAnimJoint887.X3DNode::setName(CString("l_pinky0"));
HAnimJoint887.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimJoint887.setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
HAnimJoint887.setSkinCoordWeight(new float[]{1,1,1,0.5}, 4);
HAnimSegment& HAnimSegment888 =  HAnimSegment();
HAnimSegment888.setDEF(CString("Joe_l_pinky_metacarpal"));
HAnimSegment888.X3DNode::setName(CString("l_pinky_metacarpal"));
Shape& Shape889 =  Shape();
Appearance& Appearance890 =  Appearance();
Appearance890.setUSE(CString("SegmentLine"));
Shape889.addChild(&Appearance890);

IndexedLineSet& IndexedLineSet891 =  IndexedLineSet();
IndexedLineSet891.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate892 =  Coordinate();
Coordinate892.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
IndexedLineSet891.setCoord(&Coordinate892);

Shape889.setGeometry(&IndexedLineSet891);

HAnimSegment888.addChild(&Shape889);

Transform& Transform893 =  Transform();
Transform893.setTranslation(new float[]{0.1925,0.8066,-0.1036});
Shape& Shape894 =  Shape();
Shape894.setUSE(CString("jointbox"));
Transform893.addChild(&Shape894);

HAnimSegment888.addChild(&Transform893);

HAnimJoint887.addChildren(&HAnimSegment888);

HAnimJoint& HAnimJoint895 =  HAnimJoint();
HAnimJoint895.setDEF(CString("Joe_l_pinky1"));
HAnimJoint895.X3DNode::setName(CString("l_pinky1"));
HAnimJoint895.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimJoint895.setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
HAnimJoint895.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimSegment& HAnimSegment896 =  HAnimSegment();
HAnimSegment896.setDEF(CString("Joe_l_pinky_proximal"));
HAnimSegment896.X3DNode::setName(CString("l_pinky_proximal"));
Shape& Shape897 =  Shape();
Appearance& Appearance898 =  Appearance();
Appearance898.setUSE(CString("SegmentLine"));
Shape897.addChild(&Appearance898);

IndexedLineSet& IndexedLineSet899 =  IndexedLineSet();
IndexedLineSet899.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate900 =  Coordinate();
Coordinate900.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
IndexedLineSet899.setCoord(&Coordinate900);

Shape897.setGeometry(&IndexedLineSet899);

HAnimSegment896.addChild(&Shape897);

Transform& Transform901 =  Transform();
Transform901.setTranslation(new float[]{0.1925,0.7866,-0.1036});
Shape& Shape902 =  Shape();
Shape902.setUSE(CString("jointbox"));
Transform901.addChild(&Shape902);

HAnimSegment896.addChild(&Transform901);

HAnimJoint895.addChildren(&HAnimSegment896);

HAnimJoint& HAnimJoint903 =  HAnimJoint();
HAnimJoint903.setDEF(CString("Joe_l_pinky2"));
HAnimJoint903.X3DNode::setName(CString("l_pinky2"));
HAnimJoint903.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimJoint903.setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
HAnimJoint903.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment904 =  HAnimSegment();
HAnimSegment904.setDEF(CString("Joe_l_pinky_middle"));
HAnimSegment904.X3DNode::setName(CString("l_pinky_middle"));
Transform& Transform905 =  Transform();
Transform905.setTranslation(new float[]{0.1938,0.7452,-0.1024});
Shape& Shape906 =  Shape();
Shape906.setUSE(CString("jointbox"));
Transform905.addChild(&Shape906);

HAnimSegment904.addChild(&Transform905);

Shape& Shape907 =  Shape();
Appearance& Appearance908 =  Appearance();
Appearance908.setUSE(CString("SegmentLine"));
Shape907.addChild(&Appearance908);

IndexedLineSet& IndexedLineSet909 =  IndexedLineSet();
IndexedLineSet909.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate910 =  Coordinate();
Coordinate910.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
IndexedLineSet909.setCoord(&Coordinate910);

Shape907.setGeometry(&IndexedLineSet909);

HAnimSegment904.addChild(&Shape907);

HAnimJoint903.addChildren(&HAnimSegment904);

HAnimJoint& HAnimJoint911 =  HAnimJoint();
HAnimJoint911.setDEF(CString("Joe_l_pinky3"));
HAnimJoint911.X3DNode::setName(CString("l_pinky3"));
HAnimJoint911.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint911.setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
HAnimJoint911.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment912 =  HAnimSegment();
HAnimSegment912.setDEF(CString("Joe_l_pinky_distal"));
HAnimSegment912.X3DNode::setName(CString("l_pinky_distal"));
Shape& Shape913 =  Shape();
Appearance& Appearance914 =  Appearance();
Appearance914.setUSE(CString("SegmentLine"));
Shape913.addChild(&Appearance914);

IndexedLineSet& IndexedLineSet915 =  IndexedLineSet();
IndexedLineSet915.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate916 =  Coordinate();
Coordinate916.setPoint(new float[]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012}, 6);
IndexedLineSet915.setCoord(&Coordinate916);

Shape913.setGeometry(&IndexedLineSet915);

HAnimSegment912.addChild(&Shape913);

Transform& Transform917 =  Transform();
Transform917.setTranslation(new float[]{0.1948,0.7277,-0.1017});
Shape& Shape918 =  Shape();
Shape918.setUSE(CString("jointbox"));
Transform917.addChild(&Shape918);

HAnimSegment912.addChild(&Transform917);

HAnimSite& HAnimSite919 =  HAnimSite();
HAnimSite919.setDEF(CString("Joe_l_pinky_distal_tip"));
HAnimSite919.X3DNode::setName(CString("l_pinky_distal_tip"));
HAnimSite919.setTranslation(new float[]{0.2014,0.7009,-0.1012});
Shape& Shape920 =  Shape();
Shape920.setUSE(CString("sitebox"));
HAnimSite919.addChild(&Shape920);

HAnimSegment912.addChild(&HAnimSite919);

HAnimJoint911.addChildren(&HAnimSegment912);

HAnimJoint903.addChildren(&HAnimJoint911);

HAnimJoint895.addChildren(&HAnimJoint903);

HAnimJoint887.addChildren(&HAnimJoint895);

HAnimJoint743.addChildren(&HAnimJoint887);

HAnimJoint721.addChildren(&HAnimJoint743);

HAnimJoint697.addChildren(&HAnimJoint721);

HAnimJoint681.addChildren(&HAnimJoint697);

HAnimJoint671.addChildren(&HAnimJoint681);

HAnimJoint555.addChildren(&HAnimJoint671);

HAnimJoint& HAnimJoint921 =  HAnimJoint();
HAnimJoint921.setDEF(CString("Joe_r_sternoclavicular"));
HAnimJoint921.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint921.setCenter(new float[]{-0.03,1.46,0});
HAnimJoint921.setSkinCoordIndex(new int32_t[]{10}, 1);
HAnimJoint921.setSkinCoordWeight(new float[]{1}, 1);
HAnimSegment& HAnimSegment922 =  HAnimSegment();
HAnimSegment922.setDEF(CString("Joe_r_clavicle"));
HAnimSegment922.X3DNode::setName(CString("r_clavicle"));
Shape& Shape923 =  Shape();
Appearance& Appearance924 =  Appearance();
Appearance924.setUSE(CString("SegmentLine"));
Shape923.addChild(&Appearance924);

IndexedLineSet& IndexedLineSet925 =  IndexedLineSet();
IndexedLineSet925.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate926 =  Coordinate();
Coordinate926.setPoint(new float[]{-0.03,1.46,0.02,-0.09,1.41,-0.09}, 6);
IndexedLineSet925.setCoord(&Coordinate926);

Shape923.setGeometry(&IndexedLineSet925);

HAnimSegment922.addChild(&Shape923);

Transform& Transform927 =  Transform();
Transform927.setTranslation(new float[]{-0.03,1.46,0.02});
Shape& Shape928 =  Shape();
Shape928.setUSE(CString("jointbox"));
Transform927.addChild(&Shape928);

HAnimSegment922.addChild(&Transform927);

HAnimSite& HAnimSite929 =  HAnimSite();
HAnimSite929.setDEF(CString("Joe_r_clavicale"));
HAnimSite929.X3DNode::setName(CString("r_clavicale"));
HAnimSite929.setTranslation(new float[]{-0.03,1.46,0.035});
Shape& Shape930 =  Shape();
Shape930.setUSE(CString("sitebox"));
HAnimSite929.addChild(&Shape930);

HAnimSegment922.addChild(&HAnimSite929);

HAnimJoint921.addChildren(&HAnimSegment922);

HAnimJoint& HAnimJoint931 =  HAnimJoint();
HAnimJoint931.setDEF(CString("Joe_r_acromioclavicular"));
HAnimJoint931.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint931.setCenter(new float[]{-0.09,1.41,-0.11});
HAnimJoint931.setSkinCoordIndex(new int32_t[]{77,29}, 2);
HAnimJoint931.setSkinCoordWeight(new float[]{1,0.9}, 2);
HAnimSegment& HAnimSegment932 =  HAnimSegment();
HAnimSegment932.setDEF(CString("Joe_r_scapula"));
HAnimSegment932.X3DNode::setName(CString("r_scapula"));
Shape& Shape933 =  Shape();
Appearance& Appearance934 =  Appearance();
Appearance934.setUSE(CString("SegmentLine"));
Shape933.addChild(&Appearance934);

IndexedLineSet& IndexedLineSet935 =  IndexedLineSet();
IndexedLineSet935.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate936 =  Coordinate();
Coordinate936.setPoint(new float[]{-0.09,1.41,-0.09,-0.2,1.44,-0.04}, 6);
IndexedLineSet935.setCoord(&Coordinate936);

Shape933.setGeometry(&IndexedLineSet935);

HAnimSegment932.addChild(&Shape933);

Transform& Transform937 =  Transform();
Transform937.setTranslation(new float[]{-0.09,1.41,-0.09});
Shape& Shape938 =  Shape();
Shape938.setUSE(CString("jointbox"));
Transform937.addChild(&Shape938);

HAnimSegment932.addChild(&Transform937);

Transform& Transform939 =  Transform();
Transform939.setTranslation(new float[]{-0.11,1.427,-0.1375});
Shape& Shape940 =  Shape();
Shape940.setUSE(CString("skinsphere"));
Transform939.addChild(&Shape940);

HAnimSegment932.addChild(&Transform939);

HAnimSite& HAnimSite941 =  HAnimSite();
HAnimSite941.setDEF(CString("Joe_r_acromion"));
HAnimSite941.X3DNode::setName(CString("r_acromion"));
HAnimSite941.setTranslation(new float[]{-0.178,1.4825,-0.0625});
Shape& Shape942 =  Shape();
Shape942.setUSE(CString("sitebox"));
HAnimSite941.addChild(&Shape942);

HAnimSegment932.addChild(&HAnimSite941);

HAnimSite& HAnimSite943 =  HAnimSite();
HAnimSite943.setDEF(CString("Joe_r_axilla_ant"));
HAnimSite943.X3DNode::setName(CString("r_axilla_ant"));
HAnimSite943.setTranslation(new float[]{-0.17,1.38,0.007});
Shape& Shape944 =  Shape();
Shape944.setUSE(CString("sitebox"));
HAnimSite943.addChild(&Shape944);

HAnimSegment932.addChild(&HAnimSite943);

HAnimSite& HAnimSite945 =  HAnimSite();
HAnimSite945.setDEF(CString("Joe_r_axilla_post"));
HAnimSite945.X3DNode::setName(CString("r_axilla_post"));
HAnimSite945.setTranslation(new float[]{-0.16,1.38,-0.127});
Shape& Shape946 =  Shape();
Shape946.setUSE(CString("sitebox"));
HAnimSite945.addChild(&Shape946);

HAnimSegment932.addChild(&HAnimSite945);

HAnimJoint931.addChildren(&HAnimSegment932);

HAnimJoint& HAnimJoint947 =  HAnimJoint();
HAnimJoint947.setDEF(CString("Joe_r_shoulder"));
HAnimJoint947.X3DNode::setName(CString("r_shoulder"));
HAnimJoint947.setRotation(new float[]{0,0,-0.999999999999779,0.0372377698785245});
HAnimJoint947.setCenter(new float[]{-0.2,1.44,-0.04});
HAnimJoint947.setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
HAnimJoint947.setSkinCoordWeight(new float[]{0.1,1,1,1,1,1,1,1,0.3,0.2}, 10);
HAnimSegment& HAnimSegment948 =  HAnimSegment();
HAnimSegment948.setDEF(CString("Joe_r_upperarm"));
HAnimSegment948.X3DNode::setName(CString("r_upperarm"));
Transform& Transform949 =  Transform();
Transform949.setTranslation(new float[]{-0.2,1.44,-0.04});
Shape& Shape950 =  Shape();
Shape950.setUSE(CString("jointbox"));
Transform949.addChild(&Shape950);

HAnimSegment948.addChild(&Transform949);

Shape& Shape951 =  Shape();
Appearance& Appearance952 =  Appearance();
Appearance952.setUSE(CString("SegmentLine"));
Shape951.addChild(&Appearance952);

IndexedLineSet& IndexedLineSet953 =  IndexedLineSet();
IndexedLineSet953.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate954 =  Coordinate();
Coordinate954.setPoint(new float[]{-0.2,1.44,-0.04,-0.2,1.1388,-0.04}, 6);
IndexedLineSet953.setCoord(&Coordinate954);

Shape951.setGeometry(&IndexedLineSet953);

HAnimSegment948.addChild(&Shape951);

Transform& Transform955 =  Transform();
Transform955.setTranslation(new float[]{-0.178,1.4825,-0.0625});
Shape& Shape956 =  Shape();
Shape956.setUSE(CString("skinsphere"));
Transform955.addChild(&Shape956);

HAnimSegment948.addChild(&Transform955);

Transform& Transform957 =  Transform();
Transform957.setTranslation(new float[]{-0.17,1.38,0.007});
Shape& Shape958 =  Shape();
Shape958.setUSE(CString("skinsphere"));
Transform957.addChild(&Shape958);

HAnimSegment948.addChild(&Transform957);

Transform& Transform959 =  Transform();
Transform959.setTranslation(new float[]{-0.16,1.38,-0.127});
Shape& Shape960 =  Shape();
Shape960.setUSE(CString("skinsphere"));
Transform959.addChild(&Shape960);

HAnimSegment948.addChild(&Transform959);

Transform& Transform961 =  Transform();
Transform961.setTranslation(new float[]{-0.235,1.42,-0.0625});
Shape& Shape962 =  Shape();
Shape962.setUSE(CString("skinsphere"));
Transform961.addChild(&Shape962);

HAnimSegment948.addChild(&Transform961);

Transform& Transform963 =  Transform();
Transform963.setTranslation(new float[]{-0.23,1.235,-0.04});
Shape& Shape964 =  Shape();
Shape964.setUSE(CString("skinsphere"));
Transform963.addChild(&Shape964);

HAnimSegment948.addChild(&Transform963);

Transform& Transform965 =  Transform();
Transform965.setTranslation(new float[]{-0.16,1.23,-0.04});
Shape& Shape966 =  Shape();
Shape966.setUSE(CString("skinsphere"));
Transform965.addChild(&Shape966);

HAnimSegment948.addChild(&Transform965);

Transform& Transform967 =  Transform();
Transform967.setTranslation(new float[]{-0.2,1.23,-0.105});
Shape& Shape968 =  Shape();
Shape968.setUSE(CString("skinsphere"));
Transform967.addChild(&Shape968);

HAnimSegment948.addChild(&Transform967);

Transform& Transform969 =  Transform();
Transform969.setTranslation(new float[]{-0.2,1.235,0.02});
Shape& Shape970 =  Shape();
Shape970.setUSE(CString("skinsphere"));
Transform969.addChild(&Shape970);

HAnimSegment948.addChild(&Transform969);

HAnimSite& HAnimSite971 =  HAnimSite();
HAnimSite971.setDEF(CString("Joe_r_humeral_medial_epicn"));
HAnimSite971.X3DNode::setName(CString("r_humeral_medial_epicn"));
HAnimSite971.setTranslation(new float[]{-0.165,1.1388,-0.04});
Shape& Shape972 =  Shape();
Shape972.setUSE(CString("sitebox"));
HAnimSite971.addChild(&Shape972);

HAnimSegment948.addChild(&HAnimSite971);

HAnimSite& HAnimSite973 =  HAnimSite();
HAnimSite973.setDEF(CString("Joe_r_radiale"));
HAnimSite973.X3DNode::setName(CString("r_radiale"));
HAnimSite973.setTranslation(new float[]{-0.23,1.133,-0.055});
Shape& Shape974 =  Shape();
Shape974.setUSE(CString("sitebox"));
HAnimSite973.addChild(&Shape974);

HAnimSegment948.addChild(&HAnimSite973);

HAnimSite& HAnimSite975 =  HAnimSite();
HAnimSite975.setDEF(CString("Joe_r_humeral_lateral_epicn"));
HAnimSite975.X3DNode::setName(CString("r_humeral_lateral_epicn"));
HAnimSite975.setTranslation(new float[]{-0.244,1.1388,-0.04});
Shape& Shape976 =  Shape();
Shape976.setUSE(CString("sitebox"));
HAnimSite975.addChild(&Shape976);

HAnimSegment948.addChild(&HAnimSite975);

HAnimJoint947.addChildren(&HAnimSegment948);

HAnimJoint& HAnimJoint977 =  HAnimJoint();
HAnimJoint977.setDEF(CString("Joe_r_elbow"));
HAnimJoint977.X3DNode::setName(CString("r_elbow"));
HAnimJoint977.setRotation(new float[]{-0.970142500145333,-0.242535625036333,0,0.149344152360623});
HAnimJoint977.setCenter(new float[]{-0.2,1.1388,-0.04});
HAnimJoint977.setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
HAnimJoint977.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimSegment& HAnimSegment978 =  HAnimSegment();
HAnimSegment978.setDEF(CString("Joe_r_forearm"));
HAnimSegment978.X3DNode::setName(CString("r_forearm"));
Shape& Shape979 =  Shape();
Appearance& Appearance980 =  Appearance();
Appearance980.setUSE(CString("SegmentLine"));
Shape979.addChild(&Appearance980);

IndexedLineSet& IndexedLineSet981 =  IndexedLineSet();
IndexedLineSet981.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate982 =  Coordinate();
Coordinate982.setPoint(new float[]{-0.2,1.1388,-0.04,-0.2,0.89,-0.04}, 6);
IndexedLineSet981.setCoord(&Coordinate982);

Shape979.setGeometry(&IndexedLineSet981);

HAnimSegment978.addChild(&Shape979);

Transform& Transform983 =  Transform();
Transform983.setTranslation(new float[]{-0.2,1.1388,-0.04});
Shape& Shape984 =  Shape();
Shape984.setUSE(CString("jointbox"));
Transform983.addChild(&Shape984);

HAnimSegment978.addChild(&Transform983);

Transform& Transform985 =  Transform();
Transform985.setTranslation(new float[]{-0.2,1.1388,0.013});
Shape& Shape986 =  Shape();
Shape986.setUSE(CString("skinsphere"));
Transform985.addChild(&Shape986);

HAnimSegment978.addChild(&Transform985);

Transform& Transform987 =  Transform();
Transform987.setTranslation(new float[]{-0.225,1,-0.01});
Shape& Shape988 =  Shape();
Shape988.setUSE(CString("skinsphere"));
Transform987.addChild(&Shape988);

HAnimSegment978.addChild(&Transform987);

Transform& Transform989 =  Transform();
Transform989.setTranslation(new float[]{-0.225,1,-0.07});
Shape& Shape990 =  Shape();
Shape990.setUSE(CString("skinsphere"));
Transform989.addChild(&Shape990);

HAnimSegment978.addChild(&Transform989);

Transform& Transform991 =  Transform();
Transform991.setTranslation(new float[]{-0.185,1,-0.01});
Shape& Shape992 =  Shape();
Shape992.setUSE(CString("skinsphere"));
Transform991.addChild(&Shape992);

HAnimSegment978.addChild(&Transform991);

Transform& Transform993 =  Transform();
Transform993.setTranslation(new float[]{-0.185,1,-0.07});
Shape& Shape994 =  Shape();
Shape994.setUSE(CString("skinsphere"));
Transform993.addChild(&Shape994);

HAnimSegment978.addChild(&Transform993);

HAnimSite& HAnimSite995 =  HAnimSite();
HAnimSite995.setDEF(CString("Joe_r_radial_styloid"));
HAnimSite995.X3DNode::setName(CString("r_radial_styloid"));
HAnimSite995.setTranslation(new float[]{-0.2,0.9,-0.015});
Shape& Shape996 =  Shape();
Shape996.setUSE(CString("sitebox"));
HAnimSite995.addChild(&Shape996);

HAnimSegment978.addChild(&HAnimSite995);

HAnimSite& HAnimSite997 =  HAnimSite();
HAnimSite997.setDEF(CString("Joe_r_olecranon"));
HAnimSite997.X3DNode::setName(CString("r_olecranon"));
HAnimSite997.setTranslation(new float[]{-0.2,1.1388,-0.08});
Shape& Shape998 =  Shape();
Shape998.setUSE(CString("sitebox"));
HAnimSite997.addChild(&Shape998);

HAnimSegment978.addChild(&HAnimSite997);

HAnimJoint977.addChildren(&HAnimSegment978);

HAnimJoint& HAnimJoint999 =  HAnimJoint();
HAnimJoint999.setDEF(CString("Joe_r_wrist"));
HAnimJoint999.X3DNode::setName(CString("r_wrist"));
HAnimJoint999.setCenter(new float[]{-0.2,0.89,-0.04});
HAnimJoint999.setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
HAnimJoint999.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimSegment& HAnimSegment1000 =  HAnimSegment();
HAnimSegment1000.setDEF(CString("Joe_r_hand"));
HAnimSegment1000.X3DNode::setName(CString("r_hand"));
Shape& Shape1001 =  Shape();
Appearance& Appearance1002 =  Appearance();
Appearance1002.setUSE(CString("SegmentLine"));
Shape1001.addChild(&Appearance1002);

IndexedLineSet& IndexedLineSet1003 =  IndexedLineSet();
IndexedLineSet1003.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1}, 15);
Coordinate& Coordinate1004 =  Coordinate();
Coordinate1004.setPoint(new float[]{-0.2,0.89,-0.04,-0.2,0.85,0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085}, 18);
IndexedLineSet1003.setCoord(&Coordinate1004);

Shape1001.setGeometry(&IndexedLineSet1003);

HAnimSegment1000.addChild(&Shape1001);

Transform& Transform1005 =  Transform();
Transform1005.setTranslation(new float[]{-0.2,0.89,-0.04});
Shape& Shape1006 =  Shape();
Shape1006.setUSE(CString("jointbox"));
Transform1005.addChild(&Shape1006);

HAnimSegment1000.addChild(&Transform1005);

HAnimSite& HAnimSite1007 =  HAnimSite();
HAnimSite1007.setDEF(CString("Joe_r_ulnar_styloid"));
HAnimSite1007.X3DNode::setName(CString("r_ulnar_styloid"));
HAnimSite1007.setTranslation(new float[]{-0.2,0.9,-0.085});
Shape& Shape1008 =  Shape();
Shape1008.setUSE(CString("sitebox"));
HAnimSite1007.addChild(&Shape1008);

HAnimSegment1000.addChild(&HAnimSite1007);

HAnimJoint999.addChildren(&HAnimSegment1000);

HAnimJoint& HAnimJoint1009 =  HAnimJoint();
HAnimJoint1009.setDEF(CString("Joe_r_thumb1"));
HAnimJoint1009.X3DNode::setName(CString("r_thumb1"));
HAnimJoint1009.setRotation(new float[]{0.999999999999976,0,0,0.11171329853783});
HAnimJoint1009.setCenter(new float[]{-0.2,0.85,0});
HAnimJoint1009.setSkinCoordIndex(new int32_t[]{243,244}, 2);
HAnimJoint1009.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment1010 =  HAnimSegment();
HAnimSegment1010.setDEF(CString("Joe_r_thumb_metacarpal"));
HAnimSegment1010.X3DNode::setName(CString("r_thumb_metacarpal"));
Shape& Shape1011 =  Shape();
Appearance& Appearance1012 =  Appearance();
Appearance1012.setUSE(CString("SegmentLine"));
Shape1011.addChild(&Appearance1012);

IndexedLineSet& IndexedLineSet1013 =  IndexedLineSet();
IndexedLineSet1013.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1014 =  Coordinate();
Coordinate1014.setPoint(new float[]{-0.2,0.85,0,-0.2,0.82,0.03}, 6);
IndexedLineSet1013.setCoord(&Coordinate1014);

Shape1011.setGeometry(&IndexedLineSet1013);

HAnimSegment1010.addChild(&Shape1011);

Transform& Transform1015 =  Transform();
Transform1015.setTranslation(new float[]{-0.2,0.85,0});
Shape& Shape1016 =  Shape();
Shape1016.setUSE(CString("jointbox"));
Transform1015.addChild(&Shape1016);

HAnimSegment1010.addChild(&Transform1015);

HAnimJoint1009.addChildren(&HAnimSegment1010);

HAnimJoint& HAnimJoint1017 =  HAnimJoint();
HAnimJoint1017.setDEF(CString("Joe_r_thumb2"));
HAnimJoint1017.X3DNode::setName(CString("r_thumb2"));
HAnimJoint1017.setRotation(new float[]{0.707106781186553,0.707106781186553,0,0.167569951968385});
HAnimJoint1017.setCenter(new float[]{-0.2,0.82,0.03});
HAnimJoint1017.setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
HAnimJoint1017.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1}, 6);
HAnimSegment& HAnimSegment1018 =  HAnimSegment();
HAnimSegment1018.setDEF(CString("Joe_r_thumb_proximal"));
HAnimSegment1018.X3DNode::setName(CString("r_thumb_proximal"));
Shape& Shape1019 =  Shape();
Appearance& Appearance1020 =  Appearance();
Appearance1020.setUSE(CString("SegmentLine"));
Shape1019.addChild(&Appearance1020);

IndexedLineSet& IndexedLineSet1021 =  IndexedLineSet();
IndexedLineSet1021.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1022 =  Coordinate();
Coordinate1022.setPoint(new float[]{-0.2,0.82,0.03,-0.2,0.8,0.05}, 6);
IndexedLineSet1021.setCoord(&Coordinate1022);

Shape1019.setGeometry(&IndexedLineSet1021);

HAnimSegment1018.addChild(&Shape1019);

Transform& Transform1023 =  Transform();
Transform1023.setTranslation(new float[]{-0.2,0.82,0.03});
Shape& Shape1024 =  Shape();
Shape1024.setUSE(CString("jointbox"));
Transform1023.addChild(&Shape1024);

HAnimSegment1018.addChild(&Transform1023);

HAnimJoint1017.addChildren(&HAnimSegment1018);

HAnimJoint& HAnimJoint1025 =  HAnimJoint();
HAnimJoint1025.setDEF(CString("Joe_r_thumb3"));
HAnimJoint1025.X3DNode::setName(CString("r_thumb3"));
HAnimJoint1025.setRotation(new float[]{0.707106781186553,0.707106781186553,0,0.167569951968385});
HAnimJoint1025.setCenter(new float[]{-0.2,0.8,0.05});
HAnimJoint1025.setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
HAnimJoint1025.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment1026 =  HAnimSegment();
HAnimSegment1026.setDEF(CString("Joe_r_thumb_distal"));
HAnimSegment1026.X3DNode::setName(CString("r_thumb_distal"));
Shape& Shape1027 =  Shape();
Appearance& Appearance1028 =  Appearance();
Appearance1028.setUSE(CString("SegmentLine"));
Shape1027.addChild(&Appearance1028);

IndexedLineSet& IndexedLineSet1029 =  IndexedLineSet();
IndexedLineSet1029.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1030 =  Coordinate();
Coordinate1030.setPoint(new float[]{-0.2,0.8,0.05,-0.2,0.78,0.07}, 6);
IndexedLineSet1029.setCoord(&Coordinate1030);

Shape1027.setGeometry(&IndexedLineSet1029);

HAnimSegment1026.addChild(&Shape1027);

Transform& Transform1031 =  Transform();
Transform1031.setDEF(CString("Thumbnail"));
Transform1031.setTranslation(new float[]{-0.2,0.785,0.075});
Shape& Shape1032 =  Shape();
Shape1032.setUSE(CString("skinsphere"));
Transform1031.addChild(&Shape1032);

HAnimSegment1026.addChild(&Transform1031);

Transform& Transform1033 =  Transform();
Transform1033.setTranslation(new float[]{-0.2,0.8,0.05});
Shape& Shape1034 =  Shape();
Shape1034.setUSE(CString("jointbox"));
Transform1033.addChild(&Shape1034);

HAnimSegment1026.addChild(&Transform1033);

HAnimSite& HAnimSite1035 =  HAnimSite();
HAnimSite1035.setDEF(CString("Joe_r_thumb_distal_tip"));
HAnimSite1035.X3DNode::setName(CString("r_thumb_distal_tip"));
HAnimSite1035.setTranslation(new float[]{-0.2,0.78,0.07});
Shape& Shape1036 =  Shape();
Shape1036.setUSE(CString("sitebox"));
HAnimSite1035.addChild(&Shape1036);

HAnimSegment1026.addChild(&HAnimSite1035);

HAnimJoint1025.addChildren(&HAnimSegment1026);

HAnimJoint1017.addChildren(&HAnimJoint1025);

HAnimJoint1009.addChildren(&HAnimJoint1017);

HAnimJoint999.addChildren(&HAnimJoint1009);

HAnimJoint& HAnimJoint1037 =  HAnimJoint();
HAnimJoint1037.setDEF(CString("Joe_r_index0"));
HAnimJoint1037.X3DNode::setName(CString("r_index0"));
HAnimJoint1037.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1037.setCenter(new float[]{-0.2,0.84,-0.015});
HAnimJoint1037.setSkinCoordIndex(new int32_t[]{245,246}, 2);
HAnimJoint1037.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment1038 =  HAnimSegment();
HAnimSegment1038.setDEF(CString("Joe_r_index_metacarpal"));
HAnimSegment1038.X3DNode::setName(CString("r_index_metacarpal"));
Shape& Shape1039 =  Shape();
Appearance& Appearance1040 =  Appearance();
Appearance1040.setUSE(CString("SegmentLine"));
Shape1039.addChild(&Appearance1040);

IndexedLineSet& IndexedLineSet1041 =  IndexedLineSet();
IndexedLineSet1041.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1042 =  Coordinate();
Coordinate1042.setPoint(new float[]{-0.2,0.84,-0.015,-0.2,0.793,-0.015}, 6);
IndexedLineSet1041.setCoord(&Coordinate1042);

Shape1039.setGeometry(&IndexedLineSet1041);

HAnimSegment1038.addChild(&Shape1039);

Transform& Transform1043 =  Transform();
Transform1043.setTranslation(new float[]{-0.2,0.84,-0.015});
Shape& Shape1044 =  Shape();
Shape1044.setUSE(CString("jointbox"));
Transform1043.addChild(&Shape1044);

HAnimSegment1038.addChild(&Transform1043);

HAnimSite& HAnimSite1045 =  HAnimSite();
HAnimSite1045.setDEF(CString("Joe_r_metacarpal_pha2"));
HAnimSite1045.X3DNode::setName(CString("r_metacarpal_pha2"));
HAnimSite1045.setTranslation(new float[]{-0.2,0.793,-0.005});
Shape& Shape1046 =  Shape();
Shape1046.setUSE(CString("sitebox"));
HAnimSite1045.addChild(&Shape1046);

HAnimSegment1038.addChild(&HAnimSite1045);

HAnimJoint1037.addChildren(&HAnimSegment1038);

HAnimJoint& HAnimJoint1047 =  HAnimJoint();
HAnimJoint1047.setDEF(CString("Joe_r_index1"));
HAnimJoint1047.X3DNode::setName(CString("r_index1"));
HAnimJoint1047.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1047.setCenter(new float[]{-0.2,0.793,-0.015});
HAnimJoint1047.setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
HAnimJoint1047.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimSegment& HAnimSegment1048 =  HAnimSegment();
HAnimSegment1048.setDEF(CString("Joe_r_index_proximal"));
HAnimSegment1048.X3DNode::setName(CString("r_index_proximal"));
Shape& Shape1049 =  Shape();
Appearance& Appearance1050 =  Appearance();
Appearance1050.setUSE(CString("SegmentLine"));
Shape1049.addChild(&Appearance1050);

IndexedLineSet& IndexedLineSet1051 =  IndexedLineSet();
IndexedLineSet1051.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1052 =  Coordinate();
Coordinate1052.setPoint(new float[]{-0.2,0.793,-0.015,-0.2,0.745,-0.015}, 6);
IndexedLineSet1051.setCoord(&Coordinate1052);

Shape1049.setGeometry(&IndexedLineSet1051);

HAnimSegment1048.addChild(&Shape1049);

Transform& Transform1053 =  Transform();
Transform1053.setTranslation(new float[]{-0.2,0.793,-0.015});
Shape& Shape1054 =  Shape();
Shape1054.setUSE(CString("jointbox"));
Transform1053.addChild(&Shape1054);

HAnimSegment1048.addChild(&Transform1053);

HAnimJoint1047.addChildren(&HAnimSegment1048);

HAnimJoint& HAnimJoint1055 =  HAnimJoint();
HAnimJoint1055.setDEF(CString("Joe_r_index2"));
HAnimJoint1055.X3DNode::setName(CString("r_index2"));
HAnimJoint1055.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1055.setCenter(new float[]{-0.2,0.745,-0.015});
HAnimJoint1055.setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
HAnimJoint1055.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment1056 =  HAnimSegment();
HAnimSegment1056.setDEF(CString("Joe_r_index_middle"));
HAnimSegment1056.X3DNode::setName(CString("r_index_middle"));
Shape& Shape1057 =  Shape();
Appearance& Appearance1058 =  Appearance();
Appearance1058.setUSE(CString("SegmentLine"));
Shape1057.addChild(&Appearance1058);

IndexedLineSet& IndexedLineSet1059 =  IndexedLineSet();
IndexedLineSet1059.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1060 =  Coordinate();
Coordinate1060.setPoint(new float[]{-0.2,0.745,-0.015,-0.2,0.72,-0.015}, 6);
IndexedLineSet1059.setCoord(&Coordinate1060);

Shape1057.setGeometry(&IndexedLineSet1059);

HAnimSegment1056.addChild(&Shape1057);

Transform& Transform1061 =  Transform();
Transform1061.setTranslation(new float[]{-0.2,0.745,-0.015});
Shape& Shape1062 =  Shape();
Shape1062.setUSE(CString("jointbox"));
Transform1061.addChild(&Shape1062);

HAnimSegment1056.addChild(&Transform1061);

HAnimJoint1055.addChildren(&HAnimSegment1056);

HAnimJoint& HAnimJoint1063 =  HAnimJoint();
HAnimJoint1063.setDEF(CString("Joe_r_index3"));
HAnimJoint1063.X3DNode::setName(CString("r_index3"));
HAnimJoint1063.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1063.setCenter(new float[]{-0.2,0.72,-0.015});
HAnimJoint1063.setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
HAnimJoint1063.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment1064 =  HAnimSegment();
HAnimSegment1064.setDEF(CString("Joe_r_index_distal"));
HAnimSegment1064.X3DNode::setName(CString("r_index_distal"));
Shape& Shape1065 =  Shape();
Appearance& Appearance1066 =  Appearance();
Appearance1066.setUSE(CString("SegmentLine"));
Shape1065.addChild(&Appearance1066);

IndexedLineSet& IndexedLineSet1067 =  IndexedLineSet();
IndexedLineSet1067.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1068 =  Coordinate();
Coordinate1068.setPoint(new float[]{-0.2,0.72,-0.015,-0.2,0.695,-0.015}, 6);
IndexedLineSet1067.setCoord(&Coordinate1068);

Shape1065.setGeometry(&IndexedLineSet1067);

HAnimSegment1064.addChild(&Shape1065);

Transform& Transform1069 =  Transform();
Transform1069.setTranslation(new float[]{-0.2,0.72,-0.015});
Shape& Shape1070 =  Shape();
Shape1070.setUSE(CString("jointbox"));
Transform1069.addChild(&Shape1070);

HAnimSegment1064.addChild(&Transform1069);

HAnimSite& HAnimSite1071 =  HAnimSite();
HAnimSite1071.setDEF(CString("Joe_r_index_distal_tip"));
HAnimSite1071.X3DNode::setName(CString("r_index_distal_tip"));
HAnimSite1071.setTranslation(new float[]{-0.2,0.695,-0.015});
Shape& Shape1072 =  Shape();
Shape1072.setUSE(CString("sitebox"));
HAnimSite1071.addChild(&Shape1072);

HAnimSegment1064.addChild(&HAnimSite1071);

HAnimJoint1063.addChildren(&HAnimSegment1064);

HAnimJoint1055.addChildren(&HAnimJoint1063);

HAnimJoint1047.addChildren(&HAnimJoint1055);

HAnimJoint1037.addChildren(&HAnimJoint1047);

HAnimJoint999.addChildren(&HAnimJoint1037);

HAnimJoint& HAnimJoint1073 =  HAnimJoint();
HAnimJoint1073.setDEF(CString("Joe_r_middle0"));
HAnimJoint1073.X3DNode::setName(CString("r_middle0"));
HAnimJoint1073.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1073.setCenter(new float[]{-0.2,0.835,-0.04});
HAnimJoint1073.setSkinCoordIndex(new int32_t[]{247,248}, 2);
HAnimJoint1073.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment1074 =  HAnimSegment();
HAnimSegment1074.setDEF(CString("Joe_r_middle_metacarpal"));
HAnimSegment1074.X3DNode::setName(CString("r_middle_metacarpal"));
Shape& Shape1075 =  Shape();
Appearance& Appearance1076 =  Appearance();
Appearance1076.setUSE(CString("SegmentLine"));
Shape1075.addChild(&Appearance1076);

IndexedLineSet& IndexedLineSet1077 =  IndexedLineSet();
IndexedLineSet1077.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1078 =  Coordinate();
Coordinate1078.setPoint(new float[]{-0.2,0.835,-0.04,-0.2,0.788,-0.04}, 6);
IndexedLineSet1077.setCoord(&Coordinate1078);

Shape1075.setGeometry(&IndexedLineSet1077);

HAnimSegment1074.addChild(&Shape1075);

Transform& Transform1079 =  Transform();
Transform1079.setTranslation(new float[]{-0.2,0.835,-0.04});
Shape& Shape1080 =  Shape();
Shape1080.setUSE(CString("jointbox"));
Transform1079.addChild(&Shape1080);

HAnimSegment1074.addChild(&Transform1079);

HAnimJoint1073.addChildren(&HAnimSegment1074);

HAnimJoint& HAnimJoint1081 =  HAnimJoint();
HAnimJoint1081.setDEF(CString("Joe_r_middle1"));
HAnimJoint1081.X3DNode::setName(CString("r_middle1"));
HAnimJoint1081.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1081.setCenter(new float[]{-0.2,0.788,-0.04});
HAnimJoint1081.setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
HAnimJoint1081.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimSegment& HAnimSegment1082 =  HAnimSegment();
HAnimSegment1082.setDEF(CString("Joe_r_middle_proximal"));
HAnimSegment1082.X3DNode::setName(CString("r_middle_proximal"));
Shape& Shape1083 =  Shape();
Appearance& Appearance1084 =  Appearance();
Appearance1084.setUSE(CString("SegmentLine"));
Shape1083.addChild(&Appearance1084);

IndexedLineSet& IndexedLineSet1085 =  IndexedLineSet();
IndexedLineSet1085.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1086 =  Coordinate();
Coordinate1086.setPoint(new float[]{-0.2,0.788,-0.04,-0.2,0.74,-0.04}, 6);
IndexedLineSet1085.setCoord(&Coordinate1086);

Shape1083.setGeometry(&IndexedLineSet1085);

HAnimSegment1082.addChild(&Shape1083);

Transform& Transform1087 =  Transform();
Transform1087.setTranslation(new float[]{-0.2,0.788,-0.04});
Shape& Shape1088 =  Shape();
Shape1088.setUSE(CString("jointbox"));
Transform1087.addChild(&Shape1088);

HAnimSegment1082.addChild(&Transform1087);

HAnimJoint1081.addChildren(&HAnimSegment1082);

HAnimJoint& HAnimJoint1089 =  HAnimJoint();
HAnimJoint1089.setDEF(CString("Joe_r_middle2"));
HAnimJoint1089.X3DNode::setName(CString("r_middle2"));
HAnimJoint1089.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1089.setCenter(new float[]{-0.2,0.74,-0.04});
HAnimJoint1089.setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
HAnimJoint1089.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment1090 =  HAnimSegment();
HAnimSegment1090.setDEF(CString("Joe_r_middle_middle"));
HAnimSegment1090.X3DNode::setName(CString("r_middle_middle"));
Shape& Shape1091 =  Shape();
Appearance& Appearance1092 =  Appearance();
Appearance1092.setUSE(CString("SegmentLine"));
Shape1091.addChild(&Appearance1092);

IndexedLineSet& IndexedLineSet1093 =  IndexedLineSet();
IndexedLineSet1093.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1094 =  Coordinate();
Coordinate1094.setPoint(new float[]{-0.2,0.74,-0.04,-0.2,0.7142,-0.04}, 6);
IndexedLineSet1093.setCoord(&Coordinate1094);

Shape1091.setGeometry(&IndexedLineSet1093);

HAnimSegment1090.addChild(&Shape1091);

Transform& Transform1095 =  Transform();
Transform1095.setTranslation(new float[]{-0.2,0.74,-0.04});
Shape& Shape1096 =  Shape();
Shape1096.setUSE(CString("jointbox"));
Transform1095.addChild(&Shape1096);

HAnimSegment1090.addChild(&Transform1095);

HAnimJoint1089.addChildren(&HAnimSegment1090);

HAnimJoint& HAnimJoint1097 =  HAnimJoint();
HAnimJoint1097.setDEF(CString("Joe_r_middle3"));
HAnimJoint1097.X3DNode::setName(CString("r_middle3"));
HAnimJoint1097.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1097.setCenter(new float[]{-0.2,0.7142,-0.04});
HAnimJoint1097.setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
HAnimJoint1097.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment1098 =  HAnimSegment();
HAnimSegment1098.setDEF(CString("Joe_r_middle_distal"));
HAnimSegment1098.X3DNode::setName(CString("r_middle_distal"));
Shape& Shape1099 =  Shape();
Appearance& Appearance1100 =  Appearance();
Appearance1100.setUSE(CString("SegmentLine"));
Shape1099.addChild(&Appearance1100);

IndexedLineSet& IndexedLineSet1101 =  IndexedLineSet();
IndexedLineSet1101.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1102 =  Coordinate();
Coordinate1102.setPoint(new float[]{-0.2,0.7142,-0.04,-0.2,0.6758,-0.04}, 6);
IndexedLineSet1101.setCoord(&Coordinate1102);

Shape1099.setGeometry(&IndexedLineSet1101);

HAnimSegment1098.addChild(&Shape1099);

Transform& Transform1103 =  Transform();
Transform1103.setTranslation(new float[]{-0.2,0.7142,-0.04});
Shape& Shape1104 =  Shape();
Shape1104.setUSE(CString("jointbox"));
Transform1103.addChild(&Shape1104);

HAnimSegment1098.addChild(&Transform1103);

HAnimSite& HAnimSite1105 =  HAnimSite();
HAnimSite1105.setDEF(CString("Joe_r_dactylion"));
HAnimSite1105.X3DNode::setName(CString("r_dactylion"));
HAnimSite1105.setTranslation(new float[]{-0.2,0.68,-0.04});
Shape& Shape1106 =  Shape();
Shape1106.setUSE(CString("sitebox"));
HAnimSite1105.addChild(&Shape1106);

HAnimSegment1098.addChild(&HAnimSite1105);

HAnimSite& HAnimSite1107 =  HAnimSite();
HAnimSite1107.setDEF(CString("Joe_r_middle_distal_tip"));
HAnimSite1107.X3DNode::setName(CString("r_middle_distal_tip"));
HAnimSite1107.setTranslation(new float[]{-0.2,0.68,-0.04});
Shape& Shape1108 =  Shape();
Shape1108.setUSE(CString("sitebox"));
HAnimSite1107.addChild(&Shape1108);

HAnimSegment1098.addChild(&HAnimSite1107);

HAnimJoint1097.addChildren(&HAnimSegment1098);

HAnimJoint1089.addChildren(&HAnimJoint1097);

HAnimJoint1081.addChildren(&HAnimJoint1089);

HAnimJoint1073.addChildren(&HAnimJoint1081);

HAnimJoint999.addChildren(&HAnimJoint1073);

HAnimJoint& HAnimJoint1109 =  HAnimJoint();
HAnimJoint1109.setDEF(CString("Joe_r_ring0"));
HAnimJoint1109.X3DNode::setName(CString("r_ring0"));
HAnimJoint1109.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1109.setCenter(new float[]{-0.2,0.835,-0.065});
HAnimJoint1109.setSkinCoordIndex(new int32_t[]{249,250}, 2);
HAnimJoint1109.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimSegment& HAnimSegment1110 =  HAnimSegment();
HAnimSegment1110.setDEF(CString("Joe_r_ring_metacarpal"));
HAnimSegment1110.X3DNode::setName(CString("r_ring_metacarpal"));
Shape& Shape1111 =  Shape();
Appearance& Appearance1112 =  Appearance();
Appearance1112.setUSE(CString("SegmentLine"));
Shape1111.addChild(&Appearance1112);

IndexedLineSet& IndexedLineSet1113 =  IndexedLineSet();
IndexedLineSet1113.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1114 =  Coordinate();
Coordinate1114.setPoint(new float[]{-0.2,0.835,-0.065,-0.2,0.793,-0.065}, 6);
IndexedLineSet1113.setCoord(&Coordinate1114);

Shape1111.setGeometry(&IndexedLineSet1113);

HAnimSegment1110.addChild(&Shape1111);

Transform& Transform1115 =  Transform();
Transform1115.setTranslation(new float[]{-0.2,0.835,-0.065});
Shape& Shape1116 =  Shape();
Shape1116.setUSE(CString("jointbox"));
Transform1115.addChild(&Shape1116);

HAnimSegment1110.addChild(&Transform1115);

HAnimJoint1109.addChildren(&HAnimSegment1110);

HAnimJoint& HAnimJoint1117 =  HAnimJoint();
HAnimJoint1117.setDEF(CString("Joe_r_ring1"));
HAnimJoint1117.X3DNode::setName(CString("r_ring1"));
HAnimJoint1117.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1117.setCenter(new float[]{-0.2,0.793,-0.065});
HAnimJoint1117.setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
HAnimJoint1117.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimSegment& HAnimSegment1118 =  HAnimSegment();
HAnimSegment1118.setDEF(CString("Joe_r_ring_proximal"));
HAnimSegment1118.X3DNode::setName(CString("r_ring_proximal"));
Shape& Shape1119 =  Shape();
Appearance& Appearance1120 =  Appearance();
Appearance1120.setUSE(CString("SegmentLine"));
Shape1119.addChild(&Appearance1120);

IndexedLineSet& IndexedLineSet1121 =  IndexedLineSet();
IndexedLineSet1121.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1122 =  Coordinate();
Coordinate1122.setPoint(new float[]{-0.2,0.793,-0.065,-0.2,0.74,-0.065}, 6);
IndexedLineSet1121.setCoord(&Coordinate1122);

Shape1119.setGeometry(&IndexedLineSet1121);

HAnimSegment1118.addChild(&Shape1119);

Transform& Transform1123 =  Transform();
Transform1123.setTranslation(new float[]{-0.2,0.793,-0.065});
Shape& Shape1124 =  Shape();
Shape1124.setUSE(CString("jointbox"));
Transform1123.addChild(&Shape1124);

HAnimSegment1118.addChild(&Transform1123);

HAnimJoint1117.addChildren(&HAnimSegment1118);

HAnimJoint& HAnimJoint1125 =  HAnimJoint();
HAnimJoint1125.setDEF(CString("Joe_r_ring2"));
HAnimJoint1125.X3DNode::setName(CString("r_ring2"));
HAnimJoint1125.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1125.setCenter(new float[]{-0.2,0.74,-0.065});
HAnimJoint1125.setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
HAnimJoint1125.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment1126 =  HAnimSegment();
HAnimSegment1126.setDEF(CString("Joe_r_ring_middle"));
HAnimSegment1126.X3DNode::setName(CString("r_ring_middle"));
Shape& Shape1127 =  Shape();
Appearance& Appearance1128 =  Appearance();
Appearance1128.setUSE(CString("SegmentLine"));
Shape1127.addChild(&Appearance1128);

IndexedLineSet& IndexedLineSet1129 =  IndexedLineSet();
IndexedLineSet1129.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1130 =  Coordinate();
Coordinate1130.setPoint(new float[]{-0.2,0.74,-0.065,-0.2,0.7177,-0.065}, 6);
IndexedLineSet1129.setCoord(&Coordinate1130);

Shape1127.setGeometry(&IndexedLineSet1129);

HAnimSegment1126.addChild(&Shape1127);

Transform& Transform1131 =  Transform();
Transform1131.setTranslation(new float[]{-0.2,0.74,-0.065});
Shape& Shape1132 =  Shape();
Shape1132.setUSE(CString("jointbox"));
Transform1131.addChild(&Shape1132);

HAnimSegment1126.addChild(&Transform1131);

HAnimJoint1125.addChildren(&HAnimSegment1126);

HAnimJoint& HAnimJoint1133 =  HAnimJoint();
HAnimJoint1133.setDEF(CString("Joe_r_ring3"));
HAnimJoint1133.X3DNode::setName(CString("r_ring3"));
HAnimJoint1133.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1133.setCenter(new float[]{-0.2,0.7177,-0.065});
HAnimJoint1133.setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
HAnimJoint1133.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment1134 =  HAnimSegment();
HAnimSegment1134.setDEF(CString("Joe_r_ring_distal"));
HAnimSegment1134.X3DNode::setName(CString("r_ring_distal"));
Shape& Shape1135 =  Shape();
Appearance& Appearance1136 =  Appearance();
Appearance1136.setUSE(CString("SegmentLine"));
Shape1135.addChild(&Appearance1136);

IndexedLineSet& IndexedLineSet1137 =  IndexedLineSet();
IndexedLineSet1137.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1138 =  Coordinate();
Coordinate1138.setPoint(new float[]{-0.2,0.7177,-0.065,-0.2,0.695,-0.065}, 6);
IndexedLineSet1137.setCoord(&Coordinate1138);

Shape1135.setGeometry(&IndexedLineSet1137);

HAnimSegment1134.addChild(&Shape1135);

Transform& Transform1139 =  Transform();
Transform1139.setTranslation(new float[]{-0.2,0.7177,-0.065});
Shape& Shape1140 =  Shape();
Shape1140.setUSE(CString("jointbox"));
Transform1139.addChild(&Shape1140);

HAnimSegment1134.addChild(&Transform1139);

HAnimSite& HAnimSite1141 =  HAnimSite();
HAnimSite1141.setDEF(CString("Joe_r_ring_distal_tip"));
HAnimSite1141.X3DNode::setName(CString("r_ring_distal_tip"));
HAnimSite1141.setTranslation(new float[]{-0.2,0.695,-0.065});
Shape& Shape1142 =  Shape();
Shape1142.setUSE(CString("sitebox"));
HAnimSite1141.addChild(&Shape1142);

HAnimSegment1134.addChild(&HAnimSite1141);

HAnimJoint1133.addChildren(&HAnimSegment1134);

HAnimJoint1125.addChildren(&HAnimJoint1133);

HAnimJoint1117.addChildren(&HAnimJoint1125);

HAnimJoint1109.addChildren(&HAnimJoint1117);

HAnimJoint999.addChildren(&HAnimJoint1109);

HAnimJoint& HAnimJoint1143 =  HAnimJoint();
HAnimJoint1143.setDEF(CString("Joe_r_pinky0"));
HAnimJoint1143.X3DNode::setName(CString("r_pinky0"));
HAnimJoint1143.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1143.setCenter(new float[]{-0.2,0.84,-0.085});
HAnimJoint1143.setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
HAnimJoint1143.setSkinCoordWeight(new float[]{1,1,1,0.5}, 4);
HAnimSegment& HAnimSegment1144 =  HAnimSegment();
HAnimSegment1144.setDEF(CString("Joe_r_pinky_metacarpal"));
HAnimSegment1144.X3DNode::setName(CString("r_pinky_metacarpal"));
Shape& Shape1145 =  Shape();
Appearance& Appearance1146 =  Appearance();
Appearance1146.setUSE(CString("SegmentLine"));
Shape1145.addChild(&Appearance1146);

IndexedLineSet& IndexedLineSet1147 =  IndexedLineSet();
IndexedLineSet1147.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1148 =  Coordinate();
Coordinate1148.setPoint(new float[]{-0.2,0.84,-0.085,-0.2,0.79,-0.085}, 6);
IndexedLineSet1147.setCoord(&Coordinate1148);

Shape1145.setGeometry(&IndexedLineSet1147);

HAnimSegment1144.addChild(&Shape1145);

Transform& Transform1149 =  Transform();
Transform1149.setTranslation(new float[]{-0.2,0.84,-0.085});
Shape& Shape1150 =  Shape();
Shape1150.setUSE(CString("jointbox"));
Transform1149.addChild(&Shape1150);

HAnimSegment1144.addChild(&Transform1149);

HAnimSite& HAnimSite1151 =  HAnimSite();
HAnimSite1151.setDEF(CString("Joe_r_metacarpal_pha5"));
HAnimSite1151.X3DNode::setName(CString("r_metacarpal_pha5"));
HAnimSite1151.setTranslation(new float[]{-0.2,0.79,-0.095});
Shape& Shape1152 =  Shape();
Shape1152.setUSE(CString("sitebox"));
HAnimSite1151.addChild(&Shape1152);

HAnimSegment1144.addChild(&HAnimSite1151);

HAnimJoint1143.addChildren(&HAnimSegment1144);

HAnimJoint& HAnimJoint1153 =  HAnimJoint();
HAnimJoint1153.setDEF(CString("Joe_r_pinky1"));
HAnimJoint1153.X3DNode::setName(CString("r_pinky1"));
HAnimJoint1153.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1153.setCenter(new float[]{-0.2,0.79,-0.085});
HAnimJoint1153.setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
HAnimJoint1153.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimSegment& HAnimSegment1154 =  HAnimSegment();
HAnimSegment1154.setDEF(CString("Joe_r_pinky_proximal"));
HAnimSegment1154.X3DNode::setName(CString("r_pinky_proximal"));
Shape& Shape1155 =  Shape();
Appearance& Appearance1156 =  Appearance();
Appearance1156.setUSE(CString("SegmentLine"));
Shape1155.addChild(&Appearance1156);

IndexedLineSet& IndexedLineSet1157 =  IndexedLineSet();
IndexedLineSet1157.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1158 =  Coordinate();
Coordinate1158.setPoint(new float[]{-0.2,0.79,-0.085,-0.2,0.755,-0.085}, 6);
IndexedLineSet1157.setCoord(&Coordinate1158);

Shape1155.setGeometry(&IndexedLineSet1157);

HAnimSegment1154.addChild(&Shape1155);

Transform& Transform1159 =  Transform();
Transform1159.setTranslation(new float[]{-0.2,0.79,-0.085});
Shape& Shape1160 =  Shape();
Shape1160.setUSE(CString("jointbox"));
Transform1159.addChild(&Shape1160);

HAnimSegment1154.addChild(&Transform1159);

HAnimJoint1153.addChildren(&HAnimSegment1154);

HAnimJoint& HAnimJoint1161 =  HAnimJoint();
HAnimJoint1161.setDEF(CString("Joe_r_pinky2"));
HAnimJoint1161.X3DNode::setName(CString("r_pinky2"));
HAnimJoint1161.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1161.setCenter(new float[]{-0.2,0.755,-0.085});
HAnimJoint1161.setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
HAnimJoint1161.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimSegment& HAnimSegment1162 =  HAnimSegment();
HAnimSegment1162.setDEF(CString("Joe_r_pinky_middle"));
HAnimSegment1162.X3DNode::setName(CString("r_pinky_middle"));
Shape& Shape1163 =  Shape();
Appearance& Appearance1164 =  Appearance();
Appearance1164.setUSE(CString("SegmentLine"));
Shape1163.addChild(&Appearance1164);

IndexedLineSet& IndexedLineSet1165 =  IndexedLineSet();
IndexedLineSet1165.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1166 =  Coordinate();
Coordinate1166.setPoint(new float[]{-0.2,0.755,-0.085,-0.2,0.735,-0.085}, 6);
IndexedLineSet1165.setCoord(&Coordinate1166);

Shape1163.setGeometry(&IndexedLineSet1165);

HAnimSegment1162.addChild(&Shape1163);

Transform& Transform1167 =  Transform();
Transform1167.setTranslation(new float[]{-0.2,0.755,-0.085});
Shape& Shape1168 =  Shape();
Shape1168.setUSE(CString("jointbox"));
Transform1167.addChild(&Shape1168);

HAnimSegment1162.addChild(&Transform1167);

HAnimJoint1161.addChildren(&HAnimSegment1162);

HAnimJoint& HAnimJoint1169 =  HAnimJoint();
HAnimJoint1169.setDEF(CString("Joe_r_pinky3"));
HAnimJoint1169.X3DNode::setName(CString("r_pinky3"));
HAnimJoint1169.setRotation(new float[]{0,0,1.00000000001315,0.0055856647187357});
HAnimJoint1169.setCenter(new float[]{-0.2,0.735,-0.09});
HAnimJoint1169.setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
HAnimJoint1169.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimSegment& HAnimSegment1170 =  HAnimSegment();
HAnimSegment1170.setDEF(CString("Joe_r_pinky_distal"));
HAnimSegment1170.X3DNode::setName(CString("r_pinky_distal"));
Shape& Shape1171 =  Shape();
Appearance& Appearance1172 =  Appearance();
Appearance1172.setUSE(CString("SegmentLine"));
Shape1171.addChild(&Appearance1172);

IndexedLineSet& IndexedLineSet1173 =  IndexedLineSet();
IndexedLineSet1173.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1174 =  Coordinate();
Coordinate1174.setPoint(new float[]{-0.2,0.735,-0.085,-0.2,0.72,-0.085}, 6);
IndexedLineSet1173.setCoord(&Coordinate1174);

Shape1171.setGeometry(&IndexedLineSet1173);

HAnimSegment1170.addChild(&Shape1171);

Transform& Transform1175 =  Transform();
Transform1175.setTranslation(new float[]{-0.2,0.735,-0.085});
Shape& Shape1176 =  Shape();
Shape1176.setUSE(CString("jointbox"));
Transform1175.addChild(&Shape1176);

HAnimSegment1170.addChild(&Transform1175);

HAnimSite& HAnimSite1177 =  HAnimSite();
HAnimSite1177.setDEF(CString("Joe_r_pinky_distal_tip"));
HAnimSite1177.X3DNode::setName(CString("r_pinky_distal_tip"));
HAnimSite1177.setTranslation(new float[]{-0.2,0.72,-0.085});
Shape& Shape1178 =  Shape();
Shape1178.setUSE(CString("sitebox"));
HAnimSite1177.addChild(&Shape1178);

HAnimSegment1170.addChild(&HAnimSite1177);

HAnimJoint1169.addChildren(&HAnimSegment1170);

HAnimJoint1161.addChildren(&HAnimJoint1169);

HAnimJoint1153.addChildren(&HAnimJoint1161);

HAnimJoint1143.addChildren(&HAnimJoint1153);

HAnimJoint999.addChildren(&HAnimJoint1143);

HAnimJoint977.addChildren(&HAnimJoint999);

HAnimJoint947.addChildren(&HAnimJoint977);

HAnimJoint931.addChildren(&HAnimJoint947);

HAnimJoint921.addChildren(&HAnimJoint931);

HAnimJoint555.addChildren(&HAnimJoint921);

HAnimJoint547.addChildren(&HAnimJoint555);

HAnimJoint539.addChildren(&HAnimJoint547);

HAnimJoint529.addChildren(&HAnimJoint539);

HAnimJoint521.addChildren(&HAnimJoint529);

HAnimJoint513.addChildren(&HAnimJoint521);

HAnimJoint505.addChildren(&HAnimJoint513);

HAnimJoint497.addChildren(&HAnimJoint505);

HAnimJoint485.addChildren(&HAnimJoint497);

HAnimJoint475.addChildren(&HAnimJoint485);

HAnimJoint467.addChildren(&HAnimJoint475);

HAnimJoint459.addChildren(&HAnimJoint467);

HAnimJoint451.addChildren(&HAnimJoint459);

HAnimJoint425.addChildren(&HAnimJoint451);

HAnimJoint417.addChildren(&HAnimJoint425);

HAnimJoint409.addChildren(&HAnimJoint417);

HAnimJoint394.addChildren(&HAnimJoint409);

HAnimJoint80.addChildren(&HAnimJoint394);

HAnimHumanoid79.setSkeleton(&HAnimJoint80);

HAnimJoint& HAnimJoint1179 =  HAnimJoint();
HAnimJoint1179.setUSE(CString("Joe_HumanoidRoot"));
HAnimHumanoid79.setJoints(&HAnimJoint1179);

HAnimJoint& HAnimJoint1180 =  HAnimJoint();
HAnimJoint1180.setUSE(CString("Joe_sacroiliac"));
HAnimHumanoid79.setJoints(&HAnimJoint1180);

HAnimJoint& HAnimJoint1181 =  HAnimJoint();
HAnimJoint1181.setUSE(CString("Joe_l_hip"));
HAnimHumanoid79.setJoints(&HAnimJoint1181);

HAnimJoint& HAnimJoint1182 =  HAnimJoint();
HAnimJoint1182.setUSE(CString("Joe_l_knee"));
HAnimHumanoid79.setJoints(&HAnimJoint1182);

HAnimJoint& HAnimJoint1183 =  HAnimJoint();
HAnimJoint1183.setUSE(CString("Joe_l_ankle"));
HAnimHumanoid79.setJoints(&HAnimJoint1183);

HAnimJoint& HAnimJoint1184 =  HAnimJoint();
HAnimJoint1184.setUSE(CString("Joe_l_subtalar"));
HAnimHumanoid79.setJoints(&HAnimJoint1184);

HAnimJoint& HAnimJoint1185 =  HAnimJoint();
HAnimJoint1185.setUSE(CString("Joe_l_midtarsal"));
HAnimHumanoid79.setJoints(&HAnimJoint1185);

HAnimJoint& HAnimJoint1186 =  HAnimJoint();
HAnimJoint1186.setUSE(CString("Joe_l_metatarsal"));
HAnimHumanoid79.setJoints(&HAnimJoint1186);

HAnimJoint& HAnimJoint1187 =  HAnimJoint();
HAnimJoint1187.setUSE(CString("Joe_r_hip"));
HAnimHumanoid79.setJoints(&HAnimJoint1187);

HAnimJoint& HAnimJoint1188 =  HAnimJoint();
HAnimJoint1188.setUSE(CString("Joe_r_knee"));
HAnimHumanoid79.setJoints(&HAnimJoint1188);

HAnimJoint& HAnimJoint1189 =  HAnimJoint();
HAnimJoint1189.setUSE(CString("Joe_r_ankle"));
HAnimHumanoid79.setJoints(&HAnimJoint1189);

HAnimJoint& HAnimJoint1190 =  HAnimJoint();
HAnimJoint1190.setUSE(CString("Joe_r_subtalar"));
HAnimHumanoid79.setJoints(&HAnimJoint1190);

HAnimJoint& HAnimJoint1191 =  HAnimJoint();
HAnimJoint1191.setUSE(CString("Joe_r_midtarsal"));
HAnimHumanoid79.setJoints(&HAnimJoint1191);

HAnimJoint& HAnimJoint1192 =  HAnimJoint();
HAnimJoint1192.setUSE(CString("Joe_r_metatarsal"));
HAnimHumanoid79.setJoints(&HAnimJoint1192);

HAnimJoint& HAnimJoint1193 =  HAnimJoint();
HAnimJoint1193.setUSE(CString("Joe_vl5"));
HAnimHumanoid79.setJoints(&HAnimJoint1193);

HAnimJoint& HAnimJoint1194 =  HAnimJoint();
HAnimJoint1194.setUSE(CString("Joe_vl4"));
HAnimHumanoid79.setJoints(&HAnimJoint1194);

HAnimJoint& HAnimJoint1195 =  HAnimJoint();
HAnimJoint1195.setUSE(CString("Joe_vl3"));
HAnimHumanoid79.setJoints(&HAnimJoint1195);

HAnimJoint& HAnimJoint1196 =  HAnimJoint();
HAnimJoint1196.setUSE(CString("Joe_vl2"));
HAnimHumanoid79.setJoints(&HAnimJoint1196);

HAnimJoint& HAnimJoint1197 =  HAnimJoint();
HAnimJoint1197.setUSE(CString("Joe_vl1"));
HAnimHumanoid79.setJoints(&HAnimJoint1197);

HAnimJoint& HAnimJoint1198 =  HAnimJoint();
HAnimJoint1198.setUSE(CString("Joe_vt12"));
HAnimHumanoid79.setJoints(&HAnimJoint1198);

HAnimJoint& HAnimJoint1199 =  HAnimJoint();
HAnimJoint1199.setUSE(CString("Joe_vt11"));
HAnimHumanoid79.setJoints(&HAnimJoint1199);

HAnimJoint& HAnimJoint1200 =  HAnimJoint();
HAnimJoint1200.setUSE(CString("Joe_vt10"));
HAnimHumanoid79.setJoints(&HAnimJoint1200);

HAnimJoint& HAnimJoint1201 =  HAnimJoint();
HAnimJoint1201.setUSE(CString("Joe_vt9"));
HAnimHumanoid79.setJoints(&HAnimJoint1201);

HAnimJoint& HAnimJoint1202 =  HAnimJoint();
HAnimJoint1202.setUSE(CString("Joe_vt8"));
HAnimHumanoid79.setJoints(&HAnimJoint1202);

HAnimJoint& HAnimJoint1203 =  HAnimJoint();
HAnimJoint1203.setUSE(CString("Joe_vt7"));
HAnimHumanoid79.setJoints(&HAnimJoint1203);

HAnimJoint& HAnimJoint1204 =  HAnimJoint();
HAnimJoint1204.setUSE(CString("Joe_vt6"));
HAnimHumanoid79.setJoints(&HAnimJoint1204);

HAnimJoint& HAnimJoint1205 =  HAnimJoint();
HAnimJoint1205.setUSE(CString("Joe_vt5"));
HAnimHumanoid79.setJoints(&HAnimJoint1205);

HAnimJoint& HAnimJoint1206 =  HAnimJoint();
HAnimJoint1206.setUSE(CString("Joe_vt4"));
HAnimHumanoid79.setJoints(&HAnimJoint1206);

HAnimJoint& HAnimJoint1207 =  HAnimJoint();
HAnimJoint1207.setUSE(CString("Joe_vt3"));
HAnimHumanoid79.setJoints(&HAnimJoint1207);

HAnimJoint& HAnimJoint1208 =  HAnimJoint();
HAnimJoint1208.setUSE(CString("Joe_vt2"));
HAnimHumanoid79.setJoints(&HAnimJoint1208);

HAnimJoint& HAnimJoint1209 =  HAnimJoint();
HAnimJoint1209.setUSE(CString("Joe_vt1"));
HAnimHumanoid79.setJoints(&HAnimJoint1209);

HAnimJoint& HAnimJoint1210 =  HAnimJoint();
HAnimJoint1210.setUSE(CString("Joe_vc7"));
HAnimHumanoid79.setJoints(&HAnimJoint1210);

HAnimJoint& HAnimJoint1211 =  HAnimJoint();
HAnimJoint1211.setUSE(CString("Joe_vc6"));
HAnimHumanoid79.setJoints(&HAnimJoint1211);

HAnimJoint& HAnimJoint1212 =  HAnimJoint();
HAnimJoint1212.setUSE(CString("Joe_vc5"));
HAnimHumanoid79.setJoints(&HAnimJoint1212);

HAnimJoint& HAnimJoint1213 =  HAnimJoint();
HAnimJoint1213.setUSE(CString("Joe_vc4"));
HAnimHumanoid79.setJoints(&HAnimJoint1213);

HAnimJoint& HAnimJoint1214 =  HAnimJoint();
HAnimJoint1214.setUSE(CString("Joe_vc3"));
HAnimHumanoid79.setJoints(&HAnimJoint1214);

HAnimJoint& HAnimJoint1215 =  HAnimJoint();
HAnimJoint1215.setUSE(CString("Joe_vc2"));
HAnimHumanoid79.setJoints(&HAnimJoint1215);

HAnimJoint& HAnimJoint1216 =  HAnimJoint();
HAnimJoint1216.setUSE(CString("Joe_vc1"));
HAnimHumanoid79.setJoints(&HAnimJoint1216);

HAnimJoint& HAnimJoint1217 =  HAnimJoint();
HAnimJoint1217.setUSE(CString("Joe_skullbase"));
HAnimHumanoid79.setJoints(&HAnimJoint1217);

HAnimJoint& HAnimJoint1218 =  HAnimJoint();
HAnimJoint1218.setUSE(CString("Joe_l_eyeball_joint"));
HAnimHumanoid79.setJoints(&HAnimJoint1218);

HAnimJoint& HAnimJoint1219 =  HAnimJoint();
HAnimJoint1219.setUSE(CString("Joe_r_eyeball_joint"));
HAnimHumanoid79.setJoints(&HAnimJoint1219);

HAnimJoint& HAnimJoint1220 =  HAnimJoint();
HAnimJoint1220.setUSE(CString("Joe_l_sternoclavicular"));
HAnimHumanoid79.setJoints(&HAnimJoint1220);

HAnimJoint& HAnimJoint1221 =  HAnimJoint();
HAnimJoint1221.setUSE(CString("Joe_l_acromioclavicular"));
HAnimHumanoid79.setJoints(&HAnimJoint1221);

HAnimJoint& HAnimJoint1222 =  HAnimJoint();
HAnimJoint1222.setUSE(CString("Joe_l_shoulder"));
HAnimHumanoid79.setJoints(&HAnimJoint1222);

HAnimJoint& HAnimJoint1223 =  HAnimJoint();
HAnimJoint1223.setUSE(CString("Joe_l_elbow"));
HAnimHumanoid79.setJoints(&HAnimJoint1223);

HAnimJoint& HAnimJoint1224 =  HAnimJoint();
HAnimJoint1224.setUSE(CString("Joe_l_wrist"));
HAnimHumanoid79.setJoints(&HAnimJoint1224);

HAnimJoint& HAnimJoint1225 =  HAnimJoint();
HAnimJoint1225.setUSE(CString("Joe_l_thumb1"));
HAnimHumanoid79.setJoints(&HAnimJoint1225);

HAnimJoint& HAnimJoint1226 =  HAnimJoint();
HAnimJoint1226.setUSE(CString("Joe_l_thumb2"));
HAnimHumanoid79.setJoints(&HAnimJoint1226);

HAnimJoint& HAnimJoint1227 =  HAnimJoint();
HAnimJoint1227.setUSE(CString("Joe_l_thumb3"));
HAnimHumanoid79.setJoints(&HAnimJoint1227);

HAnimJoint& HAnimJoint1228 =  HAnimJoint();
HAnimJoint1228.setUSE(CString("Joe_l_index0"));
HAnimHumanoid79.setJoints(&HAnimJoint1228);

HAnimJoint& HAnimJoint1229 =  HAnimJoint();
HAnimJoint1229.setUSE(CString("Joe_l_index1"));
HAnimHumanoid79.setJoints(&HAnimJoint1229);

HAnimJoint& HAnimJoint1230 =  HAnimJoint();
HAnimJoint1230.setUSE(CString("Joe_l_index2"));
HAnimHumanoid79.setJoints(&HAnimJoint1230);

HAnimJoint& HAnimJoint1231 =  HAnimJoint();
HAnimJoint1231.setUSE(CString("Joe_l_index3"));
HAnimHumanoid79.setJoints(&HAnimJoint1231);

HAnimJoint& HAnimJoint1232 =  HAnimJoint();
HAnimJoint1232.setUSE(CString("Joe_l_middle0"));
HAnimHumanoid79.setJoints(&HAnimJoint1232);

HAnimJoint& HAnimJoint1233 =  HAnimJoint();
HAnimJoint1233.setUSE(CString("Joe_l_middle1"));
HAnimHumanoid79.setJoints(&HAnimJoint1233);

HAnimJoint& HAnimJoint1234 =  HAnimJoint();
HAnimJoint1234.setUSE(CString("Joe_l_middle2"));
HAnimHumanoid79.setJoints(&HAnimJoint1234);

HAnimJoint& HAnimJoint1235 =  HAnimJoint();
HAnimJoint1235.setUSE(CString("Joe_l_middle3"));
HAnimHumanoid79.setJoints(&HAnimJoint1235);

HAnimJoint& HAnimJoint1236 =  HAnimJoint();
HAnimJoint1236.setUSE(CString("Joe_l_ring0"));
HAnimHumanoid79.setJoints(&HAnimJoint1236);

HAnimJoint& HAnimJoint1237 =  HAnimJoint();
HAnimJoint1237.setUSE(CString("Joe_l_ring1"));
HAnimHumanoid79.setJoints(&HAnimJoint1237);

HAnimJoint& HAnimJoint1238 =  HAnimJoint();
HAnimJoint1238.setUSE(CString("Joe_l_ring2"));
HAnimHumanoid79.setJoints(&HAnimJoint1238);

HAnimJoint& HAnimJoint1239 =  HAnimJoint();
HAnimJoint1239.setUSE(CString("Joe_l_ring3"));
HAnimHumanoid79.setJoints(&HAnimJoint1239);

HAnimJoint& HAnimJoint1240 =  HAnimJoint();
HAnimJoint1240.setUSE(CString("Joe_l_pinky0"));
HAnimHumanoid79.setJoints(&HAnimJoint1240);

HAnimJoint& HAnimJoint1241 =  HAnimJoint();
HAnimJoint1241.setUSE(CString("Joe_l_pinky1"));
HAnimHumanoid79.setJoints(&HAnimJoint1241);

HAnimJoint& HAnimJoint1242 =  HAnimJoint();
HAnimJoint1242.setUSE(CString("Joe_l_pinky2"));
HAnimHumanoid79.setJoints(&HAnimJoint1242);

HAnimJoint& HAnimJoint1243 =  HAnimJoint();
HAnimJoint1243.setUSE(CString("Joe_l_pinky3"));
HAnimHumanoid79.setJoints(&HAnimJoint1243);

HAnimJoint& HAnimJoint1244 =  HAnimJoint();
HAnimJoint1244.setUSE(CString("Joe_r_sternoclavicular"));
HAnimHumanoid79.setJoints(&HAnimJoint1244);

HAnimJoint& HAnimJoint1245 =  HAnimJoint();
HAnimJoint1245.setUSE(CString("Joe_r_acromioclavicular"));
HAnimHumanoid79.setJoints(&HAnimJoint1245);

HAnimJoint& HAnimJoint1246 =  HAnimJoint();
HAnimJoint1246.setUSE(CString("Joe_r_shoulder"));
HAnimHumanoid79.setJoints(&HAnimJoint1246);

HAnimJoint& HAnimJoint1247 =  HAnimJoint();
HAnimJoint1247.setUSE(CString("Joe_r_elbow"));
HAnimHumanoid79.setJoints(&HAnimJoint1247);

HAnimJoint& HAnimJoint1248 =  HAnimJoint();
HAnimJoint1248.setUSE(CString("Joe_r_wrist"));
HAnimHumanoid79.setJoints(&HAnimJoint1248);

HAnimJoint& HAnimJoint1249 =  HAnimJoint();
HAnimJoint1249.setUSE(CString("Joe_r_thumb1"));
HAnimHumanoid79.setJoints(&HAnimJoint1249);

HAnimJoint& HAnimJoint1250 =  HAnimJoint();
HAnimJoint1250.setUSE(CString("Joe_r_thumb2"));
HAnimHumanoid79.setJoints(&HAnimJoint1250);

HAnimJoint& HAnimJoint1251 =  HAnimJoint();
HAnimJoint1251.setUSE(CString("Joe_r_thumb3"));
HAnimHumanoid79.setJoints(&HAnimJoint1251);

HAnimJoint& HAnimJoint1252 =  HAnimJoint();
HAnimJoint1252.setUSE(CString("Joe_r_index0"));
HAnimHumanoid79.setJoints(&HAnimJoint1252);

HAnimJoint& HAnimJoint1253 =  HAnimJoint();
HAnimJoint1253.setUSE(CString("Joe_r_index1"));
HAnimHumanoid79.setJoints(&HAnimJoint1253);

HAnimJoint& HAnimJoint1254 =  HAnimJoint();
HAnimJoint1254.setUSE(CString("Joe_r_index2"));
HAnimHumanoid79.setJoints(&HAnimJoint1254);

HAnimJoint& HAnimJoint1255 =  HAnimJoint();
HAnimJoint1255.setUSE(CString("Joe_r_index3"));
HAnimHumanoid79.setJoints(&HAnimJoint1255);

HAnimJoint& HAnimJoint1256 =  HAnimJoint();
HAnimJoint1256.setUSE(CString("Joe_r_middle0"));
HAnimHumanoid79.setJoints(&HAnimJoint1256);

HAnimJoint& HAnimJoint1257 =  HAnimJoint();
HAnimJoint1257.setUSE(CString("Joe_r_middle1"));
HAnimHumanoid79.setJoints(&HAnimJoint1257);

HAnimJoint& HAnimJoint1258 =  HAnimJoint();
HAnimJoint1258.setUSE(CString("Joe_r_middle2"));
HAnimHumanoid79.setJoints(&HAnimJoint1258);

HAnimJoint& HAnimJoint1259 =  HAnimJoint();
HAnimJoint1259.setUSE(CString("Joe_r_middle3"));
HAnimHumanoid79.setJoints(&HAnimJoint1259);

HAnimJoint& HAnimJoint1260 =  HAnimJoint();
HAnimJoint1260.setUSE(CString("Joe_r_ring0"));
HAnimHumanoid79.setJoints(&HAnimJoint1260);

HAnimJoint& HAnimJoint1261 =  HAnimJoint();
HAnimJoint1261.setUSE(CString("Joe_r_ring1"));
HAnimHumanoid79.setJoints(&HAnimJoint1261);

HAnimJoint& HAnimJoint1262 =  HAnimJoint();
HAnimJoint1262.setUSE(CString("Joe_r_ring2"));
HAnimHumanoid79.setJoints(&HAnimJoint1262);

HAnimJoint& HAnimJoint1263 =  HAnimJoint();
HAnimJoint1263.setUSE(CString("Joe_r_ring3"));
HAnimHumanoid79.setJoints(&HAnimJoint1263);

HAnimJoint& HAnimJoint1264 =  HAnimJoint();
HAnimJoint1264.setUSE(CString("Joe_r_pinky0"));
HAnimHumanoid79.setJoints(&HAnimJoint1264);

HAnimJoint& HAnimJoint1265 =  HAnimJoint();
HAnimJoint1265.setUSE(CString("Joe_r_pinky1"));
HAnimHumanoid79.setJoints(&HAnimJoint1265);

HAnimJoint& HAnimJoint1266 =  HAnimJoint();
HAnimJoint1266.setUSE(CString("Joe_r_pinky2"));
HAnimHumanoid79.setJoints(&HAnimJoint1266);

HAnimJoint& HAnimJoint1267 =  HAnimJoint();
HAnimJoint1267.setUSE(CString("Joe_r_pinky3"));
HAnimHumanoid79.setJoints(&HAnimJoint1267);

Coordinate& Coordinate1268 =  Coordinate();
Coordinate1268.setDEF(CString("TheSkinCoord"));
Coordinate1268.setPoint(new float[]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
HAnimHumanoid79.setSkinCoord(&Coordinate1268);

Shape& Shape1269 =  Shape();
Shape1269.setDEF(CString("SkinShape"));
Appearance& Appearance1270 =  Appearance();
Appearance1270.setDEF(CString("SkinAppearance"));
Material& Material1271 =  Material();
Material1271.setDEF(CString("SkinMaterial"));
Material1271.setAmbientIntensity(0.6);
Material1271.setDiffuseColor(new float[]{1,1,1});
Material1271.setShininess(0.6);
Material1271.setTransparency(0.2);
Appearance1270.addChild(&Material1271);

ImageTexture& ImageTexture1272 =  ImageTexture();
ImageTexture1272.setDEF(CString("zBlueSpiralBkg2"));
ImageTexture1272.setDescription(CString("Blue Spiral Pattern"));
ImageTexture1272.setUrl(new CString[]{CString("zBlueSpiralBkg2.gif"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")}, 2);
Appearance1270.addChild(&ImageTexture1272);

Shape1269.addChild(&Appearance1270);

IndexedFaceSet& IndexedFaceSet1273 =  IndexedFaceSet();
IndexedFaceSet1273.setCreaseAngle(3.1);
IndexedFaceSet1273.setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
CColor& Color1274 =  CColor();
Color1274.setColor(new float[]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1}, 2079);
IndexedFaceSet1273.setColor(&Color1274);

Coordinate& Coordinate1275 =  Coordinate();
Coordinate1275.setUSE(CString("TheSkinCoord"));
IndexedFaceSet1273.setCoord(&Coordinate1275);

Shape1269.setGeometry(&IndexedFaceSet1273);

HAnimHumanoid79.setSkin(&Shape1269);

Group78.addChild(&HAnimHumanoid79);

Group77.addChild(&Group78);

Scene33.addChild(&Group77);

TimeSensor& TimeSensor1276 =  TimeSensor();
TimeSensor1276.setDEF(CString("Time1"));
TimeSensor1276.setCycleInterval(2.86);
TimeSensor1276.setLoop(True);
Scene33.addChild(&TimeSensor1276);

TimeSensor& TimeSensor1277 =  TimeSensor();
TimeSensor1277.setDEF(CString("Time2"));
TimeSensor1277.setCycleInterval(5.72);
TimeSensor1277.setLoop(True);
Scene33.addChild(&TimeSensor1277);

TimeSensor& TimeSensor1278 =  TimeSensor();
TimeSensor1278.setDEF(CString("Time3"));
TimeSensor1278.setCycleInterval(5.8);
TimeSensor1278.setLoop(True);
Scene33.addChild(&TimeSensor1278);

OrientationInterpolator& OrientationInterpolator1279 =  OrientationInterpolator();
OrientationInterpolator1279.setDEF(CString("Pitch"));
OrientationInterpolator1279.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1279.setKeyValue(new float[]{1,0,0,0,1,0,0,1.25600004196167,1,0,0,2.51200008392334,1,0,0,3.76799988746643,1,0,0,5.02400016784668,1,0,0,6.28000020980835}, 24);
Scene33.addChild(&OrientationInterpolator1279);

OrientationInterpolator& OrientationInterpolator1280 =  OrientationInterpolator();
OrientationInterpolator1280.setDEF(CString("Yaw"));
OrientationInterpolator1280.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1280.setKeyValue(new float[]{0,1,0,0,0,1,0,1.25600004196167,0,1,0,2.51200008392334,0,1,0,3.76799988746643,0,1,0,5.02400016784668,0,1,0,6.28000020980835}, 24);
Scene33.addChild(&OrientationInterpolator1280);

OrientationInterpolator& OrientationInterpolator1281 =  OrientationInterpolator();
OrientationInterpolator1281.setDEF(CString("Roll"));
OrientationInterpolator1281.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1281.setKeyValue(new float[]{0,0,1,0,0,0,1,1.25600004196167,0,0,1,2.51200008392334,0,0,1,3.76799988746643,0,0,1,5.02400016784668,0,0,1,6.28000020980835}, 24);
Scene33.addChild(&OrientationInterpolator1281);

OrientationInterpolator& OrientationInterpolator1282 =  OrientationInterpolator();
OrientationInterpolator1282.setDEF(CString("vc6Yaw"));
OrientationInterpolator1282.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1}, 9);
OrientationInterpolator1282.setKeyValue(new float[]{0,1,0,0,0,1,0,0.699999988079071,0,1,0,0,0,1,0,0,-1,0,0,0.5,-0.400000005960465,-1,0,0.699999988079071,-0.400000005960465,-1,0,0.400000005960465,0,1,0,0,0,1,0,0}, 36);
Scene33.addChild(&OrientationInterpolator1282);

OrientationInterpolator& OrientationInterpolator1283 =  OrientationInterpolator();
OrientationInterpolator1283.setDEF(CString("EyeballsRotation"));
OrientationInterpolator1283.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1}, 10);
OrientationInterpolator1283.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0,0,1,0,0,0,1,0}, 40);
Scene33.addChild(&OrientationInterpolator1283);

OrientationInterpolator& OrientationInterpolator1284 =  OrientationInterpolator();
OrientationInterpolator1284.setDEF(CString("r_sternoclavicularRelax"));
OrientationInterpolator1284.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1284.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0.200000002980232,-1,0,0.109999999403954,0.200000002980232,-1,0,0.109999999403954,0.100000001490116,-1,0,0.100000001490116,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1284);

OrientationInterpolator& OrientationInterpolator1285 =  OrientationInterpolator();
OrientationInterpolator1285.setDEF(CString("r_acromioclavicularRelax"));
OrientationInterpolator1285.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1285.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1285);

OrientationInterpolator& OrientationInterpolator1286 =  OrientationInterpolator();
OrientationInterpolator1286.setDEF(CString("r_shoulderRelax"));
OrientationInterpolator1286.setKey(new float[]{0,0.1,0.3,0.6,0.8,1}, 6);
OrientationInterpolator1286.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1286);

OrientationInterpolator& OrientationInterpolator1287 =  OrientationInterpolator();
OrientationInterpolator1287.setDEF(CString("r_elbowRelax"));
OrientationInterpolator1287.setKey(new float[]{0,0.15,0.4,0.6,0.9,1}, 6);
OrientationInterpolator1287.setKeyValue(new float[]{0,0,1,0,0,0,1,0,-0.200000002980232,0,0.00999999977648258,0.5,-0.200000002980232,0,0.00999999977648258,0.5,-0.200000002980232,0,0.00999999977648258,0.5,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1287);

OrientationInterpolator& OrientationInterpolator1288 =  OrientationInterpolator();
OrientationInterpolator1288.setDEF(CString("r_wristRelax"));
OrientationInterpolator1288.setKey(new float[]{0,0.2,0.4,0.6,0.9,1}, 6);
OrientationInterpolator1288.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0.100000001490116,-0.0900000035762787,0.25,0,0.100000001490116,-0.0900000035762787,0.25,0,0.100000001490116,-0.0900000035762787,0.25,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1288);

OrientationInterpolator& OrientationInterpolator1289 =  OrientationInterpolator();
OrientationInterpolator1289.setDEF(CString("r_index0Relax"));
OrientationInterpolator1289.setKey(new float[]{0,0.1,0.3,0.6,0.8,1}, 6);
OrientationInterpolator1289.setKeyValue(new float[]{0,0,1,0,0,0,1,0,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1289);

OrientationInterpolator& OrientationInterpolator1290 =  OrientationInterpolator();
OrientationInterpolator1290.setDEF(CString("r_index1Relax"));
OrientationInterpolator1290.setKey(new float[]{0,0.1,0.2,0.6,0.8,1}, 6);
OrientationInterpolator1290.setKeyValue(new float[]{0,0,1,0,0,0,1,0,-0.135000005364418,-0.135000005364418,1,0.35699999332428,-0.158999994397163,-0.152999997138977,1,0.354999989271164,-0.158999994397163,-0.152999997138977,1,0.35699999332428,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1290);

OrientationInterpolator& OrientationInterpolator1291 =  OrientationInterpolator();
OrientationInterpolator1291.setDEF(CString("r_middle0Relax"));
OrientationInterpolator1291.setKey(new float[]{0,0.1,0.3,0.6,0.8,1}, 6);
OrientationInterpolator1291.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,-1,0.140000000596046,0,0,-1,0.140000000596046,0,0,-1,0.140000000596046,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1291);

OrientationInterpolator& OrientationInterpolator1292 =  OrientationInterpolator();
OrientationInterpolator1292.setDEF(CString("r_middle1Relax"));
OrientationInterpolator1292.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator1292.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,0.300000011920929,0.256999999284744,0,0,0.300000011920929,0.370000004768372,0,0,0.300000011920929,0.389999985694885,0,0,0.300000011920929,0.310000002384186,0,0,0.300000011920929,0.319999992847443,0,0,0.300000011920929,0.340000003576279,0,0,0.300000011920929,0.280000001192093,0,0,1,0,0,0,1,0}, 44);
Scene33.addChild(&OrientationInterpolator1292);

OrientationInterpolator& OrientationInterpolator1293 =  OrientationInterpolator();
OrientationInterpolator1293.setDEF(CString("r_ring0Relax"));
OrientationInterpolator1293.setKey(new float[]{0,0.1,0.3,0.6,0.8,1}, 6);
OrientationInterpolator1293.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0.25,0.25,-1,0.100000001490116,0.25,0.25,-1,0.100000001490116,0.25,0.25,-1,0.100000001490116,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1293);

OrientationInterpolator& OrientationInterpolator1294 =  OrientationInterpolator();
OrientationInterpolator1294.setDEF(CString("r_ring1Relax"));
OrientationInterpolator1294.setKey(new float[]{0,0.1,0.4,0.5,0.8,1}, 6);
OrientationInterpolator1294.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0.135000005364418,0.135000005364418,1,0.270000010728836,0.135000005364418,0.135000005364418,1,0.270000010728836,0.135000005364418,0.150000005960464,1,0.270000010728836,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1294);

OrientationInterpolator& OrientationInterpolator1295 =  OrientationInterpolator();
OrientationInterpolator1295.setDEF(CString("r_pinky0Relax"));
OrientationInterpolator1295.setKey(new float[]{0,0.1,0.3,0.5,0.8,1}, 6);
OrientationInterpolator1295.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0.349999994039536,0.349999994039536,-0.699999988079071,0.119999997317791,0.349999994039536,0.349999994039536,-0.899999976158142,0.119999997317791,0.349999994039536,0.349999994039536,-0.699999988079071,0.119999997317791,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1295);

OrientationInterpolator& OrientationInterpolator1296 =  OrientationInterpolator();
OrientationInterpolator1296.setDEF(CString("r_pinky1Relax"));
OrientationInterpolator1296.setKey(new float[]{0,0.1,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1296.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0.200000002980232,0.25,1,0.270000010728836,0.200000002980232,0.219999998807907,1,0.270000010728836,0.219999998807907,0.200000002980232,1,0.270000010728836,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1296);

OrientationInterpolator& OrientationInterpolator1297 =  OrientationInterpolator();
OrientationInterpolator1297.setDEF(CString("r_thumb1Relax"));
OrientationInterpolator1297.setKey(new float[]{0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1}, 10);
OrientationInterpolator1297.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,-1,1,1,0.5,-0.159999996423721,0.159999996423721,0.785000026226044,0.5,-0.159999996423721,0.159999996423721,0.785000026226044,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,0,0,1,0}, 40);
Scene33.addChild(&OrientationInterpolator1297);

OrientationInterpolator& OrientationInterpolator1298 =  OrientationInterpolator();
OrientationInterpolator1298.setDEF(CString("r_thumb2Relax"));
OrientationInterpolator1298.setKey(new float[]{0,0.2,0.5,0.6,0.7,0.8,1}, 7);
OrientationInterpolator1298.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.449999988079071,1,0,0,0.449999988079071,1,0,0,0.449999988079071,0,0,1,0}, 28);
Scene33.addChild(&OrientationInterpolator1298);

OrientationInterpolator& OrientationInterpolator1299 =  OrientationInterpolator();
OrientationInterpolator1299.setDEF(CString("r_thumb3Relax"));
OrientationInterpolator1299.setKey(new float[]{0,0.2,0.5,0.6,0.7,0.8,1}, 7);
OrientationInterpolator1299.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.449999988079071,0,0,1,0,0,0,1,0}, 28);
Scene33.addChild(&OrientationInterpolator1299);

OrientationInterpolator& OrientationInterpolator1300 =  OrientationInterpolator();
OrientationInterpolator1300.setDEF(CString("r_fingers2Relax"));
OrientationInterpolator1300.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator1300.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0.430000007152557,0,0,1,0.439999997615814,0,0,1,0.46000000834465,0,0,1,0.439999997615814,0,0,1,0.245000004768372,0,0,1,0.239999994635582,0,0,1,0.209999993443489,0,0,1,0.239999994635582,0,0,1,0}, 44);
Scene33.addChild(&OrientationInterpolator1300);

OrientationInterpolator& OrientationInterpolator1301 =  OrientationInterpolator();
OrientationInterpolator1301.setDEF(CString("r_fingers3Relax"));
OrientationInterpolator1301.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator1301.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0.370000004768372,0,0,1,0.379999995231628,0,0,1,0.389999985694885,0,0,1,0.379999995231628,0,0,1,0.270000010728836,0,0,1,0.280000001192093,0,0,1,0.270000010728836,0,0,1,0.280000001192093,0,0,1,0}, 44);
Scene33.addChild(&OrientationInterpolator1301);

OrientationInterpolator& OrientationInterpolator1302 =  OrientationInterpolator();
OrientationInterpolator1302.setDEF(CString("r_sternoclavicularRoll"));
OrientationInterpolator1302.setKey(new float[]{0,0.2,0.4,0.5,0.7,0.8,1}, 7);
OrientationInterpolator1302.setKeyValue(new float[]{0,0,1,0,0,0,-1,0.100000001490116,0,0,-1,0.219999998807907,0,0.5,-1,0.270000010728836,0,0,-1,0.100000001490116,0,0,1,0,0,0,1,0}, 28);
Scene33.addChild(&OrientationInterpolator1302);

OrientationInterpolator& OrientationInterpolator1303 =  OrientationInterpolator();
OrientationInterpolator1303.setDEF(CString("r_acromioclavicularRoll"));
OrientationInterpolator1303.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1303.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,-0.0500000007450581,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1303);

OrientationInterpolator& OrientationInterpolator1304 =  OrientationInterpolator();
OrientationInterpolator1304.setDEF(CString("r_shoulderRoll"));
OrientationInterpolator1304.setKey(new float[]{0,0.2,0.4,0.5,0.85,1}, 6);
OrientationInterpolator1304.setKeyValue(new float[]{1,0,0,0,0,0,-1,1.6599999666214,-0.25,0,-1,1.75999999046326,0,0,-1,1.25600004196167,0,0,-1,0.0500000007450581,1,0,0,0}, 24);
Scene33.addChild(&OrientationInterpolator1304);

OrientationInterpolator& OrientationInterpolator1305 =  OrientationInterpolator();
OrientationInterpolator1305.setDEF(CString("r_ForeArmPitch"));
OrientationInterpolator1305.setKey(new float[]{0,0.15,0.3,0.5,0.7,0.9,1}, 7);
OrientationInterpolator1305.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.550000011920929,-1,-0.25,0,2.54999995231628,-1,-0.25,0,2.54999995231628,-1,-0.25,0,2.54999995231628,0,0,1,0,0,0,1,0}, 28);
Scene33.addChild(&OrientationInterpolator1305);

OrientationInterpolator& OrientationInterpolator1306 =  OrientationInterpolator();
OrientationInterpolator1306.setDEF(CString("r_wristRoll"));
OrientationInterpolator1306.setKey(new float[]{0,0.2,0.4,0.6,0.65,0.75,0.85,1}, 8);
OrientationInterpolator1306.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,1,0,-0.550000011920929,0,0,1,0,0,1,0,1.54999995231628,0,0,-1,1.54999995231628,0,0,1,0,0,0,1,0}, 32);
Scene33.addChild(&OrientationInterpolator1306);

OrientationInterpolator& OrientationInterpolator1307 =  OrientationInterpolator();
OrientationInterpolator1307.setDEF(CString("r_handPitch"));
OrientationInterpolator1307.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1307.setKeyValue(new float[]{0,0,1,0,0,0,0.00999999977648258,0.25,0,0,-0.00999999977648258,0.0299999993294477,0,0,0.00999999977648258,0.0500000007450581,0,0,0.00999999977648258,0.00999999977648258,0,0,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1307);

OrientationInterpolator& OrientationInterpolator1308 =  OrientationInterpolator();
OrientationInterpolator1308.setDEF(CString("r_thumb1Pitch"));
OrientationInterpolator1308.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1308.setKeyValue(new float[]{1,0,0,0,1,0,0,0.5,1,0,0,1,1,0,0,0.400000005960465,1,0,0,0.200000002980232,1,0,0,0}, 24);
Scene33.addChild(&OrientationInterpolator1308);

OrientationInterpolator& OrientationInterpolator1309 =  OrientationInterpolator();
OrientationInterpolator1309.setDEF(CString("r_thumb2Pitch"));
OrientationInterpolator1309.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1309.setKeyValue(new float[]{0,0,1,0,1,1,0,0.300000011920929,1,1,0,0.300000011920929,1,1,0,0.600000023841858,1,1,0,0.300000011920929,0,1,1,0}, 24);
Scene33.addChild(&OrientationInterpolator1309);

OrientationInterpolator& OrientationInterpolator1310 =  OrientationInterpolator();
OrientationInterpolator1310.setDEF(CString("l_shoulderRoll"));
OrientationInterpolator1310.setKey(new float[]{0,0.2,0.4,0.5,0.85,1}, 6);
OrientationInterpolator1310.setKeyValue(new float[]{0.25,0,1,1.75999999046326,0,0,1,1.6599999666214,0.25,0,1,1.75999999046326,0,0,1,1.25600004196167,0,0,1,0.0500000007450581,0.25,0,1,1.75999999046326}, 24);
Scene33.addChild(&OrientationInterpolator1310);

Group& Group1311 =  Group();
PositionInterpolator& PositionInterpolator1312 =  PositionInterpolator();
PositionInterpolator1312.setDEF(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
PositionInterpolator1312.setKey(new float[]{0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1}, 19);
PositionInterpolator1312.setKeyValue(new float[]{0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0}, 57);
Group1311.addChild(&PositionInterpolator1312);

OrientationInterpolator& OrientationInterpolator1313 =  OrientationInterpolator();
OrientationInterpolator1313.setDEF(CString("HUMANOIDROOT_ANIMATOR"));
OrientationInterpolator1313.setKey(new float[]{0,1}, 2);
OrientationInterpolator1313.setKeyValue(new float[]{0,1,0,0,0,1,0,0}, 8);
Group1311.addChild(&OrientationInterpolator1313);

OrientationInterpolator& OrientationInterpolator1314 =  OrientationInterpolator();
OrientationInterpolator1314.setDEF(CString("L_HIP_ANIMATOR"));
OrientationInterpolator1314.setKey(new float[]{0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator1314.setKeyValue(new float[]{-0.873000025749207,0.0609400011599064,0.483999997377396,0.286500006914139,0.996299982070923,-0.0105699999257922,0.0848100036382675,0.248799994587898,0.996500015258789,0.0159099996089935,-0.0822200030088425,0.383599996566772,-0.701799988746643,-0.0322300009429455,-0.711700022220612,0.12890000641346,-1,0,0,0.551800012588501,-0.996399998664856,0.0223099999129772,0.0816999971866608,0.535099983215332,-0.98089998960495,0.0491200014948845,0.18809999525547,0.520399987697601,-0.873000025749207,0.0609400011599064,0.483999997377396,0.286500006914139}, 32);
Group1311.addChild(&OrientationInterpolator1314);

OrientationInterpolator& OrientationInterpolator1315 =  OrientationInterpolator();
OrientationInterpolator1315.setDEF(CString("L_KNEE_ANIMATOR"));
OrientationInterpolator1315.setKey(new float[]{0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator1315.setKeyValue(new float[]{1,0,0,0.32260000705719,1,0,0,0.155599996447563,1,0,0,0.086779996752739,1,0,0,0.875100016593933,1,0,0,1.13100004196167,1,0,0,0.0996100008487701,1,0,0,0.394199997186661,1,0,0,0.32260000705719}, 32);
Group1311.addChild(&OrientationInterpolator1315);

OrientationInterpolator& OrientationInterpolator1316 =  OrientationInterpolator();
OrientationInterpolator1316.setDEF(CString("L_ANKLE_ANIMATOR"));
OrientationInterpolator1316.setKey(new float[]{0,0.125,0.2083,0.375,0.6667,0.9167,1}, 7);
OrientationInterpolator1316.setKeyValue(new float[]{-1,0,0,0.067100003361702,-1,0,0,0.215200006961823,-1,0,0,0.318399995565414,-1,0,0,0.471700012683868,-1,0,0,0.291200011968613,1,0,0,0.222200006246567,-1,0,0,0.067100003361702}, 28);
Group1311.addChild(&OrientationInterpolator1316);

OrientationInterpolator& OrientationInterpolator1317 =  OrientationInterpolator();
OrientationInterpolator1317.setDEF(CString("R_ANKLE_ANIMATOR"));
OrientationInterpolator1317.setKey(new float[]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1}, 11);
OrientationInterpolator1317.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.353300005197525,-1,0,0,0.107199996709824,1,0,0,0.400000005960465,1,0,0,0.127000004053116,-1,0,0,0.0179999992251396,-1,0,0,0.0579999983310699,-1,0,0,0.239999994635582,-1,0,0,0.349999994039536,-1,0,0,0.330000013113022,0,0,1,0}, 44);
Group1311.addChild(&OrientationInterpolator1317);

OrientationInterpolator& OrientationInterpolator1318 =  OrientationInterpolator();
OrientationInterpolator1318.setDEF(CString("L_subtalar_ANIMATOR"));
OrientationInterpolator1318.setKey(new float[]{0,0.3,1}, 3);
OrientationInterpolator1318.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1311.addChild(&OrientationInterpolator1318);

OrientationInterpolator& OrientationInterpolator1319 =  OrientationInterpolator();
OrientationInterpolator1319.setDEF(CString("L_MIDTARSAL_ANIMATOR"));
OrientationInterpolator1319.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1319.setKeyValue(new float[]{1,0,0,0,1,0,0,-0.200000002980232,1,0,0,0}, 12);
Group1311.addChild(&OrientationInterpolator1319);

OrientationInterpolator& OrientationInterpolator1320 =  OrientationInterpolator();
OrientationInterpolator1320.setDEF(CString("L_metatarsal_ANIMATOR"));
OrientationInterpolator1320.setKey(new float[]{0,0.2,0.4,0.8,1}, 5);
OrientationInterpolator1320.setKeyValue(new float[]{-1,0,0,0.300000011920929,-1,0,0,0.150000005960464,1,0,0,0.300000011920929,0,0,1,0,-1,0,0,0.300000011920929}, 20);
Group1311.addChild(&OrientationInterpolator1320);

OrientationInterpolator& OrientationInterpolator1321 =  OrientationInterpolator();
OrientationInterpolator1321.setDEF(CString("R_HIP_ANIMATOR"));
OrientationInterpolator1321.setKey(new float[]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator1321.setKeyValue(new float[]{-0.583100020885468,0.0351100005209446,0.811600029468536,0.148100003600121,-0.995000004768372,0.0229599997401238,0.0967399999499321,0.468300014734268,-1,0.0019000000320375,0.00796000007539988,0.473199993371964,-0.998000025749207,-0.0157999992370605,-0.0610200017690659,0.50789999961853,-0.991100013256073,-0.0354099981486797,-0.128600001335144,0.541899979114533,-0.913100004196167,-0.0624300017952919,-0.402999997138977,0.33610001206398,-0.430599987506866,-0.0796200037002564,-0.898999989032745,0.0703800022602081,1,0,0,0.257099986076355,0.989099979400635,-0.0280499998480082,0.144400000572205,0.387899994850159,-0.583100020885468,0.0351100005209446,0.811600029468536,0.148100003600121}, 40);
Group1311.addChild(&OrientationInterpolator1321);

OrientationInterpolator& OrientationInterpolator1322 =  OrientationInterpolator();
OrientationInterpolator1322.setDEF(CString("R_KNEE_ANIMATOR"));
OrientationInterpolator1322.setKey(new float[]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator1322.setKeyValue(new float[]{1,0,0,0.857299983501434,1,0,0,0.892599999904633,1,0,0,0.535099983215332,1,0,0,0.175600007176399,1,0,0,0.119400002062321,1,0,0,0.315299987792969,1,0,0,0.0935399979352951,1,0,0,0.0855799987912178,1,0,0,0.247500002384186,1,0,0,0.857299983501434}, 40);
Group1311.addChild(&OrientationInterpolator1322);

OrientationInterpolator& OrientationInterpolator1323 =  OrientationInterpolator();
OrientationInterpolator1323.setDEF(CString("R_subtalar_ANIMATOR"));
OrientationInterpolator1323.setKey(new float[]{0,0.225,0.25,0.35,0.45,0.85,0.91}, 7);
OrientationInterpolator1323.setKeyValue(new float[]{-1,0,0,0.1,0,0,1,0,0,0,1,0,1,0,0,0.1,0,0,1,0,1,0,0,0.1,1,0,0,0.25}, 28);
Group1311.addChild(&OrientationInterpolator1323);

OrientationInterpolator& OrientationInterpolator1324 =  OrientationInterpolator();
OrientationInterpolator1324.setDEF(CString("R_MIDTARSAL_ANIMATOR"));
OrientationInterpolator1324.setKey(new float[]{0,0.22,1}, 3);
OrientationInterpolator1324.setKeyValue(new float[]{1,0,0,-0.200000002980232,0,0,1,0,1,0,0,-0.200000002980232}, 12);
Group1311.addChild(&OrientationInterpolator1324);

OrientationInterpolator& OrientationInterpolator1325 =  OrientationInterpolator();
OrientationInterpolator1325.setDEF(CString("R_metatarsal_ANIMATOR"));
OrientationInterpolator1325.setKey(new float[]{0,0.2,0.4,0.8,1}, 5);
OrientationInterpolator1325.setKeyValue(new float[]{-1,0,0,0.150000005960464,0,0,1,0,1,0,0,0.300000011920929,-1,0,0,0.300000011920929,-1,0,0,0.150000005960464}, 20);
Group1311.addChild(&OrientationInterpolator1325);

OrientationInterpolator& OrientationInterpolator1326 =  OrientationInterpolator();
OrientationInterpolator1326.setDEF(CString("VL5_ANIMATOR"));
OrientationInterpolator1326.setKey(new float[]{0,0.2083,0.375,0.75,0.8333,1}, 6);
OrientationInterpolator1326.setKeyValue(new float[]{0,1,0,0.0825999975204468,-0.0197199992835522,-0.597400009632111,0.801699995994568,0.0823099985718727,0.0092960000038147,-0.964800000190735,0.262699991464615,0.17339999973774,-0.0123800002038479,0.954900026321411,-0.29679998755455,0.0873199999332428,-0.00812499970197678,0.969099998474121,-0.246299996972084,0.158000007271767,0,1,0,0.0825999975204468}, 24);
Group1311.addChild(&OrientationInterpolator1326);

OrientationInterpolator& OrientationInterpolator1327 =  OrientationInterpolator();
OrientationInterpolator1327.setDEF(CString("SKULLBASE_ANIMATOR"));
OrientationInterpolator1327.setKey(new float[]{0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1}, 10);
OrientationInterpolator1327.setKeyValue(new float[]{0,-1,0,0.0864000022411346,0,1,0,0.182500004768372,0,1,0,0.150499999523163,0,1,0,0.10530000180006,0,1,0,0.0439100004732609,0,-1,0,0.031190000474453,0,-1,0,0.0793600007891655,0,-1,0,0.16159999370575,0,-1,0,0.155000001192093,0,-1,0,0.0864199995994568}, 40);
Group1311.addChild(&OrientationInterpolator1327);

OrientationInterpolator& OrientationInterpolator1328 =  OrientationInterpolator();
OrientationInterpolator1328.setDEF(CString("L_SHOULDER_ANIMATOR"));
OrientationInterpolator1328.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator1328.setKeyValue(new float[]{1,0,0.400000005960465,0.119999997317791,-1,0,0.400000005960465,0.186000004410744,1,0,0.100000001490116,0.335999995470047,1,0,0.400000005960465,0.119999997317791}, 16);
Group1311.addChild(&OrientationInterpolator1328);

OrientationInterpolator& OrientationInterpolator1329 =  OrientationInterpolator();
OrientationInterpolator1329.setDEF(CString("L_ELBOW_ANIMATOR"));
OrientationInterpolator1329.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator1329.setKeyValue(new float[]{-1,0,0,0.0659999996423721,-1,0,0,0.488000005483627,-1,0,0,0.0176999997347593,-1,0,0,0.065987803041935}, 16);
Group1311.addChild(&OrientationInterpolator1329);

OrientationInterpolator& OrientationInterpolator1330 =  OrientationInterpolator();
OrientationInterpolator1330.setDEF(CString("L_WRIST_ANIMATOR"));
OrientationInterpolator1330.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator1330.setKeyValue(new float[]{0,-1,0,0.460999995470047,-0.330199986696243,-0.927500009536743,0.175500005483627,0.538800001144409,0.0327773988246918,-0.99931401014328,-0.0172185003757477,0.492033004760742,0,-1,0,0.46110001206398}, 16);
Group1311.addChild(&OrientationInterpolator1330);

OrientationInterpolator& OrientationInterpolator1331 =  OrientationInterpolator();
OrientationInterpolator1331.setDEF(CString("R_SHOULDER_ANIMATOR"));
OrientationInterpolator1331.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator1331.setKeyValue(new float[]{-1,0,-1,0.0920000001788139,1,0,-0.200000002980232,0.319700002670288,-1,0,-0.5,0.156399995088577,-1,0,-1,0.0920000001788139}, 16);
Group1311.addChild(&OrientationInterpolator1331);

OrientationInterpolator& OrientationInterpolator1332 =  OrientationInterpolator();
OrientationInterpolator1332.setDEF(CString("R_ELBOW_ANIMATOR"));
OrientationInterpolator1332.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator1332.setKeyValue(new float[]{-1,0,0,0.411500006914139,-1,0,0,0.0925000011920929,-1,0,0,0.572567999362946,-1,0,0,0.411507993936539}, 16);
Group1311.addChild(&OrientationInterpolator1332);

OrientationInterpolator& OrientationInterpolator1333 =  OrientationInterpolator();
OrientationInterpolator1333.setDEF(CString("R_WRIST_ANIMATOR"));
OrientationInterpolator1333.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator1333.setKeyValue(new float[]{-0.812900006771088,0.475899994373322,-0.335700005292892,0.13459999859333,0.153300002217293,-0.987800002098084,0.0258200000971556,0.390199989080429,-0.570100009441376,0.760399997234345,-0.310999989509583,0.36599999666214,-0.812900006771088,0.475899994373322,-0.335700005292892,0.13459999859333}, 16);
Group1311.addChild(&OrientationInterpolator1333);

Scene33.addChild(&Group1311);

ROUTE& ROUTE1334 =  ROUTE();
ROUTE1334.setFromNode(CString("Time2"));
ROUTE1334.setFromField(CString("fraction_changed"));
ROUTE1334.setToNode(CString("vc6Yaw"));
ROUTE1334.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1334);

ROUTE& ROUTE1335 =  ROUTE();
ROUTE1335.setFromNode(CString("vc6Yaw"));
ROUTE1335.setFromField(CString("value_changed"));
ROUTE1335.setToNode(CString("Joe_vc6"));
ROUTE1335.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1335);

ROUTE& ROUTE1336 =  ROUTE();
ROUTE1336.setFromNode(CString("Time3"));
ROUTE1336.setFromField(CString("fraction_changed"));
ROUTE1336.setToNode(CString("EyeballsRotation"));
ROUTE1336.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1336);

ROUTE& ROUTE1337 =  ROUTE();
ROUTE1337.setFromNode(CString("EyeballsRotation"));
ROUTE1337.setFromField(CString("value_changed"));
ROUTE1337.setToNode(CString("Joe_r_eyeball_joint"));
ROUTE1337.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1337);

ROUTE& ROUTE1338 =  ROUTE();
ROUTE1338.setFromNode(CString("EyeballsRotation"));
ROUTE1338.setFromField(CString("value_changed"));
ROUTE1338.setToNode(CString("Joe_l_eyeball_joint"));
ROUTE1338.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1338);

ROUTE& ROUTE1339 =  ROUTE();
ROUTE1339.setFromNode(CString("r_sternoclavicularRelax"));
ROUTE1339.setFromField(CString("value_changed"));
ROUTE1339.setToNode(CString("Joe_r_sternoclavicular"));
ROUTE1339.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1339);

ROUTE& ROUTE1340 =  ROUTE();
ROUTE1340.setFromNode(CString("r_acromioclavicularRelax"));
ROUTE1340.setFromField(CString("value_changed"));
ROUTE1340.setToNode(CString("Joe_r_acromioclavicular"));
ROUTE1340.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1340);

ROUTE& ROUTE1341 =  ROUTE();
ROUTE1341.setFromNode(CString("r_shoulderRelax"));
ROUTE1341.setFromField(CString("value_changed"));
ROUTE1341.setToNode(CString("Joe_r_shoulder"));
ROUTE1341.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1341);

ROUTE& ROUTE1342 =  ROUTE();
ROUTE1342.setFromNode(CString("r_elbowRelax"));
ROUTE1342.setFromField(CString("value_changed"));
ROUTE1342.setToNode(CString("Joe_r_elbow"));
ROUTE1342.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1342);

ROUTE& ROUTE1343 =  ROUTE();
ROUTE1343.setFromNode(CString("r_wristRelax"));
ROUTE1343.setFromField(CString("value_changed"));
ROUTE1343.setToNode(CString("Joe_r_wrist"));
ROUTE1343.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1343);

ROUTE& ROUTE1344 =  ROUTE();
ROUTE1344.setFromNode(CString("r_thumb1Relax"));
ROUTE1344.setFromField(CString("value_changed"));
ROUTE1344.setToNode(CString("Joe_r_thumb1"));
ROUTE1344.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1344);

ROUTE& ROUTE1345 =  ROUTE();
ROUTE1345.setFromNode(CString("r_thumb2Relax"));
ROUTE1345.setFromField(CString("value_changed"));
ROUTE1345.setToNode(CString("Joe_r_thumb2"));
ROUTE1345.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1345);

ROUTE& ROUTE1346 =  ROUTE();
ROUTE1346.setFromNode(CString("r_thumb3Relax"));
ROUTE1346.setFromField(CString("value_changed"));
ROUTE1346.setToNode(CString("Joe_r_thumb3"));
ROUTE1346.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1346);

ROUTE& ROUTE1347 =  ROUTE();
ROUTE1347.setFromNode(CString("r_index0Relax"));
ROUTE1347.setFromField(CString("value_changed"));
ROUTE1347.setToNode(CString("Joe_r_index0"));
ROUTE1347.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1347);

ROUTE& ROUTE1348 =  ROUTE();
ROUTE1348.setFromNode(CString("r_index1Relax"));
ROUTE1348.setFromField(CString("value_changed"));
ROUTE1348.setToNode(CString("Joe_r_index1"));
ROUTE1348.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1348);

ROUTE& ROUTE1349 =  ROUTE();
ROUTE1349.setFromNode(CString("r_fingers2Relax"));
ROUTE1349.setFromField(CString("value_changed"));
ROUTE1349.setToNode(CString("Joe_r_index2"));
ROUTE1349.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1349);

ROUTE& ROUTE1350 =  ROUTE();
ROUTE1350.setFromNode(CString("r_fingers3Relax"));
ROUTE1350.setFromField(CString("value_changed"));
ROUTE1350.setToNode(CString("Joe_r_index3"));
ROUTE1350.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1350);

ROUTE& ROUTE1351 =  ROUTE();
ROUTE1351.setFromNode(CString("r_middle0Relax"));
ROUTE1351.setFromField(CString("value_changed"));
ROUTE1351.setToNode(CString("Joe_r_middle0"));
ROUTE1351.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1351);

ROUTE& ROUTE1352 =  ROUTE();
ROUTE1352.setFromNode(CString("r_middle1Relax"));
ROUTE1352.setFromField(CString("value_changed"));
ROUTE1352.setToNode(CString("Joe_r_middle1"));
ROUTE1352.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1352);

ROUTE& ROUTE1353 =  ROUTE();
ROUTE1353.setFromNode(CString("r_fingers2Relax"));
ROUTE1353.setFromField(CString("value_changed"));
ROUTE1353.setToNode(CString("Joe_r_middle2"));
ROUTE1353.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1353);

ROUTE& ROUTE1354 =  ROUTE();
ROUTE1354.setFromNode(CString("r_fingers3Relax"));
ROUTE1354.setFromField(CString("value_changed"));
ROUTE1354.setToNode(CString("Joe_r_middle3"));
ROUTE1354.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1354);

ROUTE& ROUTE1355 =  ROUTE();
ROUTE1355.setFromNode(CString("r_ring0Relax"));
ROUTE1355.setFromField(CString("value_changed"));
ROUTE1355.setToNode(CString("Joe_r_ring0"));
ROUTE1355.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1355);

ROUTE& ROUTE1356 =  ROUTE();
ROUTE1356.setFromNode(CString("r_ring1Relax"));
ROUTE1356.setFromField(CString("value_changed"));
ROUTE1356.setToNode(CString("Joe_r_ring1"));
ROUTE1356.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1356);

ROUTE& ROUTE1357 =  ROUTE();
ROUTE1357.setFromNode(CString("r_fingers2Relax"));
ROUTE1357.setFromField(CString("value_changed"));
ROUTE1357.setToNode(CString("Joe_r_ring2"));
ROUTE1357.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1357);

ROUTE& ROUTE1358 =  ROUTE();
ROUTE1358.setFromNode(CString("r_fingers3Relax"));
ROUTE1358.setFromField(CString("value_changed"));
ROUTE1358.setToNode(CString("Joe_r_ring3"));
ROUTE1358.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1358);

ROUTE& ROUTE1359 =  ROUTE();
ROUTE1359.setFromNode(CString("r_pinky0Relax"));
ROUTE1359.setFromField(CString("value_changed"));
ROUTE1359.setToNode(CString("Joe_r_pinky0"));
ROUTE1359.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1359);

ROUTE& ROUTE1360 =  ROUTE();
ROUTE1360.setFromNode(CString("r_pinky1Relax"));
ROUTE1360.setFromField(CString("value_changed"));
ROUTE1360.setToNode(CString("Joe_r_pinky1"));
ROUTE1360.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1360);

ROUTE& ROUTE1361 =  ROUTE();
ROUTE1361.setFromNode(CString("r_fingers2Relax"));
ROUTE1361.setFromField(CString("value_changed"));
ROUTE1361.setToNode(CString("Joe_r_pinky2"));
ROUTE1361.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1361);

ROUTE& ROUTE1362 =  ROUTE();
ROUTE1362.setFromNode(CString("r_fingers3Relax"));
ROUTE1362.setFromField(CString("value_changed"));
ROUTE1362.setToNode(CString("Joe_r_pinky3"));
ROUTE1362.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1362);

ROUTE& ROUTE1363 =  ROUTE();
ROUTE1363.setFromNode(CString("Time2"));
ROUTE1363.setFromField(CString("fraction_changed"));
ROUTE1363.setToNode(CString("r_sternoclavicularRoll"));
ROUTE1363.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1363);

ROUTE& ROUTE1364 =  ROUTE();
ROUTE1364.setFromNode(CString("Time2"));
ROUTE1364.setFromField(CString("fraction_changed"));
ROUTE1364.setToNode(CString("r_acromioclavicularRoll"));
ROUTE1364.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1364);

ROUTE& ROUTE1365 =  ROUTE();
ROUTE1365.setFromNode(CString("Time2"));
ROUTE1365.setFromField(CString("fraction_changed"));
ROUTE1365.setToNode(CString("r_shoulderRoll"));
ROUTE1365.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1365);

ROUTE& ROUTE1366 =  ROUTE();
ROUTE1366.setFromNode(CString("Time2"));
ROUTE1366.setFromField(CString("fraction_changed"));
ROUTE1366.setToNode(CString("r_ForeArmPitch"));
ROUTE1366.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1366);

ROUTE& ROUTE1367 =  ROUTE();
ROUTE1367.setFromNode(CString("Time2"));
ROUTE1367.setFromField(CString("fraction_changed"));
ROUTE1367.setToNode(CString("r_wristRoll"));
ROUTE1367.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1367);

ROUTE& ROUTE1368 =  ROUTE();
ROUTE1368.setFromNode(CString("Time2"));
ROUTE1368.setFromField(CString("fraction_changed"));
ROUTE1368.setToNode(CString("r_handPitch"));
ROUTE1368.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1368);

ROUTE& ROUTE1369 =  ROUTE();
ROUTE1369.setFromNode(CString("Time2"));
ROUTE1369.setFromField(CString("fraction_changed"));
ROUTE1369.setToNode(CString("r_thumb1Pitch"));
ROUTE1369.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1369);

ROUTE& ROUTE1370 =  ROUTE();
ROUTE1370.setFromNode(CString("Time2"));
ROUTE1370.setFromField(CString("fraction_changed"));
ROUTE1370.setToNode(CString("r_thumb2Pitch"));
ROUTE1370.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1370);

ROUTE& ROUTE1371 =  ROUTE();
ROUTE1371.setFromNode(CString("r_sternoclavicularRoll"));
ROUTE1371.setFromField(CString("value_changed"));
ROUTE1371.setToNode(CString("Joe_r_sternoclavicular"));
ROUTE1371.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1371);

ROUTE& ROUTE1372 =  ROUTE();
ROUTE1372.setFromNode(CString("r_acromioclavicularRoll"));
ROUTE1372.setFromField(CString("value_changed"));
ROUTE1372.setToNode(CString("Joe_r_acromioclavicular"));
ROUTE1372.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1372);

ROUTE& ROUTE1373 =  ROUTE();
ROUTE1373.setFromNode(CString("r_shoulderRoll"));
ROUTE1373.setFromField(CString("value_changed"));
ROUTE1373.setToNode(CString("Joe_r_shoulder"));
ROUTE1373.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1373);

ROUTE& ROUTE1374 =  ROUTE();
ROUTE1374.setFromNode(CString("r_ForeArmPitch"));
ROUTE1374.setFromField(CString("value_changed"));
ROUTE1374.setToNode(CString("Joe_r_elbow"));
ROUTE1374.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1374);

ROUTE& ROUTE1375 =  ROUTE();
ROUTE1375.setFromNode(CString("r_wristRoll"));
ROUTE1375.setFromField(CString("value_changed"));
ROUTE1375.setToNode(CString("Joe_r_wrist"));
ROUTE1375.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1375);

ROUTE& ROUTE1376 =  ROUTE();
ROUTE1376.setFromNode(CString("r_handPitch"));
ROUTE1376.setFromField(CString("value_changed"));
ROUTE1376.setToNode(CString("Joe_r_index0"));
ROUTE1376.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1376);

ROUTE& ROUTE1377 =  ROUTE();
ROUTE1377.setFromNode(CString("r_handPitch"));
ROUTE1377.setFromField(CString("value_changed"));
ROUTE1377.setToNode(CString("Joe_r_index1"));
ROUTE1377.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1377);

ROUTE& ROUTE1378 =  ROUTE();
ROUTE1378.setFromNode(CString("r_handPitch"));
ROUTE1378.setFromField(CString("value_changed"));
ROUTE1378.setToNode(CString("Joe_r_index2"));
ROUTE1378.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1378);

ROUTE& ROUTE1379 =  ROUTE();
ROUTE1379.setFromNode(CString("r_handPitch"));
ROUTE1379.setFromField(CString("value_changed"));
ROUTE1379.setToNode(CString("Joe_r_index3"));
ROUTE1379.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1379);

ROUTE& ROUTE1380 =  ROUTE();
ROUTE1380.setFromNode(CString("r_handPitch"));
ROUTE1380.setFromField(CString("value_changed"));
ROUTE1380.setToNode(CString("Joe_r_middle0"));
ROUTE1380.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1380);

ROUTE& ROUTE1381 =  ROUTE();
ROUTE1381.setFromNode(CString("r_handPitch"));
ROUTE1381.setFromField(CString("value_changed"));
ROUTE1381.setToNode(CString("Joe_r_middle1"));
ROUTE1381.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1381);

ROUTE& ROUTE1382 =  ROUTE();
ROUTE1382.setFromNode(CString("r_handPitch"));
ROUTE1382.setFromField(CString("value_changed"));
ROUTE1382.setToNode(CString("Joe_r_middle2"));
ROUTE1382.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1382);

ROUTE& ROUTE1383 =  ROUTE();
ROUTE1383.setFromNode(CString("r_handPitch"));
ROUTE1383.setFromField(CString("value_changed"));
ROUTE1383.setToNode(CString("Joe_r_middle3"));
ROUTE1383.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1383);

ROUTE& ROUTE1384 =  ROUTE();
ROUTE1384.setFromNode(CString("r_handPitch"));
ROUTE1384.setFromField(CString("value_changed"));
ROUTE1384.setToNode(CString("Joe_r_ring0"));
ROUTE1384.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1384);

ROUTE& ROUTE1385 =  ROUTE();
ROUTE1385.setFromNode(CString("r_handPitch"));
ROUTE1385.setFromField(CString("value_changed"));
ROUTE1385.setToNode(CString("Joe_r_ring1"));
ROUTE1385.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1385);

ROUTE& ROUTE1386 =  ROUTE();
ROUTE1386.setFromNode(CString("r_handPitch"));
ROUTE1386.setFromField(CString("value_changed"));
ROUTE1386.setToNode(CString("Joe_r_ring2"));
ROUTE1386.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1386);

ROUTE& ROUTE1387 =  ROUTE();
ROUTE1387.setFromNode(CString("r_handPitch"));
ROUTE1387.setFromField(CString("value_changed"));
ROUTE1387.setToNode(CString("Joe_r_ring3"));
ROUTE1387.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1387);

ROUTE& ROUTE1388 =  ROUTE();
ROUTE1388.setFromNode(CString("r_handPitch"));
ROUTE1388.setFromField(CString("value_changed"));
ROUTE1388.setToNode(CString("Joe_r_pinky0"));
ROUTE1388.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1388);

ROUTE& ROUTE1389 =  ROUTE();
ROUTE1389.setFromNode(CString("r_handPitch"));
ROUTE1389.setFromField(CString("value_changed"));
ROUTE1389.setToNode(CString("Joe_r_pinky1"));
ROUTE1389.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1389);

ROUTE& ROUTE1390 =  ROUTE();
ROUTE1390.setFromNode(CString("r_handPitch"));
ROUTE1390.setFromField(CString("value_changed"));
ROUTE1390.setToNode(CString("Joe_r_pinky2"));
ROUTE1390.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1390);

ROUTE& ROUTE1391 =  ROUTE();
ROUTE1391.setFromNode(CString("r_handPitch"));
ROUTE1391.setFromField(CString("value_changed"));
ROUTE1391.setToNode(CString("Joe_r_pinky3"));
ROUTE1391.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1391);

ROUTE& ROUTE1392 =  ROUTE();
ROUTE1392.setFromNode(CString("r_thumb1Pitch"));
ROUTE1392.setFromField(CString("value_changed"));
ROUTE1392.setToNode(CString("Joe_r_thumb1"));
ROUTE1392.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1392);

ROUTE& ROUTE1393 =  ROUTE();
ROUTE1393.setFromNode(CString("r_thumb2Pitch"));
ROUTE1393.setFromField(CString("value_changed"));
ROUTE1393.setToNode(CString("Joe_r_thumb2"));
ROUTE1393.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1393);

ROUTE& ROUTE1394 =  ROUTE();
ROUTE1394.setFromNode(CString("r_thumb2Pitch"));
ROUTE1394.setFromField(CString("value_changed"));
ROUTE1394.setToNode(CString("Joe_r_thumb3"));
ROUTE1394.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1394);

ROUTE& ROUTE1395 =  ROUTE();
ROUTE1395.setFromNode(CString("l_shoulderRoll"));
ROUTE1395.setFromField(CString("value_changed"));
ROUTE1395.setToNode(CString("Joe_l_shoulder"));
ROUTE1395.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1395);

ROUTE& ROUTE1396 =  ROUTE();
ROUTE1396.setFromNode(CString("Time1"));
ROUTE1396.setFromField(CString("fraction_changed"));
ROUTE1396.setToNode(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
ROUTE1396.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1396);

ROUTE& ROUTE1397 =  ROUTE();
ROUTE1397.setFromNode(CString("Time1"));
ROUTE1397.setFromField(CString("fraction_changed"));
ROUTE1397.setToNode(CString("HUMANOIDROOT_ANIMATOR"));
ROUTE1397.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1397);

ROUTE& ROUTE1398 =  ROUTE();
ROUTE1398.setFromNode(CString("Time1"));
ROUTE1398.setFromField(CString("fraction_changed"));
ROUTE1398.setToNode(CString("L_HIP_ANIMATOR"));
ROUTE1398.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1398);

ROUTE& ROUTE1399 =  ROUTE();
ROUTE1399.setFromNode(CString("Time1"));
ROUTE1399.setFromField(CString("fraction_changed"));
ROUTE1399.setToNode(CString("L_KNEE_ANIMATOR"));
ROUTE1399.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1399);

ROUTE& ROUTE1400 =  ROUTE();
ROUTE1400.setFromNode(CString("Time1"));
ROUTE1400.setFromField(CString("fraction_changed"));
ROUTE1400.setToNode(CString("L_ANKLE_ANIMATOR"));
ROUTE1400.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1400);

ROUTE& ROUTE1401 =  ROUTE();
ROUTE1401.setFromNode(CString("Time1"));
ROUTE1401.setFromField(CString("fraction_changed"));
ROUTE1401.setToNode(CString("L_subtalar_ANIMATOR"));
ROUTE1401.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1401);

ROUTE& ROUTE1402 =  ROUTE();
ROUTE1402.setFromNode(CString("Time1"));
ROUTE1402.setFromField(CString("fraction_changed"));
ROUTE1402.setToNode(CString("L_MIDTARSAL_ANIMATOR"));
ROUTE1402.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1402);

ROUTE& ROUTE1403 =  ROUTE();
ROUTE1403.setFromNode(CString("Time1"));
ROUTE1403.setFromField(CString("fraction_changed"));
ROUTE1403.setToNode(CString("L_metatarsal_ANIMATOR"));
ROUTE1403.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1403);

ROUTE& ROUTE1404 =  ROUTE();
ROUTE1404.setFromNode(CString("Time1"));
ROUTE1404.setFromField(CString("fraction_changed"));
ROUTE1404.setToNode(CString("R_HIP_ANIMATOR"));
ROUTE1404.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1404);

ROUTE& ROUTE1405 =  ROUTE();
ROUTE1405.setFromNode(CString("Time1"));
ROUTE1405.setFromField(CString("fraction_changed"));
ROUTE1405.setToNode(CString("R_KNEE_ANIMATOR"));
ROUTE1405.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1405);

ROUTE& ROUTE1406 =  ROUTE();
ROUTE1406.setFromNode(CString("Time1"));
ROUTE1406.setFromField(CString("fraction_changed"));
ROUTE1406.setToNode(CString("R_ANKLE_ANIMATOR"));
ROUTE1406.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1406);

ROUTE& ROUTE1407 =  ROUTE();
ROUTE1407.setFromNode(CString("Time1"));
ROUTE1407.setFromField(CString("fraction_changed"));
ROUTE1407.setToNode(CString("R_subtalar_ANIMATOR"));
ROUTE1407.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1407);

ROUTE& ROUTE1408 =  ROUTE();
ROUTE1408.setFromNode(CString("Time1"));
ROUTE1408.setFromField(CString("fraction_changed"));
ROUTE1408.setToNode(CString("R_MIDTARSAL_ANIMATOR"));
ROUTE1408.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1408);

ROUTE& ROUTE1409 =  ROUTE();
ROUTE1409.setFromNode(CString("Time1"));
ROUTE1409.setFromField(CString("fraction_changed"));
ROUTE1409.setToNode(CString("R_metatarsal_ANIMATOR"));
ROUTE1409.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1409);

ROUTE& ROUTE1410 =  ROUTE();
ROUTE1410.setFromNode(CString("Time1"));
ROUTE1410.setFromField(CString("fraction_changed"));
ROUTE1410.setToNode(CString("VL5_ANIMATOR"));
ROUTE1410.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1410);

ROUTE& ROUTE1411 =  ROUTE();
ROUTE1411.setFromNode(CString("Time1"));
ROUTE1411.setFromField(CString("fraction_changed"));
ROUTE1411.setToNode(CString("SKULLBASE_ANIMATOR"));
ROUTE1411.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1411);

ROUTE& ROUTE1412 =  ROUTE();
ROUTE1412.setFromNode(CString("Time1"));
ROUTE1412.setFromField(CString("fraction_changed"));
ROUTE1412.setToNode(CString("L_SHOULDER_ANIMATOR"));
ROUTE1412.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1412);

ROUTE& ROUTE1413 =  ROUTE();
ROUTE1413.setFromNode(CString("Time1"));
ROUTE1413.setFromField(CString("fraction_changed"));
ROUTE1413.setToNode(CString("L_ELBOW_ANIMATOR"));
ROUTE1413.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1413);

ROUTE& ROUTE1414 =  ROUTE();
ROUTE1414.setFromNode(CString("Time1"));
ROUTE1414.setFromField(CString("fraction_changed"));
ROUTE1414.setToNode(CString("L_WRIST_ANIMATOR"));
ROUTE1414.setToField(CString("set_fraction"));
Scene33.addChild(&ROUTE1414);

ROUTE& ROUTE1415 =  ROUTE();
ROUTE1415.setFromNode(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
ROUTE1415.setFromField(CString("value_changed"));
ROUTE1415.setToNode(CString("Joe_HumanoidRoot"));
ROUTE1415.setToField(CString("set_translation"));
Scene33.addChild(&ROUTE1415);

ROUTE& ROUTE1416 =  ROUTE();
ROUTE1416.setFromNode(CString("HUMANOIDROOT_ANIMATOR"));
ROUTE1416.setFromField(CString("value_changed"));
ROUTE1416.setToNode(CString("Joe_HumanoidRoot"));
ROUTE1416.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1416);

ROUTE& ROUTE1417 =  ROUTE();
ROUTE1417.setFromNode(CString("L_HIP_ANIMATOR"));
ROUTE1417.setFromField(CString("value_changed"));
ROUTE1417.setToNode(CString("Joe_l_hip"));
ROUTE1417.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1417);

ROUTE& ROUTE1418 =  ROUTE();
ROUTE1418.setFromNode(CString("L_KNEE_ANIMATOR"));
ROUTE1418.setFromField(CString("value_changed"));
ROUTE1418.setToNode(CString("Joe_l_knee"));
ROUTE1418.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1418);

ROUTE& ROUTE1419 =  ROUTE();
ROUTE1419.setFromNode(CString("L_ANKLE_ANIMATOR"));
ROUTE1419.setFromField(CString("value_changed"));
ROUTE1419.setToNode(CString("Joe_l_ankle"));
ROUTE1419.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1419);

ROUTE& ROUTE1420 =  ROUTE();
ROUTE1420.setFromNode(CString("L_MIDTARSAL_ANIMATOR"));
ROUTE1420.setFromField(CString("value_changed"));
ROUTE1420.setToNode(CString("Joe_l_midtarsal"));
ROUTE1420.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1420);

ROUTE& ROUTE1421 =  ROUTE();
ROUTE1421.setFromNode(CString("L_subtalar_ANIMATOR"));
ROUTE1421.setFromField(CString("value_changed"));
ROUTE1421.setToNode(CString("Joe_l_subtalar"));
ROUTE1421.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1421);

ROUTE& ROUTE1422 =  ROUTE();
ROUTE1422.setFromNode(CString("L_metatarsal_ANIMATOR"));
ROUTE1422.setFromField(CString("value_changed"));
ROUTE1422.setToNode(CString("Joe_l_metatarsal"));
ROUTE1422.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1422);

ROUTE& ROUTE1423 =  ROUTE();
ROUTE1423.setFromNode(CString("R_HIP_ANIMATOR"));
ROUTE1423.setFromField(CString("value_changed"));
ROUTE1423.setToNode(CString("Joe_r_hip"));
ROUTE1423.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1423);

ROUTE& ROUTE1424 =  ROUTE();
ROUTE1424.setFromNode(CString("R_KNEE_ANIMATOR"));
ROUTE1424.setFromField(CString("value_changed"));
ROUTE1424.setToNode(CString("Joe_r_knee"));
ROUTE1424.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1424);

ROUTE& ROUTE1425 =  ROUTE();
ROUTE1425.setFromNode(CString("R_ANKLE_ANIMATOR"));
ROUTE1425.setFromField(CString("value_changed"));
ROUTE1425.setToNode(CString("Joe_r_ankle"));
ROUTE1425.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1425);

ROUTE& ROUTE1426 =  ROUTE();
ROUTE1426.setFromNode(CString("R_subtalar_ANIMATOR"));
ROUTE1426.setFromField(CString("value_changed"));
ROUTE1426.setToNode(CString("Joe_r_subtalar"));
ROUTE1426.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1426);

ROUTE& ROUTE1427 =  ROUTE();
ROUTE1427.setFromNode(CString("R_MIDTARSAL_ANIMATOR"));
ROUTE1427.setFromField(CString("value_changed"));
ROUTE1427.setToNode(CString("Joe_r_midtarsal"));
ROUTE1427.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1427);

ROUTE& ROUTE1428 =  ROUTE();
ROUTE1428.setFromNode(CString("R_metatarsal_ANIMATOR"));
ROUTE1428.setFromField(CString("value_changed"));
ROUTE1428.setToNode(CString("Joe_r_metatarsal"));
ROUTE1428.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1428);

ROUTE& ROUTE1429 =  ROUTE();
ROUTE1429.setFromNode(CString("VL5_ANIMATOR"));
ROUTE1429.setFromField(CString("value_changed"));
ROUTE1429.setToNode(CString("Joe_vl5"));
ROUTE1429.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1429);

ROUTE& ROUTE1430 =  ROUTE();
ROUTE1430.setFromNode(CString("SKULLBASE_ANIMATOR"));
ROUTE1430.setFromField(CString("value_changed"));
ROUTE1430.setToNode(CString("Joe_skullbase"));
ROUTE1430.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1430);

ROUTE& ROUTE1431 =  ROUTE();
ROUTE1431.setFromNode(CString("L_SHOULDER_ANIMATOR"));
ROUTE1431.setFromField(CString("value_changed"));
ROUTE1431.setToNode(CString("Joe_l_shoulder"));
ROUTE1431.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1431);

ROUTE& ROUTE1432 =  ROUTE();
ROUTE1432.setFromNode(CString("L_ELBOW_ANIMATOR"));
ROUTE1432.setFromField(CString("value_changed"));
ROUTE1432.setToNode(CString("Joe_l_elbow"));
ROUTE1432.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1432);

ROUTE& ROUTE1433 =  ROUTE();
ROUTE1433.setFromNode(CString("L_WRIST_ANIMATOR"));
ROUTE1433.setFromField(CString("value_changed"));
ROUTE1433.setToNode(CString("Joe_l_wrist"));
ROUTE1433.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1433);

ROUTE& ROUTE1434 =  ROUTE();
ROUTE1434.setFromNode(CString("R_SHOULDER_ANIMATOR"));
ROUTE1434.setFromField(CString("value_changed"));
ROUTE1434.setToNode(CString("Joe_r_shoulder"));
ROUTE1434.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1434);

ROUTE& ROUTE1435 =  ROUTE();
ROUTE1435.setFromNode(CString("R_ELBOW_ANIMATOR"));
ROUTE1435.setFromField(CString("value_changed"));
ROUTE1435.setToNode(CString("Joe_r_elbow"));
ROUTE1435.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1435);

ROUTE& ROUTE1436 =  ROUTE();
ROUTE1436.setFromNode(CString("R_WRIST_ANIMATOR"));
ROUTE1436.setFromField(CString("value_changed"));
ROUTE1436.setToNode(CString("Joe_r_wrist"));
ROUTE1436.setToField(CString("set_rotation"));
Scene33.addChild(&ROUTE1436);

X3D0.setScene(&Scene33);

}
