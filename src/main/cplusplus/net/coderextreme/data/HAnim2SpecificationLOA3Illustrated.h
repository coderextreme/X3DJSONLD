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
meta3.setContent(CString("HAnim2SpecificationLOA3Illustrated.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("reference"));
meta5.setContent(CString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("reference"));
meta6.setContent(CString("HAnim2SpecificationLOA3Invisible.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("reference"));
meta7.setContent(CString("HAnim2SpecificationLOA3Animation.x3d"));
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
meta16.setContent(CString("18 February 2021"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("modified"));
meta17.setContent(CString("Mon, 15 Sep 2025 05:20:09 GMT"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("creator"));
meta18.setContent(CString("Don Brutzman"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("Image"));
meta19.setContent(CString("images/BonesAllSkeletonFrontViewLOA1.png"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("Image"));
meta20.setContent(CString("images/BonesAllSkeletonFrontViewLOA2.png"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("Image"));
meta21.setContent(CString("images/BonesAllSkeletonFrontViewLOA3.png"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("TODO"));
meta22.setContent(CString("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("TODO"));
meta23.setContent(CString("insert MetadataInteger nodes indicating LOA for each Joint and Segment"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("translator"));
meta24.setContent(CString("Don Brutzman and Joe Williams"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("generator"));
meta25.setContent(CString("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("generator"));
meta26.setContent(CString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta26);

X3D0.setHead(&head1);

Scene& Scene27 =  Scene();
Background& Background28 =  Background();
Background28.setSkyColor(new float[]{0.3,0.3,0.3}, 3);
Scene27.addChild(&Background28);

NavigationInfo& NavigationInfo29 =  NavigationInfo();
Scene27.addChild(&NavigationInfo29);

Group& Group30 =  Group();
Group30.setDEF(CString("Original_WorldInfo"));
WorldInfo& WorldInfo31 =  WorldInfo();
WorldInfo31.setTitle(CString("HANIM 200x Default Joint Centers, LOA3"));
WorldInfo31.setInfo(new CString[]{CString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")}, 1);
Group30.addChild(&WorldInfo31);

Scene27.addChild(&Group30);

Viewpoint& Viewpoint32 =  Viewpoint();
Viewpoint32.setDescription(CString("Humanoid LOA 3 Front"));
Viewpoint32.setPosition(new float[]{0.0,0.4,4.0});
Viewpoint32.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint32);

Viewpoint& Viewpoint33 =  Viewpoint();
Viewpoint33.setDescription(CString("Humanoid LOA 3 Front Close"));
Viewpoint33.setPosition(new float[]{0.0,0.8,2.0});
Viewpoint33.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint33);

Viewpoint& Viewpoint34 =  Viewpoint();
Viewpoint34.setDescription(CString("Humanoid LOA 3 Front Closer"));
Viewpoint34.setPosition(new float[]{0.0,1.2,1.0});
Viewpoint34.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint34);

Viewpoint& Viewpoint35 =  Viewpoint();
Viewpoint35.setDescription(CString("Humanoid LOA 3 Front Face"));
Viewpoint35.setPosition(new float[]{0.0,1.63,1.0});
Viewpoint35.setCenterOfRotation(new float[]{0.0,1.5,0.0016});
Scene27.addChild(&Viewpoint35);

Viewpoint& Viewpoint36 =  Viewpoint();
Viewpoint36.setDescription(CString("Humanoid LOA 3 Right Side"));
Viewpoint36.setPosition(new float[]{2.6,0.8,0.0});
Viewpoint36.setOrientation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint36.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint36);

Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setDescription(CString("Humanoid LOA 3 Right Side Close"));
Viewpoint37.setPosition(new float[]{1.0,0.8,0.5});
Viewpoint37.setOrientation(new float[]{0.0,1.0,0.0,1.2});
Viewpoint37.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint37);

Viewpoint& Viewpoint38 =  Viewpoint();
Viewpoint38.setDescription(CString("Humanoid LOA 3 Left Side Close"));
Viewpoint38.setPosition(new float[]{-1.0,0.8,0.5});
Viewpoint38.setOrientation(new float[]{0.0,1.0,0.0,-1.2});
Viewpoint38.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint38);

Viewpoint& Viewpoint39 =  Viewpoint();
Viewpoint39.setDescription(CString("Humanoid LOA 3 Left Side"));
Viewpoint39.setPosition(new float[]{-2.6,0.8,0.0});
Viewpoint39.setOrientation(new float[]{0.0,1.0,0.0,-1.5708});
Viewpoint39.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint39);

Viewpoint& Viewpoint40 =  Viewpoint();
Viewpoint40.setDescription(CString("Humanoid LOA 3 Top"));
Viewpoint40.setPosition(new float[]{0.0,3.5,0.0});
Viewpoint40.setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
Viewpoint40.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint40);

HAnimHumanoid& HAnimHumanoid41 =  HAnimHumanoid();
HAnimHumanoid41.setDEF(CString("hanim_humanoid"));
HAnimHumanoid41.X3DNode::setName(CString("humanoid"));
HAnimHumanoid41.setLoa(3);
MetadataSet& MetadataSet42 =  MetadataSet();
MetadataSet42.X3DNode::setName(CString("HAnimHumanoid.info"));
MetadataSet42.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString43 =  MetadataString();
MetadataString43.X3DNode::setName(CString("authorName"));
MetadataSet42.setValue((X3DNode *)&MetadataString43);

MetadataString& MetadataString44 =  MetadataString();
MetadataString44.X3DNode::setName(CString("authorEmail"));
MetadataSet42.setValue((X3DNode *)&MetadataString44);

MetadataString& MetadataString45 =  MetadataString();
MetadataString45.X3DNode::setName(CString("copyright"));
MetadataSet42.setValue((X3DNode *)&MetadataString45);

MetadataString& MetadataString46 =  MetadataString();
MetadataString46.X3DNode::setName(CString("creationDate"));
MetadataSet42.setValue((X3DNode *)&MetadataString46);

MetadataFloat& MetadataFloat47 =  MetadataFloat();
MetadataFloat47.X3DNode::setName(CString("height"));
MetadataFloat47.setValue(new float[]{1.7504}, 1);
MetadataSet42.setValue((X3DNode *)&MetadataFloat47);

MetadataString& MetadataString48 =  MetadataString();
MetadataString48.X3DNode::setName(CString("humanoidVersion"));
MetadataSet42.setValue((X3DNode *)&MetadataString48);

MetadataString& MetadataString49 =  MetadataString();
MetadataString49.X3DNode::setName(CString("usageRestrictions"));
MetadataSet42.setValue((X3DNode *)&MetadataString49);

HAnimHumanoid41.setMetadata(&MetadataSet42);

HAnimJoint& HAnimJoint50 =  HAnimJoint();
HAnimJoint50.setDEF(CString("hanim_humanoid_root"));
HAnimJoint50.X3DNode::setName(CString("humanoid_root"));
HAnimJoint50.setCenter(new float[]{0.0,0.824,0.0277});
HAnimSegment& HAnimSegment51 =  HAnimSegment();
HAnimSegment51.setDEF(CString("hanim_sacrum"));
HAnimSegment51.X3DNode::setName(CString("sacrum"));
TouchSensor& TouchSensor52 =  TouchSensor();
TouchSensor52.setDescription(CString("HAnimJoint humanoid_root, HAnimSegment sacrum"));
HAnimSegment51.addChild(&TouchSensor52);

Transform& Transform53 =  Transform();
Transform53.setTranslation(new float[]{0.0,0.824,0.0277});
Shape& Shape54 =  Shape();
Shape54.setDEF(CString("HAnimJointShape"));
Appearance& Appearance55 =  Appearance();
Appearance55.setDEF(CString("HAnimJointAppearance"));
Material& Material56 =  Material();
Material56.setDiffuseColor(new float[]{1.0,0.5,0.0});
Material56.setTransparency(0.5);
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

Sphere& Sphere57 =  Sphere();
Sphere57.setRadius(0.006);
Shape54.setGeometry(&Sphere57);

Transform53.addChild(&Shape54);

HAnimSegment51.addChild(&Transform53);

Shape& Shape58 =  Shape();
LineSet& LineSet59 =  LineSet();
LineSet59.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA60 =  ColorRGBA();
ColorRGBA60.setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA60.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
LineSet59.addChild(&ColorRGBA60);

Coordinate& Coordinate61 =  Coordinate();
Coordinate61.setPoint(new float[]{0.0,0.824,0.0277,0.0,0.9149,0.0016}, 6);
LineSet59.setCoord(Coordinate61);

Shape58.setGeometry(&LineSet59);

HAnimSegment51.addChild(&Shape58);

Shape& Shape62 =  Shape();
LineSet& LineSet63 =  LineSet();
LineSet63.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA64 =  ColorRGBA();
ColorRGBA64.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet63.addChild(&ColorRGBA64);

Coordinate& Coordinate65 =  Coordinate();
Coordinate65.setPoint(new float[]{0.0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
LineSet63.setCoord(Coordinate65);

Shape62.setGeometry(&LineSet63);

HAnimSegment51.addChild(&Shape62);

HAnimJoint50.addChildren(&HAnimSegment51);

HAnimJoint& HAnimJoint66 =  HAnimJoint();
HAnimJoint66.setDEF(CString("hanim_sacroiliac"));
HAnimJoint66.X3DNode::setName(CString("sacroiliac"));
HAnimJoint66.setCenter(new float[]{0.0,0.9149,0.0016});
HAnimSegment& HAnimSegment67 =  HAnimSegment();
HAnimSegment67.setDEF(CString("hanim_pelvis"));
HAnimSegment67.X3DNode::setName(CString("pelvis"));
TouchSensor& TouchSensor68 =  TouchSensor();
TouchSensor68.setDescription(CString("HAnimJoint sacroiliac, HAnimSegment pelvis"));
HAnimSegment67.addChild(&TouchSensor68);

Transform& Transform69 =  Transform();
Transform69.setTranslation(new float[]{0.0,0.9149,0.0016});
Shape& Shape70 =  Shape();
Shape70.setUSE(CString("HAnimJointShape"));
Transform69.addChild(&Shape70);

HAnimSegment67.addChild(&Transform69);

Shape& Shape71 =  Shape();
LineSet& LineSet72 =  LineSet();
LineSet72.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA73 =  ColorRGBA();
ColorRGBA73.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet72.addChild(&ColorRGBA73);

Coordinate& Coordinate74 =  Coordinate();
Coordinate74.setPoint(new float[]{0.0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
LineSet72.setCoord(Coordinate74);

Shape71.setGeometry(&LineSet72);

HAnimSegment67.addChild(&Shape71);

Shape& Shape75 =  Shape();
LineSet& LineSet76 =  LineSet();
LineSet76.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA77 =  ColorRGBA();
ColorRGBA77.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet76.addChild(&ColorRGBA77);

Coordinate& Coordinate78 =  Coordinate();
Coordinate78.setPoint(new float[]{0.0,0.9149,0.0016,-0.0961,0.9124,-0.0001}, 6);
LineSet76.setCoord(Coordinate78);

Shape75.setGeometry(&LineSet76);

HAnimSegment67.addChild(&Shape75);

Shape& Shape79 =  Shape();
LineSet& LineSet80 =  LineSet();
LineSet80.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA81 =  ColorRGBA();
ColorRGBA81.setDEF(CString("HAnimSiteLineColorRGBA"));
ColorRGBA81.setColor(new float[]{1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.1}, 8);
LineSet80.addChild(&ColorRGBA81);

Coordinate& Coordinate82 =  Coordinate();
Coordinate82.setPoint(new float[]{0.0,0.9149,0.0016,-0.1525,1.0628,0.0035}, 6);
LineSet80.setCoord(Coordinate82);

Shape79.setGeometry(&LineSet80);

HAnimSegment67.addChild(&Shape79);

Shape& Shape83 =  Shape();
LineSet& LineSet84 =  LineSet();
LineSet84.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA85 =  ColorRGBA();
ColorRGBA85.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet84.addChild(&ColorRGBA85);

Coordinate& Coordinate86 =  Coordinate();
Coordinate86.setPoint(new float[]{0.0,0.9149,0.0016,-0.1689,0.8419,0.0352}, 6);
LineSet84.setCoord(Coordinate86);

Shape83.setGeometry(&LineSet84);

HAnimSegment67.addChild(&Shape83);

Shape& Shape87 =  Shape();
LineSet& LineSet88 =  LineSet();
LineSet88.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA89 =  ColorRGBA();
ColorRGBA89.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet88.addChild(&ColorRGBA89);

Coordinate& Coordinate90 =  Coordinate();
Coordinate90.setPoint(new float[]{0.0,0.9149,0.0016,0.1612,1.0537,0.0008}, 6);
LineSet88.setCoord(Coordinate90);

Shape87.setGeometry(&LineSet88);

HAnimSegment67.addChild(&Shape87);

Shape& Shape91 =  Shape();
LineSet& LineSet92 =  LineSet();
LineSet92.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA93 =  ColorRGBA();
ColorRGBA93.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet92.addChild(&ColorRGBA93);

Coordinate& Coordinate94 =  Coordinate();
Coordinate94.setPoint(new float[]{0.0,0.9149,0.0016,0.1677,0.8336,0.0303}, 6);
LineSet92.setCoord(Coordinate94);

Shape91.setGeometry(&LineSet92);

HAnimSegment67.addChild(&Shape91);

Shape& Shape95 =  Shape();
LineSet& LineSet96 =  LineSet();
LineSet96.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA97 =  ColorRGBA();
ColorRGBA97.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet96.addChild(&ColorRGBA97);

Coordinate& Coordinate98 =  Coordinate();
Coordinate98.setPoint(new float[]{0.0,0.9149,0.0016,-0.0887,1.0021,0.1112}, 6);
LineSet96.setCoord(Coordinate98);

Shape95.setGeometry(&LineSet96);

HAnimSegment67.addChild(&Shape95);

Shape& Shape99 =  Shape();
LineSet& LineSet100 =  LineSet();
LineSet100.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA101 =  ColorRGBA();
ColorRGBA101.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet100.addChild(&ColorRGBA101);

Coordinate& Coordinate102 =  Coordinate();
Coordinate102.setPoint(new float[]{0.0,0.9149,0.0016,0.0925,0.9983,0.1052}, 6);
LineSet100.setCoord(Coordinate102);

Shape99.setGeometry(&LineSet100);

HAnimSegment67.addChild(&Shape99);

Shape& Shape103 =  Shape();
LineSet& LineSet104 =  LineSet();
LineSet104.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA105 =  ColorRGBA();
ColorRGBA105.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet104.addChild(&ColorRGBA105);

Coordinate& Coordinate106 =  Coordinate();
Coordinate106.setPoint(new float[]{0.0,0.9149,0.0016,-0.0716,1.019,-0.1138}, 6);
LineSet104.setCoord(Coordinate106);

Shape103.setGeometry(&LineSet104);

HAnimSegment67.addChild(&Shape103);

Shape& Shape107 =  Shape();
LineSet& LineSet108 =  LineSet();
LineSet108.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA109 =  ColorRGBA();
ColorRGBA109.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet108.addChild(&ColorRGBA109);

Coordinate& Coordinate110 =  Coordinate();
Coordinate110.setPoint(new float[]{0.0,0.9149,0.0016,0.0774,1.019,-0.1151}, 6);
LineSet108.setCoord(Coordinate110);

Shape107.setGeometry(&LineSet108);

HAnimSegment67.addChild(&Shape107);

Shape& Shape111 =  Shape();
LineSet& LineSet112 =  LineSet();
LineSet112.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA113 =  ColorRGBA();
ColorRGBA113.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet112.addChild(&ColorRGBA113);

Coordinate& Coordinate114 =  Coordinate();
Coordinate114.setPoint(new float[]{0.0,0.9149,0.0016,0.0034,0.8266,0.0257}, 6);
LineSet112.setCoord(Coordinate114);

Shape111.setGeometry(&LineSet112);

HAnimSegment67.addChild(&Shape111);

HAnimSite& HAnimSite115 =  HAnimSite();
HAnimSite115.setDEF(CString("hanim_r_iliocristale_pt"));
HAnimSite115.X3DNode::setName(CString("r_iliocristale_pt"));
HAnimSite115.setTranslation(new float[]{-0.1525,1.0628,0.0035});
TouchSensor& TouchSensor116 =  TouchSensor();
TouchSensor116.setDescription(CString("HAnimSite r_iliocristale_pt"));
HAnimSite115.addChild(&TouchSensor116);

Shape& Shape117 =  Shape();
Shape117.setDEF(CString("HAnimSiteShape"));
Appearance& Appearance118 =  Appearance();
Material& Material119 =  Material();
Material119.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance118.addChild(&Material119);

Shape117.addChild(&Appearance118);

IndexedFaceSet& IndexedFaceSet120 =  IndexedFaceSet();
IndexedFaceSet120.setDEF(CString("DiamondIFS"));
IndexedFaceSet120.setSolid(false);
IndexedFaceSet120.setCreaseAngle(0.5);
IndexedFaceSet120.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate121 =  Coordinate();
Coordinate121.setPoint(new float[]{0.0,0.008,0.0,-0.008,0.0,0.0,0.0,0.0,0.008,0.008,0.0,0.0,0.0,0.0,-0.008,0.0,-0.008,0.0}, 18);
IndexedFaceSet120.setCoord(&Coordinate121);

Shape117.setGeometry(&IndexedFaceSet120);

HAnimSite115.addChild(&Shape117);

HAnimSegment67.addChild(&HAnimSite115);

HAnimSite& HAnimSite122 =  HAnimSite();
HAnimSite122.setDEF(CString("hanim_r_trochanterion_pt"));
HAnimSite122.X3DNode::setName(CString("r_trochanterion_pt"));
HAnimSite122.setTranslation(new float[]{-0.1689,0.8419,0.0352});
TouchSensor& TouchSensor123 =  TouchSensor();
TouchSensor123.setDescription(CString("HAnimSite r_trochanterion_pt"));
HAnimSite122.addChild(&TouchSensor123);

Shape& Shape124 =  Shape();
Shape124.setUSE(CString("HAnimSiteShape"));
HAnimSite122.addChild(&Shape124);

HAnimSegment67.addChild(&HAnimSite122);

HAnimSite& HAnimSite125 =  HAnimSite();
HAnimSite125.setDEF(CString("hanim_l_iliocristale_pt"));
HAnimSite125.X3DNode::setName(CString("l_iliocristale_pt"));
HAnimSite125.setTranslation(new float[]{0.1612,1.0537,0.0008});
TouchSensor& TouchSensor126 =  TouchSensor();
TouchSensor126.setDescription(CString("HAnimSite l_iliocristale_pt"));
HAnimSite125.addChild(&TouchSensor126);

Shape& Shape127 =  Shape();
Shape127.setUSE(CString("HAnimSiteShape"));
HAnimSite125.addChild(&Shape127);

HAnimSegment67.addChild(&HAnimSite125);

HAnimSite& HAnimSite128 =  HAnimSite();
HAnimSite128.setDEF(CString("hanim_l_trochanterion_pt"));
HAnimSite128.X3DNode::setName(CString("l_trochanterion_pt"));
HAnimSite128.setTranslation(new float[]{0.1677,0.8336,0.0303});
TouchSensor& TouchSensor129 =  TouchSensor();
TouchSensor129.setDescription(CString("HAnimSite l_trochanterion_pt"));
HAnimSite128.addChild(&TouchSensor129);

Shape& Shape130 =  Shape();
Shape130.setUSE(CString("HAnimSiteShape"));
HAnimSite128.addChild(&Shape130);

HAnimSegment67.addChild(&HAnimSite128);

HAnimSite& HAnimSite131 =  HAnimSite();
HAnimSite131.setDEF(CString("hanim_r_asis_pt"));
HAnimSite131.X3DNode::setName(CString("r_asis_pt"));
HAnimSite131.setTranslation(new float[]{-0.0887,1.0021,0.1112});
TouchSensor& TouchSensor132 =  TouchSensor();
TouchSensor132.setDescription(CString("HAnimSite r_asis_pt"));
HAnimSite131.addChild(&TouchSensor132);

Shape& Shape133 =  Shape();
Shape133.setUSE(CString("HAnimSiteShape"));
HAnimSite131.addChild(&Shape133);

HAnimSegment67.addChild(&HAnimSite131);

HAnimSite& HAnimSite134 =  HAnimSite();
HAnimSite134.setDEF(CString("hanim_l_asis_pt"));
HAnimSite134.X3DNode::setName(CString("l_asis_pt"));
HAnimSite134.setTranslation(new float[]{0.0925,0.9983,0.1052});
TouchSensor& TouchSensor135 =  TouchSensor();
TouchSensor135.setDescription(CString("HAnimSite l_asis_pt"));
HAnimSite134.addChild(&TouchSensor135);

Shape& Shape136 =  Shape();
Shape136.setUSE(CString("HAnimSiteShape"));
HAnimSite134.addChild(&Shape136);

HAnimSegment67.addChild(&HAnimSite134);

HAnimSite& HAnimSite137 =  HAnimSite();
HAnimSite137.setDEF(CString("hanim_r_psis_pt"));
HAnimSite137.X3DNode::setName(CString("r_psis_pt"));
HAnimSite137.setTranslation(new float[]{-0.0716,1.019,-0.1138});
TouchSensor& TouchSensor138 =  TouchSensor();
TouchSensor138.setDescription(CString("HAnimSite r_psis_pt"));
HAnimSite137.addChild(&TouchSensor138);

Shape& Shape139 =  Shape();
Shape139.setUSE(CString("HAnimSiteShape"));
HAnimSite137.addChild(&Shape139);

HAnimSegment67.addChild(&HAnimSite137);

HAnimSite& HAnimSite140 =  HAnimSite();
HAnimSite140.setDEF(CString("hanim_l_psis_pt"));
HAnimSite140.X3DNode::setName(CString("l_psis_pt"));
HAnimSite140.setTranslation(new float[]{0.0774,1.019,-0.1151});
TouchSensor& TouchSensor141 =  TouchSensor();
TouchSensor141.setDescription(CString("HAnimSite l_psis_pt"));
HAnimSite140.addChild(&TouchSensor141);

Shape& Shape142 =  Shape();
Shape142.setUSE(CString("HAnimSiteShape"));
HAnimSite140.addChild(&Shape142);

HAnimSegment67.addChild(&HAnimSite140);

HAnimSite& HAnimSite143 =  HAnimSite();
HAnimSite143.setDEF(CString("hanim_crotch_pt"));
HAnimSite143.X3DNode::setName(CString("crotch_pt"));
HAnimSite143.setTranslation(new float[]{0.0034,0.8266,0.0257});
TouchSensor& TouchSensor144 =  TouchSensor();
TouchSensor144.setDescription(CString("HAnimSite crotch_pt"));
HAnimSite143.addChild(&TouchSensor144);

Shape& Shape145 =  Shape();
Shape145.setUSE(CString("HAnimSiteShape"));
HAnimSite143.addChild(&Shape145);

HAnimSegment67.addChild(&HAnimSite143);

HAnimJoint66.addChildren(&HAnimSegment67);

HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.setDEF(CString("hanim_l_hip"));
HAnimJoint146.X3DNode::setName(CString("l_hip"));
HAnimJoint146.setCenter(new float[]{0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment147 =  HAnimSegment();
HAnimSegment147.setDEF(CString("hanim_l_thigh"));
HAnimSegment147.X3DNode::setName(CString("l_thigh"));
TouchSensor& TouchSensor148 =  TouchSensor();
TouchSensor148.setDescription(CString("HAnimJoint l_hip, HAnimSegment l_thigh"));
HAnimSegment147.addChild(&TouchSensor148);

Transform& Transform149 =  Transform();
Transform149.setTranslation(new float[]{0.0961,0.9124,-0.0001});
Shape& Shape150 =  Shape();
Shape150.setUSE(CString("HAnimJointShape"));
Transform149.addChild(&Shape150);

HAnimSegment147.addChild(&Transform149);

Shape& Shape151 =  Shape();
LineSet& LineSet152 =  LineSet();
LineSet152.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA153 =  ColorRGBA();
ColorRGBA153.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet152.addChild(&ColorRGBA153);

Coordinate& Coordinate154 =  Coordinate();
Coordinate154.setPoint(new float[]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
LineSet152.setCoord(Coordinate154);

Shape151.setGeometry(&LineSet152);

HAnimSegment147.addChild(&Shape151);

Shape& Shape155 =  Shape();
LineSet& LineSet156 =  LineSet();
LineSet156.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA157 =  ColorRGBA();
ColorRGBA157.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet156.addChild(&ColorRGBA157);

Coordinate& Coordinate158 =  Coordinate();
Coordinate158.setPoint(new float[]{0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309}, 6);
LineSet156.setCoord(Coordinate158);

Shape155.setGeometry(&LineSet156);

HAnimSegment147.addChild(&Shape155);

Shape& Shape159 =  Shape();
LineSet& LineSet160 =  LineSet();
LineSet160.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA161 =  ColorRGBA();
ColorRGBA161.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet160.addChild(&ColorRGBA161);

Coordinate& Coordinate162 =  Coordinate();
Coordinate162.setPoint(new float[]{0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297}, 6);
LineSet160.setCoord(Coordinate162);

Shape159.setGeometry(&LineSet160);

HAnimSegment147.addChild(&Shape159);

Shape& Shape163 =  Shape();
LineSet& LineSet164 =  LineSet();
LineSet164.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA165 =  ColorRGBA();
ColorRGBA165.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet164.addChild(&ColorRGBA165);

Coordinate& Coordinate166 =  Coordinate();
Coordinate166.setPoint(new float[]{0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303}, 6);
LineSet164.setCoord(Coordinate166);

Shape163.setGeometry(&LineSet164);

HAnimSegment147.addChild(&Shape163);

HAnimSite& HAnimSite167 =  HAnimSite();
HAnimSite167.setDEF(CString("hanim_l_knee_crease_pt"));
HAnimSite167.X3DNode::setName(CString("l_knee_crease_pt"));
HAnimSite167.setTranslation(new float[]{0.0993,0.4881,-0.0309});
TouchSensor& TouchSensor168 =  TouchSensor();
TouchSensor168.setDescription(CString("HAnimSite l_knee_crease_pt"));
HAnimSite167.addChild(&TouchSensor168);

Shape& Shape169 =  Shape();
Shape169.setUSE(CString("HAnimSiteShape"));
HAnimSite167.addChild(&Shape169);

HAnimSegment147.addChild(&HAnimSite167);

HAnimSite& HAnimSite170 =  HAnimSite();
HAnimSite170.setDEF(CString("hanim_l_femoral_lateral_epicondyle_pt"));
HAnimSite170.X3DNode::setName(CString("l_femoral_lateral_epicondyle_pt"));
HAnimSite170.setTranslation(new float[]{0.1598,0.4967,0.0297});
TouchSensor& TouchSensor171 =  TouchSensor();
TouchSensor171.setDescription(CString("HAnimSite l_femoral_lateral_epicn_pt"));
HAnimSite170.addChild(&TouchSensor171);

Shape& Shape172 =  Shape();
Shape172.setUSE(CString("HAnimSiteShape"));
HAnimSite170.addChild(&Shape172);

HAnimSegment147.addChild(&HAnimSite170);

HAnimSite& HAnimSite173 =  HAnimSite();
HAnimSite173.setDEF(CString("hanim_l_femoral_medial_epicondyle_pt"));
HAnimSite173.X3DNode::setName(CString("l_femoral_medial_epicondyle_pt"));
HAnimSite173.setTranslation(new float[]{0.0398,0.4946,0.0303});
TouchSensor& TouchSensor174 =  TouchSensor();
TouchSensor174.setDescription(CString("HAnimSite l_femoral_medial_epicn_pt"));
HAnimSite173.addChild(&TouchSensor174);

Shape& Shape175 =  Shape();
Shape175.setUSE(CString("HAnimSiteShape"));
HAnimSite173.addChild(&Shape175);

HAnimSegment147.addChild(&HAnimSite173);

HAnimJoint146.addChildren(&HAnimSegment147);

HAnimJoint& HAnimJoint176 =  HAnimJoint();
HAnimJoint176.setDEF(CString("hanim_l_knee"));
HAnimJoint176.X3DNode::setName(CString("l_knee"));
HAnimJoint176.setCenter(new float[]{0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment177 =  HAnimSegment();
HAnimSegment177.setDEF(CString("hanim_l_calf"));
HAnimSegment177.X3DNode::setName(CString("l_calf"));
TouchSensor& TouchSensor178 =  TouchSensor();
TouchSensor178.setDescription(CString("HAnimJoint l_knee, HAnimSegment l_calf"));
HAnimSegment177.addChild(&TouchSensor178);

Transform& Transform179 =  Transform();
Transform179.setTranslation(new float[]{0.104,0.4867,0.0308});
Shape& Shape180 =  Shape();
Shape180.setUSE(CString("HAnimJointShape"));
Transform179.addChild(&Shape180);

HAnimSegment177.addChild(&Transform179);

Shape& Shape181 =  Shape();
LineSet& LineSet182 =  LineSet();
LineSet182.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA183 =  ColorRGBA();
ColorRGBA183.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet182.addChild(&ColorRGBA183);

Coordinate& Coordinate184 =  Coordinate();
Coordinate184.setPoint(new float[]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
LineSet182.setCoord(Coordinate184);

Shape181.setGeometry(&LineSet182);

HAnimSegment177.addChild(&Shape181);

HAnimJoint176.addChildren(&HAnimSegment177);

HAnimJoint& HAnimJoint185 =  HAnimJoint();
HAnimJoint185.setDEF(CString("hanim_l_talocrural"));
HAnimJoint185.X3DNode::setName(CString("l_talocrural"));
HAnimJoint185.setCenter(new float[]{0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment186 =  HAnimSegment();
HAnimSegment186.setDEF(CString("hanim_l_talus"));
HAnimSegment186.X3DNode::setName(CString("l_talus"));
TouchSensor& TouchSensor187 =  TouchSensor();
TouchSensor187.setDescription(CString("HAnimJoint l_talocrural, HAnimSegment l_talus"));
HAnimSegment186.addChild(&TouchSensor187);

Transform& Transform188 =  Transform();
Transform188.setTranslation(new float[]{0.1101,0.0656,-0.0736});
Shape& Shape189 =  Shape();
Shape189.setUSE(CString("HAnimJointShape"));
Transform188.addChild(&Shape189);

HAnimSegment186.addChild(&Transform188);

Shape& Shape190 =  Shape();
LineSet& LineSet191 =  LineSet();
LineSet191.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA192 =  ColorRGBA();
ColorRGBA192.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet191.addChild(&ColorRGBA192);

Coordinate& Coordinate193 =  Coordinate();
Coordinate193.setPoint(new float[]{0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368}, 6);
LineSet191.setCoord(Coordinate193);

Shape190.setGeometry(&LineSet191);

HAnimSegment186.addChild(&Shape190);

Shape& Shape194 =  Shape();
LineSet& LineSet195 =  LineSet();
LineSet195.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA196 =  ColorRGBA();
ColorRGBA196.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet195.addChild(&ColorRGBA196);

Coordinate& Coordinate197 =  Coordinate();
Coordinate197.setPoint(new float[]{0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032}, 6);
LineSet195.setCoord(Coordinate197);

Shape194.setGeometry(&LineSet195);

HAnimSegment186.addChild(&Shape194);

Shape& Shape198 =  Shape();
LineSet& LineSet199 =  LineSet();
LineSet199.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA200 =  ColorRGBA();
ColorRGBA200.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet199.addChild(&ColorRGBA200);

Coordinate& Coordinate201 =  Coordinate();
Coordinate201.setPoint(new float[]{0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881}, 6);
LineSet199.setCoord(Coordinate201);

Shape198.setGeometry(&LineSet199);

HAnimSegment186.addChild(&Shape198);

Shape& Shape202 =  Shape();
LineSet& LineSet203 =  LineSet();
LineSet203.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA204 =  ColorRGBA();
ColorRGBA204.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet203.addChild(&ColorRGBA204);

Coordinate& Coordinate205 =  Coordinate();
Coordinate205.setPoint(new float[]{0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943}, 6);
LineSet203.setCoord(Coordinate205);

Shape202.setGeometry(&LineSet203);

HAnimSegment186.addChild(&Shape202);

Shape& Shape206 =  Shape();
LineSet& LineSet207 =  LineSet();
LineSet207.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA208 =  ColorRGBA();
ColorRGBA208.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet207.addChild(&ColorRGBA208);

Coordinate& Coordinate209 =  Coordinate();
Coordinate209.setPoint(new float[]{0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171}, 6);
LineSet207.setCoord(Coordinate209);

Shape206.setGeometry(&LineSet207);

HAnimSegment186.addChild(&Shape206);

HAnimSite& HAnimSite210 =  HAnimSite();
HAnimSite210.setDEF(CString("hanim_l_lateral_malleolus_pt"));
HAnimSite210.X3DNode::setName(CString("l_lateral_malleolus_pt"));
HAnimSite210.setTranslation(new float[]{0.1308,0.0597,-0.1032});
TouchSensor& TouchSensor211 =  TouchSensor();
TouchSensor211.setDescription(CString("HAnimSite l_lateral_malleolus_pt"));
HAnimSite210.addChild(&TouchSensor211);

Shape& Shape212 =  Shape();
Shape212.setUSE(CString("HAnimSiteShape"));
HAnimSite210.addChild(&Shape212);

HAnimSegment186.addChild(&HAnimSite210);

HAnimSite& HAnimSite213 =  HAnimSite();
HAnimSite213.setDEF(CString("hanim_l_medial_malleolus_pt"));
HAnimSite213.X3DNode::setName(CString("l_medial_malleolus_pt"));
HAnimSite213.setTranslation(new float[]{0.089,0.0716,-0.0881});
TouchSensor& TouchSensor214 =  TouchSensor();
TouchSensor214.setDescription(CString("HAnimSite l_medial_malleolus_pt"));
HAnimSite213.addChild(&TouchSensor214);

Shape& Shape215 =  Shape();
Shape215.setUSE(CString("HAnimSiteShape"));
HAnimSite213.addChild(&Shape215);

HAnimSegment186.addChild(&HAnimSite213);

HAnimSite& HAnimSite216 =  HAnimSite();
HAnimSite216.setDEF(CString("hanim_l_sphyrion_pt"));
HAnimSite216.X3DNode::setName(CString("l_sphyrion_pt"));
HAnimSite216.setTranslation(new float[]{0.089,0.0575,-0.0943});
TouchSensor& TouchSensor217 =  TouchSensor();
TouchSensor217.setDescription(CString("HAnimSite l_sphyrion_pt"));
HAnimSite216.addChild(&TouchSensor217);

Shape& Shape218 =  Shape();
Shape218.setUSE(CString("HAnimSiteShape"));
HAnimSite216.addChild(&Shape218);

HAnimSegment186.addChild(&HAnimSite216);

HAnimSite& HAnimSite219 =  HAnimSite();
HAnimSite219.setDEF(CString("hanim_l_calcaneus_posterior_pt"));
HAnimSite219.X3DNode::setName(CString("l_calcaneus_posterior_pt"));
HAnimSite219.setTranslation(new float[]{0.0974,0.0259,-0.1171});
TouchSensor& TouchSensor220 =  TouchSensor();
TouchSensor220.setDescription(CString("HAnimSite l_calcaneous_post_pt"));
HAnimSite219.addChild(&TouchSensor220);

Shape& Shape221 =  Shape();
Shape221.setUSE(CString("HAnimSiteShape"));
HAnimSite219.addChild(&Shape221);

HAnimSegment186.addChild(&HAnimSite219);

HAnimJoint185.addChildren(&HAnimSegment186);

HAnimJoint& HAnimJoint222 =  HAnimJoint();
HAnimJoint222.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint222.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint222.setCenter(new float[]{0.1086,0.0001,-0.0368});
HAnimSegment& HAnimSegment223 =  HAnimSegment();
HAnimSegment223.setDEF(CString("hanim_l_metatarsal_2"));
HAnimSegment223.X3DNode::setName(CString("l_metatarsal_2"));
TouchSensor& TouchSensor224 =  TouchSensor();
TouchSensor224.setDescription(CString("HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2"));
HAnimSegment223.addChild(&TouchSensor224);

Transform& Transform225 =  Transform();
Transform225.setTranslation(new float[]{0.1086,0.0001,-0.0368});
Shape& Shape226 =  Shape();
Shape226.setUSE(CString("HAnimJointShape"));
Transform225.addChild(&Shape226);

HAnimSegment223.addChild(&Transform225);

Shape& Shape227 =  Shape();
LineSet& LineSet228 =  LineSet();
LineSet228.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA229 =  ColorRGBA();
ColorRGBA229.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet228.addChild(&ColorRGBA229);

Coordinate& Coordinate230 =  Coordinate();
Coordinate230.setPoint(new float[]{0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368}, 6);
LineSet228.setCoord(Coordinate230);

Shape227.setGeometry(&LineSet228);

HAnimSegment223.addChild(&Shape227);

HAnimJoint222.addChildren(&HAnimSegment223);

HAnimJoint& HAnimJoint231 =  HAnimJoint();
HAnimJoint231.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint231.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint231.setCenter(new float[]{0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment232 =  HAnimSegment();
HAnimSegment232.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimSegment232.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
TouchSensor& TouchSensor233 =  TouchSensor();
TouchSensor233.setDescription(CString("HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2"));
HAnimSegment232.addChild(&TouchSensor233);

Transform& Transform234 =  Transform();
Transform234.setTranslation(new float[]{0.1086,0.0001,0.0368});
Shape& Shape235 =  Shape();
Shape235.setUSE(CString("HAnimJointShape"));
Transform234.addChild(&Shape235);

HAnimSegment232.addChild(&Transform234);

Shape& Shape236 =  Shape();
LineSet& LineSet237 =  LineSet();
LineSet237.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA238 =  ColorRGBA();
ColorRGBA238.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet237.addChild(&ColorRGBA238);

Coordinate& Coordinate239 =  Coordinate();
Coordinate239.setPoint(new float[]{0.1086,0.0001,0.0368,0.1086,0.0,0.0762}, 6);
LineSet237.setCoord(Coordinate239);

Shape236.setGeometry(&LineSet237);

HAnimSegment232.addChild(&Shape236);

Shape& Shape240 =  Shape();
LineSet& LineSet241 =  LineSet();
LineSet241.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA242 =  ColorRGBA();
ColorRGBA242.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet241.addChild(&ColorRGBA242);

Coordinate& Coordinate243 =  Coordinate();
Coordinate243.setPoint(new float[]{0.1086,0.0001,0.0368,0.0816,0.0232,0.0106}, 6);
LineSet241.setCoord(Coordinate243);

Shape240.setGeometry(&LineSet241);

HAnimSegment232.addChild(&Shape240);

HAnimSite& HAnimSite244 =  HAnimSite();
HAnimSite244.setDEF(CString("hanim_l_metatarsal_phalanx_1_pt"));
HAnimSite244.X3DNode::setName(CString("l_metatarsal_phalanx_1_pt"));
HAnimSite244.setTranslation(new float[]{0.0816,0.0232,0.0106});
TouchSensor& TouchSensor245 =  TouchSensor();
TouchSensor245.setDescription(CString("HAnimSite l_metatarsal_pha1_pt"));
HAnimSite244.addChild(&TouchSensor245);

Shape& Shape246 =  Shape();
Shape246.setUSE(CString("HAnimSiteShape"));
HAnimSite244.addChild(&Shape246);

HAnimSegment232.addChild(&HAnimSite244);

HAnimJoint231.addChildren(&HAnimSegment232);

HAnimJoint& HAnimJoint247 =  HAnimJoint();
HAnimJoint247.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint247.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint247.setCenter(new float[]{0.1086,0.0,0.0762});
HAnimSegment& HAnimSegment248 =  HAnimSegment();
HAnimSegment248.setDEF(CString("hanim_l_tarsal_distal_phalanx_2"));
HAnimSegment248.X3DNode::setName(CString("l_tarsal_distal_phalanx_2"));
TouchSensor& TouchSensor249 =  TouchSensor();
TouchSensor249.setDescription(CString("HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2"));
HAnimSegment248.addChild(&TouchSensor249);

Transform& Transform250 =  Transform();
Transform250.setTranslation(new float[]{0.1086,0.0,0.0762});
Shape& Shape251 =  Shape();
Shape251.setUSE(CString("HAnimJointShape"));
Transform250.addChild(&Shape251);

HAnimSegment248.addChild(&Transform250);

Shape& Shape252 =  Shape();
LineSet& LineSet253 =  LineSet();
LineSet253.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA254 =  ColorRGBA();
ColorRGBA254.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet253.addChild(&ColorRGBA254);

Coordinate& Coordinate255 =  Coordinate();
Coordinate255.setPoint(new float[]{0.1086,0.0,0.0762,0.1354,0.0016,0.1476}, 6);
LineSet253.setCoord(Coordinate255);

Shape252.setGeometry(&LineSet253);

HAnimSegment248.addChild(&Shape252);

Shape& Shape256 =  Shape();
LineSet& LineSet257 =  LineSet();
LineSet257.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA258 =  ColorRGBA();
ColorRGBA258.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet257.addChild(&ColorRGBA258);

Coordinate& Coordinate259 =  Coordinate();
Coordinate259.setPoint(new float[]{0.1086,0.0,0.0762,0.1825,0.007,0.0928}, 6);
LineSet257.setCoord(Coordinate259);

Shape256.setGeometry(&LineSet257);

HAnimSegment248.addChild(&Shape256);

Shape& Shape260 =  Shape();
LineSet& LineSet261 =  LineSet();
LineSet261.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA262 =  ColorRGBA();
ColorRGBA262.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet261.addChild(&ColorRGBA262);

Coordinate& Coordinate263 =  Coordinate();
Coordinate263.setPoint(new float[]{0.1086,0.0,0.0762,0.1195,0.0079,0.1433}, 6);
LineSet261.setCoord(Coordinate263);

Shape260.setGeometry(&LineSet261);

HAnimSegment248.addChild(&Shape260);

HAnimSite& HAnimSite264 =  HAnimSite();
HAnimSite264.setDEF(CString("hanim_l_forefoot_tip_pt"));
HAnimSite264.X3DNode::setName(CString("l_forefoot_tip_pt"));
HAnimSite264.setTranslation(new float[]{0.1354,0.0016,0.1476});
TouchSensor& TouchSensor265 =  TouchSensor();
TouchSensor265.setDescription(CString("HAnimSite l_forefoot_tip"));
HAnimSite264.addChild(&TouchSensor265);

Shape& Shape266 =  Shape();
Shape266.setUSE(CString("HAnimSiteShape"));
HAnimSite264.addChild(&Shape266);

HAnimSegment248.addChild(&HAnimSite264);

HAnimSite& HAnimSite267 =  HAnimSite();
HAnimSite267.setDEF(CString("hanim_l_metatarsal_phalanx_5_pt"));
HAnimSite267.X3DNode::setName(CString("l_metatarsal_phalanx_5_pt"));
HAnimSite267.setTranslation(new float[]{0.1825,0.007,0.0928});
TouchSensor& TouchSensor268 =  TouchSensor();
TouchSensor268.setDescription(CString("HAnimSite l_metatarsal_pha5_pt"));
HAnimSite267.addChild(&TouchSensor268);

Shape& Shape269 =  Shape();
Shape269.setUSE(CString("HAnimSiteShape"));
HAnimSite267.addChild(&Shape269);

HAnimSegment248.addChild(&HAnimSite267);

HAnimSite& HAnimSite270 =  HAnimSite();
HAnimSite270.setDEF(CString("hanim_l_tarsal_distal_phalanx_2_pt"));
HAnimSite270.X3DNode::setName(CString("l_tarsal_distal_phalanx_2_pt"));
HAnimSite270.setTranslation(new float[]{0.1195,0.0079,0.1433});
TouchSensor& TouchSensor271 =  TouchSensor();
TouchSensor271.setDescription(CString("HAnimSite l_digit2_pt"));
HAnimSite270.addChild(&TouchSensor271);

Shape& Shape272 =  Shape();
Shape272.setUSE(CString("HAnimSiteShape"));
HAnimSite270.addChild(&Shape272);

HAnimSegment248.addChild(&HAnimSite270);

HAnimJoint247.addChildren(&HAnimSegment248);

HAnimJoint231.addChildren(&HAnimJoint247);

HAnimJoint222.addChildren(&HAnimJoint231);

HAnimJoint185.addChildren(&HAnimJoint222);

HAnimJoint176.addChildren(&HAnimJoint185);

HAnimJoint146.addChildren(&HAnimJoint176);

HAnimJoint66.addChildren(&HAnimJoint146);

HAnimJoint& HAnimJoint273 =  HAnimJoint();
HAnimJoint273.setDEF(CString("hanim_r_hip"));
HAnimJoint273.X3DNode::setName(CString("r_hip"));
HAnimJoint273.setCenter(new float[]{-0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment274 =  HAnimSegment();
HAnimSegment274.setDEF(CString("hanim_r_thigh"));
HAnimSegment274.X3DNode::setName(CString("r_thigh"));
TouchSensor& TouchSensor275 =  TouchSensor();
TouchSensor275.setDescription(CString("HAnimJoint r_hip, HAnimSegment r_thigh"));
HAnimSegment274.addChild(&TouchSensor275);

Transform& Transform276 =  Transform();
Transform276.setTranslation(new float[]{-0.0961,0.9124,-0.0001});
Shape& Shape277 =  Shape();
Shape277.setUSE(CString("HAnimJointShape"));
Transform276.addChild(&Shape277);

HAnimSegment274.addChild(&Transform276);

Shape& Shape278 =  Shape();
LineSet& LineSet279 =  LineSet();
LineSet279.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA280 =  ColorRGBA();
ColorRGBA280.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet279.addChild(&ColorRGBA280);

Coordinate& Coordinate281 =  Coordinate();
Coordinate281.setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308}, 6);
LineSet279.setCoord(Coordinate281);

Shape278.setGeometry(&LineSet279);

HAnimSegment274.addChild(&Shape278);

Shape& Shape282 =  Shape();
LineSet& LineSet283 =  LineSet();
LineSet283.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA284 =  ColorRGBA();
ColorRGBA284.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet283.addChild(&ColorRGBA284);

Coordinate& Coordinate285 =  Coordinate();
Coordinate285.setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326}, 6);
LineSet283.setCoord(Coordinate285);

Shape282.setGeometry(&LineSet283);

HAnimSegment274.addChild(&Shape282);

Shape& Shape286 =  Shape();
LineSet& LineSet287 =  LineSet();
LineSet287.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA288 =  ColorRGBA();
ColorRGBA288.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet287.addChild(&ColorRGBA288);

Coordinate& Coordinate289 =  Coordinate();
Coordinate289.setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031}, 6);
LineSet287.setCoord(Coordinate289);

Shape286.setGeometry(&LineSet287);

HAnimSegment274.addChild(&Shape286);

Shape& Shape290 =  Shape();
LineSet& LineSet291 =  LineSet();
LineSet291.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA292 =  ColorRGBA();
ColorRGBA292.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet291.addChild(&ColorRGBA292);

Coordinate& Coordinate293 =  Coordinate();
Coordinate293.setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289}, 6);
LineSet291.setCoord(Coordinate293);

Shape290.setGeometry(&LineSet291);

HAnimSegment274.addChild(&Shape290);

HAnimSite& HAnimSite294 =  HAnimSite();
HAnimSite294.setDEF(CString("hanim_r_knee_crease_pt"));
HAnimSite294.X3DNode::setName(CString("r_knee_crease_pt"));
HAnimSite294.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
TouchSensor& TouchSensor295 =  TouchSensor();
TouchSensor295.setDescription(CString("HAnimSite r_knee_crease_pt"));
HAnimSite294.addChild(&TouchSensor295);

Shape& Shape296 =  Shape();
Shape296.setUSE(CString("HAnimSiteShape"));
HAnimSite294.addChild(&Shape296);

HAnimSegment274.addChild(&HAnimSite294);

HAnimSite& HAnimSite297 =  HAnimSite();
HAnimSite297.setDEF(CString("hanim_r_femoral_lateral_epicondyle_pt"));
HAnimSite297.X3DNode::setName(CString("r_femoral_lateral_epicondyle_pt"));
HAnimSite297.setTranslation(new float[]{-0.1421,0.4992,0.031});
TouchSensor& TouchSensor298 =  TouchSensor();
TouchSensor298.setDescription(CString("HAnimSite r_femoral_lateral_epicn_pt"));
HAnimSite297.addChild(&TouchSensor298);

Shape& Shape299 =  Shape();
Shape299.setUSE(CString("HAnimSiteShape"));
HAnimSite297.addChild(&Shape299);

HAnimSegment274.addChild(&HAnimSite297);

HAnimSite& HAnimSite300 =  HAnimSite();
HAnimSite300.setDEF(CString("hanim_r_femoral_medial_epicondyle_pt"));
HAnimSite300.X3DNode::setName(CString("r_femoral_medial_epicondyle_pt"));
HAnimSite300.setTranslation(new float[]{-0.0221,0.5014,0.0289});
TouchSensor& TouchSensor301 =  TouchSensor();
TouchSensor301.setDescription(CString("HAnimSite r_femoral_medial_epicn_pt"));
HAnimSite300.addChild(&TouchSensor301);

Shape& Shape302 =  Shape();
Shape302.setUSE(CString("HAnimSiteShape"));
HAnimSite300.addChild(&Shape302);

HAnimSegment274.addChild(&HAnimSite300);

HAnimJoint273.addChildren(&HAnimSegment274);

HAnimJoint& HAnimJoint303 =  HAnimJoint();
HAnimJoint303.setDEF(CString("hanim_r_knee"));
HAnimJoint303.X3DNode::setName(CString("r_knee"));
HAnimJoint303.setCenter(new float[]{-0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment304 =  HAnimSegment();
HAnimSegment304.setDEF(CString("hanim_r_calf"));
HAnimSegment304.X3DNode::setName(CString("r_calf"));
TouchSensor& TouchSensor305 =  TouchSensor();
TouchSensor305.setDescription(CString("HAnimJoint r_knee, HAnimSegment r_calf"));
HAnimSegment304.addChild(&TouchSensor305);

Transform& Transform306 =  Transform();
Transform306.setTranslation(new float[]{-0.104,0.4867,0.0308});
Shape& Shape307 =  Shape();
Shape307.setUSE(CString("HAnimJointShape"));
Transform306.addChild(&Shape307);

HAnimSegment304.addChild(&Transform306);

Shape& Shape308 =  Shape();
LineSet& LineSet309 =  LineSet();
LineSet309.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA310 =  ColorRGBA();
ColorRGBA310.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet309.addChild(&ColorRGBA310);

Coordinate& Coordinate311 =  Coordinate();
Coordinate311.setPoint(new float[]{-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736}, 6);
LineSet309.setCoord(Coordinate311);

Shape308.setGeometry(&LineSet309);

HAnimSegment304.addChild(&Shape308);

HAnimJoint303.addChildren(&HAnimSegment304);

HAnimJoint& HAnimJoint312 =  HAnimJoint();
HAnimJoint312.setDEF(CString("hanim_r_talocrural"));
HAnimJoint312.X3DNode::setName(CString("r_talocrural"));
HAnimJoint312.setCenter(new float[]{-0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment313 =  HAnimSegment();
HAnimSegment313.setDEF(CString("hanim_r_talus"));
HAnimSegment313.X3DNode::setName(CString("r_talus"));
TouchSensor& TouchSensor314 =  TouchSensor();
TouchSensor314.setDescription(CString("HAnimJoint r_talocrural, HAnimSegment r_talus"));
HAnimSegment313.addChild(&TouchSensor314);

Transform& Transform315 =  Transform();
Transform315.setTranslation(new float[]{-0.1101,0.0656,-0.0736});
Shape& Shape316 =  Shape();
Shape316.setUSE(CString("HAnimJointShape"));
Transform315.addChild(&Shape316);

HAnimSegment313.addChild(&Transform315);

Shape& Shape317 =  Shape();
LineSet& LineSet318 =  LineSet();
LineSet318.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA319 =  ColorRGBA();
ColorRGBA319.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet318.addChild(&ColorRGBA319);

Coordinate& Coordinate320 =  Coordinate();
Coordinate320.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368}, 6);
LineSet318.setCoord(Coordinate320);

Shape317.setGeometry(&LineSet318);

HAnimSegment313.addChild(&Shape317);

Shape& Shape321 =  Shape();
LineSet& LineSet322 =  LineSet();
LineSet322.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA323 =  ColorRGBA();
ColorRGBA323.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet322.addChild(&ColorRGBA323);

Coordinate& Coordinate324 =  Coordinate();
Coordinate324.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075}, 6);
LineSet322.setCoord(Coordinate324);

Shape321.setGeometry(&LineSet322);

HAnimSegment313.addChild(&Shape321);

Shape& Shape325 =  Shape();
LineSet& LineSet326 =  LineSet();
LineSet326.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA327 =  ColorRGBA();
ColorRGBA327.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet326.addChild(&ColorRGBA327);

Coordinate& Coordinate328 =  Coordinate();
Coordinate328.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928}, 6);
LineSet326.setCoord(Coordinate328);

Shape325.setGeometry(&LineSet326);

HAnimSegment313.addChild(&Shape325);

Shape& Shape329 =  Shape();
LineSet& LineSet330 =  LineSet();
LineSet330.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA331 =  ColorRGBA();
ColorRGBA331.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet330.addChild(&ColorRGBA331);

Coordinate& Coordinate332 =  Coordinate();
Coordinate332.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002}, 6);
LineSet330.setCoord(Coordinate332);

Shape329.setGeometry(&LineSet330);

HAnimSegment313.addChild(&Shape329);

Shape& Shape333 =  Shape();
LineSet& LineSet334 =  LineSet();
LineSet334.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA335 =  ColorRGBA();
ColorRGBA335.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet334.addChild(&ColorRGBA335);

Coordinate& Coordinate336 =  Coordinate();
Coordinate336.setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221}, 6);
LineSet334.setCoord(Coordinate336);

Shape333.setGeometry(&LineSet334);

HAnimSegment313.addChild(&Shape333);

HAnimSite& HAnimSite337 =  HAnimSite();
HAnimSite337.setDEF(CString("hanim_r_lateral_malleolus_pt"));
HAnimSite337.X3DNode::setName(CString("r_lateral_malleolus_pt"));
HAnimSite337.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
TouchSensor& TouchSensor338 =  TouchSensor();
TouchSensor338.setDescription(CString("HAnimSite r_lateral_malleolus_pt"));
HAnimSite337.addChild(&TouchSensor338);

Shape& Shape339 =  Shape();
Shape339.setUSE(CString("HAnimSiteShape"));
HAnimSite337.addChild(&Shape339);

HAnimSegment313.addChild(&HAnimSite337);

HAnimSite& HAnimSite340 =  HAnimSite();
HAnimSite340.setDEF(CString("hanim_r_medial_malleolus_pt"));
HAnimSite340.X3DNode::setName(CString("r_medial_malleolus_pt"));
HAnimSite340.setTranslation(new float[]{-0.0591,0.076,-0.0928});
TouchSensor& TouchSensor341 =  TouchSensor();
TouchSensor341.setDescription(CString("HAnimSite r_medial_malleolus_pt"));
HAnimSite340.addChild(&TouchSensor341);

Shape& Shape342 =  Shape();
Shape342.setUSE(CString("HAnimSiteShape"));
HAnimSite340.addChild(&Shape342);

HAnimSegment313.addChild(&HAnimSite340);

HAnimSite& HAnimSite343 =  HAnimSite();
HAnimSite343.setDEF(CString("hanim_r_sphyrion_pt"));
HAnimSite343.X3DNode::setName(CString("r_sphyrion_pt"));
HAnimSite343.setTranslation(new float[]{-0.0603,0.061,-0.1002});
TouchSensor& TouchSensor344 =  TouchSensor();
TouchSensor344.setDescription(CString("HAnimSite r_sphyrion_pt"));
HAnimSite343.addChild(&TouchSensor344);

Shape& Shape345 =  Shape();
Shape345.setUSE(CString("HAnimSiteShape"));
HAnimSite343.addChild(&Shape345);

HAnimSegment313.addChild(&HAnimSite343);

HAnimSite& HAnimSite346 =  HAnimSite();
HAnimSite346.setDEF(CString("hanim_r_calcaneus_posterior_pt"));
HAnimSite346.X3DNode::setName(CString("r_calcaneus_posterior_pt"));
HAnimSite346.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
TouchSensor& TouchSensor347 =  TouchSensor();
TouchSensor347.setDescription(CString("HAnimSite r_calcaneous_post_pt"));
HAnimSite346.addChild(&TouchSensor347);

Shape& Shape348 =  Shape();
Shape348.setUSE(CString("HAnimSiteShape"));
HAnimSite346.addChild(&Shape348);

HAnimSegment313.addChild(&HAnimSite346);

HAnimJoint312.addChildren(&HAnimSegment313);

HAnimJoint& HAnimJoint349 =  HAnimJoint();
HAnimJoint349.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint349.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint349.setCenter(new float[]{-0.1086,0.0001,-0.0368});
HAnimSegment& HAnimSegment350 =  HAnimSegment();
HAnimSegment350.setDEF(CString("hanim_r_metatarsal_2"));
HAnimSegment350.X3DNode::setName(CString("r_metatarsal_2"));
TouchSensor& TouchSensor351 =  TouchSensor();
TouchSensor351.setDescription(CString("HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2"));
HAnimSegment350.addChild(&TouchSensor351);

Transform& Transform352 =  Transform();
Transform352.setTranslation(new float[]{-0.1086,0.0001,-0.0368});
Shape& Shape353 =  Shape();
Shape353.setUSE(CString("HAnimJointShape"));
Transform352.addChild(&Shape353);

HAnimSegment350.addChild(&Transform352);

Shape& Shape354 =  Shape();
LineSet& LineSet355 =  LineSet();
LineSet355.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA356 =  ColorRGBA();
ColorRGBA356.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet355.addChild(&ColorRGBA356);

Coordinate& Coordinate357 =  Coordinate();
Coordinate357.setPoint(new float[]{-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368}, 6);
LineSet355.setCoord(Coordinate357);

Shape354.setGeometry(&LineSet355);

HAnimSegment350.addChild(&Shape354);

HAnimJoint349.addChildren(&HAnimSegment350);

HAnimJoint& HAnimJoint358 =  HAnimJoint();
HAnimJoint358.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint358.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint358.setCenter(new float[]{-0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment359 =  HAnimSegment();
HAnimSegment359.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimSegment359.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
TouchSensor& TouchSensor360 =  TouchSensor();
TouchSensor360.setDescription(CString("HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2"));
HAnimSegment359.addChild(&TouchSensor360);

Transform& Transform361 =  Transform();
Transform361.setTranslation(new float[]{-0.1086,0.0001,0.0368});
Shape& Shape362 =  Shape();
Shape362.setUSE(CString("HAnimJointShape"));
Transform361.addChild(&Shape362);

HAnimSegment359.addChild(&Transform361);

Shape& Shape363 =  Shape();
LineSet& LineSet364 =  LineSet();
LineSet364.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA365 =  ColorRGBA();
ColorRGBA365.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet364.addChild(&ColorRGBA365);

Coordinate& Coordinate366 =  Coordinate();
Coordinate366.setPoint(new float[]{-0.1086,0.0001,0.0368,-0.1086,0.0,0.0762}, 6);
LineSet364.setCoord(Coordinate366);

Shape363.setGeometry(&LineSet364);

HAnimSegment359.addChild(&Shape363);

Shape& Shape367 =  Shape();
LineSet& LineSet368 =  LineSet();
LineSet368.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA369 =  ColorRGBA();
ColorRGBA369.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet368.addChild(&ColorRGBA369);

Coordinate& Coordinate370 =  Coordinate();
Coordinate370.setPoint(new float[]{-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127}, 6);
LineSet368.setCoord(Coordinate370);

Shape367.setGeometry(&LineSet368);

HAnimSegment359.addChild(&Shape367);

HAnimSite& HAnimSite371 =  HAnimSite();
HAnimSite371.setDEF(CString("hanim_r_metatarsal_phalanx_1_pt"));
HAnimSite371.X3DNode::setName(CString("r_metatarsal_phalanx_1_pt"));
HAnimSite371.setTranslation(new float[]{-0.0521,0.026,0.0127});
TouchSensor& TouchSensor372 =  TouchSensor();
TouchSensor372.setDescription(CString("HAnimSite r_metatarsal_pha1_pt"));
HAnimSite371.addChild(&TouchSensor372);

Shape& Shape373 =  Shape();
Shape373.setUSE(CString("HAnimSiteShape"));
HAnimSite371.addChild(&Shape373);

HAnimSegment359.addChild(&HAnimSite371);

HAnimJoint358.addChildren(&HAnimSegment359);

HAnimJoint& HAnimJoint374 =  HAnimJoint();
HAnimJoint374.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint374.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint374.setCenter(new float[]{-0.1086,0.0,0.0762});
HAnimSegment& HAnimSegment375 =  HAnimSegment();
HAnimSegment375.setDEF(CString("hanim_r_tarsal_distal_phalanx_2"));
HAnimSegment375.X3DNode::setName(CString("r_tarsal_distal_phalanx_2"));
TouchSensor& TouchSensor376 =  TouchSensor();
TouchSensor376.setDescription(CString("HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2"));
HAnimSegment375.addChild(&TouchSensor376);

Transform& Transform377 =  Transform();
Transform377.setTranslation(new float[]{-0.1086,0.0,0.0762});
Shape& Shape378 =  Shape();
Shape378.setUSE(CString("HAnimJointShape"));
Transform377.addChild(&Shape378);

HAnimSegment375.addChild(&Transform377);

Shape& Shape379 =  Shape();
LineSet& LineSet380 =  LineSet();
LineSet380.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA381 =  ColorRGBA();
ColorRGBA381.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet380.addChild(&ColorRGBA381);

Coordinate& Coordinate382 =  Coordinate();
Coordinate382.setPoint(new float[]{-0.1086,0.0,0.0762,-0.1043,0.0227,0.145}, 6);
LineSet380.setCoord(Coordinate382);

Shape379.setGeometry(&LineSet380);

HAnimSegment375.addChild(&Shape379);

Shape& Shape383 =  Shape();
LineSet& LineSet384 =  LineSet();
LineSet384.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA385 =  ColorRGBA();
ColorRGBA385.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet384.addChild(&ColorRGBA385);

Coordinate& Coordinate386 =  Coordinate();
Coordinate386.setPoint(new float[]{-0.1086,0.0,0.0762,-0.1523,0.0166,0.0895}, 6);
LineSet384.setCoord(Coordinate386);

Shape383.setGeometry(&LineSet384);

HAnimSegment375.addChild(&Shape383);

Shape& Shape387 =  Shape();
LineSet& LineSet388 =  LineSet();
LineSet388.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA389 =  ColorRGBA();
ColorRGBA389.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet388.addChild(&ColorRGBA389);

Coordinate& Coordinate390 =  Coordinate();
Coordinate390.setPoint(new float[]{-0.1086,0.0,0.0762,-0.0883,0.0134,0.1383}, 6);
LineSet388.setCoord(Coordinate390);

Shape387.setGeometry(&LineSet388);

HAnimSegment375.addChild(&Shape387);

HAnimSite& HAnimSite391 =  HAnimSite();
HAnimSite391.setDEF(CString("hanim_r_forefoot_tip_pt"));
HAnimSite391.X3DNode::setName(CString("r_forefoot_tip_pt"));
HAnimSite391.setTranslation(new float[]{-0.1043,0.0227,0.145});
TouchSensor& TouchSensor392 =  TouchSensor();
TouchSensor392.setDescription(CString("HAnimSite r_forefoot_tip"));
HAnimSite391.addChild(&TouchSensor392);

Shape& Shape393 =  Shape();
Shape393.setUSE(CString("HAnimSiteShape"));
HAnimSite391.addChild(&Shape393);

HAnimSegment375.addChild(&HAnimSite391);

HAnimSite& HAnimSite394 =  HAnimSite();
HAnimSite394.setDEF(CString("hanim_r_metatarsal_phalanx_5_pt"));
HAnimSite394.X3DNode::setName(CString("r_metatarsal_phalanx_5_pt"));
HAnimSite394.setTranslation(new float[]{-0.1523,0.0166,0.0895});
TouchSensor& TouchSensor395 =  TouchSensor();
TouchSensor395.setDescription(CString("HAnimSite r_metatarsal_pha5_pt"));
HAnimSite394.addChild(&TouchSensor395);

Shape& Shape396 =  Shape();
Shape396.setUSE(CString("HAnimSiteShape"));
HAnimSite394.addChild(&Shape396);

HAnimSegment375.addChild(&HAnimSite394);

HAnimSite& HAnimSite397 =  HAnimSite();
HAnimSite397.setDEF(CString("hanim_r_tarsal_distal_phalanx_2_pt"));
HAnimSite397.X3DNode::setName(CString("r_tarsal_distal_phalanx_2_pt"));
HAnimSite397.setTranslation(new float[]{-0.0883,0.0134,0.1383});
TouchSensor& TouchSensor398 =  TouchSensor();
TouchSensor398.setDescription(CString("HAnimSite r_digit2_pt"));
HAnimSite397.addChild(&TouchSensor398);

Shape& Shape399 =  Shape();
Shape399.setUSE(CString("HAnimSiteShape"));
HAnimSite397.addChild(&Shape399);

HAnimSegment375.addChild(&HAnimSite397);

HAnimJoint374.addChildren(&HAnimSegment375);

HAnimJoint358.addChildren(&HAnimJoint374);

HAnimJoint349.addChildren(&HAnimJoint358);

HAnimJoint312.addChildren(&HAnimJoint349);

HAnimJoint303.addChildren(&HAnimJoint312);

HAnimJoint273.addChildren(&HAnimJoint303);

HAnimJoint66.addChildren(&HAnimJoint273);

HAnimJoint50.addChildren(&HAnimJoint66);

HAnimJoint& HAnimJoint400 =  HAnimJoint();
HAnimJoint400.setDEF(CString("hanim_vl5"));
HAnimJoint400.X3DNode::setName(CString("vl5"));
HAnimJoint400.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimSegment& HAnimSegment401 =  HAnimSegment();
HAnimSegment401.setDEF(CString("hanim_l5"));
HAnimSegment401.X3DNode::setName(CString("l5"));
TouchSensor& TouchSensor402 =  TouchSensor();
TouchSensor402.setDescription(CString("HAnimJoint vl5, HAnimSegment l5"));
HAnimSegment401.addChild(&TouchSensor402);

Transform& Transform403 =  Transform();
Transform403.setTranslation(new float[]{0.0028,1.0568,-0.0776});
Shape& Shape404 =  Shape();
Shape404.setUSE(CString("HAnimJointShape"));
Transform403.addChild(&Shape404);

HAnimSegment401.addChild(&Transform403);

Shape& Shape405 =  Shape();
LineSet& LineSet406 =  LineSet();
LineSet406.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA407 =  ColorRGBA();
ColorRGBA407.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet406.addChild(&ColorRGBA407);

Coordinate& Coordinate408 =  Coordinate();
Coordinate408.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
LineSet406.setCoord(Coordinate408);

Shape405.setGeometry(&LineSet406);

HAnimSegment401.addChild(&Shape405);

Shape& Shape409 =  Shape();
LineSet& LineSet410 =  LineSet();
LineSet410.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA411 =  ColorRGBA();
ColorRGBA411.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet410.addChild(&ColorRGBA411);

Coordinate& Coordinate412 =  Coordinate();
Coordinate412.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0,1.0915,-0.1091}, 6);
LineSet410.setCoord(Coordinate412);

Shape409.setGeometry(&LineSet410);

HAnimSegment401.addChild(&Shape409);

Shape& Shape413 =  Shape();
LineSet& LineSet414 =  LineSet();
LineSet414.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA415 =  ColorRGBA();
ColorRGBA415.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet414.addChild(&ColorRGBA415);

Coordinate& Coordinate416 =  Coordinate();
Coordinate416.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017}, 6);
LineSet414.setCoord(Coordinate416);

Shape413.setGeometry(&LineSet414);

HAnimSegment401.addChild(&Shape413);

HAnimSite& HAnimSite417 =  HAnimSite();
HAnimSite417.setDEF(CString("hanim_waist_preferred_posterior_pt"));
HAnimSite417.X3DNode::setName(CString("waist_preferred_posterior_pt"));
HAnimSite417.setTranslation(new float[]{0.0,1.0915,-0.1091});
TouchSensor& TouchSensor418 =  TouchSensor();
TouchSensor418.setDescription(CString("HAnimSite waist_preferred_post_pt"));
HAnimSite417.addChild(&TouchSensor418);

Shape& Shape419 =  Shape();
Shape419.setUSE(CString("HAnimSiteShape"));
HAnimSite417.addChild(&Shape419);

HAnimSegment401.addChild(&HAnimSite417);

HAnimSite& HAnimSite420 =  HAnimSite();
HAnimSite420.setDEF(CString("hanim_navel_pt"));
HAnimSite420.X3DNode::setName(CString("navel_pt"));
HAnimSite420.setTranslation(new float[]{0.0069,1.0966,0.1017});
TouchSensor& TouchSensor421 =  TouchSensor();
TouchSensor421.setDescription(CString("HAnimSite navel_pt"));
HAnimSite420.addChild(&TouchSensor421);

Shape& Shape422 =  Shape();
Shape422.setUSE(CString("HAnimSiteShape"));
HAnimSite420.addChild(&Shape422);

HAnimSegment401.addChild(&HAnimSite420);

HAnimJoint400.addChildren(&HAnimSegment401);

HAnimJoint& HAnimJoint423 =  HAnimJoint();
HAnimJoint423.setDEF(CString("hanim_vl4"));
HAnimJoint423.X3DNode::setName(CString("vl4"));
HAnimJoint423.setCenter(new float[]{0.0035,1.0925,-0.0787});
HAnimSegment& HAnimSegment424 =  HAnimSegment();
HAnimSegment424.setDEF(CString("hanim_l4"));
HAnimSegment424.X3DNode::setName(CString("l4"));
TouchSensor& TouchSensor425 =  TouchSensor();
TouchSensor425.setDescription(CString("HAnimJoint vl4, HAnimSegment l4"));
HAnimSegment424.addChild(&TouchSensor425);

Transform& Transform426 =  Transform();
Transform426.setTranslation(new float[]{0.0035,1.0925,-0.0787});
Shape& Shape427 =  Shape();
Shape427.setUSE(CString("HAnimJointShape"));
Transform426.addChild(&Shape427);

HAnimSegment424.addChild(&Transform426);

Shape& Shape428 =  Shape();
LineSet& LineSet429 =  LineSet();
LineSet429.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA430 =  ColorRGBA();
ColorRGBA430.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet429.addChild(&ColorRGBA430);

Coordinate& Coordinate431 =  Coordinate();
Coordinate431.setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
LineSet429.setCoord(Coordinate431);

Shape428.setGeometry(&LineSet429);

HAnimSegment424.addChild(&Shape428);

HAnimJoint423.addChildren(&HAnimSegment424);

HAnimJoint& HAnimJoint432 =  HAnimJoint();
HAnimJoint432.setDEF(CString("hanim_vl3"));
HAnimJoint432.X3DNode::setName(CString("vl3"));
HAnimJoint432.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimSegment& HAnimSegment433 =  HAnimSegment();
HAnimSegment433.setDEF(CString("hanim_l3"));
HAnimSegment433.X3DNode::setName(CString("l3"));
TouchSensor& TouchSensor434 =  TouchSensor();
TouchSensor434.setDescription(CString("HAnimJoint vl3, HAnimSegment l3"));
HAnimSegment433.addChild(&TouchSensor434);

Transform& Transform435 =  Transform();
Transform435.setTranslation(new float[]{0.0041,1.1276,-0.0796});
Shape& Shape436 =  Shape();
Shape436.setUSE(CString("HAnimJointShape"));
Transform435.addChild(&Shape436);

HAnimSegment433.addChild(&Transform435);

Shape& Shape437 =  Shape();
LineSet& LineSet438 =  LineSet();
LineSet438.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA439 =  ColorRGBA();
ColorRGBA439.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet438.addChild(&ColorRGBA439);

Coordinate& Coordinate440 =  Coordinate();
Coordinate440.setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
LineSet438.setCoord(Coordinate440);

Shape437.setGeometry(&LineSet438);

HAnimSegment433.addChild(&Shape437);

HAnimJoint432.addChildren(&HAnimSegment433);

HAnimJoint& HAnimJoint441 =  HAnimJoint();
HAnimJoint441.setDEF(CString("hanim_vl2"));
HAnimJoint441.X3DNode::setName(CString("vl2"));
HAnimJoint441.setCenter(new float[]{0.0045,1.1546,-0.08});
HAnimSegment& HAnimSegment442 =  HAnimSegment();
HAnimSegment442.setDEF(CString("hanim_l2"));
HAnimSegment442.X3DNode::setName(CString("l2"));
TouchSensor& TouchSensor443 =  TouchSensor();
TouchSensor443.setDescription(CString("HAnimJoint vl2, HAnimSegment l2"));
HAnimSegment442.addChild(&TouchSensor443);

Transform& Transform444 =  Transform();
Transform444.setTranslation(new float[]{0.0045,1.1546,-0.08});
Shape& Shape445 =  Shape();
Shape445.setUSE(CString("HAnimJointShape"));
Transform444.addChild(&Shape445);

HAnimSegment442.addChild(&Transform444);

Shape& Shape446 =  Shape();
LineSet& LineSet447 =  LineSet();
LineSet447.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA448 =  ColorRGBA();
ColorRGBA448.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet447.addChild(&ColorRGBA448);

Coordinate& Coordinate449 =  Coordinate();
Coordinate449.setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
LineSet447.setCoord(Coordinate449);

Shape446.setGeometry(&LineSet447);

HAnimSegment442.addChild(&Shape446);

Shape& Shape450 =  Shape();
LineSet& LineSet451 =  LineSet();
LineSet451.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA452 =  ColorRGBA();
ColorRGBA452.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet451.addChild(&ColorRGBA452);

Coordinate& Coordinate453 =  Coordinate();
Coordinate453.setPoint(new float[]{0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016}, 6);
LineSet451.setCoord(Coordinate453);

Shape450.setGeometry(&LineSet451);

HAnimSegment442.addChild(&Shape450);

Shape& Shape454 =  Shape();
LineSet& LineSet455 =  LineSet();
LineSet455.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA456 =  ColorRGBA();
ColorRGBA456.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet455.addChild(&ColorRGBA456);

Coordinate& Coordinate457 =  Coordinate();
Coordinate457.setPoint(new float[]{0.0045,1.1546,-0.08,0.0871,1.1925,0.0992}, 6);
LineSet455.setCoord(Coordinate457);

Shape454.setGeometry(&LineSet455);

HAnimSegment442.addChild(&Shape454);

Shape& Shape458 =  Shape();
LineSet& LineSet459 =  LineSet();
LineSet459.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA460 =  ColorRGBA();
ColorRGBA460.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet459.addChild(&ColorRGBA460);

Coordinate& Coordinate461 =  Coordinate();
Coordinate461.setPoint(new float[]{0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113}, 6);
LineSet459.setCoord(Coordinate461);

Shape458.setGeometry(&LineSet459);

HAnimSegment442.addChild(&Shape458);

HAnimSite& HAnimSite462 =  HAnimSite();
HAnimSite462.setDEF(CString("hanim_r_rib10_pt"));
HAnimSite462.X3DNode::setName(CString("r_rib10_pt"));
HAnimSite462.setTranslation(new float[]{-0.0711,1.1941,0.1016});
TouchSensor& TouchSensor463 =  TouchSensor();
TouchSensor463.setDescription(CString("HAnimSite r_rib10_pt"));
HAnimSite462.addChild(&TouchSensor463);

Shape& Shape464 =  Shape();
Shape464.setUSE(CString("HAnimSiteShape"));
HAnimSite462.addChild(&Shape464);

HAnimSegment442.addChild(&HAnimSite462);

HAnimSite& HAnimSite465 =  HAnimSite();
HAnimSite465.setDEF(CString("hanim_l_rib10_pt"));
HAnimSite465.X3DNode::setName(CString("l_rib10_pt"));
HAnimSite465.setTranslation(new float[]{0.0871,1.1925,0.0992});
TouchSensor& TouchSensor466 =  TouchSensor();
TouchSensor466.setDescription(CString("HAnimSite l_rib10_pt"));
HAnimSite465.addChild(&TouchSensor466);

Shape& Shape467 =  Shape();
Shape467.setUSE(CString("HAnimSiteShape"));
HAnimSite465.addChild(&Shape467);

HAnimSegment442.addChild(&HAnimSite465);

HAnimSite& HAnimSite468 =  HAnimSite();
HAnimSite468.setDEF(CString("hanim_rib10_midspine_pt"));
HAnimSite468.X3DNode::setName(CString("rib10_midspine_pt"));
HAnimSite468.setTranslation(new float[]{0.0049,1.1908,-0.1113});
TouchSensor& TouchSensor469 =  TouchSensor();
TouchSensor469.setDescription(CString("HAnimSite rib10_midspine_pt"));
HAnimSite468.addChild(&TouchSensor469);

Shape& Shape470 =  Shape();
Shape470.setUSE(CString("HAnimSiteShape"));
HAnimSite468.addChild(&Shape470);

HAnimSegment442.addChild(&HAnimSite468);

HAnimJoint441.addChildren(&HAnimSegment442);

HAnimJoint& HAnimJoint471 =  HAnimJoint();
HAnimJoint471.setDEF(CString("hanim_vl1"));
HAnimJoint471.X3DNode::setName(CString("vl1"));
HAnimJoint471.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimSegment& HAnimSegment472 =  HAnimSegment();
HAnimSegment472.setDEF(CString("hanim_l1"));
HAnimSegment472.X3DNode::setName(CString("l1"));
TouchSensor& TouchSensor473 =  TouchSensor();
TouchSensor473.setDescription(CString("HAnimJoint vl1, HAnimSegment l1"));
HAnimSegment472.addChild(&TouchSensor473);

Transform& Transform474 =  Transform();
Transform474.setTranslation(new float[]{0.0048,1.1912,-0.0805});
Shape& Shape475 =  Shape();
Shape475.setUSE(CString("HAnimJointShape"));
Transform474.addChild(&Shape475);

HAnimSegment472.addChild(&Transform474);

Shape& Shape476 =  Shape();
LineSet& LineSet477 =  LineSet();
LineSet477.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA478 =  ColorRGBA();
ColorRGBA478.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet477.addChild(&ColorRGBA478);

Coordinate& Coordinate479 =  Coordinate();
Coordinate479.setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
LineSet477.setCoord(Coordinate479);

Shape476.setGeometry(&LineSet477);

HAnimSegment472.addChild(&Shape476);

HAnimJoint471.addChildren(&HAnimSegment472);

HAnimJoint& HAnimJoint480 =  HAnimJoint();
HAnimJoint480.setDEF(CString("hanim_vt12"));
HAnimJoint480.X3DNode::setName(CString("vt12"));
HAnimJoint480.setCenter(new float[]{0.0051,1.2278,-0.0808});
HAnimSegment& HAnimSegment481 =  HAnimSegment();
HAnimSegment481.setDEF(CString("hanim_t12"));
HAnimSegment481.X3DNode::setName(CString("t12"));
TouchSensor& TouchSensor482 =  TouchSensor();
TouchSensor482.setDescription(CString("HAnimJoint vt12, HAnimSegment t12"));
HAnimSegment481.addChild(&TouchSensor482);

Transform& Transform483 =  Transform();
Transform483.setTranslation(new float[]{0.0051,1.2278,-0.0808});
Shape& Shape484 =  Shape();
Shape484.setUSE(CString("HAnimJointShape"));
Transform483.addChild(&Shape484);

HAnimSegment481.addChild(&Transform483);

Shape& Shape485 =  Shape();
LineSet& LineSet486 =  LineSet();
LineSet486.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA487 =  ColorRGBA();
ColorRGBA487.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet486.addChild(&ColorRGBA487);

Coordinate& Coordinate488 =  Coordinate();
Coordinate488.setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
LineSet486.setCoord(Coordinate488);

Shape485.setGeometry(&LineSet486);

HAnimSegment481.addChild(&Shape485);

HAnimJoint480.addChildren(&HAnimSegment481);

HAnimJoint& HAnimJoint489 =  HAnimJoint();
HAnimJoint489.setDEF(CString("hanim_vt11"));
HAnimJoint489.X3DNode::setName(CString("vt11"));
HAnimJoint489.setCenter(new float[]{0.0053,1.2679,-0.081});
HAnimSegment& HAnimSegment490 =  HAnimSegment();
HAnimSegment490.setDEF(CString("hanim_t11"));
HAnimSegment490.X3DNode::setName(CString("t11"));
TouchSensor& TouchSensor491 =  TouchSensor();
TouchSensor491.setDescription(CString("HAnimJoint vt11, HAnimSegment t11"));
HAnimSegment490.addChild(&TouchSensor491);

Transform& Transform492 =  Transform();
Transform492.setTranslation(new float[]{0.0053,1.2679,-0.081});
Shape& Shape493 =  Shape();
Shape493.setUSE(CString("HAnimJointShape"));
Transform492.addChild(&Shape493);

HAnimSegment490.addChild(&Transform492);

Shape& Shape494 =  Shape();
LineSet& LineSet495 =  LineSet();
LineSet495.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA496 =  ColorRGBA();
ColorRGBA496.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet495.addChild(&ColorRGBA496);

Coordinate& Coordinate497 =  Coordinate();
Coordinate497.setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
LineSet495.setCoord(Coordinate497);

Shape494.setGeometry(&LineSet495);

HAnimSegment490.addChild(&Shape494);

HAnimJoint489.addChildren(&HAnimSegment490);

HAnimJoint& HAnimJoint498 =  HAnimJoint();
HAnimJoint498.setDEF(CString("hanim_vt10"));
HAnimJoint498.X3DNode::setName(CString("vt10"));
HAnimJoint498.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimSegment& HAnimSegment499 =  HAnimSegment();
HAnimSegment499.setDEF(CString("hanim_t10"));
HAnimSegment499.X3DNode::setName(CString("t10"));
TouchSensor& TouchSensor500 =  TouchSensor();
TouchSensor500.setDescription(CString("HAnimJoint vt10, HAnimSegment t10"));
HAnimSegment499.addChild(&TouchSensor500);

Transform& Transform501 =  Transform();
Transform501.setTranslation(new float[]{0.0056,1.2848,-0.0822});
Shape& Shape502 =  Shape();
Shape502.setUSE(CString("HAnimJointShape"));
Transform501.addChild(&Shape502);

HAnimSegment499.addChild(&Transform501);

Shape& Shape503 =  Shape();
LineSet& LineSet504 =  LineSet();
LineSet504.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA505 =  ColorRGBA();
ColorRGBA505.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet504.addChild(&ColorRGBA505);

Coordinate& Coordinate506 =  Coordinate();
Coordinate506.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
LineSet504.setCoord(Coordinate506);

Shape503.setGeometry(&LineSet504);

HAnimSegment499.addChild(&Shape503);

Shape& Shape507 =  Shape();
LineSet& LineSet508 =  LineSet();
LineSet508.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA509 =  ColorRGBA();
ColorRGBA509.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet508.addChild(&ColorRGBA509);

Coordinate& Coordinate510 =  Coordinate();
Coordinate510.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147}, 6);
LineSet508.setCoord(Coordinate510);

Shape507.setGeometry(&LineSet508);

HAnimSegment499.addChild(&Shape507);

HAnimSite& HAnimSite511 =  HAnimSite();
HAnimSite511.setDEF(CString("hanim_substernale_pt"));
HAnimSite511.X3DNode::setName(CString("substernale_pt"));
HAnimSite511.setTranslation(new float[]{0.0085,1.2995,0.1147});
TouchSensor& TouchSensor512 =  TouchSensor();
TouchSensor512.setDescription(CString("HAnimSite substernale_pt"));
HAnimSite511.addChild(&TouchSensor512);

Shape& Shape513 =  Shape();
Shape513.setUSE(CString("HAnimSiteShape"));
HAnimSite511.addChild(&Shape513);

HAnimSegment499.addChild(&HAnimSite511);

HAnimJoint498.addChildren(&HAnimSegment499);

HAnimJoint& HAnimJoint514 =  HAnimJoint();
HAnimJoint514.setDEF(CString("hanim_vt9"));
HAnimJoint514.X3DNode::setName(CString("vt9"));
HAnimJoint514.setCenter(new float[]{0.0057,1.3126,-0.0838});
HAnimSegment& HAnimSegment515 =  HAnimSegment();
HAnimSegment515.setDEF(CString("hanim_t9"));
HAnimSegment515.X3DNode::setName(CString("t9"));
TouchSensor& TouchSensor516 =  TouchSensor();
TouchSensor516.setDescription(CString("HAnimJoint vt9, HAnimSegment t9"));
HAnimSegment515.addChild(&TouchSensor516);

Transform& Transform517 =  Transform();
Transform517.setTranslation(new float[]{0.0057,1.3126,-0.0838});
Shape& Shape518 =  Shape();
Shape518.setUSE(CString("HAnimJointShape"));
Transform517.addChild(&Shape518);

HAnimSegment515.addChild(&Transform517);

Shape& Shape519 =  Shape();
LineSet& LineSet520 =  LineSet();
LineSet520.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA521 =  ColorRGBA();
ColorRGBA521.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet520.addChild(&ColorRGBA521);

Coordinate& Coordinate522 =  Coordinate();
Coordinate522.setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
LineSet520.setCoord(Coordinate522);

Shape519.setGeometry(&LineSet520);

HAnimSegment515.addChild(&Shape519);

Shape& Shape523 =  Shape();
LineSet& LineSet524 =  LineSet();
LineSet524.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA525 =  ColorRGBA();
ColorRGBA525.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet524.addChild(&ColorRGBA525);

Coordinate& Coordinate526 =  Coordinate();
Coordinate526.setPoint(new float[]{0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217}, 6);
LineSet524.setCoord(Coordinate526);

Shape523.setGeometry(&LineSet524);

HAnimSegment515.addChild(&Shape523);

Shape& Shape527 =  Shape();
LineSet& LineSet528 =  LineSet();
LineSet528.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA529 =  ColorRGBA();
ColorRGBA529.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet528.addChild(&ColorRGBA529);

Coordinate& Coordinate530 =  Coordinate();
Coordinate530.setPoint(new float[]{0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192}, 6);
LineSet528.setCoord(Coordinate530);

Shape527.setGeometry(&LineSet528);

HAnimSegment515.addChild(&Shape527);

HAnimSite& HAnimSite531 =  HAnimSite();
HAnimSite531.setDEF(CString("hanim_r_thelion_pt"));
HAnimSite531.X3DNode::setName(CString("r_thelion_pt"));
HAnimSite531.setTranslation(new float[]{-0.0736,1.3385,0.1217});
TouchSensor& TouchSensor532 =  TouchSensor();
TouchSensor532.setDescription(CString("HAnimSite r_thelion_pt"));
HAnimSite531.addChild(&TouchSensor532);

Shape& Shape533 =  Shape();
Shape533.setUSE(CString("HAnimSiteShape"));
HAnimSite531.addChild(&Shape533);

HAnimSegment515.addChild(&HAnimSite531);

HAnimSite& HAnimSite534 =  HAnimSite();
HAnimSite534.setDEF(CString("hanim_l_thelion_pt"));
HAnimSite534.X3DNode::setName(CString("l_thelion_pt"));
HAnimSite534.setTranslation(new float[]{0.0918,1.3382,0.1192});
TouchSensor& TouchSensor535 =  TouchSensor();
TouchSensor535.setDescription(CString("HAnimSite l_thelion_pt"));
HAnimSite534.addChild(&TouchSensor535);

Shape& Shape536 =  Shape();
Shape536.setUSE(CString("HAnimSiteShape"));
HAnimSite534.addChild(&Shape536);

HAnimSegment515.addChild(&HAnimSite534);

HAnimJoint514.addChildren(&HAnimSegment515);

HAnimJoint& HAnimJoint537 =  HAnimJoint();
HAnimJoint537.setDEF(CString("hanim_vt8"));
HAnimJoint537.X3DNode::setName(CString("vt8"));
HAnimJoint537.setCenter(new float[]{0.0057,1.3382,-0.0845});
HAnimSegment& HAnimSegment538 =  HAnimSegment();
HAnimSegment538.setDEF(CString("hanim_t8"));
HAnimSegment538.X3DNode::setName(CString("t8"));
TouchSensor& TouchSensor539 =  TouchSensor();
TouchSensor539.setDescription(CString("HAnimJoint vt8, HAnimSegment t8"));
HAnimSegment538.addChild(&TouchSensor539);

Transform& Transform540 =  Transform();
Transform540.setTranslation(new float[]{0.0057,1.3382,-0.0845});
Shape& Shape541 =  Shape();
Shape541.setUSE(CString("HAnimJointShape"));
Transform540.addChild(&Shape541);

HAnimSegment538.addChild(&Transform540);

Shape& Shape542 =  Shape();
LineSet& LineSet543 =  LineSet();
LineSet543.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA544 =  ColorRGBA();
ColorRGBA544.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet543.addChild(&ColorRGBA544);

Coordinate& Coordinate545 =  Coordinate();
Coordinate545.setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
LineSet543.setCoord(Coordinate545);

Shape542.setGeometry(&LineSet543);

HAnimSegment538.addChild(&Shape542);

HAnimJoint537.addChildren(&HAnimSegment538);

HAnimJoint& HAnimJoint546 =  HAnimJoint();
HAnimJoint546.setDEF(CString("hanim_vt7"));
HAnimJoint546.X3DNode::setName(CString("vt7"));
HAnimJoint546.setCenter(new float[]{0.0058,1.3625,-0.0833});
HAnimSegment& HAnimSegment547 =  HAnimSegment();
HAnimSegment547.setDEF(CString("hanim_t7"));
HAnimSegment547.X3DNode::setName(CString("t7"));
TouchSensor& TouchSensor548 =  TouchSensor();
TouchSensor548.setDescription(CString("HAnimJoint vt7, HAnimSegment t7"));
HAnimSegment547.addChild(&TouchSensor548);

Transform& Transform549 =  Transform();
Transform549.setTranslation(new float[]{0.0058,1.3625,-0.0833});
Shape& Shape550 =  Shape();
Shape550.setUSE(CString("HAnimJointShape"));
Transform549.addChild(&Shape550);

HAnimSegment547.addChild(&Transform549);

Shape& Shape551 =  Shape();
LineSet& LineSet552 =  LineSet();
LineSet552.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA553 =  ColorRGBA();
ColorRGBA553.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet552.addChild(&ColorRGBA553);

Coordinate& Coordinate554 =  Coordinate();
Coordinate554.setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
LineSet552.setCoord(Coordinate554);

Shape551.setGeometry(&LineSet552);

HAnimSegment547.addChild(&Shape551);

HAnimJoint546.addChildren(&HAnimSegment547);

HAnimJoint& HAnimJoint555 =  HAnimJoint();
HAnimJoint555.setDEF(CString("hanim_vt6"));
HAnimJoint555.X3DNode::setName(CString("vt6"));
HAnimJoint555.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimSegment& HAnimSegment556 =  HAnimSegment();
HAnimSegment556.setDEF(CString("hanim_t6"));
HAnimSegment556.X3DNode::setName(CString("t6"));
TouchSensor& TouchSensor557 =  TouchSensor();
TouchSensor557.setDescription(CString("HAnimJoint vt6, HAnimSegment t6"));
HAnimSegment556.addChild(&TouchSensor557);

Transform& Transform558 =  Transform();
Transform558.setTranslation(new float[]{0.0059,1.3866,-0.08});
Shape& Shape559 =  Shape();
Shape559.setUSE(CString("HAnimJointShape"));
Transform558.addChild(&Shape559);

HAnimSegment556.addChild(&Transform558);

Shape& Shape560 =  Shape();
LineSet& LineSet561 =  LineSet();
LineSet561.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA562 =  ColorRGBA();
ColorRGBA562.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet561.addChild(&ColorRGBA562);

Coordinate& Coordinate563 =  Coordinate();
Coordinate563.setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
LineSet561.setCoord(Coordinate563);

Shape560.setGeometry(&LineSet561);

HAnimSegment556.addChild(&Shape560);

HAnimJoint555.addChildren(&HAnimSegment556);

HAnimJoint& HAnimJoint564 =  HAnimJoint();
HAnimJoint564.setDEF(CString("hanim_vt5"));
HAnimJoint564.X3DNode::setName(CString("vt5"));
HAnimJoint564.setCenter(new float[]{0.006,1.4102,-0.0745});
HAnimSegment& HAnimSegment565 =  HAnimSegment();
HAnimSegment565.setDEF(CString("hanim_t5"));
HAnimSegment565.X3DNode::setName(CString("t5"));
TouchSensor& TouchSensor566 =  TouchSensor();
TouchSensor566.setDescription(CString("HAnimJoint vt5, HAnimSegment t5"));
HAnimSegment565.addChild(&TouchSensor566);

Transform& Transform567 =  Transform();
Transform567.setTranslation(new float[]{0.006,1.4102,-0.0745});
Shape& Shape568 =  Shape();
Shape568.setUSE(CString("HAnimJointShape"));
Transform567.addChild(&Shape568);

HAnimSegment565.addChild(&Transform567);

Shape& Shape569 =  Shape();
LineSet& LineSet570 =  LineSet();
LineSet570.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA571 =  ColorRGBA();
ColorRGBA571.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet570.addChild(&ColorRGBA571);

Coordinate& Coordinate572 =  Coordinate();
Coordinate572.setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
LineSet570.setCoord(Coordinate572);

Shape569.setGeometry(&LineSet570);

HAnimSegment565.addChild(&Shape569);

HAnimJoint564.addChildren(&HAnimSegment565);

HAnimJoint& HAnimJoint573 =  HAnimJoint();
HAnimJoint573.setDEF(CString("hanim_vt4"));
HAnimJoint573.X3DNode::setName(CString("vt4"));
HAnimJoint573.setCenter(new float[]{0.0061,1.432,-0.0675});
HAnimSegment& HAnimSegment574 =  HAnimSegment();
HAnimSegment574.setDEF(CString("hanim_t4"));
HAnimSegment574.X3DNode::setName(CString("t4"));
TouchSensor& TouchSensor575 =  TouchSensor();
TouchSensor575.setDescription(CString("HAnimJoint vt4, HAnimSegment t4"));
HAnimSegment574.addChild(&TouchSensor575);

Transform& Transform576 =  Transform();
Transform576.setTranslation(new float[]{0.0061,1.432,-0.0675});
Shape& Shape577 =  Shape();
Shape577.setUSE(CString("HAnimJointShape"));
Transform576.addChild(&Shape577);

HAnimSegment574.addChild(&Transform576);

Shape& Shape578 =  Shape();
LineSet& LineSet579 =  LineSet();
LineSet579.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA580 =  ColorRGBA();
ColorRGBA580.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet579.addChild(&ColorRGBA580);

Coordinate& Coordinate581 =  Coordinate();
Coordinate581.setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
LineSet579.setCoord(Coordinate581);

Shape578.setGeometry(&LineSet579);

HAnimSegment574.addChild(&Shape578);

HAnimJoint573.addChildren(&HAnimSegment574);

HAnimJoint& HAnimJoint582 =  HAnimJoint();
HAnimJoint582.setDEF(CString("hanim_vt3"));
HAnimJoint582.X3DNode::setName(CString("vt3"));
HAnimJoint582.setCenter(new float[]{0.0062,1.4583,-0.057});
HAnimSegment& HAnimSegment583 =  HAnimSegment();
HAnimSegment583.setDEF(CString("hanim_t3"));
HAnimSegment583.X3DNode::setName(CString("t3"));
TouchSensor& TouchSensor584 =  TouchSensor();
TouchSensor584.setDescription(CString("HAnimJoint vt3, HAnimSegment t3"));
HAnimSegment583.addChild(&TouchSensor584);

Transform& Transform585 =  Transform();
Transform585.setTranslation(new float[]{0.0062,1.4583,-0.057});
Shape& Shape586 =  Shape();
Shape586.setUSE(CString("HAnimJointShape"));
Transform585.addChild(&Shape586);

HAnimSegment583.addChild(&Transform585);

Shape& Shape587 =  Shape();
LineSet& LineSet588 =  LineSet();
LineSet588.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA589 =  ColorRGBA();
ColorRGBA589.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet588.addChild(&ColorRGBA589);

Coordinate& Coordinate590 =  Coordinate();
Coordinate590.setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
LineSet588.setCoord(Coordinate590);

Shape587.setGeometry(&LineSet588);

HAnimSegment583.addChild(&Shape587);

HAnimJoint582.addChildren(&HAnimSegment583);

HAnimJoint& HAnimJoint591 =  HAnimJoint();
HAnimJoint591.setDEF(CString("hanim_vt2"));
HAnimJoint591.X3DNode::setName(CString("vt2"));
HAnimJoint591.setCenter(new float[]{0.0063,1.4761,-0.0484});
HAnimSegment& HAnimSegment592 =  HAnimSegment();
HAnimSegment592.setDEF(CString("hanim_t2"));
HAnimSegment592.X3DNode::setName(CString("t2"));
TouchSensor& TouchSensor593 =  TouchSensor();
TouchSensor593.setDescription(CString("HAnimJoint vt2, HAnimSegment t2"));
HAnimSegment592.addChild(&TouchSensor593);

Transform& Transform594 =  Transform();
Transform594.setTranslation(new float[]{0.0063,1.4761,-0.0484});
Shape& Shape595 =  Shape();
Shape595.setUSE(CString("HAnimJointShape"));
Transform594.addChild(&Shape595);

HAnimSegment592.addChild(&Transform594);

Shape& Shape596 =  Shape();
LineSet& LineSet597 =  LineSet();
LineSet597.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA598 =  ColorRGBA();
ColorRGBA598.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet597.addChild(&ColorRGBA598);

Coordinate& Coordinate599 =  Coordinate();
Coordinate599.setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
LineSet597.setCoord(Coordinate599);

Shape596.setGeometry(&LineSet597);

HAnimSegment592.addChild(&Shape596);

HAnimJoint591.addChildren(&HAnimSegment592);

HAnimJoint& HAnimJoint600 =  HAnimJoint();
HAnimJoint600.setDEF(CString("hanim_vt1"));
HAnimJoint600.X3DNode::setName(CString("vt1"));
HAnimJoint600.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimSegment& HAnimSegment601 =  HAnimSegment();
HAnimSegment601.setDEF(CString("hanim_t1"));
HAnimSegment601.X3DNode::setName(CString("t1"));
TouchSensor& TouchSensor602 =  TouchSensor();
TouchSensor602.setDescription(CString("HAnimJoint vt1, HAnimSegment t1"));
HAnimSegment601.addChild(&TouchSensor602);

Transform& Transform603 =  Transform();
Transform603.setTranslation(new float[]{0.0065,1.4951,-0.0387});
Shape& Shape604 =  Shape();
Shape604.setUSE(CString("HAnimJointShape"));
Transform603.addChild(&Shape604);

HAnimSegment601.addChild(&Transform603);

Shape& Shape605 =  Shape();
LineSet& LineSet606 =  LineSet();
LineSet606.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA607 =  ColorRGBA();
ColorRGBA607.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet606.addChild(&ColorRGBA607);

Coordinate& Coordinate608 =  Coordinate();
Coordinate608.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
LineSet606.setCoord(Coordinate608);

Shape605.setGeometry(&LineSet606);

HAnimSegment601.addChild(&Shape605);

Shape& Shape609 =  Shape();
LineSet& LineSet610 =  LineSet();
LineSet610.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA611 =  ColorRGBA();
ColorRGBA611.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet610.addChild(&ColorRGBA611);

Coordinate& Coordinate612 =  Coordinate();
Coordinate612.setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet610.setCoord(Coordinate612);

Shape609.setGeometry(&LineSet610);

HAnimSegment601.addChild(&Shape609);

Shape& Shape613 =  Shape();
LineSet& LineSet614 =  LineSet();
LineSet614.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA615 =  ColorRGBA();
ColorRGBA615.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet614.addChild(&ColorRGBA615);

Coordinate& Coordinate616 =  Coordinate();
Coordinate616.setPoint(new float[]{0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353}, 6);
LineSet614.setCoord(Coordinate616);

Shape613.setGeometry(&LineSet614);

HAnimSegment601.addChild(&Shape613);

Shape& Shape617 =  Shape();
LineSet& LineSet618 =  LineSet();
LineSet618.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA619 =  ColorRGBA();
ColorRGBA619.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet618.addChild(&ColorRGBA619);

Coordinate& Coordinate620 =  Coordinate();
Coordinate620.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551}, 6);
LineSet618.setCoord(Coordinate620);

Shape617.setGeometry(&LineSet618);

HAnimSegment601.addChild(&Shape617);

Shape& Shape621 =  Shape();
LineSet& LineSet622 =  LineSet();
LineSet622.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA623 =  ColorRGBA();
ColorRGBA623.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet622.addChild(&ColorRGBA623);

Coordinate& Coordinate624 =  Coordinate();
Coordinate624.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815}, 6);
LineSet622.setCoord(Coordinate624);

Shape621.setGeometry(&LineSet622);

HAnimSegment601.addChild(&Shape621);

HAnimSite& HAnimSite625 =  HAnimSite();
HAnimSite625.setDEF(CString("hanim_suprasternale_pt"));
HAnimSite625.X3DNode::setName(CString("suprasternale_pt"));
HAnimSite625.setTranslation(new float[]{0.0084,1.4714,0.0551});
TouchSensor& TouchSensor626 =  TouchSensor();
TouchSensor626.setDescription(CString("HAnimSite suprasternale_pt"));
HAnimSite625.addChild(&TouchSensor626);

Shape& Shape627 =  Shape();
Shape627.setUSE(CString("HAnimSiteShape"));
HAnimSite625.addChild(&Shape627);

HAnimSegment601.addChild(&HAnimSite625);

HAnimSite& HAnimSite628 =  HAnimSite();
HAnimSite628.setDEF(CString("hanim_cervicale_pt"));
HAnimSite628.X3DNode::setName(CString("cervicale_pt"));
HAnimSite628.setTranslation(new float[]{0.0064,1.52,-0.0815});
TouchSensor& TouchSensor629 =  TouchSensor();
TouchSensor629.setDescription(CString("HAnimSite cervicale_pt"));
HAnimSite628.addChild(&TouchSensor629);

Shape& Shape630 =  Shape();
Shape630.setUSE(CString("HAnimSiteShape"));
HAnimSite628.addChild(&Shape630);

HAnimSegment601.addChild(&HAnimSite628);

HAnimJoint600.addChildren(&HAnimSegment601);

HAnimJoint& HAnimJoint631 =  HAnimJoint();
HAnimJoint631.setDEF(CString("hanim_vc7"));
HAnimJoint631.X3DNode::setName(CString("vc7"));
HAnimJoint631.setCenter(new float[]{0.0066,1.5132,-0.0301});
HAnimSegment& HAnimSegment632 =  HAnimSegment();
HAnimSegment632.setDEF(CString("hanim_c7"));
HAnimSegment632.X3DNode::setName(CString("c7"));
TouchSensor& TouchSensor633 =  TouchSensor();
TouchSensor633.setDescription(CString("HAnimJoint vc7, HAnimSegment c7"));
HAnimSegment632.addChild(&TouchSensor633);

Transform& Transform634 =  Transform();
Transform634.setTranslation(new float[]{0.0066,1.5132,-0.0301});
Shape& Shape635 =  Shape();
Shape635.setUSE(CString("HAnimJointShape"));
Transform634.addChild(&Shape635);

HAnimSegment632.addChild(&Transform634);

Shape& Shape636 =  Shape();
LineSet& LineSet637 =  LineSet();
LineSet637.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA638 =  ColorRGBA();
ColorRGBA638.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet637.addChild(&ColorRGBA638);

Coordinate& Coordinate639 =  Coordinate();
Coordinate639.setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
LineSet637.setCoord(Coordinate639);

Shape636.setGeometry(&LineSet637);

HAnimSegment632.addChild(&Shape636);

Shape& Shape640 =  Shape();
LineSet& LineSet641 =  LineSet();
LineSet641.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA642 =  ColorRGBA();
ColorRGBA642.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet641.addChild(&ColorRGBA642);

Coordinate& Coordinate643 =  Coordinate();
Coordinate643.setPoint(new float[]{0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022}, 6);
LineSet641.setCoord(Coordinate643);

Shape640.setGeometry(&LineSet641);

HAnimSegment632.addChild(&Shape640);

Shape& Shape644 =  Shape();
LineSet& LineSet645 =  LineSet();
LineSet645.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA646 =  ColorRGBA();
ColorRGBA646.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet645.addChild(&ColorRGBA646);

Coordinate& Coordinate647 =  Coordinate();
Coordinate647.setPoint(new float[]{0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038}, 6);
LineSet645.setCoord(Coordinate647);

Shape644.setGeometry(&LineSet645);

HAnimSegment632.addChild(&Shape644);

HAnimSite& HAnimSite648 =  HAnimSite();
HAnimSite648.setDEF(CString("hanim_r_neck_base_pt"));
HAnimSite648.X3DNode::setName(CString("r_neck_base_pt"));
HAnimSite648.setTranslation(new float[]{-0.0419,1.5149,-0.022});
TouchSensor& TouchSensor649 =  TouchSensor();
TouchSensor649.setDescription(CString("HAnimSite r_neck_base_pt"));
HAnimSite648.addChild(&TouchSensor649);

Shape& Shape650 =  Shape();
Shape650.setUSE(CString("HAnimSiteShape"));
HAnimSite648.addChild(&Shape650);

HAnimSegment632.addChild(&HAnimSite648);

HAnimSite& HAnimSite651 =  HAnimSite();
HAnimSite651.setDEF(CString("hanim_l_neck_base_pt"));
HAnimSite651.X3DNode::setName(CString("l_neck_base_pt"));
HAnimSite651.setTranslation(new float[]{0.0646,1.5141,-0.038});
TouchSensor& TouchSensor652 =  TouchSensor();
TouchSensor652.setDescription(CString("HAnimSite l_neck_base_pt"));
HAnimSite651.addChild(&TouchSensor652);

Shape& Shape653 =  Shape();
Shape653.setUSE(CString("HAnimSiteShape"));
HAnimSite651.addChild(&Shape653);

HAnimSegment632.addChild(&HAnimSite651);

HAnimJoint631.addChildren(&HAnimSegment632);

HAnimJoint& HAnimJoint654 =  HAnimJoint();
HAnimJoint654.setDEF(CString("hanim_vc6"));
HAnimJoint654.X3DNode::setName(CString("vc6"));
HAnimJoint654.setCenter(new float[]{0.0066,1.5357,-0.0143});
HAnimSegment& HAnimSegment655 =  HAnimSegment();
HAnimSegment655.setDEF(CString("hanim_c6"));
HAnimSegment655.X3DNode::setName(CString("c6"));
TouchSensor& TouchSensor656 =  TouchSensor();
TouchSensor656.setDescription(CString("HAnimJoint vc6, HAnimSegment c6"));
HAnimSegment655.addChild(&TouchSensor656);

Transform& Transform657 =  Transform();
Transform657.setTranslation(new float[]{0.0066,1.5357,-0.0143});
Shape& Shape658 =  Shape();
Shape658.setUSE(CString("HAnimJointShape"));
Transform657.addChild(&Shape658);

HAnimSegment655.addChild(&Transform657);

Shape& Shape659 =  Shape();
LineSet& LineSet660 =  LineSet();
LineSet660.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA661 =  ColorRGBA();
ColorRGBA661.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet660.addChild(&ColorRGBA661);

Coordinate& Coordinate662 =  Coordinate();
Coordinate662.setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
LineSet660.setCoord(Coordinate662);

Shape659.setGeometry(&LineSet660);

HAnimSegment655.addChild(&Shape659);

HAnimJoint654.addChildren(&HAnimSegment655);

HAnimJoint& HAnimJoint663 =  HAnimJoint();
HAnimJoint663.setDEF(CString("hanim_vc5"));
HAnimJoint663.X3DNode::setName(CString("vc5"));
HAnimJoint663.setCenter(new float[]{0.0066,1.552,-0.0082});
HAnimSegment& HAnimSegment664 =  HAnimSegment();
HAnimSegment664.setDEF(CString("hanim_c5"));
HAnimSegment664.X3DNode::setName(CString("c5"));
TouchSensor& TouchSensor665 =  TouchSensor();
TouchSensor665.setDescription(CString("HAnimJoint vc5, HAnimSegment c5"));
HAnimSegment664.addChild(&TouchSensor665);

Transform& Transform666 =  Transform();
Transform666.setTranslation(new float[]{0.0066,1.552,-0.0082});
Shape& Shape667 =  Shape();
Shape667.setUSE(CString("HAnimJointShape"));
Transform666.addChild(&Shape667);

HAnimSegment664.addChild(&Transform666);

Shape& Shape668 =  Shape();
LineSet& LineSet669 =  LineSet();
LineSet669.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA670 =  ColorRGBA();
ColorRGBA670.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet669.addChild(&ColorRGBA670);

Coordinate& Coordinate671 =  Coordinate();
Coordinate671.setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
LineSet669.setCoord(Coordinate671);

Shape668.setGeometry(&LineSet669);

HAnimSegment664.addChild(&Shape668);

HAnimJoint663.addChildren(&HAnimSegment664);

HAnimJoint& HAnimJoint672 =  HAnimJoint();
HAnimJoint672.setDEF(CString("hanim_vc4"));
HAnimJoint672.X3DNode::setName(CString("vc4"));
HAnimJoint672.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimSegment& HAnimSegment673 =  HAnimSegment();
HAnimSegment673.setDEF(CString("hanim_c4"));
HAnimSegment673.X3DNode::setName(CString("c4"));
TouchSensor& TouchSensor674 =  TouchSensor();
TouchSensor674.setDescription(CString("HAnimJoint vc4, HAnimSegment c4"));
HAnimSegment673.addChild(&TouchSensor674);

Transform& Transform675 =  Transform();
Transform675.setTranslation(new float[]{0.0066,1.5662,-0.0084});
Shape& Shape676 =  Shape();
Shape676.setUSE(CString("HAnimJointShape"));
Transform675.addChild(&Shape676);

HAnimSegment673.addChild(&Transform675);

Shape& Shape677 =  Shape();
LineSet& LineSet678 =  LineSet();
LineSet678.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA679 =  ColorRGBA();
ColorRGBA679.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet678.addChild(&ColorRGBA679);

Coordinate& Coordinate680 =  Coordinate();
Coordinate680.setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
LineSet678.setCoord(Coordinate680);

Shape677.setGeometry(&LineSet678);

HAnimSegment673.addChild(&Shape677);

HAnimJoint672.addChildren(&HAnimSegment673);

HAnimJoint& HAnimJoint681 =  HAnimJoint();
HAnimJoint681.setDEF(CString("hanim_vc3"));
HAnimJoint681.X3DNode::setName(CString("vc3"));
HAnimJoint681.setCenter(new float[]{0.0066,1.58,-0.0103});
HAnimSegment& HAnimSegment682 =  HAnimSegment();
HAnimSegment682.setDEF(CString("hanim_c3"));
HAnimSegment682.X3DNode::setName(CString("c3"));
TouchSensor& TouchSensor683 =  TouchSensor();
TouchSensor683.setDescription(CString("HAnimJoint vc3, HAnimSegment c3"));
HAnimSegment682.addChild(&TouchSensor683);

Transform& Transform684 =  Transform();
Transform684.setTranslation(new float[]{0.0066,1.58,-0.0103});
Shape& Shape685 =  Shape();
Shape685.setUSE(CString("HAnimJointShape"));
Transform684.addChild(&Shape685);

HAnimSegment682.addChild(&Transform684);

Shape& Shape686 =  Shape();
LineSet& LineSet687 =  LineSet();
LineSet687.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA688 =  ColorRGBA();
ColorRGBA688.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet687.addChild(&ColorRGBA688);

Coordinate& Coordinate689 =  Coordinate();
Coordinate689.setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
LineSet687.setCoord(Coordinate689);

Shape686.setGeometry(&LineSet687);

HAnimSegment682.addChild(&Shape686);

HAnimJoint681.addChildren(&HAnimSegment682);

HAnimJoint& HAnimJoint690 =  HAnimJoint();
HAnimJoint690.setDEF(CString("hanim_vc2"));
HAnimJoint690.X3DNode::setName(CString("vc2"));
HAnimJoint690.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimSegment& HAnimSegment691 =  HAnimSegment();
HAnimSegment691.setDEF(CString("hanim_c2"));
HAnimSegment691.X3DNode::setName(CString("c2"));
TouchSensor& TouchSensor692 =  TouchSensor();
TouchSensor692.setDescription(CString("HAnimJoint vc2, HAnimSegment c2"));
HAnimSegment691.addChild(&TouchSensor692);

Transform& Transform693 =  Transform();
Transform693.setTranslation(new float[]{0.0066,1.5928,-0.0103});
Shape& Shape694 =  Shape();
Shape694.setUSE(CString("HAnimJointShape"));
Transform693.addChild(&Shape694);

HAnimSegment691.addChild(&Transform693);

Shape& Shape695 =  Shape();
LineSet& LineSet696 =  LineSet();
LineSet696.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA697 =  ColorRGBA();
ColorRGBA697.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet696.addChild(&ColorRGBA697);

Coordinate& Coordinate698 =  Coordinate();
Coordinate698.setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
LineSet696.setCoord(Coordinate698);

Shape695.setGeometry(&LineSet696);

HAnimSegment691.addChild(&Shape695);

HAnimJoint690.addChildren(&HAnimSegment691);

HAnimJoint& HAnimJoint699 =  HAnimJoint();
HAnimJoint699.setDEF(CString("hanim_vc1"));
HAnimJoint699.X3DNode::setName(CString("vc1"));
HAnimJoint699.setCenter(new float[]{0.0066,1.6144,-0.0034});
HAnimSegment& HAnimSegment700 =  HAnimSegment();
HAnimSegment700.setDEF(CString("hanim_c1"));
HAnimSegment700.X3DNode::setName(CString("c1"));
TouchSensor& TouchSensor701 =  TouchSensor();
TouchSensor701.setDescription(CString("HAnimJoint vc1, HAnimSegment c1"));
HAnimSegment700.addChild(&TouchSensor701);

Transform& Transform702 =  Transform();
Transform702.setTranslation(new float[]{0.0066,1.6144,-0.0034});
Shape& Shape703 =  Shape();
Shape703.setUSE(CString("HAnimJointShape"));
Transform702.addChild(&Shape703);

HAnimSegment700.addChild(&Transform702);

Shape& Shape704 =  Shape();
LineSet& LineSet705 =  LineSet();
LineSet705.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA706 =  ColorRGBA();
ColorRGBA706.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet705.addChild(&ColorRGBA706);

Coordinate& Coordinate707 =  Coordinate();
Coordinate707.setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
LineSet705.setCoord(Coordinate707);

Shape704.setGeometry(&LineSet705);

HAnimSegment700.addChild(&Shape704);

HAnimJoint699.addChildren(&HAnimSegment700);

HAnimJoint& HAnimJoint708 =  HAnimJoint();
HAnimJoint708.setDEF(CString("hanim_skullbase"));
HAnimJoint708.X3DNode::setName(CString("skullbase"));
HAnimJoint708.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimSegment& HAnimSegment709 =  HAnimSegment();
HAnimSegment709.setDEF(CString("hanim_skull"));
HAnimSegment709.X3DNode::setName(CString("skull"));
TouchSensor& TouchSensor710 =  TouchSensor();
TouchSensor710.setDescription(CString("HAnimJoint skullbase, HAnimSegment skull"));
HAnimSegment709.addChild(&TouchSensor710);

Transform& Transform711 =  Transform();
Transform711.setTranslation(new float[]{0.0044,1.6209,0.0236});
Shape& Shape712 =  Shape();
Shape712.setUSE(CString("HAnimJointShape"));
Transform711.addChild(&Shape712);

HAnimSegment709.addChild(&Transform711);

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

HAnimSegment709.addChild(&Shape713);

Shape& Shape717 =  Shape();
LineSet& LineSet718 =  LineSet();
LineSet718.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA719 =  ColorRGBA();
ColorRGBA719.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet718.addChild(&ColorRGBA719);

Coordinate& Coordinate720 =  Coordinate();
Coordinate720.setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502}, 6);
LineSet718.setCoord(Coordinate720);

Shape717.setGeometry(&LineSet718);

HAnimSegment709.addChild(&Shape717);

Shape& Shape721 =  Shape();
LineSet& LineSet722 =  LineSet();
LineSet722.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA723 =  ColorRGBA();
ColorRGBA723.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet722.addChild(&ColorRGBA723);

Coordinate& Coordinate724 =  Coordinate();
Coordinate724.setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.635,0.0506}, 6);
LineSet722.setCoord(Coordinate724);

Shape721.setGeometry(&LineSet722);

HAnimSegment709.addChild(&Shape721);

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

HAnimSegment709.addChild(&Shape725);

Shape& Shape729 =  Shape();
LineSet& LineSet730 =  LineSet();
LineSet730.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA731 =  ColorRGBA();
ColorRGBA731.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet730.addChild(&ColorRGBA731);

Coordinate& Coordinate732 =  Coordinate();
Coordinate732.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502}, 6);
LineSet730.setCoord(Coordinate732);

Shape729.setGeometry(&LineSet730);

HAnimSegment709.addChild(&Shape729);

Shape& Shape733 =  Shape();
LineSet& LineSet734 =  LineSet();
LineSet734.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA735 =  ColorRGBA();
ColorRGBA735.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet734.addChild(&ColorRGBA735);

Coordinate& Coordinate736 =  Coordinate();
Coordinate736.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.635,0.0506}, 6);
LineSet734.setCoord(Coordinate736);

Shape733.setGeometry(&LineSet734);

HAnimSegment709.addChild(&Shape733);

Shape& Shape737 =  Shape();
LineSet& LineSet738 =  LineSet();
LineSet738.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA739 =  ColorRGBA();
ColorRGBA739.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet738.addChild(&ColorRGBA739);

Coordinate& Coordinate740 =  Coordinate();
Coordinate740.setPoint(new float[]{0.0044,1.6209,0.0236,0.0,1.63,0.015}, 6);
LineSet738.setCoord(Coordinate740);

Shape737.setGeometry(&LineSet738);

HAnimSegment709.addChild(&Shape737);

Shape& Shape741 =  Shape();
LineSet& LineSet742 =  LineSet();
LineSet742.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA743 =  ColorRGBA();
ColorRGBA743.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet742.addChild(&ColorRGBA743);

Coordinate& Coordinate744 =  Coordinate();
Coordinate744.setPoint(new float[]{0.0044,1.6209,0.0236,0.005,1.7504,0.0055}, 6);
LineSet742.setCoord(Coordinate744);

Shape741.setGeometry(&LineSet742);

HAnimSegment709.addChild(&Shape741);

Shape& Shape745 =  Shape();
LineSet& LineSet746 =  LineSet();
LineSet746.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA747 =  ColorRGBA();
ColorRGBA747.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet746.addChild(&ColorRGBA747);

Coordinate& Coordinate748 =  Coordinate();
Coordinate748.setPoint(new float[]{0.0044,1.6209,0.0236,0.0058,1.6316,0.0852}, 6);
LineSet746.setCoord(Coordinate748);

Shape745.setGeometry(&LineSet746);

HAnimSegment709.addChild(&Shape745);

Shape& Shape749 =  Shape();
LineSet& LineSet750 =  LineSet();
LineSet750.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA751 =  ColorRGBA();
ColorRGBA751.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet750.addChild(&ColorRGBA751);

Coordinate& Coordinate752 =  Coordinate();
Coordinate752.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752}, 6);
LineSet750.setCoord(Coordinate752);

Shape749.setGeometry(&LineSet750);

HAnimSegment709.addChild(&Shape749);

Shape& Shape753 =  Shape();
LineSet& LineSet754 =  LineSet();
LineSet754.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA755 =  ColorRGBA();
ColorRGBA755.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet754.addChild(&ColorRGBA755);

Coordinate& Coordinate756 =  Coordinate();
Coordinate756.setPoint(new float[]{0.0044,1.6209,0.0236,0.0341,1.6171,0.0752}, 6);
LineSet754.setCoord(Coordinate756);

Shape753.setGeometry(&LineSet754);

HAnimSegment709.addChild(&Shape753);

Shape& Shape757 =  Shape();
LineSet& LineSet758 =  LineSet();
LineSet758.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA759 =  ColorRGBA();
ColorRGBA759.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet758.addChild(&ColorRGBA759);

Coordinate& Coordinate760 =  Coordinate();
Coordinate760.setPoint(new float[]{0.0044,1.6209,0.0236,0.0061,1.541,0.0805}, 6);
LineSet758.setCoord(Coordinate760);

Shape757.setGeometry(&LineSet758);

HAnimSegment709.addChild(&Shape757);

Shape& Shape761 =  Shape();
LineSet& LineSet762 =  LineSet();
LineSet762.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA763 =  ColorRGBA();
ColorRGBA763.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet762.addChild(&ColorRGBA763);

Coordinate& Coordinate764 =  Coordinate();
Coordinate764.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302}, 6);
LineSet762.setCoord(Coordinate764);

Shape761.setGeometry(&LineSet762);

HAnimSegment709.addChild(&Shape761);

Shape& Shape765 =  Shape();
LineSet& LineSet766 =  LineSet();
LineSet766.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA767 =  ColorRGBA();
ColorRGBA767.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet766.addChild(&ColorRGBA767);

Coordinate& Coordinate768 =  Coordinate();
Coordinate768.setPoint(new float[]{0.0044,1.6209,0.0236,-0.052,1.5529,0.0347}, 6);
LineSet766.setCoord(Coordinate768);

Shape765.setGeometry(&LineSet766);

HAnimSegment709.addChild(&Shape765);

Shape& Shape769 =  Shape();
LineSet& LineSet770 =  LineSet();
LineSet770.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA771 =  ColorRGBA();
ColorRGBA771.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet770.addChild(&ColorRGBA771);

Coordinate& Coordinate772 =  Coordinate();
Coordinate772.setPoint(new float[]{0.0044,1.6209,0.0236,0.0739,1.6348,0.0282}, 6);
LineSet770.setCoord(Coordinate772);

Shape769.setGeometry(&LineSet770);

HAnimSegment709.addChild(&Shape769);

Shape& Shape773 =  Shape();
LineSet& LineSet774 =  LineSet();
LineSet774.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA775 =  ColorRGBA();
ColorRGBA775.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet774.addChild(&ColorRGBA775);

Coordinate& Coordinate776 =  Coordinate();
Coordinate776.setPoint(new float[]{0.0044,1.6209,0.0236,0.0631,1.553,0.033}, 6);
LineSet774.setCoord(Coordinate776);

Shape773.setGeometry(&LineSet774);

HAnimSegment709.addChild(&Shape773);

Shape& Shape777 =  Shape();
LineSet& LineSet778 =  LineSet();
LineSet778.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA779 =  ColorRGBA();
ColorRGBA779.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet778.addChild(&ColorRGBA779);

Coordinate& Coordinate780 =  Coordinate();
Coordinate780.setPoint(new float[]{0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796}, 6);
LineSet778.setCoord(Coordinate780);

Shape777.setGeometry(&LineSet778);

HAnimSegment709.addChild(&Shape777);

HAnimSite& HAnimSite781 =  HAnimSite();
HAnimSite781.setDEF(CString("hanim_skull_vertex_pt"));
HAnimSite781.X3DNode::setName(CString("skull_vertex_pt"));
HAnimSite781.setTranslation(new float[]{0.005,1.7504,0.0055});
TouchSensor& TouchSensor782 =  TouchSensor();
TouchSensor782.setDescription(CString("HAnimSite skull_tip"));
HAnimSite781.addChild(&TouchSensor782);

Shape& Shape783 =  Shape();
Shape783.setUSE(CString("HAnimSiteShape"));
HAnimSite781.addChild(&Shape783);

HAnimSegment709.addChild(&HAnimSite781);

HAnimSite& HAnimSite784 =  HAnimSite();
HAnimSite784.setDEF(CString("hanim_sellion_pt"));
HAnimSite784.X3DNode::setName(CString("sellion_pt"));
HAnimSite784.setTranslation(new float[]{0.0058,1.6316,0.0852});
TouchSensor& TouchSensor785 =  TouchSensor();
TouchSensor785.setDescription(CString("HAnimSite sellion_pt"));
HAnimSite784.addChild(&TouchSensor785);

Shape& Shape786 =  Shape();
Shape786.setUSE(CString("HAnimSiteShape"));
HAnimSite784.addChild(&Shape786);

HAnimSegment709.addChild(&HAnimSite784);

HAnimSite& HAnimSite787 =  HAnimSite();
HAnimSite787.setDEF(CString("hanim_r_infraorbitale_pt"));
HAnimSite787.X3DNode::setName(CString("r_infraorbitale_pt"));
HAnimSite787.setTranslation(new float[]{-0.0237,1.6171,0.0752});
TouchSensor& TouchSensor788 =  TouchSensor();
TouchSensor788.setDescription(CString("HAnimSite r_infraorbitale_pt"));
HAnimSite787.addChild(&TouchSensor788);

Shape& Shape789 =  Shape();
Shape789.setUSE(CString("HAnimSiteShape"));
HAnimSite787.addChild(&Shape789);

HAnimSegment709.addChild(&HAnimSite787);

HAnimSite& HAnimSite790 =  HAnimSite();
HAnimSite790.setDEF(CString("hanim_l_infraorbitale_pt"));
HAnimSite790.X3DNode::setName(CString("l_infraorbitale_pt"));
HAnimSite790.setTranslation(new float[]{0.0341,1.6171,0.0752});
TouchSensor& TouchSensor791 =  TouchSensor();
TouchSensor791.setDescription(CString("HAnimSite l_infraorbitale_pt"));
HAnimSite790.addChild(&TouchSensor791);

Shape& Shape792 =  Shape();
Shape792.setUSE(CString("HAnimSiteShape"));
HAnimSite790.addChild(&Shape792);

HAnimSegment709.addChild(&HAnimSite790);

HAnimSite& HAnimSite793 =  HAnimSite();
HAnimSite793.setDEF(CString("hanim_supramenton_pt"));
HAnimSite793.X3DNode::setName(CString("supramenton_pt"));
HAnimSite793.setTranslation(new float[]{0.0061,1.541,0.0805});
TouchSensor& TouchSensor794 =  TouchSensor();
TouchSensor794.setDescription(CString("HAnimSite supramenton_pt"));
HAnimSite793.addChild(&TouchSensor794);

Shape& Shape795 =  Shape();
Shape795.setUSE(CString("HAnimSiteShape"));
HAnimSite793.addChild(&Shape795);

HAnimSegment709.addChild(&HAnimSite793);

HAnimSite& HAnimSite796 =  HAnimSite();
HAnimSite796.setDEF(CString("hanim_r_tragion_pt"));
HAnimSite796.X3DNode::setName(CString("r_tragion_pt"));
HAnimSite796.setTranslation(new float[]{-0.0646,1.6347,0.0302});
TouchSensor& TouchSensor797 =  TouchSensor();
TouchSensor797.setDescription(CString("HAnimSite r_tragion_pt"));
HAnimSite796.addChild(&TouchSensor797);

Shape& Shape798 =  Shape();
Shape798.setUSE(CString("HAnimSiteShape"));
HAnimSite796.addChild(&Shape798);

HAnimSegment709.addChild(&HAnimSite796);

HAnimSite& HAnimSite799 =  HAnimSite();
HAnimSite799.setDEF(CString("hanim_r_gonion_pt"));
HAnimSite799.X3DNode::setName(CString("r_gonion_pt"));
HAnimSite799.setTranslation(new float[]{-0.052,1.5529,0.0347});
TouchSensor& TouchSensor800 =  TouchSensor();
TouchSensor800.setDescription(CString("HAnimSite r_gonion_pt"));
HAnimSite799.addChild(&TouchSensor800);

Shape& Shape801 =  Shape();
Shape801.setUSE(CString("HAnimSiteShape"));
HAnimSite799.addChild(&Shape801);

HAnimSegment709.addChild(&HAnimSite799);

HAnimSite& HAnimSite802 =  HAnimSite();
HAnimSite802.setDEF(CString("hanim_l_tragion_pt"));
HAnimSite802.X3DNode::setName(CString("l_tragion_pt"));
HAnimSite802.setTranslation(new float[]{0.0739,1.6348,0.0282});
TouchSensor& TouchSensor803 =  TouchSensor();
TouchSensor803.setDescription(CString("HAnimSite l_tragion_pt"));
HAnimSite802.addChild(&TouchSensor803);

Shape& Shape804 =  Shape();
Shape804.setUSE(CString("HAnimSiteShape"));
HAnimSite802.addChild(&Shape804);

HAnimSegment709.addChild(&HAnimSite802);

HAnimSite& HAnimSite805 =  HAnimSite();
HAnimSite805.setDEF(CString("hanim_l_gonion_pt"));
HAnimSite805.X3DNode::setName(CString("l_gonion_pt"));
HAnimSite805.setTranslation(new float[]{0.0631,1.553,0.033});
TouchSensor& TouchSensor806 =  TouchSensor();
TouchSensor806.setDescription(CString("HAnimSite l_gonion_pt"));
HAnimSite805.addChild(&TouchSensor806);

Shape& Shape807 =  Shape();
Shape807.setUSE(CString("HAnimSiteShape"));
HAnimSite805.addChild(&Shape807);

HAnimSegment709.addChild(&HAnimSite805);

HAnimSite& HAnimSite808 =  HAnimSite();
HAnimSite808.setDEF(CString("hanim_nuchale_pt"));
HAnimSite808.X3DNode::setName(CString("nuchale_pt"));
HAnimSite808.setTranslation(new float[]{0.0039,1.5972,-0.0796});
TouchSensor& TouchSensor809 =  TouchSensor();
TouchSensor809.setDescription(CString("HAnimSite nuchale_pt"));
HAnimSite808.addChild(&TouchSensor809);

Shape& Shape810 =  Shape();
Shape810.setUSE(CString("HAnimSiteShape"));
HAnimSite808.addChild(&Shape810);

HAnimSegment709.addChild(&HAnimSite808);

HAnimJoint708.addChildren(&HAnimSegment709);

HAnimJoint& HAnimJoint811 =  HAnimJoint();
HAnimJoint811.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint811.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint811.setCenter(new float[]{0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment812 =  HAnimSegment();
HAnimSegment812.setDEF(CString("hanim_l_eyeball"));
HAnimSegment812.X3DNode::setName(CString("l_eyeball"));
TouchSensor& TouchSensor813 =  TouchSensor();
TouchSensor813.setDescription(CString("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"));
HAnimSegment812.addChild(&TouchSensor813);

Transform& Transform814 =  Transform();
Transform814.setTranslation(new float[]{0.0336,1.6332,0.0502});
Shape& Shape815 =  Shape();
Shape815.setUSE(CString("HAnimJointShape"));
Transform814.addChild(&Shape815);

HAnimSegment812.addChild(&Transform814);

Shape& Shape816 =  Shape();
LineSet& LineSet817 =  LineSet();
LineSet817.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA818 =  ColorRGBA();
ColorRGBA818.setDEF(CString("HAnimSiteViewpointLineColorRGBA"));
ColorRGBA818.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
LineSet817.addChild(&ColorRGBA818);

Coordinate& Coordinate819 =  Coordinate();
Coordinate819.setPoint(new float[]{0.0336,1.6332,0.0502,0.034,1.64,0.05}, 6);
LineSet817.setCoord(Coordinate819);

Shape816.setGeometry(&LineSet817);

HAnimSegment812.addChild(&Shape816);

HAnimSite& HAnimSite820 =  HAnimSite();
HAnimSite820.setDEF(CString("hanim_l_eyeball_site_view"));
HAnimSite820.X3DNode::setName(CString("l_eyeball_site_view"));
HAnimSite820.setTranslation(new float[]{0.034,1.64,0.05});
TouchSensor& TouchSensor821 =  TouchSensor();
TouchSensor821.setDescription(CString("HAnimSite l_eyeball_site_view"));
HAnimSite820.addChild(&TouchSensor821);

Shape& Shape822 =  Shape();
Shape822.setUSE(CString("HAnimSiteShape"));
HAnimSite820.addChild(&Shape822);

Viewpoint& Viewpoint823 =  Viewpoint();
Viewpoint823.setDEF(CString("hanim_l_eyeball_site_viewpoint"));
Viewpoint823.setDescription(CString("l_eyeball_site_viewpoint looking forward"));
Viewpoint823.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint823.setOrientation(new float[]{0.0,1.0,0.0,3.141593});
HAnimSite820.addChild(&Viewpoint823);

Anchor& Anchor824 =  Anchor();
Anchor824.setDescription(CString("HAnimSite hanim_l_eyeball_site_view Viewpoint"));
Anchor824.setUrl(new CString[]{CString("#hanim_l_eyeball_site_viewpoint")}, 1);
LOD& LOD825 =  LOD();
LOD825.setForceTransitions(true);
LOD825.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo826 =  WorldInfo();
WorldInfo826.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD825.addChildren(&WorldInfo826);

Shape& Shape827 =  Shape();
Shape827.setDEF(CString("HAnimSiteViewpointShape"));
Appearance& Appearance828 =  Appearance();
Material& Material829 =  Material();
Material829.setDiffuseColor(new float[]{1.0,1.0,0.0});
Material829.setTransparency(0.3);
Appearance828.addChild(&Material829);

Shape827.addChild(&Appearance828);

IndexedFaceSet& IndexedFaceSet830 =  IndexedFaceSet();
IndexedFaceSet830.setDEF(CString("SiteViewpointDiamondIFS"));
IndexedFaceSet830.setCreaseAngle(0.5);
IndexedFaceSet830.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate831 =  Coordinate();
Coordinate831.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet830.setCoord(&Coordinate831);

Shape827.setGeometry(&IndexedFaceSet830);

LOD825.addChildren(Shape827);

Anchor824.addChild(&LOD825);

HAnimSite820.addChild(Anchor824);

HAnimSegment812.addChild(&HAnimSite820);

HAnimJoint811.addChildren(&HAnimSegment812);

HAnimJoint708.addChildren(&HAnimJoint811);

HAnimJoint& HAnimJoint832 =  HAnimJoint();
HAnimJoint832.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint832.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint832.setCenter(new float[]{0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment833 =  HAnimSegment();
HAnimSegment833.setDEF(CString("hanim_l_eyelid"));
HAnimSegment833.X3DNode::setName(CString("l_eyelid"));
TouchSensor& TouchSensor834 =  TouchSensor();
TouchSensor834.setDescription(CString("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"));
HAnimSegment833.addChild(&TouchSensor834);

Transform& Transform835 =  Transform();
Transform835.setTranslation(new float[]{0.0336,1.6332,0.0502});
Shape& Shape836 =  Shape();
Shape836.setUSE(CString("HAnimJointShape"));
Transform835.addChild(&Shape836);

HAnimSegment833.addChild(&Transform835);

HAnimJoint832.addChildren(&HAnimSegment833);

HAnimJoint708.addChildren(&HAnimJoint832);

HAnimJoint& HAnimJoint837 =  HAnimJoint();
HAnimJoint837.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint837.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint837.setCenter(new float[]{0.0336,1.635,0.0506});
HAnimSegment& HAnimSegment838 =  HAnimSegment();
HAnimSegment838.setDEF(CString("hanim_l_eyebrow"));
HAnimSegment838.X3DNode::setName(CString("l_eyebrow"));
TouchSensor& TouchSensor839 =  TouchSensor();
TouchSensor839.setDescription(CString("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"));
HAnimSegment838.addChild(&TouchSensor839);

Transform& Transform840 =  Transform();
Transform840.setTranslation(new float[]{0.0336,1.635,0.0506});
Shape& Shape841 =  Shape();
Shape841.setUSE(CString("HAnimJointShape"));
Transform840.addChild(&Shape841);

HAnimSegment838.addChild(&Transform840);

HAnimJoint837.addChildren(&HAnimSegment838);

HAnimJoint708.addChildren(&HAnimJoint837);

HAnimJoint& HAnimJoint842 =  HAnimJoint();
HAnimJoint842.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint842.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint842.setCenter(new float[]{-0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment843 =  HAnimSegment();
HAnimSegment843.setDEF(CString("hanim_r_eyeball"));
HAnimSegment843.X3DNode::setName(CString("r_eyeball"));
TouchSensor& TouchSensor844 =  TouchSensor();
TouchSensor844.setDescription(CString("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"));
HAnimSegment843.addChild(&TouchSensor844);

Transform& Transform845 =  Transform();
Transform845.setTranslation(new float[]{-0.0336,1.6332,0.0502});
Shape& Shape846 =  Shape();
Shape846.setUSE(CString("HAnimJointShape"));
Transform845.addChild(&Shape846);

HAnimSegment843.addChild(&Transform845);

Shape& Shape847 =  Shape();
LineSet& LineSet848 =  LineSet();
LineSet848.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA849 =  ColorRGBA();
ColorRGBA849.setUSE(CString("HAnimSiteViewpointLineColorRGBA"));
LineSet848.addChild(&ColorRGBA849);

Coordinate& Coordinate850 =  Coordinate();
Coordinate850.setPoint(new float[]{-0.0336,1.6332,0.0502,-0.034,1.64,0.05}, 6);
LineSet848.setCoord(Coordinate850);

Shape847.setGeometry(&LineSet848);

HAnimSegment843.addChild(&Shape847);

HAnimSite& HAnimSite851 =  HAnimSite();
HAnimSite851.setDEF(CString("hanim_r_eyeball_site_view"));
HAnimSite851.X3DNode::setName(CString("r_eyeball_site_view"));
HAnimSite851.setTranslation(new float[]{-0.034,1.64,0.05});
TouchSensor& TouchSensor852 =  TouchSensor();
TouchSensor852.setDescription(CString("HAnimSite r_eyeball_site_view"));
HAnimSite851.addChild(&TouchSensor852);

Shape& Shape853 =  Shape();
Shape853.setUSE(CString("HAnimSiteShape"));
HAnimSite851.addChild(&Shape853);

Viewpoint& Viewpoint854 =  Viewpoint();
Viewpoint854.setDEF(CString("hanim_r_eyeball_site_viewpoint"));
Viewpoint854.setDescription(CString("r_eyeball_site_viewpoint looking forward"));
Viewpoint854.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint854.setOrientation(new float[]{0.0,1.0,0.0,3.141593});
HAnimSite851.addChild(&Viewpoint854);

Anchor& Anchor855 =  Anchor();
Anchor855.setDescription(CString("HAnimSite hanim_r_eyeball_site_view Viewpoint"));
Anchor855.setUrl(new CString[]{CString("#hanim_r_eyeball_site_viewpoint")}, 1);
LOD& LOD856 =  LOD();
LOD856.setForceTransitions(true);
LOD856.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo857 =  WorldInfo();
WorldInfo857.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD856.addChildren(&WorldInfo857);

Shape& Shape858 =  Shape();
Shape858.setUSE(CString("HAnimSiteViewpointShape"));
LOD856.addChildren(Shape858);

Anchor855.addChild(&LOD856);

HAnimSite851.addChild(Anchor855);

HAnimSegment843.addChild(&HAnimSite851);

HAnimJoint842.addChildren(&HAnimSegment843);

HAnimJoint708.addChildren(&HAnimJoint842);

HAnimJoint& HAnimJoint859 =  HAnimJoint();
HAnimJoint859.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint859.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint859.setCenter(new float[]{-0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment860 =  HAnimSegment();
HAnimSegment860.setDEF(CString("hanim_r_eyelid"));
HAnimSegment860.X3DNode::setName(CString("r_eyelid"));
TouchSensor& TouchSensor861 =  TouchSensor();
TouchSensor861.setDescription(CString("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"));
HAnimSegment860.addChild(&TouchSensor861);

Transform& Transform862 =  Transform();
Transform862.setTranslation(new float[]{-0.0336,1.6332,0.0502});
Shape& Shape863 =  Shape();
Shape863.setUSE(CString("HAnimJointShape"));
Transform862.addChild(&Shape863);

HAnimSegment860.addChild(&Transform862);

HAnimJoint859.addChildren(&HAnimSegment860);

HAnimJoint708.addChildren(&HAnimJoint859);

HAnimJoint& HAnimJoint864 =  HAnimJoint();
HAnimJoint864.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint864.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint864.setCenter(new float[]{-0.0336,1.635,0.0506});
HAnimSegment& HAnimSegment865 =  HAnimSegment();
HAnimSegment865.setDEF(CString("hanim_r_eyebrow"));
HAnimSegment865.X3DNode::setName(CString("r_eyebrow"));
TouchSensor& TouchSensor866 =  TouchSensor();
TouchSensor866.setDescription(CString("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"));
HAnimSegment865.addChild(&TouchSensor866);

Transform& Transform867 =  Transform();
Transform867.setTranslation(new float[]{-0.0336,1.635,0.0506});
Shape& Shape868 =  Shape();
Shape868.setUSE(CString("HAnimJointShape"));
Transform867.addChild(&Shape868);

HAnimSegment865.addChild(&Transform867);

HAnimJoint864.addChildren(&HAnimSegment865);

HAnimJoint708.addChildren(&HAnimJoint864);

HAnimJoint& HAnimJoint869 =  HAnimJoint();
HAnimJoint869.setDEF(CString("hanim_temporomandibular"));
HAnimJoint869.X3DNode::setName(CString("temporomandibular"));
HAnimJoint869.setCenter(new float[]{0.0,1.63,0.015});
HAnimSegment& HAnimSegment870 =  HAnimSegment();
HAnimSegment870.setDEF(CString("hanim_jaw"));
HAnimSegment870.X3DNode::setName(CString("jaw"));
TouchSensor& TouchSensor871 =  TouchSensor();
TouchSensor871.setDescription(CString("HAnimJoint temporomandibular, HAnimSegment jaw"));
HAnimSegment870.addChild(&TouchSensor871);

Transform& Transform872 =  Transform();
Transform872.setTranslation(new float[]{0.0,1.63,0.015});
Shape& Shape873 =  Shape();
Shape873.setUSE(CString("HAnimJointShape"));
Transform872.addChild(&Shape873);

HAnimSegment870.addChild(&Transform872);

Shape& Shape874 =  Shape();
LineSet& LineSet875 =  LineSet();
LineSet875.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA876 =  ColorRGBA();
ColorRGBA876.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet875.addChild(&ColorRGBA876);

Coordinate& Coordinate877 =  Coordinate();
Coordinate877.setPoint(new float[]{0.0,1.63,0.015,0.045,1.63,0.0}, 6);
LineSet875.setCoord(Coordinate877);

Shape874.setGeometry(&LineSet875);

HAnimSegment870.addChild(&Shape874);

Shape& Shape878 =  Shape();
LineSet& LineSet879 =  LineSet();
LineSet879.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA880 =  ColorRGBA();
ColorRGBA880.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet879.addChild(&ColorRGBA880);

Coordinate& Coordinate881 =  Coordinate();
Coordinate881.setPoint(new float[]{0.0,1.63,0.015,-0.045,1.63,0.0}, 6);
LineSet879.setCoord(Coordinate881);

Shape878.setGeometry(&LineSet879);

HAnimSegment870.addChild(&Shape878);

HAnimSite& HAnimSite882 =  HAnimSite();
HAnimSite882.setDEF(CString("hanim_temporomandibular_l_site_pt"));
HAnimSite882.X3DNode::setName(CString("temporomandibular_l_site_pt"));
HAnimSite882.setTranslation(new float[]{0.045,1.63,0.0});
TouchSensor& TouchSensor883 =  TouchSensor();
TouchSensor883.setDescription(CString("HAnimSite temporomandibular_l_site_pt"));
HAnimSite882.addChild(&TouchSensor883);

Shape& Shape884 =  Shape();
Shape884.setUSE(CString("HAnimSiteShape"));
HAnimSite882.addChild(&Shape884);

HAnimSegment870.addChild(&HAnimSite882);

HAnimSite& HAnimSite885 =  HAnimSite();
HAnimSite885.setDEF(CString("hanim_temporomandibular_r_site_pt"));
HAnimSite885.X3DNode::setName(CString("temporomandibular_r_site_pt"));
HAnimSite885.setTranslation(new float[]{-0.045,1.63,0.0});
TouchSensor& TouchSensor886 =  TouchSensor();
TouchSensor886.setDescription(CString("HAnimSite temporomandibular_r_site_pt"));
HAnimSite885.addChild(&TouchSensor886);

Shape& Shape887 =  Shape();
Shape887.setUSE(CString("HAnimSiteShape"));
HAnimSite885.addChild(&Shape887);

HAnimSegment870.addChild(&HAnimSite885);

HAnimJoint869.addChildren(&HAnimSegment870);

HAnimJoint708.addChildren(&HAnimJoint869);

HAnimJoint699.addChildren(&HAnimJoint708);

HAnimJoint690.addChildren(&HAnimJoint699);

HAnimJoint681.addChildren(&HAnimJoint690);

HAnimJoint672.addChildren(&HAnimJoint681);

HAnimJoint663.addChildren(&HAnimJoint672);

HAnimJoint654.addChildren(&HAnimJoint663);

HAnimJoint631.addChildren(&HAnimJoint654);

HAnimJoint600.addChildren(&HAnimJoint631);

HAnimJoint& HAnimJoint888 =  HAnimJoint();
HAnimJoint888.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint888.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint888.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment889 =  HAnimSegment();
HAnimSegment889.setDEF(CString("hanim_l_clavicle"));
HAnimSegment889.X3DNode::setName(CString("l_clavicle"));
TouchSensor& TouchSensor890 =  TouchSensor();
TouchSensor890.setDescription(CString("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"));
HAnimSegment889.addChild(&TouchSensor890);

Transform& Transform891 =  Transform();
Transform891.setTranslation(new float[]{0.082,1.4488,-0.0353});
Shape& Shape892 =  Shape();
Shape892.setUSE(CString("HAnimJointShape"));
Transform891.addChild(&Shape892);

HAnimSegment889.addChild(&Transform891);

Shape& Shape893 =  Shape();
LineSet& LineSet894 =  LineSet();
LineSet894.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA895 =  ColorRGBA();
ColorRGBA895.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet894.addChild(&ColorRGBA895);

Coordinate& Coordinate896 =  Coordinate();
Coordinate896.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet894.setCoord(Coordinate896);

Shape893.setGeometry(&LineSet894);

HAnimSegment889.addChild(&Shape893);

Shape& Shape897 =  Shape();
LineSet& LineSet898 =  LineSet();
LineSet898.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA899 =  ColorRGBA();
ColorRGBA899.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet898.addChild(&ColorRGBA899);

Coordinate& Coordinate900 =  Coordinate();
Coordinate900.setPoint(new float[]{0.082,1.4488,-0.0353,0.0271,1.4943,0.0394}, 6);
LineSet898.setCoord(Coordinate900);

Shape897.setGeometry(&LineSet898);

HAnimSegment889.addChild(&Shape897);

Shape& Shape901 =  Shape();
LineSet& LineSet902 =  LineSet();
LineSet902.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA903 =  ColorRGBA();
ColorRGBA903.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet902.addChild(&ColorRGBA903);

Coordinate& Coordinate904 =  Coordinate();
Coordinate904.setPoint(new float[]{0.082,1.4488,-0.0353,0.2032,1.476,-0.049}, 6);
LineSet902.setCoord(Coordinate904);

Shape901.setGeometry(&LineSet902);

HAnimSegment889.addChild(&Shape901);

Shape& Shape905 =  Shape();
LineSet& LineSet906 =  LineSet();
LineSet906.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA907 =  ColorRGBA();
ColorRGBA907.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet906.addChild(&ColorRGBA907);

Coordinate& Coordinate908 =  Coordinate();
Coordinate908.setPoint(new float[]{0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075}, 6);
LineSet906.setCoord(Coordinate908);

Shape905.setGeometry(&LineSet906);

HAnimSegment889.addChild(&Shape905);

Shape& Shape909 =  Shape();
LineSet& LineSet910 =  LineSet();
LineSet910.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA911 =  ColorRGBA();
ColorRGBA911.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet910.addChild(&ColorRGBA911);

Coordinate& Coordinate912 =  Coordinate();
Coordinate912.setPoint(new float[]{0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875}, 6);
LineSet910.setCoord(Coordinate912);

Shape909.setGeometry(&LineSet910);

HAnimSegment889.addChild(&Shape909);

HAnimSite& HAnimSite913 =  HAnimSite();
HAnimSite913.setDEF(CString("hanim_l_clavicle_pt"));
HAnimSite913.X3DNode::setName(CString("l_clavicle_pt"));
HAnimSite913.setTranslation(new float[]{0.0271,1.4943,0.0394});
TouchSensor& TouchSensor914 =  TouchSensor();
TouchSensor914.setDescription(CString("HAnimSite l_clavicale_pt"));
HAnimSite913.addChild(&TouchSensor914);

Shape& Shape915 =  Shape();
Shape915.setUSE(CString("HAnimSiteShape"));
HAnimSite913.addChild(&Shape915);

HAnimSegment889.addChild(&HAnimSite913);

HAnimSite& HAnimSite916 =  HAnimSite();
HAnimSite916.setDEF(CString("hanim_l_acromion_pt"));
HAnimSite916.X3DNode::setName(CString("l_acromion_pt"));
HAnimSite916.setTranslation(new float[]{0.2032,1.476,-0.049});
TouchSensor& TouchSensor917 =  TouchSensor();
TouchSensor917.setDescription(CString("HAnimSite l_acromion_pt"));
HAnimSite916.addChild(&TouchSensor917);

Shape& Shape918 =  Shape();
Shape918.setUSE(CString("HAnimSiteShape"));
HAnimSite916.addChild(&Shape918);

HAnimSegment889.addChild(&HAnimSite916);

HAnimSite& HAnimSite919 =  HAnimSite();
HAnimSite919.setDEF(CString("hanim_l_axilla_proximal_pt"));
HAnimSite919.X3DNode::setName(CString("l_axilla_proximal_pt"));
HAnimSite919.setTranslation(new float[]{0.1777,1.4065,-0.0075});
TouchSensor& TouchSensor920 =  TouchSensor();
TouchSensor920.setDescription(CString("HAnimSite l_axilla_ant_pt"));
HAnimSite919.addChild(&TouchSensor920);

Shape& Shape921 =  Shape();
Shape921.setUSE(CString("HAnimSiteShape"));
HAnimSite919.addChild(&Shape921);

HAnimSegment889.addChild(&HAnimSite919);

HAnimSite& HAnimSite922 =  HAnimSite();
HAnimSite922.setDEF(CString("hanim_l_axilla_distal_pt"));
HAnimSite922.X3DNode::setName(CString("l_axilla_distal_pt"));
HAnimSite922.setTranslation(new float[]{0.1706,1.4072,-0.0875});
TouchSensor& TouchSensor923 =  TouchSensor();
TouchSensor923.setDescription(CString("HAnimSite l_axilla_post_pt"));
HAnimSite922.addChild(&TouchSensor923);

Shape& Shape924 =  Shape();
Shape924.setUSE(CString("HAnimSiteShape"));
HAnimSite922.addChild(&Shape924);

HAnimSegment889.addChild(&HAnimSite922);

HAnimJoint888.addChildren(&HAnimSegment889);

HAnimJoint& HAnimJoint925 =  HAnimJoint();
HAnimJoint925.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint925.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint925.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment926 =  HAnimSegment();
HAnimSegment926.setDEF(CString("hanim_l_scapula"));
HAnimSegment926.X3DNode::setName(CString("l_scapula"));
TouchSensor& TouchSensor927 =  TouchSensor();
TouchSensor927.setDescription(CString("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"));
HAnimSegment926.addChild(&TouchSensor927);

Transform& Transform928 =  Transform();
Transform928.setTranslation(new float[]{0.0962,1.4269,-0.0424});
Shape& Shape929 =  Shape();
Shape929.setUSE(CString("HAnimJointShape"));
Transform928.addChild(&Shape929);

HAnimSegment926.addChild(&Transform928);

Shape& Shape930 =  Shape();
LineSet& LineSet931 =  LineSet();
LineSet931.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA932 =  ColorRGBA();
ColorRGBA932.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet931.addChild(&ColorRGBA932);

Coordinate& Coordinate933 =  Coordinate();
Coordinate933.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet931.setCoord(Coordinate933);

Shape930.setGeometry(&LineSet931);

HAnimSegment926.addChild(&Shape930);

HAnimJoint925.addChildren(&HAnimSegment926);

HAnimJoint& HAnimJoint934 =  HAnimJoint();
HAnimJoint934.setDEF(CString("hanim_l_shoulder"));
HAnimJoint934.X3DNode::setName(CString("l_shoulder"));
HAnimJoint934.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment935 =  HAnimSegment();
HAnimSegment935.setDEF(CString("hanim_l_upperarm"));
HAnimSegment935.X3DNode::setName(CString("l_upperarm"));
TouchSensor& TouchSensor936 =  TouchSensor();
TouchSensor936.setDescription(CString("HAnimJoint l_shoulder, HAnimSegment l_upperarm"));
HAnimSegment935.addChild(&TouchSensor936);

Transform& Transform937 =  Transform();
Transform937.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Shape& Shape938 =  Shape();
Shape938.setUSE(CString("HAnimJointShape"));
Transform937.addChild(&Shape938);

HAnimSegment935.addChild(&Transform937);

Shape& Shape939 =  Shape();
LineSet& LineSet940 =  LineSet();
LineSet940.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA941 =  ColorRGBA();
ColorRGBA941.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet940.addChild(&ColorRGBA941);

Coordinate& Coordinate942 =  Coordinate();
Coordinate942.setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet940.setCoord(Coordinate942);

Shape939.setGeometry(&LineSet940);

HAnimSegment935.addChild(&Shape939);

Shape& Shape943 =  Shape();
LineSet& LineSet944 =  LineSet();
LineSet944.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA945 =  ColorRGBA();
ColorRGBA945.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet944.addChild(&ColorRGBA945);

Coordinate& Coordinate946 =  Coordinate();
Coordinate946.setPoint(new float[]{0.2029,1.4376,-0.0387,0.228,1.1482,-0.11}, 6);
LineSet944.setCoord(Coordinate946);

Shape943.setGeometry(&LineSet944);

HAnimSegment935.addChild(&Shape943);

HAnimSite& HAnimSite947 =  HAnimSite();
HAnimSite947.setDEF(CString("hanim_l_humeral_lateral_epicondyle_pt"));
HAnimSite947.X3DNode::setName(CString("l_humeral_lateral_epicondyle_pt"));
HAnimSite947.setTranslation(new float[]{0.228,1.1482,-0.11});
TouchSensor& TouchSensor948 =  TouchSensor();
TouchSensor948.setDescription(CString("HAnimSite l_humeral_lateral_epicn_pt"));
HAnimSite947.addChild(&TouchSensor948);

Shape& Shape949 =  Shape();
Shape949.setUSE(CString("HAnimSiteShape"));
HAnimSite947.addChild(&Shape949);

HAnimSegment935.addChild(&HAnimSite947);

HAnimJoint934.addChildren(&HAnimSegment935);

HAnimJoint& HAnimJoint950 =  HAnimJoint();
HAnimJoint950.setDEF(CString("hanim_l_elbow"));
HAnimJoint950.X3DNode::setName(CString("l_elbow"));
HAnimJoint950.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment951 =  HAnimSegment();
HAnimSegment951.setDEF(CString("hanim_l_forearm"));
HAnimSegment951.X3DNode::setName(CString("l_forearm"));
TouchSensor& TouchSensor952 =  TouchSensor();
TouchSensor952.setDescription(CString("HAnimJoint l_elbow, HAnimSegment l_forearm"));
HAnimSegment951.addChild(&TouchSensor952);

Transform& Transform953 =  Transform();
Transform953.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Shape& Shape954 =  Shape();
Shape954.setUSE(CString("HAnimJointShape"));
Transform953.addChild(&Shape954);

HAnimSegment951.addChild(&Transform953);

Shape& Shape955 =  Shape();
LineSet& LineSet956 =  LineSet();
LineSet956.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA957 =  ColorRGBA();
ColorRGBA957.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet956.addChild(&ColorRGBA957);

Coordinate& Coordinate958 =  Coordinate();
Coordinate958.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet956.setCoord(Coordinate958);

Shape955.setGeometry(&LineSet956);

HAnimSegment951.addChild(&Shape955);

Shape& Shape959 =  Shape();
LineSet& LineSet960 =  LineSet();
LineSet960.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA961 =  ColorRGBA();
ColorRGBA961.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet960.addChild(&ColorRGBA961);

Coordinate& Coordinate962 =  Coordinate();
Coordinate962.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415}, 6);
LineSet960.setCoord(Coordinate962);

Shape959.setGeometry(&LineSet960);

HAnimSegment951.addChild(&Shape959);

Shape& Shape963 =  Shape();
LineSet& LineSet964 =  LineSet();
LineSet964.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA965 =  ColorRGBA();
ColorRGBA965.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet964.addChild(&ColorRGBA965);

Coordinate& Coordinate966 =  Coordinate();
Coordinate966.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123}, 6);
LineSet964.setCoord(Coordinate966);

Shape963.setGeometry(&LineSet964);

HAnimSegment951.addChild(&Shape963);

Shape& Shape967 =  Shape();
LineSet& LineSet968 =  LineSet();
LineSet968.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA969 =  ColorRGBA();
ColorRGBA969.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet968.addChild(&ColorRGBA969);

Coordinate& Coordinate970 =  Coordinate();
Coordinate970.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113}, 6);
LineSet968.setCoord(Coordinate970);

Shape967.setGeometry(&LineSet968);

HAnimSegment951.addChild(&Shape967);

Shape& Shape971 =  Shape();
LineSet& LineSet972 =  LineSet();
LineSet972.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA973 =  ColorRGBA();
ColorRGBA973.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet972.addChild(&ColorRGBA973);

Coordinate& Coordinate974 =  Coordinate();
Coordinate974.setPoint(new float[]{0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167}, 6);
LineSet972.setCoord(Coordinate974);

Shape971.setGeometry(&LineSet972);

HAnimSegment951.addChild(&Shape971);

HAnimSite& HAnimSite975 =  HAnimSite();
HAnimSite975.setDEF(CString("hanim_l_radial_styloid_pt"));
HAnimSite975.X3DNode::setName(CString("l_radial_styloid_pt"));
HAnimSite975.setTranslation(new float[]{0.1901,0.8645,-0.0415});
TouchSensor& TouchSensor976 =  TouchSensor();
TouchSensor976.setDescription(CString("HAnimSite l_radial_styloid_pt"));
HAnimSite975.addChild(&TouchSensor976);

Shape& Shape977 =  Shape();
Shape977.setUSE(CString("HAnimSiteShape"));
HAnimSite975.addChild(&Shape977);

HAnimSegment951.addChild(&HAnimSite975);

HAnimSite& HAnimSite978 =  HAnimSite();
HAnimSite978.setDEF(CString("hanim_l_olecranon_pt"));
HAnimSite978.X3DNode::setName(CString("l_olecranon_pt"));
HAnimSite978.setTranslation(new float[]{0.1962,1.1375,-0.1123});
TouchSensor& TouchSensor979 =  TouchSensor();
TouchSensor979.setDescription(CString("HAnimSite l_olecranon_pt"));
HAnimSite978.addChild(&TouchSensor979);

Shape& Shape980 =  Shape();
Shape980.setUSE(CString("HAnimSiteShape"));
HAnimSite978.addChild(&Shape980);

HAnimSegment951.addChild(&HAnimSite978);

HAnimSite& HAnimSite981 =  HAnimSite();
HAnimSite981.setDEF(CString("hanim_l_humeral_medial_epicondyle_pt"));
HAnimSite981.X3DNode::setName(CString("l_humeral_medial_epicondyle_pt"));
HAnimSite981.setTranslation(new float[]{0.1735,1.1272,-0.1113});
TouchSensor& TouchSensor982 =  TouchSensor();
TouchSensor982.setDescription(CString("HAnimSite l_humeral_medial_epicn_pt"));
HAnimSite981.addChild(&TouchSensor982);

Shape& Shape983 =  Shape();
Shape983.setUSE(CString("HAnimSiteShape"));
HAnimSite981.addChild(&Shape983);

HAnimSegment951.addChild(&HAnimSite981);

HAnimSite& HAnimSite984 =  HAnimSite();
HAnimSite984.setDEF(CString("hanim_l_radiale_pt"));
HAnimSite984.X3DNode::setName(CString("l_radiale_pt"));
HAnimSite984.setTranslation(new float[]{0.2182,1.1212,-0.1167});
TouchSensor& TouchSensor985 =  TouchSensor();
TouchSensor985.setDescription(CString("HAnimSite l_radiale_pt"));
HAnimSite984.addChild(&TouchSensor985);

Shape& Shape986 =  Shape();
Shape986.setUSE(CString("HAnimSiteShape"));
HAnimSite984.addChild(&Shape986);

HAnimSegment951.addChild(&HAnimSite984);

HAnimJoint950.addChildren(&HAnimSegment951);

HAnimJoint& HAnimJoint987 =  HAnimJoint();
HAnimJoint987.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint987.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint987.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment988 =  HAnimSegment();
HAnimSegment988.setDEF(CString("hanim_l_carpal"));
HAnimSegment988.X3DNode::setName(CString("l_carpal"));
TouchSensor& TouchSensor989 =  TouchSensor();
TouchSensor989.setDescription(CString("HAnimJoint l_radiocarpal, HAnimSegment l_carpal"));
HAnimSegment988.addChild(&TouchSensor989);

Transform& Transform990 =  Transform();
Transform990.setTranslation(new float[]{0.1984,0.8663,-0.0583});
Shape& Shape991 =  Shape();
Shape991.setUSE(CString("HAnimJointShape"));
Transform990.addChild(&Shape991);

HAnimSegment988.addChild(&Transform990);

Shape& Shape992 =  Shape();
LineSet& LineSet993 =  LineSet();
LineSet993.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA994 =  ColorRGBA();
ColorRGBA994.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet993.addChild(&ColorRGBA994);

Coordinate& Coordinate995 =  Coordinate();
Coordinate995.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534}, 6);
LineSet993.setCoord(Coordinate995);

Shape992.setGeometry(&LineSet993);

HAnimSegment988.addChild(&Shape992);

Shape& Shape996 =  Shape();
LineSet& LineSet997 =  LineSet();
LineSet997.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA998 =  ColorRGBA();
ColorRGBA998.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet997.addChild(&ColorRGBA998);

Coordinate& Coordinate999 =  Coordinate();
Coordinate999.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028}, 6);
LineSet997.setCoord(Coordinate999);

Shape996.setGeometry(&LineSet997);

HAnimSegment988.addChild(&Shape996);

Shape& Shape1000 =  Shape();
LineSet& LineSet1001 =  LineSet();
LineSet1001.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1002 =  ColorRGBA();
ColorRGBA1002.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1001.addChild(&ColorRGBA1002);

Coordinate& Coordinate1003 =  Coordinate();
Coordinate1003.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053}, 6);
LineSet1001.setCoord(Coordinate1003);

Shape1000.setGeometry(&LineSet1001);

HAnimSegment988.addChild(&Shape1000);

Shape& Shape1004 =  Shape();
LineSet& LineSet1005 =  LineSet();
LineSet1005.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1006 =  ColorRGBA();
ColorRGBA1006.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1005.addChild(&ColorRGBA1006);

Coordinate& Coordinate1007 =  Coordinate();
Coordinate1007.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794}, 6);
LineSet1005.setCoord(Coordinate1007);

Shape1004.setGeometry(&LineSet1005);

HAnimSegment988.addChild(&Shape1004);

Shape& Shape1008 =  Shape();
LineSet& LineSet1009 =  LineSet();
LineSet1009.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1010 =  ColorRGBA();
ColorRGBA1010.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1009.addChild(&ColorRGBA1010);

Coordinate& Coordinate1011 =  Coordinate();
Coordinate1011.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036}, 6);
LineSet1009.setCoord(Coordinate1011);

Shape1008.setGeometry(&LineSet1009);

HAnimSegment988.addChild(&Shape1008);

Shape& Shape1012 =  Shape();
LineSet& LineSet1013 =  LineSet();
LineSet1013.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1014 =  ColorRGBA();
ColorRGBA1014.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1013.addChild(&ColorRGBA1014);

Coordinate& Coordinate1015 =  Coordinate();
Coordinate1015.setPoint(new float[]{0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237}, 6);
LineSet1013.setCoord(Coordinate1015);

Shape1012.setGeometry(&LineSet1013);

HAnimSegment988.addChild(&Shape1012);

Shape& Shape1016 =  Shape();
LineSet& LineSet1017 =  LineSet();
LineSet1017.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1018 =  ColorRGBA();
ColorRGBA1018.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1017.addChild(&ColorRGBA1018);

Coordinate& Coordinate1019 =  Coordinate();
Coordinate1019.setPoint(new float[]{0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648}, 6);
LineSet1017.setCoord(Coordinate1019);

Shape1016.setGeometry(&LineSet1017);

HAnimSegment988.addChild(&Shape1016);

Shape& Shape1020 =  Shape();
LineSet& LineSet1021 =  LineSet();
LineSet1021.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1022 =  ColorRGBA();
ColorRGBA1022.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1021.addChild(&ColorRGBA1022);

Coordinate& Coordinate1023 =  Coordinate();
Coordinate1023.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122}, 6);
LineSet1021.setCoord(Coordinate1023);

Shape1020.setGeometry(&LineSet1021);

HAnimSegment988.addChild(&Shape1020);

Shape& Shape1024 =  Shape();
LineSet& LineSet1025 =  LineSet();
LineSet1025.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1026 =  ColorRGBA();
ColorRGBA1026.setUSE(CString("HAnimSiteViewpointLineColorRGBA"));
LineSet1025.addChild(&ColorRGBA1026);

Coordinate& Coordinate1027 =  Coordinate();
Coordinate1027.setPoint(new float[]{0.1984,0.8663,-0.0583,0.3,0.75,0.45}, 6);
LineSet1025.setCoord(Coordinate1027);

Shape1024.setGeometry(&LineSet1025);

HAnimSegment988.addChild(&Shape1024);

HAnimSite& HAnimSite1028 =  HAnimSite();
HAnimSite1028.setDEF(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimSite1028.X3DNode::setName(CString("l_metacarpal_phalanx_2_pt"));
HAnimSite1028.setTranslation(new float[]{0.2009,0.8139,-0.0237});
TouchSensor& TouchSensor1029 =  TouchSensor();
TouchSensor1029.setDescription(CString("HAnimSite l_metacarpal_pha2_pt"));
HAnimSite1028.addChild(&TouchSensor1029);

Shape& Shape1030 =  Shape();
Shape1030.setUSE(CString("HAnimSiteShape"));
HAnimSite1028.addChild(&Shape1030);

HAnimSegment988.addChild(&HAnimSite1028);

HAnimSite& HAnimSite1031 =  HAnimSite();
HAnimSite1031.setDEF(CString("hanim_l_ulnar_styloid_pt"));
HAnimSite1031.X3DNode::setName(CString("l_ulnar_styloid_pt"));
HAnimSite1031.setTranslation(new float[]{0.2142,0.8529,-0.0648});
TouchSensor& TouchSensor1032 =  TouchSensor();
TouchSensor1032.setDescription(CString("HAnimSite l_ulnar_styloid_pt"));
HAnimSite1031.addChild(&TouchSensor1032);

Shape& Shape1033 =  Shape();
Shape1033.setUSE(CString("HAnimSiteShape"));
HAnimSite1031.addChild(&Shape1033);

HAnimSegment988.addChild(&HAnimSite1031);

HAnimSite& HAnimSite1034 =  HAnimSite();
HAnimSite1034.setDEF(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimSite1034.X3DNode::setName(CString("l_metacarpal_phalanx_5_pt"));
HAnimSite1034.setTranslation(new float[]{0.1929,0.786,-0.1122});
TouchSensor& TouchSensor1035 =  TouchSensor();
TouchSensor1035.setDescription(CString("HAnimSite l_metacarpal_pha5_pt"));
HAnimSite1034.addChild(&TouchSensor1035);

Shape& Shape1036 =  Shape();
Shape1036.setUSE(CString("HAnimSiteShape"));
HAnimSite1034.addChild(&Shape1036);

HAnimSegment988.addChild(&HAnimSite1034);

HAnimSite& HAnimSite1037 =  HAnimSite();
HAnimSite1037.setDEF(CString("hanim_l_hand_front_view"));
HAnimSite1037.X3DNode::setName(CString("l_hand_front_view"));
HAnimSite1037.setTranslation(new float[]{0.3,0.75,0.45});
TouchSensor& TouchSensor1038 =  TouchSensor();
TouchSensor1038.setDescription(CString("HAnimSite l_hand_front_view"));
HAnimSite1037.addChild(&TouchSensor1038);

Shape& Shape1039 =  Shape();
Shape1039.setUSE(CString("HAnimSiteShape"));
HAnimSite1037.addChild(&Shape1039);

Viewpoint& Viewpoint1040 =  Viewpoint();
Viewpoint1040.setDEF(CString("hanim_l_hand_front_viewpoint"));
Viewpoint1040.setDescription(CString("left hand front"));
Viewpoint1040.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1040.setCenterOfRotation(new float[]{0.0,0.7,0.0});
HAnimSite1037.addChild(&Viewpoint1040);

Anchor& Anchor1041 =  Anchor();
Anchor1041.setDescription(CString("HAnimSite hanim_l_hand_front_view Viewpoint"));
Anchor1041.setUrl(new CString[]{CString("#hanim_l_hand_front_viewpoint")}, 1);
LOD& LOD1042 =  LOD();
LOD1042.setForceTransitions(true);
LOD1042.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1043 =  WorldInfo();
WorldInfo1043.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1042.addChildren(&WorldInfo1043);

Shape& Shape1044 =  Shape();
Shape1044.setUSE(CString("HAnimSiteViewpointShape"));
LOD1042.addChildren(Shape1044);

Anchor1041.addChild(&LOD1042);

HAnimSite1037.addChild(Anchor1041);

HAnimSegment988.addChild(&HAnimSite1037);

HAnimJoint987.addChildren(&HAnimSegment988);

HAnimJoint& HAnimJoint1045 =  HAnimJoint();
HAnimJoint1045.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint1045.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint1045.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment1046 =  HAnimSegment();
HAnimSegment1046.setDEF(CString("hanim_l_metacarpal_1"));
HAnimSegment1046.X3DNode::setName(CString("l_metacarpal_1"));
TouchSensor& TouchSensor1047 =  TouchSensor();
TouchSensor1047.setDescription(CString("HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1"));
HAnimSegment1046.addChild(&TouchSensor1047);

Transform& Transform1048 =  Transform();
Transform1048.setTranslation(new float[]{0.1924,0.8472,-0.0534});
Shape& Shape1049 =  Shape();
Shape1049.setUSE(CString("HAnimJointShape"));
Transform1048.addChild(&Shape1049);

HAnimSegment1046.addChild(&Transform1048);

Shape& Shape1050 =  Shape();
LineSet& LineSet1051 =  LineSet();
LineSet1051.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1052 =  ColorRGBA();
ColorRGBA1052.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1051.addChild(&ColorRGBA1052);

Coordinate& Coordinate1053 =  Coordinate();
Coordinate1053.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet1051.setCoord(Coordinate1053);

Shape1050.setGeometry(&LineSet1051);

HAnimSegment1046.addChild(&Shape1050);

HAnimJoint1045.addChildren(&HAnimSegment1046);

HAnimJoint& HAnimJoint1054 =  HAnimJoint();
HAnimJoint1054.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint1054.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint1054.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment1055 =  HAnimSegment();
HAnimSegment1055.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimSegment1055.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
TouchSensor& TouchSensor1056 =  TouchSensor();
TouchSensor1056.setDescription(CString("HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1"));
HAnimSegment1055.addChild(&TouchSensor1056);

Transform& Transform1057 =  Transform();
Transform1057.setTranslation(new float[]{0.1951,0.8226,0.0246});
Shape& Shape1058 =  Shape();
Shape1058.setUSE(CString("HAnimJointShape"));
Transform1057.addChild(&Shape1058);

HAnimSegment1055.addChild(&Transform1057);

Shape& Shape1059 =  Shape();
LineSet& LineSet1060 =  LineSet();
LineSet1060.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1061 =  ColorRGBA();
ColorRGBA1061.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1060.addChild(&ColorRGBA1061);

Coordinate& Coordinate1062 =  Coordinate();
Coordinate1062.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet1060.setCoord(Coordinate1062);

Shape1059.setGeometry(&LineSet1060);

HAnimSegment1055.addChild(&Shape1059);

HAnimJoint1054.addChildren(&HAnimSegment1055);

HAnimJoint& HAnimJoint1063 =  HAnimJoint();
HAnimJoint1063.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint1063.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint1063.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimSegment& HAnimSegment1064 =  HAnimSegment();
HAnimSegment1064.setDEF(CString("hanim_l_carpal_distal_phalanx_1"));
HAnimSegment1064.X3DNode::setName(CString("l_carpal_distal_phalanx_1"));
TouchSensor& TouchSensor1065 =  TouchSensor();
TouchSensor1065.setDescription(CString("HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1"));
HAnimSegment1064.addChild(&TouchSensor1065);

Transform& Transform1066 =  Transform();
Transform1066.setTranslation(new float[]{0.1955,0.8159,0.0464});
Shape& Shape1067 =  Shape();
Shape1067.setUSE(CString("HAnimJointShape"));
Transform1066.addChild(&Shape1067);

HAnimSegment1064.addChild(&Transform1066);

Shape& Shape1068 =  Shape();
LineSet& LineSet1069 =  LineSet();
LineSet1069.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1070 =  ColorRGBA();
ColorRGBA1070.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1069.addChild(&ColorRGBA1070);

Coordinate& Coordinate1071 =  Coordinate();
Coordinate1071.setPoint(new float[]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759}, 6);
LineSet1069.setCoord(Coordinate1071);

Shape1068.setGeometry(&LineSet1069);

HAnimSegment1064.addChild(&Shape1068);

HAnimSite& HAnimSite1072 =  HAnimSite();
HAnimSite1072.setDEF(CString("hanim_l_carpal_distal_phalanx_1_pt"));
HAnimSite1072.X3DNode::setName(CString("l_carpal_distal_phalanx_1_pt"));
HAnimSite1072.setTranslation(new float[]{0.1982,0.8061,0.0759});
TouchSensor& TouchSensor1073 =  TouchSensor();
TouchSensor1073.setDescription(CString("HAnimSite l_thumb_distal_tip"));
HAnimSite1072.addChild(&TouchSensor1073);

Shape& Shape1074 =  Shape();
Shape1074.setUSE(CString("HAnimSiteShape"));
HAnimSite1072.addChild(&Shape1074);

HAnimSegment1064.addChild(&HAnimSite1072);

HAnimJoint1063.addChildren(&HAnimSegment1064);

HAnimJoint1054.addChildren(&HAnimJoint1063);

HAnimJoint1045.addChildren(&HAnimJoint1054);

HAnimJoint987.addChildren(&HAnimJoint1045);

HAnimJoint& HAnimJoint1075 =  HAnimJoint();
HAnimJoint1075.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint1075.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint1075.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment1076 =  HAnimSegment();
HAnimSegment1076.setDEF(CString("hanim_l_metacarpal_2"));
HAnimSegment1076.X3DNode::setName(CString("l_metacarpal_2"));
TouchSensor& TouchSensor1077 =  TouchSensor();
TouchSensor1077.setDescription(CString("HAnimJoint l_index0, HAnimSegment l_metacarpal_2"));
HAnimSegment1076.addChild(&TouchSensor1077);

Transform& Transform1078 =  Transform();
Transform1078.setTranslation(new float[]{0.1983,0.8024,-0.028});
Shape& Shape1079 =  Shape();
Shape1079.setUSE(CString("HAnimJointShape"));
Transform1078.addChild(&Shape1079);

HAnimSegment1076.addChild(&Transform1078);

Shape& Shape1080 =  Shape();
LineSet& LineSet1081 =  LineSet();
LineSet1081.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1082 =  ColorRGBA();
ColorRGBA1082.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1081.addChild(&ColorRGBA1082);

Coordinate& Coordinate1083 =  Coordinate();
Coordinate1083.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet1081.setCoord(Coordinate1083);

Shape1080.setGeometry(&LineSet1081);

HAnimSegment1076.addChild(&Shape1080);

HAnimJoint1075.addChildren(&HAnimSegment1076);

HAnimJoint& HAnimJoint1084 =  HAnimJoint();
HAnimJoint1084.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint1084.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint1084.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment1085 =  HAnimSegment();
HAnimSegment1085.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimSegment1085.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
TouchSensor& TouchSensor1086 =  TouchSensor();
TouchSensor1086.setDescription(CString("HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2"));
HAnimSegment1085.addChild(&TouchSensor1086);

Transform& Transform1087 =  Transform();
Transform1087.setTranslation(new float[]{0.1983,0.7815,-0.028});
Shape& Shape1088 =  Shape();
Shape1088.setUSE(CString("HAnimJointShape"));
Transform1087.addChild(&Shape1088);

HAnimSegment1085.addChild(&Transform1087);

Shape& Shape1089 =  Shape();
LineSet& LineSet1090 =  LineSet();
LineSet1090.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1091 =  ColorRGBA();
ColorRGBA1091.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1090.addChild(&ColorRGBA1091);

Coordinate& Coordinate1092 =  Coordinate();
Coordinate1092.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet1090.setCoord(Coordinate1092);

Shape1089.setGeometry(&LineSet1090);

HAnimSegment1085.addChild(&Shape1089);

HAnimJoint1084.addChildren(&HAnimSegment1085);

HAnimJoint& HAnimJoint1093 =  HAnimJoint();
HAnimJoint1093.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint1093.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint1093.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment1094 =  HAnimSegment();
HAnimSegment1094.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimSegment1094.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
TouchSensor& TouchSensor1095 =  TouchSensor();
TouchSensor1095.setDescription(CString("HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2"));
HAnimSegment1094.addChild(&TouchSensor1095);

Transform& Transform1096 =  Transform();
Transform1096.setTranslation(new float[]{0.2017,0.7363,-0.0248});
Shape& Shape1097 =  Shape();
Shape1097.setUSE(CString("HAnimJointShape"));
Transform1096.addChild(&Shape1097);

HAnimSegment1094.addChild(&Transform1096);

Shape& Shape1098 =  Shape();
LineSet& LineSet1099 =  LineSet();
LineSet1099.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1100 =  ColorRGBA();
ColorRGBA1100.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1099.addChild(&ColorRGBA1100);

Coordinate& Coordinate1101 =  Coordinate();
Coordinate1101.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet1099.setCoord(Coordinate1101);

Shape1098.setGeometry(&LineSet1099);

HAnimSegment1094.addChild(&Shape1098);

HAnimJoint1093.addChildren(&HAnimSegment1094);

HAnimJoint& HAnimJoint1102 =  HAnimJoint();
HAnimJoint1102.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint1102.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint1102.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimSegment& HAnimSegment1103 =  HAnimSegment();
HAnimSegment1103.setDEF(CString("hanim_l_carpal_distal_phalanx_2"));
HAnimSegment1103.X3DNode::setName(CString("l_carpal_distal_phalanx_2"));
TouchSensor& TouchSensor1104 =  TouchSensor();
TouchSensor1104.setDescription(CString("HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2"));
HAnimSegment1103.addChild(&TouchSensor1104);

Transform& Transform1105 =  Transform();
Transform1105.setTranslation(new float[]{0.2028,0.7139,-0.0236});
Shape& Shape1106 =  Shape();
Shape1106.setUSE(CString("HAnimJointShape"));
Transform1105.addChild(&Shape1106);

HAnimSegment1103.addChild(&Transform1105);

Shape& Shape1107 =  Shape();
LineSet& LineSet1108 =  LineSet();
LineSet1108.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1109 =  ColorRGBA();
ColorRGBA1109.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1108.addChild(&ColorRGBA1109);

Coordinate& Coordinate1110 =  Coordinate();
Coordinate1110.setPoint(new float[]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245}, 6);
LineSet1108.setCoord(Coordinate1110);

Shape1107.setGeometry(&LineSet1108);

HAnimSegment1103.addChild(&Shape1107);

Shape& Shape1111 =  Shape();
LineSet& LineSet1112 =  LineSet();
LineSet1112.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1113 =  ColorRGBA();
ColorRGBA1113.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1112.addChild(&ColorRGBA1113);

Coordinate& Coordinate1114 =  Coordinate();
Coordinate1114.setPoint(new float[]{0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482}, 6);
LineSet1112.setCoord(Coordinate1114);

Shape1111.setGeometry(&LineSet1112);

HAnimSegment1103.addChild(&Shape1111);

HAnimSite& HAnimSite1115 =  HAnimSite();
HAnimSite1115.setDEF(CString("hanim_l_carpal_distal_phalanx_2_pt"));
HAnimSite1115.X3DNode::setName(CString("l_carpal_distal_phalanx_2_pt"));
HAnimSite1115.setTranslation(new float[]{0.2089,0.6858,-0.0245});
TouchSensor& TouchSensor1116 =  TouchSensor();
TouchSensor1116.setDescription(CString("HAnimSite l_index_distal_tip"));
HAnimSite1115.addChild(&TouchSensor1116);

Shape& Shape1117 =  Shape();
Shape1117.setUSE(CString("HAnimSiteShape"));
HAnimSite1115.addChild(&Shape1117);

HAnimSegment1103.addChild(&HAnimSite1115);

HAnimSite& HAnimSite1118 =  HAnimSite();
HAnimSite1118.setDEF(CString("hanim_l_dactylion_pt"));
HAnimSite1118.X3DNode::setName(CString("l_dactylion_pt"));
HAnimSite1118.setTranslation(new float[]{0.2056,0.6743,-0.0482});
TouchSensor& TouchSensor1119 =  TouchSensor();
TouchSensor1119.setDescription(CString("HAnimSite l_dactylion_pt"));
HAnimSite1118.addChild(&TouchSensor1119);

Shape& Shape1120 =  Shape();
Shape1120.setUSE(CString("HAnimSiteShape"));
HAnimSite1118.addChild(&Shape1120);

HAnimSegment1103.addChild(&HAnimSite1118);

HAnimJoint1102.addChildren(&HAnimSegment1103);

HAnimJoint1093.addChildren(&HAnimJoint1102);

HAnimJoint1084.addChildren(&HAnimJoint1093);

HAnimJoint1075.addChildren(&HAnimJoint1084);

HAnimJoint987.addChildren(&HAnimJoint1075);

HAnimJoint& HAnimJoint1121 =  HAnimJoint();
HAnimJoint1121.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint1121.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint1121.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment1122 =  HAnimSegment();
HAnimSegment1122.setDEF(CString("hanim_l_metacarpal_3"));
HAnimSegment1122.X3DNode::setName(CString("l_metacarpal_3"));
TouchSensor& TouchSensor1123 =  TouchSensor();
TouchSensor1123.setDescription(CString("HAnimJoint l_middle0, HAnimSegment l_metacarpal_3"));
HAnimSegment1122.addChild(&TouchSensor1123);

Transform& Transform1124 =  Transform();
Transform1124.setTranslation(new float[]{0.1987,0.8029,-0.053});
Shape& Shape1125 =  Shape();
Shape1125.setUSE(CString("HAnimJointShape"));
Transform1124.addChild(&Shape1125);

HAnimSegment1122.addChild(&Transform1124);

Shape& Shape1126 =  Shape();
LineSet& LineSet1127 =  LineSet();
LineSet1127.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1128 =  ColorRGBA();
ColorRGBA1128.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1127.addChild(&ColorRGBA1128);

Coordinate& Coordinate1129 =  Coordinate();
Coordinate1129.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet1127.setCoord(Coordinate1129);

Shape1126.setGeometry(&LineSet1127);

HAnimSegment1122.addChild(&Shape1126);

HAnimJoint1121.addChildren(&HAnimSegment1122);

HAnimJoint& HAnimJoint1130 =  HAnimJoint();
HAnimJoint1130.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint1130.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint1130.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment1131 =  HAnimSegment();
HAnimSegment1131.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimSegment1131.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
TouchSensor& TouchSensor1132 =  TouchSensor();
TouchSensor1132.setDescription(CString("HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3"));
HAnimSegment1131.addChild(&TouchSensor1132);

Transform& Transform1133 =  Transform();
Transform1133.setTranslation(new float[]{0.1987,0.7818,-0.053});
Shape& Shape1134 =  Shape();
Shape1134.setUSE(CString("HAnimJointShape"));
Transform1133.addChild(&Shape1134);

HAnimSegment1131.addChild(&Transform1133);

Shape& Shape1135 =  Shape();
LineSet& LineSet1136 =  LineSet();
LineSet1136.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1137 =  ColorRGBA();
ColorRGBA1137.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1136.addChild(&ColorRGBA1137);

Coordinate& Coordinate1138 =  Coordinate();
Coordinate1138.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet1136.setCoord(Coordinate1138);

Shape1135.setGeometry(&LineSet1136);

HAnimSegment1131.addChild(&Shape1135);

HAnimJoint1130.addChildren(&HAnimSegment1131);

HAnimJoint& HAnimJoint1139 =  HAnimJoint();
HAnimJoint1139.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint1139.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint1139.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment1140 =  HAnimSegment();
HAnimSegment1140.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimSegment1140.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
TouchSensor& TouchSensor1141 =  TouchSensor();
TouchSensor1141.setDescription(CString("HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3"));
HAnimSegment1140.addChild(&TouchSensor1141);

Transform& Transform1142 =  Transform();
Transform1142.setTranslation(new float[]{0.2013,0.7273,-0.0503});
Shape& Shape1143 =  Shape();
Shape1143.setUSE(CString("HAnimJointShape"));
Transform1142.addChild(&Shape1143);

HAnimSegment1140.addChild(&Transform1142);

Shape& Shape1144 =  Shape();
LineSet& LineSet1145 =  LineSet();
LineSet1145.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1146 =  ColorRGBA();
ColorRGBA1146.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1145.addChild(&ColorRGBA1146);

Coordinate& Coordinate1147 =  Coordinate();
Coordinate1147.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet1145.setCoord(Coordinate1147);

Shape1144.setGeometry(&LineSet1145);

HAnimSegment1140.addChild(&Shape1144);

HAnimJoint1139.addChildren(&HAnimSegment1140);

HAnimJoint& HAnimJoint1148 =  HAnimJoint();
HAnimJoint1148.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint1148.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint1148.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimSegment& HAnimSegment1149 =  HAnimSegment();
HAnimSegment1149.setDEF(CString("hanim_l_carpal_distal_phalanx_3"));
HAnimSegment1149.X3DNode::setName(CString("l_carpal_distal_phalanx_3"));
TouchSensor& TouchSensor1150 =  TouchSensor();
TouchSensor1150.setDescription(CString("HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3"));
HAnimSegment1149.addChild(&TouchSensor1150);

Transform& Transform1151 =  Transform();
Transform1151.setTranslation(new float[]{0.2026,0.7011,-0.0494});
Shape& Shape1152 =  Shape();
Shape1152.setUSE(CString("HAnimJointShape"));
Transform1151.addChild(&Shape1152);

HAnimSegment1149.addChild(&Transform1151);

Shape& Shape1153 =  Shape();
LineSet& LineSet1154 =  LineSet();
LineSet1154.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1155 =  ColorRGBA();
ColorRGBA1155.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1154.addChild(&ColorRGBA1155);

Coordinate& Coordinate1156 =  Coordinate();
Coordinate1156.setPoint(new float[]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491}, 6);
LineSet1154.setCoord(Coordinate1156);

Shape1153.setGeometry(&LineSet1154);

HAnimSegment1149.addChild(&Shape1153);

HAnimSite& HAnimSite1157 =  HAnimSite();
HAnimSite1157.setDEF(CString("hanim_l_carpal_distal_phalanx_3_pt"));
HAnimSite1157.X3DNode::setName(CString("l_carpal_distal_phalanx_3_pt"));
HAnimSite1157.setTranslation(new float[]{0.208,0.6731,-0.0491});
TouchSensor& TouchSensor1158 =  TouchSensor();
TouchSensor1158.setDescription(CString("HAnimSite l_middle_distal_tip"));
HAnimSite1157.addChild(&TouchSensor1158);

Shape& Shape1159 =  Shape();
Shape1159.setUSE(CString("HAnimSiteShape"));
HAnimSite1157.addChild(&Shape1159);

HAnimSegment1149.addChild(&HAnimSite1157);

HAnimJoint1148.addChildren(&HAnimSegment1149);

HAnimJoint1139.addChildren(&HAnimJoint1148);

HAnimJoint1130.addChildren(&HAnimJoint1139);

HAnimJoint1121.addChildren(&HAnimJoint1130);

HAnimJoint987.addChildren(&HAnimJoint1121);

HAnimJoint& HAnimJoint1160 =  HAnimJoint();
HAnimJoint1160.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint1160.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint1160.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment1161 =  HAnimSegment();
HAnimSegment1161.setDEF(CString("hanim_l_metacarpal_4"));
HAnimSegment1161.X3DNode::setName(CString("l_metacarpal_4"));
TouchSensor& TouchSensor1162 =  TouchSensor();
TouchSensor1162.setDescription(CString("HAnimJoint l_ring0, HAnimSegment l_metacarpal_4"));
HAnimSegment1161.addChild(&TouchSensor1162);

Transform& Transform1163 =  Transform();
Transform1163.setTranslation(new float[]{0.1956,0.8019,-0.0794});
Shape& Shape1164 =  Shape();
Shape1164.setUSE(CString("HAnimJointShape"));
Transform1163.addChild(&Shape1164);

HAnimSegment1161.addChild(&Transform1163);

Shape& Shape1165 =  Shape();
LineSet& LineSet1166 =  LineSet();
LineSet1166.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1167 =  ColorRGBA();
ColorRGBA1167.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1166.addChild(&ColorRGBA1167);

Coordinate& Coordinate1168 =  Coordinate();
Coordinate1168.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet1166.setCoord(Coordinate1168);

Shape1165.setGeometry(&LineSet1166);

HAnimSegment1161.addChild(&Shape1165);

HAnimJoint1160.addChildren(&HAnimSegment1161);

HAnimJoint& HAnimJoint1169 =  HAnimJoint();
HAnimJoint1169.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint1169.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint1169.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment1170 =  HAnimSegment();
HAnimSegment1170.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimSegment1170.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
TouchSensor& TouchSensor1171 =  TouchSensor();
TouchSensor1171.setDescription(CString("HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4"));
HAnimSegment1170.addChild(&TouchSensor1171);

Transform& Transform1172 =  Transform();
Transform1172.setTranslation(new float[]{0.1956,0.7815,-0.0794});
Shape& Shape1173 =  Shape();
Shape1173.setUSE(CString("HAnimJointShape"));
Transform1172.addChild(&Shape1173);

HAnimSegment1170.addChild(&Transform1172);

Shape& Shape1174 =  Shape();
LineSet& LineSet1175 =  LineSet();
LineSet1175.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1176 =  ColorRGBA();
ColorRGBA1176.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1175.addChild(&ColorRGBA1176);

Coordinate& Coordinate1177 =  Coordinate();
Coordinate1177.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet1175.setCoord(Coordinate1177);

Shape1174.setGeometry(&LineSet1175);

HAnimSegment1170.addChild(&Shape1174);

HAnimJoint1169.addChildren(&HAnimSegment1170);

HAnimJoint& HAnimJoint1178 =  HAnimJoint();
HAnimJoint1178.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint1178.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint1178.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment1179 =  HAnimSegment();
HAnimSegment1179.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimSegment1179.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
TouchSensor& TouchSensor1180 =  TouchSensor();
TouchSensor1180.setDescription(CString("HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4"));
HAnimSegment1179.addChild(&TouchSensor1180);

Transform& Transform1181 =  Transform();
Transform1181.setTranslation(new float[]{0.1973,0.7287,-0.0777});
Shape& Shape1182 =  Shape();
Shape1182.setUSE(CString("HAnimJointShape"));
Transform1181.addChild(&Shape1182);

HAnimSegment1179.addChild(&Transform1181);

Shape& Shape1183 =  Shape();
LineSet& LineSet1184 =  LineSet();
LineSet1184.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1185 =  ColorRGBA();
ColorRGBA1185.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1184.addChild(&ColorRGBA1185);

Coordinate& Coordinate1186 =  Coordinate();
Coordinate1186.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet1184.setCoord(Coordinate1186);

Shape1183.setGeometry(&LineSet1184);

HAnimSegment1179.addChild(&Shape1183);

HAnimJoint1178.addChildren(&HAnimSegment1179);

HAnimJoint& HAnimJoint1187 =  HAnimJoint();
HAnimJoint1187.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint1187.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint1187.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimSegment& HAnimSegment1188 =  HAnimSegment();
HAnimSegment1188.setDEF(CString("hanim_l_carpal_distal_phalanx_4"));
HAnimSegment1188.X3DNode::setName(CString("l_carpal_distal_phalanx_4"));
TouchSensor& TouchSensor1189 =  TouchSensor();
TouchSensor1189.setDescription(CString("HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4"));
HAnimSegment1188.addChild(&TouchSensor1189);

Transform& Transform1190 =  Transform();
Transform1190.setTranslation(new float[]{0.1983,0.7045,-0.0767});
Shape& Shape1191 =  Shape();
Shape1191.setUSE(CString("HAnimJointShape"));
Transform1190.addChild(&Shape1191);

HAnimSegment1188.addChild(&Transform1190);

Shape& Shape1192 =  Shape();
LineSet& LineSet1193 =  LineSet();
LineSet1193.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1194 =  ColorRGBA();
ColorRGBA1194.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1193.addChild(&ColorRGBA1194);

Coordinate& Coordinate1195 =  Coordinate();
Coordinate1195.setPoint(new float[]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756}, 6);
LineSet1193.setCoord(Coordinate1195);

Shape1192.setGeometry(&LineSet1193);

HAnimSegment1188.addChild(&Shape1192);

HAnimSite& HAnimSite1196 =  HAnimSite();
HAnimSite1196.setDEF(CString("hanim_l_carpal_distal_phalanx_4_pt"));
HAnimSite1196.X3DNode::setName(CString("l_carpal_distal_phalanx_4_pt"));
HAnimSite1196.setTranslation(new float[]{0.2035,0.675,-0.0756});
TouchSensor& TouchSensor1197 =  TouchSensor();
TouchSensor1197.setDescription(CString("HAnimSite l_ring_distal_tip"));
HAnimSite1196.addChild(&TouchSensor1197);

Shape& Shape1198 =  Shape();
Shape1198.setUSE(CString("HAnimSiteShape"));
HAnimSite1196.addChild(&Shape1198);

HAnimSegment1188.addChild(&HAnimSite1196);

HAnimJoint1187.addChildren(&HAnimSegment1188);

HAnimJoint1178.addChildren(&HAnimJoint1187);

HAnimJoint1169.addChildren(&HAnimJoint1178);

HAnimJoint1160.addChildren(&HAnimJoint1169);

HAnimJoint987.addChildren(&HAnimJoint1160);

HAnimJoint& HAnimJoint1199 =  HAnimJoint();
HAnimJoint1199.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint1199.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint1199.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment1200 =  HAnimSegment();
HAnimSegment1200.setDEF(CString("hanim_l_metacarpal_5"));
HAnimSegment1200.X3DNode::setName(CString("l_metacarpal_5"));
TouchSensor& TouchSensor1201 =  TouchSensor();
TouchSensor1201.setDescription(CString("HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5"));
HAnimSegment1200.addChild(&TouchSensor1201);

Transform& Transform1202 =  Transform();
Transform1202.setTranslation(new float[]{0.1925,0.8066,-0.1036});
Shape& Shape1203 =  Shape();
Shape1203.setUSE(CString("HAnimJointShape"));
Transform1202.addChild(&Shape1203);

HAnimSegment1200.addChild(&Transform1202);

Shape& Shape1204 =  Shape();
LineSet& LineSet1205 =  LineSet();
LineSet1205.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1206 =  ColorRGBA();
ColorRGBA1206.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1205.addChild(&ColorRGBA1206);

Coordinate& Coordinate1207 =  Coordinate();
Coordinate1207.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet1205.setCoord(Coordinate1207);

Shape1204.setGeometry(&LineSet1205);

HAnimSegment1200.addChild(&Shape1204);

HAnimJoint1199.addChildren(&HAnimSegment1200);

HAnimJoint& HAnimJoint1208 =  HAnimJoint();
HAnimJoint1208.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint1208.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint1208.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment1209 =  HAnimSegment();
HAnimSegment1209.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimSegment1209.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
TouchSensor& TouchSensor1210 =  TouchSensor();
TouchSensor1210.setDescription(CString("HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5"));
HAnimSegment1209.addChild(&TouchSensor1210);

Transform& Transform1211 =  Transform();
Transform1211.setTranslation(new float[]{0.1925,0.7866,-0.1036});
Shape& Shape1212 =  Shape();
Shape1212.setUSE(CString("HAnimJointShape"));
Transform1211.addChild(&Shape1212);

HAnimSegment1209.addChild(&Transform1211);

Shape& Shape1213 =  Shape();
LineSet& LineSet1214 =  LineSet();
LineSet1214.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1215 =  ColorRGBA();
ColorRGBA1215.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1214.addChild(&ColorRGBA1215);

Coordinate& Coordinate1216 =  Coordinate();
Coordinate1216.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet1214.setCoord(Coordinate1216);

Shape1213.setGeometry(&LineSet1214);

HAnimSegment1209.addChild(&Shape1213);

HAnimJoint1208.addChildren(&HAnimSegment1209);

HAnimJoint& HAnimJoint1217 =  HAnimJoint();
HAnimJoint1217.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint1217.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint1217.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment1218 =  HAnimSegment();
HAnimSegment1218.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimSegment1218.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
TouchSensor& TouchSensor1219 =  TouchSensor();
TouchSensor1219.setDescription(CString("HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5"));
HAnimSegment1218.addChild(&TouchSensor1219);

Transform& Transform1220 =  Transform();
Transform1220.setTranslation(new float[]{0.1938,0.7452,-0.1024});
Shape& Shape1221 =  Shape();
Shape1221.setUSE(CString("HAnimJointShape"));
Transform1220.addChild(&Shape1221);

HAnimSegment1218.addChild(&Transform1220);

Shape& Shape1222 =  Shape();
LineSet& LineSet1223 =  LineSet();
LineSet1223.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1224 =  ColorRGBA();
ColorRGBA1224.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1223.addChild(&ColorRGBA1224);

Coordinate& Coordinate1225 =  Coordinate();
Coordinate1225.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet1223.setCoord(Coordinate1225);

Shape1222.setGeometry(&LineSet1223);

HAnimSegment1218.addChild(&Shape1222);

HAnimJoint1217.addChildren(&HAnimSegment1218);

HAnimJoint& HAnimJoint1226 =  HAnimJoint();
HAnimJoint1226.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint1226.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint1226.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimSegment& HAnimSegment1227 =  HAnimSegment();
HAnimSegment1227.setDEF(CString("hanim_l_carpal_distal_phalanx_5"));
HAnimSegment1227.X3DNode::setName(CString("l_carpal_distal_phalanx_5"));
TouchSensor& TouchSensor1228 =  TouchSensor();
TouchSensor1228.setDescription(CString("HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5"));
HAnimSegment1227.addChild(&TouchSensor1228);

Transform& Transform1229 =  Transform();
Transform1229.setTranslation(new float[]{0.1948,0.7277,-0.1017});
Shape& Shape1230 =  Shape();
Shape1230.setUSE(CString("HAnimJointShape"));
Transform1229.addChild(&Shape1230);

HAnimSegment1227.addChild(&Transform1229);

Shape& Shape1231 =  Shape();
LineSet& LineSet1232 =  LineSet();
LineSet1232.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1233 =  ColorRGBA();
ColorRGBA1233.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1232.addChild(&ColorRGBA1233);

Coordinate& Coordinate1234 =  Coordinate();
Coordinate1234.setPoint(new float[]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012}, 6);
LineSet1232.setCoord(Coordinate1234);

Shape1231.setGeometry(&LineSet1232);

HAnimSegment1227.addChild(&Shape1231);

HAnimSite& HAnimSite1235 =  HAnimSite();
HAnimSite1235.setDEF(CString("hanim_l_carpal_distal_phalanx_5_pt"));
HAnimSite1235.X3DNode::setName(CString("l_carpal_distal_phalanx_5_pt"));
HAnimSite1235.setTranslation(new float[]{0.2014,0.7009,-0.1012});
TouchSensor& TouchSensor1236 =  TouchSensor();
TouchSensor1236.setDescription(CString("HAnimSite l_pinky_distal_tip"));
HAnimSite1235.addChild(&TouchSensor1236);

Shape& Shape1237 =  Shape();
Shape1237.setUSE(CString("HAnimSiteShape"));
HAnimSite1235.addChild(&Shape1237);

HAnimSegment1227.addChild(&HAnimSite1235);

HAnimJoint1226.addChildren(&HAnimSegment1227);

HAnimJoint1217.addChildren(&HAnimJoint1226);

HAnimJoint1208.addChildren(&HAnimJoint1217);

HAnimJoint1199.addChildren(&HAnimJoint1208);

HAnimJoint987.addChildren(&HAnimJoint1199);

HAnimJoint950.addChildren(&HAnimJoint987);

HAnimJoint934.addChildren(&HAnimJoint950);

HAnimJoint925.addChildren(&HAnimJoint934);

HAnimJoint888.addChildren(&HAnimJoint925);

HAnimJoint600.addChildren(&HAnimJoint888);

HAnimJoint& HAnimJoint1238 =  HAnimJoint();
HAnimJoint1238.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint1238.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint1238.setCenter(new float[]{-0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment1239 =  HAnimSegment();
HAnimSegment1239.setDEF(CString("hanim_r_clavicle"));
HAnimSegment1239.X3DNode::setName(CString("r_clavicle"));
TouchSensor& TouchSensor1240 =  TouchSensor();
TouchSensor1240.setDescription(CString("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"));
HAnimSegment1239.addChild(&TouchSensor1240);

Transform& Transform1241 =  Transform();
Transform1241.setTranslation(new float[]{-0.082,1.4488,-0.0353});
Shape& Shape1242 =  Shape();
Shape1242.setUSE(CString("HAnimJointShape"));
Transform1241.addChild(&Shape1242);

HAnimSegment1239.addChild(&Transform1241);

Shape& Shape1243 =  Shape();
LineSet& LineSet1244 =  LineSet();
LineSet1244.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1245 =  ColorRGBA();
ColorRGBA1245.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1244.addChild(&ColorRGBA1245);

Coordinate& Coordinate1246 =  Coordinate();
Coordinate1246.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424}, 6);
LineSet1244.setCoord(Coordinate1246);

Shape1243.setGeometry(&LineSet1244);

HAnimSegment1239.addChild(&Shape1243);

Shape& Shape1247 =  Shape();
LineSet& LineSet1248 =  LineSet();
LineSet1248.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1249 =  ColorRGBA();
ColorRGBA1249.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1248.addChild(&ColorRGBA1249);

Coordinate& Coordinate1250 =  Coordinate();
Coordinate1250.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04}, 6);
LineSet1248.setCoord(Coordinate1250);

Shape1247.setGeometry(&LineSet1248);

HAnimSegment1239.addChild(&Shape1247);

Shape& Shape1251 =  Shape();
LineSet& LineSet1252 =  LineSet();
LineSet1252.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1253 =  ColorRGBA();
ColorRGBA1253.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1252.addChild(&ColorRGBA1253);

Coordinate& Coordinate1254 =  Coordinate();
Coordinate1254.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431}, 6);
LineSet1252.setCoord(Coordinate1254);

Shape1251.setGeometry(&LineSet1252);

HAnimSegment1239.addChild(&Shape1251);

Shape& Shape1255 =  Shape();
LineSet& LineSet1256 =  LineSet();
LineSet1256.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1257 =  ColorRGBA();
ColorRGBA1257.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1256.addChild(&ColorRGBA1257);

Coordinate& Coordinate1258 =  Coordinate();
Coordinate1258.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031}, 6);
LineSet1256.setCoord(Coordinate1258);

Shape1255.setGeometry(&LineSet1256);

HAnimSegment1239.addChild(&Shape1255);

Shape& Shape1259 =  Shape();
LineSet& LineSet1260 =  LineSet();
LineSet1260.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1261 =  ColorRGBA();
ColorRGBA1261.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1260.addChild(&ColorRGBA1261);

Coordinate& Coordinate1262 =  Coordinate();
Coordinate1262.setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826}, 6);
LineSet1260.setCoord(Coordinate1262);

Shape1259.setGeometry(&LineSet1260);

HAnimSegment1239.addChild(&Shape1259);

HAnimSite& HAnimSite1263 =  HAnimSite();
HAnimSite1263.setDEF(CString("hanim_r_clavicle_pt"));
HAnimSite1263.X3DNode::setName(CString("r_clavicle_pt"));
HAnimSite1263.setTranslation(new float[]{-0.0115,1.4943,0.04});
TouchSensor& TouchSensor1264 =  TouchSensor();
TouchSensor1264.setDescription(CString("HAnimSite r_clavicale_pt"));
HAnimSite1263.addChild(&TouchSensor1264);

Shape& Shape1265 =  Shape();
Shape1265.setUSE(CString("HAnimSiteShape"));
HAnimSite1263.addChild(&Shape1265);

HAnimSegment1239.addChild(&HAnimSite1263);

HAnimSite& HAnimSite1266 =  HAnimSite();
HAnimSite1266.setDEF(CString("hanim_r_acromion_pt"));
HAnimSite1266.X3DNode::setName(CString("r_acromion_pt"));
HAnimSite1266.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
TouchSensor& TouchSensor1267 =  TouchSensor();
TouchSensor1267.setDescription(CString("HAnimSite r_acromion_pt"));
HAnimSite1266.addChild(&TouchSensor1267);

Shape& Shape1268 =  Shape();
Shape1268.setUSE(CString("HAnimSiteShape"));
HAnimSite1266.addChild(&Shape1268);

HAnimSegment1239.addChild(&HAnimSite1266);

HAnimSite& HAnimSite1269 =  HAnimSite();
HAnimSite1269.setDEF(CString("hanim_r_axilla_proximal_pt"));
HAnimSite1269.X3DNode::setName(CString("r_axilla_proximal_pt"));
HAnimSite1269.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
TouchSensor& TouchSensor1270 =  TouchSensor();
TouchSensor1270.setDescription(CString("HAnimSite r_axilla_ant_pt"));
HAnimSite1269.addChild(&TouchSensor1270);

Shape& Shape1271 =  Shape();
Shape1271.setUSE(CString("HAnimSiteShape"));
HAnimSite1269.addChild(&Shape1271);

HAnimSegment1239.addChild(&HAnimSite1269);

HAnimSite& HAnimSite1272 =  HAnimSite();
HAnimSite1272.setDEF(CString("hanim_r_axilla_distal_pt"));
HAnimSite1272.X3DNode::setName(CString("r_axilla_distal_pt"));
HAnimSite1272.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
TouchSensor& TouchSensor1273 =  TouchSensor();
TouchSensor1273.setDescription(CString("HAnimSite r_axilla_post_pt"));
HAnimSite1272.addChild(&TouchSensor1273);

Shape& Shape1274 =  Shape();
Shape1274.setUSE(CString("HAnimSiteShape"));
HAnimSite1272.addChild(&Shape1274);

HAnimSegment1239.addChild(&HAnimSite1272);

HAnimJoint1238.addChildren(&HAnimSegment1239);

HAnimJoint& HAnimJoint1275 =  HAnimJoint();
HAnimJoint1275.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1275.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint1275.setCenter(new float[]{-0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment1276 =  HAnimSegment();
HAnimSegment1276.setDEF(CString("hanim_r_scapula"));
HAnimSegment1276.X3DNode::setName(CString("r_scapula"));
TouchSensor& TouchSensor1277 =  TouchSensor();
TouchSensor1277.setDescription(CString("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"));
HAnimSegment1276.addChild(&TouchSensor1277);

Transform& Transform1278 =  Transform();
Transform1278.setTranslation(new float[]{-0.0962,1.4269,-0.0424});
Shape& Shape1279 =  Shape();
Shape1279.setUSE(CString("HAnimJointShape"));
Transform1278.addChild(&Shape1279);

HAnimSegment1276.addChild(&Transform1278);

Shape& Shape1280 =  Shape();
LineSet& LineSet1281 =  LineSet();
LineSet1281.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1282 =  ColorRGBA();
ColorRGBA1282.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1281.addChild(&ColorRGBA1282);

Coordinate& Coordinate1283 =  Coordinate();
Coordinate1283.setPoint(new float[]{-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387}, 6);
LineSet1281.setCoord(Coordinate1283);

Shape1280.setGeometry(&LineSet1281);

HAnimSegment1276.addChild(&Shape1280);

HAnimJoint1275.addChildren(&HAnimSegment1276);

HAnimJoint& HAnimJoint1284 =  HAnimJoint();
HAnimJoint1284.setDEF(CString("hanim_r_shoulder"));
HAnimJoint1284.X3DNode::setName(CString("r_shoulder"));
HAnimJoint1284.setCenter(new float[]{-0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment1285 =  HAnimSegment();
HAnimSegment1285.setDEF(CString("hanim_r_upperarm"));
HAnimSegment1285.X3DNode::setName(CString("r_upperarm"));
TouchSensor& TouchSensor1286 =  TouchSensor();
TouchSensor1286.setDescription(CString("HAnimJoint r_shoulder, HAnimSegment r_upperarm"));
HAnimSegment1285.addChild(&TouchSensor1286);

Transform& Transform1287 =  Transform();
Transform1287.setTranslation(new float[]{-0.2029,1.4376,-0.0387});
Shape& Shape1288 =  Shape();
Shape1288.setUSE(CString("HAnimJointShape"));
Transform1287.addChild(&Shape1288);

HAnimSegment1285.addChild(&Transform1287);

Shape& Shape1289 =  Shape();
LineSet& LineSet1290 =  LineSet();
LineSet1290.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1291 =  ColorRGBA();
ColorRGBA1291.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1290.addChild(&ColorRGBA1291);

Coordinate& Coordinate1292 =  Coordinate();
Coordinate1292.setPoint(new float[]{-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682}, 6);
LineSet1290.setCoord(Coordinate1292);

Shape1289.setGeometry(&LineSet1290);

HAnimSegment1285.addChild(&Shape1289);

Shape& Shape1293 =  Shape();
LineSet& LineSet1294 =  LineSet();
LineSet1294.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1295 =  ColorRGBA();
ColorRGBA1295.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1294.addChild(&ColorRGBA1295);

Coordinate& Coordinate1296 =  Coordinate();
Coordinate1296.setPoint(new float[]{-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033}, 6);
LineSet1294.setCoord(Coordinate1296);

Shape1293.setGeometry(&LineSet1294);

HAnimSegment1285.addChild(&Shape1293);

HAnimSite& HAnimSite1297 =  HAnimSite();
HAnimSite1297.setDEF(CString("hanim_r_humeral_lateral_epicondyle_pt"));
HAnimSite1297.X3DNode::setName(CString("r_humeral_lateral_epicondyle_pt"));
HAnimSite1297.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
TouchSensor& TouchSensor1298 =  TouchSensor();
TouchSensor1298.setDescription(CString("HAnimSite r_humeral_lateral_epicn_pt"));
HAnimSite1297.addChild(&TouchSensor1298);

Shape& Shape1299 =  Shape();
Shape1299.setUSE(CString("HAnimSiteShape"));
HAnimSite1297.addChild(&Shape1299);

HAnimSegment1285.addChild(&HAnimSite1297);

HAnimJoint1284.addChildren(&HAnimSegment1285);

HAnimJoint& HAnimJoint1300 =  HAnimJoint();
HAnimJoint1300.setDEF(CString("hanim_r_elbow"));
HAnimJoint1300.X3DNode::setName(CString("r_elbow"));
HAnimJoint1300.setCenter(new float[]{-0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment1301 =  HAnimSegment();
HAnimSegment1301.setDEF(CString("hanim_r_forearm"));
HAnimSegment1301.X3DNode::setName(CString("r_forearm"));
TouchSensor& TouchSensor1302 =  TouchSensor();
TouchSensor1302.setDescription(CString("HAnimJoint r_elbow, HAnimSegment r_forearm"));
HAnimSegment1301.addChild(&TouchSensor1302);

Transform& Transform1303 =  Transform();
Transform1303.setTranslation(new float[]{-0.2014,1.1357,-0.0682});
Shape& Shape1304 =  Shape();
Shape1304.setUSE(CString("HAnimJointShape"));
Transform1303.addChild(&Shape1304);

HAnimSegment1301.addChild(&Transform1303);

Shape& Shape1305 =  Shape();
LineSet& LineSet1306 =  LineSet();
LineSet1306.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1307 =  ColorRGBA();
ColorRGBA1307.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1306.addChild(&ColorRGBA1307);

Coordinate& Coordinate1308 =  Coordinate();
Coordinate1308.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583}, 6);
LineSet1306.setCoord(Coordinate1308);

Shape1305.setGeometry(&LineSet1306);

HAnimSegment1301.addChild(&Shape1305);

Shape& Shape1309 =  Shape();
LineSet& LineSet1310 =  LineSet();
LineSet1310.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1311 =  ColorRGBA();
ColorRGBA1311.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1310.addChild(&ColorRGBA1311);

Coordinate& Coordinate1312 =  Coordinate();
Coordinate1312.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036}, 6);
LineSet1310.setCoord(Coordinate1312);

Shape1309.setGeometry(&LineSet1310);

HAnimSegment1301.addChild(&Shape1309);

Shape& Shape1313 =  Shape();
LineSet& LineSet1314 =  LineSet();
LineSet1314.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1315 =  ColorRGBA();
ColorRGBA1315.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1314.addChild(&ColorRGBA1315);

Coordinate& Coordinate1316 =  Coordinate();
Coordinate1316.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065}, 6);
LineSet1314.setCoord(Coordinate1316);

Shape1313.setGeometry(&LineSet1314);

HAnimSegment1301.addChild(&Shape1313);

Shape& Shape1317 =  Shape();
LineSet& LineSet1318 =  LineSet();
LineSet1318.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1319 =  ColorRGBA();
ColorRGBA1319.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1318.addChild(&ColorRGBA1319);

Coordinate& Coordinate1320 =  Coordinate();
Coordinate1320.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062}, 6);
LineSet1318.setCoord(Coordinate1320);

Shape1317.setGeometry(&LineSet1318);

HAnimSegment1301.addChild(&Shape1317);

Shape& Shape1321 =  Shape();
LineSet& LineSet1322 =  LineSet();
LineSet1322.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1323 =  ColorRGBA();
ColorRGBA1323.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1322.addChild(&ColorRGBA1323);

Coordinate& Coordinate1324 =  Coordinate();
Coordinate1324.setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091}, 6);
LineSet1322.setCoord(Coordinate1324);

Shape1321.setGeometry(&LineSet1322);

HAnimSegment1301.addChild(&Shape1321);

HAnimSite& HAnimSite1325 =  HAnimSite();
HAnimSite1325.setDEF(CString("hanim_r_radial_styloid_pt"));
HAnimSite1325.X3DNode::setName(CString("r_radial_styloid_pt"));
HAnimSite1325.setTranslation(new float[]{-0.1884,0.8676,-0.036});
TouchSensor& TouchSensor1326 =  TouchSensor();
TouchSensor1326.setDescription(CString("HAnimSite r_radial_styloid_pt"));
HAnimSite1325.addChild(&TouchSensor1326);

Shape& Shape1327 =  Shape();
Shape1327.setUSE(CString("HAnimSiteShape"));
HAnimSite1325.addChild(&Shape1327);

HAnimSegment1301.addChild(&HAnimSite1325);

HAnimSite& HAnimSite1328 =  HAnimSite();
HAnimSite1328.setDEF(CString("hanim_r_olecranon_pt"));
HAnimSite1328.X3DNode::setName(CString("r_olecranon_pt"));
HAnimSite1328.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
TouchSensor& TouchSensor1329 =  TouchSensor();
TouchSensor1329.setDescription(CString("HAnimSite r_olecranon_pt"));
HAnimSite1328.addChild(&TouchSensor1329);

Shape& Shape1330 =  Shape();
Shape1330.setUSE(CString("HAnimSiteShape"));
HAnimSite1328.addChild(&Shape1330);

HAnimSegment1301.addChild(&HAnimSite1328);

HAnimSite& HAnimSite1331 =  HAnimSite();
HAnimSite1331.setDEF(CString("hanim_r_humeral_medial_epicondyle_pt"));
HAnimSite1331.X3DNode::setName(CString("r_humeral_medial_epicondyle_pt"));
HAnimSite1331.setTranslation(new float[]{-0.168,1.1298,-0.1062});
TouchSensor& TouchSensor1332 =  TouchSensor();
TouchSensor1332.setDescription(CString("HAnimSite r_humeral_medial_epicn_pt"));
HAnimSite1331.addChild(&TouchSensor1332);

Shape& Shape1333 =  Shape();
Shape1333.setUSE(CString("HAnimSiteShape"));
HAnimSite1331.addChild(&Shape1333);

HAnimSegment1301.addChild(&HAnimSite1331);

HAnimSite& HAnimSite1334 =  HAnimSite();
HAnimSite1334.setDEF(CString("hanim_r_radiale_pt"));
HAnimSite1334.X3DNode::setName(CString("r_radiale_pt"));
HAnimSite1334.setTranslation(new float[]{-0.213,1.1305,-0.1091});
TouchSensor& TouchSensor1335 =  TouchSensor();
TouchSensor1335.setDescription(CString("HAnimSite r_radiale_pt"));
HAnimSite1334.addChild(&TouchSensor1335);

Shape& Shape1336 =  Shape();
Shape1336.setUSE(CString("HAnimSiteShape"));
HAnimSite1334.addChild(&Shape1336);

HAnimSegment1301.addChild(&HAnimSite1334);

HAnimJoint1300.addChildren(&HAnimSegment1301);

HAnimJoint& HAnimJoint1337 =  HAnimJoint();
HAnimJoint1337.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint1337.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint1337.setCenter(new float[]{-0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment1338 =  HAnimSegment();
HAnimSegment1338.setDEF(CString("hanim_r_carpal"));
HAnimSegment1338.X3DNode::setName(CString("r_carpal"));
TouchSensor& TouchSensor1339 =  TouchSensor();
TouchSensor1339.setDescription(CString("HAnimJoint r_radiocarpal, HAnimSegment r_carpal"));
HAnimSegment1338.addChild(&TouchSensor1339);

Transform& Transform1340 =  Transform();
Transform1340.setTranslation(new float[]{-0.1984,0.8663,-0.0583});
Shape& Shape1341 =  Shape();
Shape1341.setUSE(CString("HAnimJointShape"));
Transform1340.addChild(&Shape1341);

HAnimSegment1338.addChild(&Transform1340);

Shape& Shape1342 =  Shape();
LineSet& LineSet1343 =  LineSet();
LineSet1343.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1344 =  ColorRGBA();
ColorRGBA1344.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1343.addChild(&ColorRGBA1344);

Coordinate& Coordinate1345 =  Coordinate();
Coordinate1345.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534}, 6);
LineSet1343.setCoord(Coordinate1345);

Shape1342.setGeometry(&LineSet1343);

HAnimSegment1338.addChild(&Shape1342);

Shape& Shape1346 =  Shape();
LineSet& LineSet1347 =  LineSet();
LineSet1347.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1348 =  ColorRGBA();
ColorRGBA1348.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1347.addChild(&ColorRGBA1348);

Coordinate& Coordinate1349 =  Coordinate();
Coordinate1349.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028}, 6);
LineSet1347.setCoord(Coordinate1349);

Shape1346.setGeometry(&LineSet1347);

HAnimSegment1338.addChild(&Shape1346);

Shape& Shape1350 =  Shape();
LineSet& LineSet1351 =  LineSet();
LineSet1351.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1352 =  ColorRGBA();
ColorRGBA1352.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1351.addChild(&ColorRGBA1352);

Coordinate& Coordinate1353 =  Coordinate();
Coordinate1353.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053}, 6);
LineSet1351.setCoord(Coordinate1353);

Shape1350.setGeometry(&LineSet1351);

HAnimSegment1338.addChild(&Shape1350);

Shape& Shape1354 =  Shape();
LineSet& LineSet1355 =  LineSet();
LineSet1355.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1356 =  ColorRGBA();
ColorRGBA1356.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1355.addChild(&ColorRGBA1356);

Coordinate& Coordinate1357 =  Coordinate();
Coordinate1357.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794}, 6);
LineSet1355.setCoord(Coordinate1357);

Shape1354.setGeometry(&LineSet1355);

HAnimSegment1338.addChild(&Shape1354);

Shape& Shape1358 =  Shape();
LineSet& LineSet1359 =  LineSet();
LineSet1359.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1360 =  ColorRGBA();
ColorRGBA1360.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1359.addChild(&ColorRGBA1360);

Coordinate& Coordinate1361 =  Coordinate();
Coordinate1361.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036}, 6);
LineSet1359.setCoord(Coordinate1361);

Shape1358.setGeometry(&LineSet1359);

HAnimSegment1338.addChild(&Shape1358);

Shape& Shape1362 =  Shape();
LineSet& LineSet1363 =  LineSet();
LineSet1363.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1364 =  ColorRGBA();
ColorRGBA1364.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1363.addChild(&ColorRGBA1364);

Coordinate& Coordinate1365 =  Coordinate();
Coordinate1365.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177}, 6);
LineSet1363.setCoord(Coordinate1365);

Shape1362.setGeometry(&LineSet1363);

HAnimSegment1338.addChild(&Shape1362);

Shape& Shape1366 =  Shape();
LineSet& LineSet1367 =  LineSet();
LineSet1367.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1368 =  ColorRGBA();
ColorRGBA1368.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1367.addChild(&ColorRGBA1368);

Coordinate& Coordinate1369 =  Coordinate();
Coordinate1369.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584}, 6);
LineSet1367.setCoord(Coordinate1369);

Shape1366.setGeometry(&LineSet1367);

HAnimSegment1338.addChild(&Shape1366);

Shape& Shape1370 =  Shape();
LineSet& LineSet1371 =  LineSet();
LineSet1371.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1372 =  ColorRGBA();
ColorRGBA1372.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1371.addChild(&ColorRGBA1372);

Coordinate& Coordinate1373 =  Coordinate();
Coordinate1373.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064}, 6);
LineSet1371.setCoord(Coordinate1373);

Shape1370.setGeometry(&LineSet1371);

HAnimSegment1338.addChild(&Shape1370);

Shape& Shape1374 =  Shape();
LineSet& LineSet1375 =  LineSet();
LineSet1375.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1376 =  ColorRGBA();
ColorRGBA1376.setUSE(CString("HAnimSiteViewpointLineColorRGBA"));
LineSet1375.addChild(&ColorRGBA1376);

Coordinate& Coordinate1377 =  Coordinate();
Coordinate1377.setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.3,0.75,0.45}, 6);
LineSet1375.setCoord(Coordinate1377);

Shape1374.setGeometry(&LineSet1375);

HAnimSegment1338.addChild(&Shape1374);

HAnimSite& HAnimSite1378 =  HAnimSite();
HAnimSite1378.setDEF(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimSite1378.X3DNode::setName(CString("r_metacarpal_phalanx_2_pt"));
HAnimSite1378.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
TouchSensor& TouchSensor1379 =  TouchSensor();
TouchSensor1379.setDescription(CString("HAnimSite r_metacarpal_pha2_pt"));
HAnimSite1378.addChild(&TouchSensor1379);

Shape& Shape1380 =  Shape();
Shape1380.setUSE(CString("HAnimSiteShape"));
HAnimSite1378.addChild(&Shape1380);

HAnimSegment1338.addChild(&HAnimSite1378);

HAnimSite& HAnimSite1381 =  HAnimSite();
HAnimSite1381.setDEF(CString("hanim_r_ulnar_styloid_pt"));
HAnimSite1381.X3DNode::setName(CString("r_ulnar_styloid_pt"));
HAnimSite1381.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
TouchSensor& TouchSensor1382 =  TouchSensor();
TouchSensor1382.setDescription(CString("HAnimSite r_ulnar_styloid_pt"));
HAnimSite1381.addChild(&TouchSensor1382);

Shape& Shape1383 =  Shape();
Shape1383.setUSE(CString("HAnimSiteShape"));
HAnimSite1381.addChild(&Shape1383);

HAnimSegment1338.addChild(&HAnimSite1381);

HAnimSite& HAnimSite1384 =  HAnimSite();
HAnimSite1384.setDEF(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimSite1384.X3DNode::setName(CString("r_metacarpal_phalanx_5_pt"));
HAnimSite1384.setTranslation(new float[]{-0.1929,0.789,-0.1064});
TouchSensor& TouchSensor1385 =  TouchSensor();
TouchSensor1385.setDescription(CString("HAnimSite r_metacarpal_pha5_pt"));
HAnimSite1384.addChild(&TouchSensor1385);

Shape& Shape1386 =  Shape();
Shape1386.setUSE(CString("HAnimSiteShape"));
HAnimSite1384.addChild(&Shape1386);

HAnimSegment1338.addChild(&HAnimSite1384);

HAnimSite& HAnimSite1387 =  HAnimSite();
HAnimSite1387.setDEF(CString("hanim_r_hand_front_view"));
HAnimSite1387.X3DNode::setName(CString("r_hand_front_view"));
HAnimSite1387.setTranslation(new float[]{-0.3,0.75,0.45});
TouchSensor& TouchSensor1388 =  TouchSensor();
TouchSensor1388.setDescription(CString("HAnimSite r_hand_front_view"));
HAnimSite1387.addChild(&TouchSensor1388);

Shape& Shape1389 =  Shape();
Shape1389.setUSE(CString("HAnimSiteShape"));
HAnimSite1387.addChild(&Shape1389);

Viewpoint& Viewpoint1390 =  Viewpoint();
Viewpoint1390.setDEF(CString("hanim_r_hand_front_viewpoint"));
Viewpoint1390.setDescription(CString("right hand front"));
Viewpoint1390.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1390.setCenterOfRotation(new float[]{0.0,0.7,0.0});
HAnimSite1387.addChild(&Viewpoint1390);

Anchor& Anchor1391 =  Anchor();
Anchor1391.setDescription(CString("HAnimSite hanim_r_hand_front_view Viewpoint"));
Anchor1391.setUrl(new CString[]{CString("#hanim_r_hand_front_viewpoint")}, 1);
LOD& LOD1392 =  LOD();
LOD1392.setForceTransitions(true);
LOD1392.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1393 =  WorldInfo();
WorldInfo1393.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1392.addChildren(&WorldInfo1393);

Shape& Shape1394 =  Shape();
Shape1394.setUSE(CString("HAnimSiteViewpointShape"));
LOD1392.addChildren(Shape1394);

Anchor1391.addChild(&LOD1392);

HAnimSite1387.addChild(Anchor1391);

HAnimSegment1338.addChild(&HAnimSite1387);

HAnimJoint1337.addChildren(&HAnimSegment1338);

HAnimJoint& HAnimJoint1395 =  HAnimJoint();
HAnimJoint1395.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint1395.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint1395.setCenter(new float[]{-0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment1396 =  HAnimSegment();
HAnimSegment1396.setDEF(CString("hanim_r_metacarpal_1"));
HAnimSegment1396.X3DNode::setName(CString("r_metacarpal_1"));
TouchSensor& TouchSensor1397 =  TouchSensor();
TouchSensor1397.setDescription(CString("HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1"));
HAnimSegment1396.addChild(&TouchSensor1397);

Transform& Transform1398 =  Transform();
Transform1398.setTranslation(new float[]{-0.1924,0.8472,-0.0534});
Shape& Shape1399 =  Shape();
Shape1399.setUSE(CString("HAnimJointShape"));
Transform1398.addChild(&Shape1399);

HAnimSegment1396.addChild(&Transform1398);

Shape& Shape1400 =  Shape();
LineSet& LineSet1401 =  LineSet();
LineSet1401.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1402 =  ColorRGBA();
ColorRGBA1402.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1401.addChild(&ColorRGBA1402);

Coordinate& Coordinate1403 =  Coordinate();
Coordinate1403.setPoint(new float[]{-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246}, 6);
LineSet1401.setCoord(Coordinate1403);

Shape1400.setGeometry(&LineSet1401);

HAnimSegment1396.addChild(&Shape1400);

HAnimJoint1395.addChildren(&HAnimSegment1396);

HAnimJoint& HAnimJoint1404 =  HAnimJoint();
HAnimJoint1404.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint1404.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1404.setCenter(new float[]{-0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment1405 =  HAnimSegment();
HAnimSegment1405.setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimSegment1405.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
TouchSensor& TouchSensor1406 =  TouchSensor();
TouchSensor1406.setDescription(CString("HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1"));
HAnimSegment1405.addChild(&TouchSensor1406);

Transform& Transform1407 =  Transform();
Transform1407.setTranslation(new float[]{-0.1951,0.8226,0.0246});
Shape& Shape1408 =  Shape();
Shape1408.setUSE(CString("HAnimJointShape"));
Transform1407.addChild(&Shape1408);

HAnimSegment1405.addChild(&Transform1407);

Shape& Shape1409 =  Shape();
LineSet& LineSet1410 =  LineSet();
LineSet1410.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1411 =  ColorRGBA();
ColorRGBA1411.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1410.addChild(&ColorRGBA1411);

Coordinate& Coordinate1412 =  Coordinate();
Coordinate1412.setPoint(new float[]{-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464}, 6);
LineSet1410.setCoord(Coordinate1412);

Shape1409.setGeometry(&LineSet1410);

HAnimSegment1405.addChild(&Shape1409);

HAnimJoint1404.addChildren(&HAnimSegment1405);

HAnimJoint& HAnimJoint1413 =  HAnimJoint();
HAnimJoint1413.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint1413.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1413.setCenter(new float[]{-0.1955,0.8159,0.0464});
HAnimSegment& HAnimSegment1414 =  HAnimSegment();
HAnimSegment1414.setDEF(CString("hanim_r_carpal_distal_phalanx_1"));
HAnimSegment1414.X3DNode::setName(CString("r_carpal_distal_phalanx_1"));
TouchSensor& TouchSensor1415 =  TouchSensor();
TouchSensor1415.setDescription(CString("HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1"));
HAnimSegment1414.addChild(&TouchSensor1415);

Transform& Transform1416 =  Transform();
Transform1416.setTranslation(new float[]{-0.1955,0.8159,0.0464});
Shape& Shape1417 =  Shape();
Shape1417.setUSE(CString("HAnimJointShape"));
Transform1416.addChild(&Shape1417);

HAnimSegment1414.addChild(&Transform1416);

Shape& Shape1418 =  Shape();
LineSet& LineSet1419 =  LineSet();
LineSet1419.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1420 =  ColorRGBA();
ColorRGBA1420.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1419.addChild(&ColorRGBA1420);

Coordinate& Coordinate1421 =  Coordinate();
Coordinate1421.setPoint(new float[]{-0.1955,0.8159,0.0464,-0.1869,0.809,0.082}, 6);
LineSet1419.setCoord(Coordinate1421);

Shape1418.setGeometry(&LineSet1419);

HAnimSegment1414.addChild(&Shape1418);

HAnimSite& HAnimSite1422 =  HAnimSite();
HAnimSite1422.setDEF(CString("hanim_r_carpal_distal_phalanx_1_pt"));
HAnimSite1422.X3DNode::setName(CString("r_carpal_distal_phalanx_1_pt"));
HAnimSite1422.setTranslation(new float[]{-0.1869,0.809,0.082});
TouchSensor& TouchSensor1423 =  TouchSensor();
TouchSensor1423.setDescription(CString("HAnimSite r_thumb_distal_tip"));
HAnimSite1422.addChild(&TouchSensor1423);

Shape& Shape1424 =  Shape();
Shape1424.setUSE(CString("HAnimSiteShape"));
HAnimSite1422.addChild(&Shape1424);

HAnimSegment1414.addChild(&HAnimSite1422);

HAnimJoint1413.addChildren(&HAnimSegment1414);

HAnimJoint1404.addChildren(&HAnimJoint1413);

HAnimJoint1395.addChildren(&HAnimJoint1404);

HAnimJoint1337.addChildren(&HAnimJoint1395);

HAnimJoint& HAnimJoint1425 =  HAnimJoint();
HAnimJoint1425.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint1425.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint1425.setCenter(new float[]{-0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment1426 =  HAnimSegment();
HAnimSegment1426.setDEF(CString("hanim_r_metacarpal_2"));
HAnimSegment1426.X3DNode::setName(CString("r_metacarpal_2"));
TouchSensor& TouchSensor1427 =  TouchSensor();
TouchSensor1427.setDescription(CString("HAnimJoint r_index0, HAnimSegment r_metacarpal_2"));
HAnimSegment1426.addChild(&TouchSensor1427);

Transform& Transform1428 =  Transform();
Transform1428.setTranslation(new float[]{-0.1983,0.8024,-0.028});
Shape& Shape1429 =  Shape();
Shape1429.setUSE(CString("HAnimJointShape"));
Transform1428.addChild(&Shape1429);

HAnimSegment1426.addChild(&Transform1428);

Shape& Shape1430 =  Shape();
LineSet& LineSet1431 =  LineSet();
LineSet1431.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1432 =  ColorRGBA();
ColorRGBA1432.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1431.addChild(&ColorRGBA1432);

Coordinate& Coordinate1433 =  Coordinate();
Coordinate1433.setPoint(new float[]{-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028}, 6);
LineSet1431.setCoord(Coordinate1433);

Shape1430.setGeometry(&LineSet1431);

HAnimSegment1426.addChild(&Shape1430);

HAnimJoint1425.addChildren(&HAnimSegment1426);

HAnimJoint& HAnimJoint1434 =  HAnimJoint();
HAnimJoint1434.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint1434.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1434.setCenter(new float[]{-0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment1435 =  HAnimSegment();
HAnimSegment1435.setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimSegment1435.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
TouchSensor& TouchSensor1436 =  TouchSensor();
TouchSensor1436.setDescription(CString("HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2"));
HAnimSegment1435.addChild(&TouchSensor1436);

Transform& Transform1437 =  Transform();
Transform1437.setTranslation(new float[]{-0.1983,0.7815,-0.028});
Shape& Shape1438 =  Shape();
Shape1438.setUSE(CString("HAnimJointShape"));
Transform1437.addChild(&Shape1438);

HAnimSegment1435.addChild(&Transform1437);

Shape& Shape1439 =  Shape();
LineSet& LineSet1440 =  LineSet();
LineSet1440.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1441 =  ColorRGBA();
ColorRGBA1441.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1440.addChild(&ColorRGBA1441);

Coordinate& Coordinate1442 =  Coordinate();
Coordinate1442.setPoint(new float[]{-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248}, 6);
LineSet1440.setCoord(Coordinate1442);

Shape1439.setGeometry(&LineSet1440);

HAnimSegment1435.addChild(&Shape1439);

HAnimJoint1434.addChildren(&HAnimSegment1435);

HAnimJoint& HAnimJoint1443 =  HAnimJoint();
HAnimJoint1443.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1443.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1443.setCenter(new float[]{-0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment1444 =  HAnimSegment();
HAnimSegment1444.setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimSegment1444.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
TouchSensor& TouchSensor1445 =  TouchSensor();
TouchSensor1445.setDescription(CString("HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2"));
HAnimSegment1444.addChild(&TouchSensor1445);

Transform& Transform1446 =  Transform();
Transform1446.setTranslation(new float[]{-0.2017,0.7363,-0.0248});
Shape& Shape1447 =  Shape();
Shape1447.setUSE(CString("HAnimJointShape"));
Transform1446.addChild(&Shape1447);

HAnimSegment1444.addChild(&Transform1446);

Shape& Shape1448 =  Shape();
LineSet& LineSet1449 =  LineSet();
LineSet1449.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1450 =  ColorRGBA();
ColorRGBA1450.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1449.addChild(&ColorRGBA1450);

Coordinate& Coordinate1451 =  Coordinate();
Coordinate1451.setPoint(new float[]{-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236}, 6);
LineSet1449.setCoord(Coordinate1451);

Shape1448.setGeometry(&LineSet1449);

HAnimSegment1444.addChild(&Shape1448);

HAnimJoint1443.addChildren(&HAnimSegment1444);

HAnimJoint& HAnimJoint1452 =  HAnimJoint();
HAnimJoint1452.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint1452.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1452.setCenter(new float[]{-0.2028,0.7139,-0.0236});
HAnimSegment& HAnimSegment1453 =  HAnimSegment();
HAnimSegment1453.setDEF(CString("hanim_r_carpal_distal_phalanx_2"));
HAnimSegment1453.X3DNode::setName(CString("r_carpal_distal_phalanx_2"));
TouchSensor& TouchSensor1454 =  TouchSensor();
TouchSensor1454.setDescription(CString("HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2"));
HAnimSegment1453.addChild(&TouchSensor1454);

Transform& Transform1455 =  Transform();
Transform1455.setTranslation(new float[]{-0.2028,0.7139,-0.0236});
Shape& Shape1456 =  Shape();
Shape1456.setUSE(CString("HAnimJointShape"));
Transform1455.addChild(&Shape1456);

HAnimSegment1453.addChild(&Transform1455);

Shape& Shape1457 =  Shape();
LineSet& LineSet1458 =  LineSet();
LineSet1458.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1459 =  ColorRGBA();
ColorRGBA1459.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1458.addChild(&ColorRGBA1459);

Coordinate& Coordinate1460 =  Coordinate();
Coordinate1460.setPoint(new float[]{-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018}, 6);
LineSet1458.setCoord(Coordinate1460);

Shape1457.setGeometry(&LineSet1458);

HAnimSegment1453.addChild(&Shape1457);

Shape& Shape1461 =  Shape();
LineSet& LineSet1462 =  LineSet();
LineSet1462.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1463 =  ColorRGBA();
ColorRGBA1463.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1462.addChild(&ColorRGBA1463);

Coordinate& Coordinate1464 =  Coordinate();
Coordinate1464.setPoint(new float[]{-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423}, 6);
LineSet1462.setCoord(Coordinate1464);

Shape1461.setGeometry(&LineSet1462);

HAnimSegment1453.addChild(&Shape1461);

HAnimSite& HAnimSite1465 =  HAnimSite();
HAnimSite1465.setDEF(CString("hanim_r_carpal_distal_phalanx_2_pt"));
HAnimSite1465.X3DNode::setName(CString("r_carpal_distal_phalanx_2_pt"));
HAnimSite1465.setTranslation(new float[]{-0.198,0.6883,-0.018});
TouchSensor& TouchSensor1466 =  TouchSensor();
TouchSensor1466.setDescription(CString("HAnimSite r_index_distal_tip"));
HAnimSite1465.addChild(&TouchSensor1466);

Shape& Shape1467 =  Shape();
Shape1467.setUSE(CString("HAnimSiteShape"));
HAnimSite1465.addChild(&Shape1467);

HAnimSegment1453.addChild(&HAnimSite1465);

HAnimSite& HAnimSite1468 =  HAnimSite();
HAnimSite1468.setDEF(CString("hanim_r_dactylion_pt"));
HAnimSite1468.X3DNode::setName(CString("r_dactylion_pt"));
HAnimSite1468.setTranslation(new float[]{-0.1941,0.6772,-0.0423});
TouchSensor& TouchSensor1469 =  TouchSensor();
TouchSensor1469.setDescription(CString("HAnimSite r_dactylion_pt"));
HAnimSite1468.addChild(&TouchSensor1469);

Shape& Shape1470 =  Shape();
Shape1470.setUSE(CString("HAnimSiteShape"));
HAnimSite1468.addChild(&Shape1470);

HAnimSegment1453.addChild(&HAnimSite1468);

HAnimJoint1452.addChildren(&HAnimSegment1453);

HAnimJoint1443.addChildren(&HAnimJoint1452);

HAnimJoint1434.addChildren(&HAnimJoint1443);

HAnimJoint1425.addChildren(&HAnimJoint1434);

HAnimJoint1337.addChildren(&HAnimJoint1425);

HAnimJoint& HAnimJoint1471 =  HAnimJoint();
HAnimJoint1471.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint1471.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint1471.setCenter(new float[]{-0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment1472 =  HAnimSegment();
HAnimSegment1472.setDEF(CString("hanim_r_metacarpal_3"));
HAnimSegment1472.X3DNode::setName(CString("r_metacarpal_3"));
TouchSensor& TouchSensor1473 =  TouchSensor();
TouchSensor1473.setDescription(CString("HAnimJoint r_middle0, HAnimSegment r_metacarpal_3"));
HAnimSegment1472.addChild(&TouchSensor1473);

Transform& Transform1474 =  Transform();
Transform1474.setTranslation(new float[]{-0.1987,0.8029,-0.053});
Shape& Shape1475 =  Shape();
Shape1475.setUSE(CString("HAnimJointShape"));
Transform1474.addChild(&Shape1475);

HAnimSegment1472.addChild(&Transform1474);

Shape& Shape1476 =  Shape();
LineSet& LineSet1477 =  LineSet();
LineSet1477.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1478 =  ColorRGBA();
ColorRGBA1478.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1477.addChild(&ColorRGBA1478);

Coordinate& Coordinate1479 =  Coordinate();
Coordinate1479.setPoint(new float[]{-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053}, 6);
LineSet1477.setCoord(Coordinate1479);

Shape1476.setGeometry(&LineSet1477);

HAnimSegment1472.addChild(&Shape1476);

HAnimJoint1471.addChildren(&HAnimSegment1472);

HAnimJoint& HAnimJoint1480 =  HAnimJoint();
HAnimJoint1480.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint1480.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1480.setCenter(new float[]{-0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment1481 =  HAnimSegment();
HAnimSegment1481.setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimSegment1481.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
TouchSensor& TouchSensor1482 =  TouchSensor();
TouchSensor1482.setDescription(CString("HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3"));
HAnimSegment1481.addChild(&TouchSensor1482);

Transform& Transform1483 =  Transform();
Transform1483.setTranslation(new float[]{-0.1987,0.7818,-0.053});
Shape& Shape1484 =  Shape();
Shape1484.setUSE(CString("HAnimJointShape"));
Transform1483.addChild(&Shape1484);

HAnimSegment1481.addChild(&Transform1483);

Shape& Shape1485 =  Shape();
LineSet& LineSet1486 =  LineSet();
LineSet1486.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1487 =  ColorRGBA();
ColorRGBA1487.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1486.addChild(&ColorRGBA1487);

Coordinate& Coordinate1488 =  Coordinate();
Coordinate1488.setPoint(new float[]{-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503}, 6);
LineSet1486.setCoord(Coordinate1488);

Shape1485.setGeometry(&LineSet1486);

HAnimSegment1481.addChild(&Shape1485);

HAnimJoint1480.addChildren(&HAnimSegment1481);

HAnimJoint& HAnimJoint1489 =  HAnimJoint();
HAnimJoint1489.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1489.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1489.setCenter(new float[]{-0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment1490 =  HAnimSegment();
HAnimSegment1490.setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimSegment1490.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
TouchSensor& TouchSensor1491 =  TouchSensor();
TouchSensor1491.setDescription(CString("HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3"));
HAnimSegment1490.addChild(&TouchSensor1491);

Transform& Transform1492 =  Transform();
Transform1492.setTranslation(new float[]{-0.2013,0.7273,-0.0503});
Shape& Shape1493 =  Shape();
Shape1493.setUSE(CString("HAnimJointShape"));
Transform1492.addChild(&Shape1493);

HAnimSegment1490.addChild(&Transform1492);

Shape& Shape1494 =  Shape();
LineSet& LineSet1495 =  LineSet();
LineSet1495.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1496 =  ColorRGBA();
ColorRGBA1496.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1495.addChild(&ColorRGBA1496);

Coordinate& Coordinate1497 =  Coordinate();
Coordinate1497.setPoint(new float[]{-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494}, 6);
LineSet1495.setCoord(Coordinate1497);

Shape1494.setGeometry(&LineSet1495);

HAnimSegment1490.addChild(&Shape1494);

HAnimJoint1489.addChildren(&HAnimSegment1490);

HAnimJoint& HAnimJoint1498 =  HAnimJoint();
HAnimJoint1498.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint1498.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1498.setCenter(new float[]{-0.2026,0.7011,-0.0494});
HAnimSegment& HAnimSegment1499 =  HAnimSegment();
HAnimSegment1499.setDEF(CString("hanim_r_carpal_distal_phalanx_3"));
HAnimSegment1499.X3DNode::setName(CString("r_carpal_distal_phalanx_3"));
TouchSensor& TouchSensor1500 =  TouchSensor();
TouchSensor1500.setDescription(CString("HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3"));
HAnimSegment1499.addChild(&TouchSensor1500);

Transform& Transform1501 =  Transform();
Transform1501.setTranslation(new float[]{-0.2026,0.7011,-0.0494});
Shape& Shape1502 =  Shape();
Shape1502.setUSE(CString("HAnimJointShape"));
Transform1501.addChild(&Shape1502);

HAnimSegment1499.addChild(&Transform1501);

Shape& Shape1503 =  Shape();
LineSet& LineSet1504 =  LineSet();
LineSet1504.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1505 =  ColorRGBA();
ColorRGBA1505.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1504.addChild(&ColorRGBA1505);

Coordinate& Coordinate1506 =  Coordinate();
Coordinate1506.setPoint(new float[]{-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427}, 6);
LineSet1504.setCoord(Coordinate1506);

Shape1503.setGeometry(&LineSet1504);

HAnimSegment1499.addChild(&Shape1503);

HAnimSite& HAnimSite1507 =  HAnimSite();
HAnimSite1507.setDEF(CString("hanim_r_carpal_distal_phalanx_3_pt"));
HAnimSite1507.X3DNode::setName(CString("r_carpal_distal_phalanx_3_pt"));
HAnimSite1507.setTranslation(new float[]{-0.1969,0.6758,-0.0427});
TouchSensor& TouchSensor1508 =  TouchSensor();
TouchSensor1508.setDescription(CString("HAnimSite r_middle_distal_tip"));
HAnimSite1507.addChild(&TouchSensor1508);

Shape& Shape1509 =  Shape();
Shape1509.setUSE(CString("HAnimSiteShape"));
HAnimSite1507.addChild(&Shape1509);

HAnimSegment1499.addChild(&HAnimSite1507);

HAnimJoint1498.addChildren(&HAnimSegment1499);

HAnimJoint1489.addChildren(&HAnimJoint1498);

HAnimJoint1480.addChildren(&HAnimJoint1489);

HAnimJoint1471.addChildren(&HAnimJoint1480);

HAnimJoint1337.addChildren(&HAnimJoint1471);

HAnimJoint& HAnimJoint1510 =  HAnimJoint();
HAnimJoint1510.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint1510.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint1510.setCenter(new float[]{-0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment1511 =  HAnimSegment();
HAnimSegment1511.setDEF(CString("hanim_r_metacarpal_4"));
HAnimSegment1511.X3DNode::setName(CString("r_metacarpal_4"));
TouchSensor& TouchSensor1512 =  TouchSensor();
TouchSensor1512.setDescription(CString("HAnimJoint r_ring0, HAnimSegment r_metacarpal_4"));
HAnimSegment1511.addChild(&TouchSensor1512);

Transform& Transform1513 =  Transform();
Transform1513.setTranslation(new float[]{-0.1956,0.8019,-0.0794});
Shape& Shape1514 =  Shape();
Shape1514.setUSE(CString("HAnimJointShape"));
Transform1513.addChild(&Shape1514);

HAnimSegment1511.addChild(&Transform1513);

Shape& Shape1515 =  Shape();
LineSet& LineSet1516 =  LineSet();
LineSet1516.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1517 =  ColorRGBA();
ColorRGBA1517.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1516.addChild(&ColorRGBA1517);

Coordinate& Coordinate1518 =  Coordinate();
Coordinate1518.setPoint(new float[]{-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794}, 6);
LineSet1516.setCoord(Coordinate1518);

Shape1515.setGeometry(&LineSet1516);

HAnimSegment1511.addChild(&Shape1515);

HAnimJoint1510.addChildren(&HAnimSegment1511);

HAnimJoint& HAnimJoint1519 =  HAnimJoint();
HAnimJoint1519.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint1519.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1519.setCenter(new float[]{-0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment1520 =  HAnimSegment();
HAnimSegment1520.setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimSegment1520.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
TouchSensor& TouchSensor1521 =  TouchSensor();
TouchSensor1521.setDescription(CString("HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4"));
HAnimSegment1520.addChild(&TouchSensor1521);

Transform& Transform1522 =  Transform();
Transform1522.setTranslation(new float[]{-0.1956,0.7815,-0.0794});
Shape& Shape1523 =  Shape();
Shape1523.setUSE(CString("HAnimJointShape"));
Transform1522.addChild(&Shape1523);

HAnimSegment1520.addChild(&Transform1522);

Shape& Shape1524 =  Shape();
LineSet& LineSet1525 =  LineSet();
LineSet1525.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1526 =  ColorRGBA();
ColorRGBA1526.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1525.addChild(&ColorRGBA1526);

Coordinate& Coordinate1527 =  Coordinate();
Coordinate1527.setPoint(new float[]{-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777}, 6);
LineSet1525.setCoord(Coordinate1527);

Shape1524.setGeometry(&LineSet1525);

HAnimSegment1520.addChild(&Shape1524);

HAnimJoint1519.addChildren(&HAnimSegment1520);

HAnimJoint& HAnimJoint1528 =  HAnimJoint();
HAnimJoint1528.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1528.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1528.setCenter(new float[]{-0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment1529 =  HAnimSegment();
HAnimSegment1529.setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimSegment1529.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
TouchSensor& TouchSensor1530 =  TouchSensor();
TouchSensor1530.setDescription(CString("HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4"));
HAnimSegment1529.addChild(&TouchSensor1530);

Transform& Transform1531 =  Transform();
Transform1531.setTranslation(new float[]{-0.1973,0.7287,-0.0777});
Shape& Shape1532 =  Shape();
Shape1532.setUSE(CString("HAnimJointShape"));
Transform1531.addChild(&Shape1532);

HAnimSegment1529.addChild(&Transform1531);

Shape& Shape1533 =  Shape();
LineSet& LineSet1534 =  LineSet();
LineSet1534.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1535 =  ColorRGBA();
ColorRGBA1535.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1534.addChild(&ColorRGBA1535);

Coordinate& Coordinate1536 =  Coordinate();
Coordinate1536.setPoint(new float[]{-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767}, 6);
LineSet1534.setCoord(Coordinate1536);

Shape1533.setGeometry(&LineSet1534);

HAnimSegment1529.addChild(&Shape1533);

HAnimJoint1528.addChildren(&HAnimSegment1529);

HAnimJoint& HAnimJoint1537 =  HAnimJoint();
HAnimJoint1537.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint1537.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1537.setCenter(new float[]{-0.1983,0.7045,-0.0767});
HAnimSegment& HAnimSegment1538 =  HAnimSegment();
HAnimSegment1538.setDEF(CString("hanim_r_carpal_distal_phalanx_4"));
HAnimSegment1538.X3DNode::setName(CString("r_carpal_distal_phalanx_4"));
TouchSensor& TouchSensor1539 =  TouchSensor();
TouchSensor1539.setDescription(CString("HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4"));
HAnimSegment1538.addChild(&TouchSensor1539);

Transform& Transform1540 =  Transform();
Transform1540.setTranslation(new float[]{-0.1983,0.7045,-0.0767});
Shape& Shape1541 =  Shape();
Shape1541.setUSE(CString("HAnimJointShape"));
Transform1540.addChild(&Shape1541);

HAnimSegment1538.addChild(&Transform1540);

Shape& Shape1542 =  Shape();
LineSet& LineSet1543 =  LineSet();
LineSet1543.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1544 =  ColorRGBA();
ColorRGBA1544.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1543.addChild(&ColorRGBA1544);

Coordinate& Coordinate1545 =  Coordinate();
Coordinate1545.setPoint(new float[]{-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693}, 6);
LineSet1543.setCoord(Coordinate1545);

Shape1542.setGeometry(&LineSet1543);

HAnimSegment1538.addChild(&Shape1542);

HAnimSite& HAnimSite1546 =  HAnimSite();
HAnimSite1546.setDEF(CString("hanim_r_carpal_distal_phalanx_4_pt"));
HAnimSite1546.X3DNode::setName(CString("r_carpal_distal_phalanx_4_pt"));
HAnimSite1546.setTranslation(new float[]{-0.1934,0.6778,-0.0693});
TouchSensor& TouchSensor1547 =  TouchSensor();
TouchSensor1547.setDescription(CString("HAnimSite r_ring_distal_tip"));
HAnimSite1546.addChild(&TouchSensor1547);

Shape& Shape1548 =  Shape();
Shape1548.setUSE(CString("HAnimSiteShape"));
HAnimSite1546.addChild(&Shape1548);

HAnimSegment1538.addChild(&HAnimSite1546);

HAnimJoint1537.addChildren(&HAnimSegment1538);

HAnimJoint1528.addChildren(&HAnimJoint1537);

HAnimJoint1519.addChildren(&HAnimJoint1528);

HAnimJoint1510.addChildren(&HAnimJoint1519);

HAnimJoint1337.addChildren(&HAnimJoint1510);

HAnimJoint& HAnimJoint1549 =  HAnimJoint();
HAnimJoint1549.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint1549.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint1549.setCenter(new float[]{-0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment1550 =  HAnimSegment();
HAnimSegment1550.setDEF(CString("hanim_r_metacarpal_5"));
HAnimSegment1550.X3DNode::setName(CString("r_metacarpal_5"));
TouchSensor& TouchSensor1551 =  TouchSensor();
TouchSensor1551.setDescription(CString("HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5"));
HAnimSegment1550.addChild(&TouchSensor1551);

Transform& Transform1552 =  Transform();
Transform1552.setTranslation(new float[]{-0.1925,0.8066,-0.1036});
Shape& Shape1553 =  Shape();
Shape1553.setUSE(CString("HAnimJointShape"));
Transform1552.addChild(&Shape1553);

HAnimSegment1550.addChild(&Transform1552);

Shape& Shape1554 =  Shape();
LineSet& LineSet1555 =  LineSet();
LineSet1555.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1556 =  ColorRGBA();
ColorRGBA1556.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1555.addChild(&ColorRGBA1556);

Coordinate& Coordinate1557 =  Coordinate();
Coordinate1557.setPoint(new float[]{-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036}, 6);
LineSet1555.setCoord(Coordinate1557);

Shape1554.setGeometry(&LineSet1555);

HAnimSegment1550.addChild(&Shape1554);

HAnimJoint1549.addChildren(&HAnimSegment1550);

HAnimJoint& HAnimJoint1558 =  HAnimJoint();
HAnimJoint1558.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint1558.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1558.setCenter(new float[]{-0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment1559 =  HAnimSegment();
HAnimSegment1559.setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimSegment1559.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
TouchSensor& TouchSensor1560 =  TouchSensor();
TouchSensor1560.setDescription(CString("HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5"));
HAnimSegment1559.addChild(&TouchSensor1560);

Transform& Transform1561 =  Transform();
Transform1561.setTranslation(new float[]{-0.1925,0.7866,-0.1036});
Shape& Shape1562 =  Shape();
Shape1562.setUSE(CString("HAnimJointShape"));
Transform1561.addChild(&Shape1562);

HAnimSegment1559.addChild(&Transform1561);

Shape& Shape1563 =  Shape();
LineSet& LineSet1564 =  LineSet();
LineSet1564.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1565 =  ColorRGBA();
ColorRGBA1565.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1564.addChild(&ColorRGBA1565);

Coordinate& Coordinate1566 =  Coordinate();
Coordinate1566.setPoint(new float[]{-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024}, 6);
LineSet1564.setCoord(Coordinate1566);

Shape1563.setGeometry(&LineSet1564);

HAnimSegment1559.addChild(&Shape1563);

HAnimJoint1558.addChildren(&HAnimSegment1559);

HAnimJoint& HAnimJoint1567 =  HAnimJoint();
HAnimJoint1567.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1567.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1567.setCenter(new float[]{-0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment1568 =  HAnimSegment();
HAnimSegment1568.setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimSegment1568.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
TouchSensor& TouchSensor1569 =  TouchSensor();
TouchSensor1569.setDescription(CString("HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5"));
HAnimSegment1568.addChild(&TouchSensor1569);

Transform& Transform1570 =  Transform();
Transform1570.setTranslation(new float[]{-0.1938,0.7452,-0.1024});
Shape& Shape1571 =  Shape();
Shape1571.setUSE(CString("HAnimJointShape"));
Transform1570.addChild(&Shape1571);

HAnimSegment1568.addChild(&Transform1570);

Shape& Shape1572 =  Shape();
LineSet& LineSet1573 =  LineSet();
LineSet1573.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1574 =  ColorRGBA();
ColorRGBA1574.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1573.addChild(&ColorRGBA1574);

Coordinate& Coordinate1575 =  Coordinate();
Coordinate1575.setPoint(new float[]{-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017}, 6);
LineSet1573.setCoord(Coordinate1575);

Shape1572.setGeometry(&LineSet1573);

HAnimSegment1568.addChild(&Shape1572);

HAnimJoint1567.addChildren(&HAnimSegment1568);

HAnimJoint& HAnimJoint1576 =  HAnimJoint();
HAnimJoint1576.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint1576.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1576.setCenter(new float[]{-0.1948,0.7277,-0.1017});
HAnimSegment& HAnimSegment1577 =  HAnimSegment();
HAnimSegment1577.setDEF(CString("hanim_r_carpal_distal_phalanx_5"));
HAnimSegment1577.X3DNode::setName(CString("r_carpal_distal_phalanx_5"));
TouchSensor& TouchSensor1578 =  TouchSensor();
TouchSensor1578.setDescription(CString("HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5"));
HAnimSegment1577.addChild(&TouchSensor1578);

Transform& Transform1579 =  Transform();
Transform1579.setTranslation(new float[]{-0.1948,0.7277,-0.1017});
Shape& Shape1580 =  Shape();
Shape1580.setUSE(CString("HAnimJointShape"));
Transform1579.addChild(&Shape1580);

HAnimSegment1577.addChild(&Transform1579);

Shape& Shape1581 =  Shape();
LineSet& LineSet1582 =  LineSet();
LineSet1582.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1583 =  ColorRGBA();
ColorRGBA1583.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet1582.addChild(&ColorRGBA1583);

Coordinate& Coordinate1584 =  Coordinate();
Coordinate1584.setPoint(new float[]{-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949}, 6);
LineSet1582.setCoord(Coordinate1584);

Shape1581.setGeometry(&LineSet1582);

HAnimSegment1577.addChild(&Shape1581);

HAnimSite& HAnimSite1585 =  HAnimSite();
HAnimSite1585.setDEF(CString("hanim_r_carpal_distal_phalanx_5_pt"));
HAnimSite1585.X3DNode::setName(CString("r_carpal_distal_phalanx_5_pt"));
HAnimSite1585.setTranslation(new float[]{-0.1938,0.7035,-0.0949});
TouchSensor& TouchSensor1586 =  TouchSensor();
TouchSensor1586.setDescription(CString("HAnimSite r_pinky_distal_tip"));
HAnimSite1585.addChild(&TouchSensor1586);

Shape& Shape1587 =  Shape();
Shape1587.setUSE(CString("HAnimSiteShape"));
HAnimSite1585.addChild(&Shape1587);

HAnimSegment1577.addChild(&HAnimSite1585);

HAnimJoint1576.addChildren(&HAnimSegment1577);

HAnimJoint1567.addChildren(&HAnimJoint1576);

HAnimJoint1558.addChildren(&HAnimJoint1567);

HAnimJoint1549.addChildren(&HAnimJoint1558);

HAnimJoint1337.addChildren(&HAnimJoint1549);

HAnimJoint1300.addChildren(&HAnimJoint1337);

HAnimJoint1284.addChildren(&HAnimJoint1300);

HAnimJoint1275.addChildren(&HAnimJoint1284);

HAnimJoint1238.addChildren(&HAnimJoint1275);

HAnimJoint600.addChildren(&HAnimJoint1238);

HAnimJoint591.addChildren(&HAnimJoint600);

HAnimJoint582.addChildren(&HAnimJoint591);

HAnimJoint573.addChildren(&HAnimJoint582);

HAnimJoint564.addChildren(&HAnimJoint573);

HAnimJoint555.addChildren(&HAnimJoint564);

HAnimJoint546.addChildren(&HAnimJoint555);

HAnimJoint537.addChildren(&HAnimJoint546);

HAnimJoint514.addChildren(&HAnimJoint537);

HAnimJoint498.addChildren(&HAnimJoint514);

HAnimJoint489.addChildren(&HAnimJoint498);

HAnimJoint480.addChildren(&HAnimJoint489);

HAnimJoint471.addChildren(&HAnimJoint480);

HAnimJoint441.addChildren(&HAnimJoint471);

HAnimJoint432.addChildren(&HAnimJoint441);

HAnimJoint423.addChildren(&HAnimJoint432);

HAnimJoint400.addChildren(&HAnimJoint423);

HAnimJoint50.addChildren(&HAnimJoint400);

HAnimHumanoid41.setSkeleton(&HAnimJoint50);

HAnimJoint& HAnimJoint1588 =  HAnimJoint();
HAnimJoint1588.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid41.setJoints(&HAnimJoint1588);

HAnimJoint& HAnimJoint1589 =  HAnimJoint();
HAnimJoint1589.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid41.setJoints(&HAnimJoint1589);

HAnimJoint& HAnimJoint1590 =  HAnimJoint();
HAnimJoint1590.setUSE(CString("hanim_vl5"));
HAnimHumanoid41.setJoints(&HAnimJoint1590);

HAnimJoint& HAnimJoint1591 =  HAnimJoint();
HAnimJoint1591.setUSE(CString("hanim_vl4"));
HAnimHumanoid41.setJoints(&HAnimJoint1591);

HAnimJoint& HAnimJoint1592 =  HAnimJoint();
HAnimJoint1592.setUSE(CString("hanim_vl3"));
HAnimHumanoid41.setJoints(&HAnimJoint1592);

HAnimJoint& HAnimJoint1593 =  HAnimJoint();
HAnimJoint1593.setUSE(CString("hanim_vl2"));
HAnimHumanoid41.setJoints(&HAnimJoint1593);

HAnimJoint& HAnimJoint1594 =  HAnimJoint();
HAnimJoint1594.setUSE(CString("hanim_vl1"));
HAnimHumanoid41.setJoints(&HAnimJoint1594);

HAnimJoint& HAnimJoint1595 =  HAnimJoint();
HAnimJoint1595.setUSE(CString("hanim_vt12"));
HAnimHumanoid41.setJoints(&HAnimJoint1595);

HAnimJoint& HAnimJoint1596 =  HAnimJoint();
HAnimJoint1596.setUSE(CString("hanim_vt11"));
HAnimHumanoid41.setJoints(&HAnimJoint1596);

HAnimJoint& HAnimJoint1597 =  HAnimJoint();
HAnimJoint1597.setUSE(CString("hanim_vt10"));
HAnimHumanoid41.setJoints(&HAnimJoint1597);

HAnimJoint& HAnimJoint1598 =  HAnimJoint();
HAnimJoint1598.setUSE(CString("hanim_vt9"));
HAnimHumanoid41.setJoints(&HAnimJoint1598);

HAnimJoint& HAnimJoint1599 =  HAnimJoint();
HAnimJoint1599.setUSE(CString("hanim_vt8"));
HAnimHumanoid41.setJoints(&HAnimJoint1599);

HAnimJoint& HAnimJoint1600 =  HAnimJoint();
HAnimJoint1600.setUSE(CString("hanim_vt7"));
HAnimHumanoid41.setJoints(&HAnimJoint1600);

HAnimJoint& HAnimJoint1601 =  HAnimJoint();
HAnimJoint1601.setUSE(CString("hanim_vt6"));
HAnimHumanoid41.setJoints(&HAnimJoint1601);

HAnimJoint& HAnimJoint1602 =  HAnimJoint();
HAnimJoint1602.setUSE(CString("hanim_vt5"));
HAnimHumanoid41.setJoints(&HAnimJoint1602);

HAnimJoint& HAnimJoint1603 =  HAnimJoint();
HAnimJoint1603.setUSE(CString("hanim_vt4"));
HAnimHumanoid41.setJoints(&HAnimJoint1603);

HAnimJoint& HAnimJoint1604 =  HAnimJoint();
HAnimJoint1604.setUSE(CString("hanim_vt3"));
HAnimHumanoid41.setJoints(&HAnimJoint1604);

HAnimJoint& HAnimJoint1605 =  HAnimJoint();
HAnimJoint1605.setUSE(CString("hanim_vt2"));
HAnimHumanoid41.setJoints(&HAnimJoint1605);

HAnimJoint& HAnimJoint1606 =  HAnimJoint();
HAnimJoint1606.setUSE(CString("hanim_vt1"));
HAnimHumanoid41.setJoints(&HAnimJoint1606);

HAnimJoint& HAnimJoint1607 =  HAnimJoint();
HAnimJoint1607.setUSE(CString("hanim_vc7"));
HAnimHumanoid41.setJoints(&HAnimJoint1607);

HAnimJoint& HAnimJoint1608 =  HAnimJoint();
HAnimJoint1608.setUSE(CString("hanim_vc6"));
HAnimHumanoid41.setJoints(&HAnimJoint1608);

HAnimJoint& HAnimJoint1609 =  HAnimJoint();
HAnimJoint1609.setUSE(CString("hanim_vc5"));
HAnimHumanoid41.setJoints(&HAnimJoint1609);

HAnimJoint& HAnimJoint1610 =  HAnimJoint();
HAnimJoint1610.setUSE(CString("hanim_vc4"));
HAnimHumanoid41.setJoints(&HAnimJoint1610);

HAnimJoint& HAnimJoint1611 =  HAnimJoint();
HAnimJoint1611.setUSE(CString("hanim_vc3"));
HAnimHumanoid41.setJoints(&HAnimJoint1611);

HAnimJoint& HAnimJoint1612 =  HAnimJoint();
HAnimJoint1612.setUSE(CString("hanim_vc2"));
HAnimHumanoid41.setJoints(&HAnimJoint1612);

HAnimJoint& HAnimJoint1613 =  HAnimJoint();
HAnimJoint1613.setUSE(CString("hanim_vc1"));
HAnimHumanoid41.setJoints(&HAnimJoint1613);

HAnimJoint& HAnimJoint1614 =  HAnimJoint();
HAnimJoint1614.setUSE(CString("hanim_skullbase"));
HAnimHumanoid41.setJoints(&HAnimJoint1614);

HAnimJoint& HAnimJoint1615 =  HAnimJoint();
HAnimJoint1615.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid41.setJoints(&HAnimJoint1615);

HAnimJoint& HAnimJoint1616 =  HAnimJoint();
HAnimJoint1616.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid41.setJoints(&HAnimJoint1616);

HAnimJoint& HAnimJoint1617 =  HAnimJoint();
HAnimJoint1617.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid41.setJoints(&HAnimJoint1617);

HAnimJoint& HAnimJoint1618 =  HAnimJoint();
HAnimJoint1618.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1618);

HAnimJoint& HAnimJoint1619 =  HAnimJoint();
HAnimJoint1619.setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1619);

HAnimJoint& HAnimJoint1620 =  HAnimJoint();
HAnimJoint1620.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint1620);

HAnimJoint& HAnimJoint1621 =  HAnimJoint();
HAnimJoint1621.setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint1621);

HAnimJoint& HAnimJoint1622 =  HAnimJoint();
HAnimJoint1622.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint1622);

HAnimJoint& HAnimJoint1623 =  HAnimJoint();
HAnimJoint1623.setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint1623);

HAnimJoint& HAnimJoint1624 =  HAnimJoint();
HAnimJoint1624.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint1624);

HAnimJoint& HAnimJoint1625 =  HAnimJoint();
HAnimJoint1625.setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint1625);

HAnimJoint& HAnimJoint1626 =  HAnimJoint();
HAnimJoint1626.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid41.setJoints(&HAnimJoint1626);

HAnimJoint& HAnimJoint1627 =  HAnimJoint();
HAnimJoint1627.setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid41.setJoints(&HAnimJoint1627);

HAnimJoint& HAnimJoint1628 =  HAnimJoint();
HAnimJoint1628.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1628);

HAnimJoint& HAnimJoint1629 =  HAnimJoint();
HAnimJoint1629.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1629);

HAnimJoint& HAnimJoint1630 =  HAnimJoint();
HAnimJoint1630.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint1630);

HAnimJoint& HAnimJoint1631 =  HAnimJoint();
HAnimJoint1631.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint1631);

HAnimJoint& HAnimJoint1632 =  HAnimJoint();
HAnimJoint1632.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint1632);

HAnimJoint& HAnimJoint1633 =  HAnimJoint();
HAnimJoint1633.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint1633);

HAnimJoint& HAnimJoint1634 =  HAnimJoint();
HAnimJoint1634.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint1634);

HAnimJoint& HAnimJoint1635 =  HAnimJoint();
HAnimJoint1635.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint1635);

HAnimJoint& HAnimJoint1636 =  HAnimJoint();
HAnimJoint1636.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid41.setJoints(&HAnimJoint1636);

HAnimJoint& HAnimJoint1637 =  HAnimJoint();
HAnimJoint1637.setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid41.setJoints(&HAnimJoint1637);

HAnimJoint& HAnimJoint1638 =  HAnimJoint();
HAnimJoint1638.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1638);

HAnimJoint& HAnimJoint1639 =  HAnimJoint();
HAnimJoint1639.setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1639);

HAnimJoint& HAnimJoint1640 =  HAnimJoint();
HAnimJoint1640.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint1640);

HAnimJoint& HAnimJoint1641 =  HAnimJoint();
HAnimJoint1641.setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint1641);

HAnimJoint& HAnimJoint1642 =  HAnimJoint();
HAnimJoint1642.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint1642);

HAnimJoint& HAnimJoint1643 =  HAnimJoint();
HAnimJoint1643.setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint1643);

HAnimJoint& HAnimJoint1644 =  HAnimJoint();
HAnimJoint1644.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint1644);

HAnimJoint& HAnimJoint1645 =  HAnimJoint();
HAnimJoint1645.setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint1645);

HAnimJoint& HAnimJoint1646 =  HAnimJoint();
HAnimJoint1646.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid41.setJoints(&HAnimJoint1646);

HAnimJoint& HAnimJoint1647 =  HAnimJoint();
HAnimJoint1647.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid41.setJoints(&HAnimJoint1647);

HAnimJoint& HAnimJoint1648 =  HAnimJoint();
HAnimJoint1648.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid41.setJoints(&HAnimJoint1648);

HAnimJoint& HAnimJoint1649 =  HAnimJoint();
HAnimJoint1649.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid41.setJoints(&HAnimJoint1649);

HAnimJoint& HAnimJoint1650 =  HAnimJoint();
HAnimJoint1650.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid41.setJoints(&HAnimJoint1650);

HAnimJoint& HAnimJoint1651 =  HAnimJoint();
HAnimJoint1651.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid41.setJoints(&HAnimJoint1651);

HAnimJoint& HAnimJoint1652 =  HAnimJoint();
HAnimJoint1652.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid41.setJoints(&HAnimJoint1652);

HAnimJoint& HAnimJoint1653 =  HAnimJoint();
HAnimJoint1653.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid41.setJoints(&HAnimJoint1653);

HAnimJoint& HAnimJoint1654 =  HAnimJoint();
HAnimJoint1654.setUSE(CString("hanim_l_hip"));
HAnimHumanoid41.setJoints(&HAnimJoint1654);

HAnimJoint& HAnimJoint1655 =  HAnimJoint();
HAnimJoint1655.setUSE(CString("hanim_r_hip"));
HAnimHumanoid41.setJoints(&HAnimJoint1655);

HAnimJoint& HAnimJoint1656 =  HAnimJoint();
HAnimJoint1656.setUSE(CString("hanim_l_knee"));
HAnimHumanoid41.setJoints(&HAnimJoint1656);

HAnimJoint& HAnimJoint1657 =  HAnimJoint();
HAnimJoint1657.setUSE(CString("hanim_r_knee"));
HAnimHumanoid41.setJoints(&HAnimJoint1657);

HAnimJoint& HAnimJoint1658 =  HAnimJoint();
HAnimJoint1658.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid41.setJoints(&HAnimJoint1658);

HAnimJoint& HAnimJoint1659 =  HAnimJoint();
HAnimJoint1659.setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid41.setJoints(&HAnimJoint1659);

HAnimJoint& HAnimJoint1660 =  HAnimJoint();
HAnimJoint1660.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1660);

HAnimJoint& HAnimJoint1661 =  HAnimJoint();
HAnimJoint1661.setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1661);

HAnimJoint& HAnimJoint1662 =  HAnimJoint();
HAnimJoint1662.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint1662);

HAnimJoint& HAnimJoint1663 =  HAnimJoint();
HAnimJoint1663.setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint1663);

HAnimJoint& HAnimJoint1664 =  HAnimJoint();
HAnimJoint1664.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint1664);

HAnimJoint& HAnimJoint1665 =  HAnimJoint();
HAnimJoint1665.setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint1665);

HAnimJoint& HAnimJoint1666 =  HAnimJoint();
HAnimJoint1666.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint1666);

HAnimJoint& HAnimJoint1667 =  HAnimJoint();
HAnimJoint1667.setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint1667);

HAnimJoint& HAnimJoint1668 =  HAnimJoint();
HAnimJoint1668.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1668);

HAnimJoint& HAnimJoint1669 =  HAnimJoint();
HAnimJoint1669.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1669);

HAnimJoint& HAnimJoint1670 =  HAnimJoint();
HAnimJoint1670.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid41.setJoints(&HAnimJoint1670);

HAnimJoint& HAnimJoint1671 =  HAnimJoint();
HAnimJoint1671.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid41.setJoints(&HAnimJoint1671);

HAnimJoint& HAnimJoint1672 =  HAnimJoint();
HAnimJoint1672.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid41.setJoints(&HAnimJoint1672);

HAnimJoint& HAnimJoint1673 =  HAnimJoint();
HAnimJoint1673.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid41.setJoints(&HAnimJoint1673);

HAnimJoint& HAnimJoint1674 =  HAnimJoint();
HAnimJoint1674.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid41.setJoints(&HAnimJoint1674);

HAnimJoint& HAnimJoint1675 =  HAnimJoint();
HAnimJoint1675.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid41.setJoints(&HAnimJoint1675);

HAnimJoint& HAnimJoint1676 =  HAnimJoint();
HAnimJoint1676.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid41.setJoints(&HAnimJoint1676);

HAnimJoint& HAnimJoint1677 =  HAnimJoint();
HAnimJoint1677.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid41.setJoints(&HAnimJoint1677);

HAnimJoint& HAnimJoint1678 =  HAnimJoint();
HAnimJoint1678.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1678);

HAnimJoint& HAnimJoint1679 =  HAnimJoint();
HAnimJoint1679.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1679);

HAnimJoint& HAnimJoint1680 =  HAnimJoint();
HAnimJoint1680.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1680);

HAnimJoint& HAnimJoint1681 =  HAnimJoint();
HAnimJoint1681.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint1681);

HAnimSegment& HAnimSegment1682 =  HAnimSegment();
HAnimSegment1682.setUSE(CString("hanim_pelvis"));
HAnimHumanoid41.setSegments(&HAnimSegment1682);

HAnimSegment& HAnimSegment1683 =  HAnimSegment();
HAnimSegment1683.setUSE(CString("hanim_skull"));
HAnimHumanoid41.setSegments(&HAnimSegment1683);

HAnimSegment& HAnimSegment1684 =  HAnimSegment();
HAnimSegment1684.setUSE(CString("hanim_jaw"));
HAnimHumanoid41.setSegments(&HAnimSegment1684);

HAnimSegment& HAnimSegment1685 =  HAnimSegment();
HAnimSegment1685.setUSE(CString("hanim_c1"));
HAnimHumanoid41.setSegments(&HAnimSegment1685);

HAnimSegment& HAnimSegment1686 =  HAnimSegment();
HAnimSegment1686.setUSE(CString("hanim_c2"));
HAnimHumanoid41.setSegments(&HAnimSegment1686);

HAnimSegment& HAnimSegment1687 =  HAnimSegment();
HAnimSegment1687.setUSE(CString("hanim_c3"));
HAnimHumanoid41.setSegments(&HAnimSegment1687);

HAnimSegment& HAnimSegment1688 =  HAnimSegment();
HAnimSegment1688.setUSE(CString("hanim_c4"));
HAnimHumanoid41.setSegments(&HAnimSegment1688);

HAnimSegment& HAnimSegment1689 =  HAnimSegment();
HAnimSegment1689.setUSE(CString("hanim_c5"));
HAnimHumanoid41.setSegments(&HAnimSegment1689);

HAnimSegment& HAnimSegment1690 =  HAnimSegment();
HAnimSegment1690.setUSE(CString("hanim_c6"));
HAnimHumanoid41.setSegments(&HAnimSegment1690);

HAnimSegment& HAnimSegment1691 =  HAnimSegment();
HAnimSegment1691.setUSE(CString("hanim_c7"));
HAnimHumanoid41.setSegments(&HAnimSegment1691);

HAnimSegment& HAnimSegment1692 =  HAnimSegment();
HAnimSegment1692.setUSE(CString("hanim_t1"));
HAnimHumanoid41.setSegments(&HAnimSegment1692);

HAnimSegment& HAnimSegment1693 =  HAnimSegment();
HAnimSegment1693.setUSE(CString("hanim_t2"));
HAnimHumanoid41.setSegments(&HAnimSegment1693);

HAnimSegment& HAnimSegment1694 =  HAnimSegment();
HAnimSegment1694.setUSE(CString("hanim_t3"));
HAnimHumanoid41.setSegments(&HAnimSegment1694);

HAnimSegment& HAnimSegment1695 =  HAnimSegment();
HAnimSegment1695.setUSE(CString("hanim_t4"));
HAnimHumanoid41.setSegments(&HAnimSegment1695);

HAnimSegment& HAnimSegment1696 =  HAnimSegment();
HAnimSegment1696.setUSE(CString("hanim_t5"));
HAnimHumanoid41.setSegments(&HAnimSegment1696);

HAnimSegment& HAnimSegment1697 =  HAnimSegment();
HAnimSegment1697.setUSE(CString("hanim_t6"));
HAnimHumanoid41.setSegments(&HAnimSegment1697);

HAnimSegment& HAnimSegment1698 =  HAnimSegment();
HAnimSegment1698.setUSE(CString("hanim_t7"));
HAnimHumanoid41.setSegments(&HAnimSegment1698);

HAnimSegment& HAnimSegment1699 =  HAnimSegment();
HAnimSegment1699.setUSE(CString("hanim_t8"));
HAnimHumanoid41.setSegments(&HAnimSegment1699);

HAnimSegment& HAnimSegment1700 =  HAnimSegment();
HAnimSegment1700.setUSE(CString("hanim_t9"));
HAnimHumanoid41.setSegments(&HAnimSegment1700);

HAnimSegment& HAnimSegment1701 =  HAnimSegment();
HAnimSegment1701.setUSE(CString("hanim_t10"));
HAnimHumanoid41.setSegments(&HAnimSegment1701);

HAnimSegment& HAnimSegment1702 =  HAnimSegment();
HAnimSegment1702.setUSE(CString("hanim_t11"));
HAnimHumanoid41.setSegments(&HAnimSegment1702);

HAnimSegment& HAnimSegment1703 =  HAnimSegment();
HAnimSegment1703.setUSE(CString("hanim_t12"));
HAnimHumanoid41.setSegments(&HAnimSegment1703);

HAnimSegment& HAnimSegment1704 =  HAnimSegment();
HAnimSegment1704.setUSE(CString("hanim_l1"));
HAnimHumanoid41.setSegments(&HAnimSegment1704);

HAnimSegment& HAnimSegment1705 =  HAnimSegment();
HAnimSegment1705.setUSE(CString("hanim_l2"));
HAnimHumanoid41.setSegments(&HAnimSegment1705);

HAnimSegment& HAnimSegment1706 =  HAnimSegment();
HAnimSegment1706.setUSE(CString("hanim_l3"));
HAnimHumanoid41.setSegments(&HAnimSegment1706);

HAnimSegment& HAnimSegment1707 =  HAnimSegment();
HAnimSegment1707.setUSE(CString("hanim_l4"));
HAnimHumanoid41.setSegments(&HAnimSegment1707);

HAnimSegment& HAnimSegment1708 =  HAnimSegment();
HAnimSegment1708.setUSE(CString("hanim_l5"));
HAnimHumanoid41.setSegments(&HAnimSegment1708);

HAnimSegment& HAnimSegment1709 =  HAnimSegment();
HAnimSegment1709.setUSE(CString("hanim_sacrum"));
HAnimHumanoid41.setSegments(&HAnimSegment1709);

HAnimSegment& HAnimSegment1710 =  HAnimSegment();
HAnimSegment1710.setUSE(CString("hanim_l_calf"));
HAnimHumanoid41.setSegments(&HAnimSegment1710);

HAnimSegment& HAnimSegment1711 =  HAnimSegment();
HAnimSegment1711.setUSE(CString("hanim_r_calf"));
HAnimHumanoid41.setSegments(&HAnimSegment1711);

HAnimSegment& HAnimSegment1712 =  HAnimSegment();
HAnimSegment1712.setUSE(CString("hanim_l_carpal"));
HAnimHumanoid41.setSegments(&HAnimSegment1712);

HAnimSegment& HAnimSegment1713 =  HAnimSegment();
HAnimSegment1713.setUSE(CString("hanim_r_carpal"));
HAnimHumanoid41.setSegments(&HAnimSegment1713);

HAnimSegment& HAnimSegment1714 =  HAnimSegment();
HAnimSegment1714.setUSE(CString("hanim_l_carpal_distal_phalanx_1"));
HAnimHumanoid41.setSegments(&HAnimSegment1714);

HAnimSegment& HAnimSegment1715 =  HAnimSegment();
HAnimSegment1715.setUSE(CString("hanim_r_carpal_distal_phalanx_1"));
HAnimHumanoid41.setSegments(&HAnimSegment1715);

HAnimSegment& HAnimSegment1716 =  HAnimSegment();
HAnimSegment1716.setUSE(CString("hanim_l_carpal_distal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1716);

HAnimSegment& HAnimSegment1717 =  HAnimSegment();
HAnimSegment1717.setUSE(CString("hanim_r_carpal_distal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1717);

HAnimSegment& HAnimSegment1718 =  HAnimSegment();
HAnimSegment1718.setUSE(CString("hanim_l_carpal_distal_phalanx_3"));
HAnimHumanoid41.setSegments(&HAnimSegment1718);

HAnimSegment& HAnimSegment1719 =  HAnimSegment();
HAnimSegment1719.setUSE(CString("hanim_r_carpal_distal_phalanx_3"));
HAnimHumanoid41.setSegments(&HAnimSegment1719);

HAnimSegment& HAnimSegment1720 =  HAnimSegment();
HAnimSegment1720.setUSE(CString("hanim_l_carpal_distal_phalanx_4"));
HAnimHumanoid41.setSegments(&HAnimSegment1720);

HAnimSegment& HAnimSegment1721 =  HAnimSegment();
HAnimSegment1721.setUSE(CString("hanim_r_carpal_distal_phalanx_4"));
HAnimHumanoid41.setSegments(&HAnimSegment1721);

HAnimSegment& HAnimSegment1722 =  HAnimSegment();
HAnimSegment1722.setUSE(CString("hanim_l_carpal_distal_phalanx_5"));
HAnimHumanoid41.setSegments(&HAnimSegment1722);

HAnimSegment& HAnimSegment1723 =  HAnimSegment();
HAnimSegment1723.setUSE(CString("hanim_r_carpal_distal_phalanx_5"));
HAnimHumanoid41.setSegments(&HAnimSegment1723);

HAnimSegment& HAnimSegment1724 =  HAnimSegment();
HAnimSegment1724.setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1724);

HAnimSegment& HAnimSegment1725 =  HAnimSegment();
HAnimSegment1725.setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1725);

HAnimSegment& HAnimSegment1726 =  HAnimSegment();
HAnimSegment1726.setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid41.setSegments(&HAnimSegment1726);

HAnimSegment& HAnimSegment1727 =  HAnimSegment();
HAnimSegment1727.setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid41.setSegments(&HAnimSegment1727);

HAnimSegment& HAnimSegment1728 =  HAnimSegment();
HAnimSegment1728.setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid41.setSegments(&HAnimSegment1728);

HAnimSegment& HAnimSegment1729 =  HAnimSegment();
HAnimSegment1729.setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid41.setSegments(&HAnimSegment1729);

HAnimSegment& HAnimSegment1730 =  HAnimSegment();
HAnimSegment1730.setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid41.setSegments(&HAnimSegment1730);

HAnimSegment& HAnimSegment1731 =  HAnimSegment();
HAnimSegment1731.setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid41.setSegments(&HAnimSegment1731);

HAnimSegment& HAnimSegment1732 =  HAnimSegment();
HAnimSegment1732.setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid41.setSegments(&HAnimSegment1732);

HAnimSegment& HAnimSegment1733 =  HAnimSegment();
HAnimSegment1733.setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid41.setSegments(&HAnimSegment1733);

HAnimSegment& HAnimSegment1734 =  HAnimSegment();
HAnimSegment1734.setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1734);

HAnimSegment& HAnimSegment1735 =  HAnimSegment();
HAnimSegment1735.setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1735);

HAnimSegment& HAnimSegment1736 =  HAnimSegment();
HAnimSegment1736.setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid41.setSegments(&HAnimSegment1736);

HAnimSegment& HAnimSegment1737 =  HAnimSegment();
HAnimSegment1737.setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid41.setSegments(&HAnimSegment1737);

HAnimSegment& HAnimSegment1738 =  HAnimSegment();
HAnimSegment1738.setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid41.setSegments(&HAnimSegment1738);

HAnimSegment& HAnimSegment1739 =  HAnimSegment();
HAnimSegment1739.setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid41.setSegments(&HAnimSegment1739);

HAnimSegment& HAnimSegment1740 =  HAnimSegment();
HAnimSegment1740.setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid41.setSegments(&HAnimSegment1740);

HAnimSegment& HAnimSegment1741 =  HAnimSegment();
HAnimSegment1741.setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid41.setSegments(&HAnimSegment1741);

HAnimSegment& HAnimSegment1742 =  HAnimSegment();
HAnimSegment1742.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid41.setSegments(&HAnimSegment1742);

HAnimSegment& HAnimSegment1743 =  HAnimSegment();
HAnimSegment1743.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid41.setSegments(&HAnimSegment1743);

HAnimSegment& HAnimSegment1744 =  HAnimSegment();
HAnimSegment1744.setUSE(CString("hanim_l_eyeball"));
HAnimHumanoid41.setSegments(&HAnimSegment1744);

HAnimSegment& HAnimSegment1745 =  HAnimSegment();
HAnimSegment1745.setUSE(CString("hanim_r_eyeball"));
HAnimHumanoid41.setSegments(&HAnimSegment1745);

HAnimSegment& HAnimSegment1746 =  HAnimSegment();
HAnimSegment1746.setUSE(CString("hanim_l_eyebrow"));
HAnimHumanoid41.setSegments(&HAnimSegment1746);

HAnimSegment& HAnimSegment1747 =  HAnimSegment();
HAnimSegment1747.setUSE(CString("hanim_r_eyebrow"));
HAnimHumanoid41.setSegments(&HAnimSegment1747);

HAnimSegment& HAnimSegment1748 =  HAnimSegment();
HAnimSegment1748.setUSE(CString("hanim_l_eyelid"));
HAnimHumanoid41.setSegments(&HAnimSegment1748);

HAnimSegment& HAnimSegment1749 =  HAnimSegment();
HAnimSegment1749.setUSE(CString("hanim_r_eyelid"));
HAnimHumanoid41.setSegments(&HAnimSegment1749);

HAnimSegment& HAnimSegment1750 =  HAnimSegment();
HAnimSegment1750.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid41.setSegments(&HAnimSegment1750);

HAnimSegment& HAnimSegment1751 =  HAnimSegment();
HAnimSegment1751.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid41.setSegments(&HAnimSegment1751);

HAnimSegment& HAnimSegment1752 =  HAnimSegment();
HAnimSegment1752.setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid41.setSegments(&HAnimSegment1752);

HAnimSegment& HAnimSegment1753 =  HAnimSegment();
HAnimSegment1753.setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid41.setSegments(&HAnimSegment1753);

HAnimSegment& HAnimSegment1754 =  HAnimSegment();
HAnimSegment1754.setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1754);

HAnimSegment& HAnimSegment1755 =  HAnimSegment();
HAnimSegment1755.setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1755);

HAnimSegment& HAnimSegment1756 =  HAnimSegment();
HAnimSegment1756.setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid41.setSegments(&HAnimSegment1756);

HAnimSegment& HAnimSegment1757 =  HAnimSegment();
HAnimSegment1757.setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid41.setSegments(&HAnimSegment1757);

HAnimSegment& HAnimSegment1758 =  HAnimSegment();
HAnimSegment1758.setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid41.setSegments(&HAnimSegment1758);

HAnimSegment& HAnimSegment1759 =  HAnimSegment();
HAnimSegment1759.setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid41.setSegments(&HAnimSegment1759);

HAnimSegment& HAnimSegment1760 =  HAnimSegment();
HAnimSegment1760.setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid41.setSegments(&HAnimSegment1760);

HAnimSegment& HAnimSegment1761 =  HAnimSegment();
HAnimSegment1761.setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid41.setSegments(&HAnimSegment1761);

HAnimSegment& HAnimSegment1762 =  HAnimSegment();
HAnimSegment1762.setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1762);

HAnimSegment& HAnimSegment1763 =  HAnimSegment();
HAnimSegment1763.setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1763);

HAnimSegment& HAnimSegment1764 =  HAnimSegment();
HAnimSegment1764.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid41.setSegments(&HAnimSegment1764);

HAnimSegment& HAnimSegment1765 =  HAnimSegment();
HAnimSegment1765.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid41.setSegments(&HAnimSegment1765);

HAnimSegment& HAnimSegment1766 =  HAnimSegment();
HAnimSegment1766.setUSE(CString("hanim_l_talus"));
HAnimHumanoid41.setSegments(&HAnimSegment1766);

HAnimSegment& HAnimSegment1767 =  HAnimSegment();
HAnimSegment1767.setUSE(CString("hanim_r_talus"));
HAnimHumanoid41.setSegments(&HAnimSegment1767);

HAnimSegment& HAnimSegment1768 =  HAnimSegment();
HAnimSegment1768.setUSE(CString("hanim_l_tarsal_distal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1768);

HAnimSegment& HAnimSegment1769 =  HAnimSegment();
HAnimSegment1769.setUSE(CString("hanim_r_tarsal_distal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1769);

HAnimSegment& HAnimSegment1770 =  HAnimSegment();
HAnimSegment1770.setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1770);

HAnimSegment& HAnimSegment1771 =  HAnimSegment();
HAnimSegment1771.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment1771);

HAnimSegment& HAnimSegment1772 =  HAnimSegment();
HAnimSegment1772.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid41.setSegments(&HAnimSegment1772);

HAnimSegment& HAnimSegment1773 =  HAnimSegment();
HAnimSegment1773.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid41.setSegments(&HAnimSegment1773);

HAnimSegment& HAnimSegment1774 =  HAnimSegment();
HAnimSegment1774.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid41.setSegments(&HAnimSegment1774);

HAnimSegment& HAnimSegment1775 =  HAnimSegment();
HAnimSegment1775.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid41.setSegments(&HAnimSegment1775);

HAnimSite& HAnimSite1776 =  HAnimSite();
HAnimSite1776.setUSE(CString("hanim_crotch_pt"));
HAnimHumanoid41.setSites(&HAnimSite1776);

HAnimSite& HAnimSite1777 =  HAnimSite();
HAnimSite1777.setUSE(CString("hanim_skull_vertex_pt"));
HAnimHumanoid41.setSites(&HAnimSite1777);

HAnimSite& HAnimSite1778 =  HAnimSite();
HAnimSite1778.setUSE(CString("hanim_sellion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1778);

HAnimSite& HAnimSite1779 =  HAnimSite();
HAnimSite1779.setUSE(CString("hanim_supramenton_pt"));
HAnimHumanoid41.setSites(&HAnimSite1779);

HAnimSite& HAnimSite1780 =  HAnimSite();
HAnimSite1780.setUSE(CString("hanim_nuchale_pt"));
HAnimHumanoid41.setSites(&HAnimSite1780);

HAnimSite& HAnimSite1781 =  HAnimSite();
HAnimSite1781.setUSE(CString("hanim_suprasternale_pt"));
HAnimHumanoid41.setSites(&HAnimSite1781);

HAnimSite& HAnimSite1782 =  HAnimSite();
HAnimSite1782.setUSE(CString("hanim_cervicale_pt"));
HAnimHumanoid41.setSites(&HAnimSite1782);

HAnimSite& HAnimSite1783 =  HAnimSite();
HAnimSite1783.setUSE(CString("hanim_substernale_pt"));
HAnimHumanoid41.setSites(&HAnimSite1783);

HAnimSite& HAnimSite1784 =  HAnimSite();
HAnimSite1784.setUSE(CString("hanim_rib10_midspine_pt"));
HAnimHumanoid41.setSites(&HAnimSite1784);

HAnimSite& HAnimSite1785 =  HAnimSite();
HAnimSite1785.setUSE(CString("hanim_waist_preferred_posterior_pt"));
HAnimHumanoid41.setSites(&HAnimSite1785);

HAnimSite& HAnimSite1786 =  HAnimSite();
HAnimSite1786.setUSE(CString("hanim_navel_pt"));
HAnimHumanoid41.setSites(&HAnimSite1786);

HAnimSite& HAnimSite1787 =  HAnimSite();
HAnimSite1787.setUSE(CString("hanim_l_acromion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1787);

HAnimSite& HAnimSite1788 =  HAnimSite();
HAnimSite1788.setUSE(CString("hanim_r_acromion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1788);

HAnimSite& HAnimSite1789 =  HAnimSite();
HAnimSite1789.setUSE(CString("hanim_r_asis_pt"));
HAnimHumanoid41.setSites(&HAnimSite1789);

HAnimSite& HAnimSite1790 =  HAnimSite();
HAnimSite1790.setUSE(CString("hanim_l_asis_pt"));
HAnimHumanoid41.setSites(&HAnimSite1790);

HAnimSite& HAnimSite1791 =  HAnimSite();
HAnimSite1791.setUSE(CString("hanim_l_axilla_distal_pt"));
HAnimHumanoid41.setSites(&HAnimSite1791);

HAnimSite& HAnimSite1792 =  HAnimSite();
HAnimSite1792.setUSE(CString("hanim_r_axilla_distal_pt"));
HAnimHumanoid41.setSites(&HAnimSite1792);

HAnimSite& HAnimSite1793 =  HAnimSite();
HAnimSite1793.setUSE(CString("hanim_l_axilla_proximal_pt"));
HAnimHumanoid41.setSites(&HAnimSite1793);

HAnimSite& HAnimSite1794 =  HAnimSite();
HAnimSite1794.setUSE(CString("hanim_r_axilla_proximal_pt"));
HAnimHumanoid41.setSites(&HAnimSite1794);

HAnimSite& HAnimSite1795 =  HAnimSite();
HAnimSite1795.setUSE(CString("hanim_l_calcaneus_posterior_pt"));
HAnimHumanoid41.setSites(&HAnimSite1795);

HAnimSite& HAnimSite1796 =  HAnimSite();
HAnimSite1796.setUSE(CString("hanim_r_calcaneus_posterior_pt"));
HAnimHumanoid41.setSites(&HAnimSite1796);

HAnimSite& HAnimSite1797 =  HAnimSite();
HAnimSite1797.setUSE(CString("hanim_l_carpal_distal_phalanx_1_pt"));
HAnimHumanoid41.setSites(&HAnimSite1797);

HAnimSite& HAnimSite1798 =  HAnimSite();
HAnimSite1798.setUSE(CString("hanim_r_carpal_distal_phalanx_1_pt"));
HAnimHumanoid41.setSites(&HAnimSite1798);

HAnimSite& HAnimSite1799 =  HAnimSite();
HAnimSite1799.setUSE(CString("hanim_l_carpal_distal_phalanx_2_pt"));
HAnimHumanoid41.setSites(&HAnimSite1799);

HAnimSite& HAnimSite1800 =  HAnimSite();
HAnimSite1800.setUSE(CString("hanim_r_carpal_distal_phalanx_2_pt"));
HAnimHumanoid41.setSites(&HAnimSite1800);

HAnimSite& HAnimSite1801 =  HAnimSite();
HAnimSite1801.setUSE(CString("hanim_l_carpal_distal_phalanx_3_pt"));
HAnimHumanoid41.setSites(&HAnimSite1801);

HAnimSite& HAnimSite1802 =  HAnimSite();
HAnimSite1802.setUSE(CString("hanim_r_carpal_distal_phalanx_3_pt"));
HAnimHumanoid41.setSites(&HAnimSite1802);

HAnimSite& HAnimSite1803 =  HAnimSite();
HAnimSite1803.setUSE(CString("hanim_l_carpal_distal_phalanx_4_pt"));
HAnimHumanoid41.setSites(&HAnimSite1803);

HAnimSite& HAnimSite1804 =  HAnimSite();
HAnimSite1804.setUSE(CString("hanim_r_carpal_distal_phalanx_4_pt"));
HAnimHumanoid41.setSites(&HAnimSite1804);

HAnimSite& HAnimSite1805 =  HAnimSite();
HAnimSite1805.setUSE(CString("hanim_l_carpal_distal_phalanx_5_pt"));
HAnimHumanoid41.setSites(&HAnimSite1805);

HAnimSite& HAnimSite1806 =  HAnimSite();
HAnimSite1806.setUSE(CString("hanim_r_carpal_distal_phalanx_5_pt"));
HAnimHumanoid41.setSites(&HAnimSite1806);

HAnimSite& HAnimSite1807 =  HAnimSite();
HAnimSite1807.setUSE(CString("hanim_l_clavicle_pt"));
HAnimHumanoid41.setSites(&HAnimSite1807);

HAnimSite& HAnimSite1808 =  HAnimSite();
HAnimSite1808.setUSE(CString("hanim_r_clavicle_pt"));
HAnimHumanoid41.setSites(&HAnimSite1808);

HAnimSite& HAnimSite1809 =  HAnimSite();
HAnimSite1809.setUSE(CString("hanim_l_dactylion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1809);

HAnimSite& HAnimSite1810 =  HAnimSite();
HAnimSite1810.setUSE(CString("hanim_r_dactylion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1810);

HAnimSite& HAnimSite1811 =  HAnimSite();
HAnimSite1811.setUSE(CString("hanim_l_femoral_lateral_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite1811);

HAnimSite& HAnimSite1812 =  HAnimSite();
HAnimSite1812.setUSE(CString("hanim_r_femoral_lateral_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite1812);

HAnimSite& HAnimSite1813 =  HAnimSite();
HAnimSite1813.setUSE(CString("hanim_l_femoral_medial_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite1813);

HAnimSite& HAnimSite1814 =  HAnimSite();
HAnimSite1814.setUSE(CString("hanim_r_femoral_medial_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite1814);

HAnimSite& HAnimSite1815 =  HAnimSite();
HAnimSite1815.setUSE(CString("hanim_l_forefoot_tip_pt"));
HAnimHumanoid41.setSites(&HAnimSite1815);

HAnimSite& HAnimSite1816 =  HAnimSite();
HAnimSite1816.setUSE(CString("hanim_r_forefoot_tip_pt"));
HAnimHumanoid41.setSites(&HAnimSite1816);

HAnimSite& HAnimSite1817 =  HAnimSite();
HAnimSite1817.setUSE(CString("hanim_r_gonion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1817);

HAnimSite& HAnimSite1818 =  HAnimSite();
HAnimSite1818.setUSE(CString("hanim_l_gonion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1818);

HAnimSite& HAnimSite1819 =  HAnimSite();
HAnimSite1819.setUSE(CString("hanim_l_humeral_lateral_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite1819);

HAnimSite& HAnimSite1820 =  HAnimSite();
HAnimSite1820.setUSE(CString("hanim_r_humeral_lateral_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite1820);

HAnimSite& HAnimSite1821 =  HAnimSite();
HAnimSite1821.setUSE(CString("hanim_l_humeral_medial_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite1821);

HAnimSite& HAnimSite1822 =  HAnimSite();
HAnimSite1822.setUSE(CString("hanim_r_humeral_medial_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite1822);

HAnimSite& HAnimSite1823 =  HAnimSite();
HAnimSite1823.setUSE(CString("hanim_r_iliocristale_pt"));
HAnimHumanoid41.setSites(&HAnimSite1823);

HAnimSite& HAnimSite1824 =  HAnimSite();
HAnimSite1824.setUSE(CString("hanim_l_iliocristale_pt"));
HAnimHumanoid41.setSites(&HAnimSite1824);

HAnimSite& HAnimSite1825 =  HAnimSite();
HAnimSite1825.setUSE(CString("hanim_r_infraorbitale_pt"));
HAnimHumanoid41.setSites(&HAnimSite1825);

HAnimSite& HAnimSite1826 =  HAnimSite();
HAnimSite1826.setUSE(CString("hanim_l_infraorbitale_pt"));
HAnimHumanoid41.setSites(&HAnimSite1826);

HAnimSite& HAnimSite1827 =  HAnimSite();
HAnimSite1827.setUSE(CString("hanim_l_knee_crease_pt"));
HAnimHumanoid41.setSites(&HAnimSite1827);

HAnimSite& HAnimSite1828 =  HAnimSite();
HAnimSite1828.setUSE(CString("hanim_r_knee_crease_pt"));
HAnimHumanoid41.setSites(&HAnimSite1828);

HAnimSite& HAnimSite1829 =  HAnimSite();
HAnimSite1829.setUSE(CString("hanim_l_lateral_malleolus_pt"));
HAnimHumanoid41.setSites(&HAnimSite1829);

HAnimSite& HAnimSite1830 =  HAnimSite();
HAnimSite1830.setUSE(CString("hanim_r_lateral_malleolus_pt"));
HAnimHumanoid41.setSites(&HAnimSite1830);

HAnimSite& HAnimSite1831 =  HAnimSite();
HAnimSite1831.setUSE(CString("hanim_l_medial_malleolus_pt"));
HAnimHumanoid41.setSites(&HAnimSite1831);

HAnimSite& HAnimSite1832 =  HAnimSite();
HAnimSite1832.setUSE(CString("hanim_r_medial_malleolus_pt"));
HAnimHumanoid41.setSites(&HAnimSite1832);

HAnimSite& HAnimSite1833 =  HAnimSite();
HAnimSite1833.setUSE(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimHumanoid41.setSites(&HAnimSite1833);

HAnimSite& HAnimSite1834 =  HAnimSite();
HAnimSite1834.setUSE(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimHumanoid41.setSites(&HAnimSite1834);

HAnimSite& HAnimSite1835 =  HAnimSite();
HAnimSite1835.setUSE(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimHumanoid41.setSites(&HAnimSite1835);

HAnimSite& HAnimSite1836 =  HAnimSite();
HAnimSite1836.setUSE(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimHumanoid41.setSites(&HAnimSite1836);

HAnimSite& HAnimSite1837 =  HAnimSite();
HAnimSite1837.setUSE(CString("hanim_l_metatarsal_phalanx_1_pt"));
HAnimHumanoid41.setSites(&HAnimSite1837);

HAnimSite& HAnimSite1838 =  HAnimSite();
HAnimSite1838.setUSE(CString("hanim_r_metatarsal_phalanx_1_pt"));
HAnimHumanoid41.setSites(&HAnimSite1838);

HAnimSite& HAnimSite1839 =  HAnimSite();
HAnimSite1839.setUSE(CString("hanim_l_metatarsal_phalanx_5_pt"));
HAnimHumanoid41.setSites(&HAnimSite1839);

HAnimSite& HAnimSite1840 =  HAnimSite();
HAnimSite1840.setUSE(CString("hanim_r_metatarsal_phalanx_5_pt"));
HAnimHumanoid41.setSites(&HAnimSite1840);

HAnimSite& HAnimSite1841 =  HAnimSite();
HAnimSite1841.setUSE(CString("hanim_r_neck_base_pt"));
HAnimHumanoid41.setSites(&HAnimSite1841);

HAnimSite& HAnimSite1842 =  HAnimSite();
HAnimSite1842.setUSE(CString("hanim_l_neck_base_pt"));
HAnimHumanoid41.setSites(&HAnimSite1842);

HAnimSite& HAnimSite1843 =  HAnimSite();
HAnimSite1843.setUSE(CString("hanim_l_olecranon_pt"));
HAnimHumanoid41.setSites(&HAnimSite1843);

HAnimSite& HAnimSite1844 =  HAnimSite();
HAnimSite1844.setUSE(CString("hanim_r_olecranon_pt"));
HAnimHumanoid41.setSites(&HAnimSite1844);

HAnimSite& HAnimSite1845 =  HAnimSite();
HAnimSite1845.setUSE(CString("hanim_r_psis_pt"));
HAnimHumanoid41.setSites(&HAnimSite1845);

HAnimSite& HAnimSite1846 =  HAnimSite();
HAnimSite1846.setUSE(CString("hanim_l_psis_pt"));
HAnimHumanoid41.setSites(&HAnimSite1846);

HAnimSite& HAnimSite1847 =  HAnimSite();
HAnimSite1847.setUSE(CString("hanim_l_radial_styloid_pt"));
HAnimHumanoid41.setSites(&HAnimSite1847);

HAnimSite& HAnimSite1848 =  HAnimSite();
HAnimSite1848.setUSE(CString("hanim_r_radial_styloid_pt"));
HAnimHumanoid41.setSites(&HAnimSite1848);

HAnimSite& HAnimSite1849 =  HAnimSite();
HAnimSite1849.setUSE(CString("hanim_l_radiale_pt"));
HAnimHumanoid41.setSites(&HAnimSite1849);

HAnimSite& HAnimSite1850 =  HAnimSite();
HAnimSite1850.setUSE(CString("hanim_r_radiale_pt"));
HAnimHumanoid41.setSites(&HAnimSite1850);

HAnimSite& HAnimSite1851 =  HAnimSite();
HAnimSite1851.setUSE(CString("hanim_r_rib10_pt"));
HAnimHumanoid41.setSites(&HAnimSite1851);

HAnimSite& HAnimSite1852 =  HAnimSite();
HAnimSite1852.setUSE(CString("hanim_l_rib10_pt"));
HAnimHumanoid41.setSites(&HAnimSite1852);

HAnimSite& HAnimSite1853 =  HAnimSite();
HAnimSite1853.setUSE(CString("hanim_temporomandibular_l_site_pt"));
HAnimHumanoid41.setSites(&HAnimSite1853);

HAnimSite& HAnimSite1854 =  HAnimSite();
HAnimSite1854.setUSE(CString("hanim_temporomandibular_r_site_pt"));
HAnimHumanoid41.setSites(&HAnimSite1854);

HAnimSite& HAnimSite1855 =  HAnimSite();
HAnimSite1855.setUSE(CString("hanim_l_sphyrion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1855);

HAnimSite& HAnimSite1856 =  HAnimSite();
HAnimSite1856.setUSE(CString("hanim_r_sphyrion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1856);

HAnimSite& HAnimSite1857 =  HAnimSite();
HAnimSite1857.setUSE(CString("hanim_l_tarsal_distal_phalanx_2_pt"));
HAnimHumanoid41.setSites(&HAnimSite1857);

HAnimSite& HAnimSite1858 =  HAnimSite();
HAnimSite1858.setUSE(CString("hanim_r_tarsal_distal_phalanx_2_pt"));
HAnimHumanoid41.setSites(&HAnimSite1858);

HAnimSite& HAnimSite1859 =  HAnimSite();
HAnimSite1859.setUSE(CString("hanim_r_thelion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1859);

HAnimSite& HAnimSite1860 =  HAnimSite();
HAnimSite1860.setUSE(CString("hanim_l_thelion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1860);

HAnimSite& HAnimSite1861 =  HAnimSite();
HAnimSite1861.setUSE(CString("hanim_r_tragion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1861);

HAnimSite& HAnimSite1862 =  HAnimSite();
HAnimSite1862.setUSE(CString("hanim_l_tragion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1862);

HAnimSite& HAnimSite1863 =  HAnimSite();
HAnimSite1863.setUSE(CString("hanim_r_trochanterion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1863);

HAnimSite& HAnimSite1864 =  HAnimSite();
HAnimSite1864.setUSE(CString("hanim_l_trochanterion_pt"));
HAnimHumanoid41.setSites(&HAnimSite1864);

HAnimSite& HAnimSite1865 =  HAnimSite();
HAnimSite1865.setUSE(CString("hanim_l_ulnar_styloid_pt"));
HAnimHumanoid41.setSites(&HAnimSite1865);

HAnimSite& HAnimSite1866 =  HAnimSite();
HAnimSite1866.setUSE(CString("hanim_r_ulnar_styloid_pt"));
HAnimHumanoid41.setSites(&HAnimSite1866);

HAnimSite& HAnimSite1867 =  HAnimSite();
HAnimSite1867.setDEF(CString("hanim_l_inclined_view"));
HAnimSite1867.X3DNode::setName(CString("l_inclined_view"));
HAnimSite1867.setTranslation(new float[]{1.62,1.05,2.06});
HAnimSite1867.setRotation(new float[]{-0.113,0.993,0.0347,0.671});
TouchSensor& TouchSensor1868 =  TouchSensor();
TouchSensor1868.setDescription(CString("HAnimSite l_inclined_view"));
HAnimSite1867.addChild(&TouchSensor1868);

Shape& Shape1869 =  Shape();
Shape1869.setUSE(CString("HAnimSiteShape"));
HAnimSite1867.addChild(&Shape1869);

Viewpoint& Viewpoint1870 =  Viewpoint();
Viewpoint1870.setDEF(CString("hanim_l_inclined_viewpoint"));
Viewpoint1870.setDescription(CString("left inclined"));
Viewpoint1870.setPosition(new float[]{0.0,0.0,0.0});
HAnimSite1867.addChild(&Viewpoint1870);

Anchor& Anchor1871 =  Anchor();
Anchor1871.setDescription(CString("HAnimSite hanim_l_inclined_view Viewpoint"));
Anchor1871.setUrl(new CString[]{CString("#hanim_l_inclined_viewpoint")}, 1);
LOD& LOD1872 =  LOD();
LOD1872.setForceTransitions(true);
LOD1872.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1873 =  WorldInfo();
WorldInfo1873.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1872.addChildren(&WorldInfo1873);

Shape& Shape1874 =  Shape();
Shape1874.setUSE(CString("HAnimSiteViewpointShape"));
LOD1872.addChildren(Shape1874);

Anchor1871.addChild(&LOD1872);

HAnimSite1867.addChild(Anchor1871);

HAnimHumanoid41.setViewpoints(&HAnimSite1867);

HAnimSite& HAnimSite1875 =  HAnimSite();
HAnimSite1875.setDEF(CString("hanim_r_inclined_view"));
HAnimSite1875.X3DNode::setName(CString("r_inclined_view"));
HAnimSite1875.setTranslation(new float[]{-1.62,1.05,2.06});
HAnimSite1875.setRotation(new float[]{-0.113,-0.993,0.0347,0.671});
TouchSensor& TouchSensor1876 =  TouchSensor();
TouchSensor1876.setDescription(CString("HAnimSite r_inclined_view"));
HAnimSite1875.addChild(&TouchSensor1876);

Shape& Shape1877 =  Shape();
Shape1877.setUSE(CString("HAnimSiteShape"));
HAnimSite1875.addChild(&Shape1877);

Viewpoint& Viewpoint1878 =  Viewpoint();
Viewpoint1878.setDEF(CString("hanim_r_inclined_viewpoint"));
Viewpoint1878.setDescription(CString("right inclined"));
Viewpoint1878.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1878.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite1875.addChild(&Viewpoint1878);

Anchor& Anchor1879 =  Anchor();
Anchor1879.setDescription(CString("HAnimSite hanim_r_inclined_view Viewpoint"));
Anchor1879.setUrl(new CString[]{CString("#hanim_r_inclined_viewpoint")}, 1);
LOD& LOD1880 =  LOD();
LOD1880.setForceTransitions(true);
LOD1880.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1881 =  WorldInfo();
WorldInfo1881.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1880.addChildren(&WorldInfo1881);

Shape& Shape1882 =  Shape();
Shape1882.setUSE(CString("HAnimSiteViewpointShape"));
LOD1880.addChildren(Shape1882);

Anchor1879.addChild(&LOD1880);

HAnimSite1875.addChild(Anchor1879);

HAnimHumanoid41.addViewpoints(&HAnimSite1875);

HAnimSite& HAnimSite1883 =  HAnimSite();
HAnimSite1883.setDEF(CString("hanim_front_view"));
HAnimSite1883.X3DNode::setName(CString("front_view"));
HAnimSite1883.setTranslation(new float[]{0.0,0.85,2.58});
TouchSensor& TouchSensor1884 =  TouchSensor();
TouchSensor1884.setDescription(CString("HAnimSite front_view"));
HAnimSite1883.addChild(&TouchSensor1884);

Shape& Shape1885 =  Shape();
Shape1885.setUSE(CString("HAnimSiteShape"));
HAnimSite1883.addChild(&Shape1885);

Viewpoint& Viewpoint1886 =  Viewpoint();
Viewpoint1886.setDEF(CString("hanim_front_viewpoint"));
Viewpoint1886.setDescription(CString("front"));
Viewpoint1886.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1886.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite1883.addChild(&Viewpoint1886);

Anchor& Anchor1887 =  Anchor();
Anchor1887.setDescription(CString("HAnimSite hanim_front_view Viewpoint"));
Anchor1887.setUrl(new CString[]{CString("#hanim_front_viewpoint")}, 1);
LOD& LOD1888 =  LOD();
LOD1888.setForceTransitions(true);
LOD1888.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1889 =  WorldInfo();
WorldInfo1889.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1888.addChildren(&WorldInfo1889);

Shape& Shape1890 =  Shape();
Shape1890.setUSE(CString("HAnimSiteViewpointShape"));
LOD1888.addChildren(Shape1890);

Anchor1887.addChild(&LOD1888);

HAnimSite1883.addChild(Anchor1887);

HAnimHumanoid41.addViewpoints(&HAnimSite1883);

HAnimSite& HAnimSite1891 =  HAnimSite();
HAnimSite1891.setDEF(CString("hanim_back_view"));
HAnimSite1891.X3DNode::setName(CString("back_view"));
HAnimSite1891.setTranslation(new float[]{0.0,0.85,-2.58});
HAnimSite1891.setRotation(new float[]{0.0,1.0,0.0,3.14});
TouchSensor& TouchSensor1892 =  TouchSensor();
TouchSensor1892.setDescription(CString("HAnimSite back_view"));
HAnimSite1891.addChild(&TouchSensor1892);

Shape& Shape1893 =  Shape();
Shape1893.setUSE(CString("HAnimSiteShape"));
HAnimSite1891.addChild(&Shape1893);

Viewpoint& Viewpoint1894 =  Viewpoint();
Viewpoint1894.setDEF(CString("hanim_back_viewpoint"));
Viewpoint1894.setDescription(CString("back"));
Viewpoint1894.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1894.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite1891.addChild(&Viewpoint1894);

Anchor& Anchor1895 =  Anchor();
Anchor1895.setDescription(CString("HAnimSite hanim_back_view Viewpoint"));
Anchor1895.setUrl(new CString[]{CString("#hanim_back_viewpoint")}, 1);
LOD& LOD1896 =  LOD();
LOD1896.setForceTransitions(true);
LOD1896.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1897 =  WorldInfo();
WorldInfo1897.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1896.addChildren(&WorldInfo1897);

Shape& Shape1898 =  Shape();
Shape1898.setUSE(CString("HAnimSiteViewpointShape"));
LOD1896.addChildren(Shape1898);

Anchor1895.addChild(&LOD1896);

HAnimSite1891.addChild(Anchor1895);

HAnimHumanoid41.addViewpoints(&HAnimSite1891);

HAnimSite& HAnimSite1899 =  HAnimSite();
HAnimSite1899.setDEF(CString("hanim_l_side_view"));
HAnimSite1899.X3DNode::setName(CString("l_side_view"));
HAnimSite1899.setTranslation(new float[]{2.6,0.854,0.0});
HAnimSite1899.setRotation(new float[]{0.0,1.0,0.0,1.5708});
TouchSensor& TouchSensor1900 =  TouchSensor();
TouchSensor1900.setDescription(CString("HAnimSite l_side_view"));
HAnimSite1899.addChild(&TouchSensor1900);

Shape& Shape1901 =  Shape();
Shape1901.setUSE(CString("HAnimSiteShape"));
HAnimSite1899.addChild(&Shape1901);

Viewpoint& Viewpoint1902 =  Viewpoint();
Viewpoint1902.setDEF(CString("hanim_l_side_viewpoint"));
Viewpoint1902.setDescription(CString("left side"));
Viewpoint1902.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1902.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite1899.addChild(&Viewpoint1902);

Anchor& Anchor1903 =  Anchor();
Anchor1903.setDescription(CString("HAnimSite hanim_l_side_view Viewpoint"));
Anchor1903.setUrl(new CString[]{CString("#hanim_l_side_viewpoint")}, 1);
LOD& LOD1904 =  LOD();
LOD1904.setForceTransitions(true);
LOD1904.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1905 =  WorldInfo();
WorldInfo1905.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1904.addChildren(&WorldInfo1905);

Shape& Shape1906 =  Shape();
Shape1906.setUSE(CString("HAnimSiteViewpointShape"));
LOD1904.addChildren(Shape1906);

Anchor1903.addChild(&LOD1904);

HAnimSite1899.addChild(Anchor1903);

HAnimHumanoid41.addViewpoints(&HAnimSite1899);

HAnimSite& HAnimSite1907 =  HAnimSite();
HAnimSite1907.setDEF(CString("hanim_Top_view"));
HAnimSite1907.X3DNode::setName(CString("Top_view"));
HAnimSite1907.setTranslation(new float[]{0.0,3.5,0.0});
HAnimSite1907.setRotation(new float[]{1.0,0.0,0.0,-1.57});
TouchSensor& TouchSensor1908 =  TouchSensor();
TouchSensor1908.setDescription(CString("HAnimSite Top_view"));
HAnimSite1907.addChild(&TouchSensor1908);

Shape& Shape1909 =  Shape();
Shape1909.setUSE(CString("HAnimSiteShape"));
HAnimSite1907.addChild(&Shape1909);

Viewpoint& Viewpoint1910 =  Viewpoint();
Viewpoint1910.setDEF(CString("hanim_Top_viewpoint"));
Viewpoint1910.setDescription(CString("Top"));
Viewpoint1910.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1910.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite1907.addChild(&Viewpoint1910);

Anchor& Anchor1911 =  Anchor();
Anchor1911.setDescription(CString("HAnimSite hanim_Top_view Viewpoint"));
Anchor1911.setUrl(new CString[]{CString("#hanim_Top_viewpoint")}, 1);
LOD& LOD1912 =  LOD();
LOD1912.setForceTransitions(true);
LOD1912.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1913 =  WorldInfo();
WorldInfo1913.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1912.addChildren(&WorldInfo1913);

Shape& Shape1914 =  Shape();
Shape1914.setUSE(CString("HAnimSiteViewpointShape"));
LOD1912.addChildren(Shape1914);

Anchor1911.addChild(&LOD1912);

HAnimSite1907.addChild(Anchor1911);

HAnimHumanoid41.addViewpoints(&HAnimSite1907);

HAnimSite& HAnimSite1915 =  HAnimSite();
HAnimSite1915.setDEF(CString("hanim_front_close_view"));
HAnimSite1915.X3DNode::setName(CString("front_close_view"));
HAnimSite1915.setTranslation(new float[]{0.0,0.854,1.575});
TouchSensor& TouchSensor1916 =  TouchSensor();
TouchSensor1916.setDescription(CString("HAnimSite front_close_view"));
HAnimSite1915.addChild(&TouchSensor1916);

Shape& Shape1917 =  Shape();
Shape1917.setUSE(CString("HAnimSiteShape"));
HAnimSite1915.addChild(&Shape1917);

Viewpoint& Viewpoint1918 =  Viewpoint();
Viewpoint1918.setDEF(CString("hanim_front_close_viewpoint"));
Viewpoint1918.setDescription(CString("front close"));
Viewpoint1918.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1918.setCenterOfRotation(new float[]{0.0,0.0,1.575});
HAnimSite1915.addChild(&Viewpoint1918);

Anchor& Anchor1919 =  Anchor();
Anchor1919.setDescription(CString("HAnimSite hanim_front_close_view Viewpoint"));
Anchor1919.setUrl(new CString[]{CString("#hanim_front_close_viewpoint")}, 1);
LOD& LOD1920 =  LOD();
LOD1920.setForceTransitions(true);
LOD1920.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1921 =  WorldInfo();
WorldInfo1921.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1920.addChildren(&WorldInfo1921);

Shape& Shape1922 =  Shape();
Shape1922.setUSE(CString("HAnimSiteViewpointShape"));
LOD1920.addChildren(Shape1922);

Anchor1919.addChild(&LOD1920);

HAnimSite1915.addChild(Anchor1919);

HAnimHumanoid41.addViewpoints(&HAnimSite1915);

HAnimSite& HAnimSite1923 =  HAnimSite();
HAnimSite1923.setDEF(CString("hanim_side_close_view"));
HAnimSite1923.X3DNode::setName(CString("side_close_view"));
HAnimSite1923.setTranslation(new float[]{1.56,0.854,0.0});
HAnimSite1923.setRotation(new float[]{0.0,1.0,0.0,1.5708});
TouchSensor& TouchSensor1924 =  TouchSensor();
TouchSensor1924.setDescription(CString("HAnimSite side_close_view"));
HAnimSite1923.addChild(&TouchSensor1924);

Shape& Shape1925 =  Shape();
Shape1925.setUSE(CString("HAnimSiteShape"));
HAnimSite1923.addChild(&Shape1925);

Viewpoint& Viewpoint1926 =  Viewpoint();
Viewpoint1926.setDEF(CString("hanim_side_close_viewpoint"));
Viewpoint1926.setDescription(CString("side close"));
Viewpoint1926.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1926.setCenterOfRotation(new float[]{1.6,0.0,0.0});
HAnimSite1923.addChild(&Viewpoint1926);

Anchor& Anchor1927 =  Anchor();
Anchor1927.setDescription(CString("HAnimSite hanim_side_close_view Viewpoint"));
Anchor1927.setUrl(new CString[]{CString("#hanim_side_close_viewpoint")}, 1);
LOD& LOD1928 =  LOD();
LOD1928.setForceTransitions(true);
LOD1928.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1929 =  WorldInfo();
WorldInfo1929.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1928.addChildren(&WorldInfo1929);

Shape& Shape1930 =  Shape();
Shape1930.setUSE(CString("HAnimSiteViewpointShape"));
LOD1928.addChildren(Shape1930);

Anchor1927.addChild(&LOD1928);

HAnimSite1923.addChild(Anchor1927);

HAnimHumanoid41.addViewpoints(&HAnimSite1923);

HAnimSite& HAnimSite1931 =  HAnimSite();
HAnimSite1931.setDEF(CString("hanim_head_front_close_view"));
HAnimSite1931.X3DNode::setName(CString("head_front_close_view"));
HAnimSite1931.setTranslation(new float[]{0.0,1.5,1.0});
TouchSensor& TouchSensor1932 =  TouchSensor();
TouchSensor1932.setDescription(CString("HAnimSite head_front_close_view"));
HAnimSite1931.addChild(&TouchSensor1932);

Shape& Shape1933 =  Shape();
Shape1933.setUSE(CString("HAnimSiteShape"));
HAnimSite1931.addChild(&Shape1933);

Viewpoint& Viewpoint1934 =  Viewpoint();
Viewpoint1934.setDEF(CString("hanim_head_front_close_viewpoint"));
Viewpoint1934.setDescription(CString("head front close"));
Viewpoint1934.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1934.setCenterOfRotation(new float[]{0.0,0.0,1.0});
HAnimSite1931.addChild(&Viewpoint1934);

Anchor& Anchor1935 =  Anchor();
Anchor1935.setDescription(CString("HAnimSite hanim_head_front_close_view Viewpoint"));
Anchor1935.setUrl(new CString[]{CString("#hanim_head_front_close_viewpoint")}, 1);
LOD& LOD1936 =  LOD();
LOD1936.setForceTransitions(true);
LOD1936.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1937 =  WorldInfo();
WorldInfo1937.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1936.addChildren(&WorldInfo1937);

Shape& Shape1938 =  Shape();
Shape1938.setUSE(CString("HAnimSiteViewpointShape"));
LOD1936.addChildren(Shape1938);

Anchor1935.addChild(&LOD1936);

HAnimSite1931.addChild(Anchor1935);

HAnimHumanoid41.addViewpoints(&HAnimSite1931);

HAnimSite& HAnimSite1939 =  HAnimSite();
HAnimSite1939.setDEF(CString("hanim_chest_front_close_view"));
HAnimSite1939.X3DNode::setName(CString("chest_front_close_view"));
HAnimSite1939.setTranslation(new float[]{0.0,1.2,1.0});
TouchSensor& TouchSensor1940 =  TouchSensor();
TouchSensor1940.setDescription(CString("HAnimSite chest_front_close_view"));
HAnimSite1939.addChild(&TouchSensor1940);

Shape& Shape1941 =  Shape();
Shape1941.setUSE(CString("HAnimSiteShape"));
HAnimSite1939.addChild(&Shape1941);

Viewpoint& Viewpoint1942 =  Viewpoint();
Viewpoint1942.setDEF(CString("hanim_chest_front_close_viewpoint"));
Viewpoint1942.setDescription(CString("chest front close"));
Viewpoint1942.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1942.setCenterOfRotation(new float[]{0.0,0.0,1.0});
HAnimSite1939.addChild(&Viewpoint1942);

Anchor& Anchor1943 =  Anchor();
Anchor1943.setDescription(CString("HAnimSite hanim_chest_front_close_view Viewpoint"));
Anchor1943.setUrl(new CString[]{CString("#hanim_chest_front_close_viewpoint")}, 1);
LOD& LOD1944 =  LOD();
LOD1944.setForceTransitions(true);
LOD1944.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1945 =  WorldInfo();
WorldInfo1945.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1944.addChildren(&WorldInfo1945);

Shape& Shape1946 =  Shape();
Shape1946.setUSE(CString("HAnimSiteViewpointShape"));
LOD1944.addChildren(Shape1946);

Anchor1943.addChild(&LOD1944);

HAnimSite1939.addChild(Anchor1943);

HAnimHumanoid41.addViewpoints(&HAnimSite1939);

HAnimSite& HAnimSite1947 =  HAnimSite();
HAnimSite1947.setDEF(CString("hanim_pelvis_front_close_view"));
HAnimSite1947.X3DNode::setName(CString("pelvis_front_close_view"));
HAnimSite1947.setTranslation(new float[]{0.0,0.8,1.0});
TouchSensor& TouchSensor1948 =  TouchSensor();
TouchSensor1948.setDescription(CString("HAnimSite pelvis_front_close_view"));
HAnimSite1947.addChild(&TouchSensor1948);

Shape& Shape1949 =  Shape();
Shape1949.setUSE(CString("HAnimSiteShape"));
HAnimSite1947.addChild(&Shape1949);

Viewpoint& Viewpoint1950 =  Viewpoint();
Viewpoint1950.setDEF(CString("hanim_pelvis_front_close_viewpoint"));
Viewpoint1950.setDescription(CString("pelvis front close"));
Viewpoint1950.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1950.setCenterOfRotation(new float[]{0.0,0.0,1.0});
HAnimSite1947.addChild(&Viewpoint1950);

Anchor& Anchor1951 =  Anchor();
Anchor1951.setDescription(CString("HAnimSite hanim_pelvis_front_close_view Viewpoint"));
Anchor1951.setUrl(new CString[]{CString("#hanim_pelvis_front_close_viewpoint")}, 1);
LOD& LOD1952 =  LOD();
LOD1952.setForceTransitions(true);
LOD1952.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1953 =  WorldInfo();
WorldInfo1953.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1952.addChildren(&WorldInfo1953);

Shape& Shape1954 =  Shape();
Shape1954.setUSE(CString("HAnimSiteViewpointShape"));
LOD1952.addChildren(Shape1954);

Anchor1951.addChild(&LOD1952);

HAnimSite1947.addChild(Anchor1951);

HAnimHumanoid41.addViewpoints(&HAnimSite1947);

HAnimSite& HAnimSite1955 =  HAnimSite();
HAnimSite1955.setDEF(CString("hanim_knees_front_close_view"));
HAnimSite1955.X3DNode::setName(CString("knees_front_close_view"));
HAnimSite1955.setTranslation(new float[]{0.0,0.4,1.0});
TouchSensor& TouchSensor1956 =  TouchSensor();
TouchSensor1956.setDescription(CString("HAnimSite knees_front_close_view"));
HAnimSite1955.addChild(&TouchSensor1956);

Shape& Shape1957 =  Shape();
Shape1957.setUSE(CString("HAnimSiteShape"));
HAnimSite1955.addChild(&Shape1957);

Viewpoint& Viewpoint1958 =  Viewpoint();
Viewpoint1958.setDEF(CString("hanim_knees_front_close_viewpoint"));
Viewpoint1958.setDescription(CString("knees front close"));
Viewpoint1958.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1958.setCenterOfRotation(new float[]{0.0,0.4,0.0});
HAnimSite1955.addChild(&Viewpoint1958);

Anchor& Anchor1959 =  Anchor();
Anchor1959.setDescription(CString("HAnimSite hanim_knees_front_close_view Viewpoint"));
Anchor1959.setUrl(new CString[]{CString("#hanim_knees_front_close_viewpoint")}, 1);
LOD& LOD1960 =  LOD();
LOD1960.setForceTransitions(true);
LOD1960.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1961 =  WorldInfo();
WorldInfo1961.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1960.addChildren(&WorldInfo1961);

Shape& Shape1962 =  Shape();
Shape1962.setUSE(CString("HAnimSiteViewpointShape"));
LOD1960.addChildren(Shape1962);

Anchor1959.addChild(&LOD1960);

HAnimSite1955.addChild(Anchor1959);

HAnimHumanoid41.addViewpoints(&HAnimSite1955);

HAnimSite& HAnimSite1963 =  HAnimSite();
HAnimSite1963.setDEF(CString("hanim_feet_front_close_view"));
HAnimSite1963.X3DNode::setName(CString("feet_front_close_view"));
HAnimSite1963.setTranslation(new float[]{0.0,0.0,1.0});
TouchSensor& TouchSensor1964 =  TouchSensor();
TouchSensor1964.setDescription(CString("HAnimSite feet_front_close_view"));
HAnimSite1963.addChild(&TouchSensor1964);

Shape& Shape1965 =  Shape();
Shape1965.setUSE(CString("HAnimSiteShape"));
HAnimSite1963.addChild(&Shape1965);

Viewpoint& Viewpoint1966 =  Viewpoint();
Viewpoint1966.setDEF(CString("hanim_feet_front_close_viewpoint"));
Viewpoint1966.setDescription(CString("feet front close"));
Viewpoint1966.setPosition(new float[]{0.0,0.0,0.0});
HAnimSite1963.addChild(&Viewpoint1966);

Anchor& Anchor1967 =  Anchor();
Anchor1967.setDescription(CString("HAnimSite hanim_feet_front_close_view Viewpoint"));
Anchor1967.setUrl(new CString[]{CString("#hanim_feet_front_close_viewpoint")}, 1);
LOD& LOD1968 =  LOD();
LOD1968.setForceTransitions(true);
LOD1968.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1969 =  WorldInfo();
WorldInfo1969.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1968.addChildren(&WorldInfo1969);

Shape& Shape1970 =  Shape();
Shape1970.setUSE(CString("HAnimSiteViewpointShape"));
LOD1968.addChildren(Shape1970);

Anchor1967.addChild(&LOD1968);

HAnimSite1963.addChild(Anchor1967);

HAnimHumanoid41.addViewpoints(&HAnimSite1963);

HAnimSite& HAnimSite1971 =  HAnimSite();
HAnimSite1971.setDEF(CString("hanim_eye_level_view"));
HAnimSite1971.X3DNode::setName(CString("eye_level_view"));
HAnimSite1971.setTranslation(new float[]{0.0,1.6332,0.0502});
TouchSensor& TouchSensor1972 =  TouchSensor();
TouchSensor1972.setDescription(CString("HAnimSite eye_level_view"));
HAnimSite1971.addChild(&TouchSensor1972);

Shape& Shape1973 =  Shape();
Shape1973.setUSE(CString("HAnimSiteShape"));
HAnimSite1971.addChild(&Shape1973);

Viewpoint& Viewpoint1974 =  Viewpoint();
Viewpoint1974.setDEF(CString("hanim_eye_level_viewpoint"));
Viewpoint1974.setDescription(CString("eye level looking forward"));
Viewpoint1974.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint1974.setOrientation(new float[]{0.0,1.0,0.0,3.141593});
HAnimSite1971.addChild(&Viewpoint1974);

Anchor& Anchor1975 =  Anchor();
Anchor1975.setDescription(CString("HAnimSite hanim_eye_level_view Viewpoint"));
Anchor1975.setUrl(new CString[]{CString("#hanim_eye_level_viewpoint")}, 1);
LOD& LOD1976 =  LOD();
LOD1976.setForceTransitions(true);
LOD1976.setRange(new float[]{0.04}, 1);
WorldInfo& WorldInfo1977 =  WorldInfo();
WorldInfo1977.setInfo(new CString[]{CString("hide diamond when close")}, 1);
LOD1976.addChildren(&WorldInfo1977);

Shape& Shape1978 =  Shape();
Shape1978.setUSE(CString("HAnimSiteViewpointShape"));
LOD1976.addChildren(Shape1978);

Anchor1975.addChild(&LOD1976);

HAnimSite1971.addChild(Anchor1975);

HAnimHumanoid41.addViewpoints(&HAnimSite1971);

HAnimSite& HAnimSite1979 =  HAnimSite();
HAnimSite1979.setUSE(CString("hanim_l_eyeball_site_view"));
HAnimHumanoid41.setSites(&HAnimSite1979);

HAnimSite& HAnimSite1980 =  HAnimSite();
HAnimSite1980.setUSE(CString("hanim_r_eyeball_site_view"));
HAnimHumanoid41.setSites(&HAnimSite1980);

HAnimSite& HAnimSite1981 =  HAnimSite();
HAnimSite1981.setUSE(CString("hanim_l_hand_front_view"));
HAnimHumanoid41.setSites(&HAnimSite1981);

HAnimSite& HAnimSite1982 =  HAnimSite();
HAnimSite1982.setUSE(CString("hanim_r_hand_front_view"));
HAnimHumanoid41.setSites(&HAnimSite1982);

Scene27.addChild(&HAnimHumanoid41);

X3D0.setScene(&Scene27);

//}
