//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
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
meta3.setContent(CString("HAnimSpecificationLOA3Illustrated.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("reference"));
meta5.setContent(CString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("reference"));
meta6.setContent(CString("HAnimSpecificationLOA3Invisible.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("reference"));
meta7.setContent(CString("HAnimSpecificationLOA3Animation.x3d"));
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
meta15.setName(CString("reference"));
meta15.setContent(CString("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("created"));
meta16.setContent(CString("24 April 2013"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("modified"));
meta17.setContent(CString("Tue, 09 Sep 2025 19:39:08 GMT"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("error"));
meta18.setContent(CString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("creator"));
meta19.setContent(CString("Matthew T. Beitler, Joe D. Williams, Don Brutzman"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("Image"));
meta20.setContent(CString("HAnimSpecificationLOA3Illustrated.png"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("Image"));
meta21.setContent(CString("HAnimSpecificationLOA3IllustratedLeftSide.png"));
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
meta25.setName(CString("TODO"));
meta25.setContent(CString("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("TODO"));
meta26.setContent(CString("insert MetadataInteger nodes indicating LOA for each Joint and Segment"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(CString("warning"));
meta27.setContent(CString("BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(CString("translator"));
meta28.setContent(CString("Don Brutzman and Joe Williams"));
head1.addMeta(&meta28);

meta& meta29 =  meta();
meta29.setName(CString("generator"));
meta29.setContent(CString("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"));
head1.addMeta(&meta29);

meta& meta30 =  meta();
meta30.setName(CString("generator"));
meta30.setContent(CString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta30);

X3D0.setHead(&head1);

Scene& Scene31 =  Scene();
Background& Background32 =  Background();
Background32.setSkyColor(new float[]{0.3,0.3,0.3}, 3);
Scene31.addChild(&Background32);

NavigationInfo& NavigationInfo33 =  NavigationInfo();
Scene31.addChild(&NavigationInfo33);

Group& Group34 =  Group();
Group34.setDEF(CString("Original_WorldInfo"));
WorldInfo& WorldInfo35 =  WorldInfo();
WorldInfo35.setTitle(CString("HANIM 200x Default Joint Centers, LOA3"));
WorldInfo35.setInfo(new CString[]{CString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")}, 1);
Group34.addChild(&WorldInfo35);

Scene31.addChild(&Group34);

Viewpoint& Viewpoint36 =  Viewpoint();
Viewpoint36.setDescription(CString("Humanoid LOA 3 Front"));
Viewpoint36.setPosition(new float[]{0.0,0.4,4.0});
Viewpoint36.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene31.addChild(&Viewpoint36);

Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setDescription(CString("Humanoid LOA 3 Front Close"));
Viewpoint37.setPosition(new float[]{0.0,0.8,2.0});
Viewpoint37.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene31.addChild(&Viewpoint37);

Viewpoint& Viewpoint38 =  Viewpoint();
Viewpoint38.setDescription(CString("Humanoid LOA 3 Front Closer"));
Viewpoint38.setPosition(new float[]{0.0,1.2,1.0});
Viewpoint38.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene31.addChild(&Viewpoint38);

Viewpoint& Viewpoint39 =  Viewpoint();
Viewpoint39.setDescription(CString("Humanoid LOA 3 Front Face"));
Viewpoint39.setPosition(new float[]{0.0,1.63,1.0});
Viewpoint39.setCenterOfRotation(new float[]{0.0,1.5,0.0016});
Scene31.addChild(&Viewpoint39);

Viewpoint& Viewpoint40 =  Viewpoint();
Viewpoint40.setDescription(CString("Humanoid LOA 3 Right Side"));
Viewpoint40.setPosition(new float[]{2.6,0.8,0.0});
Viewpoint40.setOrientation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint40.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene31.addChild(&Viewpoint40);

Viewpoint& Viewpoint41 =  Viewpoint();
Viewpoint41.setDescription(CString("Humanoid LOA 3 Right Side Close"));
Viewpoint41.setPosition(new float[]{1.0,0.8,0.5});
Viewpoint41.setOrientation(new float[]{0.0,1.0,0.0,1.2});
Viewpoint41.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene31.addChild(&Viewpoint41);

Viewpoint& Viewpoint42 =  Viewpoint();
Viewpoint42.setDescription(CString("Humanoid LOA 3 Left Side Close"));
Viewpoint42.setPosition(new float[]{-1.0,0.8,0.5});
Viewpoint42.setOrientation(new float[]{0.0,1.0,0.0,-1.2});
Viewpoint42.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene31.addChild(&Viewpoint42);

Viewpoint& Viewpoint43 =  Viewpoint();
Viewpoint43.setDescription(CString("Humanoid LOA 3 Left Side"));
Viewpoint43.setPosition(new float[]{-2.6,0.8,0.0});
Viewpoint43.setOrientation(new float[]{0.0,1.0,0.0,-1.5708});
Viewpoint43.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene31.addChild(&Viewpoint43);

Viewpoint& Viewpoint44 =  Viewpoint();
Viewpoint44.setDescription(CString("Humanoid LOA 3 Top"));
Viewpoint44.setPosition(new float[]{0.0,3.5,0.0});
Viewpoint44.setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
Viewpoint44.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene31.addChild(&Viewpoint44);

HAnimHumanoid& HAnimHumanoid45 =  HAnimHumanoid();
HAnimHumanoid45.setDEF(CString("hanim_humanoid"));
HAnimHumanoid45.X3DNode::setName(CString("humanoid"));
HAnimHumanoid45.setInfo(new CString[]{CString("authorName=Matthew T. Beitler Joe D. Williams Don Brutzman"), CString("authorEmail=HAnim@web3D.org"), CString("copyright=none"), CString("creationDate=12 May 1999"), CString("usageRestrictions=none"), CString("humanoidVersion=2.0"), CString("height=1.7504")}, 7);
HAnimHumanoid45.setVersion(CString("1.0"));
HAnimJoint& HAnimJoint46 =  HAnimJoint();
HAnimJoint46.setDEF(CString("hanim_humanoid_root"));
HAnimJoint46.X3DNode::setName(CString("humanoid_root"));
HAnimJoint46.setCenter(new float[]{0.0,0.824,0.0277});
HAnimSegment& HAnimSegment47 =  HAnimSegment();
HAnimSegment47.setDEF(CString("hanim_sacrum"));
HAnimSegment47.X3DNode::setName(CString("sacrum"));
TouchSensor& TouchSensor48 =  TouchSensor();
TouchSensor48.setDescription(CString("HAnimJoint HumanoidRoot, HAnimSegment sacrum"));
HAnimSegment47.addChild(&TouchSensor48);

Transform& Transform49 =  Transform();
Transform49.setTranslation(new float[]{0.0,0.824,0.0277});
Shape& Shape50 =  Shape();
Shape50.setDEF(CString("HAnimJointShape"));
Appearance& Appearance51 =  Appearance();
Appearance51.setDEF(CString("HAnimJointAppearance"));
Material& Material52 =  Material();
Material52.setDiffuseColor(new float[]{1.0,0.5,0.0});
Material52.setTransparency(0.5);
Appearance51.addChild(&Material52);

Shape50.addChild(&Appearance51);

Sphere& Sphere53 =  Sphere();
Sphere53.setRadius(0.006);
Shape50.setGeometry(&Sphere53);

Transform49.addChild(&Shape50);

HAnimSegment47.addChild(&Transform49);

Shape& Shape54 =  Shape();
LineSet& LineSet55 =  LineSet();
LineSet55.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA56 =  ColorRGBA();
ColorRGBA56.setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA56.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
LineSet55.addChild(&ColorRGBA56);

Coordinate& Coordinate57 =  Coordinate();
Coordinate57.setPoint(new float[]{0.0,0.824,0.0277,0.0,0.9149,0.0016}, 6);
LineSet55.setCoord(Coordinate57);

Shape54.setGeometry(&LineSet55);

HAnimSegment47.addChild(&Shape54);

Shape& Shape58 =  Shape();
LineSet& LineSet59 =  LineSet();
LineSet59.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA60 =  ColorRGBA();
ColorRGBA60.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet59.addChild(&ColorRGBA60);

Coordinate& Coordinate61 =  Coordinate();
Coordinate61.setPoint(new float[]{0.0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
LineSet59.setCoord(Coordinate61);

Shape58.setGeometry(&LineSet59);

HAnimSegment47.addChild(&Shape58);

HAnimJoint46.addChildren(&HAnimSegment47);

HAnimJoint& HAnimJoint62 =  HAnimJoint();
HAnimJoint62.setDEF(CString("hanim_sacroiliac"));
HAnimJoint62.X3DNode::setName(CString("sacroiliac"));
HAnimJoint62.setCenter(new float[]{0.0,0.9149,0.0016});
HAnimSegment& HAnimSegment63 =  HAnimSegment();
HAnimSegment63.setDEF(CString("hanim_pelvis"));
HAnimSegment63.X3DNode::setName(CString("pelvis"));
TouchSensor& TouchSensor64 =  TouchSensor();
TouchSensor64.setDescription(CString("HAnimJoint sacroiliac, HAnimSegment pelvis"));
HAnimSegment63.addChild(&TouchSensor64);

Transform& Transform65 =  Transform();
Transform65.setTranslation(new float[]{0.0,0.9149,0.0016});
Shape& Shape66 =  Shape();
Shape66.setUSE(CString("HAnimJointShape"));
Transform65.addChild(&Shape66);

HAnimSegment63.addChild(&Transform65);

Shape& Shape67 =  Shape();
LineSet& LineSet68 =  LineSet();
LineSet68.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA69 =  ColorRGBA();
ColorRGBA69.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet68.addChild(&ColorRGBA69);

Coordinate& Coordinate70 =  Coordinate();
Coordinate70.setPoint(new float[]{0.0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
LineSet68.setCoord(Coordinate70);

Shape67.setGeometry(&LineSet68);

HAnimSegment63.addChild(&Shape67);

Shape& Shape71 =  Shape();
LineSet& LineSet72 =  LineSet();
LineSet72.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA73 =  ColorRGBA();
ColorRGBA73.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet72.addChild(&ColorRGBA73);

Coordinate& Coordinate74 =  Coordinate();
Coordinate74.setPoint(new float[]{0.0,0.9149,0.0016,-0.0961,0.9124,-0.0001}, 6);
LineSet72.setCoord(Coordinate74);

Shape71.setGeometry(&LineSet72);

HAnimSegment63.addChild(&Shape71);

Shape& Shape75 =  Shape();
LineSet& LineSet76 =  LineSet();
LineSet76.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA77 =  ColorRGBA();
ColorRGBA77.setDEF(CString("HAnimSiteLineColorRGBA"));
ColorRGBA77.setColor(new float[]{1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.1}, 8);
LineSet76.addChild(&ColorRGBA77);

Coordinate& Coordinate78 =  Coordinate();
Coordinate78.setPoint(new float[]{0.0,0.9149,0.0016,-0.1525,1.0628,0.0035}, 6);
LineSet76.setCoord(Coordinate78);

Shape75.setGeometry(&LineSet76);

HAnimSegment63.addChild(&Shape75);

Shape& Shape79 =  Shape();
LineSet& LineSet80 =  LineSet();
LineSet80.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA81 =  ColorRGBA();
ColorRGBA81.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet80.addChild(&ColorRGBA81);

Coordinate& Coordinate82 =  Coordinate();
Coordinate82.setPoint(new float[]{0.0,0.9149,0.0016,-0.1689,0.8419,0.0352}, 6);
LineSet80.setCoord(Coordinate82);

Shape79.setGeometry(&LineSet80);

HAnimSegment63.addChild(&Shape79);

Shape& Shape83 =  Shape();
LineSet& LineSet84 =  LineSet();
LineSet84.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA85 =  ColorRGBA();
ColorRGBA85.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet84.addChild(&ColorRGBA85);

Coordinate& Coordinate86 =  Coordinate();
Coordinate86.setPoint(new float[]{0.0,0.9149,0.0016,0.1612,1.0537,0.0008}, 6);
LineSet84.setCoord(Coordinate86);

Shape83.setGeometry(&LineSet84);

HAnimSegment63.addChild(&Shape83);

Shape& Shape87 =  Shape();
LineSet& LineSet88 =  LineSet();
LineSet88.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA89 =  ColorRGBA();
ColorRGBA89.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet88.addChild(&ColorRGBA89);

Coordinate& Coordinate90 =  Coordinate();
Coordinate90.setPoint(new float[]{0.0,0.9149,0.0016,0.1677,0.8336,0.0303}, 6);
LineSet88.setCoord(Coordinate90);

Shape87.setGeometry(&LineSet88);

HAnimSegment63.addChild(&Shape87);

Shape& Shape91 =  Shape();
LineSet& LineSet92 =  LineSet();
LineSet92.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA93 =  ColorRGBA();
ColorRGBA93.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet92.addChild(&ColorRGBA93);

Coordinate& Coordinate94 =  Coordinate();
Coordinate94.setPoint(new float[]{0.0,0.9149,0.0016,-0.0887,1.0021,0.1112}, 6);
LineSet92.setCoord(Coordinate94);

Shape91.setGeometry(&LineSet92);

HAnimSegment63.addChild(&Shape91);

Shape& Shape95 =  Shape();
LineSet& LineSet96 =  LineSet();
LineSet96.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA97 =  ColorRGBA();
ColorRGBA97.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet96.addChild(&ColorRGBA97);

Coordinate& Coordinate98 =  Coordinate();
Coordinate98.setPoint(new float[]{0.0,0.9149,0.0016,0.0925,0.9983,0.1052}, 6);
LineSet96.setCoord(Coordinate98);

Shape95.setGeometry(&LineSet96);

HAnimSegment63.addChild(&Shape95);

Shape& Shape99 =  Shape();
LineSet& LineSet100 =  LineSet();
LineSet100.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA101 =  ColorRGBA();
ColorRGBA101.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet100.addChild(&ColorRGBA101);

Coordinate& Coordinate102 =  Coordinate();
Coordinate102.setPoint(new float[]{0.0,0.9149,0.0016,-0.0716,1.019,-0.1138}, 6);
LineSet100.setCoord(Coordinate102);

Shape99.setGeometry(&LineSet100);

HAnimSegment63.addChild(&Shape99);

Shape& Shape103 =  Shape();
LineSet& LineSet104 =  LineSet();
LineSet104.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA105 =  ColorRGBA();
ColorRGBA105.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet104.addChild(&ColorRGBA105);

Coordinate& Coordinate106 =  Coordinate();
Coordinate106.setPoint(new float[]{0.0,0.9149,0.0016,0.0774,1.019,-0.1151}, 6);
LineSet104.setCoord(Coordinate106);

Shape103.setGeometry(&LineSet104);

HAnimSegment63.addChild(&Shape103);

Shape& Shape107 =  Shape();
LineSet& LineSet108 =  LineSet();
LineSet108.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA109 =  ColorRGBA();
ColorRGBA109.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet108.addChild(&ColorRGBA109);

Coordinate& Coordinate110 =  Coordinate();
Coordinate110.setPoint(new float[]{0.0,0.9149,0.0016,0.0034,0.8266,0.0257}, 6);
LineSet108.setCoord(Coordinate110);

Shape107.setGeometry(&LineSet108);

HAnimSegment63.addChild(&Shape107);

HAnimSite& HAnimSite111 =  HAnimSite();
HAnimSite111.setDEF(CString("hanim_r_iliocristale_pt"));
HAnimSite111.X3DNode::setName(CString("r_iliocristale_pt"));
HAnimSite111.setTranslation(new float[]{-0.1525,1.0628,0.0035});
TouchSensor& TouchSensor112 =  TouchSensor();
TouchSensor112.setDescription(CString("HAnimSite r_iliocristale"));
HAnimSite111.addChild(&TouchSensor112);

Shape& Shape113 =  Shape();
Shape113.setDEF(CString("HAnimSiteShape"));
Appearance& Appearance114 =  Appearance();
Material& Material115 =  Material();
Material115.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance114.addChild(&Material115);

Shape113.addChild(&Appearance114);

IndexedFaceSet& IndexedFaceSet116 =  IndexedFaceSet();
IndexedFaceSet116.setDEF(CString("DiamondIFS"));
IndexedFaceSet116.setSolid(false);
IndexedFaceSet116.setCreaseAngle(0.5);
IndexedFaceSet116.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate117 =  Coordinate();
Coordinate117.setPoint(new float[]{0.0,0.008,0.0,-0.008,0.0,0.0,0.0,0.0,0.008,0.008,0.0,0.0,0.0,0.0,-0.008,0.0,-0.008,0.0}, 18);
IndexedFaceSet116.setCoord(&Coordinate117);

Shape113.setGeometry(&IndexedFaceSet116);

HAnimSite111.addChild(&Shape113);

HAnimSegment63.addChild(&HAnimSite111);

HAnimSite& HAnimSite118 =  HAnimSite();
HAnimSite118.setDEF(CString("hanim_r_trochanterion_pt"));
HAnimSite118.X3DNode::setName(CString("r_trochanterion_pt"));
HAnimSite118.setTranslation(new float[]{-0.1689,0.8419,0.0352});
TouchSensor& TouchSensor119 =  TouchSensor();
TouchSensor119.setDescription(CString("HAnimSite r_trochanterion"));
HAnimSite118.addChild(&TouchSensor119);

Shape& Shape120 =  Shape();
Shape120.setUSE(CString("HAnimSiteShape"));
HAnimSite118.addChild(&Shape120);

HAnimSegment63.addChild(&HAnimSite118);

HAnimSite& HAnimSite121 =  HAnimSite();
HAnimSite121.setDEF(CString("hanim_l_iliocristale_pt"));
HAnimSite121.X3DNode::setName(CString("l_iliocristale_pt"));
HAnimSite121.setTranslation(new float[]{0.1612,1.0537,0.0008});
TouchSensor& TouchSensor122 =  TouchSensor();
TouchSensor122.setDescription(CString("HAnimSite l_iliocristale"));
HAnimSite121.addChild(&TouchSensor122);

Shape& Shape123 =  Shape();
Shape123.setUSE(CString("HAnimSiteShape"));
HAnimSite121.addChild(&Shape123);

HAnimSegment63.addChild(&HAnimSite121);

HAnimSite& HAnimSite124 =  HAnimSite();
HAnimSite124.setDEF(CString("hanim_l_trochanterion_pt"));
HAnimSite124.X3DNode::setName(CString("l_trochanterion_pt"));
HAnimSite124.setTranslation(new float[]{0.1677,0.8336,0.0303});
TouchSensor& TouchSensor125 =  TouchSensor();
TouchSensor125.setDescription(CString("HAnimSite l_trochanterion"));
HAnimSite124.addChild(&TouchSensor125);

Shape& Shape126 =  Shape();
Shape126.setUSE(CString("HAnimSiteShape"));
HAnimSite124.addChild(&Shape126);

HAnimSegment63.addChild(&HAnimSite124);

HAnimSite& HAnimSite127 =  HAnimSite();
HAnimSite127.setDEF(CString("hanim_r_asis_pt"));
HAnimSite127.X3DNode::setName(CString("r_asis_pt"));
HAnimSite127.setTranslation(new float[]{-0.0887,1.0021,0.1112});
TouchSensor& TouchSensor128 =  TouchSensor();
TouchSensor128.setDescription(CString("HAnimSite r_asis"));
HAnimSite127.addChild(&TouchSensor128);

Shape& Shape129 =  Shape();
Shape129.setUSE(CString("HAnimSiteShape"));
HAnimSite127.addChild(&Shape129);

HAnimSegment63.addChild(&HAnimSite127);

HAnimSite& HAnimSite130 =  HAnimSite();
HAnimSite130.setDEF(CString("hanim_l_asis_pt"));
HAnimSite130.X3DNode::setName(CString("l_asis_pt"));
HAnimSite130.setTranslation(new float[]{0.0925,0.9983,0.1052});
TouchSensor& TouchSensor131 =  TouchSensor();
TouchSensor131.setDescription(CString("HAnimSite l_asis"));
HAnimSite130.addChild(&TouchSensor131);

Shape& Shape132 =  Shape();
Shape132.setUSE(CString("HAnimSiteShape"));
HAnimSite130.addChild(&Shape132);

HAnimSegment63.addChild(&HAnimSite130);

HAnimSite& HAnimSite133 =  HAnimSite();
HAnimSite133.setDEF(CString("hanim_r_psis_pt"));
HAnimSite133.X3DNode::setName(CString("r_psis_pt"));
HAnimSite133.setTranslation(new float[]{-0.0716,1.019,-0.1138});
TouchSensor& TouchSensor134 =  TouchSensor();
TouchSensor134.setDescription(CString("HAnimSite r_psis"));
HAnimSite133.addChild(&TouchSensor134);

Shape& Shape135 =  Shape();
Shape135.setUSE(CString("HAnimSiteShape"));
HAnimSite133.addChild(&Shape135);

HAnimSegment63.addChild(&HAnimSite133);

HAnimSite& HAnimSite136 =  HAnimSite();
HAnimSite136.setDEF(CString("hanim_l_psis_pt"));
HAnimSite136.X3DNode::setName(CString("l_psis_pt"));
HAnimSite136.setTranslation(new float[]{0.0774,1.019,-0.1151});
TouchSensor& TouchSensor137 =  TouchSensor();
TouchSensor137.setDescription(CString("HAnimSite l_psis"));
HAnimSite136.addChild(&TouchSensor137);

Shape& Shape138 =  Shape();
Shape138.setUSE(CString("HAnimSiteShape"));
HAnimSite136.addChild(&Shape138);

HAnimSegment63.addChild(&HAnimSite136);

HAnimSite& HAnimSite139 =  HAnimSite();
HAnimSite139.setDEF(CString("hanim_crotch_pt"));
HAnimSite139.X3DNode::setName(CString("crotch_pt"));
HAnimSite139.setTranslation(new float[]{0.0034,0.8266,0.0257});
TouchSensor& TouchSensor140 =  TouchSensor();
TouchSensor140.setDescription(CString("HAnimSite crotch"));
HAnimSite139.addChild(&TouchSensor140);

Shape& Shape141 =  Shape();
Shape141.setUSE(CString("HAnimSiteShape"));
HAnimSite139.addChild(&Shape141);

HAnimSegment63.addChild(&HAnimSite139);

HAnimJoint62.addChildren(&HAnimSegment63);

HAnimJoint& HAnimJoint142 =  HAnimJoint();
HAnimJoint142.setDEF(CString("hanim_l_hip"));
HAnimJoint142.X3DNode::setName(CString("l_hip"));
HAnimJoint142.setCenter(new float[]{0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment143 =  HAnimSegment();
HAnimSegment143.setDEF(CString("hanim_l_thigh"));
HAnimSegment143.X3DNode::setName(CString("l_thigh"));
TouchSensor& TouchSensor144 =  TouchSensor();
TouchSensor144.setDescription(CString("HAnimJoint l_hip, HAnimSegment l_thigh"));
HAnimSegment143.addChild(&TouchSensor144);

Transform& Transform145 =  Transform();
Transform145.setTranslation(new float[]{0.0961,0.9124,-0.0001});
Shape& Shape146 =  Shape();
Shape146.setUSE(CString("HAnimJointShape"));
Transform145.addChild(&Shape146);

HAnimSegment143.addChild(&Transform145);

Shape& Shape147 =  Shape();
LineSet& LineSet148 =  LineSet();
LineSet148.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA149 =  ColorRGBA();
ColorRGBA149.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet148.addChild(&ColorRGBA149);

Coordinate& Coordinate150 =  Coordinate();
Coordinate150.setPoint(new float[]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
LineSet148.setCoord(Coordinate150);

Shape147.setGeometry(&LineSet148);

HAnimSegment143.addChild(&Shape147);

Shape& Shape151 =  Shape();
LineSet& LineSet152 =  LineSet();
LineSet152.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA153 =  ColorRGBA();
ColorRGBA153.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet152.addChild(&ColorRGBA153);

Coordinate& Coordinate154 =  Coordinate();
Coordinate154.setPoint(new float[]{0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309}, 6);
LineSet152.setCoord(Coordinate154);

Shape151.setGeometry(&LineSet152);

HAnimSegment143.addChild(&Shape151);

Shape& Shape155 =  Shape();
LineSet& LineSet156 =  LineSet();
LineSet156.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA157 =  ColorRGBA();
ColorRGBA157.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet156.addChild(&ColorRGBA157);

Coordinate& Coordinate158 =  Coordinate();
Coordinate158.setPoint(new float[]{0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297}, 6);
LineSet156.setCoord(Coordinate158);

Shape155.setGeometry(&LineSet156);

HAnimSegment143.addChild(&Shape155);

Shape& Shape159 =  Shape();
LineSet& LineSet160 =  LineSet();
LineSet160.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA161 =  ColorRGBA();
ColorRGBA161.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet160.addChild(&ColorRGBA161);

Coordinate& Coordinate162 =  Coordinate();
Coordinate162.setPoint(new float[]{0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303}, 6);
LineSet160.setCoord(Coordinate162);

Shape159.setGeometry(&LineSet160);

HAnimSegment143.addChild(&Shape159);

HAnimSite& HAnimSite163 =  HAnimSite();
HAnimSite163.setDEF(CString("hanim_l_knee_crease_pt"));
HAnimSite163.X3DNode::setName(CString("l_knee_crease_pt"));
HAnimSite163.setTranslation(new float[]{0.0993,0.4881,-0.0309});
TouchSensor& TouchSensor164 =  TouchSensor();
TouchSensor164.setDescription(CString("HAnimSite l_knee_crease"));
HAnimSite163.addChild(&TouchSensor164);

Shape& Shape165 =  Shape();
Shape165.setUSE(CString("HAnimSiteShape"));
HAnimSite163.addChild(&Shape165);

HAnimSegment143.addChild(&HAnimSite163);

HAnimSite& HAnimSite166 =  HAnimSite();
HAnimSite166.setDEF(CString("hanim_l_femoral_lateral_epicn_pt"));
HAnimSite166.X3DNode::setName(CString("l_femoral_lateral_epicn_pt"));
HAnimSite166.setTranslation(new float[]{0.1598,0.4967,0.0297});
TouchSensor& TouchSensor167 =  TouchSensor();
TouchSensor167.setDescription(CString("HAnimSite l_femoral_lateral_epicn"));
HAnimSite166.addChild(&TouchSensor167);

Shape& Shape168 =  Shape();
Shape168.setUSE(CString("HAnimSiteShape"));
HAnimSite166.addChild(&Shape168);

HAnimSegment143.addChild(&HAnimSite166);

HAnimSite& HAnimSite169 =  HAnimSite();
HAnimSite169.setDEF(CString("hanim_l_femoral_medial_epicn_pt"));
HAnimSite169.X3DNode::setName(CString("l_femoral_medial_epicn_pt"));
HAnimSite169.setTranslation(new float[]{0.0398,0.4946,0.0303});
TouchSensor& TouchSensor170 =  TouchSensor();
TouchSensor170.setDescription(CString("HAnimSite l_femoral_medial_epicn"));
HAnimSite169.addChild(&TouchSensor170);

Shape& Shape171 =  Shape();
Shape171.setUSE(CString("HAnimSiteShape"));
HAnimSite169.addChild(&Shape171);

HAnimSegment143.addChild(&HAnimSite169);

HAnimJoint142.addChildren(&HAnimSegment143);

HAnimJoint& HAnimJoint172 =  HAnimJoint();
HAnimJoint172.setDEF(CString("hanim_l_knee"));
HAnimJoint172.X3DNode::setName(CString("l_knee"));
HAnimJoint172.setCenter(new float[]{0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment173 =  HAnimSegment();
HAnimSegment173.setDEF(CString("hanim_l_calf"));
HAnimSegment173.X3DNode::setName(CString("l_calf"));
TouchSensor& TouchSensor174 =  TouchSensor();
TouchSensor174.setDescription(CString("HAnimJoint l_knee, HAnimSegment l_calf"));
HAnimSegment173.addChild(&TouchSensor174);

Transform& Transform175 =  Transform();
Transform175.setTranslation(new float[]{0.104,0.4867,0.0308});
Shape& Shape176 =  Shape();
Shape176.setUSE(CString("HAnimJointShape"));
Transform175.addChild(&Shape176);

HAnimSegment173.addChild(&Transform175);

Shape& Shape177 =  Shape();
LineSet& LineSet178 =  LineSet();
LineSet178.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA179 =  ColorRGBA();
ColorRGBA179.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet178.addChild(&ColorRGBA179);

Coordinate& Coordinate180 =  Coordinate();
Coordinate180.setPoint(new float[]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
LineSet178.setCoord(Coordinate180);

Shape177.setGeometry(&LineSet178);

HAnimSegment173.addChild(&Shape177);

HAnimJoint172.addChildren(&HAnimSegment173);

HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.setDEF(CString("hanim_l_ankle"));
HAnimJoint181.X3DNode::setName(CString("l_ankle"));
HAnimJoint181.setCenter(new float[]{0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment182 =  HAnimSegment();
HAnimSegment182.setDEF(CString("hanim_l_hindfoot"));
HAnimSegment182.X3DNode::setName(CString("l_hindfoot"));
TouchSensor& TouchSensor183 =  TouchSensor();
TouchSensor183.setDescription(CString("HAnimJoint l_ankle, HAnimSegment l_hindfoot"));
HAnimSegment182.addChild(&TouchSensor183);

Transform& Transform184 =  Transform();
Transform184.setTranslation(new float[]{0.1101,0.0656,-0.0736});
Shape& Shape185 =  Shape();
Shape185.setUSE(CString("HAnimJointShape"));
Transform184.addChild(&Shape185);

HAnimSegment182.addChild(&Transform184);

Shape& Shape186 =  Shape();
LineSet& LineSet187 =  LineSet();
LineSet187.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA188 =  ColorRGBA();
ColorRGBA188.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet187.addChild(&ColorRGBA188);

Coordinate& Coordinate189 =  Coordinate();
Coordinate189.setPoint(new float[]{0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368}, 6);
LineSet187.setCoord(Coordinate189);

Shape186.setGeometry(&LineSet187);

HAnimSegment182.addChild(&Shape186);

Shape& Shape190 =  Shape();
LineSet& LineSet191 =  LineSet();
LineSet191.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA192 =  ColorRGBA();
ColorRGBA192.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet191.addChild(&ColorRGBA192);

Coordinate& Coordinate193 =  Coordinate();
Coordinate193.setPoint(new float[]{0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032}, 6);
LineSet191.setCoord(Coordinate193);

Shape190.setGeometry(&LineSet191);

HAnimSegment182.addChild(&Shape190);

Shape& Shape194 =  Shape();
LineSet& LineSet195 =  LineSet();
LineSet195.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA196 =  ColorRGBA();
ColorRGBA196.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet195.addChild(&ColorRGBA196);

Coordinate& Coordinate197 =  Coordinate();
Coordinate197.setPoint(new float[]{0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881}, 6);
LineSet195.setCoord(Coordinate197);

Shape194.setGeometry(&LineSet195);

HAnimSegment182.addChild(&Shape194);

Shape& Shape198 =  Shape();
LineSet& LineSet199 =  LineSet();
LineSet199.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA200 =  ColorRGBA();
ColorRGBA200.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet199.addChild(&ColorRGBA200);

Coordinate& Coordinate201 =  Coordinate();
Coordinate201.setPoint(new float[]{0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943}, 6);
LineSet199.setCoord(Coordinate201);

Shape198.setGeometry(&LineSet199);

HAnimSegment182.addChild(&Shape198);

Shape& Shape202 =  Shape();
LineSet& LineSet203 =  LineSet();
LineSet203.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA204 =  ColorRGBA();
ColorRGBA204.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet203.addChild(&ColorRGBA204);

Coordinate& Coordinate205 =  Coordinate();
Coordinate205.setPoint(new float[]{0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171}, 6);
LineSet203.setCoord(Coordinate205);

Shape202.setGeometry(&LineSet203);

HAnimSegment182.addChild(&Shape202);

HAnimSite& HAnimSite206 =  HAnimSite();
HAnimSite206.setDEF(CString("hanim_l_lateral_malleolus_pt"));
HAnimSite206.X3DNode::setName(CString("l_lateral_malleolus_pt"));
HAnimSite206.setTranslation(new float[]{0.1308,0.0597,-0.1032});
TouchSensor& TouchSensor207 =  TouchSensor();
TouchSensor207.setDescription(CString("HAnimSite l_lateral_malleolus"));
HAnimSite206.addChild(&TouchSensor207);

Shape& Shape208 =  Shape();
Shape208.setUSE(CString("HAnimSiteShape"));
HAnimSite206.addChild(&Shape208);

HAnimSegment182.addChild(&HAnimSite206);

HAnimSite& HAnimSite209 =  HAnimSite();
HAnimSite209.setDEF(CString("hanim_l_medial_malleolus_pt"));
HAnimSite209.X3DNode::setName(CString("l_medial_malleolus_pt"));
HAnimSite209.setTranslation(new float[]{0.089,0.0716,-0.0881});
TouchSensor& TouchSensor210 =  TouchSensor();
TouchSensor210.setDescription(CString("HAnimSite l_medial_malleolus"));
HAnimSite209.addChild(&TouchSensor210);

Shape& Shape211 =  Shape();
Shape211.setUSE(CString("HAnimSiteShape"));
HAnimSite209.addChild(&Shape211);

HAnimSegment182.addChild(&HAnimSite209);

HAnimSite& HAnimSite212 =  HAnimSite();
HAnimSite212.setDEF(CString("hanim_l_sphyrion_pt"));
HAnimSite212.X3DNode::setName(CString("l_sphyrion_pt"));
HAnimSite212.setTranslation(new float[]{0.089,0.0575,-0.0943});
TouchSensor& TouchSensor213 =  TouchSensor();
TouchSensor213.setDescription(CString("HAnimSite l_sphyrion"));
HAnimSite212.addChild(&TouchSensor213);

Shape& Shape214 =  Shape();
Shape214.setUSE(CString("HAnimSiteShape"));
HAnimSite212.addChild(&Shape214);

HAnimSegment182.addChild(&HAnimSite212);

HAnimSite& HAnimSite215 =  HAnimSite();
HAnimSite215.setDEF(CString("hanim_l_calcaneous_post_pt"));
HAnimSite215.X3DNode::setName(CString("l_calcaneous_post_pt"));
HAnimSite215.setTranslation(new float[]{0.0974,0.0259,-0.1171});
TouchSensor& TouchSensor216 =  TouchSensor();
TouchSensor216.setDescription(CString("HAnimSite l_calcaneous_post"));
HAnimSite215.addChild(&TouchSensor216);

Shape& Shape217 =  Shape();
Shape217.setUSE(CString("HAnimSiteShape"));
HAnimSite215.addChild(&Shape217);

HAnimSegment182.addChild(&HAnimSite215);

HAnimJoint181.addChildren(&HAnimSegment182);

HAnimJoint& HAnimJoint218 =  HAnimJoint();
HAnimJoint218.setDEF(CString("hanim_l_subtalar"));
HAnimJoint218.X3DNode::setName(CString("l_subtalar"));
HAnimJoint218.setCenter(new float[]{0.1086,0.0001,-0.0368});
HAnimSegment& HAnimSegment219 =  HAnimSegment();
HAnimSegment219.setDEF(CString("hanim_l_midproximal"));
HAnimSegment219.X3DNode::setName(CString("l_midproximal"));
TouchSensor& TouchSensor220 =  TouchSensor();
TouchSensor220.setDescription(CString("HAnimJoint l_subtalar, HAnimSegment l_midproximal"));
HAnimSegment219.addChild(&TouchSensor220);

Transform& Transform221 =  Transform();
Transform221.setTranslation(new float[]{0.1086,0.0001,-0.0368});
Shape& Shape222 =  Shape();
Shape222.setUSE(CString("HAnimJointShape"));
Transform221.addChild(&Shape222);

HAnimSegment219.addChild(&Transform221);

Shape& Shape223 =  Shape();
LineSet& LineSet224 =  LineSet();
LineSet224.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA225 =  ColorRGBA();
ColorRGBA225.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet224.addChild(&ColorRGBA225);

Coordinate& Coordinate226 =  Coordinate();
Coordinate226.setPoint(new float[]{0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368}, 6);
LineSet224.setCoord(Coordinate226);

Shape223.setGeometry(&LineSet224);

HAnimSegment219.addChild(&Shape223);

HAnimJoint218.addChildren(&HAnimSegment219);

HAnimJoint& HAnimJoint227 =  HAnimJoint();
HAnimJoint227.setDEF(CString("hanim_l_midtarsal"));
HAnimJoint227.X3DNode::setName(CString("l_midtarsal"));
HAnimJoint227.setCenter(new float[]{0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment228 =  HAnimSegment();
HAnimSegment228.setDEF(CString("hanim_l_middistal"));
HAnimSegment228.X3DNode::setName(CString("l_middistal"));
TouchSensor& TouchSensor229 =  TouchSensor();
TouchSensor229.setDescription(CString("HAnimJoint l_midtarsal, HAnimSegment l_middistal"));
HAnimSegment228.addChild(&TouchSensor229);

Transform& Transform230 =  Transform();
Transform230.setTranslation(new float[]{0.1086,0.0001,0.0368});
Shape& Shape231 =  Shape();
Shape231.setUSE(CString("HAnimJointShape"));
Transform230.addChild(&Shape231);

HAnimSegment228.addChild(&Transform230);

Shape& Shape232 =  Shape();
LineSet& LineSet233 =  LineSet();
LineSet233.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA234 =  ColorRGBA();
ColorRGBA234.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet233.addChild(&ColorRGBA234);

Coordinate& Coordinate235 =  Coordinate();
Coordinate235.setPoint(new float[]{0.1086,0.0001,0.0368,0.1086,0.0,0.0762}, 6);
LineSet233.setCoord(Coordinate235);

Shape232.setGeometry(&LineSet233);

HAnimSegment228.addChild(&Shape232);

Shape& Shape236 =  Shape();
LineSet& LineSet237 =  LineSet();
LineSet237.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA238 =  ColorRGBA();
ColorRGBA238.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet237.addChild(&ColorRGBA238);

Coordinate& Coordinate239 =  Coordinate();
Coordinate239.setPoint(new float[]{0.1086,0.0001,0.0368,0.0816,0.0232,0.0106}, 6);
LineSet237.setCoord(Coordinate239);

Shape236.setGeometry(&LineSet237);

HAnimSegment228.addChild(&Shape236);

HAnimSite& HAnimSite240 =  HAnimSite();
HAnimSite240.setDEF(CString("hanim_l_metatarsal_pha1_pt"));
HAnimSite240.X3DNode::setName(CString("l_metatarsal_pha1_pt"));
HAnimSite240.setTranslation(new float[]{0.0816,0.0232,0.0106});
TouchSensor& TouchSensor241 =  TouchSensor();
TouchSensor241.setDescription(CString("HAnimSite l_metatarsal_pha1"));
HAnimSite240.addChild(&TouchSensor241);

Shape& Shape242 =  Shape();
Shape242.setUSE(CString("HAnimSiteShape"));
HAnimSite240.addChild(&Shape242);

HAnimSegment228.addChild(&HAnimSite240);

HAnimJoint227.addChildren(&HAnimSegment228);

HAnimJoint& HAnimJoint243 =  HAnimJoint();
HAnimJoint243.setDEF(CString("hanim_l_metatarsal"));
HAnimJoint243.X3DNode::setName(CString("l_metatarsal"));
HAnimJoint243.setCenter(new float[]{0.1086,0.0,0.0762});
HAnimSegment& HAnimSegment244 =  HAnimSegment();
HAnimSegment244.setDEF(CString("hanim_l_forefoot"));
HAnimSegment244.X3DNode::setName(CString("l_forefoot"));
TouchSensor& TouchSensor245 =  TouchSensor();
TouchSensor245.setDescription(CString("HAnimJoint l_metatarsal, HAnimSegment l_forefoot"));
HAnimSegment244.addChild(&TouchSensor245);

Transform& Transform246 =  Transform();
Transform246.setTranslation(new float[]{0.1086,0.0,0.0762});
Shape& Shape247 =  Shape();
Shape247.setUSE(CString("HAnimJointShape"));
Transform246.addChild(&Shape247);

HAnimSegment244.addChild(&Transform246);

Shape& Shape248 =  Shape();
LineSet& LineSet249 =  LineSet();
LineSet249.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA250 =  ColorRGBA();
ColorRGBA250.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet249.addChild(&ColorRGBA250);

Coordinate& Coordinate251 =  Coordinate();
Coordinate251.setPoint(new float[]{0.1086,0.0,0.0762,0.1354,0.0016,0.1476}, 6);
LineSet249.setCoord(Coordinate251);

Shape248.setGeometry(&LineSet249);

HAnimSegment244.addChild(&Shape248);

Shape& Shape252 =  Shape();
LineSet& LineSet253 =  LineSet();
LineSet253.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA254 =  ColorRGBA();
ColorRGBA254.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet253.addChild(&ColorRGBA254);

Coordinate& Coordinate255 =  Coordinate();
Coordinate255.setPoint(new float[]{0.1086,0.0,0.0762,0.1825,0.007,0.0928}, 6);
LineSet253.setCoord(Coordinate255);

Shape252.setGeometry(&LineSet253);

HAnimSegment244.addChild(&Shape252);

Shape& Shape256 =  Shape();
LineSet& LineSet257 =  LineSet();
LineSet257.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA258 =  ColorRGBA();
ColorRGBA258.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet257.addChild(&ColorRGBA258);

Coordinate& Coordinate259 =  Coordinate();
Coordinate259.setPoint(new float[]{0.1086,0.0,0.0762,0.1195,0.0079,0.1433}, 6);
LineSet257.setCoord(Coordinate259);

Shape256.setGeometry(&LineSet257);

HAnimSegment244.addChild(&Shape256);

HAnimSite& HAnimSite260 =  HAnimSite();
HAnimSite260.setDEF(CString("hanim_l_forefoot_tip"));
HAnimSite260.X3DNode::setName(CString("l_forefoot_tip"));
HAnimSite260.setTranslation(new float[]{0.1354,0.0016,0.1476});
TouchSensor& TouchSensor261 =  TouchSensor();
TouchSensor261.setDescription(CString("HAnimSite l_forefoot_tip"));
HAnimSite260.addChild(&TouchSensor261);

Shape& Shape262 =  Shape();
Shape262.setUSE(CString("HAnimSiteShape"));
HAnimSite260.addChild(&Shape262);

HAnimSegment244.addChild(&HAnimSite260);

HAnimSite& HAnimSite263 =  HAnimSite();
HAnimSite263.setDEF(CString("hanim_l_metatarsal_pha5_pt"));
HAnimSite263.X3DNode::setName(CString("l_metatarsal_pha5_pt"));
HAnimSite263.setTranslation(new float[]{0.1825,0.007,0.0928});
TouchSensor& TouchSensor264 =  TouchSensor();
TouchSensor264.setDescription(CString("HAnimSite l_metatarsal_pha5"));
HAnimSite263.addChild(&TouchSensor264);

Shape& Shape265 =  Shape();
Shape265.setUSE(CString("HAnimSiteShape"));
HAnimSite263.addChild(&Shape265);

HAnimSegment244.addChild(&HAnimSite263);

HAnimSite& HAnimSite266 =  HAnimSite();
HAnimSite266.setDEF(CString("hanim_l_digit2_pt"));
HAnimSite266.X3DNode::setName(CString("l_digit2_pt"));
HAnimSite266.setTranslation(new float[]{0.1195,0.0079,0.1433});
TouchSensor& TouchSensor267 =  TouchSensor();
TouchSensor267.setDescription(CString("HAnimSite l_digit2"));
HAnimSite266.addChild(&TouchSensor267);

Shape& Shape268 =  Shape();
Shape268.setUSE(CString("HAnimSiteShape"));
HAnimSite266.addChild(&Shape268);

HAnimSegment244.addChild(&HAnimSite266);

HAnimJoint243.addChildren(&HAnimSegment244);

HAnimJoint227.addChildren(&HAnimJoint243);

HAnimJoint218.addChildren(&HAnimJoint227);

HAnimJoint181.addChildren(&HAnimJoint218);

HAnimJoint172.addChildren(&HAnimJoint181);

HAnimJoint142.addChildren(&HAnimJoint172);

HAnimJoint62.addChildren(&HAnimJoint142);

HAnimJoint& HAnimJoint269 =  HAnimJoint();
HAnimJoint269.setDEF(CString("hanim_r_hip"));
HAnimJoint269.X3DNode::setName(CString("r_hip"));
HAnimJoint269.setCenter(new float[]{-0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment270 =  HAnimSegment();
HAnimSegment270.setDEF(CString("hanim_r_thigh"));
HAnimSegment270.X3DNode::setName(CString("r_thigh"));
TouchSensor& TouchSensor271 =  TouchSensor();
TouchSensor271.setDescription(CString("HAnimJoint r_hip, HAnimSegment r_thigh"));
HAnimSegment270.addChild(&TouchSensor271);

Transform& Transform272 =  Transform();
Transform272.setTranslation(new float[]{-0.0961,0.9124,-0.0001});
Shape& Shape273 =  Shape();
Shape273.setUSE(CString("HAnimJointShape"));
Transform272.addChild(&Shape273);

HAnimSegment270.addChild(&Transform272);

Shape& Shape274 =  Shape();
LineSet& LineSet275 =  LineSet();
LineSet275.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA276 =  ColorRGBA();
ColorRGBA276.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet275.addChild(&ColorRGBA276);

Coordinate& Coordinate277 =  Coordinate();
Coordinate277.setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308}, 6);
LineSet275.setCoord(Coordinate277);

Shape274.setGeometry(&LineSet275);

HAnimSegment270.addChild(&Shape274);

Shape& Shape278 =  Shape();
LineSet& LineSet279 =  LineSet();
LineSet279.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA280 =  ColorRGBA();
ColorRGBA280.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet279.addChild(&ColorRGBA280);

Coordinate& Coordinate281 =  Coordinate();
Coordinate281.setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326}, 6);
LineSet279.setCoord(Coordinate281);

Shape278.setGeometry(&LineSet279);

HAnimSegment270.addChild(&Shape278);

Shape& Shape282 =  Shape();
LineSet& LineSet283 =  LineSet();
LineSet283.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA284 =  ColorRGBA();
ColorRGBA284.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet283.addChild(&ColorRGBA284);

Coordinate& Coordinate285 =  Coordinate();
Coordinate285.setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031}, 6);
LineSet283.setCoord(Coordinate285);

Shape282.setGeometry(&LineSet283);

HAnimSegment270.addChild(&Shape282);

Shape& Shape286 =  Shape();
LineSet& LineSet287 =  LineSet();
LineSet287.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA288 =  ColorRGBA();
ColorRGBA288.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet287.addChild(&ColorRGBA288);

Coordinate& Coordinate289 =  Coordinate();
Coordinate289.setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289}, 6);
LineSet287.setCoord(Coordinate289);

Shape286.setGeometry(&LineSet287);

HAnimSegment270.addChild(&Shape286);

HAnimSite& HAnimSite290 =  HAnimSite();
HAnimSite290.setDEF(CString("hanim_r_knee_crease_pt"));
HAnimSite290.X3DNode::setName(CString("r_knee_crease_pt"));
HAnimSite290.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
TouchSensor& TouchSensor291 =  TouchSensor();
TouchSensor291.setDescription(CString("HAnimSite r_knee_crease"));
HAnimSite290.addChild(&TouchSensor291);

Shape& Shape292 =  Shape();
Shape292.setUSE(CString("HAnimSiteShape"));
HAnimSite290.addChild(&Shape292);

HAnimSegment270.addChild(&HAnimSite290);

HAnimSite& HAnimSite293 =  HAnimSite();
HAnimSite293.setDEF(CString("hanim_r_femoral_lateral_epicn_pt"));
HAnimSite293.X3DNode::setName(CString("r_femoral_lateral_epicn_pt"));
HAnimSite293.setTranslation(new float[]{-0.1421,0.4992,0.031});
TouchSensor& TouchSensor294 =  TouchSensor();
TouchSensor294.setDescription(CString("HAnimSite r_femoral_lateral_epicn"));
HAnimSite293.addChild(&TouchSensor294);

Shape& Shape295 =  Shape();
Shape295.setUSE(CString("HAnimSiteShape"));
HAnimSite293.addChild(&Shape295);

HAnimSegment270.addChild(&HAnimSite293);

HAnimSite& HAnimSite296 =  HAnimSite();
HAnimSite296.setDEF(CString("hanim_r_femoral_medial_epicn_pt"));
HAnimSite296.X3DNode::setName(CString("r_femoral_medial_epicn_pt"));
HAnimSite296.setTranslation(new float[]{-0.0221,0.5014,0.0289});
TouchSensor& TouchSensor297 =  TouchSensor();
TouchSensor297.setDescription(CString("HAnimSite r_femoral_medial_epicn"));
HAnimSite296.addChild(&TouchSensor297);

Shape& Shape298 =  Shape();
Shape298.setUSE(CString("HAnimSiteShape"));
HAnimSite296.addChild(&Shape298);

HAnimSegment270.addChild(&HAnimSite296);

HAnimJoint269.addChildren(&HAnimSegment270);

HAnimJoint& HAnimJoint299 =  HAnimJoint();
HAnimJoint299.setDEF(CString("hanim_r_knee"));
HAnimJoint299.X3DNode::setName(CString("r_knee"));
HAnimJoint299.setCenter(new float[]{-0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment300 =  HAnimSegment();
HAnimSegment300.setDEF(CString("hanim_r_calf"));
HAnimSegment300.X3DNode::setName(CString("r_calf"));
TouchSensor& TouchSensor301 =  TouchSensor();
TouchSensor301.setDescription(CString("HAnimJoint r_knee, HAnimSegment r_calf"));
HAnimSegment300.addChild(&TouchSensor301);

Transform& Transform302 =  Transform();
Transform302.setTranslation(new float[]{-0.104,0.4867,0.0308});
Shape& Shape303 =  Shape();
Shape303.setUSE(CString("HAnimJointShape"));
Transform302.addChild(&Shape303);

HAnimSegment300.addChild(&Transform302);

Shape& Shape304 =  Shape();
LineSet& LineSet305 =  LineSet();
LineSet305.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA306 =  ColorRGBA();
ColorRGBA306.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet305.addChild(&ColorRGBA306);

Coordinate& Coordinate307 =  Coordinate();
Coordinate307.setPoint(new float[]{-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736}, 6);
LineSet305.setCoord(Coordinate307);

Shape304.setGeometry(&LineSet305);

HAnimSegment300.addChild(&Shape304);

HAnimJoint299.addChildren(&HAnimSegment300);

HAnimJoint& HAnimJoint308 =  HAnimJoint();
HAnimJoint308.setDEF(CString("hanim_r_ankle"));
HAnimJoint308.X3DNode::setName(CString("r_ankle"));
HAnimJoint308.setCenter(new float[]{-0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment309 =  HAnimSegment();
HAnimSegment309.setDEF(CString("hanim_r_hindfoot"));
HAnimSegment309.X3DNode::setName(CString("r_hindfoot"));
TouchSensor& TouchSensor310 =  TouchSensor();
TouchSensor310.setDescription(CString("HAnimJoint r_ankle, HAnimSegment r_hindfoot"));
HAnimSegment309.addChild(&TouchSensor310);

Transform& Transform311 =  Transform();
Transform311.setTranslation(new float[]{-0.1101,0.0656,-0.0736});
Shape& Shape312 =  Shape();
Shape312.setUSE(CString("HAnimJointShape"));
Transform311.addChild(&Shape312);

HAnimSegment309.addChild(&Transform311);

Shape& Shape313 =  Shape();
LineSet& LineSet314 =  LineSet();
LineSet314.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA315 =  ColorRGBA();
ColorRGBA315.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet314.addChild(&ColorRGBA315);

Coordinate& Coordinate316 =  Coordinate();
Coordinate316.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368}, 6);
LineSet314.setCoord(Coordinate316);

Shape313.setGeometry(&LineSet314);

HAnimSegment309.addChild(&Shape313);

Shape& Shape317 =  Shape();
LineSet& LineSet318 =  LineSet();
LineSet318.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA319 =  ColorRGBA();
ColorRGBA319.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet318.addChild(&ColorRGBA319);

Coordinate& Coordinate320 =  Coordinate();
Coordinate320.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075}, 6);
LineSet318.setCoord(Coordinate320);

Shape317.setGeometry(&LineSet318);

HAnimSegment309.addChild(&Shape317);

Shape& Shape321 =  Shape();
LineSet& LineSet322 =  LineSet();
LineSet322.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA323 =  ColorRGBA();
ColorRGBA323.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet322.addChild(&ColorRGBA323);

Coordinate& Coordinate324 =  Coordinate();
Coordinate324.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928}, 6);
LineSet322.setCoord(Coordinate324);

Shape321.setGeometry(&LineSet322);

HAnimSegment309.addChild(&Shape321);

Shape& Shape325 =  Shape();
LineSet& LineSet326 =  LineSet();
LineSet326.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA327 =  ColorRGBA();
ColorRGBA327.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet326.addChild(&ColorRGBA327);

Coordinate& Coordinate328 =  Coordinate();
Coordinate328.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002}, 6);
LineSet326.setCoord(Coordinate328);

Shape325.setGeometry(&LineSet326);

HAnimSegment309.addChild(&Shape325);

Shape& Shape329 =  Shape();
LineSet& LineSet330 =  LineSet();
LineSet330.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA331 =  ColorRGBA();
ColorRGBA331.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet330.addChild(&ColorRGBA331);

Coordinate& Coordinate332 =  Coordinate();
Coordinate332.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221}, 6);
LineSet330.setCoord(Coordinate332);

Shape329.setGeometry(&LineSet330);

HAnimSegment309.addChild(&Shape329);

HAnimSite& HAnimSite333 =  HAnimSite();
HAnimSite333.setDEF(CString("hanim_r_lateral_malleolus_pt"));
HAnimSite333.X3DNode::setName(CString("r_lateral_malleolus_pt"));
HAnimSite333.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
TouchSensor& TouchSensor334 =  TouchSensor();
TouchSensor334.setDescription(CString("HAnimSite r_lateral_malleolus"));
HAnimSite333.addChild(&TouchSensor334);

Shape& Shape335 =  Shape();
Shape335.setUSE(CString("HAnimSiteShape"));
HAnimSite333.addChild(&Shape335);

HAnimSegment309.addChild(&HAnimSite333);

HAnimSite& HAnimSite336 =  HAnimSite();
HAnimSite336.setDEF(CString("hanim_r_medial_malleolus_pt"));
HAnimSite336.X3DNode::setName(CString("r_medial_malleolus_pt"));
HAnimSite336.setTranslation(new float[]{-0.0591,0.076,-0.0928});
TouchSensor& TouchSensor337 =  TouchSensor();
TouchSensor337.setDescription(CString("HAnimSite r_medial_malleolus"));
HAnimSite336.addChild(&TouchSensor337);

Shape& Shape338 =  Shape();
Shape338.setUSE(CString("HAnimSiteShape"));
HAnimSite336.addChild(&Shape338);

HAnimSegment309.addChild(&HAnimSite336);

HAnimSite& HAnimSite339 =  HAnimSite();
HAnimSite339.setDEF(CString("hanim_r_sphyrion_pt"));
HAnimSite339.X3DNode::setName(CString("r_sphyrion_pt"));
HAnimSite339.setTranslation(new float[]{-0.0603,0.061,-0.1002});
TouchSensor& TouchSensor340 =  TouchSensor();
TouchSensor340.setDescription(CString("HAnimSite r_sphyrion"));
HAnimSite339.addChild(&TouchSensor340);

Shape& Shape341 =  Shape();
Shape341.setUSE(CString("HAnimSiteShape"));
HAnimSite339.addChild(&Shape341);

HAnimSegment309.addChild(&HAnimSite339);

HAnimSite& HAnimSite342 =  HAnimSite();
HAnimSite342.setDEF(CString("hanim_r_calcaneous_post_pt"));
HAnimSite342.X3DNode::setName(CString("r_calcaneous_post_pt"));
HAnimSite342.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
TouchSensor& TouchSensor343 =  TouchSensor();
TouchSensor343.setDescription(CString("HAnimSite r_calcaneous_post"));
HAnimSite342.addChild(&TouchSensor343);

Shape& Shape344 =  Shape();
Shape344.setUSE(CString("HAnimSiteShape"));
HAnimSite342.addChild(&Shape344);

HAnimSegment309.addChild(&HAnimSite342);

HAnimJoint308.addChildren(&HAnimSegment309);

HAnimJoint& HAnimJoint345 =  HAnimJoint();
HAnimJoint345.setDEF(CString("hanim_r_subtalar"));
HAnimJoint345.X3DNode::setName(CString("r_subtalar"));
HAnimJoint345.setCenter(new float[]{-0.1086,0.0001,-0.0368});
HAnimSegment& HAnimSegment346 =  HAnimSegment();
HAnimSegment346.setDEF(CString("hanim_r_midproximal"));
HAnimSegment346.X3DNode::setName(CString("r_midproximal"));
TouchSensor& TouchSensor347 =  TouchSensor();
TouchSensor347.setDescription(CString("HAnimJoint r_subtalar, HAnimSegment r_midproximal"));
HAnimSegment346.addChild(&TouchSensor347);

Transform& Transform348 =  Transform();
Transform348.setTranslation(new float[]{-0.1086,0.0001,-0.0368});
Shape& Shape349 =  Shape();
Shape349.setUSE(CString("HAnimJointShape"));
Transform348.addChild(&Shape349);

HAnimSegment346.addChild(&Transform348);

Shape& Shape350 =  Shape();
LineSet& LineSet351 =  LineSet();
LineSet351.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA352 =  ColorRGBA();
ColorRGBA352.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet351.addChild(&ColorRGBA352);

Coordinate& Coordinate353 =  Coordinate();
Coordinate353.setPoint(new float[]{-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368}, 6);
LineSet351.setCoord(Coordinate353);

Shape350.setGeometry(&LineSet351);

HAnimSegment346.addChild(&Shape350);

HAnimJoint345.addChildren(&HAnimSegment346);

HAnimJoint& HAnimJoint354 =  HAnimJoint();
HAnimJoint354.setDEF(CString("hanim_r_midtarsal"));
HAnimJoint354.X3DNode::setName(CString("r_midtarsal"));
HAnimJoint354.setCenter(new float[]{-0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment355 =  HAnimSegment();
HAnimSegment355.setDEF(CString("hanim_r_middistal"));
HAnimSegment355.X3DNode::setName(CString("r_middistal"));
TouchSensor& TouchSensor356 =  TouchSensor();
TouchSensor356.setDescription(CString("HAnimJoint r_midtarsal, HAnimSegment r_middistal"));
HAnimSegment355.addChild(&TouchSensor356);

Transform& Transform357 =  Transform();
Transform357.setTranslation(new float[]{-0.1086,0.0001,0.0368});
Shape& Shape358 =  Shape();
Shape358.setUSE(CString("HAnimJointShape"));
Transform357.addChild(&Shape358);

HAnimSegment355.addChild(&Transform357);

Shape& Shape359 =  Shape();
LineSet& LineSet360 =  LineSet();
LineSet360.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA361 =  ColorRGBA();
ColorRGBA361.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet360.addChild(&ColorRGBA361);

Coordinate& Coordinate362 =  Coordinate();
Coordinate362.setPoint(new float[]{-0.1086,0.0001,0.0368,-0.1086,0.0,0.0762}, 6);
LineSet360.setCoord(Coordinate362);

Shape359.setGeometry(&LineSet360);

HAnimSegment355.addChild(&Shape359);

Shape& Shape363 =  Shape();
LineSet& LineSet364 =  LineSet();
LineSet364.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA365 =  ColorRGBA();
ColorRGBA365.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet364.addChild(&ColorRGBA365);

Coordinate& Coordinate366 =  Coordinate();
Coordinate366.setPoint(new float[]{-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127}, 6);
LineSet364.setCoord(Coordinate366);

Shape363.setGeometry(&LineSet364);

HAnimSegment355.addChild(&Shape363);

HAnimSite& HAnimSite367 =  HAnimSite();
HAnimSite367.setDEF(CString("hanim_r_metatarsal_pha1_pt"));
HAnimSite367.X3DNode::setName(CString("r_metatarsal_pha1_pt"));
HAnimSite367.setTranslation(new float[]{-0.0521,0.026,0.0127});
TouchSensor& TouchSensor368 =  TouchSensor();
TouchSensor368.setDescription(CString("HAnimSite r_metatarsal_pha1"));
HAnimSite367.addChild(&TouchSensor368);

Shape& Shape369 =  Shape();
Shape369.setUSE(CString("HAnimSiteShape"));
HAnimSite367.addChild(&Shape369);

HAnimSegment355.addChild(&HAnimSite367);

HAnimJoint354.addChildren(&HAnimSegment355);

HAnimJoint& HAnimJoint370 =  HAnimJoint();
HAnimJoint370.setDEF(CString("hanim_r_metatarsal"));
HAnimJoint370.X3DNode::setName(CString("r_metatarsal"));
HAnimJoint370.setCenter(new float[]{-0.1086,0.0,0.0762});
HAnimSegment& HAnimSegment371 =  HAnimSegment();
HAnimSegment371.setDEF(CString("hanim_r_forefoot"));
HAnimSegment371.X3DNode::setName(CString("r_forefoot"));
TouchSensor& TouchSensor372 =  TouchSensor();
TouchSensor372.setDescription(CString("HAnimJoint r_metatarsal, HAnimSegment r_forefoot"));
HAnimSegment371.addChild(&TouchSensor372);

Transform& Transform373 =  Transform();
Transform373.setTranslation(new float[]{-0.1086,0.0,0.0762});
Shape& Shape374 =  Shape();
Shape374.setUSE(CString("HAnimJointShape"));
Transform373.addChild(&Shape374);

HAnimSegment371.addChild(&Transform373);

Shape& Shape375 =  Shape();
LineSet& LineSet376 =  LineSet();
LineSet376.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA377 =  ColorRGBA();
ColorRGBA377.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet376.addChild(&ColorRGBA377);

Coordinate& Coordinate378 =  Coordinate();
Coordinate378.setPoint(new float[]{-0.1086,0.0,0.0762,-0.1043,0.0227,0.145}, 6);
LineSet376.setCoord(Coordinate378);

Shape375.setGeometry(&LineSet376);

HAnimSegment371.addChild(&Shape375);

Shape& Shape379 =  Shape();
LineSet& LineSet380 =  LineSet();
LineSet380.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA381 =  ColorRGBA();
ColorRGBA381.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet380.addChild(&ColorRGBA381);

Coordinate& Coordinate382 =  Coordinate();
Coordinate382.setPoint(new float[]{-0.1086,0.0,0.0762,-0.1523,0.0166,0.0895}, 6);
LineSet380.setCoord(Coordinate382);

Shape379.setGeometry(&LineSet380);

HAnimSegment371.addChild(&Shape379);

Shape& Shape383 =  Shape();
LineSet& LineSet384 =  LineSet();
LineSet384.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA385 =  ColorRGBA();
ColorRGBA385.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet384.addChild(&ColorRGBA385);

Coordinate& Coordinate386 =  Coordinate();
Coordinate386.setPoint(new float[]{-0.1086,0.0,0.0762,-0.0883,0.0134,0.1383}, 6);
LineSet384.setCoord(Coordinate386);

Shape383.setGeometry(&LineSet384);

HAnimSegment371.addChild(&Shape383);

HAnimSite& HAnimSite387 =  HAnimSite();
HAnimSite387.setDEF(CString("hanim_r_forefoot_tip"));
HAnimSite387.X3DNode::setName(CString("r_forefoot_tip"));
HAnimSite387.setTranslation(new float[]{-0.1043,0.0227,0.145});
TouchSensor& TouchSensor388 =  TouchSensor();
TouchSensor388.setDescription(CString("HAnimSite r_forefoot_tip"));
HAnimSite387.addChild(&TouchSensor388);

Shape& Shape389 =  Shape();
Shape389.setUSE(CString("HAnimSiteShape"));
HAnimSite387.addChild(&Shape389);

HAnimSegment371.addChild(&HAnimSite387);

HAnimSite& HAnimSite390 =  HAnimSite();
HAnimSite390.setDEF(CString("hanim_r_metatarsal_pha5_pt"));
HAnimSite390.X3DNode::setName(CString("r_metatarsal_pha5_pt"));
HAnimSite390.setTranslation(new float[]{-0.1523,0.0166,0.0895});
TouchSensor& TouchSensor391 =  TouchSensor();
TouchSensor391.setDescription(CString("HAnimSite r_metatarsal_pha5"));
HAnimSite390.addChild(&TouchSensor391);

Shape& Shape392 =  Shape();
Shape392.setUSE(CString("HAnimSiteShape"));
HAnimSite390.addChild(&Shape392);

HAnimSegment371.addChild(&HAnimSite390);

HAnimSite& HAnimSite393 =  HAnimSite();
HAnimSite393.setDEF(CString("hanim_r_digit2_pt"));
HAnimSite393.X3DNode::setName(CString("r_digit2_pt"));
HAnimSite393.setTranslation(new float[]{-0.0883,0.0134,0.1383});
TouchSensor& TouchSensor394 =  TouchSensor();
TouchSensor394.setDescription(CString("HAnimSite r_digit2"));
HAnimSite393.addChild(&TouchSensor394);

Shape& Shape395 =  Shape();
Shape395.setUSE(CString("HAnimSiteShape"));
HAnimSite393.addChild(&Shape395);

HAnimSegment371.addChild(&HAnimSite393);

HAnimJoint370.addChildren(&HAnimSegment371);

HAnimJoint354.addChildren(&HAnimJoint370);

HAnimJoint345.addChildren(&HAnimJoint354);

HAnimJoint308.addChildren(&HAnimJoint345);

HAnimJoint299.addChildren(&HAnimJoint308);

HAnimJoint269.addChildren(&HAnimJoint299);

HAnimJoint62.addChildren(&HAnimJoint269);

HAnimJoint46.addChildren(&HAnimJoint62);

HAnimJoint& HAnimJoint396 =  HAnimJoint();
HAnimJoint396.setDEF(CString("hanim_vl5"));
HAnimJoint396.X3DNode::setName(CString("vl5"));
HAnimJoint396.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimSegment& HAnimSegment397 =  HAnimSegment();
HAnimSegment397.setDEF(CString("hanim_l5"));
HAnimSegment397.X3DNode::setName(CString("l5"));
TouchSensor& TouchSensor398 =  TouchSensor();
TouchSensor398.setDescription(CString("HAnimJoint vl5, HAnimSegment l5"));
HAnimSegment397.addChild(&TouchSensor398);

Transform& Transform399 =  Transform();
Transform399.setTranslation(new float[]{0.0028,1.0568,-0.0776});
Shape& Shape400 =  Shape();
Shape400.setUSE(CString("HAnimJointShape"));
Transform399.addChild(&Shape400);

HAnimSegment397.addChild(&Transform399);

Shape& Shape401 =  Shape();
LineSet& LineSet402 =  LineSet();
LineSet402.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA403 =  ColorRGBA();
ColorRGBA403.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet402.addChild(&ColorRGBA403);

Coordinate& Coordinate404 =  Coordinate();
Coordinate404.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
LineSet402.setCoord(Coordinate404);

Shape401.setGeometry(&LineSet402);

HAnimSegment397.addChild(&Shape401);

Shape& Shape405 =  Shape();
LineSet& LineSet406 =  LineSet();
LineSet406.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA407 =  ColorRGBA();
ColorRGBA407.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet406.addChild(&ColorRGBA407);

Coordinate& Coordinate408 =  Coordinate();
Coordinate408.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0,1.0915,-0.1091}, 6);
LineSet406.setCoord(Coordinate408);

Shape405.setGeometry(&LineSet406);

HAnimSegment397.addChild(&Shape405);

Shape& Shape409 =  Shape();
LineSet& LineSet410 =  LineSet();
LineSet410.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA411 =  ColorRGBA();
ColorRGBA411.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet410.addChild(&ColorRGBA411);

Coordinate& Coordinate412 =  Coordinate();
Coordinate412.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017}, 6);
LineSet410.setCoord(Coordinate412);

Shape409.setGeometry(&LineSet410);

HAnimSegment397.addChild(&Shape409);

HAnimSite& HAnimSite413 =  HAnimSite();
HAnimSite413.setDEF(CString("hanim_waist_preferred_post_pt"));
HAnimSite413.X3DNode::setName(CString("waist_preferred_post_pt"));
HAnimSite413.setTranslation(new float[]{0.0,1.0915,-0.1091});
TouchSensor& TouchSensor414 =  TouchSensor();
TouchSensor414.setDescription(CString("HAnimSite waist_preferred_post"));
HAnimSite413.addChild(&TouchSensor414);

Shape& Shape415 =  Shape();
Shape415.setUSE(CString("HAnimSiteShape"));
HAnimSite413.addChild(&Shape415);

HAnimSegment397.addChild(&HAnimSite413);

HAnimSite& HAnimSite416 =  HAnimSite();
HAnimSite416.setDEF(CString("hanim_navel_pt"));
HAnimSite416.X3DNode::setName(CString("navel_pt"));
HAnimSite416.setTranslation(new float[]{0.0069,1.0966,0.1017});
TouchSensor& TouchSensor417 =  TouchSensor();
TouchSensor417.setDescription(CString("HAnimSite navel"));
HAnimSite416.addChild(&TouchSensor417);

Shape& Shape418 =  Shape();
Shape418.setUSE(CString("HAnimSiteShape"));
HAnimSite416.addChild(&Shape418);

HAnimSegment397.addChild(&HAnimSite416);

HAnimJoint396.addChildren(&HAnimSegment397);

HAnimJoint& HAnimJoint419 =  HAnimJoint();
HAnimJoint419.setDEF(CString("hanim_vl4"));
HAnimJoint419.X3DNode::setName(CString("vl4"));
HAnimJoint419.setCenter(new float[]{0.0035,1.0925,-0.0787});
HAnimSegment& HAnimSegment420 =  HAnimSegment();
HAnimSegment420.setDEF(CString("hanim_l4"));
HAnimSegment420.X3DNode::setName(CString("l4"));
TouchSensor& TouchSensor421 =  TouchSensor();
TouchSensor421.setDescription(CString("HAnimJoint vl4, HAnimSegment l4"));
HAnimSegment420.addChild(&TouchSensor421);

Transform& Transform422 =  Transform();
Transform422.setTranslation(new float[]{0.0035,1.0925,-0.0787});
Shape& Shape423 =  Shape();
Shape423.setUSE(CString("HAnimJointShape"));
Transform422.addChild(&Shape423);

HAnimSegment420.addChild(&Transform422);

Shape& Shape424 =  Shape();
LineSet& LineSet425 =  LineSet();
LineSet425.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA426 =  ColorRGBA();
ColorRGBA426.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet425.addChild(&ColorRGBA426);

Coordinate& Coordinate427 =  Coordinate();
Coordinate427.setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
LineSet425.setCoord(Coordinate427);

Shape424.setGeometry(&LineSet425);

HAnimSegment420.addChild(&Shape424);

HAnimJoint419.addChildren(&HAnimSegment420);

HAnimJoint& HAnimJoint428 =  HAnimJoint();
HAnimJoint428.setDEF(CString("hanim_vl3"));
HAnimJoint428.X3DNode::setName(CString("vl3"));
HAnimJoint428.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimSegment& HAnimSegment429 =  HAnimSegment();
HAnimSegment429.setDEF(CString("hanim_l3"));
HAnimSegment429.X3DNode::setName(CString("l3"));
TouchSensor& TouchSensor430 =  TouchSensor();
TouchSensor430.setDescription(CString("HAnimJoint vl3, HAnimSegment l3"));
HAnimSegment429.addChild(&TouchSensor430);

Transform& Transform431 =  Transform();
Transform431.setTranslation(new float[]{0.0041,1.1276,-0.0796});
Shape& Shape432 =  Shape();
Shape432.setUSE(CString("HAnimJointShape"));
Transform431.addChild(&Shape432);

HAnimSegment429.addChild(&Transform431);

Shape& Shape433 =  Shape();
LineSet& LineSet434 =  LineSet();
LineSet434.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA435 =  ColorRGBA();
ColorRGBA435.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet434.addChild(&ColorRGBA435);

Coordinate& Coordinate436 =  Coordinate();
Coordinate436.setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
LineSet434.setCoord(Coordinate436);

Shape433.setGeometry(&LineSet434);

HAnimSegment429.addChild(&Shape433);

HAnimJoint428.addChildren(&HAnimSegment429);

HAnimJoint& HAnimJoint437 =  HAnimJoint();
HAnimJoint437.setDEF(CString("hanim_vl2"));
HAnimJoint437.X3DNode::setName(CString("vl2"));
HAnimJoint437.setCenter(new float[]{0.0045,1.1546,-0.08});
HAnimSegment& HAnimSegment438 =  HAnimSegment();
HAnimSegment438.setDEF(CString("hanim_l2"));
HAnimSegment438.X3DNode::setName(CString("l2"));
TouchSensor& TouchSensor439 =  TouchSensor();
TouchSensor439.setDescription(CString("HAnimJoint vl2, HAnimSegment l2"));
HAnimSegment438.addChild(&TouchSensor439);

Transform& Transform440 =  Transform();
Transform440.setTranslation(new float[]{0.0045,1.1546,-0.08});
Shape& Shape441 =  Shape();
Shape441.setUSE(CString("HAnimJointShape"));
Transform440.addChild(&Shape441);

HAnimSegment438.addChild(&Transform440);

Shape& Shape442 =  Shape();
LineSet& LineSet443 =  LineSet();
LineSet443.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA444 =  ColorRGBA();
ColorRGBA444.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet443.addChild(&ColorRGBA444);

Coordinate& Coordinate445 =  Coordinate();
Coordinate445.setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
LineSet443.setCoord(Coordinate445);

Shape442.setGeometry(&LineSet443);

HAnimSegment438.addChild(&Shape442);

Shape& Shape446 =  Shape();
LineSet& LineSet447 =  LineSet();
LineSet447.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA448 =  ColorRGBA();
ColorRGBA448.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet447.addChild(&ColorRGBA448);

Coordinate& Coordinate449 =  Coordinate();
Coordinate449.setPoint(new float[]{0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016}, 6);
LineSet447.setCoord(Coordinate449);

Shape446.setGeometry(&LineSet447);

HAnimSegment438.addChild(&Shape446);

Shape& Shape450 =  Shape();
LineSet& LineSet451 =  LineSet();
LineSet451.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA452 =  ColorRGBA();
ColorRGBA452.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet451.addChild(&ColorRGBA452);

Coordinate& Coordinate453 =  Coordinate();
Coordinate453.setPoint(new float[]{0.0045,1.1546,-0.08,0.0871,1.1925,0.0992}, 6);
LineSet451.setCoord(Coordinate453);

Shape450.setGeometry(&LineSet451);

HAnimSegment438.addChild(&Shape450);

Shape& Shape454 =  Shape();
LineSet& LineSet455 =  LineSet();
LineSet455.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA456 =  ColorRGBA();
ColorRGBA456.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet455.addChild(&ColorRGBA456);

Coordinate& Coordinate457 =  Coordinate();
Coordinate457.setPoint(new float[]{0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113}, 6);
LineSet455.setCoord(Coordinate457);

Shape454.setGeometry(&LineSet455);

HAnimSegment438.addChild(&Shape454);

HAnimSite& HAnimSite458 =  HAnimSite();
HAnimSite458.setDEF(CString("hanim_r_rib10_pt"));
HAnimSite458.X3DNode::setName(CString("r_rib10_pt"));
HAnimSite458.setTranslation(new float[]{-0.0711,1.1941,0.1016});
TouchSensor& TouchSensor459 =  TouchSensor();
TouchSensor459.setDescription(CString("HAnimSite r_rib10"));
HAnimSite458.addChild(&TouchSensor459);

Shape& Shape460 =  Shape();
Shape460.setUSE(CString("HAnimSiteShape"));
HAnimSite458.addChild(&Shape460);

HAnimSegment438.addChild(&HAnimSite458);

HAnimSite& HAnimSite461 =  HAnimSite();
HAnimSite461.setDEF(CString("hanim_l_rib10_pt"));
HAnimSite461.X3DNode::setName(CString("l_rib10_pt"));
HAnimSite461.setTranslation(new float[]{0.0871,1.1925,0.0992});
TouchSensor& TouchSensor462 =  TouchSensor();
TouchSensor462.setDescription(CString("HAnimSite l_rib10"));
HAnimSite461.addChild(&TouchSensor462);

Shape& Shape463 =  Shape();
Shape463.setUSE(CString("HAnimSiteShape"));
HAnimSite461.addChild(&Shape463);

HAnimSegment438.addChild(&HAnimSite461);

HAnimSite& HAnimSite464 =  HAnimSite();
HAnimSite464.setDEF(CString("hanim_rib10_midspine_pt"));
HAnimSite464.X3DNode::setName(CString("rib10_midspine_pt"));
HAnimSite464.setTranslation(new float[]{0.0049,1.1908,-0.1113});
TouchSensor& TouchSensor465 =  TouchSensor();
TouchSensor465.setDescription(CString("HAnimSite rib10_midspine"));
HAnimSite464.addChild(&TouchSensor465);

Shape& Shape466 =  Shape();
Shape466.setUSE(CString("HAnimSiteShape"));
HAnimSite464.addChild(&Shape466);

HAnimSegment438.addChild(&HAnimSite464);

HAnimJoint437.addChildren(&HAnimSegment438);

HAnimJoint& HAnimJoint467 =  HAnimJoint();
HAnimJoint467.setDEF(CString("hanim_vl1"));
HAnimJoint467.X3DNode::setName(CString("vl1"));
HAnimJoint467.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimSegment& HAnimSegment468 =  HAnimSegment();
HAnimSegment468.setDEF(CString("hanim_l1"));
HAnimSegment468.X3DNode::setName(CString("l1"));
TouchSensor& TouchSensor469 =  TouchSensor();
TouchSensor469.setDescription(CString("HAnimJoint vl1, HAnimSegment l1"));
HAnimSegment468.addChild(&TouchSensor469);

Transform& Transform470 =  Transform();
Transform470.setTranslation(new float[]{0.0048,1.1912,-0.0805});
Shape& Shape471 =  Shape();
Shape471.setUSE(CString("HAnimJointShape"));
Transform470.addChild(&Shape471);

HAnimSegment468.addChild(&Transform470);

Shape& Shape472 =  Shape();
LineSet& LineSet473 =  LineSet();
LineSet473.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA474 =  ColorRGBA();
ColorRGBA474.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet473.addChild(&ColorRGBA474);

Coordinate& Coordinate475 =  Coordinate();
Coordinate475.setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
LineSet473.setCoord(Coordinate475);

Shape472.setGeometry(&LineSet473);

HAnimSegment468.addChild(&Shape472);

HAnimJoint467.addChildren(&HAnimSegment468);

HAnimJoint& HAnimJoint476 =  HAnimJoint();
HAnimJoint476.setDEF(CString("hanim_vt12"));
HAnimJoint476.X3DNode::setName(CString("vt12"));
HAnimJoint476.setCenter(new float[]{0.0051,1.2278,-0.0808});
HAnimSegment& HAnimSegment477 =  HAnimSegment();
HAnimSegment477.setDEF(CString("hanim_t12"));
HAnimSegment477.X3DNode::setName(CString("t12"));
TouchSensor& TouchSensor478 =  TouchSensor();
TouchSensor478.setDescription(CString("HAnimJoint vt12, HAnimSegment t12"));
HAnimSegment477.addChild(&TouchSensor478);

Transform& Transform479 =  Transform();
Transform479.setTranslation(new float[]{0.0051,1.2278,-0.0808});
Shape& Shape480 =  Shape();
Shape480.setUSE(CString("HAnimJointShape"));
Transform479.addChild(&Shape480);

HAnimSegment477.addChild(&Transform479);

Shape& Shape481 =  Shape();
LineSet& LineSet482 =  LineSet();
LineSet482.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA483 =  ColorRGBA();
ColorRGBA483.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet482.addChild(&ColorRGBA483);

Coordinate& Coordinate484 =  Coordinate();
Coordinate484.setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
LineSet482.setCoord(Coordinate484);

Shape481.setGeometry(&LineSet482);

HAnimSegment477.addChild(&Shape481);

HAnimJoint476.addChildren(&HAnimSegment477);

HAnimJoint& HAnimJoint485 =  HAnimJoint();
HAnimJoint485.setDEF(CString("hanim_vt11"));
HAnimJoint485.X3DNode::setName(CString("vt11"));
HAnimJoint485.setCenter(new float[]{0.0053,1.2679,-0.081});
HAnimSegment& HAnimSegment486 =  HAnimSegment();
HAnimSegment486.setDEF(CString("hanim_t11"));
HAnimSegment486.X3DNode::setName(CString("t11"));
TouchSensor& TouchSensor487 =  TouchSensor();
TouchSensor487.setDescription(CString("HAnimJoint vt11, HAnimSegment t11"));
HAnimSegment486.addChild(&TouchSensor487);

Transform& Transform488 =  Transform();
Transform488.setTranslation(new float[]{0.0053,1.2679,-0.081});
Shape& Shape489 =  Shape();
Shape489.setUSE(CString("HAnimJointShape"));
Transform488.addChild(&Shape489);

HAnimSegment486.addChild(&Transform488);

Shape& Shape490 =  Shape();
LineSet& LineSet491 =  LineSet();
LineSet491.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA492 =  ColorRGBA();
ColorRGBA492.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet491.addChild(&ColorRGBA492);

Coordinate& Coordinate493 =  Coordinate();
Coordinate493.setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
LineSet491.setCoord(Coordinate493);

Shape490.setGeometry(&LineSet491);

HAnimSegment486.addChild(&Shape490);

HAnimJoint485.addChildren(&HAnimSegment486);

HAnimJoint& HAnimJoint494 =  HAnimJoint();
HAnimJoint494.setDEF(CString("hanim_vt10"));
HAnimJoint494.X3DNode::setName(CString("vt10"));
HAnimJoint494.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimSegment& HAnimSegment495 =  HAnimSegment();
HAnimSegment495.setDEF(CString("hanim_t10"));
HAnimSegment495.X3DNode::setName(CString("t10"));
TouchSensor& TouchSensor496 =  TouchSensor();
TouchSensor496.setDescription(CString("HAnimJoint vt10, HAnimSegment t10"));
HAnimSegment495.addChild(&TouchSensor496);

Transform& Transform497 =  Transform();
Transform497.setTranslation(new float[]{0.0056,1.2848,-0.0822});
Shape& Shape498 =  Shape();
Shape498.setUSE(CString("HAnimJointShape"));
Transform497.addChild(&Shape498);

HAnimSegment495.addChild(&Transform497);

Shape& Shape499 =  Shape();
LineSet& LineSet500 =  LineSet();
LineSet500.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA501 =  ColorRGBA();
ColorRGBA501.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet500.addChild(&ColorRGBA501);

Coordinate& Coordinate502 =  Coordinate();
Coordinate502.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
LineSet500.setCoord(Coordinate502);

Shape499.setGeometry(&LineSet500);

HAnimSegment495.addChild(&Shape499);

Shape& Shape503 =  Shape();
LineSet& LineSet504 =  LineSet();
LineSet504.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA505 =  ColorRGBA();
ColorRGBA505.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet504.addChild(&ColorRGBA505);

Coordinate& Coordinate506 =  Coordinate();
Coordinate506.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147}, 6);
LineSet504.setCoord(Coordinate506);

Shape503.setGeometry(&LineSet504);

HAnimSegment495.addChild(&Shape503);

HAnimSite& HAnimSite507 =  HAnimSite();
HAnimSite507.setDEF(CString("hanim_substernale_pt"));
HAnimSite507.X3DNode::setName(CString("substernale_pt"));
HAnimSite507.setTranslation(new float[]{0.0085,1.2995,0.1147});
TouchSensor& TouchSensor508 =  TouchSensor();
TouchSensor508.setDescription(CString("HAnimSite substernale"));
HAnimSite507.addChild(&TouchSensor508);

Shape& Shape509 =  Shape();
Shape509.setUSE(CString("HAnimSiteShape"));
HAnimSite507.addChild(&Shape509);

HAnimSegment495.addChild(&HAnimSite507);

HAnimJoint494.addChildren(&HAnimSegment495);

HAnimJoint& HAnimJoint510 =  HAnimJoint();
HAnimJoint510.setDEF(CString("hanim_vt9"));
HAnimJoint510.X3DNode::setName(CString("vt9"));
HAnimJoint510.setCenter(new float[]{0.0057,1.3126,-0.0838});
HAnimSegment& HAnimSegment511 =  HAnimSegment();
HAnimSegment511.setDEF(CString("hanim_t9"));
HAnimSegment511.X3DNode::setName(CString("t9"));
TouchSensor& TouchSensor512 =  TouchSensor();
TouchSensor512.setDescription(CString("HAnimJoint vt9, HAnimSegment t9"));
HAnimSegment511.addChild(&TouchSensor512);

Transform& Transform513 =  Transform();
Transform513.setTranslation(new float[]{0.0057,1.3126,-0.0838});
Shape& Shape514 =  Shape();
Shape514.setUSE(CString("HAnimJointShape"));
Transform513.addChild(&Shape514);

HAnimSegment511.addChild(&Transform513);

Shape& Shape515 =  Shape();
LineSet& LineSet516 =  LineSet();
LineSet516.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA517 =  ColorRGBA();
ColorRGBA517.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet516.addChild(&ColorRGBA517);

Coordinate& Coordinate518 =  Coordinate();
Coordinate518.setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
LineSet516.setCoord(Coordinate518);

Shape515.setGeometry(&LineSet516);

HAnimSegment511.addChild(&Shape515);

Shape& Shape519 =  Shape();
LineSet& LineSet520 =  LineSet();
LineSet520.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA521 =  ColorRGBA();
ColorRGBA521.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet520.addChild(&ColorRGBA521);

Coordinate& Coordinate522 =  Coordinate();
Coordinate522.setPoint(new float[]{0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217}, 6);
LineSet520.setCoord(Coordinate522);

Shape519.setGeometry(&LineSet520);

HAnimSegment511.addChild(&Shape519);

Shape& Shape523 =  Shape();
LineSet& LineSet524 =  LineSet();
LineSet524.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA525 =  ColorRGBA();
ColorRGBA525.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet524.addChild(&ColorRGBA525);

Coordinate& Coordinate526 =  Coordinate();
Coordinate526.setPoint(new float[]{0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192}, 6);
LineSet524.setCoord(Coordinate526);

Shape523.setGeometry(&LineSet524);

HAnimSegment511.addChild(&Shape523);

HAnimSite& HAnimSite527 =  HAnimSite();
HAnimSite527.setDEF(CString("hanim_r_thelion_pt"));
HAnimSite527.X3DNode::setName(CString("r_thelion_pt"));
HAnimSite527.setTranslation(new float[]{-0.0736,1.3385,0.1217});
TouchSensor& TouchSensor528 =  TouchSensor();
TouchSensor528.setDescription(CString("HAnimSite r_thelion"));
HAnimSite527.addChild(&TouchSensor528);

Shape& Shape529 =  Shape();
Shape529.setUSE(CString("HAnimSiteShape"));
HAnimSite527.addChild(&Shape529);

HAnimSegment511.addChild(&HAnimSite527);

HAnimSite& HAnimSite530 =  HAnimSite();
HAnimSite530.setDEF(CString("hanim_l_thelion_pt"));
HAnimSite530.X3DNode::setName(CString("l_thelion_pt"));
HAnimSite530.setTranslation(new float[]{0.0918,1.3382,0.1192});
TouchSensor& TouchSensor531 =  TouchSensor();
TouchSensor531.setDescription(CString("HAnimSite l_thelion"));
HAnimSite530.addChild(&TouchSensor531);

Shape& Shape532 =  Shape();
Shape532.setUSE(CString("HAnimSiteShape"));
HAnimSite530.addChild(&Shape532);

HAnimSegment511.addChild(&HAnimSite530);

HAnimJoint510.addChildren(&HAnimSegment511);

HAnimJoint& HAnimJoint533 =  HAnimJoint();
HAnimJoint533.setDEF(CString("hanim_vt8"));
HAnimJoint533.X3DNode::setName(CString("vt8"));
HAnimJoint533.setCenter(new float[]{0.0057,1.3382,-0.0845});
HAnimSegment& HAnimSegment534 =  HAnimSegment();
HAnimSegment534.setDEF(CString("hanim_t8"));
HAnimSegment534.X3DNode::setName(CString("t8"));
TouchSensor& TouchSensor535 =  TouchSensor();
TouchSensor535.setDescription(CString("HAnimJoint vt8, HAnimSegment t8"));
HAnimSegment534.addChild(&TouchSensor535);

Transform& Transform536 =  Transform();
Transform536.setTranslation(new float[]{0.0057,1.3382,-0.0845});
Shape& Shape537 =  Shape();
Shape537.setUSE(CString("HAnimJointShape"));
Transform536.addChild(&Shape537);

HAnimSegment534.addChild(&Transform536);

Shape& Shape538 =  Shape();
LineSet& LineSet539 =  LineSet();
LineSet539.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA540 =  ColorRGBA();
ColorRGBA540.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet539.addChild(&ColorRGBA540);

Coordinate& Coordinate541 =  Coordinate();
Coordinate541.setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
LineSet539.setCoord(Coordinate541);

Shape538.setGeometry(&LineSet539);

HAnimSegment534.addChild(&Shape538);

HAnimJoint533.addChildren(&HAnimSegment534);

HAnimJoint& HAnimJoint542 =  HAnimJoint();
HAnimJoint542.setDEF(CString("hanim_vt7"));
HAnimJoint542.X3DNode::setName(CString("vt7"));
HAnimJoint542.setCenter(new float[]{0.0058,1.3625,-0.0833});
HAnimSegment& HAnimSegment543 =  HAnimSegment();
HAnimSegment543.setDEF(CString("hanim_t7"));
HAnimSegment543.X3DNode::setName(CString("t7"));
TouchSensor& TouchSensor544 =  TouchSensor();
TouchSensor544.setDescription(CString("HAnimJoint vt7, HAnimSegment t7"));
HAnimSegment543.addChild(&TouchSensor544);

Transform& Transform545 =  Transform();
Transform545.setTranslation(new float[]{0.0058,1.3625,-0.0833});
Shape& Shape546 =  Shape();
Shape546.setUSE(CString("HAnimJointShape"));
Transform545.addChild(&Shape546);

HAnimSegment543.addChild(&Transform545);

Shape& Shape547 =  Shape();
LineSet& LineSet548 =  LineSet();
LineSet548.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA549 =  ColorRGBA();
ColorRGBA549.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet548.addChild(&ColorRGBA549);

Coordinate& Coordinate550 =  Coordinate();
Coordinate550.setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
LineSet548.setCoord(Coordinate550);

Shape547.setGeometry(&LineSet548);

HAnimSegment543.addChild(&Shape547);

HAnimJoint542.addChildren(&HAnimSegment543);

HAnimJoint& HAnimJoint551 =  HAnimJoint();
HAnimJoint551.setDEF(CString("hanim_vt6"));
HAnimJoint551.X3DNode::setName(CString("vt6"));
HAnimJoint551.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimSegment& HAnimSegment552 =  HAnimSegment();
HAnimSegment552.setDEF(CString("hanim_t6"));
HAnimSegment552.X3DNode::setName(CString("t6"));
TouchSensor& TouchSensor553 =  TouchSensor();
TouchSensor553.setDescription(CString("HAnimJoint vt6, HAnimSegment t6"));
HAnimSegment552.addChild(&TouchSensor553);

Transform& Transform554 =  Transform();
Transform554.setTranslation(new float[]{0.0059,1.3866,-0.08});
Shape& Shape555 =  Shape();
Shape555.setUSE(CString("HAnimJointShape"));
Transform554.addChild(&Shape555);

HAnimSegment552.addChild(&Transform554);

Shape& Shape556 =  Shape();
LineSet& LineSet557 =  LineSet();
LineSet557.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA558 =  ColorRGBA();
ColorRGBA558.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet557.addChild(&ColorRGBA558);

Coordinate& Coordinate559 =  Coordinate();
Coordinate559.setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
LineSet557.setCoord(Coordinate559);

Shape556.setGeometry(&LineSet557);

HAnimSegment552.addChild(&Shape556);

HAnimJoint551.addChildren(&HAnimSegment552);

HAnimJoint& HAnimJoint560 =  HAnimJoint();
HAnimJoint560.setDEF(CString("hanim_vt5"));
HAnimJoint560.X3DNode::setName(CString("vt5"));
HAnimJoint560.setCenter(new float[]{0.006,1.4102,-0.0745});
HAnimSegment& HAnimSegment561 =  HAnimSegment();
HAnimSegment561.setDEF(CString("hanim_t5"));
HAnimSegment561.X3DNode::setName(CString("t5"));
TouchSensor& TouchSensor562 =  TouchSensor();
TouchSensor562.setDescription(CString("HAnimJoint vt5, HAnimSegment t5"));
HAnimSegment561.addChild(&TouchSensor562);

Transform& Transform563 =  Transform();
Transform563.setTranslation(new float[]{0.006,1.4102,-0.0745});
Shape& Shape564 =  Shape();
Shape564.setUSE(CString("HAnimJointShape"));
Transform563.addChild(&Shape564);

HAnimSegment561.addChild(&Transform563);

Shape& Shape565 =  Shape();
LineSet& LineSet566 =  LineSet();
LineSet566.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA567 =  ColorRGBA();
ColorRGBA567.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet566.addChild(&ColorRGBA567);

Coordinate& Coordinate568 =  Coordinate();
Coordinate568.setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
LineSet566.setCoord(Coordinate568);

Shape565.setGeometry(&LineSet566);

HAnimSegment561.addChild(&Shape565);

HAnimJoint560.addChildren(&HAnimSegment561);

HAnimJoint& HAnimJoint569 =  HAnimJoint();
HAnimJoint569.setDEF(CString("hanim_vt4"));
HAnimJoint569.X3DNode::setName(CString("vt4"));
HAnimJoint569.setCenter(new float[]{0.0061,1.432,-0.0675});
HAnimSegment& HAnimSegment570 =  HAnimSegment();
HAnimSegment570.setDEF(CString("hanim_t4"));
HAnimSegment570.X3DNode::setName(CString("t4"));
TouchSensor& TouchSensor571 =  TouchSensor();
TouchSensor571.setDescription(CString("HAnimJoint vt4, HAnimSegment t4"));
HAnimSegment570.addChild(&TouchSensor571);

Transform& Transform572 =  Transform();
Transform572.setTranslation(new float[]{0.0061,1.432,-0.0675});
Shape& Shape573 =  Shape();
Shape573.setUSE(CString("HAnimJointShape"));
Transform572.addChild(&Shape573);

HAnimSegment570.addChild(&Transform572);

Shape& Shape574 =  Shape();
LineSet& LineSet575 =  LineSet();
LineSet575.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA576 =  ColorRGBA();
ColorRGBA576.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet575.addChild(&ColorRGBA576);

Coordinate& Coordinate577 =  Coordinate();
Coordinate577.setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
LineSet575.setCoord(Coordinate577);

Shape574.setGeometry(&LineSet575);

HAnimSegment570.addChild(&Shape574);

HAnimJoint569.addChildren(&HAnimSegment570);

HAnimJoint& HAnimJoint578 =  HAnimJoint();
HAnimJoint578.setDEF(CString("hanim_vt3"));
HAnimJoint578.X3DNode::setName(CString("vt3"));
HAnimJoint578.setCenter(new float[]{0.0062,1.4583,-0.057});
HAnimSegment& HAnimSegment579 =  HAnimSegment();
HAnimSegment579.setDEF(CString("hanim_t3"));
HAnimSegment579.X3DNode::setName(CString("t3"));
TouchSensor& TouchSensor580 =  TouchSensor();
TouchSensor580.setDescription(CString("HAnimJoint vt3, HAnimSegment t3"));
HAnimSegment579.addChild(&TouchSensor580);

Transform& Transform581 =  Transform();
Transform581.setTranslation(new float[]{0.0062,1.4583,-0.057});
Shape& Shape582 =  Shape();
Shape582.setUSE(CString("HAnimJointShape"));
Transform581.addChild(&Shape582);

HAnimSegment579.addChild(&Transform581);

Shape& Shape583 =  Shape();
LineSet& LineSet584 =  LineSet();
LineSet584.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA585 =  ColorRGBA();
ColorRGBA585.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet584.addChild(&ColorRGBA585);

Coordinate& Coordinate586 =  Coordinate();
Coordinate586.setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
LineSet584.setCoord(Coordinate586);

Shape583.setGeometry(&LineSet584);

HAnimSegment579.addChild(&Shape583);

HAnimJoint578.addChildren(&HAnimSegment579);

HAnimJoint& HAnimJoint587 =  HAnimJoint();
HAnimJoint587.setDEF(CString("hanim_vt2"));
HAnimJoint587.X3DNode::setName(CString("vt2"));
HAnimJoint587.setCenter(new float[]{0.0063,1.4761,-0.0484});
HAnimSegment& HAnimSegment588 =  HAnimSegment();
HAnimSegment588.setDEF(CString("hanim_t2"));
HAnimSegment588.X3DNode::setName(CString("t2"));
TouchSensor& TouchSensor589 =  TouchSensor();
TouchSensor589.setDescription(CString("HAnimJoint vt2, HAnimSegment t2"));
HAnimSegment588.addChild(&TouchSensor589);

Transform& Transform590 =  Transform();
Transform590.setTranslation(new float[]{0.0063,1.4761,-0.0484});
Shape& Shape591 =  Shape();
Shape591.setUSE(CString("HAnimJointShape"));
Transform590.addChild(&Shape591);

HAnimSegment588.addChild(&Transform590);

Shape& Shape592 =  Shape();
LineSet& LineSet593 =  LineSet();
LineSet593.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA594 =  ColorRGBA();
ColorRGBA594.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet593.addChild(&ColorRGBA594);

Coordinate& Coordinate595 =  Coordinate();
Coordinate595.setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
LineSet593.setCoord(Coordinate595);

Shape592.setGeometry(&LineSet593);

HAnimSegment588.addChild(&Shape592);

HAnimJoint587.addChildren(&HAnimSegment588);

HAnimJoint& HAnimJoint596 =  HAnimJoint();
HAnimJoint596.setDEF(CString("hanim_vt1"));
HAnimJoint596.X3DNode::setName(CString("vt1"));
HAnimJoint596.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimSegment& HAnimSegment597 =  HAnimSegment();
HAnimSegment597.setDEF(CString("hanim_t1"));
HAnimSegment597.X3DNode::setName(CString("t1"));
TouchSensor& TouchSensor598 =  TouchSensor();
TouchSensor598.setDescription(CString("HAnimJoint vt1, HAnimSegment t1"));
HAnimSegment597.addChild(&TouchSensor598);

Transform& Transform599 =  Transform();
Transform599.setTranslation(new float[]{0.0065,1.4951,-0.0387});
Shape& Shape600 =  Shape();
Shape600.setUSE(CString("HAnimJointShape"));
Transform599.addChild(&Shape600);

HAnimSegment597.addChild(&Transform599);

Shape& Shape601 =  Shape();
LineSet& LineSet602 =  LineSet();
LineSet602.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA603 =  ColorRGBA();
ColorRGBA603.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet602.addChild(&ColorRGBA603);

Coordinate& Coordinate604 =  Coordinate();
Coordinate604.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
LineSet602.setCoord(Coordinate604);

Shape601.setGeometry(&LineSet602);

HAnimSegment597.addChild(&Shape601);

Shape& Shape605 =  Shape();
LineSet& LineSet606 =  LineSet();
LineSet606.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA607 =  ColorRGBA();
ColorRGBA607.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet606.addChild(&ColorRGBA607);

Coordinate& Coordinate608 =  Coordinate();
Coordinate608.setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet606.setCoord(Coordinate608);

Shape605.setGeometry(&LineSet606);

HAnimSegment597.addChild(&Shape605);

Shape& Shape609 =  Shape();
LineSet& LineSet610 =  LineSet();
LineSet610.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA611 =  ColorRGBA();
ColorRGBA611.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet610.addChild(&ColorRGBA611);

Coordinate& Coordinate612 =  Coordinate();
Coordinate612.setPoint(new float[]{0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353}, 6);
LineSet610.setCoord(Coordinate612);

Shape609.setGeometry(&LineSet610);

HAnimSegment597.addChild(&Shape609);

Shape& Shape613 =  Shape();
LineSet& LineSet614 =  LineSet();
LineSet614.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA615 =  ColorRGBA();
ColorRGBA615.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet614.addChild(&ColorRGBA615);

Coordinate& Coordinate616 =  Coordinate();
Coordinate616.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551}, 6);
LineSet614.setCoord(Coordinate616);

Shape613.setGeometry(&LineSet614);

HAnimSegment597.addChild(&Shape613);

Shape& Shape617 =  Shape();
LineSet& LineSet618 =  LineSet();
LineSet618.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA619 =  ColorRGBA();
ColorRGBA619.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet618.addChild(&ColorRGBA619);

Coordinate& Coordinate620 =  Coordinate();
Coordinate620.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815}, 6);
LineSet618.setCoord(Coordinate620);

Shape617.setGeometry(&LineSet618);

HAnimSegment597.addChild(&Shape617);

HAnimSite& HAnimSite621 =  HAnimSite();
HAnimSite621.setDEF(CString("hanim_suprasternale_pt"));
HAnimSite621.X3DNode::setName(CString("suprasternale_pt"));
HAnimSite621.setTranslation(new float[]{0.0084,1.4714,0.0551});
TouchSensor& TouchSensor622 =  TouchSensor();
TouchSensor622.setDescription(CString("HAnimSite suprasternale"));
HAnimSite621.addChild(&TouchSensor622);

Shape& Shape623 =  Shape();
Shape623.setUSE(CString("HAnimSiteShape"));
HAnimSite621.addChild(&Shape623);

HAnimSegment597.addChild(&HAnimSite621);

HAnimSite& HAnimSite624 =  HAnimSite();
HAnimSite624.setDEF(CString("hanim_cervicale_pt"));
HAnimSite624.X3DNode::setName(CString("cervicale_pt"));
HAnimSite624.setTranslation(new float[]{0.0064,1.52,-0.0815});
TouchSensor& TouchSensor625 =  TouchSensor();
TouchSensor625.setDescription(CString("HAnimSite cervicale"));
HAnimSite624.addChild(&TouchSensor625);

Shape& Shape626 =  Shape();
Shape626.setUSE(CString("HAnimSiteShape"));
HAnimSite624.addChild(&Shape626);

HAnimSegment597.addChild(&HAnimSite624);

HAnimJoint596.addChildren(&HAnimSegment597);

HAnimJoint& HAnimJoint627 =  HAnimJoint();
HAnimJoint627.setDEF(CString("hanim_vc7"));
HAnimJoint627.X3DNode::setName(CString("vc7"));
HAnimJoint627.setCenter(new float[]{0.0066,1.5132,-0.0301});
HAnimSegment& HAnimSegment628 =  HAnimSegment();
HAnimSegment628.setDEF(CString("hanim_c7"));
HAnimSegment628.X3DNode::setName(CString("c7"));
TouchSensor& TouchSensor629 =  TouchSensor();
TouchSensor629.setDescription(CString("HAnimJoint vc7, HAnimSegment c7"));
HAnimSegment628.addChild(&TouchSensor629);

Transform& Transform630 =  Transform();
Transform630.setTranslation(new float[]{0.0066,1.5132,-0.0301});
Shape& Shape631 =  Shape();
Shape631.setUSE(CString("HAnimJointShape"));
Transform630.addChild(&Shape631);

HAnimSegment628.addChild(&Transform630);

Shape& Shape632 =  Shape();
LineSet& LineSet633 =  LineSet();
LineSet633.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA634 =  ColorRGBA();
ColorRGBA634.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet633.addChild(&ColorRGBA634);

Coordinate& Coordinate635 =  Coordinate();
Coordinate635.setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
LineSet633.setCoord(Coordinate635);

Shape632.setGeometry(&LineSet633);

HAnimSegment628.addChild(&Shape632);

Shape& Shape636 =  Shape();
LineSet& LineSet637 =  LineSet();
LineSet637.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA638 =  ColorRGBA();
ColorRGBA638.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet637.addChild(&ColorRGBA638);

Coordinate& Coordinate639 =  Coordinate();
Coordinate639.setPoint(new float[]{0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022}, 6);
LineSet637.setCoord(Coordinate639);

Shape636.setGeometry(&LineSet637);

HAnimSegment628.addChild(&Shape636);

Shape& Shape640 =  Shape();
LineSet& LineSet641 =  LineSet();
LineSet641.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA642 =  ColorRGBA();
ColorRGBA642.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet641.addChild(&ColorRGBA642);

Coordinate& Coordinate643 =  Coordinate();
Coordinate643.setPoint(new float[]{0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038}, 6);
LineSet641.setCoord(Coordinate643);

Shape640.setGeometry(&LineSet641);

HAnimSegment628.addChild(&Shape640);

HAnimSite& HAnimSite644 =  HAnimSite();
HAnimSite644.setDEF(CString("hanim_r_neck_base_pt"));
HAnimSite644.X3DNode::setName(CString("r_neck_base_pt"));
HAnimSite644.setTranslation(new float[]{-0.0419,1.5149,-0.022});
TouchSensor& TouchSensor645 =  TouchSensor();
TouchSensor645.setDescription(CString("HAnimSite r_neck_base"));
HAnimSite644.addChild(&TouchSensor645);

Shape& Shape646 =  Shape();
Shape646.setUSE(CString("HAnimSiteShape"));
HAnimSite644.addChild(&Shape646);

HAnimSegment628.addChild(&HAnimSite644);

HAnimSite& HAnimSite647 =  HAnimSite();
HAnimSite647.setDEF(CString("hanim_l_neck_base_pt"));
HAnimSite647.X3DNode::setName(CString("l_neck_base_pt"));
HAnimSite647.setTranslation(new float[]{0.0646,1.5141,-0.038});
TouchSensor& TouchSensor648 =  TouchSensor();
TouchSensor648.setDescription(CString("HAnimSite l_neck_base"));
HAnimSite647.addChild(&TouchSensor648);

Shape& Shape649 =  Shape();
Shape649.setUSE(CString("HAnimSiteShape"));
HAnimSite647.addChild(&Shape649);

HAnimSegment628.addChild(&HAnimSite647);

HAnimJoint627.addChildren(&HAnimSegment628);

HAnimJoint& HAnimJoint650 =  HAnimJoint();
HAnimJoint650.setDEF(CString("hanim_vc6"));
HAnimJoint650.X3DNode::setName(CString("vc6"));
HAnimJoint650.setCenter(new float[]{0.0066,1.5357,-0.0143});
HAnimSegment& HAnimSegment651 =  HAnimSegment();
HAnimSegment651.setDEF(CString("hanim_c6"));
HAnimSegment651.X3DNode::setName(CString("c6"));
TouchSensor& TouchSensor652 =  TouchSensor();
TouchSensor652.setDescription(CString("HAnimJoint vc6, HAnimSegment c6"));
HAnimSegment651.addChild(&TouchSensor652);

Transform& Transform653 =  Transform();
Transform653.setTranslation(new float[]{0.0066,1.5357,-0.0143});
Shape& Shape654 =  Shape();
Shape654.setUSE(CString("HAnimJointShape"));
Transform653.addChild(&Shape654);

HAnimSegment651.addChild(&Transform653);

Shape& Shape655 =  Shape();
LineSet& LineSet656 =  LineSet();
LineSet656.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA657 =  ColorRGBA();
ColorRGBA657.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet656.addChild(&ColorRGBA657);

Coordinate& Coordinate658 =  Coordinate();
Coordinate658.setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
LineSet656.setCoord(Coordinate658);

Shape655.setGeometry(&LineSet656);

HAnimSegment651.addChild(&Shape655);

HAnimJoint650.addChildren(&HAnimSegment651);

HAnimJoint& HAnimJoint659 =  HAnimJoint();
HAnimJoint659.setDEF(CString("hanim_vc5"));
HAnimJoint659.X3DNode::setName(CString("vc5"));
HAnimJoint659.setCenter(new float[]{0.0066,1.552,-0.0082});
HAnimSegment& HAnimSegment660 =  HAnimSegment();
HAnimSegment660.setDEF(CString("hanim_c5"));
HAnimSegment660.X3DNode::setName(CString("c5"));
TouchSensor& TouchSensor661 =  TouchSensor();
TouchSensor661.setDescription(CString("HAnimJoint vc5, HAnimSegment c5"));
HAnimSegment660.addChild(&TouchSensor661);

Transform& Transform662 =  Transform();
Transform662.setTranslation(new float[]{0.0066,1.552,-0.0082});
Shape& Shape663 =  Shape();
Shape663.setUSE(CString("HAnimJointShape"));
Transform662.addChild(&Shape663);

HAnimSegment660.addChild(&Transform662);

Shape& Shape664 =  Shape();
LineSet& LineSet665 =  LineSet();
LineSet665.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA666 =  ColorRGBA();
ColorRGBA666.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet665.addChild(&ColorRGBA666);

Coordinate& Coordinate667 =  Coordinate();
Coordinate667.setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
LineSet665.setCoord(Coordinate667);

Shape664.setGeometry(&LineSet665);

HAnimSegment660.addChild(&Shape664);

HAnimJoint659.addChildren(&HAnimSegment660);

HAnimJoint& HAnimJoint668 =  HAnimJoint();
HAnimJoint668.setDEF(CString("hanim_vc4"));
HAnimJoint668.X3DNode::setName(CString("vc4"));
HAnimJoint668.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimSegment& HAnimSegment669 =  HAnimSegment();
HAnimSegment669.setDEF(CString("hanim_c4"));
HAnimSegment669.X3DNode::setName(CString("c4"));
TouchSensor& TouchSensor670 =  TouchSensor();
TouchSensor670.setDescription(CString("HAnimJoint vc4, HAnimSegment c4"));
HAnimSegment669.addChild(&TouchSensor670);

Transform& Transform671 =  Transform();
Transform671.setTranslation(new float[]{0.0066,1.5662,-0.0084});
Shape& Shape672 =  Shape();
Shape672.setUSE(CString("HAnimJointShape"));
Transform671.addChild(&Shape672);

HAnimSegment669.addChild(&Transform671);

Shape& Shape673 =  Shape();
LineSet& LineSet674 =  LineSet();
LineSet674.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA675 =  ColorRGBA();
ColorRGBA675.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet674.addChild(&ColorRGBA675);

Coordinate& Coordinate676 =  Coordinate();
Coordinate676.setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
LineSet674.setCoord(Coordinate676);

Shape673.setGeometry(&LineSet674);

HAnimSegment669.addChild(&Shape673);

HAnimJoint668.addChildren(&HAnimSegment669);

HAnimJoint& HAnimJoint677 =  HAnimJoint();
HAnimJoint677.setDEF(CString("hanim_vc3"));
HAnimJoint677.X3DNode::setName(CString("vc3"));
HAnimJoint677.setCenter(new float[]{0.0066,1.58,-0.0103});
HAnimSegment& HAnimSegment678 =  HAnimSegment();
HAnimSegment678.setDEF(CString("hanim_c3"));
HAnimSegment678.X3DNode::setName(CString("c3"));
TouchSensor& TouchSensor679 =  TouchSensor();
TouchSensor679.setDescription(CString("HAnimJoint vc3, HAnimSegment c3"));
HAnimSegment678.addChild(&TouchSensor679);

Transform& Transform680 =  Transform();
Transform680.setTranslation(new float[]{0.0066,1.58,-0.0103});
Shape& Shape681 =  Shape();
Shape681.setUSE(CString("HAnimJointShape"));
Transform680.addChild(&Shape681);

HAnimSegment678.addChild(&Transform680);

Shape& Shape682 =  Shape();
LineSet& LineSet683 =  LineSet();
LineSet683.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA684 =  ColorRGBA();
ColorRGBA684.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet683.addChild(&ColorRGBA684);

Coordinate& Coordinate685 =  Coordinate();
Coordinate685.setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
LineSet683.setCoord(Coordinate685);

Shape682.setGeometry(&LineSet683);

HAnimSegment678.addChild(&Shape682);

HAnimJoint677.addChildren(&HAnimSegment678);

HAnimJoint& HAnimJoint686 =  HAnimJoint();
HAnimJoint686.setDEF(CString("hanim_vc2"));
HAnimJoint686.X3DNode::setName(CString("vc2"));
HAnimJoint686.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimSegment& HAnimSegment687 =  HAnimSegment();
HAnimSegment687.setDEF(CString("hanim_c2"));
HAnimSegment687.X3DNode::setName(CString("c2"));
TouchSensor& TouchSensor688 =  TouchSensor();
TouchSensor688.setDescription(CString("HAnimJoint vc2, HAnimSegment c2"));
HAnimSegment687.addChild(&TouchSensor688);

Transform& Transform689 =  Transform();
Transform689.setTranslation(new float[]{0.0066,1.5928,-0.0103});
Shape& Shape690 =  Shape();
Shape690.setUSE(CString("HAnimJointShape"));
Transform689.addChild(&Shape690);

HAnimSegment687.addChild(&Transform689);

Shape& Shape691 =  Shape();
LineSet& LineSet692 =  LineSet();
LineSet692.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA693 =  ColorRGBA();
ColorRGBA693.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet692.addChild(&ColorRGBA693);

Coordinate& Coordinate694 =  Coordinate();
Coordinate694.setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
LineSet692.setCoord(Coordinate694);

Shape691.setGeometry(&LineSet692);

HAnimSegment687.addChild(&Shape691);

HAnimJoint686.addChildren(&HAnimSegment687);

HAnimJoint& HAnimJoint695 =  HAnimJoint();
HAnimJoint695.setDEF(CString("hanim_vc1"));
HAnimJoint695.X3DNode::setName(CString("vc1"));
HAnimJoint695.setCenter(new float[]{0.0066,1.6144,-0.0034});
HAnimSegment& HAnimSegment696 =  HAnimSegment();
HAnimSegment696.setDEF(CString("hanim_c1"));
HAnimSegment696.X3DNode::setName(CString("c1"));
TouchSensor& TouchSensor697 =  TouchSensor();
TouchSensor697.setDescription(CString("HAnimJoint vc1, HAnimSegment c1"));
HAnimSegment696.addChild(&TouchSensor697);

Transform& Transform698 =  Transform();
Transform698.setTranslation(new float[]{0.0066,1.6144,-0.0034});
Shape& Shape699 =  Shape();
Shape699.setUSE(CString("HAnimJointShape"));
Transform698.addChild(&Shape699);

HAnimSegment696.addChild(&Transform698);

Shape& Shape700 =  Shape();
LineSet& LineSet701 =  LineSet();
LineSet701.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA702 =  ColorRGBA();
ColorRGBA702.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet701.addChild(&ColorRGBA702);

Coordinate& Coordinate703 =  Coordinate();
Coordinate703.setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
LineSet701.setCoord(Coordinate703);

Shape700.setGeometry(&LineSet701);

HAnimSegment696.addChild(&Shape700);

HAnimJoint695.addChildren(&HAnimSegment696);

HAnimJoint& HAnimJoint704 =  HAnimJoint();
HAnimJoint704.setDEF(CString("hanim_skullbase"));
HAnimJoint704.X3DNode::setName(CString("skullbase"));
HAnimJoint704.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimSegment& HAnimSegment705 =  HAnimSegment();
HAnimSegment705.setDEF(CString("hanim_skull"));
HAnimSegment705.X3DNode::setName(CString("skull"));
TouchSensor& TouchSensor706 =  TouchSensor();
TouchSensor706.setDescription(CString("HAnimJoint skullbase, HAnimSegment skull"));
HAnimSegment705.addChild(&TouchSensor706);

Transform& Transform707 =  Transform();
Transform707.setTranslation(new float[]{0.0044,1.6209,0.0236});
Shape& Shape708 =  Shape();
Shape708.setUSE(CString("HAnimJointShape"));
Transform707.addChild(&Shape708);

HAnimSegment705.addChild(&Transform707);

Shape& Shape709 =  Shape();
LineSet& LineSet710 =  LineSet();
LineSet710.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA711 =  ColorRGBA();
ColorRGBA711.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet710.addChild(&ColorRGBA711);

Coordinate& Coordinate712 =  Coordinate();
Coordinate712.setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502}, 6);
LineSet710.setCoord(Coordinate712);

Shape709.setGeometry(&LineSet710);

HAnimSegment705.addChild(&Shape709);

Shape& Shape713 =  Shape();
LineSet& LineSet714 =  LineSet();
LineSet714.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA715 =  ColorRGBA();
ColorRGBA715.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet714.addChild(&ColorRGBA715);

Coordinate& Coordinate716 =  Coordinate();
Coordinate716.setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502}, 6);
LineSet714.setCoord(Coordinate716);

Shape713.setGeometry(&LineSet714);

HAnimSegment705.addChild(&Shape713);

Shape& Shape717 =  Shape();
LineSet& LineSet718 =  LineSet();
LineSet718.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA719 =  ColorRGBA();
ColorRGBA719.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet718.addChild(&ColorRGBA719);

Coordinate& Coordinate720 =  Coordinate();
Coordinate720.setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.635,0.0506}, 6);
LineSet718.setCoord(Coordinate720);

Shape717.setGeometry(&LineSet718);

HAnimSegment705.addChild(&Shape717);

Shape& Shape721 =  Shape();
LineSet& LineSet722 =  LineSet();
LineSet722.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA723 =  ColorRGBA();
ColorRGBA723.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet722.addChild(&ColorRGBA723);

Coordinate& Coordinate724 =  Coordinate();
Coordinate724.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502}, 6);
LineSet722.setCoord(Coordinate724);

Shape721.setGeometry(&LineSet722);

HAnimSegment705.addChild(&Shape721);

Shape& Shape725 =  Shape();
LineSet& LineSet726 =  LineSet();
LineSet726.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA727 =  ColorRGBA();
ColorRGBA727.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet726.addChild(&ColorRGBA727);

Coordinate& Coordinate728 =  Coordinate();
Coordinate728.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502}, 6);
LineSet726.setCoord(Coordinate728);

Shape725.setGeometry(&LineSet726);

HAnimSegment705.addChild(&Shape725);

Shape& Shape729 =  Shape();
LineSet& LineSet730 =  LineSet();
LineSet730.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA731 =  ColorRGBA();
ColorRGBA731.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet730.addChild(&ColorRGBA731);

Coordinate& Coordinate732 =  Coordinate();
Coordinate732.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.635,0.0506}, 6);
LineSet730.setCoord(Coordinate732);

Shape729.setGeometry(&LineSet730);

HAnimSegment705.addChild(&Shape729);

Shape& Shape733 =  Shape();
LineSet& LineSet734 =  LineSet();
LineSet734.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA735 =  ColorRGBA();
ColorRGBA735.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet734.addChild(&ColorRGBA735);

Coordinate& Coordinate736 =  Coordinate();
Coordinate736.setPoint(new float[]{0.0044,1.6209,0.0236,0.0,1.63,0.015}, 6);
LineSet734.setCoord(Coordinate736);

Shape733.setGeometry(&LineSet734);

HAnimSegment705.addChild(&Shape733);

Shape& Shape737 =  Shape();
LineSet& LineSet738 =  LineSet();
LineSet738.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA739 =  ColorRGBA();
ColorRGBA739.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet738.addChild(&ColorRGBA739);

Coordinate& Coordinate740 =  Coordinate();
Coordinate740.setPoint(new float[]{0.0044,1.6209,0.0236,0.005,1.7504,0.0055}, 6);
LineSet738.setCoord(Coordinate740);

Shape737.setGeometry(&LineSet738);

HAnimSegment705.addChild(&Shape737);

Shape& Shape741 =  Shape();
LineSet& LineSet742 =  LineSet();
LineSet742.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA743 =  ColorRGBA();
ColorRGBA743.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet742.addChild(&ColorRGBA743);

Coordinate& Coordinate744 =  Coordinate();
Coordinate744.setPoint(new float[]{0.0044,1.6209,0.0236,0.0058,1.6316,0.0852}, 6);
LineSet742.setCoord(Coordinate744);

Shape741.setGeometry(&LineSet742);

HAnimSegment705.addChild(&Shape741);

Shape& Shape745 =  Shape();
LineSet& LineSet746 =  LineSet();
LineSet746.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA747 =  ColorRGBA();
ColorRGBA747.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet746.addChild(&ColorRGBA747);

Coordinate& Coordinate748 =  Coordinate();
Coordinate748.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752}, 6);
LineSet746.setCoord(Coordinate748);

Shape745.setGeometry(&LineSet746);

HAnimSegment705.addChild(&Shape745);

Shape& Shape749 =  Shape();
LineSet& LineSet750 =  LineSet();
LineSet750.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA751 =  ColorRGBA();
ColorRGBA751.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet750.addChild(&ColorRGBA751);

Coordinate& Coordinate752 =  Coordinate();
Coordinate752.setPoint(new float[]{0.0044,1.6209,0.0236,0.0341,1.6171,0.0752}, 6);
LineSet750.setCoord(Coordinate752);

Shape749.setGeometry(&LineSet750);

HAnimSegment705.addChild(&Shape749);

Shape& Shape753 =  Shape();
LineSet& LineSet754 =  LineSet();
LineSet754.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA755 =  ColorRGBA();
ColorRGBA755.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet754.addChild(&ColorRGBA755);

Coordinate& Coordinate756 =  Coordinate();
Coordinate756.setPoint(new float[]{0.0044,1.6209,0.0236,0.0061,1.541,0.0805}, 6);
LineSet754.setCoord(Coordinate756);

Shape753.setGeometry(&LineSet754);

HAnimSegment705.addChild(&Shape753);

Shape& Shape757 =  Shape();
LineSet& LineSet758 =  LineSet();
LineSet758.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA759 =  ColorRGBA();
ColorRGBA759.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet758.addChild(&ColorRGBA759);

Coordinate& Coordinate760 =  Coordinate();
Coordinate760.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302}, 6);
LineSet758.setCoord(Coordinate760);

Shape757.setGeometry(&LineSet758);

HAnimSegment705.addChild(&Shape757);

Shape& Shape761 =  Shape();
LineSet& LineSet762 =  LineSet();
LineSet762.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA763 =  ColorRGBA();
ColorRGBA763.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet762.addChild(&ColorRGBA763);

Coordinate& Coordinate764 =  Coordinate();
Coordinate764.setPoint(new float[]{0.0044,1.6209,0.0236,-0.052,1.5529,0.0347}, 6);
LineSet762.setCoord(Coordinate764);

Shape761.setGeometry(&LineSet762);

HAnimSegment705.addChild(&Shape761);

Shape& Shape765 =  Shape();
LineSet& LineSet766 =  LineSet();
LineSet766.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA767 =  ColorRGBA();
ColorRGBA767.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet766.addChild(&ColorRGBA767);

Coordinate& Coordinate768 =  Coordinate();
Coordinate768.setPoint(new float[]{0.0044,1.6209,0.0236,0.0739,1.6348,0.0282}, 6);
LineSet766.setCoord(Coordinate768);

Shape765.setGeometry(&LineSet766);

HAnimSegment705.addChild(&Shape765);

Shape& Shape769 =  Shape();
LineSet& LineSet770 =  LineSet();
LineSet770.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA771 =  ColorRGBA();
ColorRGBA771.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet770.addChild(&ColorRGBA771);

Coordinate& Coordinate772 =  Coordinate();
Coordinate772.setPoint(new float[]{0.0044,1.6209,0.0236,0.0631,1.553,0.033}, 6);
LineSet770.setCoord(Coordinate772);

Shape769.setGeometry(&LineSet770);

HAnimSegment705.addChild(&Shape769);

Shape& Shape773 =  Shape();
LineSet& LineSet774 =  LineSet();
LineSet774.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA775 =  ColorRGBA();
ColorRGBA775.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet774.addChild(&ColorRGBA775);

Coordinate& Coordinate776 =  Coordinate();
Coordinate776.setPoint(new float[]{0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796}, 6);
LineSet774.setCoord(Coordinate776);

Shape773.setGeometry(&LineSet774);

HAnimSegment705.addChild(&Shape773);

HAnimSite& HAnimSite777 =  HAnimSite();
HAnimSite777.setDEF(CString("hanim_skull_tip"));
HAnimSite777.X3DNode::setName(CString("skull_tip"));
HAnimSite777.setTranslation(new float[]{0.005,1.7504,0.0055});
TouchSensor& TouchSensor778 =  TouchSensor();
TouchSensor778.setDescription(CString("HAnimSite skull_tip"));
HAnimSite777.addChild(&TouchSensor778);

Shape& Shape779 =  Shape();
Shape779.setUSE(CString("HAnimSiteShape"));
HAnimSite777.addChild(&Shape779);

HAnimSegment705.addChild(&HAnimSite777);

HAnimSite& HAnimSite780 =  HAnimSite();
HAnimSite780.setDEF(CString("hanim_sellion_pt"));
HAnimSite780.X3DNode::setName(CString("sellion_pt"));
HAnimSite780.setTranslation(new float[]{0.0058,1.6316,0.0852});
TouchSensor& TouchSensor781 =  TouchSensor();
TouchSensor781.setDescription(CString("HAnimSite sellion"));
HAnimSite780.addChild(&TouchSensor781);

Shape& Shape782 =  Shape();
Shape782.setUSE(CString("HAnimSiteShape"));
HAnimSite780.addChild(&Shape782);

HAnimSegment705.addChild(&HAnimSite780);

HAnimSite& HAnimSite783 =  HAnimSite();
HAnimSite783.setDEF(CString("hanim_r_infraorbitale_pt"));
HAnimSite783.X3DNode::setName(CString("r_infraorbitale_pt"));
HAnimSite783.setTranslation(new float[]{-0.0237,1.6171,0.0752});
TouchSensor& TouchSensor784 =  TouchSensor();
TouchSensor784.setDescription(CString("HAnimSite r_infraorbitale"));
HAnimSite783.addChild(&TouchSensor784);

Shape& Shape785 =  Shape();
Shape785.setUSE(CString("HAnimSiteShape"));
HAnimSite783.addChild(&Shape785);

HAnimSegment705.addChild(&HAnimSite783);

HAnimSite& HAnimSite786 =  HAnimSite();
HAnimSite786.setDEF(CString("hanim_l_infraorbitale_pt"));
HAnimSite786.X3DNode::setName(CString("l_infraorbitale_pt"));
HAnimSite786.setTranslation(new float[]{0.0341,1.6171,0.0752});
TouchSensor& TouchSensor787 =  TouchSensor();
TouchSensor787.setDescription(CString("HAnimSite l_infraorbitale"));
HAnimSite786.addChild(&TouchSensor787);

Shape& Shape788 =  Shape();
Shape788.setUSE(CString("HAnimSiteShape"));
HAnimSite786.addChild(&Shape788);

HAnimSegment705.addChild(&HAnimSite786);

HAnimSite& HAnimSite789 =  HAnimSite();
HAnimSite789.setDEF(CString("hanim_supramenton_pt"));
HAnimSite789.X3DNode::setName(CString("supramenton_pt"));
HAnimSite789.setTranslation(new float[]{0.0061,1.541,0.0805});
TouchSensor& TouchSensor790 =  TouchSensor();
TouchSensor790.setDescription(CString("HAnimSite supramenton"));
HAnimSite789.addChild(&TouchSensor790);

Shape& Shape791 =  Shape();
Shape791.setUSE(CString("HAnimSiteShape"));
HAnimSite789.addChild(&Shape791);

HAnimSegment705.addChild(&HAnimSite789);

HAnimSite& HAnimSite792 =  HAnimSite();
HAnimSite792.setDEF(CString("hanim_r_tragion_pt"));
HAnimSite792.X3DNode::setName(CString("r_tragion_pt"));
HAnimSite792.setTranslation(new float[]{-0.0646,1.6347,0.0302});
TouchSensor& TouchSensor793 =  TouchSensor();
TouchSensor793.setDescription(CString("HAnimSite r_tragion"));
HAnimSite792.addChild(&TouchSensor793);

Shape& Shape794 =  Shape();
Shape794.setUSE(CString("HAnimSiteShape"));
HAnimSite792.addChild(&Shape794);

HAnimSegment705.addChild(&HAnimSite792);

HAnimSite& HAnimSite795 =  HAnimSite();
HAnimSite795.setDEF(CString("hanim_r_gonion_pt"));
HAnimSite795.X3DNode::setName(CString("r_gonion_pt"));
HAnimSite795.setTranslation(new float[]{-0.052,1.5529,0.0347});
TouchSensor& TouchSensor796 =  TouchSensor();
TouchSensor796.setDescription(CString("HAnimSite r_gonion"));
HAnimSite795.addChild(&TouchSensor796);

Shape& Shape797 =  Shape();
Shape797.setUSE(CString("HAnimSiteShape"));
HAnimSite795.addChild(&Shape797);

HAnimSegment705.addChild(&HAnimSite795);

HAnimSite& HAnimSite798 =  HAnimSite();
HAnimSite798.setDEF(CString("hanim_l_tragion_pt"));
HAnimSite798.X3DNode::setName(CString("l_tragion_pt"));
HAnimSite798.setTranslation(new float[]{0.0739,1.6348,0.0282});
TouchSensor& TouchSensor799 =  TouchSensor();
TouchSensor799.setDescription(CString("HAnimSite l_tragion"));
HAnimSite798.addChild(&TouchSensor799);

Shape& Shape800 =  Shape();
Shape800.setUSE(CString("HAnimSiteShape"));
HAnimSite798.addChild(&Shape800);

HAnimSegment705.addChild(&HAnimSite798);

HAnimSite& HAnimSite801 =  HAnimSite();
HAnimSite801.setDEF(CString("hanim_l_gonion_pt"));
HAnimSite801.X3DNode::setName(CString("l_gonion_pt"));
HAnimSite801.setTranslation(new float[]{0.0631,1.553,0.033});
TouchSensor& TouchSensor802 =  TouchSensor();
TouchSensor802.setDescription(CString("HAnimSite l_gonion"));
HAnimSite801.addChild(&TouchSensor802);

Shape& Shape803 =  Shape();
Shape803.setUSE(CString("HAnimSiteShape"));
HAnimSite801.addChild(&Shape803);

HAnimSegment705.addChild(&HAnimSite801);

HAnimSite& HAnimSite804 =  HAnimSite();
HAnimSite804.setDEF(CString("hanim_nuchale_pt"));
HAnimSite804.X3DNode::setName(CString("nuchale_pt"));
HAnimSite804.setTranslation(new float[]{0.0039,1.5972,-0.0796});
TouchSensor& TouchSensor805 =  TouchSensor();
TouchSensor805.setDescription(CString("HAnimSite nuchale"));
HAnimSite804.addChild(&TouchSensor805);

Shape& Shape806 =  Shape();
Shape806.setUSE(CString("HAnimSiteShape"));
HAnimSite804.addChild(&Shape806);

HAnimSegment705.addChild(&HAnimSite804);

HAnimJoint704.addChildren(&HAnimSegment705);

HAnimJoint& HAnimJoint807 =  HAnimJoint();
HAnimJoint807.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint807.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint807.setCenter(new float[]{0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment808 =  HAnimSegment();
HAnimSegment808.setDEF(CString("hanim_l_eyeball"));
HAnimSegment808.X3DNode::setName(CString("l_eyeball"));
TouchSensor& TouchSensor809 =  TouchSensor();
TouchSensor809.setDescription(CString("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"));
HAnimSegment808.addChild(&TouchSensor809);

Transform& Transform810 =  Transform();
Transform810.setTranslation(new float[]{0.0336,1.6332,0.0502});
Shape& Shape811 =  Shape();
Shape811.setUSE(CString("HAnimJointShape"));
Transform810.addChild(&Shape811);

HAnimSegment808.addChild(&Transform810);

Shape& Shape812 =  Shape();
LineSet& LineSet813 =  LineSet();
LineSet813.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA814 =  ColorRGBA();
ColorRGBA814.setDEF(CString("HAnimSiteViewpointLineColorRGBA"));
ColorRGBA814.setColor(new float[]{0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.1}, 8);
LineSet813.addChild(&ColorRGBA814);

Coordinate& Coordinate815 =  Coordinate();
Coordinate815.setPoint(new float[]{0.0336,1.6332,0.0502,0.034,1.64,0.05}, 6);
LineSet813.setCoord(Coordinate815);

Shape812.setGeometry(&LineSet813);

HAnimSegment808.addChild(&Shape812);

HAnimSite& HAnimSite816 =  HAnimSite();
HAnimSite816.setDEF(CString("hanim_l_eyeball_site_view"));
HAnimSite816.X3DNode::setName(CString("l_eyeball_site_view"));
HAnimSite816.setTranslation(new float[]{0.034,1.64,0.05});
TouchSensor& TouchSensor817 =  TouchSensor();
TouchSensor817.setDescription(CString("HAnimSite l_eyeball_site_view"));
HAnimSite816.addChild(&TouchSensor817);

Shape& Shape818 =  Shape();
Shape818.setUSE(CString("HAnimSiteShape"));
HAnimSite816.addChild(&Shape818);

Viewpoint& Viewpoint819 =  Viewpoint();
Viewpoint819.setDEF(CString("hanim_l_eyeball_site_viewpoint"));
Viewpoint819.setDescription(CString("l_eyeball_site_viewpoint looking forward"));
Viewpoint819.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint819.setOrientation(new float[]{0.0,1.0,0.0,3.141593});
HAnimSite816.addChild(&Viewpoint819);

Anchor& Anchor820 =  Anchor();
Anchor820.setDescription(CString("HAnimSite hanim_l_eyeball_site_view Viewpoint"));
Anchor820.setUrl(new CString[]{CString("#hanim_l_eyeball_site_viewpoint")}, 1);
LOD& LOD821 =  LOD();
LOD821.setForceTransitions(true);
LOD821.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo822 =  WorldInfo();
WorldInfo822.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD821.addChildren(&WorldInfo822);

Shape& Shape823 =  Shape();
Shape823.setDEF(CString("HAnimSiteViewpointShape"));
Appearance& Appearance824 =  Appearance();
Material& Material825 =  Material();
Material825.setDiffuseColor(new float[]{0.0,0.0,1.0});
Material825.setTransparency(0.6);
Appearance824.addChild(&Material825);

Shape823.addChild(&Appearance824);

IndexedFaceSet& IndexedFaceSet826 =  IndexedFaceSet();
IndexedFaceSet826.setDEF(CString("SiteViewpointDiamondIFS"));
IndexedFaceSet826.setCreaseAngle(0.5);
IndexedFaceSet826.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate827 =  Coordinate();
Coordinate827.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet826.setCoord(&Coordinate827);

Shape823.setGeometry(&IndexedFaceSet826);

LOD821.addChildren(Shape823);

Anchor820.addChild(&LOD821);

HAnimSite816.addChild(Anchor820);

HAnimSegment808.addChild(&HAnimSite816);

HAnimJoint807.addChildren(&HAnimSegment808);

HAnimJoint704.addChildren(&HAnimJoint807);

HAnimJoint& HAnimJoint828 =  HAnimJoint();
HAnimJoint828.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint828.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint828.setCenter(new float[]{0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment829 =  HAnimSegment();
HAnimSegment829.setDEF(CString("hanim_l_eyelid"));
HAnimSegment829.X3DNode::setName(CString("l_eyelid"));
TouchSensor& TouchSensor830 =  TouchSensor();
TouchSensor830.setDescription(CString("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"));
HAnimSegment829.addChild(&TouchSensor830);

Transform& Transform831 =  Transform();
Transform831.setTranslation(new float[]{0.0336,1.6332,0.0502});
Shape& Shape832 =  Shape();
Shape832.setUSE(CString("HAnimJointShape"));
Transform831.addChild(&Shape832);

HAnimSegment829.addChild(&Transform831);

HAnimJoint828.addChildren(&HAnimSegment829);

HAnimJoint704.addChildren(&HAnimJoint828);

HAnimJoint& HAnimJoint833 =  HAnimJoint();
HAnimJoint833.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint833.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint833.setCenter(new float[]{0.0336,1.635,0.0506});
HAnimSegment& HAnimSegment834 =  HAnimSegment();
HAnimSegment834.setDEF(CString("hanim_l_eyebrow"));
HAnimSegment834.X3DNode::setName(CString("l_eyebrow"));
TouchSensor& TouchSensor835 =  TouchSensor();
TouchSensor835.setDescription(CString("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"));
HAnimSegment834.addChild(&TouchSensor835);

Transform& Transform836 =  Transform();
Transform836.setTranslation(new float[]{0.0336,1.635,0.0506});
Shape& Shape837 =  Shape();
Shape837.setUSE(CString("HAnimJointShape"));
Transform836.addChild(&Shape837);

HAnimSegment834.addChild(&Transform836);

HAnimJoint833.addChildren(&HAnimSegment834);

HAnimJoint704.addChildren(&HAnimJoint833);

HAnimJoint& HAnimJoint838 =  HAnimJoint();
HAnimJoint838.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint838.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint838.setCenter(new float[]{-0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment839 =  HAnimSegment();
HAnimSegment839.setDEF(CString("hanim_r_eyeball"));
HAnimSegment839.X3DNode::setName(CString("r_eyeball"));
TouchSensor& TouchSensor840 =  TouchSensor();
TouchSensor840.setDescription(CString("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"));
HAnimSegment839.addChild(&TouchSensor840);

Transform& Transform841 =  Transform();
Transform841.setTranslation(new float[]{-0.0336,1.6332,0.0502});
Shape& Shape842 =  Shape();
Shape842.setUSE(CString("HAnimJointShape"));
Transform841.addChild(&Shape842);

HAnimSegment839.addChild(&Transform841);

Shape& Shape843 =  Shape();
LineSet& LineSet844 =  LineSet();
LineSet844.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA845 =  ColorRGBA();
ColorRGBA845.setUSE(CString("HAnimSiteViewpointLineColorRGBA"));
LineSet844.addChild(&ColorRGBA845);

Coordinate& Coordinate846 =  Coordinate();
Coordinate846.setPoint(new float[]{-0.0336,1.6332,0.0502,-0.034,1.64,0.05}, 6);
LineSet844.setCoord(Coordinate846);

Shape843.setGeometry(&LineSet844);

HAnimSegment839.addChild(&Shape843);

HAnimSite& HAnimSite847 =  HAnimSite();
HAnimSite847.setDEF(CString("hanim_r_eyeball_site_view"));
HAnimSite847.X3DNode::setName(CString("r_eyeball_site_view"));
HAnimSite847.setTranslation(new float[]{-0.034,1.64,0.05});
TouchSensor& TouchSensor848 =  TouchSensor();
TouchSensor848.setDescription(CString("HAnimSite r_eyeball_site_view"));
HAnimSite847.addChild(&TouchSensor848);

Shape& Shape849 =  Shape();
Shape849.setUSE(CString("HAnimSiteShape"));
HAnimSite847.addChild(&Shape849);

Viewpoint& Viewpoint850 =  Viewpoint();
Viewpoint850.setDEF(CString("hanim_r_eyeball_site_viewpoint"));
Viewpoint850.setDescription(CString("r_eyeball_site_viewpoint looking forward"));
Viewpoint850.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint850.setOrientation(new float[]{0.0,1.0,0.0,3.141593});
HAnimSite847.addChild(&Viewpoint850);

Anchor& Anchor851 =  Anchor();
Anchor851.setDescription(CString("HAnimSite hanim_r_eyeball_site_view Viewpoint"));
Anchor851.setUrl(new CString[]{CString("#hanim_r_eyeball_site_viewpoint")}, 1);
LOD& LOD852 =  LOD();
LOD852.setForceTransitions(true);
LOD852.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo853 =  WorldInfo();
WorldInfo853.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD852.addChildren(&WorldInfo853);

Shape& Shape854 =  Shape();
Shape854.setUSE(CString("HAnimSiteViewpointShape"));
LOD852.addChildren(Shape854);

Anchor851.addChild(&LOD852);

HAnimSite847.addChild(Anchor851);

HAnimSegment839.addChild(&HAnimSite847);

HAnimJoint838.addChildren(&HAnimSegment839);

HAnimJoint704.addChildren(&HAnimJoint838);

HAnimJoint& HAnimJoint855 =  HAnimJoint();
HAnimJoint855.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint855.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint855.setCenter(new float[]{-0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment856 =  HAnimSegment();
HAnimSegment856.setDEF(CString("hanim_r_eyelid"));
HAnimSegment856.X3DNode::setName(CString("r_eyelid"));
TouchSensor& TouchSensor857 =  TouchSensor();
TouchSensor857.setDescription(CString("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"));
HAnimSegment856.addChild(&TouchSensor857);

Transform& Transform858 =  Transform();
Transform858.setTranslation(new float[]{-0.0336,1.6332,0.0502});
Shape& Shape859 =  Shape();
Shape859.setUSE(CString("HAnimJointShape"));
Transform858.addChild(&Shape859);

HAnimSegment856.addChild(&Transform858);

HAnimJoint855.addChildren(&HAnimSegment856);

HAnimJoint704.addChildren(&HAnimJoint855);

HAnimJoint& HAnimJoint860 =  HAnimJoint();
HAnimJoint860.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint860.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint860.setCenter(new float[]{-0.0336,1.635,0.0506});
HAnimSegment& HAnimSegment861 =  HAnimSegment();
HAnimSegment861.setDEF(CString("hanim_r_eyebrow"));
HAnimSegment861.X3DNode::setName(CString("r_eyebrow"));
TouchSensor& TouchSensor862 =  TouchSensor();
TouchSensor862.setDescription(CString("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"));
HAnimSegment861.addChild(&TouchSensor862);

Transform& Transform863 =  Transform();
Transform863.setTranslation(new float[]{-0.0336,1.635,0.0506});
Shape& Shape864 =  Shape();
Shape864.setUSE(CString("HAnimJointShape"));
Transform863.addChild(&Shape864);

HAnimSegment861.addChild(&Transform863);

HAnimJoint860.addChildren(&HAnimSegment861);

HAnimJoint704.addChildren(&HAnimJoint860);

HAnimJoint& HAnimJoint865 =  HAnimJoint();
HAnimJoint865.setDEF(CString("hanim_temporomandibular"));
HAnimJoint865.X3DNode::setName(CString("temporomandibular"));
HAnimJoint865.setCenter(new float[]{0.0,1.63,0.015});
HAnimSegment& HAnimSegment866 =  HAnimSegment();
HAnimSegment866.setDEF(CString("hanim_jaw"));
HAnimSegment866.X3DNode::setName(CString("jaw"));
TouchSensor& TouchSensor867 =  TouchSensor();
TouchSensor867.setDescription(CString("HAnimJoint temporomandibular, HAnimSegment jaw"));
HAnimSegment866.addChild(&TouchSensor867);

Transform& Transform868 =  Transform();
Transform868.setTranslation(new float[]{0.0,1.63,0.015});
Shape& Shape869 =  Shape();
Shape869.setUSE(CString("HAnimJointShape"));
Transform868.addChild(&Shape869);

HAnimSegment866.addChild(&Transform868);

Shape& Shape870 =  Shape();
LineSet& LineSet871 =  LineSet();
LineSet871.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA872 =  ColorRGBA();
ColorRGBA872.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet871.addChild(&ColorRGBA872);

Coordinate& Coordinate873 =  Coordinate();
Coordinate873.setPoint(new float[]{0.0,1.63,0.015,0.045,1.63,0.0}, 6);
LineSet871.setCoord(Coordinate873);

Shape870.setGeometry(&LineSet871);

HAnimSegment866.addChild(&Shape870);

Shape& Shape874 =  Shape();
LineSet& LineSet875 =  LineSet();
LineSet875.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA876 =  ColorRGBA();
ColorRGBA876.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet875.addChild(&ColorRGBA876);

Coordinate& Coordinate877 =  Coordinate();
Coordinate877.setPoint(new float[]{0.0,1.63,0.015,-0.045,1.63,0.0}, 6);
LineSet875.setCoord(Coordinate877);

Shape874.setGeometry(&LineSet875);

HAnimSegment866.addChild(&Shape874);

HAnimSite& HAnimSite878 =  HAnimSite();
HAnimSite878.setDEF(CString("hanim_temporomandibular_l_site_pt"));
HAnimSite878.X3DNode::setName(CString("temporomandibular_l_site_pt"));
HAnimSite878.setTranslation(new float[]{0.045,1.63,0.0});
TouchSensor& TouchSensor879 =  TouchSensor();
TouchSensor879.setDescription(CString("HAnimSite temporomandibular_l_site"));
HAnimSite878.addChild(&TouchSensor879);

Shape& Shape880 =  Shape();
Shape880.setUSE(CString("HAnimSiteShape"));
HAnimSite878.addChild(&Shape880);

HAnimSegment866.addChild(&HAnimSite878);

HAnimSite& HAnimSite881 =  HAnimSite();
HAnimSite881.setDEF(CString("hanim_temporomandibular_r_site_pt"));
HAnimSite881.X3DNode::setName(CString("temporomandibular_r_site_pt"));
HAnimSite881.setTranslation(new float[]{-0.045,1.63,0.0});
TouchSensor& TouchSensor882 =  TouchSensor();
TouchSensor882.setDescription(CString("HAnimSite temporomandibular_r_site"));
HAnimSite881.addChild(&TouchSensor882);

Shape& Shape883 =  Shape();
Shape883.setUSE(CString("HAnimSiteShape"));
HAnimSite881.addChild(&Shape883);

HAnimSegment866.addChild(&HAnimSite881);

HAnimJoint865.addChildren(&HAnimSegment866);

HAnimJoint704.addChildren(&HAnimJoint865);

HAnimJoint695.addChildren(&HAnimJoint704);

HAnimJoint686.addChildren(&HAnimJoint695);

HAnimJoint677.addChildren(&HAnimJoint686);

HAnimJoint668.addChildren(&HAnimJoint677);

HAnimJoint659.addChildren(&HAnimJoint668);

HAnimJoint650.addChildren(&HAnimJoint659);

HAnimJoint627.addChildren(&HAnimJoint650);

HAnimJoint596.addChildren(&HAnimJoint627);

HAnimJoint& HAnimJoint884 =  HAnimJoint();
HAnimJoint884.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint884.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint884.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment885 =  HAnimSegment();
HAnimSegment885.setDEF(CString("hanim_l_clavicle"));
HAnimSegment885.X3DNode::setName(CString("l_clavicle"));
TouchSensor& TouchSensor886 =  TouchSensor();
TouchSensor886.setDescription(CString("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"));
HAnimSegment885.addChild(&TouchSensor886);

Transform& Transform887 =  Transform();
Transform887.setTranslation(new float[]{0.082,1.4488,-0.0353});
Shape& Shape888 =  Shape();
Shape888.setUSE(CString("HAnimJointShape"));
Transform887.addChild(&Shape888);

HAnimSegment885.addChild(&Transform887);

Shape& Shape889 =  Shape();
LineSet& LineSet890 =  LineSet();
LineSet890.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA891 =  ColorRGBA();
ColorRGBA891.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet890.addChild(&ColorRGBA891);

Coordinate& Coordinate892 =  Coordinate();
Coordinate892.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet890.setCoord(Coordinate892);

Shape889.setGeometry(&LineSet890);

HAnimSegment885.addChild(&Shape889);

Shape& Shape893 =  Shape();
LineSet& LineSet894 =  LineSet();
LineSet894.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA895 =  ColorRGBA();
ColorRGBA895.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet894.addChild(&ColorRGBA895);

Coordinate& Coordinate896 =  Coordinate();
Coordinate896.setPoint(new float[]{0.082,1.4488,-0.0353,0.0271,1.4943,0.0394}, 6);
LineSet894.setCoord(Coordinate896);

Shape893.setGeometry(&LineSet894);

HAnimSegment885.addChild(&Shape893);

Shape& Shape897 =  Shape();
LineSet& LineSet898 =  LineSet();
LineSet898.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA899 =  ColorRGBA();
ColorRGBA899.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet898.addChild(&ColorRGBA899);

Coordinate& Coordinate900 =  Coordinate();
Coordinate900.setPoint(new float[]{0.082,1.4488,-0.0353,0.2032,1.476,-0.049}, 6);
LineSet898.setCoord(Coordinate900);

Shape897.setGeometry(&LineSet898);

HAnimSegment885.addChild(&Shape897);

Shape& Shape901 =  Shape();
LineSet& LineSet902 =  LineSet();
LineSet902.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA903 =  ColorRGBA();
ColorRGBA903.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet902.addChild(&ColorRGBA903);

Coordinate& Coordinate904 =  Coordinate();
Coordinate904.setPoint(new float[]{0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075}, 6);
LineSet902.setCoord(Coordinate904);

Shape901.setGeometry(&LineSet902);

HAnimSegment885.addChild(&Shape901);

Shape& Shape905 =  Shape();
LineSet& LineSet906 =  LineSet();
LineSet906.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA907 =  ColorRGBA();
ColorRGBA907.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet906.addChild(&ColorRGBA907);

Coordinate& Coordinate908 =  Coordinate();
Coordinate908.setPoint(new float[]{0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875}, 6);
LineSet906.setCoord(Coordinate908);

Shape905.setGeometry(&LineSet906);

HAnimSegment885.addChild(&Shape905);

HAnimSite& HAnimSite909 =  HAnimSite();
HAnimSite909.setDEF(CString("hanim_l_clavicale_pt"));
HAnimSite909.X3DNode::setName(CString("l_clavicale_pt"));
HAnimSite909.setTranslation(new float[]{0.0271,1.4943,0.0394});
TouchSensor& TouchSensor910 =  TouchSensor();
TouchSensor910.setDescription(CString("HAnimSite l_clavicale"));
HAnimSite909.addChild(&TouchSensor910);

Shape& Shape911 =  Shape();
Shape911.setUSE(CString("HAnimSiteShape"));
HAnimSite909.addChild(&Shape911);

HAnimSegment885.addChild(&HAnimSite909);

HAnimSite& HAnimSite912 =  HAnimSite();
HAnimSite912.setDEF(CString("hanim_l_acromion_pt"));
HAnimSite912.X3DNode::setName(CString("l_acromion_pt"));
HAnimSite912.setTranslation(new float[]{0.2032,1.476,-0.049});
TouchSensor& TouchSensor913 =  TouchSensor();
TouchSensor913.setDescription(CString("HAnimSite l_acromion"));
HAnimSite912.addChild(&TouchSensor913);

Shape& Shape914 =  Shape();
Shape914.setUSE(CString("HAnimSiteShape"));
HAnimSite912.addChild(&Shape914);

HAnimSegment885.addChild(&HAnimSite912);

HAnimSite& HAnimSite915 =  HAnimSite();
HAnimSite915.setDEF(CString("hanim_l_axilla_ant_pt"));
HAnimSite915.X3DNode::setName(CString("l_axilla_ant_pt"));
HAnimSite915.setTranslation(new float[]{0.1777,1.4065,-0.0075});
TouchSensor& TouchSensor916 =  TouchSensor();
TouchSensor916.setDescription(CString("HAnimSite l_axilla_ant"));
HAnimSite915.addChild(&TouchSensor916);

Shape& Shape917 =  Shape();
Shape917.setUSE(CString("HAnimSiteShape"));
HAnimSite915.addChild(&Shape917);

HAnimSegment885.addChild(&HAnimSite915);

HAnimSite& HAnimSite918 =  HAnimSite();
HAnimSite918.setDEF(CString("hanim_l_axilla_post_pt"));
HAnimSite918.X3DNode::setName(CString("l_axilla_post_pt"));
HAnimSite918.setTranslation(new float[]{0.1706,1.4072,-0.0875});
TouchSensor& TouchSensor919 =  TouchSensor();
TouchSensor919.setDescription(CString("HAnimSite l_axilla_post"));
HAnimSite918.addChild(&TouchSensor919);

Shape& Shape920 =  Shape();
Shape920.setUSE(CString("HAnimSiteShape"));
HAnimSite918.addChild(&Shape920);

HAnimSegment885.addChild(&HAnimSite918);

HAnimJoint884.addChildren(&HAnimSegment885);

HAnimJoint& HAnimJoint921 =  HAnimJoint();
HAnimJoint921.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint921.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint921.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment922 =  HAnimSegment();
HAnimSegment922.setDEF(CString("hanim_l_scapula"));
HAnimSegment922.X3DNode::setName(CString("l_scapula"));
TouchSensor& TouchSensor923 =  TouchSensor();
TouchSensor923.setDescription(CString("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"));
HAnimSegment922.addChild(&TouchSensor923);

Transform& Transform924 =  Transform();
Transform924.setTranslation(new float[]{0.0962,1.4269,-0.0424});
Shape& Shape925 =  Shape();
Shape925.setUSE(CString("HAnimJointShape"));
Transform924.addChild(&Shape925);

HAnimSegment922.addChild(&Transform924);

Shape& Shape926 =  Shape();
LineSet& LineSet927 =  LineSet();
LineSet927.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA928 =  ColorRGBA();
ColorRGBA928.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet927.addChild(&ColorRGBA928);

Coordinate& Coordinate929 =  Coordinate();
Coordinate929.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet927.setCoord(Coordinate929);

Shape926.setGeometry(&LineSet927);

HAnimSegment922.addChild(&Shape926);

HAnimJoint921.addChildren(&HAnimSegment922);

HAnimJoint& HAnimJoint930 =  HAnimJoint();
HAnimJoint930.setDEF(CString("hanim_l_shoulder"));
HAnimJoint930.X3DNode::setName(CString("l_shoulder"));
HAnimJoint930.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment931 =  HAnimSegment();
HAnimSegment931.setDEF(CString("hanim_l_upperarm"));
HAnimSegment931.X3DNode::setName(CString("l_upperarm"));
TouchSensor& TouchSensor932 =  TouchSensor();
TouchSensor932.setDescription(CString("HAnimJoint l_shoulder, HAnimSegment l_upperarm"));
HAnimSegment931.addChild(&TouchSensor932);

Transform& Transform933 =  Transform();
Transform933.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Shape& Shape934 =  Shape();
Shape934.setUSE(CString("HAnimJointShape"));
Transform933.addChild(&Shape934);

HAnimSegment931.addChild(&Transform933);

Shape& Shape935 =  Shape();
LineSet& LineSet936 =  LineSet();
LineSet936.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA937 =  ColorRGBA();
ColorRGBA937.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet936.addChild(&ColorRGBA937);

Coordinate& Coordinate938 =  Coordinate();
Coordinate938.setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet936.setCoord(Coordinate938);

Shape935.setGeometry(&LineSet936);

HAnimSegment931.addChild(&Shape935);

Shape& Shape939 =  Shape();
LineSet& LineSet940 =  LineSet();
LineSet940.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA941 =  ColorRGBA();
ColorRGBA941.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet940.addChild(&ColorRGBA941);

Coordinate& Coordinate942 =  Coordinate();
Coordinate942.setPoint(new float[]{0.2029,1.4376,-0.0387,0.228,1.1482,-0.11}, 6);
LineSet940.setCoord(Coordinate942);

Shape939.setGeometry(&LineSet940);

HAnimSegment931.addChild(&Shape939);

HAnimSite& HAnimSite943 =  HAnimSite();
HAnimSite943.setDEF(CString("hanim_l_humeral_lateral_epicn_pt"));
HAnimSite943.X3DNode::setName(CString("l_humeral_lateral_epicn_pt"));
HAnimSite943.setTranslation(new float[]{0.228,1.1482,-0.11});
TouchSensor& TouchSensor944 =  TouchSensor();
TouchSensor944.setDescription(CString("HAnimSite l_humeral_lateral_epicn"));
HAnimSite943.addChild(&TouchSensor944);

Shape& Shape945 =  Shape();
Shape945.setUSE(CString("HAnimSiteShape"));
HAnimSite943.addChild(&Shape945);

HAnimSegment931.addChild(&HAnimSite943);

HAnimJoint930.addChildren(&HAnimSegment931);

HAnimJoint& HAnimJoint946 =  HAnimJoint();
HAnimJoint946.setDEF(CString("hanim_l_elbow"));
HAnimJoint946.X3DNode::setName(CString("l_elbow"));
HAnimJoint946.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment947 =  HAnimSegment();
HAnimSegment947.setDEF(CString("hanim_l_forearm"));
HAnimSegment947.X3DNode::setName(CString("l_forearm"));
TouchSensor& TouchSensor948 =  TouchSensor();
TouchSensor948.setDescription(CString("HAnimJoint l_elbow, HAnimSegment l_forearm"));
HAnimSegment947.addChild(&TouchSensor948);

Transform& Transform949 =  Transform();
Transform949.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Shape& Shape950 =  Shape();
Shape950.setUSE(CString("HAnimJointShape"));
Transform949.addChild(&Shape950);

HAnimSegment947.addChild(&Transform949);

Shape& Shape951 =  Shape();
LineSet& LineSet952 =  LineSet();
LineSet952.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA953 =  ColorRGBA();
ColorRGBA953.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet952.addChild(&ColorRGBA953);

Coordinate& Coordinate954 =  Coordinate();
Coordinate954.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet952.setCoord(Coordinate954);

Shape951.setGeometry(&LineSet952);

HAnimSegment947.addChild(&Shape951);

Shape& Shape955 =  Shape();
LineSet& LineSet956 =  LineSet();
LineSet956.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA957 =  ColorRGBA();
ColorRGBA957.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet956.addChild(&ColorRGBA957);

Coordinate& Coordinate958 =  Coordinate();
Coordinate958.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415}, 6);
LineSet956.setCoord(Coordinate958);

Shape955.setGeometry(&LineSet956);

HAnimSegment947.addChild(&Shape955);

Shape& Shape959 =  Shape();
LineSet& LineSet960 =  LineSet();
LineSet960.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA961 =  ColorRGBA();
ColorRGBA961.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet960.addChild(&ColorRGBA961);

Coordinate& Coordinate962 =  Coordinate();
Coordinate962.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123}, 6);
LineSet960.setCoord(Coordinate962);

Shape959.setGeometry(&LineSet960);

HAnimSegment947.addChild(&Shape959);

Shape& Shape963 =  Shape();
LineSet& LineSet964 =  LineSet();
LineSet964.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA965 =  ColorRGBA();
ColorRGBA965.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet964.addChild(&ColorRGBA965);

Coordinate& Coordinate966 =  Coordinate();
Coordinate966.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113}, 6);
LineSet964.setCoord(Coordinate966);

Shape963.setGeometry(&LineSet964);

HAnimSegment947.addChild(&Shape963);

Shape& Shape967 =  Shape();
LineSet& LineSet968 =  LineSet();
LineSet968.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA969 =  ColorRGBA();
ColorRGBA969.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet968.addChild(&ColorRGBA969);

Coordinate& Coordinate970 =  Coordinate();
Coordinate970.setPoint(new float[]{0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167}, 6);
LineSet968.setCoord(Coordinate970);

Shape967.setGeometry(&LineSet968);

HAnimSegment947.addChild(&Shape967);

HAnimSite& HAnimSite971 =  HAnimSite();
HAnimSite971.setDEF(CString("hanim_l_radial_styloid_pt"));
HAnimSite971.X3DNode::setName(CString("l_radial_styloid_pt"));
HAnimSite971.setTranslation(new float[]{0.1901,0.8645,-0.0415});
TouchSensor& TouchSensor972 =  TouchSensor();
TouchSensor972.setDescription(CString("HAnimSite l_radial_styloid"));
HAnimSite971.addChild(&TouchSensor972);

Shape& Shape973 =  Shape();
Shape973.setUSE(CString("HAnimSiteShape"));
HAnimSite971.addChild(&Shape973);

HAnimSegment947.addChild(&HAnimSite971);

HAnimSite& HAnimSite974 =  HAnimSite();
HAnimSite974.setDEF(CString("hanim_l_olecranon_pt"));
HAnimSite974.X3DNode::setName(CString("l_olecranon_pt"));
HAnimSite974.setTranslation(new float[]{0.1962,1.1375,-0.1123});
TouchSensor& TouchSensor975 =  TouchSensor();
TouchSensor975.setDescription(CString("HAnimSite l_olecranon"));
HAnimSite974.addChild(&TouchSensor975);

Shape& Shape976 =  Shape();
Shape976.setUSE(CString("HAnimSiteShape"));
HAnimSite974.addChild(&Shape976);

HAnimSegment947.addChild(&HAnimSite974);

HAnimSite& HAnimSite977 =  HAnimSite();
HAnimSite977.setDEF(CString("hanim_l_humeral_medial_epicn_pt"));
HAnimSite977.X3DNode::setName(CString("l_humeral_medial_epicn_pt"));
HAnimSite977.setTranslation(new float[]{0.1735,1.1272,-0.1113});
TouchSensor& TouchSensor978 =  TouchSensor();
TouchSensor978.setDescription(CString("HAnimSite l_humeral_medial_epicn"));
HAnimSite977.addChild(&TouchSensor978);

Shape& Shape979 =  Shape();
Shape979.setUSE(CString("HAnimSiteShape"));
HAnimSite977.addChild(&Shape979);

HAnimSegment947.addChild(&HAnimSite977);

HAnimSite& HAnimSite980 =  HAnimSite();
HAnimSite980.setDEF(CString("hanim_l_radiale_pt"));
HAnimSite980.X3DNode::setName(CString("l_radiale_pt"));
HAnimSite980.setTranslation(new float[]{0.2182,1.1212,-0.1167});
TouchSensor& TouchSensor981 =  TouchSensor();
TouchSensor981.setDescription(CString("HAnimSite l_radiale"));
HAnimSite980.addChild(&TouchSensor981);

Shape& Shape982 =  Shape();
Shape982.setUSE(CString("HAnimSiteShape"));
HAnimSite980.addChild(&Shape982);

HAnimSegment947.addChild(&HAnimSite980);

HAnimJoint946.addChildren(&HAnimSegment947);

HAnimJoint& HAnimJoint983 =  HAnimJoint();
HAnimJoint983.setDEF(CString("hanim_l_wrist"));
HAnimJoint983.X3DNode::setName(CString("l_wrist"));
HAnimJoint983.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment984 =  HAnimSegment();
HAnimSegment984.setDEF(CString("hanim_l_hand"));
HAnimSegment984.X3DNode::setName(CString("l_hand"));
TouchSensor& TouchSensor985 =  TouchSensor();
TouchSensor985.setDescription(CString("HAnimJoint l_wrist, HAnimSegment l_hand"));
HAnimSegment984.addChild(&TouchSensor985);

Transform& Transform986 =  Transform();
Transform986.setTranslation(new float[]{0.1984,0.8663,-0.0583});
Shape& Shape987 =  Shape();
Shape987.setUSE(CString("HAnimJointShape"));
Transform986.addChild(&Shape987);

HAnimSegment984.addChild(&Transform986);

Shape& Shape988 =  Shape();
LineSet& LineSet989 =  LineSet();
LineSet989.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA990 =  ColorRGBA();
ColorRGBA990.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet989.addChild(&ColorRGBA990);

Coordinate& Coordinate991 =  Coordinate();
Coordinate991.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534}, 6);
LineSet989.setCoord(Coordinate991);

Shape988.setGeometry(&LineSet989);

HAnimSegment984.addChild(&Shape988);

Shape& Shape992 =  Shape();
LineSet& LineSet993 =  LineSet();
LineSet993.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA994 =  ColorRGBA();
ColorRGBA994.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet993.addChild(&ColorRGBA994);

Coordinate& Coordinate995 =  Coordinate();
Coordinate995.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028}, 6);
LineSet993.setCoord(Coordinate995);

Shape992.setGeometry(&LineSet993);

HAnimSegment984.addChild(&Shape992);

Shape& Shape996 =  Shape();
LineSet& LineSet997 =  LineSet();
LineSet997.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA998 =  ColorRGBA();
ColorRGBA998.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet997.addChild(&ColorRGBA998);

Coordinate& Coordinate999 =  Coordinate();
Coordinate999.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053}, 6);
LineSet997.setCoord(Coordinate999);

Shape996.setGeometry(&LineSet997);

HAnimSegment984.addChild(&Shape996);

Shape& Shape1000 =  Shape();
LineSet& LineSet1001 =  LineSet();
LineSet1001.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1002 =  ColorRGBA();
ColorRGBA1002.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1001.addChild(&ColorRGBA1002);

Coordinate& Coordinate1003 =  Coordinate();
Coordinate1003.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794}, 6);
LineSet1001.setCoord(Coordinate1003);

Shape1000.setGeometry(&LineSet1001);

HAnimSegment984.addChild(&Shape1000);

Shape& Shape1004 =  Shape();
LineSet& LineSet1005 =  LineSet();
LineSet1005.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1006 =  ColorRGBA();
ColorRGBA1006.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1005.addChild(&ColorRGBA1006);

Coordinate& Coordinate1007 =  Coordinate();
Coordinate1007.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036}, 6);
LineSet1005.setCoord(Coordinate1007);

Shape1004.setGeometry(&LineSet1005);

HAnimSegment984.addChild(&Shape1004);

Shape& Shape1008 =  Shape();
LineSet& LineSet1009 =  LineSet();
LineSet1009.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1010 =  ColorRGBA();
ColorRGBA1010.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1009.addChild(&ColorRGBA1010);

Coordinate& Coordinate1011 =  Coordinate();
Coordinate1011.setPoint(new float[]{0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237}, 6);
LineSet1009.setCoord(Coordinate1011);

Shape1008.setGeometry(&LineSet1009);

HAnimSegment984.addChild(&Shape1008);

Shape& Shape1012 =  Shape();
LineSet& LineSet1013 =  LineSet();
LineSet1013.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1014 =  ColorRGBA();
ColorRGBA1014.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1013.addChild(&ColorRGBA1014);

Coordinate& Coordinate1015 =  Coordinate();
Coordinate1015.setPoint(new float[]{0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648}, 6);
LineSet1013.setCoord(Coordinate1015);

Shape1012.setGeometry(&LineSet1013);

HAnimSegment984.addChild(&Shape1012);

Shape& Shape1016 =  Shape();
LineSet& LineSet1017 =  LineSet();
LineSet1017.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1018 =  ColorRGBA();
ColorRGBA1018.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1017.addChild(&ColorRGBA1018);

Coordinate& Coordinate1019 =  Coordinate();
Coordinate1019.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122}, 6);
LineSet1017.setCoord(Coordinate1019);

Shape1016.setGeometry(&LineSet1017);

HAnimSegment984.addChild(&Shape1016);

Shape& Shape1020 =  Shape();
LineSet& LineSet1021 =  LineSet();
LineSet1021.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1022 =  ColorRGBA();
ColorRGBA1022.setUSE(CString("HAnimSiteViewpointLineColorRGBA"));
LineSet1021.addChild(&ColorRGBA1022);

Coordinate& Coordinate1023 =  Coordinate();
Coordinate1023.setPoint(new float[]{0.1984,0.8663,-0.0583,0.3,0.75,0.45}, 6);
LineSet1021.setCoord(Coordinate1023);

Shape1020.setGeometry(&LineSet1021);

HAnimSegment984.addChild(&Shape1020);

HAnimSite& HAnimSite1024 =  HAnimSite();
HAnimSite1024.setDEF(CString("hanim_l_metacarpal_pha2_pt"));
HAnimSite1024.X3DNode::setName(CString("l_metacarpal_pha2_pt"));
HAnimSite1024.setTranslation(new float[]{0.2009,0.8139,-0.0237});
TouchSensor& TouchSensor1025 =  TouchSensor();
TouchSensor1025.setDescription(CString("HAnimSite l_metacarpal_pha2"));
HAnimSite1024.addChild(&TouchSensor1025);

Shape& Shape1026 =  Shape();
Shape1026.setUSE(CString("HAnimSiteShape"));
HAnimSite1024.addChild(&Shape1026);

HAnimSegment984.addChild(&HAnimSite1024);

HAnimSite& HAnimSite1027 =  HAnimSite();
HAnimSite1027.setDEF(CString("hanim_l_ulnar_styloid_pt"));
HAnimSite1027.X3DNode::setName(CString("l_ulnar_styloid_pt"));
HAnimSite1027.setTranslation(new float[]{0.2142,0.8529,-0.0648});
TouchSensor& TouchSensor1028 =  TouchSensor();
TouchSensor1028.setDescription(CString("HAnimSite l_ulnar_styloid"));
HAnimSite1027.addChild(&TouchSensor1028);

Shape& Shape1029 =  Shape();
Shape1029.setUSE(CString("HAnimSiteShape"));
HAnimSite1027.addChild(&Shape1029);

HAnimSegment984.addChild(&HAnimSite1027);

HAnimSite& HAnimSite1030 =  HAnimSite();
HAnimSite1030.setDEF(CString("hanim_l_metacarpal_pha5_pt"));
HAnimSite1030.X3DNode::setName(CString("l_metacarpal_pha5_pt"));
HAnimSite1030.setTranslation(new float[]{0.1929,0.786,-0.1122});
TouchSensor& TouchSensor1031 =  TouchSensor();
TouchSensor1031.setDescription(CString("HAnimSite l_metacarpal_pha5"));
HAnimSite1030.addChild(&TouchSensor1031);

Shape& Shape1032 =  Shape();
Shape1032.setUSE(CString("HAnimSiteShape"));
HAnimSite1030.addChild(&Shape1032);

HAnimSegment984.addChild(&HAnimSite1030);

HAnimSite& HAnimSite1033 =  HAnimSite();
HAnimSite1033.setDEF(CString("hanim_l_hand_front_view"));
HAnimSite1033.X3DNode::setName(CString("l_hand_front_view"));
HAnimSite1033.setTranslation(new float[]{0.3,0.75,0.45});
TouchSensor& TouchSensor1034 =  TouchSensor();
TouchSensor1034.setDescription(CString("HAnimSite l_hand_front_view"));
HAnimSite1033.addChild(&TouchSensor1034);

Shape& Shape1035 =  Shape();
Shape1035.setUSE(CString("HAnimSiteShape"));
HAnimSite1033.addChild(&Shape1035);

Viewpoint& Viewpoint1036 =  Viewpoint();
Viewpoint1036.setDEF(CString("hanim_l_hand_front_viewpoint"));
Viewpoint1036.setDescription(CString("left hand front"));
Viewpoint1036.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1036.setCenterOfRotation(new float[]{0.0,0.7,0.0});
HAnimSite1033.addChild(&Viewpoint1036);

Anchor& Anchor1037 =  Anchor();
Anchor1037.setDescription(CString("HAnimSite hanim_l_hand_front_view Viewpoint"));
Anchor1037.setUrl(new CString[]{CString("#hanim_l_hand_front_viewpoint")}, 1);
LOD& LOD1038 =  LOD();
LOD1038.setForceTransitions(true);
LOD1038.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1039 =  WorldInfo();
WorldInfo1039.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1038.addChildren(&WorldInfo1039);

Shape& Shape1040 =  Shape();
Shape1040.setUSE(CString("HAnimSiteViewpointShape"));
LOD1038.addChildren(Shape1040);

Anchor1037.addChild(&LOD1038);

HAnimSite1033.addChild(Anchor1037);

HAnimSegment984.addChild(&HAnimSite1033);

HAnimJoint983.addChildren(&HAnimSegment984);

HAnimJoint& HAnimJoint1041 =  HAnimJoint();
HAnimJoint1041.setDEF(CString("hanim_l_thumb1"));
HAnimJoint1041.X3DNode::setName(CString("l_thumb1"));
HAnimJoint1041.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment1042 =  HAnimSegment();
HAnimSegment1042.setDEF(CString("hanim_l_thumb_metacarpal"));
HAnimSegment1042.X3DNode::setName(CString("l_thumb_metacarpal"));
TouchSensor& TouchSensor1043 =  TouchSensor();
TouchSensor1043.setDescription(CString("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal"));
HAnimSegment1042.addChild(&TouchSensor1043);

Transform& Transform1044 =  Transform();
Transform1044.setTranslation(new float[]{0.1924,0.8472,-0.0534});
Shape& Shape1045 =  Shape();
Shape1045.setUSE(CString("HAnimJointShape"));
Transform1044.addChild(&Shape1045);

HAnimSegment1042.addChild(&Transform1044);

Shape& Shape1046 =  Shape();
LineSet& LineSet1047 =  LineSet();
LineSet1047.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1048 =  ColorRGBA();
ColorRGBA1048.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1047.addChild(&ColorRGBA1048);

Coordinate& Coordinate1049 =  Coordinate();
Coordinate1049.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet1047.setCoord(Coordinate1049);

Shape1046.setGeometry(&LineSet1047);

HAnimSegment1042.addChild(&Shape1046);

HAnimJoint1041.addChildren(&HAnimSegment1042);

HAnimJoint& HAnimJoint1050 =  HAnimJoint();
HAnimJoint1050.setDEF(CString("hanim_l_thumb2"));
HAnimJoint1050.X3DNode::setName(CString("l_thumb2"));
HAnimJoint1050.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment1051 =  HAnimSegment();
HAnimSegment1051.setDEF(CString("hanim_l_thumb_proximal"));
HAnimSegment1051.X3DNode::setName(CString("l_thumb_proximal"));
TouchSensor& TouchSensor1052 =  TouchSensor();
TouchSensor1052.setDescription(CString("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal"));
HAnimSegment1051.addChild(&TouchSensor1052);

Transform& Transform1053 =  Transform();
Transform1053.setTranslation(new float[]{0.1951,0.8226,0.0246});
Shape& Shape1054 =  Shape();
Shape1054.setUSE(CString("HAnimJointShape"));
Transform1053.addChild(&Shape1054);

HAnimSegment1051.addChild(&Transform1053);

Shape& Shape1055 =  Shape();
LineSet& LineSet1056 =  LineSet();
LineSet1056.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1057 =  ColorRGBA();
ColorRGBA1057.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1056.addChild(&ColorRGBA1057);

Coordinate& Coordinate1058 =  Coordinate();
Coordinate1058.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet1056.setCoord(Coordinate1058);

Shape1055.setGeometry(&LineSet1056);

HAnimSegment1051.addChild(&Shape1055);

HAnimJoint1050.addChildren(&HAnimSegment1051);

HAnimJoint& HAnimJoint1059 =  HAnimJoint();
HAnimJoint1059.setDEF(CString("hanim_l_thumb3"));
HAnimJoint1059.X3DNode::setName(CString("l_thumb3"));
HAnimJoint1059.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimSegment& HAnimSegment1060 =  HAnimSegment();
HAnimSegment1060.setDEF(CString("hanim_l_thumb_distal"));
HAnimSegment1060.X3DNode::setName(CString("l_thumb_distal"));
TouchSensor& TouchSensor1061 =  TouchSensor();
TouchSensor1061.setDescription(CString("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal"));
HAnimSegment1060.addChild(&TouchSensor1061);

Transform& Transform1062 =  Transform();
Transform1062.setTranslation(new float[]{0.1955,0.8159,0.0464});
Shape& Shape1063 =  Shape();
Shape1063.setUSE(CString("HAnimJointShape"));
Transform1062.addChild(&Shape1063);

HAnimSegment1060.addChild(&Transform1062);

Shape& Shape1064 =  Shape();
LineSet& LineSet1065 =  LineSet();
LineSet1065.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1066 =  ColorRGBA();
ColorRGBA1066.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1065.addChild(&ColorRGBA1066);

Coordinate& Coordinate1067 =  Coordinate();
Coordinate1067.setPoint(new float[]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759}, 6);
LineSet1065.setCoord(Coordinate1067);

Shape1064.setGeometry(&LineSet1065);

HAnimSegment1060.addChild(&Shape1064);

HAnimSite& HAnimSite1068 =  HAnimSite();
HAnimSite1068.setDEF(CString("hanim_l_thumb_distal_tip"));
HAnimSite1068.X3DNode::setName(CString("l_thumb_distal_tip"));
HAnimSite1068.setTranslation(new float[]{0.1982,0.8061,0.0759});
TouchSensor& TouchSensor1069 =  TouchSensor();
TouchSensor1069.setDescription(CString("HAnimSite l_thumb_distal_tip"));
HAnimSite1068.addChild(&TouchSensor1069);

Shape& Shape1070 =  Shape();
Shape1070.setUSE(CString("HAnimSiteShape"));
HAnimSite1068.addChild(&Shape1070);

HAnimSegment1060.addChild(&HAnimSite1068);

HAnimJoint1059.addChildren(&HAnimSegment1060);

HAnimJoint1050.addChildren(&HAnimJoint1059);

HAnimJoint1041.addChildren(&HAnimJoint1050);

HAnimJoint983.addChildren(&HAnimJoint1041);

HAnimJoint& HAnimJoint1071 =  HAnimJoint();
HAnimJoint1071.setDEF(CString("hanim_l_index0"));
HAnimJoint1071.X3DNode::setName(CString("l_index0"));
HAnimJoint1071.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment1072 =  HAnimSegment();
HAnimSegment1072.setDEF(CString("hanim_l_index_metacarpal"));
HAnimSegment1072.X3DNode::setName(CString("l_index_metacarpal"));
TouchSensor& TouchSensor1073 =  TouchSensor();
TouchSensor1073.setDescription(CString("HAnimJoint l_index0, HAnimSegment l_index_metacarpal"));
HAnimSegment1072.addChild(&TouchSensor1073);

Transform& Transform1074 =  Transform();
Transform1074.setTranslation(new float[]{0.1983,0.8024,-0.028});
Shape& Shape1075 =  Shape();
Shape1075.setUSE(CString("HAnimJointShape"));
Transform1074.addChild(&Shape1075);

HAnimSegment1072.addChild(&Transform1074);

Shape& Shape1076 =  Shape();
LineSet& LineSet1077 =  LineSet();
LineSet1077.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1078 =  ColorRGBA();
ColorRGBA1078.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1077.addChild(&ColorRGBA1078);

Coordinate& Coordinate1079 =  Coordinate();
Coordinate1079.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet1077.setCoord(Coordinate1079);

Shape1076.setGeometry(&LineSet1077);

HAnimSegment1072.addChild(&Shape1076);

HAnimJoint1071.addChildren(&HAnimSegment1072);

HAnimJoint& HAnimJoint1080 =  HAnimJoint();
HAnimJoint1080.setDEF(CString("hanim_l_index1"));
HAnimJoint1080.X3DNode::setName(CString("l_index1"));
HAnimJoint1080.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment1081 =  HAnimSegment();
HAnimSegment1081.setDEF(CString("hanim_l_index_proximal"));
HAnimSegment1081.X3DNode::setName(CString("l_index_proximal"));
TouchSensor& TouchSensor1082 =  TouchSensor();
TouchSensor1082.setDescription(CString("HAnimJoint l_index1, HAnimSegment l_index_proximal"));
HAnimSegment1081.addChild(&TouchSensor1082);

Transform& Transform1083 =  Transform();
Transform1083.setTranslation(new float[]{0.1983,0.7815,-0.028});
Shape& Shape1084 =  Shape();
Shape1084.setUSE(CString("HAnimJointShape"));
Transform1083.addChild(&Shape1084);

HAnimSegment1081.addChild(&Transform1083);

Shape& Shape1085 =  Shape();
LineSet& LineSet1086 =  LineSet();
LineSet1086.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1087 =  ColorRGBA();
ColorRGBA1087.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1086.addChild(&ColorRGBA1087);

Coordinate& Coordinate1088 =  Coordinate();
Coordinate1088.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet1086.setCoord(Coordinate1088);

Shape1085.setGeometry(&LineSet1086);

HAnimSegment1081.addChild(&Shape1085);

HAnimJoint1080.addChildren(&HAnimSegment1081);

HAnimJoint& HAnimJoint1089 =  HAnimJoint();
HAnimJoint1089.setDEF(CString("hanim_l_index2"));
HAnimJoint1089.X3DNode::setName(CString("l_index2"));
HAnimJoint1089.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment1090 =  HAnimSegment();
HAnimSegment1090.setDEF(CString("hanim_l_index_middle"));
HAnimSegment1090.X3DNode::setName(CString("l_index_middle"));
TouchSensor& TouchSensor1091 =  TouchSensor();
TouchSensor1091.setDescription(CString("HAnimJoint l_index2, HAnimSegment l_index_middle"));
HAnimSegment1090.addChild(&TouchSensor1091);

Transform& Transform1092 =  Transform();
Transform1092.setTranslation(new float[]{0.2017,0.7363,-0.0248});
Shape& Shape1093 =  Shape();
Shape1093.setUSE(CString("HAnimJointShape"));
Transform1092.addChild(&Shape1093);

HAnimSegment1090.addChild(&Transform1092);

Shape& Shape1094 =  Shape();
LineSet& LineSet1095 =  LineSet();
LineSet1095.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1096 =  ColorRGBA();
ColorRGBA1096.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1095.addChild(&ColorRGBA1096);

Coordinate& Coordinate1097 =  Coordinate();
Coordinate1097.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet1095.setCoord(Coordinate1097);

Shape1094.setGeometry(&LineSet1095);

HAnimSegment1090.addChild(&Shape1094);

HAnimJoint1089.addChildren(&HAnimSegment1090);

HAnimJoint& HAnimJoint1098 =  HAnimJoint();
HAnimJoint1098.setDEF(CString("hanim_l_index3"));
HAnimJoint1098.X3DNode::setName(CString("l_index3"));
HAnimJoint1098.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimSegment& HAnimSegment1099 =  HAnimSegment();
HAnimSegment1099.setDEF(CString("hanim_l_index_distal"));
HAnimSegment1099.X3DNode::setName(CString("l_index_distal"));
TouchSensor& TouchSensor1100 =  TouchSensor();
TouchSensor1100.setDescription(CString("HAnimJoint l_index3, HAnimSegment l_index_distal"));
HAnimSegment1099.addChild(&TouchSensor1100);

Transform& Transform1101 =  Transform();
Transform1101.setTranslation(new float[]{0.2028,0.7139,-0.0236});
Shape& Shape1102 =  Shape();
Shape1102.setUSE(CString("HAnimJointShape"));
Transform1101.addChild(&Shape1102);

HAnimSegment1099.addChild(&Transform1101);

Shape& Shape1103 =  Shape();
LineSet& LineSet1104 =  LineSet();
LineSet1104.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1105 =  ColorRGBA();
ColorRGBA1105.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1104.addChild(&ColorRGBA1105);

Coordinate& Coordinate1106 =  Coordinate();
Coordinate1106.setPoint(new float[]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245}, 6);
LineSet1104.setCoord(Coordinate1106);

Shape1103.setGeometry(&LineSet1104);

HAnimSegment1099.addChild(&Shape1103);

Shape& Shape1107 =  Shape();
LineSet& LineSet1108 =  LineSet();
LineSet1108.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1109 =  ColorRGBA();
ColorRGBA1109.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1108.addChild(&ColorRGBA1109);

Coordinate& Coordinate1110 =  Coordinate();
Coordinate1110.setPoint(new float[]{0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482}, 6);
LineSet1108.setCoord(Coordinate1110);

Shape1107.setGeometry(&LineSet1108);

HAnimSegment1099.addChild(&Shape1107);

HAnimSite& HAnimSite1111 =  HAnimSite();
HAnimSite1111.setDEF(CString("hanim_l_index_distal_tip"));
HAnimSite1111.X3DNode::setName(CString("l_index_distal_tip"));
HAnimSite1111.setTranslation(new float[]{0.2089,0.6858,-0.0245});
TouchSensor& TouchSensor1112 =  TouchSensor();
TouchSensor1112.setDescription(CString("HAnimSite l_index_distal_tip"));
HAnimSite1111.addChild(&TouchSensor1112);

Shape& Shape1113 =  Shape();
Shape1113.setUSE(CString("HAnimSiteShape"));
HAnimSite1111.addChild(&Shape1113);

HAnimSegment1099.addChild(&HAnimSite1111);

HAnimSite& HAnimSite1114 =  HAnimSite();
HAnimSite1114.setDEF(CString("hanim_l_dactylion_pt"));
HAnimSite1114.X3DNode::setName(CString("l_dactylion_pt"));
HAnimSite1114.setTranslation(new float[]{0.2056,0.6743,-0.0482});
TouchSensor& TouchSensor1115 =  TouchSensor();
TouchSensor1115.setDescription(CString("HAnimSite l_dactylion"));
HAnimSite1114.addChild(&TouchSensor1115);

Shape& Shape1116 =  Shape();
Shape1116.setUSE(CString("HAnimSiteShape"));
HAnimSite1114.addChild(&Shape1116);

HAnimSegment1099.addChild(&HAnimSite1114);

HAnimJoint1098.addChildren(&HAnimSegment1099);

HAnimJoint1089.addChildren(&HAnimJoint1098);

HAnimJoint1080.addChildren(&HAnimJoint1089);

HAnimJoint1071.addChildren(&HAnimJoint1080);

HAnimJoint983.addChildren(&HAnimJoint1071);

HAnimJoint& HAnimJoint1117 =  HAnimJoint();
HAnimJoint1117.setDEF(CString("hanim_l_middle0"));
HAnimJoint1117.X3DNode::setName(CString("l_middle0"));
HAnimJoint1117.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment1118 =  HAnimSegment();
HAnimSegment1118.setDEF(CString("hanim_l_middle_metacarpal"));
HAnimSegment1118.X3DNode::setName(CString("l_middle_metacarpal"));
TouchSensor& TouchSensor1119 =  TouchSensor();
TouchSensor1119.setDescription(CString("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal"));
HAnimSegment1118.addChild(&TouchSensor1119);

Transform& Transform1120 =  Transform();
Transform1120.setTranslation(new float[]{0.1987,0.8029,-0.053});
Shape& Shape1121 =  Shape();
Shape1121.setUSE(CString("HAnimJointShape"));
Transform1120.addChild(&Shape1121);

HAnimSegment1118.addChild(&Transform1120);

Shape& Shape1122 =  Shape();
LineSet& LineSet1123 =  LineSet();
LineSet1123.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1124 =  ColorRGBA();
ColorRGBA1124.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1123.addChild(&ColorRGBA1124);

Coordinate& Coordinate1125 =  Coordinate();
Coordinate1125.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet1123.setCoord(Coordinate1125);

Shape1122.setGeometry(&LineSet1123);

HAnimSegment1118.addChild(&Shape1122);

HAnimJoint1117.addChildren(&HAnimSegment1118);

HAnimJoint& HAnimJoint1126 =  HAnimJoint();
HAnimJoint1126.setDEF(CString("hanim_l_middle1"));
HAnimJoint1126.X3DNode::setName(CString("l_middle1"));
HAnimJoint1126.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment1127 =  HAnimSegment();
HAnimSegment1127.setDEF(CString("hanim_l_middle_proximal"));
HAnimSegment1127.X3DNode::setName(CString("l_middle_proximal"));
TouchSensor& TouchSensor1128 =  TouchSensor();
TouchSensor1128.setDescription(CString("HAnimJoint l_middle1, HAnimSegment l_middle_proximal"));
HAnimSegment1127.addChild(&TouchSensor1128);

Transform& Transform1129 =  Transform();
Transform1129.setTranslation(new float[]{0.1987,0.7818,-0.053});
Shape& Shape1130 =  Shape();
Shape1130.setUSE(CString("HAnimJointShape"));
Transform1129.addChild(&Shape1130);

HAnimSegment1127.addChild(&Transform1129);

Shape& Shape1131 =  Shape();
LineSet& LineSet1132 =  LineSet();
LineSet1132.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1133 =  ColorRGBA();
ColorRGBA1133.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1132.addChild(&ColorRGBA1133);

Coordinate& Coordinate1134 =  Coordinate();
Coordinate1134.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet1132.setCoord(Coordinate1134);

Shape1131.setGeometry(&LineSet1132);

HAnimSegment1127.addChild(&Shape1131);

HAnimJoint1126.addChildren(&HAnimSegment1127);

HAnimJoint& HAnimJoint1135 =  HAnimJoint();
HAnimJoint1135.setDEF(CString("hanim_l_middle2"));
HAnimJoint1135.X3DNode::setName(CString("l_middle2"));
HAnimJoint1135.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment1136 =  HAnimSegment();
HAnimSegment1136.setDEF(CString("hanim_l_middle_middle"));
HAnimSegment1136.X3DNode::setName(CString("l_middle_middle"));
TouchSensor& TouchSensor1137 =  TouchSensor();
TouchSensor1137.setDescription(CString("HAnimJoint l_middle2, HAnimSegment l_middle_middle"));
HAnimSegment1136.addChild(&TouchSensor1137);

Transform& Transform1138 =  Transform();
Transform1138.setTranslation(new float[]{0.2013,0.7273,-0.0503});
Shape& Shape1139 =  Shape();
Shape1139.setUSE(CString("HAnimJointShape"));
Transform1138.addChild(&Shape1139);

HAnimSegment1136.addChild(&Transform1138);

Shape& Shape1140 =  Shape();
LineSet& LineSet1141 =  LineSet();
LineSet1141.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1142 =  ColorRGBA();
ColorRGBA1142.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1141.addChild(&ColorRGBA1142);

Coordinate& Coordinate1143 =  Coordinate();
Coordinate1143.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet1141.setCoord(Coordinate1143);

Shape1140.setGeometry(&LineSet1141);

HAnimSegment1136.addChild(&Shape1140);

HAnimJoint1135.addChildren(&HAnimSegment1136);

HAnimJoint& HAnimJoint1144 =  HAnimJoint();
HAnimJoint1144.setDEF(CString("hanim_l_middle3"));
HAnimJoint1144.X3DNode::setName(CString("l_middle3"));
HAnimJoint1144.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimSegment& HAnimSegment1145 =  HAnimSegment();
HAnimSegment1145.setDEF(CString("hanim_l_middle_distal"));
HAnimSegment1145.X3DNode::setName(CString("l_middle_distal"));
TouchSensor& TouchSensor1146 =  TouchSensor();
TouchSensor1146.setDescription(CString("HAnimJoint l_middle3, HAnimSegment l_middle_distal"));
HAnimSegment1145.addChild(&TouchSensor1146);

Transform& Transform1147 =  Transform();
Transform1147.setTranslation(new float[]{0.2026,0.7011,-0.0494});
Shape& Shape1148 =  Shape();
Shape1148.setUSE(CString("HAnimJointShape"));
Transform1147.addChild(&Shape1148);

HAnimSegment1145.addChild(&Transform1147);

Shape& Shape1149 =  Shape();
LineSet& LineSet1150 =  LineSet();
LineSet1150.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1151 =  ColorRGBA();
ColorRGBA1151.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1150.addChild(&ColorRGBA1151);

Coordinate& Coordinate1152 =  Coordinate();
Coordinate1152.setPoint(new float[]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491}, 6);
LineSet1150.setCoord(Coordinate1152);

Shape1149.setGeometry(&LineSet1150);

HAnimSegment1145.addChild(&Shape1149);

HAnimSite& HAnimSite1153 =  HAnimSite();
HAnimSite1153.setDEF(CString("hanim_l_middle_distal_tip"));
HAnimSite1153.X3DNode::setName(CString("l_middle_distal_tip"));
HAnimSite1153.setTranslation(new float[]{0.208,0.6731,-0.0491});
TouchSensor& TouchSensor1154 =  TouchSensor();
TouchSensor1154.setDescription(CString("HAnimSite l_middle_distal_tip"));
HAnimSite1153.addChild(&TouchSensor1154);

Shape& Shape1155 =  Shape();
Shape1155.setUSE(CString("HAnimSiteShape"));
HAnimSite1153.addChild(&Shape1155);

HAnimSegment1145.addChild(&HAnimSite1153);

HAnimJoint1144.addChildren(&HAnimSegment1145);

HAnimJoint1135.addChildren(&HAnimJoint1144);

HAnimJoint1126.addChildren(&HAnimJoint1135);

HAnimJoint1117.addChildren(&HAnimJoint1126);

HAnimJoint983.addChildren(&HAnimJoint1117);

HAnimJoint& HAnimJoint1156 =  HAnimJoint();
HAnimJoint1156.setDEF(CString("hanim_l_ring0"));
HAnimJoint1156.X3DNode::setName(CString("l_ring0"));
HAnimJoint1156.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment1157 =  HAnimSegment();
HAnimSegment1157.setDEF(CString("hanim_l_ring_metacarpal"));
HAnimSegment1157.X3DNode::setName(CString("l_ring_metacarpal"));
TouchSensor& TouchSensor1158 =  TouchSensor();
TouchSensor1158.setDescription(CString("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal"));
HAnimSegment1157.addChild(&TouchSensor1158);

Transform& Transform1159 =  Transform();
Transform1159.setTranslation(new float[]{0.1956,0.8019,-0.0794});
Shape& Shape1160 =  Shape();
Shape1160.setUSE(CString("HAnimJointShape"));
Transform1159.addChild(&Shape1160);

HAnimSegment1157.addChild(&Transform1159);

Shape& Shape1161 =  Shape();
LineSet& LineSet1162 =  LineSet();
LineSet1162.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1163 =  ColorRGBA();
ColorRGBA1163.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1162.addChild(&ColorRGBA1163);

Coordinate& Coordinate1164 =  Coordinate();
Coordinate1164.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet1162.setCoord(Coordinate1164);

Shape1161.setGeometry(&LineSet1162);

HAnimSegment1157.addChild(&Shape1161);

HAnimJoint1156.addChildren(&HAnimSegment1157);

HAnimJoint& HAnimJoint1165 =  HAnimJoint();
HAnimJoint1165.setDEF(CString("hanim_l_ring1"));
HAnimJoint1165.X3DNode::setName(CString("l_ring1"));
HAnimJoint1165.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment1166 =  HAnimSegment();
HAnimSegment1166.setDEF(CString("hanim_l_ring_proximal"));
HAnimSegment1166.X3DNode::setName(CString("l_ring_proximal"));
TouchSensor& TouchSensor1167 =  TouchSensor();
TouchSensor1167.setDescription(CString("HAnimJoint l_ring1, HAnimSegment l_ring_proximal"));
HAnimSegment1166.addChild(&TouchSensor1167);

Transform& Transform1168 =  Transform();
Transform1168.setTranslation(new float[]{0.1956,0.7815,-0.0794});
Shape& Shape1169 =  Shape();
Shape1169.setUSE(CString("HAnimJointShape"));
Transform1168.addChild(&Shape1169);

HAnimSegment1166.addChild(&Transform1168);

Shape& Shape1170 =  Shape();
LineSet& LineSet1171 =  LineSet();
LineSet1171.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1172 =  ColorRGBA();
ColorRGBA1172.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1171.addChild(&ColorRGBA1172);

Coordinate& Coordinate1173 =  Coordinate();
Coordinate1173.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet1171.setCoord(Coordinate1173);

Shape1170.setGeometry(&LineSet1171);

HAnimSegment1166.addChild(&Shape1170);

HAnimJoint1165.addChildren(&HAnimSegment1166);

HAnimJoint& HAnimJoint1174 =  HAnimJoint();
HAnimJoint1174.setDEF(CString("hanim_l_ring2"));
HAnimJoint1174.X3DNode::setName(CString("l_ring2"));
HAnimJoint1174.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment1175 =  HAnimSegment();
HAnimSegment1175.setDEF(CString("hanim_l_ring_middle"));
HAnimSegment1175.X3DNode::setName(CString("l_ring_middle"));
TouchSensor& TouchSensor1176 =  TouchSensor();
TouchSensor1176.setDescription(CString("HAnimJoint l_ring2, HAnimSegment l_ring_middle"));
HAnimSegment1175.addChild(&TouchSensor1176);

Transform& Transform1177 =  Transform();
Transform1177.setTranslation(new float[]{0.1973,0.7287,-0.0777});
Shape& Shape1178 =  Shape();
Shape1178.setUSE(CString("HAnimJointShape"));
Transform1177.addChild(&Shape1178);

HAnimSegment1175.addChild(&Transform1177);

Shape& Shape1179 =  Shape();
LineSet& LineSet1180 =  LineSet();
LineSet1180.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1181 =  ColorRGBA();
ColorRGBA1181.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1180.addChild(&ColorRGBA1181);

Coordinate& Coordinate1182 =  Coordinate();
Coordinate1182.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet1180.setCoord(Coordinate1182);

Shape1179.setGeometry(&LineSet1180);

HAnimSegment1175.addChild(&Shape1179);

HAnimJoint1174.addChildren(&HAnimSegment1175);

HAnimJoint& HAnimJoint1183 =  HAnimJoint();
HAnimJoint1183.setDEF(CString("hanim_l_ring3"));
HAnimJoint1183.X3DNode::setName(CString("l_ring3"));
HAnimJoint1183.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimSegment& HAnimSegment1184 =  HAnimSegment();
HAnimSegment1184.setDEF(CString("hanim_l_ring_distal"));
HAnimSegment1184.X3DNode::setName(CString("l_ring_distal"));
TouchSensor& TouchSensor1185 =  TouchSensor();
TouchSensor1185.setDescription(CString("HAnimJoint l_ring3, HAnimSegment l_ring_distal"));
HAnimSegment1184.addChild(&TouchSensor1185);

Transform& Transform1186 =  Transform();
Transform1186.setTranslation(new float[]{0.1983,0.7045,-0.0767});
Shape& Shape1187 =  Shape();
Shape1187.setUSE(CString("HAnimJointShape"));
Transform1186.addChild(&Shape1187);

HAnimSegment1184.addChild(&Transform1186);

Shape& Shape1188 =  Shape();
LineSet& LineSet1189 =  LineSet();
LineSet1189.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1190 =  ColorRGBA();
ColorRGBA1190.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1189.addChild(&ColorRGBA1190);

Coordinate& Coordinate1191 =  Coordinate();
Coordinate1191.setPoint(new float[]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756}, 6);
LineSet1189.setCoord(Coordinate1191);

Shape1188.setGeometry(&LineSet1189);

HAnimSegment1184.addChild(&Shape1188);

HAnimSite& HAnimSite1192 =  HAnimSite();
HAnimSite1192.setDEF(CString("hanim_l_ring_distal_tip"));
HAnimSite1192.X3DNode::setName(CString("l_ring_distal_tip"));
HAnimSite1192.setTranslation(new float[]{0.2035,0.675,-0.0756});
TouchSensor& TouchSensor1193 =  TouchSensor();
TouchSensor1193.setDescription(CString("HAnimSite l_ring_distal_tip"));
HAnimSite1192.addChild(&TouchSensor1193);

Shape& Shape1194 =  Shape();
Shape1194.setUSE(CString("HAnimSiteShape"));
HAnimSite1192.addChild(&Shape1194);

HAnimSegment1184.addChild(&HAnimSite1192);

HAnimJoint1183.addChildren(&HAnimSegment1184);

HAnimJoint1174.addChildren(&HAnimJoint1183);

HAnimJoint1165.addChildren(&HAnimJoint1174);

HAnimJoint1156.addChildren(&HAnimJoint1165);

HAnimJoint983.addChildren(&HAnimJoint1156);

HAnimJoint& HAnimJoint1195 =  HAnimJoint();
HAnimJoint1195.setDEF(CString("hanim_l_pinky0"));
HAnimJoint1195.X3DNode::setName(CString("l_pinky0"));
HAnimJoint1195.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment1196 =  HAnimSegment();
HAnimSegment1196.setDEF(CString("hanim_l_pinky_metacarpal"));
HAnimSegment1196.X3DNode::setName(CString("l_pinky_metacarpal"));
TouchSensor& TouchSensor1197 =  TouchSensor();
TouchSensor1197.setDescription(CString("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal"));
HAnimSegment1196.addChild(&TouchSensor1197);

Transform& Transform1198 =  Transform();
Transform1198.setTranslation(new float[]{0.1925,0.8066,-0.1036});
Shape& Shape1199 =  Shape();
Shape1199.setUSE(CString("HAnimJointShape"));
Transform1198.addChild(&Shape1199);

HAnimSegment1196.addChild(&Transform1198);

Shape& Shape1200 =  Shape();
LineSet& LineSet1201 =  LineSet();
LineSet1201.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1202 =  ColorRGBA();
ColorRGBA1202.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1201.addChild(&ColorRGBA1202);

Coordinate& Coordinate1203 =  Coordinate();
Coordinate1203.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet1201.setCoord(Coordinate1203);

Shape1200.setGeometry(&LineSet1201);

HAnimSegment1196.addChild(&Shape1200);

HAnimJoint1195.addChildren(&HAnimSegment1196);

HAnimJoint& HAnimJoint1204 =  HAnimJoint();
HAnimJoint1204.setDEF(CString("hanim_l_pinky1"));
HAnimJoint1204.X3DNode::setName(CString("l_pinky1"));
HAnimJoint1204.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment1205 =  HAnimSegment();
HAnimSegment1205.setDEF(CString("hanim_l_pinky_proximal"));
HAnimSegment1205.X3DNode::setName(CString("l_pinky_proximal"));
TouchSensor& TouchSensor1206 =  TouchSensor();
TouchSensor1206.setDescription(CString("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal"));
HAnimSegment1205.addChild(&TouchSensor1206);

Transform& Transform1207 =  Transform();
Transform1207.setTranslation(new float[]{0.1925,0.7866,-0.1036});
Shape& Shape1208 =  Shape();
Shape1208.setUSE(CString("HAnimJointShape"));
Transform1207.addChild(&Shape1208);

HAnimSegment1205.addChild(&Transform1207);

Shape& Shape1209 =  Shape();
LineSet& LineSet1210 =  LineSet();
LineSet1210.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1211 =  ColorRGBA();
ColorRGBA1211.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1210.addChild(&ColorRGBA1211);

Coordinate& Coordinate1212 =  Coordinate();
Coordinate1212.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet1210.setCoord(Coordinate1212);

Shape1209.setGeometry(&LineSet1210);

HAnimSegment1205.addChild(&Shape1209);

HAnimJoint1204.addChildren(&HAnimSegment1205);

HAnimJoint& HAnimJoint1213 =  HAnimJoint();
HAnimJoint1213.setDEF(CString("hanim_l_pinky2"));
HAnimJoint1213.X3DNode::setName(CString("l_pinky2"));
HAnimJoint1213.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment1214 =  HAnimSegment();
HAnimSegment1214.setDEF(CString("hanim_l_pinky_middle"));
HAnimSegment1214.X3DNode::setName(CString("l_pinky_middle"));
TouchSensor& TouchSensor1215 =  TouchSensor();
TouchSensor1215.setDescription(CString("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle"));
HAnimSegment1214.addChild(&TouchSensor1215);

Transform& Transform1216 =  Transform();
Transform1216.setTranslation(new float[]{0.1938,0.7452,-0.1024});
Shape& Shape1217 =  Shape();
Shape1217.setUSE(CString("HAnimJointShape"));
Transform1216.addChild(&Shape1217);

HAnimSegment1214.addChild(&Transform1216);

Shape& Shape1218 =  Shape();
LineSet& LineSet1219 =  LineSet();
LineSet1219.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1220 =  ColorRGBA();
ColorRGBA1220.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1219.addChild(&ColorRGBA1220);

Coordinate& Coordinate1221 =  Coordinate();
Coordinate1221.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet1219.setCoord(Coordinate1221);

Shape1218.setGeometry(&LineSet1219);

HAnimSegment1214.addChild(&Shape1218);

HAnimJoint1213.addChildren(&HAnimSegment1214);

HAnimJoint& HAnimJoint1222 =  HAnimJoint();
HAnimJoint1222.setDEF(CString("hanim_l_pinky3"));
HAnimJoint1222.X3DNode::setName(CString("l_pinky3"));
HAnimJoint1222.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimSegment& HAnimSegment1223 =  HAnimSegment();
HAnimSegment1223.setDEF(CString("hanim_l_pinky_distal"));
HAnimSegment1223.X3DNode::setName(CString("l_pinky_distal"));
TouchSensor& TouchSensor1224 =  TouchSensor();
TouchSensor1224.setDescription(CString("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal"));
HAnimSegment1223.addChild(&TouchSensor1224);

Transform& Transform1225 =  Transform();
Transform1225.setTranslation(new float[]{0.1948,0.7277,-0.1017});
Shape& Shape1226 =  Shape();
Shape1226.setUSE(CString("HAnimJointShape"));
Transform1225.addChild(&Shape1226);

HAnimSegment1223.addChild(&Transform1225);

Shape& Shape1227 =  Shape();
LineSet& LineSet1228 =  LineSet();
LineSet1228.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1229 =  ColorRGBA();
ColorRGBA1229.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1228.addChild(&ColorRGBA1229);

Coordinate& Coordinate1230 =  Coordinate();
Coordinate1230.setPoint(new float[]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012}, 6);
LineSet1228.setCoord(Coordinate1230);

Shape1227.setGeometry(&LineSet1228);

HAnimSegment1223.addChild(&Shape1227);

HAnimSite& HAnimSite1231 =  HAnimSite();
HAnimSite1231.setDEF(CString("hanim_l_pinky_distal_tip"));
HAnimSite1231.X3DNode::setName(CString("l_pinky_distal_tip"));
HAnimSite1231.setTranslation(new float[]{0.2014,0.7009,-0.1012});
TouchSensor& TouchSensor1232 =  TouchSensor();
TouchSensor1232.setDescription(CString("HAnimSite l_pinky_distal_tip"));
HAnimSite1231.addChild(&TouchSensor1232);

Shape& Shape1233 =  Shape();
Shape1233.setUSE(CString("HAnimSiteShape"));
HAnimSite1231.addChild(&Shape1233);

HAnimSegment1223.addChild(&HAnimSite1231);

HAnimJoint1222.addChildren(&HAnimSegment1223);

HAnimJoint1213.addChildren(&HAnimJoint1222);

HAnimJoint1204.addChildren(&HAnimJoint1213);

HAnimJoint1195.addChildren(&HAnimJoint1204);

HAnimJoint983.addChildren(&HAnimJoint1195);

HAnimJoint946.addChildren(&HAnimJoint983);

HAnimJoint930.addChildren(&HAnimJoint946);

HAnimJoint921.addChildren(&HAnimJoint930);

HAnimJoint884.addChildren(&HAnimJoint921);

HAnimJoint596.addChildren(&HAnimJoint884);

HAnimJoint& HAnimJoint1234 =  HAnimJoint();
HAnimJoint1234.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint1234.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint1234.setCenter(new float[]{-0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment1235 =  HAnimSegment();
HAnimSegment1235.setDEF(CString("hanim_r_clavicle"));
HAnimSegment1235.X3DNode::setName(CString("r_clavicle"));
TouchSensor& TouchSensor1236 =  TouchSensor();
TouchSensor1236.setDescription(CString("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"));
HAnimSegment1235.addChild(&TouchSensor1236);

Transform& Transform1237 =  Transform();
Transform1237.setTranslation(new float[]{-0.082,1.4488,-0.0353});
Shape& Shape1238 =  Shape();
Shape1238.setUSE(CString("HAnimJointShape"));
Transform1237.addChild(&Shape1238);

HAnimSegment1235.addChild(&Transform1237);

Shape& Shape1239 =  Shape();
LineSet& LineSet1240 =  LineSet();
LineSet1240.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1241 =  ColorRGBA();
ColorRGBA1241.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1240.addChild(&ColorRGBA1241);

Coordinate& Coordinate1242 =  Coordinate();
Coordinate1242.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424}, 6);
LineSet1240.setCoord(Coordinate1242);

Shape1239.setGeometry(&LineSet1240);

HAnimSegment1235.addChild(&Shape1239);

Shape& Shape1243 =  Shape();
LineSet& LineSet1244 =  LineSet();
LineSet1244.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1245 =  ColorRGBA();
ColorRGBA1245.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1244.addChild(&ColorRGBA1245);

Coordinate& Coordinate1246 =  Coordinate();
Coordinate1246.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04}, 6);
LineSet1244.setCoord(Coordinate1246);

Shape1243.setGeometry(&LineSet1244);

HAnimSegment1235.addChild(&Shape1243);

Shape& Shape1247 =  Shape();
LineSet& LineSet1248 =  LineSet();
LineSet1248.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1249 =  ColorRGBA();
ColorRGBA1249.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1248.addChild(&ColorRGBA1249);

Coordinate& Coordinate1250 =  Coordinate();
Coordinate1250.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431}, 6);
LineSet1248.setCoord(Coordinate1250);

Shape1247.setGeometry(&LineSet1248);

HAnimSegment1235.addChild(&Shape1247);

Shape& Shape1251 =  Shape();
LineSet& LineSet1252 =  LineSet();
LineSet1252.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1253 =  ColorRGBA();
ColorRGBA1253.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1252.addChild(&ColorRGBA1253);

Coordinate& Coordinate1254 =  Coordinate();
Coordinate1254.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031}, 6);
LineSet1252.setCoord(Coordinate1254);

Shape1251.setGeometry(&LineSet1252);

HAnimSegment1235.addChild(&Shape1251);

Shape& Shape1255 =  Shape();
LineSet& LineSet1256 =  LineSet();
LineSet1256.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1257 =  ColorRGBA();
ColorRGBA1257.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1256.addChild(&ColorRGBA1257);

Coordinate& Coordinate1258 =  Coordinate();
Coordinate1258.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826}, 6);
LineSet1256.setCoord(Coordinate1258);

Shape1255.setGeometry(&LineSet1256);

HAnimSegment1235.addChild(&Shape1255);

HAnimSite& HAnimSite1259 =  HAnimSite();
HAnimSite1259.setDEF(CString("hanim_r_clavicale_pt"));
HAnimSite1259.X3DNode::setName(CString("r_clavicale_pt"));
HAnimSite1259.setTranslation(new float[]{-0.0115,1.4943,0.04});
TouchSensor& TouchSensor1260 =  TouchSensor();
TouchSensor1260.setDescription(CString("HAnimSite r_clavicale"));
HAnimSite1259.addChild(&TouchSensor1260);

Shape& Shape1261 =  Shape();
Shape1261.setUSE(CString("HAnimSiteShape"));
HAnimSite1259.addChild(&Shape1261);

HAnimSegment1235.addChild(&HAnimSite1259);

HAnimSite& HAnimSite1262 =  HAnimSite();
HAnimSite1262.setDEF(CString("hanim_r_acromion_pt"));
HAnimSite1262.X3DNode::setName(CString("r_acromion_pt"));
HAnimSite1262.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
TouchSensor& TouchSensor1263 =  TouchSensor();
TouchSensor1263.setDescription(CString("HAnimSite r_acromion"));
HAnimSite1262.addChild(&TouchSensor1263);

Shape& Shape1264 =  Shape();
Shape1264.setUSE(CString("HAnimSiteShape"));
HAnimSite1262.addChild(&Shape1264);

HAnimSegment1235.addChild(&HAnimSite1262);

HAnimSite& HAnimSite1265 =  HAnimSite();
HAnimSite1265.setDEF(CString("hanim_r_axilla_ant_pt"));
HAnimSite1265.X3DNode::setName(CString("r_axilla_ant_pt"));
HAnimSite1265.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
TouchSensor& TouchSensor1266 =  TouchSensor();
TouchSensor1266.setDescription(CString("HAnimSite r_axilla_ant"));
HAnimSite1265.addChild(&TouchSensor1266);

Shape& Shape1267 =  Shape();
Shape1267.setUSE(CString("HAnimSiteShape"));
HAnimSite1265.addChild(&Shape1267);

HAnimSegment1235.addChild(&HAnimSite1265);

HAnimSite& HAnimSite1268 =  HAnimSite();
HAnimSite1268.setDEF(CString("hanim_r_axilla_post_pt"));
HAnimSite1268.X3DNode::setName(CString("r_axilla_post_pt"));
HAnimSite1268.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
TouchSensor& TouchSensor1269 =  TouchSensor();
TouchSensor1269.setDescription(CString("HAnimSite r_axilla_post"));
HAnimSite1268.addChild(&TouchSensor1269);

Shape& Shape1270 =  Shape();
Shape1270.setUSE(CString("HAnimSiteShape"));
HAnimSite1268.addChild(&Shape1270);

HAnimSegment1235.addChild(&HAnimSite1268);

HAnimJoint1234.addChildren(&HAnimSegment1235);

HAnimJoint& HAnimJoint1271 =  HAnimJoint();
HAnimJoint1271.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1271.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint1271.setCenter(new float[]{-0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment1272 =  HAnimSegment();
HAnimSegment1272.setDEF(CString("hanim_r_scapula"));
HAnimSegment1272.X3DNode::setName(CString("r_scapula"));
TouchSensor& TouchSensor1273 =  TouchSensor();
TouchSensor1273.setDescription(CString("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"));
HAnimSegment1272.addChild(&TouchSensor1273);

Transform& Transform1274 =  Transform();
Transform1274.setTranslation(new float[]{-0.0962,1.4269,-0.0424});
Shape& Shape1275 =  Shape();
Shape1275.setUSE(CString("HAnimJointShape"));
Transform1274.addChild(&Shape1275);

HAnimSegment1272.addChild(&Transform1274);

Shape& Shape1276 =  Shape();
LineSet& LineSet1277 =  LineSet();
LineSet1277.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1278 =  ColorRGBA();
ColorRGBA1278.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1277.addChild(&ColorRGBA1278);

Coordinate& Coordinate1279 =  Coordinate();
Coordinate1279.setPoint(new float[]{-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387}, 6);
LineSet1277.setCoord(Coordinate1279);

Shape1276.setGeometry(&LineSet1277);

HAnimSegment1272.addChild(&Shape1276);

HAnimJoint1271.addChildren(&HAnimSegment1272);

HAnimJoint& HAnimJoint1280 =  HAnimJoint();
HAnimJoint1280.setDEF(CString("hanim_r_shoulder"));
HAnimJoint1280.X3DNode::setName(CString("r_shoulder"));
HAnimJoint1280.setCenter(new float[]{-0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment1281 =  HAnimSegment();
HAnimSegment1281.setDEF(CString("hanim_r_upperarm"));
HAnimSegment1281.X3DNode::setName(CString("r_upperarm"));
TouchSensor& TouchSensor1282 =  TouchSensor();
TouchSensor1282.setDescription(CString("HAnimJoint r_shoulder, HAnimSegment r_upperarm"));
HAnimSegment1281.addChild(&TouchSensor1282);

Transform& Transform1283 =  Transform();
Transform1283.setTranslation(new float[]{-0.2029,1.4376,-0.0387});
Shape& Shape1284 =  Shape();
Shape1284.setUSE(CString("HAnimJointShape"));
Transform1283.addChild(&Shape1284);

HAnimSegment1281.addChild(&Transform1283);

Shape& Shape1285 =  Shape();
LineSet& LineSet1286 =  LineSet();
LineSet1286.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1287 =  ColorRGBA();
ColorRGBA1287.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1286.addChild(&ColorRGBA1287);

Coordinate& Coordinate1288 =  Coordinate();
Coordinate1288.setPoint(new float[]{-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682}, 6);
LineSet1286.setCoord(Coordinate1288);

Shape1285.setGeometry(&LineSet1286);

HAnimSegment1281.addChild(&Shape1285);

Shape& Shape1289 =  Shape();
LineSet& LineSet1290 =  LineSet();
LineSet1290.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1291 =  ColorRGBA();
ColorRGBA1291.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1290.addChild(&ColorRGBA1291);

Coordinate& Coordinate1292 =  Coordinate();
Coordinate1292.setPoint(new float[]{-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033}, 6);
LineSet1290.setCoord(Coordinate1292);

Shape1289.setGeometry(&LineSet1290);

HAnimSegment1281.addChild(&Shape1289);

HAnimSite& HAnimSite1293 =  HAnimSite();
HAnimSite1293.setDEF(CString("hanim_r_humeral_lateral_epicn_pt"));
HAnimSite1293.X3DNode::setName(CString("r_humeral_lateral_epicn_pt"));
HAnimSite1293.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
TouchSensor& TouchSensor1294 =  TouchSensor();
TouchSensor1294.setDescription(CString("HAnimSite r_humeral_lateral_epicn"));
HAnimSite1293.addChild(&TouchSensor1294);

Shape& Shape1295 =  Shape();
Shape1295.setUSE(CString("HAnimSiteShape"));
HAnimSite1293.addChild(&Shape1295);

HAnimSegment1281.addChild(&HAnimSite1293);

HAnimJoint1280.addChildren(&HAnimSegment1281);

HAnimJoint& HAnimJoint1296 =  HAnimJoint();
HAnimJoint1296.setDEF(CString("hanim_r_elbow"));
HAnimJoint1296.X3DNode::setName(CString("r_elbow"));
HAnimJoint1296.setCenter(new float[]{-0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment1297 =  HAnimSegment();
HAnimSegment1297.setDEF(CString("hanim_r_forearm"));
HAnimSegment1297.X3DNode::setName(CString("r_forearm"));
TouchSensor& TouchSensor1298 =  TouchSensor();
TouchSensor1298.setDescription(CString("HAnimJoint r_elbow, HAnimSegment r_forearm"));
HAnimSegment1297.addChild(&TouchSensor1298);

Transform& Transform1299 =  Transform();
Transform1299.setTranslation(new float[]{-0.2014,1.1357,-0.0682});
Shape& Shape1300 =  Shape();
Shape1300.setUSE(CString("HAnimJointShape"));
Transform1299.addChild(&Shape1300);

HAnimSegment1297.addChild(&Transform1299);

Shape& Shape1301 =  Shape();
LineSet& LineSet1302 =  LineSet();
LineSet1302.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1303 =  ColorRGBA();
ColorRGBA1303.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1302.addChild(&ColorRGBA1303);

Coordinate& Coordinate1304 =  Coordinate();
Coordinate1304.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583}, 6);
LineSet1302.setCoord(Coordinate1304);

Shape1301.setGeometry(&LineSet1302);

HAnimSegment1297.addChild(&Shape1301);

Shape& Shape1305 =  Shape();
LineSet& LineSet1306 =  LineSet();
LineSet1306.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1307 =  ColorRGBA();
ColorRGBA1307.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1306.addChild(&ColorRGBA1307);

Coordinate& Coordinate1308 =  Coordinate();
Coordinate1308.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036}, 6);
LineSet1306.setCoord(Coordinate1308);

Shape1305.setGeometry(&LineSet1306);

HAnimSegment1297.addChild(&Shape1305);

Shape& Shape1309 =  Shape();
LineSet& LineSet1310 =  LineSet();
LineSet1310.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1311 =  ColorRGBA();
ColorRGBA1311.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1310.addChild(&ColorRGBA1311);

Coordinate& Coordinate1312 =  Coordinate();
Coordinate1312.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065}, 6);
LineSet1310.setCoord(Coordinate1312);

Shape1309.setGeometry(&LineSet1310);

HAnimSegment1297.addChild(&Shape1309);

Shape& Shape1313 =  Shape();
LineSet& LineSet1314 =  LineSet();
LineSet1314.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1315 =  ColorRGBA();
ColorRGBA1315.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1314.addChild(&ColorRGBA1315);

Coordinate& Coordinate1316 =  Coordinate();
Coordinate1316.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062}, 6);
LineSet1314.setCoord(Coordinate1316);

Shape1313.setGeometry(&LineSet1314);

HAnimSegment1297.addChild(&Shape1313);

Shape& Shape1317 =  Shape();
LineSet& LineSet1318 =  LineSet();
LineSet1318.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1319 =  ColorRGBA();
ColorRGBA1319.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1318.addChild(&ColorRGBA1319);

Coordinate& Coordinate1320 =  Coordinate();
Coordinate1320.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091}, 6);
LineSet1318.setCoord(Coordinate1320);

Shape1317.setGeometry(&LineSet1318);

HAnimSegment1297.addChild(&Shape1317);

HAnimSite& HAnimSite1321 =  HAnimSite();
HAnimSite1321.setDEF(CString("hanim_r_radial_styloid_pt"));
HAnimSite1321.X3DNode::setName(CString("r_radial_styloid_pt"));
HAnimSite1321.setTranslation(new float[]{-0.1884,0.8676,-0.036});
TouchSensor& TouchSensor1322 =  TouchSensor();
TouchSensor1322.setDescription(CString("HAnimSite r_radial_styloid"));
HAnimSite1321.addChild(&TouchSensor1322);

Shape& Shape1323 =  Shape();
Shape1323.setUSE(CString("HAnimSiteShape"));
HAnimSite1321.addChild(&Shape1323);

HAnimSegment1297.addChild(&HAnimSite1321);

HAnimSite& HAnimSite1324 =  HAnimSite();
HAnimSite1324.setDEF(CString("hanim_r_olecranon_pt"));
HAnimSite1324.X3DNode::setName(CString("r_olecranon_pt"));
HAnimSite1324.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
TouchSensor& TouchSensor1325 =  TouchSensor();
TouchSensor1325.setDescription(CString("HAnimSite r_olecranon"));
HAnimSite1324.addChild(&TouchSensor1325);

Shape& Shape1326 =  Shape();
Shape1326.setUSE(CString("HAnimSiteShape"));
HAnimSite1324.addChild(&Shape1326);

HAnimSegment1297.addChild(&HAnimSite1324);

HAnimSite& HAnimSite1327 =  HAnimSite();
HAnimSite1327.setDEF(CString("hanim_r_humeral_medial_epicn_pt"));
HAnimSite1327.X3DNode::setName(CString("r_humeral_medial_epicn_pt"));
HAnimSite1327.setTranslation(new float[]{-0.168,1.1298,-0.1062});
TouchSensor& TouchSensor1328 =  TouchSensor();
TouchSensor1328.setDescription(CString("HAnimSite r_humeral_medial_epicn"));
HAnimSite1327.addChild(&TouchSensor1328);

Shape& Shape1329 =  Shape();
Shape1329.setUSE(CString("HAnimSiteShape"));
HAnimSite1327.addChild(&Shape1329);

HAnimSegment1297.addChild(&HAnimSite1327);

HAnimSite& HAnimSite1330 =  HAnimSite();
HAnimSite1330.setDEF(CString("hanim_r_radiale_pt"));
HAnimSite1330.X3DNode::setName(CString("r_radiale_pt"));
HAnimSite1330.setTranslation(new float[]{-0.213,1.1305,-0.1091});
TouchSensor& TouchSensor1331 =  TouchSensor();
TouchSensor1331.setDescription(CString("HAnimSite r_radiale"));
HAnimSite1330.addChild(&TouchSensor1331);

Shape& Shape1332 =  Shape();
Shape1332.setUSE(CString("HAnimSiteShape"));
HAnimSite1330.addChild(&Shape1332);

HAnimSegment1297.addChild(&HAnimSite1330);

HAnimJoint1296.addChildren(&HAnimSegment1297);

HAnimJoint& HAnimJoint1333 =  HAnimJoint();
HAnimJoint1333.setDEF(CString("hanim_r_wrist"));
HAnimJoint1333.X3DNode::setName(CString("r_wrist"));
HAnimJoint1333.setCenter(new float[]{-0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment1334 =  HAnimSegment();
HAnimSegment1334.setDEF(CString("hanim_r_hand"));
HAnimSegment1334.X3DNode::setName(CString("r_hand"));
TouchSensor& TouchSensor1335 =  TouchSensor();
TouchSensor1335.setDescription(CString("HAnimJoint r_wrist, HAnimSegment r_hand"));
HAnimSegment1334.addChild(&TouchSensor1335);

Transform& Transform1336 =  Transform();
Transform1336.setTranslation(new float[]{-0.1984,0.8663,-0.0583});
Shape& Shape1337 =  Shape();
Shape1337.setUSE(CString("HAnimJointShape"));
Transform1336.addChild(&Shape1337);

HAnimSegment1334.addChild(&Transform1336);

Shape& Shape1338 =  Shape();
LineSet& LineSet1339 =  LineSet();
LineSet1339.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1340 =  ColorRGBA();
ColorRGBA1340.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1339.addChild(&ColorRGBA1340);

Coordinate& Coordinate1341 =  Coordinate();
Coordinate1341.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534}, 6);
LineSet1339.setCoord(Coordinate1341);

Shape1338.setGeometry(&LineSet1339);

HAnimSegment1334.addChild(&Shape1338);

Shape& Shape1342 =  Shape();
LineSet& LineSet1343 =  LineSet();
LineSet1343.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1344 =  ColorRGBA();
ColorRGBA1344.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1343.addChild(&ColorRGBA1344);

Coordinate& Coordinate1345 =  Coordinate();
Coordinate1345.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028}, 6);
LineSet1343.setCoord(Coordinate1345);

Shape1342.setGeometry(&LineSet1343);

HAnimSegment1334.addChild(&Shape1342);

Shape& Shape1346 =  Shape();
LineSet& LineSet1347 =  LineSet();
LineSet1347.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1348 =  ColorRGBA();
ColorRGBA1348.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1347.addChild(&ColorRGBA1348);

Coordinate& Coordinate1349 =  Coordinate();
Coordinate1349.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053}, 6);
LineSet1347.setCoord(Coordinate1349);

Shape1346.setGeometry(&LineSet1347);

HAnimSegment1334.addChild(&Shape1346);

Shape& Shape1350 =  Shape();
LineSet& LineSet1351 =  LineSet();
LineSet1351.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1352 =  ColorRGBA();
ColorRGBA1352.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1351.addChild(&ColorRGBA1352);

Coordinate& Coordinate1353 =  Coordinate();
Coordinate1353.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794}, 6);
LineSet1351.setCoord(Coordinate1353);

Shape1350.setGeometry(&LineSet1351);

HAnimSegment1334.addChild(&Shape1350);

Shape& Shape1354 =  Shape();
LineSet& LineSet1355 =  LineSet();
LineSet1355.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1356 =  ColorRGBA();
ColorRGBA1356.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1355.addChild(&ColorRGBA1356);

Coordinate& Coordinate1357 =  Coordinate();
Coordinate1357.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036}, 6);
LineSet1355.setCoord(Coordinate1357);

Shape1354.setGeometry(&LineSet1355);

HAnimSegment1334.addChild(&Shape1354);

Shape& Shape1358 =  Shape();
LineSet& LineSet1359 =  LineSet();
LineSet1359.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1360 =  ColorRGBA();
ColorRGBA1360.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1359.addChild(&ColorRGBA1360);

Coordinate& Coordinate1361 =  Coordinate();
Coordinate1361.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177}, 6);
LineSet1359.setCoord(Coordinate1361);

Shape1358.setGeometry(&LineSet1359);

HAnimSegment1334.addChild(&Shape1358);

Shape& Shape1362 =  Shape();
LineSet& LineSet1363 =  LineSet();
LineSet1363.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1364 =  ColorRGBA();
ColorRGBA1364.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1363.addChild(&ColorRGBA1364);

Coordinate& Coordinate1365 =  Coordinate();
Coordinate1365.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584}, 6);
LineSet1363.setCoord(Coordinate1365);

Shape1362.setGeometry(&LineSet1363);

HAnimSegment1334.addChild(&Shape1362);

Shape& Shape1366 =  Shape();
LineSet& LineSet1367 =  LineSet();
LineSet1367.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1368 =  ColorRGBA();
ColorRGBA1368.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1367.addChild(&ColorRGBA1368);

Coordinate& Coordinate1369 =  Coordinate();
Coordinate1369.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064}, 6);
LineSet1367.setCoord(Coordinate1369);

Shape1366.setGeometry(&LineSet1367);

HAnimSegment1334.addChild(&Shape1366);

Shape& Shape1370 =  Shape();
LineSet& LineSet1371 =  LineSet();
LineSet1371.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1372 =  ColorRGBA();
ColorRGBA1372.setUSE(CString("HAnimSiteViewpointLineColorRGBA"));
LineSet1371.addChild(&ColorRGBA1372);

Coordinate& Coordinate1373 =  Coordinate();
Coordinate1373.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.3,0.75,0.45}, 6);
LineSet1371.setCoord(Coordinate1373);

Shape1370.setGeometry(&LineSet1371);

HAnimSegment1334.addChild(&Shape1370);

HAnimSite& HAnimSite1374 =  HAnimSite();
HAnimSite1374.setDEF(CString("hanim_r_metacarpal_pha2_pt"));
HAnimSite1374.X3DNode::setName(CString("r_metacarpal_pha2_pt"));
HAnimSite1374.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
TouchSensor& TouchSensor1375 =  TouchSensor();
TouchSensor1375.setDescription(CString("HAnimSite r_metacarpal_pha2"));
HAnimSite1374.addChild(&TouchSensor1375);

Shape& Shape1376 =  Shape();
Shape1376.setUSE(CString("HAnimSiteShape"));
HAnimSite1374.addChild(&Shape1376);

HAnimSegment1334.addChild(&HAnimSite1374);

HAnimSite& HAnimSite1377 =  HAnimSite();
HAnimSite1377.setDEF(CString("hanim_r_ulnar_styloid_pt"));
HAnimSite1377.X3DNode::setName(CString("r_ulnar_styloid_pt"));
HAnimSite1377.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
TouchSensor& TouchSensor1378 =  TouchSensor();
TouchSensor1378.setDescription(CString("HAnimSite r_ulnar_styloid"));
HAnimSite1377.addChild(&TouchSensor1378);

Shape& Shape1379 =  Shape();
Shape1379.setUSE(CString("HAnimSiteShape"));
HAnimSite1377.addChild(&Shape1379);

HAnimSegment1334.addChild(&HAnimSite1377);

HAnimSite& HAnimSite1380 =  HAnimSite();
HAnimSite1380.setDEF(CString("hanim_r_metacarpal_pha5_pt"));
HAnimSite1380.X3DNode::setName(CString("r_metacarpal_pha5_pt"));
HAnimSite1380.setTranslation(new float[]{-0.1929,0.789,-0.1064});
TouchSensor& TouchSensor1381 =  TouchSensor();
TouchSensor1381.setDescription(CString("HAnimSite r_metacarpal_pha5"));
HAnimSite1380.addChild(&TouchSensor1381);

Shape& Shape1382 =  Shape();
Shape1382.setUSE(CString("HAnimSiteShape"));
HAnimSite1380.addChild(&Shape1382);

HAnimSegment1334.addChild(&HAnimSite1380);

HAnimSite& HAnimSite1383 =  HAnimSite();
HAnimSite1383.setDEF(CString("hanim_r_hand_front_view"));
HAnimSite1383.X3DNode::setName(CString("r_hand_front_view"));
HAnimSite1383.setTranslation(new float[]{-0.3,0.75,0.45});
TouchSensor& TouchSensor1384 =  TouchSensor();
TouchSensor1384.setDescription(CString("HAnimSite r_hand_front_view"));
HAnimSite1383.addChild(&TouchSensor1384);

Shape& Shape1385 =  Shape();
Shape1385.setUSE(CString("HAnimSiteShape"));
HAnimSite1383.addChild(&Shape1385);

Viewpoint& Viewpoint1386 =  Viewpoint();
Viewpoint1386.setDEF(CString("hanim_r_hand_front_viewpoint"));
Viewpoint1386.setDescription(CString("right hand front"));
Viewpoint1386.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1386.setCenterOfRotation(new float[]{0.0,0.7,0.0});
HAnimSite1383.addChild(&Viewpoint1386);

Anchor& Anchor1387 =  Anchor();
Anchor1387.setDescription(CString("HAnimSite hanim_r_hand_front_view Viewpoint"));
Anchor1387.setUrl(new CString[]{CString("#hanim_r_hand_front_viewpoint")}, 1);
LOD& LOD1388 =  LOD();
LOD1388.setForceTransitions(true);
LOD1388.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1389 =  WorldInfo();
WorldInfo1389.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1388.addChildren(&WorldInfo1389);

Shape& Shape1390 =  Shape();
Shape1390.setUSE(CString("HAnimSiteViewpointShape"));
LOD1388.addChildren(Shape1390);

Anchor1387.addChild(&LOD1388);

HAnimSite1383.addChild(Anchor1387);

HAnimSegment1334.addChild(&HAnimSite1383);

HAnimJoint1333.addChildren(&HAnimSegment1334);

HAnimJoint& HAnimJoint1391 =  HAnimJoint();
HAnimJoint1391.setDEF(CString("hanim_r_thumb1"));
HAnimJoint1391.X3DNode::setName(CString("r_thumb1"));
HAnimJoint1391.setCenter(new float[]{-0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment1392 =  HAnimSegment();
HAnimSegment1392.setDEF(CString("hanim_r_thumb_metacarpal"));
HAnimSegment1392.X3DNode::setName(CString("r_thumb_metacarpal"));
TouchSensor& TouchSensor1393 =  TouchSensor();
TouchSensor1393.setDescription(CString("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal"));
HAnimSegment1392.addChild(&TouchSensor1393);

Transform& Transform1394 =  Transform();
Transform1394.setTranslation(new float[]{-0.1924,0.8472,-0.0534});
Shape& Shape1395 =  Shape();
Shape1395.setUSE(CString("HAnimJointShape"));
Transform1394.addChild(&Shape1395);

HAnimSegment1392.addChild(&Transform1394);

Shape& Shape1396 =  Shape();
LineSet& LineSet1397 =  LineSet();
LineSet1397.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1398 =  ColorRGBA();
ColorRGBA1398.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1397.addChild(&ColorRGBA1398);

Coordinate& Coordinate1399 =  Coordinate();
Coordinate1399.setPoint(new float[]{-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246}, 6);
LineSet1397.setCoord(Coordinate1399);

Shape1396.setGeometry(&LineSet1397);

HAnimSegment1392.addChild(&Shape1396);

HAnimJoint1391.addChildren(&HAnimSegment1392);

HAnimJoint& HAnimJoint1400 =  HAnimJoint();
HAnimJoint1400.setDEF(CString("hanim_r_thumb2"));
HAnimJoint1400.X3DNode::setName(CString("r_thumb2"));
HAnimJoint1400.setCenter(new float[]{-0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment1401 =  HAnimSegment();
HAnimSegment1401.setDEF(CString("hanim_r_thumb_proximal"));
HAnimSegment1401.X3DNode::setName(CString("r_thumb_proximal"));
TouchSensor& TouchSensor1402 =  TouchSensor();
TouchSensor1402.setDescription(CString("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal"));
HAnimSegment1401.addChild(&TouchSensor1402);

Transform& Transform1403 =  Transform();
Transform1403.setTranslation(new float[]{-0.1951,0.8226,0.0246});
Shape& Shape1404 =  Shape();
Shape1404.setUSE(CString("HAnimJointShape"));
Transform1403.addChild(&Shape1404);

HAnimSegment1401.addChild(&Transform1403);

Shape& Shape1405 =  Shape();
LineSet& LineSet1406 =  LineSet();
LineSet1406.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1407 =  ColorRGBA();
ColorRGBA1407.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1406.addChild(&ColorRGBA1407);

Coordinate& Coordinate1408 =  Coordinate();
Coordinate1408.setPoint(new float[]{-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464}, 6);
LineSet1406.setCoord(Coordinate1408);

Shape1405.setGeometry(&LineSet1406);

HAnimSegment1401.addChild(&Shape1405);

HAnimJoint1400.addChildren(&HAnimSegment1401);

HAnimJoint& HAnimJoint1409 =  HAnimJoint();
HAnimJoint1409.setDEF(CString("hanim_r_thumb3"));
HAnimJoint1409.X3DNode::setName(CString("r_thumb3"));
HAnimJoint1409.setCenter(new float[]{-0.1955,0.8159,0.0464});
HAnimSegment& HAnimSegment1410 =  HAnimSegment();
HAnimSegment1410.setDEF(CString("hanim_r_thumb_distal"));
HAnimSegment1410.X3DNode::setName(CString("r_thumb_distal"));
TouchSensor& TouchSensor1411 =  TouchSensor();
TouchSensor1411.setDescription(CString("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal"));
HAnimSegment1410.addChild(&TouchSensor1411);

Transform& Transform1412 =  Transform();
Transform1412.setTranslation(new float[]{-0.1955,0.8159,0.0464});
Shape& Shape1413 =  Shape();
Shape1413.setUSE(CString("HAnimJointShape"));
Transform1412.addChild(&Shape1413);

HAnimSegment1410.addChild(&Transform1412);

Shape& Shape1414 =  Shape();
LineSet& LineSet1415 =  LineSet();
LineSet1415.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1416 =  ColorRGBA();
ColorRGBA1416.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1415.addChild(&ColorRGBA1416);

Coordinate& Coordinate1417 =  Coordinate();
Coordinate1417.setPoint(new float[]{-0.1955,0.8159,0.0464,-0.1869,0.809,0.082}, 6);
LineSet1415.setCoord(Coordinate1417);

Shape1414.setGeometry(&LineSet1415);

HAnimSegment1410.addChild(&Shape1414);

HAnimSite& HAnimSite1418 =  HAnimSite();
HAnimSite1418.setDEF(CString("hanim_r_thumb_distal_tip"));
HAnimSite1418.X3DNode::setName(CString("r_thumb_distal_tip"));
HAnimSite1418.setTranslation(new float[]{-0.1869,0.809,0.082});
TouchSensor& TouchSensor1419 =  TouchSensor();
TouchSensor1419.setDescription(CString("HAnimSite r_thumb_distal_tip"));
HAnimSite1418.addChild(&TouchSensor1419);

Shape& Shape1420 =  Shape();
Shape1420.setUSE(CString("HAnimSiteShape"));
HAnimSite1418.addChild(&Shape1420);

HAnimSegment1410.addChild(&HAnimSite1418);

HAnimJoint1409.addChildren(&HAnimSegment1410);

HAnimJoint1400.addChildren(&HAnimJoint1409);

HAnimJoint1391.addChildren(&HAnimJoint1400);

HAnimJoint1333.addChildren(&HAnimJoint1391);

HAnimJoint& HAnimJoint1421 =  HAnimJoint();
HAnimJoint1421.setDEF(CString("hanim_r_index0"));
HAnimJoint1421.X3DNode::setName(CString("r_index0"));
HAnimJoint1421.setCenter(new float[]{-0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment1422 =  HAnimSegment();
HAnimSegment1422.setDEF(CString("hanim_r_index_metacarpal"));
HAnimSegment1422.X3DNode::setName(CString("r_index_metacarpal"));
TouchSensor& TouchSensor1423 =  TouchSensor();
TouchSensor1423.setDescription(CString("HAnimJoint r_index0, HAnimSegment r_index_metacarpal"));
HAnimSegment1422.addChild(&TouchSensor1423);

Transform& Transform1424 =  Transform();
Transform1424.setTranslation(new float[]{-0.1983,0.8024,-0.028});
Shape& Shape1425 =  Shape();
Shape1425.setUSE(CString("HAnimJointShape"));
Transform1424.addChild(&Shape1425);

HAnimSegment1422.addChild(&Transform1424);

Shape& Shape1426 =  Shape();
LineSet& LineSet1427 =  LineSet();
LineSet1427.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1428 =  ColorRGBA();
ColorRGBA1428.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1427.addChild(&ColorRGBA1428);

Coordinate& Coordinate1429 =  Coordinate();
Coordinate1429.setPoint(new float[]{-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028}, 6);
LineSet1427.setCoord(Coordinate1429);

Shape1426.setGeometry(&LineSet1427);

HAnimSegment1422.addChild(&Shape1426);

HAnimJoint1421.addChildren(&HAnimSegment1422);

HAnimJoint& HAnimJoint1430 =  HAnimJoint();
HAnimJoint1430.setDEF(CString("hanim_r_index1"));
HAnimJoint1430.X3DNode::setName(CString("r_index1"));
HAnimJoint1430.setCenter(new float[]{-0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment1431 =  HAnimSegment();
HAnimSegment1431.setDEF(CString("hanim_r_index_proximal"));
HAnimSegment1431.X3DNode::setName(CString("r_index_proximal"));
TouchSensor& TouchSensor1432 =  TouchSensor();
TouchSensor1432.setDescription(CString("HAnimJoint r_index1, HAnimSegment r_index_proximal"));
HAnimSegment1431.addChild(&TouchSensor1432);

Transform& Transform1433 =  Transform();
Transform1433.setTranslation(new float[]{-0.1983,0.7815,-0.028});
Shape& Shape1434 =  Shape();
Shape1434.setUSE(CString("HAnimJointShape"));
Transform1433.addChild(&Shape1434);

HAnimSegment1431.addChild(&Transform1433);

Shape& Shape1435 =  Shape();
LineSet& LineSet1436 =  LineSet();
LineSet1436.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1437 =  ColorRGBA();
ColorRGBA1437.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1436.addChild(&ColorRGBA1437);

Coordinate& Coordinate1438 =  Coordinate();
Coordinate1438.setPoint(new float[]{-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248}, 6);
LineSet1436.setCoord(Coordinate1438);

Shape1435.setGeometry(&LineSet1436);

HAnimSegment1431.addChild(&Shape1435);

HAnimJoint1430.addChildren(&HAnimSegment1431);

HAnimJoint& HAnimJoint1439 =  HAnimJoint();
HAnimJoint1439.setDEF(CString("hanim_r_index2"));
HAnimJoint1439.X3DNode::setName(CString("r_index2"));
HAnimJoint1439.setCenter(new float[]{-0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment1440 =  HAnimSegment();
HAnimSegment1440.setDEF(CString("hanim_r_index_middle"));
HAnimSegment1440.X3DNode::setName(CString("r_index_middle"));
TouchSensor& TouchSensor1441 =  TouchSensor();
TouchSensor1441.setDescription(CString("HAnimJoint r_index2, HAnimSegment r_index_middle"));
HAnimSegment1440.addChild(&TouchSensor1441);

Transform& Transform1442 =  Transform();
Transform1442.setTranslation(new float[]{-0.2017,0.7363,-0.0248});
Shape& Shape1443 =  Shape();
Shape1443.setUSE(CString("HAnimJointShape"));
Transform1442.addChild(&Shape1443);

HAnimSegment1440.addChild(&Transform1442);

Shape& Shape1444 =  Shape();
LineSet& LineSet1445 =  LineSet();
LineSet1445.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1446 =  ColorRGBA();
ColorRGBA1446.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1445.addChild(&ColorRGBA1446);

Coordinate& Coordinate1447 =  Coordinate();
Coordinate1447.setPoint(new float[]{-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236}, 6);
LineSet1445.setCoord(Coordinate1447);

Shape1444.setGeometry(&LineSet1445);

HAnimSegment1440.addChild(&Shape1444);

HAnimJoint1439.addChildren(&HAnimSegment1440);

HAnimJoint& HAnimJoint1448 =  HAnimJoint();
HAnimJoint1448.setDEF(CString("hanim_r_index3"));
HAnimJoint1448.X3DNode::setName(CString("r_index3"));
HAnimJoint1448.setCenter(new float[]{-0.2028,0.7139,-0.0236});
HAnimSegment& HAnimSegment1449 =  HAnimSegment();
HAnimSegment1449.setDEF(CString("hanim_r_index_distal"));
HAnimSegment1449.X3DNode::setName(CString("r_index_distal"));
TouchSensor& TouchSensor1450 =  TouchSensor();
TouchSensor1450.setDescription(CString("HAnimJoint r_index3, HAnimSegment r_index_distal"));
HAnimSegment1449.addChild(&TouchSensor1450);

Transform& Transform1451 =  Transform();
Transform1451.setTranslation(new float[]{-0.2028,0.7139,-0.0236});
Shape& Shape1452 =  Shape();
Shape1452.setUSE(CString("HAnimJointShape"));
Transform1451.addChild(&Shape1452);

HAnimSegment1449.addChild(&Transform1451);

Shape& Shape1453 =  Shape();
LineSet& LineSet1454 =  LineSet();
LineSet1454.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1455 =  ColorRGBA();
ColorRGBA1455.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1454.addChild(&ColorRGBA1455);

Coordinate& Coordinate1456 =  Coordinate();
Coordinate1456.setPoint(new float[]{-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018}, 6);
LineSet1454.setCoord(Coordinate1456);

Shape1453.setGeometry(&LineSet1454);

HAnimSegment1449.addChild(&Shape1453);

Shape& Shape1457 =  Shape();
LineSet& LineSet1458 =  LineSet();
LineSet1458.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1459 =  ColorRGBA();
ColorRGBA1459.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1458.addChild(&ColorRGBA1459);

Coordinate& Coordinate1460 =  Coordinate();
Coordinate1460.setPoint(new float[]{-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423}, 6);
LineSet1458.setCoord(Coordinate1460);

Shape1457.setGeometry(&LineSet1458);

HAnimSegment1449.addChild(&Shape1457);

HAnimSite& HAnimSite1461 =  HAnimSite();
HAnimSite1461.setDEF(CString("hanim_r_index_distal_tip"));
HAnimSite1461.X3DNode::setName(CString("r_index_distal_tip"));
HAnimSite1461.setTranslation(new float[]{-0.198,0.6883,-0.018});
TouchSensor& TouchSensor1462 =  TouchSensor();
TouchSensor1462.setDescription(CString("HAnimSite r_index_distal_tip"));
HAnimSite1461.addChild(&TouchSensor1462);

Shape& Shape1463 =  Shape();
Shape1463.setUSE(CString("HAnimSiteShape"));
HAnimSite1461.addChild(&Shape1463);

HAnimSegment1449.addChild(&HAnimSite1461);

HAnimSite& HAnimSite1464 =  HAnimSite();
HAnimSite1464.setDEF(CString("hanim_r_dactylion_pt"));
HAnimSite1464.X3DNode::setName(CString("r_dactylion_pt"));
HAnimSite1464.setTranslation(new float[]{-0.1941,0.6772,-0.0423});
TouchSensor& TouchSensor1465 =  TouchSensor();
TouchSensor1465.setDescription(CString("HAnimSite r_dactylion"));
HAnimSite1464.addChild(&TouchSensor1465);

Shape& Shape1466 =  Shape();
Shape1466.setUSE(CString("HAnimSiteShape"));
HAnimSite1464.addChild(&Shape1466);

HAnimSegment1449.addChild(&HAnimSite1464);

HAnimJoint1448.addChildren(&HAnimSegment1449);

HAnimJoint1439.addChildren(&HAnimJoint1448);

HAnimJoint1430.addChildren(&HAnimJoint1439);

HAnimJoint1421.addChildren(&HAnimJoint1430);

HAnimJoint1333.addChildren(&HAnimJoint1421);

HAnimJoint& HAnimJoint1467 =  HAnimJoint();
HAnimJoint1467.setDEF(CString("hanim_r_middle0"));
HAnimJoint1467.X3DNode::setName(CString("r_middle0"));
HAnimJoint1467.setCenter(new float[]{-0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment1468 =  HAnimSegment();
HAnimSegment1468.setDEF(CString("hanim_r_middle_metacarpal"));
HAnimSegment1468.X3DNode::setName(CString("r_middle_metacarpal"));
TouchSensor& TouchSensor1469 =  TouchSensor();
TouchSensor1469.setDescription(CString("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal"));
HAnimSegment1468.addChild(&TouchSensor1469);

Transform& Transform1470 =  Transform();
Transform1470.setTranslation(new float[]{-0.1987,0.8029,-0.053});
Shape& Shape1471 =  Shape();
Shape1471.setUSE(CString("HAnimJointShape"));
Transform1470.addChild(&Shape1471);

HAnimSegment1468.addChild(&Transform1470);

Shape& Shape1472 =  Shape();
LineSet& LineSet1473 =  LineSet();
LineSet1473.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1474 =  ColorRGBA();
ColorRGBA1474.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1473.addChild(&ColorRGBA1474);

Coordinate& Coordinate1475 =  Coordinate();
Coordinate1475.setPoint(new float[]{-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053}, 6);
LineSet1473.setCoord(Coordinate1475);

Shape1472.setGeometry(&LineSet1473);

HAnimSegment1468.addChild(&Shape1472);

HAnimJoint1467.addChildren(&HAnimSegment1468);

HAnimJoint& HAnimJoint1476 =  HAnimJoint();
HAnimJoint1476.setDEF(CString("hanim_r_middle1"));
HAnimJoint1476.X3DNode::setName(CString("r_middle1"));
HAnimJoint1476.setCenter(new float[]{-0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment1477 =  HAnimSegment();
HAnimSegment1477.setDEF(CString("hanim_r_middle_proximal"));
HAnimSegment1477.X3DNode::setName(CString("r_middle_proximal"));
TouchSensor& TouchSensor1478 =  TouchSensor();
TouchSensor1478.setDescription(CString("HAnimJoint r_middle1, HAnimSegment r_middle_proximal"));
HAnimSegment1477.addChild(&TouchSensor1478);

Transform& Transform1479 =  Transform();
Transform1479.setTranslation(new float[]{-0.1987,0.7818,-0.053});
Shape& Shape1480 =  Shape();
Shape1480.setUSE(CString("HAnimJointShape"));
Transform1479.addChild(&Shape1480);

HAnimSegment1477.addChild(&Transform1479);

Shape& Shape1481 =  Shape();
LineSet& LineSet1482 =  LineSet();
LineSet1482.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1483 =  ColorRGBA();
ColorRGBA1483.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1482.addChild(&ColorRGBA1483);

Coordinate& Coordinate1484 =  Coordinate();
Coordinate1484.setPoint(new float[]{-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503}, 6);
LineSet1482.setCoord(Coordinate1484);

Shape1481.setGeometry(&LineSet1482);

HAnimSegment1477.addChild(&Shape1481);

HAnimJoint1476.addChildren(&HAnimSegment1477);

HAnimJoint& HAnimJoint1485 =  HAnimJoint();
HAnimJoint1485.setDEF(CString("hanim_r_middle2"));
HAnimJoint1485.X3DNode::setName(CString("r_middle2"));
HAnimJoint1485.setCenter(new float[]{-0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment1486 =  HAnimSegment();
HAnimSegment1486.setDEF(CString("hanim_r_middle_middle"));
HAnimSegment1486.X3DNode::setName(CString("r_middle_middle"));
TouchSensor& TouchSensor1487 =  TouchSensor();
TouchSensor1487.setDescription(CString("HAnimJoint r_middle2, HAnimSegment r_middle_middle"));
HAnimSegment1486.addChild(&TouchSensor1487);

Transform& Transform1488 =  Transform();
Transform1488.setTranslation(new float[]{-0.2013,0.7273,-0.0503});
Shape& Shape1489 =  Shape();
Shape1489.setUSE(CString("HAnimJointShape"));
Transform1488.addChild(&Shape1489);

HAnimSegment1486.addChild(&Transform1488);

Shape& Shape1490 =  Shape();
LineSet& LineSet1491 =  LineSet();
LineSet1491.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1492 =  ColorRGBA();
ColorRGBA1492.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1491.addChild(&ColorRGBA1492);

Coordinate& Coordinate1493 =  Coordinate();
Coordinate1493.setPoint(new float[]{-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494}, 6);
LineSet1491.setCoord(Coordinate1493);

Shape1490.setGeometry(&LineSet1491);

HAnimSegment1486.addChild(&Shape1490);

HAnimJoint1485.addChildren(&HAnimSegment1486);

HAnimJoint& HAnimJoint1494 =  HAnimJoint();
HAnimJoint1494.setDEF(CString("hanim_r_middle3"));
HAnimJoint1494.X3DNode::setName(CString("r_middle3"));
HAnimJoint1494.setCenter(new float[]{-0.2026,0.7011,-0.0494});
HAnimSegment& HAnimSegment1495 =  HAnimSegment();
HAnimSegment1495.setDEF(CString("hanim_r_middle_distal"));
HAnimSegment1495.X3DNode::setName(CString("r_middle_distal"));
TouchSensor& TouchSensor1496 =  TouchSensor();
TouchSensor1496.setDescription(CString("HAnimJoint r_middle3, HAnimSegment r_middle_distal"));
HAnimSegment1495.addChild(&TouchSensor1496);

Transform& Transform1497 =  Transform();
Transform1497.setTranslation(new float[]{-0.2026,0.7011,-0.0494});
Shape& Shape1498 =  Shape();
Shape1498.setUSE(CString("HAnimJointShape"));
Transform1497.addChild(&Shape1498);

HAnimSegment1495.addChild(&Transform1497);

Shape& Shape1499 =  Shape();
LineSet& LineSet1500 =  LineSet();
LineSet1500.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1501 =  ColorRGBA();
ColorRGBA1501.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1500.addChild(&ColorRGBA1501);

Coordinate& Coordinate1502 =  Coordinate();
Coordinate1502.setPoint(new float[]{-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427}, 6);
LineSet1500.setCoord(Coordinate1502);

Shape1499.setGeometry(&LineSet1500);

HAnimSegment1495.addChild(&Shape1499);

HAnimSite& HAnimSite1503 =  HAnimSite();
HAnimSite1503.setDEF(CString("hanim_r_middle_distal_tip"));
HAnimSite1503.X3DNode::setName(CString("r_middle_distal_tip"));
HAnimSite1503.setTranslation(new float[]{-0.1969,0.6758,-0.0427});
TouchSensor& TouchSensor1504 =  TouchSensor();
TouchSensor1504.setDescription(CString("HAnimSite r_middle_distal_tip"));
HAnimSite1503.addChild(&TouchSensor1504);

Shape& Shape1505 =  Shape();
Shape1505.setUSE(CString("HAnimSiteShape"));
HAnimSite1503.addChild(&Shape1505);

HAnimSegment1495.addChild(&HAnimSite1503);

HAnimJoint1494.addChildren(&HAnimSegment1495);

HAnimJoint1485.addChildren(&HAnimJoint1494);

HAnimJoint1476.addChildren(&HAnimJoint1485);

HAnimJoint1467.addChildren(&HAnimJoint1476);

HAnimJoint1333.addChildren(&HAnimJoint1467);

HAnimJoint& HAnimJoint1506 =  HAnimJoint();
HAnimJoint1506.setDEF(CString("hanim_r_ring0"));
HAnimJoint1506.X3DNode::setName(CString("r_ring0"));
HAnimJoint1506.setCenter(new float[]{-0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment1507 =  HAnimSegment();
HAnimSegment1507.setDEF(CString("hanim_r_ring_metacarpal"));
HAnimSegment1507.X3DNode::setName(CString("r_ring_metacarpal"));
TouchSensor& TouchSensor1508 =  TouchSensor();
TouchSensor1508.setDescription(CString("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal"));
HAnimSegment1507.addChild(&TouchSensor1508);

Transform& Transform1509 =  Transform();
Transform1509.setTranslation(new float[]{-0.1956,0.8019,-0.0794});
Shape& Shape1510 =  Shape();
Shape1510.setUSE(CString("HAnimJointShape"));
Transform1509.addChild(&Shape1510);

HAnimSegment1507.addChild(&Transform1509);

Shape& Shape1511 =  Shape();
LineSet& LineSet1512 =  LineSet();
LineSet1512.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1513 =  ColorRGBA();
ColorRGBA1513.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1512.addChild(&ColorRGBA1513);

Coordinate& Coordinate1514 =  Coordinate();
Coordinate1514.setPoint(new float[]{-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794}, 6);
LineSet1512.setCoord(Coordinate1514);

Shape1511.setGeometry(&LineSet1512);

HAnimSegment1507.addChild(&Shape1511);

HAnimJoint1506.addChildren(&HAnimSegment1507);

HAnimJoint& HAnimJoint1515 =  HAnimJoint();
HAnimJoint1515.setDEF(CString("hanim_r_ring1"));
HAnimJoint1515.X3DNode::setName(CString("r_ring1"));
HAnimJoint1515.setCenter(new float[]{-0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment1516 =  HAnimSegment();
HAnimSegment1516.setDEF(CString("hanim_r_ring_proximal"));
HAnimSegment1516.X3DNode::setName(CString("r_ring_proximal"));
TouchSensor& TouchSensor1517 =  TouchSensor();
TouchSensor1517.setDescription(CString("HAnimJoint r_ring1, HAnimSegment r_ring_proximal"));
HAnimSegment1516.addChild(&TouchSensor1517);

Transform& Transform1518 =  Transform();
Transform1518.setTranslation(new float[]{-0.1956,0.7815,-0.0794});
Shape& Shape1519 =  Shape();
Shape1519.setUSE(CString("HAnimJointShape"));
Transform1518.addChild(&Shape1519);

HAnimSegment1516.addChild(&Transform1518);

Shape& Shape1520 =  Shape();
LineSet& LineSet1521 =  LineSet();
LineSet1521.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1522 =  ColorRGBA();
ColorRGBA1522.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1521.addChild(&ColorRGBA1522);

Coordinate& Coordinate1523 =  Coordinate();
Coordinate1523.setPoint(new float[]{-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777}, 6);
LineSet1521.setCoord(Coordinate1523);

Shape1520.setGeometry(&LineSet1521);

HAnimSegment1516.addChild(&Shape1520);

HAnimJoint1515.addChildren(&HAnimSegment1516);

HAnimJoint& HAnimJoint1524 =  HAnimJoint();
HAnimJoint1524.setDEF(CString("hanim_r_ring2"));
HAnimJoint1524.X3DNode::setName(CString("r_ring2"));
HAnimJoint1524.setCenter(new float[]{-0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment1525 =  HAnimSegment();
HAnimSegment1525.setDEF(CString("hanim_r_ring_middle"));
HAnimSegment1525.X3DNode::setName(CString("r_ring_middle"));
TouchSensor& TouchSensor1526 =  TouchSensor();
TouchSensor1526.setDescription(CString("HAnimJoint r_ring2, HAnimSegment r_ring_middle"));
HAnimSegment1525.addChild(&TouchSensor1526);

Transform& Transform1527 =  Transform();
Transform1527.setTranslation(new float[]{-0.1973,0.7287,-0.0777});
Shape& Shape1528 =  Shape();
Shape1528.setUSE(CString("HAnimJointShape"));
Transform1527.addChild(&Shape1528);

HAnimSegment1525.addChild(&Transform1527);

Shape& Shape1529 =  Shape();
LineSet& LineSet1530 =  LineSet();
LineSet1530.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1531 =  ColorRGBA();
ColorRGBA1531.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1530.addChild(&ColorRGBA1531);

Coordinate& Coordinate1532 =  Coordinate();
Coordinate1532.setPoint(new float[]{-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767}, 6);
LineSet1530.setCoord(Coordinate1532);

Shape1529.setGeometry(&LineSet1530);

HAnimSegment1525.addChild(&Shape1529);

HAnimJoint1524.addChildren(&HAnimSegment1525);

HAnimJoint& HAnimJoint1533 =  HAnimJoint();
HAnimJoint1533.setDEF(CString("hanim_r_ring3"));
HAnimJoint1533.X3DNode::setName(CString("r_ring3"));
HAnimJoint1533.setCenter(new float[]{-0.1983,0.7045,-0.0767});
HAnimSegment& HAnimSegment1534 =  HAnimSegment();
HAnimSegment1534.setDEF(CString("hanim_r_ring_distal"));
HAnimSegment1534.X3DNode::setName(CString("r_ring_distal"));
TouchSensor& TouchSensor1535 =  TouchSensor();
TouchSensor1535.setDescription(CString("HAnimJoint r_ring3, HAnimSegment r_ring_distal"));
HAnimSegment1534.addChild(&TouchSensor1535);

Transform& Transform1536 =  Transform();
Transform1536.setTranslation(new float[]{-0.1983,0.7045,-0.0767});
Shape& Shape1537 =  Shape();
Shape1537.setUSE(CString("HAnimJointShape"));
Transform1536.addChild(&Shape1537);

HAnimSegment1534.addChild(&Transform1536);

Shape& Shape1538 =  Shape();
LineSet& LineSet1539 =  LineSet();
LineSet1539.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1540 =  ColorRGBA();
ColorRGBA1540.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1539.addChild(&ColorRGBA1540);

Coordinate& Coordinate1541 =  Coordinate();
Coordinate1541.setPoint(new float[]{-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693}, 6);
LineSet1539.setCoord(Coordinate1541);

Shape1538.setGeometry(&LineSet1539);

HAnimSegment1534.addChild(&Shape1538);

HAnimSite& HAnimSite1542 =  HAnimSite();
HAnimSite1542.setDEF(CString("hanim_r_ring_distal_tip"));
HAnimSite1542.X3DNode::setName(CString("r_ring_distal_tip"));
HAnimSite1542.setTranslation(new float[]{-0.1934,0.6778,-0.0693});
TouchSensor& TouchSensor1543 =  TouchSensor();
TouchSensor1543.setDescription(CString("HAnimSite r_ring_distal_tip"));
HAnimSite1542.addChild(&TouchSensor1543);

Shape& Shape1544 =  Shape();
Shape1544.setUSE(CString("HAnimSiteShape"));
HAnimSite1542.addChild(&Shape1544);

HAnimSegment1534.addChild(&HAnimSite1542);

HAnimJoint1533.addChildren(&HAnimSegment1534);

HAnimJoint1524.addChildren(&HAnimJoint1533);

HAnimJoint1515.addChildren(&HAnimJoint1524);

HAnimJoint1506.addChildren(&HAnimJoint1515);

HAnimJoint1333.addChildren(&HAnimJoint1506);

HAnimJoint& HAnimJoint1545 =  HAnimJoint();
HAnimJoint1545.setDEF(CString("hanim_r_pinky0"));
HAnimJoint1545.X3DNode::setName(CString("r_pinky0"));
HAnimJoint1545.setCenter(new float[]{-0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment1546 =  HAnimSegment();
HAnimSegment1546.setDEF(CString("hanim_r_pinky_metacarpal"));
HAnimSegment1546.X3DNode::setName(CString("r_pinky_metacarpal"));
TouchSensor& TouchSensor1547 =  TouchSensor();
TouchSensor1547.setDescription(CString("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal"));
HAnimSegment1546.addChild(&TouchSensor1547);

Transform& Transform1548 =  Transform();
Transform1548.setTranslation(new float[]{-0.1925,0.8066,-0.1036});
Shape& Shape1549 =  Shape();
Shape1549.setUSE(CString("HAnimJointShape"));
Transform1548.addChild(&Shape1549);

HAnimSegment1546.addChild(&Transform1548);

Shape& Shape1550 =  Shape();
LineSet& LineSet1551 =  LineSet();
LineSet1551.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1552 =  ColorRGBA();
ColorRGBA1552.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1551.addChild(&ColorRGBA1552);

Coordinate& Coordinate1553 =  Coordinate();
Coordinate1553.setPoint(new float[]{-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036}, 6);
LineSet1551.setCoord(Coordinate1553);

Shape1550.setGeometry(&LineSet1551);

HAnimSegment1546.addChild(&Shape1550);

HAnimJoint1545.addChildren(&HAnimSegment1546);

HAnimJoint& HAnimJoint1554 =  HAnimJoint();
HAnimJoint1554.setDEF(CString("hanim_r_pinky1"));
HAnimJoint1554.X3DNode::setName(CString("r_pinky1"));
HAnimJoint1554.setCenter(new float[]{-0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment1555 =  HAnimSegment();
HAnimSegment1555.setDEF(CString("hanim_r_pinky_proximal"));
HAnimSegment1555.X3DNode::setName(CString("r_pinky_proximal"));
TouchSensor& TouchSensor1556 =  TouchSensor();
TouchSensor1556.setDescription(CString("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal"));
HAnimSegment1555.addChild(&TouchSensor1556);

Transform& Transform1557 =  Transform();
Transform1557.setTranslation(new float[]{-0.1925,0.7866,-0.1036});
Shape& Shape1558 =  Shape();
Shape1558.setUSE(CString("HAnimJointShape"));
Transform1557.addChild(&Shape1558);

HAnimSegment1555.addChild(&Transform1557);

Shape& Shape1559 =  Shape();
LineSet& LineSet1560 =  LineSet();
LineSet1560.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1561 =  ColorRGBA();
ColorRGBA1561.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1560.addChild(&ColorRGBA1561);

Coordinate& Coordinate1562 =  Coordinate();
Coordinate1562.setPoint(new float[]{-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024}, 6);
LineSet1560.setCoord(Coordinate1562);

Shape1559.setGeometry(&LineSet1560);

HAnimSegment1555.addChild(&Shape1559);

HAnimJoint1554.addChildren(&HAnimSegment1555);

HAnimJoint& HAnimJoint1563 =  HAnimJoint();
HAnimJoint1563.setDEF(CString("hanim_r_pinky2"));
HAnimJoint1563.X3DNode::setName(CString("r_pinky2"));
HAnimJoint1563.setCenter(new float[]{-0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment1564 =  HAnimSegment();
HAnimSegment1564.setDEF(CString("hanim_r_pinky_middle"));
HAnimSegment1564.X3DNode::setName(CString("r_pinky_middle"));
TouchSensor& TouchSensor1565 =  TouchSensor();
TouchSensor1565.setDescription(CString("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle"));
HAnimSegment1564.addChild(&TouchSensor1565);

Transform& Transform1566 =  Transform();
Transform1566.setTranslation(new float[]{-0.1938,0.7452,-0.1024});
Shape& Shape1567 =  Shape();
Shape1567.setUSE(CString("HAnimJointShape"));
Transform1566.addChild(&Shape1567);

HAnimSegment1564.addChild(&Transform1566);

Shape& Shape1568 =  Shape();
LineSet& LineSet1569 =  LineSet();
LineSet1569.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1570 =  ColorRGBA();
ColorRGBA1570.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1569.addChild(&ColorRGBA1570);

Coordinate& Coordinate1571 =  Coordinate();
Coordinate1571.setPoint(new float[]{-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017}, 6);
LineSet1569.setCoord(Coordinate1571);

Shape1568.setGeometry(&LineSet1569);

HAnimSegment1564.addChild(&Shape1568);

HAnimJoint1563.addChildren(&HAnimSegment1564);

HAnimJoint& HAnimJoint1572 =  HAnimJoint();
HAnimJoint1572.setDEF(CString("hanim_r_pinky3"));
HAnimJoint1572.X3DNode::setName(CString("r_pinky3"));
HAnimJoint1572.setCenter(new float[]{-0.1948,0.7277,-0.1017});
HAnimSegment& HAnimSegment1573 =  HAnimSegment();
HAnimSegment1573.setDEF(CString("hanim_r_pinky_distal"));
HAnimSegment1573.X3DNode::setName(CString("r_pinky_distal"));
TouchSensor& TouchSensor1574 =  TouchSensor();
TouchSensor1574.setDescription(CString("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal"));
HAnimSegment1573.addChild(&TouchSensor1574);

Transform& Transform1575 =  Transform();
Transform1575.setTranslation(new float[]{-0.1948,0.7277,-0.1017});
Shape& Shape1576 =  Shape();
Shape1576.setUSE(CString("HAnimJointShape"));
Transform1575.addChild(&Shape1576);

HAnimSegment1573.addChild(&Transform1575);

Shape& Shape1577 =  Shape();
LineSet& LineSet1578 =  LineSet();
LineSet1578.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1579 =  ColorRGBA();
ColorRGBA1579.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1578.addChild(&ColorRGBA1579);

Coordinate& Coordinate1580 =  Coordinate();
Coordinate1580.setPoint(new float[]{-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949}, 6);
LineSet1578.setCoord(Coordinate1580);

Shape1577.setGeometry(&LineSet1578);

HAnimSegment1573.addChild(&Shape1577);

HAnimSite& HAnimSite1581 =  HAnimSite();
HAnimSite1581.setDEF(CString("hanim_r_pinky_distal_tip"));
HAnimSite1581.X3DNode::setName(CString("r_pinky_distal_tip"));
HAnimSite1581.setTranslation(new float[]{-0.1938,0.7035,-0.0949});
TouchSensor& TouchSensor1582 =  TouchSensor();
TouchSensor1582.setDescription(CString("HAnimSite r_pinky_distal_tip"));
HAnimSite1581.addChild(&TouchSensor1582);

Shape& Shape1583 =  Shape();
Shape1583.setUSE(CString("HAnimSiteShape"));
HAnimSite1581.addChild(&Shape1583);

HAnimSegment1573.addChild(&HAnimSite1581);

HAnimJoint1572.addChildren(&HAnimSegment1573);

HAnimJoint1563.addChildren(&HAnimJoint1572);

HAnimJoint1554.addChildren(&HAnimJoint1563);

HAnimJoint1545.addChildren(&HAnimJoint1554);

HAnimJoint1333.addChildren(&HAnimJoint1545);

HAnimJoint1296.addChildren(&HAnimJoint1333);

HAnimJoint1280.addChildren(&HAnimJoint1296);

HAnimJoint1271.addChildren(&HAnimJoint1280);

HAnimJoint1234.addChildren(&HAnimJoint1271);

HAnimJoint596.addChildren(&HAnimJoint1234);

HAnimJoint587.addChildren(&HAnimJoint596);

HAnimJoint578.addChildren(&HAnimJoint587);

HAnimJoint569.addChildren(&HAnimJoint578);

HAnimJoint560.addChildren(&HAnimJoint569);

HAnimJoint551.addChildren(&HAnimJoint560);

HAnimJoint542.addChildren(&HAnimJoint551);

HAnimJoint533.addChildren(&HAnimJoint542);

HAnimJoint510.addChildren(&HAnimJoint533);

HAnimJoint494.addChildren(&HAnimJoint510);

HAnimJoint485.addChildren(&HAnimJoint494);

HAnimJoint476.addChildren(&HAnimJoint485);

HAnimJoint467.addChildren(&HAnimJoint476);

HAnimJoint437.addChildren(&HAnimJoint467);

HAnimJoint428.addChildren(&HAnimJoint437);

HAnimJoint419.addChildren(&HAnimJoint428);

HAnimJoint396.addChildren(&HAnimJoint419);

HAnimJoint46.addChildren(&HAnimJoint396);

HAnimHumanoid45.setSkeleton(&HAnimJoint46);

HAnimJoint& HAnimJoint1584 =  HAnimJoint();
HAnimJoint1584.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid45.setJoints(&HAnimJoint1584);

HAnimJoint& HAnimJoint1585 =  HAnimJoint();
HAnimJoint1585.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid45.setJoints(&HAnimJoint1585);

HAnimJoint& HAnimJoint1586 =  HAnimJoint();
HAnimJoint1586.setUSE(CString("hanim_vl5"));
HAnimHumanoid45.setJoints(&HAnimJoint1586);

HAnimJoint& HAnimJoint1587 =  HAnimJoint();
HAnimJoint1587.setUSE(CString("hanim_vl4"));
HAnimHumanoid45.setJoints(&HAnimJoint1587);

HAnimJoint& HAnimJoint1588 =  HAnimJoint();
HAnimJoint1588.setUSE(CString("hanim_vl3"));
HAnimHumanoid45.setJoints(&HAnimJoint1588);

HAnimJoint& HAnimJoint1589 =  HAnimJoint();
HAnimJoint1589.setUSE(CString("hanim_vl2"));
HAnimHumanoid45.setJoints(&HAnimJoint1589);

HAnimJoint& HAnimJoint1590 =  HAnimJoint();
HAnimJoint1590.setUSE(CString("hanim_vl1"));
HAnimHumanoid45.setJoints(&HAnimJoint1590);

HAnimJoint& HAnimJoint1591 =  HAnimJoint();
HAnimJoint1591.setUSE(CString("hanim_vt12"));
HAnimHumanoid45.setJoints(&HAnimJoint1591);

HAnimJoint& HAnimJoint1592 =  HAnimJoint();
HAnimJoint1592.setUSE(CString("hanim_vt11"));
HAnimHumanoid45.setJoints(&HAnimJoint1592);

HAnimJoint& HAnimJoint1593 =  HAnimJoint();
HAnimJoint1593.setUSE(CString("hanim_vt10"));
HAnimHumanoid45.setJoints(&HAnimJoint1593);

HAnimJoint& HAnimJoint1594 =  HAnimJoint();
HAnimJoint1594.setUSE(CString("hanim_vt9"));
HAnimHumanoid45.setJoints(&HAnimJoint1594);

HAnimJoint& HAnimJoint1595 =  HAnimJoint();
HAnimJoint1595.setUSE(CString("hanim_vt8"));
HAnimHumanoid45.setJoints(&HAnimJoint1595);

HAnimJoint& HAnimJoint1596 =  HAnimJoint();
HAnimJoint1596.setUSE(CString("hanim_vt7"));
HAnimHumanoid45.setJoints(&HAnimJoint1596);

HAnimJoint& HAnimJoint1597 =  HAnimJoint();
HAnimJoint1597.setUSE(CString("hanim_vt6"));
HAnimHumanoid45.setJoints(&HAnimJoint1597);

HAnimJoint& HAnimJoint1598 =  HAnimJoint();
HAnimJoint1598.setUSE(CString("hanim_vt5"));
HAnimHumanoid45.setJoints(&HAnimJoint1598);

HAnimJoint& HAnimJoint1599 =  HAnimJoint();
HAnimJoint1599.setUSE(CString("hanim_vt4"));
HAnimHumanoid45.setJoints(&HAnimJoint1599);

HAnimJoint& HAnimJoint1600 =  HAnimJoint();
HAnimJoint1600.setUSE(CString("hanim_vt3"));
HAnimHumanoid45.setJoints(&HAnimJoint1600);

HAnimJoint& HAnimJoint1601 =  HAnimJoint();
HAnimJoint1601.setUSE(CString("hanim_vt2"));
HAnimHumanoid45.setJoints(&HAnimJoint1601);

HAnimJoint& HAnimJoint1602 =  HAnimJoint();
HAnimJoint1602.setUSE(CString("hanim_vt1"));
HAnimHumanoid45.setJoints(&HAnimJoint1602);

HAnimJoint& HAnimJoint1603 =  HAnimJoint();
HAnimJoint1603.setUSE(CString("hanim_vc7"));
HAnimHumanoid45.setJoints(&HAnimJoint1603);

HAnimJoint& HAnimJoint1604 =  HAnimJoint();
HAnimJoint1604.setUSE(CString("hanim_vc6"));
HAnimHumanoid45.setJoints(&HAnimJoint1604);

HAnimJoint& HAnimJoint1605 =  HAnimJoint();
HAnimJoint1605.setUSE(CString("hanim_vc5"));
HAnimHumanoid45.setJoints(&HAnimJoint1605);

HAnimJoint& HAnimJoint1606 =  HAnimJoint();
HAnimJoint1606.setUSE(CString("hanim_vc4"));
HAnimHumanoid45.setJoints(&HAnimJoint1606);

HAnimJoint& HAnimJoint1607 =  HAnimJoint();
HAnimJoint1607.setUSE(CString("hanim_vc3"));
HAnimHumanoid45.setJoints(&HAnimJoint1607);

HAnimJoint& HAnimJoint1608 =  HAnimJoint();
HAnimJoint1608.setUSE(CString("hanim_vc2"));
HAnimHumanoid45.setJoints(&HAnimJoint1608);

HAnimJoint& HAnimJoint1609 =  HAnimJoint();
HAnimJoint1609.setUSE(CString("hanim_vc1"));
HAnimHumanoid45.setJoints(&HAnimJoint1609);

HAnimJoint& HAnimJoint1610 =  HAnimJoint();
HAnimJoint1610.setUSE(CString("hanim_skullbase"));
HAnimHumanoid45.setJoints(&HAnimJoint1610);

HAnimJoint& HAnimJoint1611 =  HAnimJoint();
HAnimJoint1611.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid45.setJoints(&HAnimJoint1611);

HAnimJoint& HAnimJoint1612 =  HAnimJoint();
HAnimJoint1612.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid45.setJoints(&HAnimJoint1612);

HAnimJoint& HAnimJoint1613 =  HAnimJoint();
HAnimJoint1613.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid45.setJoints(&HAnimJoint1613);

HAnimJoint& HAnimJoint1614 =  HAnimJoint();
HAnimJoint1614.setUSE(CString("hanim_l_ankle"));
HAnimHumanoid45.setJoints(&HAnimJoint1614);

HAnimJoint& HAnimJoint1615 =  HAnimJoint();
HAnimJoint1615.setUSE(CString("hanim_r_ankle"));
HAnimHumanoid45.setJoints(&HAnimJoint1615);

HAnimJoint& HAnimJoint1616 =  HAnimJoint();
HAnimJoint1616.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid45.setJoints(&HAnimJoint1616);

HAnimJoint& HAnimJoint1617 =  HAnimJoint();
HAnimJoint1617.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid45.setJoints(&HAnimJoint1617);

HAnimJoint& HAnimJoint1618 =  HAnimJoint();
HAnimJoint1618.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid45.setJoints(&HAnimJoint1618);

HAnimJoint& HAnimJoint1619 =  HAnimJoint();
HAnimJoint1619.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid45.setJoints(&HAnimJoint1619);

HAnimJoint& HAnimJoint1620 =  HAnimJoint();
HAnimJoint1620.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid45.setJoints(&HAnimJoint1620);

HAnimJoint& HAnimJoint1621 =  HAnimJoint();
HAnimJoint1621.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid45.setJoints(&HAnimJoint1621);

HAnimJoint& HAnimJoint1622 =  HAnimJoint();
HAnimJoint1622.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid45.setJoints(&HAnimJoint1622);

HAnimJoint& HAnimJoint1623 =  HAnimJoint();
HAnimJoint1623.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid45.setJoints(&HAnimJoint1623);

HAnimJoint& HAnimJoint1624 =  HAnimJoint();
HAnimJoint1624.setUSE(CString("hanim_l_hip"));
HAnimHumanoid45.setJoints(&HAnimJoint1624);

HAnimJoint& HAnimJoint1625 =  HAnimJoint();
HAnimJoint1625.setUSE(CString("hanim_r_hip"));
HAnimHumanoid45.setJoints(&HAnimJoint1625);

HAnimJoint& HAnimJoint1626 =  HAnimJoint();
HAnimJoint1626.setUSE(CString("hanim_l_index0"));
HAnimHumanoid45.setJoints(&HAnimJoint1626);

HAnimJoint& HAnimJoint1627 =  HAnimJoint();
HAnimJoint1627.setUSE(CString("hanim_r_index0"));
HAnimHumanoid45.setJoints(&HAnimJoint1627);

HAnimJoint& HAnimJoint1628 =  HAnimJoint();
HAnimJoint1628.setUSE(CString("hanim_l_index1"));
HAnimHumanoid45.setJoints(&HAnimJoint1628);

HAnimJoint& HAnimJoint1629 =  HAnimJoint();
HAnimJoint1629.setUSE(CString("hanim_r_index1"));
HAnimHumanoid45.setJoints(&HAnimJoint1629);

HAnimJoint& HAnimJoint1630 =  HAnimJoint();
HAnimJoint1630.setUSE(CString("hanim_l_index2"));
HAnimHumanoid45.setJoints(&HAnimJoint1630);

HAnimJoint& HAnimJoint1631 =  HAnimJoint();
HAnimJoint1631.setUSE(CString("hanim_r_index2"));
HAnimHumanoid45.setJoints(&HAnimJoint1631);

HAnimJoint& HAnimJoint1632 =  HAnimJoint();
HAnimJoint1632.setUSE(CString("hanim_l_index3"));
HAnimHumanoid45.setJoints(&HAnimJoint1632);

HAnimJoint& HAnimJoint1633 =  HAnimJoint();
HAnimJoint1633.setUSE(CString("hanim_r_index3"));
HAnimHumanoid45.setJoints(&HAnimJoint1633);

HAnimJoint& HAnimJoint1634 =  HAnimJoint();
HAnimJoint1634.setUSE(CString("hanim_l_knee"));
HAnimHumanoid45.setJoints(&HAnimJoint1634);

HAnimJoint& HAnimJoint1635 =  HAnimJoint();
HAnimJoint1635.setUSE(CString("hanim_r_knee"));
HAnimHumanoid45.setJoints(&HAnimJoint1635);

HAnimJoint& HAnimJoint1636 =  HAnimJoint();
HAnimJoint1636.setUSE(CString("hanim_l_metatarsal"));
HAnimHumanoid45.setJoints(&HAnimJoint1636);

HAnimJoint& HAnimJoint1637 =  HAnimJoint();
HAnimJoint1637.setUSE(CString("hanim_r_metatarsal"));
HAnimHumanoid45.setJoints(&HAnimJoint1637);

HAnimJoint& HAnimJoint1638 =  HAnimJoint();
HAnimJoint1638.setUSE(CString("hanim_l_middle0"));
HAnimHumanoid45.setJoints(&HAnimJoint1638);

HAnimJoint& HAnimJoint1639 =  HAnimJoint();
HAnimJoint1639.setUSE(CString("hanim_r_middle0"));
HAnimHumanoid45.setJoints(&HAnimJoint1639);

HAnimJoint& HAnimJoint1640 =  HAnimJoint();
HAnimJoint1640.setUSE(CString("hanim_l_middle1"));
HAnimHumanoid45.setJoints(&HAnimJoint1640);

HAnimJoint& HAnimJoint1641 =  HAnimJoint();
HAnimJoint1641.setUSE(CString("hanim_r_middle1"));
HAnimHumanoid45.setJoints(&HAnimJoint1641);

HAnimJoint& HAnimJoint1642 =  HAnimJoint();
HAnimJoint1642.setUSE(CString("hanim_l_middle2"));
HAnimHumanoid45.setJoints(&HAnimJoint1642);

HAnimJoint& HAnimJoint1643 =  HAnimJoint();
HAnimJoint1643.setUSE(CString("hanim_r_middle2"));
HAnimHumanoid45.setJoints(&HAnimJoint1643);

HAnimJoint& HAnimJoint1644 =  HAnimJoint();
HAnimJoint1644.setUSE(CString("hanim_l_middle3"));
HAnimHumanoid45.setJoints(&HAnimJoint1644);

HAnimJoint& HAnimJoint1645 =  HAnimJoint();
HAnimJoint1645.setUSE(CString("hanim_r_middle3"));
HAnimHumanoid45.setJoints(&HAnimJoint1645);

HAnimJoint& HAnimJoint1646 =  HAnimJoint();
HAnimJoint1646.setUSE(CString("hanim_l_midtarsal"));
HAnimHumanoid45.setJoints(&HAnimJoint1646);

HAnimJoint& HAnimJoint1647 =  HAnimJoint();
HAnimJoint1647.setUSE(CString("hanim_r_midtarsal"));
HAnimHumanoid45.setJoints(&HAnimJoint1647);

HAnimJoint& HAnimJoint1648 =  HAnimJoint();
HAnimJoint1648.setUSE(CString("hanim_l_pinky0"));
HAnimHumanoid45.setJoints(&HAnimJoint1648);

HAnimJoint& HAnimJoint1649 =  HAnimJoint();
HAnimJoint1649.setUSE(CString("hanim_r_pinky0"));
HAnimHumanoid45.setJoints(&HAnimJoint1649);

HAnimJoint& HAnimJoint1650 =  HAnimJoint();
HAnimJoint1650.setUSE(CString("hanim_l_pinky1"));
HAnimHumanoid45.setJoints(&HAnimJoint1650);

HAnimJoint& HAnimJoint1651 =  HAnimJoint();
HAnimJoint1651.setUSE(CString("hanim_r_pinky1"));
HAnimHumanoid45.setJoints(&HAnimJoint1651);

HAnimJoint& HAnimJoint1652 =  HAnimJoint();
HAnimJoint1652.setUSE(CString("hanim_l_pinky2"));
HAnimHumanoid45.setJoints(&HAnimJoint1652);

HAnimJoint& HAnimJoint1653 =  HAnimJoint();
HAnimJoint1653.setUSE(CString("hanim_r_pinky2"));
HAnimHumanoid45.setJoints(&HAnimJoint1653);

HAnimJoint& HAnimJoint1654 =  HAnimJoint();
HAnimJoint1654.setUSE(CString("hanim_l_pinky3"));
HAnimHumanoid45.setJoints(&HAnimJoint1654);

HAnimJoint& HAnimJoint1655 =  HAnimJoint();
HAnimJoint1655.setUSE(CString("hanim_r_pinky3"));
HAnimHumanoid45.setJoints(&HAnimJoint1655);

HAnimJoint& HAnimJoint1656 =  HAnimJoint();
HAnimJoint1656.setUSE(CString("hanim_l_ring0"));
HAnimHumanoid45.setJoints(&HAnimJoint1656);

HAnimJoint& HAnimJoint1657 =  HAnimJoint();
HAnimJoint1657.setUSE(CString("hanim_r_ring0"));
HAnimHumanoid45.setJoints(&HAnimJoint1657);

HAnimJoint& HAnimJoint1658 =  HAnimJoint();
HAnimJoint1658.setUSE(CString("hanim_l_ring1"));
HAnimHumanoid45.setJoints(&HAnimJoint1658);

HAnimJoint& HAnimJoint1659 =  HAnimJoint();
HAnimJoint1659.setUSE(CString("hanim_r_ring1"));
HAnimHumanoid45.setJoints(&HAnimJoint1659);

HAnimJoint& HAnimJoint1660 =  HAnimJoint();
HAnimJoint1660.setUSE(CString("hanim_l_ring2"));
HAnimHumanoid45.setJoints(&HAnimJoint1660);

HAnimJoint& HAnimJoint1661 =  HAnimJoint();
HAnimJoint1661.setUSE(CString("hanim_r_ring2"));
HAnimHumanoid45.setJoints(&HAnimJoint1661);

HAnimJoint& HAnimJoint1662 =  HAnimJoint();
HAnimJoint1662.setUSE(CString("hanim_l_ring3"));
HAnimHumanoid45.setJoints(&HAnimJoint1662);

HAnimJoint& HAnimJoint1663 =  HAnimJoint();
HAnimJoint1663.setUSE(CString("hanim_r_ring3"));
HAnimHumanoid45.setJoints(&HAnimJoint1663);

HAnimJoint& HAnimJoint1664 =  HAnimJoint();
HAnimJoint1664.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid45.setJoints(&HAnimJoint1664);

HAnimJoint& HAnimJoint1665 =  HAnimJoint();
HAnimJoint1665.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid45.setJoints(&HAnimJoint1665);

HAnimJoint& HAnimJoint1666 =  HAnimJoint();
HAnimJoint1666.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid45.setJoints(&HAnimJoint1666);

HAnimJoint& HAnimJoint1667 =  HAnimJoint();
HAnimJoint1667.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid45.setJoints(&HAnimJoint1667);

HAnimJoint& HAnimJoint1668 =  HAnimJoint();
HAnimJoint1668.setUSE(CString("hanim_l_subtalar"));
HAnimHumanoid45.setJoints(&HAnimJoint1668);

HAnimJoint& HAnimJoint1669 =  HAnimJoint();
HAnimJoint1669.setUSE(CString("hanim_r_subtalar"));
HAnimHumanoid45.setJoints(&HAnimJoint1669);

HAnimJoint& HAnimJoint1670 =  HAnimJoint();
HAnimJoint1670.setUSE(CString("hanim_l_thumb1"));
HAnimHumanoid45.setJoints(&HAnimJoint1670);

HAnimJoint& HAnimJoint1671 =  HAnimJoint();
HAnimJoint1671.setUSE(CString("hanim_r_thumb1"));
HAnimHumanoid45.setJoints(&HAnimJoint1671);

HAnimJoint& HAnimJoint1672 =  HAnimJoint();
HAnimJoint1672.setUSE(CString("hanim_l_thumb2"));
HAnimHumanoid45.setJoints(&HAnimJoint1672);

HAnimJoint& HAnimJoint1673 =  HAnimJoint();
HAnimJoint1673.setUSE(CString("hanim_r_thumb2"));
HAnimHumanoid45.setJoints(&HAnimJoint1673);

HAnimJoint& HAnimJoint1674 =  HAnimJoint();
HAnimJoint1674.setUSE(CString("hanim_l_thumb3"));
HAnimHumanoid45.setJoints(&HAnimJoint1674);

HAnimJoint& HAnimJoint1675 =  HAnimJoint();
HAnimJoint1675.setUSE(CString("hanim_r_thumb3"));
HAnimHumanoid45.setJoints(&HAnimJoint1675);

HAnimJoint& HAnimJoint1676 =  HAnimJoint();
HAnimJoint1676.setUSE(CString("hanim_l_wrist"));
HAnimHumanoid45.setJoints(&HAnimJoint1676);

HAnimJoint& HAnimJoint1677 =  HAnimJoint();
HAnimJoint1677.setUSE(CString("hanim_r_wrist"));
HAnimHumanoid45.setJoints(&HAnimJoint1677);

HAnimSegment& HAnimSegment1678 =  HAnimSegment();
HAnimSegment1678.setUSE(CString("hanim_pelvis"));
HAnimHumanoid45.setSegments(&HAnimSegment1678);

HAnimSegment& HAnimSegment1679 =  HAnimSegment();
HAnimSegment1679.setUSE(CString("hanim_skull"));
HAnimHumanoid45.setSegments(&HAnimSegment1679);

HAnimSegment& HAnimSegment1680 =  HAnimSegment();
HAnimSegment1680.setUSE(CString("hanim_jaw"));
HAnimHumanoid45.setSegments(&HAnimSegment1680);

HAnimSegment& HAnimSegment1681 =  HAnimSegment();
HAnimSegment1681.setUSE(CString("hanim_c1"));
HAnimHumanoid45.setSegments(&HAnimSegment1681);

HAnimSegment& HAnimSegment1682 =  HAnimSegment();
HAnimSegment1682.setUSE(CString("hanim_c2"));
HAnimHumanoid45.setSegments(&HAnimSegment1682);

HAnimSegment& HAnimSegment1683 =  HAnimSegment();
HAnimSegment1683.setUSE(CString("hanim_c3"));
HAnimHumanoid45.setSegments(&HAnimSegment1683);

HAnimSegment& HAnimSegment1684 =  HAnimSegment();
HAnimSegment1684.setUSE(CString("hanim_c4"));
HAnimHumanoid45.setSegments(&HAnimSegment1684);

HAnimSegment& HAnimSegment1685 =  HAnimSegment();
HAnimSegment1685.setUSE(CString("hanim_c5"));
HAnimHumanoid45.setSegments(&HAnimSegment1685);

HAnimSegment& HAnimSegment1686 =  HAnimSegment();
HAnimSegment1686.setUSE(CString("hanim_c6"));
HAnimHumanoid45.setSegments(&HAnimSegment1686);

HAnimSegment& HAnimSegment1687 =  HAnimSegment();
HAnimSegment1687.setUSE(CString("hanim_c7"));
HAnimHumanoid45.setSegments(&HAnimSegment1687);

HAnimSegment& HAnimSegment1688 =  HAnimSegment();
HAnimSegment1688.setUSE(CString("hanim_t1"));
HAnimHumanoid45.setSegments(&HAnimSegment1688);

HAnimSegment& HAnimSegment1689 =  HAnimSegment();
HAnimSegment1689.setUSE(CString("hanim_t2"));
HAnimHumanoid45.setSegments(&HAnimSegment1689);

HAnimSegment& HAnimSegment1690 =  HAnimSegment();
HAnimSegment1690.setUSE(CString("hanim_t3"));
HAnimHumanoid45.setSegments(&HAnimSegment1690);

HAnimSegment& HAnimSegment1691 =  HAnimSegment();
HAnimSegment1691.setUSE(CString("hanim_t4"));
HAnimHumanoid45.setSegments(&HAnimSegment1691);

HAnimSegment& HAnimSegment1692 =  HAnimSegment();
HAnimSegment1692.setUSE(CString("hanim_t5"));
HAnimHumanoid45.setSegments(&HAnimSegment1692);

HAnimSegment& HAnimSegment1693 =  HAnimSegment();
HAnimSegment1693.setUSE(CString("hanim_t6"));
HAnimHumanoid45.setSegments(&HAnimSegment1693);

HAnimSegment& HAnimSegment1694 =  HAnimSegment();
HAnimSegment1694.setUSE(CString("hanim_t7"));
HAnimHumanoid45.setSegments(&HAnimSegment1694);

HAnimSegment& HAnimSegment1695 =  HAnimSegment();
HAnimSegment1695.setUSE(CString("hanim_t8"));
HAnimHumanoid45.setSegments(&HAnimSegment1695);

HAnimSegment& HAnimSegment1696 =  HAnimSegment();
HAnimSegment1696.setUSE(CString("hanim_t9"));
HAnimHumanoid45.setSegments(&HAnimSegment1696);

HAnimSegment& HAnimSegment1697 =  HAnimSegment();
HAnimSegment1697.setUSE(CString("hanim_t10"));
HAnimHumanoid45.setSegments(&HAnimSegment1697);

HAnimSegment& HAnimSegment1698 =  HAnimSegment();
HAnimSegment1698.setUSE(CString("hanim_t11"));
HAnimHumanoid45.setSegments(&HAnimSegment1698);

HAnimSegment& HAnimSegment1699 =  HAnimSegment();
HAnimSegment1699.setUSE(CString("hanim_t12"));
HAnimHumanoid45.setSegments(&HAnimSegment1699);

HAnimSegment& HAnimSegment1700 =  HAnimSegment();
HAnimSegment1700.setUSE(CString("hanim_l1"));
HAnimHumanoid45.setSegments(&HAnimSegment1700);

HAnimSegment& HAnimSegment1701 =  HAnimSegment();
HAnimSegment1701.setUSE(CString("hanim_l2"));
HAnimHumanoid45.setSegments(&HAnimSegment1701);

HAnimSegment& HAnimSegment1702 =  HAnimSegment();
HAnimSegment1702.setUSE(CString("hanim_l3"));
HAnimHumanoid45.setSegments(&HAnimSegment1702);

HAnimSegment& HAnimSegment1703 =  HAnimSegment();
HAnimSegment1703.setUSE(CString("hanim_l4"));
HAnimHumanoid45.setSegments(&HAnimSegment1703);

HAnimSegment& HAnimSegment1704 =  HAnimSegment();
HAnimSegment1704.setUSE(CString("hanim_l5"));
HAnimHumanoid45.setSegments(&HAnimSegment1704);

HAnimSegment& HAnimSegment1705 =  HAnimSegment();
HAnimSegment1705.setUSE(CString("hanim_sacrum"));
HAnimHumanoid45.setSegments(&HAnimSegment1705);

HAnimSegment& HAnimSegment1706 =  HAnimSegment();
HAnimSegment1706.setUSE(CString("hanim_l_calf"));
HAnimHumanoid45.setSegments(&HAnimSegment1706);

HAnimSegment& HAnimSegment1707 =  HAnimSegment();
HAnimSegment1707.setUSE(CString("hanim_r_calf"));
HAnimHumanoid45.setSegments(&HAnimSegment1707);

HAnimSegment& HAnimSegment1708 =  HAnimSegment();
HAnimSegment1708.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid45.setSegments(&HAnimSegment1708);

HAnimSegment& HAnimSegment1709 =  HAnimSegment();
HAnimSegment1709.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid45.setSegments(&HAnimSegment1709);

HAnimSegment& HAnimSegment1710 =  HAnimSegment();
HAnimSegment1710.setUSE(CString("hanim_l_eyeball"));
HAnimHumanoid45.setSegments(&HAnimSegment1710);

HAnimSegment& HAnimSegment1711 =  HAnimSegment();
HAnimSegment1711.setUSE(CString("hanim_r_eyeball"));
HAnimHumanoid45.setSegments(&HAnimSegment1711);

HAnimSegment& HAnimSegment1712 =  HAnimSegment();
HAnimSegment1712.setUSE(CString("hanim_l_eyebrow"));
HAnimHumanoid45.setSegments(&HAnimSegment1712);

HAnimSegment& HAnimSegment1713 =  HAnimSegment();
HAnimSegment1713.setUSE(CString("hanim_r_eyebrow"));
HAnimHumanoid45.setSegments(&HAnimSegment1713);

HAnimSegment& HAnimSegment1714 =  HAnimSegment();
HAnimSegment1714.setUSE(CString("hanim_l_eyelid"));
HAnimHumanoid45.setSegments(&HAnimSegment1714);

HAnimSegment& HAnimSegment1715 =  HAnimSegment();
HAnimSegment1715.setUSE(CString("hanim_r_eyelid"));
HAnimHumanoid45.setSegments(&HAnimSegment1715);

HAnimSegment& HAnimSegment1716 =  HAnimSegment();
HAnimSegment1716.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid45.setSegments(&HAnimSegment1716);

HAnimSegment& HAnimSegment1717 =  HAnimSegment();
HAnimSegment1717.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid45.setSegments(&HAnimSegment1717);

HAnimSegment& HAnimSegment1718 =  HAnimSegment();
HAnimSegment1718.setUSE(CString("hanim_l_forefoot"));
HAnimHumanoid45.setSegments(&HAnimSegment1718);

HAnimSegment& HAnimSegment1719 =  HAnimSegment();
HAnimSegment1719.setUSE(CString("hanim_r_forefoot"));
HAnimHumanoid45.setSegments(&HAnimSegment1719);

HAnimSegment& HAnimSegment1720 =  HAnimSegment();
HAnimSegment1720.setUSE(CString("hanim_l_hand"));
HAnimHumanoid45.setSegments(&HAnimSegment1720);

HAnimSegment& HAnimSegment1721 =  HAnimSegment();
HAnimSegment1721.setUSE(CString("hanim_r_hand"));
HAnimHumanoid45.setSegments(&HAnimSegment1721);

HAnimSegment& HAnimSegment1722 =  HAnimSegment();
HAnimSegment1722.setUSE(CString("hanim_l_hindfoot"));
HAnimHumanoid45.setSegments(&HAnimSegment1722);

HAnimSegment& HAnimSegment1723 =  HAnimSegment();
HAnimSegment1723.setUSE(CString("hanim_r_hindfoot"));
HAnimHumanoid45.setSegments(&HAnimSegment1723);

HAnimSegment& HAnimSegment1724 =  HAnimSegment();
HAnimSegment1724.setUSE(CString("hanim_l_index_distal"));
HAnimHumanoid45.setSegments(&HAnimSegment1724);

HAnimSegment& HAnimSegment1725 =  HAnimSegment();
HAnimSegment1725.setUSE(CString("hanim_r_index_distal"));
HAnimHumanoid45.setSegments(&HAnimSegment1725);

HAnimSegment& HAnimSegment1726 =  HAnimSegment();
HAnimSegment1726.setUSE(CString("hanim_l_index_metacarpal"));
HAnimHumanoid45.setSegments(&HAnimSegment1726);

HAnimSegment& HAnimSegment1727 =  HAnimSegment();
HAnimSegment1727.setUSE(CString("hanim_r_index_metacarpal"));
HAnimHumanoid45.setSegments(&HAnimSegment1727);

HAnimSegment& HAnimSegment1728 =  HAnimSegment();
HAnimSegment1728.setUSE(CString("hanim_l_index_middle"));
HAnimHumanoid45.setSegments(&HAnimSegment1728);

HAnimSegment& HAnimSegment1729 =  HAnimSegment();
HAnimSegment1729.setUSE(CString("hanim_r_index_middle"));
HAnimHumanoid45.setSegments(&HAnimSegment1729);

HAnimSegment& HAnimSegment1730 =  HAnimSegment();
HAnimSegment1730.setUSE(CString("hanim_l_index_proximal"));
HAnimHumanoid45.setSegments(&HAnimSegment1730);

HAnimSegment& HAnimSegment1731 =  HAnimSegment();
HAnimSegment1731.setUSE(CString("hanim_r_index_proximal"));
HAnimHumanoid45.setSegments(&HAnimSegment1731);

HAnimSegment& HAnimSegment1732 =  HAnimSegment();
HAnimSegment1732.setUSE(CString("hanim_l_middistal"));
HAnimHumanoid45.setSegments(&HAnimSegment1732);

HAnimSegment& HAnimSegment1733 =  HAnimSegment();
HAnimSegment1733.setUSE(CString("hanim_r_middistal"));
HAnimHumanoid45.setSegments(&HAnimSegment1733);

HAnimSegment& HAnimSegment1734 =  HAnimSegment();
HAnimSegment1734.setUSE(CString("hanim_l_middle_distal"));
HAnimHumanoid45.setSegments(&HAnimSegment1734);

HAnimSegment& HAnimSegment1735 =  HAnimSegment();
HAnimSegment1735.setUSE(CString("hanim_r_middle_distal"));
HAnimHumanoid45.setSegments(&HAnimSegment1735);

HAnimSegment& HAnimSegment1736 =  HAnimSegment();
HAnimSegment1736.setUSE(CString("hanim_l_middle_metacarpal"));
HAnimHumanoid45.setSegments(&HAnimSegment1736);

HAnimSegment& HAnimSegment1737 =  HAnimSegment();
HAnimSegment1737.setUSE(CString("hanim_r_middle_metacarpal"));
HAnimHumanoid45.setSegments(&HAnimSegment1737);

HAnimSegment& HAnimSegment1738 =  HAnimSegment();
HAnimSegment1738.setUSE(CString("hanim_l_middle_middle"));
HAnimHumanoid45.setSegments(&HAnimSegment1738);

HAnimSegment& HAnimSegment1739 =  HAnimSegment();
HAnimSegment1739.setUSE(CString("hanim_r_middle_middle"));
HAnimHumanoid45.setSegments(&HAnimSegment1739);

HAnimSegment& HAnimSegment1740 =  HAnimSegment();
HAnimSegment1740.setUSE(CString("hanim_l_middle_proximal"));
HAnimHumanoid45.setSegments(&HAnimSegment1740);

HAnimSegment& HAnimSegment1741 =  HAnimSegment();
HAnimSegment1741.setUSE(CString("hanim_r_middle_proximal"));
HAnimHumanoid45.setSegments(&HAnimSegment1741);

HAnimSegment& HAnimSegment1742 =  HAnimSegment();
HAnimSegment1742.setUSE(CString("hanim_l_midproximal"));
HAnimHumanoid45.setSegments(&HAnimSegment1742);

HAnimSegment& HAnimSegment1743 =  HAnimSegment();
HAnimSegment1743.setUSE(CString("hanim_r_midproximal"));
HAnimHumanoid45.setSegments(&HAnimSegment1743);

HAnimSegment& HAnimSegment1744 =  HAnimSegment();
HAnimSegment1744.setUSE(CString("hanim_l_pinky_distal"));
HAnimHumanoid45.setSegments(&HAnimSegment1744);

HAnimSegment& HAnimSegment1745 =  HAnimSegment();
HAnimSegment1745.setUSE(CString("hanim_r_pinky_distal"));
HAnimHumanoid45.setSegments(&HAnimSegment1745);

HAnimSegment& HAnimSegment1746 =  HAnimSegment();
HAnimSegment1746.setUSE(CString("hanim_l_pinky_metacarpal"));
HAnimHumanoid45.setSegments(&HAnimSegment1746);

HAnimSegment& HAnimSegment1747 =  HAnimSegment();
HAnimSegment1747.setUSE(CString("hanim_r_pinky_metacarpal"));
HAnimHumanoid45.setSegments(&HAnimSegment1747);

HAnimSegment& HAnimSegment1748 =  HAnimSegment();
HAnimSegment1748.setUSE(CString("hanim_l_pinky_middle"));
HAnimHumanoid45.setSegments(&HAnimSegment1748);

HAnimSegment& HAnimSegment1749 =  HAnimSegment();
HAnimSegment1749.setUSE(CString("hanim_r_pinky_middle"));
HAnimHumanoid45.setSegments(&HAnimSegment1749);

HAnimSegment& HAnimSegment1750 =  HAnimSegment();
HAnimSegment1750.setUSE(CString("hanim_l_pinky_proximal"));
HAnimHumanoid45.setSegments(&HAnimSegment1750);

HAnimSegment& HAnimSegment1751 =  HAnimSegment();
HAnimSegment1751.setUSE(CString("hanim_r_pinky_proximal"));
HAnimHumanoid45.setSegments(&HAnimSegment1751);

HAnimSegment& HAnimSegment1752 =  HAnimSegment();
HAnimSegment1752.setUSE(CString("hanim_l_ring_distal"));
HAnimHumanoid45.setSegments(&HAnimSegment1752);

HAnimSegment& HAnimSegment1753 =  HAnimSegment();
HAnimSegment1753.setUSE(CString("hanim_r_ring_distal"));
HAnimHumanoid45.setSegments(&HAnimSegment1753);

HAnimSegment& HAnimSegment1754 =  HAnimSegment();
HAnimSegment1754.setUSE(CString("hanim_l_ring_metacarpal"));
HAnimHumanoid45.setSegments(&HAnimSegment1754);

HAnimSegment& HAnimSegment1755 =  HAnimSegment();
HAnimSegment1755.setUSE(CString("hanim_r_ring_metacarpal"));
HAnimHumanoid45.setSegments(&HAnimSegment1755);

HAnimSegment& HAnimSegment1756 =  HAnimSegment();
HAnimSegment1756.setUSE(CString("hanim_l_ring_middle"));
HAnimHumanoid45.setSegments(&HAnimSegment1756);

HAnimSegment& HAnimSegment1757 =  HAnimSegment();
HAnimSegment1757.setUSE(CString("hanim_r_ring_middle"));
HAnimHumanoid45.setSegments(&HAnimSegment1757);

HAnimSegment& HAnimSegment1758 =  HAnimSegment();
HAnimSegment1758.setUSE(CString("hanim_l_ring_proximal"));
HAnimHumanoid45.setSegments(&HAnimSegment1758);

HAnimSegment& HAnimSegment1759 =  HAnimSegment();
HAnimSegment1759.setUSE(CString("hanim_r_ring_proximal"));
HAnimHumanoid45.setSegments(&HAnimSegment1759);

HAnimSegment& HAnimSegment1760 =  HAnimSegment();
HAnimSegment1760.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid45.setSegments(&HAnimSegment1760);

HAnimSegment& HAnimSegment1761 =  HAnimSegment();
HAnimSegment1761.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid45.setSegments(&HAnimSegment1761);

HAnimSegment& HAnimSegment1762 =  HAnimSegment();
HAnimSegment1762.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid45.setSegments(&HAnimSegment1762);

HAnimSegment& HAnimSegment1763 =  HAnimSegment();
HAnimSegment1763.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid45.setSegments(&HAnimSegment1763);

HAnimSegment& HAnimSegment1764 =  HAnimSegment();
HAnimSegment1764.setUSE(CString("hanim_l_thumb_distal"));
HAnimHumanoid45.setSegments(&HAnimSegment1764);

HAnimSegment& HAnimSegment1765 =  HAnimSegment();
HAnimSegment1765.setUSE(CString("hanim_r_thumb_distal"));
HAnimHumanoid45.setSegments(&HAnimSegment1765);

HAnimSegment& HAnimSegment1766 =  HAnimSegment();
HAnimSegment1766.setUSE(CString("hanim_l_thumb_metacarpal"));
HAnimHumanoid45.setSegments(&HAnimSegment1766);

HAnimSegment& HAnimSegment1767 =  HAnimSegment();
HAnimSegment1767.setUSE(CString("hanim_r_thumb_metacarpal"));
HAnimHumanoid45.setSegments(&HAnimSegment1767);

HAnimSegment& HAnimSegment1768 =  HAnimSegment();
HAnimSegment1768.setUSE(CString("hanim_l_thumb_proximal"));
HAnimHumanoid45.setSegments(&HAnimSegment1768);

HAnimSegment& HAnimSegment1769 =  HAnimSegment();
HAnimSegment1769.setUSE(CString("hanim_r_thumb_proximal"));
HAnimHumanoid45.setSegments(&HAnimSegment1769);

HAnimSegment& HAnimSegment1770 =  HAnimSegment();
HAnimSegment1770.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid45.setSegments(&HAnimSegment1770);

HAnimSegment& HAnimSegment1771 =  HAnimSegment();
HAnimSegment1771.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid45.setSegments(&HAnimSegment1771);

HAnimSite& HAnimSite1772 =  HAnimSite();
HAnimSite1772.setUSE(CString("hanim_crotch_pt"));
HAnimHumanoid45.setSites(&HAnimSite1772);

HAnimSite& HAnimSite1773 =  HAnimSite();
HAnimSite1773.setUSE(CString("hanim_skull_tip"));
HAnimHumanoid45.setSites(&HAnimSite1773);

HAnimSite& HAnimSite1774 =  HAnimSite();
HAnimSite1774.setUSE(CString("hanim_sellion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1774);

HAnimSite& HAnimSite1775 =  HAnimSite();
HAnimSite1775.setUSE(CString("hanim_supramenton_pt"));
HAnimHumanoid45.setSites(&HAnimSite1775);

HAnimSite& HAnimSite1776 =  HAnimSite();
HAnimSite1776.setUSE(CString("hanim_nuchale_pt"));
HAnimHumanoid45.setSites(&HAnimSite1776);

HAnimSite& HAnimSite1777 =  HAnimSite();
HAnimSite1777.setUSE(CString("hanim_suprasternale_pt"));
HAnimHumanoid45.setSites(&HAnimSite1777);

HAnimSite& HAnimSite1778 =  HAnimSite();
HAnimSite1778.setUSE(CString("hanim_cervicale_pt"));
HAnimHumanoid45.setSites(&HAnimSite1778);

HAnimSite& HAnimSite1779 =  HAnimSite();
HAnimSite1779.setUSE(CString("hanim_substernale_pt"));
HAnimHumanoid45.setSites(&HAnimSite1779);

HAnimSite& HAnimSite1780 =  HAnimSite();
HAnimSite1780.setUSE(CString("hanim_rib10_midspine_pt"));
HAnimHumanoid45.setSites(&HAnimSite1780);

HAnimSite& HAnimSite1781 =  HAnimSite();
HAnimSite1781.setUSE(CString("hanim_waist_preferred_post_pt"));
HAnimHumanoid45.setSites(&HAnimSite1781);

HAnimSite& HAnimSite1782 =  HAnimSite();
HAnimSite1782.setUSE(CString("hanim_navel_pt"));
HAnimHumanoid45.setSites(&HAnimSite1782);

HAnimSite& HAnimSite1783 =  HAnimSite();
HAnimSite1783.setUSE(CString("hanim_l_acromion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1783);

HAnimSite& HAnimSite1784 =  HAnimSite();
HAnimSite1784.setUSE(CString("hanim_r_acromion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1784);

HAnimSite& HAnimSite1785 =  HAnimSite();
HAnimSite1785.setUSE(CString("hanim_r_asis_pt"));
HAnimHumanoid45.setSites(&HAnimSite1785);

HAnimSite& HAnimSite1786 =  HAnimSite();
HAnimSite1786.setUSE(CString("hanim_l_asis_pt"));
HAnimHumanoid45.setSites(&HAnimSite1786);

HAnimSite& HAnimSite1787 =  HAnimSite();
HAnimSite1787.setUSE(CString("hanim_l_axilla_ant_pt"));
HAnimHumanoid45.setSites(&HAnimSite1787);

HAnimSite& HAnimSite1788 =  HAnimSite();
HAnimSite1788.setUSE(CString("hanim_r_axilla_ant_pt"));
HAnimHumanoid45.setSites(&HAnimSite1788);

HAnimSite& HAnimSite1789 =  HAnimSite();
HAnimSite1789.setUSE(CString("hanim_l_axilla_post_pt"));
HAnimHumanoid45.setSites(&HAnimSite1789);

HAnimSite& HAnimSite1790 =  HAnimSite();
HAnimSite1790.setUSE(CString("hanim_r_axilla_post_pt"));
HAnimHumanoid45.setSites(&HAnimSite1790);

HAnimSite& HAnimSite1791 =  HAnimSite();
HAnimSite1791.setUSE(CString("hanim_l_calcaneous_post_pt"));
HAnimHumanoid45.setSites(&HAnimSite1791);

HAnimSite& HAnimSite1792 =  HAnimSite();
HAnimSite1792.setUSE(CString("hanim_r_calcaneous_post_pt"));
HAnimHumanoid45.setSites(&HAnimSite1792);

HAnimSite& HAnimSite1793 =  HAnimSite();
HAnimSite1793.setUSE(CString("hanim_l_clavicale_pt"));
HAnimHumanoid45.setSites(&HAnimSite1793);

HAnimSite& HAnimSite1794 =  HAnimSite();
HAnimSite1794.setUSE(CString("hanim_r_clavicale_pt"));
HAnimHumanoid45.setSites(&HAnimSite1794);

HAnimSite& HAnimSite1795 =  HAnimSite();
HAnimSite1795.setUSE(CString("hanim_l_dactylion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1795);

HAnimSite& HAnimSite1796 =  HAnimSite();
HAnimSite1796.setUSE(CString("hanim_r_dactylion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1796);

HAnimSite& HAnimSite1797 =  HAnimSite();
HAnimSite1797.setUSE(CString("hanim_l_digit2_pt"));
HAnimHumanoid45.setSites(&HAnimSite1797);

HAnimSite& HAnimSite1798 =  HAnimSite();
HAnimSite1798.setUSE(CString("hanim_r_digit2_pt"));
HAnimHumanoid45.setSites(&HAnimSite1798);

HAnimSite& HAnimSite1799 =  HAnimSite();
HAnimSite1799.setUSE(CString("hanim_l_femoral_lateral_epicn_pt"));
HAnimHumanoid45.setSites(&HAnimSite1799);

HAnimSite& HAnimSite1800 =  HAnimSite();
HAnimSite1800.setUSE(CString("hanim_r_femoral_lateral_epicn_pt"));
HAnimHumanoid45.setSites(&HAnimSite1800);

HAnimSite& HAnimSite1801 =  HAnimSite();
HAnimSite1801.setUSE(CString("hanim_l_femoral_medial_epicn_pt"));
HAnimHumanoid45.setSites(&HAnimSite1801);

HAnimSite& HAnimSite1802 =  HAnimSite();
HAnimSite1802.setUSE(CString("hanim_r_femoral_medial_epicn_pt"));
HAnimHumanoid45.setSites(&HAnimSite1802);

HAnimSite& HAnimSite1803 =  HAnimSite();
HAnimSite1803.setUSE(CString("hanim_l_forefoot_tip"));
HAnimHumanoid45.setSites(&HAnimSite1803);

HAnimSite& HAnimSite1804 =  HAnimSite();
HAnimSite1804.setUSE(CString("hanim_r_forefoot_tip"));
HAnimHumanoid45.setSites(&HAnimSite1804);

HAnimSite& HAnimSite1805 =  HAnimSite();
HAnimSite1805.setUSE(CString("hanim_r_gonion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1805);

HAnimSite& HAnimSite1806 =  HAnimSite();
HAnimSite1806.setUSE(CString("hanim_l_gonion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1806);

HAnimSite& HAnimSite1807 =  HAnimSite();
HAnimSite1807.setUSE(CString("hanim_l_humeral_lateral_epicn_pt"));
HAnimHumanoid45.setSites(&HAnimSite1807);

HAnimSite& HAnimSite1808 =  HAnimSite();
HAnimSite1808.setUSE(CString("hanim_r_humeral_lateral_epicn_pt"));
HAnimHumanoid45.setSites(&HAnimSite1808);

HAnimSite& HAnimSite1809 =  HAnimSite();
HAnimSite1809.setUSE(CString("hanim_l_humeral_medial_epicn_pt"));
HAnimHumanoid45.setSites(&HAnimSite1809);

HAnimSite& HAnimSite1810 =  HAnimSite();
HAnimSite1810.setUSE(CString("hanim_r_humeral_medial_epicn_pt"));
HAnimHumanoid45.setSites(&HAnimSite1810);

HAnimSite& HAnimSite1811 =  HAnimSite();
HAnimSite1811.setUSE(CString("hanim_r_iliocristale_pt"));
HAnimHumanoid45.setSites(&HAnimSite1811);

HAnimSite& HAnimSite1812 =  HAnimSite();
HAnimSite1812.setUSE(CString("hanim_l_iliocristale_pt"));
HAnimHumanoid45.setSites(&HAnimSite1812);

HAnimSite& HAnimSite1813 =  HAnimSite();
HAnimSite1813.setUSE(CString("hanim_l_index_distal_tip"));
HAnimHumanoid45.setSites(&HAnimSite1813);

HAnimSite& HAnimSite1814 =  HAnimSite();
HAnimSite1814.setUSE(CString("hanim_r_index_distal_tip"));
HAnimHumanoid45.setSites(&HAnimSite1814);

HAnimSite& HAnimSite1815 =  HAnimSite();
HAnimSite1815.setUSE(CString("hanim_r_infraorbitale_pt"));
HAnimHumanoid45.setSites(&HAnimSite1815);

HAnimSite& HAnimSite1816 =  HAnimSite();
HAnimSite1816.setUSE(CString("hanim_l_infraorbitale_pt"));
HAnimHumanoid45.setSites(&HAnimSite1816);

HAnimSite& HAnimSite1817 =  HAnimSite();
HAnimSite1817.setUSE(CString("hanim_l_knee_crease_pt"));
HAnimHumanoid45.setSites(&HAnimSite1817);

HAnimSite& HAnimSite1818 =  HAnimSite();
HAnimSite1818.setUSE(CString("hanim_r_knee_crease_pt"));
HAnimHumanoid45.setSites(&HAnimSite1818);

HAnimSite& HAnimSite1819 =  HAnimSite();
HAnimSite1819.setUSE(CString("hanim_l_lateral_malleolus_pt"));
HAnimHumanoid45.setSites(&HAnimSite1819);

HAnimSite& HAnimSite1820 =  HAnimSite();
HAnimSite1820.setUSE(CString("hanim_r_lateral_malleolus_pt"));
HAnimHumanoid45.setSites(&HAnimSite1820);

HAnimSite& HAnimSite1821 =  HAnimSite();
HAnimSite1821.setUSE(CString("hanim_l_medial_malleolus_pt"));
HAnimHumanoid45.setSites(&HAnimSite1821);

HAnimSite& HAnimSite1822 =  HAnimSite();
HAnimSite1822.setUSE(CString("hanim_r_medial_malleolus_pt"));
HAnimHumanoid45.setSites(&HAnimSite1822);

HAnimSite& HAnimSite1823 =  HAnimSite();
HAnimSite1823.setUSE(CString("hanim_l_metacarpal_pha2_pt"));
HAnimHumanoid45.setSites(&HAnimSite1823);

HAnimSite& HAnimSite1824 =  HAnimSite();
HAnimSite1824.setUSE(CString("hanim_r_metacarpal_pha2_pt"));
HAnimHumanoid45.setSites(&HAnimSite1824);

HAnimSite& HAnimSite1825 =  HAnimSite();
HAnimSite1825.setUSE(CString("hanim_l_metacarpal_pha5_pt"));
HAnimHumanoid45.setSites(&HAnimSite1825);

HAnimSite& HAnimSite1826 =  HAnimSite();
HAnimSite1826.setUSE(CString("hanim_r_metacarpal_pha5_pt"));
HAnimHumanoid45.setSites(&HAnimSite1826);

HAnimSite& HAnimSite1827 =  HAnimSite();
HAnimSite1827.setUSE(CString("hanim_l_metatarsal_pha1_pt"));
HAnimHumanoid45.setSites(&HAnimSite1827);

HAnimSite& HAnimSite1828 =  HAnimSite();
HAnimSite1828.setUSE(CString("hanim_r_metatarsal_pha1_pt"));
HAnimHumanoid45.setSites(&HAnimSite1828);

HAnimSite& HAnimSite1829 =  HAnimSite();
HAnimSite1829.setUSE(CString("hanim_l_metatarsal_pha5_pt"));
HAnimHumanoid45.setSites(&HAnimSite1829);

HAnimSite& HAnimSite1830 =  HAnimSite();
HAnimSite1830.setUSE(CString("hanim_r_metatarsal_pha5_pt"));
HAnimHumanoid45.setSites(&HAnimSite1830);

HAnimSite& HAnimSite1831 =  HAnimSite();
HAnimSite1831.setUSE(CString("hanim_l_middle_distal_tip"));
HAnimHumanoid45.setSites(&HAnimSite1831);

HAnimSite& HAnimSite1832 =  HAnimSite();
HAnimSite1832.setUSE(CString("hanim_r_middle_distal_tip"));
HAnimHumanoid45.setSites(&HAnimSite1832);

HAnimSite& HAnimSite1833 =  HAnimSite();
HAnimSite1833.setUSE(CString("hanim_r_neck_base_pt"));
HAnimHumanoid45.setSites(&HAnimSite1833);

HAnimSite& HAnimSite1834 =  HAnimSite();
HAnimSite1834.setUSE(CString("hanim_l_neck_base_pt"));
HAnimHumanoid45.setSites(&HAnimSite1834);

HAnimSite& HAnimSite1835 =  HAnimSite();
HAnimSite1835.setUSE(CString("hanim_l_olecranon_pt"));
HAnimHumanoid45.setSites(&HAnimSite1835);

HAnimSite& HAnimSite1836 =  HAnimSite();
HAnimSite1836.setUSE(CString("hanim_r_olecranon_pt"));
HAnimHumanoid45.setSites(&HAnimSite1836);

HAnimSite& HAnimSite1837 =  HAnimSite();
HAnimSite1837.setUSE(CString("hanim_l_pinky_distal_tip"));
HAnimHumanoid45.setSites(&HAnimSite1837);

HAnimSite& HAnimSite1838 =  HAnimSite();
HAnimSite1838.setUSE(CString("hanim_r_pinky_distal_tip"));
HAnimHumanoid45.setSites(&HAnimSite1838);

HAnimSite& HAnimSite1839 =  HAnimSite();
HAnimSite1839.setUSE(CString("hanim_r_psis_pt"));
HAnimHumanoid45.setSites(&HAnimSite1839);

HAnimSite& HAnimSite1840 =  HAnimSite();
HAnimSite1840.setUSE(CString("hanim_l_psis_pt"));
HAnimHumanoid45.setSites(&HAnimSite1840);

HAnimSite& HAnimSite1841 =  HAnimSite();
HAnimSite1841.setUSE(CString("hanim_l_radial_styloid_pt"));
HAnimHumanoid45.setSites(&HAnimSite1841);

HAnimSite& HAnimSite1842 =  HAnimSite();
HAnimSite1842.setUSE(CString("hanim_r_radial_styloid_pt"));
HAnimHumanoid45.setSites(&HAnimSite1842);

HAnimSite& HAnimSite1843 =  HAnimSite();
HAnimSite1843.setUSE(CString("hanim_l_radiale_pt"));
HAnimHumanoid45.setSites(&HAnimSite1843);

HAnimSite& HAnimSite1844 =  HAnimSite();
HAnimSite1844.setUSE(CString("hanim_r_radiale_pt"));
HAnimHumanoid45.setSites(&HAnimSite1844);

HAnimSite& HAnimSite1845 =  HAnimSite();
HAnimSite1845.setUSE(CString("hanim_r_rib10_pt"));
HAnimHumanoid45.setSites(&HAnimSite1845);

HAnimSite& HAnimSite1846 =  HAnimSite();
HAnimSite1846.setUSE(CString("hanim_l_rib10_pt"));
HAnimHumanoid45.setSites(&HAnimSite1846);

HAnimSite& HAnimSite1847 =  HAnimSite();
HAnimSite1847.setUSE(CString("hanim_l_ring_distal_tip"));
HAnimHumanoid45.setSites(&HAnimSite1847);

HAnimSite& HAnimSite1848 =  HAnimSite();
HAnimSite1848.setUSE(CString("hanim_r_ring_distal_tip"));
HAnimHumanoid45.setSites(&HAnimSite1848);

HAnimSite& HAnimSite1849 =  HAnimSite();
HAnimSite1849.setUSE(CString("hanim_temporomandibular_l_site_pt"));
HAnimHumanoid45.setSites(&HAnimSite1849);

HAnimSite& HAnimSite1850 =  HAnimSite();
HAnimSite1850.setUSE(CString("hanim_temporomandibular_r_site_pt"));
HAnimHumanoid45.setSites(&HAnimSite1850);

HAnimSite& HAnimSite1851 =  HAnimSite();
HAnimSite1851.setUSE(CString("hanim_l_sphyrion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1851);

HAnimSite& HAnimSite1852 =  HAnimSite();
HAnimSite1852.setUSE(CString("hanim_r_sphyrion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1852);

HAnimSite& HAnimSite1853 =  HAnimSite();
HAnimSite1853.setUSE(CString("hanim_r_thelion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1853);

HAnimSite& HAnimSite1854 =  HAnimSite();
HAnimSite1854.setUSE(CString("hanim_l_thelion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1854);

HAnimSite& HAnimSite1855 =  HAnimSite();
HAnimSite1855.setUSE(CString("hanim_l_thumb_distal_tip"));
HAnimHumanoid45.setSites(&HAnimSite1855);

HAnimSite& HAnimSite1856 =  HAnimSite();
HAnimSite1856.setUSE(CString("hanim_r_thumb_distal_tip"));
HAnimHumanoid45.setSites(&HAnimSite1856);

HAnimSite& HAnimSite1857 =  HAnimSite();
HAnimSite1857.setUSE(CString("hanim_r_tragion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1857);

HAnimSite& HAnimSite1858 =  HAnimSite();
HAnimSite1858.setUSE(CString("hanim_l_tragion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1858);

HAnimSite& HAnimSite1859 =  HAnimSite();
HAnimSite1859.setUSE(CString("hanim_r_trochanterion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1859);

HAnimSite& HAnimSite1860 =  HAnimSite();
HAnimSite1860.setUSE(CString("hanim_l_trochanterion_pt"));
HAnimHumanoid45.setSites(&HAnimSite1860);

HAnimSite& HAnimSite1861 =  HAnimSite();
HAnimSite1861.setUSE(CString("hanim_l_ulnar_styloid_pt"));
HAnimHumanoid45.setSites(&HAnimSite1861);

HAnimSite& HAnimSite1862 =  HAnimSite();
HAnimSite1862.setUSE(CString("hanim_r_ulnar_styloid_pt"));
HAnimHumanoid45.setSites(&HAnimSite1862);

HAnimSite& HAnimSite1863 =  HAnimSite();
HAnimSite1863.setDEF(CString("hanim_l_inclined_view"));
HAnimSite1863.X3DNode::setName(CString("l_inclined_view"));
HAnimSite1863.setTranslation(new float[]{1.62,1.05,2.06});
HAnimSite1863.setRotation(new float[]{-0.113,0.993,0.0347,0.671});
TouchSensor& TouchSensor1864 =  TouchSensor();
TouchSensor1864.setDescription(CString("HAnimSite l_inclined_view"));
HAnimSite1863.addChild(&TouchSensor1864);

Shape& Shape1865 =  Shape();
Shape1865.setUSE(CString("HAnimSiteShape"));
HAnimSite1863.addChild(&Shape1865);

Viewpoint& Viewpoint1866 =  Viewpoint();
Viewpoint1866.setDEF(CString("hanim_l_inclined_viewpoint"));
Viewpoint1866.setDescription(CString("left inclined"));
Viewpoint1866.setPosition(new float[]{0.0,0.0,0.0});
HAnimSite1863.addChild(&Viewpoint1866);

Anchor& Anchor1867 =  Anchor();
Anchor1867.setDescription(CString("HAnimSite hanim_l_inclined_view Viewpoint"));
Anchor1867.setUrl(new CString[]{CString("#hanim_l_inclined_viewpoint")}, 1);
LOD& LOD1868 =  LOD();
LOD1868.setForceTransitions(true);
LOD1868.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1869 =  WorldInfo();
WorldInfo1869.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1868.addChildren(&WorldInfo1869);

Shape& Shape1870 =  Shape();
Shape1870.setUSE(CString("HAnimSiteViewpointShape"));
LOD1868.addChildren(Shape1870);

Anchor1867.addChild(&LOD1868);

HAnimSite1863.addChild(Anchor1867);

HAnimHumanoid45.setViewpoints(&HAnimSite1863);

HAnimSite& HAnimSite1871 =  HAnimSite();
HAnimSite1871.setDEF(CString("hanim_r_inclined_view"));
HAnimSite1871.X3DNode::setName(CString("r_inclined_view"));
HAnimSite1871.setTranslation(new float[]{-1.62,1.05,2.06});
HAnimSite1871.setRotation(new float[]{-0.113,-0.993,0.0347,0.671});
TouchSensor& TouchSensor1872 =  TouchSensor();
TouchSensor1872.setDescription(CString("HAnimSite r_inclined_view"));
HAnimSite1871.addChild(&TouchSensor1872);

Shape& Shape1873 =  Shape();
Shape1873.setUSE(CString("HAnimSiteShape"));
HAnimSite1871.addChild(&Shape1873);

Viewpoint& Viewpoint1874 =  Viewpoint();
Viewpoint1874.setDEF(CString("hanim_r_inclined_viewpoint"));
Viewpoint1874.setDescription(CString("right inclined"));
Viewpoint1874.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1874.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite1871.addChild(&Viewpoint1874);

Anchor& Anchor1875 =  Anchor();
Anchor1875.setDescription(CString("HAnimSite hanim_r_inclined_view Viewpoint"));
Anchor1875.setUrl(new CString[]{CString("#hanim_r_inclined_viewpoint")}, 1);
LOD& LOD1876 =  LOD();
LOD1876.setForceTransitions(true);
LOD1876.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1877 =  WorldInfo();
WorldInfo1877.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1876.addChildren(&WorldInfo1877);

Shape& Shape1878 =  Shape();
Shape1878.setUSE(CString("HAnimSiteViewpointShape"));
LOD1876.addChildren(Shape1878);

Anchor1875.addChild(&LOD1876);

HAnimSite1871.addChild(Anchor1875);

HAnimHumanoid45.setViewpoints(&HAnimSite1871);

HAnimSite& HAnimSite1879 =  HAnimSite();
HAnimSite1879.setDEF(CString("hanim_front_view"));
HAnimSite1879.X3DNode::setName(CString("front_view"));
HAnimSite1879.setTranslation(new float[]{0.0,0.85,2.58});
TouchSensor& TouchSensor1880 =  TouchSensor();
TouchSensor1880.setDescription(CString("HAnimSite front_view"));
HAnimSite1879.addChild(&TouchSensor1880);

Shape& Shape1881 =  Shape();
Shape1881.setUSE(CString("HAnimSiteShape"));
HAnimSite1879.addChild(&Shape1881);

Viewpoint& Viewpoint1882 =  Viewpoint();
Viewpoint1882.setDEF(CString("hanim_front_viewpoint"));
Viewpoint1882.setDescription(CString("front"));
Viewpoint1882.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1882.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite1879.addChild(&Viewpoint1882);

Anchor& Anchor1883 =  Anchor();
Anchor1883.setDescription(CString("HAnimSite hanim_front_view Viewpoint"));
Anchor1883.setUrl(new CString[]{CString("#hanim_front_viewpoint")}, 1);
LOD& LOD1884 =  LOD();
LOD1884.setForceTransitions(true);
LOD1884.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1885 =  WorldInfo();
WorldInfo1885.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1884.addChildren(&WorldInfo1885);

Shape& Shape1886 =  Shape();
Shape1886.setUSE(CString("HAnimSiteViewpointShape"));
LOD1884.addChildren(Shape1886);

Anchor1883.addChild(&LOD1884);

HAnimSite1879.addChild(Anchor1883);

HAnimHumanoid45.setViewpoints(&HAnimSite1879);

HAnimSite& HAnimSite1887 =  HAnimSite();
HAnimSite1887.setDEF(CString("hanim_back_view"));
HAnimSite1887.X3DNode::setName(CString("back_view"));
HAnimSite1887.setTranslation(new float[]{0.0,0.85,-2.58});
HAnimSite1887.setRotation(new float[]{0.0,1.0,0.0,3.14});
TouchSensor& TouchSensor1888 =  TouchSensor();
TouchSensor1888.setDescription(CString("HAnimSite back_view"));
HAnimSite1887.addChild(&TouchSensor1888);

Shape& Shape1889 =  Shape();
Shape1889.setUSE(CString("HAnimSiteShape"));
HAnimSite1887.addChild(&Shape1889);

Viewpoint& Viewpoint1890 =  Viewpoint();
Viewpoint1890.setDEF(CString("hanim_back_viewpoint"));
Viewpoint1890.setDescription(CString("back"));
Viewpoint1890.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1890.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite1887.addChild(&Viewpoint1890);

Anchor& Anchor1891 =  Anchor();
Anchor1891.setDescription(CString("HAnimSite hanim_back_view Viewpoint"));
Anchor1891.setUrl(new CString[]{CString("#hanim_back_viewpoint")}, 1);
LOD& LOD1892 =  LOD();
LOD1892.setForceTransitions(true);
LOD1892.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1893 =  WorldInfo();
WorldInfo1893.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1892.addChildren(&WorldInfo1893);

Shape& Shape1894 =  Shape();
Shape1894.setUSE(CString("HAnimSiteViewpointShape"));
LOD1892.addChildren(Shape1894);

Anchor1891.addChild(&LOD1892);

HAnimSite1887.addChild(Anchor1891);

HAnimHumanoid45.setViewpoints(&HAnimSite1887);

HAnimSite& HAnimSite1895 =  HAnimSite();
HAnimSite1895.setDEF(CString("hanim_l_side_view"));
HAnimSite1895.X3DNode::setName(CString("l_side_view"));
HAnimSite1895.setTranslation(new float[]{2.6,0.854,0.0});
HAnimSite1895.setRotation(new float[]{0.0,1.0,0.0,1.5708});
TouchSensor& TouchSensor1896 =  TouchSensor();
TouchSensor1896.setDescription(CString("HAnimSite l_side_view"));
HAnimSite1895.addChild(&TouchSensor1896);

Shape& Shape1897 =  Shape();
Shape1897.setUSE(CString("HAnimSiteShape"));
HAnimSite1895.addChild(&Shape1897);

Viewpoint& Viewpoint1898 =  Viewpoint();
Viewpoint1898.setDEF(CString("hanim_l_side_viewpoint"));
Viewpoint1898.setDescription(CString("left side"));
Viewpoint1898.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1898.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite1895.addChild(&Viewpoint1898);

Anchor& Anchor1899 =  Anchor();
Anchor1899.setDescription(CString("HAnimSite hanim_l_side_view Viewpoint"));
Anchor1899.setUrl(new CString[]{CString("#hanim_l_side_viewpoint")}, 1);
LOD& LOD1900 =  LOD();
LOD1900.setForceTransitions(true);
LOD1900.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1901 =  WorldInfo();
WorldInfo1901.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1900.addChildren(&WorldInfo1901);

Shape& Shape1902 =  Shape();
Shape1902.setUSE(CString("HAnimSiteViewpointShape"));
LOD1900.addChildren(Shape1902);

Anchor1899.addChild(&LOD1900);

HAnimSite1895.addChild(Anchor1899);

HAnimHumanoid45.setViewpoints(&HAnimSite1895);

HAnimSite& HAnimSite1903 =  HAnimSite();
HAnimSite1903.setDEF(CString("hanim_Top_view"));
HAnimSite1903.X3DNode::setName(CString("Top_view"));
HAnimSite1903.setTranslation(new float[]{0.0,3.5,0.0});
HAnimSite1903.setRotation(new float[]{1.0,0.0,0.0,-1.57});
TouchSensor& TouchSensor1904 =  TouchSensor();
TouchSensor1904.setDescription(CString("HAnimSite Top_view"));
HAnimSite1903.addChild(&TouchSensor1904);

Shape& Shape1905 =  Shape();
Shape1905.setUSE(CString("HAnimSiteShape"));
HAnimSite1903.addChild(&Shape1905);

Viewpoint& Viewpoint1906 =  Viewpoint();
Viewpoint1906.setDEF(CString("hanim_Top_viewpoint"));
Viewpoint1906.setDescription(CString("Top"));
Viewpoint1906.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1906.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite1903.addChild(&Viewpoint1906);

Anchor& Anchor1907 =  Anchor();
Anchor1907.setDescription(CString("HAnimSite hanim_Top_view Viewpoint"));
Anchor1907.setUrl(new CString[]{CString("#hanim_Top_viewpoint")}, 1);
LOD& LOD1908 =  LOD();
LOD1908.setForceTransitions(true);
LOD1908.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1909 =  WorldInfo();
WorldInfo1909.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1908.addChildren(&WorldInfo1909);

Shape& Shape1910 =  Shape();
Shape1910.setUSE(CString("HAnimSiteViewpointShape"));
LOD1908.addChildren(Shape1910);

Anchor1907.addChild(&LOD1908);

HAnimSite1903.addChild(Anchor1907);

HAnimHumanoid45.setViewpoints(&HAnimSite1903);

HAnimSite& HAnimSite1911 =  HAnimSite();
HAnimSite1911.setDEF(CString("hanim_front_close_view"));
HAnimSite1911.X3DNode::setName(CString("front_close_view"));
HAnimSite1911.setTranslation(new float[]{0.0,0.854,1.575});
TouchSensor& TouchSensor1912 =  TouchSensor();
TouchSensor1912.setDescription(CString("HAnimSite front_close_view"));
HAnimSite1911.addChild(&TouchSensor1912);

Shape& Shape1913 =  Shape();
Shape1913.setUSE(CString("HAnimSiteShape"));
HAnimSite1911.addChild(&Shape1913);

Viewpoint& Viewpoint1914 =  Viewpoint();
Viewpoint1914.setDEF(CString("hanim_front_close_viewpoint"));
Viewpoint1914.setDescription(CString("front close"));
Viewpoint1914.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1914.setCenterOfRotation(new float[]{0.0,0.0,1.575});
HAnimSite1911.addChild(&Viewpoint1914);

Anchor& Anchor1915 =  Anchor();
Anchor1915.setDescription(CString("HAnimSite hanim_front_close_view Viewpoint"));
Anchor1915.setUrl(new CString[]{CString("#hanim_front_close_viewpoint")}, 1);
LOD& LOD1916 =  LOD();
LOD1916.setForceTransitions(true);
LOD1916.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1917 =  WorldInfo();
WorldInfo1917.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1916.addChildren(&WorldInfo1917);

Shape& Shape1918 =  Shape();
Shape1918.setUSE(CString("HAnimSiteViewpointShape"));
LOD1916.addChildren(Shape1918);

Anchor1915.addChild(&LOD1916);

HAnimSite1911.addChild(Anchor1915);

HAnimHumanoid45.setViewpoints(&HAnimSite1911);

HAnimSite& HAnimSite1919 =  HAnimSite();
HAnimSite1919.setDEF(CString("hanim_side_close_view"));
HAnimSite1919.X3DNode::setName(CString("side_close_view"));
HAnimSite1919.setTranslation(new float[]{1.56,0.854,0.0});
HAnimSite1919.setRotation(new float[]{0.0,1.0,0.0,1.5708});
TouchSensor& TouchSensor1920 =  TouchSensor();
TouchSensor1920.setDescription(CString("HAnimSite side_close_view"));
HAnimSite1919.addChild(&TouchSensor1920);

Shape& Shape1921 =  Shape();
Shape1921.setUSE(CString("HAnimSiteShape"));
HAnimSite1919.addChild(&Shape1921);

Viewpoint& Viewpoint1922 =  Viewpoint();
Viewpoint1922.setDEF(CString("hanim_side_close_viewpoint"));
Viewpoint1922.setDescription(CString("side close"));
Viewpoint1922.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1922.setCenterOfRotation(new float[]{1.6,0.0,0.0});
HAnimSite1919.addChild(&Viewpoint1922);

Anchor& Anchor1923 =  Anchor();
Anchor1923.setDescription(CString("HAnimSite hanim_side_close_view Viewpoint"));
Anchor1923.setUrl(new CString[]{CString("#hanim_side_close_viewpoint")}, 1);
LOD& LOD1924 =  LOD();
LOD1924.setForceTransitions(true);
LOD1924.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1925 =  WorldInfo();
WorldInfo1925.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1924.addChildren(&WorldInfo1925);

Shape& Shape1926 =  Shape();
Shape1926.setUSE(CString("HAnimSiteViewpointShape"));
LOD1924.addChildren(Shape1926);

Anchor1923.addChild(&LOD1924);

HAnimSite1919.addChild(Anchor1923);

HAnimHumanoid45.setViewpoints(&HAnimSite1919);

HAnimSite& HAnimSite1927 =  HAnimSite();
HAnimSite1927.setDEF(CString("hanim_head_front_close_view"));
HAnimSite1927.X3DNode::setName(CString("head_front_close_view"));
HAnimSite1927.setTranslation(new float[]{0.0,1.5,1.0});
TouchSensor& TouchSensor1928 =  TouchSensor();
TouchSensor1928.setDescription(CString("HAnimSite head_front_close_view"));
HAnimSite1927.addChild(&TouchSensor1928);

Shape& Shape1929 =  Shape();
Shape1929.setUSE(CString("HAnimSiteShape"));
HAnimSite1927.addChild(&Shape1929);

Viewpoint& Viewpoint1930 =  Viewpoint();
Viewpoint1930.setDEF(CString("hanim_head_front_close_viewpoint"));
Viewpoint1930.setDescription(CString("head front close"));
Viewpoint1930.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1930.setCenterOfRotation(new float[]{0.0,0.0,1.0});
HAnimSite1927.addChild(&Viewpoint1930);

Anchor& Anchor1931 =  Anchor();
Anchor1931.setDescription(CString("HAnimSite hanim_head_front_close_view Viewpoint"));
Anchor1931.setUrl(new CString[]{CString("#hanim_head_front_close_viewpoint")}, 1);
LOD& LOD1932 =  LOD();
LOD1932.setForceTransitions(true);
LOD1932.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1933 =  WorldInfo();
WorldInfo1933.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1932.addChildren(&WorldInfo1933);

Shape& Shape1934 =  Shape();
Shape1934.setUSE(CString("HAnimSiteViewpointShape"));
LOD1932.addChildren(Shape1934);

Anchor1931.addChild(&LOD1932);

HAnimSite1927.addChild(Anchor1931);

HAnimHumanoid45.setViewpoints(&HAnimSite1927);

HAnimSite& HAnimSite1935 =  HAnimSite();
HAnimSite1935.setDEF(CString("hanim_chest_front_close_view"));
HAnimSite1935.X3DNode::setName(CString("chest_front_close_view"));
HAnimSite1935.setTranslation(new float[]{0.0,1.2,1.0});
TouchSensor& TouchSensor1936 =  TouchSensor();
TouchSensor1936.setDescription(CString("HAnimSite chest_front_close_view"));
HAnimSite1935.addChild(&TouchSensor1936);

Shape& Shape1937 =  Shape();
Shape1937.setUSE(CString("HAnimSiteShape"));
HAnimSite1935.addChild(&Shape1937);

Viewpoint& Viewpoint1938 =  Viewpoint();
Viewpoint1938.setDEF(CString("hanim_chest_front_close_viewpoint"));
Viewpoint1938.setDescription(CString("chest front close"));
Viewpoint1938.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1938.setCenterOfRotation(new float[]{0.0,0.0,1.0});
HAnimSite1935.addChild(&Viewpoint1938);

Anchor& Anchor1939 =  Anchor();
Anchor1939.setDescription(CString("HAnimSite hanim_chest_front_close_view Viewpoint"));
Anchor1939.setUrl(new CString[]{CString("#hanim_chest_front_close_viewpoint")}, 1);
LOD& LOD1940 =  LOD();
LOD1940.setForceTransitions(true);
LOD1940.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1941 =  WorldInfo();
WorldInfo1941.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1940.addChildren(&WorldInfo1941);

Shape& Shape1942 =  Shape();
Shape1942.setUSE(CString("HAnimSiteViewpointShape"));
LOD1940.addChildren(Shape1942);

Anchor1939.addChild(&LOD1940);

HAnimSite1935.addChild(Anchor1939);

HAnimHumanoid45.setViewpoints(&HAnimSite1935);

HAnimSite& HAnimSite1943 =  HAnimSite();
HAnimSite1943.setDEF(CString("hanim_pelvis_front_close_view"));
HAnimSite1943.X3DNode::setName(CString("pelvis_front_close_view"));
HAnimSite1943.setTranslation(new float[]{0.0,0.8,1.0});
TouchSensor& TouchSensor1944 =  TouchSensor();
TouchSensor1944.setDescription(CString("HAnimSite pelvis_front_close_view"));
HAnimSite1943.addChild(&TouchSensor1944);

Shape& Shape1945 =  Shape();
Shape1945.setUSE(CString("HAnimSiteShape"));
HAnimSite1943.addChild(&Shape1945);

Viewpoint& Viewpoint1946 =  Viewpoint();
Viewpoint1946.setDEF(CString("hanim_pelvis_front_close_viewpoint"));
Viewpoint1946.setDescription(CString("pelvis front close"));
Viewpoint1946.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1946.setCenterOfRotation(new float[]{0.0,0.0,1.0});
HAnimSite1943.addChild(&Viewpoint1946);

Anchor& Anchor1947 =  Anchor();
Anchor1947.setDescription(CString("HAnimSite hanim_pelvis_front_close_view Viewpoint"));
Anchor1947.setUrl(new CString[]{CString("#hanim_pelvis_front_close_viewpoint")}, 1);
LOD& LOD1948 =  LOD();
LOD1948.setForceTransitions(true);
LOD1948.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1949 =  WorldInfo();
WorldInfo1949.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1948.addChildren(&WorldInfo1949);

Shape& Shape1950 =  Shape();
Shape1950.setUSE(CString("HAnimSiteViewpointShape"));
LOD1948.addChildren(Shape1950);

Anchor1947.addChild(&LOD1948);

HAnimSite1943.addChild(Anchor1947);

HAnimHumanoid45.setViewpoints(&HAnimSite1943);

HAnimSite& HAnimSite1951 =  HAnimSite();
HAnimSite1951.setDEF(CString("hanim_knees_front_close_view"));
HAnimSite1951.X3DNode::setName(CString("knees_front_close_view"));
HAnimSite1951.setTranslation(new float[]{0.0,0.4,1.0});
TouchSensor& TouchSensor1952 =  TouchSensor();
TouchSensor1952.setDescription(CString("HAnimSite knees_front_close_view"));
HAnimSite1951.addChild(&TouchSensor1952);

Shape& Shape1953 =  Shape();
Shape1953.setUSE(CString("HAnimSiteShape"));
HAnimSite1951.addChild(&Shape1953);

Viewpoint& Viewpoint1954 =  Viewpoint();
Viewpoint1954.setDEF(CString("hanim_knees_front_close_viewpoint"));
Viewpoint1954.setDescription(CString("knees front close"));
Viewpoint1954.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1954.setCenterOfRotation(new float[]{0.0,0.4,0.0});
HAnimSite1951.addChild(&Viewpoint1954);

Anchor& Anchor1955 =  Anchor();
Anchor1955.setDescription(CString("HAnimSite hanim_knees_front_close_view Viewpoint"));
Anchor1955.setUrl(new CString[]{CString("#hanim_knees_front_close_viewpoint")}, 1);
LOD& LOD1956 =  LOD();
LOD1956.setForceTransitions(true);
LOD1956.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1957 =  WorldInfo();
WorldInfo1957.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1956.addChildren(&WorldInfo1957);

Shape& Shape1958 =  Shape();
Shape1958.setUSE(CString("HAnimSiteViewpointShape"));
LOD1956.addChildren(Shape1958);

Anchor1955.addChild(&LOD1956);

HAnimSite1951.addChild(Anchor1955);

HAnimHumanoid45.setViewpoints(&HAnimSite1951);

HAnimSite& HAnimSite1959 =  HAnimSite();
HAnimSite1959.setDEF(CString("hanim_feet_front_close_view"));
HAnimSite1959.X3DNode::setName(CString("feet_front_close_view"));
HAnimSite1959.setTranslation(new float[]{0.0,0.0,1.0});
TouchSensor& TouchSensor1960 =  TouchSensor();
TouchSensor1960.setDescription(CString("HAnimSite feet_front_close_view"));
HAnimSite1959.addChild(&TouchSensor1960);

Shape& Shape1961 =  Shape();
Shape1961.setUSE(CString("HAnimSiteShape"));
HAnimSite1959.addChild(&Shape1961);

Viewpoint& Viewpoint1962 =  Viewpoint();
Viewpoint1962.setDEF(CString("hanim_feet_front_close_viewpoint"));
Viewpoint1962.setDescription(CString("feet front close"));
Viewpoint1962.setPosition(new float[]{0.0,0.0,0.0});
HAnimSite1959.addChild(&Viewpoint1962);

Anchor& Anchor1963 =  Anchor();
Anchor1963.setDescription(CString("HAnimSite hanim_feet_front_close_view Viewpoint"));
Anchor1963.setUrl(new CString[]{CString("#hanim_feet_front_close_viewpoint")}, 1);
LOD& LOD1964 =  LOD();
LOD1964.setForceTransitions(true);
LOD1964.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1965 =  WorldInfo();
WorldInfo1965.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1964.addChildren(&WorldInfo1965);

Shape& Shape1966 =  Shape();
Shape1966.setUSE(CString("HAnimSiteViewpointShape"));
LOD1964.addChildren(Shape1966);

Anchor1963.addChild(&LOD1964);

HAnimSite1959.addChild(Anchor1963);

HAnimHumanoid45.setViewpoints(&HAnimSite1959);

HAnimSite& HAnimSite1967 =  HAnimSite();
HAnimSite1967.setDEF(CString("hanim_eye_level_view"));
HAnimSite1967.X3DNode::setName(CString("eye_level_view"));
HAnimSite1967.setTranslation(new float[]{0.0,1.6332,0.0502});
TouchSensor& TouchSensor1968 =  TouchSensor();
TouchSensor1968.setDescription(CString("HAnimSite eye_level_view"));
HAnimSite1967.addChild(&TouchSensor1968);

Shape& Shape1969 =  Shape();
Shape1969.setUSE(CString("HAnimSiteShape"));
HAnimSite1967.addChild(&Shape1969);

Viewpoint& Viewpoint1970 =  Viewpoint();
Viewpoint1970.setDEF(CString("hanim_eye_level_viewpoint"));
Viewpoint1970.setDescription(CString("eye level looking forward"));
Viewpoint1970.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1970.setOrientation(new float[]{0.0,1.0,0.0,3.141593});
HAnimSite1967.addChild(&Viewpoint1970);

Anchor& Anchor1971 =  Anchor();
Anchor1971.setDescription(CString("HAnimSite hanim_eye_level_view Viewpoint"));
Anchor1971.setUrl(new CString[]{CString("#hanim_eye_level_viewpoint")}, 1);
LOD& LOD1972 =  LOD();
LOD1972.setForceTransitions(true);
LOD1972.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1973 =  WorldInfo();
WorldInfo1973.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1972.addChildren(&WorldInfo1973);

Shape& Shape1974 =  Shape();
Shape1974.setUSE(CString("HAnimSiteViewpointShape"));
LOD1972.addChildren(Shape1974);

Anchor1971.addChild(&LOD1972);

HAnimSite1967.addChild(Anchor1971);

HAnimHumanoid45.setViewpoints(&HAnimSite1967);

HAnimSite& HAnimSite1975 =  HAnimSite();
HAnimSite1975.setUSE(CString("hanim_l_eyeball_site_view"));
HAnimHumanoid45.setSites(&HAnimSite1975);

HAnimSite& HAnimSite1976 =  HAnimSite();
HAnimSite1976.setUSE(CString("hanim_r_eyeball_site_view"));
HAnimHumanoid45.setSites(&HAnimSite1976);

HAnimSite& HAnimSite1977 =  HAnimSite();
HAnimSite1977.setUSE(CString("hanim_l_hand_front_view"));
HAnimHumanoid45.setSites(&HAnimSite1977);

HAnimSite& HAnimSite1978 =  HAnimSite();
HAnimSite1978.setUSE(CString("hanim_r_hand_front_view"));
HAnimHumanoid45.setSites(&HAnimSite1978);

Scene31.addChild(&HAnimHumanoid45);

X3D0.setScene(&Scene31);

//}
