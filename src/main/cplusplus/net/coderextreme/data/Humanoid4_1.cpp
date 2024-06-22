#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
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
meta3.setContent(CString("Humanoid4_1.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("identifier"));
meta4.setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("description"));
meta5.setContent(CString("An attempt at a standard LOA-4 skeleton"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("h2.pl"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("14 Jan 2023"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("creator"));
meta8.setContent(CString("John Carlson"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("created"));
meta9.setContent(CString("9 November 2020"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("license"));
meta10.setContent(CString("../license.html"));
head1.addMeta(&meta10);

X3D0.setHead(&head1);

Scene& Scene11 =  Scene();
Transform& Transform12 =  Transform();
//DEF for markerfor XYZ axes
Shape& Shape13 =  Shape();
Shape13.setDEF(CString("AxisLinesShape"));
//RGB lines showing XYZ axes
IndexedLineSet& IndexedLineSet14 =  IndexedLineSet();
IndexedLineSet14.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet14.setColorPerVertex(False);
IndexedLineSet14.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate15 =  Coordinate();
Coordinate15.setPoint(new float[]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1}, 12);
IndexedLineSet14.setCoord(&Coordinate15);

CColor& Color16 =  CColor();
Color16.setColor(new float[]{1,0,0,0,0.6,0,0,0,1}, 9);
IndexedLineSet14.setColor(&Color16);

Shape13.setGeometry(&IndexedLineSet14);

Transform12.addChild(&Shape13);

Scene11.addChild(&Transform12);

Group& Group17 =  Group();
//DEFS for markers of skeleton joints, segments, and sites
Transform& Transform18 =  Transform();
Transform& Transform19 =  Transform();
Transform19.setTranslation(new float[]{0,2,0});
Shape& Shape20 =  Shape();
Shape20.setDEF(CString("HAnimRootShape"));
Sphere& Sphere21 =  Sphere();
Sphere21.setRadius(0.02);
Shape20.setGeometry(&Sphere21);

Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDEF(CString("HAnimRootMaterial"));
Material23.setDiffuseColor(new float[]{0.8,0,0});
Material23.setTransparency(0.3);
Appearance22.addChild(&Material23);

Shape20.addChild(&Appearance22);

Transform19.addChild(&Shape20);

Transform18.addChild(&Transform19);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{0,2.1,0});
Shape& Shape25 =  Shape();
Shape25.setDEF(CString("HAnimJointShape"));
Sphere& Sphere26 =  Sphere();
Sphere26.setRadius(0.02);
Shape25.setGeometry(&Sphere26);

Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDEF(CString("HAnimJointMaterial"));
Material28.setDiffuseColor(new float[]{0,0,0.8});
Material28.setTransparency(0.3);
Appearance27.addChild(&Material28);

Shape25.addChild(&Appearance27);

Transform24.addChild(&Shape25);

Transform18.addChild(&Transform24);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{0,2.05,0});
Shape& Shape30 =  Shape();
Shape30.setDEF(CString("HAnimSegmentLine"));
LineSet& LineSet31 =  LineSet();
LineSet31.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA32 =  ColorRGBA();
ColorRGBA32.setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA32.setColor(new float[]{1,1,0,1,1,1,0,0.1}, 8);
LineSet31.addChild(&ColorRGBA32);

Coordinate& Coordinate33 =  Coordinate();
Coordinate33.setPoint(new float[]{-0.05,0,0,0.05,0,0}, 6);
LineSet31.setCoord(Coordinate33);

Shape30.setGeometry(&LineSet31);

Transform29.addChild(&Shape30);

Transform18.addChild(&Transform29);

Transform& Transform34 =  Transform();
Transform34.setTranslation(new float[]{0,2.1,0});
Shape& Shape35 =  Shape();
Shape35.setDEF(CString("HAnimSiteShape"));
IndexedFaceSet& IndexedFaceSet36 =  IndexedFaceSet();
IndexedFaceSet36.setDEF(CString("DiamondIFS"));
IndexedFaceSet36.setCreaseAngle(0.5);
IndexedFaceSet36.setSolid(False);
IndexedFaceSet36.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
ColorRGBA& ColorRGBA37 =  ColorRGBA();
ColorRGBA37.setDEF(CString("HAnimSiteColorRGBA"));
ColorRGBA37.setColor(new float[]{1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1}, 24);
IndexedFaceSet36.addChild(&ColorRGBA37);

Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setPoint(new float[]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet36.setCoord(&Coordinate38);

Shape35.setGeometry(&IndexedFaceSet36);

Appearance& Appearance39 =  Appearance();
Material& Material40 =  Material();
Material40.setDiffuseColor(new float[]{1,1,0});
Material40.setTransparency(0.3);
Appearance39.addChild(&Material40);

Shape35.addChild(&Appearance39);

Transform34.addChild(&Shape35);

Transform18.addChild(&Transform34);

Group17.addChild(&Transform18);

Scene11.addChild(&Group17);

NavigationInfo& NavigationInfo41 =  NavigationInfo();
NavigationInfo41.setSpeed(1.5);
Scene11.addChild(&NavigationInfo41);

Viewpoint& Viewpoint42 =  Viewpoint();
Viewpoint42.setDescription(CString("default"));
Scene11.addChild(&Viewpoint42);

HAnimHumanoid& HAnimHumanoid43 =  HAnimHumanoid();
HAnimHumanoid43.X3DNode::setName(CString("HAnim"));
HAnimHumanoid43.setDEF(CString("hanim_HAnim"));
HAnimHumanoid43.setInfo(new CString[]{CString("humanoidVersion=2.0")}, 1);
HAnimHumanoid43.setVersion(CString("2.0"));
//</LOD>
Coordinate& Coordinate44 =  Coordinate();
HAnimHumanoid43.setSkinCoord(&Coordinate44);

HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.X3DNode::setName(CString("humanoid_root"));
HAnimJoint45.setDEF(CString("hanim_humanoid_root"));
HAnimJoint45.setCenter(new float[]{0,0.824,0.0277});
HAnimJoint45.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint45.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment46 =  HAnimSegment();
HAnimSegment46.X3DNode::setName(CString("sacrum"));
HAnimSegment46.setDEF(CString("hanim_sacrum"));
Transform& Transform47 =  Transform();
Transform47.setTranslation(new float[]{0,0.824,0.0277});
Transform& Transform48 =  Transform();
//Empty Transform
Shape& Shape49 =  Shape();
Shape49.setUSE(CString("HAnimJointShape"));
Transform48.addChild(&Shape49);

Transform47.addChild(&Transform48);

HAnimSegment46.addChild(&Transform47);

Shape& Shape50 =  Shape();
LineSet& LineSet51 =  LineSet();
LineSet51.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate52 =  Coordinate();
Coordinate52.setPoint(new float[]{0,0.824,0.0277,0,0.9149,0.0016}, 6);
LineSet51.setCoord(Coordinate52);

//from humanoid_root to sacroiliac vertices 2
ColorRGBA& ColorRGBA53 =  ColorRGBA();
ColorRGBA53.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet51.addChild(&ColorRGBA53);

Shape50.setGeometry(&LineSet51);

HAnimSegment46.addChild(&Shape50);

HAnimSite& HAnimSite54 =  HAnimSite();
HAnimSite54.X3DNode::setName(CString("buttocks_standing_wall_contact_point_pt"));
HAnimSite54.setDEF(CString("hanim_buttocks_standing_wall_contact_point_pt"));
TouchSensor& TouchSensor55 =  TouchSensor();
TouchSensor55.setDescription(CString("HAnimSite buttocks_standing_wall_contact_point_pt"));
HAnimSite54.addChild(&TouchSensor55);

Shape& Shape56 =  Shape();
Shape56.setUSE(CString("HAnimSiteShape"));
HAnimSite54.addChild(&Shape56);

HAnimSegment46.addChild(&HAnimSite54);

HAnimSite& HAnimSite57 =  HAnimSite();
HAnimSite57.X3DNode::setName(CString("crotch_pt"));
HAnimSite57.setDEF(CString("hanim_crotch_pt"));
HAnimSite57.setTranslation(new float[]{0.0034,0.8266,0.0257});
TouchSensor& TouchSensor58 =  TouchSensor();
TouchSensor58.setDescription(CString("HAnimSite crotch_pt"));
HAnimSite57.addChild(&TouchSensor58);

Shape& Shape59 =  Shape();
Shape59.setUSE(CString("HAnimSiteShape"));
HAnimSite57.addChild(&Shape59);

HAnimSegment46.addChild(&HAnimSite57);

HAnimSite& HAnimSite60 =  HAnimSite();
HAnimSite60.X3DNode::setName(CString("l_asis_pt"));
HAnimSite60.setDEF(CString("hanim_l_asis_pt"));
HAnimSite60.setTranslation(new float[]{0.0925,0.9983,0.1052});
TouchSensor& TouchSensor61 =  TouchSensor();
TouchSensor61.setDescription(CString("HAnimSite l_asis_pt"));
HAnimSite60.addChild(&TouchSensor61);

Shape& Shape62 =  Shape();
Shape62.setUSE(CString("HAnimSiteShape"));
HAnimSite60.addChild(&Shape62);

HAnimSegment46.addChild(&HAnimSite60);

HAnimSite& HAnimSite63 =  HAnimSite();
HAnimSite63.X3DNode::setName(CString("l_iliocristale_pt"));
HAnimSite63.setDEF(CString("hanim_l_iliocristale_pt"));
HAnimSite63.setTranslation(new float[]{0.1612,1.0537,0.0008});
TouchSensor& TouchSensor64 =  TouchSensor();
TouchSensor64.setDescription(CString("HAnimSite l_iliocristale_pt"));
HAnimSite63.addChild(&TouchSensor64);

Shape& Shape65 =  Shape();
Shape65.setUSE(CString("HAnimSiteShape"));
HAnimSite63.addChild(&Shape65);

HAnimSegment46.addChild(&HAnimSite63);

HAnimSite& HAnimSite66 =  HAnimSite();
HAnimSite66.X3DNode::setName(CString("l_psis_pt"));
HAnimSite66.setDEF(CString("hanim_l_psis_pt"));
HAnimSite66.setTranslation(new float[]{0.0774,1.019,-0.1151});
TouchSensor& TouchSensor67 =  TouchSensor();
TouchSensor67.setDescription(CString("HAnimSite l_psis_pt"));
HAnimSite66.addChild(&TouchSensor67);

Shape& Shape68 =  Shape();
Shape68.setUSE(CString("HAnimSiteShape"));
HAnimSite66.addChild(&Shape68);

HAnimSegment46.addChild(&HAnimSite66);

HAnimSite& HAnimSite69 =  HAnimSite();
HAnimSite69.X3DNode::setName(CString("l_trochanterion_pt"));
HAnimSite69.setDEF(CString("hanim_l_trochanterion_pt"));
HAnimSite69.setTranslation(new float[]{0.1677,0.8336,0.0303});
TouchSensor& TouchSensor70 =  TouchSensor();
TouchSensor70.setDescription(CString("HAnimSite l_trochanterion_pt"));
HAnimSite69.addChild(&TouchSensor70);

Shape& Shape71 =  Shape();
Shape71.setUSE(CString("HAnimSiteShape"));
HAnimSite69.addChild(&Shape71);

HAnimSegment46.addChild(&HAnimSite69);

HAnimSite& HAnimSite72 =  HAnimSite();
HAnimSite72.X3DNode::setName(CString("r_asis_pt"));
HAnimSite72.setDEF(CString("hanim_r_asis_pt"));
HAnimSite72.setTranslation(new float[]{-0.0887,1.0021,0.1112});
TouchSensor& TouchSensor73 =  TouchSensor();
TouchSensor73.setDescription(CString("HAnimSite r_asis_pt"));
HAnimSite72.addChild(&TouchSensor73);

Shape& Shape74 =  Shape();
Shape74.setUSE(CString("HAnimSiteShape"));
HAnimSite72.addChild(&Shape74);

HAnimSegment46.addChild(&HAnimSite72);

HAnimSite& HAnimSite75 =  HAnimSite();
HAnimSite75.X3DNode::setName(CString("r_iliocristale_pt"));
HAnimSite75.setDEF(CString("hanim_r_iliocristale_pt"));
HAnimSite75.setTranslation(new float[]{-0.1525,1.0628,0.0035});
TouchSensor& TouchSensor76 =  TouchSensor();
TouchSensor76.setDescription(CString("HAnimSite r_iliocristale_pt"));
HAnimSite75.addChild(&TouchSensor76);

Shape& Shape77 =  Shape();
Shape77.setUSE(CString("HAnimSiteShape"));
HAnimSite75.addChild(&Shape77);

HAnimSegment46.addChild(&HAnimSite75);

HAnimSite& HAnimSite78 =  HAnimSite();
HAnimSite78.X3DNode::setName(CString("r_psis_pt"));
HAnimSite78.setDEF(CString("hanim_r_psis_pt"));
HAnimSite78.setTranslation(new float[]{-0.0716,1.019,-0.1138});
TouchSensor& TouchSensor79 =  TouchSensor();
TouchSensor79.setDescription(CString("HAnimSite r_psis_pt"));
HAnimSite78.addChild(&TouchSensor79);

Shape& Shape80 =  Shape();
Shape80.setUSE(CString("HAnimSiteShape"));
HAnimSite78.addChild(&Shape80);

HAnimSegment46.addChild(&HAnimSite78);

HAnimSite& HAnimSite81 =  HAnimSite();
HAnimSite81.X3DNode::setName(CString("r_trochanterion_pt"));
HAnimSite81.setDEF(CString("hanim_r_trochanterion_pt"));
HAnimSite81.setTranslation(new float[]{-0.1689,0.8419,0.0352});
TouchSensor& TouchSensor82 =  TouchSensor();
TouchSensor82.setDescription(CString("HAnimSite r_trochanterion_pt"));
HAnimSite81.addChild(&TouchSensor82);

Shape& Shape83 =  Shape();
Shape83.setUSE(CString("HAnimSiteShape"));
HAnimSite81.addChild(&Shape83);

HAnimSegment46.addChild(&HAnimSite81);

Shape& Shape84 =  Shape();
LineSet& LineSet85 =  LineSet();
LineSet85.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate86 =  Coordinate();
Coordinate86.setPoint(new float[]{0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
LineSet85.setCoord(Coordinate86);

//from humanoid_root to vl5 vertices 2
ColorRGBA& ColorRGBA87 =  ColorRGBA();
ColorRGBA87.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet85.addChild(&ColorRGBA87);

Shape84.setGeometry(&LineSet85);

HAnimSegment46.addChild(&Shape84);

HAnimSite& HAnimSite88 =  HAnimSite();
HAnimSite88.X3DNode::setName(CString("navel_pt"));
HAnimSite88.setDEF(CString("hanim_navel_pt"));
HAnimSite88.setTranslation(new float[]{0.0069,1.0966,0.1017});
TouchSensor& TouchSensor89 =  TouchSensor();
TouchSensor89.setDescription(CString("HAnimSite navel_pt"));
HAnimSite88.addChild(&TouchSensor89);

Shape& Shape90 =  Shape();
Shape90.setUSE(CString("HAnimSiteShape"));
HAnimSite88.addChild(&Shape90);

HAnimSegment46.addChild(&HAnimSite88);

HAnimSite& HAnimSite91 =  HAnimSite();
HAnimSite91.X3DNode::setName(CString("waist_preferred_anterior_pt"));
HAnimSite91.setDEF(CString("hanim_waist_preferred_anterior_pt"));
TouchSensor& TouchSensor92 =  TouchSensor();
TouchSensor92.setDescription(CString("HAnimSite waist_preferred_anterior_pt"));
HAnimSite91.addChild(&TouchSensor92);

Shape& Shape93 =  Shape();
Shape93.setUSE(CString("HAnimSiteShape"));
HAnimSite91.addChild(&Shape93);

HAnimSegment46.addChild(&HAnimSite91);

HAnimSite& HAnimSite94 =  HAnimSite();
HAnimSite94.X3DNode::setName(CString("waist_preferred_posterior_pt"));
HAnimSite94.setDEF(CString("hanim_waist_preferred_posterior_pt"));
HAnimSite94.setTranslation(new float[]{0.29,1.0915,-0.1091});
TouchSensor& TouchSensor95 =  TouchSensor();
TouchSensor95.setDescription(CString("HAnimSite waist_preferred_posterior_pt"));
HAnimSite94.addChild(&TouchSensor95);

Shape& Shape96 =  Shape();
Shape96.setUSE(CString("HAnimSiteShape"));
HAnimSite94.addChild(&Shape96);

HAnimSegment46.addChild(&HAnimSite94);

HAnimJoint45.addChildren(&HAnimSegment46);

HAnimJoint& HAnimJoint97 =  HAnimJoint();
HAnimJoint97.X3DNode::setName(CString("sacroiliac"));
HAnimJoint97.setDEF(CString("hanim_sacroiliac"));
HAnimJoint97.setCenter(new float[]{0,0.9149,0.0016});
HAnimJoint97.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint97.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment98 =  HAnimSegment();
HAnimSegment98.X3DNode::setName(CString("pelvis"));
HAnimSegment98.setDEF(CString("hanim_pelvis"));
Transform& Transform99 =  Transform();
Transform99.setTranslation(new float[]{0,0.9149,0.0016});
Transform& Transform100 =  Transform();
//Empty Transform
Shape& Shape101 =  Shape();
Shape101.setUSE(CString("HAnimJointShape"));
Transform100.addChild(&Shape101);

Transform99.addChild(&Transform100);

HAnimSegment98.addChild(&Transform99);

Shape& Shape102 =  Shape();
LineSet& LineSet103 =  LineSet();
LineSet103.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate104 =  Coordinate();
Coordinate104.setPoint(new float[]{0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
LineSet103.setCoord(Coordinate104);

//from sacroiliac to l_hip vertices 2
ColorRGBA& ColorRGBA105 =  ColorRGBA();
ColorRGBA105.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet103.addChild(&ColorRGBA105);

Shape102.setGeometry(&LineSet103);

HAnimSegment98.addChild(&Shape102);

HAnimSite& HAnimSite106 =  HAnimSite();
HAnimSite106.X3DNode::setName(CString("l_femoral_lateral_epicondyles_pt"));
HAnimSite106.setDEF(CString("hanim_l_femoral_lateral_epicondyles_pt"));
HAnimSite106.setTranslation(new float[]{0.1598,0.4967,0.0297});
TouchSensor& TouchSensor107 =  TouchSensor();
TouchSensor107.setDescription(CString("HAnimSite l_femoral_lateral_epicondyles_pt"));
HAnimSite106.addChild(&TouchSensor107);

Shape& Shape108 =  Shape();
Shape108.setUSE(CString("HAnimSiteShape"));
HAnimSite106.addChild(&Shape108);

HAnimSegment98.addChild(&HAnimSite106);

HAnimSite& HAnimSite109 =  HAnimSite();
HAnimSite109.X3DNode::setName(CString("l_femoral_medial_epicondyles_pt"));
HAnimSite109.setDEF(CString("hanim_l_femoral_medial_epicondyles_pt"));
HAnimSite109.setTranslation(new float[]{0.0398,0.4946,0.0303});
TouchSensor& TouchSensor110 =  TouchSensor();
TouchSensor110.setDescription(CString("HAnimSite l_femoral_medial_epicondyles_pt"));
HAnimSite109.addChild(&TouchSensor110);

Shape& Shape111 =  Shape();
Shape111.setUSE(CString("HAnimSiteShape"));
HAnimSite109.addChild(&Shape111);

HAnimSegment98.addChild(&HAnimSite109);

HAnimSite& HAnimSite112 =  HAnimSite();
HAnimSite112.X3DNode::setName(CString("l_knee_crease_pt"));
HAnimSite112.setDEF(CString("hanim_l_knee_crease_pt"));
HAnimSite112.setTranslation(new float[]{0.0993,0.4881,-0.0309});
TouchSensor& TouchSensor113 =  TouchSensor();
TouchSensor113.setDescription(CString("HAnimSite l_knee_crease_pt"));
HAnimSite112.addChild(&TouchSensor113);

Shape& Shape114 =  Shape();
Shape114.setUSE(CString("HAnimSiteShape"));
HAnimSite112.addChild(&Shape114);

HAnimSegment98.addChild(&HAnimSite112);

HAnimSite& HAnimSite115 =  HAnimSite();
HAnimSite115.X3DNode::setName(CString("l_suprapatella_pt"));
HAnimSite115.setDEF(CString("hanim_l_suprapatella_pt"));
TouchSensor& TouchSensor116 =  TouchSensor();
TouchSensor116.setDescription(CString("HAnimSite l_suprapatella_pt"));
HAnimSite115.addChild(&TouchSensor116);

Shape& Shape117 =  Shape();
Shape117.setUSE(CString("HAnimSiteShape"));
HAnimSite115.addChild(&Shape117);

HAnimSegment98.addChild(&HAnimSite115);

Shape& Shape118 =  Shape();
LineSet& LineSet119 =  LineSet();
LineSet119.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate120 =  Coordinate();
Coordinate120.setPoint(new float[]{0,0.9149,0.0016,-0.095,0.9171,0.0029}, 6);
LineSet119.setCoord(Coordinate120);

//from sacroiliac to r_hip vertices 2
ColorRGBA& ColorRGBA121 =  ColorRGBA();
ColorRGBA121.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet119.addChild(&ColorRGBA121);

Shape118.setGeometry(&LineSet119);

HAnimSegment98.addChild(&Shape118);

HAnimSite& HAnimSite122 =  HAnimSite();
HAnimSite122.X3DNode::setName(CString("r_femoral_lateral_epicondyles_pt"));
HAnimSite122.setDEF(CString("hanim_r_femoral_lateral_epicondyles_pt"));
HAnimSite122.setTranslation(new float[]{-0.1421,0.4992,0.031});
TouchSensor& TouchSensor123 =  TouchSensor();
TouchSensor123.setDescription(CString("HAnimSite r_femoral_lateral_epicondyles_pt"));
HAnimSite122.addChild(&TouchSensor123);

Shape& Shape124 =  Shape();
Shape124.setUSE(CString("HAnimSiteShape"));
HAnimSite122.addChild(&Shape124);

HAnimSegment98.addChild(&HAnimSite122);

HAnimSite& HAnimSite125 =  HAnimSite();
HAnimSite125.X3DNode::setName(CString("r_femoral_medial_epicondyles_pt"));
HAnimSite125.setDEF(CString("hanim_r_femoral_medial_epicondyles_pt"));
HAnimSite125.setTranslation(new float[]{-0.0221,0.5014,0.0289});
TouchSensor& TouchSensor126 =  TouchSensor();
TouchSensor126.setDescription(CString("HAnimSite r_femoral_medial_epicondyles_pt"));
HAnimSite125.addChild(&TouchSensor126);

Shape& Shape127 =  Shape();
Shape127.setUSE(CString("HAnimSiteShape"));
HAnimSite125.addChild(&Shape127);

HAnimSegment98.addChild(&HAnimSite125);

HAnimSite& HAnimSite128 =  HAnimSite();
HAnimSite128.X3DNode::setName(CString("r_knee_crease_pt"));
HAnimSite128.setDEF(CString("hanim_r_knee_crease_pt"));
HAnimSite128.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
TouchSensor& TouchSensor129 =  TouchSensor();
TouchSensor129.setDescription(CString("HAnimSite r_knee_crease_pt"));
HAnimSite128.addChild(&TouchSensor129);

Shape& Shape130 =  Shape();
Shape130.setUSE(CString("HAnimSiteShape"));
HAnimSite128.addChild(&Shape130);

HAnimSegment98.addChild(&HAnimSite128);

HAnimSite& HAnimSite131 =  HAnimSite();
HAnimSite131.X3DNode::setName(CString("r_suprapatella_pt"));
HAnimSite131.setDEF(CString("hanim_r_suprapatella_pt"));
TouchSensor& TouchSensor132 =  TouchSensor();
TouchSensor132.setDescription(CString("HAnimSite r_suprapatella_pt"));
HAnimSite131.addChild(&TouchSensor132);

Shape& Shape133 =  Shape();
Shape133.setUSE(CString("HAnimSiteShape"));
HAnimSite131.addChild(&Shape133);

HAnimSegment98.addChild(&HAnimSite131);

HAnimJoint97.addChildren(&HAnimSegment98);

HAnimJoint& HAnimJoint134 =  HAnimJoint();
HAnimJoint134.X3DNode::setName(CString("l_hip"));
HAnimJoint134.setDEF(CString("hanim_l_hip"));
HAnimJoint134.setCenter(new float[]{0.0961,0.9124,-0.0001});
HAnimJoint134.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint134.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment135 =  HAnimSegment();
HAnimSegment135.X3DNode::setName(CString("l_thigh"));
HAnimSegment135.setDEF(CString("hanim_l_thigh"));
Transform& Transform136 =  Transform();
Transform136.setTranslation(new float[]{0.0961,0.9124,-0.0001});
Transform& Transform137 =  Transform();
//Empty Transform
Shape& Shape138 =  Shape();
Shape138.setUSE(CString("HAnimJointShape"));
Transform137.addChild(&Shape138);

Transform136.addChild(&Transform137);

HAnimSegment135.addChild(&Transform136);

Shape& Shape139 =  Shape();
LineSet& LineSet140 =  LineSet();
LineSet140.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate141 =  Coordinate();
Coordinate141.setPoint(new float[]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
LineSet140.setCoord(Coordinate141);

//from l_hip to l_knee vertices 2
ColorRGBA& ColorRGBA142 =  ColorRGBA();
ColorRGBA142.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet140.addChild(&ColorRGBA142);

Shape139.setGeometry(&LineSet140);

HAnimSegment135.addChild(&Shape139);

HAnimSite& HAnimSite143 =  HAnimSite();
HAnimSite143.X3DNode::setName(CString("l_lateral_malleolus_pt"));
HAnimSite143.setDEF(CString("hanim_l_lateral_malleolus_pt"));
HAnimSite143.setTranslation(new float[]{0.1308,0.0597,-0.1032});
TouchSensor& TouchSensor144 =  TouchSensor();
TouchSensor144.setDescription(CString("HAnimSite l_lateral_malleolus_pt"));
HAnimSite143.addChild(&TouchSensor144);

Shape& Shape145 =  Shape();
Shape145.setUSE(CString("HAnimSiteShape"));
HAnimSite143.addChild(&Shape145);

HAnimSegment135.addChild(&HAnimSite143);

HAnimSite& HAnimSite146 =  HAnimSite();
HAnimSite146.X3DNode::setName(CString("l_medial_malleolus_pt"));
HAnimSite146.setDEF(CString("hanim_l_medial_malleolus_pt"));
HAnimSite146.setTranslation(new float[]{0.089,0.0716,-0.0881});
TouchSensor& TouchSensor147 =  TouchSensor();
TouchSensor147.setDescription(CString("HAnimSite l_medial_malleolus_pt"));
HAnimSite146.addChild(&TouchSensor147);

Shape& Shape148 =  Shape();
Shape148.setUSE(CString("HAnimSiteShape"));
HAnimSite146.addChild(&Shape148);

HAnimSegment135.addChild(&HAnimSite146);

HAnimSite& HAnimSite149 =  HAnimSite();
HAnimSite149.X3DNode::setName(CString("l_tibiale_pt"));
HAnimSite149.setDEF(CString("hanim_l_tibiale_pt"));
TouchSensor& TouchSensor150 =  TouchSensor();
TouchSensor150.setDescription(CString("HAnimSite l_tibiale_pt"));
HAnimSite149.addChild(&TouchSensor150);

Shape& Shape151 =  Shape();
Shape151.setUSE(CString("HAnimSiteShape"));
HAnimSite149.addChild(&Shape151);

HAnimSegment135.addChild(&HAnimSite149);

HAnimJoint134.addChildren(&HAnimSegment135);

HAnimJoint& HAnimJoint152 =  HAnimJoint();
HAnimJoint152.X3DNode::setName(CString("l_knee"));
HAnimJoint152.setDEF(CString("hanim_l_knee"));
HAnimJoint152.setCenter(new float[]{0.104,0.4867,0.0308});
HAnimJoint152.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint152.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment153 =  HAnimSegment();
HAnimSegment153.X3DNode::setName(CString("l_calf"));
HAnimSegment153.setDEF(CString("hanim_l_calf"));
Transform& Transform154 =  Transform();
Transform154.setTranslation(new float[]{0.104,0.4867,0.0308});
Transform& Transform155 =  Transform();
//Empty Transform
Shape& Shape156 =  Shape();
Shape156.setUSE(CString("HAnimJointShape"));
Transform155.addChild(&Shape156);

Transform154.addChild(&Transform155);

HAnimSegment153.addChild(&Transform154);

Shape& Shape157 =  Shape();
LineSet& LineSet158 =  LineSet();
LineSet158.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate159 =  Coordinate();
Coordinate159.setPoint(new float[]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
LineSet158.setCoord(Coordinate159);

//from l_knee to l_talocrural vertices 2
ColorRGBA& ColorRGBA160 =  ColorRGBA();
ColorRGBA160.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet158.addChild(&ColorRGBA160);

Shape157.setGeometry(&LineSet158);

HAnimSegment153.addChild(&Shape157);

HAnimSite& HAnimSite161 =  HAnimSite();
HAnimSite161.X3DNode::setName(CString("l_calcaneus_posterior_pt"));
HAnimSite161.setDEF(CString("hanim_l_calcaneus_posterior_pt"));
HAnimSite161.setTranslation(new float[]{0.0974,0.0259,-0.1171});
TouchSensor& TouchSensor162 =  TouchSensor();
TouchSensor162.setDescription(CString("HAnimSite l_calcaneus_posterior_pt"));
HAnimSite161.addChild(&TouchSensor162);

Shape& Shape163 =  Shape();
Shape163.setUSE(CString("HAnimSiteShape"));
HAnimSite161.addChild(&Shape163);

HAnimSegment153.addChild(&HAnimSite161);

HAnimSite& HAnimSite164 =  HAnimSite();
HAnimSite164.X3DNode::setName(CString("l_sphyrion_pt"));
HAnimSite164.setDEF(CString("hanim_l_sphyrion_pt"));
HAnimSite164.setTranslation(new float[]{0.089,0.0575,-0.0943});
TouchSensor& TouchSensor165 =  TouchSensor();
TouchSensor165.setDescription(CString("HAnimSite l_sphyrion_pt"));
HAnimSite164.addChild(&TouchSensor165);

Shape& Shape166 =  Shape();
Shape166.setUSE(CString("HAnimSiteShape"));
HAnimSite164.addChild(&Shape166);

HAnimSegment153.addChild(&HAnimSite164);

HAnimJoint152.addChildren(&HAnimSegment153);

HAnimJoint& HAnimJoint167 =  HAnimJoint();
HAnimJoint167.X3DNode::setName(CString("l_talocrural"));
HAnimJoint167.setDEF(CString("hanim_l_talocrural"));
HAnimJoint167.setCenter(new float[]{0.1101,0.0656,-0.0736});
HAnimJoint167.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint167.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment168 =  HAnimSegment();
HAnimSegment168.X3DNode::setName(CString("l_talus"));
HAnimSegment168.setDEF(CString("hanim_l_talus"));
Transform& Transform169 =  Transform();
Transform169.setScale(new float[]{0.15,0.15,0.15});
Transform169.setTranslation(new float[]{0.08,0.06,-0.025});
Transform169.setRotation(new float[]{1,0,0,-1.57});
//Transform left foot
Transform& Transform170 =  Transform();
//Empty Transform left foot
Shape& Shape171 =  Shape();
Shape171.setUSE(CString("HAnimJointShape"));
Transform170.addChild(&Shape171);

Transform169.addChild(&Transform170);

HAnimSegment168.addChild(&Transform169);

Shape& Shape172 =  Shape();
LineSet& LineSet173 =  LineSet();
LineSet173.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate174 =  Coordinate();
Coordinate174.setPoint(new float[]{0.1101,0.0656,-0.0736,3.4715,0.0374,0.6807}, 6);
LineSet173.setCoord(Coordinate174);

//from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA& ColorRGBA175 =  ColorRGBA();
ColorRGBA175.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet173.addChild(&ColorRGBA175);

Shape172.setGeometry(&LineSet173);

HAnimSegment168.addChild(&Shape172);

Shape& Shape176 =  Shape();
LineSet& LineSet177 =  LineSet();
LineSet177.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate178 =  Coordinate();
Coordinate178.setPoint(new float[]{0.1101,0.0656,-0.0736,3.9515,0.0653,-0.6895}, 6);
LineSet177.setCoord(Coordinate178);

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA& ColorRGBA179 =  ColorRGBA();
ColorRGBA179.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet177.addChild(&ColorRGBA179);

Shape176.setGeometry(&LineSet177);

HAnimSegment168.addChild(&Shape176);

HAnimJoint167.addChildren(&HAnimSegment168);

HAnimJoint& HAnimJoint180 =  HAnimJoint();
HAnimJoint180.X3DNode::setName(CString("l_talocalcaneonavicular"));
HAnimJoint180.setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint180.setCenter(new float[]{3.4715,0.0374,0.6807});
HAnimJoint180.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint180.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment181 =  HAnimSegment();
HAnimSegment181.X3DNode::setName(CString("l_navicular"));
HAnimSegment181.setDEF(CString("hanim_l_navicular"));
Transform& Transform182 =  Transform();
Transform182.setTranslation(new float[]{3.4715,0.0374,0.6807});
Transform& Transform183 =  Transform();
//Empty Transform
Shape& Shape184 =  Shape();
Shape184.setUSE(CString("HAnimJointShape"));
Transform183.addChild(&Shape184);

Transform182.addChild(&Transform183);

HAnimSegment181.addChild(&Transform182);

Shape& Shape185 =  Shape();
LineSet& LineSet186 =  LineSet();
LineSet186.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate187 =  Coordinate();
Coordinate187.setPoint(new float[]{3.4715,0.0374,0.6807,2.9855,0.0311,1.2819}, 6);
LineSet186.setCoord(Coordinate187);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA& ColorRGBA188 =  ColorRGBA();
ColorRGBA188.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet186.addChild(&ColorRGBA188);

Shape185.setGeometry(&LineSet186);

HAnimSegment181.addChild(&Shape185);

Shape& Shape189 =  Shape();
LineSet& LineSet190 =  LineSet();
LineSet190.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate191 =  Coordinate();
Coordinate191.setPoint(new float[]{3.4715,0.0374,0.6807,3.6105,0.033,1.4168}, 6);
LineSet190.setCoord(Coordinate191);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA& ColorRGBA192 =  ColorRGBA();
ColorRGBA192.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet190.addChild(&ColorRGBA192);

Shape189.setGeometry(&LineSet190);

HAnimSegment181.addChild(&Shape189);

Shape& Shape193 =  Shape();
LineSet& LineSet194 =  LineSet();
LineSet194.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate195 =  Coordinate();
Coordinate195.setPoint(new float[]{3.4715,0.0374,0.6807,4.1235,0.0328,1.3453}, 6);
LineSet194.setCoord(Coordinate195);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA& ColorRGBA196 =  ColorRGBA();
ColorRGBA196.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet194.addChild(&ColorRGBA196);

Shape193.setGeometry(&LineSet194);

HAnimSegment181.addChild(&Shape193);

HAnimJoint180.addChildren(&HAnimSegment181);

HAnimJoint& HAnimJoint197 =  HAnimJoint();
HAnimJoint197.X3DNode::setName(CString("l_cuneonavicular_1"));
HAnimJoint197.setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint197.setCenter(new float[]{2.9855,0.0311,1.2819});
HAnimJoint197.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint197.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment198 =  HAnimSegment();
HAnimSegment198.X3DNode::setName(CString("l_cuneiform_1"));
HAnimSegment198.setDEF(CString("hanim_l_cuneiform_1"));
Transform& Transform199 =  Transform();
Transform199.setTranslation(new float[]{2.9855,0.0311,1.2819});
Transform& Transform200 =  Transform();
//Empty Transform
Shape& Shape201 =  Shape();
Shape201.setUSE(CString("HAnimJointShape"));
Transform200.addChild(&Shape201);

Transform199.addChild(&Transform200);

HAnimSegment198.addChild(&Transform199);

Shape& Shape202 =  Shape();
LineSet& LineSet203 =  LineSet();
LineSet203.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate204 =  Coordinate();
Coordinate204.setPoint(new float[]{2.9855,0.0311,1.2819,2.8635,0.0194,2.4285}, 6);
LineSet203.setCoord(Coordinate204);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA& ColorRGBA205 =  ColorRGBA();
ColorRGBA205.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet203.addChild(&ColorRGBA205);

Shape202.setGeometry(&LineSet203);

HAnimSegment198.addChild(&Shape202);

HAnimJoint197.addChildren(&HAnimSegment198);

HAnimJoint& HAnimJoint206 =  HAnimJoint();
HAnimJoint206.X3DNode::setName(CString("l_tarsometatarsal_1"));
HAnimJoint206.setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint206.setCenter(new float[]{2.8635,0.0194,2.4285});
HAnimJoint206.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint206.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment207 =  HAnimSegment();
HAnimSegment207.X3DNode::setName(CString("l_metatarsal_1"));
HAnimSegment207.setDEF(CString("hanim_l_metatarsal_1"));
Transform& Transform208 =  Transform();
Transform208.setTranslation(new float[]{2.8635,0.0194,2.4285});
Transform& Transform209 =  Transform();
//Empty Transform
Shape& Shape210 =  Shape();
Shape210.setUSE(CString("HAnimJointShape"));
Transform209.addChild(&Shape210);

Transform208.addChild(&Transform209);

HAnimSegment207.addChild(&Transform208);

Shape& Shape211 =  Shape();
LineSet& LineSet212 =  LineSet();
LineSet212.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate213 =  Coordinate();
Coordinate213.setPoint(new float[]{2.8635,0.0194,2.4285,2.7525,0.0077,4.6255}, 6);
LineSet212.setCoord(Coordinate213);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA& ColorRGBA214 =  ColorRGBA();
ColorRGBA214.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet212.addChild(&ColorRGBA214);

Shape211.setGeometry(&LineSet212);

HAnimSegment207.addChild(&Shape211);

HAnimSite& HAnimSite215 =  HAnimSite();
HAnimSite215.X3DNode::setName(CString("l_metatarsal_phalanx_1_pt"));
HAnimSite215.setDEF(CString("hanim_l_metatarsal_phalanx_1_pt"));
TouchSensor& TouchSensor216 =  TouchSensor();
TouchSensor216.setDescription(CString("HAnimSite l_metatarsal_phalanx_1_pt"));
HAnimSite215.addChild(&TouchSensor216);

Shape& Shape217 =  Shape();
Shape217.setUSE(CString("HAnimSiteShape"));
HAnimSite215.addChild(&Shape217);

HAnimSegment207.addChild(&HAnimSite215);

HAnimJoint206.addChildren(&HAnimSegment207);

HAnimJoint& HAnimJoint218 =  HAnimJoint();
HAnimJoint218.X3DNode::setName(CString("l_metatarsophalangeal_1"));
HAnimJoint218.setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint218.setCenter(new float[]{2.7525,0.0077,4.6255});
HAnimJoint218.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint218.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment219 =  HAnimSegment();
HAnimSegment219.X3DNode::setName(CString("l_tarsal_proximal_phalanx_1"));
HAnimSegment219.setDEF(CString("hanim_l_tarsal_proximal_phalanx_1"));
Transform& Transform220 =  Transform();
Transform220.setTranslation(new float[]{2.7525,0.0077,4.6255});
Transform& Transform221 =  Transform();
//Empty Transform
Shape& Shape222 =  Shape();
Shape222.setUSE(CString("HAnimJointShape"));
Transform221.addChild(&Shape222);

Transform220.addChild(&Transform221);

HAnimSegment219.addChild(&Transform220);

Shape& Shape223 =  Shape();
LineSet& LineSet224 =  LineSet();
LineSet224.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate225 =  Coordinate();
Coordinate225.setPoint(new float[]{2.7525,0.0077,4.6255,2.7525,0.0077,4.6255}, 6);
LineSet224.setCoord(Coordinate225);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA226 =  ColorRGBA();
ColorRGBA226.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet224.addChild(&ColorRGBA226);

Shape223.setGeometry(&LineSet224);

HAnimSegment219.addChild(&Shape223);

HAnimSite& HAnimSite227 =  HAnimSite();
HAnimSite227.X3DNode::setName(CString("l_tarsal_distal_phalanx_1_tip"));
HAnimSite227.setDEF(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor228 =  TouchSensor();
TouchSensor228.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_1_tip"));
HAnimSite227.addChild(&TouchSensor228);

Shape& Shape229 =  Shape();
Shape229.setUSE(CString("HAnimSiteShape"));
HAnimSite227.addChild(&Shape229);

HAnimSegment219.addChild(&HAnimSite227);

HAnimJoint218.addChildren(&HAnimSegment219);

HAnimJoint& HAnimJoint230 =  HAnimJoint();
HAnimJoint230.X3DNode::setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint230.setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint230.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint230.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint218.addChildren(&HAnimJoint230);

HAnimJoint206.addChildren(&HAnimJoint218);

HAnimJoint197.addChildren(&HAnimJoint206);

HAnimJoint180.addChildren(&HAnimJoint197);

HAnimJoint& HAnimJoint231 =  HAnimJoint();
HAnimJoint231.X3DNode::setName(CString("l_cuneonavicular_2"));
HAnimJoint231.setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint231.setCenter(new float[]{3.6105,0.033,1.4168});
HAnimJoint231.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint231.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment232 =  HAnimSegment();
HAnimSegment232.X3DNode::setName(CString("l_cuneiform_2"));
HAnimSegment232.setDEF(CString("hanim_l_cuneiform_2"));
Transform& Transform233 =  Transform();
Transform233.setTranslation(new float[]{3.6105,0.033,1.4168});
Transform& Transform234 =  Transform();
//Empty Transform
Shape& Shape235 =  Shape();
Shape235.setUSE(CString("HAnimJointShape"));
Transform234.addChild(&Shape235);

Transform233.addChild(&Transform234);

HAnimSegment232.addChild(&Transform233);

Shape& Shape236 =  Shape();
LineSet& LineSet237 =  LineSet();
LineSet237.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate238 =  Coordinate();
Coordinate238.setPoint(new float[]{3.6105,0.033,1.4168,3.5555,0.0232,2.2895}, 6);
LineSet237.setCoord(Coordinate238);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA239 =  ColorRGBA();
ColorRGBA239.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet237.addChild(&ColorRGBA239);

Shape236.setGeometry(&LineSet237);

HAnimSegment232.addChild(&Shape236);

HAnimJoint231.addChildren(&HAnimSegment232);

HAnimJoint& HAnimJoint240 =  HAnimJoint();
HAnimJoint240.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint240.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint240.setCenter(new float[]{3.5555,0.0232,2.2895});
HAnimJoint240.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint240.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment241 =  HAnimSegment();
HAnimSegment241.X3DNode::setName(CString("l_metatarsal_2"));
HAnimSegment241.setDEF(CString("hanim_l_metatarsal_2"));
Transform& Transform242 =  Transform();
Transform242.setTranslation(new float[]{3.5555,0.0232,2.2895});
Transform& Transform243 =  Transform();
//Empty Transform
Shape& Shape244 =  Shape();
Shape244.setUSE(CString("HAnimJointShape"));
Transform243.addChild(&Shape244);

Transform242.addChild(&Transform243);

HAnimSegment241.addChild(&Transform242);

Shape& Shape245 =  Shape();
LineSet& LineSet246 =  LineSet();
LineSet246.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate247 =  Coordinate();
Coordinate247.setPoint(new float[]{3.5555,0.0232,2.2895,3.6595,0.0085,4.8125}, 6);
LineSet246.setCoord(Coordinate247);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA248 =  ColorRGBA();
ColorRGBA248.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet246.addChild(&ColorRGBA248);

Shape245.setGeometry(&LineSet246);

HAnimSegment241.addChild(&Shape245);

HAnimJoint240.addChildren(&HAnimSegment241);

HAnimJoint& HAnimJoint249 =  HAnimJoint();
HAnimJoint249.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint249.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint249.setCenter(new float[]{3.6595,0.0085,4.8125});
HAnimJoint249.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint249.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment250 =  HAnimSegment();
HAnimSegment250.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment250.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Transform& Transform251 =  Transform();
Transform251.setTranslation(new float[]{3.6595,0.0085,4.8125});
Transform& Transform252 =  Transform();
//Empty Transform
Shape& Shape253 =  Shape();
Shape253.setUSE(CString("HAnimJointShape"));
Transform252.addChild(&Shape253);

Transform251.addChild(&Transform252);

HAnimSegment250.addChild(&Transform251);

Shape& Shape254 =  Shape();
LineSet& LineSet255 =  LineSet();
LineSet255.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate256 =  Coordinate();
Coordinate256.setPoint(new float[]{3.6595,0.0085,4.8125,3.7385,0.0054,5.5315}, 6);
LineSet255.setCoord(Coordinate256);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA257 =  ColorRGBA();
ColorRGBA257.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet255.addChild(&ColorRGBA257);

Shape254.setGeometry(&LineSet255);

HAnimSegment250.addChild(&Shape254);

HAnimJoint249.addChildren(&HAnimSegment250);

HAnimJoint& HAnimJoint258 =  HAnimJoint();
HAnimJoint258.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint258.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint258.setCenter(new float[]{3.7385,0.0054,5.5315});
HAnimJoint258.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint258.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment259 =  HAnimSegment();
HAnimSegment259.X3DNode::setName(CString("l_tarsal_middle_phalanx_2"));
HAnimSegment259.setDEF(CString("hanim_l_tarsal_middle_phalanx_2"));
Transform& Transform260 =  Transform();
Transform260.setTranslation(new float[]{3.7385,0.0054,5.5315});
Transform& Transform261 =  Transform();
//Empty Transform
Shape& Shape262 =  Shape();
Shape262.setUSE(CString("HAnimJointShape"));
Transform261.addChild(&Shape262);

Transform260.addChild(&Transform261);

HAnimSegment259.addChild(&Transform260);

Shape& Shape263 =  Shape();
LineSet& LineSet264 =  LineSet();
LineSet264.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate265 =  Coordinate();
Coordinate265.setPoint(new float[]{3.7385,0.0054,5.5315,3.7385,0.0017,5.9505}, 6);
LineSet264.setCoord(Coordinate265);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA266 =  ColorRGBA();
ColorRGBA266.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet264.addChild(&ColorRGBA266);

Shape263.setGeometry(&LineSet264);

HAnimSegment259.addChild(&Shape263);

HAnimSite& HAnimSite267 =  HAnimSite();
HAnimSite267.X3DNode::setName(CString("l_tarsal_distal_phalanx_2_tip"));
HAnimSite267.setDEF(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimSite267.setTranslation(new float[]{0.1195,0.0079,0.1433});
TouchSensor& TouchSensor268 =  TouchSensor();
TouchSensor268.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_2_tip"));
HAnimSite267.addChild(&TouchSensor268);

Shape& Shape269 =  Shape();
Shape269.setUSE(CString("HAnimSiteShape"));
HAnimSite267.addChild(&Shape269);

HAnimSegment259.addChild(&HAnimSite267);

HAnimJoint258.addChildren(&HAnimSegment259);

HAnimJoint& HAnimJoint270 =  HAnimJoint();
HAnimJoint270.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint270.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint270.setCenter(new float[]{3.7385,0.0017,5.9505});
HAnimJoint270.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint270.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint258.addChildren(&HAnimJoint270);

HAnimJoint249.addChildren(&HAnimJoint258);

HAnimJoint240.addChildren(&HAnimJoint249);

HAnimJoint231.addChildren(&HAnimJoint240);

HAnimJoint180.addChildren(&HAnimJoint231);

HAnimJoint& HAnimJoint271 =  HAnimJoint();
HAnimJoint271.X3DNode::setName(CString("l_cuneonavicular_3"));
HAnimJoint271.setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint271.setCenter(new float[]{4.1235,0.0328,1.3453});
HAnimJoint271.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint271.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment272 =  HAnimSegment();
HAnimSegment272.X3DNode::setName(CString("l_cuneiform_3"));
HAnimSegment272.setDEF(CString("hanim_l_cuneiform_3"));
Transform& Transform273 =  Transform();
Transform273.setTranslation(new float[]{4.1235,0.0328,1.3453});
Transform& Transform274 =  Transform();
//Empty Transform
Shape& Shape275 =  Shape();
Shape275.setUSE(CString("HAnimJointShape"));
Transform274.addChild(&Shape275);

Transform273.addChild(&Transform274);

HAnimSegment272.addChild(&Transform273);

Shape& Shape276 =  Shape();
LineSet& LineSet277 =  LineSet();
LineSet277.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate278 =  Coordinate();
Coordinate278.setPoint(new float[]{4.1235,0.0328,1.3453,3.7385,0.0017,5.9505}, 6);
LineSet277.setCoord(Coordinate278);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA& ColorRGBA279 =  ColorRGBA();
ColorRGBA279.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet277.addChild(&ColorRGBA279);

Shape276.setGeometry(&LineSet277);

HAnimSegment272.addChild(&Shape276);

HAnimJoint271.addChildren(&HAnimSegment272);

HAnimJoint& HAnimJoint280 =  HAnimJoint();
HAnimJoint280.X3DNode::setName(CString("l_tarsometatarsal_3"));
HAnimJoint280.setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimJoint280.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint280.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment281 =  HAnimSegment();
HAnimSegment281.X3DNode::setName(CString("l_metatarsal_3"));
HAnimSegment281.setDEF(CString("hanim_l_metatarsal_3"));
Transform& Transform282 =  Transform();
Transform282.setTranslation(new float[]{4.1235,0.0328,1.3453});
Transform& Transform283 =  Transform();
//Empty Transform
Shape& Shape284 =  Shape();
Shape284.setUSE(CString("HAnimJointShape"));
Transform283.addChild(&Shape284);

Transform282.addChild(&Transform283);

HAnimSegment281.addChild(&Transform282);

Shape& Shape285 =  Shape();
LineSet& LineSet286 =  LineSet();
LineSet286.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate287 =  Coordinate();
Coordinate287.setPoint(new float[]{4.2795,0.0086,4.7055}, 3);
LineSet286.setCoord(Coordinate287);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1
ColorRGBA& ColorRGBA288 =  ColorRGBA();
ColorRGBA288.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet286.addChild(&ColorRGBA288);

Shape285.setGeometry(&LineSet286);

HAnimSegment281.addChild(&Shape285);

HAnimJoint280.addChildren(&HAnimSegment281);

HAnimJoint& HAnimJoint289 =  HAnimJoint();
HAnimJoint289.X3DNode::setName(CString("l_metatarsophalangeal_3"));
HAnimJoint289.setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint289.setCenter(new float[]{4.2795,0.0086,4.7055});
HAnimJoint289.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint289.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment290 =  HAnimSegment();
HAnimSegment290.X3DNode::setName(CString("l_tarsal_proximal_phalanx_3"));
HAnimSegment290.setDEF(CString("hanim_l_tarsal_proximal_phalanx_3"));
Transform& Transform291 =  Transform();
Transform291.setTranslation(new float[]{4.2795,0.0086,4.7055});
Transform& Transform292 =  Transform();
//Empty Transform
Shape& Shape293 =  Shape();
Shape293.setUSE(CString("HAnimJointShape"));
Transform292.addChild(&Shape293);

Transform291.addChild(&Transform292);

HAnimSegment290.addChild(&Transform291);

Shape& Shape294 =  Shape();
LineSet& LineSet295 =  LineSet();
LineSet295.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate296 =  Coordinate();
Coordinate296.setPoint(new float[]{4.2795,0.0086,4.7055,4.3855,0.0044,5.3745}, 6);
LineSet295.setCoord(Coordinate296);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA297 =  ColorRGBA();
ColorRGBA297.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet295.addChild(&ColorRGBA297);

Shape294.setGeometry(&LineSet295);

HAnimSegment290.addChild(&Shape294);

HAnimJoint289.addChildren(&HAnimSegment290);

HAnimJoint& HAnimJoint298 =  HAnimJoint();
HAnimJoint298.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint298.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint298.setCenter(new float[]{4.3855,0.0044,5.3745});
HAnimJoint298.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint298.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment299 =  HAnimSegment();
HAnimSegment299.X3DNode::setName(CString("l_tarsal_middle_phalanx_3"));
HAnimSegment299.setDEF(CString("hanim_l_tarsal_middle_phalanx_3"));
Transform& Transform300 =  Transform();
Transform300.setTranslation(new float[]{4.3855,0.0044,5.3745});
Transform& Transform301 =  Transform();
//Empty Transform
Shape& Shape302 =  Shape();
Shape302.setUSE(CString("HAnimJointShape"));
Transform301.addChild(&Shape302);

Transform300.addChild(&Transform301);

HAnimSegment299.addChild(&Transform300);

Shape& Shape303 =  Shape();
LineSet& LineSet304 =  LineSet();
LineSet304.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate305 =  Coordinate();
Coordinate305.setPoint(new float[]{4.3855,0.0044,5.3745,4.4545,0.0017,5.7845}, 6);
LineSet304.setCoord(Coordinate305);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA306 =  ColorRGBA();
ColorRGBA306.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet304.addChild(&ColorRGBA306);

Shape303.setGeometry(&LineSet304);

HAnimSegment299.addChild(&Shape303);

HAnimSite& HAnimSite307 =  HAnimSite();
HAnimSite307.X3DNode::setName(CString("l_tarsal_distal_phalanx_3_tip"));
HAnimSite307.setDEF(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor308 =  TouchSensor();
TouchSensor308.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_3_tip"));
HAnimSite307.addChild(&TouchSensor308);

Shape& Shape309 =  Shape();
Shape309.setUSE(CString("HAnimSiteShape"));
HAnimSite307.addChild(&Shape309);

HAnimSegment299.addChild(&HAnimSite307);

HAnimJoint298.addChildren(&HAnimSegment299);

HAnimJoint& HAnimJoint310 =  HAnimJoint();
HAnimJoint310.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint310.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint310.setCenter(new float[]{4.4545,0.0017,5.7845});
HAnimJoint310.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint310.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint298.addChildren(&HAnimJoint310);

HAnimJoint289.addChildren(&HAnimJoint298);

HAnimJoint280.addChildren(&HAnimJoint289);

HAnimJoint271.addChildren(&HAnimJoint280);

HAnimJoint180.addChildren(&HAnimJoint271);

HAnimJoint167.addChildren(&HAnimJoint180);

HAnimJoint& HAnimJoint311 =  HAnimJoint();
HAnimJoint311.X3DNode::setName(CString("l_calcaneocuboid"));
HAnimJoint311.setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint311.setCenter(new float[]{3.9515,0.0653,-0.6895});
HAnimJoint311.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint311.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment312 =  HAnimSegment();
HAnimSegment312.X3DNode::setName(CString("l_calcaneus"));
HAnimSegment312.setDEF(CString("hanim_l_calcaneus"));
Transform& Transform313 =  Transform();
Transform313.setTranslation(new float[]{3.9515,0.0653,-0.6895});
Transform& Transform314 =  Transform();
//Empty Transform
Shape& Shape315 =  Shape();
Shape315.setUSE(CString("HAnimJointShape"));
Transform314.addChild(&Shape315);

Transform313.addChild(&Transform314);

HAnimSegment312.addChild(&Transform313);

Shape& Shape316 =  Shape();
LineSet& LineSet317 =  LineSet();
LineSet317.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate318 =  Coordinate();
Coordinate318.setPoint(new float[]{3.9515,0.0653,-0.6895,4.9085,0.0353,0.5574}, 6);
LineSet317.setCoord(Coordinate318);

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA& ColorRGBA319 =  ColorRGBA();
ColorRGBA319.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet317.addChild(&ColorRGBA319);

Shape316.setGeometry(&LineSet317);

HAnimSegment312.addChild(&Shape316);

HAnimJoint311.addChildren(&HAnimSegment312);

HAnimJoint& HAnimJoint320 =  HAnimJoint();
HAnimJoint320.X3DNode::setName(CString("l_transversetarsal"));
HAnimJoint320.setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint320.setCenter(new float[]{4.9085,0.0353,0.5574});
HAnimJoint320.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint320.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment321 =  HAnimSegment();
HAnimSegment321.X3DNode::setName(CString("l_cuboid"));
HAnimSegment321.setDEF(CString("hanim_l_cuboid"));
Transform& Transform322 =  Transform();
Transform322.setTranslation(new float[]{4.9085,0.0353,0.5574});
Transform& Transform323 =  Transform();
//Empty Transform
Shape& Shape324 =  Shape();
Shape324.setUSE(CString("HAnimJointShape"));
Transform323.addChild(&Shape324);

Transform322.addChild(&Transform323);

HAnimSegment321.addChild(&Transform322);

Shape& Shape325 =  Shape();
LineSet& LineSet326 =  LineSet();
LineSet326.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate327 =  Coordinate();
Coordinate327.setPoint(new float[]{4.9085,0.0353,0.5574,4.7245,0.0211,2.1725}, 6);
LineSet326.setCoord(Coordinate327);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA& ColorRGBA328 =  ColorRGBA();
ColorRGBA328.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet326.addChild(&ColorRGBA328);

Shape325.setGeometry(&LineSet326);

HAnimSegment321.addChild(&Shape325);

Shape& Shape329 =  Shape();
LineSet& LineSet330 =  LineSet();
LineSet330.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate331 =  Coordinate();
Coordinate331.setPoint(new float[]{4.9085,0.0353,0.5574,5.3615,0.0164,2.0085}, 6);
LineSet330.setCoord(Coordinate331);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA& ColorRGBA332 =  ColorRGBA();
ColorRGBA332.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet330.addChild(&ColorRGBA332);

Shape329.setGeometry(&LineSet330);

HAnimSegment321.addChild(&Shape329);

HAnimJoint320.addChildren(&HAnimSegment321);

HAnimJoint& HAnimJoint333 =  HAnimJoint();
HAnimJoint333.X3DNode::setName(CString("l_tarsometatarsal_4"));
HAnimJoint333.setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint333.setCenter(new float[]{4.7245,0.0211,2.1725});
HAnimJoint333.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint333.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment334 =  HAnimSegment();
HAnimSegment334.X3DNode::setName(CString("l_metatarsal_4"));
HAnimSegment334.setDEF(CString("hanim_l_metatarsal_4"));
Transform& Transform335 =  Transform();
Transform335.setTranslation(new float[]{4.7245,0.0211,2.1725});
Transform& Transform336 =  Transform();
//Empty Transform
Shape& Shape337 =  Shape();
Shape337.setUSE(CString("HAnimJointShape"));
Transform336.addChild(&Shape337);

Transform335.addChild(&Transform336);

HAnimSegment334.addChild(&Transform335);

Shape& Shape338 =  Shape();
LineSet& LineSet339 =  LineSet();
LineSet339.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate340 =  Coordinate();
Coordinate340.setPoint(new float[]{4.7245,0.0211,2.1725,4.8745,0.0076,4.5165}, 6);
LineSet339.setCoord(Coordinate340);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA& ColorRGBA341 =  ColorRGBA();
ColorRGBA341.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet339.addChild(&ColorRGBA341);

Shape338.setGeometry(&LineSet339);

HAnimSegment334.addChild(&Shape338);

HAnimJoint333.addChildren(&HAnimSegment334);

HAnimJoint& HAnimJoint342 =  HAnimJoint();
HAnimJoint342.X3DNode::setName(CString("l_metatarsophalangeal_4"));
HAnimJoint342.setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint342.setCenter(new float[]{4.8745,0.0076,4.5165});
HAnimJoint342.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint342.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment343 =  HAnimSegment();
HAnimSegment343.X3DNode::setName(CString("l_tarsal_proximal_phalanx_4"));
HAnimSegment343.setDEF(CString("hanim_l_tarsal_proximal_phalanx_4"));
Transform& Transform344 =  Transform();
Transform344.setTranslation(new float[]{4.8745,0.0076,4.5165});
Transform& Transform345 =  Transform();
//Empty Transform
Shape& Shape346 =  Shape();
Shape346.setUSE(CString("HAnimJointShape"));
Transform345.addChild(&Shape346);

Transform344.addChild(&Transform345);

HAnimSegment343.addChild(&Transform344);

Shape& Shape347 =  Shape();
LineSet& LineSet348 =  LineSet();
LineSet348.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate349 =  Coordinate();
Coordinate349.setPoint(new float[]{4.8745,0.0076,4.5165,5.0655,0.0049,5.1895}, 6);
LineSet348.setCoord(Coordinate349);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA350 =  ColorRGBA();
ColorRGBA350.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet348.addChild(&ColorRGBA350);

Shape347.setGeometry(&LineSet348);

HAnimSegment343.addChild(&Shape347);

HAnimJoint342.addChildren(&HAnimSegment343);

HAnimJoint& HAnimJoint351 =  HAnimJoint();
HAnimJoint351.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint351.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint351.setCenter(new float[]{5.0655,0.0049,5.1895});
HAnimJoint351.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint351.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment352 =  HAnimSegment();
HAnimSegment352.X3DNode::setName(CString("l_tarsal_middle_phalanx_4"));
HAnimSegment352.setDEF(CString("hanim_l_tarsal_middle_phalanx_4"));
Transform& Transform353 =  Transform();
Transform353.setTranslation(new float[]{5.0655,0.0049,5.1895});
Transform& Transform354 =  Transform();
//Empty Transform
Shape& Shape355 =  Shape();
Shape355.setUSE(CString("HAnimJointShape"));
Transform354.addChild(&Shape355);

Transform353.addChild(&Transform354);

HAnimSegment352.addChild(&Transform353);

Shape& Shape356 =  Shape();
LineSet& LineSet357 =  LineSet();
LineSet357.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate358 =  Coordinate();
Coordinate358.setPoint(new float[]{5.0655,0.0049,5.1895,5.1325,0.0011,5.5175}, 6);
LineSet357.setCoord(Coordinate358);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA359 =  ColorRGBA();
ColorRGBA359.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet357.addChild(&ColorRGBA359);

Shape356.setGeometry(&LineSet357);

HAnimSegment352.addChild(&Shape356);

HAnimSite& HAnimSite360 =  HAnimSite();
HAnimSite360.X3DNode::setName(CString("l_tarsal_distal_phalanx_4_tip"));
HAnimSite360.setDEF(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor361 =  TouchSensor();
TouchSensor361.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_4_tip"));
HAnimSite360.addChild(&TouchSensor361);

Shape& Shape362 =  Shape();
Shape362.setUSE(CString("HAnimSiteShape"));
HAnimSite360.addChild(&Shape362);

HAnimSegment352.addChild(&HAnimSite360);

HAnimJoint351.addChildren(&HAnimSegment352);

HAnimJoint& HAnimJoint363 =  HAnimJoint();
HAnimJoint363.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint363.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint363.setCenter(new float[]{5.1325,0.0011,5.5175});
HAnimJoint363.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint363.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint351.addChildren(&HAnimJoint363);

HAnimJoint342.addChildren(&HAnimJoint351);

HAnimJoint333.addChildren(&HAnimJoint342);

HAnimJoint320.addChildren(&HAnimJoint333);

HAnimJoint& HAnimJoint364 =  HAnimJoint();
HAnimJoint364.X3DNode::setName(CString("l_tarsometatarsal_5"));
HAnimJoint364.setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint364.setCenter(new float[]{5.3615,0.0164,2.0085});
HAnimJoint364.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint364.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment365 =  HAnimSegment();
HAnimSegment365.X3DNode::setName(CString("l_metatarsal_5"));
HAnimSegment365.setDEF(CString("hanim_l_metatarsal_5"));
Transform& Transform366 =  Transform();
Transform366.setTranslation(new float[]{5.3615,0.0164,2.0085});
Transform& Transform367 =  Transform();
//Empty Transform
Shape& Shape368 =  Shape();
Shape368.setUSE(CString("HAnimJointShape"));
Transform367.addChild(&Shape368);

Transform366.addChild(&Transform367);

HAnimSegment365.addChild(&Transform366);

Shape& Shape369 =  Shape();
LineSet& LineSet370 =  LineSet();
LineSet370.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate371 =  Coordinate();
Coordinate371.setPoint(new float[]{5.3615,0.0164,2.0085,5.5055,0.0067,4.3115}, 6);
LineSet370.setCoord(Coordinate371);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA& ColorRGBA372 =  ColorRGBA();
ColorRGBA372.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet370.addChild(&ColorRGBA372);

Shape369.setGeometry(&LineSet370);

HAnimSegment365.addChild(&Shape369);

HAnimSite& HAnimSite373 =  HAnimSite();
HAnimSite373.X3DNode::setName(CString("l_metatarsal_phalanx_5_pt"));
HAnimSite373.setDEF(CString("hanim_l_metatarsal_phalanx_5_pt"));
TouchSensor& TouchSensor374 =  TouchSensor();
TouchSensor374.setDescription(CString("HAnimSite l_metatarsal_phalanx_5_pt"));
HAnimSite373.addChild(&TouchSensor374);

Shape& Shape375 =  Shape();
Shape375.setUSE(CString("HAnimSiteShape"));
HAnimSite373.addChild(&Shape375);

HAnimSegment365.addChild(&HAnimSite373);

HAnimJoint364.addChildren(&HAnimSegment365);

HAnimJoint& HAnimJoint376 =  HAnimJoint();
HAnimJoint376.X3DNode::setName(CString("l_metatarsophalangeal_5"));
HAnimJoint376.setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint376.setCenter(new float[]{5.5055,0.0067,4.3115});
HAnimJoint376.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint376.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment377 =  HAnimSegment();
HAnimSegment377.X3DNode::setName(CString("l_tarsal_proximal_phalanx_5"));
HAnimSegment377.setDEF(CString("hanim_l_tarsal_proximal_phalanx_5"));
Transform& Transform378 =  Transform();
Transform378.setTranslation(new float[]{5.5055,0.0067,4.3115});
Transform& Transform379 =  Transform();
//Empty Transform
Shape& Shape380 =  Shape();
Shape380.setUSE(CString("HAnimJointShape"));
Transform379.addChild(&Shape380);

Transform378.addChild(&Transform379);

HAnimSegment377.addChild(&Transform378);

Shape& Shape381 =  Shape();
LineSet& LineSet382 =  LineSet();
LineSet382.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate383 =  Coordinate();
Coordinate383.setPoint(new float[]{5.5055,0.0067,4.3115,5.6085,0.003,4.6485}, 6);
LineSet382.setCoord(Coordinate383);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA384 =  ColorRGBA();
ColorRGBA384.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet382.addChild(&ColorRGBA384);

Shape381.setGeometry(&LineSet382);

HAnimSegment377.addChild(&Shape381);

HAnimJoint376.addChildren(&HAnimSegment377);

HAnimJoint& HAnimJoint385 =  HAnimJoint();
HAnimJoint385.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint385.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint385.setCenter(new float[]{5.6085,0.003,4.6485});
HAnimJoint385.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint385.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment386 =  HAnimSegment();
HAnimSegment386.X3DNode::setName(CString("l_tarsal_middle_phalanx_5"));
HAnimSegment386.setDEF(CString("hanim_l_tarsal_middle_phalanx_5"));
Transform& Transform387 =  Transform();
Transform387.setTranslation(new float[]{5.6085,0.003,4.6485});
Transform& Transform388 =  Transform();
//Empty Transform
Shape& Shape389 =  Shape();
Shape389.setUSE(CString("HAnimJointShape"));
Transform388.addChild(&Shape389);

Transform387.addChild(&Transform388);

HAnimSegment386.addChild(&Transform387);

Shape& Shape390 =  Shape();
LineSet& LineSet391 =  LineSet();
LineSet391.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate392 =  Coordinate();
Coordinate392.setPoint(new float[]{5.6085,0.003,4.6485,5.6485,0,4.9925}, 6);
LineSet391.setCoord(Coordinate392);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA393 =  ColorRGBA();
ColorRGBA393.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet391.addChild(&ColorRGBA393);

Shape390.setGeometry(&LineSet391);

HAnimSegment386.addChild(&Shape390);

HAnimSite& HAnimSite394 =  HAnimSite();
HAnimSite394.X3DNode::setName(CString("l_tarsal_distal_phalanx_5_tip"));
HAnimSite394.setDEF(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor395 =  TouchSensor();
TouchSensor395.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_5_tip"));
HAnimSite394.addChild(&TouchSensor395);

Shape& Shape396 =  Shape();
Shape396.setUSE(CString("HAnimSiteShape"));
HAnimSite394.addChild(&Shape396);

HAnimSegment386.addChild(&HAnimSite394);

HAnimJoint385.addChildren(&HAnimSegment386);

HAnimJoint& HAnimJoint397 =  HAnimJoint();
HAnimJoint397.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint397.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint397.setCenter(new float[]{5.6485,0,4.9925});
HAnimJoint397.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint397.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint385.addChildren(&HAnimJoint397);

HAnimJoint376.addChildren(&HAnimJoint385);

HAnimJoint364.addChildren(&HAnimJoint376);

HAnimJoint320.addChildren(&HAnimJoint364);

HAnimJoint311.addChildren(&HAnimJoint320);

HAnimJoint167.addChildren(&HAnimJoint311);

HAnimJoint152.addChildren(&HAnimJoint167);

HAnimJoint134.addChildren(&HAnimJoint152);

HAnimJoint97.addChildren(&HAnimJoint134);

HAnimJoint& HAnimJoint398 =  HAnimJoint();
HAnimJoint398.X3DNode::setName(CString("r_hip"));
HAnimJoint398.setDEF(CString("hanim_r_hip"));
HAnimJoint398.setCenter(new float[]{-0.095,0.9171,0.0029});
HAnimJoint398.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint398.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment399 =  HAnimSegment();
HAnimSegment399.X3DNode::setName(CString("r_thigh"));
HAnimSegment399.setDEF(CString("hanim_r_thigh"));
Transform& Transform400 =  Transform();
Transform400.setTranslation(new float[]{-0.095,0.9171,0.0029});
Transform& Transform401 =  Transform();
//Empty Transform
Shape& Shape402 =  Shape();
Shape402.setUSE(CString("HAnimJointShape"));
Transform401.addChild(&Shape402);

Transform400.addChild(&Transform401);

HAnimSegment399.addChild(&Transform400);

Shape& Shape403 =  Shape();
LineSet& LineSet404 =  LineSet();
LineSet404.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate405 =  Coordinate();
Coordinate405.setPoint(new float[]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
LineSet404.setCoord(Coordinate405);

//from r_hip to r_knee vertices 2
ColorRGBA& ColorRGBA406 =  ColorRGBA();
ColorRGBA406.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet404.addChild(&ColorRGBA406);

Shape403.setGeometry(&LineSet404);

HAnimSegment399.addChild(&Shape403);

HAnimSite& HAnimSite407 =  HAnimSite();
HAnimSite407.X3DNode::setName(CString("r_lateral_malleolus_pt"));
HAnimSite407.setDEF(CString("hanim_r_lateral_malleolus_pt"));
HAnimSite407.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
TouchSensor& TouchSensor408 =  TouchSensor();
TouchSensor408.setDescription(CString("HAnimSite r_lateral_malleolus_pt"));
HAnimSite407.addChild(&TouchSensor408);

Shape& Shape409 =  Shape();
Shape409.setUSE(CString("HAnimSiteShape"));
HAnimSite407.addChild(&Shape409);

HAnimSegment399.addChild(&HAnimSite407);

HAnimSite& HAnimSite410 =  HAnimSite();
HAnimSite410.X3DNode::setName(CString("r_medial_malleolus_pt"));
HAnimSite410.setDEF(CString("hanim_r_medial_malleolus_pt"));
HAnimSite410.setTranslation(new float[]{-0.0591,0.076,-0.0928});
TouchSensor& TouchSensor411 =  TouchSensor();
TouchSensor411.setDescription(CString("HAnimSite r_medial_malleolus_pt"));
HAnimSite410.addChild(&TouchSensor411);

Shape& Shape412 =  Shape();
Shape412.setUSE(CString("HAnimSiteShape"));
HAnimSite410.addChild(&Shape412);

HAnimSegment399.addChild(&HAnimSite410);

HAnimSite& HAnimSite413 =  HAnimSite();
HAnimSite413.X3DNode::setName(CString("r_tibiale_pt"));
HAnimSite413.setDEF(CString("hanim_r_tibiale_pt"));
TouchSensor& TouchSensor414 =  TouchSensor();
TouchSensor414.setDescription(CString("HAnimSite r_tibiale_pt"));
HAnimSite413.addChild(&TouchSensor414);

Shape& Shape415 =  Shape();
Shape415.setUSE(CString("HAnimSiteShape"));
HAnimSite413.addChild(&Shape415);

HAnimSegment399.addChild(&HAnimSite413);

HAnimJoint398.addChildren(&HAnimSegment399);

HAnimJoint& HAnimJoint416 =  HAnimJoint();
HAnimJoint416.X3DNode::setName(CString("r_knee"));
HAnimJoint416.setDEF(CString("hanim_r_knee"));
HAnimJoint416.setCenter(new float[]{-0.0867,0.4913,0.0318});
HAnimJoint416.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint416.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment417 =  HAnimSegment();
HAnimSegment417.X3DNode::setName(CString("r_calf"));
HAnimSegment417.setDEF(CString("hanim_r_calf"));
Transform& Transform418 =  Transform();
Transform418.setTranslation(new float[]{-0.0867,0.4913,0.0318});
Transform& Transform419 =  Transform();
//Empty Transform
Shape& Shape420 =  Shape();
Shape420.setUSE(CString("HAnimJointShape"));
Transform419.addChild(&Shape420);

Transform418.addChild(&Transform419);

HAnimSegment417.addChild(&Transform418);

Shape& Shape421 =  Shape();
LineSet& LineSet422 =  LineSet();
LineSet422.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate423 =  Coordinate();
Coordinate423.setPoint(new float[]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
LineSet422.setCoord(Coordinate423);

//from r_knee to r_talocrural vertices 2
ColorRGBA& ColorRGBA424 =  ColorRGBA();
ColorRGBA424.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet422.addChild(&ColorRGBA424);

Shape421.setGeometry(&LineSet422);

HAnimSegment417.addChild(&Shape421);

HAnimSite& HAnimSite425 =  HAnimSite();
HAnimSite425.X3DNode::setName(CString("r_calcaneus_posterior_pt"));
HAnimSite425.setDEF(CString("hanim_r_calcaneus_posterior_pt"));
HAnimSite425.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
TouchSensor& TouchSensor426 =  TouchSensor();
TouchSensor426.setDescription(CString("HAnimSite r_calcaneus_posterior_pt"));
HAnimSite425.addChild(&TouchSensor426);

Shape& Shape427 =  Shape();
Shape427.setUSE(CString("HAnimSiteShape"));
HAnimSite425.addChild(&Shape427);

HAnimSegment417.addChild(&HAnimSite425);

HAnimSite& HAnimSite428 =  HAnimSite();
HAnimSite428.X3DNode::setName(CString("r_sphyrion_pt"));
HAnimSite428.setDEF(CString("hanim_r_sphyrion_pt"));
HAnimSite428.setTranslation(new float[]{-0.0603,0.061,-0.1002});
TouchSensor& TouchSensor429 =  TouchSensor();
TouchSensor429.setDescription(CString("HAnimSite r_sphyrion_pt"));
HAnimSite428.addChild(&TouchSensor429);

Shape& Shape430 =  Shape();
Shape430.setUSE(CString("HAnimSiteShape"));
HAnimSite428.addChild(&Shape430);

HAnimSegment417.addChild(&HAnimSite428);

HAnimJoint416.addChildren(&HAnimSegment417);

HAnimJoint& HAnimJoint431 =  HAnimJoint();
HAnimJoint431.X3DNode::setName(CString("r_talocrural"));
HAnimJoint431.setDEF(CString("hanim_r_talocrural"));
HAnimJoint431.setCenter(new float[]{-0.0801,0.0712,-0.0766});
HAnimJoint431.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint431.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment432 =  HAnimSegment();
HAnimSegment432.X3DNode::setName(CString("r_talus"));
HAnimSegment432.setDEF(CString("hanim_r_talus"));
Transform& Transform433 =  Transform();
Transform433.setScale(new float[]{0.15,0.15,0.15});
Transform433.setTranslation(new float[]{-0.05,0.06,-0.025});
Transform433.setRotation(new float[]{1,0,0,-1.57});
//Transform right foot
Transform& Transform434 =  Transform();
//Empty Transform right foot
Shape& Shape435 =  Shape();
Shape435.setUSE(CString("HAnimJointShape"));
Transform434.addChild(&Shape435);

Transform433.addChild(&Transform434);

HAnimSegment432.addChild(&Transform433);

Shape& Shape436 =  Shape();
LineSet& LineSet437 =  LineSet();
LineSet437.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate438 =  Coordinate();
Coordinate438.setPoint(new float[]{-0.0801,0.0712,-0.0766,-3.4725,0.0374,0.6807}, 6);
LineSet437.setCoord(Coordinate438);

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA& ColorRGBA439 =  ColorRGBA();
ColorRGBA439.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet437.addChild(&ColorRGBA439);

Shape436.setGeometry(&LineSet437);

HAnimSegment432.addChild(&Shape436);

Shape& Shape440 =  Shape();
LineSet& LineSet441 =  LineSet();
LineSet441.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate442 =  Coordinate();
Coordinate442.setPoint(new float[]{-0.0801,0.0712,-0.0766,-3.9515,0.0653,-0.6895}, 6);
LineSet441.setCoord(Coordinate442);

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA& ColorRGBA443 =  ColorRGBA();
ColorRGBA443.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet441.addChild(&ColorRGBA443);

Shape440.setGeometry(&LineSet441);

HAnimSegment432.addChild(&Shape440);

HAnimJoint431.addChildren(&HAnimSegment432);

HAnimJoint& HAnimJoint444 =  HAnimJoint();
HAnimJoint444.X3DNode::setName(CString("r_talocalcaneonavicular"));
HAnimJoint444.setDEF(CString("hanim_r_talocalcaneonavicular"));
HAnimJoint444.setCenter(new float[]{-3.4725,0.0374,0.6807});
HAnimJoint444.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint444.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment445 =  HAnimSegment();
HAnimSegment445.X3DNode::setName(CString("r_navicular"));
HAnimSegment445.setDEF(CString("hanim_r_navicular"));
Transform& Transform446 =  Transform();
Transform446.setTranslation(new float[]{-3.4725,0.0374,0.6807});
Transform& Transform447 =  Transform();
//Empty Transform
Shape& Shape448 =  Shape();
Shape448.setUSE(CString("HAnimJointShape"));
Transform447.addChild(&Shape448);

Transform446.addChild(&Transform447);

HAnimSegment445.addChild(&Transform446);

Shape& Shape449 =  Shape();
LineSet& LineSet450 =  LineSet();
LineSet450.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate451 =  Coordinate();
Coordinate451.setPoint(new float[]{-3.4725,0.0374,0.6807,-2.9855,0.0311,1.2819}, 6);
LineSet450.setCoord(Coordinate451);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA& ColorRGBA452 =  ColorRGBA();
ColorRGBA452.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet450.addChild(&ColorRGBA452);

Shape449.setGeometry(&LineSet450);

HAnimSegment445.addChild(&Shape449);

Shape& Shape453 =  Shape();
LineSet& LineSet454 =  LineSet();
LineSet454.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate455 =  Coordinate();
Coordinate455.setPoint(new float[]{-3.4725,0.0374,0.6807,-3.6105,0.033,1.4168}, 6);
LineSet454.setCoord(Coordinate455);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA& ColorRGBA456 =  ColorRGBA();
ColorRGBA456.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet454.addChild(&ColorRGBA456);

Shape453.setGeometry(&LineSet454);

HAnimSegment445.addChild(&Shape453);

Shape& Shape457 =  Shape();
LineSet& LineSet458 =  LineSet();
LineSet458.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate459 =  Coordinate();
Coordinate459.setPoint(new float[]{-3.4725,0.0374,0.6807,-4.1245,0.0328,1.3453}, 6);
LineSet458.setCoord(Coordinate459);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA& ColorRGBA460 =  ColorRGBA();
ColorRGBA460.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet458.addChild(&ColorRGBA460);

Shape457.setGeometry(&LineSet458);

HAnimSegment445.addChild(&Shape457);

HAnimJoint444.addChildren(&HAnimSegment445);

HAnimJoint& HAnimJoint461 =  HAnimJoint();
HAnimJoint461.X3DNode::setName(CString("r_cuneonavicular_1"));
HAnimJoint461.setDEF(CString("hanim_r_cuneonavicular_1"));
HAnimJoint461.setCenter(new float[]{-2.9855,0.0311,1.2819});
HAnimJoint461.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint461.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment462 =  HAnimSegment();
HAnimSegment462.X3DNode::setName(CString("r_cuneiform_1"));
HAnimSegment462.setDEF(CString("hanim_r_cuneiform_1"));
Transform& Transform463 =  Transform();
Transform463.setTranslation(new float[]{-2.9855,0.0311,1.2819});
Transform& Transform464 =  Transform();
//Empty Transform
Shape& Shape465 =  Shape();
Shape465.setUSE(CString("HAnimJointShape"));
Transform464.addChild(&Shape465);

Transform463.addChild(&Transform464);

HAnimSegment462.addChild(&Transform463);

Shape& Shape466 =  Shape();
LineSet& LineSet467 =  LineSet();
LineSet467.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate468 =  Coordinate();
Coordinate468.setPoint(new float[]{-2.9855,0.0311,1.2819,-2.8645,0.0194,2.4285}, 6);
LineSet467.setCoord(Coordinate468);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA& ColorRGBA469 =  ColorRGBA();
ColorRGBA469.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet467.addChild(&ColorRGBA469);

Shape466.setGeometry(&LineSet467);

HAnimSegment462.addChild(&Shape466);

HAnimJoint461.addChildren(&HAnimSegment462);

HAnimJoint& HAnimJoint470 =  HAnimJoint();
HAnimJoint470.X3DNode::setName(CString("r_tarsometatarsal_1"));
HAnimJoint470.setDEF(CString("hanim_r_tarsometatarsal_1"));
HAnimJoint470.setCenter(new float[]{-2.8645,0.0194,2.4285});
HAnimJoint470.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint470.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment471 =  HAnimSegment();
HAnimSegment471.X3DNode::setName(CString("r_metatarsal_1"));
HAnimSegment471.setDEF(CString("hanim_r_metatarsal_1"));
Transform& Transform472 =  Transform();
Transform472.setTranslation(new float[]{-2.8645,0.0194,2.4285});
Transform& Transform473 =  Transform();
//Empty Transform
Shape& Shape474 =  Shape();
Shape474.setUSE(CString("HAnimJointShape"));
Transform473.addChild(&Shape474);

Transform472.addChild(&Transform473);

HAnimSegment471.addChild(&Transform472);

Shape& Shape475 =  Shape();
LineSet& LineSet476 =  LineSet();
LineSet476.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate477 =  Coordinate();
Coordinate477.setPoint(new float[]{-2.8645,0.0194,2.4285,-2.7535,0.0077,4.6255}, 6);
LineSet476.setCoord(Coordinate477);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA& ColorRGBA478 =  ColorRGBA();
ColorRGBA478.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet476.addChild(&ColorRGBA478);

Shape475.setGeometry(&LineSet476);

HAnimSegment471.addChild(&Shape475);

HAnimSite& HAnimSite479 =  HAnimSite();
HAnimSite479.X3DNode::setName(CString("r_metatarsal_phalanx_1_pt"));
HAnimSite479.setDEF(CString("hanim_r_metatarsal_phalanx_1_pt"));
TouchSensor& TouchSensor480 =  TouchSensor();
TouchSensor480.setDescription(CString("HAnimSite r_metatarsal_phalanx_1_pt"));
HAnimSite479.addChild(&TouchSensor480);

Shape& Shape481 =  Shape();
Shape481.setUSE(CString("HAnimSiteShape"));
HAnimSite479.addChild(&Shape481);

HAnimSegment471.addChild(&HAnimSite479);

HAnimJoint470.addChildren(&HAnimSegment471);

HAnimJoint& HAnimJoint482 =  HAnimJoint();
HAnimJoint482.X3DNode::setName(CString("r_metatarsophalangeal_1"));
HAnimJoint482.setDEF(CString("hanim_r_metatarsophalangeal_1"));
HAnimJoint482.setCenter(new float[]{-2.7535,0.0077,4.6255});
HAnimJoint482.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint482.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment483 =  HAnimSegment();
HAnimSegment483.X3DNode::setName(CString("r_tarsal_proximal_phalanx_1"));
HAnimSegment483.setDEF(CString("hanim_r_tarsal_proximal_phalanx_1"));
Transform& Transform484 =  Transform();
Transform484.setTranslation(new float[]{-2.7535,0.0077,4.6255});
Transform& Transform485 =  Transform();
//Empty Transform
Shape& Shape486 =  Shape();
Shape486.setUSE(CString("HAnimJointShape"));
Transform485.addChild(&Shape486);

Transform484.addChild(&Transform485);

HAnimSegment483.addChild(&Transform484);

Shape& Shape487 =  Shape();
LineSet& LineSet488 =  LineSet();
LineSet488.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate489 =  Coordinate();
Coordinate489.setPoint(new float[]{-2.7535,0.0077,4.6255,-2.7535,0.0077,4.6255}, 6);
LineSet488.setCoord(Coordinate489);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA490 =  ColorRGBA();
ColorRGBA490.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet488.addChild(&ColorRGBA490);

Shape487.setGeometry(&LineSet488);

HAnimSegment483.addChild(&Shape487);

HAnimSite& HAnimSite491 =  HAnimSite();
HAnimSite491.X3DNode::setName(CString("r_tarsal_distal_phalanx_1_tip"));
HAnimSite491.setDEF(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor492 =  TouchSensor();
TouchSensor492.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_1_tip"));
HAnimSite491.addChild(&TouchSensor492);

Shape& Shape493 =  Shape();
Shape493.setUSE(CString("HAnimSiteShape"));
HAnimSite491.addChild(&Shape493);

HAnimSegment483.addChild(&HAnimSite491);

HAnimJoint482.addChildren(&HAnimSegment483);

HAnimJoint& HAnimJoint494 =  HAnimJoint();
HAnimJoint494.X3DNode::setName(CString("r_tarsal_interphalangeal_1"));
HAnimJoint494.setDEF(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimJoint494.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint494.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint482.addChildren(&HAnimJoint494);

HAnimJoint470.addChildren(&HAnimJoint482);

HAnimJoint461.addChildren(&HAnimJoint470);

HAnimJoint444.addChildren(&HAnimJoint461);

HAnimJoint& HAnimJoint495 =  HAnimJoint();
HAnimJoint495.X3DNode::setName(CString("r_cuneonavicular_2"));
HAnimJoint495.setDEF(CString("hanim_r_cuneonavicular_2"));
HAnimJoint495.setCenter(new float[]{-3.6105,0.033,1.4168});
HAnimJoint495.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint495.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment496 =  HAnimSegment();
HAnimSegment496.X3DNode::setName(CString("r_cuneiform_2"));
HAnimSegment496.setDEF(CString("hanim_r_cuneiform_2"));
Transform& Transform497 =  Transform();
Transform497.setTranslation(new float[]{-3.6105,0.033,1.4168});
Transform& Transform498 =  Transform();
//Empty Transform
Shape& Shape499 =  Shape();
Shape499.setUSE(CString("HAnimJointShape"));
Transform498.addChild(&Shape499);

Transform497.addChild(&Transform498);

HAnimSegment496.addChild(&Transform497);

Shape& Shape500 =  Shape();
LineSet& LineSet501 =  LineSet();
LineSet501.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate502 =  Coordinate();
Coordinate502.setPoint(new float[]{-3.6105,0.033,1.4168,-3.5565,0.0232,2.2895}, 6);
LineSet501.setCoord(Coordinate502);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA503 =  ColorRGBA();
ColorRGBA503.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet501.addChild(&ColorRGBA503);

Shape500.setGeometry(&LineSet501);

HAnimSegment496.addChild(&Shape500);

HAnimJoint495.addChildren(&HAnimSegment496);

HAnimJoint& HAnimJoint504 =  HAnimJoint();
HAnimJoint504.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint504.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint504.setCenter(new float[]{-3.5565,0.0232,2.2895});
HAnimJoint504.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint504.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment505 =  HAnimSegment();
HAnimSegment505.X3DNode::setName(CString("r_metatarsal_2"));
HAnimSegment505.setDEF(CString("hanim_r_metatarsal_2"));
Transform& Transform506 =  Transform();
Transform506.setTranslation(new float[]{-3.5565,0.0232,2.2895});
Transform& Transform507 =  Transform();
//Empty Transform
Shape& Shape508 =  Shape();
Shape508.setUSE(CString("HAnimJointShape"));
Transform507.addChild(&Shape508);

Transform506.addChild(&Transform507);

HAnimSegment505.addChild(&Transform506);

Shape& Shape509 =  Shape();
LineSet& LineSet510 =  LineSet();
LineSet510.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate511 =  Coordinate();
Coordinate511.setPoint(new float[]{-3.5565,0.0232,2.2895,-3.6595,0.0085,4.8125}, 6);
LineSet510.setCoord(Coordinate511);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA512 =  ColorRGBA();
ColorRGBA512.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet510.addChild(&ColorRGBA512);

Shape509.setGeometry(&LineSet510);

HAnimSegment505.addChild(&Shape509);

HAnimJoint504.addChildren(&HAnimSegment505);

HAnimJoint& HAnimJoint513 =  HAnimJoint();
HAnimJoint513.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint513.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint513.setCenter(new float[]{-3.6595,0.0085,4.8125});
HAnimJoint513.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint513.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment514 =  HAnimSegment();
HAnimSegment514.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment514.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
Transform& Transform515 =  Transform();
Transform515.setTranslation(new float[]{-3.6595,0.0085,4.8125});
Transform& Transform516 =  Transform();
//Empty Transform
Shape& Shape517 =  Shape();
Shape517.setUSE(CString("HAnimJointShape"));
Transform516.addChild(&Shape517);

Transform515.addChild(&Transform516);

HAnimSegment514.addChild(&Transform515);

Shape& Shape518 =  Shape();
LineSet& LineSet519 =  LineSet();
LineSet519.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate520 =  Coordinate();
Coordinate520.setPoint(new float[]{-3.6595,0.0085,4.8125,-3.7385,0.0054,5.5315}, 6);
LineSet519.setCoord(Coordinate520);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA521 =  ColorRGBA();
ColorRGBA521.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet519.addChild(&ColorRGBA521);

Shape518.setGeometry(&LineSet519);

HAnimSegment514.addChild(&Shape518);

HAnimJoint513.addChildren(&HAnimSegment514);

HAnimJoint& HAnimJoint522 =  HAnimJoint();
HAnimJoint522.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_2"));
HAnimJoint522.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimJoint522.setCenter(new float[]{-3.7385,0.0054,5.5315});
HAnimJoint522.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint522.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment523 =  HAnimSegment();
HAnimSegment523.X3DNode::setName(CString("r_tarsal_middle_phalanx_2"));
HAnimSegment523.setDEF(CString("hanim_r_tarsal_middle_phalanx_2"));
Transform& Transform524 =  Transform();
Transform524.setTranslation(new float[]{-3.7385,0.0054,5.5315});
Transform& Transform525 =  Transform();
//Empty Transform
Shape& Shape526 =  Shape();
Shape526.setUSE(CString("HAnimJointShape"));
Transform525.addChild(&Shape526);

Transform524.addChild(&Transform525);

HAnimSegment523.addChild(&Transform524);

Shape& Shape527 =  Shape();
LineSet& LineSet528 =  LineSet();
LineSet528.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate529 =  Coordinate();
Coordinate529.setPoint(new float[]{-3.7385,0.0054,5.5315,-3.7385,0.0017,5.9505}, 6);
LineSet528.setCoord(Coordinate529);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA530 =  ColorRGBA();
ColorRGBA530.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet528.addChild(&ColorRGBA530);

Shape527.setGeometry(&LineSet528);

HAnimSegment523.addChild(&Shape527);

HAnimSite& HAnimSite531 =  HAnimSite();
HAnimSite531.X3DNode::setName(CString("r_tarsal_distal_phalanx_2_tip"));
HAnimSite531.setDEF(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimSite531.setTranslation(new float[]{-0.0883,0.0134,0.1383});
TouchSensor& TouchSensor532 =  TouchSensor();
TouchSensor532.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_2_tip"));
HAnimSite531.addChild(&TouchSensor532);

Shape& Shape533 =  Shape();
Shape533.setUSE(CString("HAnimSiteShape"));
HAnimSite531.addChild(&Shape533);

HAnimSegment523.addChild(&HAnimSite531);

HAnimJoint522.addChildren(&HAnimSegment523);

HAnimJoint& HAnimJoint534 =  HAnimJoint();
HAnimJoint534.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint534.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint534.setCenter(new float[]{-3.7385,0.0017,5.9505});
HAnimJoint534.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint534.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint522.addChildren(&HAnimJoint534);

HAnimJoint513.addChildren(&HAnimJoint522);

HAnimJoint504.addChildren(&HAnimJoint513);

HAnimJoint495.addChildren(&HAnimJoint504);

HAnimJoint444.addChildren(&HAnimJoint495);

HAnimJoint& HAnimJoint535 =  HAnimJoint();
HAnimJoint535.X3DNode::setName(CString("r_cuneonavicular_3"));
HAnimJoint535.setDEF(CString("hanim_r_cuneonavicular_3"));
HAnimJoint535.setCenter(new float[]{-4.1245,0.0328,1.3453});
HAnimJoint535.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint535.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment536 =  HAnimSegment();
HAnimSegment536.X3DNode::setName(CString("r_cuneiform_3"));
HAnimSegment536.setDEF(CString("hanim_r_cuneiform_3"));
Transform& Transform537 =  Transform();
Transform537.setTranslation(new float[]{-4.1245,0.0328,1.3453});
Transform& Transform538 =  Transform();
//Empty Transform
Shape& Shape539 =  Shape();
Shape539.setUSE(CString("HAnimJointShape"));
Transform538.addChild(&Shape539);

Transform537.addChild(&Transform538);

HAnimSegment536.addChild(&Transform537);

Shape& Shape540 =  Shape();
LineSet& LineSet541 =  LineSet();
LineSet541.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate542 =  Coordinate();
Coordinate542.setPoint(new float[]{-4.1245,0.0328,1.3453,-3.7385,0.0017,5.9505}, 6);
LineSet541.setCoord(Coordinate542);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA& ColorRGBA543 =  ColorRGBA();
ColorRGBA543.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet541.addChild(&ColorRGBA543);

Shape540.setGeometry(&LineSet541);

HAnimSegment536.addChild(&Shape540);

HAnimJoint535.addChildren(&HAnimSegment536);

HAnimJoint& HAnimJoint544 =  HAnimJoint();
HAnimJoint544.X3DNode::setName(CString("r_tarsometatarsal_3"));
HAnimJoint544.setDEF(CString("hanim_r_tarsometatarsal_3"));
HAnimJoint544.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint544.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment545 =  HAnimSegment();
HAnimSegment545.X3DNode::setName(CString("r_metatarsal_3"));
HAnimSegment545.setDEF(CString("hanim_r_metatarsal_3"));
Transform& Transform546 =  Transform();
Transform546.setTranslation(new float[]{-4.1245,0.0328,1.3453});
Transform& Transform547 =  Transform();
//Empty Transform
Shape& Shape548 =  Shape();
Shape548.setUSE(CString("HAnimJointShape"));
Transform547.addChild(&Shape548);

Transform546.addChild(&Transform547);

HAnimSegment545.addChild(&Transform546);

Shape& Shape549 =  Shape();
LineSet& LineSet550 =  LineSet();
LineSet550.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate551 =  Coordinate();
Coordinate551.setPoint(new float[]{-4.2795,0.0086,4.7055}, 3);
LineSet550.setCoord(Coordinate551);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1
ColorRGBA& ColorRGBA552 =  ColorRGBA();
ColorRGBA552.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet550.addChild(&ColorRGBA552);

Shape549.setGeometry(&LineSet550);

HAnimSegment545.addChild(&Shape549);

HAnimJoint544.addChildren(&HAnimSegment545);

HAnimJoint& HAnimJoint553 =  HAnimJoint();
HAnimJoint553.X3DNode::setName(CString("r_metatarsophalangeal_3"));
HAnimJoint553.setDEF(CString("hanim_r_metatarsophalangeal_3"));
HAnimJoint553.setCenter(new float[]{-4.2795,0.0086,4.7055});
HAnimJoint553.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint553.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment554 =  HAnimSegment();
HAnimSegment554.X3DNode::setName(CString("r_tarsal_proximal_phalanx_3"));
HAnimSegment554.setDEF(CString("hanim_r_tarsal_proximal_phalanx_3"));
Transform& Transform555 =  Transform();
Transform555.setTranslation(new float[]{-4.2795,0.0086,4.7055});
Transform& Transform556 =  Transform();
//Empty Transform
Shape& Shape557 =  Shape();
Shape557.setUSE(CString("HAnimJointShape"));
Transform556.addChild(&Shape557);

Transform555.addChild(&Transform556);

HAnimSegment554.addChild(&Transform555);

Shape& Shape558 =  Shape();
LineSet& LineSet559 =  LineSet();
LineSet559.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate560 =  Coordinate();
Coordinate560.setPoint(new float[]{-4.2795,0.0086,4.7055,-4.3865,0.0044,5.3745}, 6);
LineSet559.setCoord(Coordinate560);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA561 =  ColorRGBA();
ColorRGBA561.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet559.addChild(&ColorRGBA561);

Shape558.setGeometry(&LineSet559);

HAnimSegment554.addChild(&Shape558);

HAnimJoint553.addChildren(&HAnimSegment554);

HAnimJoint& HAnimJoint562 =  HAnimJoint();
HAnimJoint562.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_3"));
HAnimJoint562.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimJoint562.setCenter(new float[]{-4.3865,0.0044,5.3745});
HAnimJoint562.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint562.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment563 =  HAnimSegment();
HAnimSegment563.X3DNode::setName(CString("r_tarsal_middle_phalanx_3"));
HAnimSegment563.setDEF(CString("hanim_r_tarsal_middle_phalanx_3"));
Transform& Transform564 =  Transform();
Transform564.setTranslation(new float[]{-4.3865,0.0044,5.3745});
Transform& Transform565 =  Transform();
//Empty Transform
Shape& Shape566 =  Shape();
Shape566.setUSE(CString("HAnimJointShape"));
Transform565.addChild(&Shape566);

Transform564.addChild(&Transform565);

HAnimSegment563.addChild(&Transform564);

Shape& Shape567 =  Shape();
LineSet& LineSet568 =  LineSet();
LineSet568.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate569 =  Coordinate();
Coordinate569.setPoint(new float[]{-4.3865,0.0044,5.3745,-4.4545,0.0017,5.7845}, 6);
LineSet568.setCoord(Coordinate569);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA570 =  ColorRGBA();
ColorRGBA570.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet568.addChild(&ColorRGBA570);

Shape567.setGeometry(&LineSet568);

HAnimSegment563.addChild(&Shape567);

HAnimSite& HAnimSite571 =  HAnimSite();
HAnimSite571.X3DNode::setName(CString("r_tarsal_distal_phalanx_3_tip"));
HAnimSite571.setDEF(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor572 =  TouchSensor();
TouchSensor572.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_3_tip"));
HAnimSite571.addChild(&TouchSensor572);

Shape& Shape573 =  Shape();
Shape573.setUSE(CString("HAnimSiteShape"));
HAnimSite571.addChild(&Shape573);

HAnimSegment563.addChild(&HAnimSite571);

HAnimJoint562.addChildren(&HAnimSegment563);

HAnimJoint& HAnimJoint574 =  HAnimJoint();
HAnimJoint574.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_3"));
HAnimJoint574.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimJoint574.setCenter(new float[]{-4.4545,0.0017,5.7845});
HAnimJoint574.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint574.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint562.addChildren(&HAnimJoint574);

HAnimJoint553.addChildren(&HAnimJoint562);

HAnimJoint544.addChildren(&HAnimJoint553);

HAnimJoint535.addChildren(&HAnimJoint544);

HAnimJoint444.addChildren(&HAnimJoint535);

HAnimJoint431.addChildren(&HAnimJoint444);

HAnimJoint& HAnimJoint575 =  HAnimJoint();
HAnimJoint575.X3DNode::setName(CString("r_calcaneocuboid"));
HAnimJoint575.setDEF(CString("hanim_r_calcaneocuboid"));
HAnimJoint575.setCenter(new float[]{-3.9515,0.0653,-0.6895});
HAnimJoint575.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint575.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment576 =  HAnimSegment();
HAnimSegment576.X3DNode::setName(CString("r_calcaneus"));
HAnimSegment576.setDEF(CString("hanim_r_calcaneus"));
Transform& Transform577 =  Transform();
Transform577.setTranslation(new float[]{-3.9515,0.0653,-0.6895});
Transform& Transform578 =  Transform();
//Empty Transform
Shape& Shape579 =  Shape();
Shape579.setUSE(CString("HAnimJointShape"));
Transform578.addChild(&Shape579);

Transform577.addChild(&Transform578);

HAnimSegment576.addChild(&Transform577);

Shape& Shape580 =  Shape();
LineSet& LineSet581 =  LineSet();
LineSet581.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate582 =  Coordinate();
Coordinate582.setPoint(new float[]{-3.9515,0.0653,-0.6895,-4.9095,0.0353,0.5574}, 6);
LineSet581.setCoord(Coordinate582);

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA& ColorRGBA583 =  ColorRGBA();
ColorRGBA583.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet581.addChild(&ColorRGBA583);

Shape580.setGeometry(&LineSet581);

HAnimSegment576.addChild(&Shape580);

HAnimJoint575.addChildren(&HAnimSegment576);

HAnimJoint& HAnimJoint584 =  HAnimJoint();
HAnimJoint584.X3DNode::setName(CString("r_transversetarsal"));
HAnimJoint584.setDEF(CString("hanim_r_transversetarsal"));
HAnimJoint584.setCenter(new float[]{-4.9095,0.0353,0.5574});
HAnimJoint584.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint584.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment585 =  HAnimSegment();
HAnimSegment585.X3DNode::setName(CString("r_cuboid"));
HAnimSegment585.setDEF(CString("hanim_r_cuboid"));
Transform& Transform586 =  Transform();
Transform586.setTranslation(new float[]{-4.9095,0.0353,0.5574});
Transform& Transform587 =  Transform();
//Empty Transform
Shape& Shape588 =  Shape();
Shape588.setUSE(CString("HAnimJointShape"));
Transform587.addChild(&Shape588);

Transform586.addChild(&Transform587);

HAnimSegment585.addChild(&Transform586);

Shape& Shape589 =  Shape();
LineSet& LineSet590 =  LineSet();
LineSet590.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate591 =  Coordinate();
Coordinate591.setPoint(new float[]{-4.9095,0.0353,0.5574,-4.7255,0.0211,2.1725}, 6);
LineSet590.setCoord(Coordinate591);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA& ColorRGBA592 =  ColorRGBA();
ColorRGBA592.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet590.addChild(&ColorRGBA592);

Shape589.setGeometry(&LineSet590);

HAnimSegment585.addChild(&Shape589);

Shape& Shape593 =  Shape();
LineSet& LineSet594 =  LineSet();
LineSet594.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate595 =  Coordinate();
Coordinate595.setPoint(new float[]{-4.9095,0.0353,0.5574,-5.3615,0.0164,2.0085}, 6);
LineSet594.setCoord(Coordinate595);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA& ColorRGBA596 =  ColorRGBA();
ColorRGBA596.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet594.addChild(&ColorRGBA596);

Shape593.setGeometry(&LineSet594);

HAnimSegment585.addChild(&Shape593);

HAnimJoint584.addChildren(&HAnimSegment585);

HAnimJoint& HAnimJoint597 =  HAnimJoint();
HAnimJoint597.X3DNode::setName(CString("r_tarsometatarsal_4"));
HAnimJoint597.setDEF(CString("hanim_r_tarsometatarsal_4"));
HAnimJoint597.setCenter(new float[]{-4.7255,0.0211,2.1725});
HAnimJoint597.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint597.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment598 =  HAnimSegment();
HAnimSegment598.X3DNode::setName(CString("r_metatarsal_4"));
HAnimSegment598.setDEF(CString("hanim_r_metatarsal_4"));
Transform& Transform599 =  Transform();
Transform599.setTranslation(new float[]{-4.7255,0.0211,2.1725});
Transform& Transform600 =  Transform();
//Empty Transform
Shape& Shape601 =  Shape();
Shape601.setUSE(CString("HAnimJointShape"));
Transform600.addChild(&Shape601);

Transform599.addChild(&Transform600);

HAnimSegment598.addChild(&Transform599);

Shape& Shape602 =  Shape();
LineSet& LineSet603 =  LineSet();
LineSet603.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate604 =  Coordinate();
Coordinate604.setPoint(new float[]{-4.7255,0.0211,2.1725,-4.8755,0.0076,4.5165}, 6);
LineSet603.setCoord(Coordinate604);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA& ColorRGBA605 =  ColorRGBA();
ColorRGBA605.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet603.addChild(&ColorRGBA605);

Shape602.setGeometry(&LineSet603);

HAnimSegment598.addChild(&Shape602);

HAnimJoint597.addChildren(&HAnimSegment598);

HAnimJoint& HAnimJoint606 =  HAnimJoint();
HAnimJoint606.X3DNode::setName(CString("r_metatarsophalangeal_4"));
HAnimJoint606.setDEF(CString("hanim_r_metatarsophalangeal_4"));
HAnimJoint606.setCenter(new float[]{-4.8755,0.0076,4.5165});
HAnimJoint606.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint606.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment607 =  HAnimSegment();
HAnimSegment607.X3DNode::setName(CString("r_tarsal_proximal_phalanx_4"));
HAnimSegment607.setDEF(CString("hanim_r_tarsal_proximal_phalanx_4"));
Transform& Transform608 =  Transform();
Transform608.setTranslation(new float[]{-4.8755,0.0076,4.5165});
Transform& Transform609 =  Transform();
//Empty Transform
Shape& Shape610 =  Shape();
Shape610.setUSE(CString("HAnimJointShape"));
Transform609.addChild(&Shape610);

Transform608.addChild(&Transform609);

HAnimSegment607.addChild(&Transform608);

Shape& Shape611 =  Shape();
LineSet& LineSet612 =  LineSet();
LineSet612.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate613 =  Coordinate();
Coordinate613.setPoint(new float[]{-4.8755,0.0076,4.5165,-5.0655,0.0049,5.1895}, 6);
LineSet612.setCoord(Coordinate613);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA614 =  ColorRGBA();
ColorRGBA614.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet612.addChild(&ColorRGBA614);

Shape611.setGeometry(&LineSet612);

HAnimSegment607.addChild(&Shape611);

HAnimJoint606.addChildren(&HAnimSegment607);

HAnimJoint& HAnimJoint615 =  HAnimJoint();
HAnimJoint615.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_4"));
HAnimJoint615.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimJoint615.setCenter(new float[]{-5.0655,0.0049,5.1895});
HAnimJoint615.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint615.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment616 =  HAnimSegment();
HAnimSegment616.X3DNode::setName(CString("r_tarsal_middle_phalanx_4"));
HAnimSegment616.setDEF(CString("hanim_r_tarsal_middle_phalanx_4"));
Transform& Transform617 =  Transform();
Transform617.setTranslation(new float[]{-5.0655,0.0049,5.1895});
Transform& Transform618 =  Transform();
//Empty Transform
Shape& Shape619 =  Shape();
Shape619.setUSE(CString("HAnimJointShape"));
Transform618.addChild(&Shape619);

Transform617.addChild(&Transform618);

HAnimSegment616.addChild(&Transform617);

Shape& Shape620 =  Shape();
LineSet& LineSet621 =  LineSet();
LineSet621.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate622 =  Coordinate();
Coordinate622.setPoint(new float[]{-5.0655,0.0049,5.1895,-5.1335,0.0011,5.5175}, 6);
LineSet621.setCoord(Coordinate622);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA623 =  ColorRGBA();
ColorRGBA623.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet621.addChild(&ColorRGBA623);

Shape620.setGeometry(&LineSet621);

HAnimSegment616.addChild(&Shape620);

HAnimSite& HAnimSite624 =  HAnimSite();
HAnimSite624.X3DNode::setName(CString("r_tarsal_distal_phalanx_4_tip"));
HAnimSite624.setDEF(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor625 =  TouchSensor();
TouchSensor625.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_4_tip"));
HAnimSite624.addChild(&TouchSensor625);

Shape& Shape626 =  Shape();
Shape626.setUSE(CString("HAnimSiteShape"));
HAnimSite624.addChild(&Shape626);

HAnimSegment616.addChild(&HAnimSite624);

HAnimJoint615.addChildren(&HAnimSegment616);

HAnimJoint& HAnimJoint627 =  HAnimJoint();
HAnimJoint627.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_4"));
HAnimJoint627.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimJoint627.setCenter(new float[]{-5.1335,0.0011,5.5175});
HAnimJoint627.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint627.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint615.addChildren(&HAnimJoint627);

HAnimJoint606.addChildren(&HAnimJoint615);

HAnimJoint597.addChildren(&HAnimJoint606);

HAnimJoint584.addChildren(&HAnimJoint597);

HAnimJoint& HAnimJoint628 =  HAnimJoint();
HAnimJoint628.X3DNode::setName(CString("r_tarsometatarsal_5"));
HAnimJoint628.setDEF(CString("hanim_r_tarsometatarsal_5"));
HAnimJoint628.setCenter(new float[]{-5.3615,0.0164,2.0085});
HAnimJoint628.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint628.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment629 =  HAnimSegment();
HAnimSegment629.X3DNode::setName(CString("r_metatarsal_5"));
HAnimSegment629.setDEF(CString("hanim_r_metatarsal_5"));
Transform& Transform630 =  Transform();
Transform630.setTranslation(new float[]{-5.3615,0.0164,2.0085});
Transform& Transform631 =  Transform();
//Empty Transform
Shape& Shape632 =  Shape();
Shape632.setUSE(CString("HAnimJointShape"));
Transform631.addChild(&Shape632);

Transform630.addChild(&Transform631);

HAnimSegment629.addChild(&Transform630);

Shape& Shape633 =  Shape();
LineSet& LineSet634 =  LineSet();
LineSet634.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate635 =  Coordinate();
Coordinate635.setPoint(new float[]{-5.3615,0.0164,2.0085,-5.5055,0.0067,4.3115}, 6);
LineSet634.setCoord(Coordinate635);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA& ColorRGBA636 =  ColorRGBA();
ColorRGBA636.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet634.addChild(&ColorRGBA636);

Shape633.setGeometry(&LineSet634);

HAnimSegment629.addChild(&Shape633);

HAnimSite& HAnimSite637 =  HAnimSite();
HAnimSite637.X3DNode::setName(CString("r_metatarsal_phalanx_5_pt"));
HAnimSite637.setDEF(CString("hanim_r_metatarsal_phalanx_5_pt"));
TouchSensor& TouchSensor638 =  TouchSensor();
TouchSensor638.setDescription(CString("HAnimSite r_metatarsal_phalanx_5_pt"));
HAnimSite637.addChild(&TouchSensor638);

Shape& Shape639 =  Shape();
Shape639.setUSE(CString("HAnimSiteShape"));
HAnimSite637.addChild(&Shape639);

HAnimSegment629.addChild(&HAnimSite637);

HAnimJoint628.addChildren(&HAnimSegment629);

HAnimJoint& HAnimJoint640 =  HAnimJoint();
HAnimJoint640.X3DNode::setName(CString("r_metatarsophalangeal_5"));
HAnimJoint640.setDEF(CString("hanim_r_metatarsophalangeal_5"));
HAnimJoint640.setCenter(new float[]{-5.5055,0.0067,4.3115});
HAnimJoint640.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint640.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment641 =  HAnimSegment();
HAnimSegment641.X3DNode::setName(CString("r_tarsal_proximal_phalanx_5"));
HAnimSegment641.setDEF(CString("hanim_r_tarsal_proximal_phalanx_5"));
Transform& Transform642 =  Transform();
Transform642.setTranslation(new float[]{-5.5055,0.0067,4.3115});
Transform& Transform643 =  Transform();
//Empty Transform
Shape& Shape644 =  Shape();
Shape644.setUSE(CString("HAnimJointShape"));
Transform643.addChild(&Shape644);

Transform642.addChild(&Transform643);

HAnimSegment641.addChild(&Transform642);

Shape& Shape645 =  Shape();
LineSet& LineSet646 =  LineSet();
LineSet646.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate647 =  Coordinate();
Coordinate647.setPoint(new float[]{-5.5055,0.0067,4.3115,-5.6085,0.003,4.6485}, 6);
LineSet646.setCoord(Coordinate647);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA648 =  ColorRGBA();
ColorRGBA648.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet646.addChild(&ColorRGBA648);

Shape645.setGeometry(&LineSet646);

HAnimSegment641.addChild(&Shape645);

HAnimJoint640.addChildren(&HAnimSegment641);

HAnimJoint& HAnimJoint649 =  HAnimJoint();
HAnimJoint649.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_5"));
HAnimJoint649.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimJoint649.setCenter(new float[]{-5.6085,0.003,4.6485});
HAnimJoint649.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint649.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment650 =  HAnimSegment();
HAnimSegment650.X3DNode::setName(CString("r_tarsal_middle_phalanx_5"));
HAnimSegment650.setDEF(CString("hanim_r_tarsal_middle_phalanx_5"));
Transform& Transform651 =  Transform();
Transform651.setTranslation(new float[]{-5.6085,0.003,4.6485});
Transform& Transform652 =  Transform();
//Empty Transform
Shape& Shape653 =  Shape();
Shape653.setUSE(CString("HAnimJointShape"));
Transform652.addChild(&Shape653);

Transform651.addChild(&Transform652);

HAnimSegment650.addChild(&Transform651);

Shape& Shape654 =  Shape();
LineSet& LineSet655 =  LineSet();
LineSet655.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate656 =  Coordinate();
Coordinate656.setPoint(new float[]{-5.6085,0.003,4.6485,-5.6495,0,4.9925}, 6);
LineSet655.setCoord(Coordinate656);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA657 =  ColorRGBA();
ColorRGBA657.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet655.addChild(&ColorRGBA657);

Shape654.setGeometry(&LineSet655);

HAnimSegment650.addChild(&Shape654);

HAnimSite& HAnimSite658 =  HAnimSite();
HAnimSite658.X3DNode::setName(CString("r_tarsal_distal_phalanx_5_tip"));
HAnimSite658.setDEF(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor659 =  TouchSensor();
TouchSensor659.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_5_tip"));
HAnimSite658.addChild(&TouchSensor659);

Shape& Shape660 =  Shape();
Shape660.setUSE(CString("HAnimSiteShape"));
HAnimSite658.addChild(&Shape660);

HAnimSegment650.addChild(&HAnimSite658);

HAnimJoint649.addChildren(&HAnimSegment650);

HAnimJoint& HAnimJoint661 =  HAnimJoint();
HAnimJoint661.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_5"));
HAnimJoint661.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimJoint661.setCenter(new float[]{-5.6495,0,4.9925});
HAnimJoint661.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint661.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint649.addChildren(&HAnimJoint661);

HAnimJoint640.addChildren(&HAnimJoint649);

HAnimJoint628.addChildren(&HAnimJoint640);

HAnimJoint584.addChildren(&HAnimJoint628);

HAnimJoint575.addChildren(&HAnimJoint584);

HAnimJoint431.addChildren(&HAnimJoint575);

HAnimJoint416.addChildren(&HAnimJoint431);

HAnimJoint398.addChildren(&HAnimJoint416);

HAnimJoint97.addChildren(&HAnimJoint398);

HAnimJoint45.addChildren(&HAnimJoint97);

HAnimJoint& HAnimJoint662 =  HAnimJoint();
HAnimJoint662.X3DNode::setName(CString("vl5"));
HAnimJoint662.setDEF(CString("hanim_vl5"));
HAnimJoint662.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimJoint662.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint662.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment663 =  HAnimSegment();
HAnimSegment663.X3DNode::setName(CString("l5"));
HAnimSegment663.setDEF(CString("hanim_l5"));
Transform& Transform664 =  Transform();
Transform664.setTranslation(new float[]{0.0028,1.0568,-0.0776});
Transform& Transform665 =  Transform();
//Empty Transform
Shape& Shape666 =  Shape();
Shape666.setUSE(CString("HAnimJointShape"));
Transform665.addChild(&Shape666);

Transform664.addChild(&Transform665);

HAnimSegment663.addChild(&Transform664);

Shape& Shape667 =  Shape();
LineSet& LineSet668 =  LineSet();
LineSet668.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate669 =  Coordinate();
Coordinate669.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
LineSet668.setCoord(Coordinate669);

//from vl5 to vl4 vertices 2
ColorRGBA& ColorRGBA670 =  ColorRGBA();
ColorRGBA670.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet668.addChild(&ColorRGBA670);

Shape667.setGeometry(&LineSet668);

HAnimSegment663.addChild(&Shape667);

HAnimJoint662.addChildren(&HAnimSegment663);

HAnimJoint& HAnimJoint671 =  HAnimJoint();
HAnimJoint671.X3DNode::setName(CString("vl4"));
HAnimJoint671.setDEF(CString("hanim_vl4"));
HAnimJoint671.setCenter(new float[]{0.0035,1.0925,-0.0787});
HAnimJoint671.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint671.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment672 =  HAnimSegment();
HAnimSegment672.X3DNode::setName(CString("l4"));
HAnimSegment672.setDEF(CString("hanim_l4"));
Transform& Transform673 =  Transform();
Transform673.setTranslation(new float[]{0.0035,1.0925,-0.0787});
Transform& Transform674 =  Transform();
//Empty Transform
Shape& Shape675 =  Shape();
Shape675.setUSE(CString("HAnimJointShape"));
Transform674.addChild(&Shape675);

Transform673.addChild(&Transform674);

HAnimSegment672.addChild(&Transform673);

Shape& Shape676 =  Shape();
LineSet& LineSet677 =  LineSet();
LineSet677.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate678 =  Coordinate();
Coordinate678.setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
LineSet677.setCoord(Coordinate678);

//from vl4 to vl3 vertices 2
ColorRGBA& ColorRGBA679 =  ColorRGBA();
ColorRGBA679.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet677.addChild(&ColorRGBA679);

Shape676.setGeometry(&LineSet677);

HAnimSegment672.addChild(&Shape676);

HAnimJoint671.addChildren(&HAnimSegment672);

HAnimJoint& HAnimJoint680 =  HAnimJoint();
HAnimJoint680.X3DNode::setName(CString("vl3"));
HAnimJoint680.setDEF(CString("hanim_vl3"));
HAnimJoint680.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimJoint680.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint680.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment681 =  HAnimSegment();
HAnimSegment681.X3DNode::setName(CString("l3"));
HAnimSegment681.setDEF(CString("hanim_l3"));
Transform& Transform682 =  Transform();
Transform682.setTranslation(new float[]{0.0041,1.1276,-0.0796});
Transform& Transform683 =  Transform();
//Empty Transform
Shape& Shape684 =  Shape();
Shape684.setUSE(CString("HAnimJointShape"));
Transform683.addChild(&Shape684);

Transform682.addChild(&Transform683);

HAnimSegment681.addChild(&Transform682);

Shape& Shape685 =  Shape();
LineSet& LineSet686 =  LineSet();
LineSet686.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate687 =  Coordinate();
Coordinate687.setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
LineSet686.setCoord(Coordinate687);

//from vl3 to vl2 vertices 2
ColorRGBA& ColorRGBA688 =  ColorRGBA();
ColorRGBA688.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet686.addChild(&ColorRGBA688);

Shape685.setGeometry(&LineSet686);

HAnimSegment681.addChild(&Shape685);

HAnimSite& HAnimSite689 =  HAnimSite();
HAnimSite689.X3DNode::setName(CString("l_rib10_pt"));
HAnimSite689.setDEF(CString("hanim_l_rib10_pt"));
HAnimSite689.setTranslation(new float[]{0.0871,1.1925,0.0992});
TouchSensor& TouchSensor690 =  TouchSensor();
TouchSensor690.setDescription(CString("HAnimSite l_rib10_pt"));
HAnimSite689.addChild(&TouchSensor690);

Shape& Shape691 =  Shape();
Shape691.setUSE(CString("HAnimSiteShape"));
HAnimSite689.addChild(&Shape691);

HAnimSegment681.addChild(&HAnimSite689);

HAnimSite& HAnimSite692 =  HAnimSite();
HAnimSite692.X3DNode::setName(CString("r_rib10_pt"));
HAnimSite692.setDEF(CString("hanim_r_rib10_pt"));
HAnimSite692.setTranslation(new float[]{-0.0711,1.1941,0.1016});
TouchSensor& TouchSensor693 =  TouchSensor();
TouchSensor693.setDescription(CString("HAnimSite r_rib10_pt"));
HAnimSite692.addChild(&TouchSensor693);

Shape& Shape694 =  Shape();
Shape694.setUSE(CString("HAnimSiteShape"));
HAnimSite692.addChild(&Shape694);

HAnimSegment681.addChild(&HAnimSite692);

HAnimSite& HAnimSite695 =  HAnimSite();
HAnimSite695.X3DNode::setName(CString("spine_2_middle_back_pt"));
HAnimSite695.setDEF(CString("hanim_spine_2_middle_back_pt"));
TouchSensor& TouchSensor696 =  TouchSensor();
TouchSensor696.setDescription(CString("HAnimSite spine_2_middle_back_pt"));
HAnimSite695.addChild(&TouchSensor696);

Shape& Shape697 =  Shape();
Shape697.setUSE(CString("HAnimSiteShape"));
HAnimSite695.addChild(&Shape697);

HAnimSegment681.addChild(&HAnimSite695);

HAnimJoint680.addChildren(&HAnimSegment681);

HAnimJoint& HAnimJoint698 =  HAnimJoint();
HAnimJoint698.X3DNode::setName(CString("vl2"));
HAnimJoint698.setDEF(CString("hanim_vl2"));
HAnimJoint698.setCenter(new float[]{0.0045,1.1546,-0.08});
HAnimJoint698.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint698.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment699 =  HAnimSegment();
HAnimSegment699.X3DNode::setName(CString("l2"));
HAnimSegment699.setDEF(CString("hanim_l2"));
Transform& Transform700 =  Transform();
Transform700.setTranslation(new float[]{0.0045,1.1546,-0.08});
Transform& Transform701 =  Transform();
//Empty Transform
Shape& Shape702 =  Shape();
Shape702.setUSE(CString("HAnimJointShape"));
Transform701.addChild(&Shape702);

Transform700.addChild(&Transform701);

HAnimSegment699.addChild(&Transform700);

Shape& Shape703 =  Shape();
LineSet& LineSet704 =  LineSet();
LineSet704.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate705 =  Coordinate();
Coordinate705.setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
LineSet704.setCoord(Coordinate705);

//from vl2 to vl1 vertices 2
ColorRGBA& ColorRGBA706 =  ColorRGBA();
ColorRGBA706.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet704.addChild(&ColorRGBA706);

Shape703.setGeometry(&LineSet704);

HAnimSegment699.addChild(&Shape703);

HAnimJoint698.addChildren(&HAnimSegment699);

HAnimJoint& HAnimJoint707 =  HAnimJoint();
HAnimJoint707.X3DNode::setName(CString("vl1"));
HAnimJoint707.setDEF(CString("hanim_vl1"));
HAnimJoint707.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimJoint707.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint707.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment708 =  HAnimSegment();
HAnimSegment708.X3DNode::setName(CString("l1"));
HAnimSegment708.setDEF(CString("hanim_l1"));
Transform& Transform709 =  Transform();
Transform709.setTranslation(new float[]{0.0048,1.1912,-0.0805});
Transform& Transform710 =  Transform();
//Empty Transform
Shape& Shape711 =  Shape();
Shape711.setUSE(CString("HAnimJointShape"));
Transform710.addChild(&Shape711);

Transform709.addChild(&Transform710);

HAnimSegment708.addChild(&Transform709);

Shape& Shape712 =  Shape();
LineSet& LineSet713 =  LineSet();
LineSet713.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate714 =  Coordinate();
Coordinate714.setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
LineSet713.setCoord(Coordinate714);

//from vl1 to vt12 vertices 2
ColorRGBA& ColorRGBA715 =  ColorRGBA();
ColorRGBA715.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet713.addChild(&ColorRGBA715);

Shape712.setGeometry(&LineSet713);

HAnimSegment708.addChild(&Shape712);

HAnimJoint707.addChildren(&HAnimSegment708);

HAnimJoint& HAnimJoint716 =  HAnimJoint();
HAnimJoint716.X3DNode::setName(CString("vt12"));
HAnimJoint716.setDEF(CString("hanim_vt12"));
HAnimJoint716.setCenter(new float[]{0.0051,1.2278,-0.0808});
HAnimJoint716.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint716.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment717 =  HAnimSegment();
HAnimSegment717.X3DNode::setName(CString("t12"));
HAnimSegment717.setDEF(CString("hanim_t12"));
Transform& Transform718 =  Transform();
Transform718.setTranslation(new float[]{0.0051,1.2278,-0.0808});
Transform& Transform719 =  Transform();
//Empty Transform
Shape& Shape720 =  Shape();
Shape720.setUSE(CString("HAnimJointShape"));
Transform719.addChild(&Shape720);

Transform718.addChild(&Transform719);

HAnimSegment717.addChild(&Transform718);

Shape& Shape721 =  Shape();
LineSet& LineSet722 =  LineSet();
LineSet722.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate723 =  Coordinate();
Coordinate723.setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
LineSet722.setCoord(Coordinate723);

//from vt12 to vt11 vertices 2
ColorRGBA& ColorRGBA724 =  ColorRGBA();
ColorRGBA724.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet722.addChild(&ColorRGBA724);

Shape721.setGeometry(&LineSet722);

HAnimSegment717.addChild(&Shape721);

HAnimJoint716.addChildren(&HAnimSegment717);

HAnimJoint& HAnimJoint725 =  HAnimJoint();
HAnimJoint725.X3DNode::setName(CString("vt11"));
HAnimJoint725.setDEF(CString("hanim_vt11"));
HAnimJoint725.setCenter(new float[]{0.0053,1.2679,-0.081});
HAnimJoint725.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint725.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment726 =  HAnimSegment();
HAnimSegment726.X3DNode::setName(CString("t11"));
HAnimSegment726.setDEF(CString("hanim_t11"));
Transform& Transform727 =  Transform();
Transform727.setTranslation(new float[]{0.0053,1.2679,-0.081});
Transform& Transform728 =  Transform();
//Empty Transform
Shape& Shape729 =  Shape();
Shape729.setUSE(CString("HAnimJointShape"));
Transform728.addChild(&Shape729);

Transform727.addChild(&Transform728);

HAnimSegment726.addChild(&Transform727);

Shape& Shape730 =  Shape();
LineSet& LineSet731 =  LineSet();
LineSet731.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate732 =  Coordinate();
Coordinate732.setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
LineSet731.setCoord(Coordinate732);

//from vt11 to vt10 vertices 2
ColorRGBA& ColorRGBA733 =  ColorRGBA();
ColorRGBA733.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet731.addChild(&ColorRGBA733);

Shape730.setGeometry(&LineSet731);

HAnimSegment726.addChild(&Shape730);

HAnimSite& HAnimSite734 =  HAnimSite();
HAnimSite734.X3DNode::setName(CString("substernale_pt"));
HAnimSite734.setDEF(CString("hanim_substernale_pt"));
HAnimSite734.setTranslation(new float[]{0.0085,1.2995,0.1147});
TouchSensor& TouchSensor735 =  TouchSensor();
TouchSensor735.setDescription(CString("HAnimSite substernale_pt"));
HAnimSite734.addChild(&TouchSensor735);

Shape& Shape736 =  Shape();
Shape736.setUSE(CString("HAnimSiteShape"));
HAnimSite734.addChild(&Shape736);

HAnimSegment726.addChild(&HAnimSite734);

HAnimJoint725.addChildren(&HAnimSegment726);

HAnimJoint& HAnimJoint737 =  HAnimJoint();
HAnimJoint737.X3DNode::setName(CString("vt10"));
HAnimJoint737.setDEF(CString("hanim_vt10"));
HAnimJoint737.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimJoint737.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint737.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment738 =  HAnimSegment();
HAnimSegment738.X3DNode::setName(CString("t10"));
HAnimSegment738.setDEF(CString("hanim_t10"));
Transform& Transform739 =  Transform();
Transform739.setTranslation(new float[]{0.0056,1.2848,-0.0822});
Transform& Transform740 =  Transform();
//Empty Transform
Shape& Shape741 =  Shape();
Shape741.setUSE(CString("HAnimJointShape"));
Transform740.addChild(&Shape741);

Transform739.addChild(&Transform740);

HAnimSegment738.addChild(&Transform739);

Shape& Shape742 =  Shape();
LineSet& LineSet743 =  LineSet();
LineSet743.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate744 =  Coordinate();
Coordinate744.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
LineSet743.setCoord(Coordinate744);

//from vt10 to vt9 vertices 2
ColorRGBA& ColorRGBA745 =  ColorRGBA();
ColorRGBA745.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet743.addChild(&ColorRGBA745);

Shape742.setGeometry(&LineSet743);

HAnimSegment738.addChild(&Shape742);

HAnimSite& HAnimSite746 =  HAnimSite();
HAnimSite746.X3DNode::setName(CString("l_thelion_pt"));
HAnimSite746.setDEF(CString("hanim_l_thelion_pt"));
HAnimSite746.setTranslation(new float[]{0.0918,1.3382,0.1192});
TouchSensor& TouchSensor747 =  TouchSensor();
TouchSensor747.setDescription(CString("HAnimSite l_thelion_pt"));
HAnimSite746.addChild(&TouchSensor747);

Shape& Shape748 =  Shape();
Shape748.setUSE(CString("HAnimSiteShape"));
HAnimSite746.addChild(&Shape748);

HAnimSegment738.addChild(&HAnimSite746);

HAnimSite& HAnimSite749 =  HAnimSite();
HAnimSite749.X3DNode::setName(CString("r_thelion_pt"));
HAnimSite749.setDEF(CString("hanim_r_thelion_pt"));
HAnimSite749.setTranslation(new float[]{-0.0736,1.3385,0.1217});
TouchSensor& TouchSensor750 =  TouchSensor();
TouchSensor750.setDescription(CString("HAnimSite r_thelion_pt"));
HAnimSite749.addChild(&TouchSensor750);

Shape& Shape751 =  Shape();
Shape751.setUSE(CString("HAnimSiteShape"));
HAnimSite749.addChild(&Shape751);

HAnimSegment738.addChild(&HAnimSite749);

HAnimJoint737.addChildren(&HAnimSegment738);

HAnimJoint& HAnimJoint752 =  HAnimJoint();
HAnimJoint752.X3DNode::setName(CString("vt9"));
HAnimJoint752.setDEF(CString("hanim_vt9"));
HAnimJoint752.setCenter(new float[]{0.0057,1.3126,-0.0838});
HAnimJoint752.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint752.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment753 =  HAnimSegment();
HAnimSegment753.X3DNode::setName(CString("t9"));
HAnimSegment753.setDEF(CString("hanim_t9"));
Transform& Transform754 =  Transform();
Transform754.setTranslation(new float[]{0.0057,1.3126,-0.0838});
Transform& Transform755 =  Transform();
//Empty Transform
Shape& Shape756 =  Shape();
Shape756.setUSE(CString("HAnimJointShape"));
Transform755.addChild(&Shape756);

Transform754.addChild(&Transform755);

HAnimSegment753.addChild(&Transform754);

Shape& Shape757 =  Shape();
LineSet& LineSet758 =  LineSet();
LineSet758.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate759 =  Coordinate();
Coordinate759.setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
LineSet758.setCoord(Coordinate759);

//from vt9 to vt8 vertices 2
ColorRGBA& ColorRGBA760 =  ColorRGBA();
ColorRGBA760.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet758.addChild(&ColorRGBA760);

Shape757.setGeometry(&LineSet758);

HAnimSegment753.addChild(&Shape757);

HAnimJoint752.addChildren(&HAnimSegment753);

HAnimJoint& HAnimJoint761 =  HAnimJoint();
HAnimJoint761.X3DNode::setName(CString("vt8"));
HAnimJoint761.setDEF(CString("hanim_vt8"));
HAnimJoint761.setCenter(new float[]{0.0057,1.3382,-0.0845});
HAnimJoint761.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint761.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment762 =  HAnimSegment();
HAnimSegment762.X3DNode::setName(CString("t8"));
HAnimSegment762.setDEF(CString("hanim_t8"));
Transform& Transform763 =  Transform();
Transform763.setTranslation(new float[]{0.0057,1.3382,-0.0845});
Transform& Transform764 =  Transform();
//Empty Transform
Shape& Shape765 =  Shape();
Shape765.setUSE(CString("HAnimJointShape"));
Transform764.addChild(&Shape765);

Transform763.addChild(&Transform764);

HAnimSegment762.addChild(&Transform763);

Shape& Shape766 =  Shape();
LineSet& LineSet767 =  LineSet();
LineSet767.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate768 =  Coordinate();
Coordinate768.setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
LineSet767.setCoord(Coordinate768);

//from vt8 to vt7 vertices 2
ColorRGBA& ColorRGBA769 =  ColorRGBA();
ColorRGBA769.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet767.addChild(&ColorRGBA769);

Shape766.setGeometry(&LineSet767);

HAnimSegment762.addChild(&Shape766);

HAnimJoint761.addChildren(&HAnimSegment762);

HAnimJoint& HAnimJoint770 =  HAnimJoint();
HAnimJoint770.X3DNode::setName(CString("vt7"));
HAnimJoint770.setDEF(CString("hanim_vt7"));
HAnimJoint770.setCenter(new float[]{0.0058,1.3625,-0.0833});
HAnimJoint770.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint770.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment771 =  HAnimSegment();
HAnimSegment771.X3DNode::setName(CString("t7"));
HAnimSegment771.setDEF(CString("hanim_t7"));
Transform& Transform772 =  Transform();
Transform772.setTranslation(new float[]{0.0058,1.3625,-0.0833});
Transform& Transform773 =  Transform();
//Empty Transform
Shape& Shape774 =  Shape();
Shape774.setUSE(CString("HAnimJointShape"));
Transform773.addChild(&Shape774);

Transform772.addChild(&Transform773);

HAnimSegment771.addChild(&Transform772);

Shape& Shape775 =  Shape();
LineSet& LineSet776 =  LineSet();
LineSet776.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate777 =  Coordinate();
Coordinate777.setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
LineSet776.setCoord(Coordinate777);

//from vt7 to vt6 vertices 2
ColorRGBA& ColorRGBA778 =  ColorRGBA();
ColorRGBA778.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet776.addChild(&ColorRGBA778);

Shape775.setGeometry(&LineSet776);

HAnimSegment771.addChild(&Shape775);

HAnimSite& HAnimSite779 =  HAnimSite();
HAnimSite779.X3DNode::setName(CString("l_chest_midsagittal_plane_pt"));
HAnimSite779.setDEF(CString("hanim_l_chest_midsagittal_plane_pt"));
TouchSensor& TouchSensor780 =  TouchSensor();
TouchSensor780.setDescription(CString("HAnimSite l_chest_midsagittal_plane_pt"));
HAnimSite779.addChild(&TouchSensor780);

Shape& Shape781 =  Shape();
Shape781.setUSE(CString("HAnimSiteShape"));
HAnimSite779.addChild(&Shape781);

HAnimSegment771.addChild(&HAnimSite779);

HAnimSite& HAnimSite782 =  HAnimSite();
HAnimSite782.X3DNode::setName(CString("mesosternale_pt"));
HAnimSite782.setDEF(CString("hanim_mesosternale_pt"));
TouchSensor& TouchSensor783 =  TouchSensor();
TouchSensor783.setDescription(CString("HAnimSite mesosternale_pt"));
HAnimSite782.addChild(&TouchSensor783);

Shape& Shape784 =  Shape();
Shape784.setUSE(CString("HAnimSiteShape"));
HAnimSite782.addChild(&Shape784);

HAnimSegment771.addChild(&HAnimSite782);

HAnimSite& HAnimSite785 =  HAnimSite();
HAnimSite785.X3DNode::setName(CString("r_chest_midsagittal_plane_pt"));
HAnimSite785.setDEF(CString("hanim_r_chest_midsagittal_plane_pt"));
TouchSensor& TouchSensor786 =  TouchSensor();
TouchSensor786.setDescription(CString("HAnimSite r_chest_midsagittal_plane_pt"));
HAnimSite785.addChild(&TouchSensor786);

Shape& Shape787 =  Shape();
Shape787.setUSE(CString("HAnimSiteShape"));
HAnimSite785.addChild(&Shape787);

HAnimSegment771.addChild(&HAnimSite785);

HAnimSite& HAnimSite788 =  HAnimSite();
HAnimSite788.X3DNode::setName(CString("rear_center_midsagittal_plane_pt"));
HAnimSite788.setDEF(CString("hanim_rear_center_midsagittal_plane_pt"));
TouchSensor& TouchSensor789 =  TouchSensor();
TouchSensor789.setDescription(CString("HAnimSite rear_center_midsagittal_plane_pt"));
HAnimSite788.addChild(&TouchSensor789);

Shape& Shape790 =  Shape();
Shape790.setUSE(CString("HAnimSiteShape"));
HAnimSite788.addChild(&Shape790);

HAnimSegment771.addChild(&HAnimSite788);

HAnimJoint770.addChildren(&HAnimSegment771);

HAnimJoint& HAnimJoint791 =  HAnimJoint();
HAnimJoint791.X3DNode::setName(CString("vt6"));
HAnimJoint791.setDEF(CString("hanim_vt6"));
HAnimJoint791.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimJoint791.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint791.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment792 =  HAnimSegment();
HAnimSegment792.X3DNode::setName(CString("t6"));
HAnimSegment792.setDEF(CString("hanim_t6"));
Transform& Transform793 =  Transform();
Transform793.setTranslation(new float[]{0.0059,1.3866,-0.08});
Transform& Transform794 =  Transform();
//Empty Transform
Shape& Shape795 =  Shape();
Shape795.setUSE(CString("HAnimJointShape"));
Transform794.addChild(&Shape795);

Transform793.addChild(&Transform794);

HAnimSegment792.addChild(&Transform793);

Shape& Shape796 =  Shape();
LineSet& LineSet797 =  LineSet();
LineSet797.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate798 =  Coordinate();
Coordinate798.setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
LineSet797.setCoord(Coordinate798);

//from vt6 to vt5 vertices 2
ColorRGBA& ColorRGBA799 =  ColorRGBA();
ColorRGBA799.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet797.addChild(&ColorRGBA799);

Shape796.setGeometry(&LineSet797);

HAnimSegment792.addChild(&Shape796);

HAnimSite& HAnimSite800 =  HAnimSite();
HAnimSite800.X3DNode::setName(CString("spine_1_middle_back_pt"));
HAnimSite800.setDEF(CString("hanim_spine_1_middle_back_pt"));
TouchSensor& TouchSensor801 =  TouchSensor();
TouchSensor801.setDescription(CString("HAnimSite spine_1_middle_back_pt"));
HAnimSite800.addChild(&TouchSensor801);

Shape& Shape802 =  Shape();
Shape802.setUSE(CString("HAnimSiteShape"));
HAnimSite800.addChild(&Shape802);

HAnimSegment792.addChild(&HAnimSite800);

HAnimJoint791.addChildren(&HAnimSegment792);

HAnimJoint& HAnimJoint803 =  HAnimJoint();
HAnimJoint803.X3DNode::setName(CString("vt5"));
HAnimJoint803.setDEF(CString("hanim_vt5"));
HAnimJoint803.setCenter(new float[]{0.006,1.4102,-0.0745});
HAnimJoint803.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint803.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment804 =  HAnimSegment();
HAnimSegment804.X3DNode::setName(CString("t5"));
HAnimSegment804.setDEF(CString("hanim_t5"));
Transform& Transform805 =  Transform();
Transform805.setTranslation(new float[]{0.006,1.4102,-0.0745});
Transform& Transform806 =  Transform();
//Empty Transform
Shape& Shape807 =  Shape();
Shape807.setUSE(CString("HAnimJointShape"));
Transform806.addChild(&Shape807);

Transform805.addChild(&Transform806);

HAnimSegment804.addChild(&Transform805);

Shape& Shape808 =  Shape();
LineSet& LineSet809 =  LineSet();
LineSet809.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate810 =  Coordinate();
Coordinate810.setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
LineSet809.setCoord(Coordinate810);

//from vt5 to vt4 vertices 2
ColorRGBA& ColorRGBA811 =  ColorRGBA();
ColorRGBA811.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet809.addChild(&ColorRGBA811);

Shape808.setGeometry(&LineSet809);

HAnimSegment804.addChild(&Shape808);

HAnimJoint803.addChildren(&HAnimSegment804);

HAnimJoint& HAnimJoint812 =  HAnimJoint();
HAnimJoint812.X3DNode::setName(CString("vt4"));
HAnimJoint812.setDEF(CString("hanim_vt4"));
HAnimJoint812.setCenter(new float[]{0.0061,1.432,-0.0675});
HAnimJoint812.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint812.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment813 =  HAnimSegment();
HAnimSegment813.X3DNode::setName(CString("t4"));
HAnimSegment813.setDEF(CString("hanim_t4"));
Transform& Transform814 =  Transform();
Transform814.setTranslation(new float[]{0.0061,1.432,-0.0675});
Transform& Transform815 =  Transform();
//Empty Transform
Shape& Shape816 =  Shape();
Shape816.setUSE(CString("HAnimJointShape"));
Transform815.addChild(&Shape816);

Transform814.addChild(&Transform815);

HAnimSegment813.addChild(&Transform814);

Shape& Shape817 =  Shape();
LineSet& LineSet818 =  LineSet();
LineSet818.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate819 =  Coordinate();
Coordinate819.setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
LineSet818.setCoord(Coordinate819);

//from vt4 to vt3 vertices 2
ColorRGBA& ColorRGBA820 =  ColorRGBA();
ColorRGBA820.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet818.addChild(&ColorRGBA820);

Shape817.setGeometry(&LineSet818);

HAnimSegment813.addChild(&Shape817);

HAnimJoint812.addChildren(&HAnimSegment813);

HAnimJoint& HAnimJoint821 =  HAnimJoint();
HAnimJoint821.X3DNode::setName(CString("vt3"));
HAnimJoint821.setDEF(CString("hanim_vt3"));
HAnimJoint821.setCenter(new float[]{0.0062,1.4583,-0.057});
HAnimJoint821.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint821.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment822 =  HAnimSegment();
HAnimSegment822.X3DNode::setName(CString("t3"));
HAnimSegment822.setDEF(CString("hanim_t3"));
Transform& Transform823 =  Transform();
Transform823.setTranslation(new float[]{0.0062,1.4583,-0.057});
Transform& Transform824 =  Transform();
//Empty Transform
Shape& Shape825 =  Shape();
Shape825.setUSE(CString("HAnimJointShape"));
Transform824.addChild(&Shape825);

Transform823.addChild(&Transform824);

HAnimSegment822.addChild(&Transform823);

Shape& Shape826 =  Shape();
LineSet& LineSet827 =  LineSet();
LineSet827.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate828 =  Coordinate();
Coordinate828.setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
LineSet827.setCoord(Coordinate828);

//from vt3 to vt2 vertices 2
ColorRGBA& ColorRGBA829 =  ColorRGBA();
ColorRGBA829.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet827.addChild(&ColorRGBA829);

Shape826.setGeometry(&LineSet827);

HAnimSegment822.addChild(&Shape826);

HAnimJoint821.addChildren(&HAnimSegment822);

HAnimJoint& HAnimJoint830 =  HAnimJoint();
HAnimJoint830.X3DNode::setName(CString("vt2"));
HAnimJoint830.setDEF(CString("hanim_vt2"));
HAnimJoint830.setCenter(new float[]{0.0063,1.4761,-0.0484});
HAnimJoint830.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint830.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment831 =  HAnimSegment();
HAnimSegment831.X3DNode::setName(CString("t2"));
HAnimSegment831.setDEF(CString("hanim_t2"));
Transform& Transform832 =  Transform();
Transform832.setTranslation(new float[]{0.0063,1.4761,-0.0484});
Transform& Transform833 =  Transform();
//Empty Transform
Shape& Shape834 =  Shape();
Shape834.setUSE(CString("HAnimJointShape"));
Transform833.addChild(&Shape834);

Transform832.addChild(&Transform833);

HAnimSegment831.addChild(&Transform832);

Shape& Shape835 =  Shape();
LineSet& LineSet836 =  LineSet();
LineSet836.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate837 =  Coordinate();
Coordinate837.setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
LineSet836.setCoord(Coordinate837);

//from vt2 to vt1 vertices 2
ColorRGBA& ColorRGBA838 =  ColorRGBA();
ColorRGBA838.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet836.addChild(&ColorRGBA838);

Shape835.setGeometry(&LineSet836);

HAnimSegment831.addChild(&Shape835);

HAnimSite& HAnimSite839 =  HAnimSite();
HAnimSite839.X3DNode::setName(CString("cervicale_pt"));
HAnimSite839.setDEF(CString("hanim_cervicale_pt"));
HAnimSite839.setTranslation(new float[]{0.0064,1.52,-0.0815});
TouchSensor& TouchSensor840 =  TouchSensor();
TouchSensor840.setDescription(CString("HAnimSite cervicale_pt"));
HAnimSite839.addChild(&TouchSensor840);

Shape& Shape841 =  Shape();
Shape841.setUSE(CString("HAnimSiteShape"));
HAnimSite839.addChild(&Shape841);

HAnimSegment831.addChild(&HAnimSite839);

HAnimSite& HAnimSite842 =  HAnimSite();
HAnimSite842.X3DNode::setName(CString("suprasternale_pt"));
HAnimSite842.setDEF(CString("hanim_suprasternale_pt"));
HAnimSite842.setTranslation(new float[]{0.0084,1.4714,0.0551});
TouchSensor& TouchSensor843 =  TouchSensor();
TouchSensor843.setDescription(CString("HAnimSite suprasternale_pt"));
HAnimSite842.addChild(&TouchSensor843);

Shape& Shape844 =  Shape();
Shape844.setUSE(CString("HAnimSiteShape"));
HAnimSite842.addChild(&Shape844);

HAnimSegment831.addChild(&HAnimSite842);

HAnimJoint830.addChildren(&HAnimSegment831);

HAnimJoint& HAnimJoint845 =  HAnimJoint();
HAnimJoint845.X3DNode::setName(CString("vt1"));
HAnimJoint845.setDEF(CString("hanim_vt1"));
HAnimJoint845.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimJoint845.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint845.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment846 =  HAnimSegment();
HAnimSegment846.X3DNode::setName(CString("t1"));
HAnimSegment846.setDEF(CString("hanim_t1"));
Transform& Transform847 =  Transform();
Transform847.setTranslation(new float[]{0.0065,1.4951,-0.0387});
Transform& Transform848 =  Transform();
//Empty Transform
Shape& Shape849 =  Shape();
Shape849.setUSE(CString("HAnimJointShape"));
Transform848.addChild(&Shape849);

Transform847.addChild(&Transform848);

HAnimSegment846.addChild(&Transform847);

Shape& Shape850 =  Shape();
LineSet& LineSet851 =  LineSet();
LineSet851.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate852 =  Coordinate();
Coordinate852.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
LineSet851.setCoord(Coordinate852);

//from vt1 to vc7 vertices 2
ColorRGBA& ColorRGBA853 =  ColorRGBA();
ColorRGBA853.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet851.addChild(&ColorRGBA853);

Shape850.setGeometry(&LineSet851);

HAnimSegment846.addChild(&Shape850);

HAnimSite& HAnimSite854 =  HAnimSite();
HAnimSite854.X3DNode::setName(CString("l_neck_base_pt"));
HAnimSite854.setDEF(CString("hanim_l_neck_base_pt"));
HAnimSite854.setTranslation(new float[]{0.0646,1.5141,-0.038});
TouchSensor& TouchSensor855 =  TouchSensor();
TouchSensor855.setDescription(CString("HAnimSite l_neck_base_pt"));
HAnimSite854.addChild(&TouchSensor855);

Shape& Shape856 =  Shape();
Shape856.setUSE(CString("HAnimSiteShape"));
HAnimSite854.addChild(&Shape856);

HAnimSegment846.addChild(&HAnimSite854);

HAnimSite& HAnimSite857 =  HAnimSite();
HAnimSite857.X3DNode::setName(CString("r_neck_base_pt"));
HAnimSite857.setDEF(CString("hanim_r_neck_base_pt"));
HAnimSite857.setTranslation(new float[]{-0.0419,1.5149,-0.022});
TouchSensor& TouchSensor858 =  TouchSensor();
TouchSensor858.setDescription(CString("HAnimSite r_neck_base_pt"));
HAnimSite857.addChild(&TouchSensor858);

Shape& Shape859 =  Shape();
Shape859.setUSE(CString("HAnimSiteShape"));
HAnimSite857.addChild(&Shape859);

HAnimSegment846.addChild(&HAnimSite857);

Shape& Shape860 =  Shape();
LineSet& LineSet861 =  LineSet();
LineSet861.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate862 =  Coordinate();
Coordinate862.setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet861.setCoord(Coordinate862);

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA& ColorRGBA863 =  ColorRGBA();
ColorRGBA863.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet861.addChild(&ColorRGBA863);

Shape860.setGeometry(&LineSet861);

HAnimSegment846.addChild(&Shape860);

HAnimSite& HAnimSite864 =  HAnimSite();
HAnimSite864.X3DNode::setName(CString("l_acromion_pt"));
HAnimSite864.setDEF(CString("hanim_l_acromion_pt"));
HAnimSite864.setTranslation(new float[]{0.2032,1.476,-0.049});
TouchSensor& TouchSensor865 =  TouchSensor();
TouchSensor865.setDescription(CString("HAnimSite l_acromion_pt"));
HAnimSite864.addChild(&TouchSensor865);

Shape& Shape866 =  Shape();
Shape866.setUSE(CString("HAnimSiteShape"));
HAnimSite864.addChild(&Shape866);

HAnimSegment846.addChild(&HAnimSite864);

HAnimSite& HAnimSite867 =  HAnimSite();
HAnimSite867.X3DNode::setName(CString("l_axilla_distal_pt"));
HAnimSite867.setDEF(CString("hanim_l_axilla_distal_pt"));
HAnimSite867.setTranslation(new float[]{0.1706,1.4072,-0.0875});
TouchSensor& TouchSensor868 =  TouchSensor();
TouchSensor868.setDescription(CString("HAnimSite l_axilla_distal_pt"));
HAnimSite867.addChild(&TouchSensor868);

Shape& Shape869 =  Shape();
Shape869.setUSE(CString("HAnimSiteShape"));
HAnimSite867.addChild(&Shape869);

HAnimSegment846.addChild(&HAnimSite867);

HAnimSite& HAnimSite870 =  HAnimSite();
HAnimSite870.X3DNode::setName(CString("l_axilla_posterior_folds_pt"));
HAnimSite870.setDEF(CString("hanim_l_axilla_posterior_folds_pt"));
TouchSensor& TouchSensor871 =  TouchSensor();
TouchSensor871.setDescription(CString("HAnimSite l_axilla_posterior_folds_pt"));
HAnimSite870.addChild(&TouchSensor871);

Shape& Shape872 =  Shape();
Shape872.setUSE(CString("HAnimSiteShape"));
HAnimSite870.addChild(&Shape872);

HAnimSegment846.addChild(&HAnimSite870);

HAnimSite& HAnimSite873 =  HAnimSite();
HAnimSite873.X3DNode::setName(CString("l_axilla_proximal_pt"));
HAnimSite873.setDEF(CString("hanim_l_axilla_proximal_pt"));
HAnimSite873.setTranslation(new float[]{0.1777,1.4065,-0.0075});
TouchSensor& TouchSensor874 =  TouchSensor();
TouchSensor874.setDescription(CString("HAnimSite l_axilla_proximal_pt"));
HAnimSite873.addChild(&TouchSensor874);

Shape& Shape875 =  Shape();
Shape875.setUSE(CString("HAnimSiteShape"));
HAnimSite873.addChild(&Shape875);

HAnimSegment846.addChild(&HAnimSite873);

HAnimSite& HAnimSite876 =  HAnimSite();
HAnimSite876.X3DNode::setName(CString("l_clavicale_pt"));
HAnimSite876.setDEF(CString("hanim_l_clavicale_pt"));
HAnimSite876.setTranslation(new float[]{0.0271,1.4943,0.0394});
TouchSensor& TouchSensor877 =  TouchSensor();
TouchSensor877.setDescription(CString("HAnimSite l_clavicale_pt"));
HAnimSite876.addChild(&TouchSensor877);

Shape& Shape878 =  Shape();
Shape878.setUSE(CString("HAnimSiteShape"));
HAnimSite876.addChild(&Shape878);

HAnimSegment846.addChild(&HAnimSite876);

Shape& Shape879 =  Shape();
LineSet& LineSet880 =  LineSet();
LineSet880.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate881 =  Coordinate();
Coordinate881.setPoint(new float[]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033}, 6);
LineSet880.setCoord(Coordinate881);

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA& ColorRGBA882 =  ColorRGBA();
ColorRGBA882.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet880.addChild(&ColorRGBA882);

Shape879.setGeometry(&LineSet880);

HAnimSegment846.addChild(&Shape879);

HAnimSite& HAnimSite883 =  HAnimSite();
HAnimSite883.X3DNode::setName(CString("r_acromion_pt"));
HAnimSite883.setDEF(CString("hanim_r_acromion_pt"));
HAnimSite883.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
TouchSensor& TouchSensor884 =  TouchSensor();
TouchSensor884.setDescription(CString("HAnimSite r_acromion_pt"));
HAnimSite883.addChild(&TouchSensor884);

Shape& Shape885 =  Shape();
Shape885.setUSE(CString("HAnimSiteShape"));
HAnimSite883.addChild(&Shape885);

HAnimSegment846.addChild(&HAnimSite883);

HAnimSite& HAnimSite886 =  HAnimSite();
HAnimSite886.X3DNode::setName(CString("r_axilla_distal_pt"));
HAnimSite886.setDEF(CString("hanim_r_axilla_distal_pt"));
HAnimSite886.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
TouchSensor& TouchSensor887 =  TouchSensor();
TouchSensor887.setDescription(CString("HAnimSite r_axilla_distal_pt"));
HAnimSite886.addChild(&TouchSensor887);

Shape& Shape888 =  Shape();
Shape888.setUSE(CString("HAnimSiteShape"));
HAnimSite886.addChild(&Shape888);

HAnimSegment846.addChild(&HAnimSite886);

HAnimSite& HAnimSite889 =  HAnimSite();
HAnimSite889.X3DNode::setName(CString("r_axilla_posterior_folds_pt"));
HAnimSite889.setDEF(CString("hanim_r_axilla_posterior_folds_pt"));
TouchSensor& TouchSensor890 =  TouchSensor();
TouchSensor890.setDescription(CString("HAnimSite r_axilla_posterior_folds_pt"));
HAnimSite889.addChild(&TouchSensor890);

Shape& Shape891 =  Shape();
Shape891.setUSE(CString("HAnimSiteShape"));
HAnimSite889.addChild(&Shape891);

HAnimSegment846.addChild(&HAnimSite889);

HAnimSite& HAnimSite892 =  HAnimSite();
HAnimSite892.X3DNode::setName(CString("r_axilla_proximal_pt"));
HAnimSite892.setDEF(CString("hanim_r_axilla_proximal_pt"));
HAnimSite892.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
TouchSensor& TouchSensor893 =  TouchSensor();
TouchSensor893.setDescription(CString("HAnimSite r_axilla_proximal_pt"));
HAnimSite892.addChild(&TouchSensor893);

Shape& Shape894 =  Shape();
Shape894.setUSE(CString("HAnimSiteShape"));
HAnimSite892.addChild(&Shape894);

HAnimSegment846.addChild(&HAnimSite892);

HAnimSite& HAnimSite895 =  HAnimSite();
HAnimSite895.X3DNode::setName(CString("r_clavicale_pt"));
HAnimSite895.setDEF(CString("hanim_r_clavicale_pt"));
HAnimSite895.setTranslation(new float[]{-0.0115,1.4943,0.04});
TouchSensor& TouchSensor896 =  TouchSensor();
TouchSensor896.setDescription(CString("HAnimSite r_clavicale_pt"));
HAnimSite895.addChild(&TouchSensor896);

Shape& Shape897 =  Shape();
Shape897.setUSE(CString("HAnimSiteShape"));
HAnimSite895.addChild(&Shape897);

HAnimSegment846.addChild(&HAnimSite895);

HAnimJoint845.addChildren(&HAnimSegment846);

HAnimJoint& HAnimJoint898 =  HAnimJoint();
HAnimJoint898.X3DNode::setName(CString("vc7"));
HAnimJoint898.setDEF(CString("hanim_vc7"));
HAnimJoint898.setCenter(new float[]{0.0066,1.5132,-0.0301});
HAnimJoint898.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint898.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment899 =  HAnimSegment();
HAnimSegment899.X3DNode::setName(CString("c7"));
HAnimSegment899.setDEF(CString("hanim_c7"));
Transform& Transform900 =  Transform();
Transform900.setTranslation(new float[]{0.0066,1.5132,-0.0301});
Transform& Transform901 =  Transform();
//Empty Transform
Shape& Shape902 =  Shape();
Shape902.setUSE(CString("HAnimJointShape"));
Transform901.addChild(&Shape902);

Transform900.addChild(&Transform901);

HAnimSegment899.addChild(&Transform900);

Shape& Shape903 =  Shape();
LineSet& LineSet904 =  LineSet();
LineSet904.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate905 =  Coordinate();
Coordinate905.setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
LineSet904.setCoord(Coordinate905);

//from vc7 to vc6 vertices 2
ColorRGBA& ColorRGBA906 =  ColorRGBA();
ColorRGBA906.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet904.addChild(&ColorRGBA906);

Shape903.setGeometry(&LineSet904);

HAnimSegment899.addChild(&Shape903);

HAnimJoint898.addChildren(&HAnimSegment899);

HAnimJoint& HAnimJoint907 =  HAnimJoint();
HAnimJoint907.X3DNode::setName(CString("vc6"));
HAnimJoint907.setDEF(CString("hanim_vc6"));
HAnimJoint907.setCenter(new float[]{0.0066,1.5357,-0.0143});
HAnimJoint907.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint907.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment908 =  HAnimSegment();
HAnimSegment908.X3DNode::setName(CString("c6"));
HAnimSegment908.setDEF(CString("hanim_c6"));
Transform& Transform909 =  Transform();
Transform909.setTranslation(new float[]{0.0066,1.5357,-0.0143});
Transform& Transform910 =  Transform();
//Empty Transform
Shape& Shape911 =  Shape();
Shape911.setUSE(CString("HAnimJointShape"));
Transform910.addChild(&Shape911);

Transform909.addChild(&Transform910);

HAnimSegment908.addChild(&Transform909);

Shape& Shape912 =  Shape();
LineSet& LineSet913 =  LineSet();
LineSet913.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate914 =  Coordinate();
Coordinate914.setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
LineSet913.setCoord(Coordinate914);

//from vc6 to vc5 vertices 2
ColorRGBA& ColorRGBA915 =  ColorRGBA();
ColorRGBA915.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet913.addChild(&ColorRGBA915);

Shape912.setGeometry(&LineSet913);

HAnimSegment908.addChild(&Shape912);

HAnimJoint907.addChildren(&HAnimSegment908);

HAnimJoint& HAnimJoint916 =  HAnimJoint();
HAnimJoint916.X3DNode::setName(CString("vc5"));
HAnimJoint916.setDEF(CString("hanim_vc5"));
HAnimJoint916.setCenter(new float[]{0.0066,1.552,-0.0082});
HAnimJoint916.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint916.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment917 =  HAnimSegment();
HAnimSegment917.X3DNode::setName(CString("c5"));
HAnimSegment917.setDEF(CString("hanim_c5"));
Transform& Transform918 =  Transform();
Transform918.setTranslation(new float[]{0.0066,1.552,-0.0082});
Transform& Transform919 =  Transform();
//Empty Transform
Shape& Shape920 =  Shape();
Shape920.setUSE(CString("HAnimJointShape"));
Transform919.addChild(&Shape920);

Transform918.addChild(&Transform919);

HAnimSegment917.addChild(&Transform918);

Shape& Shape921 =  Shape();
LineSet& LineSet922 =  LineSet();
LineSet922.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate923 =  Coordinate();
Coordinate923.setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
LineSet922.setCoord(Coordinate923);

//from vc5 to vc4 vertices 2
ColorRGBA& ColorRGBA924 =  ColorRGBA();
ColorRGBA924.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet922.addChild(&ColorRGBA924);

Shape921.setGeometry(&LineSet922);

HAnimSegment917.addChild(&Shape921);

HAnimJoint916.addChildren(&HAnimSegment917);

HAnimJoint& HAnimJoint925 =  HAnimJoint();
HAnimJoint925.X3DNode::setName(CString("vc4"));
HAnimJoint925.setDEF(CString("hanim_vc4"));
HAnimJoint925.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimJoint925.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint925.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment926 =  HAnimSegment();
HAnimSegment926.X3DNode::setName(CString("c4"));
HAnimSegment926.setDEF(CString("hanim_c4"));
Transform& Transform927 =  Transform();
Transform927.setTranslation(new float[]{0.0066,1.5662,-0.0084});
Transform& Transform928 =  Transform();
//Empty Transform
Shape& Shape929 =  Shape();
Shape929.setUSE(CString("HAnimJointShape"));
Transform928.addChild(&Shape929);

Transform927.addChild(&Transform928);

HAnimSegment926.addChild(&Transform927);

Shape& Shape930 =  Shape();
LineSet& LineSet931 =  LineSet();
LineSet931.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate932 =  Coordinate();
Coordinate932.setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
LineSet931.setCoord(Coordinate932);

//from vc4 to vc3 vertices 2
ColorRGBA& ColorRGBA933 =  ColorRGBA();
ColorRGBA933.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet931.addChild(&ColorRGBA933);

Shape930.setGeometry(&LineSet931);

HAnimSegment926.addChild(&Shape930);

HAnimJoint925.addChildren(&HAnimSegment926);

HAnimJoint& HAnimJoint934 =  HAnimJoint();
HAnimJoint934.X3DNode::setName(CString("vc3"));
HAnimJoint934.setDEF(CString("hanim_vc3"));
HAnimJoint934.setCenter(new float[]{0.0066,1.58,-0.0103});
HAnimJoint934.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint934.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment935 =  HAnimSegment();
HAnimSegment935.X3DNode::setName(CString("c3"));
HAnimSegment935.setDEF(CString("hanim_c3"));
Transform& Transform936 =  Transform();
Transform936.setTranslation(new float[]{0.0066,1.58,-0.0103});
Transform& Transform937 =  Transform();
//Empty Transform
Shape& Shape938 =  Shape();
Shape938.setUSE(CString("HAnimJointShape"));
Transform937.addChild(&Shape938);

Transform936.addChild(&Transform937);

HAnimSegment935.addChild(&Transform936);

Shape& Shape939 =  Shape();
LineSet& LineSet940 =  LineSet();
LineSet940.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate941 =  Coordinate();
Coordinate941.setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
LineSet940.setCoord(Coordinate941);

//from vc3 to vc2 vertices 2
ColorRGBA& ColorRGBA942 =  ColorRGBA();
ColorRGBA942.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet940.addChild(&ColorRGBA942);

Shape939.setGeometry(&LineSet940);

HAnimSegment935.addChild(&Shape939);

HAnimSite& HAnimSite943 =  HAnimSite();
HAnimSite943.X3DNode::setName(CString("adams_apple_pt"));
HAnimSite943.setDEF(CString("hanim_adams_apple_pt"));
TouchSensor& TouchSensor944 =  TouchSensor();
TouchSensor944.setDescription(CString("HAnimSite adams_apple_pt"));
HAnimSite943.addChild(&TouchSensor944);

Shape& Shape945 =  Shape();
Shape945.setUSE(CString("HAnimSiteShape"));
HAnimSite943.addChild(&Shape945);

HAnimSegment935.addChild(&HAnimSite943);

HAnimJoint934.addChildren(&HAnimSegment935);

HAnimJoint& HAnimJoint946 =  HAnimJoint();
HAnimJoint946.X3DNode::setName(CString("vc2"));
HAnimJoint946.setDEF(CString("hanim_vc2"));
HAnimJoint946.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimJoint946.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint946.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment947 =  HAnimSegment();
HAnimSegment947.X3DNode::setName(CString("c2"));
HAnimSegment947.setDEF(CString("hanim_c2"));
Transform& Transform948 =  Transform();
Transform948.setTranslation(new float[]{0.0066,1.5928,-0.0103});
Transform& Transform949 =  Transform();
//Empty Transform
Shape& Shape950 =  Shape();
Shape950.setUSE(CString("HAnimJointShape"));
Transform949.addChild(&Shape950);

Transform948.addChild(&Transform949);

HAnimSegment947.addChild(&Transform948);

Shape& Shape951 =  Shape();
LineSet& LineSet952 =  LineSet();
LineSet952.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate953 =  Coordinate();
Coordinate953.setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
LineSet952.setCoord(Coordinate953);

//from vc2 to vc1 vertices 2
ColorRGBA& ColorRGBA954 =  ColorRGBA();
ColorRGBA954.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet952.addChild(&ColorRGBA954);

Shape951.setGeometry(&LineSet952);

HAnimSegment947.addChild(&Shape951);

HAnimJoint946.addChildren(&HAnimSegment947);

HAnimJoint& HAnimJoint955 =  HAnimJoint();
HAnimJoint955.X3DNode::setName(CString("vc1"));
HAnimJoint955.setDEF(CString("hanim_vc1"));
HAnimJoint955.setCenter(new float[]{0.0066,1.6144,-0.0034});
HAnimJoint955.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint955.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment956 =  HAnimSegment();
HAnimSegment956.X3DNode::setName(CString("c1"));
HAnimSegment956.setDEF(CString("hanim_c1"));
Transform& Transform957 =  Transform();
Transform957.setTranslation(new float[]{0.0066,1.6144,-0.0034});
Transform& Transform958 =  Transform();
//Empty Transform
Shape& Shape959 =  Shape();
Shape959.setUSE(CString("HAnimJointShape"));
Transform958.addChild(&Shape959);

Transform957.addChild(&Transform958);

HAnimSegment956.addChild(&Transform957);

Shape& Shape960 =  Shape();
LineSet& LineSet961 =  LineSet();
LineSet961.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate962 =  Coordinate();
Coordinate962.setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
LineSet961.setCoord(Coordinate962);

//from vc1 to skullbase vertices 2
ColorRGBA& ColorRGBA963 =  ColorRGBA();
ColorRGBA963.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet961.addChild(&ColorRGBA963);

Shape960.setGeometry(&LineSet961);

HAnimSegment956.addChild(&Shape960);

HAnimSite& HAnimSite964 =  HAnimSite();
HAnimSite964.X3DNode::setName(CString("glabella_pt"));
HAnimSite964.setDEF(CString("hanim_glabella_pt"));
TouchSensor& TouchSensor965 =  TouchSensor();
TouchSensor965.setDescription(CString("HAnimSite glabella_pt"));
HAnimSite964.addChild(&TouchSensor965);

Shape& Shape966 =  Shape();
Shape966.setUSE(CString("HAnimSiteShape"));
HAnimSite964.addChild(&Shape966);

HAnimSegment956.addChild(&HAnimSite964);

HAnimSite& HAnimSite967 =  HAnimSite();
HAnimSite967.X3DNode::setName(CString("l_ectocanthus_pt"));
HAnimSite967.setDEF(CString("hanim_l_ectocanthus_pt"));
TouchSensor& TouchSensor968 =  TouchSensor();
TouchSensor968.setDescription(CString("HAnimSite l_ectocanthus_pt"));
HAnimSite967.addChild(&TouchSensor968);

Shape& Shape969 =  Shape();
Shape969.setUSE(CString("HAnimSiteShape"));
HAnimSite967.addChild(&Shape969);

HAnimSegment956.addChild(&HAnimSite967);

HAnimSite& HAnimSite970 =  HAnimSite();
HAnimSite970.X3DNode::setName(CString("l_infraorbitale_pt"));
HAnimSite970.setDEF(CString("hanim_l_infraorbitale_pt"));
HAnimSite970.setTranslation(new float[]{0.0341,1.6171,0.0752});
TouchSensor& TouchSensor971 =  TouchSensor();
TouchSensor971.setDescription(CString("HAnimSite l_infraorbitale_pt"));
HAnimSite970.addChild(&TouchSensor971);

Shape& Shape972 =  Shape();
Shape972.setUSE(CString("HAnimSiteShape"));
HAnimSite970.addChild(&Shape972);

HAnimSegment956.addChild(&HAnimSite970);

HAnimSite& HAnimSite973 =  HAnimSite();
HAnimSite973.X3DNode::setName(CString("l_tragion_pt"));
HAnimSite973.setDEF(CString("hanim_l_tragion_pt"));
HAnimSite973.setTranslation(new float[]{0.0739,1.6348,0.0282});
TouchSensor& TouchSensor974 =  TouchSensor();
TouchSensor974.setDescription(CString("HAnimSite l_tragion_pt"));
HAnimSite973.addChild(&TouchSensor974);

Shape& Shape975 =  Shape();
Shape975.setUSE(CString("HAnimSiteShape"));
HAnimSite973.addChild(&Shape975);

HAnimSegment956.addChild(&HAnimSite973);

HAnimSite& HAnimSite976 =  HAnimSite();
HAnimSite976.X3DNode::setName(CString("nuchale_pt"));
HAnimSite976.setDEF(CString("hanim_nuchale_pt"));
HAnimSite976.setTranslation(new float[]{0.0039,1.5972,-0.0796});
TouchSensor& TouchSensor977 =  TouchSensor();
TouchSensor977.setDescription(CString("HAnimSite nuchale_pt"));
HAnimSite976.addChild(&TouchSensor977);

Shape& Shape978 =  Shape();
Shape978.setUSE(CString("HAnimSiteShape"));
HAnimSite976.addChild(&Shape978);

HAnimSegment956.addChild(&HAnimSite976);

HAnimSite& HAnimSite979 =  HAnimSite();
HAnimSite979.X3DNode::setName(CString("opisthocranion_pt"));
HAnimSite979.setDEF(CString("hanim_opisthocranion_pt"));
TouchSensor& TouchSensor980 =  TouchSensor();
TouchSensor980.setDescription(CString("HAnimSite opisthocranion_pt"));
HAnimSite979.addChild(&TouchSensor980);

Shape& Shape981 =  Shape();
Shape981.setUSE(CString("HAnimSiteShape"));
HAnimSite979.addChild(&Shape981);

HAnimSegment956.addChild(&HAnimSite979);

HAnimSite& HAnimSite982 =  HAnimSite();
HAnimSite982.X3DNode::setName(CString("r_ectocanthus_pt"));
HAnimSite982.setDEF(CString("hanim_r_ectocanthus_pt"));
TouchSensor& TouchSensor983 =  TouchSensor();
TouchSensor983.setDescription(CString("HAnimSite r_ectocanthus_pt"));
HAnimSite982.addChild(&TouchSensor983);

Shape& Shape984 =  Shape();
Shape984.setUSE(CString("HAnimSiteShape"));
HAnimSite982.addChild(&Shape984);

HAnimSegment956.addChild(&HAnimSite982);

HAnimSite& HAnimSite985 =  HAnimSite();
HAnimSite985.X3DNode::setName(CString("r_infraorbitale_pt"));
HAnimSite985.setDEF(CString("hanim_r_infraorbitale_pt"));
HAnimSite985.setTranslation(new float[]{-0.0237,1.6171,0.0752});
TouchSensor& TouchSensor986 =  TouchSensor();
TouchSensor986.setDescription(CString("HAnimSite r_infraorbitale_pt"));
HAnimSite985.addChild(&TouchSensor986);

Shape& Shape987 =  Shape();
Shape987.setUSE(CString("HAnimSiteShape"));
HAnimSite985.addChild(&Shape987);

HAnimSegment956.addChild(&HAnimSite985);

HAnimSite& HAnimSite988 =  HAnimSite();
HAnimSite988.X3DNode::setName(CString("r_tragion_pt"));
HAnimSite988.setDEF(CString("hanim_r_tragion_pt"));
HAnimSite988.setTranslation(new float[]{-0.0646,1.6347,0.0302});
TouchSensor& TouchSensor989 =  TouchSensor();
TouchSensor989.setDescription(CString("HAnimSite r_tragion_pt"));
HAnimSite988.addChild(&TouchSensor989);

Shape& Shape990 =  Shape();
Shape990.setUSE(CString("HAnimSiteShape"));
HAnimSite988.addChild(&Shape990);

HAnimSegment956.addChild(&HAnimSite988);

HAnimSite& HAnimSite991 =  HAnimSite();
HAnimSite991.X3DNode::setName(CString("sellion_pt"));
HAnimSite991.setDEF(CString("hanim_sellion_pt"));
HAnimSite991.setTranslation(new float[]{0.0058,1.6316,0.0852});
TouchSensor& TouchSensor992 =  TouchSensor();
TouchSensor992.setDescription(CString("HAnimSite sellion_pt"));
HAnimSite991.addChild(&TouchSensor992);

Shape& Shape993 =  Shape();
Shape993.setUSE(CString("HAnimSiteShape"));
HAnimSite991.addChild(&Shape993);

HAnimSegment956.addChild(&HAnimSite991);

HAnimSite& HAnimSite994 =  HAnimSite();
HAnimSite994.X3DNode::setName(CString("skull_vertex_pt"));
HAnimSite994.setDEF(CString("hanim_skull_vertex_pt"));
HAnimSite994.setTranslation(new float[]{0.005,1.7504,0.0055});
TouchSensor& TouchSensor995 =  TouchSensor();
TouchSensor995.setDescription(CString("HAnimSite skull_vertex_pt"));
HAnimSite994.addChild(&TouchSensor995);

Shape& Shape996 =  Shape();
Shape996.setUSE(CString("HAnimSiteShape"));
HAnimSite994.addChild(&Shape996);

HAnimSegment956.addChild(&HAnimSite994);

HAnimJoint955.addChildren(&HAnimSegment956);

HAnimJoint& HAnimJoint997 =  HAnimJoint();
HAnimJoint997.X3DNode::setName(CString("skullbase"));
HAnimJoint997.setDEF(CString("hanim_skullbase"));
HAnimJoint997.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimJoint997.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint997.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment998 =  HAnimSegment();
HAnimSegment998.X3DNode::setName(CString("skull"));
HAnimSegment998.setDEF(CString("hanim_skull"));
Transform& Transform999 =  Transform();
Transform999.setTranslation(new float[]{0.0044,1.6209,0.0236});
Transform& Transform1000 =  Transform();
//Empty Transform
Shape& Shape1001 =  Shape();
Shape1001.setUSE(CString("HAnimJointShape"));
Transform1000.addChild(&Shape1001);

Transform999.addChild(&Transform1000);

HAnimSegment998.addChild(&Transform999);

Shape& Shape1002 =  Shape();
LineSet& LineSet1003 =  LineSet();
LineSet1003.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1004 =  Coordinate();
Coordinate1004.setPoint(new float[]{0.0044,1.6209,0.0236,2.2365,1.87,1.9285}, 6);
LineSet1003.setCoord(Coordinate1004);

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA& ColorRGBA1005 =  ColorRGBA();
ColorRGBA1005.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1003.addChild(&ColorRGBA1005);

Shape1002.setGeometry(&LineSet1003);

HAnimSegment998.addChild(&Shape1002);

Shape& Shape1006 =  Shape();
LineSet& LineSet1007 =  LineSet();
LineSet1007.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1008 =  Coordinate();
Coordinate1008.setPoint(new float[]{0.0044,1.6209,0.0236,-2.2535,1.87,1.9285}, 6);
LineSet1007.setCoord(Coordinate1008);

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA& ColorRGBA1009 =  ColorRGBA();
ColorRGBA1009.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1007.addChild(&ColorRGBA1009);

Shape1006.setGeometry(&LineSet1007);

HAnimSegment998.addChild(&Shape1006);

Shape& Shape1010 =  Shape();
LineSet& LineSet1011 =  LineSet();
LineSet1011.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1012 =  Coordinate();
Coordinate1012.setPoint(new float[]{0.0044,1.6209,0.0236,2.1305,1.8444,4.1555}, 6);
LineSet1011.setCoord(Coordinate1012);

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA& ColorRGBA1013 =  ColorRGBA();
ColorRGBA1013.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1011.addChild(&ColorRGBA1013);

Shape1010.setGeometry(&LineSet1011);

HAnimSegment998.addChild(&Shape1010);

Shape& Shape1014 =  Shape();
LineSet& LineSet1015 =  LineSet();
LineSet1015.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1016 =  Coordinate();
Coordinate1016.setPoint(new float[]{0.0044,1.6209,0.0236,-2.1475,1.8444,4.1555}, 6);
LineSet1015.setCoord(Coordinate1016);

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA& ColorRGBA1017 =  ColorRGBA();
ColorRGBA1017.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1015.addChild(&ColorRGBA1017);

Shape1014.setGeometry(&LineSet1015);

HAnimSegment998.addChild(&Shape1014);

Shape& Shape1018 =  Shape();
LineSet& LineSet1019 =  LineSet();
LineSet1019.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1020 =  Coordinate();
Coordinate1020.setPoint(new float[]{0.0044,1.6209,0.0236,0.9581,1.8563,5.2175}, 6);
LineSet1019.setCoord(Coordinate1020);

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA1021 =  ColorRGBA();
ColorRGBA1021.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1019.addChild(&ColorRGBA1021);

Shape1018.setGeometry(&LineSet1019);

HAnimSegment998.addChild(&Shape1018);

Shape& Shape1022 =  Shape();
LineSet& LineSet1023 =  LineSet();
LineSet1023.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1024 =  Coordinate();
Coordinate1024.setPoint(new float[]{0.0044,1.6209,0.0236,-0.9751,1.8563,5.2175}, 6);
LineSet1023.setCoord(Coordinate1024);

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA1025 =  ColorRGBA();
ColorRGBA1025.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1023.addChild(&ColorRGBA1025);

Shape1022.setGeometry(&LineSet1023);

HAnimSegment998.addChild(&Shape1022);

Shape& Shape1026 =  Shape();
LineSet& LineSet1027 =  LineSet();
LineSet1027.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1028 =  Coordinate();
Coordinate1028.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0085,1.7229,1.148}, 6);
LineSet1027.setCoord(Coordinate1028);

//from skullbase to temporomandibular vertices 2
ColorRGBA& ColorRGBA1029 =  ColorRGBA();
ColorRGBA1029.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1027.addChild(&ColorRGBA1029);

Shape1026.setGeometry(&LineSet1027);

HAnimSegment998.addChild(&Shape1026);

HAnimSite& HAnimSite1030 =  HAnimSite();
HAnimSite1030.X3DNode::setName(CString("l_gonion_pt"));
HAnimSite1030.setDEF(CString("hanim_l_gonion_pt"));
HAnimSite1030.setTranslation(new float[]{0.0631,1.553,0.033});
TouchSensor& TouchSensor1031 =  TouchSensor();
TouchSensor1031.setDescription(CString("HAnimSite l_gonion_pt"));
HAnimSite1030.addChild(&TouchSensor1031);

Shape& Shape1032 =  Shape();
Shape1032.setUSE(CString("HAnimSiteShape"));
HAnimSite1030.addChild(&Shape1032);

HAnimSegment998.addChild(&HAnimSite1030);

HAnimSite& HAnimSite1033 =  HAnimSite();
HAnimSite1033.X3DNode::setName(CString("menton_pt"));
HAnimSite1033.setDEF(CString("hanim_menton_pt"));
TouchSensor& TouchSensor1034 =  TouchSensor();
TouchSensor1034.setDescription(CString("HAnimSite menton_pt"));
HAnimSite1033.addChild(&TouchSensor1034);

Shape& Shape1035 =  Shape();
Shape1035.setUSE(CString("HAnimSiteShape"));
HAnimSite1033.addChild(&Shape1035);

HAnimSegment998.addChild(&HAnimSite1033);

HAnimSite& HAnimSite1036 =  HAnimSite();
HAnimSite1036.X3DNode::setName(CString("r_gonion_pt"));
HAnimSite1036.setDEF(CString("hanim_r_gonion_pt"));
HAnimSite1036.setTranslation(new float[]{-0.052,1.5529,0.0347});
TouchSensor& TouchSensor1037 =  TouchSensor();
TouchSensor1037.setDescription(CString("HAnimSite r_gonion_pt"));
HAnimSite1036.addChild(&TouchSensor1037);

Shape& Shape1038 =  Shape();
Shape1038.setUSE(CString("HAnimSiteShape"));
HAnimSite1036.addChild(&Shape1038);

HAnimSegment998.addChild(&HAnimSite1036);

HAnimSite& HAnimSite1039 =  HAnimSite();
HAnimSite1039.X3DNode::setName(CString("supramenton_pt"));
HAnimSite1039.setDEF(CString("hanim_supramenton_pt"));
HAnimSite1039.setTranslation(new float[]{0.0061,1.541,0.0805});
TouchSensor& TouchSensor1040 =  TouchSensor();
TouchSensor1040.setDescription(CString("HAnimSite supramenton_pt"));
HAnimSite1039.addChild(&TouchSensor1040);

Shape& Shape1041 =  Shape();
Shape1041.setUSE(CString("HAnimSiteShape"));
HAnimSite1039.addChild(&Shape1041);

HAnimSegment998.addChild(&HAnimSite1039);

HAnimJoint997.addChildren(&HAnimSegment998);

HAnimJoint& HAnimJoint1042 =  HAnimJoint();
HAnimJoint1042.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint1042.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint1042.setCenter(new float[]{2.2365,1.87,1.9285});
HAnimJoint1042.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1042.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint997.addChildren(&HAnimJoint1042);

HAnimJoint& HAnimJoint1043 =  HAnimJoint();
HAnimJoint1043.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint1043.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint1043.setCenter(new float[]{-2.2535,1.87,1.9285});
HAnimJoint1043.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1043.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint997.addChildren(&HAnimJoint1043);

HAnimJoint& HAnimJoint1044 =  HAnimJoint();
HAnimJoint1044.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint1044.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint1044.setCenter(new float[]{2.1305,1.8444,4.1555});
HAnimJoint1044.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1044.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint997.addChildren(&HAnimJoint1044);

HAnimJoint& HAnimJoint1045 =  HAnimJoint();
HAnimJoint1045.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint1045.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint1045.setCenter(new float[]{-2.1475,1.8444,4.1555});
HAnimJoint1045.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1045.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint997.addChildren(&HAnimJoint1045);

HAnimJoint& HAnimJoint1046 =  HAnimJoint();
HAnimJoint1046.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint1046.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint1046.setCenter(new float[]{0.9581,1.8563,5.2175});
HAnimJoint1046.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1046.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint997.addChildren(&HAnimJoint1046);

HAnimJoint& HAnimJoint1047 =  HAnimJoint();
HAnimJoint1047.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint1047.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint1047.setCenter(new float[]{-0.9751,1.8563,5.2175});
HAnimJoint1047.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1047.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint997.addChildren(&HAnimJoint1047);

HAnimJoint& HAnimJoint1048 =  HAnimJoint();
HAnimJoint1048.X3DNode::setName(CString("temporomandibular"));
HAnimJoint1048.setDEF(CString("hanim_temporomandibular"));
HAnimJoint1048.setCenter(new float[]{-0.0085,1.7229,1.148});
HAnimJoint1048.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1048.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint997.addChildren(&HAnimJoint1048);

HAnimJoint955.addChildren(&HAnimJoint997);

HAnimJoint946.addChildren(&HAnimJoint955);

HAnimJoint934.addChildren(&HAnimJoint946);

HAnimJoint925.addChildren(&HAnimJoint934);

HAnimJoint916.addChildren(&HAnimJoint925);

HAnimJoint907.addChildren(&HAnimJoint916);

HAnimJoint898.addChildren(&HAnimJoint907);

HAnimJoint845.addChildren(&HAnimJoint898);

HAnimJoint& HAnimJoint1049 =  HAnimJoint();
HAnimJoint1049.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint1049.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint1049.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimJoint1049.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1049.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1050 =  HAnimSegment();
HAnimSegment1050.X3DNode::setName(CString("l_clavicle"));
HAnimSegment1050.setDEF(CString("hanim_l_clavicle"));
Transform& Transform1051 =  Transform();
Transform1051.setTranslation(new float[]{0.082,1.4488,-0.0353});
Transform& Transform1052 =  Transform();
//Empty Transform
Shape& Shape1053 =  Shape();
Shape1053.setUSE(CString("HAnimJointShape"));
Transform1052.addChild(&Shape1053);

Transform1051.addChild(&Transform1052);

HAnimSegment1050.addChild(&Transform1051);

Shape& Shape1054 =  Shape();
LineSet& LineSet1055 =  LineSet();
LineSet1055.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1056 =  Coordinate();
Coordinate1056.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet1055.setCoord(Coordinate1056);

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA& ColorRGBA1057 =  ColorRGBA();
ColorRGBA1057.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1055.addChild(&ColorRGBA1057);

Shape1054.setGeometry(&LineSet1055);

HAnimSegment1050.addChild(&Shape1054);

HAnimJoint1049.addChildren(&HAnimSegment1050);

HAnimJoint& HAnimJoint1058 =  HAnimJoint();
HAnimJoint1058.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint1058.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint1058.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimJoint1058.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1058.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1059 =  HAnimSegment();
HAnimSegment1059.X3DNode::setName(CString("l_scapula"));
HAnimSegment1059.setDEF(CString("hanim_l_scapula"));
Transform& Transform1060 =  Transform();
Transform1060.setTranslation(new float[]{0.0962,1.4269,-0.0424});
Transform& Transform1061 =  Transform();
//Empty Transform
Shape& Shape1062 =  Shape();
Shape1062.setUSE(CString("HAnimJointShape"));
Transform1061.addChild(&Shape1062);

Transform1060.addChild(&Transform1061);

HAnimSegment1059.addChild(&Transform1060);

Shape& Shape1063 =  Shape();
LineSet& LineSet1064 =  LineSet();
LineSet1064.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1065 =  Coordinate();
Coordinate1065.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet1064.setCoord(Coordinate1065);

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA& ColorRGBA1066 =  ColorRGBA();
ColorRGBA1066.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1064.addChild(&ColorRGBA1066);

Shape1063.setGeometry(&LineSet1064);

HAnimSegment1059.addChild(&Shape1063);

HAnimSite& HAnimSite1067 =  HAnimSite();
HAnimSite1067.X3DNode::setName(CString("l_bideltoid_pt"));
HAnimSite1067.setDEF(CString("hanim_l_bideltoid_pt"));
TouchSensor& TouchSensor1068 =  TouchSensor();
TouchSensor1068.setDescription(CString("HAnimSite l_bideltoid_pt"));
HAnimSite1067.addChild(&TouchSensor1068);

Shape& Shape1069 =  Shape();
Shape1069.setUSE(CString("HAnimSiteShape"));
HAnimSite1067.addChild(&Shape1069);

HAnimSegment1059.addChild(&HAnimSite1067);

HAnimSite& HAnimSite1070 =  HAnimSite();
HAnimSite1070.X3DNode::setName(CString("l_humeral_lateral_epicondyles_pt"));
HAnimSite1070.setDEF(CString("hanim_l_humeral_lateral_epicondyles_pt"));
HAnimSite1070.setTranslation(new float[]{0.228,1.1482,-0.11});
TouchSensor& TouchSensor1071 =  TouchSensor();
TouchSensor1071.setDescription(CString("HAnimSite l_humeral_lateral_epicondyles_pt"));
HAnimSite1070.addChild(&TouchSensor1071);

Shape& Shape1072 =  Shape();
Shape1072.setUSE(CString("HAnimSiteShape"));
HAnimSite1070.addChild(&Shape1072);

HAnimSegment1059.addChild(&HAnimSite1070);

HAnimJoint1058.addChildren(&HAnimSegment1059);

HAnimJoint& HAnimJoint1073 =  HAnimJoint();
HAnimJoint1073.X3DNode::setName(CString("l_shoulder"));
HAnimJoint1073.setDEF(CString("hanim_l_shoulder"));
HAnimJoint1073.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimJoint1073.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1073.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1074 =  HAnimSegment();
HAnimSegment1074.X3DNode::setName(CString("l_upperarm"));
HAnimSegment1074.setDEF(CString("hanim_l_upperarm"));
Transform& Transform1075 =  Transform();
Transform1075.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Transform& Transform1076 =  Transform();
//Empty Transform
Shape& Shape1077 =  Shape();
Shape1077.setUSE(CString("HAnimJointShape"));
Transform1076.addChild(&Shape1077);

Transform1075.addChild(&Transform1076);

HAnimSegment1074.addChild(&Transform1075);

Shape& Shape1078 =  Shape();
LineSet& LineSet1079 =  LineSet();
LineSet1079.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1080 =  Coordinate();
Coordinate1080.setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet1079.setCoord(Coordinate1080);

//from l_shoulder to l_elbow vertices 2
ColorRGBA& ColorRGBA1081 =  ColorRGBA();
ColorRGBA1081.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1079.addChild(&ColorRGBA1081);

Shape1078.setGeometry(&LineSet1079);

HAnimSegment1074.addChild(&Shape1078);

HAnimSite& HAnimSite1082 =  HAnimSite();
HAnimSite1082.X3DNode::setName(CString("l_humeral_medial_epicondyles_pt"));
HAnimSite1082.setDEF(CString("hanim_l_humeral_medial_epicondyles_pt"));
HAnimSite1082.setTranslation(new float[]{0.1735,1.1272,-0.1113});
TouchSensor& TouchSensor1083 =  TouchSensor();
TouchSensor1083.setDescription(CString("HAnimSite l_humeral_medial_epicondyles_pt"));
HAnimSite1082.addChild(&TouchSensor1083);

Shape& Shape1084 =  Shape();
Shape1084.setUSE(CString("HAnimSiteShape"));
HAnimSite1082.addChild(&Shape1084);

HAnimSegment1074.addChild(&HAnimSite1082);

HAnimSite& HAnimSite1085 =  HAnimSite();
HAnimSite1085.X3DNode::setName(CString("l_olecranon_pt"));
HAnimSite1085.setDEF(CString("hanim_l_olecranon_pt"));
HAnimSite1085.setTranslation(new float[]{-0.1962,1.1375,-0.1123});
TouchSensor& TouchSensor1086 =  TouchSensor();
TouchSensor1086.setDescription(CString("HAnimSite l_olecranon_pt"));
HAnimSite1085.addChild(&TouchSensor1086);

Shape& Shape1087 =  Shape();
Shape1087.setUSE(CString("HAnimSiteShape"));
HAnimSite1085.addChild(&Shape1087);

HAnimSegment1074.addChild(&HAnimSite1085);

HAnimSite& HAnimSite1088 =  HAnimSite();
HAnimSite1088.X3DNode::setName(CString("l_radial_styloid_pt"));
HAnimSite1088.setDEF(CString("hanim_l_radial_styloid_pt"));
HAnimSite1088.setTranslation(new float[]{0.1901,0.8645,-0.0415});
TouchSensor& TouchSensor1089 =  TouchSensor();
TouchSensor1089.setDescription(CString("HAnimSite l_radial_styloid_pt"));
HAnimSite1088.addChild(&TouchSensor1089);

Shape& Shape1090 =  Shape();
Shape1090.setUSE(CString("HAnimSiteShape"));
HAnimSite1088.addChild(&Shape1090);

HAnimSegment1074.addChild(&HAnimSite1088);

HAnimSite& HAnimSite1091 =  HAnimSite();
HAnimSite1091.X3DNode::setName(CString("l_radiale_pt"));
HAnimSite1091.setDEF(CString("hanim_l_radiale_pt"));
HAnimSite1091.setTranslation(new float[]{0.2182,1.1212,-0.1167});
TouchSensor& TouchSensor1092 =  TouchSensor();
TouchSensor1092.setDescription(CString("HAnimSite l_radiale_pt"));
HAnimSite1091.addChild(&TouchSensor1092);

Shape& Shape1093 =  Shape();
Shape1093.setUSE(CString("HAnimSiteShape"));
HAnimSite1091.addChild(&Shape1093);

HAnimSegment1074.addChild(&HAnimSite1091);

HAnimJoint1073.addChildren(&HAnimSegment1074);

HAnimJoint& HAnimJoint1094 =  HAnimJoint();
HAnimJoint1094.X3DNode::setName(CString("l_elbow"));
HAnimJoint1094.setDEF(CString("hanim_l_elbow"));
HAnimJoint1094.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimJoint1094.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1094.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1095 =  HAnimSegment();
HAnimSegment1095.X3DNode::setName(CString("l_forearm"));
HAnimSegment1095.setDEF(CString("hanim_l_forearm"));
Transform& Transform1096 =  Transform();
Transform1096.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Transform& Transform1097 =  Transform();
//Empty Transform
Shape& Shape1098 =  Shape();
Shape1098.setUSE(CString("HAnimJointShape"));
Transform1097.addChild(&Shape1098);

Transform1096.addChild(&Transform1097);

HAnimSegment1095.addChild(&Transform1096);

Shape& Shape1099 =  Shape();
LineSet& LineSet1100 =  LineSet();
LineSet1100.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1101 =  Coordinate();
Coordinate1101.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet1100.setCoord(Coordinate1101);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA& ColorRGBA1102 =  ColorRGBA();
ColorRGBA1102.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1100.addChild(&ColorRGBA1102);

Shape1099.setGeometry(&LineSet1100);

HAnimSegment1095.addChild(&Shape1099);

HAnimSite& HAnimSite1103 =  HAnimSite();
HAnimSite1103.X3DNode::setName(CString("l_ulnar_styloid_pt"));
HAnimSite1103.setDEF(CString("hanim_l_ulnar_styloid_pt"));
HAnimSite1103.setTranslation(new float[]{-0.2142,0.8529,-0.0648});
TouchSensor& TouchSensor1104 =  TouchSensor();
TouchSensor1104.setDescription(CString("HAnimSite l_ulnar_styloid_pt"));
HAnimSite1103.addChild(&TouchSensor1104);

Shape& Shape1105 =  Shape();
Shape1105.setUSE(CString("HAnimSiteShape"));
HAnimSite1103.addChild(&Shape1105);

HAnimSegment1095.addChild(&HAnimSite1103);

HAnimJoint1094.addChildren(&HAnimSegment1095);

HAnimJoint& HAnimJoint1106 =  HAnimJoint();
HAnimJoint1106.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint1106.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint1106.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimJoint1106.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1106.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1107 =  HAnimSegment();
HAnimSegment1107.X3DNode::setName(CString("l_carpal"));
HAnimSegment1107.setDEF(CString("hanim_l_carpal"));
Transform& Transform1108 =  Transform();
Transform1108.setScale(new float[]{0.2,0.2,0.2});
Transform1108.setTranslation(new float[]{0.2,0.85,-0.05});
Transform1108.setRotation(new float[]{0,0,1,-3.14});
//Transform left hand
Transform& Transform1109 =  Transform();
Transform1109.setRotation(new float[]{0,1,0,-1.57});
//Transform left hand
Shape& Shape1110 =  Shape();
Shape1110.setUSE(CString("HAnimJointShape"));
Transform1109.addChild(&Shape1110);

Transform1108.addChild(&Transform1109);

HAnimSegment1107.addChild(&Transform1108);

Shape& Shape1111 =  Shape();
LineSet& LineSet1112 =  LineSet();
LineSet1112.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1113 =  Coordinate();
Coordinate1113.setPoint(new float[]{0.1984,0.8663,-0.0583,8.0485,0.9213,1.3235}, 6);
LineSet1112.setCoord(Coordinate1113);

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA& ColorRGBA1114 =  ColorRGBA();
ColorRGBA1114.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1112.addChild(&ColorRGBA1114);

Shape1111.setGeometry(&LineSet1112);

HAnimSegment1107.addChild(&Shape1111);

Shape& Shape1115 =  Shape();
LineSet& LineSet1116 =  LineSet();
LineSet1116.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1117 =  Coordinate();
Coordinate1117.setPoint(new float[]{0.1984,0.8663,-0.0583,8.0485,0.9225,0.8386}, 6);
LineSet1116.setCoord(Coordinate1117);

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA& ColorRGBA1118 =  ColorRGBA();
ColorRGBA1118.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1116.addChild(&ColorRGBA1118);

Shape1115.setGeometry(&LineSet1116);

HAnimSegment1107.addChild(&Shape1115);

Shape& Shape1119 =  Shape();
LineSet& LineSet1120 =  LineSet();
LineSet1120.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1121 =  Coordinate();
Coordinate1121.setPoint(new float[]{0.1984,0.8663,-0.0583,8.0395,0.9246,0.2513}, 6);
LineSet1120.setCoord(Coordinate1121);

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA& ColorRGBA1122 =  ColorRGBA();
ColorRGBA1122.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1120.addChild(&ColorRGBA1122);

Shape1119.setGeometry(&LineSet1120);

HAnimSegment1107.addChild(&Shape1119);

Shape& Shape1123 =  Shape();
LineSet& LineSet1124 =  LineSet();
LineSet1124.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1125 =  Coordinate();
Coordinate1125.setPoint(new float[]{0.1984,0.8663,-0.0583,8.0395,0.921,-0.6795}, 6);
LineSet1124.setCoord(Coordinate1125);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA& ColorRGBA1126 =  ColorRGBA();
ColorRGBA1126.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1124.addChild(&ColorRGBA1126);

Shape1123.setGeometry(&LineSet1124);

HAnimSegment1107.addChild(&Shape1123);

HAnimJoint1106.addChildren(&HAnimSegment1107);

HAnimJoint& HAnimJoint1127 =  HAnimJoint();
HAnimJoint1127.X3DNode::setName(CString("l_midcarpal_1"));
HAnimJoint1127.setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint1127.setCenter(new float[]{8.0485,0.9213,1.3235});
HAnimJoint1127.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1127.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1128 =  HAnimSegment();
HAnimSegment1128.X3DNode::setName(CString("l_trapezium"));
HAnimSegment1128.setDEF(CString("hanim_l_trapezium"));
Transform& Transform1129 =  Transform();
Transform1129.setTranslation(new float[]{8.0485,0.9213,1.3235});
Transform& Transform1130 =  Transform();
//Empty Transform
Shape& Shape1131 =  Shape();
Shape1131.setUSE(CString("HAnimJointShape"));
Transform1130.addChild(&Shape1131);

Transform1129.addChild(&Transform1130);

HAnimSegment1128.addChild(&Transform1129);

Shape& Shape1132 =  Shape();
LineSet& LineSet1133 =  LineSet();
LineSet1133.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1134 =  Coordinate();
Coordinate1134.setPoint(new float[]{8.0485,0.9213,1.3235,0.1924,0.8472,-0.0534}, 6);
LineSet1133.setCoord(Coordinate1134);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA1135 =  ColorRGBA();
ColorRGBA1135.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1133.addChild(&ColorRGBA1135);

Shape1132.setGeometry(&LineSet1133);

HAnimSegment1128.addChild(&Shape1132);

HAnimJoint1127.addChildren(&HAnimSegment1128);

HAnimJoint& HAnimJoint1136 =  HAnimJoint();
HAnimJoint1136.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint1136.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint1136.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimJoint1136.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1136.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1137 =  HAnimSegment();
HAnimSegment1137.X3DNode::setName(CString("l_metacarpal_1"));
HAnimSegment1137.setDEF(CString("hanim_l_metacarpal_1"));
Transform& Transform1138 =  Transform();
Transform1138.setTranslation(new float[]{0.1924,0.8472,-0.0534});
Transform& Transform1139 =  Transform();
//Empty Transform
Shape& Shape1140 =  Shape();
Shape1140.setUSE(CString("HAnimJointShape"));
Transform1139.addChild(&Shape1140);

Transform1138.addChild(&Transform1139);

HAnimSegment1137.addChild(&Transform1138);

Shape& Shape1141 =  Shape();
LineSet& LineSet1142 =  LineSet();
LineSet1142.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1143 =  Coordinate();
Coordinate1143.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet1142.setCoord(Coordinate1143);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1144 =  ColorRGBA();
ColorRGBA1144.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1142.addChild(&ColorRGBA1144);

Shape1141.setGeometry(&LineSet1142);

HAnimSegment1137.addChild(&Shape1141);

HAnimJoint1136.addChildren(&HAnimSegment1137);

HAnimJoint& HAnimJoint1145 =  HAnimJoint();
HAnimJoint1145.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint1145.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint1145.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimJoint1145.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1145.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1146 =  HAnimSegment();
HAnimSegment1146.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment1146.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform& Transform1147 =  Transform();
Transform1147.setTranslation(new float[]{0.1951,0.8226,0.0246});
Transform& Transform1148 =  Transform();
//Empty Transform
Shape& Shape1149 =  Shape();
Shape1149.setUSE(CString("HAnimJointShape"));
Transform1148.addChild(&Shape1149);

Transform1147.addChild(&Transform1148);

HAnimSegment1146.addChild(&Transform1147);

Shape& Shape1150 =  Shape();
LineSet& LineSet1151 =  LineSet();
LineSet1151.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1152 =  Coordinate();
Coordinate1152.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet1151.setCoord(Coordinate1152);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1153 =  ColorRGBA();
ColorRGBA1153.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1151.addChild(&ColorRGBA1153);

Shape1150.setGeometry(&LineSet1151);

HAnimSegment1146.addChild(&Shape1150);

HAnimSite& HAnimSite1154 =  HAnimSite();
HAnimSite1154.X3DNode::setName(CString("l_carpal_distal_phalanx_1_tip"));
HAnimSite1154.setDEF(CString("hanim_l_carpal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor1155 =  TouchSensor();
TouchSensor1155.setDescription(CString("HAnimSite l_carpal_distal_phalanx_1_tip"));
HAnimSite1154.addChild(&TouchSensor1155);

Shape& Shape1156 =  Shape();
Shape1156.setUSE(CString("HAnimSiteShape"));
HAnimSite1154.addChild(&Shape1156);

HAnimSegment1146.addChild(&HAnimSite1154);

HAnimJoint1145.addChildren(&HAnimSegment1146);

HAnimJoint& HAnimJoint1157 =  HAnimJoint();
HAnimJoint1157.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint1157.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint1157.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint1157.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1157.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1145.addChildren(&HAnimJoint1157);

HAnimJoint1136.addChildren(&HAnimJoint1145);

HAnimJoint1127.addChildren(&HAnimJoint1136);

HAnimJoint1106.addChildren(&HAnimJoint1127);

HAnimJoint& HAnimJoint1158 =  HAnimJoint();
HAnimJoint1158.X3DNode::setName(CString("l_midcarpal_2"));
HAnimJoint1158.setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint1158.setCenter(new float[]{8.0485,0.9225,0.8386});
HAnimJoint1158.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1158.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1159 =  HAnimSegment();
HAnimSegment1159.X3DNode::setName(CString("l_trapezoid"));
HAnimSegment1159.setDEF(CString("hanim_l_trapezoid"));
Transform& Transform1160 =  Transform();
Transform1160.setTranslation(new float[]{8.0485,0.9225,0.8386});
Transform& Transform1161 =  Transform();
//Empty Transform
Shape& Shape1162 =  Shape();
Shape1162.setUSE(CString("HAnimJointShape"));
Transform1161.addChild(&Shape1162);

Transform1160.addChild(&Transform1161);

HAnimSegment1159.addChild(&Transform1160);

Shape& Shape1163 =  Shape();
LineSet& LineSet1164 =  LineSet();
LineSet1164.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1165 =  Coordinate();
Coordinate1165.setPoint(new float[]{8.0485,0.9225,0.8386,0.1983,0.8024,-0.028}, 6);
LineSet1164.setCoord(Coordinate1165);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1166 =  ColorRGBA();
ColorRGBA1166.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1164.addChild(&ColorRGBA1166);

Shape1163.setGeometry(&LineSet1164);

HAnimSegment1159.addChild(&Shape1163);

HAnimSite& HAnimSite1167 =  HAnimSite();
HAnimSite1167.X3DNode::setName(CString("l_metacarpal_phalanx_2_pt"));
HAnimSite1167.setDEF(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimSite1167.setTranslation(new float[]{0.2009,0.8139,-0.0237});
TouchSensor& TouchSensor1168 =  TouchSensor();
TouchSensor1168.setDescription(CString("HAnimSite l_metacarpal_phalanx_2_pt"));
HAnimSite1167.addChild(&TouchSensor1168);

Shape& Shape1169 =  Shape();
Shape1169.setUSE(CString("HAnimSiteShape"));
HAnimSite1167.addChild(&Shape1169);

HAnimSegment1159.addChild(&HAnimSite1167);

HAnimJoint1158.addChildren(&HAnimSegment1159);

HAnimJoint& HAnimJoint1170 =  HAnimJoint();
HAnimJoint1170.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint1170.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint1170.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimJoint1170.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1170.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1171 =  HAnimSegment();
HAnimSegment1171.X3DNode::setName(CString("l_metacarpal_2"));
HAnimSegment1171.setDEF(CString("hanim_l_metacarpal_2"));
Transform& Transform1172 =  Transform();
Transform1172.setTranslation(new float[]{0.1983,0.8024,-0.028});
Transform& Transform1173 =  Transform();
//Empty Transform
Shape& Shape1174 =  Shape();
Shape1174.setUSE(CString("HAnimJointShape"));
Transform1173.addChild(&Shape1174);

Transform1172.addChild(&Transform1173);

HAnimSegment1171.addChild(&Transform1172);

Shape& Shape1175 =  Shape();
LineSet& LineSet1176 =  LineSet();
LineSet1176.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1177 =  Coordinate();
Coordinate1177.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet1176.setCoord(Coordinate1177);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1178 =  ColorRGBA();
ColorRGBA1178.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1176.addChild(&ColorRGBA1178);

Shape1175.setGeometry(&LineSet1176);

HAnimSegment1171.addChild(&Shape1175);

HAnimJoint1170.addChildren(&HAnimSegment1171);

HAnimJoint& HAnimJoint1179 =  HAnimJoint();
HAnimJoint1179.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint1179.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint1179.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimJoint1179.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1179.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1180 =  HAnimSegment();
HAnimSegment1180.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment1180.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform& Transform1181 =  Transform();
Transform1181.setTranslation(new float[]{0.1983,0.7815,-0.028});
Transform& Transform1182 =  Transform();
//Empty Transform
Shape& Shape1183 =  Shape();
Shape1183.setUSE(CString("HAnimJointShape"));
Transform1182.addChild(&Shape1183);

Transform1181.addChild(&Transform1182);

HAnimSegment1180.addChild(&Transform1181);

Shape& Shape1184 =  Shape();
LineSet& LineSet1185 =  LineSet();
LineSet1185.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1186 =  Coordinate();
Coordinate1186.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet1185.setCoord(Coordinate1186);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1187 =  ColorRGBA();
ColorRGBA1187.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1185.addChild(&ColorRGBA1187);

Shape1184.setGeometry(&LineSet1185);

HAnimSegment1180.addChild(&Shape1184);

HAnimJoint1179.addChildren(&HAnimSegment1180);

HAnimJoint& HAnimJoint1188 =  HAnimJoint();
HAnimJoint1188.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint1188.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint1188.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimJoint1188.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1188.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1189 =  HAnimSegment();
HAnimSegment1189.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment1189.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform& Transform1190 =  Transform();
Transform1190.setTranslation(new float[]{0.2017,0.7363,-0.0248});
Transform& Transform1191 =  Transform();
//Empty Transform
Shape& Shape1192 =  Shape();
Shape1192.setUSE(CString("HAnimJointShape"));
Transform1191.addChild(&Shape1192);

Transform1190.addChild(&Transform1191);

HAnimSegment1189.addChild(&Transform1190);

Shape& Shape1193 =  Shape();
LineSet& LineSet1194 =  LineSet();
LineSet1194.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1195 =  Coordinate();
Coordinate1195.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet1194.setCoord(Coordinate1195);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1196 =  ColorRGBA();
ColorRGBA1196.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1194.addChild(&ColorRGBA1196);

Shape1193.setGeometry(&LineSet1194);

HAnimSegment1189.addChild(&Shape1193);

HAnimSite& HAnimSite1197 =  HAnimSite();
HAnimSite1197.X3DNode::setName(CString("l_carpal_distal_phalanx_2_tip"));
HAnimSite1197.setDEF(CString("hanim_l_carpal_distal_phalanx_2_tip"));
TouchSensor& TouchSensor1198 =  TouchSensor();
TouchSensor1198.setDescription(CString("HAnimSite l_carpal_distal_phalanx_2_tip"));
HAnimSite1197.addChild(&TouchSensor1198);

Shape& Shape1199 =  Shape();
Shape1199.setUSE(CString("HAnimSiteShape"));
HAnimSite1197.addChild(&Shape1199);

HAnimSegment1189.addChild(&HAnimSite1197);

HAnimSite& HAnimSite1200 =  HAnimSite();
HAnimSite1200.X3DNode::setName(CString("l_dactylion_pt"));
HAnimSite1200.setDEF(CString("hanim_l_dactylion_pt"));
HAnimSite1200.setTranslation(new float[]{0.2056,0.6743,-0.0482});
TouchSensor& TouchSensor1201 =  TouchSensor();
TouchSensor1201.setDescription(CString("HAnimSite l_dactylion_pt"));
HAnimSite1200.addChild(&TouchSensor1201);

Shape& Shape1202 =  Shape();
Shape1202.setUSE(CString("HAnimSiteShape"));
HAnimSite1200.addChild(&Shape1202);

HAnimSegment1189.addChild(&HAnimSite1200);

HAnimJoint1188.addChildren(&HAnimSegment1189);

HAnimJoint& HAnimJoint1203 =  HAnimJoint();
HAnimJoint1203.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint1203.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint1203.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint1203.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1203.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1188.addChildren(&HAnimJoint1203);

HAnimJoint1179.addChildren(&HAnimJoint1188);

HAnimJoint1170.addChildren(&HAnimJoint1179);

HAnimJoint1158.addChildren(&HAnimJoint1170);

HAnimJoint1106.addChildren(&HAnimJoint1158);

HAnimJoint& HAnimJoint1204 =  HAnimJoint();
HAnimJoint1204.X3DNode::setName(CString("l_midcarpal_3"));
HAnimJoint1204.setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint1204.setCenter(new float[]{8.0395,0.9246,0.2513});
HAnimJoint1204.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1204.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1205 =  HAnimSegment();
HAnimSegment1205.X3DNode::setName(CString("l_capitate"));
HAnimSegment1205.setDEF(CString("hanim_l_capitate"));
Transform& Transform1206 =  Transform();
Transform1206.setTranslation(new float[]{8.0395,0.9246,0.2513});
Transform& Transform1207 =  Transform();
//Empty Transform
Shape& Shape1208 =  Shape();
Shape1208.setUSE(CString("HAnimJointShape"));
Transform1207.addChild(&Shape1208);

Transform1206.addChild(&Transform1207);

HAnimSegment1205.addChild(&Transform1206);

Shape& Shape1209 =  Shape();
LineSet& LineSet1210 =  LineSet();
LineSet1210.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1211 =  Coordinate();
Coordinate1211.setPoint(new float[]{8.0395,0.9246,0.2513,0.1987,0.8029,-0.053}, 6);
LineSet1210.setCoord(Coordinate1211);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1212 =  ColorRGBA();
ColorRGBA1212.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1210.addChild(&ColorRGBA1212);

Shape1209.setGeometry(&LineSet1210);

HAnimSegment1205.addChild(&Shape1209);

HAnimSite& HAnimSite1213 =  HAnimSite();
HAnimSite1213.X3DNode::setName(CString("l_metacarpal_phalanx_3_pt"));
HAnimSite1213.setDEF(CString("hanim_l_metacarpal_phalanx_3_pt"));
TouchSensor& TouchSensor1214 =  TouchSensor();
TouchSensor1214.setDescription(CString("HAnimSite l_metacarpal_phalanx_3_pt"));
HAnimSite1213.addChild(&TouchSensor1214);

Shape& Shape1215 =  Shape();
Shape1215.setUSE(CString("HAnimSiteShape"));
HAnimSite1213.addChild(&Shape1215);

HAnimSegment1205.addChild(&HAnimSite1213);

HAnimJoint1204.addChildren(&HAnimSegment1205);

HAnimJoint& HAnimJoint1216 =  HAnimJoint();
HAnimJoint1216.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint1216.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint1216.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimJoint1216.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1216.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1217 =  HAnimSegment();
HAnimSegment1217.X3DNode::setName(CString("l_metacarpal_3"));
HAnimSegment1217.setDEF(CString("hanim_l_metacarpal_3"));
Transform& Transform1218 =  Transform();
Transform1218.setTranslation(new float[]{0.1987,0.8029,-0.053});
Transform& Transform1219 =  Transform();
//Empty Transform
Shape& Shape1220 =  Shape();
Shape1220.setUSE(CString("HAnimJointShape"));
Transform1219.addChild(&Shape1220);

Transform1218.addChild(&Transform1219);

HAnimSegment1217.addChild(&Transform1218);

Shape& Shape1221 =  Shape();
LineSet& LineSet1222 =  LineSet();
LineSet1222.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1223 =  Coordinate();
Coordinate1223.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet1222.setCoord(Coordinate1223);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1224 =  ColorRGBA();
ColorRGBA1224.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1222.addChild(&ColorRGBA1224);

Shape1221.setGeometry(&LineSet1222);

HAnimSegment1217.addChild(&Shape1221);

HAnimJoint1216.addChildren(&HAnimSegment1217);

HAnimJoint& HAnimJoint1225 =  HAnimJoint();
HAnimJoint1225.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint1225.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint1225.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimJoint1225.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1225.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1226 =  HAnimSegment();
HAnimSegment1226.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment1226.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform& Transform1227 =  Transform();
Transform1227.setTranslation(new float[]{0.1987,0.7818,-0.053});
Transform& Transform1228 =  Transform();
//Empty Transform
Shape& Shape1229 =  Shape();
Shape1229.setUSE(CString("HAnimJointShape"));
Transform1228.addChild(&Shape1229);

Transform1227.addChild(&Transform1228);

HAnimSegment1226.addChild(&Transform1227);

Shape& Shape1230 =  Shape();
LineSet& LineSet1231 =  LineSet();
LineSet1231.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1232 =  Coordinate();
Coordinate1232.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet1231.setCoord(Coordinate1232);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1233 =  ColorRGBA();
ColorRGBA1233.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1231.addChild(&ColorRGBA1233);

Shape1230.setGeometry(&LineSet1231);

HAnimSegment1226.addChild(&Shape1230);

HAnimJoint1225.addChildren(&HAnimSegment1226);

HAnimJoint& HAnimJoint1234 =  HAnimJoint();
HAnimJoint1234.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint1234.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint1234.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimJoint1234.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1234.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1235 =  HAnimSegment();
HAnimSegment1235.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment1235.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform& Transform1236 =  Transform();
Transform1236.setTranslation(new float[]{0.2013,0.7273,-0.0503});
Transform& Transform1237 =  Transform();
//Empty Transform
Shape& Shape1238 =  Shape();
Shape1238.setUSE(CString("HAnimJointShape"));
Transform1237.addChild(&Shape1238);

Transform1236.addChild(&Transform1237);

HAnimSegment1235.addChild(&Transform1236);

Shape& Shape1239 =  Shape();
LineSet& LineSet1240 =  LineSet();
LineSet1240.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1241 =  Coordinate();
Coordinate1241.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet1240.setCoord(Coordinate1241);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1242 =  ColorRGBA();
ColorRGBA1242.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1240.addChild(&ColorRGBA1242);

Shape1239.setGeometry(&LineSet1240);

HAnimSegment1235.addChild(&Shape1239);

HAnimSite& HAnimSite1243 =  HAnimSite();
HAnimSite1243.X3DNode::setName(CString("l_carpal_distal_phalanx_3_tip"));
HAnimSite1243.setDEF(CString("hanim_l_carpal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor1244 =  TouchSensor();
TouchSensor1244.setDescription(CString("HAnimSite l_carpal_distal_phalanx_3_tip"));
HAnimSite1243.addChild(&TouchSensor1244);

Shape& Shape1245 =  Shape();
Shape1245.setUSE(CString("HAnimSiteShape"));
HAnimSite1243.addChild(&Shape1245);

HAnimSegment1235.addChild(&HAnimSite1243);

HAnimJoint1234.addChildren(&HAnimSegment1235);

HAnimJoint& HAnimJoint1246 =  HAnimJoint();
HAnimJoint1246.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint1246.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint1246.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint1246.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1246.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1234.addChildren(&HAnimJoint1246);

HAnimJoint1225.addChildren(&HAnimJoint1234);

HAnimJoint1216.addChildren(&HAnimJoint1225);

HAnimJoint1204.addChildren(&HAnimJoint1216);

HAnimJoint1106.addChildren(&HAnimJoint1204);

HAnimJoint& HAnimJoint1247 =  HAnimJoint();
HAnimJoint1247.X3DNode::setName(CString("l_midcarpal_4_5"));
HAnimJoint1247.setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint1247.setCenter(new float[]{8.0395,0.921,-0.6795});
HAnimJoint1247.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1247.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1248 =  HAnimSegment();
HAnimSegment1248.X3DNode::setName(CString("l_hamate"));
HAnimSegment1248.setDEF(CString("hanim_l_hamate"));
Transform& Transform1249 =  Transform();
Transform1249.setTranslation(new float[]{8.0395,0.921,-0.6795});
Transform& Transform1250 =  Transform();
//Empty Transform
Shape& Shape1251 =  Shape();
Shape1251.setUSE(CString("HAnimJointShape"));
Transform1250.addChild(&Shape1251);

Transform1249.addChild(&Transform1250);

HAnimSegment1248.addChild(&Transform1249);

Shape& Shape1252 =  Shape();
LineSet& LineSet1253 =  LineSet();
LineSet1253.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1254 =  Coordinate();
Coordinate1254.setPoint(new float[]{8.0395,0.921,-0.6795,0.1956,0.8019,-0.0794}, 6);
LineSet1253.setCoord(Coordinate1254);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1255 =  ColorRGBA();
ColorRGBA1255.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1253.addChild(&ColorRGBA1255);

Shape1252.setGeometry(&LineSet1253);

HAnimSegment1248.addChild(&Shape1252);

Shape& Shape1256 =  Shape();
LineSet& LineSet1257 =  LineSet();
LineSet1257.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1258 =  Coordinate();
Coordinate1258.setPoint(new float[]{8.0395,0.921,-0.6795,0.1925,0.8066,-0.1036}, 6);
LineSet1257.setCoord(Coordinate1258);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1259 =  ColorRGBA();
ColorRGBA1259.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1257.addChild(&ColorRGBA1259);

Shape1256.setGeometry(&LineSet1257);

HAnimSegment1248.addChild(&Shape1256);

HAnimSite& HAnimSite1260 =  HAnimSite();
HAnimSite1260.X3DNode::setName(CString("l_metacarpal_phalanx_5_pt"));
HAnimSite1260.setDEF(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimSite1260.setTranslation(new float[]{0.1929,0.786,-0.1122});
TouchSensor& TouchSensor1261 =  TouchSensor();
TouchSensor1261.setDescription(CString("HAnimSite l_metacarpal_phalanx_5_pt"));
HAnimSite1260.addChild(&TouchSensor1261);

Shape& Shape1262 =  Shape();
Shape1262.setUSE(CString("HAnimSiteShape"));
HAnimSite1260.addChild(&Shape1262);

HAnimSegment1248.addChild(&HAnimSite1260);

HAnimJoint1247.addChildren(&HAnimSegment1248);

HAnimJoint& HAnimJoint1263 =  HAnimJoint();
HAnimJoint1263.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint1263.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint1263.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimJoint1263.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1263.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1264 =  HAnimSegment();
HAnimSegment1264.X3DNode::setName(CString("l_metacarpal_4"));
HAnimSegment1264.setDEF(CString("hanim_l_metacarpal_4"));
Transform& Transform1265 =  Transform();
Transform1265.setTranslation(new float[]{0.1956,0.8019,-0.0794});
Transform& Transform1266 =  Transform();
//Empty Transform
Shape& Shape1267 =  Shape();
Shape1267.setUSE(CString("HAnimJointShape"));
Transform1266.addChild(&Shape1267);

Transform1265.addChild(&Transform1266);

HAnimSegment1264.addChild(&Transform1265);

Shape& Shape1268 =  Shape();
LineSet& LineSet1269 =  LineSet();
LineSet1269.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1270 =  Coordinate();
Coordinate1270.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet1269.setCoord(Coordinate1270);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1271 =  ColorRGBA();
ColorRGBA1271.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1269.addChild(&ColorRGBA1271);

Shape1268.setGeometry(&LineSet1269);

HAnimSegment1264.addChild(&Shape1268);

HAnimJoint1263.addChildren(&HAnimSegment1264);

HAnimJoint& HAnimJoint1272 =  HAnimJoint();
HAnimJoint1272.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint1272.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint1272.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimJoint1272.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1272.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1273 =  HAnimSegment();
HAnimSegment1273.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment1273.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform& Transform1274 =  Transform();
Transform1274.setTranslation(new float[]{0.1956,0.7815,-0.0794});
Transform& Transform1275 =  Transform();
//Empty Transform
Shape& Shape1276 =  Shape();
Shape1276.setUSE(CString("HAnimJointShape"));
Transform1275.addChild(&Shape1276);

Transform1274.addChild(&Transform1275);

HAnimSegment1273.addChild(&Transform1274);

Shape& Shape1277 =  Shape();
LineSet& LineSet1278 =  LineSet();
LineSet1278.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1279 =  Coordinate();
Coordinate1279.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet1278.setCoord(Coordinate1279);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1280 =  ColorRGBA();
ColorRGBA1280.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1278.addChild(&ColorRGBA1280);

Shape1277.setGeometry(&LineSet1278);

HAnimSegment1273.addChild(&Shape1277);

HAnimJoint1272.addChildren(&HAnimSegment1273);

HAnimJoint& HAnimJoint1281 =  HAnimJoint();
HAnimJoint1281.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint1281.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint1281.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimJoint1281.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1281.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1282 =  HAnimSegment();
HAnimSegment1282.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment1282.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform& Transform1283 =  Transform();
Transform1283.setTranslation(new float[]{0.1973,0.7287,-0.0777});
Transform& Transform1284 =  Transform();
//Empty Transform
Shape& Shape1285 =  Shape();
Shape1285.setUSE(CString("HAnimJointShape"));
Transform1284.addChild(&Shape1285);

Transform1283.addChild(&Transform1284);

HAnimSegment1282.addChild(&Transform1283);

Shape& Shape1286 =  Shape();
LineSet& LineSet1287 =  LineSet();
LineSet1287.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1288 =  Coordinate();
Coordinate1288.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet1287.setCoord(Coordinate1288);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1289 =  ColorRGBA();
ColorRGBA1289.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1287.addChild(&ColorRGBA1289);

Shape1286.setGeometry(&LineSet1287);

HAnimSegment1282.addChild(&Shape1286);

HAnimSite& HAnimSite1290 =  HAnimSite();
HAnimSite1290.X3DNode::setName(CString("l_carpal_distal_phalanx_4_tip"));
HAnimSite1290.setDEF(CString("hanim_l_carpal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor1291 =  TouchSensor();
TouchSensor1291.setDescription(CString("HAnimSite l_carpal_distal_phalanx_4_tip"));
HAnimSite1290.addChild(&TouchSensor1291);

Shape& Shape1292 =  Shape();
Shape1292.setUSE(CString("HAnimSiteShape"));
HAnimSite1290.addChild(&Shape1292);

HAnimSegment1282.addChild(&HAnimSite1290);

HAnimJoint1281.addChildren(&HAnimSegment1282);

HAnimJoint& HAnimJoint1293 =  HAnimJoint();
HAnimJoint1293.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint1293.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint1293.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint1293.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1293.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1281.addChildren(&HAnimJoint1293);

HAnimJoint1272.addChildren(&HAnimJoint1281);

HAnimJoint1263.addChildren(&HAnimJoint1272);

HAnimJoint1247.addChildren(&HAnimJoint1263);

HAnimJoint& HAnimJoint1294 =  HAnimJoint();
HAnimJoint1294.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint1294.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint1294.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimJoint1294.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1294.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1295 =  HAnimSegment();
HAnimSegment1295.X3DNode::setName(CString("l_metacarpal_5"));
HAnimSegment1295.setDEF(CString("hanim_l_metacarpal_5"));
Transform& Transform1296 =  Transform();
Transform1296.setTranslation(new float[]{0.1925,0.8066,-0.1036});
Transform& Transform1297 =  Transform();
//Empty Transform
Shape& Shape1298 =  Shape();
Shape1298.setUSE(CString("HAnimJointShape"));
Transform1297.addChild(&Shape1298);

Transform1296.addChild(&Transform1297);

HAnimSegment1295.addChild(&Transform1296);

Shape& Shape1299 =  Shape();
LineSet& LineSet1300 =  LineSet();
LineSet1300.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1301 =  Coordinate();
Coordinate1301.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet1300.setCoord(Coordinate1301);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1302 =  ColorRGBA();
ColorRGBA1302.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1300.addChild(&ColorRGBA1302);

Shape1299.setGeometry(&LineSet1300);

HAnimSegment1295.addChild(&Shape1299);

HAnimJoint1294.addChildren(&HAnimSegment1295);

HAnimJoint& HAnimJoint1303 =  HAnimJoint();
HAnimJoint1303.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint1303.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint1303.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimJoint1303.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1303.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1304 =  HAnimSegment();
HAnimSegment1304.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment1304.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform& Transform1305 =  Transform();
Transform1305.setTranslation(new float[]{0.1925,0.7866,-0.1036});
Transform& Transform1306 =  Transform();
//Empty Transform
Shape& Shape1307 =  Shape();
Shape1307.setUSE(CString("HAnimJointShape"));
Transform1306.addChild(&Shape1307);

Transform1305.addChild(&Transform1306);

HAnimSegment1304.addChild(&Transform1305);

Shape& Shape1308 =  Shape();
LineSet& LineSet1309 =  LineSet();
LineSet1309.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1310 =  Coordinate();
Coordinate1310.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet1309.setCoord(Coordinate1310);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1311 =  ColorRGBA();
ColorRGBA1311.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1309.addChild(&ColorRGBA1311);

Shape1308.setGeometry(&LineSet1309);

HAnimSegment1304.addChild(&Shape1308);

HAnimJoint1303.addChildren(&HAnimSegment1304);

HAnimJoint& HAnimJoint1312 =  HAnimJoint();
HAnimJoint1312.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint1312.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint1312.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimJoint1312.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1312.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1313 =  HAnimSegment();
HAnimSegment1313.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment1313.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform& Transform1314 =  Transform();
Transform1314.setTranslation(new float[]{0.1938,0.7452,-0.1024});
Transform& Transform1315 =  Transform();
//Empty Transform
Shape& Shape1316 =  Shape();
Shape1316.setUSE(CString("HAnimJointShape"));
Transform1315.addChild(&Shape1316);

Transform1314.addChild(&Transform1315);

HAnimSegment1313.addChild(&Transform1314);

Shape& Shape1317 =  Shape();
LineSet& LineSet1318 =  LineSet();
LineSet1318.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1319 =  Coordinate();
Coordinate1319.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet1318.setCoord(Coordinate1319);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1320 =  ColorRGBA();
ColorRGBA1320.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1318.addChild(&ColorRGBA1320);

Shape1317.setGeometry(&LineSet1318);

HAnimSegment1313.addChild(&Shape1317);

HAnimSite& HAnimSite1321 =  HAnimSite();
HAnimSite1321.X3DNode::setName(CString("l_carpal_distal_phalanx_5_tip"));
HAnimSite1321.setDEF(CString("hanim_l_carpal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor1322 =  TouchSensor();
TouchSensor1322.setDescription(CString("HAnimSite l_carpal_distal_phalanx_5_tip"));
HAnimSite1321.addChild(&TouchSensor1322);

Shape& Shape1323 =  Shape();
Shape1323.setUSE(CString("HAnimSiteShape"));
HAnimSite1321.addChild(&Shape1323);

HAnimSegment1313.addChild(&HAnimSite1321);

HAnimJoint1312.addChildren(&HAnimSegment1313);

HAnimJoint& HAnimJoint1324 =  HAnimJoint();
HAnimJoint1324.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint1324.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint1324.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint1324.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1324.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1312.addChildren(&HAnimJoint1324);

HAnimJoint1303.addChildren(&HAnimJoint1312);

HAnimJoint1294.addChildren(&HAnimJoint1303);

HAnimJoint1247.addChildren(&HAnimJoint1294);

HAnimJoint1106.addChildren(&HAnimJoint1247);

HAnimJoint1094.addChildren(&HAnimJoint1106);

HAnimJoint1073.addChildren(&HAnimJoint1094);

HAnimJoint1058.addChildren(&HAnimJoint1073);

HAnimJoint1049.addChildren(&HAnimJoint1058);

HAnimJoint845.addChildren(&HAnimJoint1049);

HAnimJoint& HAnimJoint1325 =  HAnimJoint();
HAnimJoint1325.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint1325.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint1325.setCenter(new float[]{-0.0694,1.46,-0.033});
HAnimJoint1325.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1325.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1326 =  HAnimSegment();
HAnimSegment1326.X3DNode::setName(CString("r_clavicle"));
HAnimSegment1326.setDEF(CString("hanim_r_clavicle"));
Transform& Transform1327 =  Transform();
Transform1327.setTranslation(new float[]{-0.0694,1.46,-0.033});
Transform& Transform1328 =  Transform();
//Empty Transform
Shape& Shape1329 =  Shape();
Shape1329.setUSE(CString("HAnimJointShape"));
Transform1328.addChild(&Shape1329);

Transform1327.addChild(&Transform1328);

HAnimSegment1326.addChild(&Transform1327);

Shape& Shape1330 =  Shape();
LineSet& LineSet1331 =  LineSet();
LineSet1331.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1332 =  Coordinate();
Coordinate1332.setPoint(new float[]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401}, 6);
LineSet1331.setCoord(Coordinate1332);

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA& ColorRGBA1333 =  ColorRGBA();
ColorRGBA1333.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1331.addChild(&ColorRGBA1333);

Shape1330.setGeometry(&LineSet1331);

HAnimSegment1326.addChild(&Shape1330);

HAnimJoint1325.addChildren(&HAnimSegment1326);

HAnimJoint& HAnimJoint1334 =  HAnimJoint();
HAnimJoint1334.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint1334.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1334.setCenter(new float[]{-0.0836,1.4281,-0.0401});
HAnimJoint1334.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1334.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1335 =  HAnimSegment();
HAnimSegment1335.X3DNode::setName(CString("r_scapula"));
HAnimSegment1335.setDEF(CString("hanim_r_scapula"));
Transform& Transform1336 =  Transform();
Transform1336.setTranslation(new float[]{-0.0836,1.4281,-0.0401});
Transform& Transform1337 =  Transform();
//Empty Transform
Shape& Shape1338 =  Shape();
Shape1338.setUSE(CString("HAnimJointShape"));
Transform1337.addChild(&Shape1338);

Transform1336.addChild(&Transform1337);

HAnimSegment1335.addChild(&Transform1336);

Shape& Shape1339 =  Shape();
LineSet& LineSet1340 =  LineSet();
LineSet1340.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1341 =  Coordinate();
Coordinate1341.setPoint(new float[]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325}, 6);
LineSet1340.setCoord(Coordinate1341);

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA& ColorRGBA1342 =  ColorRGBA();
ColorRGBA1342.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1340.addChild(&ColorRGBA1342);

Shape1339.setGeometry(&LineSet1340);

HAnimSegment1335.addChild(&Shape1339);

HAnimSite& HAnimSite1343 =  HAnimSite();
HAnimSite1343.X3DNode::setName(CString("r_bideltoid_pt"));
HAnimSite1343.setDEF(CString("hanim_r_bideltoid_pt"));
TouchSensor& TouchSensor1344 =  TouchSensor();
TouchSensor1344.setDescription(CString("HAnimSite r_bideltoid_pt"));
HAnimSite1343.addChild(&TouchSensor1344);

Shape& Shape1345 =  Shape();
Shape1345.setUSE(CString("HAnimSiteShape"));
HAnimSite1343.addChild(&Shape1345);

HAnimSegment1335.addChild(&HAnimSite1343);

HAnimSite& HAnimSite1346 =  HAnimSite();
HAnimSite1346.X3DNode::setName(CString("r_humeral_lateral_epicondyles_pt"));
HAnimSite1346.setDEF(CString("hanim_r_humeral_lateral_epicondyles_pt"));
HAnimSite1346.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
TouchSensor& TouchSensor1347 =  TouchSensor();
TouchSensor1347.setDescription(CString("HAnimSite r_humeral_lateral_epicondyles_pt"));
HAnimSite1346.addChild(&TouchSensor1347);

Shape& Shape1348 =  Shape();
Shape1348.setUSE(CString("HAnimSiteShape"));
HAnimSite1346.addChild(&Shape1348);

HAnimSegment1335.addChild(&HAnimSite1346);

HAnimJoint1334.addChildren(&HAnimSegment1335);

HAnimJoint& HAnimJoint1349 =  HAnimJoint();
HAnimJoint1349.X3DNode::setName(CString("r_shoulder"));
HAnimJoint1349.setDEF(CString("hanim_r_shoulder"));
HAnimJoint1349.setCenter(new float[]{-0.1907,1.4407,-0.0325});
HAnimJoint1349.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1349.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1350 =  HAnimSegment();
HAnimSegment1350.X3DNode::setName(CString("r_upperarm"));
HAnimSegment1350.setDEF(CString("hanim_r_upperarm"));
Transform& Transform1351 =  Transform();
Transform1351.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Transform& Transform1352 =  Transform();
//Empty Transform
Shape& Shape1353 =  Shape();
Shape1353.setUSE(CString("HAnimJointShape"));
Transform1352.addChild(&Shape1353);

Transform1351.addChild(&Transform1352);

HAnimSegment1350.addChild(&Transform1351);

Shape& Shape1354 =  Shape();
LineSet& LineSet1355 =  LineSet();
LineSet1355.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1356 =  Coordinate();
Coordinate1356.setPoint(new float[]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet1355.setCoord(Coordinate1356);

//from r_shoulder to r_elbow vertices 2
ColorRGBA& ColorRGBA1357 =  ColorRGBA();
ColorRGBA1357.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1355.addChild(&ColorRGBA1357);

Shape1354.setGeometry(&LineSet1355);

HAnimSegment1350.addChild(&Shape1354);

HAnimSite& HAnimSite1358 =  HAnimSite();
HAnimSite1358.X3DNode::setName(CString("r_humeral_medial_epicondyles_pt"));
HAnimSite1358.setDEF(CString("hanim_r_humeral_medial_epicondyles_pt"));
HAnimSite1358.setTranslation(new float[]{-0.168,1.1298,-0.1062});
TouchSensor& TouchSensor1359 =  TouchSensor();
TouchSensor1359.setDescription(CString("HAnimSite r_humeral_medial_epicondyles_pt"));
HAnimSite1358.addChild(&TouchSensor1359);

Shape& Shape1360 =  Shape();
Shape1360.setUSE(CString("HAnimSiteShape"));
HAnimSite1358.addChild(&Shape1360);

HAnimSegment1350.addChild(&HAnimSite1358);

HAnimSite& HAnimSite1361 =  HAnimSite();
HAnimSite1361.X3DNode::setName(CString("r_olecranon_pt"));
HAnimSite1361.setDEF(CString("hanim_r_olecranon_pt"));
HAnimSite1361.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
TouchSensor& TouchSensor1362 =  TouchSensor();
TouchSensor1362.setDescription(CString("HAnimSite r_olecranon_pt"));
HAnimSite1361.addChild(&TouchSensor1362);

Shape& Shape1363 =  Shape();
Shape1363.setUSE(CString("HAnimSiteShape"));
HAnimSite1361.addChild(&Shape1363);

HAnimSegment1350.addChild(&HAnimSite1361);

HAnimSite& HAnimSite1364 =  HAnimSite();
HAnimSite1364.X3DNode::setName(CString("r_radial_styloid_pt"));
HAnimSite1364.setDEF(CString("hanim_r_radial_styloid_pt"));
HAnimSite1364.setTranslation(new float[]{-0.1884,0.8676,-0.036});
TouchSensor& TouchSensor1365 =  TouchSensor();
TouchSensor1365.setDescription(CString("HAnimSite r_radial_styloid_pt"));
HAnimSite1364.addChild(&TouchSensor1365);

Shape& Shape1366 =  Shape();
Shape1366.setUSE(CString("HAnimSiteShape"));
HAnimSite1364.addChild(&Shape1366);

HAnimSegment1350.addChild(&HAnimSite1364);

HAnimSite& HAnimSite1367 =  HAnimSite();
HAnimSite1367.X3DNode::setName(CString("r_radiale_pt"));
HAnimSite1367.setDEF(CString("hanim_r_radiale_pt"));
HAnimSite1367.setTranslation(new float[]{-0.213,1.1305,-0.1091});
TouchSensor& TouchSensor1368 =  TouchSensor();
TouchSensor1368.setDescription(CString("HAnimSite r_radiale_pt"));
HAnimSite1367.addChild(&TouchSensor1368);

Shape& Shape1369 =  Shape();
Shape1369.setUSE(CString("HAnimSiteShape"));
HAnimSite1367.addChild(&Shape1369);

HAnimSegment1350.addChild(&HAnimSite1367);

HAnimJoint1349.addChildren(&HAnimSegment1350);

HAnimJoint& HAnimJoint1370 =  HAnimJoint();
HAnimJoint1370.X3DNode::setName(CString("r_elbow"));
HAnimJoint1370.setDEF(CString("hanim_r_elbow"));
HAnimJoint1370.setCenter(new float[]{-0.1949,1.1388,-0.062});
HAnimJoint1370.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1370.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1371 =  HAnimSegment();
HAnimSegment1371.X3DNode::setName(CString("r_forearm"));
HAnimSegment1371.setDEF(CString("hanim_r_forearm"));
Transform& Transform1372 =  Transform();
Transform1372.setTranslation(new float[]{-0.1949,1.1388,-0.062});
Transform& Transform1373 =  Transform();
//Empty Transform
Shape& Shape1374 =  Shape();
Shape1374.setUSE(CString("HAnimJointShape"));
Transform1373.addChild(&Shape1374);

Transform1372.addChild(&Transform1373);

HAnimSegment1371.addChild(&Transform1372);

Shape& Shape1375 =  Shape();
LineSet& LineSet1376 =  LineSet();
LineSet1376.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1377 =  Coordinate();
Coordinate1377.setPoint(new float[]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet1376.setCoord(Coordinate1377);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA& ColorRGBA1378 =  ColorRGBA();
ColorRGBA1378.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1376.addChild(&ColorRGBA1378);

Shape1375.setGeometry(&LineSet1376);

HAnimSegment1371.addChild(&Shape1375);

HAnimSite& HAnimSite1379 =  HAnimSite();
HAnimSite1379.X3DNode::setName(CString("r_ulnar_styloid_pt"));
HAnimSite1379.setDEF(CString("hanim_r_ulnar_styloid_pt"));
HAnimSite1379.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
TouchSensor& TouchSensor1380 =  TouchSensor();
TouchSensor1380.setDescription(CString("HAnimSite r_ulnar_styloid_pt"));
HAnimSite1379.addChild(&TouchSensor1380);

Shape& Shape1381 =  Shape();
Shape1381.setUSE(CString("HAnimSiteShape"));
HAnimSite1379.addChild(&Shape1381);

HAnimSegment1371.addChild(&HAnimSite1379);

HAnimJoint1370.addChildren(&HAnimSegment1371);

HAnimJoint& HAnimJoint1382 =  HAnimJoint();
HAnimJoint1382.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint1382.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint1382.setCenter(new float[]{-0.1959,0.8694,-0.0521});
HAnimJoint1382.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1382.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1383 =  HAnimSegment();
HAnimSegment1383.X3DNode::setName(CString("r_carpal"));
HAnimSegment1383.setDEF(CString("hanim_r_carpal"));
Transform& Transform1384 =  Transform();
Transform1384.setScale(new float[]{0.2,0.2,0.2});
Transform1384.setTranslation(new float[]{-0.2,0.85,-0.05});
Transform1384.setRotation(new float[]{0,0,1,-3.14});
//Transform right hand
Transform& Transform1385 =  Transform();
Transform1385.setRotation(new float[]{0,1,0,1.57});
//Transform right hand
Shape& Shape1386 =  Shape();
Shape1386.setUSE(CString("HAnimJointShape"));
Transform1385.addChild(&Shape1386);

Transform1384.addChild(&Transform1385);

HAnimSegment1383.addChild(&Transform1384);

Shape& Shape1387 =  Shape();
LineSet& LineSet1388 =  LineSet();
LineSet1388.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1389 =  Coordinate();
Coordinate1389.setPoint(new float[]{-0.1959,0.8694,-0.0521,-8.0515,0.9213,1.3235}, 6);
LineSet1388.setCoord(Coordinate1389);

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA& ColorRGBA1390 =  ColorRGBA();
ColorRGBA1390.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1388.addChild(&ColorRGBA1390);

Shape1387.setGeometry(&LineSet1388);

HAnimSegment1383.addChild(&Shape1387);

Shape& Shape1391 =  Shape();
LineSet& LineSet1392 =  LineSet();
LineSet1392.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1393 =  Coordinate();
Coordinate1393.setPoint(new float[]{-0.1959,0.8694,-0.0521,-8.0515,0.9225,0.8386}, 6);
LineSet1392.setCoord(Coordinate1393);

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA& ColorRGBA1394 =  ColorRGBA();
ColorRGBA1394.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1392.addChild(&ColorRGBA1394);

Shape1391.setGeometry(&LineSet1392);

HAnimSegment1383.addChild(&Shape1391);

Shape& Shape1395 =  Shape();
LineSet& LineSet1396 =  LineSet();
LineSet1396.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1397 =  Coordinate();
Coordinate1397.setPoint(new float[]{-0.1959,0.8694,-0.0521,-8.0405,0.9246,0.2513}, 6);
LineSet1396.setCoord(Coordinate1397);

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA& ColorRGBA1398 =  ColorRGBA();
ColorRGBA1398.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1396.addChild(&ColorRGBA1398);

Shape1395.setGeometry(&LineSet1396);

HAnimSegment1383.addChild(&Shape1395);

Shape& Shape1399 =  Shape();
LineSet& LineSet1400 =  LineSet();
LineSet1400.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1401 =  Coordinate();
Coordinate1401.setPoint(new float[]{-0.1959,0.8694,-0.0521,-8.0405,0.921,-0.6795}, 6);
LineSet1400.setCoord(Coordinate1401);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA& ColorRGBA1402 =  ColorRGBA();
ColorRGBA1402.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1400.addChild(&ColorRGBA1402);

Shape1399.setGeometry(&LineSet1400);

HAnimSegment1383.addChild(&Shape1399);

HAnimJoint1382.addChildren(&HAnimSegment1383);

HAnimJoint& HAnimJoint1403 =  HAnimJoint();
HAnimJoint1403.X3DNode::setName(CString("r_midcarpal_1"));
HAnimJoint1403.setDEF(CString("hanim_r_midcarpal_1"));
HAnimJoint1403.setCenter(new float[]{-8.0515,0.9213,1.3235});
HAnimJoint1403.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1403.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1404 =  HAnimSegment();
HAnimSegment1404.X3DNode::setName(CString("r_trapezium"));
HAnimSegment1404.setDEF(CString("hanim_r_trapezium"));
Transform& Transform1405 =  Transform();
Transform1405.setTranslation(new float[]{-8.0515,0.9213,1.3235});
Transform& Transform1406 =  Transform();
//Empty Transform
Shape& Shape1407 =  Shape();
Shape1407.setUSE(CString("HAnimJointShape"));
Transform1406.addChild(&Shape1407);

Transform1405.addChild(&Transform1406);

HAnimSegment1404.addChild(&Transform1405);

Shape& Shape1408 =  Shape();
LineSet& LineSet1409 =  LineSet();
LineSet1409.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1410 =  Coordinate();
Coordinate1410.setPoint(new float[]{-8.0515,0.9213,1.3235,-0.1899,0.8502,-0.0473}, 6);
LineSet1409.setCoord(Coordinate1410);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA1411 =  ColorRGBA();
ColorRGBA1411.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1409.addChild(&ColorRGBA1411);

Shape1408.setGeometry(&LineSet1409);

HAnimSegment1404.addChild(&Shape1408);

HAnimJoint1403.addChildren(&HAnimSegment1404);

HAnimJoint& HAnimJoint1412 =  HAnimJoint();
HAnimJoint1412.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint1412.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint1412.setCenter(new float[]{-0.1899,0.8502,-0.0473});
HAnimJoint1412.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1412.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1413 =  HAnimSegment();
HAnimSegment1413.X3DNode::setName(CString("r_metacarpal_1"));
HAnimSegment1413.setDEF(CString("hanim_r_metacarpal_1"));
Transform& Transform1414 =  Transform();
Transform1414.setTranslation(new float[]{-0.1899,0.8502,-0.0473});
Transform& Transform1415 =  Transform();
//Empty Transform
Shape& Shape1416 =  Shape();
Shape1416.setUSE(CString("HAnimJointShape"));
Transform1415.addChild(&Shape1416);

Transform1414.addChild(&Transform1415);

HAnimSegment1413.addChild(&Transform1414);

Shape& Shape1417 =  Shape();
LineSet& LineSet1418 =  LineSet();
LineSet1418.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1419 =  Coordinate();
Coordinate1419.setPoint(new float[]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306}, 6);
LineSet1418.setCoord(Coordinate1419);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1420 =  ColorRGBA();
ColorRGBA1420.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1418.addChild(&ColorRGBA1420);

Shape1417.setGeometry(&LineSet1418);

HAnimSegment1413.addChild(&Shape1417);

HAnimJoint1412.addChildren(&HAnimSegment1413);

HAnimJoint& HAnimJoint1421 =  HAnimJoint();
HAnimJoint1421.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1421.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint1421.setCenter(new float[]{-0.1874,0.8256,0.0306});
HAnimJoint1421.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1421.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1422 =  HAnimSegment();
HAnimSegment1422.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment1422.setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Transform& Transform1423 =  Transform();
Transform1423.setTranslation(new float[]{-0.1874,0.8256,0.0306});
Transform& Transform1424 =  Transform();
//Empty Transform
Shape& Shape1425 =  Shape();
Shape1425.setUSE(CString("HAnimJointShape"));
Transform1424.addChild(&Shape1425);

Transform1423.addChild(&Transform1424);

HAnimSegment1422.addChild(&Transform1423);

Shape& Shape1426 =  Shape();
LineSet& LineSet1427 =  LineSet();
LineSet1427.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1428 =  Coordinate();
Coordinate1428.setPoint(new float[]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506}, 6);
LineSet1427.setCoord(Coordinate1428);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1429 =  ColorRGBA();
ColorRGBA1429.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1427.addChild(&ColorRGBA1429);

Shape1426.setGeometry(&LineSet1427);

HAnimSegment1422.addChild(&Shape1426);

HAnimSite& HAnimSite1430 =  HAnimSite();
HAnimSite1430.X3DNode::setName(CString("r_carpal_distal_phalanx_1_tip"));
HAnimSite1430.setDEF(CString("hanim_r_carpal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor1431 =  TouchSensor();
TouchSensor1431.setDescription(CString("HAnimSite r_carpal_distal_phalanx_1_tip"));
HAnimSite1430.addChild(&TouchSensor1431);

Shape& Shape1432 =  Shape();
Shape1432.setUSE(CString("HAnimSiteShape"));
HAnimSite1430.addChild(&Shape1432);

HAnimSegment1422.addChild(&HAnimSite1430);

HAnimJoint1421.addChildren(&HAnimSegment1422);

HAnimJoint& HAnimJoint1433 =  HAnimJoint();
HAnimJoint1433.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1433.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint1433.setCenter(new float[]{-0.1864,0.819,0.0506});
HAnimJoint1433.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1433.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1421.addChildren(&HAnimJoint1433);

HAnimJoint1412.addChildren(&HAnimJoint1421);

HAnimJoint1403.addChildren(&HAnimJoint1412);

HAnimJoint1382.addChildren(&HAnimJoint1403);

HAnimJoint& HAnimJoint1434 =  HAnimJoint();
HAnimJoint1434.X3DNode::setName(CString("r_midcarpal_2"));
HAnimJoint1434.setDEF(CString("hanim_r_midcarpal_2"));
HAnimJoint1434.setCenter(new float[]{-8.0515,0.9225,0.8386});
HAnimJoint1434.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1434.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1435 =  HAnimSegment();
HAnimSegment1435.X3DNode::setName(CString("r_trapezoid"));
HAnimSegment1435.setDEF(CString("hanim_r_trapezoid"));
Transform& Transform1436 =  Transform();
Transform1436.setTranslation(new float[]{-8.0515,0.9225,0.8386});
Transform& Transform1437 =  Transform();
//Empty Transform
Shape& Shape1438 =  Shape();
Shape1438.setUSE(CString("HAnimJointShape"));
Transform1437.addChild(&Shape1438);

Transform1436.addChild(&Transform1437);

HAnimSegment1435.addChild(&Transform1436);

Shape& Shape1439 =  Shape();
LineSet& LineSet1440 =  LineSet();
LineSet1440.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1441 =  Coordinate();
Coordinate1441.setPoint(new float[]{-8.0515,0.9225,0.8386,-0.1961,0.8055,-0.0218}, 6);
LineSet1440.setCoord(Coordinate1441);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1442 =  ColorRGBA();
ColorRGBA1442.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1440.addChild(&ColorRGBA1442);

Shape1439.setGeometry(&LineSet1440);

HAnimSegment1435.addChild(&Shape1439);

HAnimSite& HAnimSite1443 =  HAnimSite();
HAnimSite1443.X3DNode::setName(CString("r_metacarpal_phalanx_2_pt"));
HAnimSite1443.setDEF(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimSite1443.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
TouchSensor& TouchSensor1444 =  TouchSensor();
TouchSensor1444.setDescription(CString("HAnimSite r_metacarpal_phalanx_2_pt"));
HAnimSite1443.addChild(&TouchSensor1444);

Shape& Shape1445 =  Shape();
Shape1445.setUSE(CString("HAnimSiteShape"));
HAnimSite1443.addChild(&Shape1445);

HAnimSegment1435.addChild(&HAnimSite1443);

HAnimJoint1434.addChildren(&HAnimSegment1435);

HAnimJoint& HAnimJoint1446 =  HAnimJoint();
HAnimJoint1446.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint1446.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint1446.setCenter(new float[]{-0.1961,0.8055,-0.0218});
HAnimJoint1446.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1446.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1447 =  HAnimSegment();
HAnimSegment1447.X3DNode::setName(CString("r_metacarpal_2"));
HAnimSegment1447.setDEF(CString("hanim_r_metacarpal_2"));
Transform& Transform1448 =  Transform();
Transform1448.setTranslation(new float[]{-0.1961,0.8055,-0.0218});
Transform& Transform1449 =  Transform();
//Empty Transform
Shape& Shape1450 =  Shape();
Shape1450.setUSE(CString("HAnimJointShape"));
Transform1449.addChild(&Shape1450);

Transform1448.addChild(&Transform1449);

HAnimSegment1447.addChild(&Transform1448);

Shape& Shape1451 =  Shape();
LineSet& LineSet1452 =  LineSet();
LineSet1452.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1453 =  Coordinate();
Coordinate1453.setPoint(new float[]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218}, 6);
LineSet1452.setCoord(Coordinate1453);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1454 =  ColorRGBA();
ColorRGBA1454.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1452.addChild(&ColorRGBA1454);

Shape1451.setGeometry(&LineSet1452);

HAnimSegment1447.addChild(&Shape1451);

HAnimJoint1446.addChildren(&HAnimSegment1447);

HAnimJoint& HAnimJoint1455 =  HAnimJoint();
HAnimJoint1455.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1455.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint1455.setCenter(new float[]{-0.1961,0.7846,-0.0218});
HAnimJoint1455.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1455.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1456 =  HAnimSegment();
HAnimSegment1456.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment1456.setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Transform& Transform1457 =  Transform();
Transform1457.setTranslation(new float[]{-0.1961,0.7846,-0.0218});
Transform& Transform1458 =  Transform();
//Empty Transform
Shape& Shape1459 =  Shape();
Shape1459.setUSE(CString("HAnimJointShape"));
Transform1458.addChild(&Shape1459);

Transform1457.addChild(&Transform1458);

HAnimSegment1456.addChild(&Transform1457);

Shape& Shape1460 =  Shape();
LineSet& LineSet1461 =  LineSet();
LineSet1461.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1462 =  Coordinate();
Coordinate1462.setPoint(new float[]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185}, 6);
LineSet1461.setCoord(Coordinate1462);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1463 =  ColorRGBA();
ColorRGBA1463.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1461.addChild(&ColorRGBA1463);

Shape1460.setGeometry(&LineSet1461);

HAnimSegment1456.addChild(&Shape1460);

HAnimJoint1455.addChildren(&HAnimSegment1456);

HAnimJoint& HAnimJoint1464 =  HAnimJoint();
HAnimJoint1464.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1464.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1464.setCenter(new float[]{-0.1954,0.7393,-0.0185});
HAnimJoint1464.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1464.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1465 =  HAnimSegment();
HAnimSegment1465.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment1465.setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Transform& Transform1466 =  Transform();
Transform1466.setTranslation(new float[]{-0.1954,0.7393,-0.0185});
Transform& Transform1467 =  Transform();
//Empty Transform
Shape& Shape1468 =  Shape();
Shape1468.setUSE(CString("HAnimJointShape"));
Transform1467.addChild(&Shape1468);

Transform1466.addChild(&Transform1467);

HAnimSegment1465.addChild(&Transform1466);

Shape& Shape1469 =  Shape();
LineSet& LineSet1470 =  LineSet();
LineSet1470.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1471 =  Coordinate();
Coordinate1471.setPoint(new float[]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173}, 6);
LineSet1470.setCoord(Coordinate1471);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1472 =  ColorRGBA();
ColorRGBA1472.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1470.addChild(&ColorRGBA1472);

Shape1469.setGeometry(&LineSet1470);

HAnimSegment1465.addChild(&Shape1469);

HAnimSite& HAnimSite1473 =  HAnimSite();
HAnimSite1473.X3DNode::setName(CString("r_carpal_distal_phalanx_2_tip"));
HAnimSite1473.setDEF(CString("hanim_r_carpal_distal_phalanx_2_tip"));
TouchSensor& TouchSensor1474 =  TouchSensor();
TouchSensor1474.setDescription(CString("HAnimSite r_carpal_distal_phalanx_2_tip"));
HAnimSite1473.addChild(&TouchSensor1474);

Shape& Shape1475 =  Shape();
Shape1475.setUSE(CString("HAnimSiteShape"));
HAnimSite1473.addChild(&Shape1475);

HAnimSegment1465.addChild(&HAnimSite1473);

HAnimSite& HAnimSite1476 =  HAnimSite();
HAnimSite1476.X3DNode::setName(CString("r_dactylion_pt"));
HAnimSite1476.setDEF(CString("hanim_r_dactylion_pt"));
HAnimSite1476.setTranslation(new float[]{-0.1941,0.6772,-0.0423});
TouchSensor& TouchSensor1477 =  TouchSensor();
TouchSensor1477.setDescription(CString("HAnimSite r_dactylion_pt"));
HAnimSite1476.addChild(&TouchSensor1477);

Shape& Shape1478 =  Shape();
Shape1478.setUSE(CString("HAnimSiteShape"));
HAnimSite1476.addChild(&Shape1478);

HAnimSegment1465.addChild(&HAnimSite1476);

HAnimJoint1464.addChildren(&HAnimSegment1465);

HAnimJoint& HAnimJoint1479 =  HAnimJoint();
HAnimJoint1479.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1479.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint1479.setCenter(new float[]{-0.1945,0.7169,-0.0173});
HAnimJoint1479.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1479.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1464.addChildren(&HAnimJoint1479);

HAnimJoint1455.addChildren(&HAnimJoint1464);

HAnimJoint1446.addChildren(&HAnimJoint1455);

HAnimJoint1434.addChildren(&HAnimJoint1446);

HAnimJoint1382.addChildren(&HAnimJoint1434);

HAnimJoint& HAnimJoint1480 =  HAnimJoint();
HAnimJoint1480.X3DNode::setName(CString("r_midcarpal_3"));
HAnimJoint1480.setDEF(CString("hanim_r_midcarpal_3"));
HAnimJoint1480.setCenter(new float[]{-8.0405,0.9246,0.2513});
HAnimJoint1480.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1480.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1481 =  HAnimSegment();
HAnimSegment1481.X3DNode::setName(CString("r_capitate"));
HAnimSegment1481.setDEF(CString("hanim_r_capitate"));
Transform& Transform1482 =  Transform();
Transform1482.setTranslation(new float[]{-8.0405,0.9246,0.2513});
Transform& Transform1483 =  Transform();
//Empty Transform
Shape& Shape1484 =  Shape();
Shape1484.setUSE(CString("HAnimJointShape"));
Transform1483.addChild(&Shape1484);

Transform1482.addChild(&Transform1483);

HAnimSegment1481.addChild(&Transform1482);

Shape& Shape1485 =  Shape();
LineSet& LineSet1486 =  LineSet();
LineSet1486.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1487 =  Coordinate();
Coordinate1487.setPoint(new float[]{-8.0405,0.9246,0.2513,-0.1972,0.806,-0.0468}, 6);
LineSet1486.setCoord(Coordinate1487);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1488 =  ColorRGBA();
ColorRGBA1488.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1486.addChild(&ColorRGBA1488);

Shape1485.setGeometry(&LineSet1486);

HAnimSegment1481.addChild(&Shape1485);

HAnimSite& HAnimSite1489 =  HAnimSite();
HAnimSite1489.X3DNode::setName(CString("r_metacarpal_phalanx_3_pt"));
HAnimSite1489.setDEF(CString("hanim_r_metacarpal_phalanx_3_pt"));
TouchSensor& TouchSensor1490 =  TouchSensor();
TouchSensor1490.setDescription(CString("HAnimSite r_metacarpal_phalanx_3_pt"));
HAnimSite1489.addChild(&TouchSensor1490);

Shape& Shape1491 =  Shape();
Shape1491.setUSE(CString("HAnimSiteShape"));
HAnimSite1489.addChild(&Shape1491);

HAnimSegment1481.addChild(&HAnimSite1489);

HAnimJoint1480.addChildren(&HAnimSegment1481);

HAnimJoint& HAnimJoint1492 =  HAnimJoint();
HAnimJoint1492.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint1492.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint1492.setCenter(new float[]{-0.1972,0.806,-0.0468});
HAnimJoint1492.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1492.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1493 =  HAnimSegment();
HAnimSegment1493.X3DNode::setName(CString("r_metacarpal_3"));
HAnimSegment1493.setDEF(CString("hanim_r_metacarpal_3"));
Transform& Transform1494 =  Transform();
Transform1494.setTranslation(new float[]{-0.1972,0.806,-0.0468});
Transform& Transform1495 =  Transform();
//Empty Transform
Shape& Shape1496 =  Shape();
Shape1496.setUSE(CString("HAnimJointShape"));
Transform1495.addChild(&Shape1496);

Transform1494.addChild(&Transform1495);

HAnimSegment1493.addChild(&Transform1494);

Shape& Shape1497 =  Shape();
LineSet& LineSet1498 =  LineSet();
LineSet1498.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1499 =  Coordinate();
Coordinate1499.setPoint(new float[]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468}, 6);
LineSet1498.setCoord(Coordinate1499);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1500 =  ColorRGBA();
ColorRGBA1500.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1498.addChild(&ColorRGBA1500);

Shape1497.setGeometry(&LineSet1498);

HAnimSegment1493.addChild(&Shape1497);

HAnimJoint1492.addChildren(&HAnimSegment1493);

HAnimJoint& HAnimJoint1501 =  HAnimJoint();
HAnimJoint1501.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1501.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint1501.setCenter(new float[]{-0.1972,0.7849,-0.0468});
HAnimJoint1501.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1501.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1502 =  HAnimSegment();
HAnimSegment1502.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment1502.setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Transform& Transform1503 =  Transform();
Transform1503.setTranslation(new float[]{-0.1972,0.7849,-0.0468});
Transform& Transform1504 =  Transform();
//Empty Transform
Shape& Shape1505 =  Shape();
Shape1505.setUSE(CString("HAnimJointShape"));
Transform1504.addChild(&Shape1505);

Transform1503.addChild(&Transform1504);

HAnimSegment1502.addChild(&Transform1503);

Shape& Shape1506 =  Shape();
LineSet& LineSet1507 =  LineSet();
LineSet1507.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1508 =  Coordinate();
Coordinate1508.setPoint(new float[]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441}, 6);
LineSet1507.setCoord(Coordinate1508);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1509 =  ColorRGBA();
ColorRGBA1509.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1507.addChild(&ColorRGBA1509);

Shape1506.setGeometry(&LineSet1507);

HAnimSegment1502.addChild(&Shape1506);

HAnimJoint1501.addChildren(&HAnimSegment1502);

HAnimJoint& HAnimJoint1510 =  HAnimJoint();
HAnimJoint1510.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1510.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1510.setCenter(new float[]{-0.195,0.7304,-0.0441});
HAnimJoint1510.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1510.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1511 =  HAnimSegment();
HAnimSegment1511.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment1511.setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Transform& Transform1512 =  Transform();
Transform1512.setTranslation(new float[]{-0.195,0.7304,-0.0441});
Transform& Transform1513 =  Transform();
//Empty Transform
Shape& Shape1514 =  Shape();
Shape1514.setUSE(CString("HAnimJointShape"));
Transform1513.addChild(&Shape1514);

Transform1512.addChild(&Transform1513);

HAnimSegment1511.addChild(&Transform1512);

Shape& Shape1515 =  Shape();
LineSet& LineSet1516 =  LineSet();
LineSet1516.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1517 =  Coordinate();
Coordinate1517.setPoint(new float[]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432}, 6);
LineSet1516.setCoord(Coordinate1517);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1518 =  ColorRGBA();
ColorRGBA1518.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1516.addChild(&ColorRGBA1518);

Shape1515.setGeometry(&LineSet1516);

HAnimSegment1511.addChild(&Shape1515);

HAnimSite& HAnimSite1519 =  HAnimSite();
HAnimSite1519.X3DNode::setName(CString("r_carpal_distal_phalanx_3_tip"));
HAnimSite1519.setDEF(CString("hanim_r_carpal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor1520 =  TouchSensor();
TouchSensor1520.setDescription(CString("HAnimSite r_carpal_distal_phalanx_3_tip"));
HAnimSite1519.addChild(&TouchSensor1520);

Shape& Shape1521 =  Shape();
Shape1521.setUSE(CString("HAnimSiteShape"));
HAnimSite1519.addChild(&Shape1521);

HAnimSegment1511.addChild(&HAnimSite1519);

HAnimJoint1510.addChildren(&HAnimSegment1511);

HAnimJoint& HAnimJoint1522 =  HAnimJoint();
HAnimJoint1522.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1522.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint1522.setCenter(new float[]{-0.1939,0.7042,-0.0432});
HAnimJoint1522.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1522.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1510.addChildren(&HAnimJoint1522);

HAnimJoint1501.addChildren(&HAnimJoint1510);

HAnimJoint1492.addChildren(&HAnimJoint1501);

HAnimJoint1480.addChildren(&HAnimJoint1492);

HAnimJoint1382.addChildren(&HAnimJoint1480);

HAnimJoint& HAnimJoint1523 =  HAnimJoint();
HAnimJoint1523.X3DNode::setName(CString("r_midcarpal_4_5"));
HAnimJoint1523.setDEF(CString("hanim_r_midcarpal_4_5"));
HAnimJoint1523.setCenter(new float[]{-8.0405,0.921,-0.6795});
HAnimJoint1523.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1523.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1524 =  HAnimSegment();
HAnimSegment1524.X3DNode::setName(CString("r_hamate"));
HAnimSegment1524.setDEF(CString("hanim_r_hamate"));
Transform& Transform1525 =  Transform();
Transform1525.setTranslation(new float[]{-8.0405,0.921,-0.6795});
Transform& Transform1526 =  Transform();
//Empty Transform
Shape& Shape1527 =  Shape();
Shape1527.setUSE(CString("HAnimJointShape"));
Transform1526.addChild(&Shape1527);

Transform1525.addChild(&Transform1526);

HAnimSegment1524.addChild(&Transform1525);

Shape& Shape1528 =  Shape();
LineSet& LineSet1529 =  LineSet();
LineSet1529.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1530 =  Coordinate();
Coordinate1530.setPoint(new float[]{-8.0405,0.921,-0.6795,-0.1951,0.8049,-0.0732}, 6);
LineSet1529.setCoord(Coordinate1530);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1531 =  ColorRGBA();
ColorRGBA1531.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1529.addChild(&ColorRGBA1531);

Shape1528.setGeometry(&LineSet1529);

HAnimSegment1524.addChild(&Shape1528);

Shape& Shape1532 =  Shape();
LineSet& LineSet1533 =  LineSet();
LineSet1533.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1534 =  Coordinate();
Coordinate1534.setPoint(new float[]{-8.0405,0.921,-0.6795,-0.1926,0.8096,-0.0975}, 6);
LineSet1533.setCoord(Coordinate1534);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1535 =  ColorRGBA();
ColorRGBA1535.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1533.addChild(&ColorRGBA1535);

Shape1532.setGeometry(&LineSet1533);

HAnimSegment1524.addChild(&Shape1532);

HAnimSite& HAnimSite1536 =  HAnimSite();
HAnimSite1536.X3DNode::setName(CString("r_metacarpal_phalanx_5_pt"));
HAnimSite1536.setDEF(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimSite1536.setTranslation(new float[]{-0.1929,0.789,-0.1064});
TouchSensor& TouchSensor1537 =  TouchSensor();
TouchSensor1537.setDescription(CString("HAnimSite r_metacarpal_phalanx_5_pt"));
HAnimSite1536.addChild(&TouchSensor1537);

Shape& Shape1538 =  Shape();
Shape1538.setUSE(CString("HAnimSiteShape"));
HAnimSite1536.addChild(&Shape1538);

HAnimSegment1524.addChild(&HAnimSite1536);

HAnimJoint1523.addChildren(&HAnimSegment1524);

HAnimJoint& HAnimJoint1539 =  HAnimJoint();
HAnimJoint1539.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint1539.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint1539.setCenter(new float[]{-0.1951,0.8049,-0.0732});
HAnimJoint1539.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1539.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1540 =  HAnimSegment();
HAnimSegment1540.X3DNode::setName(CString("r_metacarpal_4"));
HAnimSegment1540.setDEF(CString("hanim_r_metacarpal_4"));
Transform& Transform1541 =  Transform();
Transform1541.setTranslation(new float[]{-0.1951,0.8049,-0.0732});
Transform& Transform1542 =  Transform();
//Empty Transform
Shape& Shape1543 =  Shape();
Shape1543.setUSE(CString("HAnimJointShape"));
Transform1542.addChild(&Shape1543);

Transform1541.addChild(&Transform1542);

HAnimSegment1540.addChild(&Transform1541);

Shape& Shape1544 =  Shape();
LineSet& LineSet1545 =  LineSet();
LineSet1545.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1546 =  Coordinate();
Coordinate1546.setPoint(new float[]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732}, 6);
LineSet1545.setCoord(Coordinate1546);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1547 =  ColorRGBA();
ColorRGBA1547.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1545.addChild(&ColorRGBA1547);

Shape1544.setGeometry(&LineSet1545);

HAnimSegment1540.addChild(&Shape1544);

HAnimJoint1539.addChildren(&HAnimSegment1540);

HAnimJoint& HAnimJoint1548 =  HAnimJoint();
HAnimJoint1548.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1548.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint1548.setCenter(new float[]{-0.1951,0.7845,-0.0732});
HAnimJoint1548.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1548.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1549 =  HAnimSegment();
HAnimSegment1549.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment1549.setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Transform& Transform1550 =  Transform();
Transform1550.setTranslation(new float[]{-0.1951,0.7845,-0.0732});
Transform& Transform1551 =  Transform();
//Empty Transform
Shape& Shape1552 =  Shape();
Shape1552.setUSE(CString("HAnimJointShape"));
Transform1551.addChild(&Shape1552);

Transform1550.addChild(&Transform1551);

HAnimSegment1549.addChild(&Transform1550);

Shape& Shape1553 =  Shape();
LineSet& LineSet1554 =  LineSet();
LineSet1554.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1555 =  Coordinate();
Coordinate1555.setPoint(new float[]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716}, 6);
LineSet1554.setCoord(Coordinate1555);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1556 =  ColorRGBA();
ColorRGBA1556.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1554.addChild(&ColorRGBA1556);

Shape1553.setGeometry(&LineSet1554);

HAnimSegment1549.addChild(&Shape1553);

HAnimJoint1548.addChildren(&HAnimSegment1549);

HAnimJoint& HAnimJoint1557 =  HAnimJoint();
HAnimJoint1557.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1557.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1557.setCenter(new float[]{-0.192,0.7318,-0.0716});
HAnimJoint1557.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1557.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1558 =  HAnimSegment();
HAnimSegment1558.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment1558.setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Transform& Transform1559 =  Transform();
Transform1559.setTranslation(new float[]{-0.192,0.7318,-0.0716});
Transform& Transform1560 =  Transform();
//Empty Transform
Shape& Shape1561 =  Shape();
Shape1561.setUSE(CString("HAnimJointShape"));
Transform1560.addChild(&Shape1561);

Transform1559.addChild(&Transform1560);

HAnimSegment1558.addChild(&Transform1559);

Shape& Shape1562 =  Shape();
LineSet& LineSet1563 =  LineSet();
LineSet1563.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1564 =  Coordinate();
Coordinate1564.setPoint(new float[]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706}, 6);
LineSet1563.setCoord(Coordinate1564);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1565 =  ColorRGBA();
ColorRGBA1565.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1563.addChild(&ColorRGBA1565);

Shape1562.setGeometry(&LineSet1563);

HAnimSegment1558.addChild(&Shape1562);

HAnimSite& HAnimSite1566 =  HAnimSite();
HAnimSite1566.X3DNode::setName(CString("r_carpal_distal_phalanx_4_tip"));
HAnimSite1566.setDEF(CString("hanim_r_carpal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor1567 =  TouchSensor();
TouchSensor1567.setDescription(CString("HAnimSite r_carpal_distal_phalanx_4_tip"));
HAnimSite1566.addChild(&TouchSensor1567);

Shape& Shape1568 =  Shape();
Shape1568.setUSE(CString("HAnimSiteShape"));
HAnimSite1566.addChild(&Shape1568);

HAnimSegment1558.addChild(&HAnimSite1566);

HAnimJoint1557.addChildren(&HAnimSegment1558);

HAnimJoint& HAnimJoint1569 =  HAnimJoint();
HAnimJoint1569.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1569.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint1569.setCenter(new float[]{-0.1908,0.7077,-0.0706});
HAnimJoint1569.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1569.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1557.addChildren(&HAnimJoint1569);

HAnimJoint1548.addChildren(&HAnimJoint1557);

HAnimJoint1539.addChildren(&HAnimJoint1548);

HAnimJoint1523.addChildren(&HAnimJoint1539);

HAnimJoint& HAnimJoint1570 =  HAnimJoint();
HAnimJoint1570.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint1570.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint1570.setCenter(new float[]{-0.1926,0.8096,-0.0975});
HAnimJoint1570.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1570.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1571 =  HAnimSegment();
HAnimSegment1571.X3DNode::setName(CString("r_metacarpal_5"));
HAnimSegment1571.setDEF(CString("hanim_r_metacarpal_5"));
Transform& Transform1572 =  Transform();
Transform1572.setTranslation(new float[]{-0.1926,0.8096,-0.0975});
Transform& Transform1573 =  Transform();
//Empty Transform
Shape& Shape1574 =  Shape();
Shape1574.setUSE(CString("HAnimJointShape"));
Transform1573.addChild(&Shape1574);

Transform1572.addChild(&Transform1573);

HAnimSegment1571.addChild(&Transform1572);

Shape& Shape1575 =  Shape();
LineSet& LineSet1576 =  LineSet();
LineSet1576.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1577 =  Coordinate();
Coordinate1577.setPoint(new float[]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975}, 6);
LineSet1576.setCoord(Coordinate1577);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1578 =  ColorRGBA();
ColorRGBA1578.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1576.addChild(&ColorRGBA1578);

Shape1575.setGeometry(&LineSet1576);

HAnimSegment1571.addChild(&Shape1575);

HAnimJoint1570.addChildren(&HAnimSegment1571);

HAnimJoint& HAnimJoint1579 =  HAnimJoint();
HAnimJoint1579.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1579.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint1579.setCenter(new float[]{-0.1926,0.7896,-0.0975});
HAnimJoint1579.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1579.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1580 =  HAnimSegment();
HAnimSegment1580.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment1580.setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Transform& Transform1581 =  Transform();
Transform1581.setTranslation(new float[]{-0.1926,0.7896,-0.0975});
Transform& Transform1582 =  Transform();
//Empty Transform
Shape& Shape1583 =  Shape();
Shape1583.setUSE(CString("HAnimJointShape"));
Transform1582.addChild(&Shape1583);

Transform1581.addChild(&Transform1582);

HAnimSegment1580.addChild(&Transform1581);

Shape& Shape1584 =  Shape();
LineSet& LineSet1585 =  LineSet();
LineSet1585.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1586 =  Coordinate();
Coordinate1586.setPoint(new float[]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963}, 6);
LineSet1585.setCoord(Coordinate1586);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1587 =  ColorRGBA();
ColorRGBA1587.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1585.addChild(&ColorRGBA1587);

Shape1584.setGeometry(&LineSet1585);

HAnimSegment1580.addChild(&Shape1584);

HAnimJoint1579.addChildren(&HAnimSegment1580);

HAnimJoint& HAnimJoint1588 =  HAnimJoint();
HAnimJoint1588.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1588.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1588.setCenter(new float[]{-0.1902,0.7483,-0.0963});
HAnimJoint1588.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1588.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1589 =  HAnimSegment();
HAnimSegment1589.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment1589.setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Transform& Transform1590 =  Transform();
Transform1590.setTranslation(new float[]{-0.1902,0.7483,-0.0963});
Transform& Transform1591 =  Transform();
//Empty Transform
Shape& Shape1592 =  Shape();
Shape1592.setUSE(CString("HAnimJointShape"));
Transform1591.addChild(&Shape1592);

Transform1590.addChild(&Transform1591);

HAnimSegment1589.addChild(&Transform1590);

Shape& Shape1593 =  Shape();
LineSet& LineSet1594 =  LineSet();
LineSet1594.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1595 =  Coordinate();
Coordinate1595.setPoint(new float[]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096}, 6);
LineSet1594.setCoord(Coordinate1595);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1596 =  ColorRGBA();
ColorRGBA1596.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1594.addChild(&ColorRGBA1596);

Shape1593.setGeometry(&LineSet1594);

HAnimSegment1589.addChild(&Shape1593);

HAnimSite& HAnimSite1597 =  HAnimSite();
HAnimSite1597.X3DNode::setName(CString("r_carpal_distal_phalanx_5_tip"));
HAnimSite1597.setDEF(CString("hanim_r_carpal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor1598 =  TouchSensor();
TouchSensor1598.setDescription(CString("HAnimSite r_carpal_distal_phalanx_5_tip"));
HAnimSite1597.addChild(&TouchSensor1598);

Shape& Shape1599 =  Shape();
Shape1599.setUSE(CString("HAnimSiteShape"));
HAnimSite1597.addChild(&Shape1599);

HAnimSegment1589.addChild(&HAnimSite1597);

HAnimJoint1588.addChildren(&HAnimSegment1589);

HAnimJoint& HAnimJoint1600 =  HAnimJoint();
HAnimJoint1600.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1600.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint1600.setCenter(new float[]{-0.1908,0.754,-0.096});
HAnimJoint1600.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1600.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1588.addChildren(&HAnimJoint1600);

HAnimJoint1579.addChildren(&HAnimJoint1588);

HAnimJoint1570.addChildren(&HAnimJoint1579);

HAnimJoint1523.addChildren(&HAnimJoint1570);

HAnimJoint1382.addChildren(&HAnimJoint1523);

HAnimJoint1370.addChildren(&HAnimJoint1382);

HAnimJoint1349.addChildren(&HAnimJoint1370);

HAnimJoint1334.addChildren(&HAnimJoint1349);

HAnimJoint1325.addChildren(&HAnimJoint1334);

HAnimJoint845.addChildren(&HAnimJoint1325);

HAnimJoint830.addChildren(&HAnimJoint845);

HAnimJoint821.addChildren(&HAnimJoint830);

HAnimJoint812.addChildren(&HAnimJoint821);

HAnimJoint803.addChildren(&HAnimJoint812);

HAnimJoint791.addChildren(&HAnimJoint803);

HAnimJoint770.addChildren(&HAnimJoint791);

HAnimJoint761.addChildren(&HAnimJoint770);

HAnimJoint752.addChildren(&HAnimJoint761);

HAnimJoint737.addChildren(&HAnimJoint752);

HAnimJoint725.addChildren(&HAnimJoint737);

HAnimJoint716.addChildren(&HAnimJoint725);

HAnimJoint707.addChildren(&HAnimJoint716);

HAnimJoint698.addChildren(&HAnimJoint707);

HAnimJoint680.addChildren(&HAnimJoint698);

HAnimJoint671.addChildren(&HAnimJoint680);

HAnimJoint662.addChildren(&HAnimJoint671);

HAnimJoint45.addChildren(&HAnimJoint662);

HAnimHumanoid43.setSkeleton(&HAnimJoint45);

HAnimJoint& HAnimJoint1601 =  HAnimJoint();
HAnimJoint1601.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid43.setJoints(&HAnimJoint1601);

HAnimJoint& HAnimJoint1602 =  HAnimJoint();
HAnimJoint1602.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid43.setJoints(&HAnimJoint1602);

HAnimJoint& HAnimJoint1603 =  HAnimJoint();
HAnimJoint1603.setUSE(CString("hanim_l_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint1603);

HAnimJoint& HAnimJoint1604 =  HAnimJoint();
HAnimJoint1604.setUSE(CString("hanim_l_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint1604);

HAnimJoint& HAnimJoint1605 =  HAnimJoint();
HAnimJoint1605.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid43.setJoints(&HAnimJoint1605);

HAnimJoint& HAnimJoint1606 =  HAnimJoint();
HAnimJoint1606.setUSE(CString("hanim_l_talocalcaneonavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1606);

HAnimJoint& HAnimJoint1607 =  HAnimJoint();
HAnimJoint1607.setUSE(CString("hanim_l_cuneonavicular_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1607);

HAnimJoint& HAnimJoint1608 =  HAnimJoint();
HAnimJoint1608.setUSE(CString("hanim_l_tarsometatarsal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1608);

HAnimJoint& HAnimJoint1609 =  HAnimJoint();
HAnimJoint1609.setUSE(CString("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1609);

HAnimJoint& HAnimJoint1610 =  HAnimJoint();
HAnimJoint1610.setUSE(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1610);

HAnimJoint& HAnimJoint1611 =  HAnimJoint();
HAnimJoint1611.setUSE(CString("hanim_l_cuneonavicular_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1611);

HAnimJoint& HAnimJoint1612 =  HAnimJoint();
HAnimJoint1612.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1612);

HAnimJoint& HAnimJoint1613 =  HAnimJoint();
HAnimJoint1613.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1613);

HAnimJoint& HAnimJoint1614 =  HAnimJoint();
HAnimJoint1614.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1614);

HAnimJoint& HAnimJoint1615 =  HAnimJoint();
HAnimJoint1615.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1615);

HAnimJoint& HAnimJoint1616 =  HAnimJoint();
HAnimJoint1616.setUSE(CString("hanim_l_cuneonavicular_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1616);

HAnimJoint& HAnimJoint1617 =  HAnimJoint();
HAnimJoint1617.setUSE(CString("hanim_l_tarsometatarsal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1617);

HAnimJoint& HAnimJoint1618 =  HAnimJoint();
HAnimJoint1618.setUSE(CString("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1618);

HAnimJoint& HAnimJoint1619 =  HAnimJoint();
HAnimJoint1619.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1619);

HAnimJoint& HAnimJoint1620 =  HAnimJoint();
HAnimJoint1620.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1620);

HAnimJoint& HAnimJoint1621 =  HAnimJoint();
HAnimJoint1621.setUSE(CString("hanim_l_calcaneocuboid"));
HAnimHumanoid43.setJoints(&HAnimJoint1621);

HAnimJoint& HAnimJoint1622 =  HAnimJoint();
HAnimJoint1622.setUSE(CString("hanim_l_transversetarsal"));
HAnimHumanoid43.setJoints(&HAnimJoint1622);

HAnimJoint& HAnimJoint1623 =  HAnimJoint();
HAnimJoint1623.setUSE(CString("hanim_l_tarsometatarsal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1623);

HAnimJoint& HAnimJoint1624 =  HAnimJoint();
HAnimJoint1624.setUSE(CString("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1624);

HAnimJoint& HAnimJoint1625 =  HAnimJoint();
HAnimJoint1625.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1625);

HAnimJoint& HAnimJoint1626 =  HAnimJoint();
HAnimJoint1626.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1626);

HAnimJoint& HAnimJoint1627 =  HAnimJoint();
HAnimJoint1627.setUSE(CString("hanim_l_tarsometatarsal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1627);

HAnimJoint& HAnimJoint1628 =  HAnimJoint();
HAnimJoint1628.setUSE(CString("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1628);

HAnimJoint& HAnimJoint1629 =  HAnimJoint();
HAnimJoint1629.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1629);

HAnimJoint& HAnimJoint1630 =  HAnimJoint();
HAnimJoint1630.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1630);

HAnimJoint& HAnimJoint1631 =  HAnimJoint();
HAnimJoint1631.setUSE(CString("hanim_r_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint1631);

HAnimJoint& HAnimJoint1632 =  HAnimJoint();
HAnimJoint1632.setUSE(CString("hanim_r_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint1632);

HAnimJoint& HAnimJoint1633 =  HAnimJoint();
HAnimJoint1633.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid43.setJoints(&HAnimJoint1633);

HAnimJoint& HAnimJoint1634 =  HAnimJoint();
HAnimJoint1634.setUSE(CString("hanim_r_talocalcaneonavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1634);

HAnimJoint& HAnimJoint1635 =  HAnimJoint();
HAnimJoint1635.setUSE(CString("hanim_r_cuneonavicular_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1635);

HAnimJoint& HAnimJoint1636 =  HAnimJoint();
HAnimJoint1636.setUSE(CString("hanim_r_tarsometatarsal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1636);

HAnimJoint& HAnimJoint1637 =  HAnimJoint();
HAnimJoint1637.setUSE(CString("hanim_r_metatarsophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1637);

HAnimJoint& HAnimJoint1638 =  HAnimJoint();
HAnimJoint1638.setUSE(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1638);

HAnimJoint& HAnimJoint1639 =  HAnimJoint();
HAnimJoint1639.setUSE(CString("hanim_r_cuneonavicular_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1639);

HAnimJoint& HAnimJoint1640 =  HAnimJoint();
HAnimJoint1640.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1640);

HAnimJoint& HAnimJoint1641 =  HAnimJoint();
HAnimJoint1641.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1641);

HAnimJoint& HAnimJoint1642 =  HAnimJoint();
HAnimJoint1642.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1642);

HAnimJoint& HAnimJoint1643 =  HAnimJoint();
HAnimJoint1643.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1643);

HAnimJoint& HAnimJoint1644 =  HAnimJoint();
HAnimJoint1644.setUSE(CString("hanim_r_cuneonavicular_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1644);

HAnimJoint& HAnimJoint1645 =  HAnimJoint();
HAnimJoint1645.setUSE(CString("hanim_r_tarsometatarsal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1645);

HAnimJoint& HAnimJoint1646 =  HAnimJoint();
HAnimJoint1646.setUSE(CString("hanim_r_metatarsophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1646);

HAnimJoint& HAnimJoint1647 =  HAnimJoint();
HAnimJoint1647.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1647);

HAnimJoint& HAnimJoint1648 =  HAnimJoint();
HAnimJoint1648.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1648);

HAnimJoint& HAnimJoint1649 =  HAnimJoint();
HAnimJoint1649.setUSE(CString("hanim_r_calcaneocuboid"));
HAnimHumanoid43.setJoints(&HAnimJoint1649);

HAnimJoint& HAnimJoint1650 =  HAnimJoint();
HAnimJoint1650.setUSE(CString("hanim_r_transversetarsal"));
HAnimHumanoid43.setJoints(&HAnimJoint1650);

HAnimJoint& HAnimJoint1651 =  HAnimJoint();
HAnimJoint1651.setUSE(CString("hanim_r_tarsometatarsal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1651);

HAnimJoint& HAnimJoint1652 =  HAnimJoint();
HAnimJoint1652.setUSE(CString("hanim_r_metatarsophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1652);

HAnimJoint& HAnimJoint1653 =  HAnimJoint();
HAnimJoint1653.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1653);

HAnimJoint& HAnimJoint1654 =  HAnimJoint();
HAnimJoint1654.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1654);

HAnimJoint& HAnimJoint1655 =  HAnimJoint();
HAnimJoint1655.setUSE(CString("hanim_r_tarsometatarsal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1655);

HAnimJoint& HAnimJoint1656 =  HAnimJoint();
HAnimJoint1656.setUSE(CString("hanim_r_metatarsophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1656);

HAnimJoint& HAnimJoint1657 =  HAnimJoint();
HAnimJoint1657.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1657);

HAnimJoint& HAnimJoint1658 =  HAnimJoint();
HAnimJoint1658.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1658);

HAnimJoint& HAnimJoint1659 =  HAnimJoint();
HAnimJoint1659.setUSE(CString("hanim_vl5"));
HAnimHumanoid43.setJoints(&HAnimJoint1659);

HAnimJoint& HAnimJoint1660 =  HAnimJoint();
HAnimJoint1660.setUSE(CString("hanim_vl4"));
HAnimHumanoid43.setJoints(&HAnimJoint1660);

HAnimJoint& HAnimJoint1661 =  HAnimJoint();
HAnimJoint1661.setUSE(CString("hanim_vl3"));
HAnimHumanoid43.setJoints(&HAnimJoint1661);

HAnimJoint& HAnimJoint1662 =  HAnimJoint();
HAnimJoint1662.setUSE(CString("hanim_vl2"));
HAnimHumanoid43.setJoints(&HAnimJoint1662);

HAnimJoint& HAnimJoint1663 =  HAnimJoint();
HAnimJoint1663.setUSE(CString("hanim_vl1"));
HAnimHumanoid43.setJoints(&HAnimJoint1663);

HAnimJoint& HAnimJoint1664 =  HAnimJoint();
HAnimJoint1664.setUSE(CString("hanim_vt12"));
HAnimHumanoid43.setJoints(&HAnimJoint1664);

HAnimJoint& HAnimJoint1665 =  HAnimJoint();
HAnimJoint1665.setUSE(CString("hanim_vt11"));
HAnimHumanoid43.setJoints(&HAnimJoint1665);

HAnimJoint& HAnimJoint1666 =  HAnimJoint();
HAnimJoint1666.setUSE(CString("hanim_vt10"));
HAnimHumanoid43.setJoints(&HAnimJoint1666);

HAnimJoint& HAnimJoint1667 =  HAnimJoint();
HAnimJoint1667.setUSE(CString("hanim_vt9"));
HAnimHumanoid43.setJoints(&HAnimJoint1667);

HAnimJoint& HAnimJoint1668 =  HAnimJoint();
HAnimJoint1668.setUSE(CString("hanim_vt8"));
HAnimHumanoid43.setJoints(&HAnimJoint1668);

HAnimJoint& HAnimJoint1669 =  HAnimJoint();
HAnimJoint1669.setUSE(CString("hanim_vt7"));
HAnimHumanoid43.setJoints(&HAnimJoint1669);

HAnimJoint& HAnimJoint1670 =  HAnimJoint();
HAnimJoint1670.setUSE(CString("hanim_vt6"));
HAnimHumanoid43.setJoints(&HAnimJoint1670);

HAnimJoint& HAnimJoint1671 =  HAnimJoint();
HAnimJoint1671.setUSE(CString("hanim_vt5"));
HAnimHumanoid43.setJoints(&HAnimJoint1671);

HAnimJoint& HAnimJoint1672 =  HAnimJoint();
HAnimJoint1672.setUSE(CString("hanim_vt4"));
HAnimHumanoid43.setJoints(&HAnimJoint1672);

HAnimJoint& HAnimJoint1673 =  HAnimJoint();
HAnimJoint1673.setUSE(CString("hanim_vt3"));
HAnimHumanoid43.setJoints(&HAnimJoint1673);

HAnimJoint& HAnimJoint1674 =  HAnimJoint();
HAnimJoint1674.setUSE(CString("hanim_vt2"));
HAnimHumanoid43.setJoints(&HAnimJoint1674);

HAnimJoint& HAnimJoint1675 =  HAnimJoint();
HAnimJoint1675.setUSE(CString("hanim_vt1"));
HAnimHumanoid43.setJoints(&HAnimJoint1675);

HAnimJoint& HAnimJoint1676 =  HAnimJoint();
HAnimJoint1676.setUSE(CString("hanim_vc7"));
HAnimHumanoid43.setJoints(&HAnimJoint1676);

HAnimJoint& HAnimJoint1677 =  HAnimJoint();
HAnimJoint1677.setUSE(CString("hanim_vc6"));
HAnimHumanoid43.setJoints(&HAnimJoint1677);

HAnimJoint& HAnimJoint1678 =  HAnimJoint();
HAnimJoint1678.setUSE(CString("hanim_vc5"));
HAnimHumanoid43.setJoints(&HAnimJoint1678);

HAnimJoint& HAnimJoint1679 =  HAnimJoint();
HAnimJoint1679.setUSE(CString("hanim_vc4"));
HAnimHumanoid43.setJoints(&HAnimJoint1679);

HAnimJoint& HAnimJoint1680 =  HAnimJoint();
HAnimJoint1680.setUSE(CString("hanim_vc3"));
HAnimHumanoid43.setJoints(&HAnimJoint1680);

HAnimJoint& HAnimJoint1681 =  HAnimJoint();
HAnimJoint1681.setUSE(CString("hanim_vc2"));
HAnimHumanoid43.setJoints(&HAnimJoint1681);

HAnimJoint& HAnimJoint1682 =  HAnimJoint();
HAnimJoint1682.setUSE(CString("hanim_vc1"));
HAnimHumanoid43.setJoints(&HAnimJoint1682);

HAnimJoint& HAnimJoint1683 =  HAnimJoint();
HAnimJoint1683.setUSE(CString("hanim_skullbase"));
HAnimHumanoid43.setJoints(&HAnimJoint1683);

HAnimJoint& HAnimJoint1684 =  HAnimJoint();
HAnimJoint1684.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1684);

HAnimJoint& HAnimJoint1685 =  HAnimJoint();
HAnimJoint1685.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1685);

HAnimJoint& HAnimJoint1686 =  HAnimJoint();
HAnimJoint1686.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1686);

HAnimJoint& HAnimJoint1687 =  HAnimJoint();
HAnimJoint1687.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1687);

HAnimJoint& HAnimJoint1688 =  HAnimJoint();
HAnimJoint1688.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1688);

HAnimJoint& HAnimJoint1689 =  HAnimJoint();
HAnimJoint1689.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1689);

HAnimJoint& HAnimJoint1690 =  HAnimJoint();
HAnimJoint1690.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid43.setJoints(&HAnimJoint1690);

HAnimJoint& HAnimJoint1691 =  HAnimJoint();
HAnimJoint1691.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1691);

HAnimJoint& HAnimJoint1692 =  HAnimJoint();
HAnimJoint1692.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1692);

HAnimJoint& HAnimJoint1693 =  HAnimJoint();
HAnimJoint1693.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint1693);

HAnimJoint& HAnimJoint1694 =  HAnimJoint();
HAnimJoint1694.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint1694);

HAnimJoint& HAnimJoint1695 =  HAnimJoint();
HAnimJoint1695.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid43.setJoints(&HAnimJoint1695);

HAnimJoint& HAnimJoint1696 =  HAnimJoint();
HAnimJoint1696.setUSE(CString("hanim_l_midcarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1696);

HAnimJoint& HAnimJoint1697 =  HAnimJoint();
HAnimJoint1697.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1697);

HAnimJoint& HAnimJoint1698 =  HAnimJoint();
HAnimJoint1698.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1698);

HAnimJoint& HAnimJoint1699 =  HAnimJoint();
HAnimJoint1699.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1699);

HAnimJoint& HAnimJoint1700 =  HAnimJoint();
HAnimJoint1700.setUSE(CString("hanim_l_midcarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1700);

HAnimJoint& HAnimJoint1701 =  HAnimJoint();
HAnimJoint1701.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1701);

HAnimJoint& HAnimJoint1702 =  HAnimJoint();
HAnimJoint1702.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1702);

HAnimJoint& HAnimJoint1703 =  HAnimJoint();
HAnimJoint1703.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1703);

HAnimJoint& HAnimJoint1704 =  HAnimJoint();
HAnimJoint1704.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1704);

HAnimJoint& HAnimJoint1705 =  HAnimJoint();
HAnimJoint1705.setUSE(CString("hanim_l_midcarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1705);

HAnimJoint& HAnimJoint1706 =  HAnimJoint();
HAnimJoint1706.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1706);

HAnimJoint& HAnimJoint1707 =  HAnimJoint();
HAnimJoint1707.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1707);

HAnimJoint& HAnimJoint1708 =  HAnimJoint();
HAnimJoint1708.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1708);

HAnimJoint& HAnimJoint1709 =  HAnimJoint();
HAnimJoint1709.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1709);

HAnimJoint& HAnimJoint1710 =  HAnimJoint();
HAnimJoint1710.setUSE(CString("hanim_l_midcarpal_4_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1710);

HAnimJoint& HAnimJoint1711 =  HAnimJoint();
HAnimJoint1711.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1711);

HAnimJoint& HAnimJoint1712 =  HAnimJoint();
HAnimJoint1712.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1712);

HAnimJoint& HAnimJoint1713 =  HAnimJoint();
HAnimJoint1713.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1713);

HAnimJoint& HAnimJoint1714 =  HAnimJoint();
HAnimJoint1714.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1714);

HAnimJoint& HAnimJoint1715 =  HAnimJoint();
HAnimJoint1715.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1715);

HAnimJoint& HAnimJoint1716 =  HAnimJoint();
HAnimJoint1716.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1716);

HAnimJoint& HAnimJoint1717 =  HAnimJoint();
HAnimJoint1717.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1717);

HAnimJoint& HAnimJoint1718 =  HAnimJoint();
HAnimJoint1718.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1718);

HAnimJoint& HAnimJoint1719 =  HAnimJoint();
HAnimJoint1719.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1719);

HAnimJoint& HAnimJoint1720 =  HAnimJoint();
HAnimJoint1720.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1720);

HAnimJoint& HAnimJoint1721 =  HAnimJoint();
HAnimJoint1721.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint1721);

HAnimJoint& HAnimJoint1722 =  HAnimJoint();
HAnimJoint1722.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint1722);

HAnimJoint& HAnimJoint1723 =  HAnimJoint();
HAnimJoint1723.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid43.setJoints(&HAnimJoint1723);

HAnimJoint& HAnimJoint1724 =  HAnimJoint();
HAnimJoint1724.setUSE(CString("hanim_r_midcarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1724);

HAnimJoint& HAnimJoint1725 =  HAnimJoint();
HAnimJoint1725.setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1725);

HAnimJoint& HAnimJoint1726 =  HAnimJoint();
HAnimJoint1726.setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1726);

HAnimJoint& HAnimJoint1727 =  HAnimJoint();
HAnimJoint1727.setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1727);

HAnimJoint& HAnimJoint1728 =  HAnimJoint();
HAnimJoint1728.setUSE(CString("hanim_r_midcarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1728);

HAnimJoint& HAnimJoint1729 =  HAnimJoint();
HAnimJoint1729.setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1729);

HAnimJoint& HAnimJoint1730 =  HAnimJoint();
HAnimJoint1730.setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1730);

HAnimJoint& HAnimJoint1731 =  HAnimJoint();
HAnimJoint1731.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1731);

HAnimJoint& HAnimJoint1732 =  HAnimJoint();
HAnimJoint1732.setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1732);

HAnimJoint& HAnimJoint1733 =  HAnimJoint();
HAnimJoint1733.setUSE(CString("hanim_r_midcarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1733);

HAnimJoint& HAnimJoint1734 =  HAnimJoint();
HAnimJoint1734.setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1734);

HAnimJoint& HAnimJoint1735 =  HAnimJoint();
HAnimJoint1735.setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1735);

HAnimJoint& HAnimJoint1736 =  HAnimJoint();
HAnimJoint1736.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1736);

HAnimJoint& HAnimJoint1737 =  HAnimJoint();
HAnimJoint1737.setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1737);

HAnimJoint& HAnimJoint1738 =  HAnimJoint();
HAnimJoint1738.setUSE(CString("hanim_r_midcarpal_4_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1738);

HAnimJoint& HAnimJoint1739 =  HAnimJoint();
HAnimJoint1739.setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1739);

HAnimJoint& HAnimJoint1740 =  HAnimJoint();
HAnimJoint1740.setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1740);

HAnimJoint& HAnimJoint1741 =  HAnimJoint();
HAnimJoint1741.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1741);

HAnimJoint& HAnimJoint1742 =  HAnimJoint();
HAnimJoint1742.setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1742);

HAnimJoint& HAnimJoint1743 =  HAnimJoint();
HAnimJoint1743.setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1743);

HAnimJoint& HAnimJoint1744 =  HAnimJoint();
HAnimJoint1744.setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1744);

HAnimJoint& HAnimJoint1745 =  HAnimJoint();
HAnimJoint1745.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1745);

HAnimJoint& HAnimJoint1746 =  HAnimJoint();
HAnimJoint1746.setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1746);

HAnimSegment& HAnimSegment1747 =  HAnimSegment();
HAnimSegment1747.setUSE(CString("hanim_sacrum"));
HAnimHumanoid43.setSegments(&HAnimSegment1747);

HAnimSegment& HAnimSegment1748 =  HAnimSegment();
HAnimSegment1748.setUSE(CString("hanim_pelvis"));
HAnimHumanoid43.setSegments(&HAnimSegment1748);

HAnimSegment& HAnimSegment1749 =  HAnimSegment();
HAnimSegment1749.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment1749);

HAnimSegment& HAnimSegment1750 =  HAnimSegment();
HAnimSegment1750.setUSE(CString("hanim_l_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment1750);

HAnimSegment& HAnimSegment1751 =  HAnimSegment();
HAnimSegment1751.setUSE(CString("hanim_l_talus"));
HAnimHumanoid43.setSegments(&HAnimSegment1751);

HAnimSegment& HAnimSegment1752 =  HAnimSegment();
HAnimSegment1752.setUSE(CString("hanim_l_navicular"));
HAnimHumanoid43.setSegments(&HAnimSegment1752);

HAnimSegment& HAnimSegment1753 =  HAnimSegment();
HAnimSegment1753.setUSE(CString("hanim_l_cuneiform_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1753);

HAnimSegment& HAnimSegment1754 =  HAnimSegment();
HAnimSegment1754.setUSE(CString("hanim_l_metatarsal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1754);

HAnimSegment& HAnimSegment1755 =  HAnimSegment();
HAnimSegment1755.setUSE(CString("hanim_l_tarsal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1755);

HAnimSegment& HAnimSegment1756 =  HAnimSegment();
HAnimSegment1756.setUSE(CString("hanim_l_cuneiform_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1756);

HAnimSegment& HAnimSegment1757 =  HAnimSegment();
HAnimSegment1757.setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1757);

HAnimSegment& HAnimSegment1758 =  HAnimSegment();
HAnimSegment1758.setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1758);

HAnimSegment& HAnimSegment1759 =  HAnimSegment();
HAnimSegment1759.setUSE(CString("hanim_l_tarsal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1759);

HAnimSegment& HAnimSegment1760 =  HAnimSegment();
HAnimSegment1760.setUSE(CString("hanim_l_cuneiform_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1760);

HAnimSegment& HAnimSegment1761 =  HAnimSegment();
HAnimSegment1761.setUSE(CString("hanim_l_metatarsal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1761);

HAnimSegment& HAnimSegment1762 =  HAnimSegment();
HAnimSegment1762.setUSE(CString("hanim_l_tarsal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1762);

HAnimSegment& HAnimSegment1763 =  HAnimSegment();
HAnimSegment1763.setUSE(CString("hanim_l_tarsal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1763);

HAnimSegment& HAnimSegment1764 =  HAnimSegment();
HAnimSegment1764.setUSE(CString("hanim_l_calcaneus"));
HAnimHumanoid43.setSegments(&HAnimSegment1764);

HAnimSegment& HAnimSegment1765 =  HAnimSegment();
HAnimSegment1765.setUSE(CString("hanim_l_cuboid"));
HAnimHumanoid43.setSegments(&HAnimSegment1765);

HAnimSegment& HAnimSegment1766 =  HAnimSegment();
HAnimSegment1766.setUSE(CString("hanim_l_metatarsal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1766);

HAnimSegment& HAnimSegment1767 =  HAnimSegment();
HAnimSegment1767.setUSE(CString("hanim_l_tarsal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1767);

HAnimSegment& HAnimSegment1768 =  HAnimSegment();
HAnimSegment1768.setUSE(CString("hanim_l_tarsal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1768);

HAnimSegment& HAnimSegment1769 =  HAnimSegment();
HAnimSegment1769.setUSE(CString("hanim_l_metatarsal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1769);

HAnimSegment& HAnimSegment1770 =  HAnimSegment();
HAnimSegment1770.setUSE(CString("hanim_l_tarsal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1770);

HAnimSegment& HAnimSegment1771 =  HAnimSegment();
HAnimSegment1771.setUSE(CString("hanim_l_tarsal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1771);

HAnimSegment& HAnimSegment1772 =  HAnimSegment();
HAnimSegment1772.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment1772);

HAnimSegment& HAnimSegment1773 =  HAnimSegment();
HAnimSegment1773.setUSE(CString("hanim_r_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment1773);

HAnimSegment& HAnimSegment1774 =  HAnimSegment();
HAnimSegment1774.setUSE(CString("hanim_r_talus"));
HAnimHumanoid43.setSegments(&HAnimSegment1774);

HAnimSegment& HAnimSegment1775 =  HAnimSegment();
HAnimSegment1775.setUSE(CString("hanim_r_navicular"));
HAnimHumanoid43.setSegments(&HAnimSegment1775);

HAnimSegment& HAnimSegment1776 =  HAnimSegment();
HAnimSegment1776.setUSE(CString("hanim_r_cuneiform_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1776);

HAnimSegment& HAnimSegment1777 =  HAnimSegment();
HAnimSegment1777.setUSE(CString("hanim_r_metatarsal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1777);

HAnimSegment& HAnimSegment1778 =  HAnimSegment();
HAnimSegment1778.setUSE(CString("hanim_r_tarsal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1778);

HAnimSegment& HAnimSegment1779 =  HAnimSegment();
HAnimSegment1779.setUSE(CString("hanim_r_cuneiform_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1779);

HAnimSegment& HAnimSegment1780 =  HAnimSegment();
HAnimSegment1780.setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1780);

HAnimSegment& HAnimSegment1781 =  HAnimSegment();
HAnimSegment1781.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1781);

HAnimSegment& HAnimSegment1782 =  HAnimSegment();
HAnimSegment1782.setUSE(CString("hanim_r_tarsal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1782);

HAnimSegment& HAnimSegment1783 =  HAnimSegment();
HAnimSegment1783.setUSE(CString("hanim_r_cuneiform_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1783);

HAnimSegment& HAnimSegment1784 =  HAnimSegment();
HAnimSegment1784.setUSE(CString("hanim_r_metatarsal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1784);

HAnimSegment& HAnimSegment1785 =  HAnimSegment();
HAnimSegment1785.setUSE(CString("hanim_r_tarsal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1785);

HAnimSegment& HAnimSegment1786 =  HAnimSegment();
HAnimSegment1786.setUSE(CString("hanim_r_tarsal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1786);

HAnimSegment& HAnimSegment1787 =  HAnimSegment();
HAnimSegment1787.setUSE(CString("hanim_r_calcaneus"));
HAnimHumanoid43.setSegments(&HAnimSegment1787);

HAnimSegment& HAnimSegment1788 =  HAnimSegment();
HAnimSegment1788.setUSE(CString("hanim_r_cuboid"));
HAnimHumanoid43.setSegments(&HAnimSegment1788);

HAnimSegment& HAnimSegment1789 =  HAnimSegment();
HAnimSegment1789.setUSE(CString("hanim_r_metatarsal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1789);

HAnimSegment& HAnimSegment1790 =  HAnimSegment();
HAnimSegment1790.setUSE(CString("hanim_r_tarsal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1790);

HAnimSegment& HAnimSegment1791 =  HAnimSegment();
HAnimSegment1791.setUSE(CString("hanim_r_tarsal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1791);

HAnimSegment& HAnimSegment1792 =  HAnimSegment();
HAnimSegment1792.setUSE(CString("hanim_r_metatarsal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1792);

HAnimSegment& HAnimSegment1793 =  HAnimSegment();
HAnimSegment1793.setUSE(CString("hanim_r_tarsal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1793);

HAnimSegment& HAnimSegment1794 =  HAnimSegment();
HAnimSegment1794.setUSE(CString("hanim_r_tarsal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1794);

HAnimSegment& HAnimSegment1795 =  HAnimSegment();
HAnimSegment1795.setUSE(CString("hanim_l5"));
HAnimHumanoid43.setSegments(&HAnimSegment1795);

HAnimSegment& HAnimSegment1796 =  HAnimSegment();
HAnimSegment1796.setUSE(CString("hanim_l4"));
HAnimHumanoid43.setSegments(&HAnimSegment1796);

HAnimSegment& HAnimSegment1797 =  HAnimSegment();
HAnimSegment1797.setUSE(CString("hanim_l3"));
HAnimHumanoid43.setSegments(&HAnimSegment1797);

HAnimSegment& HAnimSegment1798 =  HAnimSegment();
HAnimSegment1798.setUSE(CString("hanim_l2"));
HAnimHumanoid43.setSegments(&HAnimSegment1798);

HAnimSegment& HAnimSegment1799 =  HAnimSegment();
HAnimSegment1799.setUSE(CString("hanim_l1"));
HAnimHumanoid43.setSegments(&HAnimSegment1799);

HAnimSegment& HAnimSegment1800 =  HAnimSegment();
HAnimSegment1800.setUSE(CString("hanim_t12"));
HAnimHumanoid43.setSegments(&HAnimSegment1800);

HAnimSegment& HAnimSegment1801 =  HAnimSegment();
HAnimSegment1801.setUSE(CString("hanim_t11"));
HAnimHumanoid43.setSegments(&HAnimSegment1801);

HAnimSegment& HAnimSegment1802 =  HAnimSegment();
HAnimSegment1802.setUSE(CString("hanim_t10"));
HAnimHumanoid43.setSegments(&HAnimSegment1802);

HAnimSegment& HAnimSegment1803 =  HAnimSegment();
HAnimSegment1803.setUSE(CString("hanim_t9"));
HAnimHumanoid43.setSegments(&HAnimSegment1803);

HAnimSegment& HAnimSegment1804 =  HAnimSegment();
HAnimSegment1804.setUSE(CString("hanim_t8"));
HAnimHumanoid43.setSegments(&HAnimSegment1804);

HAnimSegment& HAnimSegment1805 =  HAnimSegment();
HAnimSegment1805.setUSE(CString("hanim_t7"));
HAnimHumanoid43.setSegments(&HAnimSegment1805);

HAnimSegment& HAnimSegment1806 =  HAnimSegment();
HAnimSegment1806.setUSE(CString("hanim_t6"));
HAnimHumanoid43.setSegments(&HAnimSegment1806);

HAnimSegment& HAnimSegment1807 =  HAnimSegment();
HAnimSegment1807.setUSE(CString("hanim_t5"));
HAnimHumanoid43.setSegments(&HAnimSegment1807);

HAnimSegment& HAnimSegment1808 =  HAnimSegment();
HAnimSegment1808.setUSE(CString("hanim_t4"));
HAnimHumanoid43.setSegments(&HAnimSegment1808);

HAnimSegment& HAnimSegment1809 =  HAnimSegment();
HAnimSegment1809.setUSE(CString("hanim_t3"));
HAnimHumanoid43.setSegments(&HAnimSegment1809);

HAnimSegment& HAnimSegment1810 =  HAnimSegment();
HAnimSegment1810.setUSE(CString("hanim_t2"));
HAnimHumanoid43.setSegments(&HAnimSegment1810);

HAnimSegment& HAnimSegment1811 =  HAnimSegment();
HAnimSegment1811.setUSE(CString("hanim_t1"));
HAnimHumanoid43.setSegments(&HAnimSegment1811);

HAnimSegment& HAnimSegment1812 =  HAnimSegment();
HAnimSegment1812.setUSE(CString("hanim_c7"));
HAnimHumanoid43.setSegments(&HAnimSegment1812);

HAnimSegment& HAnimSegment1813 =  HAnimSegment();
HAnimSegment1813.setUSE(CString("hanim_c6"));
HAnimHumanoid43.setSegments(&HAnimSegment1813);

HAnimSegment& HAnimSegment1814 =  HAnimSegment();
HAnimSegment1814.setUSE(CString("hanim_c5"));
HAnimHumanoid43.setSegments(&HAnimSegment1814);

HAnimSegment& HAnimSegment1815 =  HAnimSegment();
HAnimSegment1815.setUSE(CString("hanim_c4"));
HAnimHumanoid43.setSegments(&HAnimSegment1815);

HAnimSegment& HAnimSegment1816 =  HAnimSegment();
HAnimSegment1816.setUSE(CString("hanim_c3"));
HAnimHumanoid43.setSegments(&HAnimSegment1816);

HAnimSegment& HAnimSegment1817 =  HAnimSegment();
HAnimSegment1817.setUSE(CString("hanim_c2"));
HAnimHumanoid43.setSegments(&HAnimSegment1817);

HAnimSegment& HAnimSegment1818 =  HAnimSegment();
HAnimSegment1818.setUSE(CString("hanim_c1"));
HAnimHumanoid43.setSegments(&HAnimSegment1818);

HAnimSegment& HAnimSegment1819 =  HAnimSegment();
HAnimSegment1819.setUSE(CString("hanim_skull"));
HAnimHumanoid43.setSegments(&HAnimSegment1819);

HAnimSegment& HAnimSegment1820 =  HAnimSegment();
HAnimSegment1820.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid43.setSegments(&HAnimSegment1820);

HAnimSegment& HAnimSegment1821 =  HAnimSegment();
HAnimSegment1821.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid43.setSegments(&HAnimSegment1821);

HAnimSegment& HAnimSegment1822 =  HAnimSegment();
HAnimSegment1822.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment1822);

HAnimSegment& HAnimSegment1823 =  HAnimSegment();
HAnimSegment1823.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment1823);

HAnimSegment& HAnimSegment1824 =  HAnimSegment();
HAnimSegment1824.setUSE(CString("hanim_l_carpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1824);

HAnimSegment& HAnimSegment1825 =  HAnimSegment();
HAnimSegment1825.setUSE(CString("hanim_l_trapezium"));
HAnimHumanoid43.setSegments(&HAnimSegment1825);

HAnimSegment& HAnimSegment1826 =  HAnimSegment();
HAnimSegment1826.setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1826);

HAnimSegment& HAnimSegment1827 =  HAnimSegment();
HAnimSegment1827.setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1827);

HAnimSegment& HAnimSegment1828 =  HAnimSegment();
HAnimSegment1828.setUSE(CString("hanim_l_trapezoid"));
HAnimHumanoid43.setSegments(&HAnimSegment1828);

HAnimSegment& HAnimSegment1829 =  HAnimSegment();
HAnimSegment1829.setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1829);

HAnimSegment& HAnimSegment1830 =  HAnimSegment();
HAnimSegment1830.setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1830);

HAnimSegment& HAnimSegment1831 =  HAnimSegment();
HAnimSegment1831.setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1831);

HAnimSegment& HAnimSegment1832 =  HAnimSegment();
HAnimSegment1832.setUSE(CString("hanim_l_capitate"));
HAnimHumanoid43.setSegments(&HAnimSegment1832);

HAnimSegment& HAnimSegment1833 =  HAnimSegment();
HAnimSegment1833.setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1833);

HAnimSegment& HAnimSegment1834 =  HAnimSegment();
HAnimSegment1834.setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1834);

HAnimSegment& HAnimSegment1835 =  HAnimSegment();
HAnimSegment1835.setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1835);

HAnimSegment& HAnimSegment1836 =  HAnimSegment();
HAnimSegment1836.setUSE(CString("hanim_l_hamate"));
HAnimHumanoid43.setSegments(&HAnimSegment1836);

HAnimSegment& HAnimSegment1837 =  HAnimSegment();
HAnimSegment1837.setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1837);

HAnimSegment& HAnimSegment1838 =  HAnimSegment();
HAnimSegment1838.setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1838);

HAnimSegment& HAnimSegment1839 =  HAnimSegment();
HAnimSegment1839.setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1839);

HAnimSegment& HAnimSegment1840 =  HAnimSegment();
HAnimSegment1840.setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1840);

HAnimSegment& HAnimSegment1841 =  HAnimSegment();
HAnimSegment1841.setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1841);

HAnimSegment& HAnimSegment1842 =  HAnimSegment();
HAnimSegment1842.setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1842);

HAnimSegment& HAnimSegment1843 =  HAnimSegment();
HAnimSegment1843.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid43.setSegments(&HAnimSegment1843);

HAnimSegment& HAnimSegment1844 =  HAnimSegment();
HAnimSegment1844.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid43.setSegments(&HAnimSegment1844);

HAnimSegment& HAnimSegment1845 =  HAnimSegment();
HAnimSegment1845.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment1845);

HAnimSegment& HAnimSegment1846 =  HAnimSegment();
HAnimSegment1846.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment1846);

HAnimSegment& HAnimSegment1847 =  HAnimSegment();
HAnimSegment1847.setUSE(CString("hanim_r_carpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1847);

HAnimSegment& HAnimSegment1848 =  HAnimSegment();
HAnimSegment1848.setUSE(CString("hanim_r_trapezium"));
HAnimHumanoid43.setSegments(&HAnimSegment1848);

HAnimSegment& HAnimSegment1849 =  HAnimSegment();
HAnimSegment1849.setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1849);

HAnimSegment& HAnimSegment1850 =  HAnimSegment();
HAnimSegment1850.setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1850);

HAnimSegment& HAnimSegment1851 =  HAnimSegment();
HAnimSegment1851.setUSE(CString("hanim_r_trapezoid"));
HAnimHumanoid43.setSegments(&HAnimSegment1851);

HAnimSegment& HAnimSegment1852 =  HAnimSegment();
HAnimSegment1852.setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1852);

HAnimSegment& HAnimSegment1853 =  HAnimSegment();
HAnimSegment1853.setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1853);

HAnimSegment& HAnimSegment1854 =  HAnimSegment();
HAnimSegment1854.setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1854);

HAnimSegment& HAnimSegment1855 =  HAnimSegment();
HAnimSegment1855.setUSE(CString("hanim_r_capitate"));
HAnimHumanoid43.setSegments(&HAnimSegment1855);

HAnimSegment& HAnimSegment1856 =  HAnimSegment();
HAnimSegment1856.setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1856);

HAnimSegment& HAnimSegment1857 =  HAnimSegment();
HAnimSegment1857.setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1857);

HAnimSegment& HAnimSegment1858 =  HAnimSegment();
HAnimSegment1858.setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1858);

HAnimSegment& HAnimSegment1859 =  HAnimSegment();
HAnimSegment1859.setUSE(CString("hanim_r_hamate"));
HAnimHumanoid43.setSegments(&HAnimSegment1859);

HAnimSegment& HAnimSegment1860 =  HAnimSegment();
HAnimSegment1860.setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1860);

HAnimSegment& HAnimSegment1861 =  HAnimSegment();
HAnimSegment1861.setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1861);

HAnimSegment& HAnimSegment1862 =  HAnimSegment();
HAnimSegment1862.setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1862);

HAnimSegment& HAnimSegment1863 =  HAnimSegment();
HAnimSegment1863.setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1863);

HAnimSegment& HAnimSegment1864 =  HAnimSegment();
HAnimSegment1864.setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1864);

HAnimSegment& HAnimSegment1865 =  HAnimSegment();
HAnimSegment1865.setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1865);

HAnimSite& HAnimSite1866 =  HAnimSite();
HAnimSite1866.setUSE(CString("hanim_buttocks_standing_wall_contact_point_pt"));
HAnimHumanoid43.setSites(&HAnimSite1866);

HAnimSite& HAnimSite1867 =  HAnimSite();
HAnimSite1867.setUSE(CString("hanim_crotch_pt"));
HAnimHumanoid43.setSites(&HAnimSite1867);

HAnimSite& HAnimSite1868 =  HAnimSite();
HAnimSite1868.setUSE(CString("hanim_l_asis_pt"));
HAnimHumanoid43.setSites(&HAnimSite1868);

HAnimSite& HAnimSite1869 =  HAnimSite();
HAnimSite1869.setUSE(CString("hanim_l_iliocristale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1869);

HAnimSite& HAnimSite1870 =  HAnimSite();
HAnimSite1870.setUSE(CString("hanim_l_psis_pt"));
HAnimHumanoid43.setSites(&HAnimSite1870);

HAnimSite& HAnimSite1871 =  HAnimSite();
HAnimSite1871.setUSE(CString("hanim_l_trochanterion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1871);

HAnimSite& HAnimSite1872 =  HAnimSite();
HAnimSite1872.setUSE(CString("hanim_r_asis_pt"));
HAnimHumanoid43.setSites(&HAnimSite1872);

HAnimSite& HAnimSite1873 =  HAnimSite();
HAnimSite1873.setUSE(CString("hanim_r_iliocristale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1873);

HAnimSite& HAnimSite1874 =  HAnimSite();
HAnimSite1874.setUSE(CString("hanim_r_psis_pt"));
HAnimHumanoid43.setSites(&HAnimSite1874);

HAnimSite& HAnimSite1875 =  HAnimSite();
HAnimSite1875.setUSE(CString("hanim_r_trochanterion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1875);

HAnimSite& HAnimSite1876 =  HAnimSite();
HAnimSite1876.setUSE(CString("hanim_navel_pt"));
HAnimHumanoid43.setSites(&HAnimSite1876);

HAnimSite& HAnimSite1877 =  HAnimSite();
HAnimSite1877.setUSE(CString("hanim_waist_preferred_anterior_pt"));
HAnimHumanoid43.setSites(&HAnimSite1877);

HAnimSite& HAnimSite1878 =  HAnimSite();
HAnimSite1878.setUSE(CString("hanim_waist_preferred_posterior_pt"));
HAnimHumanoid43.setSites(&HAnimSite1878);

HAnimSite& HAnimSite1879 =  HAnimSite();
HAnimSite1879.setUSE(CString("hanim_l_femoral_lateral_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1879);

HAnimSite& HAnimSite1880 =  HAnimSite();
HAnimSite1880.setUSE(CString("hanim_l_femoral_medial_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1880);

HAnimSite& HAnimSite1881 =  HAnimSite();
HAnimSite1881.setUSE(CString("hanim_l_knee_crease_pt"));
HAnimHumanoid43.setSites(&HAnimSite1881);

HAnimSite& HAnimSite1882 =  HAnimSite();
HAnimSite1882.setUSE(CString("hanim_l_suprapatella_pt"));
HAnimHumanoid43.setSites(&HAnimSite1882);

HAnimSite& HAnimSite1883 =  HAnimSite();
HAnimSite1883.setUSE(CString("hanim_r_femoral_lateral_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1883);

HAnimSite& HAnimSite1884 =  HAnimSite();
HAnimSite1884.setUSE(CString("hanim_r_femoral_medial_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1884);

HAnimSite& HAnimSite1885 =  HAnimSite();
HAnimSite1885.setUSE(CString("hanim_r_knee_crease_pt"));
HAnimHumanoid43.setSites(&HAnimSite1885);

HAnimSite& HAnimSite1886 =  HAnimSite();
HAnimSite1886.setUSE(CString("hanim_r_suprapatella_pt"));
HAnimHumanoid43.setSites(&HAnimSite1886);

HAnimSite& HAnimSite1887 =  HAnimSite();
HAnimSite1887.setUSE(CString("hanim_l_lateral_malleolus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1887);

HAnimSite& HAnimSite1888 =  HAnimSite();
HAnimSite1888.setUSE(CString("hanim_l_medial_malleolus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1888);

HAnimSite& HAnimSite1889 =  HAnimSite();
HAnimSite1889.setUSE(CString("hanim_l_tibiale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1889);

HAnimSite& HAnimSite1890 =  HAnimSite();
HAnimSite1890.setUSE(CString("hanim_l_calcaneus_posterior_pt"));
HAnimHumanoid43.setSites(&HAnimSite1890);

HAnimSite& HAnimSite1891 =  HAnimSite();
HAnimSite1891.setUSE(CString("hanim_l_sphyrion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1891);

HAnimSite& HAnimSite1892 =  HAnimSite();
HAnimSite1892.setUSE(CString("hanim_l_metatarsal_phalanx_1_pt"));
HAnimHumanoid43.setSites(&HAnimSite1892);

HAnimSite& HAnimSite1893 =  HAnimSite();
HAnimSite1893.setUSE(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1893);

HAnimSite& HAnimSite1894 =  HAnimSite();
HAnimSite1894.setUSE(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1894);

HAnimSite& HAnimSite1895 =  HAnimSite();
HAnimSite1895.setUSE(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1895);

HAnimSite& HAnimSite1896 =  HAnimSite();
HAnimSite1896.setUSE(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1896);

HAnimSite& HAnimSite1897 =  HAnimSite();
HAnimSite1897.setUSE(CString("hanim_l_metatarsal_phalanx_5_pt"));
HAnimHumanoid43.setSites(&HAnimSite1897);

HAnimSite& HAnimSite1898 =  HAnimSite();
HAnimSite1898.setUSE(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1898);

HAnimSite& HAnimSite1899 =  HAnimSite();
HAnimSite1899.setUSE(CString("hanim_r_lateral_malleolus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1899);

HAnimSite& HAnimSite1900 =  HAnimSite();
HAnimSite1900.setUSE(CString("hanim_r_medial_malleolus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1900);

HAnimSite& HAnimSite1901 =  HAnimSite();
HAnimSite1901.setUSE(CString("hanim_r_tibiale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1901);

HAnimSite& HAnimSite1902 =  HAnimSite();
HAnimSite1902.setUSE(CString("hanim_r_calcaneus_posterior_pt"));
HAnimHumanoid43.setSites(&HAnimSite1902);

HAnimSite& HAnimSite1903 =  HAnimSite();
HAnimSite1903.setUSE(CString("hanim_r_sphyrion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1903);

HAnimSite& HAnimSite1904 =  HAnimSite();
HAnimSite1904.setUSE(CString("hanim_r_metatarsal_phalanx_1_pt"));
HAnimHumanoid43.setSites(&HAnimSite1904);

HAnimSite& HAnimSite1905 =  HAnimSite();
HAnimSite1905.setUSE(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1905);

HAnimSite& HAnimSite1906 =  HAnimSite();
HAnimSite1906.setUSE(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1906);

HAnimSite& HAnimSite1907 =  HAnimSite();
HAnimSite1907.setUSE(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1907);

HAnimSite& HAnimSite1908 =  HAnimSite();
HAnimSite1908.setUSE(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1908);

HAnimSite& HAnimSite1909 =  HAnimSite();
HAnimSite1909.setUSE(CString("hanim_r_metatarsal_phalanx_5_pt"));
HAnimHumanoid43.setSites(&HAnimSite1909);

HAnimSite& HAnimSite1910 =  HAnimSite();
HAnimSite1910.setUSE(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1910);

HAnimSite& HAnimSite1911 =  HAnimSite();
HAnimSite1911.setUSE(CString("hanim_l_rib10_pt"));
HAnimHumanoid43.setSites(&HAnimSite1911);

HAnimSite& HAnimSite1912 =  HAnimSite();
HAnimSite1912.setUSE(CString("hanim_r_rib10_pt"));
HAnimHumanoid43.setSites(&HAnimSite1912);

HAnimSite& HAnimSite1913 =  HAnimSite();
HAnimSite1913.setUSE(CString("hanim_spine_2_middle_back_pt"));
HAnimHumanoid43.setSites(&HAnimSite1913);

HAnimSite& HAnimSite1914 =  HAnimSite();
HAnimSite1914.setUSE(CString("hanim_substernale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1914);

HAnimSite& HAnimSite1915 =  HAnimSite();
HAnimSite1915.setUSE(CString("hanim_l_thelion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1915);

HAnimSite& HAnimSite1916 =  HAnimSite();
HAnimSite1916.setUSE(CString("hanim_r_thelion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1916);

HAnimSite& HAnimSite1917 =  HAnimSite();
HAnimSite1917.setUSE(CString("hanim_l_chest_midsagittal_plane_pt"));
HAnimHumanoid43.setSites(&HAnimSite1917);

HAnimSite& HAnimSite1918 =  HAnimSite();
HAnimSite1918.setUSE(CString("hanim_mesosternale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1918);

HAnimSite& HAnimSite1919 =  HAnimSite();
HAnimSite1919.setUSE(CString("hanim_r_chest_midsagittal_plane_pt"));
HAnimHumanoid43.setSites(&HAnimSite1919);

HAnimSite& HAnimSite1920 =  HAnimSite();
HAnimSite1920.setUSE(CString("hanim_rear_center_midsagittal_plane_pt"));
HAnimHumanoid43.setSites(&HAnimSite1920);

HAnimSite& HAnimSite1921 =  HAnimSite();
HAnimSite1921.setUSE(CString("hanim_spine_1_middle_back_pt"));
HAnimHumanoid43.setSites(&HAnimSite1921);

HAnimSite& HAnimSite1922 =  HAnimSite();
HAnimSite1922.setUSE(CString("hanim_cervicale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1922);

HAnimSite& HAnimSite1923 =  HAnimSite();
HAnimSite1923.setUSE(CString("hanim_suprasternale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1923);

HAnimSite& HAnimSite1924 =  HAnimSite();
HAnimSite1924.setUSE(CString("hanim_l_neck_base_pt"));
HAnimHumanoid43.setSites(&HAnimSite1924);

HAnimSite& HAnimSite1925 =  HAnimSite();
HAnimSite1925.setUSE(CString("hanim_r_neck_base_pt"));
HAnimHumanoid43.setSites(&HAnimSite1925);

HAnimSite& HAnimSite1926 =  HAnimSite();
HAnimSite1926.setUSE(CString("hanim_l_acromion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1926);

HAnimSite& HAnimSite1927 =  HAnimSite();
HAnimSite1927.setUSE(CString("hanim_l_axilla_distal_pt"));
HAnimHumanoid43.setSites(&HAnimSite1927);

HAnimSite& HAnimSite1928 =  HAnimSite();
HAnimSite1928.setUSE(CString("hanim_l_axilla_posterior_folds_pt"));
HAnimHumanoid43.setSites(&HAnimSite1928);

HAnimSite& HAnimSite1929 =  HAnimSite();
HAnimSite1929.setUSE(CString("hanim_l_axilla_proximal_pt"));
HAnimHumanoid43.setSites(&HAnimSite1929);

HAnimSite& HAnimSite1930 =  HAnimSite();
HAnimSite1930.setUSE(CString("hanim_l_clavicale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1930);

HAnimSite& HAnimSite1931 =  HAnimSite();
HAnimSite1931.setUSE(CString("hanim_r_acromion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1931);

HAnimSite& HAnimSite1932 =  HAnimSite();
HAnimSite1932.setUSE(CString("hanim_r_axilla_distal_pt"));
HAnimHumanoid43.setSites(&HAnimSite1932);

HAnimSite& HAnimSite1933 =  HAnimSite();
HAnimSite1933.setUSE(CString("hanim_r_axilla_posterior_folds_pt"));
HAnimHumanoid43.setSites(&HAnimSite1933);

HAnimSite& HAnimSite1934 =  HAnimSite();
HAnimSite1934.setUSE(CString("hanim_r_axilla_proximal_pt"));
HAnimHumanoid43.setSites(&HAnimSite1934);

HAnimSite& HAnimSite1935 =  HAnimSite();
HAnimSite1935.setUSE(CString("hanim_r_clavicale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1935);

HAnimSite& HAnimSite1936 =  HAnimSite();
HAnimSite1936.setUSE(CString("hanim_adams_apple_pt"));
HAnimHumanoid43.setSites(&HAnimSite1936);

HAnimSite& HAnimSite1937 =  HAnimSite();
HAnimSite1937.setUSE(CString("hanim_glabella_pt"));
HAnimHumanoid43.setSites(&HAnimSite1937);

HAnimSite& HAnimSite1938 =  HAnimSite();
HAnimSite1938.setUSE(CString("hanim_l_ectocanthus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1938);

HAnimSite& HAnimSite1939 =  HAnimSite();
HAnimSite1939.setUSE(CString("hanim_l_infraorbitale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1939);

HAnimSite& HAnimSite1940 =  HAnimSite();
HAnimSite1940.setUSE(CString("hanim_l_tragion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1940);

HAnimSite& HAnimSite1941 =  HAnimSite();
HAnimSite1941.setUSE(CString("hanim_nuchale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1941);

HAnimSite& HAnimSite1942 =  HAnimSite();
HAnimSite1942.setUSE(CString("hanim_opisthocranion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1942);

HAnimSite& HAnimSite1943 =  HAnimSite();
HAnimSite1943.setUSE(CString("hanim_r_ectocanthus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1943);

HAnimSite& HAnimSite1944 =  HAnimSite();
HAnimSite1944.setUSE(CString("hanim_r_infraorbitale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1944);

HAnimSite& HAnimSite1945 =  HAnimSite();
HAnimSite1945.setUSE(CString("hanim_r_tragion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1945);

HAnimSite& HAnimSite1946 =  HAnimSite();
HAnimSite1946.setUSE(CString("hanim_sellion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1946);

HAnimSite& HAnimSite1947 =  HAnimSite();
HAnimSite1947.setUSE(CString("hanim_skull_vertex_pt"));
HAnimHumanoid43.setSites(&HAnimSite1947);

HAnimSite& HAnimSite1948 =  HAnimSite();
HAnimSite1948.setUSE(CString("hanim_l_gonion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1948);

HAnimSite& HAnimSite1949 =  HAnimSite();
HAnimSite1949.setUSE(CString("hanim_menton_pt"));
HAnimHumanoid43.setSites(&HAnimSite1949);

HAnimSite& HAnimSite1950 =  HAnimSite();
HAnimSite1950.setUSE(CString("hanim_r_gonion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1950);

HAnimSite& HAnimSite1951 =  HAnimSite();
HAnimSite1951.setUSE(CString("hanim_supramenton_pt"));
HAnimHumanoid43.setSites(&HAnimSite1951);

HAnimSite& HAnimSite1952 =  HAnimSite();
HAnimSite1952.setUSE(CString("hanim_l_bideltoid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1952);

HAnimSite& HAnimSite1953 =  HAnimSite();
HAnimSite1953.setUSE(CString("hanim_l_humeral_lateral_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1953);

HAnimSite& HAnimSite1954 =  HAnimSite();
HAnimSite1954.setUSE(CString("hanim_l_humeral_medial_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1954);

HAnimSite& HAnimSite1955 =  HAnimSite();
HAnimSite1955.setUSE(CString("hanim_l_olecranon_pt"));
HAnimHumanoid43.setSites(&HAnimSite1955);

HAnimSite& HAnimSite1956 =  HAnimSite();
HAnimSite1956.setUSE(CString("hanim_l_radial_styloid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1956);

HAnimSite& HAnimSite1957 =  HAnimSite();
HAnimSite1957.setUSE(CString("hanim_l_radiale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1957);

HAnimSite& HAnimSite1958 =  HAnimSite();
HAnimSite1958.setUSE(CString("hanim_l_ulnar_styloid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1958);

HAnimSite& HAnimSite1959 =  HAnimSite();
HAnimSite1959.setUSE(CString("hanim_l_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1959);

HAnimSite& HAnimSite1960 =  HAnimSite();
HAnimSite1960.setUSE(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimHumanoid43.setSites(&HAnimSite1960);

HAnimSite& HAnimSite1961 =  HAnimSite();
HAnimSite1961.setUSE(CString("hanim_l_carpal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1961);

HAnimSite& HAnimSite1962 =  HAnimSite();
HAnimSite1962.setUSE(CString("hanim_l_dactylion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1962);

HAnimSite& HAnimSite1963 =  HAnimSite();
HAnimSite1963.setUSE(CString("hanim_l_metacarpal_phalanx_3_pt"));
HAnimHumanoid43.setSites(&HAnimSite1963);

HAnimSite& HAnimSite1964 =  HAnimSite();
HAnimSite1964.setUSE(CString("hanim_l_carpal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1964);

HAnimSite& HAnimSite1965 =  HAnimSite();
HAnimSite1965.setUSE(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimHumanoid43.setSites(&HAnimSite1965);

HAnimSite& HAnimSite1966 =  HAnimSite();
HAnimSite1966.setUSE(CString("hanim_l_carpal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1966);

HAnimSite& HAnimSite1967 =  HAnimSite();
HAnimSite1967.setUSE(CString("hanim_l_carpal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1967);

HAnimSite& HAnimSite1968 =  HAnimSite();
HAnimSite1968.setUSE(CString("hanim_r_bideltoid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1968);

HAnimSite& HAnimSite1969 =  HAnimSite();
HAnimSite1969.setUSE(CString("hanim_r_humeral_lateral_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1969);

HAnimSite& HAnimSite1970 =  HAnimSite();
HAnimSite1970.setUSE(CString("hanim_r_humeral_medial_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1970);

HAnimSite& HAnimSite1971 =  HAnimSite();
HAnimSite1971.setUSE(CString("hanim_r_olecranon_pt"));
HAnimHumanoid43.setSites(&HAnimSite1971);

HAnimSite& HAnimSite1972 =  HAnimSite();
HAnimSite1972.setUSE(CString("hanim_r_radial_styloid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1972);

HAnimSite& HAnimSite1973 =  HAnimSite();
HAnimSite1973.setUSE(CString("hanim_r_radiale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1973);

HAnimSite& HAnimSite1974 =  HAnimSite();
HAnimSite1974.setUSE(CString("hanim_r_ulnar_styloid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1974);

HAnimSite& HAnimSite1975 =  HAnimSite();
HAnimSite1975.setUSE(CString("hanim_r_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1975);

HAnimSite& HAnimSite1976 =  HAnimSite();
HAnimSite1976.setUSE(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimHumanoid43.setSites(&HAnimSite1976);

HAnimSite& HAnimSite1977 =  HAnimSite();
HAnimSite1977.setUSE(CString("hanim_r_carpal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1977);

HAnimSite& HAnimSite1978 =  HAnimSite();
HAnimSite1978.setUSE(CString("hanim_r_dactylion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1978);

HAnimSite& HAnimSite1979 =  HAnimSite();
HAnimSite1979.setUSE(CString("hanim_r_metacarpal_phalanx_3_pt"));
HAnimHumanoid43.setSites(&HAnimSite1979);

HAnimSite& HAnimSite1980 =  HAnimSite();
HAnimSite1980.setUSE(CString("hanim_r_carpal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1980);

HAnimSite& HAnimSite1981 =  HAnimSite();
HAnimSite1981.setUSE(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimHumanoid43.setSites(&HAnimSite1981);

HAnimSite& HAnimSite1982 =  HAnimSite();
HAnimSite1982.setUSE(CString("hanim_r_carpal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1982);

HAnimSite& HAnimSite1983 =  HAnimSite();
HAnimSite1983.setUSE(CString("hanim_r_carpal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1983);

Scene11.addChild(&HAnimHumanoid43);

X3D0.setScene(&Scene11);

}
