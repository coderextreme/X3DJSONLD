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
meta3.setContent(CString("HAnimSpecificationLOA3Animation.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("reference"));
meta5.setContent(CString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("reference"));
meta6.setContent(CString("HAnimSpecificationLOA3Illustrated.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("reference"));
meta7.setContent(CString("HAnimSpecificationLOA3Invisible.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("HAnimSpecificationExampleChangeLog.txt"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989."));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("created"));
meta15.setContent(CString("24 April 2013"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("modified"));
meta16.setContent(CString("Tue, 09 Sep 2025 19:39:08 GMT"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("error"));
meta17.setContent(CString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("Image"));
meta18.setContent(CString("HAnimSpecificationLOA3MotionH3DViewer.png"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("Image"));
meta19.setContent(CString("HAnimSpecificationLOA3MotionInstantReality.png"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("Image"));
meta20.setContent(CString("HAnimSpecificationLOA3MotionOctagaVS.png"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("Image"));
meta21.setContent(CString("HAnimSpecificationLOA3MotionView3dscene.png"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("Image"));
meta22.setContent(CString("images/BonesAllSkeletonFrontViewLOA1.png"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("Image"));
meta23.setContent(CString("images/BonesAllSkeletonFrontViewLOA2.png"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("Image"));
meta24.setContent(CString("images/BonesAllSkeletonFrontViewLOA3.png"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("creator"));
meta25.setContent(CString("Matthew T. Beitler, Joe D. Williams, Don Brutzman"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("translator"));
meta26.setContent(CString("Don Brutzman and Joe Williams"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(CString("generator"));
meta27.setContent(CString("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(CString("generator"));
meta28.setContent(CString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta28);

X3D0.setHead(&head1);

Scene& Scene29 =  Scene();
Background& Background30 =  Background();
Background30.setSkyColor(new float[]{0.3,0.3,0.3}, 3);
Scene29.addChild(&Background30);

NavigationInfo& NavigationInfo31 =  NavigationInfo();
Scene29.addChild(&NavigationInfo31);

Group& Group32 =  Group();
Group32.setDEF(CString("Original_WorldInfo"));
WorldInfo& WorldInfo33 =  WorldInfo();
WorldInfo33.setTitle(CString("HANIM 200x Default Joint Centers, LOA3"));
WorldInfo33.setInfo(new CString[]{CString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")}, 1);
Group32.addChild(&WorldInfo33);

Scene29.addChild(&Group32);

Viewpoint& Viewpoint34 =  Viewpoint();
Viewpoint34.setDescription(CString("Humanoid LOA 3 Front"));
Viewpoint34.setPosition(new float[]{0,0.4,4});
Viewpoint34.setCenterOfRotation(new float[]{0,0.9149,0.0016});
Scene29.addChild(&Viewpoint34);

Viewpoint& Viewpoint35 =  Viewpoint();
Viewpoint35.setDescription(CString("Humanoid LOA 3 Front Close"));
Viewpoint35.setPosition(new float[]{0,0.8,2});
Viewpoint35.setCenterOfRotation(new float[]{0,0.9149,0.0016});
Scene29.addChild(&Viewpoint35);

Viewpoint& Viewpoint36 =  Viewpoint();
Viewpoint36.setDescription(CString("Humanoid LOA 3 Front Closer"));
Viewpoint36.setPosition(new float[]{0,1.2,1});
Viewpoint36.setCenterOfRotation(new float[]{0,0.9149,0.0016});
Scene29.addChild(&Viewpoint36);

Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setDescription(CString("Humanoid LOA 3 Front Face"));
Viewpoint37.setPosition(new float[]{0,1.63,1});
Viewpoint37.setCenterOfRotation(new float[]{0,1.5,0.0016});
Scene29.addChild(&Viewpoint37);

Viewpoint& Viewpoint38 =  Viewpoint();
Viewpoint38.setDescription(CString("Humanoid LOA 3 Right Side"));
Viewpoint38.setPosition(new float[]{2.6,0.8,0});
Viewpoint38.setOrientation(new float[]{0,1,0,1.5708});
Viewpoint38.setCenterOfRotation(new float[]{0,0.9149,0.0016});
Scene29.addChild(&Viewpoint38);

Viewpoint& Viewpoint39 =  Viewpoint();
Viewpoint39.setDescription(CString("Humanoid LOA 3 Right Side Close"));
Viewpoint39.setPosition(new float[]{1,0.8,0.5});
Viewpoint39.setOrientation(new float[]{0,1,0,1.2});
Viewpoint39.setCenterOfRotation(new float[]{0,0.9149,0.0016});
Scene29.addChild(&Viewpoint39);

Viewpoint& Viewpoint40 =  Viewpoint();
Viewpoint40.setDescription(CString("Humanoid LOA 3 Left Side Close"));
Viewpoint40.setPosition(new float[]{-1,0.8,0.5});
Viewpoint40.setOrientation(new float[]{0,1,0,-1.2});
Viewpoint40.setCenterOfRotation(new float[]{0,0.9149,0.0016});
Scene29.addChild(&Viewpoint40);

Viewpoint& Viewpoint41 =  Viewpoint();
Viewpoint41.setDescription(CString("Humanoid LOA 3 Left Side"));
Viewpoint41.setPosition(new float[]{-2.6,0.8,0});
Viewpoint41.setOrientation(new float[]{0,1,0,-1.5708});
Viewpoint41.setCenterOfRotation(new float[]{0,0.9149,0.0016});
Scene29.addChild(&Viewpoint41);

Viewpoint& Viewpoint42 =  Viewpoint();
Viewpoint42.setDescription(CString("Humanoid LOA 3 Top"));
Viewpoint42.setPosition(new float[]{0,3.5,0});
Viewpoint42.setOrientation(new float[]{1,0,0,-1.5708});
Viewpoint42.setCenterOfRotation(new float[]{0,0.9149,0.0016});
Scene29.addChild(&Viewpoint42);

HAnimHumanoid& HAnimHumanoid43 =  HAnimHumanoid();
HAnimHumanoid43.setDEF(CString("hanim_humanoid"));
HAnimHumanoid43.X3DNode::setName(CString("humanoid"));
HAnimHumanoid43.setInfo(new CString[]{CString("authorName=Matthew T. Beitler Joe D. Williams Don Brutzman"), CString("authorEmail=HAnim@web3D.org"), CString("copyright=none"), CString("creationDate=12 May 1999"), CString("usageRestrictions=none"), CString("humanoidVersion=2.0"), CString("height=1.7504")}, 7);
HAnimHumanoid43.setVersion(CString("1.0"));
HAnimJoint& HAnimJoint44 =  HAnimJoint();
HAnimJoint44.setDEF(CString("hanim_humanoid_root"));
HAnimJoint44.X3DNode::setName(CString("humanoid_root"));
HAnimJoint44.setCenter(new float[]{0,0.824,0.0277});
HAnimSegment& HAnimSegment45 =  HAnimSegment();
HAnimSegment45.setDEF(CString("hanim_sacrum"));
HAnimSegment45.X3DNode::setName(CString("sacrum"));
TouchSensor& TouchSensor46 =  TouchSensor();
TouchSensor46.setDescription(CString("HAnimJoint HumanoidRoot, HAnimSegment sacrum"));
HAnimSegment45.addChild(&TouchSensor46);

Transform& Transform47 =  Transform();
Transform47.setTranslation(new float[]{0,0.824,0.0277});
Shape& Shape48 =  Shape();
Shape48.setDEF(CString("HAnimJointShape"));
Appearance& Appearance49 =  Appearance();
Appearance49.setDEF(CString("HAnimJointAppearance"));
Material& Material50 =  Material();
Material50.setDiffuseColor(new float[]{1,0.5,0});
Material50.setTransparency(0.5);
Appearance49.addChild(&Material50);

Shape48.addChild(&Appearance49);

Sphere& Sphere51 =  Sphere();
Sphere51.setRadius(0.006);
Shape48.setGeometry(&Sphere51);

Transform47.addChild(&Shape48);

HAnimSegment45.addChild(&Transform47);

Shape& Shape52 =  Shape();
LineSet& LineSet53 =  LineSet();
LineSet53.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA54 =  ColorRGBA();
ColorRGBA54.setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA54.setColor(new float[]{1,1,0,1,1,1,0,0.1}, 8);
LineSet53.addChild(&ColorRGBA54);

Coordinate& Coordinate55 =  Coordinate();
Coordinate55.setPoint(new float[]{0,0.824,0.0277,0,0.9149,0.0016}, 6);
LineSet53.setCoord(Coordinate55);

Shape52.setGeometry(&LineSet53);

HAnimSegment45.addChild(&Shape52);

Shape& Shape56 =  Shape();
LineSet& LineSet57 =  LineSet();
LineSet57.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA58 =  ColorRGBA();
ColorRGBA58.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet57.addChild(&ColorRGBA58);

Coordinate& Coordinate59 =  Coordinate();
Coordinate59.setPoint(new float[]{0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
LineSet57.setCoord(Coordinate59);

Shape56.setGeometry(&LineSet57);

HAnimSegment45.addChild(&Shape56);

HAnimJoint44.addChildren(&HAnimSegment45);

HAnimJoint& HAnimJoint60 =  HAnimJoint();
HAnimJoint60.setDEF(CString("hanim_sacroiliac"));
HAnimJoint60.X3DNode::setName(CString("sacroiliac"));
HAnimJoint60.setCenter(new float[]{0,0.9149,0.0016});
HAnimSegment& HAnimSegment61 =  HAnimSegment();
HAnimSegment61.setDEF(CString("hanim_pelvis"));
HAnimSegment61.X3DNode::setName(CString("pelvis"));
TouchSensor& TouchSensor62 =  TouchSensor();
TouchSensor62.setDescription(CString("HAnimJoint sacroiliac, HAnimSegment pelvis"));
HAnimSegment61.addChild(&TouchSensor62);

Transform& Transform63 =  Transform();
Transform63.setTranslation(new float[]{0,0.9149,0.0016});
Shape& Shape64 =  Shape();
Shape64.setUSE(CString("HAnimJointShape"));
Transform63.addChild(&Shape64);

HAnimSegment61.addChild(&Transform63);

Shape& Shape65 =  Shape();
LineSet& LineSet66 =  LineSet();
LineSet66.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA67 =  ColorRGBA();
ColorRGBA67.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet66.addChild(&ColorRGBA67);

Coordinate& Coordinate68 =  Coordinate();
Coordinate68.setPoint(new float[]{0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
LineSet66.setCoord(Coordinate68);

Shape65.setGeometry(&LineSet66);

HAnimSegment61.addChild(&Shape65);

Shape& Shape69 =  Shape();
LineSet& LineSet70 =  LineSet();
LineSet70.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA71 =  ColorRGBA();
ColorRGBA71.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet70.addChild(&ColorRGBA71);

Coordinate& Coordinate72 =  Coordinate();
Coordinate72.setPoint(new float[]{0,0.9149,0.0016,-0.0961,0.9124,-0.0001}, 6);
LineSet70.setCoord(Coordinate72);

Shape69.setGeometry(&LineSet70);

HAnimSegment61.addChild(&Shape69);

Shape& Shape73 =  Shape();
LineSet& LineSet74 =  LineSet();
LineSet74.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA75 =  ColorRGBA();
ColorRGBA75.setDEF(CString("HAnimSiteLineColorRGBA"));
ColorRGBA75.setColor(new float[]{1,0,0,1,1,0,0,0.1}, 8);
LineSet74.addChild(&ColorRGBA75);

Coordinate& Coordinate76 =  Coordinate();
Coordinate76.setPoint(new float[]{0,0.9149,0.0016,-0.1525,1.0628,0.0035}, 6);
LineSet74.setCoord(Coordinate76);

Shape73.setGeometry(&LineSet74);

HAnimSegment61.addChild(&Shape73);

Shape& Shape77 =  Shape();
LineSet& LineSet78 =  LineSet();
LineSet78.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA79 =  ColorRGBA();
ColorRGBA79.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet78.addChild(&ColorRGBA79);

Coordinate& Coordinate80 =  Coordinate();
Coordinate80.setPoint(new float[]{0,0.9149,0.0016,-0.1689,0.8419,0.0352}, 6);
LineSet78.setCoord(Coordinate80);

Shape77.setGeometry(&LineSet78);

HAnimSegment61.addChild(&Shape77);

Shape& Shape81 =  Shape();
LineSet& LineSet82 =  LineSet();
LineSet82.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA83 =  ColorRGBA();
ColorRGBA83.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet82.addChild(&ColorRGBA83);

Coordinate& Coordinate84 =  Coordinate();
Coordinate84.setPoint(new float[]{0,0.9149,0.0016,0.1612,1.0537,0.0008}, 6);
LineSet82.setCoord(Coordinate84);

Shape81.setGeometry(&LineSet82);

HAnimSegment61.addChild(&Shape81);

Shape& Shape85 =  Shape();
LineSet& LineSet86 =  LineSet();
LineSet86.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA87 =  ColorRGBA();
ColorRGBA87.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet86.addChild(&ColorRGBA87);

Coordinate& Coordinate88 =  Coordinate();
Coordinate88.setPoint(new float[]{0,0.9149,0.0016,0.1677,0.8336,0.0303}, 6);
LineSet86.setCoord(Coordinate88);

Shape85.setGeometry(&LineSet86);

HAnimSegment61.addChild(&Shape85);

Shape& Shape89 =  Shape();
LineSet& LineSet90 =  LineSet();
LineSet90.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA91 =  ColorRGBA();
ColorRGBA91.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet90.addChild(&ColorRGBA91);

Coordinate& Coordinate92 =  Coordinate();
Coordinate92.setPoint(new float[]{0,0.9149,0.0016,-0.0887,1.0021,0.1112}, 6);
LineSet90.setCoord(Coordinate92);

Shape89.setGeometry(&LineSet90);

HAnimSegment61.addChild(&Shape89);

Shape& Shape93 =  Shape();
LineSet& LineSet94 =  LineSet();
LineSet94.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA95 =  ColorRGBA();
ColorRGBA95.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet94.addChild(&ColorRGBA95);

Coordinate& Coordinate96 =  Coordinate();
Coordinate96.setPoint(new float[]{0,0.9149,0.0016,0.0925,0.9983,0.1052}, 6);
LineSet94.setCoord(Coordinate96);

Shape93.setGeometry(&LineSet94);

HAnimSegment61.addChild(&Shape93);

Shape& Shape97 =  Shape();
LineSet& LineSet98 =  LineSet();
LineSet98.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA99 =  ColorRGBA();
ColorRGBA99.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet98.addChild(&ColorRGBA99);

Coordinate& Coordinate100 =  Coordinate();
Coordinate100.setPoint(new float[]{0,0.9149,0.0016,-0.0716,1.019,-0.1138}, 6);
LineSet98.setCoord(Coordinate100);

Shape97.setGeometry(&LineSet98);

HAnimSegment61.addChild(&Shape97);

Shape& Shape101 =  Shape();
LineSet& LineSet102 =  LineSet();
LineSet102.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA103 =  ColorRGBA();
ColorRGBA103.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet102.addChild(&ColorRGBA103);

Coordinate& Coordinate104 =  Coordinate();
Coordinate104.setPoint(new float[]{0,0.9149,0.0016,0.0774,1.019,-0.1151}, 6);
LineSet102.setCoord(Coordinate104);

Shape101.setGeometry(&LineSet102);

HAnimSegment61.addChild(&Shape101);

Shape& Shape105 =  Shape();
LineSet& LineSet106 =  LineSet();
LineSet106.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA107 =  ColorRGBA();
ColorRGBA107.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet106.addChild(&ColorRGBA107);

Coordinate& Coordinate108 =  Coordinate();
Coordinate108.setPoint(new float[]{0,0.9149,0.0016,0.0034,0.8266,0.0257}, 6);
LineSet106.setCoord(Coordinate108);

Shape105.setGeometry(&LineSet106);

HAnimSegment61.addChild(&Shape105);

HAnimSite& HAnimSite109 =  HAnimSite();
HAnimSite109.setDEF(CString("hanim_r_iliocristale_pt"));
HAnimSite109.X3DNode::setName(CString("r_iliocristale_pt"));
HAnimSite109.setTranslation(new float[]{-0.1525,1.0628,0.0035});
TouchSensor& TouchSensor110 =  TouchSensor();
TouchSensor110.setDescription(CString("HAnimSite r_iliocristale"));
HAnimSite109.addChild(&TouchSensor110);

Shape& Shape111 =  Shape();
Shape111.setDEF(CString("HAnimSiteShape"));
Appearance& Appearance112 =  Appearance();
Material& Material113 =  Material();
Material113.setDiffuseColor(new float[]{1,0,0});
Appearance112.addChild(&Material113);

Shape111.addChild(&Appearance112);

IndexedFaceSet& IndexedFaceSet114 =  IndexedFaceSet();
IndexedFaceSet114.setDEF(CString("DiamondIFS"));
IndexedFaceSet114.setSolid(False);
IndexedFaceSet114.setCreaseAngle(0.5);
IndexedFaceSet114.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate115 =  Coordinate();
Coordinate115.setPoint(new float[]{0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0}, 18);
IndexedFaceSet114.setCoord(&Coordinate115);

Shape111.setGeometry(&IndexedFaceSet114);

HAnimSite109.addChild(&Shape111);

HAnimSegment61.addChild(&HAnimSite109);

HAnimSite& HAnimSite116 =  HAnimSite();
HAnimSite116.setDEF(CString("hanim_r_trochanterion_pt"));
HAnimSite116.X3DNode::setName(CString("r_trochanterion_pt"));
HAnimSite116.setTranslation(new float[]{-0.1689,0.8419,0.0352});
TouchSensor& TouchSensor117 =  TouchSensor();
TouchSensor117.setDescription(CString("HAnimSite r_trochanterion"));
HAnimSite116.addChild(&TouchSensor117);

Shape& Shape118 =  Shape();
Shape118.setUSE(CString("HAnimSiteShape"));
HAnimSite116.addChild(&Shape118);

HAnimSegment61.addChild(&HAnimSite116);

HAnimSite& HAnimSite119 =  HAnimSite();
HAnimSite119.setDEF(CString("hanim_l_iliocristale_pt"));
HAnimSite119.X3DNode::setName(CString("l_iliocristale_pt"));
HAnimSite119.setTranslation(new float[]{0.1612,1.0537,0.0008});
TouchSensor& TouchSensor120 =  TouchSensor();
TouchSensor120.setDescription(CString("HAnimSite l_iliocristale"));
HAnimSite119.addChild(&TouchSensor120);

Shape& Shape121 =  Shape();
Shape121.setUSE(CString("HAnimSiteShape"));
HAnimSite119.addChild(&Shape121);

HAnimSegment61.addChild(&HAnimSite119);

HAnimSite& HAnimSite122 =  HAnimSite();
HAnimSite122.setDEF(CString("hanim_l_trochanterion_pt"));
HAnimSite122.X3DNode::setName(CString("l_trochanterion_pt"));
HAnimSite122.setTranslation(new float[]{0.1677,0.8336,0.0303});
TouchSensor& TouchSensor123 =  TouchSensor();
TouchSensor123.setDescription(CString("HAnimSite l_trochanterion"));
HAnimSite122.addChild(&TouchSensor123);

Shape& Shape124 =  Shape();
Shape124.setUSE(CString("HAnimSiteShape"));
HAnimSite122.addChild(&Shape124);

HAnimSegment61.addChild(&HAnimSite122);

HAnimSite& HAnimSite125 =  HAnimSite();
HAnimSite125.setDEF(CString("hanim_r_asis_pt"));
HAnimSite125.X3DNode::setName(CString("r_asis_pt"));
HAnimSite125.setTranslation(new float[]{-0.0887,1.0021,0.1112});
TouchSensor& TouchSensor126 =  TouchSensor();
TouchSensor126.setDescription(CString("HAnimSite r_asis"));
HAnimSite125.addChild(&TouchSensor126);

Shape& Shape127 =  Shape();
Shape127.setUSE(CString("HAnimSiteShape"));
HAnimSite125.addChild(&Shape127);

HAnimSegment61.addChild(&HAnimSite125);

HAnimSite& HAnimSite128 =  HAnimSite();
HAnimSite128.setDEF(CString("hanim_l_asis_pt"));
HAnimSite128.X3DNode::setName(CString("l_asis_pt"));
HAnimSite128.setTranslation(new float[]{0.0925,0.9983,0.1052});
TouchSensor& TouchSensor129 =  TouchSensor();
TouchSensor129.setDescription(CString("HAnimSite l_asis"));
HAnimSite128.addChild(&TouchSensor129);

Shape& Shape130 =  Shape();
Shape130.setUSE(CString("HAnimSiteShape"));
HAnimSite128.addChild(&Shape130);

HAnimSegment61.addChild(&HAnimSite128);

HAnimSite& HAnimSite131 =  HAnimSite();
HAnimSite131.setDEF(CString("hanim_r_psis_pt"));
HAnimSite131.X3DNode::setName(CString("r_psis_pt"));
HAnimSite131.setTranslation(new float[]{-0.0716,1.019,-0.1138});
TouchSensor& TouchSensor132 =  TouchSensor();
TouchSensor132.setDescription(CString("HAnimSite r_psis"));
HAnimSite131.addChild(&TouchSensor132);

Shape& Shape133 =  Shape();
Shape133.setUSE(CString("HAnimSiteShape"));
HAnimSite131.addChild(&Shape133);

HAnimSegment61.addChild(&HAnimSite131);

HAnimSite& HAnimSite134 =  HAnimSite();
HAnimSite134.setDEF(CString("hanim_l_psis_pt"));
HAnimSite134.X3DNode::setName(CString("l_psis_pt"));
HAnimSite134.setTranslation(new float[]{0.0774,1.019,-0.1151});
TouchSensor& TouchSensor135 =  TouchSensor();
TouchSensor135.setDescription(CString("HAnimSite l_psis"));
HAnimSite134.addChild(&TouchSensor135);

Shape& Shape136 =  Shape();
Shape136.setUSE(CString("HAnimSiteShape"));
HAnimSite134.addChild(&Shape136);

HAnimSegment61.addChild(&HAnimSite134);

HAnimSite& HAnimSite137 =  HAnimSite();
HAnimSite137.setDEF(CString("hanim_crotch_pt"));
HAnimSite137.X3DNode::setName(CString("crotch_pt"));
HAnimSite137.setTranslation(new float[]{0.0034,0.8266,0.0257});
TouchSensor& TouchSensor138 =  TouchSensor();
TouchSensor138.setDescription(CString("HAnimSite crotch"));
HAnimSite137.addChild(&TouchSensor138);

Shape& Shape139 =  Shape();
Shape139.setUSE(CString("HAnimSiteShape"));
HAnimSite137.addChild(&Shape139);

HAnimSegment61.addChild(&HAnimSite137);

HAnimJoint60.addChildren(&HAnimSegment61);

HAnimJoint& HAnimJoint140 =  HAnimJoint();
HAnimJoint140.setDEF(CString("hanim_l_hip"));
HAnimJoint140.X3DNode::setName(CString("l_hip"));
HAnimJoint140.setCenter(new float[]{0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment141 =  HAnimSegment();
HAnimSegment141.setDEF(CString("hanim_l_thigh"));
HAnimSegment141.X3DNode::setName(CString("l_thigh"));
TouchSensor& TouchSensor142 =  TouchSensor();
TouchSensor142.setDescription(CString("HAnimJoint l_hip, HAnimSegment l_thigh"));
HAnimSegment141.addChild(&TouchSensor142);

Transform& Transform143 =  Transform();
Transform143.setTranslation(new float[]{0.0961,0.9124,-0.0001});
Shape& Shape144 =  Shape();
Shape144.setUSE(CString("HAnimJointShape"));
Transform143.addChild(&Shape144);

HAnimSegment141.addChild(&Transform143);

Shape& Shape145 =  Shape();
LineSet& LineSet146 =  LineSet();
LineSet146.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA147 =  ColorRGBA();
ColorRGBA147.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet146.addChild(&ColorRGBA147);

Coordinate& Coordinate148 =  Coordinate();
Coordinate148.setPoint(new float[]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
LineSet146.setCoord(Coordinate148);

Shape145.setGeometry(&LineSet146);

HAnimSegment141.addChild(&Shape145);

Shape& Shape149 =  Shape();
LineSet& LineSet150 =  LineSet();
LineSet150.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA151 =  ColorRGBA();
ColorRGBA151.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet150.addChild(&ColorRGBA151);

Coordinate& Coordinate152 =  Coordinate();
Coordinate152.setPoint(new float[]{0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309}, 6);
LineSet150.setCoord(Coordinate152);

Shape149.setGeometry(&LineSet150);

HAnimSegment141.addChild(&Shape149);

Shape& Shape153 =  Shape();
LineSet& LineSet154 =  LineSet();
LineSet154.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA155 =  ColorRGBA();
ColorRGBA155.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet154.addChild(&ColorRGBA155);

Coordinate& Coordinate156 =  Coordinate();
Coordinate156.setPoint(new float[]{0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297}, 6);
LineSet154.setCoord(Coordinate156);

Shape153.setGeometry(&LineSet154);

HAnimSegment141.addChild(&Shape153);

Shape& Shape157 =  Shape();
LineSet& LineSet158 =  LineSet();
LineSet158.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA159 =  ColorRGBA();
ColorRGBA159.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet158.addChild(&ColorRGBA159);

Coordinate& Coordinate160 =  Coordinate();
Coordinate160.setPoint(new float[]{0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303}, 6);
LineSet158.setCoord(Coordinate160);

Shape157.setGeometry(&LineSet158);

HAnimSegment141.addChild(&Shape157);

HAnimSite& HAnimSite161 =  HAnimSite();
HAnimSite161.setDEF(CString("hanim_l_knee_crease_pt"));
HAnimSite161.X3DNode::setName(CString("l_knee_crease_pt"));
HAnimSite161.setTranslation(new float[]{0.0993,0.4881,-0.0309});
TouchSensor& TouchSensor162 =  TouchSensor();
TouchSensor162.setDescription(CString("HAnimSite l_knee_crease"));
HAnimSite161.addChild(&TouchSensor162);

Shape& Shape163 =  Shape();
Shape163.setUSE(CString("HAnimSiteShape"));
HAnimSite161.addChild(&Shape163);

HAnimSegment141.addChild(&HAnimSite161);

HAnimSite& HAnimSite164 =  HAnimSite();
HAnimSite164.setDEF(CString("hanim_l_femoral_lateral_epicn_pt"));
HAnimSite164.X3DNode::setName(CString("l_femoral_lateral_epicn_pt"));
HAnimSite164.setTranslation(new float[]{0.1598,0.4967,0.0297});
TouchSensor& TouchSensor165 =  TouchSensor();
TouchSensor165.setDescription(CString("HAnimSite l_femoral_lateral_epicn"));
HAnimSite164.addChild(&TouchSensor165);

Shape& Shape166 =  Shape();
Shape166.setUSE(CString("HAnimSiteShape"));
HAnimSite164.addChild(&Shape166);

HAnimSegment141.addChild(&HAnimSite164);

HAnimSite& HAnimSite167 =  HAnimSite();
HAnimSite167.setDEF(CString("hanim_l_femoral_medial_epicn_pt"));
HAnimSite167.X3DNode::setName(CString("l_femoral_medial_epicn_pt"));
HAnimSite167.setTranslation(new float[]{0.0398,0.4946,0.0303});
TouchSensor& TouchSensor168 =  TouchSensor();
TouchSensor168.setDescription(CString("HAnimSite l_femoral_medial_epicn"));
HAnimSite167.addChild(&TouchSensor168);

Shape& Shape169 =  Shape();
Shape169.setUSE(CString("HAnimSiteShape"));
HAnimSite167.addChild(&Shape169);

HAnimSegment141.addChild(&HAnimSite167);

HAnimJoint140.addChildren(&HAnimSegment141);

HAnimJoint& HAnimJoint170 =  HAnimJoint();
HAnimJoint170.setDEF(CString("hanim_l_knee"));
HAnimJoint170.X3DNode::setName(CString("l_knee"));
HAnimJoint170.setCenter(new float[]{0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment171 =  HAnimSegment();
HAnimSegment171.setDEF(CString("hanim_l_calf"));
HAnimSegment171.X3DNode::setName(CString("l_calf"));
TouchSensor& TouchSensor172 =  TouchSensor();
TouchSensor172.setDescription(CString("HAnimJoint l_knee, HAnimSegment l_calf"));
HAnimSegment171.addChild(&TouchSensor172);

Transform& Transform173 =  Transform();
Transform173.setTranslation(new float[]{0.104,0.4867,0.0308});
Shape& Shape174 =  Shape();
Shape174.setUSE(CString("HAnimJointShape"));
Transform173.addChild(&Shape174);

HAnimSegment171.addChild(&Transform173);

Shape& Shape175 =  Shape();
LineSet& LineSet176 =  LineSet();
LineSet176.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA177 =  ColorRGBA();
ColorRGBA177.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet176.addChild(&ColorRGBA177);

Coordinate& Coordinate178 =  Coordinate();
Coordinate178.setPoint(new float[]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
LineSet176.setCoord(Coordinate178);

Shape175.setGeometry(&LineSet176);

HAnimSegment171.addChild(&Shape175);

HAnimJoint170.addChildren(&HAnimSegment171);

HAnimJoint& HAnimJoint179 =  HAnimJoint();
HAnimJoint179.setDEF(CString("hanim_l_ankle"));
HAnimJoint179.X3DNode::setName(CString("l_ankle"));
HAnimJoint179.setRotation(new float[]{-0.999999999999999,0,0,0.486193023827777});
HAnimJoint179.setCenter(new float[]{0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment180 =  HAnimSegment();
HAnimSegment180.setDEF(CString("hanim_l_hindfoot"));
HAnimSegment180.X3DNode::setName(CString("l_hindfoot"));
TouchSensor& TouchSensor181 =  TouchSensor();
TouchSensor181.setDescription(CString("HAnimJoint l_ankle, HAnimSegment l_hindfoot"));
HAnimSegment180.addChild(&TouchSensor181);

Transform& Transform182 =  Transform();
Transform182.setTranslation(new float[]{0.1101,0.0656,-0.0736});
Shape& Shape183 =  Shape();
Shape183.setUSE(CString("HAnimJointShape"));
Transform182.addChild(&Shape183);

HAnimSegment180.addChild(&Transform182);

Shape& Shape184 =  Shape();
LineSet& LineSet185 =  LineSet();
LineSet185.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA186 =  ColorRGBA();
ColorRGBA186.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet185.addChild(&ColorRGBA186);

Coordinate& Coordinate187 =  Coordinate();
Coordinate187.setPoint(new float[]{0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368}, 6);
LineSet185.setCoord(Coordinate187);

Shape184.setGeometry(&LineSet185);

HAnimSegment180.addChild(&Shape184);

Shape& Shape188 =  Shape();
LineSet& LineSet189 =  LineSet();
LineSet189.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA190 =  ColorRGBA();
ColorRGBA190.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet189.addChild(&ColorRGBA190);

Coordinate& Coordinate191 =  Coordinate();
Coordinate191.setPoint(new float[]{0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032}, 6);
LineSet189.setCoord(Coordinate191);

Shape188.setGeometry(&LineSet189);

HAnimSegment180.addChild(&Shape188);

Shape& Shape192 =  Shape();
LineSet& LineSet193 =  LineSet();
LineSet193.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA194 =  ColorRGBA();
ColorRGBA194.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet193.addChild(&ColorRGBA194);

Coordinate& Coordinate195 =  Coordinate();
Coordinate195.setPoint(new float[]{0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881}, 6);
LineSet193.setCoord(Coordinate195);

Shape192.setGeometry(&LineSet193);

HAnimSegment180.addChild(&Shape192);

Shape& Shape196 =  Shape();
LineSet& LineSet197 =  LineSet();
LineSet197.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA198 =  ColorRGBA();
ColorRGBA198.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet197.addChild(&ColorRGBA198);

Coordinate& Coordinate199 =  Coordinate();
Coordinate199.setPoint(new float[]{0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943}, 6);
LineSet197.setCoord(Coordinate199);

Shape196.setGeometry(&LineSet197);

HAnimSegment180.addChild(&Shape196);

Shape& Shape200 =  Shape();
LineSet& LineSet201 =  LineSet();
LineSet201.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA202 =  ColorRGBA();
ColorRGBA202.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet201.addChild(&ColorRGBA202);

Coordinate& Coordinate203 =  Coordinate();
Coordinate203.setPoint(new float[]{0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171}, 6);
LineSet201.setCoord(Coordinate203);

Shape200.setGeometry(&LineSet201);

HAnimSegment180.addChild(&Shape200);

HAnimSite& HAnimSite204 =  HAnimSite();
HAnimSite204.setDEF(CString("hanim_l_lateral_malleolus_pt"));
HAnimSite204.X3DNode::setName(CString("l_lateral_malleolus_pt"));
HAnimSite204.setTranslation(new float[]{0.1308,0.0597,-0.1032});
TouchSensor& TouchSensor205 =  TouchSensor();
TouchSensor205.setDescription(CString("HAnimSite l_lateral_malleolus"));
HAnimSite204.addChild(&TouchSensor205);

Shape& Shape206 =  Shape();
Shape206.setUSE(CString("HAnimSiteShape"));
HAnimSite204.addChild(&Shape206);

HAnimSegment180.addChild(&HAnimSite204);

HAnimSite& HAnimSite207 =  HAnimSite();
HAnimSite207.setDEF(CString("hanim_l_medial_malleolus_pt"));
HAnimSite207.X3DNode::setName(CString("l_medial_malleolus_pt"));
HAnimSite207.setTranslation(new float[]{0.089,0.0716,-0.0881});
TouchSensor& TouchSensor208 =  TouchSensor();
TouchSensor208.setDescription(CString("HAnimSite l_medial_malleolus"));
HAnimSite207.addChild(&TouchSensor208);

Shape& Shape209 =  Shape();
Shape209.setUSE(CString("HAnimSiteShape"));
HAnimSite207.addChild(&Shape209);

HAnimSegment180.addChild(&HAnimSite207);

HAnimSite& HAnimSite210 =  HAnimSite();
HAnimSite210.setDEF(CString("hanim_l_sphyrion_pt"));
HAnimSite210.X3DNode::setName(CString("l_sphyrion_pt"));
HAnimSite210.setTranslation(new float[]{0.089,0.0575,-0.0943});
TouchSensor& TouchSensor211 =  TouchSensor();
TouchSensor211.setDescription(CString("HAnimSite l_sphyrion"));
HAnimSite210.addChild(&TouchSensor211);

Shape& Shape212 =  Shape();
Shape212.setUSE(CString("HAnimSiteShape"));
HAnimSite210.addChild(&Shape212);

HAnimSegment180.addChild(&HAnimSite210);

HAnimSite& HAnimSite213 =  HAnimSite();
HAnimSite213.setDEF(CString("hanim_l_calcaneous_post_pt"));
HAnimSite213.X3DNode::setName(CString("l_calcaneous_post_pt"));
HAnimSite213.setTranslation(new float[]{0.0974,0.0259,-0.1171});
TouchSensor& TouchSensor214 =  TouchSensor();
TouchSensor214.setDescription(CString("HAnimSite l_calcaneous_post"));
HAnimSite213.addChild(&TouchSensor214);

Shape& Shape215 =  Shape();
Shape215.setUSE(CString("HAnimSiteShape"));
HAnimSite213.addChild(&Shape215);

HAnimSegment180.addChild(&HAnimSite213);

HAnimJoint179.addChildren(&HAnimSegment180);

HAnimJoint& HAnimJoint216 =  HAnimJoint();
HAnimJoint216.setDEF(CString("hanim_l_subtalar"));
HAnimJoint216.X3DNode::setName(CString("l_subtalar"));
HAnimJoint216.setCenter(new float[]{0.1086,0.0001,-0.0368});
HAnimSegment& HAnimSegment217 =  HAnimSegment();
HAnimSegment217.setDEF(CString("hanim_l_midproximal"));
HAnimSegment217.X3DNode::setName(CString("l_midproximal"));
TouchSensor& TouchSensor218 =  TouchSensor();
TouchSensor218.setDescription(CString("HAnimJoint l_subtalar, HAnimSegment l_midproximal"));
HAnimSegment217.addChild(&TouchSensor218);

Transform& Transform219 =  Transform();
Transform219.setTranslation(new float[]{0.1086,0.0001,-0.0368});
Shape& Shape220 =  Shape();
Shape220.setUSE(CString("HAnimJointShape"));
Transform219.addChild(&Shape220);

HAnimSegment217.addChild(&Transform219);

Shape& Shape221 =  Shape();
LineSet& LineSet222 =  LineSet();
LineSet222.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA223 =  ColorRGBA();
ColorRGBA223.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet222.addChild(&ColorRGBA223);

Coordinate& Coordinate224 =  Coordinate();
Coordinate224.setPoint(new float[]{0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368}, 6);
LineSet222.setCoord(Coordinate224);

Shape221.setGeometry(&LineSet222);

HAnimSegment217.addChild(&Shape221);

HAnimJoint216.addChildren(&HAnimSegment217);

HAnimJoint& HAnimJoint225 =  HAnimJoint();
HAnimJoint225.setDEF(CString("hanim_l_midtarsal"));
HAnimJoint225.X3DNode::setName(CString("l_midtarsal"));
HAnimJoint225.setCenter(new float[]{0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment226 =  HAnimSegment();
HAnimSegment226.setDEF(CString("hanim_l_middistal"));
HAnimSegment226.X3DNode::setName(CString("l_middistal"));
TouchSensor& TouchSensor227 =  TouchSensor();
TouchSensor227.setDescription(CString("HAnimJoint l_midtarsal, HAnimSegment l_middistal"));
HAnimSegment226.addChild(&TouchSensor227);

Transform& Transform228 =  Transform();
Transform228.setTranslation(new float[]{0.1086,0.0001,0.0368});
Shape& Shape229 =  Shape();
Shape229.setUSE(CString("HAnimJointShape"));
Transform228.addChild(&Shape229);

HAnimSegment226.addChild(&Transform228);

Shape& Shape230 =  Shape();
LineSet& LineSet231 =  LineSet();
LineSet231.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA232 =  ColorRGBA();
ColorRGBA232.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet231.addChild(&ColorRGBA232);

Coordinate& Coordinate233 =  Coordinate();
Coordinate233.setPoint(new float[]{0.1086,0.0001,0.0368,0.1086,0,0.0762}, 6);
LineSet231.setCoord(Coordinate233);

Shape230.setGeometry(&LineSet231);

HAnimSegment226.addChild(&Shape230);

Shape& Shape234 =  Shape();
LineSet& LineSet235 =  LineSet();
LineSet235.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA236 =  ColorRGBA();
ColorRGBA236.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet235.addChild(&ColorRGBA236);

Coordinate& Coordinate237 =  Coordinate();
Coordinate237.setPoint(new float[]{0.1086,0.0001,0.0368,0.0816,0.0232,0.0106}, 6);
LineSet235.setCoord(Coordinate237);

Shape234.setGeometry(&LineSet235);

HAnimSegment226.addChild(&Shape234);

HAnimSite& HAnimSite238 =  HAnimSite();
HAnimSite238.setDEF(CString("hanim_l_metatarsal_pha1_pt"));
HAnimSite238.X3DNode::setName(CString("l_metatarsal_pha1_pt"));
HAnimSite238.setTranslation(new float[]{0.0816,0.0232,0.0106});
TouchSensor& TouchSensor239 =  TouchSensor();
TouchSensor239.setDescription(CString("HAnimSite l_metatarsal_pha1"));
HAnimSite238.addChild(&TouchSensor239);

Shape& Shape240 =  Shape();
Shape240.setUSE(CString("HAnimSiteShape"));
HAnimSite238.addChild(&Shape240);

HAnimSegment226.addChild(&HAnimSite238);

HAnimJoint225.addChildren(&HAnimSegment226);

HAnimJoint& HAnimJoint241 =  HAnimJoint();
HAnimJoint241.setDEF(CString("hanim_l_metatarsal"));
HAnimJoint241.X3DNode::setName(CString("l_metatarsal"));
HAnimJoint241.setRotation(new float[]{-1,0,0,0.270107235459875});
HAnimJoint241.setCenter(new float[]{0.1086,0,0.0762});
HAnimSegment& HAnimSegment242 =  HAnimSegment();
HAnimSegment242.setDEF(CString("hanim_l_forefoot"));
HAnimSegment242.X3DNode::setName(CString("l_forefoot"));
TouchSensor& TouchSensor243 =  TouchSensor();
TouchSensor243.setDescription(CString("HAnimJoint l_metatarsal, HAnimSegment l_forefoot"));
HAnimSegment242.addChild(&TouchSensor243);

Transform& Transform244 =  Transform();
Transform244.setTranslation(new float[]{0.1086,0,0.0762});
Shape& Shape245 =  Shape();
Shape245.setUSE(CString("HAnimJointShape"));
Transform244.addChild(&Shape245);

HAnimSegment242.addChild(&Transform244);

Shape& Shape246 =  Shape();
LineSet& LineSet247 =  LineSet();
LineSet247.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA248 =  ColorRGBA();
ColorRGBA248.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet247.addChild(&ColorRGBA248);

Coordinate& Coordinate249 =  Coordinate();
Coordinate249.setPoint(new float[]{0.1086,0,0.0762,0.1354,0.0016,0.1476}, 6);
LineSet247.setCoord(Coordinate249);

Shape246.setGeometry(&LineSet247);

HAnimSegment242.addChild(&Shape246);

Shape& Shape250 =  Shape();
LineSet& LineSet251 =  LineSet();
LineSet251.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA252 =  ColorRGBA();
ColorRGBA252.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet251.addChild(&ColorRGBA252);

Coordinate& Coordinate253 =  Coordinate();
Coordinate253.setPoint(new float[]{0.1086,0,0.0762,0.1825,0.007,0.0928}, 6);
LineSet251.setCoord(Coordinate253);

Shape250.setGeometry(&LineSet251);

HAnimSegment242.addChild(&Shape250);

Shape& Shape254 =  Shape();
LineSet& LineSet255 =  LineSet();
LineSet255.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA256 =  ColorRGBA();
ColorRGBA256.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet255.addChild(&ColorRGBA256);

Coordinate& Coordinate257 =  Coordinate();
Coordinate257.setPoint(new float[]{0.1086,0,0.0762,0.1195,0.0079,0.1433}, 6);
LineSet255.setCoord(Coordinate257);

Shape254.setGeometry(&LineSet255);

HAnimSegment242.addChild(&Shape254);

HAnimSite& HAnimSite258 =  HAnimSite();
HAnimSite258.setDEF(CString("hanim_l_forefoot_tip"));
HAnimSite258.X3DNode::setName(CString("l_forefoot_tip"));
HAnimSite258.setTranslation(new float[]{0.1354,0.0016,0.1476});
TouchSensor& TouchSensor259 =  TouchSensor();
TouchSensor259.setDescription(CString("HAnimSite l_forefoot_tip"));
HAnimSite258.addChild(&TouchSensor259);

Shape& Shape260 =  Shape();
Shape260.setUSE(CString("HAnimSiteShape"));
HAnimSite258.addChild(&Shape260);

HAnimSegment242.addChild(&HAnimSite258);

HAnimSite& HAnimSite261 =  HAnimSite();
HAnimSite261.setDEF(CString("hanim_l_metatarsal_pha5_pt"));
HAnimSite261.X3DNode::setName(CString("l_metatarsal_pha5_pt"));
HAnimSite261.setTranslation(new float[]{0.1825,0.007,0.0928});
TouchSensor& TouchSensor262 =  TouchSensor();
TouchSensor262.setDescription(CString("HAnimSite l_metatarsal_pha5"));
HAnimSite261.addChild(&TouchSensor262);

Shape& Shape263 =  Shape();
Shape263.setUSE(CString("HAnimSiteShape"));
HAnimSite261.addChild(&Shape263);

HAnimSegment242.addChild(&HAnimSite261);

HAnimSite& HAnimSite264 =  HAnimSite();
HAnimSite264.setDEF(CString("hanim_l_digit2_pt"));
HAnimSite264.X3DNode::setName(CString("l_digit2_pt"));
HAnimSite264.setTranslation(new float[]{0.1195,0.0079,0.1433});
TouchSensor& TouchSensor265 =  TouchSensor();
TouchSensor265.setDescription(CString("HAnimSite l_digit2"));
HAnimSite264.addChild(&TouchSensor265);

Shape& Shape266 =  Shape();
Shape266.setUSE(CString("HAnimSiteShape"));
HAnimSite264.addChild(&Shape266);

HAnimSegment242.addChild(&HAnimSite264);

HAnimJoint241.addChildren(&HAnimSegment242);

HAnimJoint225.addChildren(&HAnimJoint241);

HAnimJoint216.addChildren(&HAnimJoint225);

HAnimJoint179.addChildren(&HAnimJoint216);

HAnimJoint170.addChildren(&HAnimJoint179);

HAnimJoint140.addChildren(&HAnimJoint170);

HAnimJoint60.addChildren(&HAnimJoint140);

HAnimJoint& HAnimJoint267 =  HAnimJoint();
HAnimJoint267.setDEF(CString("hanim_r_hip"));
HAnimJoint267.X3DNode::setName(CString("r_hip"));
HAnimJoint267.setRotation(new float[]{0.999999999999999,0,0,0.486193023827777});
HAnimJoint267.setCenter(new float[]{-0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment268 =  HAnimSegment();
HAnimSegment268.setDEF(CString("hanim_r_thigh"));
HAnimSegment268.X3DNode::setName(CString("r_thigh"));
TouchSensor& TouchSensor269 =  TouchSensor();
TouchSensor269.setDescription(CString("HAnimJoint r_hip, HAnimSegment r_thigh"));
HAnimSegment268.addChild(&TouchSensor269);

Transform& Transform270 =  Transform();
Transform270.setTranslation(new float[]{-0.0961,0.9124,-0.0001});
Shape& Shape271 =  Shape();
Shape271.setUSE(CString("HAnimJointShape"));
Transform270.addChild(&Shape271);

HAnimSegment268.addChild(&Transform270);

Shape& Shape272 =  Shape();
LineSet& LineSet273 =  LineSet();
LineSet273.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA274 =  ColorRGBA();
ColorRGBA274.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet273.addChild(&ColorRGBA274);

Coordinate& Coordinate275 =  Coordinate();
Coordinate275.setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308}, 6);
LineSet273.setCoord(Coordinate275);

Shape272.setGeometry(&LineSet273);

HAnimSegment268.addChild(&Shape272);

Shape& Shape276 =  Shape();
LineSet& LineSet277 =  LineSet();
LineSet277.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA278 =  ColorRGBA();
ColorRGBA278.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet277.addChild(&ColorRGBA278);

Coordinate& Coordinate279 =  Coordinate();
Coordinate279.setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326}, 6);
LineSet277.setCoord(Coordinate279);

Shape276.setGeometry(&LineSet277);

HAnimSegment268.addChild(&Shape276);

Shape& Shape280 =  Shape();
LineSet& LineSet281 =  LineSet();
LineSet281.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA282 =  ColorRGBA();
ColorRGBA282.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet281.addChild(&ColorRGBA282);

Coordinate& Coordinate283 =  Coordinate();
Coordinate283.setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031}, 6);
LineSet281.setCoord(Coordinate283);

Shape280.setGeometry(&LineSet281);

HAnimSegment268.addChild(&Shape280);

Shape& Shape284 =  Shape();
LineSet& LineSet285 =  LineSet();
LineSet285.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA286 =  ColorRGBA();
ColorRGBA286.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet285.addChild(&ColorRGBA286);

Coordinate& Coordinate287 =  Coordinate();
Coordinate287.setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289}, 6);
LineSet285.setCoord(Coordinate287);

Shape284.setGeometry(&LineSet285);

HAnimSegment268.addChild(&Shape284);

HAnimSite& HAnimSite288 =  HAnimSite();
HAnimSite288.setDEF(CString("hanim_r_knee_crease_pt"));
HAnimSite288.X3DNode::setName(CString("r_knee_crease_pt"));
HAnimSite288.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
TouchSensor& TouchSensor289 =  TouchSensor();
TouchSensor289.setDescription(CString("HAnimSite r_knee_crease"));
HAnimSite288.addChild(&TouchSensor289);

Shape& Shape290 =  Shape();
Shape290.setUSE(CString("HAnimSiteShape"));
HAnimSite288.addChild(&Shape290);

HAnimSegment268.addChild(&HAnimSite288);

HAnimSite& HAnimSite291 =  HAnimSite();
HAnimSite291.setDEF(CString("hanim_r_femoral_lateral_epicn_pt"));
HAnimSite291.X3DNode::setName(CString("r_femoral_lateral_epicn_pt"));
HAnimSite291.setTranslation(new float[]{-0.1421,0.4992,0.031});
TouchSensor& TouchSensor292 =  TouchSensor();
TouchSensor292.setDescription(CString("HAnimSite r_femoral_lateral_epicn"));
HAnimSite291.addChild(&TouchSensor292);

Shape& Shape293 =  Shape();
Shape293.setUSE(CString("HAnimSiteShape"));
HAnimSite291.addChild(&Shape293);

HAnimSegment268.addChild(&HAnimSite291);

HAnimSite& HAnimSite294 =  HAnimSite();
HAnimSite294.setDEF(CString("hanim_r_femoral_medial_epicn_pt"));
HAnimSite294.X3DNode::setName(CString("r_femoral_medial_epicn_pt"));
HAnimSite294.setTranslation(new float[]{-0.0221,0.5014,0.0289});
TouchSensor& TouchSensor295 =  TouchSensor();
TouchSensor295.setDescription(CString("HAnimSite r_femoral_medial_epicn"));
HAnimSite294.addChild(&TouchSensor295);

Shape& Shape296 =  Shape();
Shape296.setUSE(CString("HAnimSiteShape"));
HAnimSite294.addChild(&Shape296);

HAnimSegment268.addChild(&HAnimSite294);

HAnimJoint267.addChildren(&HAnimSegment268);

HAnimJoint& HAnimJoint297 =  HAnimJoint();
HAnimJoint297.setDEF(CString("hanim_r_knee"));
HAnimJoint297.X3DNode::setName(CString("r_knee"));
HAnimJoint297.setRotation(new float[]{1,0,0,1.05341821829351});
HAnimJoint297.setCenter(new float[]{-0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment298 =  HAnimSegment();
HAnimSegment298.setDEF(CString("hanim_r_calf"));
HAnimSegment298.X3DNode::setName(CString("r_calf"));
TouchSensor& TouchSensor299 =  TouchSensor();
TouchSensor299.setDescription(CString("HAnimJoint r_knee, HAnimSegment r_calf"));
HAnimSegment298.addChild(&TouchSensor299);

Transform& Transform300 =  Transform();
Transform300.setTranslation(new float[]{-0.104,0.4867,0.0308});
Shape& Shape301 =  Shape();
Shape301.setUSE(CString("HAnimJointShape"));
Transform300.addChild(&Shape301);

HAnimSegment298.addChild(&Transform300);

Shape& Shape302 =  Shape();
LineSet& LineSet303 =  LineSet();
LineSet303.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA304 =  ColorRGBA();
ColorRGBA304.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet303.addChild(&ColorRGBA304);

Coordinate& Coordinate305 =  Coordinate();
Coordinate305.setPoint(new float[]{-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736}, 6);
LineSet303.setCoord(Coordinate305);

Shape302.setGeometry(&LineSet303);

HAnimSegment298.addChild(&Shape302);

HAnimJoint297.addChildren(&HAnimSegment298);

HAnimJoint& HAnimJoint306 =  HAnimJoint();
HAnimJoint306.setDEF(CString("hanim_r_ankle"));
HAnimJoint306.X3DNode::setName(CString("r_ankle"));
HAnimJoint306.setRotation(new float[]{-0.999999999999999,0,0,0.486193023827777});
HAnimJoint306.setCenter(new float[]{-0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment307 =  HAnimSegment();
HAnimSegment307.setDEF(CString("hanim_r_hindfoot"));
HAnimSegment307.X3DNode::setName(CString("r_hindfoot"));
TouchSensor& TouchSensor308 =  TouchSensor();
TouchSensor308.setDescription(CString("HAnimJoint r_ankle, HAnimSegment r_hindfoot"));
HAnimSegment307.addChild(&TouchSensor308);

Transform& Transform309 =  Transform();
Transform309.setTranslation(new float[]{-0.1101,0.0656,-0.0736});
Shape& Shape310 =  Shape();
Shape310.setUSE(CString("HAnimJointShape"));
Transform309.addChild(&Shape310);

HAnimSegment307.addChild(&Transform309);

Shape& Shape311 =  Shape();
LineSet& LineSet312 =  LineSet();
LineSet312.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA313 =  ColorRGBA();
ColorRGBA313.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet312.addChild(&ColorRGBA313);

Coordinate& Coordinate314 =  Coordinate();
Coordinate314.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368}, 6);
LineSet312.setCoord(Coordinate314);

Shape311.setGeometry(&LineSet312);

HAnimSegment307.addChild(&Shape311);

Shape& Shape315 =  Shape();
LineSet& LineSet316 =  LineSet();
LineSet316.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA317 =  ColorRGBA();
ColorRGBA317.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet316.addChild(&ColorRGBA317);

Coordinate& Coordinate318 =  Coordinate();
Coordinate318.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075}, 6);
LineSet316.setCoord(Coordinate318);

Shape315.setGeometry(&LineSet316);

HAnimSegment307.addChild(&Shape315);

Shape& Shape319 =  Shape();
LineSet& LineSet320 =  LineSet();
LineSet320.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA321 =  ColorRGBA();
ColorRGBA321.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet320.addChild(&ColorRGBA321);

Coordinate& Coordinate322 =  Coordinate();
Coordinate322.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928}, 6);
LineSet320.setCoord(Coordinate322);

Shape319.setGeometry(&LineSet320);

HAnimSegment307.addChild(&Shape319);

Shape& Shape323 =  Shape();
LineSet& LineSet324 =  LineSet();
LineSet324.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA325 =  ColorRGBA();
ColorRGBA325.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet324.addChild(&ColorRGBA325);

Coordinate& Coordinate326 =  Coordinate();
Coordinate326.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002}, 6);
LineSet324.setCoord(Coordinate326);

Shape323.setGeometry(&LineSet324);

HAnimSegment307.addChild(&Shape323);

Shape& Shape327 =  Shape();
LineSet& LineSet328 =  LineSet();
LineSet328.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA329 =  ColorRGBA();
ColorRGBA329.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet328.addChild(&ColorRGBA329);

Coordinate& Coordinate330 =  Coordinate();
Coordinate330.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221}, 6);
LineSet328.setCoord(Coordinate330);

Shape327.setGeometry(&LineSet328);

HAnimSegment307.addChild(&Shape327);

HAnimSite& HAnimSite331 =  HAnimSite();
HAnimSite331.setDEF(CString("hanim_r_lateral_malleolus_pt"));
HAnimSite331.X3DNode::setName(CString("r_lateral_malleolus_pt"));
HAnimSite331.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
TouchSensor& TouchSensor332 =  TouchSensor();
TouchSensor332.setDescription(CString("HAnimSite r_lateral_malleolus"));
HAnimSite331.addChild(&TouchSensor332);

Shape& Shape333 =  Shape();
Shape333.setUSE(CString("HAnimSiteShape"));
HAnimSite331.addChild(&Shape333);

HAnimSegment307.addChild(&HAnimSite331);

HAnimSite& HAnimSite334 =  HAnimSite();
HAnimSite334.setDEF(CString("hanim_r_medial_malleolus_pt"));
HAnimSite334.X3DNode::setName(CString("r_medial_malleolus_pt"));
HAnimSite334.setTranslation(new float[]{-0.0591,0.076,-0.0928});
TouchSensor& TouchSensor335 =  TouchSensor();
TouchSensor335.setDescription(CString("HAnimSite r_medial_malleolus"));
HAnimSite334.addChild(&TouchSensor335);

Shape& Shape336 =  Shape();
Shape336.setUSE(CString("HAnimSiteShape"));
HAnimSite334.addChild(&Shape336);

HAnimSegment307.addChild(&HAnimSite334);

HAnimSite& HAnimSite337 =  HAnimSite();
HAnimSite337.setDEF(CString("hanim_r_sphyrion_pt"));
HAnimSite337.X3DNode::setName(CString("r_sphyrion_pt"));
HAnimSite337.setTranslation(new float[]{-0.0603,0.061,-0.1002});
TouchSensor& TouchSensor338 =  TouchSensor();
TouchSensor338.setDescription(CString("HAnimSite r_sphyrion"));
HAnimSite337.addChild(&TouchSensor338);

Shape& Shape339 =  Shape();
Shape339.setUSE(CString("HAnimSiteShape"));
HAnimSite337.addChild(&Shape339);

HAnimSegment307.addChild(&HAnimSite337);

HAnimSite& HAnimSite340 =  HAnimSite();
HAnimSite340.setDEF(CString("hanim_r_calcaneous_post_pt"));
HAnimSite340.X3DNode::setName(CString("r_calcaneous_post_pt"));
HAnimSite340.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
TouchSensor& TouchSensor341 =  TouchSensor();
TouchSensor341.setDescription(CString("HAnimSite r_calcaneous_post"));
HAnimSite340.addChild(&TouchSensor341);

Shape& Shape342 =  Shape();
Shape342.setUSE(CString("HAnimSiteShape"));
HAnimSite340.addChild(&Shape342);

HAnimSegment307.addChild(&HAnimSite340);

HAnimJoint306.addChildren(&HAnimSegment307);

HAnimJoint& HAnimJoint343 =  HAnimJoint();
HAnimJoint343.setDEF(CString("hanim_r_subtalar"));
HAnimJoint343.X3DNode::setName(CString("r_subtalar"));
HAnimJoint343.setCenter(new float[]{-0.1086,0.0001,-0.0368});
HAnimSegment& HAnimSegment344 =  HAnimSegment();
HAnimSegment344.setDEF(CString("hanim_r_midproximal"));
HAnimSegment344.X3DNode::setName(CString("r_midproximal"));
TouchSensor& TouchSensor345 =  TouchSensor();
TouchSensor345.setDescription(CString("HAnimJoint r_subtalar, HAnimSegment r_midproximal"));
HAnimSegment344.addChild(&TouchSensor345);

Transform& Transform346 =  Transform();
Transform346.setTranslation(new float[]{-0.1086,0.0001,-0.0368});
Shape& Shape347 =  Shape();
Shape347.setUSE(CString("HAnimJointShape"));
Transform346.addChild(&Shape347);

HAnimSegment344.addChild(&Transform346);

Shape& Shape348 =  Shape();
LineSet& LineSet349 =  LineSet();
LineSet349.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA350 =  ColorRGBA();
ColorRGBA350.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet349.addChild(&ColorRGBA350);

Coordinate& Coordinate351 =  Coordinate();
Coordinate351.setPoint(new float[]{-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368}, 6);
LineSet349.setCoord(Coordinate351);

Shape348.setGeometry(&LineSet349);

HAnimSegment344.addChild(&Shape348);

HAnimJoint343.addChildren(&HAnimSegment344);

HAnimJoint& HAnimJoint352 =  HAnimJoint();
HAnimJoint352.setDEF(CString("hanim_r_midtarsal"));
HAnimJoint352.X3DNode::setName(CString("r_midtarsal"));
HAnimJoint352.setCenter(new float[]{-0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment353 =  HAnimSegment();
HAnimSegment353.setDEF(CString("hanim_r_middistal"));
HAnimSegment353.X3DNode::setName(CString("r_middistal"));
TouchSensor& TouchSensor354 =  TouchSensor();
TouchSensor354.setDescription(CString("HAnimJoint r_midtarsal, HAnimSegment r_middistal"));
HAnimSegment353.addChild(&TouchSensor354);

Transform& Transform355 =  Transform();
Transform355.setTranslation(new float[]{-0.1086,0.0001,0.0368});
Shape& Shape356 =  Shape();
Shape356.setUSE(CString("HAnimJointShape"));
Transform355.addChild(&Shape356);

HAnimSegment353.addChild(&Transform355);

Shape& Shape357 =  Shape();
LineSet& LineSet358 =  LineSet();
LineSet358.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA359 =  ColorRGBA();
ColorRGBA359.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet358.addChild(&ColorRGBA359);

Coordinate& Coordinate360 =  Coordinate();
Coordinate360.setPoint(new float[]{-0.1086,0.0001,0.0368,-0.1086,0,0.0762}, 6);
LineSet358.setCoord(Coordinate360);

Shape357.setGeometry(&LineSet358);

HAnimSegment353.addChild(&Shape357);

Shape& Shape361 =  Shape();
LineSet& LineSet362 =  LineSet();
LineSet362.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA363 =  ColorRGBA();
ColorRGBA363.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet362.addChild(&ColorRGBA363);

Coordinate& Coordinate364 =  Coordinate();
Coordinate364.setPoint(new float[]{-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127}, 6);
LineSet362.setCoord(Coordinate364);

Shape361.setGeometry(&LineSet362);

HAnimSegment353.addChild(&Shape361);

HAnimSite& HAnimSite365 =  HAnimSite();
HAnimSite365.setDEF(CString("hanim_r_metatarsal_pha1_pt"));
HAnimSite365.X3DNode::setName(CString("r_metatarsal_pha1_pt"));
HAnimSite365.setTranslation(new float[]{-0.0521,0.026,0.0127});
TouchSensor& TouchSensor366 =  TouchSensor();
TouchSensor366.setDescription(CString("HAnimSite r_metatarsal_pha1"));
HAnimSite365.addChild(&TouchSensor366);

Shape& Shape367 =  Shape();
Shape367.setUSE(CString("HAnimSiteShape"));
HAnimSite365.addChild(&Shape367);

HAnimSegment353.addChild(&HAnimSite365);

HAnimJoint352.addChildren(&HAnimSegment353);

HAnimJoint& HAnimJoint368 =  HAnimJoint();
HAnimJoint368.setDEF(CString("hanim_r_metatarsal"));
HAnimJoint368.X3DNode::setName(CString("r_metatarsal"));
HAnimJoint368.setRotation(new float[]{-1,0,0,0.270107235459875});
HAnimJoint368.setCenter(new float[]{-0.1086,0,0.0762});
HAnimSegment& HAnimSegment369 =  HAnimSegment();
HAnimSegment369.setDEF(CString("hanim_r_forefoot"));
HAnimSegment369.X3DNode::setName(CString("r_forefoot"));
TouchSensor& TouchSensor370 =  TouchSensor();
TouchSensor370.setDescription(CString("HAnimJoint r_metatarsal, HAnimSegment r_forefoot"));
HAnimSegment369.addChild(&TouchSensor370);

Transform& Transform371 =  Transform();
Transform371.setTranslation(new float[]{-0.1086,0,0.0762});
Shape& Shape372 =  Shape();
Shape372.setUSE(CString("HAnimJointShape"));
Transform371.addChild(&Shape372);

HAnimSegment369.addChild(&Transform371);

Shape& Shape373 =  Shape();
LineSet& LineSet374 =  LineSet();
LineSet374.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA375 =  ColorRGBA();
ColorRGBA375.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet374.addChild(&ColorRGBA375);

Coordinate& Coordinate376 =  Coordinate();
Coordinate376.setPoint(new float[]{-0.1086,0,0.0762,-0.1043,0.0227,0.145}, 6);
LineSet374.setCoord(Coordinate376);

Shape373.setGeometry(&LineSet374);

HAnimSegment369.addChild(&Shape373);

Shape& Shape377 =  Shape();
LineSet& LineSet378 =  LineSet();
LineSet378.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA379 =  ColorRGBA();
ColorRGBA379.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet378.addChild(&ColorRGBA379);

Coordinate& Coordinate380 =  Coordinate();
Coordinate380.setPoint(new float[]{-0.1086,0,0.0762,-0.1523,0.0166,0.0895}, 6);
LineSet378.setCoord(Coordinate380);

Shape377.setGeometry(&LineSet378);

HAnimSegment369.addChild(&Shape377);

Shape& Shape381 =  Shape();
LineSet& LineSet382 =  LineSet();
LineSet382.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA383 =  ColorRGBA();
ColorRGBA383.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet382.addChild(&ColorRGBA383);

Coordinate& Coordinate384 =  Coordinate();
Coordinate384.setPoint(new float[]{-0.1086,0,0.0762,-0.0883,0.0134,0.1383}, 6);
LineSet382.setCoord(Coordinate384);

Shape381.setGeometry(&LineSet382);

HAnimSegment369.addChild(&Shape381);

HAnimSite& HAnimSite385 =  HAnimSite();
HAnimSite385.setDEF(CString("hanim_r_forefoot_tip"));
HAnimSite385.X3DNode::setName(CString("r_forefoot_tip"));
HAnimSite385.setTranslation(new float[]{-0.1043,0.0227,0.145});
TouchSensor& TouchSensor386 =  TouchSensor();
TouchSensor386.setDescription(CString("HAnimSite r_forefoot_tip"));
HAnimSite385.addChild(&TouchSensor386);

Shape& Shape387 =  Shape();
Shape387.setUSE(CString("HAnimSiteShape"));
HAnimSite385.addChild(&Shape387);

HAnimSegment369.addChild(&HAnimSite385);

HAnimSite& HAnimSite388 =  HAnimSite();
HAnimSite388.setDEF(CString("hanim_r_metatarsal_pha5_pt"));
HAnimSite388.X3DNode::setName(CString("r_metatarsal_pha5_pt"));
HAnimSite388.setTranslation(new float[]{-0.1523,0.0166,0.0895});
TouchSensor& TouchSensor389 =  TouchSensor();
TouchSensor389.setDescription(CString("HAnimSite r_metatarsal_pha5"));
HAnimSite388.addChild(&TouchSensor389);

Shape& Shape390 =  Shape();
Shape390.setUSE(CString("HAnimSiteShape"));
HAnimSite388.addChild(&Shape390);

HAnimSegment369.addChild(&HAnimSite388);

HAnimSite& HAnimSite391 =  HAnimSite();
HAnimSite391.setDEF(CString("hanim_r_digit2_pt"));
HAnimSite391.X3DNode::setName(CString("r_digit2_pt"));
HAnimSite391.setTranslation(new float[]{-0.0883,0.0134,0.1383});
TouchSensor& TouchSensor392 =  TouchSensor();
TouchSensor392.setDescription(CString("HAnimSite r_digit2"));
HAnimSite391.addChild(&TouchSensor392);

Shape& Shape393 =  Shape();
Shape393.setUSE(CString("HAnimSiteShape"));
HAnimSite391.addChild(&Shape393);

HAnimSegment369.addChild(&HAnimSite391);

HAnimJoint368.addChildren(&HAnimSegment369);

HAnimJoint352.addChildren(&HAnimJoint368);

HAnimJoint343.addChildren(&HAnimJoint352);

HAnimJoint306.addChildren(&HAnimJoint343);

HAnimJoint297.addChildren(&HAnimJoint306);

HAnimJoint267.addChildren(&HAnimJoint297);

HAnimJoint60.addChildren(&HAnimJoint267);

HAnimJoint44.addChildren(&HAnimJoint60);

HAnimJoint& HAnimJoint394 =  HAnimJoint();
HAnimJoint394.setDEF(CString("hanim_vl5"));
HAnimJoint394.X3DNode::setName(CString("vl5"));
HAnimJoint394.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimSegment& HAnimSegment395 =  HAnimSegment();
HAnimSegment395.setDEF(CString("hanim_l5"));
HAnimSegment395.X3DNode::setName(CString("l5"));
TouchSensor& TouchSensor396 =  TouchSensor();
TouchSensor396.setDescription(CString("HAnimJoint vl5, HAnimSegment l5"));
HAnimSegment395.addChild(&TouchSensor396);

Transform& Transform397 =  Transform();
Transform397.setTranslation(new float[]{0.0028,1.0568,-0.0776});
Shape& Shape398 =  Shape();
Shape398.setUSE(CString("HAnimJointShape"));
Transform397.addChild(&Shape398);

HAnimSegment395.addChild(&Transform397);

Shape& Shape399 =  Shape();
LineSet& LineSet400 =  LineSet();
LineSet400.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA401 =  ColorRGBA();
ColorRGBA401.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet400.addChild(&ColorRGBA401);

Coordinate& Coordinate402 =  Coordinate();
Coordinate402.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
LineSet400.setCoord(Coordinate402);

Shape399.setGeometry(&LineSet400);

HAnimSegment395.addChild(&Shape399);

Shape& Shape403 =  Shape();
LineSet& LineSet404 =  LineSet();
LineSet404.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA405 =  ColorRGBA();
ColorRGBA405.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet404.addChild(&ColorRGBA405);

Coordinate& Coordinate406 =  Coordinate();
Coordinate406.setPoint(new float[]{0.0028,1.0568,-0.0776,0,1.0915,-0.1091}, 6);
LineSet404.setCoord(Coordinate406);

Shape403.setGeometry(&LineSet404);

HAnimSegment395.addChild(&Shape403);

Shape& Shape407 =  Shape();
LineSet& LineSet408 =  LineSet();
LineSet408.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA409 =  ColorRGBA();
ColorRGBA409.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet408.addChild(&ColorRGBA409);

Coordinate& Coordinate410 =  Coordinate();
Coordinate410.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017}, 6);
LineSet408.setCoord(Coordinate410);

Shape407.setGeometry(&LineSet408);

HAnimSegment395.addChild(&Shape407);

HAnimSite& HAnimSite411 =  HAnimSite();
HAnimSite411.setDEF(CString("hanim_waist_preferred_post_pt"));
HAnimSite411.X3DNode::setName(CString("waist_preferred_post_pt"));
HAnimSite411.setTranslation(new float[]{0,1.0915,-0.1091});
TouchSensor& TouchSensor412 =  TouchSensor();
TouchSensor412.setDescription(CString("HAnimSite waist_preferred_post"));
HAnimSite411.addChild(&TouchSensor412);

Shape& Shape413 =  Shape();
Shape413.setUSE(CString("HAnimSiteShape"));
HAnimSite411.addChild(&Shape413);

HAnimSegment395.addChild(&HAnimSite411);

HAnimSite& HAnimSite414 =  HAnimSite();
HAnimSite414.setDEF(CString("hanim_navel_pt"));
HAnimSite414.X3DNode::setName(CString("navel_pt"));
HAnimSite414.setTranslation(new float[]{0.0069,1.0966,0.1017});
TouchSensor& TouchSensor415 =  TouchSensor();
TouchSensor415.setDescription(CString("HAnimSite navel"));
HAnimSite414.addChild(&TouchSensor415);

Shape& Shape416 =  Shape();
Shape416.setUSE(CString("HAnimSiteShape"));
HAnimSite414.addChild(&Shape416);

HAnimSegment395.addChild(&HAnimSite414);

HAnimJoint394.addChildren(&HAnimSegment395);

HAnimJoint& HAnimJoint417 =  HAnimJoint();
HAnimJoint417.setDEF(CString("hanim_vl4"));
HAnimJoint417.X3DNode::setName(CString("vl4"));
HAnimJoint417.setCenter(new float[]{0.0035,1.0925,-0.0787});
HAnimSegment& HAnimSegment418 =  HAnimSegment();
HAnimSegment418.setDEF(CString("hanim_l4"));
HAnimSegment418.X3DNode::setName(CString("l4"));
TouchSensor& TouchSensor419 =  TouchSensor();
TouchSensor419.setDescription(CString("HAnimJoint vl4, HAnimSegment l4"));
HAnimSegment418.addChild(&TouchSensor419);

Transform& Transform420 =  Transform();
Transform420.setTranslation(new float[]{0.0035,1.0925,-0.0787});
Shape& Shape421 =  Shape();
Shape421.setUSE(CString("HAnimJointShape"));
Transform420.addChild(&Shape421);

HAnimSegment418.addChild(&Transform420);

Shape& Shape422 =  Shape();
LineSet& LineSet423 =  LineSet();
LineSet423.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA424 =  ColorRGBA();
ColorRGBA424.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet423.addChild(&ColorRGBA424);

Coordinate& Coordinate425 =  Coordinate();
Coordinate425.setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
LineSet423.setCoord(Coordinate425);

Shape422.setGeometry(&LineSet423);

HAnimSegment418.addChild(&Shape422);

HAnimJoint417.addChildren(&HAnimSegment418);

HAnimJoint& HAnimJoint426 =  HAnimJoint();
HAnimJoint426.setDEF(CString("hanim_vl3"));
HAnimJoint426.X3DNode::setName(CString("vl3"));
HAnimJoint426.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimSegment& HAnimSegment427 =  HAnimSegment();
HAnimSegment427.setDEF(CString("hanim_l3"));
HAnimSegment427.X3DNode::setName(CString("l3"));
TouchSensor& TouchSensor428 =  TouchSensor();
TouchSensor428.setDescription(CString("HAnimJoint vl3, HAnimSegment l3"));
HAnimSegment427.addChild(&TouchSensor428);

Transform& Transform429 =  Transform();
Transform429.setTranslation(new float[]{0.0041,1.1276,-0.0796});
Shape& Shape430 =  Shape();
Shape430.setUSE(CString("HAnimJointShape"));
Transform429.addChild(&Shape430);

HAnimSegment427.addChild(&Transform429);

Shape& Shape431 =  Shape();
LineSet& LineSet432 =  LineSet();
LineSet432.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA433 =  ColorRGBA();
ColorRGBA433.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet432.addChild(&ColorRGBA433);

Coordinate& Coordinate434 =  Coordinate();
Coordinate434.setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
LineSet432.setCoord(Coordinate434);

Shape431.setGeometry(&LineSet432);

HAnimSegment427.addChild(&Shape431);

HAnimJoint426.addChildren(&HAnimSegment427);

HAnimJoint& HAnimJoint435 =  HAnimJoint();
HAnimJoint435.setDEF(CString("hanim_vl2"));
HAnimJoint435.X3DNode::setName(CString("vl2"));
HAnimJoint435.setCenter(new float[]{0.0045,1.1546,-0.08});
HAnimSegment& HAnimSegment436 =  HAnimSegment();
HAnimSegment436.setDEF(CString("hanim_l2"));
HAnimSegment436.X3DNode::setName(CString("l2"));
TouchSensor& TouchSensor437 =  TouchSensor();
TouchSensor437.setDescription(CString("HAnimJoint vl2, HAnimSegment l2"));
HAnimSegment436.addChild(&TouchSensor437);

Transform& Transform438 =  Transform();
Transform438.setTranslation(new float[]{0.0045,1.1546,-0.08});
Shape& Shape439 =  Shape();
Shape439.setUSE(CString("HAnimJointShape"));
Transform438.addChild(&Shape439);

HAnimSegment436.addChild(&Transform438);

Shape& Shape440 =  Shape();
LineSet& LineSet441 =  LineSet();
LineSet441.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA442 =  ColorRGBA();
ColorRGBA442.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet441.addChild(&ColorRGBA442);

Coordinate& Coordinate443 =  Coordinate();
Coordinate443.setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
LineSet441.setCoord(Coordinate443);

Shape440.setGeometry(&LineSet441);

HAnimSegment436.addChild(&Shape440);

Shape& Shape444 =  Shape();
LineSet& LineSet445 =  LineSet();
LineSet445.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA446 =  ColorRGBA();
ColorRGBA446.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet445.addChild(&ColorRGBA446);

Coordinate& Coordinate447 =  Coordinate();
Coordinate447.setPoint(new float[]{0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016}, 6);
LineSet445.setCoord(Coordinate447);

Shape444.setGeometry(&LineSet445);

HAnimSegment436.addChild(&Shape444);

Shape& Shape448 =  Shape();
LineSet& LineSet449 =  LineSet();
LineSet449.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA450 =  ColorRGBA();
ColorRGBA450.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet449.addChild(&ColorRGBA450);

Coordinate& Coordinate451 =  Coordinate();
Coordinate451.setPoint(new float[]{0.0045,1.1546,-0.08,0.0871,1.1925,0.0992}, 6);
LineSet449.setCoord(Coordinate451);

Shape448.setGeometry(&LineSet449);

HAnimSegment436.addChild(&Shape448);

Shape& Shape452 =  Shape();
LineSet& LineSet453 =  LineSet();
LineSet453.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA454 =  ColorRGBA();
ColorRGBA454.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet453.addChild(&ColorRGBA454);

Coordinate& Coordinate455 =  Coordinate();
Coordinate455.setPoint(new float[]{0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113}, 6);
LineSet453.setCoord(Coordinate455);

Shape452.setGeometry(&LineSet453);

HAnimSegment436.addChild(&Shape452);

HAnimSite& HAnimSite456 =  HAnimSite();
HAnimSite456.setDEF(CString("hanim_r_rib10_pt"));
HAnimSite456.X3DNode::setName(CString("r_rib10_pt"));
HAnimSite456.setTranslation(new float[]{-0.0711,1.1941,0.1016});
TouchSensor& TouchSensor457 =  TouchSensor();
TouchSensor457.setDescription(CString("HAnimSite r_rib10"));
HAnimSite456.addChild(&TouchSensor457);

Shape& Shape458 =  Shape();
Shape458.setUSE(CString("HAnimSiteShape"));
HAnimSite456.addChild(&Shape458);

HAnimSegment436.addChild(&HAnimSite456);

HAnimSite& HAnimSite459 =  HAnimSite();
HAnimSite459.setDEF(CString("hanim_l_rib10_pt"));
HAnimSite459.X3DNode::setName(CString("l_rib10_pt"));
HAnimSite459.setTranslation(new float[]{0.0871,1.1925,0.0992});
TouchSensor& TouchSensor460 =  TouchSensor();
TouchSensor460.setDescription(CString("HAnimSite l_rib10"));
HAnimSite459.addChild(&TouchSensor460);

Shape& Shape461 =  Shape();
Shape461.setUSE(CString("HAnimSiteShape"));
HAnimSite459.addChild(&Shape461);

HAnimSegment436.addChild(&HAnimSite459);

HAnimSite& HAnimSite462 =  HAnimSite();
HAnimSite462.setDEF(CString("hanim_rib10_midspine_pt"));
HAnimSite462.X3DNode::setName(CString("rib10_midspine_pt"));
HAnimSite462.setTranslation(new float[]{0.0049,1.1908,-0.1113});
TouchSensor& TouchSensor463 =  TouchSensor();
TouchSensor463.setDescription(CString("HAnimSite rib10_midspine"));
HAnimSite462.addChild(&TouchSensor463);

Shape& Shape464 =  Shape();
Shape464.setUSE(CString("HAnimSiteShape"));
HAnimSite462.addChild(&Shape464);

HAnimSegment436.addChild(&HAnimSite462);

HAnimJoint435.addChildren(&HAnimSegment436);

HAnimJoint& HAnimJoint465 =  HAnimJoint();
HAnimJoint465.setDEF(CString("hanim_vl1"));
HAnimJoint465.X3DNode::setName(CString("vl1"));
HAnimJoint465.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimSegment& HAnimSegment466 =  HAnimSegment();
HAnimSegment466.setDEF(CString("hanim_l1"));
HAnimSegment466.X3DNode::setName(CString("l1"));
TouchSensor& TouchSensor467 =  TouchSensor();
TouchSensor467.setDescription(CString("HAnimJoint vl1, HAnimSegment l1"));
HAnimSegment466.addChild(&TouchSensor467);

Transform& Transform468 =  Transform();
Transform468.setTranslation(new float[]{0.0048,1.1912,-0.0805});
Shape& Shape469 =  Shape();
Shape469.setUSE(CString("HAnimJointShape"));
Transform468.addChild(&Shape469);

HAnimSegment466.addChild(&Transform468);

Shape& Shape470 =  Shape();
LineSet& LineSet471 =  LineSet();
LineSet471.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA472 =  ColorRGBA();
ColorRGBA472.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet471.addChild(&ColorRGBA472);

Coordinate& Coordinate473 =  Coordinate();
Coordinate473.setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
LineSet471.setCoord(Coordinate473);

Shape470.setGeometry(&LineSet471);

HAnimSegment466.addChild(&Shape470);

HAnimJoint465.addChildren(&HAnimSegment466);

HAnimJoint& HAnimJoint474 =  HAnimJoint();
HAnimJoint474.setDEF(CString("hanim_vt12"));
HAnimJoint474.X3DNode::setName(CString("vt12"));
HAnimJoint474.setCenter(new float[]{0.0051,1.2278,-0.0808});
HAnimSegment& HAnimSegment475 =  HAnimSegment();
HAnimSegment475.setDEF(CString("hanim_t12"));
HAnimSegment475.X3DNode::setName(CString("t12"));
TouchSensor& TouchSensor476 =  TouchSensor();
TouchSensor476.setDescription(CString("HAnimJoint vt12, HAnimSegment t12"));
HAnimSegment475.addChild(&TouchSensor476);

Transform& Transform477 =  Transform();
Transform477.setTranslation(new float[]{0.0051,1.2278,-0.0808});
Shape& Shape478 =  Shape();
Shape478.setUSE(CString("HAnimJointShape"));
Transform477.addChild(&Shape478);

HAnimSegment475.addChild(&Transform477);

Shape& Shape479 =  Shape();
LineSet& LineSet480 =  LineSet();
LineSet480.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA481 =  ColorRGBA();
ColorRGBA481.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet480.addChild(&ColorRGBA481);

Coordinate& Coordinate482 =  Coordinate();
Coordinate482.setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
LineSet480.setCoord(Coordinate482);

Shape479.setGeometry(&LineSet480);

HAnimSegment475.addChild(&Shape479);

HAnimJoint474.addChildren(&HAnimSegment475);

HAnimJoint& HAnimJoint483 =  HAnimJoint();
HAnimJoint483.setDEF(CString("hanim_vt11"));
HAnimJoint483.X3DNode::setName(CString("vt11"));
HAnimJoint483.setCenter(new float[]{0.0053,1.2679,-0.081});
HAnimSegment& HAnimSegment484 =  HAnimSegment();
HAnimSegment484.setDEF(CString("hanim_t11"));
HAnimSegment484.X3DNode::setName(CString("t11"));
TouchSensor& TouchSensor485 =  TouchSensor();
TouchSensor485.setDescription(CString("HAnimJoint vt11, HAnimSegment t11"));
HAnimSegment484.addChild(&TouchSensor485);

Transform& Transform486 =  Transform();
Transform486.setTranslation(new float[]{0.0053,1.2679,-0.081});
Shape& Shape487 =  Shape();
Shape487.setUSE(CString("HAnimJointShape"));
Transform486.addChild(&Shape487);

HAnimSegment484.addChild(&Transform486);

Shape& Shape488 =  Shape();
LineSet& LineSet489 =  LineSet();
LineSet489.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA490 =  ColorRGBA();
ColorRGBA490.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet489.addChild(&ColorRGBA490);

Coordinate& Coordinate491 =  Coordinate();
Coordinate491.setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
LineSet489.setCoord(Coordinate491);

Shape488.setGeometry(&LineSet489);

HAnimSegment484.addChild(&Shape488);

HAnimJoint483.addChildren(&HAnimSegment484);

HAnimJoint& HAnimJoint492 =  HAnimJoint();
HAnimJoint492.setDEF(CString("hanim_vt10"));
HAnimJoint492.X3DNode::setName(CString("vt10"));
HAnimJoint492.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimSegment& HAnimSegment493 =  HAnimSegment();
HAnimSegment493.setDEF(CString("hanim_t10"));
HAnimSegment493.X3DNode::setName(CString("t10"));
TouchSensor& TouchSensor494 =  TouchSensor();
TouchSensor494.setDescription(CString("HAnimJoint vt10, HAnimSegment t10"));
HAnimSegment493.addChild(&TouchSensor494);

Transform& Transform495 =  Transform();
Transform495.setTranslation(new float[]{0.0056,1.2848,-0.0822});
Shape& Shape496 =  Shape();
Shape496.setUSE(CString("HAnimJointShape"));
Transform495.addChild(&Shape496);

HAnimSegment493.addChild(&Transform495);

Shape& Shape497 =  Shape();
LineSet& LineSet498 =  LineSet();
LineSet498.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA499 =  ColorRGBA();
ColorRGBA499.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet498.addChild(&ColorRGBA499);

Coordinate& Coordinate500 =  Coordinate();
Coordinate500.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
LineSet498.setCoord(Coordinate500);

Shape497.setGeometry(&LineSet498);

HAnimSegment493.addChild(&Shape497);

Shape& Shape501 =  Shape();
LineSet& LineSet502 =  LineSet();
LineSet502.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA503 =  ColorRGBA();
ColorRGBA503.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet502.addChild(&ColorRGBA503);

Coordinate& Coordinate504 =  Coordinate();
Coordinate504.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147}, 6);
LineSet502.setCoord(Coordinate504);

Shape501.setGeometry(&LineSet502);

HAnimSegment493.addChild(&Shape501);

HAnimSite& HAnimSite505 =  HAnimSite();
HAnimSite505.setDEF(CString("hanim_substernale_pt"));
HAnimSite505.X3DNode::setName(CString("substernale_pt"));
HAnimSite505.setTranslation(new float[]{0.0085,1.2995,0.1147});
TouchSensor& TouchSensor506 =  TouchSensor();
TouchSensor506.setDescription(CString("HAnimSite substernale"));
HAnimSite505.addChild(&TouchSensor506);

Shape& Shape507 =  Shape();
Shape507.setUSE(CString("HAnimSiteShape"));
HAnimSite505.addChild(&Shape507);

HAnimSegment493.addChild(&HAnimSite505);

HAnimJoint492.addChildren(&HAnimSegment493);

HAnimJoint& HAnimJoint508 =  HAnimJoint();
HAnimJoint508.setDEF(CString("hanim_vt9"));
HAnimJoint508.X3DNode::setName(CString("vt9"));
HAnimJoint508.setCenter(new float[]{0.0057,1.3126,-0.0838});
HAnimSegment& HAnimSegment509 =  HAnimSegment();
HAnimSegment509.setDEF(CString("hanim_t9"));
HAnimSegment509.X3DNode::setName(CString("t9"));
TouchSensor& TouchSensor510 =  TouchSensor();
TouchSensor510.setDescription(CString("HAnimJoint vt9, HAnimSegment t9"));
HAnimSegment509.addChild(&TouchSensor510);

Transform& Transform511 =  Transform();
Transform511.setTranslation(new float[]{0.0057,1.3126,-0.0838});
Shape& Shape512 =  Shape();
Shape512.setUSE(CString("HAnimJointShape"));
Transform511.addChild(&Shape512);

HAnimSegment509.addChild(&Transform511);

Shape& Shape513 =  Shape();
LineSet& LineSet514 =  LineSet();
LineSet514.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA515 =  ColorRGBA();
ColorRGBA515.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet514.addChild(&ColorRGBA515);

Coordinate& Coordinate516 =  Coordinate();
Coordinate516.setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
LineSet514.setCoord(Coordinate516);

Shape513.setGeometry(&LineSet514);

HAnimSegment509.addChild(&Shape513);

Shape& Shape517 =  Shape();
LineSet& LineSet518 =  LineSet();
LineSet518.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA519 =  ColorRGBA();
ColorRGBA519.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet518.addChild(&ColorRGBA519);

Coordinate& Coordinate520 =  Coordinate();
Coordinate520.setPoint(new float[]{0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217}, 6);
LineSet518.setCoord(Coordinate520);

Shape517.setGeometry(&LineSet518);

HAnimSegment509.addChild(&Shape517);

Shape& Shape521 =  Shape();
LineSet& LineSet522 =  LineSet();
LineSet522.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA523 =  ColorRGBA();
ColorRGBA523.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet522.addChild(&ColorRGBA523);

Coordinate& Coordinate524 =  Coordinate();
Coordinate524.setPoint(new float[]{0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192}, 6);
LineSet522.setCoord(Coordinate524);

Shape521.setGeometry(&LineSet522);

HAnimSegment509.addChild(&Shape521);

HAnimSite& HAnimSite525 =  HAnimSite();
HAnimSite525.setDEF(CString("hanim_r_thelion_pt"));
HAnimSite525.X3DNode::setName(CString("r_thelion_pt"));
HAnimSite525.setTranslation(new float[]{-0.0736,1.3385,0.1217});
TouchSensor& TouchSensor526 =  TouchSensor();
TouchSensor526.setDescription(CString("HAnimSite r_thelion"));
HAnimSite525.addChild(&TouchSensor526);

Shape& Shape527 =  Shape();
Shape527.setUSE(CString("HAnimSiteShape"));
HAnimSite525.addChild(&Shape527);

HAnimSegment509.addChild(&HAnimSite525);

HAnimSite& HAnimSite528 =  HAnimSite();
HAnimSite528.setDEF(CString("hanim_l_thelion_pt"));
HAnimSite528.X3DNode::setName(CString("l_thelion_pt"));
HAnimSite528.setTranslation(new float[]{0.0918,1.3382,0.1192});
TouchSensor& TouchSensor529 =  TouchSensor();
TouchSensor529.setDescription(CString("HAnimSite l_thelion"));
HAnimSite528.addChild(&TouchSensor529);

Shape& Shape530 =  Shape();
Shape530.setUSE(CString("HAnimSiteShape"));
HAnimSite528.addChild(&Shape530);

HAnimSegment509.addChild(&HAnimSite528);

HAnimJoint508.addChildren(&HAnimSegment509);

HAnimJoint& HAnimJoint531 =  HAnimJoint();
HAnimJoint531.setDEF(CString("hanim_vt8"));
HAnimJoint531.X3DNode::setName(CString("vt8"));
HAnimJoint531.setCenter(new float[]{0.0057,1.3382,-0.0845});
HAnimSegment& HAnimSegment532 =  HAnimSegment();
HAnimSegment532.setDEF(CString("hanim_t8"));
HAnimSegment532.X3DNode::setName(CString("t8"));
TouchSensor& TouchSensor533 =  TouchSensor();
TouchSensor533.setDescription(CString("HAnimJoint vt8, HAnimSegment t8"));
HAnimSegment532.addChild(&TouchSensor533);

Transform& Transform534 =  Transform();
Transform534.setTranslation(new float[]{0.0057,1.3382,-0.0845});
Shape& Shape535 =  Shape();
Shape535.setUSE(CString("HAnimJointShape"));
Transform534.addChild(&Shape535);

HAnimSegment532.addChild(&Transform534);

Shape& Shape536 =  Shape();
LineSet& LineSet537 =  LineSet();
LineSet537.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA538 =  ColorRGBA();
ColorRGBA538.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet537.addChild(&ColorRGBA538);

Coordinate& Coordinate539 =  Coordinate();
Coordinate539.setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
LineSet537.setCoord(Coordinate539);

Shape536.setGeometry(&LineSet537);

HAnimSegment532.addChild(&Shape536);

HAnimJoint531.addChildren(&HAnimSegment532);

HAnimJoint& HAnimJoint540 =  HAnimJoint();
HAnimJoint540.setDEF(CString("hanim_vt7"));
HAnimJoint540.X3DNode::setName(CString("vt7"));
HAnimJoint540.setCenter(new float[]{0.0058,1.3625,-0.0833});
HAnimSegment& HAnimSegment541 =  HAnimSegment();
HAnimSegment541.setDEF(CString("hanim_t7"));
HAnimSegment541.X3DNode::setName(CString("t7"));
TouchSensor& TouchSensor542 =  TouchSensor();
TouchSensor542.setDescription(CString("HAnimJoint vt7, HAnimSegment t7"));
HAnimSegment541.addChild(&TouchSensor542);

Transform& Transform543 =  Transform();
Transform543.setTranslation(new float[]{0.0058,1.3625,-0.0833});
Shape& Shape544 =  Shape();
Shape544.setUSE(CString("HAnimJointShape"));
Transform543.addChild(&Shape544);

HAnimSegment541.addChild(&Transform543);

Shape& Shape545 =  Shape();
LineSet& LineSet546 =  LineSet();
LineSet546.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA547 =  ColorRGBA();
ColorRGBA547.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet546.addChild(&ColorRGBA547);

Coordinate& Coordinate548 =  Coordinate();
Coordinate548.setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
LineSet546.setCoord(Coordinate548);

Shape545.setGeometry(&LineSet546);

HAnimSegment541.addChild(&Shape545);

HAnimJoint540.addChildren(&HAnimSegment541);

HAnimJoint& HAnimJoint549 =  HAnimJoint();
HAnimJoint549.setDEF(CString("hanim_vt6"));
HAnimJoint549.X3DNode::setName(CString("vt6"));
HAnimJoint549.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimSegment& HAnimSegment550 =  HAnimSegment();
HAnimSegment550.setDEF(CString("hanim_t6"));
HAnimSegment550.X3DNode::setName(CString("t6"));
TouchSensor& TouchSensor551 =  TouchSensor();
TouchSensor551.setDescription(CString("HAnimJoint vt6, HAnimSegment t6"));
HAnimSegment550.addChild(&TouchSensor551);

Transform& Transform552 =  Transform();
Transform552.setTranslation(new float[]{0.0059,1.3866,-0.08});
Shape& Shape553 =  Shape();
Shape553.setUSE(CString("HAnimJointShape"));
Transform552.addChild(&Shape553);

HAnimSegment550.addChild(&Transform552);

Shape& Shape554 =  Shape();
LineSet& LineSet555 =  LineSet();
LineSet555.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA556 =  ColorRGBA();
ColorRGBA556.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet555.addChild(&ColorRGBA556);

Coordinate& Coordinate557 =  Coordinate();
Coordinate557.setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
LineSet555.setCoord(Coordinate557);

Shape554.setGeometry(&LineSet555);

HAnimSegment550.addChild(&Shape554);

HAnimJoint549.addChildren(&HAnimSegment550);

HAnimJoint& HAnimJoint558 =  HAnimJoint();
HAnimJoint558.setDEF(CString("hanim_vt5"));
HAnimJoint558.X3DNode::setName(CString("vt5"));
HAnimJoint558.setCenter(new float[]{0.006,1.4102,-0.0745});
HAnimSegment& HAnimSegment559 =  HAnimSegment();
HAnimSegment559.setDEF(CString("hanim_t5"));
HAnimSegment559.X3DNode::setName(CString("t5"));
TouchSensor& TouchSensor560 =  TouchSensor();
TouchSensor560.setDescription(CString("HAnimJoint vt5, HAnimSegment t5"));
HAnimSegment559.addChild(&TouchSensor560);

Transform& Transform561 =  Transform();
Transform561.setTranslation(new float[]{0.006,1.4102,-0.0745});
Shape& Shape562 =  Shape();
Shape562.setUSE(CString("HAnimJointShape"));
Transform561.addChild(&Shape562);

HAnimSegment559.addChild(&Transform561);

Shape& Shape563 =  Shape();
LineSet& LineSet564 =  LineSet();
LineSet564.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA565 =  ColorRGBA();
ColorRGBA565.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet564.addChild(&ColorRGBA565);

Coordinate& Coordinate566 =  Coordinate();
Coordinate566.setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
LineSet564.setCoord(Coordinate566);

Shape563.setGeometry(&LineSet564);

HAnimSegment559.addChild(&Shape563);

HAnimJoint558.addChildren(&HAnimSegment559);

HAnimJoint& HAnimJoint567 =  HAnimJoint();
HAnimJoint567.setDEF(CString("hanim_vt4"));
HAnimJoint567.X3DNode::setName(CString("vt4"));
HAnimJoint567.setCenter(new float[]{0.0061,1.432,-0.0675});
HAnimSegment& HAnimSegment568 =  HAnimSegment();
HAnimSegment568.setDEF(CString("hanim_t4"));
HAnimSegment568.X3DNode::setName(CString("t4"));
TouchSensor& TouchSensor569 =  TouchSensor();
TouchSensor569.setDescription(CString("HAnimJoint vt4, HAnimSegment t4"));
HAnimSegment568.addChild(&TouchSensor569);

Transform& Transform570 =  Transform();
Transform570.setTranslation(new float[]{0.0061,1.432,-0.0675});
Shape& Shape571 =  Shape();
Shape571.setUSE(CString("HAnimJointShape"));
Transform570.addChild(&Shape571);

HAnimSegment568.addChild(&Transform570);

Shape& Shape572 =  Shape();
LineSet& LineSet573 =  LineSet();
LineSet573.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA574 =  ColorRGBA();
ColorRGBA574.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet573.addChild(&ColorRGBA574);

Coordinate& Coordinate575 =  Coordinate();
Coordinate575.setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
LineSet573.setCoord(Coordinate575);

Shape572.setGeometry(&LineSet573);

HAnimSegment568.addChild(&Shape572);

HAnimJoint567.addChildren(&HAnimSegment568);

HAnimJoint& HAnimJoint576 =  HAnimJoint();
HAnimJoint576.setDEF(CString("hanim_vt3"));
HAnimJoint576.X3DNode::setName(CString("vt3"));
HAnimJoint576.setCenter(new float[]{0.0062,1.4583,-0.057});
HAnimSegment& HAnimSegment577 =  HAnimSegment();
HAnimSegment577.setDEF(CString("hanim_t3"));
HAnimSegment577.X3DNode::setName(CString("t3"));
TouchSensor& TouchSensor578 =  TouchSensor();
TouchSensor578.setDescription(CString("HAnimJoint vt3, HAnimSegment t3"));
HAnimSegment577.addChild(&TouchSensor578);

Transform& Transform579 =  Transform();
Transform579.setTranslation(new float[]{0.0062,1.4583,-0.057});
Shape& Shape580 =  Shape();
Shape580.setUSE(CString("HAnimJointShape"));
Transform579.addChild(&Shape580);

HAnimSegment577.addChild(&Transform579);

Shape& Shape581 =  Shape();
LineSet& LineSet582 =  LineSet();
LineSet582.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA583 =  ColorRGBA();
ColorRGBA583.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet582.addChild(&ColorRGBA583);

Coordinate& Coordinate584 =  Coordinate();
Coordinate584.setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
LineSet582.setCoord(Coordinate584);

Shape581.setGeometry(&LineSet582);

HAnimSegment577.addChild(&Shape581);

HAnimJoint576.addChildren(&HAnimSegment577);

HAnimJoint& HAnimJoint585 =  HAnimJoint();
HAnimJoint585.setDEF(CString("hanim_vt2"));
HAnimJoint585.X3DNode::setName(CString("vt2"));
HAnimJoint585.setCenter(new float[]{0.0063,1.4761,-0.0484});
HAnimSegment& HAnimSegment586 =  HAnimSegment();
HAnimSegment586.setDEF(CString("hanim_t2"));
HAnimSegment586.X3DNode::setName(CString("t2"));
TouchSensor& TouchSensor587 =  TouchSensor();
TouchSensor587.setDescription(CString("HAnimJoint vt2, HAnimSegment t2"));
HAnimSegment586.addChild(&TouchSensor587);

Transform& Transform588 =  Transform();
Transform588.setTranslation(new float[]{0.0063,1.4761,-0.0484});
Shape& Shape589 =  Shape();
Shape589.setUSE(CString("HAnimJointShape"));
Transform588.addChild(&Shape589);

HAnimSegment586.addChild(&Transform588);

Shape& Shape590 =  Shape();
LineSet& LineSet591 =  LineSet();
LineSet591.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA592 =  ColorRGBA();
ColorRGBA592.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet591.addChild(&ColorRGBA592);

Coordinate& Coordinate593 =  Coordinate();
Coordinate593.setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
LineSet591.setCoord(Coordinate593);

Shape590.setGeometry(&LineSet591);

HAnimSegment586.addChild(&Shape590);

HAnimJoint585.addChildren(&HAnimSegment586);

HAnimJoint& HAnimJoint594 =  HAnimJoint();
HAnimJoint594.setDEF(CString("hanim_vt1"));
HAnimJoint594.X3DNode::setName(CString("vt1"));
HAnimJoint594.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimSegment& HAnimSegment595 =  HAnimSegment();
HAnimSegment595.setDEF(CString("hanim_t1"));
HAnimSegment595.X3DNode::setName(CString("t1"));
TouchSensor& TouchSensor596 =  TouchSensor();
TouchSensor596.setDescription(CString("HAnimJoint vt1, HAnimSegment t1"));
HAnimSegment595.addChild(&TouchSensor596);

Transform& Transform597 =  Transform();
Transform597.setTranslation(new float[]{0.0065,1.4951,-0.0387});
Shape& Shape598 =  Shape();
Shape598.setUSE(CString("HAnimJointShape"));
Transform597.addChild(&Shape598);

HAnimSegment595.addChild(&Transform597);

Shape& Shape599 =  Shape();
LineSet& LineSet600 =  LineSet();
LineSet600.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA601 =  ColorRGBA();
ColorRGBA601.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet600.addChild(&ColorRGBA601);

Coordinate& Coordinate602 =  Coordinate();
Coordinate602.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
LineSet600.setCoord(Coordinate602);

Shape599.setGeometry(&LineSet600);

HAnimSegment595.addChild(&Shape599);

Shape& Shape603 =  Shape();
LineSet& LineSet604 =  LineSet();
LineSet604.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA605 =  ColorRGBA();
ColorRGBA605.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet604.addChild(&ColorRGBA605);

Coordinate& Coordinate606 =  Coordinate();
Coordinate606.setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet604.setCoord(Coordinate606);

Shape603.setGeometry(&LineSet604);

HAnimSegment595.addChild(&Shape603);

Shape& Shape607 =  Shape();
LineSet& LineSet608 =  LineSet();
LineSet608.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA609 =  ColorRGBA();
ColorRGBA609.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet608.addChild(&ColorRGBA609);

Coordinate& Coordinate610 =  Coordinate();
Coordinate610.setPoint(new float[]{0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353}, 6);
LineSet608.setCoord(Coordinate610);

Shape607.setGeometry(&LineSet608);

HAnimSegment595.addChild(&Shape607);

Shape& Shape611 =  Shape();
LineSet& LineSet612 =  LineSet();
LineSet612.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA613 =  ColorRGBA();
ColorRGBA613.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet612.addChild(&ColorRGBA613);

Coordinate& Coordinate614 =  Coordinate();
Coordinate614.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551}, 6);
LineSet612.setCoord(Coordinate614);

Shape611.setGeometry(&LineSet612);

HAnimSegment595.addChild(&Shape611);

Shape& Shape615 =  Shape();
LineSet& LineSet616 =  LineSet();
LineSet616.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA617 =  ColorRGBA();
ColorRGBA617.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet616.addChild(&ColorRGBA617);

Coordinate& Coordinate618 =  Coordinate();
Coordinate618.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815}, 6);
LineSet616.setCoord(Coordinate618);

Shape615.setGeometry(&LineSet616);

HAnimSegment595.addChild(&Shape615);

HAnimSite& HAnimSite619 =  HAnimSite();
HAnimSite619.setDEF(CString("hanim_suprasternale_pt"));
HAnimSite619.X3DNode::setName(CString("suprasternale_pt"));
HAnimSite619.setTranslation(new float[]{0.0084,1.4714,0.0551});
TouchSensor& TouchSensor620 =  TouchSensor();
TouchSensor620.setDescription(CString("HAnimSite suprasternale"));
HAnimSite619.addChild(&TouchSensor620);

Shape& Shape621 =  Shape();
Shape621.setUSE(CString("HAnimSiteShape"));
HAnimSite619.addChild(&Shape621);

HAnimSegment595.addChild(&HAnimSite619);

HAnimSite& HAnimSite622 =  HAnimSite();
HAnimSite622.setDEF(CString("hanim_cervicale_pt"));
HAnimSite622.X3DNode::setName(CString("cervicale_pt"));
HAnimSite622.setTranslation(new float[]{0.0064,1.52,-0.0815});
TouchSensor& TouchSensor623 =  TouchSensor();
TouchSensor623.setDescription(CString("HAnimSite cervicale"));
HAnimSite622.addChild(&TouchSensor623);

Shape& Shape624 =  Shape();
Shape624.setUSE(CString("HAnimSiteShape"));
HAnimSite622.addChild(&Shape624);

HAnimSegment595.addChild(&HAnimSite622);

HAnimJoint594.addChildren(&HAnimSegment595);

HAnimJoint& HAnimJoint625 =  HAnimJoint();
HAnimJoint625.setDEF(CString("hanim_vc7"));
HAnimJoint625.X3DNode::setName(CString("vc7"));
HAnimJoint625.setRotation(new float[]{-0.999999999999996,0,0,0.222164034843446});
HAnimJoint625.setCenter(new float[]{0.0066,1.5132,-0.0301});
HAnimSegment& HAnimSegment626 =  HAnimSegment();
HAnimSegment626.setDEF(CString("hanim_c7"));
HAnimSegment626.X3DNode::setName(CString("c7"));
TouchSensor& TouchSensor627 =  TouchSensor();
TouchSensor627.setDescription(CString("HAnimJoint vc7, HAnimSegment c7"));
HAnimSegment626.addChild(&TouchSensor627);

Transform& Transform628 =  Transform();
Transform628.setTranslation(new float[]{0.0066,1.5132,-0.0301});
Shape& Shape629 =  Shape();
Shape629.setUSE(CString("HAnimJointShape"));
Transform628.addChild(&Shape629);

HAnimSegment626.addChild(&Transform628);

Shape& Shape630 =  Shape();
LineSet& LineSet631 =  LineSet();
LineSet631.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA632 =  ColorRGBA();
ColorRGBA632.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet631.addChild(&ColorRGBA632);

Coordinate& Coordinate633 =  Coordinate();
Coordinate633.setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
LineSet631.setCoord(Coordinate633);

Shape630.setGeometry(&LineSet631);

HAnimSegment626.addChild(&Shape630);

Shape& Shape634 =  Shape();
LineSet& LineSet635 =  LineSet();
LineSet635.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA636 =  ColorRGBA();
ColorRGBA636.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet635.addChild(&ColorRGBA636);

Coordinate& Coordinate637 =  Coordinate();
Coordinate637.setPoint(new float[]{0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022}, 6);
LineSet635.setCoord(Coordinate637);

Shape634.setGeometry(&LineSet635);

HAnimSegment626.addChild(&Shape634);

Shape& Shape638 =  Shape();
LineSet& LineSet639 =  LineSet();
LineSet639.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA640 =  ColorRGBA();
ColorRGBA640.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet639.addChild(&ColorRGBA640);

Coordinate& Coordinate641 =  Coordinate();
Coordinate641.setPoint(new float[]{0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038}, 6);
LineSet639.setCoord(Coordinate641);

Shape638.setGeometry(&LineSet639);

HAnimSegment626.addChild(&Shape638);

HAnimSite& HAnimSite642 =  HAnimSite();
HAnimSite642.setDEF(CString("hanim_r_neck_base_pt"));
HAnimSite642.X3DNode::setName(CString("r_neck_base_pt"));
HAnimSite642.setTranslation(new float[]{-0.0419,1.5149,-0.022});
TouchSensor& TouchSensor643 =  TouchSensor();
TouchSensor643.setDescription(CString("HAnimSite r_neck_base"));
HAnimSite642.addChild(&TouchSensor643);

Shape& Shape644 =  Shape();
Shape644.setUSE(CString("HAnimSiteShape"));
HAnimSite642.addChild(&Shape644);

HAnimSegment626.addChild(&HAnimSite642);

HAnimSite& HAnimSite645 =  HAnimSite();
HAnimSite645.setDEF(CString("hanim_l_neck_base_pt"));
HAnimSite645.X3DNode::setName(CString("l_neck_base_pt"));
HAnimSite645.setTranslation(new float[]{0.0646,1.5141,-0.038});
TouchSensor& TouchSensor646 =  TouchSensor();
TouchSensor646.setDescription(CString("HAnimSite l_neck_base"));
HAnimSite645.addChild(&TouchSensor646);

Shape& Shape647 =  Shape();
Shape647.setUSE(CString("HAnimSiteShape"));
HAnimSite645.addChild(&Shape647);

HAnimSegment626.addChild(&HAnimSite645);

HAnimJoint625.addChildren(&HAnimSegment626);

HAnimJoint& HAnimJoint648 =  HAnimJoint();
HAnimJoint648.setDEF(CString("hanim_vc6"));
HAnimJoint648.X3DNode::setName(CString("vc6"));
HAnimJoint648.setCenter(new float[]{0.0066,1.5357,-0.0143});
HAnimSegment& HAnimSegment649 =  HAnimSegment();
HAnimSegment649.setDEF(CString("hanim_c6"));
HAnimSegment649.X3DNode::setName(CString("c6"));
TouchSensor& TouchSensor650 =  TouchSensor();
TouchSensor650.setDescription(CString("HAnimJoint vc6, HAnimSegment c6"));
HAnimSegment649.addChild(&TouchSensor650);

Transform& Transform651 =  Transform();
Transform651.setTranslation(new float[]{0.0066,1.5357,-0.0143});
Shape& Shape652 =  Shape();
Shape652.setUSE(CString("HAnimJointShape"));
Transform651.addChild(&Shape652);

HAnimSegment649.addChild(&Transform651);

Shape& Shape653 =  Shape();
LineSet& LineSet654 =  LineSet();
LineSet654.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA655 =  ColorRGBA();
ColorRGBA655.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet654.addChild(&ColorRGBA655);

Coordinate& Coordinate656 =  Coordinate();
Coordinate656.setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
LineSet654.setCoord(Coordinate656);

Shape653.setGeometry(&LineSet654);

HAnimSegment649.addChild(&Shape653);

HAnimJoint648.addChildren(&HAnimSegment649);

HAnimJoint& HAnimJoint657 =  HAnimJoint();
HAnimJoint657.setDEF(CString("hanim_vc5"));
HAnimJoint657.X3DNode::setName(CString("vc5"));
HAnimJoint657.setCenter(new float[]{0.0066,1.552,-0.0082});
HAnimSegment& HAnimSegment658 =  HAnimSegment();
HAnimSegment658.setDEF(CString("hanim_c5"));
HAnimSegment658.X3DNode::setName(CString("c5"));
TouchSensor& TouchSensor659 =  TouchSensor();
TouchSensor659.setDescription(CString("HAnimJoint vc5, HAnimSegment c5"));
HAnimSegment658.addChild(&TouchSensor659);

Transform& Transform660 =  Transform();
Transform660.setTranslation(new float[]{0.0066,1.552,-0.0082});
Shape& Shape661 =  Shape();
Shape661.setUSE(CString("HAnimJointShape"));
Transform660.addChild(&Shape661);

HAnimSegment658.addChild(&Transform660);

Shape& Shape662 =  Shape();
LineSet& LineSet663 =  LineSet();
LineSet663.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA664 =  ColorRGBA();
ColorRGBA664.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet663.addChild(&ColorRGBA664);

Coordinate& Coordinate665 =  Coordinate();
Coordinate665.setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
LineSet663.setCoord(Coordinate665);

Shape662.setGeometry(&LineSet663);

HAnimSegment658.addChild(&Shape662);

HAnimJoint657.addChildren(&HAnimSegment658);

HAnimJoint& HAnimJoint666 =  HAnimJoint();
HAnimJoint666.setDEF(CString("hanim_vc4"));
HAnimJoint666.X3DNode::setName(CString("vc4"));
HAnimJoint666.setRotation(new float[]{1,0,0,0.302520108222961});
HAnimJoint666.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimSegment& HAnimSegment667 =  HAnimSegment();
HAnimSegment667.setDEF(CString("hanim_c4"));
HAnimSegment667.X3DNode::setName(CString("c4"));
TouchSensor& TouchSensor668 =  TouchSensor();
TouchSensor668.setDescription(CString("HAnimJoint vc4, HAnimSegment c4"));
HAnimSegment667.addChild(&TouchSensor668);

Transform& Transform669 =  Transform();
Transform669.setTranslation(new float[]{0.0066,1.5662,-0.0084});
Shape& Shape670 =  Shape();
Shape670.setUSE(CString("HAnimJointShape"));
Transform669.addChild(&Shape670);

HAnimSegment667.addChild(&Transform669);

Shape& Shape671 =  Shape();
LineSet& LineSet672 =  LineSet();
LineSet672.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA673 =  ColorRGBA();
ColorRGBA673.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet672.addChild(&ColorRGBA673);

Coordinate& Coordinate674 =  Coordinate();
Coordinate674.setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
LineSet672.setCoord(Coordinate674);

Shape671.setGeometry(&LineSet672);

HAnimSegment667.addChild(&Shape671);

HAnimJoint666.addChildren(&HAnimSegment667);

HAnimJoint& HAnimJoint675 =  HAnimJoint();
HAnimJoint675.setDEF(CString("hanim_vc3"));
HAnimJoint675.X3DNode::setName(CString("vc3"));
HAnimJoint675.setCenter(new float[]{0.0066,1.58,-0.0103});
HAnimSegment& HAnimSegment676 =  HAnimSegment();
HAnimSegment676.setDEF(CString("hanim_c3"));
HAnimSegment676.X3DNode::setName(CString("c3"));
TouchSensor& TouchSensor677 =  TouchSensor();
TouchSensor677.setDescription(CString("HAnimJoint vc3, HAnimSegment c3"));
HAnimSegment676.addChild(&TouchSensor677);

Transform& Transform678 =  Transform();
Transform678.setTranslation(new float[]{0.0066,1.58,-0.0103});
Shape& Shape679 =  Shape();
Shape679.setUSE(CString("HAnimJointShape"));
Transform678.addChild(&Shape679);

HAnimSegment676.addChild(&Transform678);

Shape& Shape680 =  Shape();
LineSet& LineSet681 =  LineSet();
LineSet681.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA682 =  ColorRGBA();
ColorRGBA682.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet681.addChild(&ColorRGBA682);

Coordinate& Coordinate683 =  Coordinate();
Coordinate683.setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
LineSet681.setCoord(Coordinate683);

Shape680.setGeometry(&LineSet681);

HAnimSegment676.addChild(&Shape680);

HAnimJoint675.addChildren(&HAnimSegment676);

HAnimJoint& HAnimJoint684 =  HAnimJoint();
HAnimJoint684.setDEF(CString("hanim_vc2"));
HAnimJoint684.X3DNode::setName(CString("vc2"));
HAnimJoint684.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimSegment& HAnimSegment685 =  HAnimSegment();
HAnimSegment685.setDEF(CString("hanim_c2"));
HAnimSegment685.X3DNode::setName(CString("c2"));
TouchSensor& TouchSensor686 =  TouchSensor();
TouchSensor686.setDescription(CString("HAnimJoint vc2, HAnimSegment c2"));
HAnimSegment685.addChild(&TouchSensor686);

Transform& Transform687 =  Transform();
Transform687.setTranslation(new float[]{0.0066,1.5928,-0.0103});
Shape& Shape688 =  Shape();
Shape688.setUSE(CString("HAnimJointShape"));
Transform687.addChild(&Shape688);

HAnimSegment685.addChild(&Transform687);

Shape& Shape689 =  Shape();
LineSet& LineSet690 =  LineSet();
LineSet690.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA691 =  ColorRGBA();
ColorRGBA691.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet690.addChild(&ColorRGBA691);

Coordinate& Coordinate692 =  Coordinate();
Coordinate692.setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
LineSet690.setCoord(Coordinate692);

Shape689.setGeometry(&LineSet690);

HAnimSegment685.addChild(&Shape689);

HAnimJoint684.addChildren(&HAnimSegment685);

HAnimJoint& HAnimJoint693 =  HAnimJoint();
HAnimJoint693.setDEF(CString("hanim_vc1"));
HAnimJoint693.X3DNode::setName(CString("vc1"));
HAnimJoint693.setCenter(new float[]{0.0066,1.6144,-0.0034});
HAnimSegment& HAnimSegment694 =  HAnimSegment();
HAnimSegment694.setDEF(CString("hanim_c1"));
HAnimSegment694.X3DNode::setName(CString("c1"));
TouchSensor& TouchSensor695 =  TouchSensor();
TouchSensor695.setDescription(CString("HAnimJoint vc1, HAnimSegment c1"));
HAnimSegment694.addChild(&TouchSensor695);

Transform& Transform696 =  Transform();
Transform696.setTranslation(new float[]{0.0066,1.6144,-0.0034});
Shape& Shape697 =  Shape();
Shape697.setUSE(CString("HAnimJointShape"));
Transform696.addChild(&Shape697);

HAnimSegment694.addChild(&Transform696);

Shape& Shape698 =  Shape();
LineSet& LineSet699 =  LineSet();
LineSet699.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA700 =  ColorRGBA();
ColorRGBA700.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet699.addChild(&ColorRGBA700);

Coordinate& Coordinate701 =  Coordinate();
Coordinate701.setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
LineSet699.setCoord(Coordinate701);

Shape698.setGeometry(&LineSet699);

HAnimSegment694.addChild(&Shape698);

HAnimJoint693.addChildren(&HAnimSegment694);

HAnimJoint& HAnimJoint702 =  HAnimJoint();
HAnimJoint702.setDEF(CString("hanim_skullbase"));
HAnimJoint702.X3DNode::setName(CString("skullbase"));
HAnimJoint702.setRotation(new float[]{-1.00000000000001,0,0,0.231096035769597});
HAnimJoint702.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimSegment& HAnimSegment703 =  HAnimSegment();
HAnimSegment703.setDEF(CString("hanim_skull"));
HAnimSegment703.X3DNode::setName(CString("skull"));
TouchSensor& TouchSensor704 =  TouchSensor();
TouchSensor704.setDescription(CString("HAnimJoint skullbase, HAnimSegment skull"));
HAnimSegment703.addChild(&TouchSensor704);

Transform& Transform705 =  Transform();
Transform705.setTranslation(new float[]{0.0044,1.6209,0.0236});
Shape& Shape706 =  Shape();
Shape706.setUSE(CString("HAnimJointShape"));
Transform705.addChild(&Shape706);

HAnimSegment703.addChild(&Transform705);

Shape& Shape707 =  Shape();
LineSet& LineSet708 =  LineSet();
LineSet708.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA709 =  ColorRGBA();
ColorRGBA709.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet708.addChild(&ColorRGBA709);

Coordinate& Coordinate710 =  Coordinate();
Coordinate710.setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502}, 6);
LineSet708.setCoord(Coordinate710);

Shape707.setGeometry(&LineSet708);

HAnimSegment703.addChild(&Shape707);

Shape& Shape711 =  Shape();
LineSet& LineSet712 =  LineSet();
LineSet712.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA713 =  ColorRGBA();
ColorRGBA713.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet712.addChild(&ColorRGBA713);

Coordinate& Coordinate714 =  Coordinate();
Coordinate714.setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502}, 6);
LineSet712.setCoord(Coordinate714);

Shape711.setGeometry(&LineSet712);

HAnimSegment703.addChild(&Shape711);

Shape& Shape715 =  Shape();
LineSet& LineSet716 =  LineSet();
LineSet716.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA717 =  ColorRGBA();
ColorRGBA717.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet716.addChild(&ColorRGBA717);

Coordinate& Coordinate718 =  Coordinate();
Coordinate718.setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.635,0.0506}, 6);
LineSet716.setCoord(Coordinate718);

Shape715.setGeometry(&LineSet716);

HAnimSegment703.addChild(&Shape715);

Shape& Shape719 =  Shape();
LineSet& LineSet720 =  LineSet();
LineSet720.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA721 =  ColorRGBA();
ColorRGBA721.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet720.addChild(&ColorRGBA721);

Coordinate& Coordinate722 =  Coordinate();
Coordinate722.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502}, 6);
LineSet720.setCoord(Coordinate722);

Shape719.setGeometry(&LineSet720);

HAnimSegment703.addChild(&Shape719);

Shape& Shape723 =  Shape();
LineSet& LineSet724 =  LineSet();
LineSet724.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA725 =  ColorRGBA();
ColorRGBA725.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet724.addChild(&ColorRGBA725);

Coordinate& Coordinate726 =  Coordinate();
Coordinate726.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502}, 6);
LineSet724.setCoord(Coordinate726);

Shape723.setGeometry(&LineSet724);

HAnimSegment703.addChild(&Shape723);

Shape& Shape727 =  Shape();
LineSet& LineSet728 =  LineSet();
LineSet728.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA729 =  ColorRGBA();
ColorRGBA729.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet728.addChild(&ColorRGBA729);

Coordinate& Coordinate730 =  Coordinate();
Coordinate730.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.635,0.0506}, 6);
LineSet728.setCoord(Coordinate730);

Shape727.setGeometry(&LineSet728);

HAnimSegment703.addChild(&Shape727);

Shape& Shape731 =  Shape();
LineSet& LineSet732 =  LineSet();
LineSet732.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA733 =  ColorRGBA();
ColorRGBA733.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet732.addChild(&ColorRGBA733);

Coordinate& Coordinate734 =  Coordinate();
Coordinate734.setPoint(new float[]{0.0044,1.6209,0.0236,0,1.63,0.015}, 6);
LineSet732.setCoord(Coordinate734);

Shape731.setGeometry(&LineSet732);

HAnimSegment703.addChild(&Shape731);

Shape& Shape735 =  Shape();
LineSet& LineSet736 =  LineSet();
LineSet736.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA737 =  ColorRGBA();
ColorRGBA737.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet736.addChild(&ColorRGBA737);

Coordinate& Coordinate738 =  Coordinate();
Coordinate738.setPoint(new float[]{0.0044,1.6209,0.0236,0.005,1.7504,0.0055}, 6);
LineSet736.setCoord(Coordinate738);

Shape735.setGeometry(&LineSet736);

HAnimSegment703.addChild(&Shape735);

Shape& Shape739 =  Shape();
LineSet& LineSet740 =  LineSet();
LineSet740.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA741 =  ColorRGBA();
ColorRGBA741.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet740.addChild(&ColorRGBA741);

Coordinate& Coordinate742 =  Coordinate();
Coordinate742.setPoint(new float[]{0.0044,1.6209,0.0236,0.0058,1.6316,0.0852}, 6);
LineSet740.setCoord(Coordinate742);

Shape739.setGeometry(&LineSet740);

HAnimSegment703.addChild(&Shape739);

Shape& Shape743 =  Shape();
LineSet& LineSet744 =  LineSet();
LineSet744.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA745 =  ColorRGBA();
ColorRGBA745.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet744.addChild(&ColorRGBA745);

Coordinate& Coordinate746 =  Coordinate();
Coordinate746.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752}, 6);
LineSet744.setCoord(Coordinate746);

Shape743.setGeometry(&LineSet744);

HAnimSegment703.addChild(&Shape743);

Shape& Shape747 =  Shape();
LineSet& LineSet748 =  LineSet();
LineSet748.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA749 =  ColorRGBA();
ColorRGBA749.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet748.addChild(&ColorRGBA749);

Coordinate& Coordinate750 =  Coordinate();
Coordinate750.setPoint(new float[]{0.0044,1.6209,0.0236,0.0341,1.6171,0.0752}, 6);
LineSet748.setCoord(Coordinate750);

Shape747.setGeometry(&LineSet748);

HAnimSegment703.addChild(&Shape747);

Shape& Shape751 =  Shape();
LineSet& LineSet752 =  LineSet();
LineSet752.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA753 =  ColorRGBA();
ColorRGBA753.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet752.addChild(&ColorRGBA753);

Coordinate& Coordinate754 =  Coordinate();
Coordinate754.setPoint(new float[]{0.0044,1.6209,0.0236,0.0061,1.541,0.0805}, 6);
LineSet752.setCoord(Coordinate754);

Shape751.setGeometry(&LineSet752);

HAnimSegment703.addChild(&Shape751);

Shape& Shape755 =  Shape();
LineSet& LineSet756 =  LineSet();
LineSet756.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA757 =  ColorRGBA();
ColorRGBA757.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet756.addChild(&ColorRGBA757);

Coordinate& Coordinate758 =  Coordinate();
Coordinate758.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302}, 6);
LineSet756.setCoord(Coordinate758);

Shape755.setGeometry(&LineSet756);

HAnimSegment703.addChild(&Shape755);

Shape& Shape759 =  Shape();
LineSet& LineSet760 =  LineSet();
LineSet760.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA761 =  ColorRGBA();
ColorRGBA761.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet760.addChild(&ColorRGBA761);

Coordinate& Coordinate762 =  Coordinate();
Coordinate762.setPoint(new float[]{0.0044,1.6209,0.0236,-0.052,1.5529,0.0347}, 6);
LineSet760.setCoord(Coordinate762);

Shape759.setGeometry(&LineSet760);

HAnimSegment703.addChild(&Shape759);

Shape& Shape763 =  Shape();
LineSet& LineSet764 =  LineSet();
LineSet764.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA765 =  ColorRGBA();
ColorRGBA765.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet764.addChild(&ColorRGBA765);

Coordinate& Coordinate766 =  Coordinate();
Coordinate766.setPoint(new float[]{0.0044,1.6209,0.0236,0.0739,1.6348,0.0282}, 6);
LineSet764.setCoord(Coordinate766);

Shape763.setGeometry(&LineSet764);

HAnimSegment703.addChild(&Shape763);

Shape& Shape767 =  Shape();
LineSet& LineSet768 =  LineSet();
LineSet768.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA769 =  ColorRGBA();
ColorRGBA769.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet768.addChild(&ColorRGBA769);

Coordinate& Coordinate770 =  Coordinate();
Coordinate770.setPoint(new float[]{0.0044,1.6209,0.0236,0.0631,1.553,0.033}, 6);
LineSet768.setCoord(Coordinate770);

Shape767.setGeometry(&LineSet768);

HAnimSegment703.addChild(&Shape767);

Shape& Shape771 =  Shape();
LineSet& LineSet772 =  LineSet();
LineSet772.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA773 =  ColorRGBA();
ColorRGBA773.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet772.addChild(&ColorRGBA773);

Coordinate& Coordinate774 =  Coordinate();
Coordinate774.setPoint(new float[]{0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796}, 6);
LineSet772.setCoord(Coordinate774);

Shape771.setGeometry(&LineSet772);

HAnimSegment703.addChild(&Shape771);

HAnimSite& HAnimSite775 =  HAnimSite();
HAnimSite775.setDEF(CString("hanim_skull_tip"));
HAnimSite775.X3DNode::setName(CString("skull_tip"));
HAnimSite775.setTranslation(new float[]{0.005,1.7504,0.0055});
TouchSensor& TouchSensor776 =  TouchSensor();
TouchSensor776.setDescription(CString("HAnimSite skull_tip"));
HAnimSite775.addChild(&TouchSensor776);

Shape& Shape777 =  Shape();
Shape777.setUSE(CString("HAnimSiteShape"));
HAnimSite775.addChild(&Shape777);

HAnimSegment703.addChild(&HAnimSite775);

HAnimSite& HAnimSite778 =  HAnimSite();
HAnimSite778.setDEF(CString("hanim_sellion_pt"));
HAnimSite778.X3DNode::setName(CString("sellion_pt"));
HAnimSite778.setTranslation(new float[]{0.0058,1.6316,0.0852});
TouchSensor& TouchSensor779 =  TouchSensor();
TouchSensor779.setDescription(CString("HAnimSite sellion"));
HAnimSite778.addChild(&TouchSensor779);

Shape& Shape780 =  Shape();
Shape780.setUSE(CString("HAnimSiteShape"));
HAnimSite778.addChild(&Shape780);

HAnimSegment703.addChild(&HAnimSite778);

HAnimSite& HAnimSite781 =  HAnimSite();
HAnimSite781.setDEF(CString("hanim_r_infraorbitale_pt"));
HAnimSite781.X3DNode::setName(CString("r_infraorbitale_pt"));
HAnimSite781.setTranslation(new float[]{-0.0237,1.6171,0.0752});
TouchSensor& TouchSensor782 =  TouchSensor();
TouchSensor782.setDescription(CString("HAnimSite r_infraorbitale"));
HAnimSite781.addChild(&TouchSensor782);

Shape& Shape783 =  Shape();
Shape783.setUSE(CString("HAnimSiteShape"));
HAnimSite781.addChild(&Shape783);

HAnimSegment703.addChild(&HAnimSite781);

HAnimSite& HAnimSite784 =  HAnimSite();
HAnimSite784.setDEF(CString("hanim_l_infraorbitale_pt"));
HAnimSite784.X3DNode::setName(CString("l_infraorbitale_pt"));
HAnimSite784.setTranslation(new float[]{0.0341,1.6171,0.0752});
TouchSensor& TouchSensor785 =  TouchSensor();
TouchSensor785.setDescription(CString("HAnimSite l_infraorbitale"));
HAnimSite784.addChild(&TouchSensor785);

Shape& Shape786 =  Shape();
Shape786.setUSE(CString("HAnimSiteShape"));
HAnimSite784.addChild(&Shape786);

HAnimSegment703.addChild(&HAnimSite784);

HAnimSite& HAnimSite787 =  HAnimSite();
HAnimSite787.setDEF(CString("hanim_supramenton_pt"));
HAnimSite787.X3DNode::setName(CString("supramenton_pt"));
HAnimSite787.setTranslation(new float[]{0.0061,1.541,0.0805});
TouchSensor& TouchSensor788 =  TouchSensor();
TouchSensor788.setDescription(CString("HAnimSite supramenton"));
HAnimSite787.addChild(&TouchSensor788);

Shape& Shape789 =  Shape();
Shape789.setUSE(CString("HAnimSiteShape"));
HAnimSite787.addChild(&Shape789);

HAnimSegment703.addChild(&HAnimSite787);

HAnimSite& HAnimSite790 =  HAnimSite();
HAnimSite790.setDEF(CString("hanim_r_tragion_pt"));
HAnimSite790.X3DNode::setName(CString("r_tragion_pt"));
HAnimSite790.setTranslation(new float[]{-0.0646,1.6347,0.0302});
TouchSensor& TouchSensor791 =  TouchSensor();
TouchSensor791.setDescription(CString("HAnimSite r_tragion"));
HAnimSite790.addChild(&TouchSensor791);

Shape& Shape792 =  Shape();
Shape792.setUSE(CString("HAnimSiteShape"));
HAnimSite790.addChild(&Shape792);

HAnimSegment703.addChild(&HAnimSite790);

HAnimSite& HAnimSite793 =  HAnimSite();
HAnimSite793.setDEF(CString("hanim_r_gonion_pt"));
HAnimSite793.X3DNode::setName(CString("r_gonion_pt"));
HAnimSite793.setTranslation(new float[]{-0.052,1.5529,0.0347});
TouchSensor& TouchSensor794 =  TouchSensor();
TouchSensor794.setDescription(CString("HAnimSite r_gonion"));
HAnimSite793.addChild(&TouchSensor794);

Shape& Shape795 =  Shape();
Shape795.setUSE(CString("HAnimSiteShape"));
HAnimSite793.addChild(&Shape795);

HAnimSegment703.addChild(&HAnimSite793);

HAnimSite& HAnimSite796 =  HAnimSite();
HAnimSite796.setDEF(CString("hanim_l_tragion_pt"));
HAnimSite796.X3DNode::setName(CString("l_tragion_pt"));
HAnimSite796.setTranslation(new float[]{0.0739,1.6348,0.0282});
TouchSensor& TouchSensor797 =  TouchSensor();
TouchSensor797.setDescription(CString("HAnimSite l_tragion"));
HAnimSite796.addChild(&TouchSensor797);

Shape& Shape798 =  Shape();
Shape798.setUSE(CString("HAnimSiteShape"));
HAnimSite796.addChild(&Shape798);

HAnimSegment703.addChild(&HAnimSite796);

HAnimSite& HAnimSite799 =  HAnimSite();
HAnimSite799.setDEF(CString("hanim_l_gonion_pt"));
HAnimSite799.X3DNode::setName(CString("l_gonion_pt"));
HAnimSite799.setTranslation(new float[]{0.0631,1.553,0.033});
TouchSensor& TouchSensor800 =  TouchSensor();
TouchSensor800.setDescription(CString("HAnimSite l_gonion"));
HAnimSite799.addChild(&TouchSensor800);

Shape& Shape801 =  Shape();
Shape801.setUSE(CString("HAnimSiteShape"));
HAnimSite799.addChild(&Shape801);

HAnimSegment703.addChild(&HAnimSite799);

HAnimSite& HAnimSite802 =  HAnimSite();
HAnimSite802.setDEF(CString("hanim_nuchale_pt"));
HAnimSite802.X3DNode::setName(CString("nuchale_pt"));
HAnimSite802.setTranslation(new float[]{0.0039,1.5972,-0.0796});
TouchSensor& TouchSensor803 =  TouchSensor();
TouchSensor803.setDescription(CString("HAnimSite nuchale"));
HAnimSite802.addChild(&TouchSensor803);

Shape& Shape804 =  Shape();
Shape804.setUSE(CString("HAnimSiteShape"));
HAnimSite802.addChild(&Shape804);

HAnimSegment703.addChild(&HAnimSite802);

HAnimJoint702.addChildren(&HAnimSegment703);

HAnimJoint& HAnimJoint805 =  HAnimJoint();
HAnimJoint805.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint805.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint805.setRotation(new float[]{-0.999999999999999,0,0,0.277705039416179});
HAnimJoint805.setCenter(new float[]{0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment806 =  HAnimSegment();
HAnimSegment806.setDEF(CString("hanim_l_eyeball"));
HAnimSegment806.X3DNode::setName(CString("l_eyeball"));
TouchSensor& TouchSensor807 =  TouchSensor();
TouchSensor807.setDescription(CString("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"));
HAnimSegment806.addChild(&TouchSensor807);

Transform& Transform808 =  Transform();
Transform808.setTranslation(new float[]{0.0336,1.6332,0.0502});
Shape& Shape809 =  Shape();
Shape809.setUSE(CString("HAnimJointShape"));
Transform808.addChild(&Shape809);

HAnimSegment806.addChild(&Transform808);

Shape& Shape810 =  Shape();
LineSet& LineSet811 =  LineSet();
LineSet811.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA812 =  ColorRGBA();
ColorRGBA812.setDEF(CString("HAnimSiteViewpointLineColorRGBA"));
ColorRGBA812.setColor(new float[]{0,0,1,1,0,0,1,0.1}, 8);
LineSet811.addChild(&ColorRGBA812);

Coordinate& Coordinate813 =  Coordinate();
Coordinate813.setPoint(new float[]{0.0336,1.6332,0.0502,0.034,1.64,0.05}, 6);
LineSet811.setCoord(Coordinate813);

Shape810.setGeometry(&LineSet811);

HAnimSegment806.addChild(&Shape810);

HAnimSite& HAnimSite814 =  HAnimSite();
HAnimSite814.setDEF(CString("hanim_l_eyeball_site_view"));
HAnimSite814.X3DNode::setName(CString("l_eyeball_site_view"));
HAnimSite814.setTranslation(new float[]{0.034,1.64,0.05});
Viewpoint& Viewpoint815 =  Viewpoint();
Viewpoint815.setDEF(CString("hanim_l_eyeball_site_viewpoint"));
Viewpoint815.setDescription(CString("l_eyeball_site_viewpoint looking forward"));
Viewpoint815.setPosition(new float[]{0,0,0});
Viewpoint815.setOrientation(new float[]{0,1,0,3.141593});
HAnimSite814.addChild(&Viewpoint815);

Anchor& Anchor816 =  Anchor();
Anchor816.setDescription(CString("HAnimSite Viewpoint hanim_l_eyeball_site_view"));
Anchor816.setUrl(new CString[]{CString("#hanim_l_eyeball_site_viewpoint")}, 1);
LOD& LOD817 =  LOD();
LOD817.setForceTransitions(True);
LOD817.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo818 =  WorldInfo();
WorldInfo818.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD817.addChildren(&WorldInfo818);

Shape& Shape819 =  Shape();
Shape819.setDEF(CString("HAnimSiteViewpointShape"));
Appearance& Appearance820 =  Appearance();
Material& Material821 =  Material();
Material821.setDiffuseColor(new float[]{0,0,1});
Material821.setTransparency(0.6);
Appearance820.addChild(&Material821);

Shape819.addChild(&Appearance820);

IndexedFaceSet& IndexedFaceSet822 =  IndexedFaceSet();
IndexedFaceSet822.setDEF(CString("SiteViewpointDiamondIFS"));
IndexedFaceSet822.setCreaseAngle(0.5);
IndexedFaceSet822.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate823 =  Coordinate();
Coordinate823.setPoint(new float[]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet822.setCoord(&Coordinate823);

Shape819.setGeometry(&IndexedFaceSet822);

LOD817.addChildren(Shape819);

Anchor816.addChild(&LOD817);

HAnimSite814.addChild(Anchor816);

HAnimSegment806.addChild(&HAnimSite814);

HAnimJoint805.addChildren(&HAnimSegment806);

HAnimJoint702.addChildren(&HAnimJoint805);

HAnimJoint& HAnimJoint824 =  HAnimJoint();
HAnimJoint824.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint824.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint824.setCenter(new float[]{0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment825 =  HAnimSegment();
HAnimSegment825.setDEF(CString("hanim_l_eyelid"));
HAnimSegment825.X3DNode::setName(CString("l_eyelid"));
TouchSensor& TouchSensor826 =  TouchSensor();
TouchSensor826.setDescription(CString("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"));
HAnimSegment825.addChild(&TouchSensor826);

Transform& Transform827 =  Transform();
Transform827.setTranslation(new float[]{0.0336,1.6332,0.0502});
Shape& Shape828 =  Shape();
Shape828.setUSE(CString("HAnimJointShape"));
Transform827.addChild(&Shape828);

HAnimSegment825.addChild(&Transform827);

HAnimJoint824.addChildren(&HAnimSegment825);

HAnimJoint702.addChildren(&HAnimJoint824);

HAnimJoint& HAnimJoint829 =  HAnimJoint();
HAnimJoint829.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint829.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint829.setCenter(new float[]{0.0336,1.635,0.0506});
HAnimSegment& HAnimSegment830 =  HAnimSegment();
HAnimSegment830.setDEF(CString("hanim_l_eyebrow"));
HAnimSegment830.X3DNode::setName(CString("l_eyebrow"));
TouchSensor& TouchSensor831 =  TouchSensor();
TouchSensor831.setDescription(CString("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"));
HAnimSegment830.addChild(&TouchSensor831);

Transform& Transform832 =  Transform();
Transform832.setTranslation(new float[]{0.0336,1.635,0.0506});
Shape& Shape833 =  Shape();
Shape833.setUSE(CString("HAnimJointShape"));
Transform832.addChild(&Shape833);

HAnimSegment830.addChild(&Transform832);

HAnimJoint829.addChildren(&HAnimSegment830);

HAnimJoint702.addChildren(&HAnimJoint829);

HAnimJoint& HAnimJoint834 =  HAnimJoint();
HAnimJoint834.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint834.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint834.setRotation(new float[]{-0.999999999999999,0,0,0.277705039416179});
HAnimJoint834.setCenter(new float[]{-0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment835 =  HAnimSegment();
HAnimSegment835.setDEF(CString("hanim_r_eyeball"));
HAnimSegment835.X3DNode::setName(CString("r_eyeball"));
TouchSensor& TouchSensor836 =  TouchSensor();
TouchSensor836.setDescription(CString("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"));
HAnimSegment835.addChild(&TouchSensor836);

Transform& Transform837 =  Transform();
Transform837.setTranslation(new float[]{-0.0336,1.6332,0.0502});
Shape& Shape838 =  Shape();
Shape838.setUSE(CString("HAnimJointShape"));
Transform837.addChild(&Shape838);

HAnimSegment835.addChild(&Transform837);

Shape& Shape839 =  Shape();
LineSet& LineSet840 =  LineSet();
LineSet840.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA841 =  ColorRGBA();
ColorRGBA841.setUSE(CString("HAnimSiteViewpointLineColorRGBA"));
LineSet840.addChild(&ColorRGBA841);

Coordinate& Coordinate842 =  Coordinate();
Coordinate842.setPoint(new float[]{-0.0336,1.6332,0.0502,-0.034,1.64,0.05}, 6);
LineSet840.setCoord(Coordinate842);

Shape839.setGeometry(&LineSet840);

HAnimSegment835.addChild(&Shape839);

HAnimSite& HAnimSite843 =  HAnimSite();
HAnimSite843.setDEF(CString("hanim_r_eyeball_site_view"));
HAnimSite843.X3DNode::setName(CString("r_eyeball_site_view"));
HAnimSite843.setTranslation(new float[]{-0.034,1.64,0.05});
Viewpoint& Viewpoint844 =  Viewpoint();
Viewpoint844.setDEF(CString("hanim_r_eyeball_site_viewpoint"));
Viewpoint844.setDescription(CString("r_eyeball_site_viewpoint looking forward"));
Viewpoint844.setPosition(new float[]{0,0,0});
Viewpoint844.setOrientation(new float[]{0,1,0,3.141593});
HAnimSite843.addChild(&Viewpoint844);

Anchor& Anchor845 =  Anchor();
Anchor845.setDescription(CString("HAnimSite Viewpoint hanim_r_eyeball_site_view"));
Anchor845.setUrl(new CString[]{CString("#hanim_r_eyeball_site_viewpoint")}, 1);
LOD& LOD846 =  LOD();
LOD846.setForceTransitions(True);
LOD846.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo847 =  WorldInfo();
WorldInfo847.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD846.addChildren(&WorldInfo847);

Shape& Shape848 =  Shape();
Shape848.setUSE(CString("HAnimSiteViewpointShape"));
LOD846.addChildren(Shape848);

Anchor845.addChild(&LOD846);

HAnimSite843.addChild(Anchor845);

HAnimSegment835.addChild(&HAnimSite843);

HAnimJoint834.addChildren(&HAnimSegment835);

HAnimJoint702.addChildren(&HAnimJoint834);

HAnimJoint& HAnimJoint849 =  HAnimJoint();
HAnimJoint849.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint849.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint849.setCenter(new float[]{-0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment850 =  HAnimSegment();
HAnimSegment850.setDEF(CString("hanim_r_eyelid"));
HAnimSegment850.X3DNode::setName(CString("r_eyelid"));
TouchSensor& TouchSensor851 =  TouchSensor();
TouchSensor851.setDescription(CString("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"));
HAnimSegment850.addChild(&TouchSensor851);

Transform& Transform852 =  Transform();
Transform852.setTranslation(new float[]{-0.0336,1.6332,0.0502});
Shape& Shape853 =  Shape();
Shape853.setUSE(CString("HAnimJointShape"));
Transform852.addChild(&Shape853);

HAnimSegment850.addChild(&Transform852);

HAnimJoint849.addChildren(&HAnimSegment850);

HAnimJoint702.addChildren(&HAnimJoint849);

HAnimJoint& HAnimJoint854 =  HAnimJoint();
HAnimJoint854.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint854.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint854.setCenter(new float[]{-0.0336,1.635,0.0506});
HAnimSegment& HAnimSegment855 =  HAnimSegment();
HAnimSegment855.setDEF(CString("hanim_r_eyebrow"));
HAnimSegment855.X3DNode::setName(CString("r_eyebrow"));
TouchSensor& TouchSensor856 =  TouchSensor();
TouchSensor856.setDescription(CString("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"));
HAnimSegment855.addChild(&TouchSensor856);

Transform& Transform857 =  Transform();
Transform857.setTranslation(new float[]{-0.0336,1.635,0.0506});
Shape& Shape858 =  Shape();
Shape858.setUSE(CString("HAnimJointShape"));
Transform857.addChild(&Shape858);

HAnimSegment855.addChild(&Transform857);

HAnimJoint854.addChildren(&HAnimSegment855);

HAnimJoint702.addChildren(&HAnimJoint854);

HAnimJoint& HAnimJoint859 =  HAnimJoint();
HAnimJoint859.setDEF(CString("hanim_temporomandibular"));
HAnimJoint859.X3DNode::setName(CString("temporomandibular"));
HAnimJoint859.setCenter(new float[]{0,1.63,0.015});
HAnimSegment& HAnimSegment860 =  HAnimSegment();
HAnimSegment860.setDEF(CString("hanim_jaw"));
HAnimSegment860.X3DNode::setName(CString("jaw"));
TouchSensor& TouchSensor861 =  TouchSensor();
TouchSensor861.setDescription(CString("HAnimJoint temporomandibular, HAnimSegment jaw"));
HAnimSegment860.addChild(&TouchSensor861);

Transform& Transform862 =  Transform();
Transform862.setTranslation(new float[]{0,1.63,0.015});
Shape& Shape863 =  Shape();
Shape863.setUSE(CString("HAnimJointShape"));
Transform862.addChild(&Shape863);

HAnimSegment860.addChild(&Transform862);

Shape& Shape864 =  Shape();
LineSet& LineSet865 =  LineSet();
LineSet865.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA866 =  ColorRGBA();
ColorRGBA866.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet865.addChild(&ColorRGBA866);

Coordinate& Coordinate867 =  Coordinate();
Coordinate867.setPoint(new float[]{0,1.63,0.015,0.045,1.63,0}, 6);
LineSet865.setCoord(Coordinate867);

Shape864.setGeometry(&LineSet865);

HAnimSegment860.addChild(&Shape864);

Shape& Shape868 =  Shape();
LineSet& LineSet869 =  LineSet();
LineSet869.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA870 =  ColorRGBA();
ColorRGBA870.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet869.addChild(&ColorRGBA870);

Coordinate& Coordinate871 =  Coordinate();
Coordinate871.setPoint(new float[]{0,1.63,0.015,-0.045,1.63,0}, 6);
LineSet869.setCoord(Coordinate871);

Shape868.setGeometry(&LineSet869);

HAnimSegment860.addChild(&Shape868);

HAnimSite& HAnimSite872 =  HAnimSite();
HAnimSite872.setDEF(CString("hanim_temporomandibular_l_site_pt"));
HAnimSite872.X3DNode::setName(CString("temporomandibular_l_site_pt"));
HAnimSite872.setTranslation(new float[]{0.045,1.63,0});
TouchSensor& TouchSensor873 =  TouchSensor();
TouchSensor873.setDescription(CString("HAnimSite temporomandibular_l_site"));
HAnimSite872.addChild(&TouchSensor873);

Shape& Shape874 =  Shape();
Shape874.setUSE(CString("HAnimSiteShape"));
HAnimSite872.addChild(&Shape874);

HAnimSegment860.addChild(&HAnimSite872);

HAnimSite& HAnimSite875 =  HAnimSite();
HAnimSite875.setDEF(CString("hanim_temporomandibular_r_site_pt"));
HAnimSite875.X3DNode::setName(CString("temporomandibular_r_site_pt"));
HAnimSite875.setTranslation(new float[]{-0.045,1.63,0});
TouchSensor& TouchSensor876 =  TouchSensor();
TouchSensor876.setDescription(CString("HAnimSite temporomandibular_r_site"));
HAnimSite875.addChild(&TouchSensor876);

Shape& Shape877 =  Shape();
Shape877.setUSE(CString("HAnimSiteShape"));
HAnimSite875.addChild(&Shape877);

HAnimSegment860.addChild(&HAnimSite875);

HAnimJoint859.addChildren(&HAnimSegment860);

HAnimJoint702.addChildren(&HAnimJoint859);

HAnimJoint693.addChildren(&HAnimJoint702);

HAnimJoint684.addChildren(&HAnimJoint693);

HAnimJoint675.addChildren(&HAnimJoint684);

HAnimJoint666.addChildren(&HAnimJoint675);

HAnimJoint657.addChildren(&HAnimJoint666);

HAnimJoint648.addChildren(&HAnimJoint657);

HAnimJoint625.addChildren(&HAnimJoint648);

HAnimJoint594.addChildren(&HAnimJoint625);

HAnimJoint& HAnimJoint878 =  HAnimJoint();
HAnimJoint878.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint878.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint878.setRotation(new float[]{0,0,1.00000000000003,0.108042894183947});
HAnimJoint878.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment879 =  HAnimSegment();
HAnimSegment879.setDEF(CString("hanim_l_clavicle"));
HAnimSegment879.X3DNode::setName(CString("l_clavicle"));
TouchSensor& TouchSensor880 =  TouchSensor();
TouchSensor880.setDescription(CString("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"));
HAnimSegment879.addChild(&TouchSensor880);

Transform& Transform881 =  Transform();
Transform881.setTranslation(new float[]{0.082,1.4488,-0.0353});
Shape& Shape882 =  Shape();
Shape882.setUSE(CString("HAnimJointShape"));
Transform881.addChild(&Shape882);

HAnimSegment879.addChild(&Transform881);

Shape& Shape883 =  Shape();
LineSet& LineSet884 =  LineSet();
LineSet884.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA885 =  ColorRGBA();
ColorRGBA885.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet884.addChild(&ColorRGBA885);

Coordinate& Coordinate886 =  Coordinate();
Coordinate886.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet884.setCoord(Coordinate886);

Shape883.setGeometry(&LineSet884);

HAnimSegment879.addChild(&Shape883);

Shape& Shape887 =  Shape();
LineSet& LineSet888 =  LineSet();
LineSet888.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA889 =  ColorRGBA();
ColorRGBA889.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet888.addChild(&ColorRGBA889);

Coordinate& Coordinate890 =  Coordinate();
Coordinate890.setPoint(new float[]{0.082,1.4488,-0.0353,0.0271,1.4943,0.0394}, 6);
LineSet888.setCoord(Coordinate890);

Shape887.setGeometry(&LineSet888);

HAnimSegment879.addChild(&Shape887);

Shape& Shape891 =  Shape();
LineSet& LineSet892 =  LineSet();
LineSet892.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA893 =  ColorRGBA();
ColorRGBA893.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet892.addChild(&ColorRGBA893);

Coordinate& Coordinate894 =  Coordinate();
Coordinate894.setPoint(new float[]{0.082,1.4488,-0.0353,0.2032,1.476,-0.049}, 6);
LineSet892.setCoord(Coordinate894);

Shape891.setGeometry(&LineSet892);

HAnimSegment879.addChild(&Shape891);

Shape& Shape895 =  Shape();
LineSet& LineSet896 =  LineSet();
LineSet896.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA897 =  ColorRGBA();
ColorRGBA897.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet896.addChild(&ColorRGBA897);

Coordinate& Coordinate898 =  Coordinate();
Coordinate898.setPoint(new float[]{0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075}, 6);
LineSet896.setCoord(Coordinate898);

Shape895.setGeometry(&LineSet896);

HAnimSegment879.addChild(&Shape895);

Shape& Shape899 =  Shape();
LineSet& LineSet900 =  LineSet();
LineSet900.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA901 =  ColorRGBA();
ColorRGBA901.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet900.addChild(&ColorRGBA901);

Coordinate& Coordinate902 =  Coordinate();
Coordinate902.setPoint(new float[]{0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875}, 6);
LineSet900.setCoord(Coordinate902);

Shape899.setGeometry(&LineSet900);

HAnimSegment879.addChild(&Shape899);

HAnimSite& HAnimSite903 =  HAnimSite();
HAnimSite903.setDEF(CString("hanim_l_clavicale_pt"));
HAnimSite903.X3DNode::setName(CString("l_clavicale_pt"));
HAnimSite903.setTranslation(new float[]{0.0271,1.4943,0.0394});
TouchSensor& TouchSensor904 =  TouchSensor();
TouchSensor904.setDescription(CString("HAnimSite l_clavicale"));
HAnimSite903.addChild(&TouchSensor904);

Shape& Shape905 =  Shape();
Shape905.setUSE(CString("HAnimSiteShape"));
HAnimSite903.addChild(&Shape905);

HAnimSegment879.addChild(&HAnimSite903);

HAnimSite& HAnimSite906 =  HAnimSite();
HAnimSite906.setDEF(CString("hanim_l_acromion_pt"));
HAnimSite906.X3DNode::setName(CString("l_acromion_pt"));
HAnimSite906.setTranslation(new float[]{0.2032,1.476,-0.049});
TouchSensor& TouchSensor907 =  TouchSensor();
TouchSensor907.setDescription(CString("HAnimSite l_acromion"));
HAnimSite906.addChild(&TouchSensor907);

Shape& Shape908 =  Shape();
Shape908.setUSE(CString("HAnimSiteShape"));
HAnimSite906.addChild(&Shape908);

HAnimSegment879.addChild(&HAnimSite906);

HAnimSite& HAnimSite909 =  HAnimSite();
HAnimSite909.setDEF(CString("hanim_l_axilla_ant_pt"));
HAnimSite909.X3DNode::setName(CString("l_axilla_ant_pt"));
HAnimSite909.setTranslation(new float[]{0.1777,1.4065,-0.0075});
TouchSensor& TouchSensor910 =  TouchSensor();
TouchSensor910.setDescription(CString("HAnimSite l_axilla_ant"));
HAnimSite909.addChild(&TouchSensor910);

Shape& Shape911 =  Shape();
Shape911.setUSE(CString("HAnimSiteShape"));
HAnimSite909.addChild(&Shape911);

HAnimSegment879.addChild(&HAnimSite909);

HAnimSite& HAnimSite912 =  HAnimSite();
HAnimSite912.setDEF(CString("hanim_l_axilla_post_pt"));
HAnimSite912.X3DNode::setName(CString("l_axilla_post_pt"));
HAnimSite912.setTranslation(new float[]{0.1706,1.4072,-0.0875});
TouchSensor& TouchSensor913 =  TouchSensor();
TouchSensor913.setDescription(CString("HAnimSite l_axilla_post"));
HAnimSite912.addChild(&TouchSensor913);

Shape& Shape914 =  Shape();
Shape914.setUSE(CString("HAnimSiteShape"));
HAnimSite912.addChild(&Shape914);

HAnimSegment879.addChild(&HAnimSite912);

HAnimJoint878.addChildren(&HAnimSegment879);

HAnimJoint& HAnimJoint915 =  HAnimJoint();
HAnimJoint915.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint915.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint915.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment916 =  HAnimSegment();
HAnimSegment916.setDEF(CString("hanim_l_scapula"));
HAnimSegment916.X3DNode::setName(CString("l_scapula"));
TouchSensor& TouchSensor917 =  TouchSensor();
TouchSensor917.setDescription(CString("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"));
HAnimSegment916.addChild(&TouchSensor917);

Transform& Transform918 =  Transform();
Transform918.setTranslation(new float[]{0.0962,1.4269,-0.0424});
Shape& Shape919 =  Shape();
Shape919.setUSE(CString("HAnimJointShape"));
Transform918.addChild(&Shape919);

HAnimSegment916.addChild(&Transform918);

Shape& Shape920 =  Shape();
LineSet& LineSet921 =  LineSet();
LineSet921.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA922 =  ColorRGBA();
ColorRGBA922.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet921.addChild(&ColorRGBA922);

Coordinate& Coordinate923 =  Coordinate();
Coordinate923.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet921.setCoord(Coordinate923);

Shape920.setGeometry(&LineSet921);

HAnimSegment916.addChild(&Shape920);

HAnimJoint915.addChildren(&HAnimSegment916);

HAnimJoint& HAnimJoint924 =  HAnimJoint();
HAnimJoint924.setDEF(CString("hanim_l_shoulder"));
HAnimJoint924.X3DNode::setName(CString("l_shoulder"));
HAnimJoint924.setRotation(new float[]{0,0,1,0.950777468818762});
HAnimJoint924.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment925 =  HAnimSegment();
HAnimSegment925.setDEF(CString("hanim_l_upperarm"));
HAnimSegment925.X3DNode::setName(CString("l_upperarm"));
TouchSensor& TouchSensor926 =  TouchSensor();
TouchSensor926.setDescription(CString("HAnimJoint l_shoulder, HAnimSegment l_upperarm"));
HAnimSegment925.addChild(&TouchSensor926);

Transform& Transform927 =  Transform();
Transform927.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Shape& Shape928 =  Shape();
Shape928.setUSE(CString("HAnimJointShape"));
Transform927.addChild(&Shape928);

HAnimSegment925.addChild(&Transform927);

Shape& Shape929 =  Shape();
LineSet& LineSet930 =  LineSet();
LineSet930.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA931 =  ColorRGBA();
ColorRGBA931.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet930.addChild(&ColorRGBA931);

Coordinate& Coordinate932 =  Coordinate();
Coordinate932.setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet930.setCoord(Coordinate932);

Shape929.setGeometry(&LineSet930);

HAnimSegment925.addChild(&Shape929);

Shape& Shape933 =  Shape();
LineSet& LineSet934 =  LineSet();
LineSet934.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA935 =  ColorRGBA();
ColorRGBA935.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet934.addChild(&ColorRGBA935);

Coordinate& Coordinate936 =  Coordinate();
Coordinate936.setPoint(new float[]{0.2029,1.4376,-0.0387,0.228,1.1482,-0.11}, 6);
LineSet934.setCoord(Coordinate936);

Shape933.setGeometry(&LineSet934);

HAnimSegment925.addChild(&Shape933);

HAnimSite& HAnimSite937 =  HAnimSite();
HAnimSite937.setDEF(CString("hanim_l_humeral_lateral_epicn_pt"));
HAnimSite937.X3DNode::setName(CString("l_humeral_lateral_epicn_pt"));
HAnimSite937.setTranslation(new float[]{0.228,1.1482,-0.11});
TouchSensor& TouchSensor938 =  TouchSensor();
TouchSensor938.setDescription(CString("HAnimSite l_humeral_lateral_epicn"));
HAnimSite937.addChild(&TouchSensor938);

Shape& Shape939 =  Shape();
Shape939.setUSE(CString("HAnimSiteShape"));
HAnimSite937.addChild(&Shape939);

HAnimSegment925.addChild(&HAnimSite937);

HAnimJoint924.addChildren(&HAnimSegment925);

HAnimJoint& HAnimJoint940 =  HAnimJoint();
HAnimJoint940.setDEF(CString("hanim_l_elbow"));
HAnimJoint940.X3DNode::setName(CString("l_elbow"));
HAnimJoint940.setRotation(new float[]{-1,0,0,0.297117959005863});
HAnimJoint940.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment941 =  HAnimSegment();
HAnimSegment941.setDEF(CString("hanim_l_forearm"));
HAnimSegment941.X3DNode::setName(CString("l_forearm"));
TouchSensor& TouchSensor942 =  TouchSensor();
TouchSensor942.setDescription(CString("HAnimJoint l_elbow, HAnimSegment l_forearm"));
HAnimSegment941.addChild(&TouchSensor942);

Transform& Transform943 =  Transform();
Transform943.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Shape& Shape944 =  Shape();
Shape944.setUSE(CString("HAnimJointShape"));
Transform943.addChild(&Shape944);

HAnimSegment941.addChild(&Transform943);

Shape& Shape945 =  Shape();
LineSet& LineSet946 =  LineSet();
LineSet946.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA947 =  ColorRGBA();
ColorRGBA947.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet946.addChild(&ColorRGBA947);

Coordinate& Coordinate948 =  Coordinate();
Coordinate948.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet946.setCoord(Coordinate948);

Shape945.setGeometry(&LineSet946);

HAnimSegment941.addChild(&Shape945);

Shape& Shape949 =  Shape();
LineSet& LineSet950 =  LineSet();
LineSet950.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA951 =  ColorRGBA();
ColorRGBA951.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet950.addChild(&ColorRGBA951);

Coordinate& Coordinate952 =  Coordinate();
Coordinate952.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415}, 6);
LineSet950.setCoord(Coordinate952);

Shape949.setGeometry(&LineSet950);

HAnimSegment941.addChild(&Shape949);

Shape& Shape953 =  Shape();
LineSet& LineSet954 =  LineSet();
LineSet954.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA955 =  ColorRGBA();
ColorRGBA955.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet954.addChild(&ColorRGBA955);

Coordinate& Coordinate956 =  Coordinate();
Coordinate956.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123}, 6);
LineSet954.setCoord(Coordinate956);

Shape953.setGeometry(&LineSet954);

HAnimSegment941.addChild(&Shape953);

Shape& Shape957 =  Shape();
LineSet& LineSet958 =  LineSet();
LineSet958.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA959 =  ColorRGBA();
ColorRGBA959.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet958.addChild(&ColorRGBA959);

Coordinate& Coordinate960 =  Coordinate();
Coordinate960.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113}, 6);
LineSet958.setCoord(Coordinate960);

Shape957.setGeometry(&LineSet958);

HAnimSegment941.addChild(&Shape957);

Shape& Shape961 =  Shape();
LineSet& LineSet962 =  LineSet();
LineSet962.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA963 =  ColorRGBA();
ColorRGBA963.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet962.addChild(&ColorRGBA963);

Coordinate& Coordinate964 =  Coordinate();
Coordinate964.setPoint(new float[]{0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167}, 6);
LineSet962.setCoord(Coordinate964);

Shape961.setGeometry(&LineSet962);

HAnimSegment941.addChild(&Shape961);

HAnimSite& HAnimSite965 =  HAnimSite();
HAnimSite965.setDEF(CString("hanim_l_radial_styloid_pt"));
HAnimSite965.X3DNode::setName(CString("l_radial_styloid_pt"));
HAnimSite965.setTranslation(new float[]{0.1901,0.8645,-0.0415});
TouchSensor& TouchSensor966 =  TouchSensor();
TouchSensor966.setDescription(CString("HAnimSite l_radial_styloid"));
HAnimSite965.addChild(&TouchSensor966);

Shape& Shape967 =  Shape();
Shape967.setUSE(CString("HAnimSiteShape"));
HAnimSite965.addChild(&Shape967);

HAnimSegment941.addChild(&HAnimSite965);

HAnimSite& HAnimSite968 =  HAnimSite();
HAnimSite968.setDEF(CString("hanim_l_olecranon_pt"));
HAnimSite968.X3DNode::setName(CString("l_olecranon_pt"));
HAnimSite968.setTranslation(new float[]{0.1962,1.1375,-0.1123});
TouchSensor& TouchSensor969 =  TouchSensor();
TouchSensor969.setDescription(CString("HAnimSite l_olecranon"));
HAnimSite968.addChild(&TouchSensor969);

Shape& Shape970 =  Shape();
Shape970.setUSE(CString("HAnimSiteShape"));
HAnimSite968.addChild(&Shape970);

HAnimSegment941.addChild(&HAnimSite968);

HAnimSite& HAnimSite971 =  HAnimSite();
HAnimSite971.setDEF(CString("hanim_l_humeral_medial_epicn_pt"));
HAnimSite971.X3DNode::setName(CString("l_humeral_medial_epicn_pt"));
HAnimSite971.setTranslation(new float[]{0.1735,1.1272,-0.1113});
TouchSensor& TouchSensor972 =  TouchSensor();
TouchSensor972.setDescription(CString("HAnimSite l_humeral_medial_epicn"));
HAnimSite971.addChild(&TouchSensor972);

Shape& Shape973 =  Shape();
Shape973.setUSE(CString("HAnimSiteShape"));
HAnimSite971.addChild(&Shape973);

HAnimSegment941.addChild(&HAnimSite971);

HAnimSite& HAnimSite974 =  HAnimSite();
HAnimSite974.setDEF(CString("hanim_l_radiale_pt"));
HAnimSite974.X3DNode::setName(CString("l_radiale_pt"));
HAnimSite974.setTranslation(new float[]{0.2182,1.1212,-0.1167});
TouchSensor& TouchSensor975 =  TouchSensor();
TouchSensor975.setDescription(CString("HAnimSite l_radiale"));
HAnimSite974.addChild(&TouchSensor975);

Shape& Shape976 =  Shape();
Shape976.setUSE(CString("HAnimSiteShape"));
HAnimSite974.addChild(&Shape976);

HAnimSegment941.addChild(&HAnimSite974);

HAnimJoint940.addChildren(&HAnimSegment941);

HAnimJoint& HAnimJoint977 =  HAnimJoint();
HAnimJoint977.setDEF(CString("hanim_l_wrist"));
HAnimJoint977.X3DNode::setName(CString("l_wrist"));
HAnimJoint977.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment978 =  HAnimSegment();
HAnimSegment978.setDEF(CString("hanim_l_hand"));
HAnimSegment978.X3DNode::setName(CString("l_hand"));
TouchSensor& TouchSensor979 =  TouchSensor();
TouchSensor979.setDescription(CString("HAnimJoint l_wrist, HAnimSegment l_hand"));
HAnimSegment978.addChild(&TouchSensor979);

Transform& Transform980 =  Transform();
Transform980.setTranslation(new float[]{0.1984,0.8663,-0.0583});
Shape& Shape981 =  Shape();
Shape981.setUSE(CString("HAnimJointShape"));
Transform980.addChild(&Shape981);

HAnimSegment978.addChild(&Transform980);

Shape& Shape982 =  Shape();
LineSet& LineSet983 =  LineSet();
LineSet983.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA984 =  ColorRGBA();
ColorRGBA984.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet983.addChild(&ColorRGBA984);

Coordinate& Coordinate985 =  Coordinate();
Coordinate985.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534}, 6);
LineSet983.setCoord(Coordinate985);

Shape982.setGeometry(&LineSet983);

HAnimSegment978.addChild(&Shape982);

Shape& Shape986 =  Shape();
LineSet& LineSet987 =  LineSet();
LineSet987.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA988 =  ColorRGBA();
ColorRGBA988.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet987.addChild(&ColorRGBA988);

Coordinate& Coordinate989 =  Coordinate();
Coordinate989.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028}, 6);
LineSet987.setCoord(Coordinate989);

Shape986.setGeometry(&LineSet987);

HAnimSegment978.addChild(&Shape986);

Shape& Shape990 =  Shape();
LineSet& LineSet991 =  LineSet();
LineSet991.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA992 =  ColorRGBA();
ColorRGBA992.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet991.addChild(&ColorRGBA992);

Coordinate& Coordinate993 =  Coordinate();
Coordinate993.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053}, 6);
LineSet991.setCoord(Coordinate993);

Shape990.setGeometry(&LineSet991);

HAnimSegment978.addChild(&Shape990);

Shape& Shape994 =  Shape();
LineSet& LineSet995 =  LineSet();
LineSet995.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA996 =  ColorRGBA();
ColorRGBA996.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet995.addChild(&ColorRGBA996);

Coordinate& Coordinate997 =  Coordinate();
Coordinate997.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794}, 6);
LineSet995.setCoord(Coordinate997);

Shape994.setGeometry(&LineSet995);

HAnimSegment978.addChild(&Shape994);

Shape& Shape998 =  Shape();
LineSet& LineSet999 =  LineSet();
LineSet999.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1000 =  ColorRGBA();
ColorRGBA1000.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet999.addChild(&ColorRGBA1000);

Coordinate& Coordinate1001 =  Coordinate();
Coordinate1001.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036}, 6);
LineSet999.setCoord(Coordinate1001);

Shape998.setGeometry(&LineSet999);

HAnimSegment978.addChild(&Shape998);

Shape& Shape1002 =  Shape();
LineSet& LineSet1003 =  LineSet();
LineSet1003.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1004 =  ColorRGBA();
ColorRGBA1004.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1003.addChild(&ColorRGBA1004);

Coordinate& Coordinate1005 =  Coordinate();
Coordinate1005.setPoint(new float[]{0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237}, 6);
LineSet1003.setCoord(Coordinate1005);

Shape1002.setGeometry(&LineSet1003);

HAnimSegment978.addChild(&Shape1002);

Shape& Shape1006 =  Shape();
LineSet& LineSet1007 =  LineSet();
LineSet1007.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1008 =  ColorRGBA();
ColorRGBA1008.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1007.addChild(&ColorRGBA1008);

Coordinate& Coordinate1009 =  Coordinate();
Coordinate1009.setPoint(new float[]{0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648}, 6);
LineSet1007.setCoord(Coordinate1009);

Shape1006.setGeometry(&LineSet1007);

HAnimSegment978.addChild(&Shape1006);

Shape& Shape1010 =  Shape();
LineSet& LineSet1011 =  LineSet();
LineSet1011.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1012 =  ColorRGBA();
ColorRGBA1012.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1011.addChild(&ColorRGBA1012);

Coordinate& Coordinate1013 =  Coordinate();
Coordinate1013.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122}, 6);
LineSet1011.setCoord(Coordinate1013);

Shape1010.setGeometry(&LineSet1011);

HAnimSegment978.addChild(&Shape1010);

Shape& Shape1014 =  Shape();
LineSet& LineSet1015 =  LineSet();
LineSet1015.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1016 =  ColorRGBA();
ColorRGBA1016.setUSE(CString("HAnimSiteViewpointLineColorRGBA"));
LineSet1015.addChild(&ColorRGBA1016);

Coordinate& Coordinate1017 =  Coordinate();
Coordinate1017.setPoint(new float[]{0.1984,0.8663,-0.0583,0.3,0.75,0.45}, 6);
LineSet1015.setCoord(Coordinate1017);

Shape1014.setGeometry(&LineSet1015);

HAnimSegment978.addChild(&Shape1014);

HAnimSite& HAnimSite1018 =  HAnimSite();
HAnimSite1018.setDEF(CString("hanim_l_metacarpal_pha2_pt"));
HAnimSite1018.X3DNode::setName(CString("l_metacarpal_pha2_pt"));
HAnimSite1018.setTranslation(new float[]{0.2009,0.8139,-0.0237});
TouchSensor& TouchSensor1019 =  TouchSensor();
TouchSensor1019.setDescription(CString("HAnimSite l_metacarpal_pha2"));
HAnimSite1018.addChild(&TouchSensor1019);

Shape& Shape1020 =  Shape();
Shape1020.setUSE(CString("HAnimSiteShape"));
HAnimSite1018.addChild(&Shape1020);

HAnimSegment978.addChild(&HAnimSite1018);

HAnimSite& HAnimSite1021 =  HAnimSite();
HAnimSite1021.setDEF(CString("hanim_l_ulnar_styloid_pt"));
HAnimSite1021.X3DNode::setName(CString("l_ulnar_styloid_pt"));
HAnimSite1021.setTranslation(new float[]{0.2142,0.8529,-0.0648});
TouchSensor& TouchSensor1022 =  TouchSensor();
TouchSensor1022.setDescription(CString("HAnimSite l_ulnar_styloid"));
HAnimSite1021.addChild(&TouchSensor1022);

Shape& Shape1023 =  Shape();
Shape1023.setUSE(CString("HAnimSiteShape"));
HAnimSite1021.addChild(&Shape1023);

HAnimSegment978.addChild(&HAnimSite1021);

HAnimSite& HAnimSite1024 =  HAnimSite();
HAnimSite1024.setDEF(CString("hanim_l_metacarpal_pha5_pt"));
HAnimSite1024.X3DNode::setName(CString("l_metacarpal_pha5_pt"));
HAnimSite1024.setTranslation(new float[]{0.1929,0.786,-0.1122});
TouchSensor& TouchSensor1025 =  TouchSensor();
TouchSensor1025.setDescription(CString("HAnimSite l_metacarpal_pha5"));
HAnimSite1024.addChild(&TouchSensor1025);

Shape& Shape1026 =  Shape();
Shape1026.setUSE(CString("HAnimSiteShape"));
HAnimSite1024.addChild(&Shape1026);

HAnimSegment978.addChild(&HAnimSite1024);

HAnimSite& HAnimSite1027 =  HAnimSite();
HAnimSite1027.setDEF(CString("hanim_l_hand_front_view"));
HAnimSite1027.X3DNode::setName(CString("l_hand_front_view"));
HAnimSite1027.setTranslation(new float[]{0.3,0.75,0.45});
Viewpoint& Viewpoint1028 =  Viewpoint();
Viewpoint1028.setDEF(CString("hanim_l_hand_front_viewpoint"));
Viewpoint1028.setDescription(CString("left hand front"));
Viewpoint1028.setPosition(new float[]{0,0,0});
Viewpoint1028.setCenterOfRotation(new float[]{0,0.7,0});
HAnimSite1027.addChild(&Viewpoint1028);

Anchor& Anchor1029 =  Anchor();
Anchor1029.setDescription(CString("HAnimSite Viewpoint hanim_l_hand_front_view"));
Anchor1029.setUrl(new CString[]{CString("#hanim_l_hand_front_viewpoint")}, 1);
LOD& LOD1030 =  LOD();
LOD1030.setForceTransitions(True);
LOD1030.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1031 =  WorldInfo();
WorldInfo1031.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1030.addChildren(&WorldInfo1031);

Shape& Shape1032 =  Shape();
Shape1032.setUSE(CString("HAnimSiteViewpointShape"));
LOD1030.addChildren(Shape1032);

Anchor1029.addChild(&LOD1030);

HAnimSite1027.addChild(Anchor1029);

HAnimSegment978.addChild(&HAnimSite1027);

HAnimJoint977.addChildren(&HAnimSegment978);

HAnimJoint& HAnimJoint1033 =  HAnimJoint();
HAnimJoint1033.setDEF(CString("hanim_l_thumb1"));
HAnimJoint1033.X3DNode::setName(CString("l_thumb1"));
HAnimJoint1033.setRotation(new float[]{1,0,0,0.270107235459875});
HAnimJoint1033.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment1034 =  HAnimSegment();
HAnimSegment1034.setDEF(CString("hanim_l_thumb_metacarpal"));
HAnimSegment1034.X3DNode::setName(CString("l_thumb_metacarpal"));
TouchSensor& TouchSensor1035 =  TouchSensor();
TouchSensor1035.setDescription(CString("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal"));
HAnimSegment1034.addChild(&TouchSensor1035);

Transform& Transform1036 =  Transform();
Transform1036.setTranslation(new float[]{0.1924,0.8472,-0.0534});
Shape& Shape1037 =  Shape();
Shape1037.setUSE(CString("HAnimJointShape"));
Transform1036.addChild(&Shape1037);

HAnimSegment1034.addChild(&Transform1036);

Shape& Shape1038 =  Shape();
LineSet& LineSet1039 =  LineSet();
LineSet1039.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1040 =  ColorRGBA();
ColorRGBA1040.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1039.addChild(&ColorRGBA1040);

Coordinate& Coordinate1041 =  Coordinate();
Coordinate1041.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet1039.setCoord(Coordinate1041);

Shape1038.setGeometry(&LineSet1039);

HAnimSegment1034.addChild(&Shape1038);

HAnimJoint1033.addChildren(&HAnimSegment1034);

HAnimJoint& HAnimJoint1042 =  HAnimJoint();
HAnimJoint1042.setDEF(CString("hanim_l_thumb2"));
HAnimJoint1042.X3DNode::setName(CString("l_thumb2"));
HAnimJoint1042.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment1043 =  HAnimSegment();
HAnimSegment1043.setDEF(CString("hanim_l_thumb_proximal"));
HAnimSegment1043.X3DNode::setName(CString("l_thumb_proximal"));
TouchSensor& TouchSensor1044 =  TouchSensor();
TouchSensor1044.setDescription(CString("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal"));
HAnimSegment1043.addChild(&TouchSensor1044);

Transform& Transform1045 =  Transform();
Transform1045.setTranslation(new float[]{0.1951,0.8226,0.0246});
Shape& Shape1046 =  Shape();
Shape1046.setUSE(CString("HAnimJointShape"));
Transform1045.addChild(&Shape1046);

HAnimSegment1043.addChild(&Transform1045);

Shape& Shape1047 =  Shape();
LineSet& LineSet1048 =  LineSet();
LineSet1048.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1049 =  ColorRGBA();
ColorRGBA1049.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1048.addChild(&ColorRGBA1049);

Coordinate& Coordinate1050 =  Coordinate();
Coordinate1050.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet1048.setCoord(Coordinate1050);

Shape1047.setGeometry(&LineSet1048);

HAnimSegment1043.addChild(&Shape1047);

HAnimJoint1042.addChildren(&HAnimSegment1043);

HAnimJoint& HAnimJoint1051 =  HAnimJoint();
HAnimJoint1051.setDEF(CString("hanim_l_thumb3"));
HAnimJoint1051.X3DNode::setName(CString("l_thumb3"));
HAnimJoint1051.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimSegment& HAnimSegment1052 =  HAnimSegment();
HAnimSegment1052.setDEF(CString("hanim_l_thumb_distal"));
HAnimSegment1052.X3DNode::setName(CString("l_thumb_distal"));
TouchSensor& TouchSensor1053 =  TouchSensor();
TouchSensor1053.setDescription(CString("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal"));
HAnimSegment1052.addChild(&TouchSensor1053);

Transform& Transform1054 =  Transform();
Transform1054.setTranslation(new float[]{0.1955,0.8159,0.0464});
Shape& Shape1055 =  Shape();
Shape1055.setUSE(CString("HAnimJointShape"));
Transform1054.addChild(&Shape1055);

HAnimSegment1052.addChild(&Transform1054);

Shape& Shape1056 =  Shape();
LineSet& LineSet1057 =  LineSet();
LineSet1057.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1058 =  ColorRGBA();
ColorRGBA1058.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1057.addChild(&ColorRGBA1058);

Coordinate& Coordinate1059 =  Coordinate();
Coordinate1059.setPoint(new float[]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759}, 6);
LineSet1057.setCoord(Coordinate1059);

Shape1056.setGeometry(&LineSet1057);

HAnimSegment1052.addChild(&Shape1056);

HAnimSite& HAnimSite1060 =  HAnimSite();
HAnimSite1060.setDEF(CString("hanim_l_thumb_distal_tip"));
HAnimSite1060.X3DNode::setName(CString("l_thumb_distal_tip"));
HAnimSite1060.setTranslation(new float[]{0.1982,0.8061,0.0759});
TouchSensor& TouchSensor1061 =  TouchSensor();
TouchSensor1061.setDescription(CString("HAnimSite l_thumb_distal_tip"));
HAnimSite1060.addChild(&TouchSensor1061);

Shape& Shape1062 =  Shape();
Shape1062.setUSE(CString("HAnimSiteShape"));
HAnimSite1060.addChild(&Shape1062);

HAnimSegment1052.addChild(&HAnimSite1060);

HAnimJoint1051.addChildren(&HAnimSegment1052);

HAnimJoint1042.addChildren(&HAnimJoint1051);

HAnimJoint1033.addChildren(&HAnimJoint1042);

HAnimJoint977.addChildren(&HAnimJoint1033);

HAnimJoint& HAnimJoint1063 =  HAnimJoint();
HAnimJoint1063.setDEF(CString("hanim_l_index0"));
HAnimJoint1063.X3DNode::setName(CString("l_index0"));
HAnimJoint1063.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment1064 =  HAnimSegment();
HAnimSegment1064.setDEF(CString("hanim_l_index_metacarpal"));
HAnimSegment1064.X3DNode::setName(CString("l_index_metacarpal"));
TouchSensor& TouchSensor1065 =  TouchSensor();
TouchSensor1065.setDescription(CString("HAnimJoint l_index0, HAnimSegment l_index_metacarpal"));
HAnimSegment1064.addChild(&TouchSensor1065);

Transform& Transform1066 =  Transform();
Transform1066.setTranslation(new float[]{0.1983,0.8024,-0.028});
Shape& Shape1067 =  Shape();
Shape1067.setUSE(CString("HAnimJointShape"));
Transform1066.addChild(&Shape1067);

HAnimSegment1064.addChild(&Transform1066);

Shape& Shape1068 =  Shape();
LineSet& LineSet1069 =  LineSet();
LineSet1069.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1070 =  ColorRGBA();
ColorRGBA1070.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1069.addChild(&ColorRGBA1070);

Coordinate& Coordinate1071 =  Coordinate();
Coordinate1071.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet1069.setCoord(Coordinate1071);

Shape1068.setGeometry(&LineSet1069);

HAnimSegment1064.addChild(&Shape1068);

HAnimJoint1063.addChildren(&HAnimSegment1064);

HAnimJoint& HAnimJoint1072 =  HAnimJoint();
HAnimJoint1072.setDEF(CString("hanim_l_index1"));
HAnimJoint1072.X3DNode::setName(CString("l_index1"));
HAnimJoint1072.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment1073 =  HAnimSegment();
HAnimSegment1073.setDEF(CString("hanim_l_index_proximal"));
HAnimSegment1073.X3DNode::setName(CString("l_index_proximal"));
TouchSensor& TouchSensor1074 =  TouchSensor();
TouchSensor1074.setDescription(CString("HAnimJoint l_index1, HAnimSegment l_index_proximal"));
HAnimSegment1073.addChild(&TouchSensor1074);

Transform& Transform1075 =  Transform();
Transform1075.setTranslation(new float[]{0.1983,0.7815,-0.028});
Shape& Shape1076 =  Shape();
Shape1076.setUSE(CString("HAnimJointShape"));
Transform1075.addChild(&Shape1076);

HAnimSegment1073.addChild(&Transform1075);

Shape& Shape1077 =  Shape();
LineSet& LineSet1078 =  LineSet();
LineSet1078.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1079 =  ColorRGBA();
ColorRGBA1079.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1078.addChild(&ColorRGBA1079);

Coordinate& Coordinate1080 =  Coordinate();
Coordinate1080.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet1078.setCoord(Coordinate1080);

Shape1077.setGeometry(&LineSet1078);

HAnimSegment1073.addChild(&Shape1077);

HAnimJoint1072.addChildren(&HAnimSegment1073);

HAnimJoint& HAnimJoint1081 =  HAnimJoint();
HAnimJoint1081.setDEF(CString("hanim_l_index2"));
HAnimJoint1081.X3DNode::setName(CString("l_index2"));
HAnimJoint1081.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment1082 =  HAnimSegment();
HAnimSegment1082.setDEF(CString("hanim_l_index_middle"));
HAnimSegment1082.X3DNode::setName(CString("l_index_middle"));
TouchSensor& TouchSensor1083 =  TouchSensor();
TouchSensor1083.setDescription(CString("HAnimJoint l_index2, HAnimSegment l_index_middle"));
HAnimSegment1082.addChild(&TouchSensor1083);

Transform& Transform1084 =  Transform();
Transform1084.setTranslation(new float[]{0.2017,0.7363,-0.0248});
Shape& Shape1085 =  Shape();
Shape1085.setUSE(CString("HAnimJointShape"));
Transform1084.addChild(&Shape1085);

HAnimSegment1082.addChild(&Transform1084);

Shape& Shape1086 =  Shape();
LineSet& LineSet1087 =  LineSet();
LineSet1087.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1088 =  ColorRGBA();
ColorRGBA1088.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1087.addChild(&ColorRGBA1088);

Coordinate& Coordinate1089 =  Coordinate();
Coordinate1089.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet1087.setCoord(Coordinate1089);

Shape1086.setGeometry(&LineSet1087);

HAnimSegment1082.addChild(&Shape1086);

HAnimJoint1081.addChildren(&HAnimSegment1082);

HAnimJoint& HAnimJoint1090 =  HAnimJoint();
HAnimJoint1090.setDEF(CString("hanim_l_index3"));
HAnimJoint1090.X3DNode::setName(CString("l_index3"));
HAnimJoint1090.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimSegment& HAnimSegment1091 =  HAnimSegment();
HAnimSegment1091.setDEF(CString("hanim_l_index_distal"));
HAnimSegment1091.X3DNode::setName(CString("l_index_distal"));
TouchSensor& TouchSensor1092 =  TouchSensor();
TouchSensor1092.setDescription(CString("HAnimJoint l_index3, HAnimSegment l_index_distal"));
HAnimSegment1091.addChild(&TouchSensor1092);

Transform& Transform1093 =  Transform();
Transform1093.setTranslation(new float[]{0.2028,0.7139,-0.0236});
Shape& Shape1094 =  Shape();
Shape1094.setUSE(CString("HAnimJointShape"));
Transform1093.addChild(&Shape1094);

HAnimSegment1091.addChild(&Transform1093);

Shape& Shape1095 =  Shape();
LineSet& LineSet1096 =  LineSet();
LineSet1096.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1097 =  ColorRGBA();
ColorRGBA1097.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1096.addChild(&ColorRGBA1097);

Coordinate& Coordinate1098 =  Coordinate();
Coordinate1098.setPoint(new float[]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245}, 6);
LineSet1096.setCoord(Coordinate1098);

Shape1095.setGeometry(&LineSet1096);

HAnimSegment1091.addChild(&Shape1095);

Shape& Shape1099 =  Shape();
LineSet& LineSet1100 =  LineSet();
LineSet1100.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1101 =  ColorRGBA();
ColorRGBA1101.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1100.addChild(&ColorRGBA1101);

Coordinate& Coordinate1102 =  Coordinate();
Coordinate1102.setPoint(new float[]{0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482}, 6);
LineSet1100.setCoord(Coordinate1102);

Shape1099.setGeometry(&LineSet1100);

HAnimSegment1091.addChild(&Shape1099);

HAnimSite& HAnimSite1103 =  HAnimSite();
HAnimSite1103.setDEF(CString("hanim_l_index_distal_tip"));
HAnimSite1103.X3DNode::setName(CString("l_index_distal_tip"));
HAnimSite1103.setTranslation(new float[]{0.2089,0.6858,-0.0245});
TouchSensor& TouchSensor1104 =  TouchSensor();
TouchSensor1104.setDescription(CString("HAnimSite l_index_distal_tip"));
HAnimSite1103.addChild(&TouchSensor1104);

Shape& Shape1105 =  Shape();
Shape1105.setUSE(CString("HAnimSiteShape"));
HAnimSite1103.addChild(&Shape1105);

HAnimSegment1091.addChild(&HAnimSite1103);

HAnimSite& HAnimSite1106 =  HAnimSite();
HAnimSite1106.setDEF(CString("hanim_l_dactylion_pt"));
HAnimSite1106.X3DNode::setName(CString("l_dactylion_pt"));
HAnimSite1106.setTranslation(new float[]{0.2056,0.6743,-0.0482});
TouchSensor& TouchSensor1107 =  TouchSensor();
TouchSensor1107.setDescription(CString("HAnimSite l_dactylion"));
HAnimSite1106.addChild(&TouchSensor1107);

Shape& Shape1108 =  Shape();
Shape1108.setUSE(CString("HAnimSiteShape"));
HAnimSite1106.addChild(&Shape1108);

HAnimSegment1091.addChild(&HAnimSite1106);

HAnimJoint1090.addChildren(&HAnimSegment1091);

HAnimJoint1081.addChildren(&HAnimJoint1090);

HAnimJoint1072.addChildren(&HAnimJoint1081);

HAnimJoint1063.addChildren(&HAnimJoint1072);

HAnimJoint977.addChildren(&HAnimJoint1063);

HAnimJoint& HAnimJoint1109 =  HAnimJoint();
HAnimJoint1109.setDEF(CString("hanim_l_middle0"));
HAnimJoint1109.X3DNode::setName(CString("l_middle0"));
HAnimJoint1109.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment1110 =  HAnimSegment();
HAnimSegment1110.setDEF(CString("hanim_l_middle_metacarpal"));
HAnimSegment1110.X3DNode::setName(CString("l_middle_metacarpal"));
TouchSensor& TouchSensor1111 =  TouchSensor();
TouchSensor1111.setDescription(CString("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal"));
HAnimSegment1110.addChild(&TouchSensor1111);

Transform& Transform1112 =  Transform();
Transform1112.setTranslation(new float[]{0.1987,0.8029,-0.053});
Shape& Shape1113 =  Shape();
Shape1113.setUSE(CString("HAnimJointShape"));
Transform1112.addChild(&Shape1113);

HAnimSegment1110.addChild(&Transform1112);

Shape& Shape1114 =  Shape();
LineSet& LineSet1115 =  LineSet();
LineSet1115.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1116 =  ColorRGBA();
ColorRGBA1116.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1115.addChild(&ColorRGBA1116);

Coordinate& Coordinate1117 =  Coordinate();
Coordinate1117.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet1115.setCoord(Coordinate1117);

Shape1114.setGeometry(&LineSet1115);

HAnimSegment1110.addChild(&Shape1114);

HAnimJoint1109.addChildren(&HAnimSegment1110);

HAnimJoint& HAnimJoint1118 =  HAnimJoint();
HAnimJoint1118.setDEF(CString("hanim_l_middle1"));
HAnimJoint1118.X3DNode::setName(CString("l_middle1"));
HAnimJoint1118.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment1119 =  HAnimSegment();
HAnimSegment1119.setDEF(CString("hanim_l_middle_proximal"));
HAnimSegment1119.X3DNode::setName(CString("l_middle_proximal"));
TouchSensor& TouchSensor1120 =  TouchSensor();
TouchSensor1120.setDescription(CString("HAnimJoint l_middle1, HAnimSegment l_middle_proximal"));
HAnimSegment1119.addChild(&TouchSensor1120);

Transform& Transform1121 =  Transform();
Transform1121.setTranslation(new float[]{0.1987,0.7818,-0.053});
Shape& Shape1122 =  Shape();
Shape1122.setUSE(CString("HAnimJointShape"));
Transform1121.addChild(&Shape1122);

HAnimSegment1119.addChild(&Transform1121);

Shape& Shape1123 =  Shape();
LineSet& LineSet1124 =  LineSet();
LineSet1124.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1125 =  ColorRGBA();
ColorRGBA1125.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1124.addChild(&ColorRGBA1125);

Coordinate& Coordinate1126 =  Coordinate();
Coordinate1126.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet1124.setCoord(Coordinate1126);

Shape1123.setGeometry(&LineSet1124);

HAnimSegment1119.addChild(&Shape1123);

HAnimJoint1118.addChildren(&HAnimSegment1119);

HAnimJoint& HAnimJoint1127 =  HAnimJoint();
HAnimJoint1127.setDEF(CString("hanim_l_middle2"));
HAnimJoint1127.X3DNode::setName(CString("l_middle2"));
HAnimJoint1127.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment1128 =  HAnimSegment();
HAnimSegment1128.setDEF(CString("hanim_l_middle_middle"));
HAnimSegment1128.X3DNode::setName(CString("l_middle_middle"));
TouchSensor& TouchSensor1129 =  TouchSensor();
TouchSensor1129.setDescription(CString("HAnimJoint l_middle2, HAnimSegment l_middle_middle"));
HAnimSegment1128.addChild(&TouchSensor1129);

Transform& Transform1130 =  Transform();
Transform1130.setTranslation(new float[]{0.2013,0.7273,-0.0503});
Shape& Shape1131 =  Shape();
Shape1131.setUSE(CString("HAnimJointShape"));
Transform1130.addChild(&Shape1131);

HAnimSegment1128.addChild(&Transform1130);

Shape& Shape1132 =  Shape();
LineSet& LineSet1133 =  LineSet();
LineSet1133.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1134 =  ColorRGBA();
ColorRGBA1134.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1133.addChild(&ColorRGBA1134);

Coordinate& Coordinate1135 =  Coordinate();
Coordinate1135.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet1133.setCoord(Coordinate1135);

Shape1132.setGeometry(&LineSet1133);

HAnimSegment1128.addChild(&Shape1132);

HAnimJoint1127.addChildren(&HAnimSegment1128);

HAnimJoint& HAnimJoint1136 =  HAnimJoint();
HAnimJoint1136.setDEF(CString("hanim_l_middle3"));
HAnimJoint1136.X3DNode::setName(CString("l_middle3"));
HAnimJoint1136.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimSegment& HAnimSegment1137 =  HAnimSegment();
HAnimSegment1137.setDEF(CString("hanim_l_middle_distal"));
HAnimSegment1137.X3DNode::setName(CString("l_middle_distal"));
TouchSensor& TouchSensor1138 =  TouchSensor();
TouchSensor1138.setDescription(CString("HAnimJoint l_middle3, HAnimSegment l_middle_distal"));
HAnimSegment1137.addChild(&TouchSensor1138);

Transform& Transform1139 =  Transform();
Transform1139.setTranslation(new float[]{0.2026,0.7011,-0.0494});
Shape& Shape1140 =  Shape();
Shape1140.setUSE(CString("HAnimJointShape"));
Transform1139.addChild(&Shape1140);

HAnimSegment1137.addChild(&Transform1139);

Shape& Shape1141 =  Shape();
LineSet& LineSet1142 =  LineSet();
LineSet1142.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1143 =  ColorRGBA();
ColorRGBA1143.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1142.addChild(&ColorRGBA1143);

Coordinate& Coordinate1144 =  Coordinate();
Coordinate1144.setPoint(new float[]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491}, 6);
LineSet1142.setCoord(Coordinate1144);

Shape1141.setGeometry(&LineSet1142);

HAnimSegment1137.addChild(&Shape1141);

HAnimSite& HAnimSite1145 =  HAnimSite();
HAnimSite1145.setDEF(CString("hanim_l_middle_distal_tip"));
HAnimSite1145.X3DNode::setName(CString("l_middle_distal_tip"));
HAnimSite1145.setTranslation(new float[]{0.208,0.6731,-0.0491});
TouchSensor& TouchSensor1146 =  TouchSensor();
TouchSensor1146.setDescription(CString("HAnimSite l_middle_distal_tip"));
HAnimSite1145.addChild(&TouchSensor1146);

Shape& Shape1147 =  Shape();
Shape1147.setUSE(CString("HAnimSiteShape"));
HAnimSite1145.addChild(&Shape1147);

HAnimSegment1137.addChild(&HAnimSite1145);

HAnimJoint1136.addChildren(&HAnimSegment1137);

HAnimJoint1127.addChildren(&HAnimJoint1136);

HAnimJoint1118.addChildren(&HAnimJoint1127);

HAnimJoint1109.addChildren(&HAnimJoint1118);

HAnimJoint977.addChildren(&HAnimJoint1109);

HAnimJoint& HAnimJoint1148 =  HAnimJoint();
HAnimJoint1148.setDEF(CString("hanim_l_ring0"));
HAnimJoint1148.X3DNode::setName(CString("l_ring0"));
HAnimJoint1148.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment1149 =  HAnimSegment();
HAnimSegment1149.setDEF(CString("hanim_l_ring_metacarpal"));
HAnimSegment1149.X3DNode::setName(CString("l_ring_metacarpal"));
TouchSensor& TouchSensor1150 =  TouchSensor();
TouchSensor1150.setDescription(CString("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal"));
HAnimSegment1149.addChild(&TouchSensor1150);

Transform& Transform1151 =  Transform();
Transform1151.setTranslation(new float[]{0.1956,0.8019,-0.0794});
Shape& Shape1152 =  Shape();
Shape1152.setUSE(CString("HAnimJointShape"));
Transform1151.addChild(&Shape1152);

HAnimSegment1149.addChild(&Transform1151);

Shape& Shape1153 =  Shape();
LineSet& LineSet1154 =  LineSet();
LineSet1154.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1155 =  ColorRGBA();
ColorRGBA1155.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1154.addChild(&ColorRGBA1155);

Coordinate& Coordinate1156 =  Coordinate();
Coordinate1156.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet1154.setCoord(Coordinate1156);

Shape1153.setGeometry(&LineSet1154);

HAnimSegment1149.addChild(&Shape1153);

HAnimJoint1148.addChildren(&HAnimSegment1149);

HAnimJoint& HAnimJoint1157 =  HAnimJoint();
HAnimJoint1157.setDEF(CString("hanim_l_ring1"));
HAnimJoint1157.X3DNode::setName(CString("l_ring1"));
HAnimJoint1157.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment1158 =  HAnimSegment();
HAnimSegment1158.setDEF(CString("hanim_l_ring_proximal"));
HAnimSegment1158.X3DNode::setName(CString("l_ring_proximal"));
TouchSensor& TouchSensor1159 =  TouchSensor();
TouchSensor1159.setDescription(CString("HAnimJoint l_ring1, HAnimSegment l_ring_proximal"));
HAnimSegment1158.addChild(&TouchSensor1159);

Transform& Transform1160 =  Transform();
Transform1160.setTranslation(new float[]{0.1956,0.7815,-0.0794});
Shape& Shape1161 =  Shape();
Shape1161.setUSE(CString("HAnimJointShape"));
Transform1160.addChild(&Shape1161);

HAnimSegment1158.addChild(&Transform1160);

Shape& Shape1162 =  Shape();
LineSet& LineSet1163 =  LineSet();
LineSet1163.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1164 =  ColorRGBA();
ColorRGBA1164.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1163.addChild(&ColorRGBA1164);

Coordinate& Coordinate1165 =  Coordinate();
Coordinate1165.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet1163.setCoord(Coordinate1165);

Shape1162.setGeometry(&LineSet1163);

HAnimSegment1158.addChild(&Shape1162);

HAnimJoint1157.addChildren(&HAnimSegment1158);

HAnimJoint& HAnimJoint1166 =  HAnimJoint();
HAnimJoint1166.setDEF(CString("hanim_l_ring2"));
HAnimJoint1166.X3DNode::setName(CString("l_ring2"));
HAnimJoint1166.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment1167 =  HAnimSegment();
HAnimSegment1167.setDEF(CString("hanim_l_ring_middle"));
HAnimSegment1167.X3DNode::setName(CString("l_ring_middle"));
TouchSensor& TouchSensor1168 =  TouchSensor();
TouchSensor1168.setDescription(CString("HAnimJoint l_ring2, HAnimSegment l_ring_middle"));
HAnimSegment1167.addChild(&TouchSensor1168);

Transform& Transform1169 =  Transform();
Transform1169.setTranslation(new float[]{0.1973,0.7287,-0.0777});
Shape& Shape1170 =  Shape();
Shape1170.setUSE(CString("HAnimJointShape"));
Transform1169.addChild(&Shape1170);

HAnimSegment1167.addChild(&Transform1169);

Shape& Shape1171 =  Shape();
LineSet& LineSet1172 =  LineSet();
LineSet1172.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1173 =  ColorRGBA();
ColorRGBA1173.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1172.addChild(&ColorRGBA1173);

Coordinate& Coordinate1174 =  Coordinate();
Coordinate1174.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet1172.setCoord(Coordinate1174);

Shape1171.setGeometry(&LineSet1172);

HAnimSegment1167.addChild(&Shape1171);

HAnimJoint1166.addChildren(&HAnimSegment1167);

HAnimJoint& HAnimJoint1175 =  HAnimJoint();
HAnimJoint1175.setDEF(CString("hanim_l_ring3"));
HAnimJoint1175.X3DNode::setName(CString("l_ring3"));
HAnimJoint1175.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimSegment& HAnimSegment1176 =  HAnimSegment();
HAnimSegment1176.setDEF(CString("hanim_l_ring_distal"));
HAnimSegment1176.X3DNode::setName(CString("l_ring_distal"));
TouchSensor& TouchSensor1177 =  TouchSensor();
TouchSensor1177.setDescription(CString("HAnimJoint l_ring3, HAnimSegment l_ring_distal"));
HAnimSegment1176.addChild(&TouchSensor1177);

Transform& Transform1178 =  Transform();
Transform1178.setTranslation(new float[]{0.1983,0.7045,-0.0767});
Shape& Shape1179 =  Shape();
Shape1179.setUSE(CString("HAnimJointShape"));
Transform1178.addChild(&Shape1179);

HAnimSegment1176.addChild(&Transform1178);

Shape& Shape1180 =  Shape();
LineSet& LineSet1181 =  LineSet();
LineSet1181.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1182 =  ColorRGBA();
ColorRGBA1182.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1181.addChild(&ColorRGBA1182);

Coordinate& Coordinate1183 =  Coordinate();
Coordinate1183.setPoint(new float[]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756}, 6);
LineSet1181.setCoord(Coordinate1183);

Shape1180.setGeometry(&LineSet1181);

HAnimSegment1176.addChild(&Shape1180);

HAnimSite& HAnimSite1184 =  HAnimSite();
HAnimSite1184.setDEF(CString("hanim_l_ring_distal_tip"));
HAnimSite1184.X3DNode::setName(CString("l_ring_distal_tip"));
HAnimSite1184.setTranslation(new float[]{0.2035,0.675,-0.0756});
TouchSensor& TouchSensor1185 =  TouchSensor();
TouchSensor1185.setDescription(CString("HAnimSite l_ring_distal_tip"));
HAnimSite1184.addChild(&TouchSensor1185);

Shape& Shape1186 =  Shape();
Shape1186.setUSE(CString("HAnimSiteShape"));
HAnimSite1184.addChild(&Shape1186);

HAnimSegment1176.addChild(&HAnimSite1184);

HAnimJoint1175.addChildren(&HAnimSegment1176);

HAnimJoint1166.addChildren(&HAnimJoint1175);

HAnimJoint1157.addChildren(&HAnimJoint1166);

HAnimJoint1148.addChildren(&HAnimJoint1157);

HAnimJoint977.addChildren(&HAnimJoint1148);

HAnimJoint& HAnimJoint1187 =  HAnimJoint();
HAnimJoint1187.setDEF(CString("hanim_l_pinky0"));
HAnimJoint1187.X3DNode::setName(CString("l_pinky0"));
HAnimJoint1187.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment1188 =  HAnimSegment();
HAnimSegment1188.setDEF(CString("hanim_l_pinky_metacarpal"));
HAnimSegment1188.X3DNode::setName(CString("l_pinky_metacarpal"));
TouchSensor& TouchSensor1189 =  TouchSensor();
TouchSensor1189.setDescription(CString("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal"));
HAnimSegment1188.addChild(&TouchSensor1189);

Transform& Transform1190 =  Transform();
Transform1190.setTranslation(new float[]{0.1925,0.8066,-0.1036});
Shape& Shape1191 =  Shape();
Shape1191.setUSE(CString("HAnimJointShape"));
Transform1190.addChild(&Shape1191);

HAnimSegment1188.addChild(&Transform1190);

Shape& Shape1192 =  Shape();
LineSet& LineSet1193 =  LineSet();
LineSet1193.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1194 =  ColorRGBA();
ColorRGBA1194.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1193.addChild(&ColorRGBA1194);

Coordinate& Coordinate1195 =  Coordinate();
Coordinate1195.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet1193.setCoord(Coordinate1195);

Shape1192.setGeometry(&LineSet1193);

HAnimSegment1188.addChild(&Shape1192);

HAnimJoint1187.addChildren(&HAnimSegment1188);

HAnimJoint& HAnimJoint1196 =  HAnimJoint();
HAnimJoint1196.setDEF(CString("hanim_l_pinky1"));
HAnimJoint1196.X3DNode::setName(CString("l_pinky1"));
HAnimJoint1196.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment1197 =  HAnimSegment();
HAnimSegment1197.setDEF(CString("hanim_l_pinky_proximal"));
HAnimSegment1197.X3DNode::setName(CString("l_pinky_proximal"));
TouchSensor& TouchSensor1198 =  TouchSensor();
TouchSensor1198.setDescription(CString("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal"));
HAnimSegment1197.addChild(&TouchSensor1198);

Transform& Transform1199 =  Transform();
Transform1199.setTranslation(new float[]{0.1925,0.7866,-0.1036});
Shape& Shape1200 =  Shape();
Shape1200.setUSE(CString("HAnimJointShape"));
Transform1199.addChild(&Shape1200);

HAnimSegment1197.addChild(&Transform1199);

Shape& Shape1201 =  Shape();
LineSet& LineSet1202 =  LineSet();
LineSet1202.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1203 =  ColorRGBA();
ColorRGBA1203.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1202.addChild(&ColorRGBA1203);

Coordinate& Coordinate1204 =  Coordinate();
Coordinate1204.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet1202.setCoord(Coordinate1204);

Shape1201.setGeometry(&LineSet1202);

HAnimSegment1197.addChild(&Shape1201);

HAnimJoint1196.addChildren(&HAnimSegment1197);

HAnimJoint& HAnimJoint1205 =  HAnimJoint();
HAnimJoint1205.setDEF(CString("hanim_l_pinky2"));
HAnimJoint1205.X3DNode::setName(CString("l_pinky2"));
HAnimJoint1205.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment1206 =  HAnimSegment();
HAnimSegment1206.setDEF(CString("hanim_l_pinky_middle"));
HAnimSegment1206.X3DNode::setName(CString("l_pinky_middle"));
TouchSensor& TouchSensor1207 =  TouchSensor();
TouchSensor1207.setDescription(CString("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle"));
HAnimSegment1206.addChild(&TouchSensor1207);

Transform& Transform1208 =  Transform();
Transform1208.setTranslation(new float[]{0.1938,0.7452,-0.1024});
Shape& Shape1209 =  Shape();
Shape1209.setUSE(CString("HAnimJointShape"));
Transform1208.addChild(&Shape1209);

HAnimSegment1206.addChild(&Transform1208);

Shape& Shape1210 =  Shape();
LineSet& LineSet1211 =  LineSet();
LineSet1211.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1212 =  ColorRGBA();
ColorRGBA1212.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1211.addChild(&ColorRGBA1212);

Coordinate& Coordinate1213 =  Coordinate();
Coordinate1213.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet1211.setCoord(Coordinate1213);

Shape1210.setGeometry(&LineSet1211);

HAnimSegment1206.addChild(&Shape1210);

HAnimJoint1205.addChildren(&HAnimSegment1206);

HAnimJoint& HAnimJoint1214 =  HAnimJoint();
HAnimJoint1214.setDEF(CString("hanim_l_pinky3"));
HAnimJoint1214.X3DNode::setName(CString("l_pinky3"));
HAnimJoint1214.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimSegment& HAnimSegment1215 =  HAnimSegment();
HAnimSegment1215.setDEF(CString("hanim_l_pinky_distal"));
HAnimSegment1215.X3DNode::setName(CString("l_pinky_distal"));
TouchSensor& TouchSensor1216 =  TouchSensor();
TouchSensor1216.setDescription(CString("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal"));
HAnimSegment1215.addChild(&TouchSensor1216);

Transform& Transform1217 =  Transform();
Transform1217.setTranslation(new float[]{0.1948,0.7277,-0.1017});
Shape& Shape1218 =  Shape();
Shape1218.setUSE(CString("HAnimJointShape"));
Transform1217.addChild(&Shape1218);

HAnimSegment1215.addChild(&Transform1217);

Shape& Shape1219 =  Shape();
LineSet& LineSet1220 =  LineSet();
LineSet1220.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1221 =  ColorRGBA();
ColorRGBA1221.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1220.addChild(&ColorRGBA1221);

Coordinate& Coordinate1222 =  Coordinate();
Coordinate1222.setPoint(new float[]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012}, 6);
LineSet1220.setCoord(Coordinate1222);

Shape1219.setGeometry(&LineSet1220);

HAnimSegment1215.addChild(&Shape1219);

HAnimSite& HAnimSite1223 =  HAnimSite();
HAnimSite1223.setDEF(CString("hanim_l_pinky_distal_tip"));
HAnimSite1223.X3DNode::setName(CString("l_pinky_distal_tip"));
HAnimSite1223.setTranslation(new float[]{0.2014,0.7009,-0.1012});
TouchSensor& TouchSensor1224 =  TouchSensor();
TouchSensor1224.setDescription(CString("HAnimSite l_pinky_distal_tip"));
HAnimSite1223.addChild(&TouchSensor1224);

Shape& Shape1225 =  Shape();
Shape1225.setUSE(CString("HAnimSiteShape"));
HAnimSite1223.addChild(&Shape1225);

HAnimSegment1215.addChild(&HAnimSite1223);

HAnimJoint1214.addChildren(&HAnimSegment1215);

HAnimJoint1205.addChildren(&HAnimJoint1214);

HAnimJoint1196.addChildren(&HAnimJoint1205);

HAnimJoint1187.addChildren(&HAnimJoint1196);

HAnimJoint977.addChildren(&HAnimJoint1187);

HAnimJoint940.addChildren(&HAnimJoint977);

HAnimJoint924.addChildren(&HAnimJoint940);

HAnimJoint915.addChildren(&HAnimJoint924);

HAnimJoint878.addChildren(&HAnimJoint915);

HAnimJoint594.addChildren(&HAnimJoint878);

HAnimJoint& HAnimJoint1226 =  HAnimJoint();
HAnimJoint1226.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint1226.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint1226.setRotation(new float[]{0,0,-1.00000000000003,0.108042894183947});
HAnimJoint1226.setCenter(new float[]{-0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment1227 =  HAnimSegment();
HAnimSegment1227.setDEF(CString("hanim_r_clavicle"));
HAnimSegment1227.X3DNode::setName(CString("r_clavicle"));
TouchSensor& TouchSensor1228 =  TouchSensor();
TouchSensor1228.setDescription(CString("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"));
HAnimSegment1227.addChild(&TouchSensor1228);

Transform& Transform1229 =  Transform();
Transform1229.setTranslation(new float[]{-0.082,1.4488,-0.0353});
Shape& Shape1230 =  Shape();
Shape1230.setUSE(CString("HAnimJointShape"));
Transform1229.addChild(&Shape1230);

HAnimSegment1227.addChild(&Transform1229);

Shape& Shape1231 =  Shape();
LineSet& LineSet1232 =  LineSet();
LineSet1232.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1233 =  ColorRGBA();
ColorRGBA1233.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1232.addChild(&ColorRGBA1233);

Coordinate& Coordinate1234 =  Coordinate();
Coordinate1234.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424}, 6);
LineSet1232.setCoord(Coordinate1234);

Shape1231.setGeometry(&LineSet1232);

HAnimSegment1227.addChild(&Shape1231);

Shape& Shape1235 =  Shape();
LineSet& LineSet1236 =  LineSet();
LineSet1236.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1237 =  ColorRGBA();
ColorRGBA1237.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1236.addChild(&ColorRGBA1237);

Coordinate& Coordinate1238 =  Coordinate();
Coordinate1238.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04}, 6);
LineSet1236.setCoord(Coordinate1238);

Shape1235.setGeometry(&LineSet1236);

HAnimSegment1227.addChild(&Shape1235);

Shape& Shape1239 =  Shape();
LineSet& LineSet1240 =  LineSet();
LineSet1240.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1241 =  ColorRGBA();
ColorRGBA1241.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1240.addChild(&ColorRGBA1241);

Coordinate& Coordinate1242 =  Coordinate();
Coordinate1242.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431}, 6);
LineSet1240.setCoord(Coordinate1242);

Shape1239.setGeometry(&LineSet1240);

HAnimSegment1227.addChild(&Shape1239);

Shape& Shape1243 =  Shape();
LineSet& LineSet1244 =  LineSet();
LineSet1244.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1245 =  ColorRGBA();
ColorRGBA1245.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1244.addChild(&ColorRGBA1245);

Coordinate& Coordinate1246 =  Coordinate();
Coordinate1246.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031}, 6);
LineSet1244.setCoord(Coordinate1246);

Shape1243.setGeometry(&LineSet1244);

HAnimSegment1227.addChild(&Shape1243);

Shape& Shape1247 =  Shape();
LineSet& LineSet1248 =  LineSet();
LineSet1248.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1249 =  ColorRGBA();
ColorRGBA1249.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1248.addChild(&ColorRGBA1249);

Coordinate& Coordinate1250 =  Coordinate();
Coordinate1250.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826}, 6);
LineSet1248.setCoord(Coordinate1250);

Shape1247.setGeometry(&LineSet1248);

HAnimSegment1227.addChild(&Shape1247);

HAnimSite& HAnimSite1251 =  HAnimSite();
HAnimSite1251.setDEF(CString("hanim_r_clavicale_pt"));
HAnimSite1251.X3DNode::setName(CString("r_clavicale_pt"));
HAnimSite1251.setTranslation(new float[]{-0.0115,1.4943,0.04});
TouchSensor& TouchSensor1252 =  TouchSensor();
TouchSensor1252.setDescription(CString("HAnimSite r_clavicale"));
HAnimSite1251.addChild(&TouchSensor1252);

Shape& Shape1253 =  Shape();
Shape1253.setUSE(CString("HAnimSiteShape"));
HAnimSite1251.addChild(&Shape1253);

HAnimSegment1227.addChild(&HAnimSite1251);

HAnimSite& HAnimSite1254 =  HAnimSite();
HAnimSite1254.setDEF(CString("hanim_r_acromion_pt"));
HAnimSite1254.X3DNode::setName(CString("r_acromion_pt"));
HAnimSite1254.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
TouchSensor& TouchSensor1255 =  TouchSensor();
TouchSensor1255.setDescription(CString("HAnimSite r_acromion"));
HAnimSite1254.addChild(&TouchSensor1255);

Shape& Shape1256 =  Shape();
Shape1256.setUSE(CString("HAnimSiteShape"));
HAnimSite1254.addChild(&Shape1256);

HAnimSegment1227.addChild(&HAnimSite1254);

HAnimSite& HAnimSite1257 =  HAnimSite();
HAnimSite1257.setDEF(CString("hanim_r_axilla_ant_pt"));
HAnimSite1257.X3DNode::setName(CString("r_axilla_ant_pt"));
HAnimSite1257.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
TouchSensor& TouchSensor1258 =  TouchSensor();
TouchSensor1258.setDescription(CString("HAnimSite r_axilla_ant"));
HAnimSite1257.addChild(&TouchSensor1258);

Shape& Shape1259 =  Shape();
Shape1259.setUSE(CString("HAnimSiteShape"));
HAnimSite1257.addChild(&Shape1259);

HAnimSegment1227.addChild(&HAnimSite1257);

HAnimSite& HAnimSite1260 =  HAnimSite();
HAnimSite1260.setDEF(CString("hanim_r_axilla_post_pt"));
HAnimSite1260.X3DNode::setName(CString("r_axilla_post_pt"));
HAnimSite1260.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
TouchSensor& TouchSensor1261 =  TouchSensor();
TouchSensor1261.setDescription(CString("HAnimSite r_axilla_post"));
HAnimSite1260.addChild(&TouchSensor1261);

Shape& Shape1262 =  Shape();
Shape1262.setUSE(CString("HAnimSiteShape"));
HAnimSite1260.addChild(&Shape1262);

HAnimSegment1227.addChild(&HAnimSite1260);

HAnimJoint1226.addChildren(&HAnimSegment1227);

HAnimJoint& HAnimJoint1263 =  HAnimJoint();
HAnimJoint1263.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1263.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint1263.setCenter(new float[]{-0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment1264 =  HAnimSegment();
HAnimSegment1264.setDEF(CString("hanim_r_scapula"));
HAnimSegment1264.X3DNode::setName(CString("r_scapula"));
TouchSensor& TouchSensor1265 =  TouchSensor();
TouchSensor1265.setDescription(CString("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"));
HAnimSegment1264.addChild(&TouchSensor1265);

Transform& Transform1266 =  Transform();
Transform1266.setTranslation(new float[]{-0.0962,1.4269,-0.0424});
Shape& Shape1267 =  Shape();
Shape1267.setUSE(CString("HAnimJointShape"));
Transform1266.addChild(&Shape1267);

HAnimSegment1264.addChild(&Transform1266);

Shape& Shape1268 =  Shape();
LineSet& LineSet1269 =  LineSet();
LineSet1269.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1270 =  ColorRGBA();
ColorRGBA1270.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1269.addChild(&ColorRGBA1270);

Coordinate& Coordinate1271 =  Coordinate();
Coordinate1271.setPoint(new float[]{-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387}, 6);
LineSet1269.setCoord(Coordinate1271);

Shape1268.setGeometry(&LineSet1269);

HAnimSegment1264.addChild(&Shape1268);

HAnimJoint1263.addChildren(&HAnimSegment1264);

HAnimJoint& HAnimJoint1272 =  HAnimJoint();
HAnimJoint1272.setDEF(CString("hanim_r_shoulder"));
HAnimJoint1272.X3DNode::setName(CString("r_shoulder"));
HAnimJoint1272.setRotation(new float[]{0,0,-1,0.950777468818762});
HAnimJoint1272.setCenter(new float[]{-0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment1273 =  HAnimSegment();
HAnimSegment1273.setDEF(CString("hanim_r_upperarm"));
HAnimSegment1273.X3DNode::setName(CString("r_upperarm"));
TouchSensor& TouchSensor1274 =  TouchSensor();
TouchSensor1274.setDescription(CString("HAnimJoint r_shoulder, HAnimSegment r_upperarm"));
HAnimSegment1273.addChild(&TouchSensor1274);

Transform& Transform1275 =  Transform();
Transform1275.setTranslation(new float[]{-0.2029,1.4376,-0.0387});
Shape& Shape1276 =  Shape();
Shape1276.setUSE(CString("HAnimJointShape"));
Transform1275.addChild(&Shape1276);

HAnimSegment1273.addChild(&Transform1275);

Shape& Shape1277 =  Shape();
LineSet& LineSet1278 =  LineSet();
LineSet1278.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1279 =  ColorRGBA();
ColorRGBA1279.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1278.addChild(&ColorRGBA1279);

Coordinate& Coordinate1280 =  Coordinate();
Coordinate1280.setPoint(new float[]{-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682}, 6);
LineSet1278.setCoord(Coordinate1280);

Shape1277.setGeometry(&LineSet1278);

HAnimSegment1273.addChild(&Shape1277);

Shape& Shape1281 =  Shape();
LineSet& LineSet1282 =  LineSet();
LineSet1282.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1283 =  ColorRGBA();
ColorRGBA1283.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1282.addChild(&ColorRGBA1283);

Coordinate& Coordinate1284 =  Coordinate();
Coordinate1284.setPoint(new float[]{-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033}, 6);
LineSet1282.setCoord(Coordinate1284);

Shape1281.setGeometry(&LineSet1282);

HAnimSegment1273.addChild(&Shape1281);

HAnimSite& HAnimSite1285 =  HAnimSite();
HAnimSite1285.setDEF(CString("hanim_r_humeral_lateral_epicn_pt"));
HAnimSite1285.X3DNode::setName(CString("r_humeral_lateral_epicn_pt"));
HAnimSite1285.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
TouchSensor& TouchSensor1286 =  TouchSensor();
TouchSensor1286.setDescription(CString("HAnimSite r_humeral_lateral_epicn"));
HAnimSite1285.addChild(&TouchSensor1286);

Shape& Shape1287 =  Shape();
Shape1287.setUSE(CString("HAnimSiteShape"));
HAnimSite1285.addChild(&Shape1287);

HAnimSegment1273.addChild(&HAnimSite1285);

HAnimJoint1272.addChildren(&HAnimSegment1273);

HAnimJoint& HAnimJoint1288 =  HAnimJoint();
HAnimJoint1288.setDEF(CString("hanim_r_elbow"));
HAnimJoint1288.X3DNode::setName(CString("r_elbow"));
HAnimJoint1288.setRotation(new float[]{-1,0,0,0.297117959005863});
HAnimJoint1288.setCenter(new float[]{-0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment1289 =  HAnimSegment();
HAnimSegment1289.setDEF(CString("hanim_r_forearm"));
HAnimSegment1289.X3DNode::setName(CString("r_forearm"));
TouchSensor& TouchSensor1290 =  TouchSensor();
TouchSensor1290.setDescription(CString("HAnimJoint r_elbow, HAnimSegment r_forearm"));
HAnimSegment1289.addChild(&TouchSensor1290);

Transform& Transform1291 =  Transform();
Transform1291.setTranslation(new float[]{-0.2014,1.1357,-0.0682});
Shape& Shape1292 =  Shape();
Shape1292.setUSE(CString("HAnimJointShape"));
Transform1291.addChild(&Shape1292);

HAnimSegment1289.addChild(&Transform1291);

Shape& Shape1293 =  Shape();
LineSet& LineSet1294 =  LineSet();
LineSet1294.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1295 =  ColorRGBA();
ColorRGBA1295.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1294.addChild(&ColorRGBA1295);

Coordinate& Coordinate1296 =  Coordinate();
Coordinate1296.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583}, 6);
LineSet1294.setCoord(Coordinate1296);

Shape1293.setGeometry(&LineSet1294);

HAnimSegment1289.addChild(&Shape1293);

Shape& Shape1297 =  Shape();
LineSet& LineSet1298 =  LineSet();
LineSet1298.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1299 =  ColorRGBA();
ColorRGBA1299.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1298.addChild(&ColorRGBA1299);

Coordinate& Coordinate1300 =  Coordinate();
Coordinate1300.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036}, 6);
LineSet1298.setCoord(Coordinate1300);

Shape1297.setGeometry(&LineSet1298);

HAnimSegment1289.addChild(&Shape1297);

Shape& Shape1301 =  Shape();
LineSet& LineSet1302 =  LineSet();
LineSet1302.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1303 =  ColorRGBA();
ColorRGBA1303.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1302.addChild(&ColorRGBA1303);

Coordinate& Coordinate1304 =  Coordinate();
Coordinate1304.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065}, 6);
LineSet1302.setCoord(Coordinate1304);

Shape1301.setGeometry(&LineSet1302);

HAnimSegment1289.addChild(&Shape1301);

Shape& Shape1305 =  Shape();
LineSet& LineSet1306 =  LineSet();
LineSet1306.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1307 =  ColorRGBA();
ColorRGBA1307.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1306.addChild(&ColorRGBA1307);

Coordinate& Coordinate1308 =  Coordinate();
Coordinate1308.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062}, 6);
LineSet1306.setCoord(Coordinate1308);

Shape1305.setGeometry(&LineSet1306);

HAnimSegment1289.addChild(&Shape1305);

Shape& Shape1309 =  Shape();
LineSet& LineSet1310 =  LineSet();
LineSet1310.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1311 =  ColorRGBA();
ColorRGBA1311.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1310.addChild(&ColorRGBA1311);

Coordinate& Coordinate1312 =  Coordinate();
Coordinate1312.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091}, 6);
LineSet1310.setCoord(Coordinate1312);

Shape1309.setGeometry(&LineSet1310);

HAnimSegment1289.addChild(&Shape1309);

HAnimSite& HAnimSite1313 =  HAnimSite();
HAnimSite1313.setDEF(CString("hanim_r_radial_styloid_pt"));
HAnimSite1313.X3DNode::setName(CString("r_radial_styloid_pt"));
HAnimSite1313.setTranslation(new float[]{-0.1884,0.8676,-0.036});
TouchSensor& TouchSensor1314 =  TouchSensor();
TouchSensor1314.setDescription(CString("HAnimSite r_radial_styloid"));
HAnimSite1313.addChild(&TouchSensor1314);

Shape& Shape1315 =  Shape();
Shape1315.setUSE(CString("HAnimSiteShape"));
HAnimSite1313.addChild(&Shape1315);

HAnimSegment1289.addChild(&HAnimSite1313);

HAnimSite& HAnimSite1316 =  HAnimSite();
HAnimSite1316.setDEF(CString("hanim_r_olecranon_pt"));
HAnimSite1316.X3DNode::setName(CString("r_olecranon_pt"));
HAnimSite1316.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
TouchSensor& TouchSensor1317 =  TouchSensor();
TouchSensor1317.setDescription(CString("HAnimSite r_olecranon"));
HAnimSite1316.addChild(&TouchSensor1317);

Shape& Shape1318 =  Shape();
Shape1318.setUSE(CString("HAnimSiteShape"));
HAnimSite1316.addChild(&Shape1318);

HAnimSegment1289.addChild(&HAnimSite1316);

HAnimSite& HAnimSite1319 =  HAnimSite();
HAnimSite1319.setDEF(CString("hanim_r_humeral_medial_epicn_pt"));
HAnimSite1319.X3DNode::setName(CString("r_humeral_medial_epicn_pt"));
HAnimSite1319.setTranslation(new float[]{-0.168,1.1298,-0.1062});
TouchSensor& TouchSensor1320 =  TouchSensor();
TouchSensor1320.setDescription(CString("HAnimSite r_humeral_medial_epicn"));
HAnimSite1319.addChild(&TouchSensor1320);

Shape& Shape1321 =  Shape();
Shape1321.setUSE(CString("HAnimSiteShape"));
HAnimSite1319.addChild(&Shape1321);

HAnimSegment1289.addChild(&HAnimSite1319);

HAnimSite& HAnimSite1322 =  HAnimSite();
HAnimSite1322.setDEF(CString("hanim_r_radiale_pt"));
HAnimSite1322.X3DNode::setName(CString("r_radiale_pt"));
HAnimSite1322.setTranslation(new float[]{-0.213,1.1305,-0.1091});
TouchSensor& TouchSensor1323 =  TouchSensor();
TouchSensor1323.setDescription(CString("HAnimSite r_radiale"));
HAnimSite1322.addChild(&TouchSensor1323);

Shape& Shape1324 =  Shape();
Shape1324.setUSE(CString("HAnimSiteShape"));
HAnimSite1322.addChild(&Shape1324);

HAnimSegment1289.addChild(&HAnimSite1322);

HAnimJoint1288.addChildren(&HAnimSegment1289);

HAnimJoint& HAnimJoint1325 =  HAnimJoint();
HAnimJoint1325.setDEF(CString("hanim_r_wrist"));
HAnimJoint1325.X3DNode::setName(CString("r_wrist"));
HAnimJoint1325.setCenter(new float[]{-0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment1326 =  HAnimSegment();
HAnimSegment1326.setDEF(CString("hanim_r_hand"));
HAnimSegment1326.X3DNode::setName(CString("r_hand"));
TouchSensor& TouchSensor1327 =  TouchSensor();
TouchSensor1327.setDescription(CString("HAnimJoint r_wrist, HAnimSegment r_hand"));
HAnimSegment1326.addChild(&TouchSensor1327);

Transform& Transform1328 =  Transform();
Transform1328.setTranslation(new float[]{-0.1984,0.8663,-0.0583});
Shape& Shape1329 =  Shape();
Shape1329.setUSE(CString("HAnimJointShape"));
Transform1328.addChild(&Shape1329);

HAnimSegment1326.addChild(&Transform1328);

Shape& Shape1330 =  Shape();
LineSet& LineSet1331 =  LineSet();
LineSet1331.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1332 =  ColorRGBA();
ColorRGBA1332.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1331.addChild(&ColorRGBA1332);

Coordinate& Coordinate1333 =  Coordinate();
Coordinate1333.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534}, 6);
LineSet1331.setCoord(Coordinate1333);

Shape1330.setGeometry(&LineSet1331);

HAnimSegment1326.addChild(&Shape1330);

Shape& Shape1334 =  Shape();
LineSet& LineSet1335 =  LineSet();
LineSet1335.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1336 =  ColorRGBA();
ColorRGBA1336.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1335.addChild(&ColorRGBA1336);

Coordinate& Coordinate1337 =  Coordinate();
Coordinate1337.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028}, 6);
LineSet1335.setCoord(Coordinate1337);

Shape1334.setGeometry(&LineSet1335);

HAnimSegment1326.addChild(&Shape1334);

Shape& Shape1338 =  Shape();
LineSet& LineSet1339 =  LineSet();
LineSet1339.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1340 =  ColorRGBA();
ColorRGBA1340.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1339.addChild(&ColorRGBA1340);

Coordinate& Coordinate1341 =  Coordinate();
Coordinate1341.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053}, 6);
LineSet1339.setCoord(Coordinate1341);

Shape1338.setGeometry(&LineSet1339);

HAnimSegment1326.addChild(&Shape1338);

Shape& Shape1342 =  Shape();
LineSet& LineSet1343 =  LineSet();
LineSet1343.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1344 =  ColorRGBA();
ColorRGBA1344.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1343.addChild(&ColorRGBA1344);

Coordinate& Coordinate1345 =  Coordinate();
Coordinate1345.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794}, 6);
LineSet1343.setCoord(Coordinate1345);

Shape1342.setGeometry(&LineSet1343);

HAnimSegment1326.addChild(&Shape1342);

Shape& Shape1346 =  Shape();
LineSet& LineSet1347 =  LineSet();
LineSet1347.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1348 =  ColorRGBA();
ColorRGBA1348.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1347.addChild(&ColorRGBA1348);

Coordinate& Coordinate1349 =  Coordinate();
Coordinate1349.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036}, 6);
LineSet1347.setCoord(Coordinate1349);

Shape1346.setGeometry(&LineSet1347);

HAnimSegment1326.addChild(&Shape1346);

Shape& Shape1350 =  Shape();
LineSet& LineSet1351 =  LineSet();
LineSet1351.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1352 =  ColorRGBA();
ColorRGBA1352.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1351.addChild(&ColorRGBA1352);

Coordinate& Coordinate1353 =  Coordinate();
Coordinate1353.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177}, 6);
LineSet1351.setCoord(Coordinate1353);

Shape1350.setGeometry(&LineSet1351);

HAnimSegment1326.addChild(&Shape1350);

Shape& Shape1354 =  Shape();
LineSet& LineSet1355 =  LineSet();
LineSet1355.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1356 =  ColorRGBA();
ColorRGBA1356.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1355.addChild(&ColorRGBA1356);

Coordinate& Coordinate1357 =  Coordinate();
Coordinate1357.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584}, 6);
LineSet1355.setCoord(Coordinate1357);

Shape1354.setGeometry(&LineSet1355);

HAnimSegment1326.addChild(&Shape1354);

Shape& Shape1358 =  Shape();
LineSet& LineSet1359 =  LineSet();
LineSet1359.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1360 =  ColorRGBA();
ColorRGBA1360.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1359.addChild(&ColorRGBA1360);

Coordinate& Coordinate1361 =  Coordinate();
Coordinate1361.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064}, 6);
LineSet1359.setCoord(Coordinate1361);

Shape1358.setGeometry(&LineSet1359);

HAnimSegment1326.addChild(&Shape1358);

Shape& Shape1362 =  Shape();
LineSet& LineSet1363 =  LineSet();
LineSet1363.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1364 =  ColorRGBA();
ColorRGBA1364.setUSE(CString("HAnimSiteViewpointLineColorRGBA"));
LineSet1363.addChild(&ColorRGBA1364);

Coordinate& Coordinate1365 =  Coordinate();
Coordinate1365.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.3,0.75,0.45}, 6);
LineSet1363.setCoord(Coordinate1365);

Shape1362.setGeometry(&LineSet1363);

HAnimSegment1326.addChild(&Shape1362);

HAnimSite& HAnimSite1366 =  HAnimSite();
HAnimSite1366.setDEF(CString("hanim_r_metacarpal_pha2_pt"));
HAnimSite1366.X3DNode::setName(CString("r_metacarpal_pha2_pt"));
HAnimSite1366.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
TouchSensor& TouchSensor1367 =  TouchSensor();
TouchSensor1367.setDescription(CString("HAnimSite r_metacarpal_pha2"));
HAnimSite1366.addChild(&TouchSensor1367);

Shape& Shape1368 =  Shape();
Shape1368.setUSE(CString("HAnimSiteShape"));
HAnimSite1366.addChild(&Shape1368);

HAnimSegment1326.addChild(&HAnimSite1366);

HAnimSite& HAnimSite1369 =  HAnimSite();
HAnimSite1369.setDEF(CString("hanim_r_ulnar_styloid_pt"));
HAnimSite1369.X3DNode::setName(CString("r_ulnar_styloid_pt"));
HAnimSite1369.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
TouchSensor& TouchSensor1370 =  TouchSensor();
TouchSensor1370.setDescription(CString("HAnimSite r_ulnar_styloid"));
HAnimSite1369.addChild(&TouchSensor1370);

Shape& Shape1371 =  Shape();
Shape1371.setUSE(CString("HAnimSiteShape"));
HAnimSite1369.addChild(&Shape1371);

HAnimSegment1326.addChild(&HAnimSite1369);

HAnimSite& HAnimSite1372 =  HAnimSite();
HAnimSite1372.setDEF(CString("hanim_r_metacarpal_pha5_pt"));
HAnimSite1372.X3DNode::setName(CString("r_metacarpal_pha5_pt"));
HAnimSite1372.setTranslation(new float[]{-0.1929,0.789,-0.1064});
TouchSensor& TouchSensor1373 =  TouchSensor();
TouchSensor1373.setDescription(CString("HAnimSite r_metacarpal_pha5"));
HAnimSite1372.addChild(&TouchSensor1373);

Shape& Shape1374 =  Shape();
Shape1374.setUSE(CString("HAnimSiteShape"));
HAnimSite1372.addChild(&Shape1374);

HAnimSegment1326.addChild(&HAnimSite1372);

HAnimSite& HAnimSite1375 =  HAnimSite();
HAnimSite1375.setDEF(CString("hanim_r_hand_front_view"));
HAnimSite1375.X3DNode::setName(CString("r_hand_front_view"));
HAnimSite1375.setTranslation(new float[]{-0.3,0.75,0.45});
Viewpoint& Viewpoint1376 =  Viewpoint();
Viewpoint1376.setDEF(CString("hanim_r_hand_front_viewpoint"));
Viewpoint1376.setDescription(CString("right hand front"));
Viewpoint1376.setPosition(new float[]{0,0,0});
Viewpoint1376.setCenterOfRotation(new float[]{0,0.7,0});
HAnimSite1375.addChild(&Viewpoint1376);

Anchor& Anchor1377 =  Anchor();
Anchor1377.setDescription(CString("HAnimSite Viewpoint hanim_r_hand_front_view"));
Anchor1377.setUrl(new CString[]{CString("#hanim_r_hand_front_viewpoint")}, 1);
LOD& LOD1378 =  LOD();
LOD1378.setForceTransitions(True);
LOD1378.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1379 =  WorldInfo();
WorldInfo1379.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1378.addChildren(&WorldInfo1379);

Shape& Shape1380 =  Shape();
Shape1380.setUSE(CString("HAnimSiteViewpointShape"));
LOD1378.addChildren(Shape1380);

Anchor1377.addChild(&LOD1378);

HAnimSite1375.addChild(Anchor1377);

HAnimSegment1326.addChild(&HAnimSite1375);

HAnimJoint1325.addChildren(&HAnimSegment1326);

HAnimJoint& HAnimJoint1381 =  HAnimJoint();
HAnimJoint1381.setDEF(CString("hanim_r_thumb1"));
HAnimJoint1381.X3DNode::setName(CString("r_thumb1"));
HAnimJoint1381.setRotation(new float[]{1,0,0,0.270107235459875});
HAnimJoint1381.setCenter(new float[]{-0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment1382 =  HAnimSegment();
HAnimSegment1382.setDEF(CString("hanim_r_thumb_metacarpal"));
HAnimSegment1382.X3DNode::setName(CString("r_thumb_metacarpal"));
TouchSensor& TouchSensor1383 =  TouchSensor();
TouchSensor1383.setDescription(CString("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal"));
HAnimSegment1382.addChild(&TouchSensor1383);

Transform& Transform1384 =  Transform();
Transform1384.setTranslation(new float[]{-0.1924,0.8472,-0.0534});
Shape& Shape1385 =  Shape();
Shape1385.setUSE(CString("HAnimJointShape"));
Transform1384.addChild(&Shape1385);

HAnimSegment1382.addChild(&Transform1384);

Shape& Shape1386 =  Shape();
LineSet& LineSet1387 =  LineSet();
LineSet1387.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1388 =  ColorRGBA();
ColorRGBA1388.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1387.addChild(&ColorRGBA1388);

Coordinate& Coordinate1389 =  Coordinate();
Coordinate1389.setPoint(new float[]{-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246}, 6);
LineSet1387.setCoord(Coordinate1389);

Shape1386.setGeometry(&LineSet1387);

HAnimSegment1382.addChild(&Shape1386);

HAnimJoint1381.addChildren(&HAnimSegment1382);

HAnimJoint& HAnimJoint1390 =  HAnimJoint();
HAnimJoint1390.setDEF(CString("hanim_r_thumb2"));
HAnimJoint1390.X3DNode::setName(CString("r_thumb2"));
HAnimJoint1390.setCenter(new float[]{-0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment1391 =  HAnimSegment();
HAnimSegment1391.setDEF(CString("hanim_r_thumb_proximal"));
HAnimSegment1391.X3DNode::setName(CString("r_thumb_proximal"));
TouchSensor& TouchSensor1392 =  TouchSensor();
TouchSensor1392.setDescription(CString("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal"));
HAnimSegment1391.addChild(&TouchSensor1392);

Transform& Transform1393 =  Transform();
Transform1393.setTranslation(new float[]{-0.1951,0.8226,0.0246});
Shape& Shape1394 =  Shape();
Shape1394.setUSE(CString("HAnimJointShape"));
Transform1393.addChild(&Shape1394);

HAnimSegment1391.addChild(&Transform1393);

Shape& Shape1395 =  Shape();
LineSet& LineSet1396 =  LineSet();
LineSet1396.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1397 =  ColorRGBA();
ColorRGBA1397.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1396.addChild(&ColorRGBA1397);

Coordinate& Coordinate1398 =  Coordinate();
Coordinate1398.setPoint(new float[]{-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464}, 6);
LineSet1396.setCoord(Coordinate1398);

Shape1395.setGeometry(&LineSet1396);

HAnimSegment1391.addChild(&Shape1395);

HAnimJoint1390.addChildren(&HAnimSegment1391);

HAnimJoint& HAnimJoint1399 =  HAnimJoint();
HAnimJoint1399.setDEF(CString("hanim_r_thumb3"));
HAnimJoint1399.X3DNode::setName(CString("r_thumb3"));
HAnimJoint1399.setCenter(new float[]{-0.1955,0.8159,0.0464});
HAnimSegment& HAnimSegment1400 =  HAnimSegment();
HAnimSegment1400.setDEF(CString("hanim_r_thumb_distal"));
HAnimSegment1400.X3DNode::setName(CString("r_thumb_distal"));
TouchSensor& TouchSensor1401 =  TouchSensor();
TouchSensor1401.setDescription(CString("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal"));
HAnimSegment1400.addChild(&TouchSensor1401);

Transform& Transform1402 =  Transform();
Transform1402.setTranslation(new float[]{-0.1955,0.8159,0.0464});
Shape& Shape1403 =  Shape();
Shape1403.setUSE(CString("HAnimJointShape"));
Transform1402.addChild(&Shape1403);

HAnimSegment1400.addChild(&Transform1402);

Shape& Shape1404 =  Shape();
LineSet& LineSet1405 =  LineSet();
LineSet1405.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1406 =  ColorRGBA();
ColorRGBA1406.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1405.addChild(&ColorRGBA1406);

Coordinate& Coordinate1407 =  Coordinate();
Coordinate1407.setPoint(new float[]{-0.1955,0.8159,0.0464,-0.1869,0.809,0.082}, 6);
LineSet1405.setCoord(Coordinate1407);

Shape1404.setGeometry(&LineSet1405);

HAnimSegment1400.addChild(&Shape1404);

HAnimSite& HAnimSite1408 =  HAnimSite();
HAnimSite1408.setDEF(CString("hanim_r_thumb_distal_tip"));
HAnimSite1408.X3DNode::setName(CString("r_thumb_distal_tip"));
HAnimSite1408.setTranslation(new float[]{-0.1869,0.809,0.082});
TouchSensor& TouchSensor1409 =  TouchSensor();
TouchSensor1409.setDescription(CString("HAnimSite r_thumb_distal_tip"));
HAnimSite1408.addChild(&TouchSensor1409);

Shape& Shape1410 =  Shape();
Shape1410.setUSE(CString("HAnimSiteShape"));
HAnimSite1408.addChild(&Shape1410);

HAnimSegment1400.addChild(&HAnimSite1408);

HAnimJoint1399.addChildren(&HAnimSegment1400);

HAnimJoint1390.addChildren(&HAnimJoint1399);

HAnimJoint1381.addChildren(&HAnimJoint1390);

HAnimJoint1325.addChildren(&HAnimJoint1381);

HAnimJoint& HAnimJoint1411 =  HAnimJoint();
HAnimJoint1411.setDEF(CString("hanim_r_index0"));
HAnimJoint1411.X3DNode::setName(CString("r_index0"));
HAnimJoint1411.setCenter(new float[]{-0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment1412 =  HAnimSegment();
HAnimSegment1412.setDEF(CString("hanim_r_index_metacarpal"));
HAnimSegment1412.X3DNode::setName(CString("r_index_metacarpal"));
TouchSensor& TouchSensor1413 =  TouchSensor();
TouchSensor1413.setDescription(CString("HAnimJoint r_index0, HAnimSegment r_index_metacarpal"));
HAnimSegment1412.addChild(&TouchSensor1413);

Transform& Transform1414 =  Transform();
Transform1414.setTranslation(new float[]{-0.1983,0.8024,-0.028});
Shape& Shape1415 =  Shape();
Shape1415.setUSE(CString("HAnimJointShape"));
Transform1414.addChild(&Shape1415);

HAnimSegment1412.addChild(&Transform1414);

Shape& Shape1416 =  Shape();
LineSet& LineSet1417 =  LineSet();
LineSet1417.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1418 =  ColorRGBA();
ColorRGBA1418.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1417.addChild(&ColorRGBA1418);

Coordinate& Coordinate1419 =  Coordinate();
Coordinate1419.setPoint(new float[]{-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028}, 6);
LineSet1417.setCoord(Coordinate1419);

Shape1416.setGeometry(&LineSet1417);

HAnimSegment1412.addChild(&Shape1416);

HAnimJoint1411.addChildren(&HAnimSegment1412);

HAnimJoint& HAnimJoint1420 =  HAnimJoint();
HAnimJoint1420.setDEF(CString("hanim_r_index1"));
HAnimJoint1420.X3DNode::setName(CString("r_index1"));
HAnimJoint1420.setRotation(new float[]{0,0,1.00000000000003,0.111082015766469});
HAnimJoint1420.setCenter(new float[]{-0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment1421 =  HAnimSegment();
HAnimSegment1421.setDEF(CString("hanim_r_index_proximal"));
HAnimSegment1421.X3DNode::setName(CString("r_index_proximal"));
TouchSensor& TouchSensor1422 =  TouchSensor();
TouchSensor1422.setDescription(CString("HAnimJoint r_index1, HAnimSegment r_index_proximal"));
HAnimSegment1421.addChild(&TouchSensor1422);

Transform& Transform1423 =  Transform();
Transform1423.setTranslation(new float[]{-0.1983,0.7815,-0.028});
Shape& Shape1424 =  Shape();
Shape1424.setUSE(CString("HAnimJointShape"));
Transform1423.addChild(&Shape1424);

HAnimSegment1421.addChild(&Transform1423);

Shape& Shape1425 =  Shape();
LineSet& LineSet1426 =  LineSet();
LineSet1426.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1427 =  ColorRGBA();
ColorRGBA1427.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1426.addChild(&ColorRGBA1427);

Coordinate& Coordinate1428 =  Coordinate();
Coordinate1428.setPoint(new float[]{-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248}, 6);
LineSet1426.setCoord(Coordinate1428);

Shape1425.setGeometry(&LineSet1426);

HAnimSegment1421.addChild(&Shape1425);

HAnimJoint1420.addChildren(&HAnimSegment1421);

HAnimJoint& HAnimJoint1429 =  HAnimJoint();
HAnimJoint1429.setDEF(CString("hanim_r_index2"));
HAnimJoint1429.X3DNode::setName(CString("r_index2"));
HAnimJoint1429.setRotation(new float[]{0,0,0.999999999999999,0.391134387386823});
HAnimJoint1429.setCenter(new float[]{-0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment1430 =  HAnimSegment();
HAnimSegment1430.setDEF(CString("hanim_r_index_middle"));
HAnimSegment1430.X3DNode::setName(CString("r_index_middle"));
TouchSensor& TouchSensor1431 =  TouchSensor();
TouchSensor1431.setDescription(CString("HAnimJoint r_index2, HAnimSegment r_index_middle"));
HAnimSegment1430.addChild(&TouchSensor1431);

Transform& Transform1432 =  Transform();
Transform1432.setTranslation(new float[]{-0.2017,0.7363,-0.0248});
Shape& Shape1433 =  Shape();
Shape1433.setUSE(CString("HAnimJointShape"));
Transform1432.addChild(&Shape1433);

HAnimSegment1430.addChild(&Transform1432);

Shape& Shape1434 =  Shape();
LineSet& LineSet1435 =  LineSet();
LineSet1435.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1436 =  ColorRGBA();
ColorRGBA1436.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1435.addChild(&ColorRGBA1436);

Coordinate& Coordinate1437 =  Coordinate();
Coordinate1437.setPoint(new float[]{-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236}, 6);
LineSet1435.setCoord(Coordinate1437);

Shape1434.setGeometry(&LineSet1435);

HAnimSegment1430.addChild(&Shape1434);

HAnimJoint1429.addChildren(&HAnimSegment1430);

HAnimJoint& HAnimJoint1438 =  HAnimJoint();
HAnimJoint1438.setDEF(CString("hanim_r_index3"));
HAnimJoint1438.X3DNode::setName(CString("r_index3"));
HAnimJoint1438.setRotation(new float[]{0,0,0.999999999999997,0.211082015766472});
HAnimJoint1438.setCenter(new float[]{-0.2028,0.7139,-0.0236});
HAnimSegment& HAnimSegment1439 =  HAnimSegment();
HAnimSegment1439.setDEF(CString("hanim_r_index_distal"));
HAnimSegment1439.X3DNode::setName(CString("r_index_distal"));
TouchSensor& TouchSensor1440 =  TouchSensor();
TouchSensor1440.setDescription(CString("HAnimJoint r_index3, HAnimSegment r_index_distal"));
HAnimSegment1439.addChild(&TouchSensor1440);

Transform& Transform1441 =  Transform();
Transform1441.setTranslation(new float[]{-0.2028,0.7139,-0.0236});
Shape& Shape1442 =  Shape();
Shape1442.setUSE(CString("HAnimJointShape"));
Transform1441.addChild(&Shape1442);

HAnimSegment1439.addChild(&Transform1441);

Shape& Shape1443 =  Shape();
LineSet& LineSet1444 =  LineSet();
LineSet1444.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1445 =  ColorRGBA();
ColorRGBA1445.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1444.addChild(&ColorRGBA1445);

Coordinate& Coordinate1446 =  Coordinate();
Coordinate1446.setPoint(new float[]{-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018}, 6);
LineSet1444.setCoord(Coordinate1446);

Shape1443.setGeometry(&LineSet1444);

HAnimSegment1439.addChild(&Shape1443);

Shape& Shape1447 =  Shape();
LineSet& LineSet1448 =  LineSet();
LineSet1448.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1449 =  ColorRGBA();
ColorRGBA1449.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1448.addChild(&ColorRGBA1449);

Coordinate& Coordinate1450 =  Coordinate();
Coordinate1450.setPoint(new float[]{-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423}, 6);
LineSet1448.setCoord(Coordinate1450);

Shape1447.setGeometry(&LineSet1448);

HAnimSegment1439.addChild(&Shape1447);

HAnimSite& HAnimSite1451 =  HAnimSite();
HAnimSite1451.setDEF(CString("hanim_r_index_distal_tip"));
HAnimSite1451.X3DNode::setName(CString("r_index_distal_tip"));
HAnimSite1451.setTranslation(new float[]{-0.198,0.6883,-0.018});
TouchSensor& TouchSensor1452 =  TouchSensor();
TouchSensor1452.setDescription(CString("HAnimSite r_index_distal_tip"));
HAnimSite1451.addChild(&TouchSensor1452);

Shape& Shape1453 =  Shape();
Shape1453.setUSE(CString("HAnimSiteShape"));
HAnimSite1451.addChild(&Shape1453);

HAnimSegment1439.addChild(&HAnimSite1451);

HAnimSite& HAnimSite1454 =  HAnimSite();
HAnimSite1454.setDEF(CString("hanim_r_dactylion_pt"));
HAnimSite1454.X3DNode::setName(CString("r_dactylion_pt"));
HAnimSite1454.setTranslation(new float[]{-0.1941,0.6772,-0.0423});
TouchSensor& TouchSensor1455 =  TouchSensor();
TouchSensor1455.setDescription(CString("HAnimSite r_dactylion"));
HAnimSite1454.addChild(&TouchSensor1455);

Shape& Shape1456 =  Shape();
Shape1456.setUSE(CString("HAnimSiteShape"));
HAnimSite1454.addChild(&Shape1456);

HAnimSegment1439.addChild(&HAnimSite1454);

HAnimJoint1438.addChildren(&HAnimSegment1439);

HAnimJoint1429.addChildren(&HAnimJoint1438);

HAnimJoint1420.addChildren(&HAnimJoint1429);

HAnimJoint1411.addChildren(&HAnimJoint1420);

HAnimJoint1325.addChildren(&HAnimJoint1411);

HAnimJoint& HAnimJoint1457 =  HAnimJoint();
HAnimJoint1457.setDEF(CString("hanim_r_middle0"));
HAnimJoint1457.X3DNode::setName(CString("r_middle0"));
HAnimJoint1457.setCenter(new float[]{-0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment1458 =  HAnimSegment();
HAnimSegment1458.setDEF(CString("hanim_r_middle_metacarpal"));
HAnimSegment1458.X3DNode::setName(CString("r_middle_metacarpal"));
TouchSensor& TouchSensor1459 =  TouchSensor();
TouchSensor1459.setDescription(CString("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal"));
HAnimSegment1458.addChild(&TouchSensor1459);

Transform& Transform1460 =  Transform();
Transform1460.setTranslation(new float[]{-0.1987,0.8029,-0.053});
Shape& Shape1461 =  Shape();
Shape1461.setUSE(CString("HAnimJointShape"));
Transform1460.addChild(&Shape1461);

HAnimSegment1458.addChild(&Transform1460);

Shape& Shape1462 =  Shape();
LineSet& LineSet1463 =  LineSet();
LineSet1463.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1464 =  ColorRGBA();
ColorRGBA1464.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1463.addChild(&ColorRGBA1464);

Coordinate& Coordinate1465 =  Coordinate();
Coordinate1465.setPoint(new float[]{-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053}, 6);
LineSet1463.setCoord(Coordinate1465);

Shape1462.setGeometry(&LineSet1463);

HAnimSegment1458.addChild(&Shape1462);

HAnimJoint1457.addChildren(&HAnimSegment1458);

HAnimJoint& HAnimJoint1466 =  HAnimJoint();
HAnimJoint1466.setDEF(CString("hanim_r_middle1"));
HAnimJoint1466.X3DNode::setName(CString("r_middle1"));
HAnimJoint1466.setRotation(new float[]{0,0,1.00000000000003,0.111082015766469});
HAnimJoint1466.setCenter(new float[]{-0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment1467 =  HAnimSegment();
HAnimSegment1467.setDEF(CString("hanim_r_middle_proximal"));
HAnimSegment1467.X3DNode::setName(CString("r_middle_proximal"));
TouchSensor& TouchSensor1468 =  TouchSensor();
TouchSensor1468.setDescription(CString("HAnimJoint r_middle1, HAnimSegment r_middle_proximal"));
HAnimSegment1467.addChild(&TouchSensor1468);

Transform& Transform1469 =  Transform();
Transform1469.setTranslation(new float[]{-0.1987,0.7818,-0.053});
Shape& Shape1470 =  Shape();
Shape1470.setUSE(CString("HAnimJointShape"));
Transform1469.addChild(&Shape1470);

HAnimSegment1467.addChild(&Transform1469);

Shape& Shape1471 =  Shape();
LineSet& LineSet1472 =  LineSet();
LineSet1472.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1473 =  ColorRGBA();
ColorRGBA1473.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1472.addChild(&ColorRGBA1473);

Coordinate& Coordinate1474 =  Coordinate();
Coordinate1474.setPoint(new float[]{-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503}, 6);
LineSet1472.setCoord(Coordinate1474);

Shape1471.setGeometry(&LineSet1472);

HAnimSegment1467.addChild(&Shape1471);

HAnimJoint1466.addChildren(&HAnimSegment1467);

HAnimJoint& HAnimJoint1475 =  HAnimJoint();
HAnimJoint1475.setDEF(CString("hanim_r_middle2"));
HAnimJoint1475.X3DNode::setName(CString("r_middle2"));
HAnimJoint1475.setRotation(new float[]{0,0,0.999999999999999,0.391134387386823});
HAnimJoint1475.setCenter(new float[]{-0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment1476 =  HAnimSegment();
HAnimSegment1476.setDEF(CString("hanim_r_middle_middle"));
HAnimSegment1476.X3DNode::setName(CString("r_middle_middle"));
TouchSensor& TouchSensor1477 =  TouchSensor();
TouchSensor1477.setDescription(CString("HAnimJoint r_middle2, HAnimSegment r_middle_middle"));
HAnimSegment1476.addChild(&TouchSensor1477);

Transform& Transform1478 =  Transform();
Transform1478.setTranslation(new float[]{-0.2013,0.7273,-0.0503});
Shape& Shape1479 =  Shape();
Shape1479.setUSE(CString("HAnimJointShape"));
Transform1478.addChild(&Shape1479);

HAnimSegment1476.addChild(&Transform1478);

Shape& Shape1480 =  Shape();
LineSet& LineSet1481 =  LineSet();
LineSet1481.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1482 =  ColorRGBA();
ColorRGBA1482.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1481.addChild(&ColorRGBA1482);

Coordinate& Coordinate1483 =  Coordinate();
Coordinate1483.setPoint(new float[]{-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494}, 6);
LineSet1481.setCoord(Coordinate1483);

Shape1480.setGeometry(&LineSet1481);

HAnimSegment1476.addChild(&Shape1480);

HAnimJoint1475.addChildren(&HAnimSegment1476);

HAnimJoint& HAnimJoint1484 =  HAnimJoint();
HAnimJoint1484.setDEF(CString("hanim_r_middle3"));
HAnimJoint1484.X3DNode::setName(CString("r_middle3"));
HAnimJoint1484.setRotation(new float[]{0,0,0.999999999999997,0.211082015766472});
HAnimJoint1484.setCenter(new float[]{-0.2026,0.7011,-0.0494});
HAnimSegment& HAnimSegment1485 =  HAnimSegment();
HAnimSegment1485.setDEF(CString("hanim_r_middle_distal"));
HAnimSegment1485.X3DNode::setName(CString("r_middle_distal"));
TouchSensor& TouchSensor1486 =  TouchSensor();
TouchSensor1486.setDescription(CString("HAnimJoint r_middle3, HAnimSegment r_middle_distal"));
HAnimSegment1485.addChild(&TouchSensor1486);

Transform& Transform1487 =  Transform();
Transform1487.setTranslation(new float[]{-0.2026,0.7011,-0.0494});
Shape& Shape1488 =  Shape();
Shape1488.setUSE(CString("HAnimJointShape"));
Transform1487.addChild(&Shape1488);

HAnimSegment1485.addChild(&Transform1487);

Shape& Shape1489 =  Shape();
LineSet& LineSet1490 =  LineSet();
LineSet1490.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1491 =  ColorRGBA();
ColorRGBA1491.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1490.addChild(&ColorRGBA1491);

Coordinate& Coordinate1492 =  Coordinate();
Coordinate1492.setPoint(new float[]{-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427}, 6);
LineSet1490.setCoord(Coordinate1492);

Shape1489.setGeometry(&LineSet1490);

HAnimSegment1485.addChild(&Shape1489);

HAnimSite& HAnimSite1493 =  HAnimSite();
HAnimSite1493.setDEF(CString("hanim_r_middle_distal_tip"));
HAnimSite1493.X3DNode::setName(CString("r_middle_distal_tip"));
HAnimSite1493.setTranslation(new float[]{-0.1969,0.6758,-0.0427});
TouchSensor& TouchSensor1494 =  TouchSensor();
TouchSensor1494.setDescription(CString("HAnimSite r_middle_distal_tip"));
HAnimSite1493.addChild(&TouchSensor1494);

Shape& Shape1495 =  Shape();
Shape1495.setUSE(CString("HAnimSiteShape"));
HAnimSite1493.addChild(&Shape1495);

HAnimSegment1485.addChild(&HAnimSite1493);

HAnimJoint1484.addChildren(&HAnimSegment1485);

HAnimJoint1475.addChildren(&HAnimJoint1484);

HAnimJoint1466.addChildren(&HAnimJoint1475);

HAnimJoint1457.addChildren(&HAnimJoint1466);

HAnimJoint1325.addChildren(&HAnimJoint1457);

HAnimJoint& HAnimJoint1496 =  HAnimJoint();
HAnimJoint1496.setDEF(CString("hanim_r_ring0"));
HAnimJoint1496.X3DNode::setName(CString("r_ring0"));
HAnimJoint1496.setCenter(new float[]{-0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment1497 =  HAnimSegment();
HAnimSegment1497.setDEF(CString("hanim_r_ring_metacarpal"));
HAnimSegment1497.X3DNode::setName(CString("r_ring_metacarpal"));
TouchSensor& TouchSensor1498 =  TouchSensor();
TouchSensor1498.setDescription(CString("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal"));
HAnimSegment1497.addChild(&TouchSensor1498);

Transform& Transform1499 =  Transform();
Transform1499.setTranslation(new float[]{-0.1956,0.8019,-0.0794});
Shape& Shape1500 =  Shape();
Shape1500.setUSE(CString("HAnimJointShape"));
Transform1499.addChild(&Shape1500);

HAnimSegment1497.addChild(&Transform1499);

Shape& Shape1501 =  Shape();
LineSet& LineSet1502 =  LineSet();
LineSet1502.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1503 =  ColorRGBA();
ColorRGBA1503.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1502.addChild(&ColorRGBA1503);

Coordinate& Coordinate1504 =  Coordinate();
Coordinate1504.setPoint(new float[]{-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794}, 6);
LineSet1502.setCoord(Coordinate1504);

Shape1501.setGeometry(&LineSet1502);

HAnimSegment1497.addChild(&Shape1501);

HAnimJoint1496.addChildren(&HAnimSegment1497);

HAnimJoint& HAnimJoint1505 =  HAnimJoint();
HAnimJoint1505.setDEF(CString("hanim_r_ring1"));
HAnimJoint1505.X3DNode::setName(CString("r_ring1"));
HAnimJoint1505.setRotation(new float[]{0,0,1.00000000000003,0.111082015766469});
HAnimJoint1505.setCenter(new float[]{-0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment1506 =  HAnimSegment();
HAnimSegment1506.setDEF(CString("hanim_r_ring_proximal"));
HAnimSegment1506.X3DNode::setName(CString("r_ring_proximal"));
TouchSensor& TouchSensor1507 =  TouchSensor();
TouchSensor1507.setDescription(CString("HAnimJoint r_ring1, HAnimSegment r_ring_proximal"));
HAnimSegment1506.addChild(&TouchSensor1507);

Transform& Transform1508 =  Transform();
Transform1508.setTranslation(new float[]{-0.1956,0.7815,-0.0794});
Shape& Shape1509 =  Shape();
Shape1509.setUSE(CString("HAnimJointShape"));
Transform1508.addChild(&Shape1509);

HAnimSegment1506.addChild(&Transform1508);

Shape& Shape1510 =  Shape();
LineSet& LineSet1511 =  LineSet();
LineSet1511.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1512 =  ColorRGBA();
ColorRGBA1512.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1511.addChild(&ColorRGBA1512);

Coordinate& Coordinate1513 =  Coordinate();
Coordinate1513.setPoint(new float[]{-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777}, 6);
LineSet1511.setCoord(Coordinate1513);

Shape1510.setGeometry(&LineSet1511);

HAnimSegment1506.addChild(&Shape1510);

HAnimJoint1505.addChildren(&HAnimSegment1506);

HAnimJoint& HAnimJoint1514 =  HAnimJoint();
HAnimJoint1514.setDEF(CString("hanim_r_ring2"));
HAnimJoint1514.X3DNode::setName(CString("r_ring2"));
HAnimJoint1514.setRotation(new float[]{0,0,0.999999999999999,0.391134387386823});
HAnimJoint1514.setCenter(new float[]{-0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment1515 =  HAnimSegment();
HAnimSegment1515.setDEF(CString("hanim_r_ring_middle"));
HAnimSegment1515.X3DNode::setName(CString("r_ring_middle"));
TouchSensor& TouchSensor1516 =  TouchSensor();
TouchSensor1516.setDescription(CString("HAnimJoint r_ring2, HAnimSegment r_ring_middle"));
HAnimSegment1515.addChild(&TouchSensor1516);

Transform& Transform1517 =  Transform();
Transform1517.setTranslation(new float[]{-0.1973,0.7287,-0.0777});
Shape& Shape1518 =  Shape();
Shape1518.setUSE(CString("HAnimJointShape"));
Transform1517.addChild(&Shape1518);

HAnimSegment1515.addChild(&Transform1517);

Shape& Shape1519 =  Shape();
LineSet& LineSet1520 =  LineSet();
LineSet1520.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1521 =  ColorRGBA();
ColorRGBA1521.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1520.addChild(&ColorRGBA1521);

Coordinate& Coordinate1522 =  Coordinate();
Coordinate1522.setPoint(new float[]{-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767}, 6);
LineSet1520.setCoord(Coordinate1522);

Shape1519.setGeometry(&LineSet1520);

HAnimSegment1515.addChild(&Shape1519);

HAnimJoint1514.addChildren(&HAnimSegment1515);

HAnimJoint& HAnimJoint1523 =  HAnimJoint();
HAnimJoint1523.setDEF(CString("hanim_r_ring3"));
HAnimJoint1523.X3DNode::setName(CString("r_ring3"));
HAnimJoint1523.setRotation(new float[]{0,0,0.999999999999997,0.211082015766472});
HAnimJoint1523.setCenter(new float[]{-0.1983,0.7045,-0.0767});
HAnimSegment& HAnimSegment1524 =  HAnimSegment();
HAnimSegment1524.setDEF(CString("hanim_r_ring_distal"));
HAnimSegment1524.X3DNode::setName(CString("r_ring_distal"));
TouchSensor& TouchSensor1525 =  TouchSensor();
TouchSensor1525.setDescription(CString("HAnimJoint r_ring3, HAnimSegment r_ring_distal"));
HAnimSegment1524.addChild(&TouchSensor1525);

Transform& Transform1526 =  Transform();
Transform1526.setTranslation(new float[]{-0.1983,0.7045,-0.0767});
Shape& Shape1527 =  Shape();
Shape1527.setUSE(CString("HAnimJointShape"));
Transform1526.addChild(&Shape1527);

HAnimSegment1524.addChild(&Transform1526);

Shape& Shape1528 =  Shape();
LineSet& LineSet1529 =  LineSet();
LineSet1529.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1530 =  ColorRGBA();
ColorRGBA1530.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1529.addChild(&ColorRGBA1530);

Coordinate& Coordinate1531 =  Coordinate();
Coordinate1531.setPoint(new float[]{-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693}, 6);
LineSet1529.setCoord(Coordinate1531);

Shape1528.setGeometry(&LineSet1529);

HAnimSegment1524.addChild(&Shape1528);

HAnimSite& HAnimSite1532 =  HAnimSite();
HAnimSite1532.setDEF(CString("hanim_r_ring_distal_tip"));
HAnimSite1532.X3DNode::setName(CString("r_ring_distal_tip"));
HAnimSite1532.setTranslation(new float[]{-0.1934,0.6778,-0.0693});
TouchSensor& TouchSensor1533 =  TouchSensor();
TouchSensor1533.setDescription(CString("HAnimSite r_ring_distal_tip"));
HAnimSite1532.addChild(&TouchSensor1533);

Shape& Shape1534 =  Shape();
Shape1534.setUSE(CString("HAnimSiteShape"));
HAnimSite1532.addChild(&Shape1534);

HAnimSegment1524.addChild(&HAnimSite1532);

HAnimJoint1523.addChildren(&HAnimSegment1524);

HAnimJoint1514.addChildren(&HAnimJoint1523);

HAnimJoint1505.addChildren(&HAnimJoint1514);

HAnimJoint1496.addChildren(&HAnimJoint1505);

HAnimJoint1325.addChildren(&HAnimJoint1496);

HAnimJoint& HAnimJoint1535 =  HAnimJoint();
HAnimJoint1535.setDEF(CString("hanim_r_pinky0"));
HAnimJoint1535.X3DNode::setName(CString("r_pinky0"));
HAnimJoint1535.setCenter(new float[]{-0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment1536 =  HAnimSegment();
HAnimSegment1536.setDEF(CString("hanim_r_pinky_metacarpal"));
HAnimSegment1536.X3DNode::setName(CString("r_pinky_metacarpal"));
TouchSensor& TouchSensor1537 =  TouchSensor();
TouchSensor1537.setDescription(CString("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal"));
HAnimSegment1536.addChild(&TouchSensor1537);

Transform& Transform1538 =  Transform();
Transform1538.setTranslation(new float[]{-0.1925,0.8066,-0.1036});
Shape& Shape1539 =  Shape();
Shape1539.setUSE(CString("HAnimJointShape"));
Transform1538.addChild(&Shape1539);

HAnimSegment1536.addChild(&Transform1538);

Shape& Shape1540 =  Shape();
LineSet& LineSet1541 =  LineSet();
LineSet1541.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1542 =  ColorRGBA();
ColorRGBA1542.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1541.addChild(&ColorRGBA1542);

Coordinate& Coordinate1543 =  Coordinate();
Coordinate1543.setPoint(new float[]{-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036}, 6);
LineSet1541.setCoord(Coordinate1543);

Shape1540.setGeometry(&LineSet1541);

HAnimSegment1536.addChild(&Shape1540);

HAnimJoint1535.addChildren(&HAnimSegment1536);

HAnimJoint& HAnimJoint1544 =  HAnimJoint();
HAnimJoint1544.setDEF(CString("hanim_r_pinky1"));
HAnimJoint1544.X3DNode::setName(CString("r_pinky1"));
HAnimJoint1544.setRotation(new float[]{0,0,1.00000000000003,0.111082015766469});
HAnimJoint1544.setCenter(new float[]{-0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment1545 =  HAnimSegment();
HAnimSegment1545.setDEF(CString("hanim_r_pinky_proximal"));
HAnimSegment1545.X3DNode::setName(CString("r_pinky_proximal"));
TouchSensor& TouchSensor1546 =  TouchSensor();
TouchSensor1546.setDescription(CString("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal"));
HAnimSegment1545.addChild(&TouchSensor1546);

Transform& Transform1547 =  Transform();
Transform1547.setTranslation(new float[]{-0.1925,0.7866,-0.1036});
Shape& Shape1548 =  Shape();
Shape1548.setUSE(CString("HAnimJointShape"));
Transform1547.addChild(&Shape1548);

HAnimSegment1545.addChild(&Transform1547);

Shape& Shape1549 =  Shape();
LineSet& LineSet1550 =  LineSet();
LineSet1550.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1551 =  ColorRGBA();
ColorRGBA1551.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1550.addChild(&ColorRGBA1551);

Coordinate& Coordinate1552 =  Coordinate();
Coordinate1552.setPoint(new float[]{-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024}, 6);
LineSet1550.setCoord(Coordinate1552);

Shape1549.setGeometry(&LineSet1550);

HAnimSegment1545.addChild(&Shape1549);

HAnimJoint1544.addChildren(&HAnimSegment1545);

HAnimJoint& HAnimJoint1553 =  HAnimJoint();
HAnimJoint1553.setDEF(CString("hanim_r_pinky2"));
HAnimJoint1553.X3DNode::setName(CString("r_pinky2"));
HAnimJoint1553.setRotation(new float[]{0,0,0.999999999999999,0.391134387386823});
HAnimJoint1553.setCenter(new float[]{-0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment1554 =  HAnimSegment();
HAnimSegment1554.setDEF(CString("hanim_r_pinky_middle"));
HAnimSegment1554.X3DNode::setName(CString("r_pinky_middle"));
TouchSensor& TouchSensor1555 =  TouchSensor();
TouchSensor1555.setDescription(CString("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle"));
HAnimSegment1554.addChild(&TouchSensor1555);

Transform& Transform1556 =  Transform();
Transform1556.setTranslation(new float[]{-0.1938,0.7452,-0.1024});
Shape& Shape1557 =  Shape();
Shape1557.setUSE(CString("HAnimJointShape"));
Transform1556.addChild(&Shape1557);

HAnimSegment1554.addChild(&Transform1556);

Shape& Shape1558 =  Shape();
LineSet& LineSet1559 =  LineSet();
LineSet1559.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1560 =  ColorRGBA();
ColorRGBA1560.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1559.addChild(&ColorRGBA1560);

Coordinate& Coordinate1561 =  Coordinate();
Coordinate1561.setPoint(new float[]{-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017}, 6);
LineSet1559.setCoord(Coordinate1561);

Shape1558.setGeometry(&LineSet1559);

HAnimSegment1554.addChild(&Shape1558);

HAnimJoint1553.addChildren(&HAnimSegment1554);

HAnimJoint& HAnimJoint1562 =  HAnimJoint();
HAnimJoint1562.setDEF(CString("hanim_r_pinky3"));
HAnimJoint1562.X3DNode::setName(CString("r_pinky3"));
HAnimJoint1562.setRotation(new float[]{0,0,0.999999999999997,0.211082015766472});
HAnimJoint1562.setCenter(new float[]{-0.1948,0.7277,-0.1017});
HAnimSegment& HAnimSegment1563 =  HAnimSegment();
HAnimSegment1563.setDEF(CString("hanim_r_pinky_distal"));
HAnimSegment1563.X3DNode::setName(CString("r_pinky_distal"));
TouchSensor& TouchSensor1564 =  TouchSensor();
TouchSensor1564.setDescription(CString("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal"));
HAnimSegment1563.addChild(&TouchSensor1564);

Transform& Transform1565 =  Transform();
Transform1565.setTranslation(new float[]{-0.1948,0.7277,-0.1017});
Shape& Shape1566 =  Shape();
Shape1566.setUSE(CString("HAnimJointShape"));
Transform1565.addChild(&Shape1566);

HAnimSegment1563.addChild(&Transform1565);

Shape& Shape1567 =  Shape();
LineSet& LineSet1568 =  LineSet();
LineSet1568.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1569 =  ColorRGBA();
ColorRGBA1569.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1568.addChild(&ColorRGBA1569);

Coordinate& Coordinate1570 =  Coordinate();
Coordinate1570.setPoint(new float[]{-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949}, 6);
LineSet1568.setCoord(Coordinate1570);

Shape1567.setGeometry(&LineSet1568);

HAnimSegment1563.addChild(&Shape1567);

HAnimSite& HAnimSite1571 =  HAnimSite();
HAnimSite1571.setDEF(CString("hanim_r_pinky_distal_tip"));
HAnimSite1571.X3DNode::setName(CString("r_pinky_distal_tip"));
HAnimSite1571.setTranslation(new float[]{-0.1938,0.7035,-0.0949});
TouchSensor& TouchSensor1572 =  TouchSensor();
TouchSensor1572.setDescription(CString("HAnimSite r_pinky_distal_tip"));
HAnimSite1571.addChild(&TouchSensor1572);

Shape& Shape1573 =  Shape();
Shape1573.setUSE(CString("HAnimSiteShape"));
HAnimSite1571.addChild(&Shape1573);

HAnimSegment1563.addChild(&HAnimSite1571);

HAnimJoint1562.addChildren(&HAnimSegment1563);

HAnimJoint1553.addChildren(&HAnimJoint1562);

HAnimJoint1544.addChildren(&HAnimJoint1553);

HAnimJoint1535.addChildren(&HAnimJoint1544);

HAnimJoint1325.addChildren(&HAnimJoint1535);

HAnimJoint1288.addChildren(&HAnimJoint1325);

HAnimJoint1272.addChildren(&HAnimJoint1288);

HAnimJoint1263.addChildren(&HAnimJoint1272);

HAnimJoint1226.addChildren(&HAnimJoint1263);

HAnimJoint594.addChildren(&HAnimJoint1226);

HAnimJoint585.addChildren(&HAnimJoint594);

HAnimJoint576.addChildren(&HAnimJoint585);

HAnimJoint567.addChildren(&HAnimJoint576);

HAnimJoint558.addChildren(&HAnimJoint567);

HAnimJoint549.addChildren(&HAnimJoint558);

HAnimJoint540.addChildren(&HAnimJoint549);

HAnimJoint531.addChildren(&HAnimJoint540);

HAnimJoint508.addChildren(&HAnimJoint531);

HAnimJoint492.addChildren(&HAnimJoint508);

HAnimJoint483.addChildren(&HAnimJoint492);

HAnimJoint474.addChildren(&HAnimJoint483);

HAnimJoint465.addChildren(&HAnimJoint474);

HAnimJoint435.addChildren(&HAnimJoint465);

HAnimJoint426.addChildren(&HAnimJoint435);

HAnimJoint417.addChildren(&HAnimJoint426);

HAnimJoint394.addChildren(&HAnimJoint417);

HAnimJoint44.addChildren(&HAnimJoint394);

HAnimHumanoid43.setSkeleton(&HAnimJoint44);

HAnimJoint& HAnimJoint1574 =  HAnimJoint();
HAnimJoint1574.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid43.setJoints(&HAnimJoint1574);

HAnimJoint& HAnimJoint1575 =  HAnimJoint();
HAnimJoint1575.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid43.setJoints(&HAnimJoint1575);

HAnimJoint& HAnimJoint1576 =  HAnimJoint();
HAnimJoint1576.setUSE(CString("hanim_vl5"));
HAnimHumanoid43.setJoints(&HAnimJoint1576);

HAnimJoint& HAnimJoint1577 =  HAnimJoint();
HAnimJoint1577.setUSE(CString("hanim_vl4"));
HAnimHumanoid43.setJoints(&HAnimJoint1577);

HAnimJoint& HAnimJoint1578 =  HAnimJoint();
HAnimJoint1578.setUSE(CString("hanim_vl3"));
HAnimHumanoid43.setJoints(&HAnimJoint1578);

HAnimJoint& HAnimJoint1579 =  HAnimJoint();
HAnimJoint1579.setUSE(CString("hanim_vl2"));
HAnimHumanoid43.setJoints(&HAnimJoint1579);

HAnimJoint& HAnimJoint1580 =  HAnimJoint();
HAnimJoint1580.setUSE(CString("hanim_vl1"));
HAnimHumanoid43.setJoints(&HAnimJoint1580);

HAnimJoint& HAnimJoint1581 =  HAnimJoint();
HAnimJoint1581.setUSE(CString("hanim_vt12"));
HAnimHumanoid43.setJoints(&HAnimJoint1581);

HAnimJoint& HAnimJoint1582 =  HAnimJoint();
HAnimJoint1582.setUSE(CString("hanim_vt11"));
HAnimHumanoid43.setJoints(&HAnimJoint1582);

HAnimJoint& HAnimJoint1583 =  HAnimJoint();
HAnimJoint1583.setUSE(CString("hanim_vt10"));
HAnimHumanoid43.setJoints(&HAnimJoint1583);

HAnimJoint& HAnimJoint1584 =  HAnimJoint();
HAnimJoint1584.setUSE(CString("hanim_vt9"));
HAnimHumanoid43.setJoints(&HAnimJoint1584);

HAnimJoint& HAnimJoint1585 =  HAnimJoint();
HAnimJoint1585.setUSE(CString("hanim_vt8"));
HAnimHumanoid43.setJoints(&HAnimJoint1585);

HAnimJoint& HAnimJoint1586 =  HAnimJoint();
HAnimJoint1586.setUSE(CString("hanim_vt7"));
HAnimHumanoid43.setJoints(&HAnimJoint1586);

HAnimJoint& HAnimJoint1587 =  HAnimJoint();
HAnimJoint1587.setUSE(CString("hanim_vt6"));
HAnimHumanoid43.setJoints(&HAnimJoint1587);

HAnimJoint& HAnimJoint1588 =  HAnimJoint();
HAnimJoint1588.setUSE(CString("hanim_vt5"));
HAnimHumanoid43.setJoints(&HAnimJoint1588);

HAnimJoint& HAnimJoint1589 =  HAnimJoint();
HAnimJoint1589.setUSE(CString("hanim_vt4"));
HAnimHumanoid43.setJoints(&HAnimJoint1589);

HAnimJoint& HAnimJoint1590 =  HAnimJoint();
HAnimJoint1590.setUSE(CString("hanim_vt3"));
HAnimHumanoid43.setJoints(&HAnimJoint1590);

HAnimJoint& HAnimJoint1591 =  HAnimJoint();
HAnimJoint1591.setUSE(CString("hanim_vt2"));
HAnimHumanoid43.setJoints(&HAnimJoint1591);

HAnimJoint& HAnimJoint1592 =  HAnimJoint();
HAnimJoint1592.setUSE(CString("hanim_vt1"));
HAnimHumanoid43.setJoints(&HAnimJoint1592);

HAnimJoint& HAnimJoint1593 =  HAnimJoint();
HAnimJoint1593.setUSE(CString("hanim_vc7"));
HAnimHumanoid43.setJoints(&HAnimJoint1593);

HAnimJoint& HAnimJoint1594 =  HAnimJoint();
HAnimJoint1594.setUSE(CString("hanim_vc6"));
HAnimHumanoid43.setJoints(&HAnimJoint1594);

HAnimJoint& HAnimJoint1595 =  HAnimJoint();
HAnimJoint1595.setUSE(CString("hanim_vc5"));
HAnimHumanoid43.setJoints(&HAnimJoint1595);

HAnimJoint& HAnimJoint1596 =  HAnimJoint();
HAnimJoint1596.setUSE(CString("hanim_vc4"));
HAnimHumanoid43.setJoints(&HAnimJoint1596);

HAnimJoint& HAnimJoint1597 =  HAnimJoint();
HAnimJoint1597.setUSE(CString("hanim_vc3"));
HAnimHumanoid43.setJoints(&HAnimJoint1597);

HAnimJoint& HAnimJoint1598 =  HAnimJoint();
HAnimJoint1598.setUSE(CString("hanim_vc2"));
HAnimHumanoid43.setJoints(&HAnimJoint1598);

HAnimJoint& HAnimJoint1599 =  HAnimJoint();
HAnimJoint1599.setUSE(CString("hanim_vc1"));
HAnimHumanoid43.setJoints(&HAnimJoint1599);

HAnimJoint& HAnimJoint1600 =  HAnimJoint();
HAnimJoint1600.setUSE(CString("hanim_skullbase"));
HAnimHumanoid43.setJoints(&HAnimJoint1600);

HAnimJoint& HAnimJoint1601 =  HAnimJoint();
HAnimJoint1601.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid43.setJoints(&HAnimJoint1601);

HAnimJoint& HAnimJoint1602 =  HAnimJoint();
HAnimJoint1602.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1602);

HAnimJoint& HAnimJoint1603 =  HAnimJoint();
HAnimJoint1603.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1603);

HAnimJoint& HAnimJoint1604 =  HAnimJoint();
HAnimJoint1604.setUSE(CString("hanim_l_ankle"));
HAnimHumanoid43.setJoints(&HAnimJoint1604);

HAnimJoint& HAnimJoint1605 =  HAnimJoint();
HAnimJoint1605.setUSE(CString("hanim_r_ankle"));
HAnimHumanoid43.setJoints(&HAnimJoint1605);

HAnimJoint& HAnimJoint1606 =  HAnimJoint();
HAnimJoint1606.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint1606);

HAnimJoint& HAnimJoint1607 =  HAnimJoint();
HAnimJoint1607.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint1607);

HAnimJoint& HAnimJoint1608 =  HAnimJoint();
HAnimJoint1608.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1608);

HAnimJoint& HAnimJoint1609 =  HAnimJoint();
HAnimJoint1609.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1609);

HAnimJoint& HAnimJoint1610 =  HAnimJoint();
HAnimJoint1610.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1610);

HAnimJoint& HAnimJoint1611 =  HAnimJoint();
HAnimJoint1611.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1611);

HAnimJoint& HAnimJoint1612 =  HAnimJoint();
HAnimJoint1612.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1612);

HAnimJoint& HAnimJoint1613 =  HAnimJoint();
HAnimJoint1613.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1613);

HAnimJoint& HAnimJoint1614 =  HAnimJoint();
HAnimJoint1614.setUSE(CString("hanim_l_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint1614);

HAnimJoint& HAnimJoint1615 =  HAnimJoint();
HAnimJoint1615.setUSE(CString("hanim_r_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint1615);

HAnimJoint& HAnimJoint1616 =  HAnimJoint();
HAnimJoint1616.setUSE(CString("hanim_l_index0"));
HAnimHumanoid43.setJoints(&HAnimJoint1616);

HAnimJoint& HAnimJoint1617 =  HAnimJoint();
HAnimJoint1617.setUSE(CString("hanim_r_index0"));
HAnimHumanoid43.setJoints(&HAnimJoint1617);

HAnimJoint& HAnimJoint1618 =  HAnimJoint();
HAnimJoint1618.setUSE(CString("hanim_l_index1"));
HAnimHumanoid43.setJoints(&HAnimJoint1618);

HAnimJoint& HAnimJoint1619 =  HAnimJoint();
HAnimJoint1619.setUSE(CString("hanim_r_index1"));
HAnimHumanoid43.setJoints(&HAnimJoint1619);

HAnimJoint& HAnimJoint1620 =  HAnimJoint();
HAnimJoint1620.setUSE(CString("hanim_l_index2"));
HAnimHumanoid43.setJoints(&HAnimJoint1620);

HAnimJoint& HAnimJoint1621 =  HAnimJoint();
HAnimJoint1621.setUSE(CString("hanim_r_index2"));
HAnimHumanoid43.setJoints(&HAnimJoint1621);

HAnimJoint& HAnimJoint1622 =  HAnimJoint();
HAnimJoint1622.setUSE(CString("hanim_l_index3"));
HAnimHumanoid43.setJoints(&HAnimJoint1622);

HAnimJoint& HAnimJoint1623 =  HAnimJoint();
HAnimJoint1623.setUSE(CString("hanim_r_index3"));
HAnimHumanoid43.setJoints(&HAnimJoint1623);

HAnimJoint& HAnimJoint1624 =  HAnimJoint();
HAnimJoint1624.setUSE(CString("hanim_l_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint1624);

HAnimJoint& HAnimJoint1625 =  HAnimJoint();
HAnimJoint1625.setUSE(CString("hanim_r_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint1625);

HAnimJoint& HAnimJoint1626 =  HAnimJoint();
HAnimJoint1626.setUSE(CString("hanim_l_metatarsal"));
HAnimHumanoid43.setJoints(&HAnimJoint1626);

HAnimJoint& HAnimJoint1627 =  HAnimJoint();
HAnimJoint1627.setUSE(CString("hanim_r_metatarsal"));
HAnimHumanoid43.setJoints(&HAnimJoint1627);

HAnimJoint& HAnimJoint1628 =  HAnimJoint();
HAnimJoint1628.setUSE(CString("hanim_l_middle0"));
HAnimHumanoid43.setJoints(&HAnimJoint1628);

HAnimJoint& HAnimJoint1629 =  HAnimJoint();
HAnimJoint1629.setUSE(CString("hanim_r_middle0"));
HAnimHumanoid43.setJoints(&HAnimJoint1629);

HAnimJoint& HAnimJoint1630 =  HAnimJoint();
HAnimJoint1630.setUSE(CString("hanim_l_middle1"));
HAnimHumanoid43.setJoints(&HAnimJoint1630);

HAnimJoint& HAnimJoint1631 =  HAnimJoint();
HAnimJoint1631.setUSE(CString("hanim_r_middle1"));
HAnimHumanoid43.setJoints(&HAnimJoint1631);

HAnimJoint& HAnimJoint1632 =  HAnimJoint();
HAnimJoint1632.setUSE(CString("hanim_l_middle2"));
HAnimHumanoid43.setJoints(&HAnimJoint1632);

HAnimJoint& HAnimJoint1633 =  HAnimJoint();
HAnimJoint1633.setUSE(CString("hanim_r_middle2"));
HAnimHumanoid43.setJoints(&HAnimJoint1633);

HAnimJoint& HAnimJoint1634 =  HAnimJoint();
HAnimJoint1634.setUSE(CString("hanim_l_middle3"));
HAnimHumanoid43.setJoints(&HAnimJoint1634);

HAnimJoint& HAnimJoint1635 =  HAnimJoint();
HAnimJoint1635.setUSE(CString("hanim_r_middle3"));
HAnimHumanoid43.setJoints(&HAnimJoint1635);

HAnimJoint& HAnimJoint1636 =  HAnimJoint();
HAnimJoint1636.setUSE(CString("hanim_l_midtarsal"));
HAnimHumanoid43.setJoints(&HAnimJoint1636);

HAnimJoint& HAnimJoint1637 =  HAnimJoint();
HAnimJoint1637.setUSE(CString("hanim_r_midtarsal"));
HAnimHumanoid43.setJoints(&HAnimJoint1637);

HAnimJoint& HAnimJoint1638 =  HAnimJoint();
HAnimJoint1638.setUSE(CString("hanim_l_pinky0"));
HAnimHumanoid43.setJoints(&HAnimJoint1638);

HAnimJoint& HAnimJoint1639 =  HAnimJoint();
HAnimJoint1639.setUSE(CString("hanim_r_pinky0"));
HAnimHumanoid43.setJoints(&HAnimJoint1639);

HAnimJoint& HAnimJoint1640 =  HAnimJoint();
HAnimJoint1640.setUSE(CString("hanim_l_pinky1"));
HAnimHumanoid43.setJoints(&HAnimJoint1640);

HAnimJoint& HAnimJoint1641 =  HAnimJoint();
HAnimJoint1641.setUSE(CString("hanim_r_pinky1"));
HAnimHumanoid43.setJoints(&HAnimJoint1641);

HAnimJoint& HAnimJoint1642 =  HAnimJoint();
HAnimJoint1642.setUSE(CString("hanim_l_pinky2"));
HAnimHumanoid43.setJoints(&HAnimJoint1642);

HAnimJoint& HAnimJoint1643 =  HAnimJoint();
HAnimJoint1643.setUSE(CString("hanim_r_pinky2"));
HAnimHumanoid43.setJoints(&HAnimJoint1643);

HAnimJoint& HAnimJoint1644 =  HAnimJoint();
HAnimJoint1644.setUSE(CString("hanim_l_pinky3"));
HAnimHumanoid43.setJoints(&HAnimJoint1644);

HAnimJoint& HAnimJoint1645 =  HAnimJoint();
HAnimJoint1645.setUSE(CString("hanim_r_pinky3"));
HAnimHumanoid43.setJoints(&HAnimJoint1645);

HAnimJoint& HAnimJoint1646 =  HAnimJoint();
HAnimJoint1646.setUSE(CString("hanim_l_ring0"));
HAnimHumanoid43.setJoints(&HAnimJoint1646);

HAnimJoint& HAnimJoint1647 =  HAnimJoint();
HAnimJoint1647.setUSE(CString("hanim_r_ring0"));
HAnimHumanoid43.setJoints(&HAnimJoint1647);

HAnimJoint& HAnimJoint1648 =  HAnimJoint();
HAnimJoint1648.setUSE(CString("hanim_l_ring1"));
HAnimHumanoid43.setJoints(&HAnimJoint1648);

HAnimJoint& HAnimJoint1649 =  HAnimJoint();
HAnimJoint1649.setUSE(CString("hanim_r_ring1"));
HAnimHumanoid43.setJoints(&HAnimJoint1649);

HAnimJoint& HAnimJoint1650 =  HAnimJoint();
HAnimJoint1650.setUSE(CString("hanim_l_ring2"));
HAnimHumanoid43.setJoints(&HAnimJoint1650);

HAnimJoint& HAnimJoint1651 =  HAnimJoint();
HAnimJoint1651.setUSE(CString("hanim_r_ring2"));
HAnimHumanoid43.setJoints(&HAnimJoint1651);

HAnimJoint& HAnimJoint1652 =  HAnimJoint();
HAnimJoint1652.setUSE(CString("hanim_l_ring3"));
HAnimHumanoid43.setJoints(&HAnimJoint1652);

HAnimJoint& HAnimJoint1653 =  HAnimJoint();
HAnimJoint1653.setUSE(CString("hanim_r_ring3"));
HAnimHumanoid43.setJoints(&HAnimJoint1653);

HAnimJoint& HAnimJoint1654 =  HAnimJoint();
HAnimJoint1654.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint1654);

HAnimJoint& HAnimJoint1655 =  HAnimJoint();
HAnimJoint1655.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint1655);

HAnimJoint& HAnimJoint1656 =  HAnimJoint();
HAnimJoint1656.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1656);

HAnimJoint& HAnimJoint1657 =  HAnimJoint();
HAnimJoint1657.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1657);

HAnimJoint& HAnimJoint1658 =  HAnimJoint();
HAnimJoint1658.setUSE(CString("hanim_l_subtalar"));
HAnimHumanoid43.setJoints(&HAnimJoint1658);

HAnimJoint& HAnimJoint1659 =  HAnimJoint();
HAnimJoint1659.setUSE(CString("hanim_r_subtalar"));
HAnimHumanoid43.setJoints(&HAnimJoint1659);

HAnimJoint& HAnimJoint1660 =  HAnimJoint();
HAnimJoint1660.setUSE(CString("hanim_l_thumb1"));
HAnimHumanoid43.setJoints(&HAnimJoint1660);

HAnimJoint& HAnimJoint1661 =  HAnimJoint();
HAnimJoint1661.setUSE(CString("hanim_r_thumb1"));
HAnimHumanoid43.setJoints(&HAnimJoint1661);

HAnimJoint& HAnimJoint1662 =  HAnimJoint();
HAnimJoint1662.setUSE(CString("hanim_l_thumb2"));
HAnimHumanoid43.setJoints(&HAnimJoint1662);

HAnimJoint& HAnimJoint1663 =  HAnimJoint();
HAnimJoint1663.setUSE(CString("hanim_r_thumb2"));
HAnimHumanoid43.setJoints(&HAnimJoint1663);

HAnimJoint& HAnimJoint1664 =  HAnimJoint();
HAnimJoint1664.setUSE(CString("hanim_l_thumb3"));
HAnimHumanoid43.setJoints(&HAnimJoint1664);

HAnimJoint& HAnimJoint1665 =  HAnimJoint();
HAnimJoint1665.setUSE(CString("hanim_r_thumb3"));
HAnimHumanoid43.setJoints(&HAnimJoint1665);

HAnimJoint& HAnimJoint1666 =  HAnimJoint();
HAnimJoint1666.setUSE(CString("hanim_l_wrist"));
HAnimHumanoid43.setJoints(&HAnimJoint1666);

HAnimJoint& HAnimJoint1667 =  HAnimJoint();
HAnimJoint1667.setUSE(CString("hanim_r_wrist"));
HAnimHumanoid43.setJoints(&HAnimJoint1667);

HAnimSegment& HAnimSegment1668 =  HAnimSegment();
HAnimSegment1668.setUSE(CString("hanim_pelvis"));
HAnimHumanoid43.setSegments(&HAnimSegment1668);

HAnimSegment& HAnimSegment1669 =  HAnimSegment();
HAnimSegment1669.setUSE(CString("hanim_skull"));
HAnimHumanoid43.setSegments(&HAnimSegment1669);

HAnimSegment& HAnimSegment1670 =  HAnimSegment();
HAnimSegment1670.setUSE(CString("hanim_jaw"));
HAnimHumanoid43.setSegments(&HAnimSegment1670);

HAnimSegment& HAnimSegment1671 =  HAnimSegment();
HAnimSegment1671.setUSE(CString("hanim_c1"));
HAnimHumanoid43.setSegments(&HAnimSegment1671);

HAnimSegment& HAnimSegment1672 =  HAnimSegment();
HAnimSegment1672.setUSE(CString("hanim_c2"));
HAnimHumanoid43.setSegments(&HAnimSegment1672);

HAnimSegment& HAnimSegment1673 =  HAnimSegment();
HAnimSegment1673.setUSE(CString("hanim_c3"));
HAnimHumanoid43.setSegments(&HAnimSegment1673);

HAnimSegment& HAnimSegment1674 =  HAnimSegment();
HAnimSegment1674.setUSE(CString("hanim_c4"));
HAnimHumanoid43.setSegments(&HAnimSegment1674);

HAnimSegment& HAnimSegment1675 =  HAnimSegment();
HAnimSegment1675.setUSE(CString("hanim_c5"));
HAnimHumanoid43.setSegments(&HAnimSegment1675);

HAnimSegment& HAnimSegment1676 =  HAnimSegment();
HAnimSegment1676.setUSE(CString("hanim_c6"));
HAnimHumanoid43.setSegments(&HAnimSegment1676);

HAnimSegment& HAnimSegment1677 =  HAnimSegment();
HAnimSegment1677.setUSE(CString("hanim_c7"));
HAnimHumanoid43.setSegments(&HAnimSegment1677);

HAnimSegment& HAnimSegment1678 =  HAnimSegment();
HAnimSegment1678.setUSE(CString("hanim_t1"));
HAnimHumanoid43.setSegments(&HAnimSegment1678);

HAnimSegment& HAnimSegment1679 =  HAnimSegment();
HAnimSegment1679.setUSE(CString("hanim_t2"));
HAnimHumanoid43.setSegments(&HAnimSegment1679);

HAnimSegment& HAnimSegment1680 =  HAnimSegment();
HAnimSegment1680.setUSE(CString("hanim_t3"));
HAnimHumanoid43.setSegments(&HAnimSegment1680);

HAnimSegment& HAnimSegment1681 =  HAnimSegment();
HAnimSegment1681.setUSE(CString("hanim_t4"));
HAnimHumanoid43.setSegments(&HAnimSegment1681);

HAnimSegment& HAnimSegment1682 =  HAnimSegment();
HAnimSegment1682.setUSE(CString("hanim_t5"));
HAnimHumanoid43.setSegments(&HAnimSegment1682);

HAnimSegment& HAnimSegment1683 =  HAnimSegment();
HAnimSegment1683.setUSE(CString("hanim_t6"));
HAnimHumanoid43.setSegments(&HAnimSegment1683);

HAnimSegment& HAnimSegment1684 =  HAnimSegment();
HAnimSegment1684.setUSE(CString("hanim_t7"));
HAnimHumanoid43.setSegments(&HAnimSegment1684);

HAnimSegment& HAnimSegment1685 =  HAnimSegment();
HAnimSegment1685.setUSE(CString("hanim_t8"));
HAnimHumanoid43.setSegments(&HAnimSegment1685);

HAnimSegment& HAnimSegment1686 =  HAnimSegment();
HAnimSegment1686.setUSE(CString("hanim_t9"));
HAnimHumanoid43.setSegments(&HAnimSegment1686);

HAnimSegment& HAnimSegment1687 =  HAnimSegment();
HAnimSegment1687.setUSE(CString("hanim_t10"));
HAnimHumanoid43.setSegments(&HAnimSegment1687);

HAnimSegment& HAnimSegment1688 =  HAnimSegment();
HAnimSegment1688.setUSE(CString("hanim_t11"));
HAnimHumanoid43.setSegments(&HAnimSegment1688);

HAnimSegment& HAnimSegment1689 =  HAnimSegment();
HAnimSegment1689.setUSE(CString("hanim_t12"));
HAnimHumanoid43.setSegments(&HAnimSegment1689);

HAnimSegment& HAnimSegment1690 =  HAnimSegment();
HAnimSegment1690.setUSE(CString("hanim_l1"));
HAnimHumanoid43.setSegments(&HAnimSegment1690);

HAnimSegment& HAnimSegment1691 =  HAnimSegment();
HAnimSegment1691.setUSE(CString("hanim_l2"));
HAnimHumanoid43.setSegments(&HAnimSegment1691);

HAnimSegment& HAnimSegment1692 =  HAnimSegment();
HAnimSegment1692.setUSE(CString("hanim_l3"));
HAnimHumanoid43.setSegments(&HAnimSegment1692);

HAnimSegment& HAnimSegment1693 =  HAnimSegment();
HAnimSegment1693.setUSE(CString("hanim_l4"));
HAnimHumanoid43.setSegments(&HAnimSegment1693);

HAnimSegment& HAnimSegment1694 =  HAnimSegment();
HAnimSegment1694.setUSE(CString("hanim_l5"));
HAnimHumanoid43.setSegments(&HAnimSegment1694);

HAnimSegment& HAnimSegment1695 =  HAnimSegment();
HAnimSegment1695.setUSE(CString("hanim_sacrum"));
HAnimHumanoid43.setSegments(&HAnimSegment1695);

HAnimSegment& HAnimSegment1696 =  HAnimSegment();
HAnimSegment1696.setUSE(CString("hanim_l_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment1696);

HAnimSegment& HAnimSegment1697 =  HAnimSegment();
HAnimSegment1697.setUSE(CString("hanim_r_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment1697);

HAnimSegment& HAnimSegment1698 =  HAnimSegment();
HAnimSegment1698.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid43.setSegments(&HAnimSegment1698);

HAnimSegment& HAnimSegment1699 =  HAnimSegment();
HAnimSegment1699.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid43.setSegments(&HAnimSegment1699);

HAnimSegment& HAnimSegment1700 =  HAnimSegment();
HAnimSegment1700.setUSE(CString("hanim_l_eyeball"));
HAnimHumanoid43.setSegments(&HAnimSegment1700);

HAnimSegment& HAnimSegment1701 =  HAnimSegment();
HAnimSegment1701.setUSE(CString("hanim_r_eyeball"));
HAnimHumanoid43.setSegments(&HAnimSegment1701);

HAnimSegment& HAnimSegment1702 =  HAnimSegment();
HAnimSegment1702.setUSE(CString("hanim_l_eyebrow"));
HAnimHumanoid43.setSegments(&HAnimSegment1702);

HAnimSegment& HAnimSegment1703 =  HAnimSegment();
HAnimSegment1703.setUSE(CString("hanim_r_eyebrow"));
HAnimHumanoid43.setSegments(&HAnimSegment1703);

HAnimSegment& HAnimSegment1704 =  HAnimSegment();
HAnimSegment1704.setUSE(CString("hanim_l_eyelid"));
HAnimHumanoid43.setSegments(&HAnimSegment1704);

HAnimSegment& HAnimSegment1705 =  HAnimSegment();
HAnimSegment1705.setUSE(CString("hanim_r_eyelid"));
HAnimHumanoid43.setSegments(&HAnimSegment1705);

HAnimSegment& HAnimSegment1706 =  HAnimSegment();
HAnimSegment1706.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment1706);

HAnimSegment& HAnimSegment1707 =  HAnimSegment();
HAnimSegment1707.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment1707);

HAnimSegment& HAnimSegment1708 =  HAnimSegment();
HAnimSegment1708.setUSE(CString("hanim_l_forefoot"));
HAnimHumanoid43.setSegments(&HAnimSegment1708);

HAnimSegment& HAnimSegment1709 =  HAnimSegment();
HAnimSegment1709.setUSE(CString("hanim_r_forefoot"));
HAnimHumanoid43.setSegments(&HAnimSegment1709);

HAnimSegment& HAnimSegment1710 =  HAnimSegment();
HAnimSegment1710.setUSE(CString("hanim_l_hand"));
HAnimHumanoid43.setSegments(&HAnimSegment1710);

HAnimSegment& HAnimSegment1711 =  HAnimSegment();
HAnimSegment1711.setUSE(CString("hanim_r_hand"));
HAnimHumanoid43.setSegments(&HAnimSegment1711);

HAnimSegment& HAnimSegment1712 =  HAnimSegment();
HAnimSegment1712.setUSE(CString("hanim_l_hindfoot"));
HAnimHumanoid43.setSegments(&HAnimSegment1712);

HAnimSegment& HAnimSegment1713 =  HAnimSegment();
HAnimSegment1713.setUSE(CString("hanim_r_hindfoot"));
HAnimHumanoid43.setSegments(&HAnimSegment1713);

HAnimSegment& HAnimSegment1714 =  HAnimSegment();
HAnimSegment1714.setUSE(CString("hanim_l_index_distal"));
HAnimHumanoid43.setSegments(&HAnimSegment1714);

HAnimSegment& HAnimSegment1715 =  HAnimSegment();
HAnimSegment1715.setUSE(CString("hanim_r_index_distal"));
HAnimHumanoid43.setSegments(&HAnimSegment1715);

HAnimSegment& HAnimSegment1716 =  HAnimSegment();
HAnimSegment1716.setUSE(CString("hanim_l_index_metacarpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1716);

HAnimSegment& HAnimSegment1717 =  HAnimSegment();
HAnimSegment1717.setUSE(CString("hanim_r_index_metacarpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1717);

HAnimSegment& HAnimSegment1718 =  HAnimSegment();
HAnimSegment1718.setUSE(CString("hanim_l_index_middle"));
HAnimHumanoid43.setSegments(&HAnimSegment1718);

HAnimSegment& HAnimSegment1719 =  HAnimSegment();
HAnimSegment1719.setUSE(CString("hanim_r_index_middle"));
HAnimHumanoid43.setSegments(&HAnimSegment1719);

HAnimSegment& HAnimSegment1720 =  HAnimSegment();
HAnimSegment1720.setUSE(CString("hanim_l_index_proximal"));
HAnimHumanoid43.setSegments(&HAnimSegment1720);

HAnimSegment& HAnimSegment1721 =  HAnimSegment();
HAnimSegment1721.setUSE(CString("hanim_r_index_proximal"));
HAnimHumanoid43.setSegments(&HAnimSegment1721);

HAnimSegment& HAnimSegment1722 =  HAnimSegment();
HAnimSegment1722.setUSE(CString("hanim_l_middistal"));
HAnimHumanoid43.setSegments(&HAnimSegment1722);

HAnimSegment& HAnimSegment1723 =  HAnimSegment();
HAnimSegment1723.setUSE(CString("hanim_r_middistal"));
HAnimHumanoid43.setSegments(&HAnimSegment1723);

HAnimSegment& HAnimSegment1724 =  HAnimSegment();
HAnimSegment1724.setUSE(CString("hanim_l_middle_distal"));
HAnimHumanoid43.setSegments(&HAnimSegment1724);

HAnimSegment& HAnimSegment1725 =  HAnimSegment();
HAnimSegment1725.setUSE(CString("hanim_r_middle_distal"));
HAnimHumanoid43.setSegments(&HAnimSegment1725);

HAnimSegment& HAnimSegment1726 =  HAnimSegment();
HAnimSegment1726.setUSE(CString("hanim_l_middle_metacarpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1726);

HAnimSegment& HAnimSegment1727 =  HAnimSegment();
HAnimSegment1727.setUSE(CString("hanim_r_middle_metacarpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1727);

HAnimSegment& HAnimSegment1728 =  HAnimSegment();
HAnimSegment1728.setUSE(CString("hanim_l_middle_middle"));
HAnimHumanoid43.setSegments(&HAnimSegment1728);

HAnimSegment& HAnimSegment1729 =  HAnimSegment();
HAnimSegment1729.setUSE(CString("hanim_r_middle_middle"));
HAnimHumanoid43.setSegments(&HAnimSegment1729);

HAnimSegment& HAnimSegment1730 =  HAnimSegment();
HAnimSegment1730.setUSE(CString("hanim_l_middle_proximal"));
HAnimHumanoid43.setSegments(&HAnimSegment1730);

HAnimSegment& HAnimSegment1731 =  HAnimSegment();
HAnimSegment1731.setUSE(CString("hanim_r_middle_proximal"));
HAnimHumanoid43.setSegments(&HAnimSegment1731);

HAnimSegment& HAnimSegment1732 =  HAnimSegment();
HAnimSegment1732.setUSE(CString("hanim_l_midproximal"));
HAnimHumanoid43.setSegments(&HAnimSegment1732);

HAnimSegment& HAnimSegment1733 =  HAnimSegment();
HAnimSegment1733.setUSE(CString("hanim_r_midproximal"));
HAnimHumanoid43.setSegments(&HAnimSegment1733);

HAnimSegment& HAnimSegment1734 =  HAnimSegment();
HAnimSegment1734.setUSE(CString("hanim_l_pinky_distal"));
HAnimHumanoid43.setSegments(&HAnimSegment1734);

HAnimSegment& HAnimSegment1735 =  HAnimSegment();
HAnimSegment1735.setUSE(CString("hanim_r_pinky_distal"));
HAnimHumanoid43.setSegments(&HAnimSegment1735);

HAnimSegment& HAnimSegment1736 =  HAnimSegment();
HAnimSegment1736.setUSE(CString("hanim_l_pinky_metacarpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1736);

HAnimSegment& HAnimSegment1737 =  HAnimSegment();
HAnimSegment1737.setUSE(CString("hanim_r_pinky_metacarpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1737);

HAnimSegment& HAnimSegment1738 =  HAnimSegment();
HAnimSegment1738.setUSE(CString("hanim_l_pinky_middle"));
HAnimHumanoid43.setSegments(&HAnimSegment1738);

HAnimSegment& HAnimSegment1739 =  HAnimSegment();
HAnimSegment1739.setUSE(CString("hanim_r_pinky_middle"));
HAnimHumanoid43.setSegments(&HAnimSegment1739);

HAnimSegment& HAnimSegment1740 =  HAnimSegment();
HAnimSegment1740.setUSE(CString("hanim_l_pinky_proximal"));
HAnimHumanoid43.setSegments(&HAnimSegment1740);

HAnimSegment& HAnimSegment1741 =  HAnimSegment();
HAnimSegment1741.setUSE(CString("hanim_r_pinky_proximal"));
HAnimHumanoid43.setSegments(&HAnimSegment1741);

HAnimSegment& HAnimSegment1742 =  HAnimSegment();
HAnimSegment1742.setUSE(CString("hanim_l_ring_distal"));
HAnimHumanoid43.setSegments(&HAnimSegment1742);

HAnimSegment& HAnimSegment1743 =  HAnimSegment();
HAnimSegment1743.setUSE(CString("hanim_r_ring_distal"));
HAnimHumanoid43.setSegments(&HAnimSegment1743);

HAnimSegment& HAnimSegment1744 =  HAnimSegment();
HAnimSegment1744.setUSE(CString("hanim_l_ring_metacarpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1744);

HAnimSegment& HAnimSegment1745 =  HAnimSegment();
HAnimSegment1745.setUSE(CString("hanim_r_ring_metacarpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1745);

HAnimSegment& HAnimSegment1746 =  HAnimSegment();
HAnimSegment1746.setUSE(CString("hanim_l_ring_middle"));
HAnimHumanoid43.setSegments(&HAnimSegment1746);

HAnimSegment& HAnimSegment1747 =  HAnimSegment();
HAnimSegment1747.setUSE(CString("hanim_r_ring_middle"));
HAnimHumanoid43.setSegments(&HAnimSegment1747);

HAnimSegment& HAnimSegment1748 =  HAnimSegment();
HAnimSegment1748.setUSE(CString("hanim_l_ring_proximal"));
HAnimHumanoid43.setSegments(&HAnimSegment1748);

HAnimSegment& HAnimSegment1749 =  HAnimSegment();
HAnimSegment1749.setUSE(CString("hanim_r_ring_proximal"));
HAnimHumanoid43.setSegments(&HAnimSegment1749);

HAnimSegment& HAnimSegment1750 =  HAnimSegment();
HAnimSegment1750.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid43.setSegments(&HAnimSegment1750);

HAnimSegment& HAnimSegment1751 =  HAnimSegment();
HAnimSegment1751.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid43.setSegments(&HAnimSegment1751);

HAnimSegment& HAnimSegment1752 =  HAnimSegment();
HAnimSegment1752.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment1752);

HAnimSegment& HAnimSegment1753 =  HAnimSegment();
HAnimSegment1753.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment1753);

HAnimSegment& HAnimSegment1754 =  HAnimSegment();
HAnimSegment1754.setUSE(CString("hanim_l_thumb_distal"));
HAnimHumanoid43.setSegments(&HAnimSegment1754);

HAnimSegment& HAnimSegment1755 =  HAnimSegment();
HAnimSegment1755.setUSE(CString("hanim_r_thumb_distal"));
HAnimHumanoid43.setSegments(&HAnimSegment1755);

HAnimSegment& HAnimSegment1756 =  HAnimSegment();
HAnimSegment1756.setUSE(CString("hanim_l_thumb_metacarpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1756);

HAnimSegment& HAnimSegment1757 =  HAnimSegment();
HAnimSegment1757.setUSE(CString("hanim_r_thumb_metacarpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1757);

HAnimSegment& HAnimSegment1758 =  HAnimSegment();
HAnimSegment1758.setUSE(CString("hanim_l_thumb_proximal"));
HAnimHumanoid43.setSegments(&HAnimSegment1758);

HAnimSegment& HAnimSegment1759 =  HAnimSegment();
HAnimSegment1759.setUSE(CString("hanim_r_thumb_proximal"));
HAnimHumanoid43.setSegments(&HAnimSegment1759);

HAnimSegment& HAnimSegment1760 =  HAnimSegment();
HAnimSegment1760.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment1760);

HAnimSegment& HAnimSegment1761 =  HAnimSegment();
HAnimSegment1761.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment1761);

HAnimSite& HAnimSite1762 =  HAnimSite();
HAnimSite1762.setUSE(CString("hanim_crotch_pt"));
HAnimHumanoid43.setSites(&HAnimSite1762);

HAnimSite& HAnimSite1763 =  HAnimSite();
HAnimSite1763.setUSE(CString("hanim_skull_tip"));
HAnimHumanoid43.setSites(&HAnimSite1763);

HAnimSite& HAnimSite1764 =  HAnimSite();
HAnimSite1764.setUSE(CString("hanim_sellion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1764);

HAnimSite& HAnimSite1765 =  HAnimSite();
HAnimSite1765.setUSE(CString("hanim_supramenton_pt"));
HAnimHumanoid43.setSites(&HAnimSite1765);

HAnimSite& HAnimSite1766 =  HAnimSite();
HAnimSite1766.setUSE(CString("hanim_nuchale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1766);

HAnimSite& HAnimSite1767 =  HAnimSite();
HAnimSite1767.setUSE(CString("hanim_suprasternale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1767);

HAnimSite& HAnimSite1768 =  HAnimSite();
HAnimSite1768.setUSE(CString("hanim_cervicale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1768);

HAnimSite& HAnimSite1769 =  HAnimSite();
HAnimSite1769.setUSE(CString("hanim_substernale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1769);

HAnimSite& HAnimSite1770 =  HAnimSite();
HAnimSite1770.setUSE(CString("hanim_rib10_midspine_pt"));
HAnimHumanoid43.setSites(&HAnimSite1770);

HAnimSite& HAnimSite1771 =  HAnimSite();
HAnimSite1771.setUSE(CString("hanim_waist_preferred_post_pt"));
HAnimHumanoid43.setSites(&HAnimSite1771);

HAnimSite& HAnimSite1772 =  HAnimSite();
HAnimSite1772.setUSE(CString("hanim_navel_pt"));
HAnimHumanoid43.setSites(&HAnimSite1772);

HAnimSite& HAnimSite1773 =  HAnimSite();
HAnimSite1773.setUSE(CString("hanim_l_acromion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1773);

HAnimSite& HAnimSite1774 =  HAnimSite();
HAnimSite1774.setUSE(CString("hanim_r_acromion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1774);

HAnimSite& HAnimSite1775 =  HAnimSite();
HAnimSite1775.setUSE(CString("hanim_r_asis_pt"));
HAnimHumanoid43.setSites(&HAnimSite1775);

HAnimSite& HAnimSite1776 =  HAnimSite();
HAnimSite1776.setUSE(CString("hanim_l_asis_pt"));
HAnimHumanoid43.setSites(&HAnimSite1776);

HAnimSite& HAnimSite1777 =  HAnimSite();
HAnimSite1777.setUSE(CString("hanim_l_axilla_ant_pt"));
HAnimHumanoid43.setSites(&HAnimSite1777);

HAnimSite& HAnimSite1778 =  HAnimSite();
HAnimSite1778.setUSE(CString("hanim_r_axilla_ant_pt"));
HAnimHumanoid43.setSites(&HAnimSite1778);

HAnimSite& HAnimSite1779 =  HAnimSite();
HAnimSite1779.setUSE(CString("hanim_l_axilla_post_pt"));
HAnimHumanoid43.setSites(&HAnimSite1779);

HAnimSite& HAnimSite1780 =  HAnimSite();
HAnimSite1780.setUSE(CString("hanim_r_axilla_post_pt"));
HAnimHumanoid43.setSites(&HAnimSite1780);

HAnimSite& HAnimSite1781 =  HAnimSite();
HAnimSite1781.setUSE(CString("hanim_l_calcaneous_post_pt"));
HAnimHumanoid43.setSites(&HAnimSite1781);

HAnimSite& HAnimSite1782 =  HAnimSite();
HAnimSite1782.setUSE(CString("hanim_r_calcaneous_post_pt"));
HAnimHumanoid43.setSites(&HAnimSite1782);

HAnimSite& HAnimSite1783 =  HAnimSite();
HAnimSite1783.setUSE(CString("hanim_l_clavicale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1783);

HAnimSite& HAnimSite1784 =  HAnimSite();
HAnimSite1784.setUSE(CString("hanim_r_clavicale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1784);

HAnimSite& HAnimSite1785 =  HAnimSite();
HAnimSite1785.setUSE(CString("hanim_l_dactylion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1785);

HAnimSite& HAnimSite1786 =  HAnimSite();
HAnimSite1786.setUSE(CString("hanim_r_dactylion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1786);

HAnimSite& HAnimSite1787 =  HAnimSite();
HAnimSite1787.setUSE(CString("hanim_l_digit2_pt"));
HAnimHumanoid43.setSites(&HAnimSite1787);

HAnimSite& HAnimSite1788 =  HAnimSite();
HAnimSite1788.setUSE(CString("hanim_r_digit2_pt"));
HAnimHumanoid43.setSites(&HAnimSite1788);

HAnimSite& HAnimSite1789 =  HAnimSite();
HAnimSite1789.setUSE(CString("hanim_l_femoral_lateral_epicn_pt"));
HAnimHumanoid43.setSites(&HAnimSite1789);

HAnimSite& HAnimSite1790 =  HAnimSite();
HAnimSite1790.setUSE(CString("hanim_r_femoral_lateral_epicn_pt"));
HAnimHumanoid43.setSites(&HAnimSite1790);

HAnimSite& HAnimSite1791 =  HAnimSite();
HAnimSite1791.setUSE(CString("hanim_l_femoral_medial_epicn_pt"));
HAnimHumanoid43.setSites(&HAnimSite1791);

HAnimSite& HAnimSite1792 =  HAnimSite();
HAnimSite1792.setUSE(CString("hanim_r_femoral_medial_epicn_pt"));
HAnimHumanoid43.setSites(&HAnimSite1792);

HAnimSite& HAnimSite1793 =  HAnimSite();
HAnimSite1793.setUSE(CString("hanim_l_forefoot_tip"));
HAnimHumanoid43.setSites(&HAnimSite1793);

HAnimSite& HAnimSite1794 =  HAnimSite();
HAnimSite1794.setUSE(CString("hanim_r_forefoot_tip"));
HAnimHumanoid43.setSites(&HAnimSite1794);

HAnimSite& HAnimSite1795 =  HAnimSite();
HAnimSite1795.setUSE(CString("hanim_r_gonion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1795);

HAnimSite& HAnimSite1796 =  HAnimSite();
HAnimSite1796.setUSE(CString("hanim_l_gonion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1796);

HAnimSite& HAnimSite1797 =  HAnimSite();
HAnimSite1797.setUSE(CString("hanim_l_humeral_lateral_epicn_pt"));
HAnimHumanoid43.setSites(&HAnimSite1797);

HAnimSite& HAnimSite1798 =  HAnimSite();
HAnimSite1798.setUSE(CString("hanim_r_humeral_lateral_epicn_pt"));
HAnimHumanoid43.setSites(&HAnimSite1798);

HAnimSite& HAnimSite1799 =  HAnimSite();
HAnimSite1799.setUSE(CString("hanim_l_humeral_medial_epicn_pt"));
HAnimHumanoid43.setSites(&HAnimSite1799);

HAnimSite& HAnimSite1800 =  HAnimSite();
HAnimSite1800.setUSE(CString("hanim_r_humeral_medial_epicn_pt"));
HAnimHumanoid43.setSites(&HAnimSite1800);

HAnimSite& HAnimSite1801 =  HAnimSite();
HAnimSite1801.setUSE(CString("hanim_r_iliocristale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1801);

HAnimSite& HAnimSite1802 =  HAnimSite();
HAnimSite1802.setUSE(CString("hanim_l_iliocristale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1802);

HAnimSite& HAnimSite1803 =  HAnimSite();
HAnimSite1803.setUSE(CString("hanim_l_index_distal_tip"));
HAnimHumanoid43.setSites(&HAnimSite1803);

HAnimSite& HAnimSite1804 =  HAnimSite();
HAnimSite1804.setUSE(CString("hanim_r_index_distal_tip"));
HAnimHumanoid43.setSites(&HAnimSite1804);

HAnimSite& HAnimSite1805 =  HAnimSite();
HAnimSite1805.setUSE(CString("hanim_r_infraorbitale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1805);

HAnimSite& HAnimSite1806 =  HAnimSite();
HAnimSite1806.setUSE(CString("hanim_l_infraorbitale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1806);

HAnimSite& HAnimSite1807 =  HAnimSite();
HAnimSite1807.setUSE(CString("hanim_l_knee_crease_pt"));
HAnimHumanoid43.setSites(&HAnimSite1807);

HAnimSite& HAnimSite1808 =  HAnimSite();
HAnimSite1808.setUSE(CString("hanim_r_knee_crease_pt"));
HAnimHumanoid43.setSites(&HAnimSite1808);

HAnimSite& HAnimSite1809 =  HAnimSite();
HAnimSite1809.setUSE(CString("hanim_l_lateral_malleolus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1809);

HAnimSite& HAnimSite1810 =  HAnimSite();
HAnimSite1810.setUSE(CString("hanim_r_lateral_malleolus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1810);

HAnimSite& HAnimSite1811 =  HAnimSite();
HAnimSite1811.setUSE(CString("hanim_l_medial_malleolus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1811);

HAnimSite& HAnimSite1812 =  HAnimSite();
HAnimSite1812.setUSE(CString("hanim_r_medial_malleolus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1812);

HAnimSite& HAnimSite1813 =  HAnimSite();
HAnimSite1813.setUSE(CString("hanim_l_metacarpal_pha2_pt"));
HAnimHumanoid43.setSites(&HAnimSite1813);

HAnimSite& HAnimSite1814 =  HAnimSite();
HAnimSite1814.setUSE(CString("hanim_r_metacarpal_pha2_pt"));
HAnimHumanoid43.setSites(&HAnimSite1814);

HAnimSite& HAnimSite1815 =  HAnimSite();
HAnimSite1815.setUSE(CString("hanim_l_metacarpal_pha5_pt"));
HAnimHumanoid43.setSites(&HAnimSite1815);

HAnimSite& HAnimSite1816 =  HAnimSite();
HAnimSite1816.setUSE(CString("hanim_r_metacarpal_pha5_pt"));
HAnimHumanoid43.setSites(&HAnimSite1816);

HAnimSite& HAnimSite1817 =  HAnimSite();
HAnimSite1817.setUSE(CString("hanim_l_metatarsal_pha1_pt"));
HAnimHumanoid43.setSites(&HAnimSite1817);

HAnimSite& HAnimSite1818 =  HAnimSite();
HAnimSite1818.setUSE(CString("hanim_r_metatarsal_pha1_pt"));
HAnimHumanoid43.setSites(&HAnimSite1818);

HAnimSite& HAnimSite1819 =  HAnimSite();
HAnimSite1819.setUSE(CString("hanim_l_metatarsal_pha5_pt"));
HAnimHumanoid43.setSites(&HAnimSite1819);

HAnimSite& HAnimSite1820 =  HAnimSite();
HAnimSite1820.setUSE(CString("hanim_r_metatarsal_pha5_pt"));
HAnimHumanoid43.setSites(&HAnimSite1820);

HAnimSite& HAnimSite1821 =  HAnimSite();
HAnimSite1821.setUSE(CString("hanim_l_middle_distal_tip"));
HAnimHumanoid43.setSites(&HAnimSite1821);

HAnimSite& HAnimSite1822 =  HAnimSite();
HAnimSite1822.setUSE(CString("hanim_r_middle_distal_tip"));
HAnimHumanoid43.setSites(&HAnimSite1822);

HAnimSite& HAnimSite1823 =  HAnimSite();
HAnimSite1823.setUSE(CString("hanim_r_neck_base_pt"));
HAnimHumanoid43.setSites(&HAnimSite1823);

HAnimSite& HAnimSite1824 =  HAnimSite();
HAnimSite1824.setUSE(CString("hanim_l_neck_base_pt"));
HAnimHumanoid43.setSites(&HAnimSite1824);

HAnimSite& HAnimSite1825 =  HAnimSite();
HAnimSite1825.setUSE(CString("hanim_l_olecranon_pt"));
HAnimHumanoid43.setSites(&HAnimSite1825);

HAnimSite& HAnimSite1826 =  HAnimSite();
HAnimSite1826.setUSE(CString("hanim_r_olecranon_pt"));
HAnimHumanoid43.setSites(&HAnimSite1826);

HAnimSite& HAnimSite1827 =  HAnimSite();
HAnimSite1827.setUSE(CString("hanim_l_pinky_distal_tip"));
HAnimHumanoid43.setSites(&HAnimSite1827);

HAnimSite& HAnimSite1828 =  HAnimSite();
HAnimSite1828.setUSE(CString("hanim_r_pinky_distal_tip"));
HAnimHumanoid43.setSites(&HAnimSite1828);

HAnimSite& HAnimSite1829 =  HAnimSite();
HAnimSite1829.setUSE(CString("hanim_r_psis_pt"));
HAnimHumanoid43.setSites(&HAnimSite1829);

HAnimSite& HAnimSite1830 =  HAnimSite();
HAnimSite1830.setUSE(CString("hanim_l_psis_pt"));
HAnimHumanoid43.setSites(&HAnimSite1830);

HAnimSite& HAnimSite1831 =  HAnimSite();
HAnimSite1831.setUSE(CString("hanim_l_radial_styloid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1831);

HAnimSite& HAnimSite1832 =  HAnimSite();
HAnimSite1832.setUSE(CString("hanim_r_radial_styloid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1832);

HAnimSite& HAnimSite1833 =  HAnimSite();
HAnimSite1833.setUSE(CString("hanim_l_radiale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1833);

HAnimSite& HAnimSite1834 =  HAnimSite();
HAnimSite1834.setUSE(CString("hanim_r_radiale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1834);

HAnimSite& HAnimSite1835 =  HAnimSite();
HAnimSite1835.setUSE(CString("hanim_r_rib10_pt"));
HAnimHumanoid43.setSites(&HAnimSite1835);

HAnimSite& HAnimSite1836 =  HAnimSite();
HAnimSite1836.setUSE(CString("hanim_l_rib10_pt"));
HAnimHumanoid43.setSites(&HAnimSite1836);

HAnimSite& HAnimSite1837 =  HAnimSite();
HAnimSite1837.setUSE(CString("hanim_l_ring_distal_tip"));
HAnimHumanoid43.setSites(&HAnimSite1837);

HAnimSite& HAnimSite1838 =  HAnimSite();
HAnimSite1838.setUSE(CString("hanim_r_ring_distal_tip"));
HAnimHumanoid43.setSites(&HAnimSite1838);

HAnimSite& HAnimSite1839 =  HAnimSite();
HAnimSite1839.setUSE(CString("hanim_temporomandibular_l_site_pt"));
HAnimHumanoid43.setSites(&HAnimSite1839);

HAnimSite& HAnimSite1840 =  HAnimSite();
HAnimSite1840.setUSE(CString("hanim_temporomandibular_r_site_pt"));
HAnimHumanoid43.setSites(&HAnimSite1840);

HAnimSite& HAnimSite1841 =  HAnimSite();
HAnimSite1841.setUSE(CString("hanim_l_sphyrion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1841);

HAnimSite& HAnimSite1842 =  HAnimSite();
HAnimSite1842.setUSE(CString("hanim_r_sphyrion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1842);

HAnimSite& HAnimSite1843 =  HAnimSite();
HAnimSite1843.setUSE(CString("hanim_r_thelion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1843);

HAnimSite& HAnimSite1844 =  HAnimSite();
HAnimSite1844.setUSE(CString("hanim_l_thelion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1844);

HAnimSite& HAnimSite1845 =  HAnimSite();
HAnimSite1845.setUSE(CString("hanim_l_thumb_distal_tip"));
HAnimHumanoid43.setSites(&HAnimSite1845);

HAnimSite& HAnimSite1846 =  HAnimSite();
HAnimSite1846.setUSE(CString("hanim_r_thumb_distal_tip"));
HAnimHumanoid43.setSites(&HAnimSite1846);

HAnimSite& HAnimSite1847 =  HAnimSite();
HAnimSite1847.setUSE(CString("hanim_r_tragion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1847);

HAnimSite& HAnimSite1848 =  HAnimSite();
HAnimSite1848.setUSE(CString("hanim_l_tragion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1848);

HAnimSite& HAnimSite1849 =  HAnimSite();
HAnimSite1849.setUSE(CString("hanim_r_trochanterion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1849);

HAnimSite& HAnimSite1850 =  HAnimSite();
HAnimSite1850.setUSE(CString("hanim_l_trochanterion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1850);

HAnimSite& HAnimSite1851 =  HAnimSite();
HAnimSite1851.setUSE(CString("hanim_l_ulnar_styloid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1851);

HAnimSite& HAnimSite1852 =  HAnimSite();
HAnimSite1852.setUSE(CString("hanim_r_ulnar_styloid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1852);

HAnimSite& HAnimSite1853 =  HAnimSite();
HAnimSite1853.setDEF(CString("hanim_l_inclined_view"));
HAnimSite1853.X3DNode::setName(CString("l_inclined_view"));
HAnimSite1853.setTranslation(new float[]{1.62,1.05,2.06});
HAnimSite1853.setRotation(new float[]{-0.113,0.993,0.0347,0.671});
Viewpoint& Viewpoint1854 =  Viewpoint();
Viewpoint1854.setDEF(CString("hanim_l_inclined_viewpoint"));
Viewpoint1854.setDescription(CString("left inclined"));
Viewpoint1854.setPosition(new float[]{0,0,0});
HAnimSite1853.addChild(&Viewpoint1854);

Anchor& Anchor1855 =  Anchor();
Anchor1855.setDescription(CString("HAnimSite Viewpoint hanim_l_inclined_view"));
Anchor1855.setUrl(new CString[]{CString("#hanim_l_inclined_viewpoint")}, 1);
LOD& LOD1856 =  LOD();
LOD1856.setForceTransitions(True);
LOD1856.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1857 =  WorldInfo();
WorldInfo1857.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1856.addChildren(&WorldInfo1857);

Shape& Shape1858 =  Shape();
Shape1858.setUSE(CString("HAnimSiteViewpointShape"));
LOD1856.addChildren(Shape1858);

Anchor1855.addChild(&LOD1856);

HAnimSite1853.addChild(Anchor1855);

HAnimHumanoid43.setViewpoints(&HAnimSite1853);

HAnimSite& HAnimSite1859 =  HAnimSite();
HAnimSite1859.setDEF(CString("hanim_r_inclined_view"));
HAnimSite1859.X3DNode::setName(CString("r_inclined_view"));
HAnimSite1859.setTranslation(new float[]{-1.62,1.05,2.06});
HAnimSite1859.setRotation(new float[]{-0.113,-0.993,0.0347,0.671});
Viewpoint& Viewpoint1860 =  Viewpoint();
Viewpoint1860.setDEF(CString("hanim_r_inclined_viewpoint"));
Viewpoint1860.setDescription(CString("right inclined"));
Viewpoint1860.setPosition(new float[]{0,0,0});
Viewpoint1860.setCenterOfRotation(new float[]{0,0.9,0});
HAnimSite1859.addChild(&Viewpoint1860);

Anchor& Anchor1861 =  Anchor();
Anchor1861.setDescription(CString("HAnimSite Viewpoint hanim_r_inclined_view"));
Anchor1861.setUrl(new CString[]{CString("#hanim_r_inclined_viewpoint")}, 1);
LOD& LOD1862 =  LOD();
LOD1862.setForceTransitions(True);
LOD1862.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1863 =  WorldInfo();
WorldInfo1863.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1862.addChildren(&WorldInfo1863);

Shape& Shape1864 =  Shape();
Shape1864.setUSE(CString("HAnimSiteViewpointShape"));
LOD1862.addChildren(Shape1864);

Anchor1861.addChild(&LOD1862);

HAnimSite1859.addChild(Anchor1861);

HAnimHumanoid43.setViewpoints(&HAnimSite1859);

HAnimSite& HAnimSite1865 =  HAnimSite();
HAnimSite1865.setDEF(CString("hanim_front_view"));
HAnimSite1865.X3DNode::setName(CString("front_view"));
HAnimSite1865.setTranslation(new float[]{0,0.85,2.58});
Viewpoint& Viewpoint1866 =  Viewpoint();
Viewpoint1866.setDEF(CString("hanim_front_viewpoint"));
Viewpoint1866.setDescription(CString("front"));
Viewpoint1866.setPosition(new float[]{0,0,0});
Viewpoint1866.setCenterOfRotation(new float[]{0,0.9,0});
HAnimSite1865.addChild(&Viewpoint1866);

Anchor& Anchor1867 =  Anchor();
Anchor1867.setDescription(CString("HAnimSite Viewpoint hanim_front_view"));
Anchor1867.setUrl(new CString[]{CString("#hanim_front_viewpoint")}, 1);
LOD& LOD1868 =  LOD();
LOD1868.setForceTransitions(True);
LOD1868.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1869 =  WorldInfo();
WorldInfo1869.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1868.addChildren(&WorldInfo1869);

Shape& Shape1870 =  Shape();
Shape1870.setUSE(CString("HAnimSiteViewpointShape"));
LOD1868.addChildren(Shape1870);

Anchor1867.addChild(&LOD1868);

HAnimSite1865.addChild(Anchor1867);

HAnimHumanoid43.setViewpoints(&HAnimSite1865);

HAnimSite& HAnimSite1871 =  HAnimSite();
HAnimSite1871.setDEF(CString("hanim_back_view"));
HAnimSite1871.X3DNode::setName(CString("back_view"));
HAnimSite1871.setTranslation(new float[]{0,0.85,-2.58});
HAnimSite1871.setRotation(new float[]{0,1,0,3.14});
Viewpoint& Viewpoint1872 =  Viewpoint();
Viewpoint1872.setDEF(CString("hanim_back_viewpoint"));
Viewpoint1872.setDescription(CString("back"));
Viewpoint1872.setPosition(new float[]{0,0,0});
Viewpoint1872.setCenterOfRotation(new float[]{0,0.9,0});
HAnimSite1871.addChild(&Viewpoint1872);

Anchor& Anchor1873 =  Anchor();
Anchor1873.setDescription(CString("HAnimSite Viewpoint hanim_back_view"));
Anchor1873.setUrl(new CString[]{CString("#hanim_back_viewpoint")}, 1);
LOD& LOD1874 =  LOD();
LOD1874.setForceTransitions(True);
LOD1874.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1875 =  WorldInfo();
WorldInfo1875.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1874.addChildren(&WorldInfo1875);

Shape& Shape1876 =  Shape();
Shape1876.setUSE(CString("HAnimSiteViewpointShape"));
LOD1874.addChildren(Shape1876);

Anchor1873.addChild(&LOD1874);

HAnimSite1871.addChild(Anchor1873);

HAnimHumanoid43.setViewpoints(&HAnimSite1871);

HAnimSite& HAnimSite1877 =  HAnimSite();
HAnimSite1877.setDEF(CString("hanim_l_side_view"));
HAnimSite1877.X3DNode::setName(CString("l_side_view"));
HAnimSite1877.setTranslation(new float[]{2.6,0.854,0});
HAnimSite1877.setRotation(new float[]{0,1,0,1.5708});
Viewpoint& Viewpoint1878 =  Viewpoint();
Viewpoint1878.setDEF(CString("hanim_l_side_viewpoint"));
Viewpoint1878.setDescription(CString("left side"));
Viewpoint1878.setPosition(new float[]{0,0,0});
Viewpoint1878.setCenterOfRotation(new float[]{0,0.9,0});
HAnimSite1877.addChild(&Viewpoint1878);

Anchor& Anchor1879 =  Anchor();
Anchor1879.setDescription(CString("HAnimSite Viewpoint hanim_l_side_view"));
Anchor1879.setUrl(new CString[]{CString("#hanim_l_side_viewpoint")}, 1);
LOD& LOD1880 =  LOD();
LOD1880.setForceTransitions(True);
LOD1880.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1881 =  WorldInfo();
WorldInfo1881.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1880.addChildren(&WorldInfo1881);

Shape& Shape1882 =  Shape();
Shape1882.setUSE(CString("HAnimSiteViewpointShape"));
LOD1880.addChildren(Shape1882);

Anchor1879.addChild(&LOD1880);

HAnimSite1877.addChild(Anchor1879);

HAnimHumanoid43.setViewpoints(&HAnimSite1877);

HAnimSite& HAnimSite1883 =  HAnimSite();
HAnimSite1883.setDEF(CString("hanim_Top_view"));
HAnimSite1883.X3DNode::setName(CString("Top_view"));
HAnimSite1883.setTranslation(new float[]{0,3.5,0});
HAnimSite1883.setRotation(new float[]{1,0,0,-1.57});
Viewpoint& Viewpoint1884 =  Viewpoint();
Viewpoint1884.setDEF(CString("hanim_Top_viewpoint"));
Viewpoint1884.setDescription(CString("Top"));
Viewpoint1884.setPosition(new float[]{0,0,0});
Viewpoint1884.setCenterOfRotation(new float[]{0,0.9,0});
HAnimSite1883.addChild(&Viewpoint1884);

Anchor& Anchor1885 =  Anchor();
Anchor1885.setDescription(CString("HAnimSite Viewpoint hanim_Top_view"));
Anchor1885.setUrl(new CString[]{CString("#hanim_Top_viewpoint")}, 1);
LOD& LOD1886 =  LOD();
LOD1886.setForceTransitions(True);
LOD1886.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1887 =  WorldInfo();
WorldInfo1887.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1886.addChildren(&WorldInfo1887);

Shape& Shape1888 =  Shape();
Shape1888.setUSE(CString("HAnimSiteViewpointShape"));
LOD1886.addChildren(Shape1888);

Anchor1885.addChild(&LOD1886);

HAnimSite1883.addChild(Anchor1885);

HAnimHumanoid43.setViewpoints(&HAnimSite1883);

HAnimSite& HAnimSite1889 =  HAnimSite();
HAnimSite1889.setDEF(CString("hanim_front_close_view"));
HAnimSite1889.X3DNode::setName(CString("front_close_view"));
HAnimSite1889.setTranslation(new float[]{0,0.854,1.575});
Viewpoint& Viewpoint1890 =  Viewpoint();
Viewpoint1890.setDEF(CString("hanim_front_close_viewpoint"));
Viewpoint1890.setDescription(CString("front close"));
Viewpoint1890.setPosition(new float[]{0,0,0});
Viewpoint1890.setCenterOfRotation(new float[]{0,0,1.575});
HAnimSite1889.addChild(&Viewpoint1890);

Anchor& Anchor1891 =  Anchor();
Anchor1891.setDescription(CString("HAnimSite Viewpoint hanim_front_close_view"));
Anchor1891.setUrl(new CString[]{CString("#hanim_front_close_viewpoint")}, 1);
LOD& LOD1892 =  LOD();
LOD1892.setForceTransitions(True);
LOD1892.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1893 =  WorldInfo();
WorldInfo1893.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1892.addChildren(&WorldInfo1893);

Shape& Shape1894 =  Shape();
Shape1894.setUSE(CString("HAnimSiteViewpointShape"));
LOD1892.addChildren(Shape1894);

Anchor1891.addChild(&LOD1892);

HAnimSite1889.addChild(Anchor1891);

HAnimHumanoid43.setViewpoints(&HAnimSite1889);

HAnimSite& HAnimSite1895 =  HAnimSite();
HAnimSite1895.setDEF(CString("hanim_side_close_view"));
HAnimSite1895.X3DNode::setName(CString("side_close_view"));
HAnimSite1895.setTranslation(new float[]{1.56,0.854,0});
HAnimSite1895.setRotation(new float[]{0,1,0,1.5708});
Viewpoint& Viewpoint1896 =  Viewpoint();
Viewpoint1896.setDEF(CString("hanim_side_close_viewpoint"));
Viewpoint1896.setDescription(CString("side close"));
Viewpoint1896.setPosition(new float[]{0,0,0});
Viewpoint1896.setCenterOfRotation(new float[]{1.6,0,0});
HAnimSite1895.addChild(&Viewpoint1896);

Anchor& Anchor1897 =  Anchor();
Anchor1897.setDescription(CString("HAnimSite Viewpoint hanim_side_close_view"));
Anchor1897.setUrl(new CString[]{CString("#hanim_side_close_viewpoint")}, 1);
LOD& LOD1898 =  LOD();
LOD1898.setForceTransitions(True);
LOD1898.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1899 =  WorldInfo();
WorldInfo1899.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1898.addChildren(&WorldInfo1899);

Shape& Shape1900 =  Shape();
Shape1900.setUSE(CString("HAnimSiteViewpointShape"));
LOD1898.addChildren(Shape1900);

Anchor1897.addChild(&LOD1898);

HAnimSite1895.addChild(Anchor1897);

HAnimHumanoid43.setViewpoints(&HAnimSite1895);

HAnimSite& HAnimSite1901 =  HAnimSite();
HAnimSite1901.setDEF(CString("hanim_head_front_close_view"));
HAnimSite1901.X3DNode::setName(CString("head_front_close_view"));
HAnimSite1901.setTranslation(new float[]{0,1.5,1});
Viewpoint& Viewpoint1902 =  Viewpoint();
Viewpoint1902.setDEF(CString("hanim_head_front_close_viewpoint"));
Viewpoint1902.setDescription(CString("head front close"));
Viewpoint1902.setPosition(new float[]{0,0,0});
Viewpoint1902.setCenterOfRotation(new float[]{0,0,1});
HAnimSite1901.addChild(&Viewpoint1902);

Anchor& Anchor1903 =  Anchor();
Anchor1903.setDescription(CString("HAnimSite Viewpoint hanim_head_front_close_view"));
Anchor1903.setUrl(new CString[]{CString("#hanim_head_front_close_viewpoint")}, 1);
LOD& LOD1904 =  LOD();
LOD1904.setForceTransitions(True);
LOD1904.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1905 =  WorldInfo();
WorldInfo1905.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1904.addChildren(&WorldInfo1905);

Shape& Shape1906 =  Shape();
Shape1906.setUSE(CString("HAnimSiteViewpointShape"));
LOD1904.addChildren(Shape1906);

Anchor1903.addChild(&LOD1904);

HAnimSite1901.addChild(Anchor1903);

HAnimHumanoid43.setViewpoints(&HAnimSite1901);

HAnimSite& HAnimSite1907 =  HAnimSite();
HAnimSite1907.setDEF(CString("hanim_chest_front_close_view"));
HAnimSite1907.X3DNode::setName(CString("chest_front_close_view"));
HAnimSite1907.setTranslation(new float[]{0,1.2,1});
Viewpoint& Viewpoint1908 =  Viewpoint();
Viewpoint1908.setDEF(CString("hanim_chest_front_close_viewpoint"));
Viewpoint1908.setDescription(CString("chest front close"));
Viewpoint1908.setPosition(new float[]{0,0,0});
Viewpoint1908.setCenterOfRotation(new float[]{0,0,1});
HAnimSite1907.addChild(&Viewpoint1908);

Anchor& Anchor1909 =  Anchor();
Anchor1909.setDescription(CString("HAnimSite Viewpoint hanim_chest_front_close_view"));
Anchor1909.setUrl(new CString[]{CString("#hanim_chest_front_close_viewpoint")}, 1);
LOD& LOD1910 =  LOD();
LOD1910.setForceTransitions(True);
LOD1910.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1911 =  WorldInfo();
WorldInfo1911.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1910.addChildren(&WorldInfo1911);

Shape& Shape1912 =  Shape();
Shape1912.setUSE(CString("HAnimSiteViewpointShape"));
LOD1910.addChildren(Shape1912);

Anchor1909.addChild(&LOD1910);

HAnimSite1907.addChild(Anchor1909);

HAnimHumanoid43.setViewpoints(&HAnimSite1907);

HAnimSite& HAnimSite1913 =  HAnimSite();
HAnimSite1913.setDEF(CString("hanim_pelvis_front_close_view"));
HAnimSite1913.X3DNode::setName(CString("pelvis_front_close_view"));
HAnimSite1913.setTranslation(new float[]{0,0.8,1});
Viewpoint& Viewpoint1914 =  Viewpoint();
Viewpoint1914.setDEF(CString("hanim_pelvis_front_close_viewpoint"));
Viewpoint1914.setDescription(CString("pelvis front close"));
Viewpoint1914.setPosition(new float[]{0,0,0});
Viewpoint1914.setCenterOfRotation(new float[]{0,0,1});
HAnimSite1913.addChild(&Viewpoint1914);

Anchor& Anchor1915 =  Anchor();
Anchor1915.setDescription(CString("HAnimSite Viewpoint hanim_pelvis_front_close_view"));
Anchor1915.setUrl(new CString[]{CString("#hanim_pelvis_front_close_viewpoint")}, 1);
LOD& LOD1916 =  LOD();
LOD1916.setForceTransitions(True);
LOD1916.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1917 =  WorldInfo();
WorldInfo1917.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1916.addChildren(&WorldInfo1917);

Shape& Shape1918 =  Shape();
Shape1918.setUSE(CString("HAnimSiteViewpointShape"));
LOD1916.addChildren(Shape1918);

Anchor1915.addChild(&LOD1916);

HAnimSite1913.addChild(Anchor1915);

HAnimHumanoid43.setViewpoints(&HAnimSite1913);

HAnimSite& HAnimSite1919 =  HAnimSite();
HAnimSite1919.setDEF(CString("hanim_knees_front_close_view"));
HAnimSite1919.X3DNode::setName(CString("knees_front_close_view"));
HAnimSite1919.setTranslation(new float[]{0,0.4,1});
Viewpoint& Viewpoint1920 =  Viewpoint();
Viewpoint1920.setDEF(CString("hanim_knees_front_close_viewpoint"));
Viewpoint1920.setDescription(CString("knees front close"));
Viewpoint1920.setPosition(new float[]{0,0,0});
Viewpoint1920.setCenterOfRotation(new float[]{0,0.4,0});
HAnimSite1919.addChild(&Viewpoint1920);

Anchor& Anchor1921 =  Anchor();
Anchor1921.setDescription(CString("HAnimSite Viewpoint hanim_knees_front_close_view"));
Anchor1921.setUrl(new CString[]{CString("#hanim_knees_front_close_viewpoint")}, 1);
LOD& LOD1922 =  LOD();
LOD1922.setForceTransitions(True);
LOD1922.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1923 =  WorldInfo();
WorldInfo1923.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1922.addChildren(&WorldInfo1923);

Shape& Shape1924 =  Shape();
Shape1924.setUSE(CString("HAnimSiteViewpointShape"));
LOD1922.addChildren(Shape1924);

Anchor1921.addChild(&LOD1922);

HAnimSite1919.addChild(Anchor1921);

HAnimHumanoid43.setViewpoints(&HAnimSite1919);

HAnimSite& HAnimSite1925 =  HAnimSite();
HAnimSite1925.setDEF(CString("hanim_feet_front_close_view"));
HAnimSite1925.X3DNode::setName(CString("feet_front_close_view"));
HAnimSite1925.setTranslation(new float[]{0,0,1});
Viewpoint& Viewpoint1926 =  Viewpoint();
Viewpoint1926.setDEF(CString("hanim_feet_front_close_viewpoint"));
Viewpoint1926.setDescription(CString("feet front close"));
Viewpoint1926.setPosition(new float[]{0,0,0});
HAnimSite1925.addChild(&Viewpoint1926);

Anchor& Anchor1927 =  Anchor();
Anchor1927.setDescription(CString("HAnimSite Viewpoint hanim_feet_front_close_view"));
Anchor1927.setUrl(new CString[]{CString("#hanim_feet_front_close_viewpoint")}, 1);
LOD& LOD1928 =  LOD();
LOD1928.setForceTransitions(True);
LOD1928.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1929 =  WorldInfo();
WorldInfo1929.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1928.addChildren(&WorldInfo1929);

Shape& Shape1930 =  Shape();
Shape1930.setUSE(CString("HAnimSiteViewpointShape"));
LOD1928.addChildren(Shape1930);

Anchor1927.addChild(&LOD1928);

HAnimSite1925.addChild(Anchor1927);

HAnimHumanoid43.setViewpoints(&HAnimSite1925);

HAnimSite& HAnimSite1931 =  HAnimSite();
HAnimSite1931.setDEF(CString("hanim_eye_level_view"));
HAnimSite1931.X3DNode::setName(CString("eye_level_view"));
HAnimSite1931.setTranslation(new float[]{0,1.6332,0.0502});
Viewpoint& Viewpoint1932 =  Viewpoint();
Viewpoint1932.setDEF(CString("hanim_eye_level_viewpoint"));
Viewpoint1932.setDescription(CString("eye level looking forward"));
Viewpoint1932.setPosition(new float[]{0,0,0});
Viewpoint1932.setOrientation(new float[]{0,1,0,3.141593});
HAnimSite1931.addChild(&Viewpoint1932);

Anchor& Anchor1933 =  Anchor();
Anchor1933.setDescription(CString("HAnimSite Viewpoint hanim_eye_level_view"));
Anchor1933.setUrl(new CString[]{CString("#hanim_eye_level_viewpoint")}, 1);
LOD& LOD1934 =  LOD();
LOD1934.setForceTransitions(True);
LOD1934.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1935 =  WorldInfo();
WorldInfo1935.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1934.addChildren(&WorldInfo1935);

Shape& Shape1936 =  Shape();
Shape1936.setUSE(CString("HAnimSiteViewpointShape"));
LOD1934.addChildren(Shape1936);

Anchor1933.addChild(&LOD1934);

HAnimSite1931.addChild(Anchor1933);

HAnimHumanoid43.setViewpoints(&HAnimSite1931);

HAnimSite& HAnimSite1937 =  HAnimSite();
HAnimSite1937.setUSE(CString("hanim_l_eyeball_site_view"));
HAnimHumanoid43.setSites(&HAnimSite1937);

HAnimSite& HAnimSite1938 =  HAnimSite();
HAnimSite1938.setUSE(CString("hanim_r_eyeball_site_view"));
HAnimHumanoid43.setSites(&HAnimSite1938);

HAnimSite& HAnimSite1939 =  HAnimSite();
HAnimSite1939.setUSE(CString("hanim_l_hand_front_view"));
HAnimHumanoid43.setSites(&HAnimSite1939);

HAnimSite& HAnimSite1940 =  HAnimSite();
HAnimSite1940.setUSE(CString("hanim_r_hand_front_view"));
HAnimHumanoid43.setSites(&HAnimSite1940);

Scene29.addChild(&HAnimHumanoid43);

Group& Group1941 =  Group();
Group1941.setDEF(CString("StopAnimation"));
TimeSensor& TimeSensor1942 =  TimeSensor();
TimeSensor1942.setDEF(CString("StopTimer"));
TimeSensor1942.setCycleInterval(5.73);
TimeSensor1942.setLoop(True);
Group1941.addChild(&TimeSensor1942);

PositionInterpolator& PositionInterpolator1943 =  PositionInterpolator();
PositionInterpolator1943.setDEF(CString("Stop_HumanoidRoot_TranslationInterpolator"));
PositionInterpolator1943.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator1943.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0}, 9);
Group1941.addChild(&PositionInterpolator1943);

OrientationInterpolator& OrientationInterpolator1944 =  OrientationInterpolator();
OrientationInterpolator1944.setDEF(CString("Stop_HumanoidRoot_RotationInterpolator"));
OrientationInterpolator1944.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1944.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1944);

OrientationInterpolator& OrientationInterpolator1945 =  OrientationInterpolator();
OrientationInterpolator1945.setDEF(CString("Stop_sacroiliac_RotationInterpolator"));
OrientationInterpolator1945.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1945.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1945);

OrientationInterpolator& OrientationInterpolator1946 =  OrientationInterpolator();
OrientationInterpolator1946.setDEF(CString("Stop_l_hip_RotationInterpolator"));
OrientationInterpolator1946.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1946.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1946);

OrientationInterpolator& OrientationInterpolator1947 =  OrientationInterpolator();
OrientationInterpolator1947.setDEF(CString("Stop_l_knee_RotationInterpolator"));
OrientationInterpolator1947.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1947.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1947);

OrientationInterpolator& OrientationInterpolator1948 =  OrientationInterpolator();
OrientationInterpolator1948.setDEF(CString("Stop_l_ankle_RotationInterpolator"));
OrientationInterpolator1948.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1948.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1948);

OrientationInterpolator& OrientationInterpolator1949 =  OrientationInterpolator();
OrientationInterpolator1949.setDEF(CString("Stop_l_subtalar_RotationInterpolator"));
OrientationInterpolator1949.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1949.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1949);

OrientationInterpolator& OrientationInterpolator1950 =  OrientationInterpolator();
OrientationInterpolator1950.setDEF(CString("Stop_l_midtarsal_RotationInterpolator"));
OrientationInterpolator1950.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1950.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1950);

OrientationInterpolator& OrientationInterpolator1951 =  OrientationInterpolator();
OrientationInterpolator1951.setDEF(CString("Stop_l_metatarsal_RotationInterpolator"));
OrientationInterpolator1951.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1951.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1951);

OrientationInterpolator& OrientationInterpolator1952 =  OrientationInterpolator();
OrientationInterpolator1952.setDEF(CString("Stop_r_hip_RotationInterpolator"));
OrientationInterpolator1952.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1952.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1952);

OrientationInterpolator& OrientationInterpolator1953 =  OrientationInterpolator();
OrientationInterpolator1953.setDEF(CString("Stop_r_knee_RotationInterpolator"));
OrientationInterpolator1953.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1953.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1953);

OrientationInterpolator& OrientationInterpolator1954 =  OrientationInterpolator();
OrientationInterpolator1954.setDEF(CString("Stop_r_ankle_RotationInterpolator"));
OrientationInterpolator1954.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1954.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1954);

OrientationInterpolator& OrientationInterpolator1955 =  OrientationInterpolator();
OrientationInterpolator1955.setDEF(CString("Stop_r_subtalar_RotationInterpolator"));
OrientationInterpolator1955.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1955.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1955);

OrientationInterpolator& OrientationInterpolator1956 =  OrientationInterpolator();
OrientationInterpolator1956.setDEF(CString("Stop_r_midtarsal_RotationInterpolator"));
OrientationInterpolator1956.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1956.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1956);

OrientationInterpolator& OrientationInterpolator1957 =  OrientationInterpolator();
OrientationInterpolator1957.setDEF(CString("Stop_r_metatarsal_RotationInterpolator"));
OrientationInterpolator1957.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1957.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1957);

OrientationInterpolator& OrientationInterpolator1958 =  OrientationInterpolator();
OrientationInterpolator1958.setDEF(CString("Stop_vl5_RotationInterpolator"));
OrientationInterpolator1958.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1958.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1958);

OrientationInterpolator& OrientationInterpolator1959 =  OrientationInterpolator();
OrientationInterpolator1959.setDEF(CString("Stop_vl4_RotationInterpolator"));
OrientationInterpolator1959.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1959.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1959);

OrientationInterpolator& OrientationInterpolator1960 =  OrientationInterpolator();
OrientationInterpolator1960.setDEF(CString("Stop_vl3_RotationInterpolator"));
OrientationInterpolator1960.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1960.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1960);

OrientationInterpolator& OrientationInterpolator1961 =  OrientationInterpolator();
OrientationInterpolator1961.setDEF(CString("Stop_vl2_RotationInterpolator"));
OrientationInterpolator1961.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1961.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1961);

OrientationInterpolator& OrientationInterpolator1962 =  OrientationInterpolator();
OrientationInterpolator1962.setDEF(CString("Stop_vl1_RotationInterpolator"));
OrientationInterpolator1962.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1962.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1962);

OrientationInterpolator& OrientationInterpolator1963 =  OrientationInterpolator();
OrientationInterpolator1963.setDEF(CString("Stop_vt12_RotationInterpolator"));
OrientationInterpolator1963.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1963.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1963);

OrientationInterpolator& OrientationInterpolator1964 =  OrientationInterpolator();
OrientationInterpolator1964.setDEF(CString("Stop_vt11_RotationInterpolator"));
OrientationInterpolator1964.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1964.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1964);

OrientationInterpolator& OrientationInterpolator1965 =  OrientationInterpolator();
OrientationInterpolator1965.setDEF(CString("Stop_vt10_RotationInterpolator"));
OrientationInterpolator1965.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1965.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1965);

OrientationInterpolator& OrientationInterpolator1966 =  OrientationInterpolator();
OrientationInterpolator1966.setDEF(CString("Stop_vt9_RotationInterpolator"));
OrientationInterpolator1966.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1966.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1966);

OrientationInterpolator& OrientationInterpolator1967 =  OrientationInterpolator();
OrientationInterpolator1967.setDEF(CString("Stop_vt8_RotationInterpolator"));
OrientationInterpolator1967.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1967.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1967);

OrientationInterpolator& OrientationInterpolator1968 =  OrientationInterpolator();
OrientationInterpolator1968.setDEF(CString("Stop_vt7_RotationInterpolator"));
OrientationInterpolator1968.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1968.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1968);

OrientationInterpolator& OrientationInterpolator1969 =  OrientationInterpolator();
OrientationInterpolator1969.setDEF(CString("Stop_vt6_RotationInterpolator"));
OrientationInterpolator1969.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1969.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1969);

OrientationInterpolator& OrientationInterpolator1970 =  OrientationInterpolator();
OrientationInterpolator1970.setDEF(CString("Stop_vt5_RotationInterpolator"));
OrientationInterpolator1970.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1970.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1970);

OrientationInterpolator& OrientationInterpolator1971 =  OrientationInterpolator();
OrientationInterpolator1971.setDEF(CString("Stop_vt4_RotationInterpolator"));
OrientationInterpolator1971.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1971.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1971);

OrientationInterpolator& OrientationInterpolator1972 =  OrientationInterpolator();
OrientationInterpolator1972.setDEF(CString("Stop_vt3_RotationInterpolator"));
OrientationInterpolator1972.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1972.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1972);

OrientationInterpolator& OrientationInterpolator1973 =  OrientationInterpolator();
OrientationInterpolator1973.setDEF(CString("Stop_vt2_RotationInterpolator"));
OrientationInterpolator1973.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1973.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1973);

OrientationInterpolator& OrientationInterpolator1974 =  OrientationInterpolator();
OrientationInterpolator1974.setDEF(CString("Stop_vt1_RotationInterpolator"));
OrientationInterpolator1974.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1974.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1974);

OrientationInterpolator& OrientationInterpolator1975 =  OrientationInterpolator();
OrientationInterpolator1975.setDEF(CString("Stop_vc7_RotationInterpolator"));
OrientationInterpolator1975.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1975.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1975);

OrientationInterpolator& OrientationInterpolator1976 =  OrientationInterpolator();
OrientationInterpolator1976.setDEF(CString("Stop_vc6_RotationInterpolator"));
OrientationInterpolator1976.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1976.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1976);

OrientationInterpolator& OrientationInterpolator1977 =  OrientationInterpolator();
OrientationInterpolator1977.setDEF(CString("Stop_vc5_RotationInterpolator"));
OrientationInterpolator1977.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1977.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1977);

OrientationInterpolator& OrientationInterpolator1978 =  OrientationInterpolator();
OrientationInterpolator1978.setDEF(CString("Stop_vc4_RotationInterpolator"));
OrientationInterpolator1978.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1978.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1978);

OrientationInterpolator& OrientationInterpolator1979 =  OrientationInterpolator();
OrientationInterpolator1979.setDEF(CString("Stop_vc3_RotationInterpolator"));
OrientationInterpolator1979.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1979.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1979);

OrientationInterpolator& OrientationInterpolator1980 =  OrientationInterpolator();
OrientationInterpolator1980.setDEF(CString("Stop_vc2_RotationInterpolator"));
OrientationInterpolator1980.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1980.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1980);

OrientationInterpolator& OrientationInterpolator1981 =  OrientationInterpolator();
OrientationInterpolator1981.setDEF(CString("Stop_vc1_RotationInterpolator"));
OrientationInterpolator1981.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1981.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1981);

OrientationInterpolator& OrientationInterpolator1982 =  OrientationInterpolator();
OrientationInterpolator1982.setDEF(CString("Stop_skullbase_RotationInterpolator"));
OrientationInterpolator1982.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1982.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1982);

OrientationInterpolator& OrientationInterpolator1983 =  OrientationInterpolator();
OrientationInterpolator1983.setDEF(CString("Stop_l_eyeball_joint_RotationInterpolator"));
OrientationInterpolator1983.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1983.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1983);

OrientationInterpolator& OrientationInterpolator1984 =  OrientationInterpolator();
OrientationInterpolator1984.setDEF(CString("Stop_r_eyeball_joint_RotationInterpolator"));
OrientationInterpolator1984.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1984.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1984);

OrientationInterpolator& OrientationInterpolator1985 =  OrientationInterpolator();
OrientationInterpolator1985.setDEF(CString("Stop_l_sternoclavicular_RotationInterpolator"));
OrientationInterpolator1985.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1985.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1985);

OrientationInterpolator& OrientationInterpolator1986 =  OrientationInterpolator();
OrientationInterpolator1986.setDEF(CString("Stop_l_acromioclavicular_RotationInterpolator"));
OrientationInterpolator1986.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1986.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1986);

OrientationInterpolator& OrientationInterpolator1987 =  OrientationInterpolator();
OrientationInterpolator1987.setDEF(CString("Stop_l_shoulder_RotationInterpolator"));
OrientationInterpolator1987.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1987.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1987);

OrientationInterpolator& OrientationInterpolator1988 =  OrientationInterpolator();
OrientationInterpolator1988.setDEF(CString("Stop_l_elbow_RotationInterpolator"));
OrientationInterpolator1988.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1988.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1988);

OrientationInterpolator& OrientationInterpolator1989 =  OrientationInterpolator();
OrientationInterpolator1989.setDEF(CString("Stop_l_wrist_RotationInterpolator"));
OrientationInterpolator1989.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1989.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1989);

OrientationInterpolator& OrientationInterpolator1990 =  OrientationInterpolator();
OrientationInterpolator1990.setDEF(CString("Stop_l_thumb1_RotationInterpolator"));
OrientationInterpolator1990.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1990.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1990);

OrientationInterpolator& OrientationInterpolator1991 =  OrientationInterpolator();
OrientationInterpolator1991.setDEF(CString("Stop_l_thumb2_RotationInterpolator"));
OrientationInterpolator1991.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1991.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1991);

OrientationInterpolator& OrientationInterpolator1992 =  OrientationInterpolator();
OrientationInterpolator1992.setDEF(CString("Stop_l_thumb3_RotationInterpolator"));
OrientationInterpolator1992.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1992.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1992);

OrientationInterpolator& OrientationInterpolator1993 =  OrientationInterpolator();
OrientationInterpolator1993.setDEF(CString("Stop_l_index0_RotationInterpolator"));
OrientationInterpolator1993.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1993.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1993);

OrientationInterpolator& OrientationInterpolator1994 =  OrientationInterpolator();
OrientationInterpolator1994.setDEF(CString("Stop_l_index1_RotationInterpolator"));
OrientationInterpolator1994.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1994.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1994);

OrientationInterpolator& OrientationInterpolator1995 =  OrientationInterpolator();
OrientationInterpolator1995.setDEF(CString("Stop_l_index2_RotationInterpolator"));
OrientationInterpolator1995.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1995.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1995);

OrientationInterpolator& OrientationInterpolator1996 =  OrientationInterpolator();
OrientationInterpolator1996.setDEF(CString("Stop_l_index3_RotationInterpolator"));
OrientationInterpolator1996.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1996.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1996);

OrientationInterpolator& OrientationInterpolator1997 =  OrientationInterpolator();
OrientationInterpolator1997.setDEF(CString("Stop_l_middle0_RotationInterpolator"));
OrientationInterpolator1997.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1997.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1997);

OrientationInterpolator& OrientationInterpolator1998 =  OrientationInterpolator();
OrientationInterpolator1998.setDEF(CString("Stop_l_middle1_RotationInterpolator"));
OrientationInterpolator1998.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1998.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1998);

OrientationInterpolator& OrientationInterpolator1999 =  OrientationInterpolator();
OrientationInterpolator1999.setDEF(CString("Stop_l_middle2_RotationInterpolator"));
OrientationInterpolator1999.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator1999.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator1999);

OrientationInterpolator& OrientationInterpolator2000 =  OrientationInterpolator();
OrientationInterpolator2000.setDEF(CString("Stop_l_middle3_RotationInterpolator"));
OrientationInterpolator2000.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2000.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2000);

OrientationInterpolator& OrientationInterpolator2001 =  OrientationInterpolator();
OrientationInterpolator2001.setDEF(CString("Stop_l_ring0_RotationInterpolator"));
OrientationInterpolator2001.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2001.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2001);

OrientationInterpolator& OrientationInterpolator2002 =  OrientationInterpolator();
OrientationInterpolator2002.setDEF(CString("Stop_l_ring1_RotationInterpolator"));
OrientationInterpolator2002.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2002.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2002);

OrientationInterpolator& OrientationInterpolator2003 =  OrientationInterpolator();
OrientationInterpolator2003.setDEF(CString("Stop_l_ring2_RotationInterpolator"));
OrientationInterpolator2003.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2003.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2003);

OrientationInterpolator& OrientationInterpolator2004 =  OrientationInterpolator();
OrientationInterpolator2004.setDEF(CString("Stop_l_ring3_RotationInterpolator"));
OrientationInterpolator2004.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2004.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2004);

OrientationInterpolator& OrientationInterpolator2005 =  OrientationInterpolator();
OrientationInterpolator2005.setDEF(CString("Stop_l_pinky0_RotationInterpolator"));
OrientationInterpolator2005.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2005.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2005);

OrientationInterpolator& OrientationInterpolator2006 =  OrientationInterpolator();
OrientationInterpolator2006.setDEF(CString("Stop_l_pinky1_RotationInterpolator"));
OrientationInterpolator2006.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2006.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2006);

OrientationInterpolator& OrientationInterpolator2007 =  OrientationInterpolator();
OrientationInterpolator2007.setDEF(CString("Stop_l_pinky2_RotationInterpolator"));
OrientationInterpolator2007.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2007.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2007);

OrientationInterpolator& OrientationInterpolator2008 =  OrientationInterpolator();
OrientationInterpolator2008.setDEF(CString("Stop_l_pinky3_RotationInterpolator"));
OrientationInterpolator2008.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2008.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2008);

OrientationInterpolator& OrientationInterpolator2009 =  OrientationInterpolator();
OrientationInterpolator2009.setDEF(CString("Stop_r_sternoclavicular_RotationInterpolator"));
OrientationInterpolator2009.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2009.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2009);

OrientationInterpolator& OrientationInterpolator2010 =  OrientationInterpolator();
OrientationInterpolator2010.setDEF(CString("Stop_r_acromioclavicular_RotationInterpolator"));
OrientationInterpolator2010.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2010.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2010);

OrientationInterpolator& OrientationInterpolator2011 =  OrientationInterpolator();
OrientationInterpolator2011.setDEF(CString("Stop_r_shoulder_RotationInterpolator"));
OrientationInterpolator2011.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2011.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2011);

OrientationInterpolator& OrientationInterpolator2012 =  OrientationInterpolator();
OrientationInterpolator2012.setDEF(CString("Stop_r_elbow_RotationInterpolator"));
OrientationInterpolator2012.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2012.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2012);

OrientationInterpolator& OrientationInterpolator2013 =  OrientationInterpolator();
OrientationInterpolator2013.setDEF(CString("Stop_r_wrist_RotationInterpolator"));
OrientationInterpolator2013.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2013.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2013);

OrientationInterpolator& OrientationInterpolator2014 =  OrientationInterpolator();
OrientationInterpolator2014.setDEF(CString("Stop_r_thumb1_RotationInterpolator"));
OrientationInterpolator2014.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2014.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2014);

OrientationInterpolator& OrientationInterpolator2015 =  OrientationInterpolator();
OrientationInterpolator2015.setDEF(CString("Stop_r_thumb2_RotationInterpolator"));
OrientationInterpolator2015.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2015.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2015);

OrientationInterpolator& OrientationInterpolator2016 =  OrientationInterpolator();
OrientationInterpolator2016.setDEF(CString("Stop_r_thumb3_RotationInterpolator"));
OrientationInterpolator2016.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2016.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2016);

OrientationInterpolator& OrientationInterpolator2017 =  OrientationInterpolator();
OrientationInterpolator2017.setDEF(CString("Stop_r_index0_RotationInterpolator"));
OrientationInterpolator2017.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2017.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2017);

OrientationInterpolator& OrientationInterpolator2018 =  OrientationInterpolator();
OrientationInterpolator2018.setDEF(CString("Stop_r_index1_RotationInterpolator"));
OrientationInterpolator2018.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2018.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2018);

OrientationInterpolator& OrientationInterpolator2019 =  OrientationInterpolator();
OrientationInterpolator2019.setDEF(CString("Stop_r_index2_RotationInterpolator"));
OrientationInterpolator2019.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2019.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2019);

OrientationInterpolator& OrientationInterpolator2020 =  OrientationInterpolator();
OrientationInterpolator2020.setDEF(CString("Stop_r_index3_RotationInterpolator"));
OrientationInterpolator2020.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2020.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2020);

OrientationInterpolator& OrientationInterpolator2021 =  OrientationInterpolator();
OrientationInterpolator2021.setDEF(CString("Stop_r_middle0_RotationInterpolator"));
OrientationInterpolator2021.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2021.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2021);

OrientationInterpolator& OrientationInterpolator2022 =  OrientationInterpolator();
OrientationInterpolator2022.setDEF(CString("Stop_r_middle1_RotationInterpolator"));
OrientationInterpolator2022.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2022.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2022);

OrientationInterpolator& OrientationInterpolator2023 =  OrientationInterpolator();
OrientationInterpolator2023.setDEF(CString("Stop_r_middle2_RotationInterpolator"));
OrientationInterpolator2023.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2023.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2023);

OrientationInterpolator& OrientationInterpolator2024 =  OrientationInterpolator();
OrientationInterpolator2024.setDEF(CString("Stop_r_middle3_RotationInterpolator"));
OrientationInterpolator2024.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2024.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2024);

OrientationInterpolator& OrientationInterpolator2025 =  OrientationInterpolator();
OrientationInterpolator2025.setDEF(CString("Stop_r_ring0_RotationInterpolator"));
OrientationInterpolator2025.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2025.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2025);

OrientationInterpolator& OrientationInterpolator2026 =  OrientationInterpolator();
OrientationInterpolator2026.setDEF(CString("Stop_r_ring1_RotationInterpolator"));
OrientationInterpolator2026.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2026.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2026);

OrientationInterpolator& OrientationInterpolator2027 =  OrientationInterpolator();
OrientationInterpolator2027.setDEF(CString("Stop_r_ring2_RotationInterpolator"));
OrientationInterpolator2027.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2027.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2027);

OrientationInterpolator& OrientationInterpolator2028 =  OrientationInterpolator();
OrientationInterpolator2028.setDEF(CString("Stop_r_ring3_RotationInterpolator"));
OrientationInterpolator2028.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2028.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2028);

OrientationInterpolator& OrientationInterpolator2029 =  OrientationInterpolator();
OrientationInterpolator2029.setDEF(CString("Stop_r_pinky0_RotationInterpolator"));
OrientationInterpolator2029.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2029.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2029);

OrientationInterpolator& OrientationInterpolator2030 =  OrientationInterpolator();
OrientationInterpolator2030.setDEF(CString("Stop_r_pinky1_RotationInterpolator"));
OrientationInterpolator2030.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2030.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2030);

OrientationInterpolator& OrientationInterpolator2031 =  OrientationInterpolator();
OrientationInterpolator2031.setDEF(CString("Stop_r_pinky2_RotationInterpolator"));
OrientationInterpolator2031.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2031.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2031);

OrientationInterpolator& OrientationInterpolator2032 =  OrientationInterpolator();
OrientationInterpolator2032.setDEF(CString("Stop_r_pinky3_RotationInterpolator"));
OrientationInterpolator2032.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2032.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group1941.addChild(&OrientationInterpolator2032);

Scene29.addChild(&Group1941);

Group& Group2033 =  Group();
Group2033.setDEF(CString("StandAnimation"));
TimeSensor& TimeSensor2034 =  TimeSensor();
TimeSensor2034.setDEF(CString("StandTimer"));
TimeSensor2034.setCycleInterval(5.73);
TimeSensor2034.setLoop(True);
Group2033.addChild(&TimeSensor2034);

OrientationInterpolator& OrientationInterpolator2035 =  OrientationInterpolator();
OrientationInterpolator2035.setDEF(CString("Stand_r_metatarsal_PitchInterpolator"));
OrientationInterpolator2035.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2035.setKeyValue(new float[]{1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0}, 24);
Group2033.addChild(&OrientationInterpolator2035);

OrientationInterpolator& OrientationInterpolator2036 =  OrientationInterpolator();
OrientationInterpolator2036.setDEF(CString("Stand_r_ankle_RotationInterpolator"));
OrientationInterpolator2036.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2036.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2036);

OrientationInterpolator& OrientationInterpolator2037 =  OrientationInterpolator();
OrientationInterpolator2037.setDEF(CString("Stand_r_knee_RotationInterpolator"));
OrientationInterpolator2037.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2037.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2037);

OrientationInterpolator& OrientationInterpolator2038 =  OrientationInterpolator();
OrientationInterpolator2038.setDEF(CString("Stand_r_hip_RotationInterpolator"));
OrientationInterpolator2038.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2038.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2038);

OrientationInterpolator& OrientationInterpolator2039 =  OrientationInterpolator();
OrientationInterpolator2039.setDEF(CString("Stand_l_ankle_RotationInterpolator"));
OrientationInterpolator2039.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2039.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2039);

OrientationInterpolator& OrientationInterpolator2040 =  OrientationInterpolator();
OrientationInterpolator2040.setDEF(CString("Stand_l_knee_RotationInterpolator"));
OrientationInterpolator2040.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2040.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2040);

OrientationInterpolator& OrientationInterpolator2041 =  OrientationInterpolator();
OrientationInterpolator2041.setDEF(CString("Stand_l_hip_RotationInterpolator"));
OrientationInterpolator2041.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2041.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2041);

OrientationInterpolator& OrientationInterpolator2042 =  OrientationInterpolator();
OrientationInterpolator2042.setDEF(CString("Stand_r_wrist_RotationInterpolator"));
OrientationInterpolator2042.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2042.setKeyValue(new float[]{0,0,1,0,0,0,-1,0.25,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2042);

OrientationInterpolator& OrientationInterpolator2043 =  OrientationInterpolator();
OrientationInterpolator2043.setDEF(CString("Stand_r_elbow_RotationInterpolator"));
OrientationInterpolator2043.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2043.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2043);

OrientationInterpolator& OrientationInterpolator2044 =  OrientationInterpolator();
OrientationInterpolator2044.setDEF(CString("Stand_r_shoulder_RotationInterpolator"));
OrientationInterpolator2044.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2044.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2044);

OrientationInterpolator& OrientationInterpolator2045 =  OrientationInterpolator();
OrientationInterpolator2045.setDEF(CString("Stand_l_wrist_RotationInterpolator"));
OrientationInterpolator2045.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2045.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2045);

OrientationInterpolator& OrientationInterpolator2046 =  OrientationInterpolator();
OrientationInterpolator2046.setDEF(CString("Stand_l_elbow_RotationInterpolator"));
OrientationInterpolator2046.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2046.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2046);

OrientationInterpolator& OrientationInterpolator2047 =  OrientationInterpolator();
OrientationInterpolator2047.setDEF(CString("Stand_l_shoulder_RotationInterpolator"));
OrientationInterpolator2047.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2047.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2047);

OrientationInterpolator& OrientationInterpolator2048 =  OrientationInterpolator();
OrientationInterpolator2048.setDEF(CString("Stand_head_RotationInterpolator"));
OrientationInterpolator2048.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2048.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2048);

OrientationInterpolator& OrientationInterpolator2049 =  OrientationInterpolator();
OrientationInterpolator2049.setDEF(CString("Stand_neck_RotationInterpolator"));
OrientationInterpolator2049.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2049.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.5,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2049);

OrientationInterpolator& OrientationInterpolator2050 =  OrientationInterpolator();
OrientationInterpolator2050.setDEF(CString("Stand_l_eyeball_RotationInterpolator"));
OrientationInterpolator2050.setKey(new float[]{0,0.4,0.7,1}, 4);
OrientationInterpolator2050.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0}, 16);
Group2033.addChild(&OrientationInterpolator2050);

OrientationInterpolator& OrientationInterpolator2051 =  OrientationInterpolator();
OrientationInterpolator2051.setDEF(CString("Stand_r_eyeball_RotationInterpolator"));
OrientationInterpolator2051.setKey(new float[]{0,0.4,0.7,1}, 4);
OrientationInterpolator2051.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0}, 16);
Group2033.addChild(&OrientationInterpolator2051);

OrientationInterpolator& OrientationInterpolator2052 =  OrientationInterpolator();
OrientationInterpolator2052.setDEF(CString("Stand_lower_body_RotationInterpolator"));
OrientationInterpolator2052.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2052.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2052);

OrientationInterpolator& OrientationInterpolator2053 =  OrientationInterpolator();
OrientationInterpolator2053.setDEF(CString("Stand_upper_body_RotationInterpolator"));
OrientationInterpolator2053.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2053.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2053);

OrientationInterpolator& OrientationInterpolator2054 =  OrientationInterpolator();
OrientationInterpolator2054.setDEF(CString("Stand_whole_body_RotationInterpolator"));
OrientationInterpolator2054.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2054.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2033.addChild(&OrientationInterpolator2054);

PositionInterpolator& PositionInterpolator2055 =  PositionInterpolator();
PositionInterpolator2055.setDEF(CString("Stand_whole_body_TranslationInterpolator"));
PositionInterpolator2055.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator2055.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0}, 9);
Group2033.addChild(&PositionInterpolator2055);

OrientationInterpolator& OrientationInterpolator2056 =  OrientationInterpolator();
OrientationInterpolator2056.setDEF(CString("Stand_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator2056.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2056.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2033.addChild(&OrientationInterpolator2056);

OrientationInterpolator& OrientationInterpolator2057 =  OrientationInterpolator();
OrientationInterpolator2057.setDEF(CString("Stand_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator2057.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2057.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2033.addChild(&OrientationInterpolator2057);

OrientationInterpolator& OrientationInterpolator2058 =  OrientationInterpolator();
OrientationInterpolator2058.setDEF(CString("Stand_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator2058.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2058.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2033.addChild(&OrientationInterpolator2058);

OrientationInterpolator& OrientationInterpolator2059 =  OrientationInterpolator();
OrientationInterpolator2059.setDEF(CString("Stand_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator2059.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2059.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2033.addChild(&OrientationInterpolator2059);

OrientationInterpolator& OrientationInterpolator2060 =  OrientationInterpolator();
OrientationInterpolator2060.setDEF(CString("Stand_sacroiliac_YawInterpolator"));
OrientationInterpolator2060.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2060.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2033.addChild(&OrientationInterpolator2060);

OrientationInterpolator& OrientationInterpolator2061 =  OrientationInterpolator();
OrientationInterpolator2061.setDEF(CString("Stand_vl5_YawInterpolator"));
OrientationInterpolator2061.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2061.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2033.addChild(&OrientationInterpolator2061);

OrientationInterpolator& OrientationInterpolator2062 =  OrientationInterpolator();
OrientationInterpolator2062.setDEF(CString("Stand_vc6_YawInterpolator"));
OrientationInterpolator2062.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2062.setKeyValue(new float[]{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0}, 28);
Group2033.addChild(&OrientationInterpolator2062);

OrientationInterpolator& OrientationInterpolator2063 =  OrientationInterpolator();
OrientationInterpolator2063.setDEF(CString("Stand_l_thumb1_PitchInterpolator"));
OrientationInterpolator2063.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2063.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2033.addChild(&OrientationInterpolator2063);

OrientationInterpolator& OrientationInterpolator2064 =  OrientationInterpolator();
OrientationInterpolator2064.setDEF(CString("Stand_r_thumb1_PitchInterpolator"));
OrientationInterpolator2064.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2064.setKeyValue(new float[]{1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0}, 24);
Group2033.addChild(&OrientationInterpolator2064);

OrientationInterpolator& OrientationInterpolator2065 =  OrientationInterpolator();
OrientationInterpolator2065.setDEF(CString("Stand_r_index1_RollInterpolator"));
OrientationInterpolator2065.setKey(new float[]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator2065.setKeyValue(new float[]{0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0}, 24);
Group2033.addChild(&OrientationInterpolator2065);

OrientationInterpolator& OrientationInterpolator2066 =  OrientationInterpolator();
OrientationInterpolator2066.setDEF(CString("Stand_r_index2_RollInterpolator"));
OrientationInterpolator2066.setKey(new float[]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator2066.setKeyValue(new float[]{0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0}, 24);
Group2033.addChild(&OrientationInterpolator2066);

OrientationInterpolator& OrientationInterpolator2067 =  OrientationInterpolator();
OrientationInterpolator2067.setDEF(CString("Stand_r_index3_RollInterpolator"));
OrientationInterpolator2067.setKey(new float[]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator2067.setKeyValue(new float[]{0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0}, 24);
Group2033.addChild(&OrientationInterpolator2067);

Scene29.addChild(&Group2033);

Group& Group2068 =  Group();
Group2068.setDEF(CString("PitchesAnimation"));
TimeSensor& TimeSensor2069 =  TimeSensor();
TimeSensor2069.setDEF(CString("PitchTimer"));
TimeSensor2069.setCycleInterval(5.73);
TimeSensor2069.setLoop(True);
Group2068.addChild(&TimeSensor2069);

OrientationInterpolator& OrientationInterpolator2070 =  OrientationInterpolator();
OrientationInterpolator2070.setDEF(CString("Pitch_r_metatarsal_PitchInterpolator"));
OrientationInterpolator2070.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2070.setKeyValue(new float[]{1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0}, 24);
Group2068.addChild(&OrientationInterpolator2070);

OrientationInterpolator& OrientationInterpolator2071 =  OrientationInterpolator();
OrientationInterpolator2071.setDEF(CString("Pitches_r_ankle_RotationInterpolator"));
OrientationInterpolator2071.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2071.setKeyValue(new float[]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0}, 20);
Group2068.addChild(&OrientationInterpolator2071);

OrientationInterpolator& OrientationInterpolator2072 =  OrientationInterpolator();
OrientationInterpolator2072.setDEF(CString("Pitches_r_knee_RotationInterpolator"));
OrientationInterpolator2072.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2072.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2068.addChild(&OrientationInterpolator2072);

OrientationInterpolator& OrientationInterpolator2073 =  OrientationInterpolator();
OrientationInterpolator2073.setDEF(CString("Pitches_r_hip_RotationInterpolator"));
OrientationInterpolator2073.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2073.setKeyValue(new float[]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0}, 20);
Group2068.addChild(&OrientationInterpolator2073);

OrientationInterpolator& OrientationInterpolator2074 =  OrientationInterpolator();
OrientationInterpolator2074.setDEF(CString("Pitches_l_ankle_RotationInterpolator"));
OrientationInterpolator2074.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2074.setKeyValue(new float[]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0}, 20);
Group2068.addChild(&OrientationInterpolator2074);

OrientationInterpolator& OrientationInterpolator2075 =  OrientationInterpolator();
OrientationInterpolator2075.setDEF(CString("Pitches_l_knee_RotationInterpolator"));
OrientationInterpolator2075.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2075.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2068.addChild(&OrientationInterpolator2075);

OrientationInterpolator& OrientationInterpolator2076 =  OrientationInterpolator();
OrientationInterpolator2076.setDEF(CString("Pitches_l_hip_RotationInterpolator"));
OrientationInterpolator2076.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2076.setKeyValue(new float[]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0}, 20);
Group2068.addChild(&OrientationInterpolator2076);

OrientationInterpolator& OrientationInterpolator2077 =  OrientationInterpolator();
OrientationInterpolator2077.setDEF(CString("Pitches_r_wrist_RotationInterpolator"));
OrientationInterpolator2077.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2077.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2068.addChild(&OrientationInterpolator2077);

OrientationInterpolator& OrientationInterpolator2078 =  OrientationInterpolator();
OrientationInterpolator2078.setDEF(CString("Pitches_r_elbow_RotationInterpolator"));
OrientationInterpolator2078.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2078.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2068.addChild(&OrientationInterpolator2078);

OrientationInterpolator& OrientationInterpolator2079 =  OrientationInterpolator();
OrientationInterpolator2079.setDEF(CString("Pitches_r_shoulder_RotationInterpolator"));
OrientationInterpolator2079.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2079.setKeyValue(new float[]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0}, 20);
Group2068.addChild(&OrientationInterpolator2079);

OrientationInterpolator& OrientationInterpolator2080 =  OrientationInterpolator();
OrientationInterpolator2080.setDEF(CString("Pitches_l_wrist_RotationInterpolator"));
OrientationInterpolator2080.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2080.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2068.addChild(&OrientationInterpolator2080);

OrientationInterpolator& OrientationInterpolator2081 =  OrientationInterpolator();
OrientationInterpolator2081.setDEF(CString("Pitches_l_elbow_RotationInterpolator"));
OrientationInterpolator2081.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2081.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2068.addChild(&OrientationInterpolator2081);

OrientationInterpolator& OrientationInterpolator2082 =  OrientationInterpolator();
OrientationInterpolator2082.setDEF(CString("Pitches_l_shoulder_RotationInterpolator"));
OrientationInterpolator2082.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2082.setKeyValue(new float[]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0}, 20);
Group2068.addChild(&OrientationInterpolator2082);

OrientationInterpolator& OrientationInterpolator2083 =  OrientationInterpolator();
OrientationInterpolator2083.setDEF(CString("Pitches_head_RotationInterpolator"));
OrientationInterpolator2083.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2083.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2068.addChild(&OrientationInterpolator2083);

OrientationInterpolator& OrientationInterpolator2084 =  OrientationInterpolator();
OrientationInterpolator2084.setDEF(CString("Pitches_neck_RotationInterpolator"));
OrientationInterpolator2084.setKey(new float[]{0,0.25,0.55,1}, 4);
OrientationInterpolator2084.setKeyValue(new float[]{0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0}, 16);
Group2068.addChild(&OrientationInterpolator2084);

OrientationInterpolator& OrientationInterpolator2085 =  OrientationInterpolator();
OrientationInterpolator2085.setDEF(CString("Pitches_lower_body_RotationInterpolator"));
OrientationInterpolator2085.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2085.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2068.addChild(&OrientationInterpolator2085);

OrientationInterpolator& OrientationInterpolator2086 =  OrientationInterpolator();
OrientationInterpolator2086.setDEF(CString("Pitches_upper_body_RotationInterpolator"));
OrientationInterpolator2086.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2086.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2068.addChild(&OrientationInterpolator2086);

OrientationInterpolator& OrientationInterpolator2087 =  OrientationInterpolator();
OrientationInterpolator2087.setDEF(CString("Pitches_whole_body_RotationInterpolator"));
OrientationInterpolator2087.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2087.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2068.addChild(&OrientationInterpolator2087);

PositionInterpolator& PositionInterpolator2088 =  PositionInterpolator();
PositionInterpolator2088.setDEF(CString("Pitches_whole_body_TranslationInterpolator"));
PositionInterpolator2088.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
PositionInterpolator2088.setKeyValue(new float[]{0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0}, 27);
Group2068.addChild(&PositionInterpolator2088);

OrientationInterpolator& OrientationInterpolator2089 =  OrientationInterpolator();
OrientationInterpolator2089.setDEF(CString("Pitch_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator2089.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2089.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2068.addChild(&OrientationInterpolator2089);

OrientationInterpolator& OrientationInterpolator2090 =  OrientationInterpolator();
OrientationInterpolator2090.setDEF(CString("Pitch_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator2090.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2090.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2068.addChild(&OrientationInterpolator2090);

OrientationInterpolator& OrientationInterpolator2091 =  OrientationInterpolator();
OrientationInterpolator2091.setDEF(CString("Pitch_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator2091.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2091.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2068.addChild(&OrientationInterpolator2091);

OrientationInterpolator& OrientationInterpolator2092 =  OrientationInterpolator();
OrientationInterpolator2092.setDEF(CString("Pitch_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator2092.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2092.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2068.addChild(&OrientationInterpolator2092);

OrientationInterpolator& OrientationInterpolator2093 =  OrientationInterpolator();
OrientationInterpolator2093.setDEF(CString("Pitch_sacroiliac_YawInterpolator"));
OrientationInterpolator2093.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2093.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2068.addChild(&OrientationInterpolator2093);

OrientationInterpolator& OrientationInterpolator2094 =  OrientationInterpolator();
OrientationInterpolator2094.setDEF(CString("Pitch_vl5_YawInterpolator"));
OrientationInterpolator2094.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2094.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2068.addChild(&OrientationInterpolator2094);

OrientationInterpolator& OrientationInterpolator2095 =  OrientationInterpolator();
OrientationInterpolator2095.setDEF(CString("Pitch_vc6_YawInterpolator"));
OrientationInterpolator2095.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2095.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2068.addChild(&OrientationInterpolator2095);

OrientationInterpolator& OrientationInterpolator2096 =  OrientationInterpolator();
OrientationInterpolator2096.setDEF(CString("Pitch_l_thumb1_PitchInterpolator"));
OrientationInterpolator2096.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2096.setKeyValue(new float[]{1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0}, 24);
Group2068.addChild(&OrientationInterpolator2096);

OrientationInterpolator& OrientationInterpolator2097 =  OrientationInterpolator();
OrientationInterpolator2097.setDEF(CString("Pitch_r_thumb1_PitchInterpolator"));
OrientationInterpolator2097.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2097.setKeyValue(new float[]{1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0}, 24);
Group2068.addChild(&OrientationInterpolator2097);

Scene29.addChild(&Group2068);

Group& Group2098 =  Group();
Group2098.setDEF(CString("YawsAnimation"));
TimeSensor& TimeSensor2099 =  TimeSensor();
TimeSensor2099.setDEF(CString("YawTimer"));
TimeSensor2099.setCycleInterval(5.73);
TimeSensor2099.setLoop(True);
Group2098.addChild(&TimeSensor2099);

OrientationInterpolator& OrientationInterpolator2100 =  OrientationInterpolator();
OrientationInterpolator2100.setDEF(CString("Yaw_r_metatarsal_PitchInterpolator"));
OrientationInterpolator2100.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2100.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2098.addChild(&OrientationInterpolator2100);

OrientationInterpolator& OrientationInterpolator2101 =  OrientationInterpolator();
OrientationInterpolator2101.setDEF(CString("Yaws_r_ankle_RotationInterpolator"));
OrientationInterpolator2101.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2101.setKeyValue(new float[]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0}, 20);
Group2098.addChild(&OrientationInterpolator2101);

OrientationInterpolator& OrientationInterpolator2102 =  OrientationInterpolator();
OrientationInterpolator2102.setDEF(CString("Yaws_r_knee_RotationInterpolator"));
OrientationInterpolator2102.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2102.setKeyValue(new float[]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0}, 20);
Group2098.addChild(&OrientationInterpolator2102);

OrientationInterpolator& OrientationInterpolator2103 =  OrientationInterpolator();
OrientationInterpolator2103.setDEF(CString("Yaws_r_hip_RotationInterpolator"));
OrientationInterpolator2103.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2103.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2098.addChild(&OrientationInterpolator2103);

OrientationInterpolator& OrientationInterpolator2104 =  OrientationInterpolator();
OrientationInterpolator2104.setDEF(CString("Yaws_l_ankle_RotationInterpolator"));
OrientationInterpolator2104.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2104.setKeyValue(new float[]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0}, 20);
Group2098.addChild(&OrientationInterpolator2104);

OrientationInterpolator& OrientationInterpolator2105 =  OrientationInterpolator();
OrientationInterpolator2105.setDEF(CString("Yaws_l_knee_RotationInterpolator"));
OrientationInterpolator2105.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2105.setKeyValue(new float[]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0}, 20);
Group2098.addChild(&OrientationInterpolator2105);

OrientationInterpolator& OrientationInterpolator2106 =  OrientationInterpolator();
OrientationInterpolator2106.setDEF(CString("Yaws_l_hip_RotationInterpolator"));
OrientationInterpolator2106.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2106.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2098.addChild(&OrientationInterpolator2106);

OrientationInterpolator& OrientationInterpolator2107 =  OrientationInterpolator();
OrientationInterpolator2107.setDEF(CString("Yaws_r_wrist_RotationInterpolator"));
OrientationInterpolator2107.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2107.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2098.addChild(&OrientationInterpolator2107);

OrientationInterpolator& OrientationInterpolator2108 =  OrientationInterpolator();
OrientationInterpolator2108.setDEF(CString("Yaws_r_elbow_RotationInterpolator"));
OrientationInterpolator2108.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2108.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2098.addChild(&OrientationInterpolator2108);

OrientationInterpolator& OrientationInterpolator2109 =  OrientationInterpolator();
OrientationInterpolator2109.setDEF(CString("Yaws_r_shoulder_RotationInterpolator"));
OrientationInterpolator2109.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2109.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2098.addChild(&OrientationInterpolator2109);

OrientationInterpolator& OrientationInterpolator2110 =  OrientationInterpolator();
OrientationInterpolator2110.setDEF(CString("Yaws_l_wrist_RotationInterpolator"));
OrientationInterpolator2110.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2110.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2098.addChild(&OrientationInterpolator2110);

OrientationInterpolator& OrientationInterpolator2111 =  OrientationInterpolator();
OrientationInterpolator2111.setDEF(CString("Yaws_l_elbow_RotationInterpolator"));
OrientationInterpolator2111.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2111.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2098.addChild(&OrientationInterpolator2111);

OrientationInterpolator& OrientationInterpolator2112 =  OrientationInterpolator();
OrientationInterpolator2112.setDEF(CString("Yaws_l_shoulder_RotationInterpolator"));
OrientationInterpolator2112.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2112.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2098.addChild(&OrientationInterpolator2112);

OrientationInterpolator& OrientationInterpolator2113 =  OrientationInterpolator();
OrientationInterpolator2113.setDEF(CString("Yaws_head_RotationInterpolator"));
OrientationInterpolator2113.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2113.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2098.addChild(&OrientationInterpolator2113);

OrientationInterpolator& OrientationInterpolator2114 =  OrientationInterpolator();
OrientationInterpolator2114.setDEF(CString("Yaws_neck_RotationInterpolator"));
OrientationInterpolator2114.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2114.setKeyValue(new float[]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0}, 20);
Group2098.addChild(&OrientationInterpolator2114);

OrientationInterpolator& OrientationInterpolator2115 =  OrientationInterpolator();
OrientationInterpolator2115.setDEF(CString("Yaws_upper_body_RotationInterpolator"));
OrientationInterpolator2115.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2115.setKeyValue(new float[]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0}, 20);
Group2098.addChild(&OrientationInterpolator2115);

OrientationInterpolator& OrientationInterpolator2116 =  OrientationInterpolator();
OrientationInterpolator2116.setDEF(CString("Yaws_lower_body_RotationInterpolator"));
OrientationInterpolator2116.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2116.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2098.addChild(&OrientationInterpolator2116);

OrientationInterpolator& OrientationInterpolator2117 =  OrientationInterpolator();
OrientationInterpolator2117.setDEF(CString("Yaws_whole_body_RotationInterpolator"));
OrientationInterpolator2117.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2117.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2098.addChild(&OrientationInterpolator2117);

PositionInterpolator& PositionInterpolator2118 =  PositionInterpolator();
PositionInterpolator2118.setDEF(CString("Yaws_whole_body_TranslationInterpolator"));
PositionInterpolator2118.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator2118.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0}, 9);
Group2098.addChild(&PositionInterpolator2118);

OrientationInterpolator& OrientationInterpolator2119 =  OrientationInterpolator();
OrientationInterpolator2119.setDEF(CString("Yaw_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator2119.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2119.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2098.addChild(&OrientationInterpolator2119);

OrientationInterpolator& OrientationInterpolator2120 =  OrientationInterpolator();
OrientationInterpolator2120.setDEF(CString("Yaw_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator2120.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2120.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2098.addChild(&OrientationInterpolator2120);

OrientationInterpolator& OrientationInterpolator2121 =  OrientationInterpolator();
OrientationInterpolator2121.setDEF(CString("Yaw_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator2121.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2121.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2098.addChild(&OrientationInterpolator2121);

OrientationInterpolator& OrientationInterpolator2122 =  OrientationInterpolator();
OrientationInterpolator2122.setDEF(CString("Yaw_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator2122.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2122.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2098.addChild(&OrientationInterpolator2122);

OrientationInterpolator& OrientationInterpolator2123 =  OrientationInterpolator();
OrientationInterpolator2123.setDEF(CString("Yaw_sacroiliac_YawInterpolator"));
OrientationInterpolator2123.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2123.setKeyValue(new float[]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0}, 24);
Group2098.addChild(&OrientationInterpolator2123);

OrientationInterpolator& OrientationInterpolator2124 =  OrientationInterpolator();
OrientationInterpolator2124.setDEF(CString("Yaw_vl5_YawInterpolator"));
OrientationInterpolator2124.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2124.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2098.addChild(&OrientationInterpolator2124);

OrientationInterpolator& OrientationInterpolator2125 =  OrientationInterpolator();
OrientationInterpolator2125.setDEF(CString("Yaw_vc6_YawInterpolator"));
OrientationInterpolator2125.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2125.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2098.addChild(&OrientationInterpolator2125);

OrientationInterpolator& OrientationInterpolator2126 =  OrientationInterpolator();
OrientationInterpolator2126.setDEF(CString("Yaw_l_thumb1_PitchInterpolator"));
OrientationInterpolator2126.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2126.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2098.addChild(&OrientationInterpolator2126);

OrientationInterpolator& OrientationInterpolator2127 =  OrientationInterpolator();
OrientationInterpolator2127.setDEF(CString("Yaw_r_thumb1_PitchInterpolator"));
OrientationInterpolator2127.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2127.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2098.addChild(&OrientationInterpolator2127);

Scene29.addChild(&Group2098);

Group& Group2128 =  Group();
Group2128.setDEF(CString("RollsAnimation"));
TimeSensor& TimeSensor2129 =  TimeSensor();
TimeSensor2129.setDEF(CString("RollTimer"));
TimeSensor2129.setCycleInterval(5.73);
TimeSensor2129.setLoop(True);
Group2128.addChild(&TimeSensor2129);

OrientationInterpolator& OrientationInterpolator2130 =  OrientationInterpolator();
OrientationInterpolator2130.setDEF(CString("Roll_r_metatarsal_PitchInterpolator"));
OrientationInterpolator2130.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2130.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2128.addChild(&OrientationInterpolator2130);

OrientationInterpolator& OrientationInterpolator2131 =  OrientationInterpolator();
OrientationInterpolator2131.setDEF(CString("Rolls_r_ankle_RotationInterpolator"));
OrientationInterpolator2131.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2131.setKeyValue(new float[]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0}, 20);
Group2128.addChild(&OrientationInterpolator2131);

OrientationInterpolator& OrientationInterpolator2132 =  OrientationInterpolator();
OrientationInterpolator2132.setDEF(CString("Rolls_r_knee_RotationInterpolator"));
OrientationInterpolator2132.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2132.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2128.addChild(&OrientationInterpolator2132);

OrientationInterpolator& OrientationInterpolator2133 =  OrientationInterpolator();
OrientationInterpolator2133.setDEF(CString("Rolls_r_hip_RotationInterpolator"));
OrientationInterpolator2133.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2133.setKeyValue(new float[]{0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0}, 20);
Group2128.addChild(&OrientationInterpolator2133);

OrientationInterpolator& OrientationInterpolator2134 =  OrientationInterpolator();
OrientationInterpolator2134.setDEF(CString("Rolls_l_ankle_RotationInterpolator"));
OrientationInterpolator2134.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2134.setKeyValue(new float[]{0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0}, 20);
Group2128.addChild(&OrientationInterpolator2134);

OrientationInterpolator& OrientationInterpolator2135 =  OrientationInterpolator();
OrientationInterpolator2135.setDEF(CString("Rolls_l_knee_RotationInterpolator"));
OrientationInterpolator2135.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2135.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2128.addChild(&OrientationInterpolator2135);

OrientationInterpolator& OrientationInterpolator2136 =  OrientationInterpolator();
OrientationInterpolator2136.setDEF(CString("Rolls_l_hip_RotationInterpolator"));
OrientationInterpolator2136.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2136.setKeyValue(new float[]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0}, 20);
Group2128.addChild(&OrientationInterpolator2136);

OrientationInterpolator& OrientationInterpolator2137 =  OrientationInterpolator();
OrientationInterpolator2137.setDEF(CString("Rolls_r_wrist_RotationInterpolator"));
OrientationInterpolator2137.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2137.setKeyValue(new float[]{0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0}, 20);
Group2128.addChild(&OrientationInterpolator2137);

OrientationInterpolator& OrientationInterpolator2138 =  OrientationInterpolator();
OrientationInterpolator2138.setDEF(CString("Rolls_r_elbow_RotationInterpolator"));
OrientationInterpolator2138.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2138.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2128.addChild(&OrientationInterpolator2138);

OrientationInterpolator& OrientationInterpolator2139 =  OrientationInterpolator();
OrientationInterpolator2139.setDEF(CString("Rolls_r_shoulder_RotationInterpolator"));
OrientationInterpolator2139.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2139.setKeyValue(new float[]{0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0}, 20);
Group2128.addChild(&OrientationInterpolator2139);

OrientationInterpolator& OrientationInterpolator2140 =  OrientationInterpolator();
OrientationInterpolator2140.setDEF(CString("Rolls_l_wrist_RotationInterpolator"));
OrientationInterpolator2140.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2140.setKeyValue(new float[]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0}, 20);
Group2128.addChild(&OrientationInterpolator2140);

OrientationInterpolator& OrientationInterpolator2141 =  OrientationInterpolator();
OrientationInterpolator2141.setDEF(CString("Rolls_l_elbow_RotationInterpolator"));
OrientationInterpolator2141.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2141.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2128.addChild(&OrientationInterpolator2141);

OrientationInterpolator& OrientationInterpolator2142 =  OrientationInterpolator();
OrientationInterpolator2142.setDEF(CString("Rolls_l_shoulder_RotationInterpolator"));
OrientationInterpolator2142.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2142.setKeyValue(new float[]{0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0}, 20);
Group2128.addChild(&OrientationInterpolator2142);

OrientationInterpolator& OrientationInterpolator2143 =  OrientationInterpolator();
OrientationInterpolator2143.setDEF(CString("Rolls_head_RotationInterpolator"));
OrientationInterpolator2143.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2143.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2128.addChild(&OrientationInterpolator2143);

OrientationInterpolator& OrientationInterpolator2144 =  OrientationInterpolator();
OrientationInterpolator2144.setDEF(CString("Rolls_neck_RotationInterpolator"));
OrientationInterpolator2144.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2144.setKeyValue(new float[]{0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0}, 20);
Group2128.addChild(&OrientationInterpolator2144);

OrientationInterpolator& OrientationInterpolator2145 =  OrientationInterpolator();
OrientationInterpolator2145.setDEF(CString("Rolls_lower_body_RotationInterpolator"));
OrientationInterpolator2145.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2145.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2128.addChild(&OrientationInterpolator2145);

OrientationInterpolator& OrientationInterpolator2146 =  OrientationInterpolator();
OrientationInterpolator2146.setDEF(CString("Rolls_upper_body_RotationInterpolator"));
OrientationInterpolator2146.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2146.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2128.addChild(&OrientationInterpolator2146);

OrientationInterpolator& OrientationInterpolator2147 =  OrientationInterpolator();
OrientationInterpolator2147.setDEF(CString("Rolls_whole_body_RotationInterpolator"));
OrientationInterpolator2147.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2147.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2128.addChild(&OrientationInterpolator2147);

PositionInterpolator& PositionInterpolator2148 =  PositionInterpolator();
PositionInterpolator2148.setDEF(CString("Rolls_whole_body_TranslationInterpolator"));
PositionInterpolator2148.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
PositionInterpolator2148.setKeyValue(new float[]{0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0}, 27);
Group2128.addChild(&PositionInterpolator2148);

OrientationInterpolator& OrientationInterpolator2149 =  OrientationInterpolator();
OrientationInterpolator2149.setDEF(CString("Roll_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator2149.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2149.setKeyValue(new float[]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0}, 24);
Group2128.addChild(&OrientationInterpolator2149);

OrientationInterpolator& OrientationInterpolator2150 =  OrientationInterpolator();
OrientationInterpolator2150.setDEF(CString("Roll_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator2150.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2150.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2128.addChild(&OrientationInterpolator2150);

OrientationInterpolator& OrientationInterpolator2151 =  OrientationInterpolator();
OrientationInterpolator2151.setDEF(CString("Roll_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator2151.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2151.setKeyValue(new float[]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0}, 24);
Group2128.addChild(&OrientationInterpolator2151);

OrientationInterpolator& OrientationInterpolator2152 =  OrientationInterpolator();
OrientationInterpolator2152.setDEF(CString("Roll_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator2152.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2152.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2128.addChild(&OrientationInterpolator2152);

OrientationInterpolator& OrientationInterpolator2153 =  OrientationInterpolator();
OrientationInterpolator2153.setDEF(CString("Roll_sacroiliac_YawInterpolator"));
OrientationInterpolator2153.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2153.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2128.addChild(&OrientationInterpolator2153);

OrientationInterpolator& OrientationInterpolator2154 =  OrientationInterpolator();
OrientationInterpolator2154.setDEF(CString("Roll_vl5_YawInterpolator"));
OrientationInterpolator2154.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2154.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2128.addChild(&OrientationInterpolator2154);

OrientationInterpolator& OrientationInterpolator2155 =  OrientationInterpolator();
OrientationInterpolator2155.setDEF(CString("Roll_vc6_YawInterpolator"));
OrientationInterpolator2155.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2155.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2128.addChild(&OrientationInterpolator2155);

OrientationInterpolator& OrientationInterpolator2156 =  OrientationInterpolator();
OrientationInterpolator2156.setDEF(CString("Roll_l_thumb1_PitchInterpolator"));
OrientationInterpolator2156.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2156.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2128.addChild(&OrientationInterpolator2156);

OrientationInterpolator& OrientationInterpolator2157 =  OrientationInterpolator();
OrientationInterpolator2157.setDEF(CString("Roll_r_thumb1_PitchInterpolator"));
OrientationInterpolator2157.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2157.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2128.addChild(&OrientationInterpolator2157);

Scene29.addChild(&Group2128);

Group& Group2158 =  Group();
Group2158.setDEF(CString("WalkAnimation"));
TimeSensor& TimeSensor2159 =  TimeSensor();
TimeSensor2159.setDEF(CString("WalkTimer"));
TimeSensor2159.setCycleInterval(1.73);
TimeSensor2159.setLoop(True);
Group2158.addChild(&TimeSensor2159);

OrientationInterpolator& OrientationInterpolator2160 =  OrientationInterpolator();
OrientationInterpolator2160.setDEF(CString("Walk_r_metatarsal_PitchInterpolator"));
OrientationInterpolator2160.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2160.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2158.addChild(&OrientationInterpolator2160);

OrientationInterpolator& OrientationInterpolator2161 =  OrientationInterpolator();
OrientationInterpolator2161.setDEF(CString("Walk_r_ankle_RotationInterpolator"));
OrientationInterpolator2161.setKey(new float[]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator2161.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0}, 44);
Group2158.addChild(&OrientationInterpolator2161);

OrientationInterpolator& OrientationInterpolator2162 =  OrientationInterpolator();
OrientationInterpolator2162.setDEF(CString("Walk_r_knee_RotationInterpolator"));
OrientationInterpolator2162.setKey(new float[]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator2162.setKeyValue(new float[]{1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573}, 40);
Group2158.addChild(&OrientationInterpolator2162);

OrientationInterpolator& OrientationInterpolator2163 =  OrientationInterpolator();
OrientationInterpolator2163.setDEF(CString("Walk_r_hip_RotationInterpolator"));
OrientationInterpolator2163.setKey(new float[]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator2163.setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 40);
Group2158.addChild(&OrientationInterpolator2163);

OrientationInterpolator& OrientationInterpolator2164 =  OrientationInterpolator();
OrientationInterpolator2164.setDEF(CString("Walk_l_ankle_RotationInterpolator"));
OrientationInterpolator2164.setKey(new float[]{0,0.125,0.2083,0.375,0.6667,0.9167,1}, 7);
OrientationInterpolator2164.setKeyValue(new float[]{-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714}, 28);
Group2158.addChild(&OrientationInterpolator2164);

OrientationInterpolator& OrientationInterpolator2165 =  OrientationInterpolator();
OrientationInterpolator2165.setDEF(CString("Walk_l_knee_RotationInterpolator"));
OrientationInterpolator2165.setKey(new float[]{0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator2165.setKeyValue(new float[]{1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226}, 32);
Group2158.addChild(&OrientationInterpolator2165);

OrientationInterpolator& OrientationInterpolator2166 =  OrientationInterpolator();
OrientationInterpolator2166.setDEF(CString("Walk_l_hip_RotationInterpolator"));
OrientationInterpolator2166.setKey(new float[]{0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator2166.setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 32);
Group2158.addChild(&OrientationInterpolator2166);

OrientationInterpolator& OrientationInterpolator2167 =  OrientationInterpolator();
OrientationInterpolator2167.setDEF(CString("Walk_lower_body_RotationInterpolator"));
OrientationInterpolator2167.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2167.setKeyValue(new float[]{0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056}, 12);
Group2158.addChild(&OrientationInterpolator2167);

OrientationInterpolator& OrientationInterpolator2168 =  OrientationInterpolator();
OrientationInterpolator2168.setDEF(CString("Walk_r_wrist_RotationInterpolator"));
OrientationInterpolator2168.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator2168.setKeyValue(new float[]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346}, 16);
Group2158.addChild(&OrientationInterpolator2168);

OrientationInterpolator& OrientationInterpolator2169 =  OrientationInterpolator();
OrientationInterpolator2169.setDEF(CString("Walk_r_elbow_RotationInterpolator"));
OrientationInterpolator2169.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator2169.setKeyValue(new float[]{-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508}, 16);
Group2158.addChild(&OrientationInterpolator2169);

OrientationInterpolator& OrientationInterpolator2170 =  OrientationInterpolator();
OrientationInterpolator2170.setDEF(CString("Walk_r_shoulder_RotationInterpolator"));
OrientationInterpolator2170.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator2170.setKeyValue(new float[]{-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346}, 16);
Group2158.addChild(&OrientationInterpolator2170);

OrientationInterpolator& OrientationInterpolator2171 =  OrientationInterpolator();
OrientationInterpolator2171.setDEF(CString("Walk_l_wrist_RotationInterpolator"));
OrientationInterpolator2171.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator2171.setKeyValue(new float[]{0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076}, 16);
Group2158.addChild(&OrientationInterpolator2171);

OrientationInterpolator& OrientationInterpolator2172 =  OrientationInterpolator();
OrientationInterpolator2172.setDEF(CString("Walk_l_elbow_RotationInterpolator"));
OrientationInterpolator2172.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator2172.setKeyValue(new float[]{-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878}, 16);
Group2158.addChild(&OrientationInterpolator2172);

OrientationInterpolator& OrientationInterpolator2173 =  OrientationInterpolator();
OrientationInterpolator2173.setDEF(CString("Walk_l_shoulder_RotationInterpolator"));
OrientationInterpolator2173.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator2173.setKeyValue(new float[]{1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189}, 16);
Group2158.addChild(&OrientationInterpolator2173);

OrientationInterpolator& OrientationInterpolator2174 =  OrientationInterpolator();
OrientationInterpolator2174.setDEF(CString("Walk_head_RotationInterpolator"));
OrientationInterpolator2174.setKey(new float[]{0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1}, 10);
OrientationInterpolator2174.setKeyValue(new float[]{0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642}, 40);
Group2158.addChild(&OrientationInterpolator2174);

OrientationInterpolator& OrientationInterpolator2175 =  OrientationInterpolator();
OrientationInterpolator2175.setDEF(CString("Walk_neck_RotationInterpolator"));
OrientationInterpolator2175.setKey(new float[]{0,1}, 2);
OrientationInterpolator2175.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group2158.addChild(&OrientationInterpolator2175);

OrientationInterpolator& OrientationInterpolator2176 =  OrientationInterpolator();
OrientationInterpolator2176.setDEF(CString("Walk_upper_body_RotationInterpolator"));
OrientationInterpolator2176.setKey(new float[]{0,0.2083,0.375,0.75,0.8333,1}, 6);
OrientationInterpolator2176.setKeyValue(new float[]{0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826}, 24);
Group2158.addChild(&OrientationInterpolator2176);

OrientationInterpolator& OrientationInterpolator2177 =  OrientationInterpolator();
OrientationInterpolator2177.setDEF(CString("Walk_whole_body_RotationInterpolator"));
OrientationInterpolator2177.setKey(new float[]{0,1}, 2);
OrientationInterpolator2177.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group2158.addChild(&OrientationInterpolator2177);

PositionInterpolator& PositionInterpolator2178 =  PositionInterpolator();
PositionInterpolator2178.setDEF(CString("Walk_whole_body_TranslationInterpolator"));
PositionInterpolator2178.setKey(new float[]{0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1}, 19);
PositionInterpolator2178.setKeyValue(new float[]{0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0}, 57);
Group2158.addChild(&PositionInterpolator2178);

OrientationInterpolator& OrientationInterpolator2179 =  OrientationInterpolator();
OrientationInterpolator2179.setDEF(CString("Walk_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator2179.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2179.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2158.addChild(&OrientationInterpolator2179);

OrientationInterpolator& OrientationInterpolator2180 =  OrientationInterpolator();
OrientationInterpolator2180.setDEF(CString("Walk_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator2180.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2180.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2158.addChild(&OrientationInterpolator2180);

OrientationInterpolator& OrientationInterpolator2181 =  OrientationInterpolator();
OrientationInterpolator2181.setDEF(CString("Walk_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator2181.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2181.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2158.addChild(&OrientationInterpolator2181);

OrientationInterpolator& OrientationInterpolator2182 =  OrientationInterpolator();
OrientationInterpolator2182.setDEF(CString("Walk_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator2182.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2182.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2158.addChild(&OrientationInterpolator2182);

OrientationInterpolator& OrientationInterpolator2183 =  OrientationInterpolator();
OrientationInterpolator2183.setDEF(CString("Walk_sacroiliac_YawInterpolator"));
OrientationInterpolator2183.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2183.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2158.addChild(&OrientationInterpolator2183);

OrientationInterpolator& OrientationInterpolator2184 =  OrientationInterpolator();
OrientationInterpolator2184.setDEF(CString("Walk_vl5_YawInterpolator"));
OrientationInterpolator2184.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2184.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2158.addChild(&OrientationInterpolator2184);

OrientationInterpolator& OrientationInterpolator2185 =  OrientationInterpolator();
OrientationInterpolator2185.setDEF(CString("Walk_vc6_YawInterpolator"));
OrientationInterpolator2185.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2185.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2158.addChild(&OrientationInterpolator2185);

OrientationInterpolator& OrientationInterpolator2186 =  OrientationInterpolator();
OrientationInterpolator2186.setDEF(CString("Walk_l_thumb1_PitchInterpolator"));
OrientationInterpolator2186.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2186.setKeyValue(new float[]{1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0}, 24);
Group2158.addChild(&OrientationInterpolator2186);

OrientationInterpolator& OrientationInterpolator2187 =  OrientationInterpolator();
OrientationInterpolator2187.setDEF(CString("Walk_r_thumb1_PitchInterpolator"));
OrientationInterpolator2187.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2187.setKeyValue(new float[]{1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0}, 24);
Group2158.addChild(&OrientationInterpolator2187);

Scene29.addChild(&Group2158);

Group& Group2188 =  Group();
Group2188.setDEF(CString("RunAnimation"));
TimeSensor& TimeSensor2189 =  TimeSensor();
TimeSensor2189.setDEF(CString("RunTimer"));
TimeSensor2189.setCycleInterval(0.9);
TimeSensor2189.setLoop(True);
Group2188.addChild(&TimeSensor2189);

OrientationInterpolator& OrientationInterpolator2190 =  OrientationInterpolator();
OrientationInterpolator2190.setDEF(CString("Run_r_metatarsal_PitchInterpolator"));
OrientationInterpolator2190.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2190.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2188.addChild(&OrientationInterpolator2190);

OrientationInterpolator& OrientationInterpolator2191 =  OrientationInterpolator();
OrientationInterpolator2191.setDEF(CString("Run_l_hip_RotationInterpolator_Run"));
OrientationInterpolator2191.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator2191.setKeyValue(new float[]{-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42}, 20);
Group2188.addChild(&OrientationInterpolator2191);

OrientationInterpolator& OrientationInterpolator2192 =  OrientationInterpolator();
OrientationInterpolator2192.setDEF(CString("Run_l_knee_RotationInterpolator_Run"));
OrientationInterpolator2192.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator2192.setKeyValue(new float[]{1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01}, 20);
Group2188.addChild(&OrientationInterpolator2192);

OrientationInterpolator& OrientationInterpolator2193 =  OrientationInterpolator();
OrientationInterpolator2193.setDEF(CString("Run_l_ankle_RotationInterpolator_Run"));
OrientationInterpolator2193.setKey(new float[]{0,0.22,0.3,0.4,1}, 5);
OrientationInterpolator2193.setKeyValue(new float[]{1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574}, 20);
Group2188.addChild(&OrientationInterpolator2193);

OrientationInterpolator& OrientationInterpolator2194 =  OrientationInterpolator();
OrientationInterpolator2194.setDEF(CString("Run_r_hip_RotationInterpolator_Run"));
OrientationInterpolator2194.setKey(new float[]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator2194.setKeyValue(new float[]{0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9}, 20);
Group2188.addChild(&OrientationInterpolator2194);

OrientationInterpolator& OrientationInterpolator2195 =  OrientationInterpolator();
OrientationInterpolator2195.setDEF(CString("Run_r_knee_RotationInterpolator_Run"));
OrientationInterpolator2195.setKey(new float[]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator2195.setKeyValue(new float[]{1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705}, 20);
Group2188.addChild(&OrientationInterpolator2195);

OrientationInterpolator& OrientationInterpolator2196 =  OrientationInterpolator();
OrientationInterpolator2196.setDEF(CString("Run_r_ankle_RotationInterpolator_Run"));
OrientationInterpolator2196.setKey(new float[]{0,0.4,0.71,0.8,0.82,1}, 6);
OrientationInterpolator2196.setKeyValue(new float[]{1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323}, 24);
Group2188.addChild(&OrientationInterpolator2196);

OrientationInterpolator& OrientationInterpolator2197 =  OrientationInterpolator();
OrientationInterpolator2197.setDEF(CString("Run_l_shoulder_RotationInterpolator_Run"));
OrientationInterpolator2197.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator2197.setKeyValue(new float[]{0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5}, 20);
Group2188.addChild(&OrientationInterpolator2197);

OrientationInterpolator& OrientationInterpolator2198 =  OrientationInterpolator();
OrientationInterpolator2198.setDEF(CString("Run_l_elbow_RotationInterpolator_Run"));
OrientationInterpolator2198.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator2198.setKeyValue(new float[]{-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85}, 20);
Group2188.addChild(&OrientationInterpolator2198);

OrientationInterpolator& OrientationInterpolator2199 =  OrientationInterpolator();
OrientationInterpolator2199.setDEF(CString("Run_l_wrist_RotationInterpolator_Run"));
OrientationInterpolator2199.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2199.setKeyValue(new float[]{-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14}, 20);
Group2188.addChild(&OrientationInterpolator2199);

OrientationInterpolator& OrientationInterpolator2200 =  OrientationInterpolator();
OrientationInterpolator2200.setDEF(CString("Run_r_shoulder_RotationInterpolator_Run"));
OrientationInterpolator2200.setKey(new float[]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator2200.setKeyValue(new float[]{-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85}, 20);
Group2188.addChild(&OrientationInterpolator2200);

OrientationInterpolator& OrientationInterpolator2201 =  OrientationInterpolator();
OrientationInterpolator2201.setDEF(CString("Run_r_elbow_RotationInterpolator_Run"));
OrientationInterpolator2201.setKey(new float[]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator2201.setKeyValue(new float[]{-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975}, 20);
Group2188.addChild(&OrientationInterpolator2201);

OrientationInterpolator& OrientationInterpolator2202 =  OrientationInterpolator();
OrientationInterpolator2202.setDEF(CString("Run_r_wrist_RotationInterpolator_Run"));
OrientationInterpolator2202.setKey(new float[]{0,1}, 2);
OrientationInterpolator2202.setKeyValue(new float[]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273}, 8);
Group2188.addChild(&OrientationInterpolator2202);

OrientationInterpolator& OrientationInterpolator2203 =  OrientationInterpolator();
OrientationInterpolator2203.setDEF(CString("Run_lower_body_RotationInterpolator_Run"));
OrientationInterpolator2203.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator2203.setKeyValue(new float[]{0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125}, 20);
Group2188.addChild(&OrientationInterpolator2203);

OrientationInterpolator& OrientationInterpolator2204 =  OrientationInterpolator();
OrientationInterpolator2204.setDEF(CString("Run_head_RotationInterpolator_Run"));
OrientationInterpolator2204.setKey(new float[]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator2204.setKeyValue(new float[]{1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08}, 20);
Group2188.addChild(&OrientationInterpolator2204);

OrientationInterpolator& OrientationInterpolator2205 =  OrientationInterpolator();
OrientationInterpolator2205.setDEF(CString("Run_neck_RotationInterpolator_Run"));
OrientationInterpolator2205.setKey(new float[]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator2205.setKeyValue(new float[]{0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4}, 20);
Group2188.addChild(&OrientationInterpolator2205);

OrientationInterpolator& OrientationInterpolator2206 =  OrientationInterpolator();
OrientationInterpolator2206.setDEF(CString("Run_upper_body_RotationInterpolator_Run"));
OrientationInterpolator2206.setKey(new float[]{0,0.2545,0.4909,0.7636,1}, 5);
OrientationInterpolator2206.setKeyValue(new float[]{0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5}, 20);
Group2188.addChild(&OrientationInterpolator2206);

OrientationInterpolator& OrientationInterpolator2207 =  OrientationInterpolator();
OrientationInterpolator2207.setDEF(CString("Run_whole_body_RotationInterpolator_Run"));
OrientationInterpolator2207.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2207.setKeyValue(new float[]{1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06}, 20);
Group2188.addChild(&OrientationInterpolator2207);

PositionInterpolator& PositionInterpolator2208 =  PositionInterpolator();
PositionInterpolator2208.setDEF(CString("Run_whole_body_TranslationInterpolator_Run"));
PositionInterpolator2208.setKey(new float[]{0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1}, 9);
PositionInterpolator2208.setKeyValue(new float[]{0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0}, 27);
Group2188.addChild(&PositionInterpolator2208);

OrientationInterpolator& OrientationInterpolator2209 =  OrientationInterpolator();
OrientationInterpolator2209.setDEF(CString("Run_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator2209.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2209.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2188.addChild(&OrientationInterpolator2209);

OrientationInterpolator& OrientationInterpolator2210 =  OrientationInterpolator();
OrientationInterpolator2210.setDEF(CString("Run_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator2210.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2210.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2188.addChild(&OrientationInterpolator2210);

OrientationInterpolator& OrientationInterpolator2211 =  OrientationInterpolator();
OrientationInterpolator2211.setDEF(CString("Run_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator2211.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2211.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2188.addChild(&OrientationInterpolator2211);

OrientationInterpolator& OrientationInterpolator2212 =  OrientationInterpolator();
OrientationInterpolator2212.setDEF(CString("Run_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator2212.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2212.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2188.addChild(&OrientationInterpolator2212);

OrientationInterpolator& OrientationInterpolator2213 =  OrientationInterpolator();
OrientationInterpolator2213.setDEF(CString("Run_sacroiliac_YawInterpolator"));
OrientationInterpolator2213.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2213.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2188.addChild(&OrientationInterpolator2213);

OrientationInterpolator& OrientationInterpolator2214 =  OrientationInterpolator();
OrientationInterpolator2214.setDEF(CString("Run_vl5_YawInterpolator"));
OrientationInterpolator2214.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2214.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2188.addChild(&OrientationInterpolator2214);

OrientationInterpolator& OrientationInterpolator2215 =  OrientationInterpolator();
OrientationInterpolator2215.setDEF(CString("Run_vc6_YawInterpolator"));
OrientationInterpolator2215.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2215.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2188.addChild(&OrientationInterpolator2215);

OrientationInterpolator& OrientationInterpolator2216 =  OrientationInterpolator();
OrientationInterpolator2216.setDEF(CString("Run_l_thumb1_PitchInterpolator"));
OrientationInterpolator2216.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2216.setKeyValue(new float[]{1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0}, 24);
Group2188.addChild(&OrientationInterpolator2216);

OrientationInterpolator& OrientationInterpolator2217 =  OrientationInterpolator();
OrientationInterpolator2217.setDEF(CString("Run_r_thumb1_PitchInterpolator"));
OrientationInterpolator2217.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2217.setKeyValue(new float[]{1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0}, 24);
Group2188.addChild(&OrientationInterpolator2217);

Scene29.addChild(&Group2188);

Group& Group2218 =  Group();
Group2218.setDEF(CString("JumpAnimation"));
TimeSensor& TimeSensor2219 =  TimeSensor();
TimeSensor2219.setDEF(CString("JumpTimer"));
TimeSensor2219.setCycleInterval(3.73);
TimeSensor2219.setLoop(True);
Group2218.addChild(&TimeSensor2219);

OrientationInterpolator& OrientationInterpolator2220 =  OrientationInterpolator();
OrientationInterpolator2220.setDEF(CString("Jump_r_metatarsal_PitchInterpolator"));
OrientationInterpolator2220.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2220.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2218.addChild(&OrientationInterpolator2220);

OrientationInterpolator& OrientationInterpolator2221 =  OrientationInterpolator();
OrientationInterpolator2221.setDEF(CString("Jump_r_ankle_RotationInterpolator"));
OrientationInterpolator2221.setKey(new float[]{0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator2221.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0}, 56);
Group2218.addChild(&OrientationInterpolator2221);

OrientationInterpolator& OrientationInterpolator2222 =  OrientationInterpolator();
OrientationInterpolator2222.setDEF(CString("Jump_r_knee_RotationInterpolator"));
OrientationInterpolator2222.setKey(new float[]{0,0.2,0.25,0.3,0.64,0.76,0.88,1}, 8);
OrientationInterpolator2222.setKeyValue(new float[]{0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0}, 32);
Group2218.addChild(&OrientationInterpolator2222);

OrientationInterpolator& OrientationInterpolator2223 =  OrientationInterpolator();
OrientationInterpolator2223.setDEF(CString("Jump_r_hip_RotationInterpolator"));
OrientationInterpolator2223.setKey(new float[]{0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator2223.setKeyValue(new float[]{0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0}, 44);
Group2218.addChild(&OrientationInterpolator2223);

OrientationInterpolator& OrientationInterpolator2224 =  OrientationInterpolator();
OrientationInterpolator2224.setDEF(CString("Jump_l_ankle_RotationInterpolator"));
OrientationInterpolator2224.setKey(new float[]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator2224.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0}, 56);
Group2218.addChild(&OrientationInterpolator2224);

OrientationInterpolator& OrientationInterpolator2225 =  OrientationInterpolator();
OrientationInterpolator2225.setDEF(CString("Jump_l_knee_RotationInterpolator"));
OrientationInterpolator2225.setKey(new float[]{0,0.28,0.32,0.48,0.64,0.76,0.88,1}, 8);
OrientationInterpolator2225.setKeyValue(new float[]{0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0}, 32);
Group2218.addChild(&OrientationInterpolator2225);

OrientationInterpolator& OrientationInterpolator2226 =  OrientationInterpolator();
OrientationInterpolator2226.setDEF(CString("Jump_l_hip_RotationInterpolator"));
OrientationInterpolator2226.setKey(new float[]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator2226.setKeyValue(new float[]{0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0}, 44);
Group2218.addChild(&OrientationInterpolator2226);

OrientationInterpolator& OrientationInterpolator2227 =  OrientationInterpolator();
OrientationInterpolator2227.setDEF(CString("Jump_lower_body_RotationInterpolator"));
OrientationInterpolator2227.setKey(new float[]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator2227.setKeyValue(new float[]{0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2218.addChild(&OrientationInterpolator2227);

OrientationInterpolator& OrientationInterpolator2228 =  OrientationInterpolator();
OrientationInterpolator2228.setDEF(CString("Jump_r_wrist_RotationInterpolator"));
OrientationInterpolator2228.setKey(new float[]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator2228.setKeyValue(new float[]{0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0}, 24);
Group2218.addChild(&OrientationInterpolator2228);

OrientationInterpolator& OrientationInterpolator2229 =  OrientationInterpolator();
OrientationInterpolator2229.setDEF(CString("Jump_r_elbow_RotationInterpolator"));
OrientationInterpolator2229.setKey(new float[]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator2229.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0}, 24);
Group2218.addChild(&OrientationInterpolator2229);

OrientationInterpolator& OrientationInterpolator2230 =  OrientationInterpolator();
OrientationInterpolator2230.setDEF(CString("Jump_r_shoulder_RotationInterpolator"));
OrientationInterpolator2230.setKey(new float[]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator2230.setKeyValue(new float[]{0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0}, 28);
Group2218.addChild(&OrientationInterpolator2230);

OrientationInterpolator& OrientationInterpolator2231 =  OrientationInterpolator();
OrientationInterpolator2231.setDEF(CString("Jump_l_wrist_RotationInterpolator"));
OrientationInterpolator2231.setKey(new float[]{0,0.48,0.52,0.64,0.76,0.88,1}, 7);
OrientationInterpolator2231.setKeyValue(new float[]{0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0}, 28);
Group2218.addChild(&OrientationInterpolator2231);

OrientationInterpolator& OrientationInterpolator2232 =  OrientationInterpolator();
OrientationInterpolator2232.setDEF(CString("Jump_l_elbow_RotationInterpolator"));
OrientationInterpolator2232.setKey(new float[]{0,0.28,0.32,0.58,0.72,1}, 6);
OrientationInterpolator2232.setKeyValue(new float[]{0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0}, 24);
Group2218.addChild(&OrientationInterpolator2232);

OrientationInterpolator& OrientationInterpolator2233 =  OrientationInterpolator();
OrientationInterpolator2233.setDEF(CString("Jump_l_shoulder_RotationInterpolator"));
OrientationInterpolator2233.setKey(new float[]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator2233.setKeyValue(new float[]{0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0}, 28);
Group2218.addChild(&OrientationInterpolator2233);

OrientationInterpolator& OrientationInterpolator2234 =  OrientationInterpolator();
OrientationInterpolator2234.setDEF(CString("Jump_head_RotationInterpolator"));
OrientationInterpolator2234.setKey(new float[]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator2234.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0}, 24);
Group2218.addChild(&OrientationInterpolator2234);

OrientationInterpolator& OrientationInterpolator2235 =  OrientationInterpolator();
OrientationInterpolator2235.setDEF(CString("Jump_neck_RotationInterpolator"));
OrientationInterpolator2235.setKey(new float[]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator2235.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0}, 24);
Group2218.addChild(&OrientationInterpolator2235);

OrientationInterpolator& OrientationInterpolator2236 =  OrientationInterpolator();
OrientationInterpolator2236.setDEF(CString("Jump_upper_body_RotationInterpolator"));
OrientationInterpolator2236.setKey(new float[]{0,0.22,0.28,0.34,0.71,0.88,1}, 7);
OrientationInterpolator2236.setKeyValue(new float[]{0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0}, 28);
Group2218.addChild(&OrientationInterpolator2236);

OrientationInterpolator& OrientationInterpolator2237 =  OrientationInterpolator();
OrientationInterpolator2237.setDEF(CString("Jump_whole_body_RotationInterpolator"));
OrientationInterpolator2237.setKey(new float[]{0,0.28,0.32,0.48,0.64,0.76,1}, 7);
OrientationInterpolator2237.setKeyValue(new float[]{0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2218.addChild(&OrientationInterpolator2237);

PositionInterpolator& PositionInterpolator2238 =  PositionInterpolator();
PositionInterpolator2238.setDEF(CString("Jump_whole_body_TranslationInterpolator"));
PositionInterpolator2238.setKey(new float[]{0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1}, 22);
PositionInterpolator2238.setKeyValue(new float[]{0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0}, 66);
Group2218.addChild(&PositionInterpolator2238);

OrientationInterpolator& OrientationInterpolator2239 =  OrientationInterpolator();
OrientationInterpolator2239.setDEF(CString("Jump_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator2239.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2239.setKeyValue(new float[]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0}, 24);
Group2218.addChild(&OrientationInterpolator2239);

OrientationInterpolator& OrientationInterpolator2240 =  OrientationInterpolator();
OrientationInterpolator2240.setDEF(CString("Jump_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator2240.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2240.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2218.addChild(&OrientationInterpolator2240);

OrientationInterpolator& OrientationInterpolator2241 =  OrientationInterpolator();
OrientationInterpolator2241.setDEF(CString("Jump_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator2241.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2241.setKeyValue(new float[]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0}, 24);
Group2218.addChild(&OrientationInterpolator2241);

OrientationInterpolator& OrientationInterpolator2242 =  OrientationInterpolator();
OrientationInterpolator2242.setDEF(CString("Jump_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator2242.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2242.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2218.addChild(&OrientationInterpolator2242);

OrientationInterpolator& OrientationInterpolator2243 =  OrientationInterpolator();
OrientationInterpolator2243.setDEF(CString("Jump_sacroiliac_YawInterpolator"));
OrientationInterpolator2243.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2243.setKeyValue(new float[]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0}, 24);
Group2218.addChild(&OrientationInterpolator2243);

OrientationInterpolator& OrientationInterpolator2244 =  OrientationInterpolator();
OrientationInterpolator2244.setDEF(CString("Jump_vl5_YawInterpolator"));
OrientationInterpolator2244.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2244.setKeyValue(new float[]{0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0}, 28);
Group2218.addChild(&OrientationInterpolator2244);

OrientationInterpolator& OrientationInterpolator2245 =  OrientationInterpolator();
OrientationInterpolator2245.setDEF(CString("Jump_vc6_YawInterpolator"));
OrientationInterpolator2245.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2245.setKeyValue(new float[]{0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0}, 28);
Group2218.addChild(&OrientationInterpolator2245);

OrientationInterpolator& OrientationInterpolator2246 =  OrientationInterpolator();
OrientationInterpolator2246.setDEF(CString("Jump_l_thumb1_PitchInterpolator"));
OrientationInterpolator2246.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2246.setKeyValue(new float[]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0}, 24);
Group2218.addChild(&OrientationInterpolator2246);

OrientationInterpolator& OrientationInterpolator2247 =  OrientationInterpolator();
OrientationInterpolator2247.setDEF(CString("Jump_r_thumb1_PitchInterpolator"));
OrientationInterpolator2247.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2247.setKeyValue(new float[]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0}, 24);
Group2218.addChild(&OrientationInterpolator2247);

Scene29.addChild(&Group2218);

Group& Group2248 =  Group();
Group2248.setDEF(CString("KickAnimation"));
TimeSensor& TimeSensor2249 =  TimeSensor();
TimeSensor2249.setDEF(CString("KickTimer"));
TimeSensor2249.setCycleInterval(3.73);
TimeSensor2249.setLoop(True);
Group2248.addChild(&TimeSensor2249);

OrientationInterpolator& OrientationInterpolator2250 =  OrientationInterpolator();
OrientationInterpolator2250.setDEF(CString("Kick_l_sternoclavicular_RollInterpolator"));
OrientationInterpolator2250.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2250.setKeyValue(new float[]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0}, 24);
Group2248.addChild(&OrientationInterpolator2250);

OrientationInterpolator& OrientationInterpolator2251 =  OrientationInterpolator();
OrientationInterpolator2251.setDEF(CString("Kick_l_acromioclavicular_RollInterpolator"));
OrientationInterpolator2251.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2251.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2248.addChild(&OrientationInterpolator2251);

OrientationInterpolator& OrientationInterpolator2252 =  OrientationInterpolator();
OrientationInterpolator2252.setDEF(CString("Kick_l_shoulder_RollInterpolator"));
OrientationInterpolator2252.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2252.setKeyValue(new float[]{0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0}, 24);
Group2248.addChild(&OrientationInterpolator2252);

OrientationInterpolator& OrientationInterpolator2253 =  OrientationInterpolator();
OrientationInterpolator2253.setDEF(CString("Kick_l_ForeArm_PitchInterpolator"));
OrientationInterpolator2253.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2253.setKeyValue(new float[]{1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0}, 24);
Group2248.addChild(&OrientationInterpolator2253);

OrientationInterpolator& OrientationInterpolator2254 =  OrientationInterpolator();
OrientationInterpolator2254.setDEF(CString("Kick_l_wrist_RollInterpolator"));
OrientationInterpolator2254.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2254.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2248.addChild(&OrientationInterpolator2254);

OrientationInterpolator& OrientationInterpolator2255 =  OrientationInterpolator();
OrientationInterpolator2255.setDEF(CString("Kick_l_thumb1_PitchInterpolator"));
OrientationInterpolator2255.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2255.setKeyValue(new float[]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0}, 24);
Group2248.addChild(&OrientationInterpolator2255);

OrientationInterpolator& OrientationInterpolator2256 =  OrientationInterpolator();
OrientationInterpolator2256.setDEF(CString("Kick_r_sternoclavicular_RollInterpolator"));
OrientationInterpolator2256.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2256.setKeyValue(new float[]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0}, 24);
Group2248.addChild(&OrientationInterpolator2256);

OrientationInterpolator& OrientationInterpolator2257 =  OrientationInterpolator();
OrientationInterpolator2257.setDEF(CString("Kick_r_acromioclavicular_RollInterpolator"));
OrientationInterpolator2257.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2257.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2248.addChild(&OrientationInterpolator2257);

OrientationInterpolator& OrientationInterpolator2258 =  OrientationInterpolator();
OrientationInterpolator2258.setDEF(CString("Kick_r_shoulder_RollInterpolator"));
OrientationInterpolator2258.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2258.setKeyValue(new float[]{0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0}, 24);
Group2248.addChild(&OrientationInterpolator2258);

OrientationInterpolator& OrientationInterpolator2259 =  OrientationInterpolator();
OrientationInterpolator2259.setDEF(CString("Kick_r_ForeArm_PitchInterpolator"));
OrientationInterpolator2259.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2259.setKeyValue(new float[]{1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0}, 24);
Group2248.addChild(&OrientationInterpolator2259);

OrientationInterpolator& OrientationInterpolator2260 =  OrientationInterpolator();
OrientationInterpolator2260.setDEF(CString("Kick_r_wrist_RollInterpolator"));
OrientationInterpolator2260.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2260.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2248.addChild(&OrientationInterpolator2260);

OrientationInterpolator& OrientationInterpolator2261 =  OrientationInterpolator();
OrientationInterpolator2261.setDEF(CString("Kick_r_thumb1_PitchInterpolator"));
OrientationInterpolator2261.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2261.setKeyValue(new float[]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0}, 24);
Group2248.addChild(&OrientationInterpolator2261);

OrientationInterpolator& OrientationInterpolator2262 =  OrientationInterpolator();
OrientationInterpolator2262.setDEF(CString("Kick_r_hip_PitchInterpolator"));
OrientationInterpolator2262.setKey(new float[]{0,0.2,0.3,0.5,0.6,0.9,1}, 7);
OrientationInterpolator2262.setKeyValue(new float[]{1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0}, 28);
Group2248.addChild(&OrientationInterpolator2262);

OrientationInterpolator& OrientationInterpolator2263 =  OrientationInterpolator();
OrientationInterpolator2263.setDEF(CString("Kick_r_knee_PitchInterpolator"));
OrientationInterpolator2263.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2263.setKeyValue(new float[]{0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0}, 24);
Group2248.addChild(&OrientationInterpolator2263);

OrientationInterpolator& OrientationInterpolator2264 =  OrientationInterpolator();
OrientationInterpolator2264.setDEF(CString("Kick_l_hip_PitchInterpolator"));
OrientationInterpolator2264.setKey(new float[]{0,0.2,0.3,0.5,0.6,0.9,1}, 7);
OrientationInterpolator2264.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2248.addChild(&OrientationInterpolator2264);

OrientationInterpolator& OrientationInterpolator2265 =  OrientationInterpolator();
OrientationInterpolator2265.setDEF(CString("Kick_l_knee_PitchInterpolator"));
OrientationInterpolator2265.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2265.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group2248.addChild(&OrientationInterpolator2265);

OrientationInterpolator& OrientationInterpolator2266 =  OrientationInterpolator();
OrientationInterpolator2266.setDEF(CString("Kick_r_ankle_PitchInterpolator"));
OrientationInterpolator2266.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2266.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0}, 24);
Group2248.addChild(&OrientationInterpolator2266);

OrientationInterpolator& OrientationInterpolator2267 =  OrientationInterpolator();
OrientationInterpolator2267.setDEF(CString("Kick_r_metatarsal_PitchInterpolator"));
OrientationInterpolator2267.setKey(new float[]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2267.setKeyValue(new float[]{1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0}, 24);
Group2248.addChild(&OrientationInterpolator2267);

OrientationInterpolator& OrientationInterpolator2268 =  OrientationInterpolator();
OrientationInterpolator2268.setDEF(CString("Kick_sacroiliac_YawInterpolator"));
OrientationInterpolator2268.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2268.setKeyValue(new float[]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0}, 24);
Group2248.addChild(&OrientationInterpolator2268);

OrientationInterpolator& OrientationInterpolator2269 =  OrientationInterpolator();
OrientationInterpolator2269.setDEF(CString("Kick_vl5_YawInterpolator"));
OrientationInterpolator2269.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2269.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2248.addChild(&OrientationInterpolator2269);

OrientationInterpolator& OrientationInterpolator2270 =  OrientationInterpolator();
OrientationInterpolator2270.setDEF(CString("Kick_vc6_YawInterpolator"));
OrientationInterpolator2270.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2270.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group2248.addChild(&OrientationInterpolator2270);

OrientationInterpolator& OrientationInterpolator2271 =  OrientationInterpolator();
OrientationInterpolator2271.setDEF(CString("Kick_lower_body_RotationInterpolator"));
OrientationInterpolator2271.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2271.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2248.addChild(&OrientationInterpolator2271);

OrientationInterpolator& OrientationInterpolator2272 =  OrientationInterpolator();
OrientationInterpolator2272.setDEF(CString("Kick_upper_body_RotationInterpolator"));
OrientationInterpolator2272.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2272.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2248.addChild(&OrientationInterpolator2272);

OrientationInterpolator& OrientationInterpolator2273 =  OrientationInterpolator();
OrientationInterpolator2273.setDEF(CString("Kick_whole_body_RotationInterpolator"));
OrientationInterpolator2273.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator2273.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group2248.addChild(&OrientationInterpolator2273);

PositionInterpolator& PositionInterpolator2274 =  PositionInterpolator();
PositionInterpolator2274.setDEF(CString("Kick_whole_body_TranslationInterpolator"));
PositionInterpolator2274.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator2274.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0}, 9);
Group2248.addChild(&PositionInterpolator2274);

OrientationInterpolator& OrientationInterpolator2275 =  OrientationInterpolator();
OrientationInterpolator2275.setDEF(CString("Kick_neck_RotationInterpolator"));
OrientationInterpolator2275.setKey(new float[]{0,0.25,0.55,1}, 4);
OrientationInterpolator2275.setKeyValue(new float[]{0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0}, 16);
Group2248.addChild(&OrientationInterpolator2275);

Scene29.addChild(&Group2248);

Group& Group2276 =  Group();
Group2276.setDEF(CString("UserInterface"));
Transform& Transform2277 =  Transform();
Transform2277.setDEF(CString("CoordinateAxesAdjustedScale"));
Transform2277.setScale(new float[]{0.175,0.175,0.175});
Inline& Inline2278 =  Inline();
Inline2278.setDEF(CString("CoordinateAxes"));
Inline2278.setGlobal(True);
Inline2278.setUrl(new CString[]{CString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), CString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), CString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), CString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl")}, 4);
Transform2277.addChild(&Inline2278);

Group2276.addChild(&Transform2277);

Transform& Transform2279 =  Transform();
Transform2279.setDEF(CString("cordsys"));
Transform2279.setScale(new float[]{0.175,0.175,0.175});
Group2276.addChild(&Transform2279);

ProximitySensor& ProximitySensor2280 =  ProximitySensor();
ProximitySensor2280.setDEF(CString("HudProximitySensor"));
ProximitySensor2280.setSize(new float[]{500,100,500});
ProximitySensor2280.setCenter(new float[]{0,20,0});
Group2276.addChild(&ProximitySensor2280);

Transform& Transform2281 =  Transform();
Transform2281.setDEF(CString("Stage"));
Transform2281.setTranslation(new float[]{0,-0.0125,0});
Transform2281.setScale(new float[]{1,0.0125,1});
Shape& Shape2282 =  Shape();
Appearance& Appearance2283 =  Appearance();
Material& Material2284 =  Material();
Material2284.setTransparency(0.6);
Appearance2283.addChild(&Material2284);

Shape2282.addChild(&Appearance2283);

Box& Box2285 =  Box();
Shape2282.setGeometry(&Box2285);

Transform2281.addChild(&Shape2282);

Transform& Transform2286 =  Transform();
Transform2286.setDEF(CString("Circle0"));
Transform2286.setScale(new float[]{1.175,1,1.175});
Shape& Shape2287 =  Shape();
Appearance& Appearance2288 =  Appearance();
Material& Material2289 =  Material();
Material2289.setDiffuseColor(new float[]{0.9,0,0.7});
Material2289.setEmissiveColor(new float[]{0.424956,0.483976,1});
Appearance2288.addChild(&Material2289);

Shape2287.addChild(&Appearance2288);

IndexedLineSet& IndexedLineSet2290 =  IndexedLineSet();
IndexedLineSet2290.setDEF(CString("Orbit1"));
IndexedLineSet2290.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}, 62);
Coordinate& Coordinate2291 =  Coordinate();
Coordinate2291.setPoint(new float[]{1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0}, 183);
IndexedLineSet2290.setCoord(&Coordinate2291);

Shape2287.setGeometry(&IndexedLineSet2290);

Transform2286.addChild(&Shape2287);

Transform2281.addChild(&Transform2286);

Transform& Transform2292 =  Transform();
Transform2292.setDEF(CString("Circle1"));
Transform2292.setScale(new float[]{0.5,1,0.5});
Shape& Shape2293 =  Shape();
Appearance& Appearance2294 =  Appearance();
Material& Material2295 =  Material();
Material2295.setDiffuseColor(new float[]{0.9,0,0.7});
Material2295.setEmissiveColor(new float[]{0.424956,0.483976,1});
Appearance2294.addChild(&Material2295);

Shape2293.addChild(&Appearance2294);

IndexedLineSet& IndexedLineSet2296 =  IndexedLineSet();
IndexedLineSet2296.setUSE(CString("Orbit1"));
Shape2293.setGeometry(&IndexedLineSet2296);

Transform2292.addChild(&Shape2293);

Transform2281.addChild(&Transform2292);

Transform& Transform2297 =  Transform();
Transform2297.setDEF(CString("Circle2"));
Transform2297.setScale(new float[]{0.25,1,0.25});
Shape& Shape2298 =  Shape();
Appearance& Appearance2299 =  Appearance();
Material& Material2300 =  Material();
Material2300.setDiffuseColor(new float[]{0.9,0,0.7});
Material2300.setEmissiveColor(new float[]{0.424956,0.483976,1});
Appearance2299.addChild(&Material2300);

Shape2298.addChild(&Appearance2299);

IndexedLineSet& IndexedLineSet2301 =  IndexedLineSet();
IndexedLineSet2301.setUSE(CString("Orbit1"));
Shape2298.setGeometry(&IndexedLineSet2301);

Transform2297.addChild(&Shape2298);

Transform2281.addChild(&Transform2297);

Group2276.addChild(&Transform2281);

Transform& Transform2302 =  Transform();
Transform2302.setDEF(CString("HudXform"));
Transform2302.setTranslation(new float[]{1.705442,1.042139,1.989742});
Transform2302.setRotation(new float[]{-0.09996068,0.9942513,0.03837026,0.7131352});
Transform& Transform2303 =  Transform();
Transform2303.setTranslation(new float[]{-0.42,-0.2,-0.75});
Transform2303.setScale(new float[]{0.035,0.035,0.035});
Transform& Transform2304 =  Transform();
Transform2304.setDEF(CString("StandTransform"));
Transform2304.setTranslation(new float[]{0,-1,0});
TouchSensor& TouchSensor2305 =  TouchSensor();
TouchSensor2305.setDEF(CString("Stand_Touch"));
TouchSensor2305.setDescription(CString("touch to select"));
Transform2304.addChild(&TouchSensor2305);

Shape& Shape2306 =  Shape();
Shape2306.setDEF(CString("StandTextShape"));
Appearance& Appearance2307 =  Appearance();
Material& Material2308 =  Material();
Material2308.setDEF(CString("text_color"));
Material2308.setAmbientIntensity(1);
Material2308.setDiffuseColor(new float[]{0.819,0.521,0.169});
Material2308.setSpecularColor(new float[]{0.819,0.521,0.169});
Material2308.setEmissiveColor(new float[]{0.819,0.521,0.169});
Appearance2307.addChild(&Material2308);

Shape2306.addChild(&Appearance2307);

Text& Text2309 =  Text();
Text2309.setString(new CString[]{CString("Stand")}, 1);
Shape2306.setGeometry(&Text2309);

Transform2304.addChild(&Shape2306);

Shape& Shape2310 =  Shape();
Shape2310.setDEF(CString("Stand_Back"));
Appearance& Appearance2311 =  Appearance();
Material& Material2312 =  Material();
Material2312.setDEF(CString("Clear"));
Material2312.setAmbientIntensity(1);
Material2312.setDiffuseColor(new float[]{0,0.5,0});
Material2312.setEmissiveColor(new float[]{0,0.5,0});
Material2312.setTransparency(0.8);
Appearance2311.addChild(&Material2312);

Shape2310.addChild(&Appearance2311);

IndexedFaceSet& IndexedFaceSet2313 =  IndexedFaceSet();
IndexedFaceSet2313.setDEF(CString("Backing"));
IndexedFaceSet2313.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate2314 =  Coordinate();
Coordinate2314.setPoint(new float[]{-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01}, 12);
IndexedFaceSet2313.setCoord(&Coordinate2314);

Shape2310.setGeometry(&IndexedFaceSet2313);

Transform2304.addChild(&Shape2310);

Transform2303.addChild(&Transform2304);

Transform& Transform2315 =  Transform();
Transform2315.setDEF(CString("PitchTransform"));
Transform2315.setTranslation(new float[]{3,-1,0});
TouchSensor& TouchSensor2316 =  TouchSensor();
TouchSensor2316.setDEF(CString("Pitch_Touch"));
TouchSensor2316.setDescription(CString("touch to select"));
Transform2315.addChild(&TouchSensor2316);

Shape& Shape2317 =  Shape();
Shape2317.setDEF(CString("PitchTextShape"));
Appearance& Appearance2318 =  Appearance();
Material& Material2319 =  Material();
Material2319.setUSE(CString("text_color"));
Appearance2318.addChild(&Material2319);

Shape2317.addChild(&Appearance2318);

Text& Text2320 =  Text();
Text2320.setString(new CString[]{CString("Pitch")}, 1);
Shape2317.setGeometry(&Text2320);

Transform2315.addChild(&Shape2317);

Shape& Shape2321 =  Shape();
Shape2321.setDEF(CString("Pitch_Back"));
Appearance& Appearance2322 =  Appearance();
Material& Material2323 =  Material();
Material2323.setUSE(CString("Clear"));
Appearance2322.addChild(&Material2323);

Shape2321.addChild(&Appearance2322);

IndexedFaceSet& IndexedFaceSet2324 =  IndexedFaceSet();
IndexedFaceSet2324.setUSE(CString("Backing"));
Shape2321.setGeometry(&IndexedFaceSet2324);

Transform2315.addChild(&Shape2321);

Transform2303.addChild(&Transform2315);

Transform& Transform2325 =  Transform();
Transform2325.setDEF(CString("YawTransform"));
Transform2325.setTranslation(new float[]{6,-1,0});
TouchSensor& TouchSensor2326 =  TouchSensor();
TouchSensor2326.setDEF(CString("Yaw_Touch"));
TouchSensor2326.setDescription(CString("touch to select"));
Transform2325.addChild(&TouchSensor2326);

Shape& Shape2327 =  Shape();
Shape2327.setDEF(CString("YawText"));
Appearance& Appearance2328 =  Appearance();
Material& Material2329 =  Material();
Material2329.setUSE(CString("text_color"));
Appearance2328.addChild(&Material2329);

Shape2327.addChild(&Appearance2328);

Text& Text2330 =  Text();
Text2330.setString(new CString[]{CString("Yaw")}, 1);
Shape2327.setGeometry(&Text2330);

Transform2325.addChild(&Shape2327);

Shape& Shape2331 =  Shape();
Shape2331.setDEF(CString("Yaw_Back"));
Appearance& Appearance2332 =  Appearance();
Material& Material2333 =  Material();
Material2333.setUSE(CString("Clear"));
Appearance2332.addChild(&Material2333);

Shape2331.addChild(&Appearance2332);

IndexedFaceSet& IndexedFaceSet2334 =  IndexedFaceSet();
IndexedFaceSet2334.setUSE(CString("Backing"));
Shape2331.setGeometry(&IndexedFaceSet2334);

Transform2325.addChild(&Shape2331);

Transform2303.addChild(&Transform2325);

Transform& Transform2335 =  Transform();
Transform2335.setDEF(CString("RollTransform"));
Transform2335.setTranslation(new float[]{9,-1,0});
TouchSensor& TouchSensor2336 =  TouchSensor();
TouchSensor2336.setDEF(CString("Roll_Touch"));
TouchSensor2336.setDescription(CString("touch to select"));
Transform2335.addChild(&TouchSensor2336);

Shape& Shape2337 =  Shape();
Shape2337.setDEF(CString("_RollInterpolator"));
Appearance& Appearance2338 =  Appearance();
Material& Material2339 =  Material();
Material2339.setUSE(CString("text_color"));
Appearance2338.addChild(&Material2339);

Shape2337.addChild(&Appearance2338);

Text& Text2340 =  Text();
Text2340.setString(new CString[]{CString("Roll")}, 1);
Shape2337.setGeometry(&Text2340);

Transform2335.addChild(&Shape2337);

Shape& Shape2341 =  Shape();
Shape2341.setDEF(CString("Roll_Back"));
Appearance& Appearance2342 =  Appearance();
Material& Material2343 =  Material();
Material2343.setUSE(CString("Clear"));
Appearance2342.addChild(&Material2343);

Shape2341.addChild(&Appearance2342);

IndexedFaceSet& IndexedFaceSet2344 =  IndexedFaceSet();
IndexedFaceSet2344.setUSE(CString("Backing"));
Shape2341.setGeometry(&IndexedFaceSet2344);

Transform2335.addChild(&Shape2341);

Transform2303.addChild(&Transform2335);

Transform& Transform2345 =  Transform();
Transform2345.setDEF(CString("WalkTransform"));
Transform2345.setTranslation(new float[]{12,-1,0});
TouchSensor& TouchSensor2346 =  TouchSensor();
TouchSensor2346.setDEF(CString("Walk_Touch"));
TouchSensor2346.setDescription(CString("touch to select"));
Transform2345.addChild(&TouchSensor2346);

Shape& Shape2347 =  Shape();
Shape2347.setDEF(CString("WalkText"));
Appearance& Appearance2348 =  Appearance();
Material& Material2349 =  Material();
Material2349.setUSE(CString("text_color"));
Appearance2348.addChild(&Material2349);

Shape2347.addChild(&Appearance2348);

Text& Text2350 =  Text();
Text2350.setString(new CString[]{CString("Walk")}, 1);
Shape2347.setGeometry(&Text2350);

Transform2345.addChild(&Shape2347);

Shape& Shape2351 =  Shape();
Shape2351.setDEF(CString("Walk_Back"));
Appearance& Appearance2352 =  Appearance();
Material& Material2353 =  Material();
Material2353.setUSE(CString("Clear"));
Appearance2352.addChild(&Material2353);

Shape2351.addChild(&Appearance2352);

IndexedFaceSet& IndexedFaceSet2354 =  IndexedFaceSet();
IndexedFaceSet2354.setUSE(CString("Backing"));
Shape2351.setGeometry(&IndexedFaceSet2354);

Transform2345.addChild(&Shape2351);

Transform2303.addChild(&Transform2345);

Transform& Transform2355 =  Transform();
Transform2355.setDEF(CString("RunTransform"));
Transform2355.setTranslation(new float[]{15,-1,0});
TouchSensor& TouchSensor2356 =  TouchSensor();
TouchSensor2356.setDEF(CString("Run_Touch"));
TouchSensor2356.setDescription(CString("touch to select"));
Transform2355.addChild(&TouchSensor2356);

Shape& Shape2357 =  Shape();
Shape2357.setDEF(CString("RunText"));
Appearance& Appearance2358 =  Appearance();
Material& Material2359 =  Material();
Material2359.setUSE(CString("text_color"));
Appearance2358.addChild(&Material2359);

Shape2357.addChild(&Appearance2358);

Text& Text2360 =  Text();
Text2360.setString(new CString[]{CString("Run")}, 1);
Shape2357.setGeometry(&Text2360);

Transform2355.addChild(&Shape2357);

Shape& Shape2361 =  Shape();
Shape2361.setDEF(CString("Run_Back"));
Appearance& Appearance2362 =  Appearance();
Material& Material2363 =  Material();
Material2363.setUSE(CString("Clear"));
Appearance2362.addChild(&Material2363);

Shape2361.addChild(&Appearance2362);

IndexedFaceSet& IndexedFaceSet2364 =  IndexedFaceSet();
IndexedFaceSet2364.setUSE(CString("Backing"));
Shape2361.setGeometry(&IndexedFaceSet2364);

Transform2355.addChild(&Shape2361);

Transform2303.addChild(&Transform2355);

Transform& Transform2365 =  Transform();
Transform2365.setDEF(CString("JumpTransform"));
Transform2365.setTranslation(new float[]{18,-1,0});
TouchSensor& TouchSensor2366 =  TouchSensor();
TouchSensor2366.setDEF(CString("Jump_Touch"));
TouchSensor2366.setDescription(CString("touch to select"));
Transform2365.addChild(&TouchSensor2366);

Shape& Shape2367 =  Shape();
Shape2367.setDEF(CString("Jump"));
Appearance& Appearance2368 =  Appearance();
Material& Material2369 =  Material();
Material2369.setUSE(CString("text_color"));
Appearance2368.addChild(&Material2369);

Shape2367.addChild(&Appearance2368);

Text& Text2370 =  Text();
Text2370.setString(new CString[]{CString("Jump")}, 1);
Shape2367.setGeometry(&Text2370);

Transform2365.addChild(&Shape2367);

Shape& Shape2371 =  Shape();
Shape2371.setDEF(CString("Jump_Back"));
Appearance& Appearance2372 =  Appearance();
Material& Material2373 =  Material();
Material2373.setUSE(CString("Clear"));
Appearance2372.addChild(&Material2373);

Shape2371.addChild(&Appearance2372);

IndexedFaceSet& IndexedFaceSet2374 =  IndexedFaceSet();
IndexedFaceSet2374.setUSE(CString("Backing"));
Shape2371.setGeometry(&IndexedFaceSet2374);

Transform2365.addChild(&Shape2371);

Transform2303.addChild(&Transform2365);

Transform& Transform2375 =  Transform();
Transform2375.setDEF(CString("KickTransform"));
Transform2375.setTranslation(new float[]{21,-1,0});
TouchSensor& TouchSensor2376 =  TouchSensor();
TouchSensor2376.setDEF(CString("Kick_Touch"));
TouchSensor2376.setDescription(CString("touch to select"));
Transform2375.addChild(&TouchSensor2376);

Shape& Shape2377 =  Shape();
Shape2377.setDEF(CString("KickText"));
Appearance& Appearance2378 =  Appearance();
Material& Material2379 =  Material();
Material2379.setUSE(CString("text_color"));
Appearance2378.addChild(&Material2379);

Shape2377.addChild(&Appearance2378);

Text& Text2380 =  Text();
Text2380.setString(new CString[]{CString("Kick")}, 1);
Shape2377.setGeometry(&Text2380);

Transform2375.addChild(&Shape2377);

Shape& Shape2381 =  Shape();
Shape2381.setDEF(CString("Kick_Back"));
Appearance& Appearance2382 =  Appearance();
Material& Material2383 =  Material();
Material2383.setUSE(CString("Clear"));
Appearance2382.addChild(&Material2383);

Shape2381.addChild(&Appearance2382);

IndexedFaceSet& IndexedFaceSet2384 =  IndexedFaceSet();
IndexedFaceSet2384.setUSE(CString("Backing"));
Shape2381.setGeometry(&IndexedFaceSet2384);

Transform2375.addChild(&Shape2381);

Transform2303.addChild(&Transform2375);

Transform& Transform2385 =  Transform();
Transform2385.setDEF(CString("Stop_Text"));
Transform2385.setTranslation(new float[]{0,1.4,0});
TouchSensor& TouchSensor2386 =  TouchSensor();
TouchSensor2386.setDEF(CString("Stop_Touch"));
TouchSensor2386.setDescription(CString("touch to select"));
Transform2385.addChild(&TouchSensor2386);

Shape& Shape2387 =  Shape();
Shape2387.setDEF(CString("StopText"));
Appearance& Appearance2388 =  Appearance();
Material& Material2389 =  Material();
Material2389.setUSE(CString("text_color"));
Appearance2388.addChild(&Material2389);

Shape2387.addChild(&Appearance2388);

Text& Text2390 =  Text();
Text2390.setString(new CString[]{CString("Stop"), CString("Default Pose")}, 2);
Shape2387.setGeometry(&Text2390);

Transform2385.addChild(&Shape2387);

Shape& Shape2391 =  Shape();
Shape2391.setDEF(CString("Stop_Back"));
Appearance& Appearance2392 =  Appearance();
Material& Material2393 =  Material();
Material2393.setUSE(CString("Clear"));
Appearance2392.addChild(&Material2393);

Shape2391.addChild(&Appearance2392);

IndexedFaceSet& IndexedFaceSet2394 =  IndexedFaceSet();
IndexedFaceSet2394.setUSE(CString("Backing"));
Shape2391.setGeometry(&IndexedFaceSet2394);

Transform2385.addChild(&Shape2391);

Transform2303.addChild(&Transform2385);

Transform2302.addChild(&Transform2303);

Group2276.addChild(&Transform2302);

Scene29.addChild(&Group2276);

Group& Group2395 =  Group();
Group2395.setDEF(CString("BehaviorSynchronization"));
Scene29.addChild(&Group2395);

ROUTE& ROUTE2396 =  ROUTE();
ROUTE2396.setFromNode(CString("StopTimer"));
ROUTE2396.setFromField(CString("fraction_changed"));
ROUTE2396.setToNode(CString("Stop_HumanoidRoot_TranslationInterpolator"));
ROUTE2396.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2396);

ROUTE& ROUTE2397 =  ROUTE();
ROUTE2397.setFromNode(CString("StopTimer"));
ROUTE2397.setFromField(CString("fraction_changed"));
ROUTE2397.setToNode(CString("Stop_HumanoidRoot_RotationInterpolator"));
ROUTE2397.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2397);

ROUTE& ROUTE2398 =  ROUTE();
ROUTE2398.setFromNode(CString("StopTimer"));
ROUTE2398.setFromField(CString("fraction_changed"));
ROUTE2398.setToNode(CString("Stop_sacroiliac_RotationInterpolator"));
ROUTE2398.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2398);

ROUTE& ROUTE2399 =  ROUTE();
ROUTE2399.setFromNode(CString("StopTimer"));
ROUTE2399.setFromField(CString("fraction_changed"));
ROUTE2399.setToNode(CString("Stop_l_hip_RotationInterpolator"));
ROUTE2399.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2399);

ROUTE& ROUTE2400 =  ROUTE();
ROUTE2400.setFromNode(CString("StopTimer"));
ROUTE2400.setFromField(CString("fraction_changed"));
ROUTE2400.setToNode(CString("Stop_l_knee_RotationInterpolator"));
ROUTE2400.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2400);

ROUTE& ROUTE2401 =  ROUTE();
ROUTE2401.setFromNode(CString("StopTimer"));
ROUTE2401.setFromField(CString("fraction_changed"));
ROUTE2401.setToNode(CString("Stop_l_ankle_RotationInterpolator"));
ROUTE2401.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2401);

ROUTE& ROUTE2402 =  ROUTE();
ROUTE2402.setFromNode(CString("StopTimer"));
ROUTE2402.setFromField(CString("fraction_changed"));
ROUTE2402.setToNode(CString("Stop_l_subtalar_RotationInterpolator"));
ROUTE2402.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2402);

ROUTE& ROUTE2403 =  ROUTE();
ROUTE2403.setFromNode(CString("StopTimer"));
ROUTE2403.setFromField(CString("fraction_changed"));
ROUTE2403.setToNode(CString("Stop_l_midtarsal_RotationInterpolator"));
ROUTE2403.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2403);

ROUTE& ROUTE2404 =  ROUTE();
ROUTE2404.setFromNode(CString("StopTimer"));
ROUTE2404.setFromField(CString("fraction_changed"));
ROUTE2404.setToNode(CString("Stop_l_metatarsal_RotationInterpolator"));
ROUTE2404.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2404);

ROUTE& ROUTE2405 =  ROUTE();
ROUTE2405.setFromNode(CString("StopTimer"));
ROUTE2405.setFromField(CString("fraction_changed"));
ROUTE2405.setToNode(CString("Stop_r_hip_RotationInterpolator"));
ROUTE2405.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2405);

ROUTE& ROUTE2406 =  ROUTE();
ROUTE2406.setFromNode(CString("StopTimer"));
ROUTE2406.setFromField(CString("fraction_changed"));
ROUTE2406.setToNode(CString("Stop_r_knee_RotationInterpolator"));
ROUTE2406.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2406);

ROUTE& ROUTE2407 =  ROUTE();
ROUTE2407.setFromNode(CString("StopTimer"));
ROUTE2407.setFromField(CString("fraction_changed"));
ROUTE2407.setToNode(CString("Stop_r_ankle_RotationInterpolator"));
ROUTE2407.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2407);

ROUTE& ROUTE2408 =  ROUTE();
ROUTE2408.setFromNode(CString("StopTimer"));
ROUTE2408.setFromField(CString("fraction_changed"));
ROUTE2408.setToNode(CString("Stop_r_subtalar_RotationInterpolator"));
ROUTE2408.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2408);

ROUTE& ROUTE2409 =  ROUTE();
ROUTE2409.setFromNode(CString("StopTimer"));
ROUTE2409.setFromField(CString("fraction_changed"));
ROUTE2409.setToNode(CString("Stop_r_midtarsal_RotationInterpolator"));
ROUTE2409.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2409);

ROUTE& ROUTE2410 =  ROUTE();
ROUTE2410.setFromNode(CString("StopTimer"));
ROUTE2410.setFromField(CString("fraction_changed"));
ROUTE2410.setToNode(CString("Stop_r_metatarsal_RotationInterpolator"));
ROUTE2410.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2410);

ROUTE& ROUTE2411 =  ROUTE();
ROUTE2411.setFromNode(CString("StopTimer"));
ROUTE2411.setFromField(CString("fraction_changed"));
ROUTE2411.setToNode(CString("Stop_vl5_RotationInterpolator"));
ROUTE2411.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2411);

ROUTE& ROUTE2412 =  ROUTE();
ROUTE2412.setFromNode(CString("StopTimer"));
ROUTE2412.setFromField(CString("fraction_changed"));
ROUTE2412.setToNode(CString("Stop_vl4_RotationInterpolator"));
ROUTE2412.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2412);

ROUTE& ROUTE2413 =  ROUTE();
ROUTE2413.setFromNode(CString("StopTimer"));
ROUTE2413.setFromField(CString("fraction_changed"));
ROUTE2413.setToNode(CString("Stop_vl3_RotationInterpolator"));
ROUTE2413.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2413);

ROUTE& ROUTE2414 =  ROUTE();
ROUTE2414.setFromNode(CString("StopTimer"));
ROUTE2414.setFromField(CString("fraction_changed"));
ROUTE2414.setToNode(CString("Stop_vl2_RotationInterpolator"));
ROUTE2414.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2414);

ROUTE& ROUTE2415 =  ROUTE();
ROUTE2415.setFromNode(CString("StopTimer"));
ROUTE2415.setFromField(CString("fraction_changed"));
ROUTE2415.setToNode(CString("Stop_vl1_RotationInterpolator"));
ROUTE2415.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2415);

ROUTE& ROUTE2416 =  ROUTE();
ROUTE2416.setFromNode(CString("StopTimer"));
ROUTE2416.setFromField(CString("fraction_changed"));
ROUTE2416.setToNode(CString("Stop_vt12_RotationInterpolator"));
ROUTE2416.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2416);

ROUTE& ROUTE2417 =  ROUTE();
ROUTE2417.setFromNode(CString("StopTimer"));
ROUTE2417.setFromField(CString("fraction_changed"));
ROUTE2417.setToNode(CString("Stop_vt11_RotationInterpolator"));
ROUTE2417.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2417);

ROUTE& ROUTE2418 =  ROUTE();
ROUTE2418.setFromNode(CString("StopTimer"));
ROUTE2418.setFromField(CString("fraction_changed"));
ROUTE2418.setToNode(CString("Stop_vt10_RotationInterpolator"));
ROUTE2418.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2418);

ROUTE& ROUTE2419 =  ROUTE();
ROUTE2419.setFromNode(CString("StopTimer"));
ROUTE2419.setFromField(CString("fraction_changed"));
ROUTE2419.setToNode(CString("Stop_vt9_RotationInterpolator"));
ROUTE2419.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2419);

ROUTE& ROUTE2420 =  ROUTE();
ROUTE2420.setFromNode(CString("StopTimer"));
ROUTE2420.setFromField(CString("fraction_changed"));
ROUTE2420.setToNode(CString("Stop_vt8_RotationInterpolator"));
ROUTE2420.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2420);

ROUTE& ROUTE2421 =  ROUTE();
ROUTE2421.setFromNode(CString("StopTimer"));
ROUTE2421.setFromField(CString("fraction_changed"));
ROUTE2421.setToNode(CString("Stop_vt7_RotationInterpolator"));
ROUTE2421.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2421);

ROUTE& ROUTE2422 =  ROUTE();
ROUTE2422.setFromNode(CString("StopTimer"));
ROUTE2422.setFromField(CString("fraction_changed"));
ROUTE2422.setToNode(CString("Stop_vt6_RotationInterpolator"));
ROUTE2422.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2422);

ROUTE& ROUTE2423 =  ROUTE();
ROUTE2423.setFromNode(CString("StopTimer"));
ROUTE2423.setFromField(CString("fraction_changed"));
ROUTE2423.setToNode(CString("Stop_vt5_RotationInterpolator"));
ROUTE2423.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2423);

ROUTE& ROUTE2424 =  ROUTE();
ROUTE2424.setFromNode(CString("StopTimer"));
ROUTE2424.setFromField(CString("fraction_changed"));
ROUTE2424.setToNode(CString("Stop_vt4_RotationInterpolator"));
ROUTE2424.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2424);

ROUTE& ROUTE2425 =  ROUTE();
ROUTE2425.setFromNode(CString("StopTimer"));
ROUTE2425.setFromField(CString("fraction_changed"));
ROUTE2425.setToNode(CString("Stop_vt3_RotationInterpolator"));
ROUTE2425.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2425);

ROUTE& ROUTE2426 =  ROUTE();
ROUTE2426.setFromNode(CString("StopTimer"));
ROUTE2426.setFromField(CString("fraction_changed"));
ROUTE2426.setToNode(CString("Stop_vt2_RotationInterpolator"));
ROUTE2426.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2426);

ROUTE& ROUTE2427 =  ROUTE();
ROUTE2427.setFromNode(CString("StopTimer"));
ROUTE2427.setFromField(CString("fraction_changed"));
ROUTE2427.setToNode(CString("Stop_vt1_RotationInterpolator"));
ROUTE2427.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2427);

ROUTE& ROUTE2428 =  ROUTE();
ROUTE2428.setFromNode(CString("StopTimer"));
ROUTE2428.setFromField(CString("fraction_changed"));
ROUTE2428.setToNode(CString("Stop_vc7_RotationInterpolator"));
ROUTE2428.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2428);

ROUTE& ROUTE2429 =  ROUTE();
ROUTE2429.setFromNode(CString("StopTimer"));
ROUTE2429.setFromField(CString("fraction_changed"));
ROUTE2429.setToNode(CString("Stop_vc6_RotationInterpolator"));
ROUTE2429.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2429);

ROUTE& ROUTE2430 =  ROUTE();
ROUTE2430.setFromNode(CString("StopTimer"));
ROUTE2430.setFromField(CString("fraction_changed"));
ROUTE2430.setToNode(CString("Stop_vc5_RotationInterpolator"));
ROUTE2430.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2430);

ROUTE& ROUTE2431 =  ROUTE();
ROUTE2431.setFromNode(CString("StopTimer"));
ROUTE2431.setFromField(CString("fraction_changed"));
ROUTE2431.setToNode(CString("Stop_vc4_RotationInterpolator"));
ROUTE2431.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2431);

ROUTE& ROUTE2432 =  ROUTE();
ROUTE2432.setFromNode(CString("StopTimer"));
ROUTE2432.setFromField(CString("fraction_changed"));
ROUTE2432.setToNode(CString("Stop_vc3_RotationInterpolator"));
ROUTE2432.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2432);

ROUTE& ROUTE2433 =  ROUTE();
ROUTE2433.setFromNode(CString("StopTimer"));
ROUTE2433.setFromField(CString("fraction_changed"));
ROUTE2433.setToNode(CString("Stop_vc2_RotationInterpolator"));
ROUTE2433.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2433);

ROUTE& ROUTE2434 =  ROUTE();
ROUTE2434.setFromNode(CString("StopTimer"));
ROUTE2434.setFromField(CString("fraction_changed"));
ROUTE2434.setToNode(CString("Stop_vc1_RotationInterpolator"));
ROUTE2434.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2434);

ROUTE& ROUTE2435 =  ROUTE();
ROUTE2435.setFromNode(CString("StopTimer"));
ROUTE2435.setFromField(CString("fraction_changed"));
ROUTE2435.setToNode(CString("Stop_skullbase_RotationInterpolator"));
ROUTE2435.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2435);

ROUTE& ROUTE2436 =  ROUTE();
ROUTE2436.setFromNode(CString("StopTimer"));
ROUTE2436.setFromField(CString("fraction_changed"));
ROUTE2436.setToNode(CString("Stop_l_eyeball_joint_RotationInterpolator"));
ROUTE2436.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2436);

ROUTE& ROUTE2437 =  ROUTE();
ROUTE2437.setFromNode(CString("StopTimer"));
ROUTE2437.setFromField(CString("fraction_changed"));
ROUTE2437.setToNode(CString("Stop_r_eyeball_joint_RotationInterpolator"));
ROUTE2437.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2437);

ROUTE& ROUTE2438 =  ROUTE();
ROUTE2438.setFromNode(CString("StopTimer"));
ROUTE2438.setFromField(CString("fraction_changed"));
ROUTE2438.setToNode(CString("Stop_l_sternoclavicular_RotationInterpolator"));
ROUTE2438.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2438);

ROUTE& ROUTE2439 =  ROUTE();
ROUTE2439.setFromNode(CString("StopTimer"));
ROUTE2439.setFromField(CString("fraction_changed"));
ROUTE2439.setToNode(CString("Stop_l_acromioclavicular_RotationInterpolator"));
ROUTE2439.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2439);

ROUTE& ROUTE2440 =  ROUTE();
ROUTE2440.setFromNode(CString("StopTimer"));
ROUTE2440.setFromField(CString("fraction_changed"));
ROUTE2440.setToNode(CString("Stop_l_shoulder_RotationInterpolator"));
ROUTE2440.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2440);

ROUTE& ROUTE2441 =  ROUTE();
ROUTE2441.setFromNode(CString("StopTimer"));
ROUTE2441.setFromField(CString("fraction_changed"));
ROUTE2441.setToNode(CString("Stop_l_elbow_RotationInterpolator"));
ROUTE2441.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2441);

ROUTE& ROUTE2442 =  ROUTE();
ROUTE2442.setFromNode(CString("StopTimer"));
ROUTE2442.setFromField(CString("fraction_changed"));
ROUTE2442.setToNode(CString("Stop_l_wrist_RotationInterpolator"));
ROUTE2442.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2442);

ROUTE& ROUTE2443 =  ROUTE();
ROUTE2443.setFromNode(CString("StopTimer"));
ROUTE2443.setFromField(CString("fraction_changed"));
ROUTE2443.setToNode(CString("Stop_l_thumb1_RotationInterpolator"));
ROUTE2443.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2443);

ROUTE& ROUTE2444 =  ROUTE();
ROUTE2444.setFromNode(CString("StopTimer"));
ROUTE2444.setFromField(CString("fraction_changed"));
ROUTE2444.setToNode(CString("Stop_l_thumb2_RotationInterpolator"));
ROUTE2444.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2444);

ROUTE& ROUTE2445 =  ROUTE();
ROUTE2445.setFromNode(CString("StopTimer"));
ROUTE2445.setFromField(CString("fraction_changed"));
ROUTE2445.setToNode(CString("Stop_l_thumb3_RotationInterpolator"));
ROUTE2445.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2445);

ROUTE& ROUTE2446 =  ROUTE();
ROUTE2446.setFromNode(CString("StopTimer"));
ROUTE2446.setFromField(CString("fraction_changed"));
ROUTE2446.setToNode(CString("Stop_l_index0_RotationInterpolator"));
ROUTE2446.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2446);

ROUTE& ROUTE2447 =  ROUTE();
ROUTE2447.setFromNode(CString("StopTimer"));
ROUTE2447.setFromField(CString("fraction_changed"));
ROUTE2447.setToNode(CString("Stop_l_index1_RotationInterpolator"));
ROUTE2447.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2447);

ROUTE& ROUTE2448 =  ROUTE();
ROUTE2448.setFromNode(CString("StopTimer"));
ROUTE2448.setFromField(CString("fraction_changed"));
ROUTE2448.setToNode(CString("Stop_l_index2_RotationInterpolator"));
ROUTE2448.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2448);

ROUTE& ROUTE2449 =  ROUTE();
ROUTE2449.setFromNode(CString("StopTimer"));
ROUTE2449.setFromField(CString("fraction_changed"));
ROUTE2449.setToNode(CString("Stop_l_index3_RotationInterpolator"));
ROUTE2449.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2449);

ROUTE& ROUTE2450 =  ROUTE();
ROUTE2450.setFromNode(CString("StopTimer"));
ROUTE2450.setFromField(CString("fraction_changed"));
ROUTE2450.setToNode(CString("Stop_l_middle0_RotationInterpolator"));
ROUTE2450.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2450);

ROUTE& ROUTE2451 =  ROUTE();
ROUTE2451.setFromNode(CString("StopTimer"));
ROUTE2451.setFromField(CString("fraction_changed"));
ROUTE2451.setToNode(CString("Stop_l_middle1_RotationInterpolator"));
ROUTE2451.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2451);

ROUTE& ROUTE2452 =  ROUTE();
ROUTE2452.setFromNode(CString("StopTimer"));
ROUTE2452.setFromField(CString("fraction_changed"));
ROUTE2452.setToNode(CString("Stop_l_middle2_RotationInterpolator"));
ROUTE2452.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2452);

ROUTE& ROUTE2453 =  ROUTE();
ROUTE2453.setFromNode(CString("StopTimer"));
ROUTE2453.setFromField(CString("fraction_changed"));
ROUTE2453.setToNode(CString("Stop_l_middle3_RotationInterpolator"));
ROUTE2453.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2453);

ROUTE& ROUTE2454 =  ROUTE();
ROUTE2454.setFromNode(CString("StopTimer"));
ROUTE2454.setFromField(CString("fraction_changed"));
ROUTE2454.setToNode(CString("Stop_l_ring0_RotationInterpolator"));
ROUTE2454.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2454);

ROUTE& ROUTE2455 =  ROUTE();
ROUTE2455.setFromNode(CString("StopTimer"));
ROUTE2455.setFromField(CString("fraction_changed"));
ROUTE2455.setToNode(CString("Stop_l_ring1_RotationInterpolator"));
ROUTE2455.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2455);

ROUTE& ROUTE2456 =  ROUTE();
ROUTE2456.setFromNode(CString("StopTimer"));
ROUTE2456.setFromField(CString("fraction_changed"));
ROUTE2456.setToNode(CString("Stop_l_ring2_RotationInterpolator"));
ROUTE2456.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2456);

ROUTE& ROUTE2457 =  ROUTE();
ROUTE2457.setFromNode(CString("StopTimer"));
ROUTE2457.setFromField(CString("fraction_changed"));
ROUTE2457.setToNode(CString("Stop_l_ring3_RotationInterpolator"));
ROUTE2457.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2457);

ROUTE& ROUTE2458 =  ROUTE();
ROUTE2458.setFromNode(CString("StopTimer"));
ROUTE2458.setFromField(CString("fraction_changed"));
ROUTE2458.setToNode(CString("Stop_l_pinky0_RotationInterpolator"));
ROUTE2458.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2458);

ROUTE& ROUTE2459 =  ROUTE();
ROUTE2459.setFromNode(CString("StopTimer"));
ROUTE2459.setFromField(CString("fraction_changed"));
ROUTE2459.setToNode(CString("Stop_l_pinky1_RotationInterpolator"));
ROUTE2459.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2459);

ROUTE& ROUTE2460 =  ROUTE();
ROUTE2460.setFromNode(CString("StopTimer"));
ROUTE2460.setFromField(CString("fraction_changed"));
ROUTE2460.setToNode(CString("Stop_l_pinky2_RotationInterpolator"));
ROUTE2460.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2460);

ROUTE& ROUTE2461 =  ROUTE();
ROUTE2461.setFromNode(CString("StopTimer"));
ROUTE2461.setFromField(CString("fraction_changed"));
ROUTE2461.setToNode(CString("Stop_l_pinky3_RotationInterpolator"));
ROUTE2461.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2461);

ROUTE& ROUTE2462 =  ROUTE();
ROUTE2462.setFromNode(CString("StopTimer"));
ROUTE2462.setFromField(CString("fraction_changed"));
ROUTE2462.setToNode(CString("Stop_r_sternoclavicular_RotationInterpolator"));
ROUTE2462.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2462);

ROUTE& ROUTE2463 =  ROUTE();
ROUTE2463.setFromNode(CString("StopTimer"));
ROUTE2463.setFromField(CString("fraction_changed"));
ROUTE2463.setToNode(CString("Stop_r_acromioclavicular_RotationInterpolator"));
ROUTE2463.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2463);

ROUTE& ROUTE2464 =  ROUTE();
ROUTE2464.setFromNode(CString("StopTimer"));
ROUTE2464.setFromField(CString("fraction_changed"));
ROUTE2464.setToNode(CString("Stop_r_shoulder_RotationInterpolator"));
ROUTE2464.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2464);

ROUTE& ROUTE2465 =  ROUTE();
ROUTE2465.setFromNode(CString("StopTimer"));
ROUTE2465.setFromField(CString("fraction_changed"));
ROUTE2465.setToNode(CString("Stop_r_elbow_RotationInterpolator"));
ROUTE2465.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2465);

ROUTE& ROUTE2466 =  ROUTE();
ROUTE2466.setFromNode(CString("StopTimer"));
ROUTE2466.setFromField(CString("fraction_changed"));
ROUTE2466.setToNode(CString("Stop_r_wrist_RotationInterpolator"));
ROUTE2466.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2466);

ROUTE& ROUTE2467 =  ROUTE();
ROUTE2467.setFromNode(CString("StopTimer"));
ROUTE2467.setFromField(CString("fraction_changed"));
ROUTE2467.setToNode(CString("Stop_r_thumb1_RotationInterpolator"));
ROUTE2467.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2467);

ROUTE& ROUTE2468 =  ROUTE();
ROUTE2468.setFromNode(CString("StopTimer"));
ROUTE2468.setFromField(CString("fraction_changed"));
ROUTE2468.setToNode(CString("Stop_r_thumb2_RotationInterpolator"));
ROUTE2468.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2468);

ROUTE& ROUTE2469 =  ROUTE();
ROUTE2469.setFromNode(CString("StopTimer"));
ROUTE2469.setFromField(CString("fraction_changed"));
ROUTE2469.setToNode(CString("Stop_r_thumb3_RotationInterpolator"));
ROUTE2469.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2469);

ROUTE& ROUTE2470 =  ROUTE();
ROUTE2470.setFromNode(CString("StopTimer"));
ROUTE2470.setFromField(CString("fraction_changed"));
ROUTE2470.setToNode(CString("Stop_r_index0_RotationInterpolator"));
ROUTE2470.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2470);

ROUTE& ROUTE2471 =  ROUTE();
ROUTE2471.setFromNode(CString("StopTimer"));
ROUTE2471.setFromField(CString("fraction_changed"));
ROUTE2471.setToNode(CString("Stop_r_index1_RotationInterpolator"));
ROUTE2471.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2471);

ROUTE& ROUTE2472 =  ROUTE();
ROUTE2472.setFromNode(CString("StopTimer"));
ROUTE2472.setFromField(CString("fraction_changed"));
ROUTE2472.setToNode(CString("Stop_r_index2_RotationInterpolator"));
ROUTE2472.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2472);

ROUTE& ROUTE2473 =  ROUTE();
ROUTE2473.setFromNode(CString("StopTimer"));
ROUTE2473.setFromField(CString("fraction_changed"));
ROUTE2473.setToNode(CString("Stop_r_index3_RotationInterpolator"));
ROUTE2473.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2473);

ROUTE& ROUTE2474 =  ROUTE();
ROUTE2474.setFromNode(CString("StopTimer"));
ROUTE2474.setFromField(CString("fraction_changed"));
ROUTE2474.setToNode(CString("Stop_r_middle0_RotationInterpolator"));
ROUTE2474.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2474);

ROUTE& ROUTE2475 =  ROUTE();
ROUTE2475.setFromNode(CString("StopTimer"));
ROUTE2475.setFromField(CString("fraction_changed"));
ROUTE2475.setToNode(CString("Stop_r_middle1_RotationInterpolator"));
ROUTE2475.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2475);

ROUTE& ROUTE2476 =  ROUTE();
ROUTE2476.setFromNode(CString("StopTimer"));
ROUTE2476.setFromField(CString("fraction_changed"));
ROUTE2476.setToNode(CString("Stop_r_middle2_RotationInterpolator"));
ROUTE2476.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2476);

ROUTE& ROUTE2477 =  ROUTE();
ROUTE2477.setFromNode(CString("StopTimer"));
ROUTE2477.setFromField(CString("fraction_changed"));
ROUTE2477.setToNode(CString("Stop_r_middle3_RotationInterpolator"));
ROUTE2477.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2477);

ROUTE& ROUTE2478 =  ROUTE();
ROUTE2478.setFromNode(CString("StopTimer"));
ROUTE2478.setFromField(CString("fraction_changed"));
ROUTE2478.setToNode(CString("Stop_r_ring0_RotationInterpolator"));
ROUTE2478.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2478);

ROUTE& ROUTE2479 =  ROUTE();
ROUTE2479.setFromNode(CString("StopTimer"));
ROUTE2479.setFromField(CString("fraction_changed"));
ROUTE2479.setToNode(CString("Stop_r_ring1_RotationInterpolator"));
ROUTE2479.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2479);

ROUTE& ROUTE2480 =  ROUTE();
ROUTE2480.setFromNode(CString("StopTimer"));
ROUTE2480.setFromField(CString("fraction_changed"));
ROUTE2480.setToNode(CString("Stop_r_ring2_RotationInterpolator"));
ROUTE2480.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2480);

ROUTE& ROUTE2481 =  ROUTE();
ROUTE2481.setFromNode(CString("StopTimer"));
ROUTE2481.setFromField(CString("fraction_changed"));
ROUTE2481.setToNode(CString("Stop_r_ring3_RotationInterpolator"));
ROUTE2481.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2481);

ROUTE& ROUTE2482 =  ROUTE();
ROUTE2482.setFromNode(CString("StopTimer"));
ROUTE2482.setFromField(CString("fraction_changed"));
ROUTE2482.setToNode(CString("Stop_r_pinky0_RotationInterpolator"));
ROUTE2482.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2482);

ROUTE& ROUTE2483 =  ROUTE();
ROUTE2483.setFromNode(CString("StopTimer"));
ROUTE2483.setFromField(CString("fraction_changed"));
ROUTE2483.setToNode(CString("Stop_r_pinky1_RotationInterpolator"));
ROUTE2483.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2483);

ROUTE& ROUTE2484 =  ROUTE();
ROUTE2484.setFromNode(CString("StopTimer"));
ROUTE2484.setFromField(CString("fraction_changed"));
ROUTE2484.setToNode(CString("Stop_r_pinky2_RotationInterpolator"));
ROUTE2484.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2484);

ROUTE& ROUTE2485 =  ROUTE();
ROUTE2485.setFromNode(CString("StopTimer"));
ROUTE2485.setFromField(CString("fraction_changed"));
ROUTE2485.setToNode(CString("Stop_r_pinky3_RotationInterpolator"));
ROUTE2485.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2485);

ROUTE& ROUTE2486 =  ROUTE();
ROUTE2486.setFromNode(CString("Stop_HumanoidRoot_TranslationInterpolator"));
ROUTE2486.setFromField(CString("value_changed"));
ROUTE2486.setToNode(CString("hanim_humanoid_root"));
ROUTE2486.setToField(CString("set_translation"));
Scene29.addChild(&ROUTE2486);

ROUTE& ROUTE2487 =  ROUTE();
ROUTE2487.setFromNode(CString("Stop_HumanoidRoot_RotationInterpolator"));
ROUTE2487.setFromField(CString("value_changed"));
ROUTE2487.setToNode(CString("hanim_humanoid_root"));
ROUTE2487.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2487);

ROUTE& ROUTE2488 =  ROUTE();
ROUTE2488.setFromNode(CString("Stop_sacroiliac_RotationInterpolator"));
ROUTE2488.setFromField(CString("value_changed"));
ROUTE2488.setToNode(CString("hanim_sacroiliac"));
ROUTE2488.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2488);

ROUTE& ROUTE2489 =  ROUTE();
ROUTE2489.setFromNode(CString("Stop_l_hip_RotationInterpolator"));
ROUTE2489.setFromField(CString("value_changed"));
ROUTE2489.setToNode(CString("hanim_l_hip"));
ROUTE2489.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2489);

ROUTE& ROUTE2490 =  ROUTE();
ROUTE2490.setFromNode(CString("Stop_l_knee_RotationInterpolator"));
ROUTE2490.setFromField(CString("value_changed"));
ROUTE2490.setToNode(CString("hanim_l_knee"));
ROUTE2490.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2490);

ROUTE& ROUTE2491 =  ROUTE();
ROUTE2491.setFromNode(CString("Stop_l_ankle_RotationInterpolator"));
ROUTE2491.setFromField(CString("value_changed"));
ROUTE2491.setToNode(CString("hanim_l_ankle"));
ROUTE2491.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2491);

ROUTE& ROUTE2492 =  ROUTE();
ROUTE2492.setFromNode(CString("Stop_l_subtalar_RotationInterpolator"));
ROUTE2492.setFromField(CString("value_changed"));
ROUTE2492.setToNode(CString("hanim_l_subtalar"));
ROUTE2492.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2492);

ROUTE& ROUTE2493 =  ROUTE();
ROUTE2493.setFromNode(CString("Stop_l_midtarsal_RotationInterpolator"));
ROUTE2493.setFromField(CString("value_changed"));
ROUTE2493.setToNode(CString("hanim_l_midtarsal"));
ROUTE2493.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2493);

ROUTE& ROUTE2494 =  ROUTE();
ROUTE2494.setFromNode(CString("Stop_l_metatarsal_RotationInterpolator"));
ROUTE2494.setFromField(CString("value_changed"));
ROUTE2494.setToNode(CString("hanim_l_metatarsal"));
ROUTE2494.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2494);

ROUTE& ROUTE2495 =  ROUTE();
ROUTE2495.setFromNode(CString("Stop_r_hip_RotationInterpolator"));
ROUTE2495.setFromField(CString("value_changed"));
ROUTE2495.setToNode(CString("hanim_r_hip"));
ROUTE2495.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2495);

ROUTE& ROUTE2496 =  ROUTE();
ROUTE2496.setFromNode(CString("Stop_r_knee_RotationInterpolator"));
ROUTE2496.setFromField(CString("value_changed"));
ROUTE2496.setToNode(CString("hanim_r_knee"));
ROUTE2496.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2496);

ROUTE& ROUTE2497 =  ROUTE();
ROUTE2497.setFromNode(CString("Stop_r_ankle_RotationInterpolator"));
ROUTE2497.setFromField(CString("value_changed"));
ROUTE2497.setToNode(CString("hanim_r_ankle"));
ROUTE2497.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2497);

ROUTE& ROUTE2498 =  ROUTE();
ROUTE2498.setFromNode(CString("Stop_r_subtalar_RotationInterpolator"));
ROUTE2498.setFromField(CString("value_changed"));
ROUTE2498.setToNode(CString("hanim_r_subtalar"));
ROUTE2498.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2498);

ROUTE& ROUTE2499 =  ROUTE();
ROUTE2499.setFromNode(CString("Stop_r_midtarsal_RotationInterpolator"));
ROUTE2499.setFromField(CString("value_changed"));
ROUTE2499.setToNode(CString("hanim_r_midtarsal"));
ROUTE2499.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2499);

ROUTE& ROUTE2500 =  ROUTE();
ROUTE2500.setFromNode(CString("Stop_r_metatarsal_RotationInterpolator"));
ROUTE2500.setFromField(CString("value_changed"));
ROUTE2500.setToNode(CString("hanim_r_metatarsal"));
ROUTE2500.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2500);

ROUTE& ROUTE2501 =  ROUTE();
ROUTE2501.setFromNode(CString("Stop_vl5_RotationInterpolator"));
ROUTE2501.setFromField(CString("value_changed"));
ROUTE2501.setToNode(CString("hanim_vl5"));
ROUTE2501.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2501);

ROUTE& ROUTE2502 =  ROUTE();
ROUTE2502.setFromNode(CString("Stop_vl4_RotationInterpolator"));
ROUTE2502.setFromField(CString("value_changed"));
ROUTE2502.setToNode(CString("hanim_vl4"));
ROUTE2502.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2502);

ROUTE& ROUTE2503 =  ROUTE();
ROUTE2503.setFromNode(CString("Stop_vl3_RotationInterpolator"));
ROUTE2503.setFromField(CString("value_changed"));
ROUTE2503.setToNode(CString("hanim_vl3"));
ROUTE2503.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2503);

ROUTE& ROUTE2504 =  ROUTE();
ROUTE2504.setFromNode(CString("Stop_vl2_RotationInterpolator"));
ROUTE2504.setFromField(CString("value_changed"));
ROUTE2504.setToNode(CString("hanim_vl2"));
ROUTE2504.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2504);

ROUTE& ROUTE2505 =  ROUTE();
ROUTE2505.setFromNode(CString("Stop_vl1_RotationInterpolator"));
ROUTE2505.setFromField(CString("value_changed"));
ROUTE2505.setToNode(CString("hanim_vl1"));
ROUTE2505.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2505);

ROUTE& ROUTE2506 =  ROUTE();
ROUTE2506.setFromNode(CString("Stop_vt12_RotationInterpolator"));
ROUTE2506.setFromField(CString("value_changed"));
ROUTE2506.setToNode(CString("hanim_vt12"));
ROUTE2506.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2506);

ROUTE& ROUTE2507 =  ROUTE();
ROUTE2507.setFromNode(CString("Stop_vt11_RotationInterpolator"));
ROUTE2507.setFromField(CString("value_changed"));
ROUTE2507.setToNode(CString("hanim_vt11"));
ROUTE2507.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2507);

ROUTE& ROUTE2508 =  ROUTE();
ROUTE2508.setFromNode(CString("Stop_vt10_RotationInterpolator"));
ROUTE2508.setFromField(CString("value_changed"));
ROUTE2508.setToNode(CString("hanim_vt10"));
ROUTE2508.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2508);

ROUTE& ROUTE2509 =  ROUTE();
ROUTE2509.setFromNode(CString("Stop_vt9_RotationInterpolator"));
ROUTE2509.setFromField(CString("value_changed"));
ROUTE2509.setToNode(CString("hanim_vt9"));
ROUTE2509.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2509);

ROUTE& ROUTE2510 =  ROUTE();
ROUTE2510.setFromNode(CString("Stop_vt8_RotationInterpolator"));
ROUTE2510.setFromField(CString("value_changed"));
ROUTE2510.setToNode(CString("hanim_vt8"));
ROUTE2510.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2510);

ROUTE& ROUTE2511 =  ROUTE();
ROUTE2511.setFromNode(CString("Stop_vt7_RotationInterpolator"));
ROUTE2511.setFromField(CString("value_changed"));
ROUTE2511.setToNode(CString("hanim_vt7"));
ROUTE2511.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2511);

ROUTE& ROUTE2512 =  ROUTE();
ROUTE2512.setFromNode(CString("Stop_vt6_RotationInterpolator"));
ROUTE2512.setFromField(CString("value_changed"));
ROUTE2512.setToNode(CString("hanim_vt6"));
ROUTE2512.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2512);

ROUTE& ROUTE2513 =  ROUTE();
ROUTE2513.setFromNode(CString("Stop_vt5_RotationInterpolator"));
ROUTE2513.setFromField(CString("value_changed"));
ROUTE2513.setToNode(CString("hanim_vt5"));
ROUTE2513.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2513);

ROUTE& ROUTE2514 =  ROUTE();
ROUTE2514.setFromNode(CString("Stop_vt4_RotationInterpolator"));
ROUTE2514.setFromField(CString("value_changed"));
ROUTE2514.setToNode(CString("hanim_vt4"));
ROUTE2514.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2514);

ROUTE& ROUTE2515 =  ROUTE();
ROUTE2515.setFromNode(CString("Stop_vt3_RotationInterpolator"));
ROUTE2515.setFromField(CString("value_changed"));
ROUTE2515.setToNode(CString("hanim_vt3"));
ROUTE2515.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2515);

ROUTE& ROUTE2516 =  ROUTE();
ROUTE2516.setFromNode(CString("Stop_vt2_RotationInterpolator"));
ROUTE2516.setFromField(CString("value_changed"));
ROUTE2516.setToNode(CString("hanim_vt2"));
ROUTE2516.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2516);

ROUTE& ROUTE2517 =  ROUTE();
ROUTE2517.setFromNode(CString("Stop_vt1_RotationInterpolator"));
ROUTE2517.setFromField(CString("value_changed"));
ROUTE2517.setToNode(CString("hanim_vt1"));
ROUTE2517.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2517);

ROUTE& ROUTE2518 =  ROUTE();
ROUTE2518.setFromNode(CString("Stop_vc7_RotationInterpolator"));
ROUTE2518.setFromField(CString("value_changed"));
ROUTE2518.setToNode(CString("hanim_vc7"));
ROUTE2518.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2518);

ROUTE& ROUTE2519 =  ROUTE();
ROUTE2519.setFromNode(CString("Stop_vc6_RotationInterpolator"));
ROUTE2519.setFromField(CString("value_changed"));
ROUTE2519.setToNode(CString("hanim_vc6"));
ROUTE2519.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2519);

ROUTE& ROUTE2520 =  ROUTE();
ROUTE2520.setFromNode(CString("Stop_vc5_RotationInterpolator"));
ROUTE2520.setFromField(CString("value_changed"));
ROUTE2520.setToNode(CString("hanim_vc5"));
ROUTE2520.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2520);

ROUTE& ROUTE2521 =  ROUTE();
ROUTE2521.setFromNode(CString("Stop_vc4_RotationInterpolator"));
ROUTE2521.setFromField(CString("value_changed"));
ROUTE2521.setToNode(CString("hanim_vc4"));
ROUTE2521.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2521);

ROUTE& ROUTE2522 =  ROUTE();
ROUTE2522.setFromNode(CString("Stop_vc3_RotationInterpolator"));
ROUTE2522.setFromField(CString("value_changed"));
ROUTE2522.setToNode(CString("hanim_vc3"));
ROUTE2522.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2522);

ROUTE& ROUTE2523 =  ROUTE();
ROUTE2523.setFromNode(CString("Stop_vc2_RotationInterpolator"));
ROUTE2523.setFromField(CString("value_changed"));
ROUTE2523.setToNode(CString("hanim_vc2"));
ROUTE2523.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2523);

ROUTE& ROUTE2524 =  ROUTE();
ROUTE2524.setFromNode(CString("Stop_vc1_RotationInterpolator"));
ROUTE2524.setFromField(CString("value_changed"));
ROUTE2524.setToNode(CString("hanim_vc1"));
ROUTE2524.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2524);

ROUTE& ROUTE2525 =  ROUTE();
ROUTE2525.setFromNode(CString("Stop_skullbase_RotationInterpolator"));
ROUTE2525.setFromField(CString("value_changed"));
ROUTE2525.setToNode(CString("hanim_skullbase"));
ROUTE2525.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2525);

ROUTE& ROUTE2526 =  ROUTE();
ROUTE2526.setFromNode(CString("Stop_l_eyeball_joint_RotationInterpolator"));
ROUTE2526.setFromField(CString("value_changed"));
ROUTE2526.setToNode(CString("hanim_l_eyeball_joint"));
ROUTE2526.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2526);

ROUTE& ROUTE2527 =  ROUTE();
ROUTE2527.setFromNode(CString("Stop_r_eyeball_joint_RotationInterpolator"));
ROUTE2527.setFromField(CString("value_changed"));
ROUTE2527.setToNode(CString("hanim_r_eyeball_joint"));
ROUTE2527.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2527);

ROUTE& ROUTE2528 =  ROUTE();
ROUTE2528.setFromNode(CString("Stop_l_sternoclavicular_RotationInterpolator"));
ROUTE2528.setFromField(CString("value_changed"));
ROUTE2528.setToNode(CString("hanim_l_sternoclavicular"));
ROUTE2528.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2528);

ROUTE& ROUTE2529 =  ROUTE();
ROUTE2529.setFromNode(CString("Stop_l_acromioclavicular_RotationInterpolator"));
ROUTE2529.setFromField(CString("value_changed"));
ROUTE2529.setToNode(CString("hanim_l_acromioclavicular"));
ROUTE2529.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2529);

ROUTE& ROUTE2530 =  ROUTE();
ROUTE2530.setFromNode(CString("Stop_l_shoulder_RotationInterpolator"));
ROUTE2530.setFromField(CString("value_changed"));
ROUTE2530.setToNode(CString("hanim_l_shoulder"));
ROUTE2530.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2530);

ROUTE& ROUTE2531 =  ROUTE();
ROUTE2531.setFromNode(CString("Stop_l_elbow_RotationInterpolator"));
ROUTE2531.setFromField(CString("value_changed"));
ROUTE2531.setToNode(CString("hanim_l_elbow"));
ROUTE2531.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2531);

ROUTE& ROUTE2532 =  ROUTE();
ROUTE2532.setFromNode(CString("Stop_l_wrist_RotationInterpolator"));
ROUTE2532.setFromField(CString("value_changed"));
ROUTE2532.setToNode(CString("hanim_l_wrist"));
ROUTE2532.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2532);

ROUTE& ROUTE2533 =  ROUTE();
ROUTE2533.setFromNode(CString("Stop_l_thumb1_RotationInterpolator"));
ROUTE2533.setFromField(CString("value_changed"));
ROUTE2533.setToNode(CString("hanim_l_thumb1"));
ROUTE2533.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2533);

ROUTE& ROUTE2534 =  ROUTE();
ROUTE2534.setFromNode(CString("Stop_l_thumb2_RotationInterpolator"));
ROUTE2534.setFromField(CString("value_changed"));
ROUTE2534.setToNode(CString("hanim_l_thumb2"));
ROUTE2534.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2534);

ROUTE& ROUTE2535 =  ROUTE();
ROUTE2535.setFromNode(CString("Stop_l_thumb3_RotationInterpolator"));
ROUTE2535.setFromField(CString("value_changed"));
ROUTE2535.setToNode(CString("hanim_l_thumb3"));
ROUTE2535.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2535);

ROUTE& ROUTE2536 =  ROUTE();
ROUTE2536.setFromNode(CString("Stop_l_index0_RotationInterpolator"));
ROUTE2536.setFromField(CString("value_changed"));
ROUTE2536.setToNode(CString("hanim_l_index0"));
ROUTE2536.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2536);

ROUTE& ROUTE2537 =  ROUTE();
ROUTE2537.setFromNode(CString("Stop_l_index1_RotationInterpolator"));
ROUTE2537.setFromField(CString("value_changed"));
ROUTE2537.setToNode(CString("hanim_l_index1"));
ROUTE2537.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2537);

ROUTE& ROUTE2538 =  ROUTE();
ROUTE2538.setFromNode(CString("Stop_l_index2_RotationInterpolator"));
ROUTE2538.setFromField(CString("value_changed"));
ROUTE2538.setToNode(CString("hanim_l_index2"));
ROUTE2538.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2538);

ROUTE& ROUTE2539 =  ROUTE();
ROUTE2539.setFromNode(CString("Stop_l_index3_RotationInterpolator"));
ROUTE2539.setFromField(CString("value_changed"));
ROUTE2539.setToNode(CString("hanim_l_index3"));
ROUTE2539.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2539);

ROUTE& ROUTE2540 =  ROUTE();
ROUTE2540.setFromNode(CString("Stop_l_middle0_RotationInterpolator"));
ROUTE2540.setFromField(CString("value_changed"));
ROUTE2540.setToNode(CString("hanim_l_middle0"));
ROUTE2540.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2540);

ROUTE& ROUTE2541 =  ROUTE();
ROUTE2541.setFromNode(CString("Stop_l_middle1_RotationInterpolator"));
ROUTE2541.setFromField(CString("value_changed"));
ROUTE2541.setToNode(CString("hanim_l_middle1"));
ROUTE2541.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2541);

ROUTE& ROUTE2542 =  ROUTE();
ROUTE2542.setFromNode(CString("Stop_l_middle2_RotationInterpolator"));
ROUTE2542.setFromField(CString("value_changed"));
ROUTE2542.setToNode(CString("hanim_l_middle2"));
ROUTE2542.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2542);

ROUTE& ROUTE2543 =  ROUTE();
ROUTE2543.setFromNode(CString("Stop_l_middle3_RotationInterpolator"));
ROUTE2543.setFromField(CString("value_changed"));
ROUTE2543.setToNode(CString("hanim_l_middle3"));
ROUTE2543.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2543);

ROUTE& ROUTE2544 =  ROUTE();
ROUTE2544.setFromNode(CString("Stop_l_ring0_RotationInterpolator"));
ROUTE2544.setFromField(CString("value_changed"));
ROUTE2544.setToNode(CString("hanim_l_ring0"));
ROUTE2544.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2544);

ROUTE& ROUTE2545 =  ROUTE();
ROUTE2545.setFromNode(CString("Stop_l_ring1_RotationInterpolator"));
ROUTE2545.setFromField(CString("value_changed"));
ROUTE2545.setToNode(CString("hanim_l_ring1"));
ROUTE2545.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2545);

ROUTE& ROUTE2546 =  ROUTE();
ROUTE2546.setFromNode(CString("Stop_l_ring2_RotationInterpolator"));
ROUTE2546.setFromField(CString("value_changed"));
ROUTE2546.setToNode(CString("hanim_l_ring2"));
ROUTE2546.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2546);

ROUTE& ROUTE2547 =  ROUTE();
ROUTE2547.setFromNode(CString("Stop_l_ring3_RotationInterpolator"));
ROUTE2547.setFromField(CString("value_changed"));
ROUTE2547.setToNode(CString("hanim_l_ring3"));
ROUTE2547.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2547);

ROUTE& ROUTE2548 =  ROUTE();
ROUTE2548.setFromNode(CString("Stop_l_pinky0_RotationInterpolator"));
ROUTE2548.setFromField(CString("value_changed"));
ROUTE2548.setToNode(CString("hanim_l_pinky0"));
ROUTE2548.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2548);

ROUTE& ROUTE2549 =  ROUTE();
ROUTE2549.setFromNode(CString("Stop_l_pinky1_RotationInterpolator"));
ROUTE2549.setFromField(CString("value_changed"));
ROUTE2549.setToNode(CString("hanim_l_pinky1"));
ROUTE2549.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2549);

ROUTE& ROUTE2550 =  ROUTE();
ROUTE2550.setFromNode(CString("Stop_l_pinky2_RotationInterpolator"));
ROUTE2550.setFromField(CString("value_changed"));
ROUTE2550.setToNode(CString("hanim_l_pinky2"));
ROUTE2550.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2550);

ROUTE& ROUTE2551 =  ROUTE();
ROUTE2551.setFromNode(CString("Stop_l_pinky3_RotationInterpolator"));
ROUTE2551.setFromField(CString("value_changed"));
ROUTE2551.setToNode(CString("hanim_l_pinky3"));
ROUTE2551.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2551);

ROUTE& ROUTE2552 =  ROUTE();
ROUTE2552.setFromNode(CString("Stop_r_sternoclavicular_RotationInterpolator"));
ROUTE2552.setFromField(CString("value_changed"));
ROUTE2552.setToNode(CString("hanim_r_sternoclavicular"));
ROUTE2552.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2552);

ROUTE& ROUTE2553 =  ROUTE();
ROUTE2553.setFromNode(CString("Stop_r_acromioclavicular_RotationInterpolator"));
ROUTE2553.setFromField(CString("value_changed"));
ROUTE2553.setToNode(CString("hanim_r_acromioclavicular"));
ROUTE2553.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2553);

ROUTE& ROUTE2554 =  ROUTE();
ROUTE2554.setFromNode(CString("Stop_r_shoulder_RotationInterpolator"));
ROUTE2554.setFromField(CString("value_changed"));
ROUTE2554.setToNode(CString("hanim_r_shoulder"));
ROUTE2554.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2554);

ROUTE& ROUTE2555 =  ROUTE();
ROUTE2555.setFromNode(CString("Stop_r_elbow_RotationInterpolator"));
ROUTE2555.setFromField(CString("value_changed"));
ROUTE2555.setToNode(CString("hanim_r_elbow"));
ROUTE2555.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2555);

ROUTE& ROUTE2556 =  ROUTE();
ROUTE2556.setFromNode(CString("Stop_r_wrist_RotationInterpolator"));
ROUTE2556.setFromField(CString("value_changed"));
ROUTE2556.setToNode(CString("hanim_r_wrist"));
ROUTE2556.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2556);

ROUTE& ROUTE2557 =  ROUTE();
ROUTE2557.setFromNode(CString("Stop_r_thumb1_RotationInterpolator"));
ROUTE2557.setFromField(CString("value_changed"));
ROUTE2557.setToNode(CString("hanim_r_thumb1"));
ROUTE2557.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2557);

ROUTE& ROUTE2558 =  ROUTE();
ROUTE2558.setFromNode(CString("Stop_r_thumb2_RotationInterpolator"));
ROUTE2558.setFromField(CString("value_changed"));
ROUTE2558.setToNode(CString("hanim_r_thumb2"));
ROUTE2558.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2558);

ROUTE& ROUTE2559 =  ROUTE();
ROUTE2559.setFromNode(CString("Stop_r_thumb3_RotationInterpolator"));
ROUTE2559.setFromField(CString("value_changed"));
ROUTE2559.setToNode(CString("hanim_r_thumb3"));
ROUTE2559.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2559);

ROUTE& ROUTE2560 =  ROUTE();
ROUTE2560.setFromNode(CString("Stop_r_index0_RotationInterpolator"));
ROUTE2560.setFromField(CString("value_changed"));
ROUTE2560.setToNode(CString("hanim_r_index0"));
ROUTE2560.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2560);

ROUTE& ROUTE2561 =  ROUTE();
ROUTE2561.setFromNode(CString("Stop_r_index1_RotationInterpolator"));
ROUTE2561.setFromField(CString("value_changed"));
ROUTE2561.setToNode(CString("hanim_r_index1"));
ROUTE2561.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2561);

ROUTE& ROUTE2562 =  ROUTE();
ROUTE2562.setFromNode(CString("Stop_r_index2_RotationInterpolator"));
ROUTE2562.setFromField(CString("value_changed"));
ROUTE2562.setToNode(CString("hanim_r_index2"));
ROUTE2562.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2562);

ROUTE& ROUTE2563 =  ROUTE();
ROUTE2563.setFromNode(CString("Stop_r_index3_RotationInterpolator"));
ROUTE2563.setFromField(CString("value_changed"));
ROUTE2563.setToNode(CString("hanim_r_index3"));
ROUTE2563.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2563);

ROUTE& ROUTE2564 =  ROUTE();
ROUTE2564.setFromNode(CString("Stop_r_middle0_RotationInterpolator"));
ROUTE2564.setFromField(CString("value_changed"));
ROUTE2564.setToNode(CString("hanim_r_middle0"));
ROUTE2564.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2564);

ROUTE& ROUTE2565 =  ROUTE();
ROUTE2565.setFromNode(CString("Stop_r_middle1_RotationInterpolator"));
ROUTE2565.setFromField(CString("value_changed"));
ROUTE2565.setToNode(CString("hanim_r_middle1"));
ROUTE2565.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2565);

ROUTE& ROUTE2566 =  ROUTE();
ROUTE2566.setFromNode(CString("Stop_r_middle2_RotationInterpolator"));
ROUTE2566.setFromField(CString("value_changed"));
ROUTE2566.setToNode(CString("hanim_r_middle2"));
ROUTE2566.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2566);

ROUTE& ROUTE2567 =  ROUTE();
ROUTE2567.setFromNode(CString("Stop_r_middle3_RotationInterpolator"));
ROUTE2567.setFromField(CString("value_changed"));
ROUTE2567.setToNode(CString("hanim_r_middle3"));
ROUTE2567.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2567);

ROUTE& ROUTE2568 =  ROUTE();
ROUTE2568.setFromNode(CString("Stop_r_ring0_RotationInterpolator"));
ROUTE2568.setFromField(CString("value_changed"));
ROUTE2568.setToNode(CString("hanim_r_ring0"));
ROUTE2568.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2568);

ROUTE& ROUTE2569 =  ROUTE();
ROUTE2569.setFromNode(CString("Stop_r_ring1_RotationInterpolator"));
ROUTE2569.setFromField(CString("value_changed"));
ROUTE2569.setToNode(CString("hanim_r_ring1"));
ROUTE2569.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2569);

ROUTE& ROUTE2570 =  ROUTE();
ROUTE2570.setFromNode(CString("Stop_r_ring2_RotationInterpolator"));
ROUTE2570.setFromField(CString("value_changed"));
ROUTE2570.setToNode(CString("hanim_r_ring2"));
ROUTE2570.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2570);

ROUTE& ROUTE2571 =  ROUTE();
ROUTE2571.setFromNode(CString("Stop_r_ring3_RotationInterpolator"));
ROUTE2571.setFromField(CString("value_changed"));
ROUTE2571.setToNode(CString("hanim_r_ring3"));
ROUTE2571.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2571);

ROUTE& ROUTE2572 =  ROUTE();
ROUTE2572.setFromNode(CString("Stop_r_pinky0_RotationInterpolator"));
ROUTE2572.setFromField(CString("value_changed"));
ROUTE2572.setToNode(CString("hanim_r_pinky0"));
ROUTE2572.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2572);

ROUTE& ROUTE2573 =  ROUTE();
ROUTE2573.setFromNode(CString("Stop_r_pinky1_RotationInterpolator"));
ROUTE2573.setFromField(CString("value_changed"));
ROUTE2573.setToNode(CString("hanim_r_pinky1"));
ROUTE2573.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2573);

ROUTE& ROUTE2574 =  ROUTE();
ROUTE2574.setFromNode(CString("Stop_r_pinky2_RotationInterpolator"));
ROUTE2574.setFromField(CString("value_changed"));
ROUTE2574.setToNode(CString("hanim_r_pinky2"));
ROUTE2574.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2574);

ROUTE& ROUTE2575 =  ROUTE();
ROUTE2575.setFromNode(CString("Stop_r_pinky3_RotationInterpolator"));
ROUTE2575.setFromField(CString("value_changed"));
ROUTE2575.setToNode(CString("hanim_r_pinky3"));
ROUTE2575.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2575);

ROUTE& ROUTE2576 =  ROUTE();
ROUTE2576.setFromNode(CString("StandTimer"));
ROUTE2576.setFromField(CString("fraction_changed"));
ROUTE2576.setToNode(CString("Stand_r_ankle_RotationInterpolator"));
ROUTE2576.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2576);

ROUTE& ROUTE2577 =  ROUTE();
ROUTE2577.setFromNode(CString("StandTimer"));
ROUTE2577.setFromField(CString("fraction_changed"));
ROUTE2577.setToNode(CString("Stand_r_knee_RotationInterpolator"));
ROUTE2577.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2577);

ROUTE& ROUTE2578 =  ROUTE();
ROUTE2578.setFromNode(CString("StandTimer"));
ROUTE2578.setFromField(CString("fraction_changed"));
ROUTE2578.setToNode(CString("Stand_r_hip_RotationInterpolator"));
ROUTE2578.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2578);

ROUTE& ROUTE2579 =  ROUTE();
ROUTE2579.setFromNode(CString("StandTimer"));
ROUTE2579.setFromField(CString("fraction_changed"));
ROUTE2579.setToNode(CString("Stand_l_ankle_RotationInterpolator"));
ROUTE2579.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2579);

ROUTE& ROUTE2580 =  ROUTE();
ROUTE2580.setFromNode(CString("StandTimer"));
ROUTE2580.setFromField(CString("fraction_changed"));
ROUTE2580.setToNode(CString("Stand_l_knee_RotationInterpolator"));
ROUTE2580.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2580);

ROUTE& ROUTE2581 =  ROUTE();
ROUTE2581.setFromNode(CString("StandTimer"));
ROUTE2581.setFromField(CString("fraction_changed"));
ROUTE2581.setToNode(CString("Stand_l_hip_RotationInterpolator"));
ROUTE2581.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2581);

ROUTE& ROUTE2582 =  ROUTE();
ROUTE2582.setFromNode(CString("StandTimer"));
ROUTE2582.setFromField(CString("fraction_changed"));
ROUTE2582.setToNode(CString("Stand_lower_body_RotationInterpolator"));
ROUTE2582.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2582);

ROUTE& ROUTE2583 =  ROUTE();
ROUTE2583.setFromNode(CString("StandTimer"));
ROUTE2583.setFromField(CString("fraction_changed"));
ROUTE2583.setToNode(CString("Stand_r_wrist_RotationInterpolator"));
ROUTE2583.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2583);

ROUTE& ROUTE2584 =  ROUTE();
ROUTE2584.setFromNode(CString("StandTimer"));
ROUTE2584.setFromField(CString("fraction_changed"));
ROUTE2584.setToNode(CString("Stand_r_elbow_RotationInterpolator"));
ROUTE2584.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2584);

ROUTE& ROUTE2585 =  ROUTE();
ROUTE2585.setFromNode(CString("StandTimer"));
ROUTE2585.setFromField(CString("fraction_changed"));
ROUTE2585.setToNode(CString("Stand_r_shoulder_RotationInterpolator"));
ROUTE2585.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2585);

ROUTE& ROUTE2586 =  ROUTE();
ROUTE2586.setFromNode(CString("StandTimer"));
ROUTE2586.setFromField(CString("fraction_changed"));
ROUTE2586.setToNode(CString("Stand_l_wrist_RotationInterpolator"));
ROUTE2586.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2586);

ROUTE& ROUTE2587 =  ROUTE();
ROUTE2587.setFromNode(CString("StandTimer"));
ROUTE2587.setFromField(CString("fraction_changed"));
ROUTE2587.setToNode(CString("Stand_l_elbow_RotationInterpolator"));
ROUTE2587.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2587);

ROUTE& ROUTE2588 =  ROUTE();
ROUTE2588.setFromNode(CString("StandTimer"));
ROUTE2588.setFromField(CString("fraction_changed"));
ROUTE2588.setToNode(CString("Stand_l_shoulder_RotationInterpolator"));
ROUTE2588.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2588);

ROUTE& ROUTE2589 =  ROUTE();
ROUTE2589.setFromNode(CString("StandTimer"));
ROUTE2589.setFromField(CString("fraction_changed"));
ROUTE2589.setToNode(CString("Stand_head_RotationInterpolator"));
ROUTE2589.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2589);

ROUTE& ROUTE2590 =  ROUTE();
ROUTE2590.setFromNode(CString("StandTimer"));
ROUTE2590.setFromField(CString("fraction_changed"));
ROUTE2590.setToNode(CString("Stand_neck_RotationInterpolator"));
ROUTE2590.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2590);

ROUTE& ROUTE2591 =  ROUTE();
ROUTE2591.setFromNode(CString("StandTimer"));
ROUTE2591.setFromField(CString("fraction_changed"));
ROUTE2591.setToNode(CString("Stand_l_eyeball_RotationInterpolator"));
ROUTE2591.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2591);

ROUTE& ROUTE2592 =  ROUTE();
ROUTE2592.setFromNode(CString("StandTimer"));
ROUTE2592.setFromField(CString("fraction_changed"));
ROUTE2592.setToNode(CString("Stand_r_eyeball_RotationInterpolator"));
ROUTE2592.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2592);

ROUTE& ROUTE2593 =  ROUTE();
ROUTE2593.setFromNode(CString("StandTimer"));
ROUTE2593.setFromField(CString("fraction_changed"));
ROUTE2593.setToNode(CString("Stand_upper_body_RotationInterpolator"));
ROUTE2593.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2593);

ROUTE& ROUTE2594 =  ROUTE();
ROUTE2594.setFromNode(CString("StandTimer"));
ROUTE2594.setFromField(CString("fraction_changed"));
ROUTE2594.setToNode(CString("Stand_whole_body_RotationInterpolator"));
ROUTE2594.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2594);

ROUTE& ROUTE2595 =  ROUTE();
ROUTE2595.setFromNode(CString("StandTimer"));
ROUTE2595.setFromField(CString("fraction_changed"));
ROUTE2595.setToNode(CString("Stand_whole_body_TranslationInterpolator"));
ROUTE2595.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2595);

ROUTE& ROUTE2596 =  ROUTE();
ROUTE2596.setFromNode(CString("StandTimer"));
ROUTE2596.setFromField(CString("fraction_changed"));
ROUTE2596.setToNode(CString("Stand_l_sternoclavicular_RollInterpolator"));
ROUTE2596.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2596);

ROUTE& ROUTE2597 =  ROUTE();
ROUTE2597.setFromNode(CString("StandTimer"));
ROUTE2597.setFromField(CString("fraction_changed"));
ROUTE2597.setToNode(CString("Stand_l_acromioclavicular_RollInterpolator"));
ROUTE2597.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2597);

ROUTE& ROUTE2598 =  ROUTE();
ROUTE2598.setFromNode(CString("StandTimer"));
ROUTE2598.setFromField(CString("fraction_changed"));
ROUTE2598.setToNode(CString("Stand_r_sternoclavicular_RollInterpolator"));
ROUTE2598.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2598);

ROUTE& ROUTE2599 =  ROUTE();
ROUTE2599.setFromNode(CString("StandTimer"));
ROUTE2599.setFromField(CString("fraction_changed"));
ROUTE2599.setToNode(CString("Stand_r_acromioclavicular_RollInterpolator"));
ROUTE2599.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2599);

ROUTE& ROUTE2600 =  ROUTE();
ROUTE2600.setFromNode(CString("StandTimer"));
ROUTE2600.setFromField(CString("fraction_changed"));
ROUTE2600.setToNode(CString("Stand_r_metatarsal_PitchInterpolator"));
ROUTE2600.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2600);

ROUTE& ROUTE2601 =  ROUTE();
ROUTE2601.setFromNode(CString("StandTimer"));
ROUTE2601.setFromField(CString("fraction_changed"));
ROUTE2601.setToNode(CString("Stand_sacroiliac_YawInterpolator"));
ROUTE2601.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2601);

ROUTE& ROUTE2602 =  ROUTE();
ROUTE2602.setFromNode(CString("StandTimer"));
ROUTE2602.setFromField(CString("fraction_changed"));
ROUTE2602.setToNode(CString("Stand_vl5_YawInterpolator"));
ROUTE2602.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2602);

ROUTE& ROUTE2603 =  ROUTE();
ROUTE2603.setFromNode(CString("StandTimer"));
ROUTE2603.setFromField(CString("fraction_changed"));
ROUTE2603.setToNode(CString("Stand_vc6_YawInterpolator"));
ROUTE2603.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2603);

ROUTE& ROUTE2604 =  ROUTE();
ROUTE2604.setFromNode(CString("StandTimer"));
ROUTE2604.setFromField(CString("fraction_changed"));
ROUTE2604.setToNode(CString("Stand_l_thumb1_PitchInterpolator"));
ROUTE2604.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2604);

ROUTE& ROUTE2605 =  ROUTE();
ROUTE2605.setFromNode(CString("StandTimer"));
ROUTE2605.setFromField(CString("fraction_changed"));
ROUTE2605.setToNode(CString("Stand_r_thumb1_PitchInterpolator"));
ROUTE2605.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2605);

ROUTE& ROUTE2606 =  ROUTE();
ROUTE2606.setFromNode(CString("StandTimer"));
ROUTE2606.setFromField(CString("fraction_changed"));
ROUTE2606.setToNode(CString("Stand_r_index1_RollInterpolator"));
ROUTE2606.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2606);

ROUTE& ROUTE2607 =  ROUTE();
ROUTE2607.setFromNode(CString("StandTimer"));
ROUTE2607.setFromField(CString("fraction_changed"));
ROUTE2607.setToNode(CString("Stand_r_index2_RollInterpolator"));
ROUTE2607.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2607);

ROUTE& ROUTE2608 =  ROUTE();
ROUTE2608.setFromNode(CString("StandTimer"));
ROUTE2608.setFromField(CString("fraction_changed"));
ROUTE2608.setToNode(CString("Stand_r_index3_RollInterpolator"));
ROUTE2608.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2608);

ROUTE& ROUTE2609 =  ROUTE();
ROUTE2609.setFromNode(CString("Stand_r_ankle_RotationInterpolator"));
ROUTE2609.setFromField(CString("value_changed"));
ROUTE2609.setToNode(CString("hanim_r_ankle"));
ROUTE2609.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2609);

ROUTE& ROUTE2610 =  ROUTE();
ROUTE2610.setFromNode(CString("Stand_r_knee_RotationInterpolator"));
ROUTE2610.setFromField(CString("value_changed"));
ROUTE2610.setToNode(CString("hanim_r_knee"));
ROUTE2610.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2610);

ROUTE& ROUTE2611 =  ROUTE();
ROUTE2611.setFromNode(CString("Stand_r_hip_RotationInterpolator"));
ROUTE2611.setFromField(CString("value_changed"));
ROUTE2611.setToNode(CString("hanim_r_hip"));
ROUTE2611.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2611);

ROUTE& ROUTE2612 =  ROUTE();
ROUTE2612.setFromNode(CString("Stand_l_ankle_RotationInterpolator"));
ROUTE2612.setFromField(CString("value_changed"));
ROUTE2612.setToNode(CString("hanim_l_ankle"));
ROUTE2612.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2612);

ROUTE& ROUTE2613 =  ROUTE();
ROUTE2613.setFromNode(CString("Stand_l_knee_RotationInterpolator"));
ROUTE2613.setFromField(CString("value_changed"));
ROUTE2613.setToNode(CString("hanim_l_knee"));
ROUTE2613.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2613);

ROUTE& ROUTE2614 =  ROUTE();
ROUTE2614.setFromNode(CString("Stand_l_hip_RotationInterpolator"));
ROUTE2614.setFromField(CString("value_changed"));
ROUTE2614.setToNode(CString("hanim_l_hip"));
ROUTE2614.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2614);

ROUTE& ROUTE2615 =  ROUTE();
ROUTE2615.setFromNode(CString("Stand_r_wrist_RotationInterpolator"));
ROUTE2615.setFromField(CString("value_changed"));
ROUTE2615.setToNode(CString("hanim_r_wrist"));
ROUTE2615.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2615);

ROUTE& ROUTE2616 =  ROUTE();
ROUTE2616.setFromNode(CString("Stand_r_elbow_RotationInterpolator"));
ROUTE2616.setFromField(CString("value_changed"));
ROUTE2616.setToNode(CString("hanim_r_elbow"));
ROUTE2616.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2616);

ROUTE& ROUTE2617 =  ROUTE();
ROUTE2617.setFromNode(CString("Stand_r_shoulder_RotationInterpolator"));
ROUTE2617.setFromField(CString("value_changed"));
ROUTE2617.setToNode(CString("hanim_r_shoulder"));
ROUTE2617.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2617);

ROUTE& ROUTE2618 =  ROUTE();
ROUTE2618.setFromNode(CString("Stand_l_wrist_RotationInterpolator"));
ROUTE2618.setFromField(CString("value_changed"));
ROUTE2618.setToNode(CString("hanim_l_wrist"));
ROUTE2618.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2618);

ROUTE& ROUTE2619 =  ROUTE();
ROUTE2619.setFromNode(CString("Stand_l_elbow_RotationInterpolator"));
ROUTE2619.setFromField(CString("value_changed"));
ROUTE2619.setToNode(CString("hanim_l_elbow"));
ROUTE2619.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2619);

ROUTE& ROUTE2620 =  ROUTE();
ROUTE2620.setFromNode(CString("Stand_l_shoulder_RotationInterpolator"));
ROUTE2620.setFromField(CString("value_changed"));
ROUTE2620.setToNode(CString("hanim_l_shoulder"));
ROUTE2620.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2620);

ROUTE& ROUTE2621 =  ROUTE();
ROUTE2621.setFromNode(CString("Stand_head_RotationInterpolator"));
ROUTE2621.setFromField(CString("value_changed"));
ROUTE2621.setToNode(CString("hanim_skullbase"));
ROUTE2621.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2621);

ROUTE& ROUTE2622 =  ROUTE();
ROUTE2622.setFromNode(CString("Stand_neck_RotationInterpolator"));
ROUTE2622.setFromField(CString("value_changed"));
ROUTE2622.setToNode(CString("hanim_vc7"));
ROUTE2622.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2622);

ROUTE& ROUTE2623 =  ROUTE();
ROUTE2623.setFromNode(CString("Stand_l_eyeball_RotationInterpolator"));
ROUTE2623.setFromField(CString("value_changed"));
ROUTE2623.setToNode(CString("hanim_l_eyeball_joint"));
ROUTE2623.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2623);

ROUTE& ROUTE2624 =  ROUTE();
ROUTE2624.setFromNode(CString("Stand_r_eyeball_RotationInterpolator"));
ROUTE2624.setFromField(CString("value_changed"));
ROUTE2624.setToNode(CString("hanim_r_eyeball_joint"));
ROUTE2624.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2624);

ROUTE& ROUTE2625 =  ROUTE();
ROUTE2625.setFromNode(CString("Stand_upper_body_RotationInterpolator"));
ROUTE2625.setFromField(CString("value_changed"));
ROUTE2625.setToNode(CString("hanim_vl1"));
ROUTE2625.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2625);

ROUTE& ROUTE2626 =  ROUTE();
ROUTE2626.setFromNode(CString("Stand_lower_body_RotationInterpolator"));
ROUTE2626.setFromField(CString("value_changed"));
ROUTE2626.setToNode(CString("hanim_sacroiliac"));
ROUTE2626.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2626);

ROUTE& ROUTE2627 =  ROUTE();
ROUTE2627.setFromNode(CString("Stand_whole_body_RotationInterpolator"));
ROUTE2627.setFromField(CString("value_changed"));
ROUTE2627.setToNode(CString("hanim_humanoid_root"));
ROUTE2627.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2627);

ROUTE& ROUTE2628 =  ROUTE();
ROUTE2628.setFromNode(CString("Stand_whole_body_TranslationInterpolator"));
ROUTE2628.setFromField(CString("value_changed"));
ROUTE2628.setToNode(CString("hanim_humanoid_root"));
ROUTE2628.setToField(CString("set_translation"));
Scene29.addChild(&ROUTE2628);

ROUTE& ROUTE2629 =  ROUTE();
ROUTE2629.setFromNode(CString("Stand_l_sternoclavicular_RollInterpolator"));
ROUTE2629.setFromField(CString("value_changed"));
ROUTE2629.setToNode(CString("hanim_l_sternoclavicular"));
ROUTE2629.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2629);

ROUTE& ROUTE2630 =  ROUTE();
ROUTE2630.setFromNode(CString("Stand_l_acromioclavicular_RollInterpolator"));
ROUTE2630.setFromField(CString("value_changed"));
ROUTE2630.setToNode(CString("hanim_l_acromioclavicular"));
ROUTE2630.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2630);

ROUTE& ROUTE2631 =  ROUTE();
ROUTE2631.setFromNode(CString("Stand_r_sternoclavicular_RollInterpolator"));
ROUTE2631.setFromField(CString("value_changed"));
ROUTE2631.setToNode(CString("hanim_r_sternoclavicular"));
ROUTE2631.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2631);

ROUTE& ROUTE2632 =  ROUTE();
ROUTE2632.setFromNode(CString("Stand_r_acromioclavicular_RollInterpolator"));
ROUTE2632.setFromField(CString("value_changed"));
ROUTE2632.setToNode(CString("hanim_r_acromioclavicular"));
ROUTE2632.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2632);

ROUTE& ROUTE2633 =  ROUTE();
ROUTE2633.setFromNode(CString("Stand_r_metatarsal_PitchInterpolator"));
ROUTE2633.setFromField(CString("value_changed"));
ROUTE2633.setToNode(CString("hanim_l_metatarsal"));
ROUTE2633.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2633);

ROUTE& ROUTE2634 =  ROUTE();
ROUTE2634.setFromNode(CString("Stand_r_metatarsal_PitchInterpolator"));
ROUTE2634.setFromField(CString("value_changed"));
ROUTE2634.setToNode(CString("hanim_r_metatarsal"));
ROUTE2634.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2634);

ROUTE& ROUTE2635 =  ROUTE();
ROUTE2635.setFromNode(CString("Stand_sacroiliac_YawInterpolator"));
ROUTE2635.setFromField(CString("value_changed"));
ROUTE2635.setToNode(CString("hanim_sacroiliac"));
ROUTE2635.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2635);

ROUTE& ROUTE2636 =  ROUTE();
ROUTE2636.setFromNode(CString("Stand_vl5_YawInterpolator"));
ROUTE2636.setFromField(CString("value_changed"));
ROUTE2636.setToNode(CString("hanim_vl5"));
ROUTE2636.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2636);

ROUTE& ROUTE2637 =  ROUTE();
ROUTE2637.setFromNode(CString("Stand_vc6_YawInterpolator"));
ROUTE2637.setFromField(CString("value_changed"));
ROUTE2637.setToNode(CString("hanim_vc6"));
ROUTE2637.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2637);

ROUTE& ROUTE2638 =  ROUTE();
ROUTE2638.setFromNode(CString("Stand_l_thumb1_PitchInterpolator"));
ROUTE2638.setFromField(CString("value_changed"));
ROUTE2638.setToNode(CString("hanim_l_thumb1"));
ROUTE2638.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2638);

ROUTE& ROUTE2639 =  ROUTE();
ROUTE2639.setFromNode(CString("Stand_r_thumb1_PitchInterpolator"));
ROUTE2639.setFromField(CString("value_changed"));
ROUTE2639.setToNode(CString("hanim_r_thumb1"));
ROUTE2639.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2639);

ROUTE& ROUTE2640 =  ROUTE();
ROUTE2640.setFromNode(CString("Stand_r_index1_RollInterpolator"));
ROUTE2640.setFromField(CString("value_changed"));
ROUTE2640.setToNode(CString("hanim_r_index1"));
ROUTE2640.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2640);

ROUTE& ROUTE2641 =  ROUTE();
ROUTE2641.setFromNode(CString("Stand_r_index2_RollInterpolator"));
ROUTE2641.setFromField(CString("value_changed"));
ROUTE2641.setToNode(CString("hanim_r_index2"));
ROUTE2641.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2641);

ROUTE& ROUTE2642 =  ROUTE();
ROUTE2642.setFromNode(CString("Stand_r_index3_RollInterpolator"));
ROUTE2642.setFromField(CString("value_changed"));
ROUTE2642.setToNode(CString("hanim_r_index3"));
ROUTE2642.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2642);

ROUTE& ROUTE2643 =  ROUTE();
ROUTE2643.setFromNode(CString("Stand_r_index1_RollInterpolator"));
ROUTE2643.setFromField(CString("value_changed"));
ROUTE2643.setToNode(CString("hanim_r_middle1"));
ROUTE2643.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2643);

ROUTE& ROUTE2644 =  ROUTE();
ROUTE2644.setFromNode(CString("Stand_r_index2_RollInterpolator"));
ROUTE2644.setFromField(CString("value_changed"));
ROUTE2644.setToNode(CString("hanim_r_middle2"));
ROUTE2644.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2644);

ROUTE& ROUTE2645 =  ROUTE();
ROUTE2645.setFromNode(CString("Stand_r_index3_RollInterpolator"));
ROUTE2645.setFromField(CString("value_changed"));
ROUTE2645.setToNode(CString("hanim_r_middle3"));
ROUTE2645.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2645);

ROUTE& ROUTE2646 =  ROUTE();
ROUTE2646.setFromNode(CString("Stand_r_index1_RollInterpolator"));
ROUTE2646.setFromField(CString("value_changed"));
ROUTE2646.setToNode(CString("hanim_r_ring1"));
ROUTE2646.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2646);

ROUTE& ROUTE2647 =  ROUTE();
ROUTE2647.setFromNode(CString("Stand_r_index2_RollInterpolator"));
ROUTE2647.setFromField(CString("value_changed"));
ROUTE2647.setToNode(CString("hanim_r_ring2"));
ROUTE2647.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2647);

ROUTE& ROUTE2648 =  ROUTE();
ROUTE2648.setFromNode(CString("Stand_r_index3_RollInterpolator"));
ROUTE2648.setFromField(CString("value_changed"));
ROUTE2648.setToNode(CString("hanim_r_ring3"));
ROUTE2648.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2648);

ROUTE& ROUTE2649 =  ROUTE();
ROUTE2649.setFromNode(CString("Stand_r_index1_RollInterpolator"));
ROUTE2649.setFromField(CString("value_changed"));
ROUTE2649.setToNode(CString("hanim_r_pinky1"));
ROUTE2649.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2649);

ROUTE& ROUTE2650 =  ROUTE();
ROUTE2650.setFromNode(CString("Stand_r_index2_RollInterpolator"));
ROUTE2650.setFromField(CString("value_changed"));
ROUTE2650.setToNode(CString("hanim_r_pinky2"));
ROUTE2650.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2650);

ROUTE& ROUTE2651 =  ROUTE();
ROUTE2651.setFromNode(CString("Stand_r_index3_RollInterpolator"));
ROUTE2651.setFromField(CString("value_changed"));
ROUTE2651.setToNode(CString("hanim_r_pinky3"));
ROUTE2651.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2651);

ROUTE& ROUTE2652 =  ROUTE();
ROUTE2652.setFromNode(CString("PitchTimer"));
ROUTE2652.setFromField(CString("fraction_changed"));
ROUTE2652.setToNode(CString("Pitches_r_ankle_RotationInterpolator"));
ROUTE2652.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2652);

ROUTE& ROUTE2653 =  ROUTE();
ROUTE2653.setFromNode(CString("PitchTimer"));
ROUTE2653.setFromField(CString("fraction_changed"));
ROUTE2653.setToNode(CString("Pitches_r_knee_RotationInterpolator"));
ROUTE2653.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2653);

ROUTE& ROUTE2654 =  ROUTE();
ROUTE2654.setFromNode(CString("PitchTimer"));
ROUTE2654.setFromField(CString("fraction_changed"));
ROUTE2654.setToNode(CString("Pitches_r_hip_RotationInterpolator"));
ROUTE2654.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2654);

ROUTE& ROUTE2655 =  ROUTE();
ROUTE2655.setFromNode(CString("PitchTimer"));
ROUTE2655.setFromField(CString("fraction_changed"));
ROUTE2655.setToNode(CString("Pitches_l_ankle_RotationInterpolator"));
ROUTE2655.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2655);

ROUTE& ROUTE2656 =  ROUTE();
ROUTE2656.setFromNode(CString("PitchTimer"));
ROUTE2656.setFromField(CString("fraction_changed"));
ROUTE2656.setToNode(CString("Pitches_l_knee_RotationInterpolator"));
ROUTE2656.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2656);

ROUTE& ROUTE2657 =  ROUTE();
ROUTE2657.setFromNode(CString("PitchTimer"));
ROUTE2657.setFromField(CString("fraction_changed"));
ROUTE2657.setToNode(CString("Pitches_l_hip_RotationInterpolator"));
ROUTE2657.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2657);

ROUTE& ROUTE2658 =  ROUTE();
ROUTE2658.setFromNode(CString("PitchTimer"));
ROUTE2658.setFromField(CString("fraction_changed"));
ROUTE2658.setToNode(CString("Pitches_lower_body_RotationInterpolator"));
ROUTE2658.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2658);

ROUTE& ROUTE2659 =  ROUTE();
ROUTE2659.setFromNode(CString("PitchTimer"));
ROUTE2659.setFromField(CString("fraction_changed"));
ROUTE2659.setToNode(CString("Pitches_r_wrist_RotationInterpolator"));
ROUTE2659.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2659);

ROUTE& ROUTE2660 =  ROUTE();
ROUTE2660.setFromNode(CString("PitchTimer"));
ROUTE2660.setFromField(CString("fraction_changed"));
ROUTE2660.setToNode(CString("Pitches_r_elbow_RotationInterpolator"));
ROUTE2660.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2660);

ROUTE& ROUTE2661 =  ROUTE();
ROUTE2661.setFromNode(CString("PitchTimer"));
ROUTE2661.setFromField(CString("fraction_changed"));
ROUTE2661.setToNode(CString("Pitches_r_shoulder_RotationInterpolator"));
ROUTE2661.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2661);

ROUTE& ROUTE2662 =  ROUTE();
ROUTE2662.setFromNode(CString("PitchTimer"));
ROUTE2662.setFromField(CString("fraction_changed"));
ROUTE2662.setToNode(CString("Pitches_l_wrist_RotationInterpolator"));
ROUTE2662.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2662);

ROUTE& ROUTE2663 =  ROUTE();
ROUTE2663.setFromNode(CString("PitchTimer"));
ROUTE2663.setFromField(CString("fraction_changed"));
ROUTE2663.setToNode(CString("Pitches_l_elbow_RotationInterpolator"));
ROUTE2663.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2663);

ROUTE& ROUTE2664 =  ROUTE();
ROUTE2664.setFromNode(CString("PitchTimer"));
ROUTE2664.setFromField(CString("fraction_changed"));
ROUTE2664.setToNode(CString("Pitches_l_shoulder_RotationInterpolator"));
ROUTE2664.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2664);

ROUTE& ROUTE2665 =  ROUTE();
ROUTE2665.setFromNode(CString("PitchTimer"));
ROUTE2665.setFromField(CString("fraction_changed"));
ROUTE2665.setToNode(CString("Pitches_head_RotationInterpolator"));
ROUTE2665.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2665);

ROUTE& ROUTE2666 =  ROUTE();
ROUTE2666.setFromNode(CString("PitchTimer"));
ROUTE2666.setFromField(CString("fraction_changed"));
ROUTE2666.setToNode(CString("Pitches_neck_RotationInterpolator"));
ROUTE2666.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2666);

ROUTE& ROUTE2667 =  ROUTE();
ROUTE2667.setFromNode(CString("PitchTimer"));
ROUTE2667.setFromField(CString("fraction_changed"));
ROUTE2667.setToNode(CString("Pitches_upper_body_RotationInterpolator"));
ROUTE2667.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2667);

ROUTE& ROUTE2668 =  ROUTE();
ROUTE2668.setFromNode(CString("PitchTimer"));
ROUTE2668.setFromField(CString("fraction_changed"));
ROUTE2668.setToNode(CString("Pitches_whole_body_RotationInterpolator"));
ROUTE2668.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2668);

ROUTE& ROUTE2669 =  ROUTE();
ROUTE2669.setFromNode(CString("PitchTimer"));
ROUTE2669.setFromField(CString("fraction_changed"));
ROUTE2669.setToNode(CString("Pitches_whole_body_TranslationInterpolator"));
ROUTE2669.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2669);

ROUTE& ROUTE2670 =  ROUTE();
ROUTE2670.setFromNode(CString("PitchTimer"));
ROUTE2670.setFromField(CString("fraction_changed"));
ROUTE2670.setToNode(CString("Pitch_l_sternoclavicular_RollInterpolator"));
ROUTE2670.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2670);

ROUTE& ROUTE2671 =  ROUTE();
ROUTE2671.setFromNode(CString("PitchTimer"));
ROUTE2671.setFromField(CString("fraction_changed"));
ROUTE2671.setToNode(CString("Pitch_l_acromioclavicular_RollInterpolator"));
ROUTE2671.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2671);

ROUTE& ROUTE2672 =  ROUTE();
ROUTE2672.setFromNode(CString("PitchTimer"));
ROUTE2672.setFromField(CString("fraction_changed"));
ROUTE2672.setToNode(CString("Pitch_r_sternoclavicular_RollInterpolator"));
ROUTE2672.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2672);

ROUTE& ROUTE2673 =  ROUTE();
ROUTE2673.setFromNode(CString("PitchTimer"));
ROUTE2673.setFromField(CString("fraction_changed"));
ROUTE2673.setToNode(CString("Pitch_r_acromioclavicular_RollInterpolator"));
ROUTE2673.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2673);

ROUTE& ROUTE2674 =  ROUTE();
ROUTE2674.setFromNode(CString("PitchTimer"));
ROUTE2674.setFromField(CString("fraction_changed"));
ROUTE2674.setToNode(CString("Pitch_r_metatarsal_PitchInterpolator"));
ROUTE2674.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2674);

ROUTE& ROUTE2675 =  ROUTE();
ROUTE2675.setFromNode(CString("PitchTimer"));
ROUTE2675.setFromField(CString("fraction_changed"));
ROUTE2675.setToNode(CString("Pitch_sacroiliac_YawInterpolator"));
ROUTE2675.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2675);

ROUTE& ROUTE2676 =  ROUTE();
ROUTE2676.setFromNode(CString("PitchTimer"));
ROUTE2676.setFromField(CString("fraction_changed"));
ROUTE2676.setToNode(CString("Pitch_vl5_YawInterpolator"));
ROUTE2676.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2676);

ROUTE& ROUTE2677 =  ROUTE();
ROUTE2677.setFromNode(CString("PitchTimer"));
ROUTE2677.setFromField(CString("fraction_changed"));
ROUTE2677.setToNode(CString("Pitch_vc6_YawInterpolator"));
ROUTE2677.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2677);

ROUTE& ROUTE2678 =  ROUTE();
ROUTE2678.setFromNode(CString("PitchTimer"));
ROUTE2678.setFromField(CString("fraction_changed"));
ROUTE2678.setToNode(CString("Pitch_l_thumb1_PitchInterpolator"));
ROUTE2678.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2678);

ROUTE& ROUTE2679 =  ROUTE();
ROUTE2679.setFromNode(CString("PitchTimer"));
ROUTE2679.setFromField(CString("fraction_changed"));
ROUTE2679.setToNode(CString("Pitch_r_thumb1_PitchInterpolator"));
ROUTE2679.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2679);

ROUTE& ROUTE2680 =  ROUTE();
ROUTE2680.setFromNode(CString("Pitches_r_ankle_RotationInterpolator"));
ROUTE2680.setFromField(CString("value_changed"));
ROUTE2680.setToNode(CString("hanim_r_ankle"));
ROUTE2680.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2680);

ROUTE& ROUTE2681 =  ROUTE();
ROUTE2681.setFromNode(CString("Pitches_r_knee_RotationInterpolator"));
ROUTE2681.setFromField(CString("value_changed"));
ROUTE2681.setToNode(CString("hanim_r_knee"));
ROUTE2681.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2681);

ROUTE& ROUTE2682 =  ROUTE();
ROUTE2682.setFromNode(CString("Pitches_r_hip_RotationInterpolator"));
ROUTE2682.setFromField(CString("value_changed"));
ROUTE2682.setToNode(CString("hanim_r_hip"));
ROUTE2682.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2682);

ROUTE& ROUTE2683 =  ROUTE();
ROUTE2683.setFromNode(CString("Pitches_l_ankle_RotationInterpolator"));
ROUTE2683.setFromField(CString("value_changed"));
ROUTE2683.setToNode(CString("hanim_l_ankle"));
ROUTE2683.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2683);

ROUTE& ROUTE2684 =  ROUTE();
ROUTE2684.setFromNode(CString("Pitches_l_knee_RotationInterpolator"));
ROUTE2684.setFromField(CString("value_changed"));
ROUTE2684.setToNode(CString("hanim_l_knee"));
ROUTE2684.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2684);

ROUTE& ROUTE2685 =  ROUTE();
ROUTE2685.setFromNode(CString("Pitches_l_hip_RotationInterpolator"));
ROUTE2685.setFromField(CString("value_changed"));
ROUTE2685.setToNode(CString("hanim_l_hip"));
ROUTE2685.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2685);

ROUTE& ROUTE2686 =  ROUTE();
ROUTE2686.setFromNode(CString("Pitches_lower_body_RotationInterpolator"));
ROUTE2686.setFromField(CString("value_changed"));
ROUTE2686.setToNode(CString("hanim_sacroiliac"));
ROUTE2686.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2686);

ROUTE& ROUTE2687 =  ROUTE();
ROUTE2687.setFromNode(CString("Pitches_r_wrist_RotationInterpolator"));
ROUTE2687.setFromField(CString("value_changed"));
ROUTE2687.setToNode(CString("hanim_r_wrist"));
ROUTE2687.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2687);

ROUTE& ROUTE2688 =  ROUTE();
ROUTE2688.setFromNode(CString("Pitches_r_elbow_RotationInterpolator"));
ROUTE2688.setFromField(CString("value_changed"));
ROUTE2688.setToNode(CString("hanim_r_elbow"));
ROUTE2688.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2688);

ROUTE& ROUTE2689 =  ROUTE();
ROUTE2689.setFromNode(CString("Pitches_r_shoulder_RotationInterpolator"));
ROUTE2689.setFromField(CString("value_changed"));
ROUTE2689.setToNode(CString("hanim_r_shoulder"));
ROUTE2689.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2689);

ROUTE& ROUTE2690 =  ROUTE();
ROUTE2690.setFromNode(CString("Pitches_l_wrist_RotationInterpolator"));
ROUTE2690.setFromField(CString("value_changed"));
ROUTE2690.setToNode(CString("hanim_l_wrist"));
ROUTE2690.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2690);

ROUTE& ROUTE2691 =  ROUTE();
ROUTE2691.setFromNode(CString("Pitches_l_elbow_RotationInterpolator"));
ROUTE2691.setFromField(CString("value_changed"));
ROUTE2691.setToNode(CString("hanim_l_elbow"));
ROUTE2691.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2691);

ROUTE& ROUTE2692 =  ROUTE();
ROUTE2692.setFromNode(CString("Pitches_l_shoulder_RotationInterpolator"));
ROUTE2692.setFromField(CString("value_changed"));
ROUTE2692.setToNode(CString("hanim_l_shoulder"));
ROUTE2692.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2692);

ROUTE& ROUTE2693 =  ROUTE();
ROUTE2693.setFromNode(CString("Pitches_head_RotationInterpolator"));
ROUTE2693.setFromField(CString("value_changed"));
ROUTE2693.setToNode(CString("hanim_skullbase"));
ROUTE2693.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2693);

ROUTE& ROUTE2694 =  ROUTE();
ROUTE2694.setFromNode(CString("Pitches_neck_RotationInterpolator"));
ROUTE2694.setFromField(CString("value_changed"));
ROUTE2694.setToNode(CString("hanim_vc4"));
ROUTE2694.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2694);

ROUTE& ROUTE2695 =  ROUTE();
ROUTE2695.setFromNode(CString("Pitches_upper_body_RotationInterpolator"));
ROUTE2695.setFromField(CString("value_changed"));
ROUTE2695.setToNode(CString("hanim_vl1"));
ROUTE2695.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2695);

ROUTE& ROUTE2696 =  ROUTE();
ROUTE2696.setFromNode(CString("Pitches_whole_body_RotationInterpolator"));
ROUTE2696.setFromField(CString("value_changed"));
ROUTE2696.setToNode(CString("hanim_humanoid_root"));
ROUTE2696.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2696);

ROUTE& ROUTE2697 =  ROUTE();
ROUTE2697.setFromNode(CString("Pitches_whole_body_TranslationInterpolator"));
ROUTE2697.setFromField(CString("value_changed"));
ROUTE2697.setToNode(CString("hanim_humanoid_root"));
ROUTE2697.setToField(CString("set_translation"));
Scene29.addChild(&ROUTE2697);

ROUTE& ROUTE2698 =  ROUTE();
ROUTE2698.setFromNode(CString("Pitch_l_sternoclavicular_RollInterpolator"));
ROUTE2698.setFromField(CString("value_changed"));
ROUTE2698.setToNode(CString("hanim_l_sternoclavicular"));
ROUTE2698.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2698);

ROUTE& ROUTE2699 =  ROUTE();
ROUTE2699.setFromNode(CString("Pitch_l_acromioclavicular_RollInterpolator"));
ROUTE2699.setFromField(CString("value_changed"));
ROUTE2699.setToNode(CString("hanim_l_acromioclavicular"));
ROUTE2699.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2699);

ROUTE& ROUTE2700 =  ROUTE();
ROUTE2700.setFromNode(CString("Pitch_r_sternoclavicular_RollInterpolator"));
ROUTE2700.setFromField(CString("value_changed"));
ROUTE2700.setToNode(CString("hanim_r_sternoclavicular"));
ROUTE2700.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2700);

ROUTE& ROUTE2701 =  ROUTE();
ROUTE2701.setFromNode(CString("Pitch_r_acromioclavicular_RollInterpolator"));
ROUTE2701.setFromField(CString("value_changed"));
ROUTE2701.setToNode(CString("hanim_r_acromioclavicular"));
ROUTE2701.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2701);

ROUTE& ROUTE2702 =  ROUTE();
ROUTE2702.setFromNode(CString("Pitch_r_metatarsal_PitchInterpolator"));
ROUTE2702.setFromField(CString("value_changed"));
ROUTE2702.setToNode(CString("hanim_l_metatarsal"));
ROUTE2702.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2702);

ROUTE& ROUTE2703 =  ROUTE();
ROUTE2703.setFromNode(CString("Pitch_r_metatarsal_PitchInterpolator"));
ROUTE2703.setFromField(CString("value_changed"));
ROUTE2703.setToNode(CString("hanim_r_metatarsal"));
ROUTE2703.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2703);

ROUTE& ROUTE2704 =  ROUTE();
ROUTE2704.setFromNode(CString("Pitch_sacroiliac_YawInterpolator"));
ROUTE2704.setFromField(CString("value_changed"));
ROUTE2704.setToNode(CString("hanim_sacroiliac"));
ROUTE2704.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2704);

ROUTE& ROUTE2705 =  ROUTE();
ROUTE2705.setFromNode(CString("Pitch_vl5_YawInterpolator"));
ROUTE2705.setFromField(CString("value_changed"));
ROUTE2705.setToNode(CString("hanim_vl5"));
ROUTE2705.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2705);

ROUTE& ROUTE2706 =  ROUTE();
ROUTE2706.setFromNode(CString("Pitch_vc6_YawInterpolator"));
ROUTE2706.setFromField(CString("value_changed"));
ROUTE2706.setToNode(CString("hanim_vc6"));
ROUTE2706.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2706);

ROUTE& ROUTE2707 =  ROUTE();
ROUTE2707.setFromNode(CString("Pitch_l_thumb1_PitchInterpolator"));
ROUTE2707.setFromField(CString("value_changed"));
ROUTE2707.setToNode(CString("hanim_l_thumb1"));
ROUTE2707.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2707);

ROUTE& ROUTE2708 =  ROUTE();
ROUTE2708.setFromNode(CString("Pitch_r_thumb1_PitchInterpolator"));
ROUTE2708.setFromField(CString("value_changed"));
ROUTE2708.setToNode(CString("hanim_r_thumb1"));
ROUTE2708.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2708);

ROUTE& ROUTE2709 =  ROUTE();
ROUTE2709.setFromNode(CString("YawTimer"));
ROUTE2709.setFromField(CString("fraction_changed"));
ROUTE2709.setToNode(CString("Yaws_r_ankle_RotationInterpolator"));
ROUTE2709.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2709);

ROUTE& ROUTE2710 =  ROUTE();
ROUTE2710.setFromNode(CString("YawTimer"));
ROUTE2710.setFromField(CString("fraction_changed"));
ROUTE2710.setToNode(CString("Yaws_r_knee_RotationInterpolator"));
ROUTE2710.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2710);

ROUTE& ROUTE2711 =  ROUTE();
ROUTE2711.setFromNode(CString("YawTimer"));
ROUTE2711.setFromField(CString("fraction_changed"));
ROUTE2711.setToNode(CString("Yaws_r_hip_RotationInterpolator"));
ROUTE2711.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2711);

ROUTE& ROUTE2712 =  ROUTE();
ROUTE2712.setFromNode(CString("YawTimer"));
ROUTE2712.setFromField(CString("fraction_changed"));
ROUTE2712.setToNode(CString("Yaws_l_ankle_RotationInterpolator"));
ROUTE2712.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2712);

ROUTE& ROUTE2713 =  ROUTE();
ROUTE2713.setFromNode(CString("YawTimer"));
ROUTE2713.setFromField(CString("fraction_changed"));
ROUTE2713.setToNode(CString("Yaws_l_knee_RotationInterpolator"));
ROUTE2713.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2713);

ROUTE& ROUTE2714 =  ROUTE();
ROUTE2714.setFromNode(CString("YawTimer"));
ROUTE2714.setFromField(CString("fraction_changed"));
ROUTE2714.setToNode(CString("Yaws_l_hip_RotationInterpolator"));
ROUTE2714.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2714);

ROUTE& ROUTE2715 =  ROUTE();
ROUTE2715.setFromNode(CString("YawTimer"));
ROUTE2715.setFromField(CString("fraction_changed"));
ROUTE2715.setToNode(CString("Yaws_lower_body_RotationInterpolator"));
ROUTE2715.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2715);

ROUTE& ROUTE2716 =  ROUTE();
ROUTE2716.setFromNode(CString("YawTimer"));
ROUTE2716.setFromField(CString("fraction_changed"));
ROUTE2716.setToNode(CString("Yaws_r_wrist_RotationInterpolator"));
ROUTE2716.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2716);

ROUTE& ROUTE2717 =  ROUTE();
ROUTE2717.setFromNode(CString("YawTimer"));
ROUTE2717.setFromField(CString("fraction_changed"));
ROUTE2717.setToNode(CString("Yaws_r_elbow_RotationInterpolator"));
ROUTE2717.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2717);

ROUTE& ROUTE2718 =  ROUTE();
ROUTE2718.setFromNode(CString("YawTimer"));
ROUTE2718.setFromField(CString("fraction_changed"));
ROUTE2718.setToNode(CString("Yaws_r_shoulder_RotationInterpolator"));
ROUTE2718.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2718);

ROUTE& ROUTE2719 =  ROUTE();
ROUTE2719.setFromNode(CString("YawTimer"));
ROUTE2719.setFromField(CString("fraction_changed"));
ROUTE2719.setToNode(CString("Yaws_l_wrist_RotationInterpolator"));
ROUTE2719.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2719);

ROUTE& ROUTE2720 =  ROUTE();
ROUTE2720.setFromNode(CString("YawTimer"));
ROUTE2720.setFromField(CString("fraction_changed"));
ROUTE2720.setToNode(CString("Yaws_l_elbow_RotationInterpolator"));
ROUTE2720.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2720);

ROUTE& ROUTE2721 =  ROUTE();
ROUTE2721.setFromNode(CString("YawTimer"));
ROUTE2721.setFromField(CString("fraction_changed"));
ROUTE2721.setToNode(CString("Yaws_l_shoulder_RotationInterpolator"));
ROUTE2721.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2721);

ROUTE& ROUTE2722 =  ROUTE();
ROUTE2722.setFromNode(CString("YawTimer"));
ROUTE2722.setFromField(CString("fraction_changed"));
ROUTE2722.setToNode(CString("Yaws_head_RotationInterpolator"));
ROUTE2722.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2722);

ROUTE& ROUTE2723 =  ROUTE();
ROUTE2723.setFromNode(CString("YawTimer"));
ROUTE2723.setFromField(CString("fraction_changed"));
ROUTE2723.setToNode(CString("Yaws_neck_RotationInterpolator"));
ROUTE2723.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2723);

ROUTE& ROUTE2724 =  ROUTE();
ROUTE2724.setFromNode(CString("YawTimer"));
ROUTE2724.setFromField(CString("fraction_changed"));
ROUTE2724.setToNode(CString("Yaws_upper_body_RotationInterpolator"));
ROUTE2724.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2724);

ROUTE& ROUTE2725 =  ROUTE();
ROUTE2725.setFromNode(CString("YawTimer"));
ROUTE2725.setFromField(CString("fraction_changed"));
ROUTE2725.setToNode(CString("Yaws_whole_body_RotationInterpolator"));
ROUTE2725.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2725);

ROUTE& ROUTE2726 =  ROUTE();
ROUTE2726.setFromNode(CString("YawTimer"));
ROUTE2726.setFromField(CString("fraction_changed"));
ROUTE2726.setToNode(CString("Yaws_whole_body_TranslationInterpolator"));
ROUTE2726.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2726);

ROUTE& ROUTE2727 =  ROUTE();
ROUTE2727.setFromNode(CString("YawTimer"));
ROUTE2727.setFromField(CString("fraction_changed"));
ROUTE2727.setToNode(CString("Yaw_l_sternoclavicular_RollInterpolator"));
ROUTE2727.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2727);

ROUTE& ROUTE2728 =  ROUTE();
ROUTE2728.setFromNode(CString("YawTimer"));
ROUTE2728.setFromField(CString("fraction_changed"));
ROUTE2728.setToNode(CString("Yaw_l_acromioclavicular_RollInterpolator"));
ROUTE2728.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2728);

ROUTE& ROUTE2729 =  ROUTE();
ROUTE2729.setFromNode(CString("YawTimer"));
ROUTE2729.setFromField(CString("fraction_changed"));
ROUTE2729.setToNode(CString("Yaw_r_sternoclavicular_RollInterpolator"));
ROUTE2729.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2729);

ROUTE& ROUTE2730 =  ROUTE();
ROUTE2730.setFromNode(CString("YawTimer"));
ROUTE2730.setFromField(CString("fraction_changed"));
ROUTE2730.setToNode(CString("Yaw_r_acromioclavicular_RollInterpolator"));
ROUTE2730.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2730);

ROUTE& ROUTE2731 =  ROUTE();
ROUTE2731.setFromNode(CString("YawTimer"));
ROUTE2731.setFromField(CString("fraction_changed"));
ROUTE2731.setToNode(CString("Yaw_r_metatarsal_PitchInterpolator"));
ROUTE2731.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2731);

ROUTE& ROUTE2732 =  ROUTE();
ROUTE2732.setFromNode(CString("YawTimer"));
ROUTE2732.setFromField(CString("fraction_changed"));
ROUTE2732.setToNode(CString("Yaw_sacroiliac_YawInterpolator"));
ROUTE2732.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2732);

ROUTE& ROUTE2733 =  ROUTE();
ROUTE2733.setFromNode(CString("YawTimer"));
ROUTE2733.setFromField(CString("fraction_changed"));
ROUTE2733.setToNode(CString("Yaw_vl5_YawInterpolator"));
ROUTE2733.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2733);

ROUTE& ROUTE2734 =  ROUTE();
ROUTE2734.setFromNode(CString("YawTimer"));
ROUTE2734.setFromField(CString("fraction_changed"));
ROUTE2734.setToNode(CString("Yaw_vc6_YawInterpolator"));
ROUTE2734.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2734);

ROUTE& ROUTE2735 =  ROUTE();
ROUTE2735.setFromNode(CString("YawTimer"));
ROUTE2735.setFromField(CString("fraction_changed"));
ROUTE2735.setToNode(CString("Yaw_l_thumb1_PitchInterpolator"));
ROUTE2735.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2735);

ROUTE& ROUTE2736 =  ROUTE();
ROUTE2736.setFromNode(CString("YawTimer"));
ROUTE2736.setFromField(CString("fraction_changed"));
ROUTE2736.setToNode(CString("Yaw_r_thumb1_PitchInterpolator"));
ROUTE2736.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2736);

ROUTE& ROUTE2737 =  ROUTE();
ROUTE2737.setFromNode(CString("Yaws_r_ankle_RotationInterpolator"));
ROUTE2737.setFromField(CString("value_changed"));
ROUTE2737.setToNode(CString("hanim_r_ankle"));
ROUTE2737.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2737);

ROUTE& ROUTE2738 =  ROUTE();
ROUTE2738.setFromNode(CString("Yaws_r_knee_RotationInterpolator"));
ROUTE2738.setFromField(CString("value_changed"));
ROUTE2738.setToNode(CString("hanim_r_knee"));
ROUTE2738.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2738);

ROUTE& ROUTE2739 =  ROUTE();
ROUTE2739.setFromNode(CString("Yaws_r_hip_RotationInterpolator"));
ROUTE2739.setFromField(CString("value_changed"));
ROUTE2739.setToNode(CString("hanim_r_hip"));
ROUTE2739.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2739);

ROUTE& ROUTE2740 =  ROUTE();
ROUTE2740.setFromNode(CString("Yaws_l_ankle_RotationInterpolator"));
ROUTE2740.setFromField(CString("value_changed"));
ROUTE2740.setToNode(CString("hanim_l_ankle"));
ROUTE2740.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2740);

ROUTE& ROUTE2741 =  ROUTE();
ROUTE2741.setFromNode(CString("Yaws_l_knee_RotationInterpolator"));
ROUTE2741.setFromField(CString("value_changed"));
ROUTE2741.setToNode(CString("hanim_l_knee"));
ROUTE2741.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2741);

ROUTE& ROUTE2742 =  ROUTE();
ROUTE2742.setFromNode(CString("Yaws_l_hip_RotationInterpolator"));
ROUTE2742.setFromField(CString("value_changed"));
ROUTE2742.setToNode(CString("hanim_l_hip"));
ROUTE2742.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2742);

ROUTE& ROUTE2743 =  ROUTE();
ROUTE2743.setFromNode(CString("Yaws_lower_body_RotationInterpolator"));
ROUTE2743.setFromField(CString("value_changed"));
ROUTE2743.setToNode(CString("hanim_sacroiliac"));
ROUTE2743.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2743);

ROUTE& ROUTE2744 =  ROUTE();
ROUTE2744.setFromNode(CString("Yaws_r_wrist_RotationInterpolator"));
ROUTE2744.setFromField(CString("value_changed"));
ROUTE2744.setToNode(CString("hanim_r_wrist"));
ROUTE2744.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2744);

ROUTE& ROUTE2745 =  ROUTE();
ROUTE2745.setFromNode(CString("Yaws_r_elbow_RotationInterpolator"));
ROUTE2745.setFromField(CString("value_changed"));
ROUTE2745.setToNode(CString("hanim_r_elbow"));
ROUTE2745.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2745);

ROUTE& ROUTE2746 =  ROUTE();
ROUTE2746.setFromNode(CString("Yaws_r_shoulder_RotationInterpolator"));
ROUTE2746.setFromField(CString("value_changed"));
ROUTE2746.setToNode(CString("hanim_r_shoulder"));
ROUTE2746.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2746);

ROUTE& ROUTE2747 =  ROUTE();
ROUTE2747.setFromNode(CString("Yaws_l_wrist_RotationInterpolator"));
ROUTE2747.setFromField(CString("value_changed"));
ROUTE2747.setToNode(CString("hanim_l_wrist"));
ROUTE2747.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2747);

ROUTE& ROUTE2748 =  ROUTE();
ROUTE2748.setFromNode(CString("Yaws_l_elbow_RotationInterpolator"));
ROUTE2748.setFromField(CString("value_changed"));
ROUTE2748.setToNode(CString("hanim_l_elbow"));
ROUTE2748.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2748);

ROUTE& ROUTE2749 =  ROUTE();
ROUTE2749.setFromNode(CString("Yaws_l_shoulder_RotationInterpolator"));
ROUTE2749.setFromField(CString("value_changed"));
ROUTE2749.setToNode(CString("hanim_l_shoulder"));
ROUTE2749.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2749);

ROUTE& ROUTE2750 =  ROUTE();
ROUTE2750.setFromNode(CString("Yaws_head_RotationInterpolator"));
ROUTE2750.setFromField(CString("value_changed"));
ROUTE2750.setToNode(CString("hanim_skullbase"));
ROUTE2750.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2750);

ROUTE& ROUTE2751 =  ROUTE();
ROUTE2751.setFromNode(CString("Yaws_neck_RotationInterpolator"));
ROUTE2751.setFromField(CString("value_changed"));
ROUTE2751.setToNode(CString("hanim_vc4"));
ROUTE2751.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2751);

ROUTE& ROUTE2752 =  ROUTE();
ROUTE2752.setFromNode(CString("Yaws_upper_body_RotationInterpolator"));
ROUTE2752.setFromField(CString("value_changed"));
ROUTE2752.setToNode(CString("hanim_vl1"));
ROUTE2752.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2752);

ROUTE& ROUTE2753 =  ROUTE();
ROUTE2753.setFromNode(CString("Yaws_whole_body_RotationInterpolator"));
ROUTE2753.setFromField(CString("value_changed"));
ROUTE2753.setToNode(CString("hanim_humanoid_root"));
ROUTE2753.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2753);

ROUTE& ROUTE2754 =  ROUTE();
ROUTE2754.setFromNode(CString("Yaws_whole_body_TranslationInterpolator"));
ROUTE2754.setFromField(CString("value_changed"));
ROUTE2754.setToNode(CString("hanim_humanoid_root"));
ROUTE2754.setToField(CString("set_translation"));
Scene29.addChild(&ROUTE2754);

ROUTE& ROUTE2755 =  ROUTE();
ROUTE2755.setFromNode(CString("Yaw_l_sternoclavicular_RollInterpolator"));
ROUTE2755.setFromField(CString("value_changed"));
ROUTE2755.setToNode(CString("hanim_l_sternoclavicular"));
ROUTE2755.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2755);

ROUTE& ROUTE2756 =  ROUTE();
ROUTE2756.setFromNode(CString("Yaw_l_acromioclavicular_RollInterpolator"));
ROUTE2756.setFromField(CString("value_changed"));
ROUTE2756.setToNode(CString("hanim_l_acromioclavicular"));
ROUTE2756.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2756);

ROUTE& ROUTE2757 =  ROUTE();
ROUTE2757.setFromNode(CString("Yaw_r_sternoclavicular_RollInterpolator"));
ROUTE2757.setFromField(CString("value_changed"));
ROUTE2757.setToNode(CString("hanim_r_sternoclavicular"));
ROUTE2757.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2757);

ROUTE& ROUTE2758 =  ROUTE();
ROUTE2758.setFromNode(CString("Yaw_r_acromioclavicular_RollInterpolator"));
ROUTE2758.setFromField(CString("value_changed"));
ROUTE2758.setToNode(CString("hanim_r_acromioclavicular"));
ROUTE2758.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2758);

ROUTE& ROUTE2759 =  ROUTE();
ROUTE2759.setFromNode(CString("Yaw_r_metatarsal_PitchInterpolator"));
ROUTE2759.setFromField(CString("value_changed"));
ROUTE2759.setToNode(CString("hanim_l_metatarsal"));
ROUTE2759.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2759);

ROUTE& ROUTE2760 =  ROUTE();
ROUTE2760.setFromNode(CString("Yaw_r_metatarsal_PitchInterpolator"));
ROUTE2760.setFromField(CString("value_changed"));
ROUTE2760.setToNode(CString("hanim_r_metatarsal"));
ROUTE2760.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2760);

ROUTE& ROUTE2761 =  ROUTE();
ROUTE2761.setFromNode(CString("Yaw_sacroiliac_YawInterpolator"));
ROUTE2761.setFromField(CString("value_changed"));
ROUTE2761.setToNode(CString("hanim_sacroiliac"));
ROUTE2761.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2761);

ROUTE& ROUTE2762 =  ROUTE();
ROUTE2762.setFromNode(CString("Yaw_vl5_YawInterpolator"));
ROUTE2762.setFromField(CString("value_changed"));
ROUTE2762.setToNode(CString("hanim_vl5"));
ROUTE2762.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2762);

ROUTE& ROUTE2763 =  ROUTE();
ROUTE2763.setFromNode(CString("Yaw_vc6_YawInterpolator"));
ROUTE2763.setFromField(CString("value_changed"));
ROUTE2763.setToNode(CString("hanim_vc6"));
ROUTE2763.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2763);

ROUTE& ROUTE2764 =  ROUTE();
ROUTE2764.setFromNode(CString("Yaw_l_thumb1_PitchInterpolator"));
ROUTE2764.setFromField(CString("value_changed"));
ROUTE2764.setToNode(CString("hanim_l_thumb1"));
ROUTE2764.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2764);

ROUTE& ROUTE2765 =  ROUTE();
ROUTE2765.setFromNode(CString("Yaw_r_thumb1_PitchInterpolator"));
ROUTE2765.setFromField(CString("value_changed"));
ROUTE2765.setToNode(CString("hanim_r_thumb1"));
ROUTE2765.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2765);

ROUTE& ROUTE2766 =  ROUTE();
ROUTE2766.setFromNode(CString("RollTimer"));
ROUTE2766.setFromField(CString("fraction_changed"));
ROUTE2766.setToNode(CString("Rolls_r_ankle_RotationInterpolator"));
ROUTE2766.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2766);

ROUTE& ROUTE2767 =  ROUTE();
ROUTE2767.setFromNode(CString("RollTimer"));
ROUTE2767.setFromField(CString("fraction_changed"));
ROUTE2767.setToNode(CString("Rolls_r_knee_RotationInterpolator"));
ROUTE2767.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2767);

ROUTE& ROUTE2768 =  ROUTE();
ROUTE2768.setFromNode(CString("RollTimer"));
ROUTE2768.setFromField(CString("fraction_changed"));
ROUTE2768.setToNode(CString("Rolls_r_hip_RotationInterpolator"));
ROUTE2768.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2768);

ROUTE& ROUTE2769 =  ROUTE();
ROUTE2769.setFromNode(CString("RollTimer"));
ROUTE2769.setFromField(CString("fraction_changed"));
ROUTE2769.setToNode(CString("Rolls_l_ankle_RotationInterpolator"));
ROUTE2769.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2769);

ROUTE& ROUTE2770 =  ROUTE();
ROUTE2770.setFromNode(CString("RollTimer"));
ROUTE2770.setFromField(CString("fraction_changed"));
ROUTE2770.setToNode(CString("Rolls_l_knee_RotationInterpolator"));
ROUTE2770.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2770);

ROUTE& ROUTE2771 =  ROUTE();
ROUTE2771.setFromNode(CString("RollTimer"));
ROUTE2771.setFromField(CString("fraction_changed"));
ROUTE2771.setToNode(CString("Rolls_l_hip_RotationInterpolator"));
ROUTE2771.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2771);

ROUTE& ROUTE2772 =  ROUTE();
ROUTE2772.setFromNode(CString("RollTimer"));
ROUTE2772.setFromField(CString("fraction_changed"));
ROUTE2772.setToNode(CString("Rolls_lower_body_RotationInterpolator"));
ROUTE2772.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2772);

ROUTE& ROUTE2773 =  ROUTE();
ROUTE2773.setFromNode(CString("RollTimer"));
ROUTE2773.setFromField(CString("fraction_changed"));
ROUTE2773.setToNode(CString("Rolls_r_wrist_RotationInterpolator"));
ROUTE2773.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2773);

ROUTE& ROUTE2774 =  ROUTE();
ROUTE2774.setFromNode(CString("RollTimer"));
ROUTE2774.setFromField(CString("fraction_changed"));
ROUTE2774.setToNode(CString("Rolls_r_elbow_RotationInterpolator"));
ROUTE2774.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2774);

ROUTE& ROUTE2775 =  ROUTE();
ROUTE2775.setFromNode(CString("RollTimer"));
ROUTE2775.setFromField(CString("fraction_changed"));
ROUTE2775.setToNode(CString("Rolls_r_shoulder_RotationInterpolator"));
ROUTE2775.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2775);

ROUTE& ROUTE2776 =  ROUTE();
ROUTE2776.setFromNode(CString("RollTimer"));
ROUTE2776.setFromField(CString("fraction_changed"));
ROUTE2776.setToNode(CString("Rolls_l_wrist_RotationInterpolator"));
ROUTE2776.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2776);

ROUTE& ROUTE2777 =  ROUTE();
ROUTE2777.setFromNode(CString("RollTimer"));
ROUTE2777.setFromField(CString("fraction_changed"));
ROUTE2777.setToNode(CString("Rolls_l_elbow_RotationInterpolator"));
ROUTE2777.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2777);

ROUTE& ROUTE2778 =  ROUTE();
ROUTE2778.setFromNode(CString("RollTimer"));
ROUTE2778.setFromField(CString("fraction_changed"));
ROUTE2778.setToNode(CString("Rolls_l_shoulder_RotationInterpolator"));
ROUTE2778.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2778);

ROUTE& ROUTE2779 =  ROUTE();
ROUTE2779.setFromNode(CString("RollTimer"));
ROUTE2779.setFromField(CString("fraction_changed"));
ROUTE2779.setToNode(CString("Rolls_head_RotationInterpolator"));
ROUTE2779.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2779);

ROUTE& ROUTE2780 =  ROUTE();
ROUTE2780.setFromNode(CString("RollTimer"));
ROUTE2780.setFromField(CString("fraction_changed"));
ROUTE2780.setToNode(CString("Rolls_neck_RotationInterpolator"));
ROUTE2780.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2780);

ROUTE& ROUTE2781 =  ROUTE();
ROUTE2781.setFromNode(CString("RollTimer"));
ROUTE2781.setFromField(CString("fraction_changed"));
ROUTE2781.setToNode(CString("Rolls_upper_body_RotationInterpolator"));
ROUTE2781.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2781);

ROUTE& ROUTE2782 =  ROUTE();
ROUTE2782.setFromNode(CString("RollTimer"));
ROUTE2782.setFromField(CString("fraction_changed"));
ROUTE2782.setToNode(CString("Rolls_whole_body_RotationInterpolator"));
ROUTE2782.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2782);

ROUTE& ROUTE2783 =  ROUTE();
ROUTE2783.setFromNode(CString("RollTimer"));
ROUTE2783.setFromField(CString("fraction_changed"));
ROUTE2783.setToNode(CString("Rolls_whole_body_TranslationInterpolator"));
ROUTE2783.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2783);

ROUTE& ROUTE2784 =  ROUTE();
ROUTE2784.setFromNode(CString("RollTimer"));
ROUTE2784.setFromField(CString("fraction_changed"));
ROUTE2784.setToNode(CString("Roll_l_sternoclavicular_RollInterpolator"));
ROUTE2784.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2784);

ROUTE& ROUTE2785 =  ROUTE();
ROUTE2785.setFromNode(CString("RollTimer"));
ROUTE2785.setFromField(CString("fraction_changed"));
ROUTE2785.setToNode(CString("Roll_l_acromioclavicular_RollInterpolator"));
ROUTE2785.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2785);

ROUTE& ROUTE2786 =  ROUTE();
ROUTE2786.setFromNode(CString("RollTimer"));
ROUTE2786.setFromField(CString("fraction_changed"));
ROUTE2786.setToNode(CString("Roll_r_sternoclavicular_RollInterpolator"));
ROUTE2786.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2786);

ROUTE& ROUTE2787 =  ROUTE();
ROUTE2787.setFromNode(CString("RollTimer"));
ROUTE2787.setFromField(CString("fraction_changed"));
ROUTE2787.setToNode(CString("Roll_r_acromioclavicular_RollInterpolator"));
ROUTE2787.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2787);

ROUTE& ROUTE2788 =  ROUTE();
ROUTE2788.setFromNode(CString("RollTimer"));
ROUTE2788.setFromField(CString("fraction_changed"));
ROUTE2788.setToNode(CString("Roll_r_metatarsal_PitchInterpolator"));
ROUTE2788.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2788);

ROUTE& ROUTE2789 =  ROUTE();
ROUTE2789.setFromNode(CString("RollTimer"));
ROUTE2789.setFromField(CString("fraction_changed"));
ROUTE2789.setToNode(CString("Roll_sacroiliac_YawInterpolator"));
ROUTE2789.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2789);

ROUTE& ROUTE2790 =  ROUTE();
ROUTE2790.setFromNode(CString("RollTimer"));
ROUTE2790.setFromField(CString("fraction_changed"));
ROUTE2790.setToNode(CString("Roll_vl5_YawInterpolator"));
ROUTE2790.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2790);

ROUTE& ROUTE2791 =  ROUTE();
ROUTE2791.setFromNode(CString("RollTimer"));
ROUTE2791.setFromField(CString("fraction_changed"));
ROUTE2791.setToNode(CString("Roll_vc6_YawInterpolator"));
ROUTE2791.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2791);

ROUTE& ROUTE2792 =  ROUTE();
ROUTE2792.setFromNode(CString("RollTimer"));
ROUTE2792.setFromField(CString("fraction_changed"));
ROUTE2792.setToNode(CString("Roll_l_thumb1_PitchInterpolator"));
ROUTE2792.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2792);

ROUTE& ROUTE2793 =  ROUTE();
ROUTE2793.setFromNode(CString("RollTimer"));
ROUTE2793.setFromField(CString("fraction_changed"));
ROUTE2793.setToNode(CString("Roll_r_thumb1_PitchInterpolator"));
ROUTE2793.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2793);

ROUTE& ROUTE2794 =  ROUTE();
ROUTE2794.setFromNode(CString("Rolls_r_ankle_RotationInterpolator"));
ROUTE2794.setFromField(CString("value_changed"));
ROUTE2794.setToNode(CString("hanim_r_ankle"));
ROUTE2794.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2794);

ROUTE& ROUTE2795 =  ROUTE();
ROUTE2795.setFromNode(CString("Rolls_r_knee_RotationInterpolator"));
ROUTE2795.setFromField(CString("value_changed"));
ROUTE2795.setToNode(CString("hanim_r_knee"));
ROUTE2795.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2795);

ROUTE& ROUTE2796 =  ROUTE();
ROUTE2796.setFromNode(CString("Rolls_r_hip_RotationInterpolator"));
ROUTE2796.setFromField(CString("value_changed"));
ROUTE2796.setToNode(CString("hanim_r_hip"));
ROUTE2796.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2796);

ROUTE& ROUTE2797 =  ROUTE();
ROUTE2797.setFromNode(CString("Rolls_l_ankle_RotationInterpolator"));
ROUTE2797.setFromField(CString("value_changed"));
ROUTE2797.setToNode(CString("hanim_l_ankle"));
ROUTE2797.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2797);

ROUTE& ROUTE2798 =  ROUTE();
ROUTE2798.setFromNode(CString("Rolls_l_knee_RotationInterpolator"));
ROUTE2798.setFromField(CString("value_changed"));
ROUTE2798.setToNode(CString("hanim_l_knee"));
ROUTE2798.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2798);

ROUTE& ROUTE2799 =  ROUTE();
ROUTE2799.setFromNode(CString("Rolls_l_hip_RotationInterpolator"));
ROUTE2799.setFromField(CString("value_changed"));
ROUTE2799.setToNode(CString("hanim_l_hip"));
ROUTE2799.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2799);

ROUTE& ROUTE2800 =  ROUTE();
ROUTE2800.setFromNode(CString("Rolls_lower_body_RotationInterpolator"));
ROUTE2800.setFromField(CString("value_changed"));
ROUTE2800.setToNode(CString("hanim_sacroiliac"));
ROUTE2800.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2800);

ROUTE& ROUTE2801 =  ROUTE();
ROUTE2801.setFromNode(CString("Rolls_r_wrist_RotationInterpolator"));
ROUTE2801.setFromField(CString("value_changed"));
ROUTE2801.setToNode(CString("hanim_r_wrist"));
ROUTE2801.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2801);

ROUTE& ROUTE2802 =  ROUTE();
ROUTE2802.setFromNode(CString("Rolls_r_elbow_RotationInterpolator"));
ROUTE2802.setFromField(CString("value_changed"));
ROUTE2802.setToNode(CString("hanim_r_elbow"));
ROUTE2802.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2802);

ROUTE& ROUTE2803 =  ROUTE();
ROUTE2803.setFromNode(CString("Rolls_r_shoulder_RotationInterpolator"));
ROUTE2803.setFromField(CString("value_changed"));
ROUTE2803.setToNode(CString("hanim_r_shoulder"));
ROUTE2803.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2803);

ROUTE& ROUTE2804 =  ROUTE();
ROUTE2804.setFromNode(CString("Rolls_l_wrist_RotationInterpolator"));
ROUTE2804.setFromField(CString("value_changed"));
ROUTE2804.setToNode(CString("hanim_l_wrist"));
ROUTE2804.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2804);

ROUTE& ROUTE2805 =  ROUTE();
ROUTE2805.setFromNode(CString("Rolls_l_elbow_RotationInterpolator"));
ROUTE2805.setFromField(CString("value_changed"));
ROUTE2805.setToNode(CString("hanim_l_elbow"));
ROUTE2805.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2805);

ROUTE& ROUTE2806 =  ROUTE();
ROUTE2806.setFromNode(CString("Rolls_l_shoulder_RotationInterpolator"));
ROUTE2806.setFromField(CString("value_changed"));
ROUTE2806.setToNode(CString("hanim_l_shoulder"));
ROUTE2806.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2806);

ROUTE& ROUTE2807 =  ROUTE();
ROUTE2807.setFromNode(CString("Rolls_head_RotationInterpolator"));
ROUTE2807.setFromField(CString("value_changed"));
ROUTE2807.setToNode(CString("hanim_skullbase"));
ROUTE2807.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2807);

ROUTE& ROUTE2808 =  ROUTE();
ROUTE2808.setFromNode(CString("Rolls_neck_RotationInterpolator"));
ROUTE2808.setFromField(CString("value_changed"));
ROUTE2808.setToNode(CString("hanim_vc4"));
ROUTE2808.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2808);

ROUTE& ROUTE2809 =  ROUTE();
ROUTE2809.setFromNode(CString("Rolls_upper_body_RotationInterpolator"));
ROUTE2809.setFromField(CString("value_changed"));
ROUTE2809.setToNode(CString("hanim_vl1"));
ROUTE2809.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2809);

ROUTE& ROUTE2810 =  ROUTE();
ROUTE2810.setFromNode(CString("Rolls_whole_body_RotationInterpolator"));
ROUTE2810.setFromField(CString("value_changed"));
ROUTE2810.setToNode(CString("hanim_humanoid_root"));
ROUTE2810.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2810);

ROUTE& ROUTE2811 =  ROUTE();
ROUTE2811.setFromNode(CString("Rolls_whole_body_TranslationInterpolator"));
ROUTE2811.setFromField(CString("value_changed"));
ROUTE2811.setToNode(CString("hanim_humanoid_root"));
ROUTE2811.setToField(CString("set_translation"));
Scene29.addChild(&ROUTE2811);

ROUTE& ROUTE2812 =  ROUTE();
ROUTE2812.setFromNode(CString("Roll_l_sternoclavicular_RollInterpolator"));
ROUTE2812.setFromField(CString("value_changed"));
ROUTE2812.setToNode(CString("hanim_l_sternoclavicular"));
ROUTE2812.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2812);

ROUTE& ROUTE2813 =  ROUTE();
ROUTE2813.setFromNode(CString("Roll_l_acromioclavicular_RollInterpolator"));
ROUTE2813.setFromField(CString("value_changed"));
ROUTE2813.setToNode(CString("hanim_l_acromioclavicular"));
ROUTE2813.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2813);

ROUTE& ROUTE2814 =  ROUTE();
ROUTE2814.setFromNode(CString("Roll_r_sternoclavicular_RollInterpolator"));
ROUTE2814.setFromField(CString("value_changed"));
ROUTE2814.setToNode(CString("hanim_r_sternoclavicular"));
ROUTE2814.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2814);

ROUTE& ROUTE2815 =  ROUTE();
ROUTE2815.setFromNode(CString("Roll_r_acromioclavicular_RollInterpolator"));
ROUTE2815.setFromField(CString("value_changed"));
ROUTE2815.setToNode(CString("hanim_r_acromioclavicular"));
ROUTE2815.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2815);

ROUTE& ROUTE2816 =  ROUTE();
ROUTE2816.setFromNode(CString("Roll_r_metatarsal_PitchInterpolator"));
ROUTE2816.setFromField(CString("value_changed"));
ROUTE2816.setToNode(CString("hanim_l_metatarsal"));
ROUTE2816.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2816);

ROUTE& ROUTE2817 =  ROUTE();
ROUTE2817.setFromNode(CString("Roll_r_metatarsal_PitchInterpolator"));
ROUTE2817.setFromField(CString("value_changed"));
ROUTE2817.setToNode(CString("hanim_r_metatarsal"));
ROUTE2817.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2817);

ROUTE& ROUTE2818 =  ROUTE();
ROUTE2818.setFromNode(CString("Roll_sacroiliac_YawInterpolator"));
ROUTE2818.setFromField(CString("value_changed"));
ROUTE2818.setToNode(CString("hanim_sacroiliac"));
ROUTE2818.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2818);

ROUTE& ROUTE2819 =  ROUTE();
ROUTE2819.setFromNode(CString("Roll_vl5_YawInterpolator"));
ROUTE2819.setFromField(CString("value_changed"));
ROUTE2819.setToNode(CString("hanim_vl5"));
ROUTE2819.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2819);

ROUTE& ROUTE2820 =  ROUTE();
ROUTE2820.setFromNode(CString("Roll_vc6_YawInterpolator"));
ROUTE2820.setFromField(CString("value_changed"));
ROUTE2820.setToNode(CString("hanim_vc6"));
ROUTE2820.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2820);

ROUTE& ROUTE2821 =  ROUTE();
ROUTE2821.setFromNode(CString("Roll_l_thumb1_PitchInterpolator"));
ROUTE2821.setFromField(CString("value_changed"));
ROUTE2821.setToNode(CString("hanim_l_thumb1"));
ROUTE2821.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2821);

ROUTE& ROUTE2822 =  ROUTE();
ROUTE2822.setFromNode(CString("Roll_r_thumb1_PitchInterpolator"));
ROUTE2822.setFromField(CString("value_changed"));
ROUTE2822.setToNode(CString("hanim_r_thumb1"));
ROUTE2822.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2822);

ROUTE& ROUTE2823 =  ROUTE();
ROUTE2823.setFromNode(CString("WalkTimer"));
ROUTE2823.setFromField(CString("fraction_changed"));
ROUTE2823.setToNode(CString("Walk_r_ankle_RotationInterpolator"));
ROUTE2823.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2823);

ROUTE& ROUTE2824 =  ROUTE();
ROUTE2824.setFromNode(CString("WalkTimer"));
ROUTE2824.setFromField(CString("fraction_changed"));
ROUTE2824.setToNode(CString("Walk_r_knee_RotationInterpolator"));
ROUTE2824.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2824);

ROUTE& ROUTE2825 =  ROUTE();
ROUTE2825.setFromNode(CString("WalkTimer"));
ROUTE2825.setFromField(CString("fraction_changed"));
ROUTE2825.setToNode(CString("Walk_r_hip_RotationInterpolator"));
ROUTE2825.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2825);

ROUTE& ROUTE2826 =  ROUTE();
ROUTE2826.setFromNode(CString("WalkTimer"));
ROUTE2826.setFromField(CString("fraction_changed"));
ROUTE2826.setToNode(CString("Walk_l_ankle_RotationInterpolator"));
ROUTE2826.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2826);

ROUTE& ROUTE2827 =  ROUTE();
ROUTE2827.setFromNode(CString("WalkTimer"));
ROUTE2827.setFromField(CString("fraction_changed"));
ROUTE2827.setToNode(CString("Walk_l_knee_RotationInterpolator"));
ROUTE2827.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2827);

ROUTE& ROUTE2828 =  ROUTE();
ROUTE2828.setFromNode(CString("WalkTimer"));
ROUTE2828.setFromField(CString("fraction_changed"));
ROUTE2828.setToNode(CString("Walk_l_hip_RotationInterpolator"));
ROUTE2828.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2828);

ROUTE& ROUTE2829 =  ROUTE();
ROUTE2829.setFromNode(CString("WalkTimer"));
ROUTE2829.setFromField(CString("fraction_changed"));
ROUTE2829.setToNode(CString("Walk_lower_body_RotationInterpolator"));
ROUTE2829.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2829);

ROUTE& ROUTE2830 =  ROUTE();
ROUTE2830.setFromNode(CString("WalkTimer"));
ROUTE2830.setFromField(CString("fraction_changed"));
ROUTE2830.setToNode(CString("Walk_r_wrist_RotationInterpolator"));
ROUTE2830.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2830);

ROUTE& ROUTE2831 =  ROUTE();
ROUTE2831.setFromNode(CString("WalkTimer"));
ROUTE2831.setFromField(CString("fraction_changed"));
ROUTE2831.setToNode(CString("Walk_r_elbow_RotationInterpolator"));
ROUTE2831.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2831);

ROUTE& ROUTE2832 =  ROUTE();
ROUTE2832.setFromNode(CString("WalkTimer"));
ROUTE2832.setFromField(CString("fraction_changed"));
ROUTE2832.setToNode(CString("Walk_r_shoulder_RotationInterpolator"));
ROUTE2832.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2832);

ROUTE& ROUTE2833 =  ROUTE();
ROUTE2833.setFromNode(CString("WalkTimer"));
ROUTE2833.setFromField(CString("fraction_changed"));
ROUTE2833.setToNode(CString("Walk_l_wrist_RotationInterpolator"));
ROUTE2833.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2833);

ROUTE& ROUTE2834 =  ROUTE();
ROUTE2834.setFromNode(CString("WalkTimer"));
ROUTE2834.setFromField(CString("fraction_changed"));
ROUTE2834.setToNode(CString("Walk_l_elbow_RotationInterpolator"));
ROUTE2834.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2834);

ROUTE& ROUTE2835 =  ROUTE();
ROUTE2835.setFromNode(CString("WalkTimer"));
ROUTE2835.setFromField(CString("fraction_changed"));
ROUTE2835.setToNode(CString("Walk_l_shoulder_RotationInterpolator"));
ROUTE2835.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2835);

ROUTE& ROUTE2836 =  ROUTE();
ROUTE2836.setFromNode(CString("WalkTimer"));
ROUTE2836.setFromField(CString("fraction_changed"));
ROUTE2836.setToNode(CString("Walk_head_RotationInterpolator"));
ROUTE2836.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2836);

ROUTE& ROUTE2837 =  ROUTE();
ROUTE2837.setFromNode(CString("WalkTimer"));
ROUTE2837.setFromField(CString("fraction_changed"));
ROUTE2837.setToNode(CString("Walk_neck_RotationInterpolator"));
ROUTE2837.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2837);

ROUTE& ROUTE2838 =  ROUTE();
ROUTE2838.setFromNode(CString("WalkTimer"));
ROUTE2838.setFromField(CString("fraction_changed"));
ROUTE2838.setToNode(CString("Walk_upper_body_RotationInterpolator"));
ROUTE2838.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2838);

ROUTE& ROUTE2839 =  ROUTE();
ROUTE2839.setFromNode(CString("WalkTimer"));
ROUTE2839.setFromField(CString("fraction_changed"));
ROUTE2839.setToNode(CString("Walk_whole_body_RotationInterpolator"));
ROUTE2839.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2839);

ROUTE& ROUTE2840 =  ROUTE();
ROUTE2840.setFromNode(CString("WalkTimer"));
ROUTE2840.setFromField(CString("fraction_changed"));
ROUTE2840.setToNode(CString("Walk_whole_body_TranslationInterpolator"));
ROUTE2840.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2840);

ROUTE& ROUTE2841 =  ROUTE();
ROUTE2841.setFromNode(CString("WalkTimer"));
ROUTE2841.setFromField(CString("fraction_changed"));
ROUTE2841.setToNode(CString("Walk_l_sternoclavicular_RollInterpolator"));
ROUTE2841.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2841);

ROUTE& ROUTE2842 =  ROUTE();
ROUTE2842.setFromNode(CString("WalkTimer"));
ROUTE2842.setFromField(CString("fraction_changed"));
ROUTE2842.setToNode(CString("Walk_l_acromioclavicular_RollInterpolator"));
ROUTE2842.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2842);

ROUTE& ROUTE2843 =  ROUTE();
ROUTE2843.setFromNode(CString("WalkTimer"));
ROUTE2843.setFromField(CString("fraction_changed"));
ROUTE2843.setToNode(CString("Walk_r_sternoclavicular_RollInterpolator"));
ROUTE2843.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2843);

ROUTE& ROUTE2844 =  ROUTE();
ROUTE2844.setFromNode(CString("WalkTimer"));
ROUTE2844.setFromField(CString("fraction_changed"));
ROUTE2844.setToNode(CString("Walk_r_acromioclavicular_RollInterpolator"));
ROUTE2844.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2844);

ROUTE& ROUTE2845 =  ROUTE();
ROUTE2845.setFromNode(CString("WalkTimer"));
ROUTE2845.setFromField(CString("fraction_changed"));
ROUTE2845.setToNode(CString("Walk_r_metatarsal_PitchInterpolator"));
ROUTE2845.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2845);

ROUTE& ROUTE2846 =  ROUTE();
ROUTE2846.setFromNode(CString("WalkTimer"));
ROUTE2846.setFromField(CString("fraction_changed"));
ROUTE2846.setToNode(CString("Walk_sacroiliac_YawInterpolator"));
ROUTE2846.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2846);

ROUTE& ROUTE2847 =  ROUTE();
ROUTE2847.setFromNode(CString("WalkTimer"));
ROUTE2847.setFromField(CString("fraction_changed"));
ROUTE2847.setToNode(CString("Walk_vl5_YawInterpolator"));
ROUTE2847.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2847);

ROUTE& ROUTE2848 =  ROUTE();
ROUTE2848.setFromNode(CString("WalkTimer"));
ROUTE2848.setFromField(CString("fraction_changed"));
ROUTE2848.setToNode(CString("Walk_vc6_YawInterpolator"));
ROUTE2848.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2848);

ROUTE& ROUTE2849 =  ROUTE();
ROUTE2849.setFromNode(CString("WalkTimer"));
ROUTE2849.setFromField(CString("fraction_changed"));
ROUTE2849.setToNode(CString("Walk_l_thumb1_PitchInterpolator"));
ROUTE2849.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2849);

ROUTE& ROUTE2850 =  ROUTE();
ROUTE2850.setFromNode(CString("WalkTimer"));
ROUTE2850.setFromField(CString("fraction_changed"));
ROUTE2850.setToNode(CString("Walk_r_thumb1_PitchInterpolator"));
ROUTE2850.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2850);

ROUTE& ROUTE2851 =  ROUTE();
ROUTE2851.setFromNode(CString("Walk_r_ankle_RotationInterpolator"));
ROUTE2851.setFromField(CString("value_changed"));
ROUTE2851.setToNode(CString("hanim_r_ankle"));
ROUTE2851.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2851);

ROUTE& ROUTE2852 =  ROUTE();
ROUTE2852.setFromNode(CString("Walk_r_knee_RotationInterpolator"));
ROUTE2852.setFromField(CString("value_changed"));
ROUTE2852.setToNode(CString("hanim_r_knee"));
ROUTE2852.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2852);

ROUTE& ROUTE2853 =  ROUTE();
ROUTE2853.setFromNode(CString("Walk_r_hip_RotationInterpolator"));
ROUTE2853.setFromField(CString("value_changed"));
ROUTE2853.setToNode(CString("hanim_r_hip"));
ROUTE2853.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2853);

ROUTE& ROUTE2854 =  ROUTE();
ROUTE2854.setFromNode(CString("Walk_l_ankle_RotationInterpolator"));
ROUTE2854.setFromField(CString("value_changed"));
ROUTE2854.setToNode(CString("hanim_l_ankle"));
ROUTE2854.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2854);

ROUTE& ROUTE2855 =  ROUTE();
ROUTE2855.setFromNode(CString("Walk_l_knee_RotationInterpolator"));
ROUTE2855.setFromField(CString("value_changed"));
ROUTE2855.setToNode(CString("hanim_l_knee"));
ROUTE2855.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2855);

ROUTE& ROUTE2856 =  ROUTE();
ROUTE2856.setFromNode(CString("Walk_l_hip_RotationInterpolator"));
ROUTE2856.setFromField(CString("value_changed"));
ROUTE2856.setToNode(CString("hanim_l_hip"));
ROUTE2856.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2856);

ROUTE& ROUTE2857 =  ROUTE();
ROUTE2857.setFromNode(CString("Walk_lower_body_RotationInterpolator"));
ROUTE2857.setFromField(CString("value_changed"));
ROUTE2857.setToNode(CString("hanim_sacroiliac"));
ROUTE2857.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2857);

ROUTE& ROUTE2858 =  ROUTE();
ROUTE2858.setFromNode(CString("Walk_r_wrist_RotationInterpolator"));
ROUTE2858.setFromField(CString("value_changed"));
ROUTE2858.setToNode(CString("hanim_r_wrist"));
ROUTE2858.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2858);

ROUTE& ROUTE2859 =  ROUTE();
ROUTE2859.setFromNode(CString("Walk_r_elbow_RotationInterpolator"));
ROUTE2859.setFromField(CString("value_changed"));
ROUTE2859.setToNode(CString("hanim_r_elbow"));
ROUTE2859.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2859);

ROUTE& ROUTE2860 =  ROUTE();
ROUTE2860.setFromNode(CString("Walk_r_shoulder_RotationInterpolator"));
ROUTE2860.setFromField(CString("value_changed"));
ROUTE2860.setToNode(CString("hanim_r_shoulder"));
ROUTE2860.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2860);

ROUTE& ROUTE2861 =  ROUTE();
ROUTE2861.setFromNode(CString("Walk_l_wrist_RotationInterpolator"));
ROUTE2861.setFromField(CString("value_changed"));
ROUTE2861.setToNode(CString("hanim_l_wrist"));
ROUTE2861.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2861);

ROUTE& ROUTE2862 =  ROUTE();
ROUTE2862.setFromNode(CString("Walk_l_elbow_RotationInterpolator"));
ROUTE2862.setFromField(CString("value_changed"));
ROUTE2862.setToNode(CString("hanim_l_elbow"));
ROUTE2862.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2862);

ROUTE& ROUTE2863 =  ROUTE();
ROUTE2863.setFromNode(CString("Walk_l_shoulder_RotationInterpolator"));
ROUTE2863.setFromField(CString("value_changed"));
ROUTE2863.setToNode(CString("hanim_l_shoulder"));
ROUTE2863.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2863);

ROUTE& ROUTE2864 =  ROUTE();
ROUTE2864.setFromNode(CString("Walk_head_RotationInterpolator"));
ROUTE2864.setFromField(CString("value_changed"));
ROUTE2864.setToNode(CString("hanim_skullbase"));
ROUTE2864.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2864);

ROUTE& ROUTE2865 =  ROUTE();
ROUTE2865.setFromNode(CString("Walk_neck_RotationInterpolator"));
ROUTE2865.setFromField(CString("value_changed"));
ROUTE2865.setToNode(CString("hanim_vc4"));
ROUTE2865.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2865);

ROUTE& ROUTE2866 =  ROUTE();
ROUTE2866.setFromNode(CString("Walk_upper_body_RotationInterpolator"));
ROUTE2866.setFromField(CString("value_changed"));
ROUTE2866.setToNode(CString("hanim_vl1"));
ROUTE2866.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2866);

ROUTE& ROUTE2867 =  ROUTE();
ROUTE2867.setFromNode(CString("Walk_whole_body_RotationInterpolator"));
ROUTE2867.setFromField(CString("value_changed"));
ROUTE2867.setToNode(CString("hanim_humanoid_root"));
ROUTE2867.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2867);

ROUTE& ROUTE2868 =  ROUTE();
ROUTE2868.setFromNode(CString("Walk_whole_body_TranslationInterpolator"));
ROUTE2868.setFromField(CString("value_changed"));
ROUTE2868.setToNode(CString("hanim_humanoid_root"));
ROUTE2868.setToField(CString("set_translation"));
Scene29.addChild(&ROUTE2868);

ROUTE& ROUTE2869 =  ROUTE();
ROUTE2869.setFromNode(CString("Walk_l_sternoclavicular_RollInterpolator"));
ROUTE2869.setFromField(CString("value_changed"));
ROUTE2869.setToNode(CString("hanim_l_sternoclavicular"));
ROUTE2869.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2869);

ROUTE& ROUTE2870 =  ROUTE();
ROUTE2870.setFromNode(CString("Walk_l_acromioclavicular_RollInterpolator"));
ROUTE2870.setFromField(CString("value_changed"));
ROUTE2870.setToNode(CString("hanim_l_acromioclavicular"));
ROUTE2870.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2870);

ROUTE& ROUTE2871 =  ROUTE();
ROUTE2871.setFromNode(CString("Walk_r_sternoclavicular_RollInterpolator"));
ROUTE2871.setFromField(CString("value_changed"));
ROUTE2871.setToNode(CString("hanim_r_sternoclavicular"));
ROUTE2871.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2871);

ROUTE& ROUTE2872 =  ROUTE();
ROUTE2872.setFromNode(CString("Walk_r_acromioclavicular_RollInterpolator"));
ROUTE2872.setFromField(CString("value_changed"));
ROUTE2872.setToNode(CString("hanim_r_acromioclavicular"));
ROUTE2872.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2872);

ROUTE& ROUTE2873 =  ROUTE();
ROUTE2873.setFromNode(CString("Walk_r_metatarsal_PitchInterpolator"));
ROUTE2873.setFromField(CString("value_changed"));
ROUTE2873.setToNode(CString("hanim_l_metatarsal"));
ROUTE2873.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2873);

ROUTE& ROUTE2874 =  ROUTE();
ROUTE2874.setFromNode(CString("Walk_r_metatarsal_PitchInterpolator"));
ROUTE2874.setFromField(CString("value_changed"));
ROUTE2874.setToNode(CString("hanim_r_metatarsal"));
ROUTE2874.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2874);

ROUTE& ROUTE2875 =  ROUTE();
ROUTE2875.setFromNode(CString("Walk_sacroiliac_YawInterpolator"));
ROUTE2875.setFromField(CString("value_changed"));
ROUTE2875.setToNode(CString("hanim_sacroiliac"));
ROUTE2875.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2875);

ROUTE& ROUTE2876 =  ROUTE();
ROUTE2876.setFromNode(CString("Walk_vl5_YawInterpolator"));
ROUTE2876.setFromField(CString("value_changed"));
ROUTE2876.setToNode(CString("hanim_vl5"));
ROUTE2876.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2876);

ROUTE& ROUTE2877 =  ROUTE();
ROUTE2877.setFromNode(CString("Walk_vc6_YawInterpolator"));
ROUTE2877.setFromField(CString("value_changed"));
ROUTE2877.setToNode(CString("hanim_vc6"));
ROUTE2877.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2877);

ROUTE& ROUTE2878 =  ROUTE();
ROUTE2878.setFromNode(CString("Walk_l_thumb1_PitchInterpolator"));
ROUTE2878.setFromField(CString("value_changed"));
ROUTE2878.setToNode(CString("hanim_l_thumb1"));
ROUTE2878.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2878);

ROUTE& ROUTE2879 =  ROUTE();
ROUTE2879.setFromNode(CString("Walk_r_thumb1_PitchInterpolator"));
ROUTE2879.setFromField(CString("value_changed"));
ROUTE2879.setToNode(CString("hanim_r_thumb1"));
ROUTE2879.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2879);

ROUTE& ROUTE2880 =  ROUTE();
ROUTE2880.setFromNode(CString("RunTimer"));
ROUTE2880.setFromField(CString("fraction_changed"));
ROUTE2880.setToNode(CString("Run_r_ankle_RotationInterpolator_Run"));
ROUTE2880.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2880);

ROUTE& ROUTE2881 =  ROUTE();
ROUTE2881.setFromNode(CString("RunTimer"));
ROUTE2881.setFromField(CString("fraction_changed"));
ROUTE2881.setToNode(CString("Run_r_knee_RotationInterpolator_Run"));
ROUTE2881.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2881);

ROUTE& ROUTE2882 =  ROUTE();
ROUTE2882.setFromNode(CString("RunTimer"));
ROUTE2882.setFromField(CString("fraction_changed"));
ROUTE2882.setToNode(CString("Run_r_hip_RotationInterpolator_Run"));
ROUTE2882.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2882);

ROUTE& ROUTE2883 =  ROUTE();
ROUTE2883.setFromNode(CString("RunTimer"));
ROUTE2883.setFromField(CString("fraction_changed"));
ROUTE2883.setToNode(CString("Run_l_ankle_RotationInterpolator_Run"));
ROUTE2883.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2883);

ROUTE& ROUTE2884 =  ROUTE();
ROUTE2884.setFromNode(CString("RunTimer"));
ROUTE2884.setFromField(CString("fraction_changed"));
ROUTE2884.setToNode(CString("Run_l_knee_RotationInterpolator_Run"));
ROUTE2884.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2884);

ROUTE& ROUTE2885 =  ROUTE();
ROUTE2885.setFromNode(CString("RunTimer"));
ROUTE2885.setFromField(CString("fraction_changed"));
ROUTE2885.setToNode(CString("Run_l_hip_RotationInterpolator_Run"));
ROUTE2885.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2885);

ROUTE& ROUTE2886 =  ROUTE();
ROUTE2886.setFromNode(CString("RunTimer"));
ROUTE2886.setFromField(CString("fraction_changed"));
ROUTE2886.setToNode(CString("Run_lower_body_RotationInterpolator_Run"));
ROUTE2886.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2886);

ROUTE& ROUTE2887 =  ROUTE();
ROUTE2887.setFromNode(CString("RunTimer"));
ROUTE2887.setFromField(CString("fraction_changed"));
ROUTE2887.setToNode(CString("Run_r_wrist_RotationInterpolator_Run"));
ROUTE2887.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2887);

ROUTE& ROUTE2888 =  ROUTE();
ROUTE2888.setFromNode(CString("RunTimer"));
ROUTE2888.setFromField(CString("fraction_changed"));
ROUTE2888.setToNode(CString("Run_r_elbow_RotationInterpolator_Run"));
ROUTE2888.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2888);

ROUTE& ROUTE2889 =  ROUTE();
ROUTE2889.setFromNode(CString("RunTimer"));
ROUTE2889.setFromField(CString("fraction_changed"));
ROUTE2889.setToNode(CString("Run_r_shoulder_RotationInterpolator_Run"));
ROUTE2889.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2889);

ROUTE& ROUTE2890 =  ROUTE();
ROUTE2890.setFromNode(CString("RunTimer"));
ROUTE2890.setFromField(CString("fraction_changed"));
ROUTE2890.setToNode(CString("Run_l_wrist_RotationInterpolator_Run"));
ROUTE2890.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2890);

ROUTE& ROUTE2891 =  ROUTE();
ROUTE2891.setFromNode(CString("RunTimer"));
ROUTE2891.setFromField(CString("fraction_changed"));
ROUTE2891.setToNode(CString("Run_l_elbow_RotationInterpolator_Run"));
ROUTE2891.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2891);

ROUTE& ROUTE2892 =  ROUTE();
ROUTE2892.setFromNode(CString("RunTimer"));
ROUTE2892.setFromField(CString("fraction_changed"));
ROUTE2892.setToNode(CString("Run_l_shoulder_RotationInterpolator_Run"));
ROUTE2892.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2892);

ROUTE& ROUTE2893 =  ROUTE();
ROUTE2893.setFromNode(CString("RunTimer"));
ROUTE2893.setFromField(CString("fraction_changed"));
ROUTE2893.setToNode(CString("Run_head_RotationInterpolator_Run"));
ROUTE2893.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2893);

ROUTE& ROUTE2894 =  ROUTE();
ROUTE2894.setFromNode(CString("RunTimer"));
ROUTE2894.setFromField(CString("fraction_changed"));
ROUTE2894.setToNode(CString("Run_neck_RotationInterpolator_Run"));
ROUTE2894.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2894);

ROUTE& ROUTE2895 =  ROUTE();
ROUTE2895.setFromNode(CString("RunTimer"));
ROUTE2895.setFromField(CString("fraction_changed"));
ROUTE2895.setToNode(CString("Run_upper_body_RotationInterpolator_Run"));
ROUTE2895.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2895);

ROUTE& ROUTE2896 =  ROUTE();
ROUTE2896.setFromNode(CString("RunTimer"));
ROUTE2896.setFromField(CString("fraction_changed"));
ROUTE2896.setToNode(CString("Run_whole_body_RotationInterpolator_Run"));
ROUTE2896.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2896);

ROUTE& ROUTE2897 =  ROUTE();
ROUTE2897.setFromNode(CString("RunTimer"));
ROUTE2897.setFromField(CString("fraction_changed"));
ROUTE2897.setToNode(CString("Run_whole_body_TranslationInterpolator_Run"));
ROUTE2897.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2897);

ROUTE& ROUTE2898 =  ROUTE();
ROUTE2898.setFromNode(CString("RunTimer"));
ROUTE2898.setFromField(CString("fraction_changed"));
ROUTE2898.setToNode(CString("Run_l_sternoclavicular_RollInterpolator"));
ROUTE2898.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2898);

ROUTE& ROUTE2899 =  ROUTE();
ROUTE2899.setFromNode(CString("RunTimer"));
ROUTE2899.setFromField(CString("fraction_changed"));
ROUTE2899.setToNode(CString("Run_l_acromioclavicular_RollInterpolator"));
ROUTE2899.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2899);

ROUTE& ROUTE2900 =  ROUTE();
ROUTE2900.setFromNode(CString("RunTimer"));
ROUTE2900.setFromField(CString("fraction_changed"));
ROUTE2900.setToNode(CString("Run_r_sternoclavicular_RollInterpolator"));
ROUTE2900.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2900);

ROUTE& ROUTE2901 =  ROUTE();
ROUTE2901.setFromNode(CString("RunTimer"));
ROUTE2901.setFromField(CString("fraction_changed"));
ROUTE2901.setToNode(CString("Run_r_acromioclavicular_RollInterpolator"));
ROUTE2901.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2901);

ROUTE& ROUTE2902 =  ROUTE();
ROUTE2902.setFromNode(CString("RunTimer"));
ROUTE2902.setFromField(CString("fraction_changed"));
ROUTE2902.setToNode(CString("Run_r_metatarsal_PitchInterpolator"));
ROUTE2902.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2902);

ROUTE& ROUTE2903 =  ROUTE();
ROUTE2903.setFromNode(CString("RunTimer"));
ROUTE2903.setFromField(CString("fraction_changed"));
ROUTE2903.setToNode(CString("Run_sacroiliac_YawInterpolator"));
ROUTE2903.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2903);

ROUTE& ROUTE2904 =  ROUTE();
ROUTE2904.setFromNode(CString("RunTimer"));
ROUTE2904.setFromField(CString("fraction_changed"));
ROUTE2904.setToNode(CString("Run_vl5_YawInterpolator"));
ROUTE2904.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2904);

ROUTE& ROUTE2905 =  ROUTE();
ROUTE2905.setFromNode(CString("RunTimer"));
ROUTE2905.setFromField(CString("fraction_changed"));
ROUTE2905.setToNode(CString("Run_vc6_YawInterpolator"));
ROUTE2905.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2905);

ROUTE& ROUTE2906 =  ROUTE();
ROUTE2906.setFromNode(CString("RunTimer"));
ROUTE2906.setFromField(CString("fraction_changed"));
ROUTE2906.setToNode(CString("Run_l_thumb1_PitchInterpolator"));
ROUTE2906.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2906);

ROUTE& ROUTE2907 =  ROUTE();
ROUTE2907.setFromNode(CString("RunTimer"));
ROUTE2907.setFromField(CString("fraction_changed"));
ROUTE2907.setToNode(CString("Run_r_thumb1_PitchInterpolator"));
ROUTE2907.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2907);

ROUTE& ROUTE2908 =  ROUTE();
ROUTE2908.setFromNode(CString("Run_r_ankle_RotationInterpolator_Run"));
ROUTE2908.setFromField(CString("value_changed"));
ROUTE2908.setToNode(CString("hanim_r_ankle"));
ROUTE2908.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2908);

ROUTE& ROUTE2909 =  ROUTE();
ROUTE2909.setFromNode(CString("Run_r_knee_RotationInterpolator_Run"));
ROUTE2909.setFromField(CString("value_changed"));
ROUTE2909.setToNode(CString("hanim_r_knee"));
ROUTE2909.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2909);

ROUTE& ROUTE2910 =  ROUTE();
ROUTE2910.setFromNode(CString("Run_r_hip_RotationInterpolator_Run"));
ROUTE2910.setFromField(CString("value_changed"));
ROUTE2910.setToNode(CString("hanim_r_hip"));
ROUTE2910.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2910);

ROUTE& ROUTE2911 =  ROUTE();
ROUTE2911.setFromNode(CString("Run_l_ankle_RotationInterpolator_Run"));
ROUTE2911.setFromField(CString("value_changed"));
ROUTE2911.setToNode(CString("hanim_l_ankle"));
ROUTE2911.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2911);

ROUTE& ROUTE2912 =  ROUTE();
ROUTE2912.setFromNode(CString("Run_l_knee_RotationInterpolator_Run"));
ROUTE2912.setFromField(CString("value_changed"));
ROUTE2912.setToNode(CString("hanim_l_knee"));
ROUTE2912.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2912);

ROUTE& ROUTE2913 =  ROUTE();
ROUTE2913.setFromNode(CString("Run_l_hip_RotationInterpolator_Run"));
ROUTE2913.setFromField(CString("value_changed"));
ROUTE2913.setToNode(CString("hanim_l_hip"));
ROUTE2913.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2913);

ROUTE& ROUTE2914 =  ROUTE();
ROUTE2914.setFromNode(CString("Run_r_wrist_RotationInterpolator_Run"));
ROUTE2914.setFromField(CString("value_changed"));
ROUTE2914.setToNode(CString("hanim_r_wrist"));
ROUTE2914.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2914);

ROUTE& ROUTE2915 =  ROUTE();
ROUTE2915.setFromNode(CString("Run_r_elbow_RotationInterpolator_Run"));
ROUTE2915.setFromField(CString("value_changed"));
ROUTE2915.setToNode(CString("hanim_r_elbow"));
ROUTE2915.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2915);

ROUTE& ROUTE2916 =  ROUTE();
ROUTE2916.setFromNode(CString("Run_r_shoulder_RotationInterpolator_Run"));
ROUTE2916.setFromField(CString("value_changed"));
ROUTE2916.setToNode(CString("hanim_r_shoulder"));
ROUTE2916.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2916);

ROUTE& ROUTE2917 =  ROUTE();
ROUTE2917.setFromNode(CString("Run_l_wrist_RotationInterpolator_Run"));
ROUTE2917.setFromField(CString("value_changed"));
ROUTE2917.setToNode(CString("hanim_l_wrist"));
ROUTE2917.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2917);

ROUTE& ROUTE2918 =  ROUTE();
ROUTE2918.setFromNode(CString("Run_l_elbow_RotationInterpolator_Run"));
ROUTE2918.setFromField(CString("value_changed"));
ROUTE2918.setToNode(CString("hanim_l_elbow"));
ROUTE2918.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2918);

ROUTE& ROUTE2919 =  ROUTE();
ROUTE2919.setFromNode(CString("Run_l_shoulder_RotationInterpolator_Run"));
ROUTE2919.setFromField(CString("value_changed"));
ROUTE2919.setToNode(CString("hanim_l_shoulder"));
ROUTE2919.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2919);

ROUTE& ROUTE2920 =  ROUTE();
ROUTE2920.setFromNode(CString("Run_lower_body_RotationInterpolator_Run"));
ROUTE2920.setFromField(CString("value_changed"));
ROUTE2920.setToNode(CString("hanim_sacroiliac"));
ROUTE2920.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2920);

ROUTE& ROUTE2921 =  ROUTE();
ROUTE2921.setFromNode(CString("Run_head_RotationInterpolator_Run"));
ROUTE2921.setFromField(CString("value_changed"));
ROUTE2921.setToNode(CString("hanim_skullbase"));
ROUTE2921.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2921);

ROUTE& ROUTE2922 =  ROUTE();
ROUTE2922.setFromNode(CString("Run_neck_RotationInterpolator_Run"));
ROUTE2922.setFromField(CString("value_changed"));
ROUTE2922.setToNode(CString("hanim_vc4"));
ROUTE2922.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2922);

ROUTE& ROUTE2923 =  ROUTE();
ROUTE2923.setFromNode(CString("Run_upper_body_RotationInterpolator_Run"));
ROUTE2923.setFromField(CString("value_changed"));
ROUTE2923.setToNode(CString("hanim_vl1"));
ROUTE2923.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2923);

ROUTE& ROUTE2924 =  ROUTE();
ROUTE2924.setFromNode(CString("Run_whole_body_RotationInterpolator_Run"));
ROUTE2924.setFromField(CString("value_changed"));
ROUTE2924.setToNode(CString("hanim_humanoid_root"));
ROUTE2924.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2924);

ROUTE& ROUTE2925 =  ROUTE();
ROUTE2925.setFromNode(CString("Run_whole_body_TranslationInterpolator_Run"));
ROUTE2925.setFromField(CString("value_changed"));
ROUTE2925.setToNode(CString("hanim_humanoid_root"));
ROUTE2925.setToField(CString("set_translation"));
Scene29.addChild(&ROUTE2925);

ROUTE& ROUTE2926 =  ROUTE();
ROUTE2926.setFromNode(CString("Run_l_sternoclavicular_RollInterpolator"));
ROUTE2926.setFromField(CString("value_changed"));
ROUTE2926.setToNode(CString("hanim_l_sternoclavicular"));
ROUTE2926.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2926);

ROUTE& ROUTE2927 =  ROUTE();
ROUTE2927.setFromNode(CString("Run_l_acromioclavicular_RollInterpolator"));
ROUTE2927.setFromField(CString("value_changed"));
ROUTE2927.setToNode(CString("hanim_l_acromioclavicular"));
ROUTE2927.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2927);

ROUTE& ROUTE2928 =  ROUTE();
ROUTE2928.setFromNode(CString("Run_r_sternoclavicular_RollInterpolator"));
ROUTE2928.setFromField(CString("value_changed"));
ROUTE2928.setToNode(CString("hanim_r_sternoclavicular"));
ROUTE2928.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2928);

ROUTE& ROUTE2929 =  ROUTE();
ROUTE2929.setFromNode(CString("Run_r_acromioclavicular_RollInterpolator"));
ROUTE2929.setFromField(CString("value_changed"));
ROUTE2929.setToNode(CString("hanim_r_acromioclavicular"));
ROUTE2929.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2929);

ROUTE& ROUTE2930 =  ROUTE();
ROUTE2930.setFromNode(CString("Run_r_metatarsal_PitchInterpolator"));
ROUTE2930.setFromField(CString("value_changed"));
ROUTE2930.setToNode(CString("hanim_l_metatarsal"));
ROUTE2930.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2930);

ROUTE& ROUTE2931 =  ROUTE();
ROUTE2931.setFromNode(CString("Run_r_metatarsal_PitchInterpolator"));
ROUTE2931.setFromField(CString("value_changed"));
ROUTE2931.setToNode(CString("hanim_r_metatarsal"));
ROUTE2931.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2931);

ROUTE& ROUTE2932 =  ROUTE();
ROUTE2932.setFromNode(CString("Run_sacroiliac_YawInterpolator"));
ROUTE2932.setFromField(CString("value_changed"));
ROUTE2932.setToNode(CString("hanim_sacroiliac"));
ROUTE2932.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2932);

ROUTE& ROUTE2933 =  ROUTE();
ROUTE2933.setFromNode(CString("Run_vl5_YawInterpolator"));
ROUTE2933.setFromField(CString("value_changed"));
ROUTE2933.setToNode(CString("hanim_vl5"));
ROUTE2933.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2933);

ROUTE& ROUTE2934 =  ROUTE();
ROUTE2934.setFromNode(CString("Run_vc6_YawInterpolator"));
ROUTE2934.setFromField(CString("value_changed"));
ROUTE2934.setToNode(CString("hanim_vc6"));
ROUTE2934.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2934);

ROUTE& ROUTE2935 =  ROUTE();
ROUTE2935.setFromNode(CString("Run_l_thumb1_PitchInterpolator"));
ROUTE2935.setFromField(CString("value_changed"));
ROUTE2935.setToNode(CString("hanim_l_thumb1"));
ROUTE2935.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2935);

ROUTE& ROUTE2936 =  ROUTE();
ROUTE2936.setFromNode(CString("Run_r_thumb1_PitchInterpolator"));
ROUTE2936.setFromField(CString("value_changed"));
ROUTE2936.setToNode(CString("hanim_r_thumb1"));
ROUTE2936.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2936);

ROUTE& ROUTE2937 =  ROUTE();
ROUTE2937.setFromNode(CString("JumpTimer"));
ROUTE2937.setFromField(CString("fraction_changed"));
ROUTE2937.setToNode(CString("Jump_r_ankle_RotationInterpolator"));
ROUTE2937.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2937);

ROUTE& ROUTE2938 =  ROUTE();
ROUTE2938.setFromNode(CString("JumpTimer"));
ROUTE2938.setFromField(CString("fraction_changed"));
ROUTE2938.setToNode(CString("Jump_r_knee_RotationInterpolator"));
ROUTE2938.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2938);

ROUTE& ROUTE2939 =  ROUTE();
ROUTE2939.setFromNode(CString("JumpTimer"));
ROUTE2939.setFromField(CString("fraction_changed"));
ROUTE2939.setToNode(CString("Jump_r_hip_RotationInterpolator"));
ROUTE2939.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2939);

ROUTE& ROUTE2940 =  ROUTE();
ROUTE2940.setFromNode(CString("JumpTimer"));
ROUTE2940.setFromField(CString("fraction_changed"));
ROUTE2940.setToNode(CString("Jump_l_ankle_RotationInterpolator"));
ROUTE2940.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2940);

ROUTE& ROUTE2941 =  ROUTE();
ROUTE2941.setFromNode(CString("JumpTimer"));
ROUTE2941.setFromField(CString("fraction_changed"));
ROUTE2941.setToNode(CString("Jump_l_knee_RotationInterpolator"));
ROUTE2941.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2941);

ROUTE& ROUTE2942 =  ROUTE();
ROUTE2942.setFromNode(CString("JumpTimer"));
ROUTE2942.setFromField(CString("fraction_changed"));
ROUTE2942.setToNode(CString("Jump_l_hip_RotationInterpolator"));
ROUTE2942.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2942);

ROUTE& ROUTE2943 =  ROUTE();
ROUTE2943.setFromNode(CString("JumpTimer"));
ROUTE2943.setFromField(CString("fraction_changed"));
ROUTE2943.setToNode(CString("Jump_lower_body_RotationInterpolator"));
ROUTE2943.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2943);

ROUTE& ROUTE2944 =  ROUTE();
ROUTE2944.setFromNode(CString("JumpTimer"));
ROUTE2944.setFromField(CString("fraction_changed"));
ROUTE2944.setToNode(CString("Jump_r_wrist_RotationInterpolator"));
ROUTE2944.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2944);

ROUTE& ROUTE2945 =  ROUTE();
ROUTE2945.setFromNode(CString("JumpTimer"));
ROUTE2945.setFromField(CString("fraction_changed"));
ROUTE2945.setToNode(CString("Jump_r_elbow_RotationInterpolator"));
ROUTE2945.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2945);

ROUTE& ROUTE2946 =  ROUTE();
ROUTE2946.setFromNode(CString("JumpTimer"));
ROUTE2946.setFromField(CString("fraction_changed"));
ROUTE2946.setToNode(CString("Jump_r_shoulder_RotationInterpolator"));
ROUTE2946.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2946);

ROUTE& ROUTE2947 =  ROUTE();
ROUTE2947.setFromNode(CString("JumpTimer"));
ROUTE2947.setFromField(CString("fraction_changed"));
ROUTE2947.setToNode(CString("Jump_l_wrist_RotationInterpolator"));
ROUTE2947.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2947);

ROUTE& ROUTE2948 =  ROUTE();
ROUTE2948.setFromNode(CString("JumpTimer"));
ROUTE2948.setFromField(CString("fraction_changed"));
ROUTE2948.setToNode(CString("Jump_l_elbow_RotationInterpolator"));
ROUTE2948.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2948);

ROUTE& ROUTE2949 =  ROUTE();
ROUTE2949.setFromNode(CString("JumpTimer"));
ROUTE2949.setFromField(CString("fraction_changed"));
ROUTE2949.setToNode(CString("Jump_l_shoulder_RotationInterpolator"));
ROUTE2949.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2949);

ROUTE& ROUTE2950 =  ROUTE();
ROUTE2950.setFromNode(CString("JumpTimer"));
ROUTE2950.setFromField(CString("fraction_changed"));
ROUTE2950.setToNode(CString("Jump_head_RotationInterpolator"));
ROUTE2950.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2950);

ROUTE& ROUTE2951 =  ROUTE();
ROUTE2951.setFromNode(CString("JumpTimer"));
ROUTE2951.setFromField(CString("fraction_changed"));
ROUTE2951.setToNode(CString("Jump_neck_RotationInterpolator"));
ROUTE2951.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2951);

ROUTE& ROUTE2952 =  ROUTE();
ROUTE2952.setFromNode(CString("JumpTimer"));
ROUTE2952.setFromField(CString("fraction_changed"));
ROUTE2952.setToNode(CString("Jump_upper_body_RotationInterpolator"));
ROUTE2952.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2952);

ROUTE& ROUTE2953 =  ROUTE();
ROUTE2953.setFromNode(CString("JumpTimer"));
ROUTE2953.setFromField(CString("fraction_changed"));
ROUTE2953.setToNode(CString("Jump_whole_body_RotationInterpolator"));
ROUTE2953.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2953);

ROUTE& ROUTE2954 =  ROUTE();
ROUTE2954.setFromNode(CString("JumpTimer"));
ROUTE2954.setFromField(CString("fraction_changed"));
ROUTE2954.setToNode(CString("Jump_whole_body_TranslationInterpolator"));
ROUTE2954.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2954);

ROUTE& ROUTE2955 =  ROUTE();
ROUTE2955.setFromNode(CString("JumpTimer"));
ROUTE2955.setFromField(CString("fraction_changed"));
ROUTE2955.setToNode(CString("Jump_l_sternoclavicular_RollInterpolator"));
ROUTE2955.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2955);

ROUTE& ROUTE2956 =  ROUTE();
ROUTE2956.setFromNode(CString("JumpTimer"));
ROUTE2956.setFromField(CString("fraction_changed"));
ROUTE2956.setToNode(CString("Jump_l_acromioclavicular_RollInterpolator"));
ROUTE2956.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2956);

ROUTE& ROUTE2957 =  ROUTE();
ROUTE2957.setFromNode(CString("JumpTimer"));
ROUTE2957.setFromField(CString("fraction_changed"));
ROUTE2957.setToNode(CString("Jump_r_sternoclavicular_RollInterpolator"));
ROUTE2957.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2957);

ROUTE& ROUTE2958 =  ROUTE();
ROUTE2958.setFromNode(CString("JumpTimer"));
ROUTE2958.setFromField(CString("fraction_changed"));
ROUTE2958.setToNode(CString("Jump_r_acromioclavicular_RollInterpolator"));
ROUTE2958.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2958);

ROUTE& ROUTE2959 =  ROUTE();
ROUTE2959.setFromNode(CString("JumpTimer"));
ROUTE2959.setFromField(CString("fraction_changed"));
ROUTE2959.setToNode(CString("Jump_r_metatarsal_PitchInterpolator"));
ROUTE2959.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2959);

ROUTE& ROUTE2960 =  ROUTE();
ROUTE2960.setFromNode(CString("JumpTimer"));
ROUTE2960.setFromField(CString("fraction_changed"));
ROUTE2960.setToNode(CString("Jump_sacroiliac_YawInterpolator"));
ROUTE2960.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2960);

ROUTE& ROUTE2961 =  ROUTE();
ROUTE2961.setFromNode(CString("JumpTimer"));
ROUTE2961.setFromField(CString("fraction_changed"));
ROUTE2961.setToNode(CString("Jump_vl5_YawInterpolator"));
ROUTE2961.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2961);

ROUTE& ROUTE2962 =  ROUTE();
ROUTE2962.setFromNode(CString("JumpTimer"));
ROUTE2962.setFromField(CString("fraction_changed"));
ROUTE2962.setToNode(CString("Jump_vc6_YawInterpolator"));
ROUTE2962.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2962);

ROUTE& ROUTE2963 =  ROUTE();
ROUTE2963.setFromNode(CString("JumpTimer"));
ROUTE2963.setFromField(CString("fraction_changed"));
ROUTE2963.setToNode(CString("Jump_l_thumb1_PitchInterpolator"));
ROUTE2963.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2963);

ROUTE& ROUTE2964 =  ROUTE();
ROUTE2964.setFromNode(CString("JumpTimer"));
ROUTE2964.setFromField(CString("fraction_changed"));
ROUTE2964.setToNode(CString("Jump_r_thumb1_PitchInterpolator"));
ROUTE2964.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2964);

ROUTE& ROUTE2965 =  ROUTE();
ROUTE2965.setFromNode(CString("Jump_r_ankle_RotationInterpolator"));
ROUTE2965.setFromField(CString("value_changed"));
ROUTE2965.setToNode(CString("hanim_r_ankle"));
ROUTE2965.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2965);

ROUTE& ROUTE2966 =  ROUTE();
ROUTE2966.setFromNode(CString("Jump_r_knee_RotationInterpolator"));
ROUTE2966.setFromField(CString("value_changed"));
ROUTE2966.setToNode(CString("hanim_r_knee"));
ROUTE2966.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2966);

ROUTE& ROUTE2967 =  ROUTE();
ROUTE2967.setFromNode(CString("Jump_r_hip_RotationInterpolator"));
ROUTE2967.setFromField(CString("value_changed"));
ROUTE2967.setToNode(CString("hanim_r_hip"));
ROUTE2967.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2967);

ROUTE& ROUTE2968 =  ROUTE();
ROUTE2968.setFromNode(CString("Jump_l_ankle_RotationInterpolator"));
ROUTE2968.setFromField(CString("value_changed"));
ROUTE2968.setToNode(CString("hanim_l_ankle"));
ROUTE2968.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2968);

ROUTE& ROUTE2969 =  ROUTE();
ROUTE2969.setFromNode(CString("Jump_l_knee_RotationInterpolator"));
ROUTE2969.setFromField(CString("value_changed"));
ROUTE2969.setToNode(CString("hanim_l_knee"));
ROUTE2969.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2969);

ROUTE& ROUTE2970 =  ROUTE();
ROUTE2970.setFromNode(CString("Jump_l_hip_RotationInterpolator"));
ROUTE2970.setFromField(CString("value_changed"));
ROUTE2970.setToNode(CString("hanim_l_hip"));
ROUTE2970.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2970);

ROUTE& ROUTE2971 =  ROUTE();
ROUTE2971.setFromNode(CString("Jump_lower_body_RotationInterpolator"));
ROUTE2971.setFromField(CString("value_changed"));
ROUTE2971.setToNode(CString("hanim_sacroiliac"));
ROUTE2971.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2971);

ROUTE& ROUTE2972 =  ROUTE();
ROUTE2972.setFromNode(CString("Jump_r_wrist_RotationInterpolator"));
ROUTE2972.setFromField(CString("value_changed"));
ROUTE2972.setToNode(CString("hanim_r_wrist"));
ROUTE2972.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2972);

ROUTE& ROUTE2973 =  ROUTE();
ROUTE2973.setFromNode(CString("Jump_r_elbow_RotationInterpolator"));
ROUTE2973.setFromField(CString("value_changed"));
ROUTE2973.setToNode(CString("hanim_r_elbow"));
ROUTE2973.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2973);

ROUTE& ROUTE2974 =  ROUTE();
ROUTE2974.setFromNode(CString("Jump_r_shoulder_RotationInterpolator"));
ROUTE2974.setFromField(CString("value_changed"));
ROUTE2974.setToNode(CString("hanim_r_shoulder"));
ROUTE2974.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2974);

ROUTE& ROUTE2975 =  ROUTE();
ROUTE2975.setFromNode(CString("Jump_l_wrist_RotationInterpolator"));
ROUTE2975.setFromField(CString("value_changed"));
ROUTE2975.setToNode(CString("hanim_l_wrist"));
ROUTE2975.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2975);

ROUTE& ROUTE2976 =  ROUTE();
ROUTE2976.setFromNode(CString("Jump_l_elbow_RotationInterpolator"));
ROUTE2976.setFromField(CString("value_changed"));
ROUTE2976.setToNode(CString("hanim_l_elbow"));
ROUTE2976.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2976);

ROUTE& ROUTE2977 =  ROUTE();
ROUTE2977.setFromNode(CString("Jump_l_shoulder_RotationInterpolator"));
ROUTE2977.setFromField(CString("value_changed"));
ROUTE2977.setToNode(CString("hanim_l_shoulder"));
ROUTE2977.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2977);

ROUTE& ROUTE2978 =  ROUTE();
ROUTE2978.setFromNode(CString("Jump_head_RotationInterpolator"));
ROUTE2978.setFromField(CString("value_changed"));
ROUTE2978.setToNode(CString("hanim_skullbase"));
ROUTE2978.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2978);

ROUTE& ROUTE2979 =  ROUTE();
ROUTE2979.setFromNode(CString("Jump_neck_RotationInterpolator"));
ROUTE2979.setFromField(CString("value_changed"));
ROUTE2979.setToNode(CString("hanim_vc4"));
ROUTE2979.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2979);

ROUTE& ROUTE2980 =  ROUTE();
ROUTE2980.setFromNode(CString("Jump_upper_body_RotationInterpolator"));
ROUTE2980.setFromField(CString("value_changed"));
ROUTE2980.setToNode(CString("hanim_vl1"));
ROUTE2980.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2980);

ROUTE& ROUTE2981 =  ROUTE();
ROUTE2981.setFromNode(CString("Jump_whole_body_RotationInterpolator"));
ROUTE2981.setFromField(CString("value_changed"));
ROUTE2981.setToNode(CString("hanim_humanoid_root"));
ROUTE2981.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2981);

ROUTE& ROUTE2982 =  ROUTE();
ROUTE2982.setFromNode(CString("Jump_whole_body_TranslationInterpolator"));
ROUTE2982.setFromField(CString("value_changed"));
ROUTE2982.setToNode(CString("hanim_humanoid_root"));
ROUTE2982.setToField(CString("set_translation"));
Scene29.addChild(&ROUTE2982);

ROUTE& ROUTE2983 =  ROUTE();
ROUTE2983.setFromNode(CString("Jump_l_sternoclavicular_RollInterpolator"));
ROUTE2983.setFromField(CString("value_changed"));
ROUTE2983.setToNode(CString("hanim_l_sternoclavicular"));
ROUTE2983.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2983);

ROUTE& ROUTE2984 =  ROUTE();
ROUTE2984.setFromNode(CString("Jump_l_acromioclavicular_RollInterpolator"));
ROUTE2984.setFromField(CString("value_changed"));
ROUTE2984.setToNode(CString("hanim_l_acromioclavicular"));
ROUTE2984.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2984);

ROUTE& ROUTE2985 =  ROUTE();
ROUTE2985.setFromNode(CString("Jump_r_sternoclavicular_RollInterpolator"));
ROUTE2985.setFromField(CString("value_changed"));
ROUTE2985.setToNode(CString("hanim_r_sternoclavicular"));
ROUTE2985.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2985);

ROUTE& ROUTE2986 =  ROUTE();
ROUTE2986.setFromNode(CString("Jump_r_acromioclavicular_RollInterpolator"));
ROUTE2986.setFromField(CString("value_changed"));
ROUTE2986.setToNode(CString("hanim_r_acromioclavicular"));
ROUTE2986.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2986);

ROUTE& ROUTE2987 =  ROUTE();
ROUTE2987.setFromNode(CString("Jump_r_metatarsal_PitchInterpolator"));
ROUTE2987.setFromField(CString("value_changed"));
ROUTE2987.setToNode(CString("hanim_l_metatarsal"));
ROUTE2987.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2987);

ROUTE& ROUTE2988 =  ROUTE();
ROUTE2988.setFromNode(CString("Jump_r_metatarsal_PitchInterpolator"));
ROUTE2988.setFromField(CString("value_changed"));
ROUTE2988.setToNode(CString("hanim_r_metatarsal"));
ROUTE2988.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2988);

ROUTE& ROUTE2989 =  ROUTE();
ROUTE2989.setFromNode(CString("Jump_sacroiliac_YawInterpolator"));
ROUTE2989.setFromField(CString("value_changed"));
ROUTE2989.setToNode(CString("hanim_sacroiliac"));
ROUTE2989.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2989);

ROUTE& ROUTE2990 =  ROUTE();
ROUTE2990.setFromNode(CString("Jump_vl5_YawInterpolator"));
ROUTE2990.setFromField(CString("value_changed"));
ROUTE2990.setToNode(CString("hanim_vl5"));
ROUTE2990.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2990);

ROUTE& ROUTE2991 =  ROUTE();
ROUTE2991.setFromNode(CString("Jump_vc6_YawInterpolator"));
ROUTE2991.setFromField(CString("value_changed"));
ROUTE2991.setToNode(CString("hanim_vc6"));
ROUTE2991.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2991);

ROUTE& ROUTE2992 =  ROUTE();
ROUTE2992.setFromNode(CString("Jump_l_thumb1_PitchInterpolator"));
ROUTE2992.setFromField(CString("value_changed"));
ROUTE2992.setToNode(CString("hanim_l_thumb1"));
ROUTE2992.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2992);

ROUTE& ROUTE2993 =  ROUTE();
ROUTE2993.setFromNode(CString("Jump_r_thumb1_PitchInterpolator"));
ROUTE2993.setFromField(CString("value_changed"));
ROUTE2993.setToNode(CString("hanim_r_thumb1"));
ROUTE2993.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE2993);

ROUTE& ROUTE2994 =  ROUTE();
ROUTE2994.setFromNode(CString("KickTimer"));
ROUTE2994.setFromField(CString("fraction_changed"));
ROUTE2994.setToNode(CString("Kick_l_sternoclavicular_RollInterpolator"));
ROUTE2994.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2994);

ROUTE& ROUTE2995 =  ROUTE();
ROUTE2995.setFromNode(CString("KickTimer"));
ROUTE2995.setFromField(CString("fraction_changed"));
ROUTE2995.setToNode(CString("Kick_l_acromioclavicular_RollInterpolator"));
ROUTE2995.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2995);

ROUTE& ROUTE2996 =  ROUTE();
ROUTE2996.setFromNode(CString("KickTimer"));
ROUTE2996.setFromField(CString("fraction_changed"));
ROUTE2996.setToNode(CString("Kick_l_shoulder_RollInterpolator"));
ROUTE2996.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2996);

ROUTE& ROUTE2997 =  ROUTE();
ROUTE2997.setFromNode(CString("KickTimer"));
ROUTE2997.setFromField(CString("fraction_changed"));
ROUTE2997.setToNode(CString("Kick_l_ForeArm_PitchInterpolator"));
ROUTE2997.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2997);

ROUTE& ROUTE2998 =  ROUTE();
ROUTE2998.setFromNode(CString("KickTimer"));
ROUTE2998.setFromField(CString("fraction_changed"));
ROUTE2998.setToNode(CString("Kick_l_wrist_RollInterpolator"));
ROUTE2998.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2998);

ROUTE& ROUTE2999 =  ROUTE();
ROUTE2999.setFromNode(CString("KickTimer"));
ROUTE2999.setFromField(CString("fraction_changed"));
ROUTE2999.setToNode(CString("Kick_l_thumb1_PitchInterpolator"));
ROUTE2999.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE2999);

ROUTE& ROUTE3000 =  ROUTE();
ROUTE3000.setFromNode(CString("KickTimer"));
ROUTE3000.setFromField(CString("fraction_changed"));
ROUTE3000.setToNode(CString("Kick_r_sternoclavicular_RollInterpolator"));
ROUTE3000.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3000);

ROUTE& ROUTE3001 =  ROUTE();
ROUTE3001.setFromNode(CString("KickTimer"));
ROUTE3001.setFromField(CString("fraction_changed"));
ROUTE3001.setToNode(CString("Kick_r_acromioclavicular_RollInterpolator"));
ROUTE3001.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3001);

ROUTE& ROUTE3002 =  ROUTE();
ROUTE3002.setFromNode(CString("KickTimer"));
ROUTE3002.setFromField(CString("fraction_changed"));
ROUTE3002.setToNode(CString("Kick_r_shoulder_RollInterpolator"));
ROUTE3002.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3002);

ROUTE& ROUTE3003 =  ROUTE();
ROUTE3003.setFromNode(CString("KickTimer"));
ROUTE3003.setFromField(CString("fraction_changed"));
ROUTE3003.setToNode(CString("Kick_r_ForeArm_PitchInterpolator"));
ROUTE3003.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3003);

ROUTE& ROUTE3004 =  ROUTE();
ROUTE3004.setFromNode(CString("KickTimer"));
ROUTE3004.setFromField(CString("fraction_changed"));
ROUTE3004.setToNode(CString("Kick_r_wrist_RollInterpolator"));
ROUTE3004.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3004);

ROUTE& ROUTE3005 =  ROUTE();
ROUTE3005.setFromNode(CString("KickTimer"));
ROUTE3005.setFromField(CString("fraction_changed"));
ROUTE3005.setToNode(CString("Kick_r_thumb1_PitchInterpolator"));
ROUTE3005.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3005);

ROUTE& ROUTE3006 =  ROUTE();
ROUTE3006.setFromNode(CString("KickTimer"));
ROUTE3006.setFromField(CString("fraction_changed"));
ROUTE3006.setToNode(CString("Kick_r_hip_PitchInterpolator"));
ROUTE3006.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3006);

ROUTE& ROUTE3007 =  ROUTE();
ROUTE3007.setFromNode(CString("KickTimer"));
ROUTE3007.setFromField(CString("fraction_changed"));
ROUTE3007.setToNode(CString("Kick_r_knee_PitchInterpolator"));
ROUTE3007.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3007);

ROUTE& ROUTE3008 =  ROUTE();
ROUTE3008.setFromNode(CString("KickTimer"));
ROUTE3008.setFromField(CString("fraction_changed"));
ROUTE3008.setToNode(CString("Kick_l_hip_PitchInterpolator"));
ROUTE3008.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3008);

ROUTE& ROUTE3009 =  ROUTE();
ROUTE3009.setFromNode(CString("KickTimer"));
ROUTE3009.setFromField(CString("fraction_changed"));
ROUTE3009.setToNode(CString("Kick_l_knee_PitchInterpolator"));
ROUTE3009.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3009);

ROUTE& ROUTE3010 =  ROUTE();
ROUTE3010.setFromNode(CString("KickTimer"));
ROUTE3010.setFromField(CString("fraction_changed"));
ROUTE3010.setToNode(CString("Kick_r_ankle_PitchInterpolator"));
ROUTE3010.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3010);

ROUTE& ROUTE3011 =  ROUTE();
ROUTE3011.setFromNode(CString("KickTimer"));
ROUTE3011.setFromField(CString("fraction_changed"));
ROUTE3011.setToNode(CString("Kick_r_metatarsal_PitchInterpolator"));
ROUTE3011.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3011);

ROUTE& ROUTE3012 =  ROUTE();
ROUTE3012.setFromNode(CString("KickTimer"));
ROUTE3012.setFromField(CString("fraction_changed"));
ROUTE3012.setToNode(CString("Kick_sacroiliac_YawInterpolator"));
ROUTE3012.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3012);

ROUTE& ROUTE3013 =  ROUTE();
ROUTE3013.setFromNode(CString("KickTimer"));
ROUTE3013.setFromField(CString("fraction_changed"));
ROUTE3013.setToNode(CString("Kick_vl5_YawInterpolator"));
ROUTE3013.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3013);

ROUTE& ROUTE3014 =  ROUTE();
ROUTE3014.setFromNode(CString("KickTimer"));
ROUTE3014.setFromField(CString("fraction_changed"));
ROUTE3014.setToNode(CString("Kick_vc6_YawInterpolator"));
ROUTE3014.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3014);

ROUTE& ROUTE3015 =  ROUTE();
ROUTE3015.setFromNode(CString("KickTimer"));
ROUTE3015.setFromField(CString("fraction_changed"));
ROUTE3015.setToNode(CString("Kick_lower_body_RotationInterpolator"));
ROUTE3015.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3015);

ROUTE& ROUTE3016 =  ROUTE();
ROUTE3016.setFromNode(CString("KickTimer"));
ROUTE3016.setFromField(CString("fraction_changed"));
ROUTE3016.setToNode(CString("Kick_upper_body_RotationInterpolator"));
ROUTE3016.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3016);

ROUTE& ROUTE3017 =  ROUTE();
ROUTE3017.setFromNode(CString("KickTimer"));
ROUTE3017.setFromField(CString("fraction_changed"));
ROUTE3017.setToNode(CString("Kick_whole_body_RotationInterpolator"));
ROUTE3017.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3017);

ROUTE& ROUTE3018 =  ROUTE();
ROUTE3018.setFromNode(CString("KickTimer"));
ROUTE3018.setFromField(CString("fraction_changed"));
ROUTE3018.setToNode(CString("Kick_whole_body_TranslationInterpolator"));
ROUTE3018.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3018);

ROUTE& ROUTE3019 =  ROUTE();
ROUTE3019.setFromNode(CString("KickTimer"));
ROUTE3019.setFromField(CString("fraction_changed"));
ROUTE3019.setToNode(CString("Kick_neck_RotationInterpolator"));
ROUTE3019.setToField(CString("set_fraction"));
Scene29.addChild(&ROUTE3019);

ROUTE& ROUTE3020 =  ROUTE();
ROUTE3020.setFromNode(CString("Kick_l_sternoclavicular_RollInterpolator"));
ROUTE3020.setFromField(CString("value_changed"));
ROUTE3020.setToNode(CString("hanim_l_sternoclavicular"));
ROUTE3020.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3020);

ROUTE& ROUTE3021 =  ROUTE();
ROUTE3021.setFromNode(CString("Kick_l_acromioclavicular_RollInterpolator"));
ROUTE3021.setFromField(CString("value_changed"));
ROUTE3021.setToNode(CString("hanim_l_acromioclavicular"));
ROUTE3021.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3021);

ROUTE& ROUTE3022 =  ROUTE();
ROUTE3022.setFromNode(CString("Kick_l_shoulder_RollInterpolator"));
ROUTE3022.setFromField(CString("value_changed"));
ROUTE3022.setToNode(CString("hanim_l_shoulder"));
ROUTE3022.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3022);

ROUTE& ROUTE3023 =  ROUTE();
ROUTE3023.setFromNode(CString("Kick_l_ForeArm_PitchInterpolator"));
ROUTE3023.setFromField(CString("value_changed"));
ROUTE3023.setToNode(CString("hanim_l_elbow"));
ROUTE3023.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3023);

ROUTE& ROUTE3024 =  ROUTE();
ROUTE3024.setFromNode(CString("Kick_l_wrist_RollInterpolator"));
ROUTE3024.setFromField(CString("value_changed"));
ROUTE3024.setToNode(CString("hanim_l_wrist"));
ROUTE3024.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3024);

ROUTE& ROUTE3025 =  ROUTE();
ROUTE3025.setFromNode(CString("Kick_l_thumb1_PitchInterpolator"));
ROUTE3025.setFromField(CString("value_changed"));
ROUTE3025.setToNode(CString("hanim_l_thumb1"));
ROUTE3025.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3025);

ROUTE& ROUTE3026 =  ROUTE();
ROUTE3026.setFromNode(CString("Kick_r_sternoclavicular_RollInterpolator"));
ROUTE3026.setFromField(CString("value_changed"));
ROUTE3026.setToNode(CString("hanim_r_sternoclavicular"));
ROUTE3026.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3026);

ROUTE& ROUTE3027 =  ROUTE();
ROUTE3027.setFromNode(CString("Kick_r_acromioclavicular_RollInterpolator"));
ROUTE3027.setFromField(CString("value_changed"));
ROUTE3027.setToNode(CString("hanim_r_acromioclavicular"));
ROUTE3027.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3027);

ROUTE& ROUTE3028 =  ROUTE();
ROUTE3028.setFromNode(CString("Kick_r_shoulder_RollInterpolator"));
ROUTE3028.setFromField(CString("value_changed"));
ROUTE3028.setToNode(CString("hanim_r_shoulder"));
ROUTE3028.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3028);

ROUTE& ROUTE3029 =  ROUTE();
ROUTE3029.setFromNode(CString("Kick_r_ForeArm_PitchInterpolator"));
ROUTE3029.setFromField(CString("value_changed"));
ROUTE3029.setToNode(CString("hanim_r_elbow"));
ROUTE3029.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3029);

ROUTE& ROUTE3030 =  ROUTE();
ROUTE3030.setFromNode(CString("Kick_r_wrist_RollInterpolator"));
ROUTE3030.setFromField(CString("value_changed"));
ROUTE3030.setToNode(CString("hanim_r_wrist"));
ROUTE3030.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3030);

ROUTE& ROUTE3031 =  ROUTE();
ROUTE3031.setFromNode(CString("Kick_r_thumb1_PitchInterpolator"));
ROUTE3031.setFromField(CString("value_changed"));
ROUTE3031.setToNode(CString("hanim_r_thumb1"));
ROUTE3031.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3031);

ROUTE& ROUTE3032 =  ROUTE();
ROUTE3032.setFromNode(CString("Kick_r_hip_PitchInterpolator"));
ROUTE3032.setFromField(CString("value_changed"));
ROUTE3032.setToNode(CString("hanim_r_hip"));
ROUTE3032.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3032);

ROUTE& ROUTE3033 =  ROUTE();
ROUTE3033.setFromNode(CString("Kick_r_knee_PitchInterpolator"));
ROUTE3033.setFromField(CString("value_changed"));
ROUTE3033.setToNode(CString("hanim_r_knee"));
ROUTE3033.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3033);

ROUTE& ROUTE3034 =  ROUTE();
ROUTE3034.setFromNode(CString("Kick_r_ankle_PitchInterpolator"));
ROUTE3034.setFromField(CString("value_changed"));
ROUTE3034.setToNode(CString("hanim_r_ankle"));
ROUTE3034.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3034);

ROUTE& ROUTE3035 =  ROUTE();
ROUTE3035.setFromNode(CString("Kick_r_metatarsal_PitchInterpolator"));
ROUTE3035.setFromField(CString("value_changed"));
ROUTE3035.setToNode(CString("hanim_r_metatarsal"));
ROUTE3035.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3035);

ROUTE& ROUTE3036 =  ROUTE();
ROUTE3036.setFromNode(CString("Kick_l_hip_PitchInterpolator"));
ROUTE3036.setFromField(CString("value_changed"));
ROUTE3036.setToNode(CString("hanim_l_hip"));
ROUTE3036.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3036);

ROUTE& ROUTE3037 =  ROUTE();
ROUTE3037.setFromNode(CString("Kick_l_knee_PitchInterpolator"));
ROUTE3037.setFromField(CString("value_changed"));
ROUTE3037.setToNode(CString("hanim_l_knee"));
ROUTE3037.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3037);

ROUTE& ROUTE3038 =  ROUTE();
ROUTE3038.setFromNode(CString("Kick_r_ankle_PitchInterpolator"));
ROUTE3038.setFromField(CString("value_changed"));
ROUTE3038.setToNode(CString("hanim_l_ankle"));
ROUTE3038.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3038);

ROUTE& ROUTE3039 =  ROUTE();
ROUTE3039.setFromNode(CString("Kick_r_metatarsal_PitchInterpolator"));
ROUTE3039.setFromField(CString("value_changed"));
ROUTE3039.setToNode(CString("hanim_l_metatarsal"));
ROUTE3039.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3039);

ROUTE& ROUTE3040 =  ROUTE();
ROUTE3040.setFromNode(CString("Kick_sacroiliac_YawInterpolator"));
ROUTE3040.setFromField(CString("value_changed"));
ROUTE3040.setToNode(CString("hanim_sacroiliac"));
ROUTE3040.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3040);

ROUTE& ROUTE3041 =  ROUTE();
ROUTE3041.setFromNode(CString("Kick_vl5_YawInterpolator"));
ROUTE3041.setFromField(CString("value_changed"));
ROUTE3041.setToNode(CString("hanim_vl5"));
ROUTE3041.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3041);

ROUTE& ROUTE3042 =  ROUTE();
ROUTE3042.setFromNode(CString("Kick_vc6_YawInterpolator"));
ROUTE3042.setFromField(CString("value_changed"));
ROUTE3042.setToNode(CString("hanim_vc6"));
ROUTE3042.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3042);

ROUTE& ROUTE3043 =  ROUTE();
ROUTE3043.setFromNode(CString("Kick_upper_body_RotationInterpolator"));
ROUTE3043.setFromField(CString("value_changed"));
ROUTE3043.setToNode(CString("hanim_vl1"));
ROUTE3043.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3043);

ROUTE& ROUTE3044 =  ROUTE();
ROUTE3044.setFromNode(CString("Kick_lower_body_RotationInterpolator"));
ROUTE3044.setFromField(CString("value_changed"));
ROUTE3044.setToNode(CString("hanim_sacroiliac"));
ROUTE3044.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3044);

ROUTE& ROUTE3045 =  ROUTE();
ROUTE3045.setFromNode(CString("Kick_whole_body_RotationInterpolator"));
ROUTE3045.setFromField(CString("value_changed"));
ROUTE3045.setToNode(CString("hanim_humanoid_root"));
ROUTE3045.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3045);

ROUTE& ROUTE3046 =  ROUTE();
ROUTE3046.setFromNode(CString("Kick_whole_body_TranslationInterpolator"));
ROUTE3046.setFromField(CString("value_changed"));
ROUTE3046.setToNode(CString("hanim_humanoid_root"));
ROUTE3046.setToField(CString("set_translation"));
Scene29.addChild(&ROUTE3046);

ROUTE& ROUTE3047 =  ROUTE();
ROUTE3047.setFromNode(CString("Kick_neck_RotationInterpolator"));
ROUTE3047.setFromField(CString("value_changed"));
ROUTE3047.setToNode(CString("hanim_vc4"));
ROUTE3047.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3047);

ROUTE& ROUTE3048 =  ROUTE();
ROUTE3048.setFromNode(CString("HudProximitySensor"));
ROUTE3048.setFromField(CString("position_changed"));
ROUTE3048.setToNode(CString("HudXform"));
ROUTE3048.setToField(CString("set_translation"));
Scene29.addChild(&ROUTE3048);

ROUTE& ROUTE3049 =  ROUTE();
ROUTE3049.setFromNode(CString("HudProximitySensor"));
ROUTE3049.setFromField(CString("orientation_changed"));
ROUTE3049.setToNode(CString("HudXform"));
ROUTE3049.setToField(CString("set_rotation"));
Scene29.addChild(&ROUTE3049);

ROUTE& ROUTE3050 =  ROUTE();
ROUTE3050.setFromNode(CString("Stand_Touch"));
ROUTE3050.setFromField(CString("touchTime"));
ROUTE3050.setToNode(CString("PitchTimer"));
ROUTE3050.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3050);

ROUTE& ROUTE3051 =  ROUTE();
ROUTE3051.setFromNode(CString("Stand_Touch"));
ROUTE3051.setFromField(CString("touchTime"));
ROUTE3051.setToNode(CString("YawTimer"));
ROUTE3051.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3051);

ROUTE& ROUTE3052 =  ROUTE();
ROUTE3052.setFromNode(CString("Stand_Touch"));
ROUTE3052.setFromField(CString("touchTime"));
ROUTE3052.setToNode(CString("RollTimer"));
ROUTE3052.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3052);

ROUTE& ROUTE3053 =  ROUTE();
ROUTE3053.setFromNode(CString("Stand_Touch"));
ROUTE3053.setFromField(CString("touchTime"));
ROUTE3053.setToNode(CString("WalkTimer"));
ROUTE3053.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3053);

ROUTE& ROUTE3054 =  ROUTE();
ROUTE3054.setFromNode(CString("Stand_Touch"));
ROUTE3054.setFromField(CString("touchTime"));
ROUTE3054.setToNode(CString("RunTimer"));
ROUTE3054.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3054);

ROUTE& ROUTE3055 =  ROUTE();
ROUTE3055.setFromNode(CString("Stand_Touch"));
ROUTE3055.setFromField(CString("touchTime"));
ROUTE3055.setToNode(CString("JumpTimer"));
ROUTE3055.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3055);

ROUTE& ROUTE3056 =  ROUTE();
ROUTE3056.setFromNode(CString("Stand_Touch"));
ROUTE3056.setFromField(CString("touchTime"));
ROUTE3056.setToNode(CString("KickTimer"));
ROUTE3056.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3056);

ROUTE& ROUTE3057 =  ROUTE();
ROUTE3057.setFromNode(CString("Stand_Touch"));
ROUTE3057.setFromField(CString("touchTime"));
ROUTE3057.setToNode(CString("StopTimer"));
ROUTE3057.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3057);

ROUTE& ROUTE3058 =  ROUTE();
ROUTE3058.setFromNode(CString("Stand_Touch"));
ROUTE3058.setFromField(CString("touchTime"));
ROUTE3058.setToNode(CString("StandTimer"));
ROUTE3058.setToField(CString("set_startTime"));
Scene29.addChild(&ROUTE3058);

ROUTE& ROUTE3059 =  ROUTE();
ROUTE3059.setFromNode(CString("Pitch_Touch"));
ROUTE3059.setFromField(CString("touchTime"));
ROUTE3059.setToNode(CString("StandTimer"));
ROUTE3059.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3059);

ROUTE& ROUTE3060 =  ROUTE();
ROUTE3060.setFromNode(CString("Pitch_Touch"));
ROUTE3060.setFromField(CString("touchTime"));
ROUTE3060.setToNode(CString("YawTimer"));
ROUTE3060.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3060);

ROUTE& ROUTE3061 =  ROUTE();
ROUTE3061.setFromNode(CString("Pitch_Touch"));
ROUTE3061.setFromField(CString("touchTime"));
ROUTE3061.setToNode(CString("RollTimer"));
ROUTE3061.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3061);

ROUTE& ROUTE3062 =  ROUTE();
ROUTE3062.setFromNode(CString("Pitch_Touch"));
ROUTE3062.setFromField(CString("touchTime"));
ROUTE3062.setToNode(CString("WalkTimer"));
ROUTE3062.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3062);

ROUTE& ROUTE3063 =  ROUTE();
ROUTE3063.setFromNode(CString("Pitch_Touch"));
ROUTE3063.setFromField(CString("touchTime"));
ROUTE3063.setToNode(CString("RunTimer"));
ROUTE3063.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3063);

ROUTE& ROUTE3064 =  ROUTE();
ROUTE3064.setFromNode(CString("Pitch_Touch"));
ROUTE3064.setFromField(CString("touchTime"));
ROUTE3064.setToNode(CString("JumpTimer"));
ROUTE3064.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3064);

ROUTE& ROUTE3065 =  ROUTE();
ROUTE3065.setFromNode(CString("Pitch_Touch"));
ROUTE3065.setFromField(CString("touchTime"));
ROUTE3065.setToNode(CString("KickTimer"));
ROUTE3065.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3065);

ROUTE& ROUTE3066 =  ROUTE();
ROUTE3066.setFromNode(CString("Pitch_Touch"));
ROUTE3066.setFromField(CString("touchTime"));
ROUTE3066.setToNode(CString("StopTimer"));
ROUTE3066.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3066);

ROUTE& ROUTE3067 =  ROUTE();
ROUTE3067.setFromNode(CString("Pitch_Touch"));
ROUTE3067.setFromField(CString("touchTime"));
ROUTE3067.setToNode(CString("PitchTimer"));
ROUTE3067.setToField(CString("set_startTime"));
Scene29.addChild(&ROUTE3067);

ROUTE& ROUTE3068 =  ROUTE();
ROUTE3068.setFromNode(CString("Yaw_Touch"));
ROUTE3068.setFromField(CString("touchTime"));
ROUTE3068.setToNode(CString("StandTimer"));
ROUTE3068.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3068);

ROUTE& ROUTE3069 =  ROUTE();
ROUTE3069.setFromNode(CString("Yaw_Touch"));
ROUTE3069.setFromField(CString("touchTime"));
ROUTE3069.setToNode(CString("PitchTimer"));
ROUTE3069.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3069);

ROUTE& ROUTE3070 =  ROUTE();
ROUTE3070.setFromNode(CString("Yaw_Touch"));
ROUTE3070.setFromField(CString("touchTime"));
ROUTE3070.setToNode(CString("RollTimer"));
ROUTE3070.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3070);

ROUTE& ROUTE3071 =  ROUTE();
ROUTE3071.setFromNode(CString("Yaw_Touch"));
ROUTE3071.setFromField(CString("touchTime"));
ROUTE3071.setToNode(CString("WalkTimer"));
ROUTE3071.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3071);

ROUTE& ROUTE3072 =  ROUTE();
ROUTE3072.setFromNode(CString("Yaw_Touch"));
ROUTE3072.setFromField(CString("touchTime"));
ROUTE3072.setToNode(CString("RunTimer"));
ROUTE3072.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3072);

ROUTE& ROUTE3073 =  ROUTE();
ROUTE3073.setFromNode(CString("Yaw_Touch"));
ROUTE3073.setFromField(CString("touchTime"));
ROUTE3073.setToNode(CString("JumpTimer"));
ROUTE3073.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3073);

ROUTE& ROUTE3074 =  ROUTE();
ROUTE3074.setFromNode(CString("Yaw_Touch"));
ROUTE3074.setFromField(CString("touchTime"));
ROUTE3074.setToNode(CString("KickTimer"));
ROUTE3074.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3074);

ROUTE& ROUTE3075 =  ROUTE();
ROUTE3075.setFromNode(CString("Yaw_Touch"));
ROUTE3075.setFromField(CString("touchTime"));
ROUTE3075.setToNode(CString("StopTimer"));
ROUTE3075.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3075);

ROUTE& ROUTE3076 =  ROUTE();
ROUTE3076.setFromNode(CString("Yaw_Touch"));
ROUTE3076.setFromField(CString("touchTime"));
ROUTE3076.setToNode(CString("YawTimer"));
ROUTE3076.setToField(CString("set_startTime"));
Scene29.addChild(&ROUTE3076);

ROUTE& ROUTE3077 =  ROUTE();
ROUTE3077.setFromNode(CString("Walk_Touch"));
ROUTE3077.setFromField(CString("touchTime"));
ROUTE3077.setToNode(CString("StandTimer"));
ROUTE3077.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3077);

ROUTE& ROUTE3078 =  ROUTE();
ROUTE3078.setFromNode(CString("Walk_Touch"));
ROUTE3078.setFromField(CString("touchTime"));
ROUTE3078.setToNode(CString("PitchTimer"));
ROUTE3078.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3078);

ROUTE& ROUTE3079 =  ROUTE();
ROUTE3079.setFromNode(CString("Walk_Touch"));
ROUTE3079.setFromField(CString("touchTime"));
ROUTE3079.setToNode(CString("YawTimer"));
ROUTE3079.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3079);

ROUTE& ROUTE3080 =  ROUTE();
ROUTE3080.setFromNode(CString("Walk_Touch"));
ROUTE3080.setFromField(CString("touchTime"));
ROUTE3080.setToNode(CString("RollTimer"));
ROUTE3080.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3080);

ROUTE& ROUTE3081 =  ROUTE();
ROUTE3081.setFromNode(CString("Walk_Touch"));
ROUTE3081.setFromField(CString("touchTime"));
ROUTE3081.setToNode(CString("RunTimer"));
ROUTE3081.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3081);

ROUTE& ROUTE3082 =  ROUTE();
ROUTE3082.setFromNode(CString("Walk_Touch"));
ROUTE3082.setFromField(CString("touchTime"));
ROUTE3082.setToNode(CString("JumpTimer"));
ROUTE3082.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3082);

ROUTE& ROUTE3083 =  ROUTE();
ROUTE3083.setFromNode(CString("Walk_Touch"));
ROUTE3083.setFromField(CString("touchTime"));
ROUTE3083.setToNode(CString("KickTimer"));
ROUTE3083.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3083);

ROUTE& ROUTE3084 =  ROUTE();
ROUTE3084.setFromNode(CString("Walk_Touch"));
ROUTE3084.setFromField(CString("touchTime"));
ROUTE3084.setToNode(CString("StopTimer"));
ROUTE3084.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3084);

ROUTE& ROUTE3085 =  ROUTE();
ROUTE3085.setFromNode(CString("Walk_Touch"));
ROUTE3085.setFromField(CString("touchTime"));
ROUTE3085.setToNode(CString("WalkTimer"));
ROUTE3085.setToField(CString("set_startTime"));
Scene29.addChild(&ROUTE3085);

ROUTE& ROUTE3086 =  ROUTE();
ROUTE3086.setFromNode(CString("Roll_Touch"));
ROUTE3086.setFromField(CString("touchTime"));
ROUTE3086.setToNode(CString("StandTimer"));
ROUTE3086.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3086);

ROUTE& ROUTE3087 =  ROUTE();
ROUTE3087.setFromNode(CString("Roll_Touch"));
ROUTE3087.setFromField(CString("touchTime"));
ROUTE3087.setToNode(CString("PitchTimer"));
ROUTE3087.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3087);

ROUTE& ROUTE3088 =  ROUTE();
ROUTE3088.setFromNode(CString("Roll_Touch"));
ROUTE3088.setFromField(CString("touchTime"));
ROUTE3088.setToNode(CString("YawTimer"));
ROUTE3088.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3088);

ROUTE& ROUTE3089 =  ROUTE();
ROUTE3089.setFromNode(CString("Roll_Touch"));
ROUTE3089.setFromField(CString("touchTime"));
ROUTE3089.setToNode(CString("WalkTimer"));
ROUTE3089.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3089);

ROUTE& ROUTE3090 =  ROUTE();
ROUTE3090.setFromNode(CString("Roll_Touch"));
ROUTE3090.setFromField(CString("touchTime"));
ROUTE3090.setToNode(CString("RunTimer"));
ROUTE3090.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3090);

ROUTE& ROUTE3091 =  ROUTE();
ROUTE3091.setFromNode(CString("Roll_Touch"));
ROUTE3091.setFromField(CString("touchTime"));
ROUTE3091.setToNode(CString("JumpTimer"));
ROUTE3091.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3091);

ROUTE& ROUTE3092 =  ROUTE();
ROUTE3092.setFromNode(CString("Roll_Touch"));
ROUTE3092.setFromField(CString("touchTime"));
ROUTE3092.setToNode(CString("KickTimer"));
ROUTE3092.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3092);

ROUTE& ROUTE3093 =  ROUTE();
ROUTE3093.setFromNode(CString("Roll_Touch"));
ROUTE3093.setFromField(CString("touchTime"));
ROUTE3093.setToNode(CString("StopTimer"));
ROUTE3093.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3093);

ROUTE& ROUTE3094 =  ROUTE();
ROUTE3094.setFromNode(CString("Roll_Touch"));
ROUTE3094.setFromField(CString("touchTime"));
ROUTE3094.setToNode(CString("RollTimer"));
ROUTE3094.setToField(CString("set_startTime"));
Scene29.addChild(&ROUTE3094);

ROUTE& ROUTE3095 =  ROUTE();
ROUTE3095.setFromNode(CString("Run_Touch"));
ROUTE3095.setFromField(CString("touchTime"));
ROUTE3095.setToNode(CString("StandTimer"));
ROUTE3095.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3095);

ROUTE& ROUTE3096 =  ROUTE();
ROUTE3096.setFromNode(CString("Run_Touch"));
ROUTE3096.setFromField(CString("touchTime"));
ROUTE3096.setToNode(CString("PitchTimer"));
ROUTE3096.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3096);

ROUTE& ROUTE3097 =  ROUTE();
ROUTE3097.setFromNode(CString("Run_Touch"));
ROUTE3097.setFromField(CString("touchTime"));
ROUTE3097.setToNode(CString("YawTimer"));
ROUTE3097.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3097);

ROUTE& ROUTE3098 =  ROUTE();
ROUTE3098.setFromNode(CString("Run_Touch"));
ROUTE3098.setFromField(CString("touchTime"));
ROUTE3098.setToNode(CString("RollTimer"));
ROUTE3098.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3098);

ROUTE& ROUTE3099 =  ROUTE();
ROUTE3099.setFromNode(CString("Run_Touch"));
ROUTE3099.setFromField(CString("touchTime"));
ROUTE3099.setToNode(CString("WalkTimer"));
ROUTE3099.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3099);

ROUTE& ROUTE3100 =  ROUTE();
ROUTE3100.setFromNode(CString("Run_Touch"));
ROUTE3100.setFromField(CString("touchTime"));
ROUTE3100.setToNode(CString("JumpTimer"));
ROUTE3100.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3100);

ROUTE& ROUTE3101 =  ROUTE();
ROUTE3101.setFromNode(CString("Run_Touch"));
ROUTE3101.setFromField(CString("touchTime"));
ROUTE3101.setToNode(CString("KickTimer"));
ROUTE3101.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3101);

ROUTE& ROUTE3102 =  ROUTE();
ROUTE3102.setFromNode(CString("Run_Touch"));
ROUTE3102.setFromField(CString("touchTime"));
ROUTE3102.setToNode(CString("StopTimer"));
ROUTE3102.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3102);

ROUTE& ROUTE3103 =  ROUTE();
ROUTE3103.setFromNode(CString("Run_Touch"));
ROUTE3103.setFromField(CString("touchTime"));
ROUTE3103.setToNode(CString("RunTimer"));
ROUTE3103.setToField(CString("set_startTime"));
Scene29.addChild(&ROUTE3103);

ROUTE& ROUTE3104 =  ROUTE();
ROUTE3104.setFromNode(CString("Jump_Touch"));
ROUTE3104.setFromField(CString("touchTime"));
ROUTE3104.setToNode(CString("StandTimer"));
ROUTE3104.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3104);

ROUTE& ROUTE3105 =  ROUTE();
ROUTE3105.setFromNode(CString("Jump_Touch"));
ROUTE3105.setFromField(CString("touchTime"));
ROUTE3105.setToNode(CString("PitchTimer"));
ROUTE3105.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3105);

ROUTE& ROUTE3106 =  ROUTE();
ROUTE3106.setFromNode(CString("Jump_Touch"));
ROUTE3106.setFromField(CString("touchTime"));
ROUTE3106.setToNode(CString("YawTimer"));
ROUTE3106.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3106);

ROUTE& ROUTE3107 =  ROUTE();
ROUTE3107.setFromNode(CString("Jump_Touch"));
ROUTE3107.setFromField(CString("touchTime"));
ROUTE3107.setToNode(CString("RollTimer"));
ROUTE3107.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3107);

ROUTE& ROUTE3108 =  ROUTE();
ROUTE3108.setFromNode(CString("Jump_Touch"));
ROUTE3108.setFromField(CString("touchTime"));
ROUTE3108.setToNode(CString("WalkTimer"));
ROUTE3108.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3108);

ROUTE& ROUTE3109 =  ROUTE();
ROUTE3109.setFromNode(CString("Jump_Touch"));
ROUTE3109.setFromField(CString("touchTime"));
ROUTE3109.setToNode(CString("RunTimer"));
ROUTE3109.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3109);

ROUTE& ROUTE3110 =  ROUTE();
ROUTE3110.setFromNode(CString("Jump_Touch"));
ROUTE3110.setFromField(CString("touchTime"));
ROUTE3110.setToNode(CString("KickTimer"));
ROUTE3110.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3110);

ROUTE& ROUTE3111 =  ROUTE();
ROUTE3111.setFromNode(CString("Jump_Touch"));
ROUTE3111.setFromField(CString("touchTime"));
ROUTE3111.setToNode(CString("StopTimer"));
ROUTE3111.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3111);

ROUTE& ROUTE3112 =  ROUTE();
ROUTE3112.setFromNode(CString("Jump_Touch"));
ROUTE3112.setFromField(CString("touchTime"));
ROUTE3112.setToNode(CString("JumpTimer"));
ROUTE3112.setToField(CString("set_startTime"));
Scene29.addChild(&ROUTE3112);

ROUTE& ROUTE3113 =  ROUTE();
ROUTE3113.setFromNode(CString("Kick_Touch"));
ROUTE3113.setFromField(CString("touchTime"));
ROUTE3113.setToNode(CString("StandTimer"));
ROUTE3113.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3113);

ROUTE& ROUTE3114 =  ROUTE();
ROUTE3114.setFromNode(CString("Kick_Touch"));
ROUTE3114.setFromField(CString("touchTime"));
ROUTE3114.setToNode(CString("PitchTimer"));
ROUTE3114.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3114);

ROUTE& ROUTE3115 =  ROUTE();
ROUTE3115.setFromNode(CString("Kick_Touch"));
ROUTE3115.setFromField(CString("touchTime"));
ROUTE3115.setToNode(CString("YawTimer"));
ROUTE3115.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3115);

ROUTE& ROUTE3116 =  ROUTE();
ROUTE3116.setFromNode(CString("Kick_Touch"));
ROUTE3116.setFromField(CString("touchTime"));
ROUTE3116.setToNode(CString("RollTimer"));
ROUTE3116.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3116);

ROUTE& ROUTE3117 =  ROUTE();
ROUTE3117.setFromNode(CString("Kick_Touch"));
ROUTE3117.setFromField(CString("touchTime"));
ROUTE3117.setToNode(CString("WalkTimer"));
ROUTE3117.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3117);

ROUTE& ROUTE3118 =  ROUTE();
ROUTE3118.setFromNode(CString("Kick_Touch"));
ROUTE3118.setFromField(CString("touchTime"));
ROUTE3118.setToNode(CString("RunTimer"));
ROUTE3118.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3118);

ROUTE& ROUTE3119 =  ROUTE();
ROUTE3119.setFromNode(CString("Kick_Touch"));
ROUTE3119.setFromField(CString("touchTime"));
ROUTE3119.setToNode(CString("JumpTimer"));
ROUTE3119.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3119);

ROUTE& ROUTE3120 =  ROUTE();
ROUTE3120.setFromNode(CString("Kick_Touch"));
ROUTE3120.setFromField(CString("touchTime"));
ROUTE3120.setToNode(CString("StopTimer"));
ROUTE3120.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3120);

ROUTE& ROUTE3121 =  ROUTE();
ROUTE3121.setFromNode(CString("Kick_Touch"));
ROUTE3121.setFromField(CString("touchTime"));
ROUTE3121.setToNode(CString("KickTimer"));
ROUTE3121.setToField(CString("set_startTime"));
Scene29.addChild(&ROUTE3121);

ROUTE& ROUTE3122 =  ROUTE();
ROUTE3122.setFromNode(CString("Stop_Touch"));
ROUTE3122.setFromField(CString("touchTime"));
ROUTE3122.setToNode(CString("StandTimer"));
ROUTE3122.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3122);

ROUTE& ROUTE3123 =  ROUTE();
ROUTE3123.setFromNode(CString("Stop_Touch"));
ROUTE3123.setFromField(CString("touchTime"));
ROUTE3123.setToNode(CString("PitchTimer"));
ROUTE3123.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3123);

ROUTE& ROUTE3124 =  ROUTE();
ROUTE3124.setFromNode(CString("Stop_Touch"));
ROUTE3124.setFromField(CString("touchTime"));
ROUTE3124.setToNode(CString("YawTimer"));
ROUTE3124.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3124);

ROUTE& ROUTE3125 =  ROUTE();
ROUTE3125.setFromNode(CString("Stop_Touch"));
ROUTE3125.setFromField(CString("touchTime"));
ROUTE3125.setToNode(CString("RollTimer"));
ROUTE3125.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3125);

ROUTE& ROUTE3126 =  ROUTE();
ROUTE3126.setFromNode(CString("Stop_Touch"));
ROUTE3126.setFromField(CString("touchTime"));
ROUTE3126.setToNode(CString("WalkTimer"));
ROUTE3126.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3126);

ROUTE& ROUTE3127 =  ROUTE();
ROUTE3127.setFromNode(CString("Stop_Touch"));
ROUTE3127.setFromField(CString("touchTime"));
ROUTE3127.setToNode(CString("RunTimer"));
ROUTE3127.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3127);

ROUTE& ROUTE3128 =  ROUTE();
ROUTE3128.setFromNode(CString("Stop_Touch"));
ROUTE3128.setFromField(CString("touchTime"));
ROUTE3128.setToNode(CString("JumpTimer"));
ROUTE3128.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3128);

ROUTE& ROUTE3129 =  ROUTE();
ROUTE3129.setFromNode(CString("Stop_Touch"));
ROUTE3129.setFromField(CString("touchTime"));
ROUTE3129.setToNode(CString("KickTimer"));
ROUTE3129.setToField(CString("set_stopTime"));
Scene29.addChild(&ROUTE3129);

ROUTE& ROUTE3130 =  ROUTE();
ROUTE3130.setFromNode(CString("Stop_Touch"));
ROUTE3130.setFromField(CString("touchTime"));
ROUTE3130.setToNode(CString("StopTimer"));
ROUTE3130.setToField(CString("set_startTime"));
Scene29.addChild(&ROUTE3130);

X3D0.setScene(&Scene29);

}
