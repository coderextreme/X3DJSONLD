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
component2.setLevel(3);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("blenderSkeleton.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("copyright"));
meta4.setContent(CString("2023"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("reference"));
meta5.setContent(CString("http://www.web3D.org"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("Blender 4.0.1"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
Scene7.addChild(&NavigationInfo8);

Background& Background9 =  Background();
Background9.setDEF(CString("WO_World"));
Background9.setGroundColor(new float[3]{0.05087608844041824,0.05087608844041824,0.05087608844041824}, 3);
Background9.setSkyColor(new float[3]{0.05087608844041824,0.05087608844041824,0.05087608844041824}, 3);
Scene7.addChild(&Background9);

Transform& Transform10 =  Transform();
Shape& Shape11 =  Shape();
Shape11.setDEF(CString("SiteShape"));
Box& Box12 =  Box();
Box12.setSize(new float[3]{0.05,0.05,0.05});
Shape11.setGeometry(&Box12);

Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Material14.setDiffuseColor(new float[3]{0,0,1});
Appearance13.addChild(&Material14);

Shape11.addChild(&Appearance13);

Transform10.addChild(&Shape11);

Scene7.addChild(&Transform10);

Transform& Transform15 =  Transform();
Shape& Shape16 =  Shape();
Shape16.setDEF(CString("JointShape"));
Sphere& Sphere17 =  Sphere();
Sphere17.setRadius(0.06);
Shape16.setGeometry(&Sphere17);

Appearance& Appearance18 =  Appearance();
Appearance18.setDEF(CString("JointAppearance"));
Material& Material19 =  Material();
Material19.setDiffuseColor(new float[3]{1,0.5,0});
Material19.setTransparency(0.5);
Appearance18.addChild(&Material19);

Shape16.addChild(&Appearance18);

Transform15.addChild(&Shape16);

Scene7.addChild(&Transform15);

Transform& Transform20 =  Transform();
Transform20.setDEF(CString("Light_TRANSFORM"));
Transform20.setRotation(new float[4]{0.20594,0.33152,0.9207,1.92627});
Transform20.setTranslation(new float[3]{4.07625,1.00545,5.90386});
PointLight& PointLight21 =  PointLight();
PointLight21.setDEF(CString("LA_Light"));
PointLight21.setLocation(new float[3]{-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7});
PointLight21.setRadius(40);
Transform20.addChild(&PointLight21);

Scene7.addChild(&Transform20);

Transform& Transform22 =  Transform();
Transform22.setDEF(CString("Camera_TRANSFORM"));
Transform22.setRotation(new float[4]{0.77344,0.33383,0.53884,1.35072});
Transform22.setTranslation(new float[3]{7.35889,-6.92579,4.95831});
Viewpoint& Viewpoint23 =  Viewpoint();
Viewpoint23.setDEF(CString("CA_Camera"));
Viewpoint23.setFieldOfView(0.6911112070083618);
Viewpoint23.setOrientation(new float[4]{-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0});
Viewpoint23.setPosition(new float[3]{-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7});
Transform22.addChild(&Viewpoint23);

Scene7.addChild(&Transform22);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("Armature_TRANSFORM"));
HAnimHumanoid& HAnimHumanoid25 =  HAnimHumanoid();
HAnimHumanoid25.X3DNode::setName(CString("humanoid"));
HAnimHumanoid25.setDEF(CString("hanim_humanoid"));
HAnimHumanoid25.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint26 =  HAnimJoint();
HAnimJoint26.X3DNode::setName(CString("Armature"));
HAnimJoint26.setDEF(CString("hanim_Armature"));
HAnimSegment& HAnimSegment27 =  HAnimSegment();
HAnimSegment27.X3DNode::setName(CString("SEGMENT_FOR_Armature"));
HAnimSegment27.setDEF(CString("hanim_SEGMENT_FOR_Armature"));
TouchSensor& TouchSensor28 =  TouchSensor();
TouchSensor28.setDescription(CString("joint Armature segment SEGMENT_FOR_Armature"));
HAnimSegment27.addChild(&TouchSensor28);

Transform& Transform29 =  Transform();
Shape& Shape30 =  Shape();
Shape30.setUSE(CString("JointShape"));
Transform29.addChild(&Shape30);

HAnimSegment27.addChild(&Transform29);

HAnimSite& HAnimSite31 =  HAnimSite();
HAnimSite31.X3DNode::setName(CString("SEGMENT_FOR_Armature_tip"));
HAnimSite31.setDEF(CString("hanim_SEGMENT_FOR_Armature_tip"));
Transform& Transform32 =  Transform();
Shape& Shape33 =  Shape();
Shape33.setUSE(CString("SiteShape"));
Transform32.addChild(&Shape33);

HAnimSite31.addChild(&Transform32);

HAnimSegment27.addChild(&HAnimSite31);

HAnimJoint26.addChildren(&HAnimSegment27);

HAnimJoint& HAnimJoint34 =  HAnimJoint();
HAnimJoint34.X3DNode::setName(CString("sacrum"));
HAnimJoint34.setDEF(CString("hanim_sacrum"));
HAnimJoint34.setCenter(new float[3]{-0.0002,-0.1178,0.8174});
HAnimSegment& HAnimSegment35 =  HAnimSegment();
HAnimSegment35.X3DNode::setName(CString("SEGMENT_FOR_sacrum"));
HAnimSegment35.setDEF(CString("hanim_SEGMENT_FOR_sacrum"));
TouchSensor& TouchSensor36 =  TouchSensor();
TouchSensor36.setDescription(CString("joint sacrum segment SEGMENT_FOR_sacrum"));
HAnimSegment35.addChild(&TouchSensor36);

Transform& Transform37 =  Transform();
Transform37.setTranslation(new float[3]{-0.0002,-0.1178,0.8174});
Shape& Shape38 =  Shape();
Shape38.setUSE(CString("JointShape"));
Transform37.addChild(&Shape38);

HAnimSegment35.addChild(&Transform37);

HAnimSite& HAnimSite39 =  HAnimSite();
HAnimSite39.X3DNode::setName(CString("SEGMENT_FOR_sacrum_tip"));
HAnimSite39.setDEF(CString("hanim_SEGMENT_FOR_sacrum_tip"));
Transform& Transform40 =  Transform();
Transform40.setTranslation(new float[3]{-0.0002,-0.1178,0.8174});
Shape& Shape41 =  Shape();
Shape41.setUSE(CString("SiteShape"));
Transform40.addChild(&Shape41);

HAnimSite39.addChild(&Transform40);

HAnimSegment35.addChild(&HAnimSite39);

HAnimJoint34.addChildren(&HAnimSegment35);

HAnimJoint& HAnimJoint42 =  HAnimJoint();
HAnimJoint42.X3DNode::setName(CString("pelvis"));
HAnimJoint42.setDEF(CString("hanim_pelvis"));
HAnimJoint42.setCenter(new float[3]{-0.0002,-0.1178,0.6986});
HAnimSegment& HAnimSegment43 =  HAnimSegment();
HAnimSegment43.X3DNode::setName(CString("SEGMENT_FOR_pelvis"));
HAnimSegment43.setDEF(CString("hanim_SEGMENT_FOR_pelvis"));
TouchSensor& TouchSensor44 =  TouchSensor();
TouchSensor44.setDescription(CString("joint pelvis segment SEGMENT_FOR_pelvis"));
HAnimSegment43.addChild(&TouchSensor44);

Transform& Transform45 =  Transform();
Transform45.setTranslation(new float[3]{-0.0002,-0.1178,0.6986});
Shape& Shape46 =  Shape();
Shape46.setUSE(CString("JointShape"));
Transform45.addChild(&Shape46);

HAnimSegment43.addChild(&Transform45);

HAnimSite& HAnimSite47 =  HAnimSite();
HAnimSite47.X3DNode::setName(CString("SEGMENT_FOR_pelvis_tip"));
HAnimSite47.setDEF(CString("hanim_SEGMENT_FOR_pelvis_tip"));
Transform& Transform48 =  Transform();
Transform48.setTranslation(new float[3]{-0.0002,-0.1178,0.6986});
Shape& Shape49 =  Shape();
Shape49.setUSE(CString("SiteShape"));
Transform48.addChild(&Shape49);

HAnimSite47.addChild(&Transform48);

HAnimSegment43.addChild(&HAnimSite47);

HAnimJoint42.addChildren(&HAnimSegment43);

HAnimJoint& HAnimJoint50 =  HAnimJoint();
HAnimJoint50.X3DNode::setName(CString("l_thigh"));
HAnimJoint50.setDEF(CString("hanim_l_thigh"));
HAnimJoint50.setCenter(new float[3]{0.0945,-0.1202,0.8181});
HAnimSegment& HAnimSegment51 =  HAnimSegment();
HAnimSegment51.X3DNode::setName(CString("SEGMENT_FOR_l_thigh"));
HAnimSegment51.setDEF(CString("hanim_SEGMENT_FOR_l_thigh"));
TouchSensor& TouchSensor52 =  TouchSensor();
TouchSensor52.setDescription(CString("joint l_thigh segment SEGMENT_FOR_l_thigh"));
HAnimSegment51.addChild(&TouchSensor52);

Transform& Transform53 =  Transform();
Transform53.setTranslation(new float[3]{0.0945,-0.1202,0.8181});
Shape& Shape54 =  Shape();
Shape54.setUSE(CString("JointShape"));
Transform53.addChild(&Shape54);

HAnimSegment51.addChild(&Transform53);

HAnimSite& HAnimSite55 =  HAnimSite();
HAnimSite55.X3DNode::setName(CString("SEGMENT_FOR_l_thigh_tip"));
HAnimSite55.setDEF(CString("hanim_SEGMENT_FOR_l_thigh_tip"));
Transform& Transform56 =  Transform();
Transform56.setTranslation(new float[3]{0.0945,-0.1202,0.8181});
Shape& Shape57 =  Shape();
Shape57.setUSE(CString("SiteShape"));
Transform56.addChild(&Shape57);

HAnimSite55.addChild(&Transform56);

HAnimSegment51.addChild(&HAnimSite55);

HAnimJoint50.addChildren(&HAnimSegment51);

HAnimJoint& HAnimJoint58 =  HAnimJoint();
HAnimJoint58.X3DNode::setName(CString("l_calf"));
HAnimJoint58.setDEF(CString("hanim_l_calf"));
HAnimJoint58.setCenter(new float[3]{0.0924,-0.1213,0.4003});
HAnimSegment& HAnimSegment59 =  HAnimSegment();
HAnimSegment59.X3DNode::setName(CString("SEGMENT_FOR_l_calf"));
HAnimSegment59.setDEF(CString("hanim_SEGMENT_FOR_l_calf"));
TouchSensor& TouchSensor60 =  TouchSensor();
TouchSensor60.setDescription(CString("joint l_calf segment SEGMENT_FOR_l_calf"));
HAnimSegment59.addChild(&TouchSensor60);

Transform& Transform61 =  Transform();
Transform61.setTranslation(new float[3]{0.0924,-0.1213,0.4003});
Shape& Shape62 =  Shape();
Shape62.setUSE(CString("JointShape"));
Transform61.addChild(&Shape62);

HAnimSegment59.addChild(&Transform61);

HAnimSite& HAnimSite63 =  HAnimSite();
HAnimSite63.X3DNode::setName(CString("SEGMENT_FOR_l_calf_tip"));
HAnimSite63.setDEF(CString("hanim_SEGMENT_FOR_l_calf_tip"));
Transform& Transform64 =  Transform();
Transform64.setTranslation(new float[3]{0.0924,-0.1213,0.4003});
Shape& Shape65 =  Shape();
Shape65.setUSE(CString("SiteShape"));
Transform64.addChild(&Shape65);

HAnimSite63.addChild(&Transform64);

HAnimSegment59.addChild(&HAnimSite63);

HAnimJoint58.addChildren(&HAnimSegment59);

HAnimJoint& HAnimJoint66 =  HAnimJoint();
HAnimJoint66.X3DNode::setName(CString("l_talus"));
HAnimJoint66.setDEF(CString("hanim_l_talus"));
HAnimJoint66.setCenter(new float[3]{0.0886,-0.1123,0.0869});
HAnimSegment& HAnimSegment67 =  HAnimSegment();
HAnimSegment67.X3DNode::setName(CString("SEGMENT_FOR_l_talus"));
HAnimSegment67.setDEF(CString("hanim_SEGMENT_FOR_l_talus"));
TouchSensor& TouchSensor68 =  TouchSensor();
TouchSensor68.setDescription(CString("joint l_talus segment SEGMENT_FOR_l_talus"));
HAnimSegment67.addChild(&TouchSensor68);

Transform& Transform69 =  Transform();
Transform69.setTranslation(new float[3]{0.0886,-0.1123,0.0869});
Shape& Shape70 =  Shape();
Shape70.setUSE(CString("JointShape"));
Transform69.addChild(&Shape70);

HAnimSegment67.addChild(&Transform69);

HAnimSite& HAnimSite71 =  HAnimSite();
HAnimSite71.X3DNode::setName(CString("SEGMENT_FOR_l_talus_tip"));
HAnimSite71.setDEF(CString("hanim_SEGMENT_FOR_l_talus_tip"));
Transform& Transform72 =  Transform();
Transform72.setTranslation(new float[3]{0.0886,-0.1123,0.0869});
Shape& Shape73 =  Shape();
Shape73.setUSE(CString("SiteShape"));
Transform72.addChild(&Shape73);

HAnimSite71.addChild(&Transform72);

HAnimSegment67.addChild(&HAnimSite71);

HAnimJoint66.addChildren(&HAnimSegment67);

HAnimJoint& HAnimJoint74 =  HAnimJoint();
HAnimJoint74.X3DNode::setName(CString("l_navicular"));
HAnimJoint74.setDEF(CString("hanim_l_navicular"));
HAnimJoint74.setCenter(new float[3]{0.0781,-0.097,0.0283});
HAnimSegment& HAnimSegment75 =  HAnimSegment();
HAnimSegment75.X3DNode::setName(CString("SEGMENT_FOR_l_navicular"));
HAnimSegment75.setDEF(CString("hanim_SEGMENT_FOR_l_navicular"));
TouchSensor& TouchSensor76 =  TouchSensor();
TouchSensor76.setDescription(CString("joint l_navicular segment SEGMENT_FOR_l_navicular"));
HAnimSegment75.addChild(&TouchSensor76);

Transform& Transform77 =  Transform();
Transform77.setTranslation(new float[3]{0.0781,-0.097,0.0283});
Shape& Shape78 =  Shape();
Shape78.setUSE(CString("JointShape"));
Transform77.addChild(&Shape78);

HAnimSegment75.addChild(&Transform77);

HAnimSite& HAnimSite79 =  HAnimSite();
HAnimSite79.X3DNode::setName(CString("SEGMENT_FOR_l_navicular_tip"));
HAnimSite79.setDEF(CString("hanim_SEGMENT_FOR_l_navicular_tip"));
Transform& Transform80 =  Transform();
Transform80.setTranslation(new float[3]{0.0781,-0.097,0.0283});
Shape& Shape81 =  Shape();
Shape81.setUSE(CString("SiteShape"));
Transform80.addChild(&Shape81);

HAnimSite79.addChild(&Transform80);

HAnimSegment75.addChild(&HAnimSite79);

HAnimJoint74.addChildren(&HAnimSegment75);

HAnimJoint& HAnimJoint82 =  HAnimJoint();
HAnimJoint82.X3DNode::setName(CString("l_cuneiform_1"));
HAnimJoint82.setDEF(CString("hanim_l_cuneiform_1"));
HAnimJoint82.setCenter(new float[3]{0.0672,-0.0835,0.0235});
HAnimSegment& HAnimSegment83 =  HAnimSegment();
HAnimSegment83.X3DNode::setName(CString("SEGMENT_FOR_l_cuneiform_1"));
HAnimSegment83.setDEF(CString("hanim_SEGMENT_FOR_l_cuneiform_1"));
TouchSensor& TouchSensor84 =  TouchSensor();
TouchSensor84.setDescription(CString("joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1"));
HAnimSegment83.addChild(&TouchSensor84);

Transform& Transform85 =  Transform();
Transform85.setTranslation(new float[3]{0.0672,-0.0835,0.0235});
Shape& Shape86 =  Shape();
Shape86.setUSE(CString("JointShape"));
Transform85.addChild(&Shape86);

HAnimSegment83.addChild(&Transform85);

HAnimSite& HAnimSite87 =  HAnimSite();
HAnimSite87.X3DNode::setName(CString("SEGMENT_FOR_l_cuneiform_1_tip"));
HAnimSite87.setDEF(CString("hanim_SEGMENT_FOR_l_cuneiform_1_tip"));
Transform& Transform88 =  Transform();
Transform88.setTranslation(new float[3]{0.0672,-0.0835,0.0235});
Shape& Shape89 =  Shape();
Shape89.setUSE(CString("SiteShape"));
Transform88.addChild(&Shape89);

HAnimSite87.addChild(&Transform88);

HAnimSegment83.addChild(&HAnimSite87);

HAnimJoint82.addChildren(&HAnimSegment83);

HAnimJoint& HAnimJoint90 =  HAnimJoint();
HAnimJoint90.X3DNode::setName(CString("l_metatarsal_1"));
HAnimJoint90.setDEF(CString("hanim_l_metatarsal_1"));
HAnimJoint90.setCenter(new float[3]{0.0644,-0.0577,0.0147});
HAnimSegment& HAnimSegment91 =  HAnimSegment();
HAnimSegment91.X3DNode::setName(CString("SEGMENT_FOR_l_metatarsal_1"));
HAnimSegment91.setDEF(CString("hanim_SEGMENT_FOR_l_metatarsal_1"));
TouchSensor& TouchSensor92 =  TouchSensor();
TouchSensor92.setDescription(CString("joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1"));
HAnimSegment91.addChild(&TouchSensor92);

Transform& Transform93 =  Transform();
Transform93.setTranslation(new float[3]{0.0644,-0.0577,0.0147});
Shape& Shape94 =  Shape();
Shape94.setUSE(CString("JointShape"));
Transform93.addChild(&Shape94);

HAnimSegment91.addChild(&Transform93);

HAnimSite& HAnimSite95 =  HAnimSite();
HAnimSite95.X3DNode::setName(CString("SEGMENT_FOR_l_metatarsal_1_tip"));
HAnimSite95.setDEF(CString("hanim_SEGMENT_FOR_l_metatarsal_1_tip"));
Transform& Transform96 =  Transform();
Transform96.setTranslation(new float[3]{0.0644,-0.0577,0.0147});
Shape& Shape97 =  Shape();
Shape97.setUSE(CString("SiteShape"));
Transform96.addChild(&Shape97);

HAnimSite95.addChild(&Transform96);

HAnimSegment91.addChild(&HAnimSite95);

HAnimJoint90.addChildren(&HAnimSegment91);

HAnimJoint& HAnimJoint98 =  HAnimJoint();
HAnimJoint98.X3DNode::setName(CString("l_tarsal_proximal_phalanx_1"));
HAnimJoint98.setDEF(CString("hanim_l_tarsal_proximal_phalanx_1"));
HAnimJoint98.setCenter(new float[3]{0.0619,-0.0083,0.0059});
HAnimSegment& HAnimSegment99 =  HAnimSegment();
HAnimSegment99.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_proximal_phalanx_1"));
HAnimSegment99.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1"));
TouchSensor& TouchSensor100 =  TouchSensor();
TouchSensor100.setDescription(CString("joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1"));
HAnimSegment99.addChild(&TouchSensor100);

Transform& Transform101 =  Transform();
Transform101.setTranslation(new float[3]{0.0619,-0.0083,0.0059});
Shape& Shape102 =  Shape();
Shape102.setUSE(CString("JointShape"));
Transform101.addChild(&Shape102);

HAnimSegment99.addChild(&Transform101);

HAnimSite& HAnimSite103 =  HAnimSite();
HAnimSite103.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip"));
HAnimSite103.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip"));
Transform& Transform104 =  Transform();
Transform104.setTranslation(new float[3]{0.0619,-0.0083,0.0059});
Shape& Shape105 =  Shape();
Shape105.setUSE(CString("SiteShape"));
Transform104.addChild(&Shape105);

HAnimSite103.addChild(&Transform104);

HAnimSegment99.addChild(&HAnimSite103);

HAnimJoint98.addChildren(&HAnimSegment99);

HAnimJoint& HAnimJoint106 =  HAnimJoint();
HAnimJoint106.X3DNode::setName(CString("l_tarsal_distal_phalanx_1"));
HAnimJoint106.setDEF(CString("hanim_l_tarsal_distal_phalanx_1"));
HAnimSegment& HAnimSegment107 =  HAnimSegment();
HAnimSegment107.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_distal_phalanx_1"));
HAnimSegment107.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1"));
TouchSensor& TouchSensor108 =  TouchSensor();
TouchSensor108.setDescription(CString("joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1"));
HAnimSegment107.addChild(&TouchSensor108);

Transform& Transform109 =  Transform();
Shape& Shape110 =  Shape();
Shape110.setUSE(CString("JointShape"));
Transform109.addChild(&Shape110);

HAnimSegment107.addChild(&Transform109);

HAnimSite& HAnimSite111 =  HAnimSite();
HAnimSite111.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip"));
HAnimSite111.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip"));
Transform& Transform112 =  Transform();
Shape& Shape113 =  Shape();
Shape113.setUSE(CString("SiteShape"));
Transform112.addChild(&Shape113);

HAnimSite111.addChild(&Transform112);

HAnimSegment107.addChild(&HAnimSite111);

HAnimJoint106.addChildren(&HAnimSegment107);

HAnimJoint98.addChildren(&HAnimJoint106);

HAnimJoint90.addChildren(&HAnimJoint98);

HAnimJoint82.addChildren(&HAnimJoint90);

HAnimJoint74.addChildren(&HAnimJoint82);

HAnimJoint& HAnimJoint114 =  HAnimJoint();
HAnimJoint114.X3DNode::setName(CString("l_cuneiform_2"));
HAnimJoint114.setDEF(CString("hanim_l_cuneiform_2"));
HAnimJoint114.setCenter(new float[3]{0.0812,-0.0805,0.025});
HAnimSegment& HAnimSegment115 =  HAnimSegment();
HAnimSegment115.X3DNode::setName(CString("SEGMENT_FOR_l_cuneiform_2"));
HAnimSegment115.setDEF(CString("hanim_SEGMENT_FOR_l_cuneiform_2"));
TouchSensor& TouchSensor116 =  TouchSensor();
TouchSensor116.setDescription(CString("joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2"));
HAnimSegment115.addChild(&TouchSensor116);

Transform& Transform117 =  Transform();
Transform117.setTranslation(new float[3]{0.0812,-0.0805,0.025});
Shape& Shape118 =  Shape();
Shape118.setUSE(CString("JointShape"));
Transform117.addChild(&Shape118);

HAnimSegment115.addChild(&Transform117);

HAnimSite& HAnimSite119 =  HAnimSite();
HAnimSite119.X3DNode::setName(CString("SEGMENT_FOR_l_cuneiform_2_tip"));
HAnimSite119.setDEF(CString("hanim_SEGMENT_FOR_l_cuneiform_2_tip"));
Transform& Transform120 =  Transform();
Transform120.setTranslation(new float[3]{0.0812,-0.0805,0.025});
Shape& Shape121 =  Shape();
Shape121.setUSE(CString("SiteShape"));
Transform120.addChild(&Shape121);

HAnimSite119.addChild(&Transform120);

HAnimSegment115.addChild(&HAnimSite119);

HAnimJoint114.addChildren(&HAnimSegment115);

HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.X3DNode::setName(CString("l_metatarsal_2"));
HAnimJoint122.setDEF(CString("hanim_l_metatarsal_2"));
HAnimJoint122.setCenter(new float[3]{0.08,-0.0608,0.0175});
HAnimSegment& HAnimSegment123 =  HAnimSegment();
HAnimSegment123.X3DNode::setName(CString("SEGMENT_FOR_l_metatarsal_2"));
HAnimSegment123.setDEF(CString("hanim_SEGMENT_FOR_l_metatarsal_2"));
TouchSensor& TouchSensor124 =  TouchSensor();
TouchSensor124.setDescription(CString("joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2"));
HAnimSegment123.addChild(&TouchSensor124);

Transform& Transform125 =  Transform();
Transform125.setTranslation(new float[3]{0.08,-0.0608,0.0175});
Shape& Shape126 =  Shape();
Shape126.setUSE(CString("JointShape"));
Transform125.addChild(&Shape126);

HAnimSegment123.addChild(&Transform125);

HAnimSite& HAnimSite127 =  HAnimSite();
HAnimSite127.X3DNode::setName(CString("SEGMENT_FOR_l_metatarsal_2_tip"));
HAnimSite127.setDEF(CString("hanim_SEGMENT_FOR_l_metatarsal_2_tip"));
Transform& Transform128 =  Transform();
Transform128.setTranslation(new float[3]{0.08,-0.0608,0.0175});
Shape& Shape129 =  Shape();
Shape129.setUSE(CString("SiteShape"));
Transform128.addChild(&Shape129);

HAnimSite127.addChild(&Transform128);

HAnimSegment123.addChild(&HAnimSite127);

HAnimJoint122.addChildren(&HAnimSegment123);

HAnimJoint& HAnimJoint130 =  HAnimJoint();
HAnimJoint130.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimJoint130.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimJoint130.setCenter(new float[3]{0.0824,-0.004,0.0064});
HAnimSegment& HAnimSegment131 =  HAnimSegment();
HAnimSegment131.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_proximal_phalanx_2"));
HAnimSegment131.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2"));
TouchSensor& TouchSensor132 =  TouchSensor();
TouchSensor132.setDescription(CString("joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2"));
HAnimSegment131.addChild(&TouchSensor132);

Transform& Transform133 =  Transform();
Transform133.setTranslation(new float[3]{0.0824,-0.004,0.0064});
Shape& Shape134 =  Shape();
Shape134.setUSE(CString("JointShape"));
Transform133.addChild(&Shape134);

HAnimSegment131.addChild(&Transform133);

HAnimSite& HAnimSite135 =  HAnimSite();
HAnimSite135.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip"));
HAnimSite135.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip"));
Transform& Transform136 =  Transform();
Transform136.setTranslation(new float[3]{0.0824,-0.004,0.0064});
Shape& Shape137 =  Shape();
Shape137.setUSE(CString("SiteShape"));
Transform136.addChild(&Shape137);

HAnimSite135.addChild(&Transform136);

HAnimSegment131.addChild(&HAnimSite135);

HAnimJoint130.addChildren(&HAnimSegment131);

HAnimJoint& HAnimJoint138 =  HAnimJoint();
HAnimJoint138.X3DNode::setName(CString("l_tarsal_middle_phalanx_2"));
HAnimJoint138.setDEF(CString("hanim_l_tarsal_middle_phalanx_2"));
HAnimJoint138.setCenter(new float[3]{0.0841,0.0121,0.0041});
HAnimSegment& HAnimSegment139 =  HAnimSegment();
HAnimSegment139.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_middle_phalanx_2"));
HAnimSegment139.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2"));
TouchSensor& TouchSensor140 =  TouchSensor();
TouchSensor140.setDescription(CString("joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2"));
HAnimSegment139.addChild(&TouchSensor140);

Transform& Transform141 =  Transform();
Transform141.setTranslation(new float[3]{0.0841,0.0121,0.0041});
Shape& Shape142 =  Shape();
Shape142.setUSE(CString("JointShape"));
Transform141.addChild(&Shape142);

HAnimSegment139.addChild(&Transform141);

HAnimSite& HAnimSite143 =  HAnimSite();
HAnimSite143.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip"));
HAnimSite143.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip"));
Transform& Transform144 =  Transform();
Transform144.setTranslation(new float[3]{0.0841,0.0121,0.0041});
Shape& Shape145 =  Shape();
Shape145.setUSE(CString("SiteShape"));
Transform144.addChild(&Shape145);

HAnimSite143.addChild(&Transform144);

HAnimSegment139.addChild(&HAnimSite143);

HAnimJoint138.addChildren(&HAnimSegment139);

HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.X3DNode::setName(CString("l_tarsal_distal_phalanx_2"));
HAnimJoint146.setDEF(CString("hanim_l_tarsal_distal_phalanx_2"));
HAnimJoint146.setCenter(new float[3]{0.0841,0.0216,0.0013});
HAnimSegment& HAnimSegment147 =  HAnimSegment();
HAnimSegment147.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_distal_phalanx_2"));
HAnimSegment147.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2"));
TouchSensor& TouchSensor148 =  TouchSensor();
TouchSensor148.setDescription(CString("joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2"));
HAnimSegment147.addChild(&TouchSensor148);

Transform& Transform149 =  Transform();
Transform149.setTranslation(new float[3]{0.0841,0.0216,0.0013});
Shape& Shape150 =  Shape();
Shape150.setUSE(CString("JointShape"));
Transform149.addChild(&Shape150);

HAnimSegment147.addChild(&Transform149);

HAnimSite& HAnimSite151 =  HAnimSite();
HAnimSite151.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip"));
HAnimSite151.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip"));
Transform& Transform152 =  Transform();
Transform152.setTranslation(new float[3]{0.0841,0.0216,0.0013});
Shape& Shape153 =  Shape();
Shape153.setUSE(CString("SiteShape"));
Transform152.addChild(&Shape153);

HAnimSite151.addChild(&Transform152);

HAnimSegment147.addChild(&HAnimSite151);

HAnimJoint146.addChildren(&HAnimSegment147);

HAnimJoint138.addChildren(&HAnimJoint146);

HAnimJoint130.addChildren(&HAnimJoint138);

HAnimJoint122.addChildren(&HAnimJoint130);

HAnimJoint114.addChildren(&HAnimJoint122);

HAnimJoint74.addChildren(&HAnimJoint114);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.X3DNode::setName(CString("l_cuneiform_3"));
HAnimJoint154.setDEF(CString("hanim_l_cuneiform_3"));
HAnimJoint154.setCenter(new float[3]{0.0928,-0.0821,0.0248});
HAnimSegment& HAnimSegment155 =  HAnimSegment();
HAnimSegment155.X3DNode::setName(CString("SEGMENT_FOR_l_cuneiform_3"));
HAnimSegment155.setDEF(CString("hanim_SEGMENT_FOR_l_cuneiform_3"));
TouchSensor& TouchSensor156 =  TouchSensor();
TouchSensor156.setDescription(CString("joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3"));
HAnimSegment155.addChild(&TouchSensor156);

Transform& Transform157 =  Transform();
Transform157.setTranslation(new float[3]{0.0928,-0.0821,0.0248});
Shape& Shape158 =  Shape();
Shape158.setUSE(CString("JointShape"));
Transform157.addChild(&Shape158);

HAnimSegment155.addChild(&Transform157);

HAnimSite& HAnimSite159 =  HAnimSite();
HAnimSite159.X3DNode::setName(CString("SEGMENT_FOR_l_cuneiform_3_tip"));
HAnimSite159.setDEF(CString("hanim_SEGMENT_FOR_l_cuneiform_3_tip"));
Transform& Transform160 =  Transform();
Transform160.setTranslation(new float[3]{0.0928,-0.0821,0.0248});
Shape& Shape161 =  Shape();
Shape161.setUSE(CString("SiteShape"));
Transform160.addChild(&Shape161);

HAnimSite159.addChild(&Transform160);

HAnimSegment155.addChild(&HAnimSite159);

HAnimJoint154.addChildren(&HAnimSegment155);

HAnimJoint& HAnimJoint162 =  HAnimJoint();
HAnimJoint162.X3DNode::setName(CString("l_metatarsal_3"));
HAnimJoint162.setDEF(CString("hanim_l_metatarsal_3"));
HAnimJoint162.setCenter(new float[3]{0.0944,-0.0625,0.0175});
HAnimSegment& HAnimSegment163 =  HAnimSegment();
HAnimSegment163.X3DNode::setName(CString("SEGMENT_FOR_l_metatarsal_3"));
HAnimSegment163.setDEF(CString("hanim_SEGMENT_FOR_l_metatarsal_3"));
TouchSensor& TouchSensor164 =  TouchSensor();
TouchSensor164.setDescription(CString("joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3"));
HAnimSegment163.addChild(&TouchSensor164);

Transform& Transform165 =  Transform();
Transform165.setTranslation(new float[3]{0.0944,-0.0625,0.0175});
Shape& Shape166 =  Shape();
Shape166.setUSE(CString("JointShape"));
Transform165.addChild(&Shape166);

HAnimSegment163.addChild(&Transform165);

HAnimSite& HAnimSite167 =  HAnimSite();
HAnimSite167.X3DNode::setName(CString("SEGMENT_FOR_l_metatarsal_3_tip"));
HAnimSite167.setDEF(CString("hanim_SEGMENT_FOR_l_metatarsal_3_tip"));
Transform& Transform168 =  Transform();
Transform168.setTranslation(new float[3]{0.0944,-0.0625,0.0175});
Shape& Shape169 =  Shape();
Shape169.setUSE(CString("SiteShape"));
Transform168.addChild(&Shape169);

HAnimSite167.addChild(&Transform168);

HAnimSegment163.addChild(&HAnimSite167);

HAnimJoint162.addChildren(&HAnimSegment163);

HAnimJoint& HAnimJoint170 =  HAnimJoint();
HAnimJoint170.X3DNode::setName(CString("l_tarsal_proximal_phalanx_3"));
HAnimJoint170.setDEF(CString("hanim_l_tarsal_proximal_phalanx_3"));
HAnimJoint170.setCenter(new float[3]{0.0963,-0.0065,0.0065});
HAnimSegment& HAnimSegment171 =  HAnimSegment();
HAnimSegment171.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_proximal_phalanx_3"));
HAnimSegment171.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3"));
TouchSensor& TouchSensor172 =  TouchSensor();
TouchSensor172.setDescription(CString("joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3"));
HAnimSegment171.addChild(&TouchSensor172);

Transform& Transform173 =  Transform();
Transform173.setTranslation(new float[3]{0.0963,-0.0065,0.0065});
Shape& Shape174 =  Shape();
Shape174.setUSE(CString("JointShape"));
Transform173.addChild(&Shape174);

HAnimSegment171.addChild(&Transform173);

HAnimSite& HAnimSite175 =  HAnimSite();
HAnimSite175.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip"));
HAnimSite175.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip"));
Transform& Transform176 =  Transform();
Transform176.setTranslation(new float[3]{0.0963,-0.0065,0.0065});
Shape& Shape177 =  Shape();
Shape177.setUSE(CString("SiteShape"));
Transform176.addChild(&Shape177);

HAnimSite175.addChild(&Transform176);

HAnimSegment171.addChild(&HAnimSite175);

HAnimJoint170.addChildren(&HAnimSegment171);

HAnimJoint& HAnimJoint178 =  HAnimJoint();
HAnimJoint178.X3DNode::setName(CString("l_tarsal_middle_phalanx_3"));
HAnimJoint178.setDEF(CString("hanim_l_tarsal_middle_phalanx_3"));
HAnimJoint178.setCenter(new float[3]{0.0987,0.0086,0.0034});
HAnimSegment& HAnimSegment179 =  HAnimSegment();
HAnimSegment179.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_middle_phalanx_3"));
HAnimSegment179.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3"));
TouchSensor& TouchSensor180 =  TouchSensor();
TouchSensor180.setDescription(CString("joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3"));
HAnimSegment179.addChild(&TouchSensor180);

Transform& Transform181 =  Transform();
Transform181.setTranslation(new float[3]{0.0987,0.0086,0.0034});
Shape& Shape182 =  Shape();
Shape182.setUSE(CString("JointShape"));
Transform181.addChild(&Shape182);

HAnimSegment179.addChild(&Transform181);

HAnimSite& HAnimSite183 =  HAnimSite();
HAnimSite183.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip"));
HAnimSite183.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip"));
Transform& Transform184 =  Transform();
Transform184.setTranslation(new float[3]{0.0987,0.0086,0.0034});
Shape& Shape185 =  Shape();
Shape185.setUSE(CString("SiteShape"));
Transform184.addChild(&Shape185);

HAnimSite183.addChild(&Transform184);

HAnimSegment179.addChild(&HAnimSite183);

HAnimJoint178.addChildren(&HAnimSegment179);

HAnimJoint& HAnimJoint186 =  HAnimJoint();
HAnimJoint186.X3DNode::setName(CString("l_tarsal_distal_phalanx_3"));
HAnimJoint186.setDEF(CString("hanim_l_tarsal_distal_phalanx_3"));
HAnimJoint186.setCenter(new float[3]{0.1002,0.0178,0.0013});
HAnimSegment& HAnimSegment187 =  HAnimSegment();
HAnimSegment187.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_distal_phalanx_3"));
HAnimSegment187.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3"));
TouchSensor& TouchSensor188 =  TouchSensor();
TouchSensor188.setDescription(CString("joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3"));
HAnimSegment187.addChild(&TouchSensor188);

Transform& Transform189 =  Transform();
Transform189.setTranslation(new float[3]{0.1002,0.0178,0.0013});
Shape& Shape190 =  Shape();
Shape190.setUSE(CString("JointShape"));
Transform189.addChild(&Shape190);

HAnimSegment187.addChild(&Transform189);

HAnimSite& HAnimSite191 =  HAnimSite();
HAnimSite191.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip"));
HAnimSite191.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip"));
Transform& Transform192 =  Transform();
Transform192.setTranslation(new float[3]{0.1002,0.0178,0.0013});
Shape& Shape193 =  Shape();
Shape193.setUSE(CString("SiteShape"));
Transform192.addChild(&Shape193);

HAnimSite191.addChild(&Transform192);

HAnimSegment187.addChild(&HAnimSite191);

HAnimJoint186.addChildren(&HAnimSegment187);

HAnimJoint178.addChildren(&HAnimJoint186);

HAnimJoint170.addChildren(&HAnimJoint178);

HAnimJoint162.addChildren(&HAnimJoint170);

HAnimJoint154.addChildren(&HAnimJoint162);

HAnimJoint74.addChildren(&HAnimJoint154);

HAnimJoint66.addChildren(&HAnimJoint74);

HAnimJoint& HAnimJoint194 =  HAnimJoint();
HAnimJoint194.X3DNode::setName(CString("l_calcaneus"));
HAnimJoint194.setDEF(CString("hanim_l_calcaneus"));
HAnimJoint194.setCenter(new float[3]{0.0889,-0.1278,0.0494});
HAnimSegment& HAnimSegment195 =  HAnimSegment();
HAnimSegment195.X3DNode::setName(CString("SEGMENT_FOR_l_calcaneus"));
HAnimSegment195.setDEF(CString("hanim_SEGMENT_FOR_l_calcaneus"));
TouchSensor& TouchSensor196 =  TouchSensor();
TouchSensor196.setDescription(CString("joint l_calcaneus segment SEGMENT_FOR_l_calcaneus"));
HAnimSegment195.addChild(&TouchSensor196);

Transform& Transform197 =  Transform();
Transform197.setTranslation(new float[3]{0.0889,-0.1278,0.0494});
Shape& Shape198 =  Shape();
Shape198.setUSE(CString("JointShape"));
Transform197.addChild(&Shape198);

HAnimSegment195.addChild(&Transform197);

HAnimSite& HAnimSite199 =  HAnimSite();
HAnimSite199.X3DNode::setName(CString("SEGMENT_FOR_l_calcaneus_tip"));
HAnimSite199.setDEF(CString("hanim_SEGMENT_FOR_l_calcaneus_tip"));
Transform& Transform200 =  Transform();
Transform200.setTranslation(new float[3]{0.0889,-0.1278,0.0494});
Shape& Shape201 =  Shape();
Shape201.setUSE(CString("SiteShape"));
Transform200.addChild(&Shape201);

HAnimSite199.addChild(&Transform200);

HAnimSegment195.addChild(&HAnimSite199);

HAnimJoint194.addChildren(&HAnimSegment195);

HAnimJoint& HAnimJoint202 =  HAnimJoint();
HAnimJoint202.X3DNode::setName(CString("l_cuboid"));
HAnimJoint202.setDEF(CString("hanim_l_cuboid"));
HAnimJoint202.setCenter(new float[3]{0.1105,-0.0998,0.0267});
HAnimSegment& HAnimSegment203 =  HAnimSegment();
HAnimSegment203.X3DNode::setName(CString("SEGMENT_FOR_l_cuboid"));
HAnimSegment203.setDEF(CString("hanim_SEGMENT_FOR_l_cuboid"));
TouchSensor& TouchSensor204 =  TouchSensor();
TouchSensor204.setDescription(CString("joint l_cuboid segment SEGMENT_FOR_l_cuboid"));
HAnimSegment203.addChild(&TouchSensor204);

Transform& Transform205 =  Transform();
Transform205.setTranslation(new float[3]{0.1105,-0.0998,0.0267});
Shape& Shape206 =  Shape();
Shape206.setUSE(CString("JointShape"));
Transform205.addChild(&Shape206);

HAnimSegment203.addChild(&Transform205);

HAnimSite& HAnimSite207 =  HAnimSite();
HAnimSite207.X3DNode::setName(CString("SEGMENT_FOR_l_cuboid_tip"));
HAnimSite207.setDEF(CString("hanim_SEGMENT_FOR_l_cuboid_tip"));
Transform& Transform208 =  Transform();
Transform208.setTranslation(new float[3]{0.1105,-0.0998,0.0267});
Shape& Shape209 =  Shape();
Shape209.setUSE(CString("SiteShape"));
Transform208.addChild(&Shape209);

HAnimSite207.addChild(&Transform208);

HAnimSegment203.addChild(&HAnimSite207);

HAnimJoint202.addChildren(&HAnimSegment203);

HAnimJoint& HAnimJoint210 =  HAnimJoint();
HAnimJoint210.X3DNode::setName(CString("l_metatarsal_4"));
HAnimJoint210.setDEF(CString("hanim_l_metatarsal_4"));
HAnimJoint210.setCenter(new float[3]{0.1063,-0.0634,0.016});
HAnimSegment& HAnimSegment211 =  HAnimSegment();
HAnimSegment211.X3DNode::setName(CString("SEGMENT_FOR_l_metatarsal_4"));
HAnimSegment211.setDEF(CString("hanim_SEGMENT_FOR_l_metatarsal_4"));
TouchSensor& TouchSensor212 =  TouchSensor();
TouchSensor212.setDescription(CString("joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4"));
HAnimSegment211.addChild(&TouchSensor212);

Transform& Transform213 =  Transform();
Transform213.setTranslation(new float[3]{0.1063,-0.0634,0.016});
Shape& Shape214 =  Shape();
Shape214.setUSE(CString("JointShape"));
Transform213.addChild(&Shape214);

HAnimSegment211.addChild(&Transform213);

HAnimSite& HAnimSite215 =  HAnimSite();
HAnimSite215.X3DNode::setName(CString("SEGMENT_FOR_l_metatarsal_4_tip"));
HAnimSite215.setDEF(CString("hanim_SEGMENT_FOR_l_metatarsal_4_tip"));
Transform& Transform216 =  Transform();
Transform216.setTranslation(new float[3]{0.1063,-0.0634,0.016});
Shape& Shape217 =  Shape();
Shape217.setUSE(CString("SiteShape"));
Transform216.addChild(&Shape217);

HAnimSite215.addChild(&Transform216);

HAnimSegment211.addChild(&HAnimSite215);

HAnimJoint210.addChildren(&HAnimSegment211);

HAnimJoint& HAnimJoint218 =  HAnimJoint();
HAnimJoint218.X3DNode::setName(CString("l_tarsal_proximal_phalanx_4"));
HAnimJoint218.setDEF(CString("hanim_l_tarsal_proximal_phalanx_4"));
HAnimJoint218.setCenter(new float[3]{0.1097,-0.0107,0.0058});
HAnimSegment& HAnimSegment219 =  HAnimSegment();
HAnimSegment219.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_proximal_phalanx_4"));
HAnimSegment219.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4"));
TouchSensor& TouchSensor220 =  TouchSensor();
TouchSensor220.setDescription(CString("joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4"));
HAnimSegment219.addChild(&TouchSensor220);

Transform& Transform221 =  Transform();
Transform221.setTranslation(new float[3]{0.1097,-0.0107,0.0058});
Shape& Shape222 =  Shape();
Shape222.setUSE(CString("JointShape"));
Transform221.addChild(&Shape222);

HAnimSegment219.addChild(&Transform221);

HAnimSite& HAnimSite223 =  HAnimSite();
HAnimSite223.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip"));
HAnimSite223.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip"));
Transform& Transform224 =  Transform();
Transform224.setTranslation(new float[3]{0.1097,-0.0107,0.0058});
Shape& Shape225 =  Shape();
Shape225.setUSE(CString("SiteShape"));
Transform224.addChild(&Shape225);

HAnimSite223.addChild(&Transform224);

HAnimSegment219.addChild(&HAnimSite223);

HAnimJoint218.addChildren(&HAnimSegment219);

HAnimJoint& HAnimJoint226 =  HAnimJoint();
HAnimJoint226.X3DNode::setName(CString("l_tarsal_middle_phalanx_4"));
HAnimJoint226.setDEF(CString("hanim_l_tarsal_middle_phalanx_4"));
HAnimJoint226.setCenter(new float[3]{0.114,0.0044,0.0037});
HAnimSegment& HAnimSegment227 =  HAnimSegment();
HAnimSegment227.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_middle_phalanx_4"));
HAnimSegment227.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4"));
TouchSensor& TouchSensor228 =  TouchSensor();
TouchSensor228.setDescription(CString("joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4"));
HAnimSegment227.addChild(&TouchSensor228);

Transform& Transform229 =  Transform();
Transform229.setTranslation(new float[3]{0.114,0.0044,0.0037});
Shape& Shape230 =  Shape();
Shape230.setUSE(CString("JointShape"));
Transform229.addChild(&Shape230);

HAnimSegment227.addChild(&Transform229);

HAnimSite& HAnimSite231 =  HAnimSite();
HAnimSite231.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip"));
HAnimSite231.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip"));
Transform& Transform232 =  Transform();
Transform232.setTranslation(new float[3]{0.114,0.0044,0.0037});
Shape& Shape233 =  Shape();
Shape233.setUSE(CString("SiteShape"));
Transform232.addChild(&Shape233);

HAnimSite231.addChild(&Transform232);

HAnimSegment227.addChild(&HAnimSite231);

HAnimJoint226.addChildren(&HAnimSegment227);

HAnimJoint& HAnimJoint234 =  HAnimJoint();
HAnimJoint234.X3DNode::setName(CString("l_tarsal_distal_phalanx_4"));
HAnimJoint234.setDEF(CString("hanim_l_tarsal_distal_phalanx_4"));
HAnimJoint234.setCenter(new float[3]{0.1155,0.0118,0.0008});
HAnimSegment& HAnimSegment235 =  HAnimSegment();
HAnimSegment235.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_distal_phalanx_4"));
HAnimSegment235.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4"));
TouchSensor& TouchSensor236 =  TouchSensor();
TouchSensor236.setDescription(CString("joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4"));
HAnimSegment235.addChild(&TouchSensor236);

Transform& Transform237 =  Transform();
Transform237.setTranslation(new float[3]{0.1155,0.0118,0.0008});
Shape& Shape238 =  Shape();
Shape238.setUSE(CString("JointShape"));
Transform237.addChild(&Shape238);

HAnimSegment235.addChild(&Transform237);

HAnimSite& HAnimSite239 =  HAnimSite();
HAnimSite239.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip"));
HAnimSite239.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip"));
Transform& Transform240 =  Transform();
Transform240.setTranslation(new float[3]{0.1155,0.0118,0.0008});
Shape& Shape241 =  Shape();
Shape241.setUSE(CString("SiteShape"));
Transform240.addChild(&Shape241);

HAnimSite239.addChild(&Transform240);

HAnimSegment235.addChild(&HAnimSite239);

HAnimJoint234.addChildren(&HAnimSegment235);

HAnimJoint226.addChildren(&HAnimJoint234);

HAnimJoint218.addChildren(&HAnimJoint226);

HAnimJoint210.addChildren(&HAnimJoint218);

HAnimJoint202.addChildren(&HAnimJoint210);

HAnimJoint& HAnimJoint242 =  HAnimJoint();
HAnimJoint242.X3DNode::setName(CString("l_metatarsal_5"));
HAnimJoint242.setDEF(CString("hanim_l_metatarsal_5"));
HAnimJoint242.setCenter(new float[3]{0.1206,-0.0671,0.0124});
HAnimSegment& HAnimSegment243 =  HAnimSegment();
HAnimSegment243.X3DNode::setName(CString("SEGMENT_FOR_l_metatarsal_5"));
HAnimSegment243.setDEF(CString("hanim_SEGMENT_FOR_l_metatarsal_5"));
TouchSensor& TouchSensor244 =  TouchSensor();
TouchSensor244.setDescription(CString("joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5"));
HAnimSegment243.addChild(&TouchSensor244);

Transform& Transform245 =  Transform();
Transform245.setTranslation(new float[3]{0.1206,-0.0671,0.0124});
Shape& Shape246 =  Shape();
Shape246.setUSE(CString("JointShape"));
Transform245.addChild(&Shape246);

HAnimSegment243.addChild(&Transform245);

HAnimSite& HAnimSite247 =  HAnimSite();
HAnimSite247.X3DNode::setName(CString("SEGMENT_FOR_l_metatarsal_5_tip"));
HAnimSite247.setDEF(CString("hanim_SEGMENT_FOR_l_metatarsal_5_tip"));
Transform& Transform248 =  Transform();
Transform248.setTranslation(new float[3]{0.1206,-0.0671,0.0124});
Shape& Shape249 =  Shape();
Shape249.setUSE(CString("SiteShape"));
Transform248.addChild(&Shape249);

HAnimSite247.addChild(&Transform248);

HAnimSegment243.addChild(&HAnimSite247);

HAnimJoint242.addChildren(&HAnimSegment243);

HAnimJoint& HAnimJoint250 =  HAnimJoint();
HAnimJoint250.X3DNode::setName(CString("l_tarsal_proximal_phalanx_5"));
HAnimJoint250.setDEF(CString("hanim_l_tarsal_proximal_phalanx_5"));
HAnimJoint250.setCenter(new float[3]{0.1239,-0.0153,0.0051});
HAnimSegment& HAnimSegment251 =  HAnimSegment();
HAnimSegment251.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_proximal_phalanx_5"));
HAnimSegment251.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5"));
TouchSensor& TouchSensor252 =  TouchSensor();
TouchSensor252.setDescription(CString("joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5"));
HAnimSegment251.addChild(&TouchSensor252);

Transform& Transform253 =  Transform();
Transform253.setTranslation(new float[3]{0.1239,-0.0153,0.0051});
Shape& Shape254 =  Shape();
Shape254.setUSE(CString("JointShape"));
Transform253.addChild(&Shape254);

HAnimSegment251.addChild(&Transform253);

HAnimSite& HAnimSite255 =  HAnimSite();
HAnimSite255.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip"));
HAnimSite255.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip"));
Transform& Transform256 =  Transform();
Transform256.setTranslation(new float[3]{0.1239,-0.0153,0.0051});
Shape& Shape257 =  Shape();
Shape257.setUSE(CString("SiteShape"));
Transform256.addChild(&Shape257);

HAnimSite255.addChild(&Transform256);

HAnimSegment251.addChild(&HAnimSite255);

HAnimJoint250.addChildren(&HAnimSegment251);

HAnimJoint& HAnimJoint258 =  HAnimJoint();
HAnimJoint258.X3DNode::setName(CString("l_tarsal_middle_phalanx_5"));
HAnimJoint258.setDEF(CString("hanim_l_tarsal_middle_phalanx_5"));
HAnimJoint258.setCenter(new float[3]{0.1262,-0.0077,0.0023});
HAnimSegment& HAnimSegment259 =  HAnimSegment();
HAnimSegment259.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_middle_phalanx_5"));
HAnimSegment259.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5"));
TouchSensor& TouchSensor260 =  TouchSensor();
TouchSensor260.setDescription(CString("joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5"));
HAnimSegment259.addChild(&TouchSensor260);

Transform& Transform261 =  Transform();
Transform261.setTranslation(new float[3]{0.1262,-0.0077,0.0023});
Shape& Shape262 =  Shape();
Shape262.setUSE(CString("JointShape"));
Transform261.addChild(&Shape262);

HAnimSegment259.addChild(&Transform261);

HAnimSite& HAnimSite263 =  HAnimSite();
HAnimSite263.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip"));
HAnimSite263.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip"));
Transform& Transform264 =  Transform();
Transform264.setTranslation(new float[3]{0.1262,-0.0077,0.0023});
Shape& Shape265 =  Shape();
Shape265.setUSE(CString("SiteShape"));
Transform264.addChild(&Shape265);

HAnimSite263.addChild(&Transform264);

HAnimSegment259.addChild(&HAnimSite263);

HAnimJoint258.addChildren(&HAnimSegment259);

HAnimJoint& HAnimJoint266 =  HAnimJoint();
HAnimJoint266.X3DNode::setName(CString("l_tarsal_distal_phalanx_5"));
HAnimJoint266.setDEF(CString("hanim_l_tarsal_distal_phalanx_5"));
HAnimJoint266.setCenter(new float[3]{0.1271,0,0});
HAnimSegment& HAnimSegment267 =  HAnimSegment();
HAnimSegment267.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_distal_phalanx_5"));
HAnimSegment267.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5"));
TouchSensor& TouchSensor268 =  TouchSensor();
TouchSensor268.setDescription(CString("joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5"));
HAnimSegment267.addChild(&TouchSensor268);

Transform& Transform269 =  Transform();
Transform269.setTranslation(new float[3]{0.1271,0,0});
Shape& Shape270 =  Shape();
Shape270.setUSE(CString("JointShape"));
Transform269.addChild(&Shape270);

HAnimSegment267.addChild(&Transform269);

HAnimSite& HAnimSite271 =  HAnimSite();
HAnimSite271.X3DNode::setName(CString("SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip"));
HAnimSite271.setDEF(CString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip"));
Transform& Transform272 =  Transform();
Transform272.setTranslation(new float[3]{0.1271,0,0});
Shape& Shape273 =  Shape();
Shape273.setUSE(CString("SiteShape"));
Transform272.addChild(&Shape273);

HAnimSite271.addChild(&Transform272);

HAnimSegment267.addChild(&HAnimSite271);

HAnimJoint266.addChildren(&HAnimSegment267);

HAnimJoint258.addChildren(&HAnimJoint266);

HAnimJoint250.addChildren(&HAnimJoint258);

HAnimJoint242.addChildren(&HAnimJoint250);

HAnimJoint202.addChildren(&HAnimJoint242);

HAnimJoint194.addChildren(&HAnimJoint202);

HAnimJoint66.addChildren(&HAnimJoint194);

HAnimJoint58.addChildren(&HAnimJoint66);

HAnimJoint50.addChildren(&HAnimJoint58);

HAnimJoint42.addChildren(&HAnimJoint50);

HAnimJoint& HAnimJoint274 =  HAnimJoint();
HAnimJoint274.X3DNode::setName(CString("r_thigh"));
HAnimJoint274.setDEF(CString("hanim_r_thigh"));
HAnimJoint274.setCenter(new float[3]{-0.0948,-0.1202,0.8181});
HAnimSegment& HAnimSegment275 =  HAnimSegment();
HAnimSegment275.X3DNode::setName(CString("SEGMENT_FOR_r_thigh"));
HAnimSegment275.setDEF(CString("hanim_SEGMENT_FOR_r_thigh"));
TouchSensor& TouchSensor276 =  TouchSensor();
TouchSensor276.setDescription(CString("joint r_thigh segment SEGMENT_FOR_r_thigh"));
HAnimSegment275.addChild(&TouchSensor276);

Transform& Transform277 =  Transform();
Transform277.setTranslation(new float[3]{-0.0948,-0.1202,0.8181});
Shape& Shape278 =  Shape();
Shape278.setUSE(CString("JointShape"));
Transform277.addChild(&Shape278);

HAnimSegment275.addChild(&Transform277);

HAnimSite& HAnimSite279 =  HAnimSite();
HAnimSite279.X3DNode::setName(CString("SEGMENT_FOR_r_thigh_tip"));
HAnimSite279.setDEF(CString("hanim_SEGMENT_FOR_r_thigh_tip"));
Transform& Transform280 =  Transform();
Transform280.setTranslation(new float[3]{-0.0948,-0.1202,0.8181});
Shape& Shape281 =  Shape();
Shape281.setUSE(CString("SiteShape"));
Transform280.addChild(&Shape281);

HAnimSite279.addChild(&Transform280);

HAnimSegment275.addChild(&HAnimSite279);

HAnimJoint274.addChildren(&HAnimSegment275);

HAnimJoint& HAnimJoint282 =  HAnimJoint();
HAnimJoint282.X3DNode::setName(CString("r_calf"));
HAnimJoint282.setDEF(CString("hanim_r_calf"));
HAnimJoint282.setCenter(new float[3]{-0.0928,-0.1213,0.4003});
HAnimSegment& HAnimSegment283 =  HAnimSegment();
HAnimSegment283.X3DNode::setName(CString("SEGMENT_FOR_r_calf"));
HAnimSegment283.setDEF(CString("hanim_SEGMENT_FOR_r_calf"));
TouchSensor& TouchSensor284 =  TouchSensor();
TouchSensor284.setDescription(CString("joint r_calf segment SEGMENT_FOR_r_calf"));
HAnimSegment283.addChild(&TouchSensor284);

Transform& Transform285 =  Transform();
Transform285.setTranslation(new float[3]{-0.0928,-0.1213,0.4003});
Shape& Shape286 =  Shape();
Shape286.setUSE(CString("JointShape"));
Transform285.addChild(&Shape286);

HAnimSegment283.addChild(&Transform285);

HAnimSite& HAnimSite287 =  HAnimSite();
HAnimSite287.X3DNode::setName(CString("SEGMENT_FOR_r_calf_tip"));
HAnimSite287.setDEF(CString("hanim_SEGMENT_FOR_r_calf_tip"));
Transform& Transform288 =  Transform();
Transform288.setTranslation(new float[3]{-0.0928,-0.1213,0.4003});
Shape& Shape289 =  Shape();
Shape289.setUSE(CString("SiteShape"));
Transform288.addChild(&Shape289);

HAnimSite287.addChild(&Transform288);

HAnimSegment283.addChild(&HAnimSite287);

HAnimJoint282.addChildren(&HAnimSegment283);

HAnimJoint& HAnimJoint290 =  HAnimJoint();
HAnimJoint290.X3DNode::setName(CString("r_talus"));
HAnimJoint290.setDEF(CString("hanim_r_talus"));
HAnimJoint290.setCenter(new float[3]{-0.0886,-0.1123,0.0869});
HAnimSegment& HAnimSegment291 =  HAnimSegment();
HAnimSegment291.X3DNode::setName(CString("SEGMENT_FOR_r_talus"));
HAnimSegment291.setDEF(CString("hanim_SEGMENT_FOR_r_talus"));
TouchSensor& TouchSensor292 =  TouchSensor();
TouchSensor292.setDescription(CString("joint r_talus segment SEGMENT_FOR_r_talus"));
HAnimSegment291.addChild(&TouchSensor292);

Transform& Transform293 =  Transform();
Transform293.setTranslation(new float[3]{-0.0886,-0.1123,0.0869});
Shape& Shape294 =  Shape();
Shape294.setUSE(CString("JointShape"));
Transform293.addChild(&Shape294);

HAnimSegment291.addChild(&Transform293);

HAnimSite& HAnimSite295 =  HAnimSite();
HAnimSite295.X3DNode::setName(CString("SEGMENT_FOR_r_talus_tip"));
HAnimSite295.setDEF(CString("hanim_SEGMENT_FOR_r_talus_tip"));
Transform& Transform296 =  Transform();
Transform296.setTranslation(new float[3]{-0.0886,-0.1123,0.0869});
Shape& Shape297 =  Shape();
Shape297.setUSE(CString("SiteShape"));
Transform296.addChild(&Shape297);

HAnimSite295.addChild(&Transform296);

HAnimSegment291.addChild(&HAnimSite295);

HAnimJoint290.addChildren(&HAnimSegment291);

HAnimJoint& HAnimJoint298 =  HAnimJoint();
HAnimJoint298.X3DNode::setName(CString("r_navicular"));
HAnimJoint298.setDEF(CString("hanim_r_navicular"));
HAnimJoint298.setCenter(new float[3]{-0.0781,-0.097,0.0283});
HAnimSegment& HAnimSegment299 =  HAnimSegment();
HAnimSegment299.X3DNode::setName(CString("SEGMENT_FOR_r_navicular"));
HAnimSegment299.setDEF(CString("hanim_SEGMENT_FOR_r_navicular"));
TouchSensor& TouchSensor300 =  TouchSensor();
TouchSensor300.setDescription(CString("joint r_navicular segment SEGMENT_FOR_r_navicular"));
HAnimSegment299.addChild(&TouchSensor300);

Transform& Transform301 =  Transform();
Transform301.setTranslation(new float[3]{-0.0781,-0.097,0.0283});
Shape& Shape302 =  Shape();
Shape302.setUSE(CString("JointShape"));
Transform301.addChild(&Shape302);

HAnimSegment299.addChild(&Transform301);

HAnimSite& HAnimSite303 =  HAnimSite();
HAnimSite303.X3DNode::setName(CString("SEGMENT_FOR_r_navicular_tip"));
HAnimSite303.setDEF(CString("hanim_SEGMENT_FOR_r_navicular_tip"));
Transform& Transform304 =  Transform();
Transform304.setTranslation(new float[3]{-0.0781,-0.097,0.0283});
Shape& Shape305 =  Shape();
Shape305.setUSE(CString("SiteShape"));
Transform304.addChild(&Shape305);

HAnimSite303.addChild(&Transform304);

HAnimSegment299.addChild(&HAnimSite303);

HAnimJoint298.addChildren(&HAnimSegment299);

HAnimJoint& HAnimJoint306 =  HAnimJoint();
HAnimJoint306.X3DNode::setName(CString("r_cuneiform_1"));
HAnimJoint306.setDEF(CString("hanim_r_cuneiform_1"));
HAnimJoint306.setCenter(new float[3]{-0.0672,-0.0835,0.0235});
HAnimSegment& HAnimSegment307 =  HAnimSegment();
HAnimSegment307.X3DNode::setName(CString("SEGMENT_FOR_r_cuneiform_1"));
HAnimSegment307.setDEF(CString("hanim_SEGMENT_FOR_r_cuneiform_1"));
TouchSensor& TouchSensor308 =  TouchSensor();
TouchSensor308.setDescription(CString("joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1"));
HAnimSegment307.addChild(&TouchSensor308);

Transform& Transform309 =  Transform();
Transform309.setTranslation(new float[3]{-0.0672,-0.0835,0.0235});
Shape& Shape310 =  Shape();
Shape310.setUSE(CString("JointShape"));
Transform309.addChild(&Shape310);

HAnimSegment307.addChild(&Transform309);

HAnimSite& HAnimSite311 =  HAnimSite();
HAnimSite311.X3DNode::setName(CString("SEGMENT_FOR_r_cuneiform_1_tip"));
HAnimSite311.setDEF(CString("hanim_SEGMENT_FOR_r_cuneiform_1_tip"));
Transform& Transform312 =  Transform();
Transform312.setTranslation(new float[3]{-0.0672,-0.0835,0.0235});
Shape& Shape313 =  Shape();
Shape313.setUSE(CString("SiteShape"));
Transform312.addChild(&Shape313);

HAnimSite311.addChild(&Transform312);

HAnimSegment307.addChild(&HAnimSite311);

HAnimJoint306.addChildren(&HAnimSegment307);

HAnimJoint& HAnimJoint314 =  HAnimJoint();
HAnimJoint314.X3DNode::setName(CString("r_metatarsal_1"));
HAnimJoint314.setDEF(CString("hanim_r_metatarsal_1"));
HAnimJoint314.setCenter(new float[3]{-0.0644,-0.0577,0.0147});
HAnimSegment& HAnimSegment315 =  HAnimSegment();
HAnimSegment315.X3DNode::setName(CString("SEGMENT_FOR_r_metatarsal_1"));
HAnimSegment315.setDEF(CString("hanim_SEGMENT_FOR_r_metatarsal_1"));
TouchSensor& TouchSensor316 =  TouchSensor();
TouchSensor316.setDescription(CString("joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1"));
HAnimSegment315.addChild(&TouchSensor316);

Transform& Transform317 =  Transform();
Transform317.setTranslation(new float[3]{-0.0644,-0.0577,0.0147});
Shape& Shape318 =  Shape();
Shape318.setUSE(CString("JointShape"));
Transform317.addChild(&Shape318);

HAnimSegment315.addChild(&Transform317);

HAnimSite& HAnimSite319 =  HAnimSite();
HAnimSite319.X3DNode::setName(CString("SEGMENT_FOR_r_metatarsal_1_tip"));
HAnimSite319.setDEF(CString("hanim_SEGMENT_FOR_r_metatarsal_1_tip"));
Transform& Transform320 =  Transform();
Transform320.setTranslation(new float[3]{-0.0644,-0.0577,0.0147});
Shape& Shape321 =  Shape();
Shape321.setUSE(CString("SiteShape"));
Transform320.addChild(&Shape321);

HAnimSite319.addChild(&Transform320);

HAnimSegment315.addChild(&HAnimSite319);

HAnimJoint314.addChildren(&HAnimSegment315);

HAnimJoint& HAnimJoint322 =  HAnimJoint();
HAnimJoint322.X3DNode::setName(CString("r_tarsal_proximal_phalanx_1"));
HAnimJoint322.setDEF(CString("hanim_r_tarsal_proximal_phalanx_1"));
HAnimJoint322.setCenter(new float[3]{-0.0619,-0.0083,0.0059});
HAnimSegment& HAnimSegment323 =  HAnimSegment();
HAnimSegment323.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_proximal_phalanx_1"));
HAnimSegment323.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1"));
TouchSensor& TouchSensor324 =  TouchSensor();
TouchSensor324.setDescription(CString("joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1"));
HAnimSegment323.addChild(&TouchSensor324);

Transform& Transform325 =  Transform();
Transform325.setTranslation(new float[3]{-0.0619,-0.0083,0.0059});
Shape& Shape326 =  Shape();
Shape326.setUSE(CString("JointShape"));
Transform325.addChild(&Shape326);

HAnimSegment323.addChild(&Transform325);

HAnimSite& HAnimSite327 =  HAnimSite();
HAnimSite327.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip"));
HAnimSite327.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip"));
Transform& Transform328 =  Transform();
Transform328.setTranslation(new float[3]{-0.0619,-0.0083,0.0059});
Shape& Shape329 =  Shape();
Shape329.setUSE(CString("SiteShape"));
Transform328.addChild(&Shape329);

HAnimSite327.addChild(&Transform328);

HAnimSegment323.addChild(&HAnimSite327);

HAnimJoint322.addChildren(&HAnimSegment323);

HAnimJoint& HAnimJoint330 =  HAnimJoint();
HAnimJoint330.X3DNode::setName(CString("r_tarsal_distal_phalanx_1"));
HAnimJoint330.setDEF(CString("hanim_r_tarsal_distal_phalanx_1"));
HAnimSegment& HAnimSegment331 =  HAnimSegment();
HAnimSegment331.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_distal_phalanx_1"));
HAnimSegment331.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1"));
TouchSensor& TouchSensor332 =  TouchSensor();
TouchSensor332.setDescription(CString("joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1"));
HAnimSegment331.addChild(&TouchSensor332);

Transform& Transform333 =  Transform();
Shape& Shape334 =  Shape();
Shape334.setUSE(CString("JointShape"));
Transform333.addChild(&Shape334);

HAnimSegment331.addChild(&Transform333);

HAnimSite& HAnimSite335 =  HAnimSite();
HAnimSite335.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip"));
HAnimSite335.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip"));
Transform& Transform336 =  Transform();
Shape& Shape337 =  Shape();
Shape337.setUSE(CString("SiteShape"));
Transform336.addChild(&Shape337);

HAnimSite335.addChild(&Transform336);

HAnimSegment331.addChild(&HAnimSite335);

HAnimJoint330.addChildren(&HAnimSegment331);

HAnimJoint322.addChildren(&HAnimJoint330);

HAnimJoint314.addChildren(&HAnimJoint322);

HAnimJoint306.addChildren(&HAnimJoint314);

HAnimJoint298.addChildren(&HAnimJoint306);

HAnimJoint& HAnimJoint338 =  HAnimJoint();
HAnimJoint338.X3DNode::setName(CString("r_cuneiform_2"));
HAnimJoint338.setDEF(CString("hanim_r_cuneiform_2"));
HAnimJoint338.setCenter(new float[3]{-0.0812,-0.0805,0.025});
HAnimSegment& HAnimSegment339 =  HAnimSegment();
HAnimSegment339.X3DNode::setName(CString("SEGMENT_FOR_r_cuneiform_2"));
HAnimSegment339.setDEF(CString("hanim_SEGMENT_FOR_r_cuneiform_2"));
TouchSensor& TouchSensor340 =  TouchSensor();
TouchSensor340.setDescription(CString("joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2"));
HAnimSegment339.addChild(&TouchSensor340);

Transform& Transform341 =  Transform();
Transform341.setTranslation(new float[3]{-0.0812,-0.0805,0.025});
Shape& Shape342 =  Shape();
Shape342.setUSE(CString("JointShape"));
Transform341.addChild(&Shape342);

HAnimSegment339.addChild(&Transform341);

HAnimSite& HAnimSite343 =  HAnimSite();
HAnimSite343.X3DNode::setName(CString("SEGMENT_FOR_r_cuneiform_2_tip"));
HAnimSite343.setDEF(CString("hanim_SEGMENT_FOR_r_cuneiform_2_tip"));
Transform& Transform344 =  Transform();
Transform344.setTranslation(new float[3]{-0.0812,-0.0805,0.025});
Shape& Shape345 =  Shape();
Shape345.setUSE(CString("SiteShape"));
Transform344.addChild(&Shape345);

HAnimSite343.addChild(&Transform344);

HAnimSegment339.addChild(&HAnimSite343);

HAnimJoint338.addChildren(&HAnimSegment339);

HAnimJoint& HAnimJoint346 =  HAnimJoint();
HAnimJoint346.X3DNode::setName(CString("r_metatarsal_2"));
HAnimJoint346.setDEF(CString("hanim_r_metatarsal_2"));
HAnimJoint346.setCenter(new float[3]{-0.08,-0.0608,0.0175});
HAnimSegment& HAnimSegment347 =  HAnimSegment();
HAnimSegment347.X3DNode::setName(CString("SEGMENT_FOR_r_metatarsal_2"));
HAnimSegment347.setDEF(CString("hanim_SEGMENT_FOR_r_metatarsal_2"));
TouchSensor& TouchSensor348 =  TouchSensor();
TouchSensor348.setDescription(CString("joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2"));
HAnimSegment347.addChild(&TouchSensor348);

Transform& Transform349 =  Transform();
Transform349.setTranslation(new float[3]{-0.08,-0.0608,0.0175});
Shape& Shape350 =  Shape();
Shape350.setUSE(CString("JointShape"));
Transform349.addChild(&Shape350);

HAnimSegment347.addChild(&Transform349);

HAnimSite& HAnimSite351 =  HAnimSite();
HAnimSite351.X3DNode::setName(CString("SEGMENT_FOR_r_metatarsal_2_tip"));
HAnimSite351.setDEF(CString("hanim_SEGMENT_FOR_r_metatarsal_2_tip"));
Transform& Transform352 =  Transform();
Transform352.setTranslation(new float[3]{-0.08,-0.0608,0.0175});
Shape& Shape353 =  Shape();
Shape353.setUSE(CString("SiteShape"));
Transform352.addChild(&Shape353);

HAnimSite351.addChild(&Transform352);

HAnimSegment347.addChild(&HAnimSite351);

HAnimJoint346.addChildren(&HAnimSegment347);

HAnimJoint& HAnimJoint354 =  HAnimJoint();
HAnimJoint354.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimJoint354.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimJoint354.setCenter(new float[3]{-0.0823,-0.004,0.0064});
HAnimSegment& HAnimSegment355 =  HAnimSegment();
HAnimSegment355.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_proximal_phalanx_2"));
HAnimSegment355.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2"));
TouchSensor& TouchSensor356 =  TouchSensor();
TouchSensor356.setDescription(CString("joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2"));
HAnimSegment355.addChild(&TouchSensor356);

Transform& Transform357 =  Transform();
Transform357.setTranslation(new float[3]{-0.0823,-0.004,0.0064});
Shape& Shape358 =  Shape();
Shape358.setUSE(CString("JointShape"));
Transform357.addChild(&Shape358);

HAnimSegment355.addChild(&Transform357);

HAnimSite& HAnimSite359 =  HAnimSite();
HAnimSite359.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip"));
HAnimSite359.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip"));
Transform& Transform360 =  Transform();
Transform360.setTranslation(new float[3]{-0.0823,-0.004,0.0064});
Shape& Shape361 =  Shape();
Shape361.setUSE(CString("SiteShape"));
Transform360.addChild(&Shape361);

HAnimSite359.addChild(&Transform360);

HAnimSegment355.addChild(&HAnimSite359);

HAnimJoint354.addChildren(&HAnimSegment355);

HAnimJoint& HAnimJoint362 =  HAnimJoint();
HAnimJoint362.X3DNode::setName(CString("r_tarsal_middle_phalanx_2"));
HAnimJoint362.setDEF(CString("hanim_r_tarsal_middle_phalanx_2"));
HAnimJoint362.setCenter(new float[3]{-0.0841,0.0121,0.0041});
HAnimSegment& HAnimSegment363 =  HAnimSegment();
HAnimSegment363.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_middle_phalanx_2"));
HAnimSegment363.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2"));
TouchSensor& TouchSensor364 =  TouchSensor();
TouchSensor364.setDescription(CString("joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2"));
HAnimSegment363.addChild(&TouchSensor364);

Transform& Transform365 =  Transform();
Transform365.setTranslation(new float[3]{-0.0841,0.0121,0.0041});
Shape& Shape366 =  Shape();
Shape366.setUSE(CString("JointShape"));
Transform365.addChild(&Shape366);

HAnimSegment363.addChild(&Transform365);

HAnimSite& HAnimSite367 =  HAnimSite();
HAnimSite367.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip"));
HAnimSite367.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip"));
Transform& Transform368 =  Transform();
Transform368.setTranslation(new float[3]{-0.0841,0.0121,0.0041});
Shape& Shape369 =  Shape();
Shape369.setUSE(CString("SiteShape"));
Transform368.addChild(&Shape369);

HAnimSite367.addChild(&Transform368);

HAnimSegment363.addChild(&HAnimSite367);

HAnimJoint362.addChildren(&HAnimSegment363);

HAnimJoint& HAnimJoint370 =  HAnimJoint();
HAnimJoint370.X3DNode::setName(CString("r_tarsal_distal_phalanx_2"));
HAnimJoint370.setDEF(CString("hanim_r_tarsal_distal_phalanx_2"));
HAnimJoint370.setCenter(new float[3]{-0.0841,0.0216,0.0013});
HAnimSegment& HAnimSegment371 =  HAnimSegment();
HAnimSegment371.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_distal_phalanx_2"));
HAnimSegment371.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2"));
TouchSensor& TouchSensor372 =  TouchSensor();
TouchSensor372.setDescription(CString("joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2"));
HAnimSegment371.addChild(&TouchSensor372);

Transform& Transform373 =  Transform();
Transform373.setTranslation(new float[3]{-0.0841,0.0216,0.0013});
Shape& Shape374 =  Shape();
Shape374.setUSE(CString("JointShape"));
Transform373.addChild(&Shape374);

HAnimSegment371.addChild(&Transform373);

HAnimSite& HAnimSite375 =  HAnimSite();
HAnimSite375.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip"));
HAnimSite375.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip"));
Transform& Transform376 =  Transform();
Transform376.setTranslation(new float[3]{-0.0841,0.0216,0.0013});
Shape& Shape377 =  Shape();
Shape377.setUSE(CString("SiteShape"));
Transform376.addChild(&Shape377);

HAnimSite375.addChild(&Transform376);

HAnimSegment371.addChild(&HAnimSite375);

HAnimJoint370.addChildren(&HAnimSegment371);

HAnimJoint362.addChildren(&HAnimJoint370);

HAnimJoint354.addChildren(&HAnimJoint362);

HAnimJoint346.addChildren(&HAnimJoint354);

HAnimJoint338.addChildren(&HAnimJoint346);

HAnimJoint298.addChildren(&HAnimJoint338);

HAnimJoint& HAnimJoint378 =  HAnimJoint();
HAnimJoint378.X3DNode::setName(CString("r_cuneiform_3"));
HAnimJoint378.setDEF(CString("hanim_r_cuneiform_3"));
HAnimJoint378.setCenter(new float[3]{-0.0928,-0.0821,0.0248});
HAnimSegment& HAnimSegment379 =  HAnimSegment();
HAnimSegment379.X3DNode::setName(CString("SEGMENT_FOR_r_cuneiform_3"));
HAnimSegment379.setDEF(CString("hanim_SEGMENT_FOR_r_cuneiform_3"));
TouchSensor& TouchSensor380 =  TouchSensor();
TouchSensor380.setDescription(CString("joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3"));
HAnimSegment379.addChild(&TouchSensor380);

Transform& Transform381 =  Transform();
Transform381.setTranslation(new float[3]{-0.0928,-0.0821,0.0248});
Shape& Shape382 =  Shape();
Shape382.setUSE(CString("JointShape"));
Transform381.addChild(&Shape382);

HAnimSegment379.addChild(&Transform381);

HAnimSite& HAnimSite383 =  HAnimSite();
HAnimSite383.X3DNode::setName(CString("SEGMENT_FOR_r_cuneiform_3_tip"));
HAnimSite383.setDEF(CString("hanim_SEGMENT_FOR_r_cuneiform_3_tip"));
Transform& Transform384 =  Transform();
Transform384.setTranslation(new float[3]{-0.0928,-0.0821,0.0248});
Shape& Shape385 =  Shape();
Shape385.setUSE(CString("SiteShape"));
Transform384.addChild(&Shape385);

HAnimSite383.addChild(&Transform384);

HAnimSegment379.addChild(&HAnimSite383);

HAnimJoint378.addChildren(&HAnimSegment379);

HAnimJoint& HAnimJoint386 =  HAnimJoint();
HAnimJoint386.X3DNode::setName(CString("r_metatarsal_3"));
HAnimJoint386.setDEF(CString("hanim_r_metatarsal_3"));
HAnimJoint386.setCenter(new float[3]{-0.0944,-0.0625,0.0175});
HAnimSegment& HAnimSegment387 =  HAnimSegment();
HAnimSegment387.X3DNode::setName(CString("SEGMENT_FOR_r_metatarsal_3"));
HAnimSegment387.setDEF(CString("hanim_SEGMENT_FOR_r_metatarsal_3"));
TouchSensor& TouchSensor388 =  TouchSensor();
TouchSensor388.setDescription(CString("joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3"));
HAnimSegment387.addChild(&TouchSensor388);

Transform& Transform389 =  Transform();
Transform389.setTranslation(new float[3]{-0.0944,-0.0625,0.0175});
Shape& Shape390 =  Shape();
Shape390.setUSE(CString("JointShape"));
Transform389.addChild(&Shape390);

HAnimSegment387.addChild(&Transform389);

HAnimSite& HAnimSite391 =  HAnimSite();
HAnimSite391.X3DNode::setName(CString("SEGMENT_FOR_r_metatarsal_3_tip"));
HAnimSite391.setDEF(CString("hanim_SEGMENT_FOR_r_metatarsal_3_tip"));
Transform& Transform392 =  Transform();
Transform392.setTranslation(new float[3]{-0.0944,-0.0625,0.0175});
Shape& Shape393 =  Shape();
Shape393.setUSE(CString("SiteShape"));
Transform392.addChild(&Shape393);

HAnimSite391.addChild(&Transform392);

HAnimSegment387.addChild(&HAnimSite391);

HAnimJoint386.addChildren(&HAnimSegment387);

HAnimJoint& HAnimJoint394 =  HAnimJoint();
HAnimJoint394.X3DNode::setName(CString("r_tarsal_proximal_phalanx_3"));
HAnimJoint394.setDEF(CString("hanim_r_tarsal_proximal_phalanx_3"));
HAnimJoint394.setCenter(new float[3]{-0.0963,-0.0065,0.0065});
HAnimSegment& HAnimSegment395 =  HAnimSegment();
HAnimSegment395.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_proximal_phalanx_3"));
HAnimSegment395.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3"));
TouchSensor& TouchSensor396 =  TouchSensor();
TouchSensor396.setDescription(CString("joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3"));
HAnimSegment395.addChild(&TouchSensor396);

Transform& Transform397 =  Transform();
Transform397.setTranslation(new float[3]{-0.0963,-0.0065,0.0065});
Shape& Shape398 =  Shape();
Shape398.setUSE(CString("JointShape"));
Transform397.addChild(&Shape398);

HAnimSegment395.addChild(&Transform397);

HAnimSite& HAnimSite399 =  HAnimSite();
HAnimSite399.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip"));
HAnimSite399.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip"));
Transform& Transform400 =  Transform();
Transform400.setTranslation(new float[3]{-0.0963,-0.0065,0.0065});
Shape& Shape401 =  Shape();
Shape401.setUSE(CString("SiteShape"));
Transform400.addChild(&Shape401);

HAnimSite399.addChild(&Transform400);

HAnimSegment395.addChild(&HAnimSite399);

HAnimJoint394.addChildren(&HAnimSegment395);

HAnimJoint& HAnimJoint402 =  HAnimJoint();
HAnimJoint402.X3DNode::setName(CString("r_tarsal_middle_phalanx_3"));
HAnimJoint402.setDEF(CString("hanim_r_tarsal_middle_phalanx_3"));
HAnimJoint402.setCenter(new float[3]{-0.0987,0.0086,0.0034});
HAnimSegment& HAnimSegment403 =  HAnimSegment();
HAnimSegment403.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_middle_phalanx_3"));
HAnimSegment403.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3"));
TouchSensor& TouchSensor404 =  TouchSensor();
TouchSensor404.setDescription(CString("joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3"));
HAnimSegment403.addChild(&TouchSensor404);

Transform& Transform405 =  Transform();
Transform405.setTranslation(new float[3]{-0.0987,0.0086,0.0034});
Shape& Shape406 =  Shape();
Shape406.setUSE(CString("JointShape"));
Transform405.addChild(&Shape406);

HAnimSegment403.addChild(&Transform405);

HAnimSite& HAnimSite407 =  HAnimSite();
HAnimSite407.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip"));
HAnimSite407.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip"));
Transform& Transform408 =  Transform();
Transform408.setTranslation(new float[3]{-0.0987,0.0086,0.0034});
Shape& Shape409 =  Shape();
Shape409.setUSE(CString("SiteShape"));
Transform408.addChild(&Shape409);

HAnimSite407.addChild(&Transform408);

HAnimSegment403.addChild(&HAnimSite407);

HAnimJoint402.addChildren(&HAnimSegment403);

HAnimJoint& HAnimJoint410 =  HAnimJoint();
HAnimJoint410.X3DNode::setName(CString("r_tarsal_distal_phalanx_3"));
HAnimJoint410.setDEF(CString("hanim_r_tarsal_distal_phalanx_3"));
HAnimJoint410.setCenter(new float[3]{-0.1002,0.0178,0.0013});
HAnimSegment& HAnimSegment411 =  HAnimSegment();
HAnimSegment411.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_distal_phalanx_3"));
HAnimSegment411.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3"));
TouchSensor& TouchSensor412 =  TouchSensor();
TouchSensor412.setDescription(CString("joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3"));
HAnimSegment411.addChild(&TouchSensor412);

Transform& Transform413 =  Transform();
Transform413.setTranslation(new float[3]{-0.1002,0.0178,0.0013});
Shape& Shape414 =  Shape();
Shape414.setUSE(CString("JointShape"));
Transform413.addChild(&Shape414);

HAnimSegment411.addChild(&Transform413);

HAnimSite& HAnimSite415 =  HAnimSite();
HAnimSite415.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip"));
HAnimSite415.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip"));
Transform& Transform416 =  Transform();
Transform416.setTranslation(new float[3]{-0.1002,0.0178,0.0013});
Shape& Shape417 =  Shape();
Shape417.setUSE(CString("SiteShape"));
Transform416.addChild(&Shape417);

HAnimSite415.addChild(&Transform416);

HAnimSegment411.addChild(&HAnimSite415);

HAnimJoint410.addChildren(&HAnimSegment411);

HAnimJoint402.addChildren(&HAnimJoint410);

HAnimJoint394.addChildren(&HAnimJoint402);

HAnimJoint386.addChildren(&HAnimJoint394);

HAnimJoint378.addChildren(&HAnimJoint386);

HAnimJoint298.addChildren(&HAnimJoint378);

HAnimJoint290.addChildren(&HAnimJoint298);

HAnimJoint& HAnimJoint418 =  HAnimJoint();
HAnimJoint418.X3DNode::setName(CString("r_calcaneus"));
HAnimJoint418.setDEF(CString("hanim_r_calcaneus"));
HAnimJoint418.setCenter(new float[3]{-0.0889,-0.1278,0.0494});
HAnimSegment& HAnimSegment419 =  HAnimSegment();
HAnimSegment419.X3DNode::setName(CString("SEGMENT_FOR_r_calcaneus"));
HAnimSegment419.setDEF(CString("hanim_SEGMENT_FOR_r_calcaneus"));
TouchSensor& TouchSensor420 =  TouchSensor();
TouchSensor420.setDescription(CString("joint r_calcaneus segment SEGMENT_FOR_r_calcaneus"));
HAnimSegment419.addChild(&TouchSensor420);

Transform& Transform421 =  Transform();
Transform421.setTranslation(new float[3]{-0.0889,-0.1278,0.0494});
Shape& Shape422 =  Shape();
Shape422.setUSE(CString("JointShape"));
Transform421.addChild(&Shape422);

HAnimSegment419.addChild(&Transform421);

HAnimSite& HAnimSite423 =  HAnimSite();
HAnimSite423.X3DNode::setName(CString("SEGMENT_FOR_r_calcaneus_tip"));
HAnimSite423.setDEF(CString("hanim_SEGMENT_FOR_r_calcaneus_tip"));
Transform& Transform424 =  Transform();
Transform424.setTranslation(new float[3]{-0.0889,-0.1278,0.0494});
Shape& Shape425 =  Shape();
Shape425.setUSE(CString("SiteShape"));
Transform424.addChild(&Shape425);

HAnimSite423.addChild(&Transform424);

HAnimSegment419.addChild(&HAnimSite423);

HAnimJoint418.addChildren(&HAnimSegment419);

HAnimJoint& HAnimJoint426 =  HAnimJoint();
HAnimJoint426.X3DNode::setName(CString("r_cuboid"));
HAnimJoint426.setDEF(CString("hanim_r_cuboid"));
HAnimJoint426.setCenter(new float[3]{-0.1105,-0.0998,0.0267});
HAnimSegment& HAnimSegment427 =  HAnimSegment();
HAnimSegment427.X3DNode::setName(CString("SEGMENT_FOR_r_cuboid"));
HAnimSegment427.setDEF(CString("hanim_SEGMENT_FOR_r_cuboid"));
TouchSensor& TouchSensor428 =  TouchSensor();
TouchSensor428.setDescription(CString("joint r_cuboid segment SEGMENT_FOR_r_cuboid"));
HAnimSegment427.addChild(&TouchSensor428);

Transform& Transform429 =  Transform();
Transform429.setTranslation(new float[3]{-0.1105,-0.0998,0.0267});
Shape& Shape430 =  Shape();
Shape430.setUSE(CString("JointShape"));
Transform429.addChild(&Shape430);

HAnimSegment427.addChild(&Transform429);

HAnimSite& HAnimSite431 =  HAnimSite();
HAnimSite431.X3DNode::setName(CString("SEGMENT_FOR_r_cuboid_tip"));
HAnimSite431.setDEF(CString("hanim_SEGMENT_FOR_r_cuboid_tip"));
Transform& Transform432 =  Transform();
Transform432.setTranslation(new float[3]{-0.1105,-0.0998,0.0267});
Shape& Shape433 =  Shape();
Shape433.setUSE(CString("SiteShape"));
Transform432.addChild(&Shape433);

HAnimSite431.addChild(&Transform432);

HAnimSegment427.addChild(&HAnimSite431);

HAnimJoint426.addChildren(&HAnimSegment427);

HAnimJoint& HAnimJoint434 =  HAnimJoint();
HAnimJoint434.X3DNode::setName(CString("r_metatarsal_4"));
HAnimJoint434.setDEF(CString("hanim_r_metatarsal_4"));
HAnimJoint434.setCenter(new float[3]{-0.1063,-0.0634,0.016});
HAnimSegment& HAnimSegment435 =  HAnimSegment();
HAnimSegment435.X3DNode::setName(CString("SEGMENT_FOR_r_metatarsal_4"));
HAnimSegment435.setDEF(CString("hanim_SEGMENT_FOR_r_metatarsal_4"));
TouchSensor& TouchSensor436 =  TouchSensor();
TouchSensor436.setDescription(CString("joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4"));
HAnimSegment435.addChild(&TouchSensor436);

Transform& Transform437 =  Transform();
Transform437.setTranslation(new float[3]{-0.1063,-0.0634,0.016});
Shape& Shape438 =  Shape();
Shape438.setUSE(CString("JointShape"));
Transform437.addChild(&Shape438);

HAnimSegment435.addChild(&Transform437);

HAnimSite& HAnimSite439 =  HAnimSite();
HAnimSite439.X3DNode::setName(CString("SEGMENT_FOR_r_metatarsal_4_tip"));
HAnimSite439.setDEF(CString("hanim_SEGMENT_FOR_r_metatarsal_4_tip"));
Transform& Transform440 =  Transform();
Transform440.setTranslation(new float[3]{-0.1063,-0.0634,0.016});
Shape& Shape441 =  Shape();
Shape441.setUSE(CString("SiteShape"));
Transform440.addChild(&Shape441);

HAnimSite439.addChild(&Transform440);

HAnimSegment435.addChild(&HAnimSite439);

HAnimJoint434.addChildren(&HAnimSegment435);

HAnimJoint& HAnimJoint442 =  HAnimJoint();
HAnimJoint442.X3DNode::setName(CString("r_tarsal_proximal_phalanx_4"));
HAnimJoint442.setDEF(CString("hanim_r_tarsal_proximal_phalanx_4"));
HAnimJoint442.setCenter(new float[3]{-0.1097,-0.0107,0.0058});
HAnimSegment& HAnimSegment443 =  HAnimSegment();
HAnimSegment443.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_proximal_phalanx_4"));
HAnimSegment443.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4"));
TouchSensor& TouchSensor444 =  TouchSensor();
TouchSensor444.setDescription(CString("joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4"));
HAnimSegment443.addChild(&TouchSensor444);

Transform& Transform445 =  Transform();
Transform445.setTranslation(new float[3]{-0.1097,-0.0107,0.0058});
Shape& Shape446 =  Shape();
Shape446.setUSE(CString("JointShape"));
Transform445.addChild(&Shape446);

HAnimSegment443.addChild(&Transform445);

HAnimSite& HAnimSite447 =  HAnimSite();
HAnimSite447.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip"));
HAnimSite447.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip"));
Transform& Transform448 =  Transform();
Transform448.setTranslation(new float[3]{-0.1097,-0.0107,0.0058});
Shape& Shape449 =  Shape();
Shape449.setUSE(CString("SiteShape"));
Transform448.addChild(&Shape449);

HAnimSite447.addChild(&Transform448);

HAnimSegment443.addChild(&HAnimSite447);

HAnimJoint442.addChildren(&HAnimSegment443);

HAnimJoint& HAnimJoint450 =  HAnimJoint();
HAnimJoint450.X3DNode::setName(CString("r_tarsal_middle_phalanx_4"));
HAnimJoint450.setDEF(CString("hanim_r_tarsal_middle_phalanx_4"));
HAnimJoint450.setCenter(new float[3]{-0.114,0.0044,0.0037});
HAnimSegment& HAnimSegment451 =  HAnimSegment();
HAnimSegment451.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_middle_phalanx_4"));
HAnimSegment451.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4"));
TouchSensor& TouchSensor452 =  TouchSensor();
TouchSensor452.setDescription(CString("joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4"));
HAnimSegment451.addChild(&TouchSensor452);

Transform& Transform453 =  Transform();
Transform453.setTranslation(new float[3]{-0.114,0.0044,0.0037});
Shape& Shape454 =  Shape();
Shape454.setUSE(CString("JointShape"));
Transform453.addChild(&Shape454);

HAnimSegment451.addChild(&Transform453);

HAnimSite& HAnimSite455 =  HAnimSite();
HAnimSite455.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip"));
HAnimSite455.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip"));
Transform& Transform456 =  Transform();
Transform456.setTranslation(new float[3]{-0.114,0.0044,0.0037});
Shape& Shape457 =  Shape();
Shape457.setUSE(CString("SiteShape"));
Transform456.addChild(&Shape457);

HAnimSite455.addChild(&Transform456);

HAnimSegment451.addChild(&HAnimSite455);

HAnimJoint450.addChildren(&HAnimSegment451);

HAnimJoint& HAnimJoint458 =  HAnimJoint();
HAnimJoint458.X3DNode::setName(CString("r_tarsal_distal_phalanx_4"));
HAnimJoint458.setDEF(CString("hanim_r_tarsal_distal_phalanx_4"));
HAnimJoint458.setCenter(new float[3]{-0.1155,0.0118,0.0008});
HAnimSegment& HAnimSegment459 =  HAnimSegment();
HAnimSegment459.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_distal_phalanx_4"));
HAnimSegment459.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4"));
TouchSensor& TouchSensor460 =  TouchSensor();
TouchSensor460.setDescription(CString("joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4"));
HAnimSegment459.addChild(&TouchSensor460);

Transform& Transform461 =  Transform();
Transform461.setTranslation(new float[3]{-0.1155,0.0118,0.0008});
Shape& Shape462 =  Shape();
Shape462.setUSE(CString("JointShape"));
Transform461.addChild(&Shape462);

HAnimSegment459.addChild(&Transform461);

HAnimSite& HAnimSite463 =  HAnimSite();
HAnimSite463.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip"));
HAnimSite463.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip"));
Transform& Transform464 =  Transform();
Transform464.setTranslation(new float[3]{-0.1155,0.0118,0.0008});
Shape& Shape465 =  Shape();
Shape465.setUSE(CString("SiteShape"));
Transform464.addChild(&Shape465);

HAnimSite463.addChild(&Transform464);

HAnimSegment459.addChild(&HAnimSite463);

HAnimJoint458.addChildren(&HAnimSegment459);

HAnimJoint450.addChildren(&HAnimJoint458);

HAnimJoint442.addChildren(&HAnimJoint450);

HAnimJoint434.addChildren(&HAnimJoint442);

HAnimJoint426.addChildren(&HAnimJoint434);

HAnimJoint& HAnimJoint466 =  HAnimJoint();
HAnimJoint466.X3DNode::setName(CString("r_metatarsal_5"));
HAnimJoint466.setDEF(CString("hanim_r_metatarsal_5"));
HAnimJoint466.setCenter(new float[3]{-0.1206,-0.0671,0.0124});
HAnimSegment& HAnimSegment467 =  HAnimSegment();
HAnimSegment467.X3DNode::setName(CString("SEGMENT_FOR_r_metatarsal_5"));
HAnimSegment467.setDEF(CString("hanim_SEGMENT_FOR_r_metatarsal_5"));
TouchSensor& TouchSensor468 =  TouchSensor();
TouchSensor468.setDescription(CString("joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5"));
HAnimSegment467.addChild(&TouchSensor468);

Transform& Transform469 =  Transform();
Transform469.setTranslation(new float[3]{-0.1206,-0.0671,0.0124});
Shape& Shape470 =  Shape();
Shape470.setUSE(CString("JointShape"));
Transform469.addChild(&Shape470);

HAnimSegment467.addChild(&Transform469);

HAnimSite& HAnimSite471 =  HAnimSite();
HAnimSite471.X3DNode::setName(CString("SEGMENT_FOR_r_metatarsal_5_tip"));
HAnimSite471.setDEF(CString("hanim_SEGMENT_FOR_r_metatarsal_5_tip"));
Transform& Transform472 =  Transform();
Transform472.setTranslation(new float[3]{-0.1206,-0.0671,0.0124});
Shape& Shape473 =  Shape();
Shape473.setUSE(CString("SiteShape"));
Transform472.addChild(&Shape473);

HAnimSite471.addChild(&Transform472);

HAnimSegment467.addChild(&HAnimSite471);

HAnimJoint466.addChildren(&HAnimSegment467);

HAnimJoint& HAnimJoint474 =  HAnimJoint();
HAnimJoint474.X3DNode::setName(CString("r_tarsal_proximal_phalanx_5"));
HAnimJoint474.setDEF(CString("hanim_r_tarsal_proximal_phalanx_5"));
HAnimJoint474.setCenter(new float[3]{-0.1239,-0.0153,0.0051});
HAnimSegment& HAnimSegment475 =  HAnimSegment();
HAnimSegment475.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_proximal_phalanx_5"));
HAnimSegment475.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5"));
TouchSensor& TouchSensor476 =  TouchSensor();
TouchSensor476.setDescription(CString("joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5"));
HAnimSegment475.addChild(&TouchSensor476);

Transform& Transform477 =  Transform();
Transform477.setTranslation(new float[3]{-0.1239,-0.0153,0.0051});
Shape& Shape478 =  Shape();
Shape478.setUSE(CString("JointShape"));
Transform477.addChild(&Shape478);

HAnimSegment475.addChild(&Transform477);

HAnimSite& HAnimSite479 =  HAnimSite();
HAnimSite479.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip"));
HAnimSite479.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip"));
Transform& Transform480 =  Transform();
Transform480.setTranslation(new float[3]{-0.1239,-0.0153,0.0051});
Shape& Shape481 =  Shape();
Shape481.setUSE(CString("SiteShape"));
Transform480.addChild(&Shape481);

HAnimSite479.addChild(&Transform480);

HAnimSegment475.addChild(&HAnimSite479);

HAnimJoint474.addChildren(&HAnimSegment475);

HAnimJoint& HAnimJoint482 =  HAnimJoint();
HAnimJoint482.X3DNode::setName(CString("r_tarsal_middle_phalanx_5"));
HAnimJoint482.setDEF(CString("hanim_r_tarsal_middle_phalanx_5"));
HAnimJoint482.setCenter(new float[3]{-0.1262,-0.0077,0.0023});
HAnimSegment& HAnimSegment483 =  HAnimSegment();
HAnimSegment483.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_middle_phalanx_5"));
HAnimSegment483.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5"));
TouchSensor& TouchSensor484 =  TouchSensor();
TouchSensor484.setDescription(CString("joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5"));
HAnimSegment483.addChild(&TouchSensor484);

Transform& Transform485 =  Transform();
Transform485.setTranslation(new float[3]{-0.1262,-0.0077,0.0023});
Shape& Shape486 =  Shape();
Shape486.setUSE(CString("JointShape"));
Transform485.addChild(&Shape486);

HAnimSegment483.addChild(&Transform485);

HAnimSite& HAnimSite487 =  HAnimSite();
HAnimSite487.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip"));
HAnimSite487.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip"));
Transform& Transform488 =  Transform();
Transform488.setTranslation(new float[3]{-0.1262,-0.0077,0.0023});
Shape& Shape489 =  Shape();
Shape489.setUSE(CString("SiteShape"));
Transform488.addChild(&Shape489);

HAnimSite487.addChild(&Transform488);

HAnimSegment483.addChild(&HAnimSite487);

HAnimJoint482.addChildren(&HAnimSegment483);

HAnimJoint& HAnimJoint490 =  HAnimJoint();
HAnimJoint490.X3DNode::setName(CString("r_tarsal_distal_phalanx_5"));
HAnimJoint490.setDEF(CString("hanim_r_tarsal_distal_phalanx_5"));
HAnimJoint490.setCenter(new float[3]{-0.1271,0,0});
HAnimSegment& HAnimSegment491 =  HAnimSegment();
HAnimSegment491.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_distal_phalanx_5"));
HAnimSegment491.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5"));
TouchSensor& TouchSensor492 =  TouchSensor();
TouchSensor492.setDescription(CString("joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5"));
HAnimSegment491.addChild(&TouchSensor492);

Transform& Transform493 =  Transform();
Transform493.setTranslation(new float[3]{-0.1271,0,0});
Shape& Shape494 =  Shape();
Shape494.setUSE(CString("JointShape"));
Transform493.addChild(&Shape494);

HAnimSegment491.addChild(&Transform493);

HAnimSite& HAnimSite495 =  HAnimSite();
HAnimSite495.X3DNode::setName(CString("SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip"));
HAnimSite495.setDEF(CString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip"));
Transform& Transform496 =  Transform();
Transform496.setTranslation(new float[3]{-0.1271,0,0});
Shape& Shape497 =  Shape();
Shape497.setUSE(CString("SiteShape"));
Transform496.addChild(&Shape497);

HAnimSite495.addChild(&Transform496);

HAnimSegment491.addChild(&HAnimSite495);

HAnimJoint490.addChildren(&HAnimSegment491);

HAnimJoint482.addChildren(&HAnimJoint490);

HAnimJoint474.addChildren(&HAnimJoint482);

HAnimJoint466.addChildren(&HAnimJoint474);

HAnimJoint426.addChildren(&HAnimJoint466);

HAnimJoint418.addChildren(&HAnimJoint426);

HAnimJoint290.addChildren(&HAnimJoint418);

HAnimJoint282.addChildren(&HAnimJoint290);

HAnimJoint274.addChildren(&HAnimJoint282);

HAnimJoint42.addChildren(&HAnimJoint274);

HAnimJoint34.addChildren(&HAnimJoint42);

HAnimJoint& HAnimJoint498 =  HAnimJoint();
HAnimJoint498.X3DNode::setName(CString("l5"));
HAnimJoint498.setDEF(CString("hanim_l5"));
HAnimJoint498.setCenter(new float[3]{-0.0002,-0.1156,0.9169});
HAnimSegment& HAnimSegment499 =  HAnimSegment();
HAnimSegment499.X3DNode::setName(CString("SEGMENT_FOR_l5"));
HAnimSegment499.setDEF(CString("hanim_SEGMENT_FOR_l5"));
TouchSensor& TouchSensor500 =  TouchSensor();
TouchSensor500.setDescription(CString("joint l5 segment SEGMENT_FOR_l5"));
HAnimSegment499.addChild(&TouchSensor500);

Transform& Transform501 =  Transform();
Transform501.setTranslation(new float[3]{-0.0002,-0.1156,0.9169});
Shape& Shape502 =  Shape();
Shape502.setUSE(CString("JointShape"));
Transform501.addChild(&Shape502);

HAnimSegment499.addChild(&Transform501);

HAnimSite& HAnimSite503 =  HAnimSite();
HAnimSite503.X3DNode::setName(CString("SEGMENT_FOR_l5_tip"));
HAnimSite503.setDEF(CString("hanim_SEGMENT_FOR_l5_tip"));
Transform& Transform504 =  Transform();
Transform504.setTranslation(new float[3]{-0.0002,-0.1156,0.9169});
Shape& Shape505 =  Shape();
Shape505.setUSE(CString("SiteShape"));
Transform504.addChild(&Shape505);

HAnimSite503.addChild(&Transform504);

HAnimSegment499.addChild(&HAnimSite503);

HAnimJoint498.addChildren(&HAnimSegment499);

HAnimJoint& HAnimJoint506 =  HAnimJoint();
HAnimJoint506.X3DNode::setName(CString("l4"));
HAnimJoint506.setDEF(CString("hanim_l4"));
HAnimJoint506.setCenter(new float[3]{-0.0002,-0.1156,0.9412});
HAnimSegment& HAnimSegment507 =  HAnimSegment();
HAnimSegment507.X3DNode::setName(CString("SEGMENT_FOR_l4"));
HAnimSegment507.setDEF(CString("hanim_SEGMENT_FOR_l4"));
TouchSensor& TouchSensor508 =  TouchSensor();
TouchSensor508.setDescription(CString("joint l4 segment SEGMENT_FOR_l4"));
HAnimSegment507.addChild(&TouchSensor508);

Transform& Transform509 =  Transform();
Transform509.setTranslation(new float[3]{-0.0002,-0.1156,0.9412});
Shape& Shape510 =  Shape();
Shape510.setUSE(CString("JointShape"));
Transform509.addChild(&Shape510);

HAnimSegment507.addChild(&Transform509);

HAnimSite& HAnimSite511 =  HAnimSite();
HAnimSite511.X3DNode::setName(CString("SEGMENT_FOR_l4_tip"));
HAnimSite511.setDEF(CString("hanim_SEGMENT_FOR_l4_tip"));
Transform& Transform512 =  Transform();
Transform512.setTranslation(new float[3]{-0.0002,-0.1156,0.9412});
Shape& Shape513 =  Shape();
Shape513.setUSE(CString("SiteShape"));
Transform512.addChild(&Shape513);

HAnimSite511.addChild(&Transform512);

HAnimSegment507.addChild(&HAnimSite511);

HAnimJoint506.addChildren(&HAnimSegment507);

HAnimJoint& HAnimJoint514 =  HAnimJoint();
HAnimJoint514.X3DNode::setName(CString("l3"));
HAnimJoint514.setDEF(CString("hanim_l3"));
HAnimJoint514.setCenter(new float[3]{-0.0002,-0.1156,0.9574});
HAnimSegment& HAnimSegment515 =  HAnimSegment();
HAnimSegment515.X3DNode::setName(CString("SEGMENT_FOR_l3"));
HAnimSegment515.setDEF(CString("hanim_SEGMENT_FOR_l3"));
TouchSensor& TouchSensor516 =  TouchSensor();
TouchSensor516.setDescription(CString("joint l3 segment SEGMENT_FOR_l3"));
HAnimSegment515.addChild(&TouchSensor516);

Transform& Transform517 =  Transform();
Transform517.setTranslation(new float[3]{-0.0002,-0.1156,0.9574});
Shape& Shape518 =  Shape();
Shape518.setUSE(CString("JointShape"));
Transform517.addChild(&Shape518);

HAnimSegment515.addChild(&Transform517);

HAnimSite& HAnimSite519 =  HAnimSite();
HAnimSite519.X3DNode::setName(CString("SEGMENT_FOR_l3_tip"));
HAnimSite519.setDEF(CString("hanim_SEGMENT_FOR_l3_tip"));
Transform& Transform520 =  Transform();
Transform520.setTranslation(new float[3]{-0.0002,-0.1156,0.9574});
Shape& Shape521 =  Shape();
Shape521.setUSE(CString("SiteShape"));
Transform520.addChild(&Shape521);

HAnimSite519.addChild(&Transform520);

HAnimSegment515.addChild(&HAnimSite519);

HAnimJoint514.addChildren(&HAnimSegment515);

HAnimJoint& HAnimJoint522 =  HAnimJoint();
HAnimJoint522.X3DNode::setName(CString("l2"));
HAnimJoint522.setDEF(CString("hanim_l2"));
HAnimJoint522.setCenter(new float[3]{-0.0002,-0.1156,0.9738});
HAnimSegment& HAnimSegment523 =  HAnimSegment();
HAnimSegment523.X3DNode::setName(CString("SEGMENT_FOR_l2"));
HAnimSegment523.setDEF(CString("hanim_SEGMENT_FOR_l2"));
TouchSensor& TouchSensor524 =  TouchSensor();
TouchSensor524.setDescription(CString("joint l2 segment SEGMENT_FOR_l2"));
HAnimSegment523.addChild(&TouchSensor524);

Transform& Transform525 =  Transform();
Transform525.setTranslation(new float[3]{-0.0002,-0.1156,0.9738});
Shape& Shape526 =  Shape();
Shape526.setUSE(CString("JointShape"));
Transform525.addChild(&Shape526);

HAnimSegment523.addChild(&Transform525);

HAnimSite& HAnimSite527 =  HAnimSite();
HAnimSite527.X3DNode::setName(CString("SEGMENT_FOR_l2_tip"));
HAnimSite527.setDEF(CString("hanim_SEGMENT_FOR_l2_tip"));
Transform& Transform528 =  Transform();
Transform528.setTranslation(new float[3]{-0.0002,-0.1156,0.9738});
Shape& Shape529 =  Shape();
Shape529.setUSE(CString("SiteShape"));
Transform528.addChild(&Shape529);

HAnimSite527.addChild(&Transform528);

HAnimSegment523.addChild(&HAnimSite527);

HAnimJoint522.addChildren(&HAnimSegment523);

HAnimJoint& HAnimJoint530 =  HAnimJoint();
HAnimJoint530.X3DNode::setName(CString("l1"));
HAnimJoint530.setDEF(CString("hanim_l1"));
HAnimJoint530.setCenter(new float[3]{-0.0002,-0.1156,0.9911});
HAnimSegment& HAnimSegment531 =  HAnimSegment();
HAnimSegment531.X3DNode::setName(CString("SEGMENT_FOR_l1"));
HAnimSegment531.setDEF(CString("hanim_SEGMENT_FOR_l1"));
TouchSensor& TouchSensor532 =  TouchSensor();
TouchSensor532.setDescription(CString("joint l1 segment SEGMENT_FOR_l1"));
HAnimSegment531.addChild(&TouchSensor532);

Transform& Transform533 =  Transform();
Transform533.setTranslation(new float[3]{-0.0002,-0.1156,0.9911});
Shape& Shape534 =  Shape();
Shape534.setUSE(CString("JointShape"));
Transform533.addChild(&Shape534);

HAnimSegment531.addChild(&Transform533);

HAnimSite& HAnimSite535 =  HAnimSite();
HAnimSite535.X3DNode::setName(CString("SEGMENT_FOR_l1_tip"));
HAnimSite535.setDEF(CString("hanim_SEGMENT_FOR_l1_tip"));
Transform& Transform536 =  Transform();
Transform536.setTranslation(new float[3]{-0.0002,-0.1156,0.9911});
Shape& Shape537 =  Shape();
Shape537.setUSE(CString("SiteShape"));
Transform536.addChild(&Shape537);

HAnimSite535.addChild(&Transform536);

HAnimSegment531.addChild(&HAnimSite535);

HAnimJoint530.addChildren(&HAnimSegment531);

HAnimJoint& HAnimJoint538 =  HAnimJoint();
HAnimJoint538.X3DNode::setName(CString("t12"));
HAnimJoint538.setDEF(CString("hanim_t12"));
HAnimJoint538.setCenter(new float[3]{-0.0002,-0.1156,1.0145});
HAnimSegment& HAnimSegment539 =  HAnimSegment();
HAnimSegment539.X3DNode::setName(CString("SEGMENT_FOR_t12"));
HAnimSegment539.setDEF(CString("hanim_SEGMENT_FOR_t12"));
TouchSensor& TouchSensor540 =  TouchSensor();
TouchSensor540.setDescription(CString("joint t12 segment SEGMENT_FOR_t12"));
HAnimSegment539.addChild(&TouchSensor540);

Transform& Transform541 =  Transform();
Transform541.setTranslation(new float[3]{-0.0002,-0.1156,1.0145});
Shape& Shape542 =  Shape();
Shape542.setUSE(CString("JointShape"));
Transform541.addChild(&Shape542);

HAnimSegment539.addChild(&Transform541);

HAnimSite& HAnimSite543 =  HAnimSite();
HAnimSite543.X3DNode::setName(CString("SEGMENT_FOR_t12_tip"));
HAnimSite543.setDEF(CString("hanim_SEGMENT_FOR_t12_tip"));
Transform& Transform544 =  Transform();
Transform544.setTranslation(new float[3]{-0.0002,-0.1156,1.0145});
Shape& Shape545 =  Shape();
Shape545.setUSE(CString("SiteShape"));
Transform544.addChild(&Shape545);

HAnimSite543.addChild(&Transform544);

HAnimSegment539.addChild(&HAnimSite543);

HAnimJoint538.addChildren(&HAnimSegment539);

HAnimJoint& HAnimJoint546 =  HAnimJoint();
HAnimJoint546.X3DNode::setName(CString("t11"));
HAnimJoint546.setDEF(CString("hanim_t11"));
HAnimJoint546.setCenter(new float[3]{-0.0002,-0.1156,1.0381});
HAnimSegment& HAnimSegment547 =  HAnimSegment();
HAnimSegment547.X3DNode::setName(CString("SEGMENT_FOR_t11"));
HAnimSegment547.setDEF(CString("hanim_SEGMENT_FOR_t11"));
TouchSensor& TouchSensor548 =  TouchSensor();
TouchSensor548.setDescription(CString("joint t11 segment SEGMENT_FOR_t11"));
HAnimSegment547.addChild(&TouchSensor548);

Transform& Transform549 =  Transform();
Transform549.setTranslation(new float[3]{-0.0002,-0.1156,1.0381});
Shape& Shape550 =  Shape();
Shape550.setUSE(CString("JointShape"));
Transform549.addChild(&Shape550);

HAnimSegment547.addChild(&Transform549);

HAnimSite& HAnimSite551 =  HAnimSite();
HAnimSite551.X3DNode::setName(CString("SEGMENT_FOR_t11_tip"));
HAnimSite551.setDEF(CString("hanim_SEGMENT_FOR_t11_tip"));
Transform& Transform552 =  Transform();
Transform552.setTranslation(new float[3]{-0.0002,-0.1156,1.0381});
Shape& Shape553 =  Shape();
Shape553.setUSE(CString("SiteShape"));
Transform552.addChild(&Shape553);

HAnimSite551.addChild(&Transform552);

HAnimSegment547.addChild(&HAnimSite551);

HAnimJoint546.addChildren(&HAnimSegment547);

HAnimJoint& HAnimJoint554 =  HAnimJoint();
HAnimJoint554.X3DNode::setName(CString("t10"));
HAnimJoint554.setDEF(CString("hanim_t10"));
HAnimJoint554.setCenter(new float[3]{-0.0002,-0.1157,1.0552});
HAnimSegment& HAnimSegment555 =  HAnimSegment();
HAnimSegment555.X3DNode::setName(CString("SEGMENT_FOR_t10"));
HAnimSegment555.setDEF(CString("hanim_SEGMENT_FOR_t10"));
TouchSensor& TouchSensor556 =  TouchSensor();
TouchSensor556.setDescription(CString("joint t10 segment SEGMENT_FOR_t10"));
HAnimSegment555.addChild(&TouchSensor556);

Transform& Transform557 =  Transform();
Transform557.setTranslation(new float[3]{-0.0002,-0.1157,1.0552});
Shape& Shape558 =  Shape();
Shape558.setUSE(CString("JointShape"));
Transform557.addChild(&Shape558);

HAnimSegment555.addChild(&Transform557);

HAnimSite& HAnimSite559 =  HAnimSite();
HAnimSite559.X3DNode::setName(CString("SEGMENT_FOR_t10_tip"));
HAnimSite559.setDEF(CString("hanim_SEGMENT_FOR_t10_tip"));
Transform& Transform560 =  Transform();
Transform560.setTranslation(new float[3]{-0.0002,-0.1157,1.0552});
Shape& Shape561 =  Shape();
Shape561.setUSE(CString("SiteShape"));
Transform560.addChild(&Shape561);

HAnimSite559.addChild(&Transform560);

HAnimSegment555.addChild(&HAnimSite559);

HAnimJoint554.addChildren(&HAnimSegment555);

HAnimJoint& HAnimJoint562 =  HAnimJoint();
HAnimJoint562.X3DNode::setName(CString("t9"));
HAnimJoint562.setDEF(CString("hanim_t9"));
HAnimJoint562.setCenter(new float[3]{-0.0002,-0.1156,1.0699});
HAnimSegment& HAnimSegment563 =  HAnimSegment();
HAnimSegment563.X3DNode::setName(CString("SEGMENT_FOR_t9"));
HAnimSegment563.setDEF(CString("hanim_SEGMENT_FOR_t9"));
TouchSensor& TouchSensor564 =  TouchSensor();
TouchSensor564.setDescription(CString("joint t9 segment SEGMENT_FOR_t9"));
HAnimSegment563.addChild(&TouchSensor564);

Transform& Transform565 =  Transform();
Transform565.setTranslation(new float[3]{-0.0002,-0.1156,1.0699});
Shape& Shape566 =  Shape();
Shape566.setUSE(CString("JointShape"));
Transform565.addChild(&Shape566);

HAnimSegment563.addChild(&Transform565);

HAnimSite& HAnimSite567 =  HAnimSite();
HAnimSite567.X3DNode::setName(CString("SEGMENT_FOR_t9_tip"));
HAnimSite567.setDEF(CString("hanim_SEGMENT_FOR_t9_tip"));
Transform& Transform568 =  Transform();
Transform568.setTranslation(new float[3]{-0.0002,-0.1156,1.0699});
Shape& Shape569 =  Shape();
Shape569.setUSE(CString("SiteShape"));
Transform568.addChild(&Shape569);

HAnimSite567.addChild(&Transform568);

HAnimSegment563.addChild(&HAnimSite567);

HAnimJoint562.addChildren(&HAnimSegment563);

HAnimJoint& HAnimJoint570 =  HAnimJoint();
HAnimJoint570.X3DNode::setName(CString("t8"));
HAnimJoint570.setDEF(CString("hanim_t8"));
HAnimJoint570.setCenter(new float[3]{-0.0002,-0.1156,1.0845});
HAnimSegment& HAnimSegment571 =  HAnimSegment();
HAnimSegment571.X3DNode::setName(CString("SEGMENT_FOR_t8"));
HAnimSegment571.setDEF(CString("hanim_SEGMENT_FOR_t8"));
TouchSensor& TouchSensor572 =  TouchSensor();
TouchSensor572.setDescription(CString("joint t8 segment SEGMENT_FOR_t8"));
HAnimSegment571.addChild(&TouchSensor572);

Transform& Transform573 =  Transform();
Transform573.setTranslation(new float[3]{-0.0002,-0.1156,1.0845});
Shape& Shape574 =  Shape();
Shape574.setUSE(CString("JointShape"));
Transform573.addChild(&Shape574);

HAnimSegment571.addChild(&Transform573);

HAnimSite& HAnimSite575 =  HAnimSite();
HAnimSite575.X3DNode::setName(CString("SEGMENT_FOR_t8_tip"));
HAnimSite575.setDEF(CString("hanim_SEGMENT_FOR_t8_tip"));
Transform& Transform576 =  Transform();
Transform576.setTranslation(new float[3]{-0.0002,-0.1156,1.0845});
Shape& Shape577 =  Shape();
Shape577.setUSE(CString("SiteShape"));
Transform576.addChild(&Shape577);

HAnimSite575.addChild(&Transform576);

HAnimSegment571.addChild(&HAnimSite575);

HAnimJoint570.addChildren(&HAnimSegment571);

HAnimJoint& HAnimJoint578 =  HAnimJoint();
HAnimJoint578.X3DNode::setName(CString("t7"));
HAnimJoint578.setDEF(CString("hanim_t7"));
HAnimJoint578.setCenter(new float[3]{-0.0002,-0.1156,1.1002});
HAnimSegment& HAnimSegment579 =  HAnimSegment();
HAnimSegment579.X3DNode::setName(CString("SEGMENT_FOR_t7"));
HAnimSegment579.setDEF(CString("hanim_SEGMENT_FOR_t7"));
TouchSensor& TouchSensor580 =  TouchSensor();
TouchSensor580.setDescription(CString("joint t7 segment SEGMENT_FOR_t7"));
HAnimSegment579.addChild(&TouchSensor580);

Transform& Transform581 =  Transform();
Transform581.setTranslation(new float[3]{-0.0002,-0.1156,1.1002});
Shape& Shape582 =  Shape();
Shape582.setUSE(CString("JointShape"));
Transform581.addChild(&Shape582);

HAnimSegment579.addChild(&Transform581);

HAnimSite& HAnimSite583 =  HAnimSite();
HAnimSite583.X3DNode::setName(CString("SEGMENT_FOR_t7_tip"));
HAnimSite583.setDEF(CString("hanim_SEGMENT_FOR_t7_tip"));
Transform& Transform584 =  Transform();
Transform584.setTranslation(new float[3]{-0.0002,-0.1156,1.1002});
Shape& Shape585 =  Shape();
Shape585.setUSE(CString("SiteShape"));
Transform584.addChild(&Shape585);

HAnimSite583.addChild(&Transform584);

HAnimSegment579.addChild(&HAnimSite583);

HAnimJoint578.addChildren(&HAnimSegment579);

HAnimJoint& HAnimJoint586 =  HAnimJoint();
HAnimJoint586.X3DNode::setName(CString("t6"));
HAnimJoint586.setDEF(CString("hanim_t6"));
HAnimJoint586.setCenter(new float[3]{-0.0002,-0.1156,1.1131});
HAnimSegment& HAnimSegment587 =  HAnimSegment();
HAnimSegment587.X3DNode::setName(CString("SEGMENT_FOR_t6"));
HAnimSegment587.setDEF(CString("hanim_SEGMENT_FOR_t6"));
TouchSensor& TouchSensor588 =  TouchSensor();
TouchSensor588.setDescription(CString("joint t6 segment SEGMENT_FOR_t6"));
HAnimSegment587.addChild(&TouchSensor588);

Transform& Transform589 =  Transform();
Transform589.setTranslation(new float[3]{-0.0002,-0.1156,1.1131});
Shape& Shape590 =  Shape();
Shape590.setUSE(CString("JointShape"));
Transform589.addChild(&Shape590);

HAnimSegment587.addChild(&Transform589);

HAnimSite& HAnimSite591 =  HAnimSite();
HAnimSite591.X3DNode::setName(CString("SEGMENT_FOR_t6_tip"));
HAnimSite591.setDEF(CString("hanim_SEGMENT_FOR_t6_tip"));
Transform& Transform592 =  Transform();
Transform592.setTranslation(new float[3]{-0.0002,-0.1156,1.1131});
Shape& Shape593 =  Shape();
Shape593.setUSE(CString("SiteShape"));
Transform592.addChild(&Shape593);

HAnimSite591.addChild(&Transform592);

HAnimSegment587.addChild(&HAnimSite591);

HAnimJoint586.addChildren(&HAnimSegment587);

HAnimJoint& HAnimJoint594 =  HAnimJoint();
HAnimJoint594.X3DNode::setName(CString("t5"));
HAnimJoint594.setDEF(CString("hanim_t5"));
HAnimJoint594.setCenter(new float[3]{-0.0002,-0.1156,1.1286});
HAnimSegment& HAnimSegment595 =  HAnimSegment();
HAnimSegment595.X3DNode::setName(CString("SEGMENT_FOR_t5"));
HAnimSegment595.setDEF(CString("hanim_SEGMENT_FOR_t5"));
TouchSensor& TouchSensor596 =  TouchSensor();
TouchSensor596.setDescription(CString("joint t5 segment SEGMENT_FOR_t5"));
HAnimSegment595.addChild(&TouchSensor596);

Transform& Transform597 =  Transform();
Transform597.setTranslation(new float[3]{-0.0002,-0.1156,1.1286});
Shape& Shape598 =  Shape();
Shape598.setUSE(CString("JointShape"));
Transform597.addChild(&Shape598);

HAnimSegment595.addChild(&Transform597);

HAnimSite& HAnimSite599 =  HAnimSite();
HAnimSite599.X3DNode::setName(CString("SEGMENT_FOR_t5_tip"));
HAnimSite599.setDEF(CString("hanim_SEGMENT_FOR_t5_tip"));
Transform& Transform600 =  Transform();
Transform600.setTranslation(new float[3]{-0.0002,-0.1156,1.1286});
Shape& Shape601 =  Shape();
Shape601.setUSE(CString("SiteShape"));
Transform600.addChild(&Shape601);

HAnimSite599.addChild(&Transform600);

HAnimSegment595.addChild(&HAnimSite599);

HAnimJoint594.addChildren(&HAnimSegment595);

HAnimJoint& HAnimJoint602 =  HAnimJoint();
HAnimJoint602.X3DNode::setName(CString("t4"));
HAnimJoint602.setDEF(CString("hanim_t4"));
HAnimJoint602.setCenter(new float[3]{-0.0002,-0.1156,1.1439});
HAnimSegment& HAnimSegment603 =  HAnimSegment();
HAnimSegment603.X3DNode::setName(CString("SEGMENT_FOR_t4"));
HAnimSegment603.setDEF(CString("hanim_SEGMENT_FOR_t4"));
TouchSensor& TouchSensor604 =  TouchSensor();
TouchSensor604.setDescription(CString("joint t4 segment SEGMENT_FOR_t4"));
HAnimSegment603.addChild(&TouchSensor604);

Transform& Transform605 =  Transform();
Transform605.setTranslation(new float[3]{-0.0002,-0.1156,1.1439});
Shape& Shape606 =  Shape();
Shape606.setUSE(CString("JointShape"));
Transform605.addChild(&Shape606);

HAnimSegment603.addChild(&Transform605);

HAnimSite& HAnimSite607 =  HAnimSite();
HAnimSite607.X3DNode::setName(CString("SEGMENT_FOR_t4_tip"));
HAnimSite607.setDEF(CString("hanim_SEGMENT_FOR_t4_tip"));
Transform& Transform608 =  Transform();
Transform608.setTranslation(new float[3]{-0.0002,-0.1156,1.1439});
Shape& Shape609 =  Shape();
Shape609.setUSE(CString("SiteShape"));
Transform608.addChild(&Shape609);

HAnimSite607.addChild(&Transform608);

HAnimSegment603.addChild(&HAnimSite607);

HAnimJoint602.addChildren(&HAnimSegment603);

HAnimJoint& HAnimJoint610 =  HAnimJoint();
HAnimJoint610.X3DNode::setName(CString("t3"));
HAnimJoint610.setDEF(CString("hanim_t3"));
HAnimJoint610.setCenter(new float[3]{-0.0002,-0.1156,1.1623});
HAnimSegment& HAnimSegment611 =  HAnimSegment();
HAnimSegment611.X3DNode::setName(CString("SEGMENT_FOR_t3"));
HAnimSegment611.setDEF(CString("hanim_SEGMENT_FOR_t3"));
TouchSensor& TouchSensor612 =  TouchSensor();
TouchSensor612.setDescription(CString("joint t3 segment SEGMENT_FOR_t3"));
HAnimSegment611.addChild(&TouchSensor612);

Transform& Transform613 =  Transform();
Transform613.setTranslation(new float[3]{-0.0002,-0.1156,1.1623});
Shape& Shape614 =  Shape();
Shape614.setUSE(CString("JointShape"));
Transform613.addChild(&Shape614);

HAnimSegment611.addChild(&Transform613);

HAnimSite& HAnimSite615 =  HAnimSite();
HAnimSite615.X3DNode::setName(CString("SEGMENT_FOR_t3_tip"));
HAnimSite615.setDEF(CString("hanim_SEGMENT_FOR_t3_tip"));
Transform& Transform616 =  Transform();
Transform616.setTranslation(new float[3]{-0.0002,-0.1156,1.1623});
Shape& Shape617 =  Shape();
Shape617.setUSE(CString("SiteShape"));
Transform616.addChild(&Shape617);

HAnimSite615.addChild(&Transform616);

HAnimSegment611.addChild(&HAnimSite615);

HAnimJoint610.addChildren(&HAnimSegment611);

HAnimJoint& HAnimJoint618 =  HAnimJoint();
HAnimJoint618.X3DNode::setName(CString("t2"));
HAnimJoint618.setDEF(CString("hanim_t2"));
HAnimJoint618.setCenter(new float[3]{-0.0002,-0.1157,1.1871});
HAnimSegment& HAnimSegment619 =  HAnimSegment();
HAnimSegment619.X3DNode::setName(CString("SEGMENT_FOR_t2"));
HAnimSegment619.setDEF(CString("hanim_SEGMENT_FOR_t2"));
TouchSensor& TouchSensor620 =  TouchSensor();
TouchSensor620.setDescription(CString("joint t2 segment SEGMENT_FOR_t2"));
HAnimSegment619.addChild(&TouchSensor620);

Transform& Transform621 =  Transform();
Transform621.setTranslation(new float[3]{-0.0002,-0.1157,1.1871});
Shape& Shape622 =  Shape();
Shape622.setUSE(CString("JointShape"));
Transform621.addChild(&Shape622);

HAnimSegment619.addChild(&Transform621);

HAnimSite& HAnimSite623 =  HAnimSite();
HAnimSite623.X3DNode::setName(CString("SEGMENT_FOR_t2_tip"));
HAnimSite623.setDEF(CString("hanim_SEGMENT_FOR_t2_tip"));
Transform& Transform624 =  Transform();
Transform624.setTranslation(new float[3]{-0.0002,-0.1157,1.1871});
Shape& Shape625 =  Shape();
Shape625.setUSE(CString("SiteShape"));
Transform624.addChild(&Shape625);

HAnimSite623.addChild(&Transform624);

HAnimSegment619.addChild(&HAnimSite623);

HAnimJoint618.addChildren(&HAnimSegment619);

HAnimJoint& HAnimJoint626 =  HAnimJoint();
HAnimJoint626.X3DNode::setName(CString("t1"));
HAnimJoint626.setDEF(CString("hanim_t1"));
HAnimJoint626.setCenter(new float[3]{-0.0002,-0.1156,1.2109});
HAnimSegment& HAnimSegment627 =  HAnimSegment();
HAnimSegment627.X3DNode::setName(CString("SEGMENT_FOR_t1"));
HAnimSegment627.setDEF(CString("hanim_SEGMENT_FOR_t1"));
TouchSensor& TouchSensor628 =  TouchSensor();
TouchSensor628.setDescription(CString("joint t1 segment SEGMENT_FOR_t1"));
HAnimSegment627.addChild(&TouchSensor628);

Transform& Transform629 =  Transform();
Transform629.setTranslation(new float[3]{-0.0002,-0.1156,1.2109});
Shape& Shape630 =  Shape();
Shape630.setUSE(CString("JointShape"));
Transform629.addChild(&Shape630);

HAnimSegment627.addChild(&Transform629);

HAnimSite& HAnimSite631 =  HAnimSite();
HAnimSite631.X3DNode::setName(CString("SEGMENT_FOR_t1_tip"));
HAnimSite631.setDEF(CString("hanim_SEGMENT_FOR_t1_tip"));
Transform& Transform632 =  Transform();
Transform632.setTranslation(new float[3]{-0.0002,-0.1156,1.2109});
Shape& Shape633 =  Shape();
Shape633.setUSE(CString("SiteShape"));
Transform632.addChild(&Shape633);

HAnimSite631.addChild(&Transform632);

HAnimSegment627.addChild(&HAnimSite631);

HAnimJoint626.addChildren(&HAnimSegment627);

HAnimJoint& HAnimJoint634 =  HAnimJoint();
HAnimJoint634.X3DNode::setName(CString("c7"));
HAnimJoint634.setDEF(CString("hanim_c7"));
HAnimJoint634.setCenter(new float[3]{-0.0002,-0.1169,1.2368});
HAnimSegment& HAnimSegment635 =  HAnimSegment();
HAnimSegment635.X3DNode::setName(CString("SEGMENT_FOR_c7"));
HAnimSegment635.setDEF(CString("hanim_SEGMENT_FOR_c7"));
TouchSensor& TouchSensor636 =  TouchSensor();
TouchSensor636.setDescription(CString("joint c7 segment SEGMENT_FOR_c7"));
HAnimSegment635.addChild(&TouchSensor636);

Transform& Transform637 =  Transform();
Transform637.setTranslation(new float[3]{-0.0002,-0.1169,1.2368});
Shape& Shape638 =  Shape();
Shape638.setUSE(CString("JointShape"));
Transform637.addChild(&Shape638);

HAnimSegment635.addChild(&Transform637);

HAnimSite& HAnimSite639 =  HAnimSite();
HAnimSite639.X3DNode::setName(CString("SEGMENT_FOR_c7_tip"));
HAnimSite639.setDEF(CString("hanim_SEGMENT_FOR_c7_tip"));
Transform& Transform640 =  Transform();
Transform640.setTranslation(new float[3]{-0.0002,-0.1169,1.2368});
Shape& Shape641 =  Shape();
Shape641.setUSE(CString("SiteShape"));
Transform640.addChild(&Shape641);

HAnimSite639.addChild(&Transform640);

HAnimSegment635.addChild(&HAnimSite639);

HAnimJoint634.addChildren(&HAnimSegment635);

HAnimJoint& HAnimJoint642 =  HAnimJoint();
HAnimJoint642.X3DNode::setName(CString("c6"));
HAnimJoint642.setDEF(CString("hanim_c6"));
HAnimJoint642.setCenter(new float[3]{-0.0002,-0.1169,1.249});
HAnimSegment& HAnimSegment643 =  HAnimSegment();
HAnimSegment643.X3DNode::setName(CString("SEGMENT_FOR_c6"));
HAnimSegment643.setDEF(CString("hanim_SEGMENT_FOR_c6"));
TouchSensor& TouchSensor644 =  TouchSensor();
TouchSensor644.setDescription(CString("joint c6 segment SEGMENT_FOR_c6"));
HAnimSegment643.addChild(&TouchSensor644);

Transform& Transform645 =  Transform();
Transform645.setTranslation(new float[3]{-0.0002,-0.1169,1.249});
Shape& Shape646 =  Shape();
Shape646.setUSE(CString("JointShape"));
Transform645.addChild(&Shape646);

HAnimSegment643.addChild(&Transform645);

HAnimSite& HAnimSite647 =  HAnimSite();
HAnimSite647.X3DNode::setName(CString("SEGMENT_FOR_c6_tip"));
HAnimSite647.setDEF(CString("hanim_SEGMENT_FOR_c6_tip"));
Transform& Transform648 =  Transform();
Transform648.setTranslation(new float[3]{-0.0002,-0.1169,1.249});
Shape& Shape649 =  Shape();
Shape649.setUSE(CString("SiteShape"));
Transform648.addChild(&Shape649);

HAnimSite647.addChild(&Transform648);

HAnimSegment643.addChild(&HAnimSite647);

HAnimJoint642.addChildren(&HAnimSegment643);

HAnimJoint& HAnimJoint650 =  HAnimJoint();
HAnimJoint650.X3DNode::setName(CString("c5"));
HAnimJoint650.setDEF(CString("hanim_c5"));
HAnimJoint650.setCenter(new float[3]{-0.0002,-0.1169,1.2613});
HAnimSegment& HAnimSegment651 =  HAnimSegment();
HAnimSegment651.X3DNode::setName(CString("SEGMENT_FOR_c5"));
HAnimSegment651.setDEF(CString("hanim_SEGMENT_FOR_c5"));
TouchSensor& TouchSensor652 =  TouchSensor();
TouchSensor652.setDescription(CString("joint c5 segment SEGMENT_FOR_c5"));
HAnimSegment651.addChild(&TouchSensor652);

Transform& Transform653 =  Transform();
Transform653.setTranslation(new float[3]{-0.0002,-0.1169,1.2613});
Shape& Shape654 =  Shape();
Shape654.setUSE(CString("JointShape"));
Transform653.addChild(&Shape654);

HAnimSegment651.addChild(&Transform653);

HAnimSite& HAnimSite655 =  HAnimSite();
HAnimSite655.X3DNode::setName(CString("SEGMENT_FOR_c5_tip"));
HAnimSite655.setDEF(CString("hanim_SEGMENT_FOR_c5_tip"));
Transform& Transform656 =  Transform();
Transform656.setTranslation(new float[3]{-0.0002,-0.1169,1.2613});
Shape& Shape657 =  Shape();
Shape657.setUSE(CString("SiteShape"));
Transform656.addChild(&Shape657);

HAnimSite655.addChild(&Transform656);

HAnimSegment651.addChild(&HAnimSite655);

HAnimJoint650.addChildren(&HAnimSegment651);

HAnimJoint& HAnimJoint658 =  HAnimJoint();
HAnimJoint658.X3DNode::setName(CString("c4"));
HAnimJoint658.setDEF(CString("hanim_c4"));
HAnimJoint658.setCenter(new float[3]{-0.0002,-0.1169,1.2737});
HAnimSegment& HAnimSegment659 =  HAnimSegment();
HAnimSegment659.X3DNode::setName(CString("SEGMENT_FOR_c4"));
HAnimSegment659.setDEF(CString("hanim_SEGMENT_FOR_c4"));
TouchSensor& TouchSensor660 =  TouchSensor();
TouchSensor660.setDescription(CString("joint c4 segment SEGMENT_FOR_c4"));
HAnimSegment659.addChild(&TouchSensor660);

Transform& Transform661 =  Transform();
Transform661.setTranslation(new float[3]{-0.0002,-0.1169,1.2737});
Shape& Shape662 =  Shape();
Shape662.setUSE(CString("JointShape"));
Transform661.addChild(&Shape662);

HAnimSegment659.addChild(&Transform661);

HAnimSite& HAnimSite663 =  HAnimSite();
HAnimSite663.X3DNode::setName(CString("SEGMENT_FOR_c4_tip"));
HAnimSite663.setDEF(CString("hanim_SEGMENT_FOR_c4_tip"));
Transform& Transform664 =  Transform();
Transform664.setTranslation(new float[3]{-0.0002,-0.1169,1.2737});
Shape& Shape665 =  Shape();
Shape665.setUSE(CString("SiteShape"));
Transform664.addChild(&Shape665);

HAnimSite663.addChild(&Transform664);

HAnimSegment659.addChild(&HAnimSite663);

HAnimJoint658.addChildren(&HAnimSegment659);

HAnimJoint& HAnimJoint666 =  HAnimJoint();
HAnimJoint666.X3DNode::setName(CString("c3"));
HAnimJoint666.setDEF(CString("hanim_c3"));
HAnimJoint666.setCenter(new float[3]{-0.0002,-0.1169,1.2865});
HAnimSegment& HAnimSegment667 =  HAnimSegment();
HAnimSegment667.X3DNode::setName(CString("SEGMENT_FOR_c3"));
HAnimSegment667.setDEF(CString("hanim_SEGMENT_FOR_c3"));
TouchSensor& TouchSensor668 =  TouchSensor();
TouchSensor668.setDescription(CString("joint c3 segment SEGMENT_FOR_c3"));
HAnimSegment667.addChild(&TouchSensor668);

Transform& Transform669 =  Transform();
Transform669.setTranslation(new float[3]{-0.0002,-0.1169,1.2865});
Shape& Shape670 =  Shape();
Shape670.setUSE(CString("JointShape"));
Transform669.addChild(&Shape670);

HAnimSegment667.addChild(&Transform669);

HAnimSite& HAnimSite671 =  HAnimSite();
HAnimSite671.X3DNode::setName(CString("SEGMENT_FOR_c3_tip"));
HAnimSite671.setDEF(CString("hanim_SEGMENT_FOR_c3_tip"));
Transform& Transform672 =  Transform();
Transform672.setTranslation(new float[3]{-0.0002,-0.1169,1.2865});
Shape& Shape673 =  Shape();
Shape673.setUSE(CString("SiteShape"));
Transform672.addChild(&Shape673);

HAnimSite671.addChild(&Transform672);

HAnimSegment667.addChild(&HAnimSite671);

HAnimJoint666.addChildren(&HAnimSegment667);

HAnimJoint& HAnimJoint674 =  HAnimJoint();
HAnimJoint674.X3DNode::setName(CString("c2"));
HAnimJoint674.setDEF(CString("hanim_c2"));
HAnimJoint674.setCenter(new float[3]{-0.0002,-0.1169,1.2982});
HAnimSegment& HAnimSegment675 =  HAnimSegment();
HAnimSegment675.X3DNode::setName(CString("SEGMENT_FOR_c2"));
HAnimSegment675.setDEF(CString("hanim_SEGMENT_FOR_c2"));
TouchSensor& TouchSensor676 =  TouchSensor();
TouchSensor676.setDescription(CString("joint c2 segment SEGMENT_FOR_c2"));
HAnimSegment675.addChild(&TouchSensor676);

Transform& Transform677 =  Transform();
Transform677.setTranslation(new float[3]{-0.0002,-0.1169,1.2982});
Shape& Shape678 =  Shape();
Shape678.setUSE(CString("JointShape"));
Transform677.addChild(&Shape678);

HAnimSegment675.addChild(&Transform677);

HAnimSite& HAnimSite679 =  HAnimSite();
HAnimSite679.X3DNode::setName(CString("SEGMENT_FOR_c2_tip"));
HAnimSite679.setDEF(CString("hanim_SEGMENT_FOR_c2_tip"));
Transform& Transform680 =  Transform();
Transform680.setTranslation(new float[3]{-0.0002,-0.1169,1.2982});
Shape& Shape681 =  Shape();
Shape681.setUSE(CString("SiteShape"));
Transform680.addChild(&Shape681);

HAnimSite679.addChild(&Transform680);

HAnimSegment675.addChild(&HAnimSite679);

HAnimJoint674.addChildren(&HAnimSegment675);

HAnimJoint& HAnimJoint682 =  HAnimJoint();
HAnimJoint682.X3DNode::setName(CString("c1"));
HAnimJoint682.setDEF(CString("hanim_c1"));
HAnimJoint682.setCenter(new float[3]{-0.0002,-0.1169,1.3099});
HAnimSegment& HAnimSegment683 =  HAnimSegment();
HAnimSegment683.X3DNode::setName(CString("SEGMENT_FOR_c1"));
HAnimSegment683.setDEF(CString("hanim_SEGMENT_FOR_c1"));
TouchSensor& TouchSensor684 =  TouchSensor();
TouchSensor684.setDescription(CString("joint c1 segment SEGMENT_FOR_c1"));
HAnimSegment683.addChild(&TouchSensor684);

Transform& Transform685 =  Transform();
Transform685.setTranslation(new float[3]{-0.0002,-0.1169,1.3099});
Shape& Shape686 =  Shape();
Shape686.setUSE(CString("JointShape"));
Transform685.addChild(&Shape686);

HAnimSegment683.addChild(&Transform685);

HAnimSite& HAnimSite687 =  HAnimSite();
HAnimSite687.X3DNode::setName(CString("SEGMENT_FOR_c1_tip"));
HAnimSite687.setDEF(CString("hanim_SEGMENT_FOR_c1_tip"));
Transform& Transform688 =  Transform();
Transform688.setTranslation(new float[3]{-0.0002,-0.1169,1.3099});
Shape& Shape689 =  Shape();
Shape689.setUSE(CString("SiteShape"));
Transform688.addChild(&Shape689);

HAnimSite687.addChild(&Transform688);

HAnimSegment683.addChild(&HAnimSite687);

HAnimJoint682.addChildren(&HAnimSegment683);

HAnimJoint& HAnimJoint690 =  HAnimJoint();
HAnimJoint690.X3DNode::setName(CString("skull"));
HAnimJoint690.setDEF(CString("hanim_skull"));
HAnimJoint690.setCenter(new float[3]{-0.0002,-0.1173,1.3041});
HAnimSegment& HAnimSegment691 =  HAnimSegment();
HAnimSegment691.X3DNode::setName(CString("SEGMENT_FOR_skull"));
HAnimSegment691.setDEF(CString("hanim_SEGMENT_FOR_skull"));
TouchSensor& TouchSensor692 =  TouchSensor();
TouchSensor692.setDescription(CString("joint skull segment SEGMENT_FOR_skull"));
HAnimSegment691.addChild(&TouchSensor692);

Transform& Transform693 =  Transform();
Transform693.setTranslation(new float[3]{-0.0002,-0.1173,1.3041});
Shape& Shape694 =  Shape();
Shape694.setUSE(CString("JointShape"));
Transform693.addChild(&Shape694);

HAnimSegment691.addChild(&Transform693);

HAnimSite& HAnimSite695 =  HAnimSite();
HAnimSite695.X3DNode::setName(CString("SEGMENT_FOR_skull_tip"));
HAnimSite695.setDEF(CString("hanim_SEGMENT_FOR_skull_tip"));
Transform& Transform696 =  Transform();
Transform696.setTranslation(new float[3]{-0.0002,-0.1173,1.3041});
Shape& Shape697 =  Shape();
Shape697.setUSE(CString("SiteShape"));
Transform696.addChild(&Shape697);

HAnimSite695.addChild(&Transform696);

HAnimSegment691.addChild(&HAnimSite695);

HAnimJoint690.addChildren(&HAnimSegment691);

HAnimJoint& HAnimJoint698 =  HAnimJoint();
HAnimJoint698.X3DNode::setName(CString("l_eyelid"));
HAnimJoint698.setDEF(CString("hanim_l_eyelid"));
HAnimJoint698.setCenter(new float[3]{0.0503,-0.0689,1.4157});
HAnimSegment& HAnimSegment699 =  HAnimSegment();
HAnimSegment699.X3DNode::setName(CString("SEGMENT_FOR_l_eyelid"));
HAnimSegment699.setDEF(CString("hanim_SEGMENT_FOR_l_eyelid"));
TouchSensor& TouchSensor700 =  TouchSensor();
TouchSensor700.setDescription(CString("joint l_eyelid segment SEGMENT_FOR_l_eyelid"));
HAnimSegment699.addChild(&TouchSensor700);

Transform& Transform701 =  Transform();
Transform701.setTranslation(new float[3]{0.0503,-0.0689,1.4157});
Shape& Shape702 =  Shape();
Shape702.setUSE(CString("JointShape"));
Transform701.addChild(&Shape702);

HAnimSegment699.addChild(&Transform701);

HAnimSite& HAnimSite703 =  HAnimSite();
HAnimSite703.X3DNode::setName(CString("SEGMENT_FOR_l_eyelid_tip"));
HAnimSite703.setDEF(CString("hanim_SEGMENT_FOR_l_eyelid_tip"));
Transform& Transform704 =  Transform();
Transform704.setTranslation(new float[3]{0.0503,-0.0689,1.4157});
Shape& Shape705 =  Shape();
Shape705.setUSE(CString("SiteShape"));
Transform704.addChild(&Shape705);

HAnimSite703.addChild(&Transform704);

HAnimSegment699.addChild(&HAnimSite703);

HAnimJoint698.addChildren(&HAnimSegment699);

HAnimJoint690.addChildren(&HAnimJoint698);

HAnimJoint& HAnimJoint706 =  HAnimJoint();
HAnimJoint706.X3DNode::setName(CString("r_eyelid"));
HAnimJoint706.setDEF(CString("hanim_r_eyelid"));
HAnimJoint706.setCenter(new float[3]{-0.0507,-0.0689,1.4157});
HAnimSegment& HAnimSegment707 =  HAnimSegment();
HAnimSegment707.X3DNode::setName(CString("SEGMENT_FOR_r_eyelid"));
HAnimSegment707.setDEF(CString("hanim_SEGMENT_FOR_r_eyelid"));
TouchSensor& TouchSensor708 =  TouchSensor();
TouchSensor708.setDescription(CString("joint r_eyelid segment SEGMENT_FOR_r_eyelid"));
HAnimSegment707.addChild(&TouchSensor708);

Transform& Transform709 =  Transform();
Transform709.setTranslation(new float[3]{-0.0507,-0.0689,1.4157});
Shape& Shape710 =  Shape();
Shape710.setUSE(CString("JointShape"));
Transform709.addChild(&Shape710);

HAnimSegment707.addChild(&Transform709);

HAnimSite& HAnimSite711 =  HAnimSite();
HAnimSite711.X3DNode::setName(CString("SEGMENT_FOR_r_eyelid_tip"));
HAnimSite711.setDEF(CString("hanim_SEGMENT_FOR_r_eyelid_tip"));
Transform& Transform712 =  Transform();
Transform712.setTranslation(new float[3]{-0.0507,-0.0689,1.4157});
Shape& Shape713 =  Shape();
Shape713.setUSE(CString("SiteShape"));
Transform712.addChild(&Shape713);

HAnimSite711.addChild(&Transform712);

HAnimSegment707.addChild(&HAnimSite711);

HAnimJoint706.addChildren(&HAnimSegment707);

HAnimJoint690.addChildren(&HAnimJoint706);

HAnimJoint& HAnimJoint714 =  HAnimJoint();
HAnimJoint714.X3DNode::setName(CString("l_eyeball"));
HAnimJoint714.setDEF(CString("hanim_l_eyeball"));
HAnimJoint714.setCenter(new float[3]{0.0479,-0.0188,1.3963});
HAnimSegment& HAnimSegment715 =  HAnimSegment();
HAnimSegment715.X3DNode::setName(CString("SEGMENT_FOR_l_eyeball"));
HAnimSegment715.setDEF(CString("hanim_SEGMENT_FOR_l_eyeball"));
TouchSensor& TouchSensor716 =  TouchSensor();
TouchSensor716.setDescription(CString("joint l_eyeball segment SEGMENT_FOR_l_eyeball"));
HAnimSegment715.addChild(&TouchSensor716);

Transform& Transform717 =  Transform();
Transform717.setTranslation(new float[3]{0.0479,-0.0188,1.3963});
Shape& Shape718 =  Shape();
Shape718.setUSE(CString("JointShape"));
Transform717.addChild(&Shape718);

HAnimSegment715.addChild(&Transform717);

HAnimSite& HAnimSite719 =  HAnimSite();
HAnimSite719.X3DNode::setName(CString("SEGMENT_FOR_l_eyeball_tip"));
HAnimSite719.setDEF(CString("hanim_SEGMENT_FOR_l_eyeball_tip"));
Transform& Transform720 =  Transform();
Transform720.setTranslation(new float[3]{0.0479,-0.0188,1.3963});
Shape& Shape721 =  Shape();
Shape721.setUSE(CString("SiteShape"));
Transform720.addChild(&Shape721);

HAnimSite719.addChild(&Transform720);

HAnimSegment715.addChild(&HAnimSite719);

HAnimJoint714.addChildren(&HAnimSegment715);

HAnimJoint690.addChildren(&HAnimJoint714);

HAnimJoint& HAnimJoint722 =  HAnimJoint();
HAnimJoint722.X3DNode::setName(CString("r_eyeball"));
HAnimJoint722.setDEF(CString("hanim_r_eyeball"));
HAnimJoint722.setCenter(new float[3]{-0.0483,-0.0188,1.3963});
HAnimSegment& HAnimSegment723 =  HAnimSegment();
HAnimSegment723.X3DNode::setName(CString("SEGMENT_FOR_r_eyeball"));
HAnimSegment723.setDEF(CString("hanim_SEGMENT_FOR_r_eyeball"));
TouchSensor& TouchSensor724 =  TouchSensor();
TouchSensor724.setDescription(CString("joint r_eyeball segment SEGMENT_FOR_r_eyeball"));
HAnimSegment723.addChild(&TouchSensor724);

Transform& Transform725 =  Transform();
Transform725.setTranslation(new float[3]{-0.0483,-0.0188,1.3963});
Shape& Shape726 =  Shape();
Shape726.setUSE(CString("JointShape"));
Transform725.addChild(&Shape726);

HAnimSegment723.addChild(&Transform725);

HAnimSite& HAnimSite727 =  HAnimSite();
HAnimSite727.X3DNode::setName(CString("SEGMENT_FOR_r_eyeball_tip"));
HAnimSite727.setDEF(CString("hanim_SEGMENT_FOR_r_eyeball_tip"));
Transform& Transform728 =  Transform();
Transform728.setTranslation(new float[3]{-0.0483,-0.0188,1.3963});
Shape& Shape729 =  Shape();
Shape729.setUSE(CString("SiteShape"));
Transform728.addChild(&Shape729);

HAnimSite727.addChild(&Transform728);

HAnimSegment723.addChild(&HAnimSite727);

HAnimJoint722.addChildren(&HAnimSegment723);

HAnimJoint690.addChildren(&HAnimJoint722);

HAnimJoint& HAnimJoint730 =  HAnimJoint();
HAnimJoint730.X3DNode::setName(CString("l_eyebrow"));
HAnimJoint730.setDEF(CString("hanim_l_eyebrow"));
HAnimJoint730.setCenter(new float[3]{0.0216,0.0051,1.4053});
HAnimSegment& HAnimSegment731 =  HAnimSegment();
HAnimSegment731.X3DNode::setName(CString("SEGMENT_FOR_l_eyebrow"));
HAnimSegment731.setDEF(CString("hanim_SEGMENT_FOR_l_eyebrow"));
TouchSensor& TouchSensor732 =  TouchSensor();
TouchSensor732.setDescription(CString("joint l_eyebrow segment SEGMENT_FOR_l_eyebrow"));
HAnimSegment731.addChild(&TouchSensor732);

Transform& Transform733 =  Transform();
Transform733.setTranslation(new float[3]{0.0216,0.0051,1.4053});
Shape& Shape734 =  Shape();
Shape734.setUSE(CString("JointShape"));
Transform733.addChild(&Shape734);

HAnimSegment731.addChild(&Transform733);

HAnimSite& HAnimSite735 =  HAnimSite();
HAnimSite735.X3DNode::setName(CString("SEGMENT_FOR_l_eyebrow_tip"));
HAnimSite735.setDEF(CString("hanim_SEGMENT_FOR_l_eyebrow_tip"));
Transform& Transform736 =  Transform();
Transform736.setTranslation(new float[3]{0.0216,0.0051,1.4053});
Shape& Shape737 =  Shape();
Shape737.setUSE(CString("SiteShape"));
Transform736.addChild(&Shape737);

HAnimSite735.addChild(&Transform736);

HAnimSegment731.addChild(&HAnimSite735);

HAnimJoint730.addChildren(&HAnimSegment731);

HAnimJoint690.addChildren(&HAnimJoint730);

HAnimJoint& HAnimJoint738 =  HAnimJoint();
HAnimJoint738.X3DNode::setName(CString("r_eyebrow"));
HAnimJoint738.setDEF(CString("hanim_r_eyebrow"));
HAnimJoint738.setCenter(new float[3]{-0.0219,0.0051,1.4053});
HAnimSegment& HAnimSegment739 =  HAnimSegment();
HAnimSegment739.X3DNode::setName(CString("SEGMENT_FOR_r_eyebrow"));
HAnimSegment739.setDEF(CString("hanim_SEGMENT_FOR_r_eyebrow"));
TouchSensor& TouchSensor740 =  TouchSensor();
TouchSensor740.setDescription(CString("joint r_eyebrow segment SEGMENT_FOR_r_eyebrow"));
HAnimSegment739.addChild(&TouchSensor740);

Transform& Transform741 =  Transform();
Transform741.setTranslation(new float[3]{-0.0219,0.0051,1.4053});
Shape& Shape742 =  Shape();
Shape742.setUSE(CString("JointShape"));
Transform741.addChild(&Shape742);

HAnimSegment739.addChild(&Transform741);

HAnimSite& HAnimSite743 =  HAnimSite();
HAnimSite743.X3DNode::setName(CString("SEGMENT_FOR_r_eyebrow_tip"));
HAnimSite743.setDEF(CString("hanim_SEGMENT_FOR_r_eyebrow_tip"));
Transform& Transform744 =  Transform();
Transform744.setTranslation(new float[3]{-0.0219,0.0051,1.4053});
Shape& Shape745 =  Shape();
Shape745.setUSE(CString("SiteShape"));
Transform744.addChild(&Shape745);

HAnimSite743.addChild(&Transform744);

HAnimSegment739.addChild(&HAnimSite743);

HAnimJoint738.addChildren(&HAnimSegment739);

HAnimJoint690.addChildren(&HAnimJoint738);

HAnimJoint& HAnimJoint746 =  HAnimJoint();
HAnimJoint746.X3DNode::setName(CString("jaw"));
HAnimJoint746.setDEF(CString("hanim_jaw"));
HAnimJoint746.setCenter(new float[3]{-0.0002,-0.0865,1.3043});
HAnimSegment& HAnimSegment747 =  HAnimSegment();
HAnimSegment747.X3DNode::setName(CString("SEGMENT_FOR_jaw"));
HAnimSegment747.setDEF(CString("hanim_SEGMENT_FOR_jaw"));
TouchSensor& TouchSensor748 =  TouchSensor();
TouchSensor748.setDescription(CString("joint jaw segment SEGMENT_FOR_jaw"));
HAnimSegment747.addChild(&TouchSensor748);

Transform& Transform749 =  Transform();
Transform749.setTranslation(new float[3]{-0.0002,-0.0865,1.3043});
Shape& Shape750 =  Shape();
Shape750.setUSE(CString("JointShape"));
Transform749.addChild(&Shape750);

HAnimSegment747.addChild(&Transform749);

HAnimSite& HAnimSite751 =  HAnimSite();
HAnimSite751.X3DNode::setName(CString("SEGMENT_FOR_jaw_tip"));
HAnimSite751.setDEF(CString("hanim_SEGMENT_FOR_jaw_tip"));
Transform& Transform752 =  Transform();
Transform752.setTranslation(new float[3]{-0.0002,-0.0865,1.3043});
Shape& Shape753 =  Shape();
Shape753.setUSE(CString("SiteShape"));
Transform752.addChild(&Shape753);

HAnimSite751.addChild(&Transform752);

HAnimSegment747.addChild(&HAnimSite751);

HAnimJoint746.addChildren(&HAnimSegment747);

HAnimJoint690.addChildren(&HAnimJoint746);

HAnimJoint682.addChildren(&HAnimJoint690);

HAnimJoint674.addChildren(&HAnimJoint682);

HAnimJoint666.addChildren(&HAnimJoint674);

HAnimJoint658.addChildren(&HAnimJoint666);

HAnimJoint650.addChildren(&HAnimJoint658);

HAnimJoint642.addChildren(&HAnimJoint650);

HAnimJoint634.addChildren(&HAnimJoint642);

HAnimJoint626.addChildren(&HAnimJoint634);

HAnimJoint& HAnimJoint754 =  HAnimJoint();
HAnimJoint754.X3DNode::setName(CString("l_clavicle"));
HAnimJoint754.setDEF(CString("hanim_l_clavicle"));
HAnimJoint754.setCenter(new float[3]{0.1228,-0.1148,1.1833});
HAnimSegment& HAnimSegment755 =  HAnimSegment();
HAnimSegment755.X3DNode::setName(CString("SEGMENT_FOR_l_clavicle"));
HAnimSegment755.setDEF(CString("hanim_SEGMENT_FOR_l_clavicle"));
TouchSensor& TouchSensor756 =  TouchSensor();
TouchSensor756.setDescription(CString("joint l_clavicle segment SEGMENT_FOR_l_clavicle"));
HAnimSegment755.addChild(&TouchSensor756);

Transform& Transform757 =  Transform();
Transform757.setTranslation(new float[3]{0.1228,-0.1148,1.1833});
Shape& Shape758 =  Shape();
Shape758.setUSE(CString("JointShape"));
Transform757.addChild(&Shape758);

HAnimSegment755.addChild(&Transform757);

HAnimSite& HAnimSite759 =  HAnimSite();
HAnimSite759.X3DNode::setName(CString("SEGMENT_FOR_l_clavicle_tip"));
HAnimSite759.setDEF(CString("hanim_SEGMENT_FOR_l_clavicle_tip"));
Transform& Transform760 =  Transform();
Transform760.setTranslation(new float[3]{0.1228,-0.1148,1.1833});
Shape& Shape761 =  Shape();
Shape761.setUSE(CString("SiteShape"));
Transform760.addChild(&Shape761);

HAnimSite759.addChild(&Transform760);

HAnimSegment755.addChild(&HAnimSite759);

HAnimJoint754.addChildren(&HAnimSegment755);

HAnimJoint& HAnimJoint762 =  HAnimJoint();
HAnimJoint762.X3DNode::setName(CString("l_scapula"));
HAnimJoint762.setDEF(CString("hanim_l_scapula"));
HAnimJoint762.setCenter(new float[3]{0.0383,-0.1157,1.2001});
HAnimSegment& HAnimSegment763 =  HAnimSegment();
HAnimSegment763.X3DNode::setName(CString("SEGMENT_FOR_l_scapula"));
HAnimSegment763.setDEF(CString("hanim_SEGMENT_FOR_l_scapula"));
TouchSensor& TouchSensor764 =  TouchSensor();
TouchSensor764.setDescription(CString("joint l_scapula segment SEGMENT_FOR_l_scapula"));
HAnimSegment763.addChild(&TouchSensor764);

Transform& Transform765 =  Transform();
Transform765.setTranslation(new float[3]{0.0383,-0.1157,1.2001});
Shape& Shape766 =  Shape();
Shape766.setUSE(CString("JointShape"));
Transform765.addChild(&Shape766);

HAnimSegment763.addChild(&Transform765);

HAnimSite& HAnimSite767 =  HAnimSite();
HAnimSite767.X3DNode::setName(CString("SEGMENT_FOR_l_scapula_tip"));
HAnimSite767.setDEF(CString("hanim_SEGMENT_FOR_l_scapula_tip"));
Transform& Transform768 =  Transform();
Transform768.setTranslation(new float[3]{0.0383,-0.1157,1.2001});
Shape& Shape769 =  Shape();
Shape769.setUSE(CString("SiteShape"));
Transform768.addChild(&Shape769);

HAnimSite767.addChild(&Transform768);

HAnimSegment763.addChild(&HAnimSite767);

HAnimJoint762.addChildren(&HAnimSegment763);

HAnimJoint& HAnimJoint770 =  HAnimJoint();
HAnimJoint770.X3DNode::setName(CString("l_upperarm"));
HAnimJoint770.setDEF(CString("hanim_l_upperarm"));
HAnimJoint770.setCenter(new float[3]{0.1649,-0.1051,1.17});
HAnimSegment& HAnimSegment771 =  HAnimSegment();
HAnimSegment771.X3DNode::setName(CString("SEGMENT_FOR_l_upperarm"));
HAnimSegment771.setDEF(CString("hanim_SEGMENT_FOR_l_upperarm"));
TouchSensor& TouchSensor772 =  TouchSensor();
TouchSensor772.setDescription(CString("joint l_upperarm segment SEGMENT_FOR_l_upperarm"));
HAnimSegment771.addChild(&TouchSensor772);

Transform& Transform773 =  Transform();
Transform773.setTranslation(new float[3]{0.1649,-0.1051,1.17});
Shape& Shape774 =  Shape();
Shape774.setUSE(CString("JointShape"));
Transform773.addChild(&Shape774);

HAnimSegment771.addChild(&Transform773);

HAnimSite& HAnimSite775 =  HAnimSite();
HAnimSite775.X3DNode::setName(CString("SEGMENT_FOR_l_upperarm_tip"));
HAnimSite775.setDEF(CString("hanim_SEGMENT_FOR_l_upperarm_tip"));
Transform& Transform776 =  Transform();
Transform776.setTranslation(new float[3]{0.1649,-0.1051,1.17});
Shape& Shape777 =  Shape();
Shape777.setUSE(CString("SiteShape"));
Transform776.addChild(&Shape777);

HAnimSite775.addChild(&Transform776);

HAnimSegment771.addChild(&HAnimSite775);

HAnimJoint770.addChildren(&HAnimSegment771);

HAnimJoint& HAnimJoint778 =  HAnimJoint();
HAnimJoint778.X3DNode::setName(CString("l_forearm"));
HAnimJoint778.setDEF(CString("hanim_l_forearm"));
HAnimJoint778.setCenter(new float[3]{0.1819,-0.1075,0.9202});
HAnimSegment& HAnimSegment779 =  HAnimSegment();
HAnimSegment779.X3DNode::setName(CString("SEGMENT_FOR_l_forearm"));
HAnimSegment779.setDEF(CString("hanim_SEGMENT_FOR_l_forearm"));
TouchSensor& TouchSensor780 =  TouchSensor();
TouchSensor780.setDescription(CString("joint l_forearm segment SEGMENT_FOR_l_forearm"));
HAnimSegment779.addChild(&TouchSensor780);

Transform& Transform781 =  Transform();
Transform781.setTranslation(new float[3]{0.1819,-0.1075,0.9202});
Shape& Shape782 =  Shape();
Shape782.setUSE(CString("JointShape"));
Transform781.addChild(&Shape782);

HAnimSegment779.addChild(&Transform781);

HAnimSite& HAnimSite783 =  HAnimSite();
HAnimSite783.X3DNode::setName(CString("SEGMENT_FOR_l_forearm_tip"));
HAnimSite783.setDEF(CString("hanim_SEGMENT_FOR_l_forearm_tip"));
Transform& Transform784 =  Transform();
Transform784.setTranslation(new float[3]{0.1819,-0.1075,0.9202});
Shape& Shape785 =  Shape();
Shape785.setUSE(CString("SiteShape"));
Transform784.addChild(&Shape785);

HAnimSite783.addChild(&Transform784);

HAnimSegment779.addChild(&HAnimSite783);

HAnimJoint778.addChildren(&HAnimSegment779);

HAnimJoint& HAnimJoint786 =  HAnimJoint();
HAnimJoint786.X3DNode::setName(CString("l_carpal"));
HAnimJoint786.setDEF(CString("hanim_l_carpal"));
HAnimJoint786.setCenter(new float[3]{0.1818,-0.1069,0.7157});
HAnimSegment& HAnimSegment787 =  HAnimSegment();
HAnimSegment787.X3DNode::setName(CString("SEGMENT_FOR_l_carpal"));
HAnimSegment787.setDEF(CString("hanim_SEGMENT_FOR_l_carpal"));
TouchSensor& TouchSensor788 =  TouchSensor();
TouchSensor788.setDescription(CString("joint l_carpal segment SEGMENT_FOR_l_carpal"));
HAnimSegment787.addChild(&TouchSensor788);

Transform& Transform789 =  Transform();
Transform789.setTranslation(new float[3]{0.1818,-0.1069,0.7157});
Shape& Shape790 =  Shape();
Shape790.setUSE(CString("JointShape"));
Transform789.addChild(&Shape790);

HAnimSegment787.addChild(&Transform789);

HAnimSite& HAnimSite791 =  HAnimSite();
HAnimSite791.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_tip"));
HAnimSite791.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_tip"));
Transform& Transform792 =  Transform();
Transform792.setTranslation(new float[3]{0.1818,-0.1069,0.7157});
Shape& Shape793 =  Shape();
Shape793.setUSE(CString("SiteShape"));
Transform792.addChild(&Shape793);

HAnimSite791.addChild(&Transform792);

HAnimSegment787.addChild(&HAnimSite791);

HAnimJoint786.addChildren(&HAnimSegment787);

HAnimJoint& HAnimJoint794 =  HAnimJoint();
HAnimJoint794.X3DNode::setName(CString("l_trapezium"));
HAnimJoint794.setDEF(CString("hanim_l_trapezium"));
HAnimJoint794.setCenter(new float[3]{0.1811,-0.0826,0.6975});
HAnimSegment& HAnimSegment795 =  HAnimSegment();
HAnimSegment795.X3DNode::setName(CString("SEGMENT_FOR_l_trapezium"));
HAnimSegment795.setDEF(CString("hanim_SEGMENT_FOR_l_trapezium"));
TouchSensor& TouchSensor796 =  TouchSensor();
TouchSensor796.setDescription(CString("joint l_trapezium segment SEGMENT_FOR_l_trapezium"));
HAnimSegment795.addChild(&TouchSensor796);

Transform& Transform797 =  Transform();
Transform797.setTranslation(new float[3]{0.1811,-0.0826,0.6975});
Shape& Shape798 =  Shape();
Shape798.setUSE(CString("JointShape"));
Transform797.addChild(&Shape798);

HAnimSegment795.addChild(&Transform797);

HAnimSite& HAnimSite799 =  HAnimSite();
HAnimSite799.X3DNode::setName(CString("SEGMENT_FOR_l_trapezium_tip"));
HAnimSite799.setDEF(CString("hanim_SEGMENT_FOR_l_trapezium_tip"));
Transform& Transform800 =  Transform();
Transform800.setTranslation(new float[3]{0.1811,-0.0826,0.6975});
Shape& Shape801 =  Shape();
Shape801.setUSE(CString("SiteShape"));
Transform800.addChild(&Shape801);

HAnimSite799.addChild(&Transform800);

HAnimSegment795.addChild(&HAnimSite799);

HAnimJoint794.addChildren(&HAnimSegment795);

HAnimJoint& HAnimJoint802 =  HAnimJoint();
HAnimJoint802.X3DNode::setName(CString("l_metacarpal_1"));
HAnimJoint802.setDEF(CString("hanim_l_metacarpal_1"));
HAnimJoint802.setCenter(new float[3]{0.1803,-0.0759,0.684});
HAnimSegment& HAnimSegment803 =  HAnimSegment();
HAnimSegment803.X3DNode::setName(CString("SEGMENT_FOR_l_metacarpal_1"));
HAnimSegment803.setDEF(CString("hanim_SEGMENT_FOR_l_metacarpal_1"));
TouchSensor& TouchSensor804 =  TouchSensor();
TouchSensor804.setDescription(CString("joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1"));
HAnimSegment803.addChild(&TouchSensor804);

Transform& Transform805 =  Transform();
Transform805.setTranslation(new float[3]{0.1803,-0.0759,0.684});
Shape& Shape806 =  Shape();
Shape806.setUSE(CString("JointShape"));
Transform805.addChild(&Shape806);

HAnimSegment803.addChild(&Transform805);

HAnimSite& HAnimSite807 =  HAnimSite();
HAnimSite807.X3DNode::setName(CString("SEGMENT_FOR_l_metacarpal_1_tip"));
HAnimSite807.setDEF(CString("hanim_SEGMENT_FOR_l_metacarpal_1_tip"));
Transform& Transform808 =  Transform();
Transform808.setTranslation(new float[3]{0.1803,-0.0759,0.684});
Shape& Shape809 =  Shape();
Shape809.setUSE(CString("SiteShape"));
Transform808.addChild(&Shape809);

HAnimSite807.addChild(&Transform808);

HAnimSegment803.addChild(&HAnimSite807);

HAnimJoint802.addChildren(&HAnimSegment803);

HAnimJoint& HAnimJoint810 =  HAnimJoint();
HAnimJoint810.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimJoint810.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimJoint810.setCenter(new float[3]{0.1809,-0.0661,0.6642});
HAnimSegment& HAnimSegment811 =  HAnimSegment();
HAnimSegment811.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_proximal_phalanx_1"));
HAnimSegment811.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1"));
TouchSensor& TouchSensor812 =  TouchSensor();
TouchSensor812.setDescription(CString("joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1"));
HAnimSegment811.addChild(&TouchSensor812);

Transform& Transform813 =  Transform();
Transform813.setTranslation(new float[3]{0.1809,-0.0661,0.6642});
Shape& Shape814 =  Shape();
Shape814.setUSE(CString("JointShape"));
Transform813.addChild(&Shape814);

HAnimSegment811.addChild(&Transform813);

HAnimSite& HAnimSite815 =  HAnimSite();
HAnimSite815.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip"));
HAnimSite815.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip"));
Transform& Transform816 =  Transform();
Transform816.setTranslation(new float[3]{0.1809,-0.0661,0.6642});
Shape& Shape817 =  Shape();
Shape817.setUSE(CString("SiteShape"));
Transform816.addChild(&Shape817);

HAnimSite815.addChild(&Transform816);

HAnimSegment811.addChild(&HAnimSite815);

HAnimJoint810.addChildren(&HAnimSegment811);

HAnimJoint& HAnimJoint818 =  HAnimJoint();
HAnimJoint818.X3DNode::setName(CString("l_carpal_distal_phalanx_1"));
HAnimJoint818.setDEF(CString("hanim_l_carpal_distal_phalanx_1"));
HAnimJoint818.setCenter(new float[3]{0.1825,-0.0522,0.6455});
HAnimSegment& HAnimSegment819 =  HAnimSegment();
HAnimSegment819.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_distal_phalanx_1"));
HAnimSegment819.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1"));
TouchSensor& TouchSensor820 =  TouchSensor();
TouchSensor820.setDescription(CString("joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1"));
HAnimSegment819.addChild(&TouchSensor820);

Transform& Transform821 =  Transform();
Transform821.setTranslation(new float[3]{0.1825,-0.0522,0.6455});
Shape& Shape822 =  Shape();
Shape822.setUSE(CString("JointShape"));
Transform821.addChild(&Shape822);

HAnimSegment819.addChild(&Transform821);

HAnimSite& HAnimSite823 =  HAnimSite();
HAnimSite823.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_distal_phalanx_1_tip"));
HAnimSite823.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip"));
Transform& Transform824 =  Transform();
Transform824.setTranslation(new float[3]{0.1825,-0.0522,0.6455});
Shape& Shape825 =  Shape();
Shape825.setUSE(CString("SiteShape"));
Transform824.addChild(&Shape825);

HAnimSite823.addChild(&Transform824);

HAnimSegment819.addChild(&HAnimSite823);

HAnimJoint818.addChildren(&HAnimSegment819);

HAnimJoint810.addChildren(&HAnimJoint818);

HAnimJoint802.addChildren(&HAnimJoint810);

HAnimJoint794.addChildren(&HAnimJoint802);

HAnimJoint786.addChildren(&HAnimJoint794);

HAnimJoint& HAnimJoint826 =  HAnimJoint();
HAnimJoint826.X3DNode::setName(CString("l_trapezoid"));
HAnimJoint826.setDEF(CString("hanim_l_trapezoid"));
HAnimJoint826.setCenter(new float[3]{0.1811,-0.0935,0.6984});
HAnimSegment& HAnimSegment827 =  HAnimSegment();
HAnimSegment827.X3DNode::setName(CString("SEGMENT_FOR_l_trapezoid"));
HAnimSegment827.setDEF(CString("hanim_SEGMENT_FOR_l_trapezoid"));
TouchSensor& TouchSensor828 =  TouchSensor();
TouchSensor828.setDescription(CString("joint l_trapezoid segment SEGMENT_FOR_l_trapezoid"));
HAnimSegment827.addChild(&TouchSensor828);

Transform& Transform829 =  Transform();
Transform829.setTranslation(new float[3]{0.1811,-0.0935,0.6984});
Shape& Shape830 =  Shape();
Shape830.setUSE(CString("JointShape"));
Transform829.addChild(&Shape830);

HAnimSegment827.addChild(&Transform829);

HAnimSite& HAnimSite831 =  HAnimSite();
HAnimSite831.X3DNode::setName(CString("SEGMENT_FOR_l_trapezoid_tip"));
HAnimSite831.setDEF(CString("hanim_SEGMENT_FOR_l_trapezoid_tip"));
Transform& Transform832 =  Transform();
Transform832.setTranslation(new float[3]{0.1811,-0.0935,0.6984});
Shape& Shape833 =  Shape();
Shape833.setUSE(CString("SiteShape"));
Transform832.addChild(&Shape833);

HAnimSite831.addChild(&Transform832);

HAnimSegment827.addChild(&HAnimSite831);

HAnimJoint826.addChildren(&HAnimSegment827);

HAnimJoint& HAnimJoint834 =  HAnimJoint();
HAnimJoint834.X3DNode::setName(CString("l_metacarpal_2"));
HAnimJoint834.setDEF(CString("hanim_l_metacarpal_2"));
HAnimJoint834.setCenter(new float[3]{0.1811,-0.0922,0.679});
HAnimSegment& HAnimSegment835 =  HAnimSegment();
HAnimSegment835.X3DNode::setName(CString("SEGMENT_FOR_l_metacarpal_2"));
HAnimSegment835.setDEF(CString("hanim_SEGMENT_FOR_l_metacarpal_2"));
TouchSensor& TouchSensor836 =  TouchSensor();
TouchSensor836.setDescription(CString("joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2"));
HAnimSegment835.addChild(&TouchSensor836);

Transform& Transform837 =  Transform();
Transform837.setTranslation(new float[3]{0.1811,-0.0922,0.679});
Shape& Shape838 =  Shape();
Shape838.setUSE(CString("JointShape"));
Transform837.addChild(&Shape838);

HAnimSegment835.addChild(&Transform837);

HAnimSite& HAnimSite839 =  HAnimSite();
HAnimSite839.X3DNode::setName(CString("SEGMENT_FOR_l_metacarpal_2_tip"));
HAnimSite839.setDEF(CString("hanim_SEGMENT_FOR_l_metacarpal_2_tip"));
Transform& Transform840 =  Transform();
Transform840.setTranslation(new float[3]{0.1811,-0.0922,0.679});
Shape& Shape841 =  Shape();
Shape841.setUSE(CString("SiteShape"));
Transform840.addChild(&Shape841);

HAnimSite839.addChild(&Transform840);

HAnimSegment835.addChild(&HAnimSite839);

HAnimJoint834.addChildren(&HAnimSegment835);

HAnimJoint& HAnimJoint842 =  HAnimJoint();
HAnimJoint842.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimJoint842.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimJoint842.setCenter(new float[3]{0.1836,-0.0868,0.6286});
HAnimSegment& HAnimSegment843 =  HAnimSegment();
HAnimSegment843.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_proximal_phalanx_2"));
HAnimSegment843.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2"));
TouchSensor& TouchSensor844 =  TouchSensor();
TouchSensor844.setDescription(CString("joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2"));
HAnimSegment843.addChild(&TouchSensor844);

Transform& Transform845 =  Transform();
Transform845.setTranslation(new float[3]{0.1836,-0.0868,0.6286});
Shape& Shape846 =  Shape();
Shape846.setUSE(CString("JointShape"));
Transform845.addChild(&Shape846);

HAnimSegment843.addChild(&Transform845);

HAnimSite& HAnimSite847 =  HAnimSite();
HAnimSite847.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip"));
HAnimSite847.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip"));
Transform& Transform848 =  Transform();
Transform848.setTranslation(new float[3]{0.1836,-0.0868,0.6286});
Shape& Shape849 =  Shape();
Shape849.setUSE(CString("SiteShape"));
Transform848.addChild(&Shape849);

HAnimSite847.addChild(&Transform848);

HAnimSegment843.addChild(&HAnimSite847);

HAnimJoint842.addChildren(&HAnimSegment843);

HAnimJoint& HAnimJoint850 =  HAnimJoint();
HAnimJoint850.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimJoint850.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimJoint850.setCenter(new float[3]{0.1815,-0.0877,0.5983});
HAnimSegment& HAnimSegment851 =  HAnimSegment();
HAnimSegment851.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_middle_phalanx_2"));
HAnimSegment851.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2"));
TouchSensor& TouchSensor852 =  TouchSensor();
TouchSensor852.setDescription(CString("joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2"));
HAnimSegment851.addChild(&TouchSensor852);

Transform& Transform853 =  Transform();
Transform853.setTranslation(new float[3]{0.1815,-0.0877,0.5983});
Shape& Shape854 =  Shape();
Shape854.setUSE(CString("JointShape"));
Transform853.addChild(&Shape854);

HAnimSegment851.addChild(&Transform853);

HAnimSite& HAnimSite855 =  HAnimSite();
HAnimSite855.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_middle_phalanx_2_tip"));
HAnimSite855.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip"));
Transform& Transform856 =  Transform();
Transform856.setTranslation(new float[3]{0.1815,-0.0877,0.5983});
Shape& Shape857 =  Shape();
Shape857.setUSE(CString("SiteShape"));
Transform856.addChild(&Shape857);

HAnimSite855.addChild(&Transform856);

HAnimSegment851.addChild(&HAnimSite855);

HAnimJoint850.addChildren(&HAnimSegment851);

HAnimJoint& HAnimJoint858 =  HAnimJoint();
HAnimJoint858.X3DNode::setName(CString("l_carpal_distal_phalanx_2"));
HAnimJoint858.setDEF(CString("hanim_l_carpal_distal_phalanx_2"));
HAnimJoint858.setCenter(new float[3]{0.1805,-0.0885,0.5731});
HAnimSegment& HAnimSegment859 =  HAnimSegment();
HAnimSegment859.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_distal_phalanx_2"));
HAnimSegment859.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2"));
TouchSensor& TouchSensor860 =  TouchSensor();
TouchSensor860.setDescription(CString("joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2"));
HAnimSegment859.addChild(&TouchSensor860);

Transform& Transform861 =  Transform();
Transform861.setTranslation(new float[3]{0.1805,-0.0885,0.5731});
Shape& Shape862 =  Shape();
Shape862.setUSE(CString("JointShape"));
Transform861.addChild(&Shape862);

HAnimSegment859.addChild(&Transform861);

HAnimSite& HAnimSite863 =  HAnimSite();
HAnimSite863.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_distal_phalanx_2_tip"));
HAnimSite863.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip"));
Transform& Transform864 =  Transform();
Transform864.setTranslation(new float[3]{0.1805,-0.0885,0.5731});
Shape& Shape865 =  Shape();
Shape865.setUSE(CString("SiteShape"));
Transform864.addChild(&Shape865);

HAnimSite863.addChild(&Transform864);

HAnimSegment859.addChild(&HAnimSite863);

HAnimJoint858.addChildren(&HAnimSegment859);

HAnimJoint850.addChildren(&HAnimJoint858);

HAnimJoint842.addChildren(&HAnimJoint850);

HAnimJoint834.addChildren(&HAnimJoint842);

HAnimJoint826.addChildren(&HAnimJoint834);

HAnimJoint786.addChildren(&HAnimJoint826);

HAnimJoint& HAnimJoint866 =  HAnimJoint();
HAnimJoint866.X3DNode::setName(CString("l_capitate"));
HAnimJoint866.setDEF(CString("hanim_l_capitate"));
HAnimJoint866.setCenter(new float[3]{0.1809,-0.1067,0.7});
HAnimSegment& HAnimSegment867 =  HAnimSegment();
HAnimSegment867.X3DNode::setName(CString("SEGMENT_FOR_l_capitate"));
HAnimSegment867.setDEF(CString("hanim_SEGMENT_FOR_l_capitate"));
TouchSensor& TouchSensor868 =  TouchSensor();
TouchSensor868.setDescription(CString("joint l_capitate segment SEGMENT_FOR_l_capitate"));
HAnimSegment867.addChild(&TouchSensor868);

Transform& Transform869 =  Transform();
Transform869.setTranslation(new float[3]{0.1809,-0.1067,0.7});
Shape& Shape870 =  Shape();
Shape870.setUSE(CString("JointShape"));
Transform869.addChild(&Shape870);

HAnimSegment867.addChild(&Transform869);

HAnimSite& HAnimSite871 =  HAnimSite();
HAnimSite871.X3DNode::setName(CString("SEGMENT_FOR_l_capitate_tip"));
HAnimSite871.setDEF(CString("hanim_SEGMENT_FOR_l_capitate_tip"));
Transform& Transform872 =  Transform();
Transform872.setTranslation(new float[3]{0.1809,-0.1067,0.7});
Shape& Shape873 =  Shape();
Shape873.setUSE(CString("SiteShape"));
Transform872.addChild(&Shape873);

HAnimSite871.addChild(&Transform872);

HAnimSegment867.addChild(&HAnimSite871);

HAnimJoint866.addChildren(&HAnimSegment867);

HAnimJoint& HAnimJoint874 =  HAnimJoint();
HAnimJoint874.X3DNode::setName(CString("l_metacarpal_3"));
HAnimJoint874.setDEF(CString("hanim_l_metacarpal_3"));
HAnimJoint874.setCenter(new float[3]{0.1809,-0.1081,0.6772});
HAnimSegment& HAnimSegment875 =  HAnimSegment();
HAnimSegment875.X3DNode::setName(CString("SEGMENT_FOR_l_metacarpal_3"));
HAnimSegment875.setDEF(CString("hanim_SEGMENT_FOR_l_metacarpal_3"));
TouchSensor& TouchSensor876 =  TouchSensor();
TouchSensor876.setDescription(CString("joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3"));
HAnimSegment875.addChild(&TouchSensor876);

Transform& Transform877 =  Transform();
Transform877.setTranslation(new float[3]{0.1809,-0.1081,0.6772});
Shape& Shape878 =  Shape();
Shape878.setUSE(CString("JointShape"));
Transform877.addChild(&Shape878);

HAnimSegment875.addChild(&Transform877);

HAnimSite& HAnimSite879 =  HAnimSite();
HAnimSite879.X3DNode::setName(CString("SEGMENT_FOR_l_metacarpal_3_tip"));
HAnimSite879.setDEF(CString("hanim_SEGMENT_FOR_l_metacarpal_3_tip"));
Transform& Transform880 =  Transform();
Transform880.setTranslation(new float[3]{0.1809,-0.1081,0.6772});
Shape& Shape881 =  Shape();
Shape881.setUSE(CString("SiteShape"));
Transform880.addChild(&Shape881);

HAnimSite879.addChild(&Transform880);

HAnimSegment875.addChild(&HAnimSite879);

HAnimJoint874.addChildren(&HAnimSegment875);

HAnimJoint& HAnimJoint882 =  HAnimJoint();
HAnimJoint882.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimJoint882.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimJoint882.setCenter(new float[3]{0.1835,-0.1058,0.6264});
HAnimSegment& HAnimSegment883 =  HAnimSegment();
HAnimSegment883.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_proximal_phalanx_3"));
HAnimSegment883.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3"));
TouchSensor& TouchSensor884 =  TouchSensor();
TouchSensor884.setDescription(CString("joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3"));
HAnimSegment883.addChild(&TouchSensor884);

Transform& Transform885 =  Transform();
Transform885.setTranslation(new float[3]{0.1835,-0.1058,0.6264});
Shape& Shape886 =  Shape();
Shape886.setUSE(CString("JointShape"));
Transform885.addChild(&Shape886);

HAnimSegment883.addChild(&Transform885);

HAnimSite& HAnimSite887 =  HAnimSite();
HAnimSite887.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip"));
HAnimSite887.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip"));
Transform& Transform888 =  Transform();
Transform888.setTranslation(new float[3]{0.1835,-0.1058,0.6264});
Shape& Shape889 =  Shape();
Shape889.setUSE(CString("SiteShape"));
Transform888.addChild(&Shape889);

HAnimSite887.addChild(&Transform888);

HAnimSegment883.addChild(&HAnimSite887);

HAnimJoint882.addChildren(&HAnimSegment883);

HAnimJoint& HAnimJoint890 =  HAnimJoint();
HAnimJoint890.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimJoint890.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimJoint890.setCenter(new float[3]{0.1815,-0.1054,0.5947});
HAnimSegment& HAnimSegment891 =  HAnimSegment();
HAnimSegment891.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_middle_phalanx_3"));
HAnimSegment891.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3"));
TouchSensor& TouchSensor892 =  TouchSensor();
TouchSensor892.setDescription(CString("joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3"));
HAnimSegment891.addChild(&TouchSensor892);

Transform& Transform893 =  Transform();
Transform893.setTranslation(new float[3]{0.1815,-0.1054,0.5947});
Shape& Shape894 =  Shape();
Shape894.setUSE(CString("JointShape"));
Transform893.addChild(&Shape894);

HAnimSegment891.addChild(&Transform893);

HAnimSite& HAnimSite895 =  HAnimSite();
HAnimSite895.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_middle_phalanx_3_tip"));
HAnimSite895.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip"));
Transform& Transform896 =  Transform();
Transform896.setTranslation(new float[3]{0.1815,-0.1054,0.5947});
Shape& Shape897 =  Shape();
Shape897.setUSE(CString("SiteShape"));
Transform896.addChild(&Shape897);

HAnimSite895.addChild(&Transform896);

HAnimSegment891.addChild(&HAnimSite895);

HAnimJoint890.addChildren(&HAnimSegment891);

HAnimJoint& HAnimJoint898 =  HAnimJoint();
HAnimJoint898.X3DNode::setName(CString("l_carpal_distal_phalanx_3"));
HAnimJoint898.setDEF(CString("hanim_l_carpal_distal_phalanx_3"));
HAnimJoint898.setCenter(new float[3]{0.1805,-0.1056,0.5668});
HAnimSegment& HAnimSegment899 =  HAnimSegment();
HAnimSegment899.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_distal_phalanx_3"));
HAnimSegment899.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3"));
TouchSensor& TouchSensor900 =  TouchSensor();
TouchSensor900.setDescription(CString("joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3"));
HAnimSegment899.addChild(&TouchSensor900);

Transform& Transform901 =  Transform();
Transform901.setTranslation(new float[3]{0.1805,-0.1056,0.5668});
Shape& Shape902 =  Shape();
Shape902.setUSE(CString("JointShape"));
Transform901.addChild(&Shape902);

HAnimSegment899.addChild(&Transform901);

HAnimSite& HAnimSite903 =  HAnimSite();
HAnimSite903.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_distal_phalanx_3_tip"));
HAnimSite903.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip"));
Transform& Transform904 =  Transform();
Transform904.setTranslation(new float[3]{0.1805,-0.1056,0.5668});
Shape& Shape905 =  Shape();
Shape905.setUSE(CString("SiteShape"));
Transform904.addChild(&Shape905);

HAnimSite903.addChild(&Transform904);

HAnimSegment899.addChild(&HAnimSite903);

HAnimJoint898.addChildren(&HAnimSegment899);

HAnimJoint890.addChildren(&HAnimJoint898);

HAnimJoint882.addChildren(&HAnimJoint890);

HAnimJoint874.addChildren(&HAnimJoint882);

HAnimJoint866.addChildren(&HAnimJoint874);

HAnimJoint786.addChildren(&HAnimJoint866);

HAnimJoint& HAnimJoint906 =  HAnimJoint();
HAnimJoint906.X3DNode::setName(CString("l_hamate"));
HAnimJoint906.setDEF(CString("hanim_l_hamate"));
HAnimJoint906.setCenter(new float[3]{0.1809,-0.1276,0.6973});
HAnimSegment& HAnimSegment907 =  HAnimSegment();
HAnimSegment907.X3DNode::setName(CString("SEGMENT_FOR_l_hamate"));
HAnimSegment907.setDEF(CString("hanim_SEGMENT_FOR_l_hamate"));
TouchSensor& TouchSensor908 =  TouchSensor();
TouchSensor908.setDescription(CString("joint l_hamate segment SEGMENT_FOR_l_hamate"));
HAnimSegment907.addChild(&TouchSensor908);

Transform& Transform909 =  Transform();
Transform909.setTranslation(new float[3]{0.1809,-0.1276,0.6973});
Shape& Shape910 =  Shape();
Shape910.setUSE(CString("JointShape"));
Transform909.addChild(&Shape910);

HAnimSegment907.addChild(&Transform909);

HAnimSite& HAnimSite911 =  HAnimSite();
HAnimSite911.X3DNode::setName(CString("SEGMENT_FOR_l_hamate_tip"));
HAnimSite911.setDEF(CString("hanim_SEGMENT_FOR_l_hamate_tip"));
Transform& Transform912 =  Transform();
Transform912.setTranslation(new float[3]{0.1809,-0.1276,0.6973});
Shape& Shape913 =  Shape();
Shape913.setUSE(CString("SiteShape"));
Transform912.addChild(&Shape913);

HAnimSite911.addChild(&Transform912);

HAnimSegment907.addChild(&HAnimSite911);

HAnimJoint906.addChildren(&HAnimSegment907);

HAnimJoint& HAnimJoint914 =  HAnimJoint();
HAnimJoint914.X3DNode::setName(CString("l_metacarpal_4"));
HAnimJoint914.setDEF(CString("hanim_l_metacarpal_4"));
HAnimJoint914.setCenter(new float[3]{0.1809,-0.1218,0.6777});
HAnimSegment& HAnimSegment915 =  HAnimSegment();
HAnimSegment915.X3DNode::setName(CString("SEGMENT_FOR_l_metacarpal_4"));
HAnimSegment915.setDEF(CString("hanim_SEGMENT_FOR_l_metacarpal_4"));
TouchSensor& TouchSensor916 =  TouchSensor();
TouchSensor916.setDescription(CString("joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4"));
HAnimSegment915.addChild(&TouchSensor916);

Transform& Transform917 =  Transform();
Transform917.setTranslation(new float[3]{0.1809,-0.1218,0.6777});
Shape& Shape918 =  Shape();
Shape918.setUSE(CString("JointShape"));
Transform917.addChild(&Shape918);

HAnimSegment915.addChild(&Transform917);

HAnimSite& HAnimSite919 =  HAnimSite();
HAnimSite919.X3DNode::setName(CString("SEGMENT_FOR_l_metacarpal_4_tip"));
HAnimSite919.setDEF(CString("hanim_SEGMENT_FOR_l_metacarpal_4_tip"));
Transform& Transform920 =  Transform();
Transform920.setTranslation(new float[3]{0.1809,-0.1218,0.6777});
Shape& Shape921 =  Shape();
Shape921.setUSE(CString("SiteShape"));
Transform920.addChild(&Shape921);

HAnimSite919.addChild(&Transform920);

HAnimSegment915.addChild(&HAnimSite919);

HAnimJoint914.addChildren(&HAnimSegment915);

HAnimJoint& HAnimJoint922 =  HAnimJoint();
HAnimJoint922.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimJoint922.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimJoint922.setCenter(new float[3]{0.1835,-0.1233,0.6255});
HAnimSegment& HAnimSegment923 =  HAnimSegment();
HAnimSegment923.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_proximal_phalanx_4"));
HAnimSegment923.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4"));
TouchSensor& TouchSensor924 =  TouchSensor();
TouchSensor924.setDescription(CString("joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4"));
HAnimSegment923.addChild(&TouchSensor924);

Transform& Transform925 =  Transform();
Transform925.setTranslation(new float[3]{0.1835,-0.1233,0.6255});
Shape& Shape926 =  Shape();
Shape926.setUSE(CString("JointShape"));
Transform925.addChild(&Shape926);

HAnimSegment923.addChild(&Transform925);

HAnimSite& HAnimSite927 =  HAnimSite();
HAnimSite927.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip"));
HAnimSite927.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip"));
Transform& Transform928 =  Transform();
Transform928.setTranslation(new float[3]{0.1835,-0.1233,0.6255});
Shape& Shape929 =  Shape();
Shape929.setUSE(CString("SiteShape"));
Transform928.addChild(&Shape929);

HAnimSite927.addChild(&Transform928);

HAnimSegment923.addChild(&HAnimSite927);

HAnimJoint922.addChildren(&HAnimSegment923);

HAnimJoint& HAnimJoint930 =  HAnimJoint();
HAnimJoint930.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimJoint930.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimJoint930.setCenter(new float[3]{0.1815,-0.1225,0.598});
HAnimSegment& HAnimSegment931 =  HAnimSegment();
HAnimSegment931.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_middle_phalanx_4"));
HAnimSegment931.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4"));
TouchSensor& TouchSensor932 =  TouchSensor();
TouchSensor932.setDescription(CString("joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4"));
HAnimSegment931.addChild(&TouchSensor932);

Transform& Transform933 =  Transform();
Transform933.setTranslation(new float[3]{0.1815,-0.1225,0.598});
Shape& Shape934 =  Shape();
Shape934.setUSE(CString("JointShape"));
Transform933.addChild(&Shape934);

HAnimSegment931.addChild(&Transform933);

HAnimSite& HAnimSite935 =  HAnimSite();
HAnimSite935.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_middle_phalanx_4_tip"));
HAnimSite935.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip"));
Transform& Transform936 =  Transform();
Transform936.setTranslation(new float[3]{0.1815,-0.1225,0.598});
Shape& Shape937 =  Shape();
Shape937.setUSE(CString("SiteShape"));
Transform936.addChild(&Shape937);

HAnimSite935.addChild(&Transform936);

HAnimSegment931.addChild(&HAnimSite935);

HAnimJoint930.addChildren(&HAnimSegment931);

HAnimJoint& HAnimJoint938 =  HAnimJoint();
HAnimJoint938.X3DNode::setName(CString("l_carpal_distal_phalanx_4"));
HAnimJoint938.setDEF(CString("hanim_l_carpal_distal_phalanx_4"));
HAnimJoint938.setCenter(new float[3]{0.1805,-0.1217,0.5722});
HAnimSegment& HAnimSegment939 =  HAnimSegment();
HAnimSegment939.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_distal_phalanx_4"));
HAnimSegment939.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4"));
TouchSensor& TouchSensor940 =  TouchSensor();
TouchSensor940.setDescription(CString("joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4"));
HAnimSegment939.addChild(&TouchSensor940);

Transform& Transform941 =  Transform();
Transform941.setTranslation(new float[3]{0.1805,-0.1217,0.5722});
Shape& Shape942 =  Shape();
Shape942.setUSE(CString("JointShape"));
Transform941.addChild(&Shape942);

HAnimSegment939.addChild(&Transform941);

HAnimSite& HAnimSite943 =  HAnimSite();
HAnimSite943.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_distal_phalanx_4_tip"));
HAnimSite943.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip"));
Transform& Transform944 =  Transform();
Transform944.setTranslation(new float[3]{0.1805,-0.1217,0.5722});
Shape& Shape945 =  Shape();
Shape945.setUSE(CString("SiteShape"));
Transform944.addChild(&Shape945);

HAnimSite943.addChild(&Transform944);

HAnimSegment939.addChild(&HAnimSite943);

HAnimJoint938.addChildren(&HAnimSegment939);

HAnimJoint930.addChildren(&HAnimJoint938);

HAnimJoint922.addChildren(&HAnimJoint930);

HAnimJoint914.addChildren(&HAnimJoint922);

HAnimJoint906.addChildren(&HAnimJoint914);

HAnimJoint& HAnimJoint946 =  HAnimJoint();
HAnimJoint946.X3DNode::setName(CString("l_metacarpal_5"));
HAnimJoint946.setDEF(CString("hanim_l_metacarpal_5"));
HAnimJoint946.setCenter(new float[3]{0.1815,-0.1347,0.6797});
HAnimSegment& HAnimSegment947 =  HAnimSegment();
HAnimSegment947.X3DNode::setName(CString("SEGMENT_FOR_l_metacarpal_5"));
HAnimSegment947.setDEF(CString("hanim_SEGMENT_FOR_l_metacarpal_5"));
TouchSensor& TouchSensor948 =  TouchSensor();
TouchSensor948.setDescription(CString("joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5"));
HAnimSegment947.addChild(&TouchSensor948);

Transform& Transform949 =  Transform();
Transform949.setTranslation(new float[3]{0.1815,-0.1347,0.6797});
Shape& Shape950 =  Shape();
Shape950.setUSE(CString("JointShape"));
Transform949.addChild(&Shape950);

HAnimSegment947.addChild(&Transform949);

HAnimSite& HAnimSite951 =  HAnimSite();
HAnimSite951.X3DNode::setName(CString("SEGMENT_FOR_l_metacarpal_5_tip"));
HAnimSite951.setDEF(CString("hanim_SEGMENT_FOR_l_metacarpal_5_tip"));
Transform& Transform952 =  Transform();
Transform952.setTranslation(new float[3]{0.1815,-0.1347,0.6797});
Shape& Shape953 =  Shape();
Shape953.setUSE(CString("SiteShape"));
Transform952.addChild(&Shape953);

HAnimSite951.addChild(&Transform952);

HAnimSegment947.addChild(&HAnimSite951);

HAnimJoint946.addChildren(&HAnimSegment947);

HAnimJoint& HAnimJoint954 =  HAnimJoint();
HAnimJoint954.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimJoint954.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimJoint954.setCenter(new float[3]{0.1832,-0.1389,0.6295});
HAnimSegment& HAnimSegment955 =  HAnimSegment();
HAnimSegment955.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_proximal_phalanx_5"));
HAnimSegment955.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5"));
TouchSensor& TouchSensor956 =  TouchSensor();
TouchSensor956.setDescription(CString("joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5"));
HAnimSegment955.addChild(&TouchSensor956);

Transform& Transform957 =  Transform();
Transform957.setTranslation(new float[3]{0.1832,-0.1389,0.6295});
Shape& Shape958 =  Shape();
Shape958.setUSE(CString("JointShape"));
Transform957.addChild(&Shape958);

HAnimSegment955.addChild(&Transform957);

HAnimSite& HAnimSite959 =  HAnimSite();
HAnimSite959.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip"));
HAnimSite959.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip"));
Transform& Transform960 =  Transform();
Transform960.setTranslation(new float[3]{0.1832,-0.1389,0.6295});
Shape& Shape961 =  Shape();
Shape961.setUSE(CString("SiteShape"));
Transform960.addChild(&Shape961);

HAnimSite959.addChild(&Transform960);

HAnimSegment955.addChild(&HAnimSite959);

HAnimJoint954.addChildren(&HAnimSegment955);

HAnimJoint& HAnimJoint962 =  HAnimJoint();
HAnimJoint962.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimJoint962.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimJoint962.setCenter(new float[3]{0.1815,-0.139,0.6124});
HAnimSegment& HAnimSegment963 =  HAnimSegment();
HAnimSegment963.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_middle_phalanx_5"));
HAnimSegment963.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5"));
TouchSensor& TouchSensor964 =  TouchSensor();
TouchSensor964.setDescription(CString("joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5"));
HAnimSegment963.addChild(&TouchSensor964);

Transform& Transform965 =  Transform();
Transform965.setTranslation(new float[3]{0.1815,-0.139,0.6124});
Shape& Shape966 =  Shape();
Shape966.setUSE(CString("JointShape"));
Transform965.addChild(&Shape966);

HAnimSegment963.addChild(&Transform965);

HAnimSite& HAnimSite967 =  HAnimSite();
HAnimSite967.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_middle_phalanx_5_tip"));
HAnimSite967.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip"));
Transform& Transform968 =  Transform();
Transform968.setTranslation(new float[3]{0.1815,-0.139,0.6124});
Shape& Shape969 =  Shape();
Shape969.setUSE(CString("SiteShape"));
Transform968.addChild(&Shape969);

HAnimSite967.addChild(&Transform968);

HAnimSegment963.addChild(&HAnimSite967);

HAnimJoint962.addChildren(&HAnimSegment963);

HAnimJoint& HAnimJoint970 =  HAnimJoint();
HAnimJoint970.X3DNode::setName(CString("l_carpal_distal_phalanx_5"));
HAnimJoint970.setDEF(CString("hanim_l_carpal_distal_phalanx_5"));
HAnimJoint970.setCenter(new float[3]{0.1806,-0.1388,0.5938});
HAnimSegment& HAnimSegment971 =  HAnimSegment();
HAnimSegment971.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_distal_phalanx_5"));
HAnimSegment971.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5"));
TouchSensor& TouchSensor972 =  TouchSensor();
TouchSensor972.setDescription(CString("joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5"));
HAnimSegment971.addChild(&TouchSensor972);

Transform& Transform973 =  Transform();
Transform973.setTranslation(new float[3]{0.1806,-0.1388,0.5938});
Shape& Shape974 =  Shape();
Shape974.setUSE(CString("JointShape"));
Transform973.addChild(&Shape974);

HAnimSegment971.addChild(&Transform973);

HAnimSite& HAnimSite975 =  HAnimSite();
HAnimSite975.X3DNode::setName(CString("SEGMENT_FOR_l_carpal_distal_phalanx_5_tip"));
HAnimSite975.setDEF(CString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip"));
Transform& Transform976 =  Transform();
Transform976.setTranslation(new float[3]{0.1806,-0.1388,0.5938});
Shape& Shape977 =  Shape();
Shape977.setUSE(CString("SiteShape"));
Transform976.addChild(&Shape977);

HAnimSite975.addChild(&Transform976);

HAnimSegment971.addChild(&HAnimSite975);

HAnimJoint970.addChildren(&HAnimSegment971);

HAnimJoint962.addChildren(&HAnimJoint970);

HAnimJoint954.addChildren(&HAnimJoint962);

HAnimJoint946.addChildren(&HAnimJoint954);

HAnimJoint906.addChildren(&HAnimJoint946);

HAnimJoint786.addChildren(&HAnimJoint906);

HAnimJoint778.addChildren(&HAnimJoint786);

HAnimJoint770.addChildren(&HAnimJoint778);

HAnimJoint762.addChildren(&HAnimJoint770);

HAnimJoint754.addChildren(&HAnimJoint762);

HAnimJoint626.addChildren(&HAnimJoint754);

HAnimJoint& HAnimJoint978 =  HAnimJoint();
HAnimJoint978.X3DNode::setName(CString("r_clavicle"));
HAnimJoint978.setDEF(CString("hanim_r_clavicle"));
HAnimJoint978.setCenter(new float[3]{-0.1231,-0.1148,1.1833});
HAnimSegment& HAnimSegment979 =  HAnimSegment();
HAnimSegment979.X3DNode::setName(CString("SEGMENT_FOR_r_clavicle"));
HAnimSegment979.setDEF(CString("hanim_SEGMENT_FOR_r_clavicle"));
TouchSensor& TouchSensor980 =  TouchSensor();
TouchSensor980.setDescription(CString("joint r_clavicle segment SEGMENT_FOR_r_clavicle"));
HAnimSegment979.addChild(&TouchSensor980);

Transform& Transform981 =  Transform();
Transform981.setTranslation(new float[3]{-0.1231,-0.1148,1.1833});
Shape& Shape982 =  Shape();
Shape982.setUSE(CString("JointShape"));
Transform981.addChild(&Shape982);

HAnimSegment979.addChild(&Transform981);

HAnimSite& HAnimSite983 =  HAnimSite();
HAnimSite983.X3DNode::setName(CString("SEGMENT_FOR_r_clavicle_tip"));
HAnimSite983.setDEF(CString("hanim_SEGMENT_FOR_r_clavicle_tip"));
Transform& Transform984 =  Transform();
Transform984.setTranslation(new float[3]{-0.1231,-0.1148,1.1833});
Shape& Shape985 =  Shape();
Shape985.setUSE(CString("SiteShape"));
Transform984.addChild(&Shape985);

HAnimSite983.addChild(&Transform984);

HAnimSegment979.addChild(&HAnimSite983);

HAnimJoint978.addChildren(&HAnimSegment979);

HAnimJoint& HAnimJoint986 =  HAnimJoint();
HAnimJoint986.X3DNode::setName(CString("r_scapula"));
HAnimJoint986.setDEF(CString("hanim_r_scapula"));
HAnimJoint986.setCenter(new float[3]{-0.0387,-0.1157,1.2001});
HAnimSegment& HAnimSegment987 =  HAnimSegment();
HAnimSegment987.X3DNode::setName(CString("SEGMENT_FOR_r_scapula"));
HAnimSegment987.setDEF(CString("hanim_SEGMENT_FOR_r_scapula"));
TouchSensor& TouchSensor988 =  TouchSensor();
TouchSensor988.setDescription(CString("joint r_scapula segment SEGMENT_FOR_r_scapula"));
HAnimSegment987.addChild(&TouchSensor988);

Transform& Transform989 =  Transform();
Transform989.setTranslation(new float[3]{-0.0387,-0.1157,1.2001});
Shape& Shape990 =  Shape();
Shape990.setUSE(CString("JointShape"));
Transform989.addChild(&Shape990);

HAnimSegment987.addChild(&Transform989);

HAnimSite& HAnimSite991 =  HAnimSite();
HAnimSite991.X3DNode::setName(CString("SEGMENT_FOR_r_scapula_tip"));
HAnimSite991.setDEF(CString("hanim_SEGMENT_FOR_r_scapula_tip"));
Transform& Transform992 =  Transform();
Transform992.setTranslation(new float[3]{-0.0387,-0.1157,1.2001});
Shape& Shape993 =  Shape();
Shape993.setUSE(CString("SiteShape"));
Transform992.addChild(&Shape993);

HAnimSite991.addChild(&Transform992);

HAnimSegment987.addChild(&HAnimSite991);

HAnimJoint986.addChildren(&HAnimSegment987);

HAnimJoint& HAnimJoint994 =  HAnimJoint();
HAnimJoint994.X3DNode::setName(CString("r_upperarm"));
HAnimJoint994.setDEF(CString("hanim_r_upperarm"));
HAnimJoint994.setCenter(new float[3]{-0.1649,-0.1051,1.17});
HAnimSegment& HAnimSegment995 =  HAnimSegment();
HAnimSegment995.X3DNode::setName(CString("SEGMENT_FOR_r_upperarm"));
HAnimSegment995.setDEF(CString("hanim_SEGMENT_FOR_r_upperarm"));
TouchSensor& TouchSensor996 =  TouchSensor();
TouchSensor996.setDescription(CString("joint r_upperarm segment SEGMENT_FOR_r_upperarm"));
HAnimSegment995.addChild(&TouchSensor996);

Transform& Transform997 =  Transform();
Transform997.setTranslation(new float[3]{-0.1649,-0.1051,1.17});
Shape& Shape998 =  Shape();
Shape998.setUSE(CString("JointShape"));
Transform997.addChild(&Shape998);

HAnimSegment995.addChild(&Transform997);

HAnimSite& HAnimSite999 =  HAnimSite();
HAnimSite999.X3DNode::setName(CString("SEGMENT_FOR_r_upperarm_tip"));
HAnimSite999.setDEF(CString("hanim_SEGMENT_FOR_r_upperarm_tip"));
Transform& Transform1000 =  Transform();
Transform1000.setTranslation(new float[3]{-0.1649,-0.1051,1.17});
Shape& Shape1001 =  Shape();
Shape1001.setUSE(CString("SiteShape"));
Transform1000.addChild(&Shape1001);

HAnimSite999.addChild(&Transform1000);

HAnimSegment995.addChild(&HAnimSite999);

HAnimJoint994.addChildren(&HAnimSegment995);

HAnimJoint& HAnimJoint1002 =  HAnimJoint();
HAnimJoint1002.X3DNode::setName(CString("r_forearm"));
HAnimJoint1002.setDEF(CString("hanim_r_forearm"));
HAnimJoint1002.setCenter(new float[3]{-0.1819,-0.1075,0.9202});
HAnimSegment& HAnimSegment1003 =  HAnimSegment();
HAnimSegment1003.X3DNode::setName(CString("SEGMENT_FOR_r_forearm"));
HAnimSegment1003.setDEF(CString("hanim_SEGMENT_FOR_r_forearm"));
TouchSensor& TouchSensor1004 =  TouchSensor();
TouchSensor1004.setDescription(CString("joint r_forearm segment SEGMENT_FOR_r_forearm"));
HAnimSegment1003.addChild(&TouchSensor1004);

Transform& Transform1005 =  Transform();
Transform1005.setTranslation(new float[3]{-0.1819,-0.1075,0.9202});
Shape& Shape1006 =  Shape();
Shape1006.setUSE(CString("JointShape"));
Transform1005.addChild(&Shape1006);

HAnimSegment1003.addChild(&Transform1005);

HAnimSite& HAnimSite1007 =  HAnimSite();
HAnimSite1007.X3DNode::setName(CString("SEGMENT_FOR_r_forearm_tip"));
HAnimSite1007.setDEF(CString("hanim_SEGMENT_FOR_r_forearm_tip"));
Transform& Transform1008 =  Transform();
Transform1008.setTranslation(new float[3]{-0.1819,-0.1075,0.9202});
Shape& Shape1009 =  Shape();
Shape1009.setUSE(CString("SiteShape"));
Transform1008.addChild(&Shape1009);

HAnimSite1007.addChild(&Transform1008);

HAnimSegment1003.addChild(&HAnimSite1007);

HAnimJoint1002.addChildren(&HAnimSegment1003);

HAnimJoint& HAnimJoint1010 =  HAnimJoint();
HAnimJoint1010.X3DNode::setName(CString("r_carpal"));
HAnimJoint1010.setDEF(CString("hanim_r_carpal"));
HAnimJoint1010.setCenter(new float[3]{-0.1818,-0.1069,0.7157});
HAnimSegment& HAnimSegment1011 =  HAnimSegment();
HAnimSegment1011.X3DNode::setName(CString("SEGMENT_FOR_r_carpal"));
HAnimSegment1011.setDEF(CString("hanim_SEGMENT_FOR_r_carpal"));
TouchSensor& TouchSensor1012 =  TouchSensor();
TouchSensor1012.setDescription(CString("joint r_carpal segment SEGMENT_FOR_r_carpal"));
HAnimSegment1011.addChild(&TouchSensor1012);

Transform& Transform1013 =  Transform();
Transform1013.setTranslation(new float[3]{-0.1818,-0.1069,0.7157});
Shape& Shape1014 =  Shape();
Shape1014.setUSE(CString("JointShape"));
Transform1013.addChild(&Shape1014);

HAnimSegment1011.addChild(&Transform1013);

HAnimSite& HAnimSite1015 =  HAnimSite();
HAnimSite1015.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_tip"));
HAnimSite1015.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_tip"));
Transform& Transform1016 =  Transform();
Transform1016.setTranslation(new float[3]{-0.1818,-0.1069,0.7157});
Shape& Shape1017 =  Shape();
Shape1017.setUSE(CString("SiteShape"));
Transform1016.addChild(&Shape1017);

HAnimSite1015.addChild(&Transform1016);

HAnimSegment1011.addChild(&HAnimSite1015);

HAnimJoint1010.addChildren(&HAnimSegment1011);

HAnimJoint& HAnimJoint1018 =  HAnimJoint();
HAnimJoint1018.X3DNode::setName(CString("r_trapezium"));
HAnimJoint1018.setDEF(CString("hanim_r_trapezium"));
HAnimJoint1018.setCenter(new float[3]{-0.1811,-0.0826,0.6975});
HAnimSegment& HAnimSegment1019 =  HAnimSegment();
HAnimSegment1019.X3DNode::setName(CString("SEGMENT_FOR_r_trapezium"));
HAnimSegment1019.setDEF(CString("hanim_SEGMENT_FOR_r_trapezium"));
TouchSensor& TouchSensor1020 =  TouchSensor();
TouchSensor1020.setDescription(CString("joint r_trapezium segment SEGMENT_FOR_r_trapezium"));
HAnimSegment1019.addChild(&TouchSensor1020);

Transform& Transform1021 =  Transform();
Transform1021.setTranslation(new float[3]{-0.1811,-0.0826,0.6975});
Shape& Shape1022 =  Shape();
Shape1022.setUSE(CString("JointShape"));
Transform1021.addChild(&Shape1022);

HAnimSegment1019.addChild(&Transform1021);

HAnimSite& HAnimSite1023 =  HAnimSite();
HAnimSite1023.X3DNode::setName(CString("SEGMENT_FOR_r_trapezium_tip"));
HAnimSite1023.setDEF(CString("hanim_SEGMENT_FOR_r_trapezium_tip"));
Transform& Transform1024 =  Transform();
Transform1024.setTranslation(new float[3]{-0.1811,-0.0826,0.6975});
Shape& Shape1025 =  Shape();
Shape1025.setUSE(CString("SiteShape"));
Transform1024.addChild(&Shape1025);

HAnimSite1023.addChild(&Transform1024);

HAnimSegment1019.addChild(&HAnimSite1023);

HAnimJoint1018.addChildren(&HAnimSegment1019);

HAnimJoint& HAnimJoint1026 =  HAnimJoint();
HAnimJoint1026.X3DNode::setName(CString("r_metacarpal_1"));
HAnimJoint1026.setDEF(CString("hanim_r_metacarpal_1"));
HAnimJoint1026.setCenter(new float[3]{-0.1803,-0.0759,0.684});
HAnimSegment& HAnimSegment1027 =  HAnimSegment();
HAnimSegment1027.X3DNode::setName(CString("SEGMENT_FOR_r_metacarpal_1"));
HAnimSegment1027.setDEF(CString("hanim_SEGMENT_FOR_r_metacarpal_1"));
TouchSensor& TouchSensor1028 =  TouchSensor();
TouchSensor1028.setDescription(CString("joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1"));
HAnimSegment1027.addChild(&TouchSensor1028);

Transform& Transform1029 =  Transform();
Transform1029.setTranslation(new float[3]{-0.1803,-0.0759,0.684});
Shape& Shape1030 =  Shape();
Shape1030.setUSE(CString("JointShape"));
Transform1029.addChild(&Shape1030);

HAnimSegment1027.addChild(&Transform1029);

HAnimSite& HAnimSite1031 =  HAnimSite();
HAnimSite1031.X3DNode::setName(CString("SEGMENT_FOR_r_metacarpal_1_tip"));
HAnimSite1031.setDEF(CString("hanim_SEGMENT_FOR_r_metacarpal_1_tip"));
Transform& Transform1032 =  Transform();
Transform1032.setTranslation(new float[3]{-0.1803,-0.0759,0.684});
Shape& Shape1033 =  Shape();
Shape1033.setUSE(CString("SiteShape"));
Transform1032.addChild(&Shape1033);

HAnimSite1031.addChild(&Transform1032);

HAnimSegment1027.addChild(&HAnimSite1031);

HAnimJoint1026.addChildren(&HAnimSegment1027);

HAnimJoint& HAnimJoint1034 =  HAnimJoint();
HAnimJoint1034.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimJoint1034.setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimJoint1034.setCenter(new float[3]{-0.1808,-0.0661,0.6642});
HAnimSegment& HAnimSegment1035 =  HAnimSegment();
HAnimSegment1035.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_proximal_phalanx_1"));
HAnimSegment1035.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1"));
TouchSensor& TouchSensor1036 =  TouchSensor();
TouchSensor1036.setDescription(CString("joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1"));
HAnimSegment1035.addChild(&TouchSensor1036);

Transform& Transform1037 =  Transform();
Transform1037.setTranslation(new float[3]{-0.1808,-0.0661,0.6642});
Shape& Shape1038 =  Shape();
Shape1038.setUSE(CString("JointShape"));
Transform1037.addChild(&Shape1038);

HAnimSegment1035.addChild(&Transform1037);

HAnimSite& HAnimSite1039 =  HAnimSite();
HAnimSite1039.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip"));
HAnimSite1039.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip"));
Transform& Transform1040 =  Transform();
Transform1040.setTranslation(new float[3]{-0.1808,-0.0661,0.6642});
Shape& Shape1041 =  Shape();
Shape1041.setUSE(CString("SiteShape"));
Transform1040.addChild(&Shape1041);

HAnimSite1039.addChild(&Transform1040);

HAnimSegment1035.addChild(&HAnimSite1039);

HAnimJoint1034.addChildren(&HAnimSegment1035);

HAnimJoint& HAnimJoint1042 =  HAnimJoint();
HAnimJoint1042.X3DNode::setName(CString("r_carpal_distal_phalanx_1"));
HAnimJoint1042.setDEF(CString("hanim_r_carpal_distal_phalanx_1"));
HAnimJoint1042.setCenter(new float[3]{-0.1825,-0.0522,0.6455});
HAnimSegment& HAnimSegment1043 =  HAnimSegment();
HAnimSegment1043.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_distal_phalanx_1"));
HAnimSegment1043.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1"));
TouchSensor& TouchSensor1044 =  TouchSensor();
TouchSensor1044.setDescription(CString("joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1"));
HAnimSegment1043.addChild(&TouchSensor1044);

Transform& Transform1045 =  Transform();
Transform1045.setTranslation(new float[3]{-0.1825,-0.0522,0.6455});
Shape& Shape1046 =  Shape();
Shape1046.setUSE(CString("JointShape"));
Transform1045.addChild(&Shape1046);

HAnimSegment1043.addChild(&Transform1045);

HAnimSite& HAnimSite1047 =  HAnimSite();
HAnimSite1047.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_distal_phalanx_1_tip"));
HAnimSite1047.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip"));
Transform& Transform1048 =  Transform();
Transform1048.setTranslation(new float[3]{-0.1825,-0.0522,0.6455});
Shape& Shape1049 =  Shape();
Shape1049.setUSE(CString("SiteShape"));
Transform1048.addChild(&Shape1049);

HAnimSite1047.addChild(&Transform1048);

HAnimSegment1043.addChild(&HAnimSite1047);

HAnimJoint1042.addChildren(&HAnimSegment1043);

HAnimJoint1034.addChildren(&HAnimJoint1042);

HAnimJoint1026.addChildren(&HAnimJoint1034);

HAnimJoint1018.addChildren(&HAnimJoint1026);

HAnimJoint1010.addChildren(&HAnimJoint1018);

HAnimJoint& HAnimJoint1050 =  HAnimJoint();
HAnimJoint1050.X3DNode::setName(CString("r_trapezoid"));
HAnimJoint1050.setDEF(CString("hanim_r_trapezoid"));
HAnimJoint1050.setCenter(new float[3]{-0.1811,-0.0935,0.6984});
HAnimSegment& HAnimSegment1051 =  HAnimSegment();
HAnimSegment1051.X3DNode::setName(CString("SEGMENT_FOR_r_trapezoid"));
HAnimSegment1051.setDEF(CString("hanim_SEGMENT_FOR_r_trapezoid"));
TouchSensor& TouchSensor1052 =  TouchSensor();
TouchSensor1052.setDescription(CString("joint r_trapezoid segment SEGMENT_FOR_r_trapezoid"));
HAnimSegment1051.addChild(&TouchSensor1052);

Transform& Transform1053 =  Transform();
Transform1053.setTranslation(new float[3]{-0.1811,-0.0935,0.6984});
Shape& Shape1054 =  Shape();
Shape1054.setUSE(CString("JointShape"));
Transform1053.addChild(&Shape1054);

HAnimSegment1051.addChild(&Transform1053);

HAnimSite& HAnimSite1055 =  HAnimSite();
HAnimSite1055.X3DNode::setName(CString("SEGMENT_FOR_r_trapezoid_tip"));
HAnimSite1055.setDEF(CString("hanim_SEGMENT_FOR_r_trapezoid_tip"));
Transform& Transform1056 =  Transform();
Transform1056.setTranslation(new float[3]{-0.1811,-0.0935,0.6984});
Shape& Shape1057 =  Shape();
Shape1057.setUSE(CString("SiteShape"));
Transform1056.addChild(&Shape1057);

HAnimSite1055.addChild(&Transform1056);

HAnimSegment1051.addChild(&HAnimSite1055);

HAnimJoint1050.addChildren(&HAnimSegment1051);

HAnimJoint& HAnimJoint1058 =  HAnimJoint();
HAnimJoint1058.X3DNode::setName(CString("r_metacarpal_2"));
HAnimJoint1058.setDEF(CString("hanim_r_metacarpal_2"));
HAnimJoint1058.setCenter(new float[3]{-0.1811,-0.0922,0.679});
HAnimSegment& HAnimSegment1059 =  HAnimSegment();
HAnimSegment1059.X3DNode::setName(CString("SEGMENT_FOR_r_metacarpal_2"));
HAnimSegment1059.setDEF(CString("hanim_SEGMENT_FOR_r_metacarpal_2"));
TouchSensor& TouchSensor1060 =  TouchSensor();
TouchSensor1060.setDescription(CString("joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2"));
HAnimSegment1059.addChild(&TouchSensor1060);

Transform& Transform1061 =  Transform();
Transform1061.setTranslation(new float[3]{-0.1811,-0.0922,0.679});
Shape& Shape1062 =  Shape();
Shape1062.setUSE(CString("JointShape"));
Transform1061.addChild(&Shape1062);

HAnimSegment1059.addChild(&Transform1061);

HAnimSite& HAnimSite1063 =  HAnimSite();
HAnimSite1063.X3DNode::setName(CString("SEGMENT_FOR_r_metacarpal_2_tip"));
HAnimSite1063.setDEF(CString("hanim_SEGMENT_FOR_r_metacarpal_2_tip"));
Transform& Transform1064 =  Transform();
Transform1064.setTranslation(new float[3]{-0.1811,-0.0922,0.679});
Shape& Shape1065 =  Shape();
Shape1065.setUSE(CString("SiteShape"));
Transform1064.addChild(&Shape1065);

HAnimSite1063.addChild(&Transform1064);

HAnimSegment1059.addChild(&HAnimSite1063);

HAnimJoint1058.addChildren(&HAnimSegment1059);

HAnimJoint& HAnimJoint1066 =  HAnimJoint();
HAnimJoint1066.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimJoint1066.setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimJoint1066.setCenter(new float[3]{-0.1835,-0.0868,0.6286});
HAnimSegment& HAnimSegment1067 =  HAnimSegment();
HAnimSegment1067.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_proximal_phalanx_2"));
HAnimSegment1067.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2"));
TouchSensor& TouchSensor1068 =  TouchSensor();
TouchSensor1068.setDescription(CString("joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2"));
HAnimSegment1067.addChild(&TouchSensor1068);

Transform& Transform1069 =  Transform();
Transform1069.setTranslation(new float[3]{-0.1835,-0.0868,0.6286});
Shape& Shape1070 =  Shape();
Shape1070.setUSE(CString("JointShape"));
Transform1069.addChild(&Shape1070);

HAnimSegment1067.addChild(&Transform1069);

HAnimSite& HAnimSite1071 =  HAnimSite();
HAnimSite1071.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip"));
HAnimSite1071.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip"));
Transform& Transform1072 =  Transform();
Transform1072.setTranslation(new float[3]{-0.1835,-0.0868,0.6286});
Shape& Shape1073 =  Shape();
Shape1073.setUSE(CString("SiteShape"));
Transform1072.addChild(&Shape1073);

HAnimSite1071.addChild(&Transform1072);

HAnimSegment1067.addChild(&HAnimSite1071);

HAnimJoint1066.addChildren(&HAnimSegment1067);

HAnimJoint& HAnimJoint1074 =  HAnimJoint();
HAnimJoint1074.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimJoint1074.setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimJoint1074.setCenter(new float[3]{-0.1815,-0.0877,0.5983});
HAnimSegment& HAnimSegment1075 =  HAnimSegment();
HAnimSegment1075.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_middle_phalanx_2"));
HAnimSegment1075.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2"));
TouchSensor& TouchSensor1076 =  TouchSensor();
TouchSensor1076.setDescription(CString("joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2"));
HAnimSegment1075.addChild(&TouchSensor1076);

Transform& Transform1077 =  Transform();
Transform1077.setTranslation(new float[3]{-0.1815,-0.0877,0.5983});
Shape& Shape1078 =  Shape();
Shape1078.setUSE(CString("JointShape"));
Transform1077.addChild(&Shape1078);

HAnimSegment1075.addChild(&Transform1077);

HAnimSite& HAnimSite1079 =  HAnimSite();
HAnimSite1079.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_middle_phalanx_2_tip"));
HAnimSite1079.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip"));
Transform& Transform1080 =  Transform();
Transform1080.setTranslation(new float[3]{-0.1815,-0.0877,0.5983});
Shape& Shape1081 =  Shape();
Shape1081.setUSE(CString("SiteShape"));
Transform1080.addChild(&Shape1081);

HAnimSite1079.addChild(&Transform1080);

HAnimSegment1075.addChild(&HAnimSite1079);

HAnimJoint1074.addChildren(&HAnimSegment1075);

HAnimJoint& HAnimJoint1082 =  HAnimJoint();
HAnimJoint1082.X3DNode::setName(CString("r_carpal_distal_phalanx_2"));
HAnimJoint1082.setDEF(CString("hanim_r_carpal_distal_phalanx_2"));
HAnimJoint1082.setCenter(new float[3]{-0.1805,-0.0885,0.5731});
HAnimSegment& HAnimSegment1083 =  HAnimSegment();
HAnimSegment1083.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_distal_phalanx_2"));
HAnimSegment1083.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2"));
TouchSensor& TouchSensor1084 =  TouchSensor();
TouchSensor1084.setDescription(CString("joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2"));
HAnimSegment1083.addChild(&TouchSensor1084);

Transform& Transform1085 =  Transform();
Transform1085.setTranslation(new float[3]{-0.1805,-0.0885,0.5731});
Shape& Shape1086 =  Shape();
Shape1086.setUSE(CString("JointShape"));
Transform1085.addChild(&Shape1086);

HAnimSegment1083.addChild(&Transform1085);

HAnimSite& HAnimSite1087 =  HAnimSite();
HAnimSite1087.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_distal_phalanx_2_tip"));
HAnimSite1087.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip"));
Transform& Transform1088 =  Transform();
Transform1088.setTranslation(new float[3]{-0.1805,-0.0885,0.5731});
Shape& Shape1089 =  Shape();
Shape1089.setUSE(CString("SiteShape"));
Transform1088.addChild(&Shape1089);

HAnimSite1087.addChild(&Transform1088);

HAnimSegment1083.addChild(&HAnimSite1087);

HAnimJoint1082.addChildren(&HAnimSegment1083);

HAnimJoint1074.addChildren(&HAnimJoint1082);

HAnimJoint1066.addChildren(&HAnimJoint1074);

HAnimJoint1058.addChildren(&HAnimJoint1066);

HAnimJoint1050.addChildren(&HAnimJoint1058);

HAnimJoint1010.addChildren(&HAnimJoint1050);

HAnimJoint& HAnimJoint1090 =  HAnimJoint();
HAnimJoint1090.X3DNode::setName(CString("r_capitate"));
HAnimJoint1090.setDEF(CString("hanim_r_capitate"));
HAnimJoint1090.setCenter(new float[3]{-0.1809,-0.1067,0.7});
HAnimSegment& HAnimSegment1091 =  HAnimSegment();
HAnimSegment1091.X3DNode::setName(CString("SEGMENT_FOR_r_capitate"));
HAnimSegment1091.setDEF(CString("hanim_SEGMENT_FOR_r_capitate"));
TouchSensor& TouchSensor1092 =  TouchSensor();
TouchSensor1092.setDescription(CString("joint r_capitate segment SEGMENT_FOR_r_capitate"));
HAnimSegment1091.addChild(&TouchSensor1092);

Transform& Transform1093 =  Transform();
Transform1093.setTranslation(new float[3]{-0.1809,-0.1067,0.7});
Shape& Shape1094 =  Shape();
Shape1094.setUSE(CString("JointShape"));
Transform1093.addChild(&Shape1094);

HAnimSegment1091.addChild(&Transform1093);

HAnimSite& HAnimSite1095 =  HAnimSite();
HAnimSite1095.X3DNode::setName(CString("SEGMENT_FOR_r_capitate_tip"));
HAnimSite1095.setDEF(CString("hanim_SEGMENT_FOR_r_capitate_tip"));
Transform& Transform1096 =  Transform();
Transform1096.setTranslation(new float[3]{-0.1809,-0.1067,0.7});
Shape& Shape1097 =  Shape();
Shape1097.setUSE(CString("SiteShape"));
Transform1096.addChild(&Shape1097);

HAnimSite1095.addChild(&Transform1096);

HAnimSegment1091.addChild(&HAnimSite1095);

HAnimJoint1090.addChildren(&HAnimSegment1091);

HAnimJoint& HAnimJoint1098 =  HAnimJoint();
HAnimJoint1098.X3DNode::setName(CString("r_metacarpal_3"));
HAnimJoint1098.setDEF(CString("hanim_r_metacarpal_3"));
HAnimJoint1098.setCenter(new float[3]{-0.1809,-0.1081,0.6772});
HAnimSegment& HAnimSegment1099 =  HAnimSegment();
HAnimSegment1099.X3DNode::setName(CString("SEGMENT_FOR_r_metacarpal_3"));
HAnimSegment1099.setDEF(CString("hanim_SEGMENT_FOR_r_metacarpal_3"));
TouchSensor& TouchSensor1100 =  TouchSensor();
TouchSensor1100.setDescription(CString("joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3"));
HAnimSegment1099.addChild(&TouchSensor1100);

Transform& Transform1101 =  Transform();
Transform1101.setTranslation(new float[3]{-0.1809,-0.1081,0.6772});
Shape& Shape1102 =  Shape();
Shape1102.setUSE(CString("JointShape"));
Transform1101.addChild(&Shape1102);

HAnimSegment1099.addChild(&Transform1101);

HAnimSite& HAnimSite1103 =  HAnimSite();
HAnimSite1103.X3DNode::setName(CString("SEGMENT_FOR_r_metacarpal_3_tip"));
HAnimSite1103.setDEF(CString("hanim_SEGMENT_FOR_r_metacarpal_3_tip"));
Transform& Transform1104 =  Transform();
Transform1104.setTranslation(new float[3]{-0.1809,-0.1081,0.6772});
Shape& Shape1105 =  Shape();
Shape1105.setUSE(CString("SiteShape"));
Transform1104.addChild(&Shape1105);

HAnimSite1103.addChild(&Transform1104);

HAnimSegment1099.addChild(&HAnimSite1103);

HAnimJoint1098.addChildren(&HAnimSegment1099);

HAnimJoint& HAnimJoint1106 =  HAnimJoint();
HAnimJoint1106.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimJoint1106.setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimJoint1106.setCenter(new float[3]{-0.1835,-0.1058,0.6264});
HAnimSegment& HAnimSegment1107 =  HAnimSegment();
HAnimSegment1107.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_proximal_phalanx_3"));
HAnimSegment1107.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3"));
TouchSensor& TouchSensor1108 =  TouchSensor();
TouchSensor1108.setDescription(CString("joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3"));
HAnimSegment1107.addChild(&TouchSensor1108);

Transform& Transform1109 =  Transform();
Transform1109.setTranslation(new float[3]{-0.1835,-0.1058,0.6264});
Shape& Shape1110 =  Shape();
Shape1110.setUSE(CString("JointShape"));
Transform1109.addChild(&Shape1110);

HAnimSegment1107.addChild(&Transform1109);

HAnimSite& HAnimSite1111 =  HAnimSite();
HAnimSite1111.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip"));
HAnimSite1111.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip"));
Transform& Transform1112 =  Transform();
Transform1112.setTranslation(new float[3]{-0.1835,-0.1058,0.6264});
Shape& Shape1113 =  Shape();
Shape1113.setUSE(CString("SiteShape"));
Transform1112.addChild(&Shape1113);

HAnimSite1111.addChild(&Transform1112);

HAnimSegment1107.addChild(&HAnimSite1111);

HAnimJoint1106.addChildren(&HAnimSegment1107);

HAnimJoint& HAnimJoint1114 =  HAnimJoint();
HAnimJoint1114.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimJoint1114.setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimJoint1114.setCenter(new float[3]{-0.1815,-0.1054,0.5947});
HAnimSegment& HAnimSegment1115 =  HAnimSegment();
HAnimSegment1115.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_middle_phalanx_3"));
HAnimSegment1115.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3"));
TouchSensor& TouchSensor1116 =  TouchSensor();
TouchSensor1116.setDescription(CString("joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3"));
HAnimSegment1115.addChild(&TouchSensor1116);

Transform& Transform1117 =  Transform();
Transform1117.setTranslation(new float[3]{-0.1815,-0.1054,0.5947});
Shape& Shape1118 =  Shape();
Shape1118.setUSE(CString("JointShape"));
Transform1117.addChild(&Shape1118);

HAnimSegment1115.addChild(&Transform1117);

HAnimSite& HAnimSite1119 =  HAnimSite();
HAnimSite1119.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_middle_phalanx_3_tip"));
HAnimSite1119.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip"));
Transform& Transform1120 =  Transform();
Transform1120.setTranslation(new float[3]{-0.1815,-0.1054,0.5947});
Shape& Shape1121 =  Shape();
Shape1121.setUSE(CString("SiteShape"));
Transform1120.addChild(&Shape1121);

HAnimSite1119.addChild(&Transform1120);

HAnimSegment1115.addChild(&HAnimSite1119);

HAnimJoint1114.addChildren(&HAnimSegment1115);

HAnimJoint& HAnimJoint1122 =  HAnimJoint();
HAnimJoint1122.X3DNode::setName(CString("r_carpal_distal_phalanx_3"));
HAnimJoint1122.setDEF(CString("hanim_r_carpal_distal_phalanx_3"));
HAnimJoint1122.setCenter(new float[3]{-0.1805,-0.1056,0.5668});
HAnimSegment& HAnimSegment1123 =  HAnimSegment();
HAnimSegment1123.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_distal_phalanx_3"));
HAnimSegment1123.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3"));
TouchSensor& TouchSensor1124 =  TouchSensor();
TouchSensor1124.setDescription(CString("joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3"));
HAnimSegment1123.addChild(&TouchSensor1124);

Transform& Transform1125 =  Transform();
Transform1125.setTranslation(new float[3]{-0.1805,-0.1056,0.5668});
Shape& Shape1126 =  Shape();
Shape1126.setUSE(CString("JointShape"));
Transform1125.addChild(&Shape1126);

HAnimSegment1123.addChild(&Transform1125);

HAnimSite& HAnimSite1127 =  HAnimSite();
HAnimSite1127.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_distal_phalanx_3_tip"));
HAnimSite1127.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip"));
Transform& Transform1128 =  Transform();
Transform1128.setTranslation(new float[3]{-0.1805,-0.1056,0.5668});
Shape& Shape1129 =  Shape();
Shape1129.setUSE(CString("SiteShape"));
Transform1128.addChild(&Shape1129);

HAnimSite1127.addChild(&Transform1128);

HAnimSegment1123.addChild(&HAnimSite1127);

HAnimJoint1122.addChildren(&HAnimSegment1123);

HAnimJoint1114.addChildren(&HAnimJoint1122);

HAnimJoint1106.addChildren(&HAnimJoint1114);

HAnimJoint1098.addChildren(&HAnimJoint1106);

HAnimJoint1090.addChildren(&HAnimJoint1098);

HAnimJoint1010.addChildren(&HAnimJoint1090);

HAnimJoint& HAnimJoint1130 =  HAnimJoint();
HAnimJoint1130.X3DNode::setName(CString("r_hamate"));
HAnimJoint1130.setDEF(CString("hanim_r_hamate"));
HAnimJoint1130.setCenter(new float[3]{-0.1809,-0.1276,0.6973});
HAnimSegment& HAnimSegment1131 =  HAnimSegment();
HAnimSegment1131.X3DNode::setName(CString("SEGMENT_FOR_r_hamate"));
HAnimSegment1131.setDEF(CString("hanim_SEGMENT_FOR_r_hamate"));
TouchSensor& TouchSensor1132 =  TouchSensor();
TouchSensor1132.setDescription(CString("joint r_hamate segment SEGMENT_FOR_r_hamate"));
HAnimSegment1131.addChild(&TouchSensor1132);

Transform& Transform1133 =  Transform();
Transform1133.setTranslation(new float[3]{-0.1809,-0.1276,0.6973});
Shape& Shape1134 =  Shape();
Shape1134.setUSE(CString("JointShape"));
Transform1133.addChild(&Shape1134);

HAnimSegment1131.addChild(&Transform1133);

HAnimSite& HAnimSite1135 =  HAnimSite();
HAnimSite1135.X3DNode::setName(CString("SEGMENT_FOR_r_hamate_tip"));
HAnimSite1135.setDEF(CString("hanim_SEGMENT_FOR_r_hamate_tip"));
Transform& Transform1136 =  Transform();
Transform1136.setTranslation(new float[3]{-0.1809,-0.1276,0.6973});
Shape& Shape1137 =  Shape();
Shape1137.setUSE(CString("SiteShape"));
Transform1136.addChild(&Shape1137);

HAnimSite1135.addChild(&Transform1136);

HAnimSegment1131.addChild(&HAnimSite1135);

HAnimJoint1130.addChildren(&HAnimSegment1131);

HAnimJoint& HAnimJoint1138 =  HAnimJoint();
HAnimJoint1138.X3DNode::setName(CString("r_metacarpal_4"));
HAnimJoint1138.setDEF(CString("hanim_r_metacarpal_4"));
HAnimJoint1138.setCenter(new float[3]{-0.1809,-0.1218,0.6777});
HAnimSegment& HAnimSegment1139 =  HAnimSegment();
HAnimSegment1139.X3DNode::setName(CString("SEGMENT_FOR_r_metacarpal_4"));
HAnimSegment1139.setDEF(CString("hanim_SEGMENT_FOR_r_metacarpal_4"));
TouchSensor& TouchSensor1140 =  TouchSensor();
TouchSensor1140.setDescription(CString("joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4"));
HAnimSegment1139.addChild(&TouchSensor1140);

Transform& Transform1141 =  Transform();
Transform1141.setTranslation(new float[3]{-0.1809,-0.1218,0.6777});
Shape& Shape1142 =  Shape();
Shape1142.setUSE(CString("JointShape"));
Transform1141.addChild(&Shape1142);

HAnimSegment1139.addChild(&Transform1141);

HAnimSite& HAnimSite1143 =  HAnimSite();
HAnimSite1143.X3DNode::setName(CString("SEGMENT_FOR_r_metacarpal_4_tip"));
HAnimSite1143.setDEF(CString("hanim_SEGMENT_FOR_r_metacarpal_4_tip"));
Transform& Transform1144 =  Transform();
Transform1144.setTranslation(new float[3]{-0.1809,-0.1218,0.6777});
Shape& Shape1145 =  Shape();
Shape1145.setUSE(CString("SiteShape"));
Transform1144.addChild(&Shape1145);

HAnimSite1143.addChild(&Transform1144);

HAnimSegment1139.addChild(&HAnimSite1143);

HAnimJoint1138.addChildren(&HAnimSegment1139);

HAnimJoint& HAnimJoint1146 =  HAnimJoint();
HAnimJoint1146.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimJoint1146.setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimJoint1146.setCenter(new float[3]{-0.1835,-0.1233,0.6255});
HAnimSegment& HAnimSegment1147 =  HAnimSegment();
HAnimSegment1147.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_proximal_phalanx_4"));
HAnimSegment1147.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4"));
TouchSensor& TouchSensor1148 =  TouchSensor();
TouchSensor1148.setDescription(CString("joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4"));
HAnimSegment1147.addChild(&TouchSensor1148);

Transform& Transform1149 =  Transform();
Transform1149.setTranslation(new float[3]{-0.1835,-0.1233,0.6255});
Shape& Shape1150 =  Shape();
Shape1150.setUSE(CString("JointShape"));
Transform1149.addChild(&Shape1150);

HAnimSegment1147.addChild(&Transform1149);

HAnimSite& HAnimSite1151 =  HAnimSite();
HAnimSite1151.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip"));
HAnimSite1151.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip"));
Transform& Transform1152 =  Transform();
Transform1152.setTranslation(new float[3]{-0.1835,-0.1233,0.6255});
Shape& Shape1153 =  Shape();
Shape1153.setUSE(CString("SiteShape"));
Transform1152.addChild(&Shape1153);

HAnimSite1151.addChild(&Transform1152);

HAnimSegment1147.addChild(&HAnimSite1151);

HAnimJoint1146.addChildren(&HAnimSegment1147);

HAnimJoint& HAnimJoint1154 =  HAnimJoint();
HAnimJoint1154.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimJoint1154.setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimJoint1154.setCenter(new float[3]{-0.1815,-0.1225,0.598});
HAnimSegment& HAnimSegment1155 =  HAnimSegment();
HAnimSegment1155.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_middle_phalanx_4"));
HAnimSegment1155.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4"));
TouchSensor& TouchSensor1156 =  TouchSensor();
TouchSensor1156.setDescription(CString("joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4"));
HAnimSegment1155.addChild(&TouchSensor1156);

Transform& Transform1157 =  Transform();
Transform1157.setTranslation(new float[3]{-0.1815,-0.1225,0.598});
Shape& Shape1158 =  Shape();
Shape1158.setUSE(CString("JointShape"));
Transform1157.addChild(&Shape1158);

HAnimSegment1155.addChild(&Transform1157);

HAnimSite& HAnimSite1159 =  HAnimSite();
HAnimSite1159.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_middle_phalanx_4_tip"));
HAnimSite1159.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip"));
Transform& Transform1160 =  Transform();
Transform1160.setTranslation(new float[3]{-0.1815,-0.1225,0.598});
Shape& Shape1161 =  Shape();
Shape1161.setUSE(CString("SiteShape"));
Transform1160.addChild(&Shape1161);

HAnimSite1159.addChild(&Transform1160);

HAnimSegment1155.addChild(&HAnimSite1159);

HAnimJoint1154.addChildren(&HAnimSegment1155);

HAnimJoint& HAnimJoint1162 =  HAnimJoint();
HAnimJoint1162.X3DNode::setName(CString("r_carpal_distal_phalanx_4"));
HAnimJoint1162.setDEF(CString("hanim_r_carpal_distal_phalanx_4"));
HAnimJoint1162.setCenter(new float[3]{-0.1805,-0.1217,0.5722});
HAnimSegment& HAnimSegment1163 =  HAnimSegment();
HAnimSegment1163.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_distal_phalanx_4"));
HAnimSegment1163.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4"));
TouchSensor& TouchSensor1164 =  TouchSensor();
TouchSensor1164.setDescription(CString("joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4"));
HAnimSegment1163.addChild(&TouchSensor1164);

Transform& Transform1165 =  Transform();
Transform1165.setTranslation(new float[3]{-0.1805,-0.1217,0.5722});
Shape& Shape1166 =  Shape();
Shape1166.setUSE(CString("JointShape"));
Transform1165.addChild(&Shape1166);

HAnimSegment1163.addChild(&Transform1165);

HAnimSite& HAnimSite1167 =  HAnimSite();
HAnimSite1167.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_distal_phalanx_4_tip"));
HAnimSite1167.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip"));
Transform& Transform1168 =  Transform();
Transform1168.setTranslation(new float[3]{-0.1805,-0.1217,0.5722});
Shape& Shape1169 =  Shape();
Shape1169.setUSE(CString("SiteShape"));
Transform1168.addChild(&Shape1169);

HAnimSite1167.addChild(&Transform1168);

HAnimSegment1163.addChild(&HAnimSite1167);

HAnimJoint1162.addChildren(&HAnimSegment1163);

HAnimJoint1154.addChildren(&HAnimJoint1162);

HAnimJoint1146.addChildren(&HAnimJoint1154);

HAnimJoint1138.addChildren(&HAnimJoint1146);

HAnimJoint1130.addChildren(&HAnimJoint1138);

HAnimJoint& HAnimJoint1170 =  HAnimJoint();
HAnimJoint1170.X3DNode::setName(CString("r_metacarpal_5"));
HAnimJoint1170.setDEF(CString("hanim_r_metacarpal_5"));
HAnimJoint1170.setCenter(new float[3]{-0.1814,-0.1347,0.6797});
HAnimSegment& HAnimSegment1171 =  HAnimSegment();
HAnimSegment1171.X3DNode::setName(CString("SEGMENT_FOR_r_metacarpal_5"));
HAnimSegment1171.setDEF(CString("hanim_SEGMENT_FOR_r_metacarpal_5"));
TouchSensor& TouchSensor1172 =  TouchSensor();
TouchSensor1172.setDescription(CString("joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5"));
HAnimSegment1171.addChild(&TouchSensor1172);

Transform& Transform1173 =  Transform();
Transform1173.setTranslation(new float[3]{-0.1814,-0.1347,0.6797});
Shape& Shape1174 =  Shape();
Shape1174.setUSE(CString("JointShape"));
Transform1173.addChild(&Shape1174);

HAnimSegment1171.addChild(&Transform1173);

HAnimSite& HAnimSite1175 =  HAnimSite();
HAnimSite1175.X3DNode::setName(CString("SEGMENT_FOR_r_metacarpal_5_tip"));
HAnimSite1175.setDEF(CString("hanim_SEGMENT_FOR_r_metacarpal_5_tip"));
Transform& Transform1176 =  Transform();
Transform1176.setTranslation(new float[3]{-0.1814,-0.1347,0.6797});
Shape& Shape1177 =  Shape();
Shape1177.setUSE(CString("SiteShape"));
Transform1176.addChild(&Shape1177);

HAnimSite1175.addChild(&Transform1176);

HAnimSegment1171.addChild(&HAnimSite1175);

HAnimJoint1170.addChildren(&HAnimSegment1171);

HAnimJoint& HAnimJoint1178 =  HAnimJoint();
HAnimJoint1178.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimJoint1178.setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimJoint1178.setCenter(new float[3]{-0.1832,-0.1389,0.6295});
HAnimSegment& HAnimSegment1179 =  HAnimSegment();
HAnimSegment1179.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_proximal_phalanx_5"));
HAnimSegment1179.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5"));
TouchSensor& TouchSensor1180 =  TouchSensor();
TouchSensor1180.setDescription(CString("joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5"));
HAnimSegment1179.addChild(&TouchSensor1180);

Transform& Transform1181 =  Transform();
Transform1181.setTranslation(new float[3]{-0.1832,-0.1389,0.6295});
Shape& Shape1182 =  Shape();
Shape1182.setUSE(CString("JointShape"));
Transform1181.addChild(&Shape1182);

HAnimSegment1179.addChild(&Transform1181);

HAnimSite& HAnimSite1183 =  HAnimSite();
HAnimSite1183.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip"));
HAnimSite1183.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip"));
Transform& Transform1184 =  Transform();
Transform1184.setTranslation(new float[3]{-0.1832,-0.1389,0.6295});
Shape& Shape1185 =  Shape();
Shape1185.setUSE(CString("SiteShape"));
Transform1184.addChild(&Shape1185);

HAnimSite1183.addChild(&Transform1184);

HAnimSegment1179.addChild(&HAnimSite1183);

HAnimJoint1178.addChildren(&HAnimSegment1179);

HAnimJoint& HAnimJoint1186 =  HAnimJoint();
HAnimJoint1186.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimJoint1186.setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimJoint1186.setCenter(new float[3]{-0.1815,-0.139,0.6124});
HAnimSegment& HAnimSegment1187 =  HAnimSegment();
HAnimSegment1187.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_middle_phalanx_5"));
HAnimSegment1187.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5"));
TouchSensor& TouchSensor1188 =  TouchSensor();
TouchSensor1188.setDescription(CString("joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5"));
HAnimSegment1187.addChild(&TouchSensor1188);

Transform& Transform1189 =  Transform();
Transform1189.setTranslation(new float[3]{-0.1815,-0.139,0.6124});
Shape& Shape1190 =  Shape();
Shape1190.setUSE(CString("JointShape"));
Transform1189.addChild(&Shape1190);

HAnimSegment1187.addChild(&Transform1189);

HAnimSite& HAnimSite1191 =  HAnimSite();
HAnimSite1191.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_middle_phalanx_5_tip"));
HAnimSite1191.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip"));
Transform& Transform1192 =  Transform();
Transform1192.setTranslation(new float[3]{-0.1815,-0.139,0.6124});
Shape& Shape1193 =  Shape();
Shape1193.setUSE(CString("SiteShape"));
Transform1192.addChild(&Shape1193);

HAnimSite1191.addChild(&Transform1192);

HAnimSegment1187.addChild(&HAnimSite1191);

HAnimJoint1186.addChildren(&HAnimSegment1187);

HAnimJoint& HAnimJoint1194 =  HAnimJoint();
HAnimJoint1194.X3DNode::setName(CString("r_carpal_distal_phalanx_5"));
HAnimJoint1194.setDEF(CString("hanim_r_carpal_distal_phalanx_5"));
HAnimJoint1194.setCenter(new float[3]{-0.1806,-0.1388,0.5938});
HAnimSegment& HAnimSegment1195 =  HAnimSegment();
HAnimSegment1195.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_distal_phalanx_5"));
HAnimSegment1195.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5"));
TouchSensor& TouchSensor1196 =  TouchSensor();
TouchSensor1196.setDescription(CString("joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5"));
HAnimSegment1195.addChild(&TouchSensor1196);

Transform& Transform1197 =  Transform();
Transform1197.setTranslation(new float[3]{-0.1806,-0.1388,0.5938});
Shape& Shape1198 =  Shape();
Shape1198.setUSE(CString("JointShape"));
Transform1197.addChild(&Shape1198);

HAnimSegment1195.addChild(&Transform1197);

HAnimSite& HAnimSite1199 =  HAnimSite();
HAnimSite1199.X3DNode::setName(CString("SEGMENT_FOR_r_carpal_distal_phalanx_5_tip"));
HAnimSite1199.setDEF(CString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip"));
Transform& Transform1200 =  Transform();
Transform1200.setTranslation(new float[3]{-0.1806,-0.1388,0.5938});
Shape& Shape1201 =  Shape();
Shape1201.setUSE(CString("SiteShape"));
Transform1200.addChild(&Shape1201);

HAnimSite1199.addChild(&Transform1200);

HAnimSegment1195.addChild(&HAnimSite1199);

HAnimJoint1194.addChildren(&HAnimSegment1195);

HAnimJoint1186.addChildren(&HAnimJoint1194);

HAnimJoint1178.addChildren(&HAnimJoint1186);

HAnimJoint1170.addChildren(&HAnimJoint1178);

HAnimJoint1130.addChildren(&HAnimJoint1170);

HAnimJoint1010.addChildren(&HAnimJoint1130);

HAnimJoint1002.addChildren(&HAnimJoint1010);

HAnimJoint994.addChildren(&HAnimJoint1002);

HAnimJoint986.addChildren(&HAnimJoint994);

HAnimJoint978.addChildren(&HAnimJoint986);

HAnimJoint626.addChildren(&HAnimJoint978);

HAnimJoint618.addChildren(&HAnimJoint626);

HAnimJoint610.addChildren(&HAnimJoint618);

HAnimJoint602.addChildren(&HAnimJoint610);

HAnimJoint594.addChildren(&HAnimJoint602);

HAnimJoint586.addChildren(&HAnimJoint594);

HAnimJoint578.addChildren(&HAnimJoint586);

HAnimJoint570.addChildren(&HAnimJoint578);

HAnimJoint562.addChildren(&HAnimJoint570);

HAnimJoint554.addChildren(&HAnimJoint562);

HAnimJoint546.addChildren(&HAnimJoint554);

HAnimJoint538.addChildren(&HAnimJoint546);

HAnimJoint530.addChildren(&HAnimJoint538);

HAnimJoint522.addChildren(&HAnimJoint530);

HAnimJoint514.addChildren(&HAnimJoint522);

HAnimJoint506.addChildren(&HAnimJoint514);

HAnimJoint498.addChildren(&HAnimJoint506);

HAnimJoint34.addChildren(&HAnimJoint498);

HAnimJoint26.addChildren(&HAnimJoint34);

HAnimHumanoid25.setSkeleton(&HAnimJoint26);

HAnimJoint& HAnimJoint1202 =  HAnimJoint();
HAnimJoint1202.setUSE(CString("hanim_sacrum"));
HAnimHumanoid25.setJoints(&HAnimJoint1202);

HAnimJoint& HAnimJoint1203 =  HAnimJoint();
HAnimJoint1203.setUSE(CString("hanim_pelvis"));
HAnimHumanoid25.setJoints(&HAnimJoint1203);

HAnimJoint& HAnimJoint1204 =  HAnimJoint();
HAnimJoint1204.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid25.setJoints(&HAnimJoint1204);

HAnimJoint& HAnimJoint1205 =  HAnimJoint();
HAnimJoint1205.setUSE(CString("hanim_l_calf"));
HAnimHumanoid25.setJoints(&HAnimJoint1205);

HAnimJoint& HAnimJoint1206 =  HAnimJoint();
HAnimJoint1206.setUSE(CString("hanim_l_talus"));
HAnimHumanoid25.setJoints(&HAnimJoint1206);

HAnimJoint& HAnimJoint1207 =  HAnimJoint();
HAnimJoint1207.setUSE(CString("hanim_l_navicular"));
HAnimHumanoid25.setJoints(&HAnimJoint1207);

HAnimJoint& HAnimJoint1208 =  HAnimJoint();
HAnimJoint1208.setUSE(CString("hanim_l_cuneiform_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1208);

HAnimJoint& HAnimJoint1209 =  HAnimJoint();
HAnimJoint1209.setUSE(CString("hanim_l_metatarsal_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1209);

HAnimJoint& HAnimJoint1210 =  HAnimJoint();
HAnimJoint1210.setUSE(CString("hanim_l_tarsal_proximal_phalanx_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1210);

HAnimJoint& HAnimJoint1211 =  HAnimJoint();
HAnimJoint1211.setUSE(CString("hanim_l_tarsal_distal_phalanx_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1211);

HAnimJoint& HAnimJoint1212 =  HAnimJoint();
HAnimJoint1212.setUSE(CString("hanim_l_cuneiform_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1212);

HAnimJoint& HAnimJoint1213 =  HAnimJoint();
HAnimJoint1213.setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1213);

HAnimJoint& HAnimJoint1214 =  HAnimJoint();
HAnimJoint1214.setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1214);

HAnimJoint& HAnimJoint1215 =  HAnimJoint();
HAnimJoint1215.setUSE(CString("hanim_l_tarsal_middle_phalanx_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1215);

HAnimJoint& HAnimJoint1216 =  HAnimJoint();
HAnimJoint1216.setUSE(CString("hanim_l_tarsal_distal_phalanx_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1216);

HAnimJoint& HAnimJoint1217 =  HAnimJoint();
HAnimJoint1217.setUSE(CString("hanim_l_cuneiform_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1217);

HAnimJoint& HAnimJoint1218 =  HAnimJoint();
HAnimJoint1218.setUSE(CString("hanim_l_metatarsal_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1218);

HAnimJoint& HAnimJoint1219 =  HAnimJoint();
HAnimJoint1219.setUSE(CString("hanim_l_tarsal_proximal_phalanx_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1219);

HAnimJoint& HAnimJoint1220 =  HAnimJoint();
HAnimJoint1220.setUSE(CString("hanim_l_tarsal_middle_phalanx_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1220);

HAnimJoint& HAnimJoint1221 =  HAnimJoint();
HAnimJoint1221.setUSE(CString("hanim_l_tarsal_distal_phalanx_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1221);

HAnimJoint& HAnimJoint1222 =  HAnimJoint();
HAnimJoint1222.setUSE(CString("hanim_l_calcaneus"));
HAnimHumanoid25.setJoints(&HAnimJoint1222);

HAnimJoint& HAnimJoint1223 =  HAnimJoint();
HAnimJoint1223.setUSE(CString("hanim_l_cuboid"));
HAnimHumanoid25.setJoints(&HAnimJoint1223);

HAnimJoint& HAnimJoint1224 =  HAnimJoint();
HAnimJoint1224.setUSE(CString("hanim_l_metatarsal_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1224);

HAnimJoint& HAnimJoint1225 =  HAnimJoint();
HAnimJoint1225.setUSE(CString("hanim_l_tarsal_proximal_phalanx_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1225);

HAnimJoint& HAnimJoint1226 =  HAnimJoint();
HAnimJoint1226.setUSE(CString("hanim_l_tarsal_middle_phalanx_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1226);

HAnimJoint& HAnimJoint1227 =  HAnimJoint();
HAnimJoint1227.setUSE(CString("hanim_l_tarsal_distal_phalanx_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1227);

HAnimJoint& HAnimJoint1228 =  HAnimJoint();
HAnimJoint1228.setUSE(CString("hanim_l_metatarsal_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1228);

HAnimJoint& HAnimJoint1229 =  HAnimJoint();
HAnimJoint1229.setUSE(CString("hanim_l_tarsal_proximal_phalanx_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1229);

HAnimJoint& HAnimJoint1230 =  HAnimJoint();
HAnimJoint1230.setUSE(CString("hanim_l_tarsal_middle_phalanx_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1230);

HAnimJoint& HAnimJoint1231 =  HAnimJoint();
HAnimJoint1231.setUSE(CString("hanim_l_tarsal_distal_phalanx_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1231);

HAnimJoint& HAnimJoint1232 =  HAnimJoint();
HAnimJoint1232.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid25.setJoints(&HAnimJoint1232);

HAnimJoint& HAnimJoint1233 =  HAnimJoint();
HAnimJoint1233.setUSE(CString("hanim_r_calf"));
HAnimHumanoid25.setJoints(&HAnimJoint1233);

HAnimJoint& HAnimJoint1234 =  HAnimJoint();
HAnimJoint1234.setUSE(CString("hanim_r_talus"));
HAnimHumanoid25.setJoints(&HAnimJoint1234);

HAnimJoint& HAnimJoint1235 =  HAnimJoint();
HAnimJoint1235.setUSE(CString("hanim_r_navicular"));
HAnimHumanoid25.setJoints(&HAnimJoint1235);

HAnimJoint& HAnimJoint1236 =  HAnimJoint();
HAnimJoint1236.setUSE(CString("hanim_r_cuneiform_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1236);

HAnimJoint& HAnimJoint1237 =  HAnimJoint();
HAnimJoint1237.setUSE(CString("hanim_r_metatarsal_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1237);

HAnimJoint& HAnimJoint1238 =  HAnimJoint();
HAnimJoint1238.setUSE(CString("hanim_r_tarsal_proximal_phalanx_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1238);

HAnimJoint& HAnimJoint1239 =  HAnimJoint();
HAnimJoint1239.setUSE(CString("hanim_r_tarsal_distal_phalanx_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1239);

HAnimJoint& HAnimJoint1240 =  HAnimJoint();
HAnimJoint1240.setUSE(CString("hanim_r_cuneiform_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1240);

HAnimJoint& HAnimJoint1241 =  HAnimJoint();
HAnimJoint1241.setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1241);

HAnimJoint& HAnimJoint1242 =  HAnimJoint();
HAnimJoint1242.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1242);

HAnimJoint& HAnimJoint1243 =  HAnimJoint();
HAnimJoint1243.setUSE(CString("hanim_r_tarsal_middle_phalanx_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1243);

HAnimJoint& HAnimJoint1244 =  HAnimJoint();
HAnimJoint1244.setUSE(CString("hanim_r_tarsal_distal_phalanx_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1244);

HAnimJoint& HAnimJoint1245 =  HAnimJoint();
HAnimJoint1245.setUSE(CString("hanim_r_cuneiform_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1245);

HAnimJoint& HAnimJoint1246 =  HAnimJoint();
HAnimJoint1246.setUSE(CString("hanim_r_metatarsal_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1246);

HAnimJoint& HAnimJoint1247 =  HAnimJoint();
HAnimJoint1247.setUSE(CString("hanim_r_tarsal_proximal_phalanx_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1247);

HAnimJoint& HAnimJoint1248 =  HAnimJoint();
HAnimJoint1248.setUSE(CString("hanim_r_tarsal_middle_phalanx_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1248);

HAnimJoint& HAnimJoint1249 =  HAnimJoint();
HAnimJoint1249.setUSE(CString("hanim_r_tarsal_distal_phalanx_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1249);

HAnimJoint& HAnimJoint1250 =  HAnimJoint();
HAnimJoint1250.setUSE(CString("hanim_r_calcaneus"));
HAnimHumanoid25.setJoints(&HAnimJoint1250);

HAnimJoint& HAnimJoint1251 =  HAnimJoint();
HAnimJoint1251.setUSE(CString("hanim_r_cuboid"));
HAnimHumanoid25.setJoints(&HAnimJoint1251);

HAnimJoint& HAnimJoint1252 =  HAnimJoint();
HAnimJoint1252.setUSE(CString("hanim_r_metatarsal_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1252);

HAnimJoint& HAnimJoint1253 =  HAnimJoint();
HAnimJoint1253.setUSE(CString("hanim_r_tarsal_proximal_phalanx_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1253);

HAnimJoint& HAnimJoint1254 =  HAnimJoint();
HAnimJoint1254.setUSE(CString("hanim_r_tarsal_middle_phalanx_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1254);

HAnimJoint& HAnimJoint1255 =  HAnimJoint();
HAnimJoint1255.setUSE(CString("hanim_r_tarsal_distal_phalanx_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1255);

HAnimJoint& HAnimJoint1256 =  HAnimJoint();
HAnimJoint1256.setUSE(CString("hanim_r_metatarsal_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1256);

HAnimJoint& HAnimJoint1257 =  HAnimJoint();
HAnimJoint1257.setUSE(CString("hanim_r_tarsal_proximal_phalanx_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1257);

HAnimJoint& HAnimJoint1258 =  HAnimJoint();
HAnimJoint1258.setUSE(CString("hanim_r_tarsal_middle_phalanx_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1258);

HAnimJoint& HAnimJoint1259 =  HAnimJoint();
HAnimJoint1259.setUSE(CString("hanim_r_tarsal_distal_phalanx_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1259);

HAnimJoint& HAnimJoint1260 =  HAnimJoint();
HAnimJoint1260.setUSE(CString("hanim_l5"));
HAnimHumanoid25.setJoints(&HAnimJoint1260);

HAnimJoint& HAnimJoint1261 =  HAnimJoint();
HAnimJoint1261.setUSE(CString("hanim_l4"));
HAnimHumanoid25.setJoints(&HAnimJoint1261);

HAnimJoint& HAnimJoint1262 =  HAnimJoint();
HAnimJoint1262.setUSE(CString("hanim_l3"));
HAnimHumanoid25.setJoints(&HAnimJoint1262);

HAnimJoint& HAnimJoint1263 =  HAnimJoint();
HAnimJoint1263.setUSE(CString("hanim_l2"));
HAnimHumanoid25.setJoints(&HAnimJoint1263);

HAnimJoint& HAnimJoint1264 =  HAnimJoint();
HAnimJoint1264.setUSE(CString("hanim_l1"));
HAnimHumanoid25.setJoints(&HAnimJoint1264);

HAnimJoint& HAnimJoint1265 =  HAnimJoint();
HAnimJoint1265.setUSE(CString("hanim_t12"));
HAnimHumanoid25.setJoints(&HAnimJoint1265);

HAnimJoint& HAnimJoint1266 =  HAnimJoint();
HAnimJoint1266.setUSE(CString("hanim_t11"));
HAnimHumanoid25.setJoints(&HAnimJoint1266);

HAnimJoint& HAnimJoint1267 =  HAnimJoint();
HAnimJoint1267.setUSE(CString("hanim_t10"));
HAnimHumanoid25.setJoints(&HAnimJoint1267);

HAnimJoint& HAnimJoint1268 =  HAnimJoint();
HAnimJoint1268.setUSE(CString("hanim_t9"));
HAnimHumanoid25.setJoints(&HAnimJoint1268);

HAnimJoint& HAnimJoint1269 =  HAnimJoint();
HAnimJoint1269.setUSE(CString("hanim_t8"));
HAnimHumanoid25.setJoints(&HAnimJoint1269);

HAnimJoint& HAnimJoint1270 =  HAnimJoint();
HAnimJoint1270.setUSE(CString("hanim_t7"));
HAnimHumanoid25.setJoints(&HAnimJoint1270);

HAnimJoint& HAnimJoint1271 =  HAnimJoint();
HAnimJoint1271.setUSE(CString("hanim_t6"));
HAnimHumanoid25.setJoints(&HAnimJoint1271);

HAnimJoint& HAnimJoint1272 =  HAnimJoint();
HAnimJoint1272.setUSE(CString("hanim_t5"));
HAnimHumanoid25.setJoints(&HAnimJoint1272);

HAnimJoint& HAnimJoint1273 =  HAnimJoint();
HAnimJoint1273.setUSE(CString("hanim_t4"));
HAnimHumanoid25.setJoints(&HAnimJoint1273);

HAnimJoint& HAnimJoint1274 =  HAnimJoint();
HAnimJoint1274.setUSE(CString("hanim_t3"));
HAnimHumanoid25.setJoints(&HAnimJoint1274);

HAnimJoint& HAnimJoint1275 =  HAnimJoint();
HAnimJoint1275.setUSE(CString("hanim_t2"));
HAnimHumanoid25.setJoints(&HAnimJoint1275);

HAnimJoint& HAnimJoint1276 =  HAnimJoint();
HAnimJoint1276.setUSE(CString("hanim_t1"));
HAnimHumanoid25.setJoints(&HAnimJoint1276);

HAnimJoint& HAnimJoint1277 =  HAnimJoint();
HAnimJoint1277.setUSE(CString("hanim_c7"));
HAnimHumanoid25.setJoints(&HAnimJoint1277);

HAnimJoint& HAnimJoint1278 =  HAnimJoint();
HAnimJoint1278.setUSE(CString("hanim_c6"));
HAnimHumanoid25.setJoints(&HAnimJoint1278);

HAnimJoint& HAnimJoint1279 =  HAnimJoint();
HAnimJoint1279.setUSE(CString("hanim_c5"));
HAnimHumanoid25.setJoints(&HAnimJoint1279);

HAnimJoint& HAnimJoint1280 =  HAnimJoint();
HAnimJoint1280.setUSE(CString("hanim_c4"));
HAnimHumanoid25.setJoints(&HAnimJoint1280);

HAnimJoint& HAnimJoint1281 =  HAnimJoint();
HAnimJoint1281.setUSE(CString("hanim_c3"));
HAnimHumanoid25.setJoints(&HAnimJoint1281);

HAnimJoint& HAnimJoint1282 =  HAnimJoint();
HAnimJoint1282.setUSE(CString("hanim_c2"));
HAnimHumanoid25.setJoints(&HAnimJoint1282);

HAnimJoint& HAnimJoint1283 =  HAnimJoint();
HAnimJoint1283.setUSE(CString("hanim_c1"));
HAnimHumanoid25.setJoints(&HAnimJoint1283);

HAnimJoint& HAnimJoint1284 =  HAnimJoint();
HAnimJoint1284.setUSE(CString("hanim_skull"));
HAnimHumanoid25.setJoints(&HAnimJoint1284);

HAnimJoint& HAnimJoint1285 =  HAnimJoint();
HAnimJoint1285.setUSE(CString("hanim_l_eyelid"));
HAnimHumanoid25.setJoints(&HAnimJoint1285);

HAnimJoint& HAnimJoint1286 =  HAnimJoint();
HAnimJoint1286.setUSE(CString("hanim_r_eyelid"));
HAnimHumanoid25.setJoints(&HAnimJoint1286);

HAnimJoint& HAnimJoint1287 =  HAnimJoint();
HAnimJoint1287.setUSE(CString("hanim_l_eyeball"));
HAnimHumanoid25.setJoints(&HAnimJoint1287);

HAnimJoint& HAnimJoint1288 =  HAnimJoint();
HAnimJoint1288.setUSE(CString("hanim_r_eyeball"));
HAnimHumanoid25.setJoints(&HAnimJoint1288);

HAnimJoint& HAnimJoint1289 =  HAnimJoint();
HAnimJoint1289.setUSE(CString("hanim_l_eyebrow"));
HAnimHumanoid25.setJoints(&HAnimJoint1289);

HAnimJoint& HAnimJoint1290 =  HAnimJoint();
HAnimJoint1290.setUSE(CString("hanim_r_eyebrow"));
HAnimHumanoid25.setJoints(&HAnimJoint1290);

HAnimJoint& HAnimJoint1291 =  HAnimJoint();
HAnimJoint1291.setUSE(CString("hanim_jaw"));
HAnimHumanoid25.setJoints(&HAnimJoint1291);

HAnimJoint& HAnimJoint1292 =  HAnimJoint();
HAnimJoint1292.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid25.setJoints(&HAnimJoint1292);

HAnimJoint& HAnimJoint1293 =  HAnimJoint();
HAnimJoint1293.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid25.setJoints(&HAnimJoint1293);

HAnimJoint& HAnimJoint1294 =  HAnimJoint();
HAnimJoint1294.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid25.setJoints(&HAnimJoint1294);

HAnimJoint& HAnimJoint1295 =  HAnimJoint();
HAnimJoint1295.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid25.setJoints(&HAnimJoint1295);

HAnimJoint& HAnimJoint1296 =  HAnimJoint();
HAnimJoint1296.setUSE(CString("hanim_l_carpal"));
HAnimHumanoid25.setJoints(&HAnimJoint1296);

HAnimJoint& HAnimJoint1297 =  HAnimJoint();
HAnimJoint1297.setUSE(CString("hanim_l_trapezium"));
HAnimHumanoid25.setJoints(&HAnimJoint1297);

HAnimJoint& HAnimJoint1298 =  HAnimJoint();
HAnimJoint1298.setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1298);

HAnimJoint& HAnimJoint1299 =  HAnimJoint();
HAnimJoint1299.setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1299);

HAnimJoint& HAnimJoint1300 =  HAnimJoint();
HAnimJoint1300.setUSE(CString("hanim_l_carpal_distal_phalanx_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1300);

HAnimJoint& HAnimJoint1301 =  HAnimJoint();
HAnimJoint1301.setUSE(CString("hanim_l_trapezoid"));
HAnimHumanoid25.setJoints(&HAnimJoint1301);

HAnimJoint& HAnimJoint1302 =  HAnimJoint();
HAnimJoint1302.setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1302);

HAnimJoint& HAnimJoint1303 =  HAnimJoint();
HAnimJoint1303.setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1303);

HAnimJoint& HAnimJoint1304 =  HAnimJoint();
HAnimJoint1304.setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1304);

HAnimJoint& HAnimJoint1305 =  HAnimJoint();
HAnimJoint1305.setUSE(CString("hanim_l_carpal_distal_phalanx_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1305);

HAnimJoint& HAnimJoint1306 =  HAnimJoint();
HAnimJoint1306.setUSE(CString("hanim_l_capitate"));
HAnimHumanoid25.setJoints(&HAnimJoint1306);

HAnimJoint& HAnimJoint1307 =  HAnimJoint();
HAnimJoint1307.setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1307);

HAnimJoint& HAnimJoint1308 =  HAnimJoint();
HAnimJoint1308.setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1308);

HAnimJoint& HAnimJoint1309 =  HAnimJoint();
HAnimJoint1309.setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1309);

HAnimJoint& HAnimJoint1310 =  HAnimJoint();
HAnimJoint1310.setUSE(CString("hanim_l_carpal_distal_phalanx_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1310);

HAnimJoint& HAnimJoint1311 =  HAnimJoint();
HAnimJoint1311.setUSE(CString("hanim_l_hamate"));
HAnimHumanoid25.setJoints(&HAnimJoint1311);

HAnimJoint& HAnimJoint1312 =  HAnimJoint();
HAnimJoint1312.setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1312);

HAnimJoint& HAnimJoint1313 =  HAnimJoint();
HAnimJoint1313.setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1313);

HAnimJoint& HAnimJoint1314 =  HAnimJoint();
HAnimJoint1314.setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1314);

HAnimJoint& HAnimJoint1315 =  HAnimJoint();
HAnimJoint1315.setUSE(CString("hanim_l_carpal_distal_phalanx_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1315);

HAnimJoint& HAnimJoint1316 =  HAnimJoint();
HAnimJoint1316.setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1316);

HAnimJoint& HAnimJoint1317 =  HAnimJoint();
HAnimJoint1317.setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1317);

HAnimJoint& HAnimJoint1318 =  HAnimJoint();
HAnimJoint1318.setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1318);

HAnimJoint& HAnimJoint1319 =  HAnimJoint();
HAnimJoint1319.setUSE(CString("hanim_l_carpal_distal_phalanx_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1319);

HAnimJoint& HAnimJoint1320 =  HAnimJoint();
HAnimJoint1320.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid25.setJoints(&HAnimJoint1320);

HAnimJoint& HAnimJoint1321 =  HAnimJoint();
HAnimJoint1321.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid25.setJoints(&HAnimJoint1321);

HAnimJoint& HAnimJoint1322 =  HAnimJoint();
HAnimJoint1322.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid25.setJoints(&HAnimJoint1322);

HAnimJoint& HAnimJoint1323 =  HAnimJoint();
HAnimJoint1323.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid25.setJoints(&HAnimJoint1323);

HAnimJoint& HAnimJoint1324 =  HAnimJoint();
HAnimJoint1324.setUSE(CString("hanim_r_carpal"));
HAnimHumanoid25.setJoints(&HAnimJoint1324);

HAnimJoint& HAnimJoint1325 =  HAnimJoint();
HAnimJoint1325.setUSE(CString("hanim_r_trapezium"));
HAnimHumanoid25.setJoints(&HAnimJoint1325);

HAnimJoint& HAnimJoint1326 =  HAnimJoint();
HAnimJoint1326.setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1326);

HAnimJoint& HAnimJoint1327 =  HAnimJoint();
HAnimJoint1327.setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1327);

HAnimJoint& HAnimJoint1328 =  HAnimJoint();
HAnimJoint1328.setUSE(CString("hanim_r_carpal_distal_phalanx_1"));
HAnimHumanoid25.setJoints(&HAnimJoint1328);

HAnimJoint& HAnimJoint1329 =  HAnimJoint();
HAnimJoint1329.setUSE(CString("hanim_r_trapezoid"));
HAnimHumanoid25.setJoints(&HAnimJoint1329);

HAnimJoint& HAnimJoint1330 =  HAnimJoint();
HAnimJoint1330.setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1330);

HAnimJoint& HAnimJoint1331 =  HAnimJoint();
HAnimJoint1331.setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1331);

HAnimJoint& HAnimJoint1332 =  HAnimJoint();
HAnimJoint1332.setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1332);

HAnimJoint& HAnimJoint1333 =  HAnimJoint();
HAnimJoint1333.setUSE(CString("hanim_r_carpal_distal_phalanx_2"));
HAnimHumanoid25.setJoints(&HAnimJoint1333);

HAnimJoint& HAnimJoint1334 =  HAnimJoint();
HAnimJoint1334.setUSE(CString("hanim_r_capitate"));
HAnimHumanoid25.setJoints(&HAnimJoint1334);

HAnimJoint& HAnimJoint1335 =  HAnimJoint();
HAnimJoint1335.setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1335);

HAnimJoint& HAnimJoint1336 =  HAnimJoint();
HAnimJoint1336.setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1336);

HAnimJoint& HAnimJoint1337 =  HAnimJoint();
HAnimJoint1337.setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1337);

HAnimJoint& HAnimJoint1338 =  HAnimJoint();
HAnimJoint1338.setUSE(CString("hanim_r_carpal_distal_phalanx_3"));
HAnimHumanoid25.setJoints(&HAnimJoint1338);

HAnimJoint& HAnimJoint1339 =  HAnimJoint();
HAnimJoint1339.setUSE(CString("hanim_r_hamate"));
HAnimHumanoid25.setJoints(&HAnimJoint1339);

HAnimJoint& HAnimJoint1340 =  HAnimJoint();
HAnimJoint1340.setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1340);

HAnimJoint& HAnimJoint1341 =  HAnimJoint();
HAnimJoint1341.setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1341);

HAnimJoint& HAnimJoint1342 =  HAnimJoint();
HAnimJoint1342.setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1342);

HAnimJoint& HAnimJoint1343 =  HAnimJoint();
HAnimJoint1343.setUSE(CString("hanim_r_carpal_distal_phalanx_4"));
HAnimHumanoid25.setJoints(&HAnimJoint1343);

HAnimJoint& HAnimJoint1344 =  HAnimJoint();
HAnimJoint1344.setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1344);

HAnimJoint& HAnimJoint1345 =  HAnimJoint();
HAnimJoint1345.setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1345);

HAnimJoint& HAnimJoint1346 =  HAnimJoint();
HAnimJoint1346.setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1346);

HAnimJoint& HAnimJoint1347 =  HAnimJoint();
HAnimJoint1347.setUSE(CString("hanim_r_carpal_distal_phalanx_5"));
HAnimHumanoid25.setJoints(&HAnimJoint1347);

Transform24.addChild(&HAnimHumanoid25);

Scene7.addChild(&Transform24);

TimeSensor& TimeSensor1348 =  TimeSensor();
TimeSensor1348.setDEF(CString("Armature_Clock"));
TimeSensor1348.setCycleInterval(10.416666666666666);
TimeSensor1348.setLoop(True);
Scene7.addChild(&TimeSensor1348);

ProximitySensor& ProximitySensor1349 =  ProximitySensor();
ProximitySensor1349.setDEF(CString("Armature_Close"));
ProximitySensor1349.setSize(new float[3]{1000000,1000000,1000000});
Scene7.addChild(&ProximitySensor1349);

ROUTE& ROUTE1350 =  ROUTE();
ROUTE1350.setFromField(CString("enterTime"));
ROUTE1350.setFromNode(CString("Armature_Close"));
ROUTE1350.setToField(CString("startTime"));
ROUTE1350.setToNode(CString("Armature_Clock"));
Scene7.addChild(&ROUTE1350);

OrientationInterpolator& OrientationInterpolator1351 =  OrientationInterpolator();
OrientationInterpolator1351.setDEF(CString("Armature_OI_sacrum"));
OrientationInterpolator1351.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1351.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1351);

OrientationInterpolator& OrientationInterpolator1352 =  OrientationInterpolator();
OrientationInterpolator1352.setDEF(CString("Armature_OI_pelvis"));
OrientationInterpolator1352.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1352.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1352);

OrientationInterpolator& OrientationInterpolator1353 =  OrientationInterpolator();
OrientationInterpolator1353.setDEF(CString("Armature_OI_l_thigh"));
OrientationInterpolator1353.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1353.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1353);

OrientationInterpolator& OrientationInterpolator1354 =  OrientationInterpolator();
OrientationInterpolator1354.setDEF(CString("Armature_OI_l_calf"));
OrientationInterpolator1354.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1354.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1354);

OrientationInterpolator& OrientationInterpolator1355 =  OrientationInterpolator();
OrientationInterpolator1355.setDEF(CString("Armature_OI_l_talus"));
OrientationInterpolator1355.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1355.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1355);

OrientationInterpolator& OrientationInterpolator1356 =  OrientationInterpolator();
OrientationInterpolator1356.setDEF(CString("Armature_OI_l_navicular"));
OrientationInterpolator1356.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1356.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1356);

OrientationInterpolator& OrientationInterpolator1357 =  OrientationInterpolator();
OrientationInterpolator1357.setDEF(CString("Armature_OI_l_cuneiform_1"));
OrientationInterpolator1357.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1357.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1357);

OrientationInterpolator& OrientationInterpolator1358 =  OrientationInterpolator();
OrientationInterpolator1358.setDEF(CString("Armature_OI_l_metatarsal_1"));
OrientationInterpolator1358.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1358.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1358);

OrientationInterpolator& OrientationInterpolator1359 =  OrientationInterpolator();
OrientationInterpolator1359.setDEF(CString("Armature_OI_l_tarsal_proximal_phalanx_1"));
OrientationInterpolator1359.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1359.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1359);

OrientationInterpolator& OrientationInterpolator1360 =  OrientationInterpolator();
OrientationInterpolator1360.setDEF(CString("Armature_OI_l_tarsal_distal_phalanx_1"));
OrientationInterpolator1360.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1360.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1360);

OrientationInterpolator& OrientationInterpolator1361 =  OrientationInterpolator();
OrientationInterpolator1361.setDEF(CString("Armature_OI_l_cuneiform_2"));
OrientationInterpolator1361.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1361.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1361);

OrientationInterpolator& OrientationInterpolator1362 =  OrientationInterpolator();
OrientationInterpolator1362.setDEF(CString("Armature_OI_l_metatarsal_2"));
OrientationInterpolator1362.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1362.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1362);

OrientationInterpolator& OrientationInterpolator1363 =  OrientationInterpolator();
OrientationInterpolator1363.setDEF(CString("Armature_OI_l_tarsal_proximal_phalanx_2"));
OrientationInterpolator1363.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1363.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1363);

OrientationInterpolator& OrientationInterpolator1364 =  OrientationInterpolator();
OrientationInterpolator1364.setDEF(CString("Armature_OI_l_tarsal_middle_phalanx_2"));
OrientationInterpolator1364.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1364.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1364);

OrientationInterpolator& OrientationInterpolator1365 =  OrientationInterpolator();
OrientationInterpolator1365.setDEF(CString("Armature_OI_l_tarsal_distal_phalanx_2"));
OrientationInterpolator1365.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1365.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1365);

OrientationInterpolator& OrientationInterpolator1366 =  OrientationInterpolator();
OrientationInterpolator1366.setDEF(CString("Armature_OI_l_cuneiform_3"));
OrientationInterpolator1366.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1366.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1366);

OrientationInterpolator& OrientationInterpolator1367 =  OrientationInterpolator();
OrientationInterpolator1367.setDEF(CString("Armature_OI_l_metatarsal_3"));
OrientationInterpolator1367.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1367.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1367);

OrientationInterpolator& OrientationInterpolator1368 =  OrientationInterpolator();
OrientationInterpolator1368.setDEF(CString("Armature_OI_l_tarsal_proximal_phalanx_3"));
OrientationInterpolator1368.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1368.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1368);

OrientationInterpolator& OrientationInterpolator1369 =  OrientationInterpolator();
OrientationInterpolator1369.setDEF(CString("Armature_OI_l_tarsal_middle_phalanx_3"));
OrientationInterpolator1369.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1369.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1369);

OrientationInterpolator& OrientationInterpolator1370 =  OrientationInterpolator();
OrientationInterpolator1370.setDEF(CString("Armature_OI_l_tarsal_distal_phalanx_3"));
OrientationInterpolator1370.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1370.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1370);

OrientationInterpolator& OrientationInterpolator1371 =  OrientationInterpolator();
OrientationInterpolator1371.setDEF(CString("Armature_OI_l_calcaneus"));
OrientationInterpolator1371.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1371.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1371);

OrientationInterpolator& OrientationInterpolator1372 =  OrientationInterpolator();
OrientationInterpolator1372.setDEF(CString("Armature_OI_l_cuboid"));
OrientationInterpolator1372.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1372.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1372);

OrientationInterpolator& OrientationInterpolator1373 =  OrientationInterpolator();
OrientationInterpolator1373.setDEF(CString("Armature_OI_l_metatarsal_4"));
OrientationInterpolator1373.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1373.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1373);

OrientationInterpolator& OrientationInterpolator1374 =  OrientationInterpolator();
OrientationInterpolator1374.setDEF(CString("Armature_OI_l_tarsal_proximal_phalanx_4"));
OrientationInterpolator1374.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1374.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1374);

OrientationInterpolator& OrientationInterpolator1375 =  OrientationInterpolator();
OrientationInterpolator1375.setDEF(CString("Armature_OI_l_tarsal_middle_phalanx_4"));
OrientationInterpolator1375.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1375.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1375);

OrientationInterpolator& OrientationInterpolator1376 =  OrientationInterpolator();
OrientationInterpolator1376.setDEF(CString("Armature_OI_l_tarsal_distal_phalanx_4"));
OrientationInterpolator1376.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1376.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1376);

OrientationInterpolator& OrientationInterpolator1377 =  OrientationInterpolator();
OrientationInterpolator1377.setDEF(CString("Armature_OI_l_metatarsal_5"));
OrientationInterpolator1377.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1377.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1377);

OrientationInterpolator& OrientationInterpolator1378 =  OrientationInterpolator();
OrientationInterpolator1378.setDEF(CString("Armature_OI_l_tarsal_proximal_phalanx_5"));
OrientationInterpolator1378.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1378.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1378);

OrientationInterpolator& OrientationInterpolator1379 =  OrientationInterpolator();
OrientationInterpolator1379.setDEF(CString("Armature_OI_l_tarsal_middle_phalanx_5"));
OrientationInterpolator1379.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1379.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1379);

OrientationInterpolator& OrientationInterpolator1380 =  OrientationInterpolator();
OrientationInterpolator1380.setDEF(CString("Armature_OI_l_tarsal_distal_phalanx_5"));
OrientationInterpolator1380.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1380.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1380);

OrientationInterpolator& OrientationInterpolator1381 =  OrientationInterpolator();
OrientationInterpolator1381.setDEF(CString("Armature_OI_r_thigh"));
OrientationInterpolator1381.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1381.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1381);

OrientationInterpolator& OrientationInterpolator1382 =  OrientationInterpolator();
OrientationInterpolator1382.setDEF(CString("Armature_OI_r_calf"));
OrientationInterpolator1382.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1382.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1382);

OrientationInterpolator& OrientationInterpolator1383 =  OrientationInterpolator();
OrientationInterpolator1383.setDEF(CString("Armature_OI_r_talus"));
OrientationInterpolator1383.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1383.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1383);

OrientationInterpolator& OrientationInterpolator1384 =  OrientationInterpolator();
OrientationInterpolator1384.setDEF(CString("Armature_OI_r_navicular"));
OrientationInterpolator1384.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1384.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1384);

OrientationInterpolator& OrientationInterpolator1385 =  OrientationInterpolator();
OrientationInterpolator1385.setDEF(CString("Armature_OI_r_cuneiform_1"));
OrientationInterpolator1385.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1385.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1385);

OrientationInterpolator& OrientationInterpolator1386 =  OrientationInterpolator();
OrientationInterpolator1386.setDEF(CString("Armature_OI_r_metatarsal_1"));
OrientationInterpolator1386.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1386.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1386);

OrientationInterpolator& OrientationInterpolator1387 =  OrientationInterpolator();
OrientationInterpolator1387.setDEF(CString("Armature_OI_r_tarsal_proximal_phalanx_1"));
OrientationInterpolator1387.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1387.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1387);

OrientationInterpolator& OrientationInterpolator1388 =  OrientationInterpolator();
OrientationInterpolator1388.setDEF(CString("Armature_OI_r_tarsal_distal_phalanx_1"));
OrientationInterpolator1388.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1388.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1388);

OrientationInterpolator& OrientationInterpolator1389 =  OrientationInterpolator();
OrientationInterpolator1389.setDEF(CString("Armature_OI_r_cuneiform_2"));
OrientationInterpolator1389.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1389.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1389);

OrientationInterpolator& OrientationInterpolator1390 =  OrientationInterpolator();
OrientationInterpolator1390.setDEF(CString("Armature_OI_r_metatarsal_2"));
OrientationInterpolator1390.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1390.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1390);

OrientationInterpolator& OrientationInterpolator1391 =  OrientationInterpolator();
OrientationInterpolator1391.setDEF(CString("Armature_OI_r_tarsal_proximal_phalanx_2"));
OrientationInterpolator1391.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1391.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1391);

OrientationInterpolator& OrientationInterpolator1392 =  OrientationInterpolator();
OrientationInterpolator1392.setDEF(CString("Armature_OI_r_tarsal_middle_phalanx_2"));
OrientationInterpolator1392.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1392.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1392);

OrientationInterpolator& OrientationInterpolator1393 =  OrientationInterpolator();
OrientationInterpolator1393.setDEF(CString("Armature_OI_r_tarsal_distal_phalanx_2"));
OrientationInterpolator1393.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1393.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1393);

OrientationInterpolator& OrientationInterpolator1394 =  OrientationInterpolator();
OrientationInterpolator1394.setDEF(CString("Armature_OI_r_cuneiform_3"));
OrientationInterpolator1394.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1394.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1394);

OrientationInterpolator& OrientationInterpolator1395 =  OrientationInterpolator();
OrientationInterpolator1395.setDEF(CString("Armature_OI_r_metatarsal_3"));
OrientationInterpolator1395.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1395.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1395);

OrientationInterpolator& OrientationInterpolator1396 =  OrientationInterpolator();
OrientationInterpolator1396.setDEF(CString("Armature_OI_r_tarsal_proximal_phalanx_3"));
OrientationInterpolator1396.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1396.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1396);

OrientationInterpolator& OrientationInterpolator1397 =  OrientationInterpolator();
OrientationInterpolator1397.setDEF(CString("Armature_OI_r_tarsal_middle_phalanx_3"));
OrientationInterpolator1397.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1397.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1397);

OrientationInterpolator& OrientationInterpolator1398 =  OrientationInterpolator();
OrientationInterpolator1398.setDEF(CString("Armature_OI_r_tarsal_distal_phalanx_3"));
OrientationInterpolator1398.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1398.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1398);

OrientationInterpolator& OrientationInterpolator1399 =  OrientationInterpolator();
OrientationInterpolator1399.setDEF(CString("Armature_OI_r_calcaneus"));
OrientationInterpolator1399.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1399.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1399);

OrientationInterpolator& OrientationInterpolator1400 =  OrientationInterpolator();
OrientationInterpolator1400.setDEF(CString("Armature_OI_r_cuboid"));
OrientationInterpolator1400.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1400.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1400);

OrientationInterpolator& OrientationInterpolator1401 =  OrientationInterpolator();
OrientationInterpolator1401.setDEF(CString("Armature_OI_r_metatarsal_4"));
OrientationInterpolator1401.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1401.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1401);

OrientationInterpolator& OrientationInterpolator1402 =  OrientationInterpolator();
OrientationInterpolator1402.setDEF(CString("Armature_OI_r_tarsal_proximal_phalanx_4"));
OrientationInterpolator1402.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1402.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1402);

OrientationInterpolator& OrientationInterpolator1403 =  OrientationInterpolator();
OrientationInterpolator1403.setDEF(CString("Armature_OI_r_tarsal_middle_phalanx_4"));
OrientationInterpolator1403.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1403.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1403);

OrientationInterpolator& OrientationInterpolator1404 =  OrientationInterpolator();
OrientationInterpolator1404.setDEF(CString("Armature_OI_r_tarsal_distal_phalanx_4"));
OrientationInterpolator1404.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1404.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1404);

OrientationInterpolator& OrientationInterpolator1405 =  OrientationInterpolator();
OrientationInterpolator1405.setDEF(CString("Armature_OI_r_metatarsal_5"));
OrientationInterpolator1405.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1405.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1405);

OrientationInterpolator& OrientationInterpolator1406 =  OrientationInterpolator();
OrientationInterpolator1406.setDEF(CString("Armature_OI_r_tarsal_proximal_phalanx_5"));
OrientationInterpolator1406.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1406.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1406);

OrientationInterpolator& OrientationInterpolator1407 =  OrientationInterpolator();
OrientationInterpolator1407.setDEF(CString("Armature_OI_r_tarsal_middle_phalanx_5"));
OrientationInterpolator1407.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1407.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1407);

OrientationInterpolator& OrientationInterpolator1408 =  OrientationInterpolator();
OrientationInterpolator1408.setDEF(CString("Armature_OI_r_tarsal_distal_phalanx_5"));
OrientationInterpolator1408.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1408.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1408);

OrientationInterpolator& OrientationInterpolator1409 =  OrientationInterpolator();
OrientationInterpolator1409.setDEF(CString("Armature_OI_l5"));
OrientationInterpolator1409.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1409.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1409);

OrientationInterpolator& OrientationInterpolator1410 =  OrientationInterpolator();
OrientationInterpolator1410.setDEF(CString("Armature_OI_l4"));
OrientationInterpolator1410.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1410.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1410);

OrientationInterpolator& OrientationInterpolator1411 =  OrientationInterpolator();
OrientationInterpolator1411.setDEF(CString("Armature_OI_l3"));
OrientationInterpolator1411.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1411.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1411);

OrientationInterpolator& OrientationInterpolator1412 =  OrientationInterpolator();
OrientationInterpolator1412.setDEF(CString("Armature_OI_l2"));
OrientationInterpolator1412.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1412.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1412);

OrientationInterpolator& OrientationInterpolator1413 =  OrientationInterpolator();
OrientationInterpolator1413.setDEF(CString("Armature_OI_l1"));
OrientationInterpolator1413.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1413.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1413);

OrientationInterpolator& OrientationInterpolator1414 =  OrientationInterpolator();
OrientationInterpolator1414.setDEF(CString("Armature_OI_t12"));
OrientationInterpolator1414.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1414.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1414);

OrientationInterpolator& OrientationInterpolator1415 =  OrientationInterpolator();
OrientationInterpolator1415.setDEF(CString("Armature_OI_t11"));
OrientationInterpolator1415.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1415.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1415);

OrientationInterpolator& OrientationInterpolator1416 =  OrientationInterpolator();
OrientationInterpolator1416.setDEF(CString("Armature_OI_t10"));
OrientationInterpolator1416.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1416.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1416);

OrientationInterpolator& OrientationInterpolator1417 =  OrientationInterpolator();
OrientationInterpolator1417.setDEF(CString("Armature_OI_t9"));
OrientationInterpolator1417.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1417.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1417);

OrientationInterpolator& OrientationInterpolator1418 =  OrientationInterpolator();
OrientationInterpolator1418.setDEF(CString("Armature_OI_t8"));
OrientationInterpolator1418.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1418.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1418);

OrientationInterpolator& OrientationInterpolator1419 =  OrientationInterpolator();
OrientationInterpolator1419.setDEF(CString("Armature_OI_t7"));
OrientationInterpolator1419.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1419.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1419);

OrientationInterpolator& OrientationInterpolator1420 =  OrientationInterpolator();
OrientationInterpolator1420.setDEF(CString("Armature_OI_t6"));
OrientationInterpolator1420.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1420.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1420);

OrientationInterpolator& OrientationInterpolator1421 =  OrientationInterpolator();
OrientationInterpolator1421.setDEF(CString("Armature_OI_t5"));
OrientationInterpolator1421.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1421.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1421);

OrientationInterpolator& OrientationInterpolator1422 =  OrientationInterpolator();
OrientationInterpolator1422.setDEF(CString("Armature_OI_t4"));
OrientationInterpolator1422.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1422.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1422);

OrientationInterpolator& OrientationInterpolator1423 =  OrientationInterpolator();
OrientationInterpolator1423.setDEF(CString("Armature_OI_t3"));
OrientationInterpolator1423.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1423.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1423);

OrientationInterpolator& OrientationInterpolator1424 =  OrientationInterpolator();
OrientationInterpolator1424.setDEF(CString("Armature_OI_t2"));
OrientationInterpolator1424.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1424.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1424);

OrientationInterpolator& OrientationInterpolator1425 =  OrientationInterpolator();
OrientationInterpolator1425.setDEF(CString("Armature_OI_t1"));
OrientationInterpolator1425.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1425.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1425);

OrientationInterpolator& OrientationInterpolator1426 =  OrientationInterpolator();
OrientationInterpolator1426.setDEF(CString("Armature_OI_c7"));
OrientationInterpolator1426.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1426.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1426);

OrientationInterpolator& OrientationInterpolator1427 =  OrientationInterpolator();
OrientationInterpolator1427.setDEF(CString("Armature_OI_c6"));
OrientationInterpolator1427.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1427.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1427);

OrientationInterpolator& OrientationInterpolator1428 =  OrientationInterpolator();
OrientationInterpolator1428.setDEF(CString("Armature_OI_c5"));
OrientationInterpolator1428.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1428.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1428);

OrientationInterpolator& OrientationInterpolator1429 =  OrientationInterpolator();
OrientationInterpolator1429.setDEF(CString("Armature_OI_c4"));
OrientationInterpolator1429.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1429.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1429);

OrientationInterpolator& OrientationInterpolator1430 =  OrientationInterpolator();
OrientationInterpolator1430.setDEF(CString("Armature_OI_c3"));
OrientationInterpolator1430.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1430.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1430);

OrientationInterpolator& OrientationInterpolator1431 =  OrientationInterpolator();
OrientationInterpolator1431.setDEF(CString("Armature_OI_c2"));
OrientationInterpolator1431.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1431.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1431);

OrientationInterpolator& OrientationInterpolator1432 =  OrientationInterpolator();
OrientationInterpolator1432.setDEF(CString("Armature_OI_c1"));
OrientationInterpolator1432.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1432.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1432);

OrientationInterpolator& OrientationInterpolator1433 =  OrientationInterpolator();
OrientationInterpolator1433.setDEF(CString("Armature_OI_skull"));
OrientationInterpolator1433.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1433.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1433);

OrientationInterpolator& OrientationInterpolator1434 =  OrientationInterpolator();
OrientationInterpolator1434.setDEF(CString("Armature_OI_l_eyelid"));
OrientationInterpolator1434.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1434.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1434);

OrientationInterpolator& OrientationInterpolator1435 =  OrientationInterpolator();
OrientationInterpolator1435.setDEF(CString("Armature_OI_r_eyelid"));
OrientationInterpolator1435.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1435.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1435);

OrientationInterpolator& OrientationInterpolator1436 =  OrientationInterpolator();
OrientationInterpolator1436.setDEF(CString("Armature_OI_l_eyeball"));
OrientationInterpolator1436.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1436.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1436);

OrientationInterpolator& OrientationInterpolator1437 =  OrientationInterpolator();
OrientationInterpolator1437.setDEF(CString("Armature_OI_r_eyeball"));
OrientationInterpolator1437.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1437.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1437);

OrientationInterpolator& OrientationInterpolator1438 =  OrientationInterpolator();
OrientationInterpolator1438.setDEF(CString("Armature_OI_l_eyebrow"));
OrientationInterpolator1438.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1438.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1438);

OrientationInterpolator& OrientationInterpolator1439 =  OrientationInterpolator();
OrientationInterpolator1439.setDEF(CString("Armature_OI_r_eyebrow"));
OrientationInterpolator1439.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1439.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1439);

OrientationInterpolator& OrientationInterpolator1440 =  OrientationInterpolator();
OrientationInterpolator1440.setDEF(CString("Armature_OI_jaw"));
OrientationInterpolator1440.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1440.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1440);

OrientationInterpolator& OrientationInterpolator1441 =  OrientationInterpolator();
OrientationInterpolator1441.setDEF(CString("Armature_OI_l_clavicle"));
OrientationInterpolator1441.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1441.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1441);

OrientationInterpolator& OrientationInterpolator1442 =  OrientationInterpolator();
OrientationInterpolator1442.setDEF(CString("Armature_OI_l_scapula"));
OrientationInterpolator1442.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1442.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1442);

OrientationInterpolator& OrientationInterpolator1443 =  OrientationInterpolator();
OrientationInterpolator1443.setDEF(CString("Armature_OI_l_upperarm"));
OrientationInterpolator1443.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1443.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1443);

OrientationInterpolator& OrientationInterpolator1444 =  OrientationInterpolator();
OrientationInterpolator1444.setDEF(CString("Armature_OI_l_forearm"));
OrientationInterpolator1444.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1444.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1444);

OrientationInterpolator& OrientationInterpolator1445 =  OrientationInterpolator();
OrientationInterpolator1445.setDEF(CString("Armature_OI_l_carpal"));
OrientationInterpolator1445.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1445.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1445);

OrientationInterpolator& OrientationInterpolator1446 =  OrientationInterpolator();
OrientationInterpolator1446.setDEF(CString("Armature_OI_l_trapezium"));
OrientationInterpolator1446.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1446.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1446);

OrientationInterpolator& OrientationInterpolator1447 =  OrientationInterpolator();
OrientationInterpolator1447.setDEF(CString("Armature_OI_l_metacarpal_1"));
OrientationInterpolator1447.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1447.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1447);

OrientationInterpolator& OrientationInterpolator1448 =  OrientationInterpolator();
OrientationInterpolator1448.setDEF(CString("Armature_OI_l_carpal_proximal_phalanx_1"));
OrientationInterpolator1448.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1448.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1448);

OrientationInterpolator& OrientationInterpolator1449 =  OrientationInterpolator();
OrientationInterpolator1449.setDEF(CString("Armature_OI_l_carpal_distal_phalanx_1"));
OrientationInterpolator1449.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1449.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1449);

OrientationInterpolator& OrientationInterpolator1450 =  OrientationInterpolator();
OrientationInterpolator1450.setDEF(CString("Armature_OI_l_trapezoid"));
OrientationInterpolator1450.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1450.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1450);

OrientationInterpolator& OrientationInterpolator1451 =  OrientationInterpolator();
OrientationInterpolator1451.setDEF(CString("Armature_OI_l_metacarpal_2"));
OrientationInterpolator1451.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1451.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1451);

OrientationInterpolator& OrientationInterpolator1452 =  OrientationInterpolator();
OrientationInterpolator1452.setDEF(CString("Armature_OI_l_carpal_proximal_phalanx_2"));
OrientationInterpolator1452.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1452.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1452);

OrientationInterpolator& OrientationInterpolator1453 =  OrientationInterpolator();
OrientationInterpolator1453.setDEF(CString("Armature_OI_l_carpal_middle_phalanx_2"));
OrientationInterpolator1453.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1453.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1453);

OrientationInterpolator& OrientationInterpolator1454 =  OrientationInterpolator();
OrientationInterpolator1454.setDEF(CString("Armature_OI_l_carpal_distal_phalanx_2"));
OrientationInterpolator1454.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1454.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1454);

OrientationInterpolator& OrientationInterpolator1455 =  OrientationInterpolator();
OrientationInterpolator1455.setDEF(CString("Armature_OI_l_capitate"));
OrientationInterpolator1455.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1455.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1455);

OrientationInterpolator& OrientationInterpolator1456 =  OrientationInterpolator();
OrientationInterpolator1456.setDEF(CString("Armature_OI_l_metacarpal_3"));
OrientationInterpolator1456.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1456.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1456);

OrientationInterpolator& OrientationInterpolator1457 =  OrientationInterpolator();
OrientationInterpolator1457.setDEF(CString("Armature_OI_l_carpal_proximal_phalanx_3"));
OrientationInterpolator1457.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1457.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1457);

OrientationInterpolator& OrientationInterpolator1458 =  OrientationInterpolator();
OrientationInterpolator1458.setDEF(CString("Armature_OI_l_carpal_middle_phalanx_3"));
OrientationInterpolator1458.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1458.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1458);

OrientationInterpolator& OrientationInterpolator1459 =  OrientationInterpolator();
OrientationInterpolator1459.setDEF(CString("Armature_OI_l_carpal_distal_phalanx_3"));
OrientationInterpolator1459.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1459.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1459);

OrientationInterpolator& OrientationInterpolator1460 =  OrientationInterpolator();
OrientationInterpolator1460.setDEF(CString("Armature_OI_l_hamate"));
OrientationInterpolator1460.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1460.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1460);

OrientationInterpolator& OrientationInterpolator1461 =  OrientationInterpolator();
OrientationInterpolator1461.setDEF(CString("Armature_OI_l_metacarpal_4"));
OrientationInterpolator1461.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1461.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1461);

OrientationInterpolator& OrientationInterpolator1462 =  OrientationInterpolator();
OrientationInterpolator1462.setDEF(CString("Armature_OI_l_carpal_proximal_phalanx_4"));
OrientationInterpolator1462.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1462.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1462);

OrientationInterpolator& OrientationInterpolator1463 =  OrientationInterpolator();
OrientationInterpolator1463.setDEF(CString("Armature_OI_l_carpal_middle_phalanx_4"));
OrientationInterpolator1463.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1463.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1463);

OrientationInterpolator& OrientationInterpolator1464 =  OrientationInterpolator();
OrientationInterpolator1464.setDEF(CString("Armature_OI_l_carpal_distal_phalanx_4"));
OrientationInterpolator1464.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1464.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1464);

OrientationInterpolator& OrientationInterpolator1465 =  OrientationInterpolator();
OrientationInterpolator1465.setDEF(CString("Armature_OI_l_metacarpal_5"));
OrientationInterpolator1465.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1465.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1465);

OrientationInterpolator& OrientationInterpolator1466 =  OrientationInterpolator();
OrientationInterpolator1466.setDEF(CString("Armature_OI_l_carpal_proximal_phalanx_5"));
OrientationInterpolator1466.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1466.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1466);

OrientationInterpolator& OrientationInterpolator1467 =  OrientationInterpolator();
OrientationInterpolator1467.setDEF(CString("Armature_OI_l_carpal_middle_phalanx_5"));
OrientationInterpolator1467.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1467.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1467);

OrientationInterpolator& OrientationInterpolator1468 =  OrientationInterpolator();
OrientationInterpolator1468.setDEF(CString("Armature_OI_l_carpal_distal_phalanx_5"));
OrientationInterpolator1468.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1468.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1468);

OrientationInterpolator& OrientationInterpolator1469 =  OrientationInterpolator();
OrientationInterpolator1469.setDEF(CString("Armature_OI_r_clavicle"));
OrientationInterpolator1469.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1469.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1469);

OrientationInterpolator& OrientationInterpolator1470 =  OrientationInterpolator();
OrientationInterpolator1470.setDEF(CString("Armature_OI_r_scapula"));
OrientationInterpolator1470.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1470.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1470);

OrientationInterpolator& OrientationInterpolator1471 =  OrientationInterpolator();
OrientationInterpolator1471.setDEF(CString("Armature_OI_r_upperarm"));
OrientationInterpolator1471.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1471.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1471);

OrientationInterpolator& OrientationInterpolator1472 =  OrientationInterpolator();
OrientationInterpolator1472.setDEF(CString("Armature_OI_r_forearm"));
OrientationInterpolator1472.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1472.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1472);

OrientationInterpolator& OrientationInterpolator1473 =  OrientationInterpolator();
OrientationInterpolator1473.setDEF(CString("Armature_OI_r_carpal"));
OrientationInterpolator1473.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1473.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1473);

OrientationInterpolator& OrientationInterpolator1474 =  OrientationInterpolator();
OrientationInterpolator1474.setDEF(CString("Armature_OI_r_trapezium"));
OrientationInterpolator1474.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1474.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1474);

OrientationInterpolator& OrientationInterpolator1475 =  OrientationInterpolator();
OrientationInterpolator1475.setDEF(CString("Armature_OI_r_metacarpal_1"));
OrientationInterpolator1475.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1475.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1475);

OrientationInterpolator& OrientationInterpolator1476 =  OrientationInterpolator();
OrientationInterpolator1476.setDEF(CString("Armature_OI_r_carpal_proximal_phalanx_1"));
OrientationInterpolator1476.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1476.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1476);

OrientationInterpolator& OrientationInterpolator1477 =  OrientationInterpolator();
OrientationInterpolator1477.setDEF(CString("Armature_OI_r_carpal_distal_phalanx_1"));
OrientationInterpolator1477.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1477.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1477);

OrientationInterpolator& OrientationInterpolator1478 =  OrientationInterpolator();
OrientationInterpolator1478.setDEF(CString("Armature_OI_r_trapezoid"));
OrientationInterpolator1478.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1478.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1478);

OrientationInterpolator& OrientationInterpolator1479 =  OrientationInterpolator();
OrientationInterpolator1479.setDEF(CString("Armature_OI_r_metacarpal_2"));
OrientationInterpolator1479.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1479.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1479);

OrientationInterpolator& OrientationInterpolator1480 =  OrientationInterpolator();
OrientationInterpolator1480.setDEF(CString("Armature_OI_r_carpal_proximal_phalanx_2"));
OrientationInterpolator1480.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1480.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1480);

OrientationInterpolator& OrientationInterpolator1481 =  OrientationInterpolator();
OrientationInterpolator1481.setDEF(CString("Armature_OI_r_carpal_middle_phalanx_2"));
OrientationInterpolator1481.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1481.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1481);

OrientationInterpolator& OrientationInterpolator1482 =  OrientationInterpolator();
OrientationInterpolator1482.setDEF(CString("Armature_OI_r_carpal_distal_phalanx_2"));
OrientationInterpolator1482.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1482.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1482);

OrientationInterpolator& OrientationInterpolator1483 =  OrientationInterpolator();
OrientationInterpolator1483.setDEF(CString("Armature_OI_r_capitate"));
OrientationInterpolator1483.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1483.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1483);

OrientationInterpolator& OrientationInterpolator1484 =  OrientationInterpolator();
OrientationInterpolator1484.setDEF(CString("Armature_OI_r_metacarpal_3"));
OrientationInterpolator1484.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1484.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1484);

OrientationInterpolator& OrientationInterpolator1485 =  OrientationInterpolator();
OrientationInterpolator1485.setDEF(CString("Armature_OI_r_carpal_proximal_phalanx_3"));
OrientationInterpolator1485.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1485.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1485);

OrientationInterpolator& OrientationInterpolator1486 =  OrientationInterpolator();
OrientationInterpolator1486.setDEF(CString("Armature_OI_r_carpal_middle_phalanx_3"));
OrientationInterpolator1486.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1486.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1486);

OrientationInterpolator& OrientationInterpolator1487 =  OrientationInterpolator();
OrientationInterpolator1487.setDEF(CString("Armature_OI_r_carpal_distal_phalanx_3"));
OrientationInterpolator1487.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1487.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1487);

OrientationInterpolator& OrientationInterpolator1488 =  OrientationInterpolator();
OrientationInterpolator1488.setDEF(CString("Armature_OI_r_hamate"));
OrientationInterpolator1488.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1488.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1488);

OrientationInterpolator& OrientationInterpolator1489 =  OrientationInterpolator();
OrientationInterpolator1489.setDEF(CString("Armature_OI_r_metacarpal_4"));
OrientationInterpolator1489.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1489.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1489);

OrientationInterpolator& OrientationInterpolator1490 =  OrientationInterpolator();
OrientationInterpolator1490.setDEF(CString("Armature_OI_r_carpal_proximal_phalanx_4"));
OrientationInterpolator1490.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1490.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1490);

OrientationInterpolator& OrientationInterpolator1491 =  OrientationInterpolator();
OrientationInterpolator1491.setDEF(CString("Armature_OI_r_carpal_middle_phalanx_4"));
OrientationInterpolator1491.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1491.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1491);

OrientationInterpolator& OrientationInterpolator1492 =  OrientationInterpolator();
OrientationInterpolator1492.setDEF(CString("Armature_OI_r_carpal_distal_phalanx_4"));
OrientationInterpolator1492.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1492.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1492);

OrientationInterpolator& OrientationInterpolator1493 =  OrientationInterpolator();
OrientationInterpolator1493.setDEF(CString("Armature_OI_r_metacarpal_5"));
OrientationInterpolator1493.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1493.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1493);

OrientationInterpolator& OrientationInterpolator1494 =  OrientationInterpolator();
OrientationInterpolator1494.setDEF(CString("Armature_OI_r_carpal_proximal_phalanx_5"));
OrientationInterpolator1494.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1494.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1494);

OrientationInterpolator& OrientationInterpolator1495 =  OrientationInterpolator();
OrientationInterpolator1495.setDEF(CString("Armature_OI_r_carpal_middle_phalanx_5"));
OrientationInterpolator1495.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1495.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1495);

OrientationInterpolator& OrientationInterpolator1496 =  OrientationInterpolator();
OrientationInterpolator1496.setDEF(CString("Armature_OI_r_carpal_distal_phalanx_5"));
OrientationInterpolator1496.setKey(new float[2]{0,1}, 2);
OrientationInterpolator1496.setKeyValue(new float[8]{0,0,0,0,0,0,0,0}, 8);
Scene7.addChild(&OrientationInterpolator1496);

ROUTE& ROUTE1497 =  ROUTE();
ROUTE1497.setFromField(CString("fraction_changed"));
ROUTE1497.setFromNode(CString("Armature_Clock"));
ROUTE1497.setToField(CString("set_fraction"));
ROUTE1497.setToNode(CString("Armature_OI_sacrum"));
Scene7.addChild(&ROUTE1497);

ROUTE& ROUTE1498 =  ROUTE();
ROUTE1498.setFromField(CString("value_changed"));
ROUTE1498.setFromNode(CString("Armature_OI_sacrum"));
ROUTE1498.setToField(CString("rotation"));
ROUTE1498.setToNode(CString("hanim_sacrum"));
Scene7.addChild(&ROUTE1498);

ROUTE& ROUTE1499 =  ROUTE();
ROUTE1499.setFromField(CString("fraction_changed"));
ROUTE1499.setFromNode(CString("Armature_Clock"));
ROUTE1499.setToField(CString("set_fraction"));
ROUTE1499.setToNode(CString("Armature_OI_pelvis"));
Scene7.addChild(&ROUTE1499);

ROUTE& ROUTE1500 =  ROUTE();
ROUTE1500.setFromField(CString("value_changed"));
ROUTE1500.setFromNode(CString("Armature_OI_pelvis"));
ROUTE1500.setToField(CString("rotation"));
ROUTE1500.setToNode(CString("hanim_pelvis"));
Scene7.addChild(&ROUTE1500);

ROUTE& ROUTE1501 =  ROUTE();
ROUTE1501.setFromField(CString("fraction_changed"));
ROUTE1501.setFromNode(CString("Armature_Clock"));
ROUTE1501.setToField(CString("set_fraction"));
ROUTE1501.setToNode(CString("Armature_OI_l_thigh"));
Scene7.addChild(&ROUTE1501);

ROUTE& ROUTE1502 =  ROUTE();
ROUTE1502.setFromField(CString("value_changed"));
ROUTE1502.setFromNode(CString("Armature_OI_l_thigh"));
ROUTE1502.setToField(CString("rotation"));
ROUTE1502.setToNode(CString("hanim_l_thigh"));
Scene7.addChild(&ROUTE1502);

ROUTE& ROUTE1503 =  ROUTE();
ROUTE1503.setFromField(CString("fraction_changed"));
ROUTE1503.setFromNode(CString("Armature_Clock"));
ROUTE1503.setToField(CString("set_fraction"));
ROUTE1503.setToNode(CString("Armature_OI_l_calf"));
Scene7.addChild(&ROUTE1503);

ROUTE& ROUTE1504 =  ROUTE();
ROUTE1504.setFromField(CString("value_changed"));
ROUTE1504.setFromNode(CString("Armature_OI_l_calf"));
ROUTE1504.setToField(CString("rotation"));
ROUTE1504.setToNode(CString("hanim_l_calf"));
Scene7.addChild(&ROUTE1504);

ROUTE& ROUTE1505 =  ROUTE();
ROUTE1505.setFromField(CString("fraction_changed"));
ROUTE1505.setFromNode(CString("Armature_Clock"));
ROUTE1505.setToField(CString("set_fraction"));
ROUTE1505.setToNode(CString("Armature_OI_l_talus"));
Scene7.addChild(&ROUTE1505);

ROUTE& ROUTE1506 =  ROUTE();
ROUTE1506.setFromField(CString("value_changed"));
ROUTE1506.setFromNode(CString("Armature_OI_l_talus"));
ROUTE1506.setToField(CString("rotation"));
ROUTE1506.setToNode(CString("hanim_l_talus"));
Scene7.addChild(&ROUTE1506);

ROUTE& ROUTE1507 =  ROUTE();
ROUTE1507.setFromField(CString("fraction_changed"));
ROUTE1507.setFromNode(CString("Armature_Clock"));
ROUTE1507.setToField(CString("set_fraction"));
ROUTE1507.setToNode(CString("Armature_OI_l_navicular"));
Scene7.addChild(&ROUTE1507);

ROUTE& ROUTE1508 =  ROUTE();
ROUTE1508.setFromField(CString("value_changed"));
ROUTE1508.setFromNode(CString("Armature_OI_l_navicular"));
ROUTE1508.setToField(CString("rotation"));
ROUTE1508.setToNode(CString("hanim_l_navicular"));
Scene7.addChild(&ROUTE1508);

ROUTE& ROUTE1509 =  ROUTE();
ROUTE1509.setFromField(CString("fraction_changed"));
ROUTE1509.setFromNode(CString("Armature_Clock"));
ROUTE1509.setToField(CString("set_fraction"));
ROUTE1509.setToNode(CString("Armature_OI_l_cuneiform_1"));
Scene7.addChild(&ROUTE1509);

ROUTE& ROUTE1510 =  ROUTE();
ROUTE1510.setFromField(CString("value_changed"));
ROUTE1510.setFromNode(CString("Armature_OI_l_cuneiform_1"));
ROUTE1510.setToField(CString("rotation"));
ROUTE1510.setToNode(CString("hanim_l_cuneiform_1"));
Scene7.addChild(&ROUTE1510);

ROUTE& ROUTE1511 =  ROUTE();
ROUTE1511.setFromField(CString("fraction_changed"));
ROUTE1511.setFromNode(CString("Armature_Clock"));
ROUTE1511.setToField(CString("set_fraction"));
ROUTE1511.setToNode(CString("Armature_OI_l_metatarsal_1"));
Scene7.addChild(&ROUTE1511);

ROUTE& ROUTE1512 =  ROUTE();
ROUTE1512.setFromField(CString("value_changed"));
ROUTE1512.setFromNode(CString("Armature_OI_l_metatarsal_1"));
ROUTE1512.setToField(CString("rotation"));
ROUTE1512.setToNode(CString("hanim_l_metatarsal_1"));
Scene7.addChild(&ROUTE1512);

ROUTE& ROUTE1513 =  ROUTE();
ROUTE1513.setFromField(CString("fraction_changed"));
ROUTE1513.setFromNode(CString("Armature_Clock"));
ROUTE1513.setToField(CString("set_fraction"));
ROUTE1513.setToNode(CString("Armature_OI_l_tarsal_proximal_phalanx_1"));
Scene7.addChild(&ROUTE1513);

ROUTE& ROUTE1514 =  ROUTE();
ROUTE1514.setFromField(CString("value_changed"));
ROUTE1514.setFromNode(CString("Armature_OI_l_tarsal_proximal_phalanx_1"));
ROUTE1514.setToField(CString("rotation"));
ROUTE1514.setToNode(CString("hanim_l_tarsal_proximal_phalanx_1"));
Scene7.addChild(&ROUTE1514);

ROUTE& ROUTE1515 =  ROUTE();
ROUTE1515.setFromField(CString("fraction_changed"));
ROUTE1515.setFromNode(CString("Armature_Clock"));
ROUTE1515.setToField(CString("set_fraction"));
ROUTE1515.setToNode(CString("Armature_OI_l_tarsal_distal_phalanx_1"));
Scene7.addChild(&ROUTE1515);

ROUTE& ROUTE1516 =  ROUTE();
ROUTE1516.setFromField(CString("value_changed"));
ROUTE1516.setFromNode(CString("Armature_OI_l_tarsal_distal_phalanx_1"));
ROUTE1516.setToField(CString("rotation"));
ROUTE1516.setToNode(CString("hanim_l_tarsal_distal_phalanx_1"));
Scene7.addChild(&ROUTE1516);

ROUTE& ROUTE1517 =  ROUTE();
ROUTE1517.setFromField(CString("fraction_changed"));
ROUTE1517.setFromNode(CString("Armature_Clock"));
ROUTE1517.setToField(CString("set_fraction"));
ROUTE1517.setToNode(CString("Armature_OI_l_cuneiform_2"));
Scene7.addChild(&ROUTE1517);

ROUTE& ROUTE1518 =  ROUTE();
ROUTE1518.setFromField(CString("value_changed"));
ROUTE1518.setFromNode(CString("Armature_OI_l_cuneiform_2"));
ROUTE1518.setToField(CString("rotation"));
ROUTE1518.setToNode(CString("hanim_l_cuneiform_2"));
Scene7.addChild(&ROUTE1518);

ROUTE& ROUTE1519 =  ROUTE();
ROUTE1519.setFromField(CString("fraction_changed"));
ROUTE1519.setFromNode(CString("Armature_Clock"));
ROUTE1519.setToField(CString("set_fraction"));
ROUTE1519.setToNode(CString("Armature_OI_l_metatarsal_2"));
Scene7.addChild(&ROUTE1519);

ROUTE& ROUTE1520 =  ROUTE();
ROUTE1520.setFromField(CString("value_changed"));
ROUTE1520.setFromNode(CString("Armature_OI_l_metatarsal_2"));
ROUTE1520.setToField(CString("rotation"));
ROUTE1520.setToNode(CString("hanim_l_metatarsal_2"));
Scene7.addChild(&ROUTE1520);

ROUTE& ROUTE1521 =  ROUTE();
ROUTE1521.setFromField(CString("fraction_changed"));
ROUTE1521.setFromNode(CString("Armature_Clock"));
ROUTE1521.setToField(CString("set_fraction"));
ROUTE1521.setToNode(CString("Armature_OI_l_tarsal_proximal_phalanx_2"));
Scene7.addChild(&ROUTE1521);

ROUTE& ROUTE1522 =  ROUTE();
ROUTE1522.setFromField(CString("value_changed"));
ROUTE1522.setFromNode(CString("Armature_OI_l_tarsal_proximal_phalanx_2"));
ROUTE1522.setToField(CString("rotation"));
ROUTE1522.setToNode(CString("hanim_l_tarsal_proximal_phalanx_2"));
Scene7.addChild(&ROUTE1522);

ROUTE& ROUTE1523 =  ROUTE();
ROUTE1523.setFromField(CString("fraction_changed"));
ROUTE1523.setFromNode(CString("Armature_Clock"));
ROUTE1523.setToField(CString("set_fraction"));
ROUTE1523.setToNode(CString("Armature_OI_l_tarsal_middle_phalanx_2"));
Scene7.addChild(&ROUTE1523);

ROUTE& ROUTE1524 =  ROUTE();
ROUTE1524.setFromField(CString("value_changed"));
ROUTE1524.setFromNode(CString("Armature_OI_l_tarsal_middle_phalanx_2"));
ROUTE1524.setToField(CString("rotation"));
ROUTE1524.setToNode(CString("hanim_l_tarsal_middle_phalanx_2"));
Scene7.addChild(&ROUTE1524);

ROUTE& ROUTE1525 =  ROUTE();
ROUTE1525.setFromField(CString("fraction_changed"));
ROUTE1525.setFromNode(CString("Armature_Clock"));
ROUTE1525.setToField(CString("set_fraction"));
ROUTE1525.setToNode(CString("Armature_OI_l_tarsal_distal_phalanx_2"));
Scene7.addChild(&ROUTE1525);

ROUTE& ROUTE1526 =  ROUTE();
ROUTE1526.setFromField(CString("value_changed"));
ROUTE1526.setFromNode(CString("Armature_OI_l_tarsal_distal_phalanx_2"));
ROUTE1526.setToField(CString("rotation"));
ROUTE1526.setToNode(CString("hanim_l_tarsal_distal_phalanx_2"));
Scene7.addChild(&ROUTE1526);

ROUTE& ROUTE1527 =  ROUTE();
ROUTE1527.setFromField(CString("fraction_changed"));
ROUTE1527.setFromNode(CString("Armature_Clock"));
ROUTE1527.setToField(CString("set_fraction"));
ROUTE1527.setToNode(CString("Armature_OI_l_cuneiform_3"));
Scene7.addChild(&ROUTE1527);

ROUTE& ROUTE1528 =  ROUTE();
ROUTE1528.setFromField(CString("value_changed"));
ROUTE1528.setFromNode(CString("Armature_OI_l_cuneiform_3"));
ROUTE1528.setToField(CString("rotation"));
ROUTE1528.setToNode(CString("hanim_l_cuneiform_3"));
Scene7.addChild(&ROUTE1528);

ROUTE& ROUTE1529 =  ROUTE();
ROUTE1529.setFromField(CString("fraction_changed"));
ROUTE1529.setFromNode(CString("Armature_Clock"));
ROUTE1529.setToField(CString("set_fraction"));
ROUTE1529.setToNode(CString("Armature_OI_l_metatarsal_3"));
Scene7.addChild(&ROUTE1529);

ROUTE& ROUTE1530 =  ROUTE();
ROUTE1530.setFromField(CString("value_changed"));
ROUTE1530.setFromNode(CString("Armature_OI_l_metatarsal_3"));
ROUTE1530.setToField(CString("rotation"));
ROUTE1530.setToNode(CString("hanim_l_metatarsal_3"));
Scene7.addChild(&ROUTE1530);

ROUTE& ROUTE1531 =  ROUTE();
ROUTE1531.setFromField(CString("fraction_changed"));
ROUTE1531.setFromNode(CString("Armature_Clock"));
ROUTE1531.setToField(CString("set_fraction"));
ROUTE1531.setToNode(CString("Armature_OI_l_tarsal_proximal_phalanx_3"));
Scene7.addChild(&ROUTE1531);

ROUTE& ROUTE1532 =  ROUTE();
ROUTE1532.setFromField(CString("value_changed"));
ROUTE1532.setFromNode(CString("Armature_OI_l_tarsal_proximal_phalanx_3"));
ROUTE1532.setToField(CString("rotation"));
ROUTE1532.setToNode(CString("hanim_l_tarsal_proximal_phalanx_3"));
Scene7.addChild(&ROUTE1532);

ROUTE& ROUTE1533 =  ROUTE();
ROUTE1533.setFromField(CString("fraction_changed"));
ROUTE1533.setFromNode(CString("Armature_Clock"));
ROUTE1533.setToField(CString("set_fraction"));
ROUTE1533.setToNode(CString("Armature_OI_l_tarsal_middle_phalanx_3"));
Scene7.addChild(&ROUTE1533);

ROUTE& ROUTE1534 =  ROUTE();
ROUTE1534.setFromField(CString("value_changed"));
ROUTE1534.setFromNode(CString("Armature_OI_l_tarsal_middle_phalanx_3"));
ROUTE1534.setToField(CString("rotation"));
ROUTE1534.setToNode(CString("hanim_l_tarsal_middle_phalanx_3"));
Scene7.addChild(&ROUTE1534);

ROUTE& ROUTE1535 =  ROUTE();
ROUTE1535.setFromField(CString("fraction_changed"));
ROUTE1535.setFromNode(CString("Armature_Clock"));
ROUTE1535.setToField(CString("set_fraction"));
ROUTE1535.setToNode(CString("Armature_OI_l_tarsal_distal_phalanx_3"));
Scene7.addChild(&ROUTE1535);

ROUTE& ROUTE1536 =  ROUTE();
ROUTE1536.setFromField(CString("value_changed"));
ROUTE1536.setFromNode(CString("Armature_OI_l_tarsal_distal_phalanx_3"));
ROUTE1536.setToField(CString("rotation"));
ROUTE1536.setToNode(CString("hanim_l_tarsal_distal_phalanx_3"));
Scene7.addChild(&ROUTE1536);

ROUTE& ROUTE1537 =  ROUTE();
ROUTE1537.setFromField(CString("fraction_changed"));
ROUTE1537.setFromNode(CString("Armature_Clock"));
ROUTE1537.setToField(CString("set_fraction"));
ROUTE1537.setToNode(CString("Armature_OI_l_calcaneus"));
Scene7.addChild(&ROUTE1537);

ROUTE& ROUTE1538 =  ROUTE();
ROUTE1538.setFromField(CString("value_changed"));
ROUTE1538.setFromNode(CString("Armature_OI_l_calcaneus"));
ROUTE1538.setToField(CString("rotation"));
ROUTE1538.setToNode(CString("hanim_l_calcaneus"));
Scene7.addChild(&ROUTE1538);

ROUTE& ROUTE1539 =  ROUTE();
ROUTE1539.setFromField(CString("fraction_changed"));
ROUTE1539.setFromNode(CString("Armature_Clock"));
ROUTE1539.setToField(CString("set_fraction"));
ROUTE1539.setToNode(CString("Armature_OI_l_cuboid"));
Scene7.addChild(&ROUTE1539);

ROUTE& ROUTE1540 =  ROUTE();
ROUTE1540.setFromField(CString("value_changed"));
ROUTE1540.setFromNode(CString("Armature_OI_l_cuboid"));
ROUTE1540.setToField(CString("rotation"));
ROUTE1540.setToNode(CString("hanim_l_cuboid"));
Scene7.addChild(&ROUTE1540);

ROUTE& ROUTE1541 =  ROUTE();
ROUTE1541.setFromField(CString("fraction_changed"));
ROUTE1541.setFromNode(CString("Armature_Clock"));
ROUTE1541.setToField(CString("set_fraction"));
ROUTE1541.setToNode(CString("Armature_OI_l_metatarsal_4"));
Scene7.addChild(&ROUTE1541);

ROUTE& ROUTE1542 =  ROUTE();
ROUTE1542.setFromField(CString("value_changed"));
ROUTE1542.setFromNode(CString("Armature_OI_l_metatarsal_4"));
ROUTE1542.setToField(CString("rotation"));
ROUTE1542.setToNode(CString("hanim_l_metatarsal_4"));
Scene7.addChild(&ROUTE1542);

ROUTE& ROUTE1543 =  ROUTE();
ROUTE1543.setFromField(CString("fraction_changed"));
ROUTE1543.setFromNode(CString("Armature_Clock"));
ROUTE1543.setToField(CString("set_fraction"));
ROUTE1543.setToNode(CString("Armature_OI_l_tarsal_proximal_phalanx_4"));
Scene7.addChild(&ROUTE1543);

ROUTE& ROUTE1544 =  ROUTE();
ROUTE1544.setFromField(CString("value_changed"));
ROUTE1544.setFromNode(CString("Armature_OI_l_tarsal_proximal_phalanx_4"));
ROUTE1544.setToField(CString("rotation"));
ROUTE1544.setToNode(CString("hanim_l_tarsal_proximal_phalanx_4"));
Scene7.addChild(&ROUTE1544);

ROUTE& ROUTE1545 =  ROUTE();
ROUTE1545.setFromField(CString("fraction_changed"));
ROUTE1545.setFromNode(CString("Armature_Clock"));
ROUTE1545.setToField(CString("set_fraction"));
ROUTE1545.setToNode(CString("Armature_OI_l_tarsal_middle_phalanx_4"));
Scene7.addChild(&ROUTE1545);

ROUTE& ROUTE1546 =  ROUTE();
ROUTE1546.setFromField(CString("value_changed"));
ROUTE1546.setFromNode(CString("Armature_OI_l_tarsal_middle_phalanx_4"));
ROUTE1546.setToField(CString("rotation"));
ROUTE1546.setToNode(CString("hanim_l_tarsal_middle_phalanx_4"));
Scene7.addChild(&ROUTE1546);

ROUTE& ROUTE1547 =  ROUTE();
ROUTE1547.setFromField(CString("fraction_changed"));
ROUTE1547.setFromNode(CString("Armature_Clock"));
ROUTE1547.setToField(CString("set_fraction"));
ROUTE1547.setToNode(CString("Armature_OI_l_tarsal_distal_phalanx_4"));
Scene7.addChild(&ROUTE1547);

ROUTE& ROUTE1548 =  ROUTE();
ROUTE1548.setFromField(CString("value_changed"));
ROUTE1548.setFromNode(CString("Armature_OI_l_tarsal_distal_phalanx_4"));
ROUTE1548.setToField(CString("rotation"));
ROUTE1548.setToNode(CString("hanim_l_tarsal_distal_phalanx_4"));
Scene7.addChild(&ROUTE1548);

ROUTE& ROUTE1549 =  ROUTE();
ROUTE1549.setFromField(CString("fraction_changed"));
ROUTE1549.setFromNode(CString("Armature_Clock"));
ROUTE1549.setToField(CString("set_fraction"));
ROUTE1549.setToNode(CString("Armature_OI_l_metatarsal_5"));
Scene7.addChild(&ROUTE1549);

ROUTE& ROUTE1550 =  ROUTE();
ROUTE1550.setFromField(CString("value_changed"));
ROUTE1550.setFromNode(CString("Armature_OI_l_metatarsal_5"));
ROUTE1550.setToField(CString("rotation"));
ROUTE1550.setToNode(CString("hanim_l_metatarsal_5"));
Scene7.addChild(&ROUTE1550);

ROUTE& ROUTE1551 =  ROUTE();
ROUTE1551.setFromField(CString("fraction_changed"));
ROUTE1551.setFromNode(CString("Armature_Clock"));
ROUTE1551.setToField(CString("set_fraction"));
ROUTE1551.setToNode(CString("Armature_OI_l_tarsal_proximal_phalanx_5"));
Scene7.addChild(&ROUTE1551);

ROUTE& ROUTE1552 =  ROUTE();
ROUTE1552.setFromField(CString("value_changed"));
ROUTE1552.setFromNode(CString("Armature_OI_l_tarsal_proximal_phalanx_5"));
ROUTE1552.setToField(CString("rotation"));
ROUTE1552.setToNode(CString("hanim_l_tarsal_proximal_phalanx_5"));
Scene7.addChild(&ROUTE1552);

ROUTE& ROUTE1553 =  ROUTE();
ROUTE1553.setFromField(CString("fraction_changed"));
ROUTE1553.setFromNode(CString("Armature_Clock"));
ROUTE1553.setToField(CString("set_fraction"));
ROUTE1553.setToNode(CString("Armature_OI_l_tarsal_middle_phalanx_5"));
Scene7.addChild(&ROUTE1553);

ROUTE& ROUTE1554 =  ROUTE();
ROUTE1554.setFromField(CString("value_changed"));
ROUTE1554.setFromNode(CString("Armature_OI_l_tarsal_middle_phalanx_5"));
ROUTE1554.setToField(CString("rotation"));
ROUTE1554.setToNode(CString("hanim_l_tarsal_middle_phalanx_5"));
Scene7.addChild(&ROUTE1554);

ROUTE& ROUTE1555 =  ROUTE();
ROUTE1555.setFromField(CString("fraction_changed"));
ROUTE1555.setFromNode(CString("Armature_Clock"));
ROUTE1555.setToField(CString("set_fraction"));
ROUTE1555.setToNode(CString("Armature_OI_l_tarsal_distal_phalanx_5"));
Scene7.addChild(&ROUTE1555);

ROUTE& ROUTE1556 =  ROUTE();
ROUTE1556.setFromField(CString("value_changed"));
ROUTE1556.setFromNode(CString("Armature_OI_l_tarsal_distal_phalanx_5"));
ROUTE1556.setToField(CString("rotation"));
ROUTE1556.setToNode(CString("hanim_l_tarsal_distal_phalanx_5"));
Scene7.addChild(&ROUTE1556);

ROUTE& ROUTE1557 =  ROUTE();
ROUTE1557.setFromField(CString("fraction_changed"));
ROUTE1557.setFromNode(CString("Armature_Clock"));
ROUTE1557.setToField(CString("set_fraction"));
ROUTE1557.setToNode(CString("Armature_OI_r_thigh"));
Scene7.addChild(&ROUTE1557);

ROUTE& ROUTE1558 =  ROUTE();
ROUTE1558.setFromField(CString("value_changed"));
ROUTE1558.setFromNode(CString("Armature_OI_r_thigh"));
ROUTE1558.setToField(CString("rotation"));
ROUTE1558.setToNode(CString("hanim_r_thigh"));
Scene7.addChild(&ROUTE1558);

ROUTE& ROUTE1559 =  ROUTE();
ROUTE1559.setFromField(CString("fraction_changed"));
ROUTE1559.setFromNode(CString("Armature_Clock"));
ROUTE1559.setToField(CString("set_fraction"));
ROUTE1559.setToNode(CString("Armature_OI_r_calf"));
Scene7.addChild(&ROUTE1559);

ROUTE& ROUTE1560 =  ROUTE();
ROUTE1560.setFromField(CString("value_changed"));
ROUTE1560.setFromNode(CString("Armature_OI_r_calf"));
ROUTE1560.setToField(CString("rotation"));
ROUTE1560.setToNode(CString("hanim_r_calf"));
Scene7.addChild(&ROUTE1560);

ROUTE& ROUTE1561 =  ROUTE();
ROUTE1561.setFromField(CString("fraction_changed"));
ROUTE1561.setFromNode(CString("Armature_Clock"));
ROUTE1561.setToField(CString("set_fraction"));
ROUTE1561.setToNode(CString("Armature_OI_r_talus"));
Scene7.addChild(&ROUTE1561);

ROUTE& ROUTE1562 =  ROUTE();
ROUTE1562.setFromField(CString("value_changed"));
ROUTE1562.setFromNode(CString("Armature_OI_r_talus"));
ROUTE1562.setToField(CString("rotation"));
ROUTE1562.setToNode(CString("hanim_r_talus"));
Scene7.addChild(&ROUTE1562);

ROUTE& ROUTE1563 =  ROUTE();
ROUTE1563.setFromField(CString("fraction_changed"));
ROUTE1563.setFromNode(CString("Armature_Clock"));
ROUTE1563.setToField(CString("set_fraction"));
ROUTE1563.setToNode(CString("Armature_OI_r_navicular"));
Scene7.addChild(&ROUTE1563);

ROUTE& ROUTE1564 =  ROUTE();
ROUTE1564.setFromField(CString("value_changed"));
ROUTE1564.setFromNode(CString("Armature_OI_r_navicular"));
ROUTE1564.setToField(CString("rotation"));
ROUTE1564.setToNode(CString("hanim_r_navicular"));
Scene7.addChild(&ROUTE1564);

ROUTE& ROUTE1565 =  ROUTE();
ROUTE1565.setFromField(CString("fraction_changed"));
ROUTE1565.setFromNode(CString("Armature_Clock"));
ROUTE1565.setToField(CString("set_fraction"));
ROUTE1565.setToNode(CString("Armature_OI_r_cuneiform_1"));
Scene7.addChild(&ROUTE1565);

ROUTE& ROUTE1566 =  ROUTE();
ROUTE1566.setFromField(CString("value_changed"));
ROUTE1566.setFromNode(CString("Armature_OI_r_cuneiform_1"));
ROUTE1566.setToField(CString("rotation"));
ROUTE1566.setToNode(CString("hanim_r_cuneiform_1"));
Scene7.addChild(&ROUTE1566);

ROUTE& ROUTE1567 =  ROUTE();
ROUTE1567.setFromField(CString("fraction_changed"));
ROUTE1567.setFromNode(CString("Armature_Clock"));
ROUTE1567.setToField(CString("set_fraction"));
ROUTE1567.setToNode(CString("Armature_OI_r_metatarsal_1"));
Scene7.addChild(&ROUTE1567);

ROUTE& ROUTE1568 =  ROUTE();
ROUTE1568.setFromField(CString("value_changed"));
ROUTE1568.setFromNode(CString("Armature_OI_r_metatarsal_1"));
ROUTE1568.setToField(CString("rotation"));
ROUTE1568.setToNode(CString("hanim_r_metatarsal_1"));
Scene7.addChild(&ROUTE1568);

ROUTE& ROUTE1569 =  ROUTE();
ROUTE1569.setFromField(CString("fraction_changed"));
ROUTE1569.setFromNode(CString("Armature_Clock"));
ROUTE1569.setToField(CString("set_fraction"));
ROUTE1569.setToNode(CString("Armature_OI_r_tarsal_proximal_phalanx_1"));
Scene7.addChild(&ROUTE1569);

ROUTE& ROUTE1570 =  ROUTE();
ROUTE1570.setFromField(CString("value_changed"));
ROUTE1570.setFromNode(CString("Armature_OI_r_tarsal_proximal_phalanx_1"));
ROUTE1570.setToField(CString("rotation"));
ROUTE1570.setToNode(CString("hanim_r_tarsal_proximal_phalanx_1"));
Scene7.addChild(&ROUTE1570);

ROUTE& ROUTE1571 =  ROUTE();
ROUTE1571.setFromField(CString("fraction_changed"));
ROUTE1571.setFromNode(CString("Armature_Clock"));
ROUTE1571.setToField(CString("set_fraction"));
ROUTE1571.setToNode(CString("Armature_OI_r_tarsal_distal_phalanx_1"));
Scene7.addChild(&ROUTE1571);

ROUTE& ROUTE1572 =  ROUTE();
ROUTE1572.setFromField(CString("value_changed"));
ROUTE1572.setFromNode(CString("Armature_OI_r_tarsal_distal_phalanx_1"));
ROUTE1572.setToField(CString("rotation"));
ROUTE1572.setToNode(CString("hanim_r_tarsal_distal_phalanx_1"));
Scene7.addChild(&ROUTE1572);

ROUTE& ROUTE1573 =  ROUTE();
ROUTE1573.setFromField(CString("fraction_changed"));
ROUTE1573.setFromNode(CString("Armature_Clock"));
ROUTE1573.setToField(CString("set_fraction"));
ROUTE1573.setToNode(CString("Armature_OI_r_cuneiform_2"));
Scene7.addChild(&ROUTE1573);

ROUTE& ROUTE1574 =  ROUTE();
ROUTE1574.setFromField(CString("value_changed"));
ROUTE1574.setFromNode(CString("Armature_OI_r_cuneiform_2"));
ROUTE1574.setToField(CString("rotation"));
ROUTE1574.setToNode(CString("hanim_r_cuneiform_2"));
Scene7.addChild(&ROUTE1574);

ROUTE& ROUTE1575 =  ROUTE();
ROUTE1575.setFromField(CString("fraction_changed"));
ROUTE1575.setFromNode(CString("Armature_Clock"));
ROUTE1575.setToField(CString("set_fraction"));
ROUTE1575.setToNode(CString("Armature_OI_r_metatarsal_2"));
Scene7.addChild(&ROUTE1575);

ROUTE& ROUTE1576 =  ROUTE();
ROUTE1576.setFromField(CString("value_changed"));
ROUTE1576.setFromNode(CString("Armature_OI_r_metatarsal_2"));
ROUTE1576.setToField(CString("rotation"));
ROUTE1576.setToNode(CString("hanim_r_metatarsal_2"));
Scene7.addChild(&ROUTE1576);

ROUTE& ROUTE1577 =  ROUTE();
ROUTE1577.setFromField(CString("fraction_changed"));
ROUTE1577.setFromNode(CString("Armature_Clock"));
ROUTE1577.setToField(CString("set_fraction"));
ROUTE1577.setToNode(CString("Armature_OI_r_tarsal_proximal_phalanx_2"));
Scene7.addChild(&ROUTE1577);

ROUTE& ROUTE1578 =  ROUTE();
ROUTE1578.setFromField(CString("value_changed"));
ROUTE1578.setFromNode(CString("Armature_OI_r_tarsal_proximal_phalanx_2"));
ROUTE1578.setToField(CString("rotation"));
ROUTE1578.setToNode(CString("hanim_r_tarsal_proximal_phalanx_2"));
Scene7.addChild(&ROUTE1578);

ROUTE& ROUTE1579 =  ROUTE();
ROUTE1579.setFromField(CString("fraction_changed"));
ROUTE1579.setFromNode(CString("Armature_Clock"));
ROUTE1579.setToField(CString("set_fraction"));
ROUTE1579.setToNode(CString("Armature_OI_r_tarsal_middle_phalanx_2"));
Scene7.addChild(&ROUTE1579);

ROUTE& ROUTE1580 =  ROUTE();
ROUTE1580.setFromField(CString("value_changed"));
ROUTE1580.setFromNode(CString("Armature_OI_r_tarsal_middle_phalanx_2"));
ROUTE1580.setToField(CString("rotation"));
ROUTE1580.setToNode(CString("hanim_r_tarsal_middle_phalanx_2"));
Scene7.addChild(&ROUTE1580);

ROUTE& ROUTE1581 =  ROUTE();
ROUTE1581.setFromField(CString("fraction_changed"));
ROUTE1581.setFromNode(CString("Armature_Clock"));
ROUTE1581.setToField(CString("set_fraction"));
ROUTE1581.setToNode(CString("Armature_OI_r_tarsal_distal_phalanx_2"));
Scene7.addChild(&ROUTE1581);

ROUTE& ROUTE1582 =  ROUTE();
ROUTE1582.setFromField(CString("value_changed"));
ROUTE1582.setFromNode(CString("Armature_OI_r_tarsal_distal_phalanx_2"));
ROUTE1582.setToField(CString("rotation"));
ROUTE1582.setToNode(CString("hanim_r_tarsal_distal_phalanx_2"));
Scene7.addChild(&ROUTE1582);

ROUTE& ROUTE1583 =  ROUTE();
ROUTE1583.setFromField(CString("fraction_changed"));
ROUTE1583.setFromNode(CString("Armature_Clock"));
ROUTE1583.setToField(CString("set_fraction"));
ROUTE1583.setToNode(CString("Armature_OI_r_cuneiform_3"));
Scene7.addChild(&ROUTE1583);

ROUTE& ROUTE1584 =  ROUTE();
ROUTE1584.setFromField(CString("value_changed"));
ROUTE1584.setFromNode(CString("Armature_OI_r_cuneiform_3"));
ROUTE1584.setToField(CString("rotation"));
ROUTE1584.setToNode(CString("hanim_r_cuneiform_3"));
Scene7.addChild(&ROUTE1584);

ROUTE& ROUTE1585 =  ROUTE();
ROUTE1585.setFromField(CString("fraction_changed"));
ROUTE1585.setFromNode(CString("Armature_Clock"));
ROUTE1585.setToField(CString("set_fraction"));
ROUTE1585.setToNode(CString("Armature_OI_r_metatarsal_3"));
Scene7.addChild(&ROUTE1585);

ROUTE& ROUTE1586 =  ROUTE();
ROUTE1586.setFromField(CString("value_changed"));
ROUTE1586.setFromNode(CString("Armature_OI_r_metatarsal_3"));
ROUTE1586.setToField(CString("rotation"));
ROUTE1586.setToNode(CString("hanim_r_metatarsal_3"));
Scene7.addChild(&ROUTE1586);

ROUTE& ROUTE1587 =  ROUTE();
ROUTE1587.setFromField(CString("fraction_changed"));
ROUTE1587.setFromNode(CString("Armature_Clock"));
ROUTE1587.setToField(CString("set_fraction"));
ROUTE1587.setToNode(CString("Armature_OI_r_tarsal_proximal_phalanx_3"));
Scene7.addChild(&ROUTE1587);

ROUTE& ROUTE1588 =  ROUTE();
ROUTE1588.setFromField(CString("value_changed"));
ROUTE1588.setFromNode(CString("Armature_OI_r_tarsal_proximal_phalanx_3"));
ROUTE1588.setToField(CString("rotation"));
ROUTE1588.setToNode(CString("hanim_r_tarsal_proximal_phalanx_3"));
Scene7.addChild(&ROUTE1588);

ROUTE& ROUTE1589 =  ROUTE();
ROUTE1589.setFromField(CString("fraction_changed"));
ROUTE1589.setFromNode(CString("Armature_Clock"));
ROUTE1589.setToField(CString("set_fraction"));
ROUTE1589.setToNode(CString("Armature_OI_r_tarsal_middle_phalanx_3"));
Scene7.addChild(&ROUTE1589);

ROUTE& ROUTE1590 =  ROUTE();
ROUTE1590.setFromField(CString("value_changed"));
ROUTE1590.setFromNode(CString("Armature_OI_r_tarsal_middle_phalanx_3"));
ROUTE1590.setToField(CString("rotation"));
ROUTE1590.setToNode(CString("hanim_r_tarsal_middle_phalanx_3"));
Scene7.addChild(&ROUTE1590);

ROUTE& ROUTE1591 =  ROUTE();
ROUTE1591.setFromField(CString("fraction_changed"));
ROUTE1591.setFromNode(CString("Armature_Clock"));
ROUTE1591.setToField(CString("set_fraction"));
ROUTE1591.setToNode(CString("Armature_OI_r_tarsal_distal_phalanx_3"));
Scene7.addChild(&ROUTE1591);

ROUTE& ROUTE1592 =  ROUTE();
ROUTE1592.setFromField(CString("value_changed"));
ROUTE1592.setFromNode(CString("Armature_OI_r_tarsal_distal_phalanx_3"));
ROUTE1592.setToField(CString("rotation"));
ROUTE1592.setToNode(CString("hanim_r_tarsal_distal_phalanx_3"));
Scene7.addChild(&ROUTE1592);

ROUTE& ROUTE1593 =  ROUTE();
ROUTE1593.setFromField(CString("fraction_changed"));
ROUTE1593.setFromNode(CString("Armature_Clock"));
ROUTE1593.setToField(CString("set_fraction"));
ROUTE1593.setToNode(CString("Armature_OI_r_calcaneus"));
Scene7.addChild(&ROUTE1593);

ROUTE& ROUTE1594 =  ROUTE();
ROUTE1594.setFromField(CString("value_changed"));
ROUTE1594.setFromNode(CString("Armature_OI_r_calcaneus"));
ROUTE1594.setToField(CString("rotation"));
ROUTE1594.setToNode(CString("hanim_r_calcaneus"));
Scene7.addChild(&ROUTE1594);

ROUTE& ROUTE1595 =  ROUTE();
ROUTE1595.setFromField(CString("fraction_changed"));
ROUTE1595.setFromNode(CString("Armature_Clock"));
ROUTE1595.setToField(CString("set_fraction"));
ROUTE1595.setToNode(CString("Armature_OI_r_cuboid"));
Scene7.addChild(&ROUTE1595);

ROUTE& ROUTE1596 =  ROUTE();
ROUTE1596.setFromField(CString("value_changed"));
ROUTE1596.setFromNode(CString("Armature_OI_r_cuboid"));
ROUTE1596.setToField(CString("rotation"));
ROUTE1596.setToNode(CString("hanim_r_cuboid"));
Scene7.addChild(&ROUTE1596);

ROUTE& ROUTE1597 =  ROUTE();
ROUTE1597.setFromField(CString("fraction_changed"));
ROUTE1597.setFromNode(CString("Armature_Clock"));
ROUTE1597.setToField(CString("set_fraction"));
ROUTE1597.setToNode(CString("Armature_OI_r_metatarsal_4"));
Scene7.addChild(&ROUTE1597);

ROUTE& ROUTE1598 =  ROUTE();
ROUTE1598.setFromField(CString("value_changed"));
ROUTE1598.setFromNode(CString("Armature_OI_r_metatarsal_4"));
ROUTE1598.setToField(CString("rotation"));
ROUTE1598.setToNode(CString("hanim_r_metatarsal_4"));
Scene7.addChild(&ROUTE1598);

ROUTE& ROUTE1599 =  ROUTE();
ROUTE1599.setFromField(CString("fraction_changed"));
ROUTE1599.setFromNode(CString("Armature_Clock"));
ROUTE1599.setToField(CString("set_fraction"));
ROUTE1599.setToNode(CString("Armature_OI_r_tarsal_proximal_phalanx_4"));
Scene7.addChild(&ROUTE1599);

ROUTE& ROUTE1600 =  ROUTE();
ROUTE1600.setFromField(CString("value_changed"));
ROUTE1600.setFromNode(CString("Armature_OI_r_tarsal_proximal_phalanx_4"));
ROUTE1600.setToField(CString("rotation"));
ROUTE1600.setToNode(CString("hanim_r_tarsal_proximal_phalanx_4"));
Scene7.addChild(&ROUTE1600);

ROUTE& ROUTE1601 =  ROUTE();
ROUTE1601.setFromField(CString("fraction_changed"));
ROUTE1601.setFromNode(CString("Armature_Clock"));
ROUTE1601.setToField(CString("set_fraction"));
ROUTE1601.setToNode(CString("Armature_OI_r_tarsal_middle_phalanx_4"));
Scene7.addChild(&ROUTE1601);

ROUTE& ROUTE1602 =  ROUTE();
ROUTE1602.setFromField(CString("value_changed"));
ROUTE1602.setFromNode(CString("Armature_OI_r_tarsal_middle_phalanx_4"));
ROUTE1602.setToField(CString("rotation"));
ROUTE1602.setToNode(CString("hanim_r_tarsal_middle_phalanx_4"));
Scene7.addChild(&ROUTE1602);

ROUTE& ROUTE1603 =  ROUTE();
ROUTE1603.setFromField(CString("fraction_changed"));
ROUTE1603.setFromNode(CString("Armature_Clock"));
ROUTE1603.setToField(CString("set_fraction"));
ROUTE1603.setToNode(CString("Armature_OI_r_tarsal_distal_phalanx_4"));
Scene7.addChild(&ROUTE1603);

ROUTE& ROUTE1604 =  ROUTE();
ROUTE1604.setFromField(CString("value_changed"));
ROUTE1604.setFromNode(CString("Armature_OI_r_tarsal_distal_phalanx_4"));
ROUTE1604.setToField(CString("rotation"));
ROUTE1604.setToNode(CString("hanim_r_tarsal_distal_phalanx_4"));
Scene7.addChild(&ROUTE1604);

ROUTE& ROUTE1605 =  ROUTE();
ROUTE1605.setFromField(CString("fraction_changed"));
ROUTE1605.setFromNode(CString("Armature_Clock"));
ROUTE1605.setToField(CString("set_fraction"));
ROUTE1605.setToNode(CString("Armature_OI_r_metatarsal_5"));
Scene7.addChild(&ROUTE1605);

ROUTE& ROUTE1606 =  ROUTE();
ROUTE1606.setFromField(CString("value_changed"));
ROUTE1606.setFromNode(CString("Armature_OI_r_metatarsal_5"));
ROUTE1606.setToField(CString("rotation"));
ROUTE1606.setToNode(CString("hanim_r_metatarsal_5"));
Scene7.addChild(&ROUTE1606);

ROUTE& ROUTE1607 =  ROUTE();
ROUTE1607.setFromField(CString("fraction_changed"));
ROUTE1607.setFromNode(CString("Armature_Clock"));
ROUTE1607.setToField(CString("set_fraction"));
ROUTE1607.setToNode(CString("Armature_OI_r_tarsal_proximal_phalanx_5"));
Scene7.addChild(&ROUTE1607);

ROUTE& ROUTE1608 =  ROUTE();
ROUTE1608.setFromField(CString("value_changed"));
ROUTE1608.setFromNode(CString("Armature_OI_r_tarsal_proximal_phalanx_5"));
ROUTE1608.setToField(CString("rotation"));
ROUTE1608.setToNode(CString("hanim_r_tarsal_proximal_phalanx_5"));
Scene7.addChild(&ROUTE1608);

ROUTE& ROUTE1609 =  ROUTE();
ROUTE1609.setFromField(CString("fraction_changed"));
ROUTE1609.setFromNode(CString("Armature_Clock"));
ROUTE1609.setToField(CString("set_fraction"));
ROUTE1609.setToNode(CString("Armature_OI_r_tarsal_middle_phalanx_5"));
Scene7.addChild(&ROUTE1609);

ROUTE& ROUTE1610 =  ROUTE();
ROUTE1610.setFromField(CString("value_changed"));
ROUTE1610.setFromNode(CString("Armature_OI_r_tarsal_middle_phalanx_5"));
ROUTE1610.setToField(CString("rotation"));
ROUTE1610.setToNode(CString("hanim_r_tarsal_middle_phalanx_5"));
Scene7.addChild(&ROUTE1610);

ROUTE& ROUTE1611 =  ROUTE();
ROUTE1611.setFromField(CString("fraction_changed"));
ROUTE1611.setFromNode(CString("Armature_Clock"));
ROUTE1611.setToField(CString("set_fraction"));
ROUTE1611.setToNode(CString("Armature_OI_r_tarsal_distal_phalanx_5"));
Scene7.addChild(&ROUTE1611);

ROUTE& ROUTE1612 =  ROUTE();
ROUTE1612.setFromField(CString("value_changed"));
ROUTE1612.setFromNode(CString("Armature_OI_r_tarsal_distal_phalanx_5"));
ROUTE1612.setToField(CString("rotation"));
ROUTE1612.setToNode(CString("hanim_r_tarsal_distal_phalanx_5"));
Scene7.addChild(&ROUTE1612);

ROUTE& ROUTE1613 =  ROUTE();
ROUTE1613.setFromField(CString("fraction_changed"));
ROUTE1613.setFromNode(CString("Armature_Clock"));
ROUTE1613.setToField(CString("set_fraction"));
ROUTE1613.setToNode(CString("Armature_OI_l5"));
Scene7.addChild(&ROUTE1613);

ROUTE& ROUTE1614 =  ROUTE();
ROUTE1614.setFromField(CString("value_changed"));
ROUTE1614.setFromNode(CString("Armature_OI_l5"));
ROUTE1614.setToField(CString("rotation"));
ROUTE1614.setToNode(CString("hanim_l5"));
Scene7.addChild(&ROUTE1614);

ROUTE& ROUTE1615 =  ROUTE();
ROUTE1615.setFromField(CString("fraction_changed"));
ROUTE1615.setFromNode(CString("Armature_Clock"));
ROUTE1615.setToField(CString("set_fraction"));
ROUTE1615.setToNode(CString("Armature_OI_l4"));
Scene7.addChild(&ROUTE1615);

ROUTE& ROUTE1616 =  ROUTE();
ROUTE1616.setFromField(CString("value_changed"));
ROUTE1616.setFromNode(CString("Armature_OI_l4"));
ROUTE1616.setToField(CString("rotation"));
ROUTE1616.setToNode(CString("hanim_l4"));
Scene7.addChild(&ROUTE1616);

ROUTE& ROUTE1617 =  ROUTE();
ROUTE1617.setFromField(CString("fraction_changed"));
ROUTE1617.setFromNode(CString("Armature_Clock"));
ROUTE1617.setToField(CString("set_fraction"));
ROUTE1617.setToNode(CString("Armature_OI_l3"));
Scene7.addChild(&ROUTE1617);

ROUTE& ROUTE1618 =  ROUTE();
ROUTE1618.setFromField(CString("value_changed"));
ROUTE1618.setFromNode(CString("Armature_OI_l3"));
ROUTE1618.setToField(CString("rotation"));
ROUTE1618.setToNode(CString("hanim_l3"));
Scene7.addChild(&ROUTE1618);

ROUTE& ROUTE1619 =  ROUTE();
ROUTE1619.setFromField(CString("fraction_changed"));
ROUTE1619.setFromNode(CString("Armature_Clock"));
ROUTE1619.setToField(CString("set_fraction"));
ROUTE1619.setToNode(CString("Armature_OI_l2"));
Scene7.addChild(&ROUTE1619);

ROUTE& ROUTE1620 =  ROUTE();
ROUTE1620.setFromField(CString("value_changed"));
ROUTE1620.setFromNode(CString("Armature_OI_l2"));
ROUTE1620.setToField(CString("rotation"));
ROUTE1620.setToNode(CString("hanim_l2"));
Scene7.addChild(&ROUTE1620);

ROUTE& ROUTE1621 =  ROUTE();
ROUTE1621.setFromField(CString("fraction_changed"));
ROUTE1621.setFromNode(CString("Armature_Clock"));
ROUTE1621.setToField(CString("set_fraction"));
ROUTE1621.setToNode(CString("Armature_OI_l1"));
Scene7.addChild(&ROUTE1621);

ROUTE& ROUTE1622 =  ROUTE();
ROUTE1622.setFromField(CString("value_changed"));
ROUTE1622.setFromNode(CString("Armature_OI_l1"));
ROUTE1622.setToField(CString("rotation"));
ROUTE1622.setToNode(CString("hanim_l1"));
Scene7.addChild(&ROUTE1622);

ROUTE& ROUTE1623 =  ROUTE();
ROUTE1623.setFromField(CString("fraction_changed"));
ROUTE1623.setFromNode(CString("Armature_Clock"));
ROUTE1623.setToField(CString("set_fraction"));
ROUTE1623.setToNode(CString("Armature_OI_t12"));
Scene7.addChild(&ROUTE1623);

ROUTE& ROUTE1624 =  ROUTE();
ROUTE1624.setFromField(CString("value_changed"));
ROUTE1624.setFromNode(CString("Armature_OI_t12"));
ROUTE1624.setToField(CString("rotation"));
ROUTE1624.setToNode(CString("hanim_t12"));
Scene7.addChild(&ROUTE1624);

ROUTE& ROUTE1625 =  ROUTE();
ROUTE1625.setFromField(CString("fraction_changed"));
ROUTE1625.setFromNode(CString("Armature_Clock"));
ROUTE1625.setToField(CString("set_fraction"));
ROUTE1625.setToNode(CString("Armature_OI_t11"));
Scene7.addChild(&ROUTE1625);

ROUTE& ROUTE1626 =  ROUTE();
ROUTE1626.setFromField(CString("value_changed"));
ROUTE1626.setFromNode(CString("Armature_OI_t11"));
ROUTE1626.setToField(CString("rotation"));
ROUTE1626.setToNode(CString("hanim_t11"));
Scene7.addChild(&ROUTE1626);

ROUTE& ROUTE1627 =  ROUTE();
ROUTE1627.setFromField(CString("fraction_changed"));
ROUTE1627.setFromNode(CString("Armature_Clock"));
ROUTE1627.setToField(CString("set_fraction"));
ROUTE1627.setToNode(CString("Armature_OI_t10"));
Scene7.addChild(&ROUTE1627);

ROUTE& ROUTE1628 =  ROUTE();
ROUTE1628.setFromField(CString("value_changed"));
ROUTE1628.setFromNode(CString("Armature_OI_t10"));
ROUTE1628.setToField(CString("rotation"));
ROUTE1628.setToNode(CString("hanim_t10"));
Scene7.addChild(&ROUTE1628);

ROUTE& ROUTE1629 =  ROUTE();
ROUTE1629.setFromField(CString("fraction_changed"));
ROUTE1629.setFromNode(CString("Armature_Clock"));
ROUTE1629.setToField(CString("set_fraction"));
ROUTE1629.setToNode(CString("Armature_OI_t9"));
Scene7.addChild(&ROUTE1629);

ROUTE& ROUTE1630 =  ROUTE();
ROUTE1630.setFromField(CString("value_changed"));
ROUTE1630.setFromNode(CString("Armature_OI_t9"));
ROUTE1630.setToField(CString("rotation"));
ROUTE1630.setToNode(CString("hanim_t9"));
Scene7.addChild(&ROUTE1630);

ROUTE& ROUTE1631 =  ROUTE();
ROUTE1631.setFromField(CString("fraction_changed"));
ROUTE1631.setFromNode(CString("Armature_Clock"));
ROUTE1631.setToField(CString("set_fraction"));
ROUTE1631.setToNode(CString("Armature_OI_t8"));
Scene7.addChild(&ROUTE1631);

ROUTE& ROUTE1632 =  ROUTE();
ROUTE1632.setFromField(CString("value_changed"));
ROUTE1632.setFromNode(CString("Armature_OI_t8"));
ROUTE1632.setToField(CString("rotation"));
ROUTE1632.setToNode(CString("hanim_t8"));
Scene7.addChild(&ROUTE1632);

ROUTE& ROUTE1633 =  ROUTE();
ROUTE1633.setFromField(CString("fraction_changed"));
ROUTE1633.setFromNode(CString("Armature_Clock"));
ROUTE1633.setToField(CString("set_fraction"));
ROUTE1633.setToNode(CString("Armature_OI_t7"));
Scene7.addChild(&ROUTE1633);

ROUTE& ROUTE1634 =  ROUTE();
ROUTE1634.setFromField(CString("value_changed"));
ROUTE1634.setFromNode(CString("Armature_OI_t7"));
ROUTE1634.setToField(CString("rotation"));
ROUTE1634.setToNode(CString("hanim_t7"));
Scene7.addChild(&ROUTE1634);

ROUTE& ROUTE1635 =  ROUTE();
ROUTE1635.setFromField(CString("fraction_changed"));
ROUTE1635.setFromNode(CString("Armature_Clock"));
ROUTE1635.setToField(CString("set_fraction"));
ROUTE1635.setToNode(CString("Armature_OI_t6"));
Scene7.addChild(&ROUTE1635);

ROUTE& ROUTE1636 =  ROUTE();
ROUTE1636.setFromField(CString("value_changed"));
ROUTE1636.setFromNode(CString("Armature_OI_t6"));
ROUTE1636.setToField(CString("rotation"));
ROUTE1636.setToNode(CString("hanim_t6"));
Scene7.addChild(&ROUTE1636);

ROUTE& ROUTE1637 =  ROUTE();
ROUTE1637.setFromField(CString("fraction_changed"));
ROUTE1637.setFromNode(CString("Armature_Clock"));
ROUTE1637.setToField(CString("set_fraction"));
ROUTE1637.setToNode(CString("Armature_OI_t5"));
Scene7.addChild(&ROUTE1637);

ROUTE& ROUTE1638 =  ROUTE();
ROUTE1638.setFromField(CString("value_changed"));
ROUTE1638.setFromNode(CString("Armature_OI_t5"));
ROUTE1638.setToField(CString("rotation"));
ROUTE1638.setToNode(CString("hanim_t5"));
Scene7.addChild(&ROUTE1638);

ROUTE& ROUTE1639 =  ROUTE();
ROUTE1639.setFromField(CString("fraction_changed"));
ROUTE1639.setFromNode(CString("Armature_Clock"));
ROUTE1639.setToField(CString("set_fraction"));
ROUTE1639.setToNode(CString("Armature_OI_t4"));
Scene7.addChild(&ROUTE1639);

ROUTE& ROUTE1640 =  ROUTE();
ROUTE1640.setFromField(CString("value_changed"));
ROUTE1640.setFromNode(CString("Armature_OI_t4"));
ROUTE1640.setToField(CString("rotation"));
ROUTE1640.setToNode(CString("hanim_t4"));
Scene7.addChild(&ROUTE1640);

ROUTE& ROUTE1641 =  ROUTE();
ROUTE1641.setFromField(CString("fraction_changed"));
ROUTE1641.setFromNode(CString("Armature_Clock"));
ROUTE1641.setToField(CString("set_fraction"));
ROUTE1641.setToNode(CString("Armature_OI_t3"));
Scene7.addChild(&ROUTE1641);

ROUTE& ROUTE1642 =  ROUTE();
ROUTE1642.setFromField(CString("value_changed"));
ROUTE1642.setFromNode(CString("Armature_OI_t3"));
ROUTE1642.setToField(CString("rotation"));
ROUTE1642.setToNode(CString("hanim_t3"));
Scene7.addChild(&ROUTE1642);

ROUTE& ROUTE1643 =  ROUTE();
ROUTE1643.setFromField(CString("fraction_changed"));
ROUTE1643.setFromNode(CString("Armature_Clock"));
ROUTE1643.setToField(CString("set_fraction"));
ROUTE1643.setToNode(CString("Armature_OI_t2"));
Scene7.addChild(&ROUTE1643);

ROUTE& ROUTE1644 =  ROUTE();
ROUTE1644.setFromField(CString("value_changed"));
ROUTE1644.setFromNode(CString("Armature_OI_t2"));
ROUTE1644.setToField(CString("rotation"));
ROUTE1644.setToNode(CString("hanim_t2"));
Scene7.addChild(&ROUTE1644);

ROUTE& ROUTE1645 =  ROUTE();
ROUTE1645.setFromField(CString("fraction_changed"));
ROUTE1645.setFromNode(CString("Armature_Clock"));
ROUTE1645.setToField(CString("set_fraction"));
ROUTE1645.setToNode(CString("Armature_OI_t1"));
Scene7.addChild(&ROUTE1645);

ROUTE& ROUTE1646 =  ROUTE();
ROUTE1646.setFromField(CString("value_changed"));
ROUTE1646.setFromNode(CString("Armature_OI_t1"));
ROUTE1646.setToField(CString("rotation"));
ROUTE1646.setToNode(CString("hanim_t1"));
Scene7.addChild(&ROUTE1646);

ROUTE& ROUTE1647 =  ROUTE();
ROUTE1647.setFromField(CString("fraction_changed"));
ROUTE1647.setFromNode(CString("Armature_Clock"));
ROUTE1647.setToField(CString("set_fraction"));
ROUTE1647.setToNode(CString("Armature_OI_c7"));
Scene7.addChild(&ROUTE1647);

ROUTE& ROUTE1648 =  ROUTE();
ROUTE1648.setFromField(CString("value_changed"));
ROUTE1648.setFromNode(CString("Armature_OI_c7"));
ROUTE1648.setToField(CString("rotation"));
ROUTE1648.setToNode(CString("hanim_c7"));
Scene7.addChild(&ROUTE1648);

ROUTE& ROUTE1649 =  ROUTE();
ROUTE1649.setFromField(CString("fraction_changed"));
ROUTE1649.setFromNode(CString("Armature_Clock"));
ROUTE1649.setToField(CString("set_fraction"));
ROUTE1649.setToNode(CString("Armature_OI_c6"));
Scene7.addChild(&ROUTE1649);

ROUTE& ROUTE1650 =  ROUTE();
ROUTE1650.setFromField(CString("value_changed"));
ROUTE1650.setFromNode(CString("Armature_OI_c6"));
ROUTE1650.setToField(CString("rotation"));
ROUTE1650.setToNode(CString("hanim_c6"));
Scene7.addChild(&ROUTE1650);

ROUTE& ROUTE1651 =  ROUTE();
ROUTE1651.setFromField(CString("fraction_changed"));
ROUTE1651.setFromNode(CString("Armature_Clock"));
ROUTE1651.setToField(CString("set_fraction"));
ROUTE1651.setToNode(CString("Armature_OI_c5"));
Scene7.addChild(&ROUTE1651);

ROUTE& ROUTE1652 =  ROUTE();
ROUTE1652.setFromField(CString("value_changed"));
ROUTE1652.setFromNode(CString("Armature_OI_c5"));
ROUTE1652.setToField(CString("rotation"));
ROUTE1652.setToNode(CString("hanim_c5"));
Scene7.addChild(&ROUTE1652);

ROUTE& ROUTE1653 =  ROUTE();
ROUTE1653.setFromField(CString("fraction_changed"));
ROUTE1653.setFromNode(CString("Armature_Clock"));
ROUTE1653.setToField(CString("set_fraction"));
ROUTE1653.setToNode(CString("Armature_OI_c4"));
Scene7.addChild(&ROUTE1653);

ROUTE& ROUTE1654 =  ROUTE();
ROUTE1654.setFromField(CString("value_changed"));
ROUTE1654.setFromNode(CString("Armature_OI_c4"));
ROUTE1654.setToField(CString("rotation"));
ROUTE1654.setToNode(CString("hanim_c4"));
Scene7.addChild(&ROUTE1654);

ROUTE& ROUTE1655 =  ROUTE();
ROUTE1655.setFromField(CString("fraction_changed"));
ROUTE1655.setFromNode(CString("Armature_Clock"));
ROUTE1655.setToField(CString("set_fraction"));
ROUTE1655.setToNode(CString("Armature_OI_c3"));
Scene7.addChild(&ROUTE1655);

ROUTE& ROUTE1656 =  ROUTE();
ROUTE1656.setFromField(CString("value_changed"));
ROUTE1656.setFromNode(CString("Armature_OI_c3"));
ROUTE1656.setToField(CString("rotation"));
ROUTE1656.setToNode(CString("hanim_c3"));
Scene7.addChild(&ROUTE1656);

ROUTE& ROUTE1657 =  ROUTE();
ROUTE1657.setFromField(CString("fraction_changed"));
ROUTE1657.setFromNode(CString("Armature_Clock"));
ROUTE1657.setToField(CString("set_fraction"));
ROUTE1657.setToNode(CString("Armature_OI_c2"));
Scene7.addChild(&ROUTE1657);

ROUTE& ROUTE1658 =  ROUTE();
ROUTE1658.setFromField(CString("value_changed"));
ROUTE1658.setFromNode(CString("Armature_OI_c2"));
ROUTE1658.setToField(CString("rotation"));
ROUTE1658.setToNode(CString("hanim_c2"));
Scene7.addChild(&ROUTE1658);

ROUTE& ROUTE1659 =  ROUTE();
ROUTE1659.setFromField(CString("fraction_changed"));
ROUTE1659.setFromNode(CString("Armature_Clock"));
ROUTE1659.setToField(CString("set_fraction"));
ROUTE1659.setToNode(CString("Armature_OI_c1"));
Scene7.addChild(&ROUTE1659);

ROUTE& ROUTE1660 =  ROUTE();
ROUTE1660.setFromField(CString("value_changed"));
ROUTE1660.setFromNode(CString("Armature_OI_c1"));
ROUTE1660.setToField(CString("rotation"));
ROUTE1660.setToNode(CString("hanim_c1"));
Scene7.addChild(&ROUTE1660);

ROUTE& ROUTE1661 =  ROUTE();
ROUTE1661.setFromField(CString("fraction_changed"));
ROUTE1661.setFromNode(CString("Armature_Clock"));
ROUTE1661.setToField(CString("set_fraction"));
ROUTE1661.setToNode(CString("Armature_OI_skull"));
Scene7.addChild(&ROUTE1661);

ROUTE& ROUTE1662 =  ROUTE();
ROUTE1662.setFromField(CString("value_changed"));
ROUTE1662.setFromNode(CString("Armature_OI_skull"));
ROUTE1662.setToField(CString("rotation"));
ROUTE1662.setToNode(CString("hanim_skull"));
Scene7.addChild(&ROUTE1662);

ROUTE& ROUTE1663 =  ROUTE();
ROUTE1663.setFromField(CString("fraction_changed"));
ROUTE1663.setFromNode(CString("Armature_Clock"));
ROUTE1663.setToField(CString("set_fraction"));
ROUTE1663.setToNode(CString("Armature_OI_l_eyelid"));
Scene7.addChild(&ROUTE1663);

ROUTE& ROUTE1664 =  ROUTE();
ROUTE1664.setFromField(CString("value_changed"));
ROUTE1664.setFromNode(CString("Armature_OI_l_eyelid"));
ROUTE1664.setToField(CString("rotation"));
ROUTE1664.setToNode(CString("hanim_l_eyelid"));
Scene7.addChild(&ROUTE1664);

ROUTE& ROUTE1665 =  ROUTE();
ROUTE1665.setFromField(CString("fraction_changed"));
ROUTE1665.setFromNode(CString("Armature_Clock"));
ROUTE1665.setToField(CString("set_fraction"));
ROUTE1665.setToNode(CString("Armature_OI_r_eyelid"));
Scene7.addChild(&ROUTE1665);

ROUTE& ROUTE1666 =  ROUTE();
ROUTE1666.setFromField(CString("value_changed"));
ROUTE1666.setFromNode(CString("Armature_OI_r_eyelid"));
ROUTE1666.setToField(CString("rotation"));
ROUTE1666.setToNode(CString("hanim_r_eyelid"));
Scene7.addChild(&ROUTE1666);

ROUTE& ROUTE1667 =  ROUTE();
ROUTE1667.setFromField(CString("fraction_changed"));
ROUTE1667.setFromNode(CString("Armature_Clock"));
ROUTE1667.setToField(CString("set_fraction"));
ROUTE1667.setToNode(CString("Armature_OI_l_eyeball"));
Scene7.addChild(&ROUTE1667);

ROUTE& ROUTE1668 =  ROUTE();
ROUTE1668.setFromField(CString("value_changed"));
ROUTE1668.setFromNode(CString("Armature_OI_l_eyeball"));
ROUTE1668.setToField(CString("rotation"));
ROUTE1668.setToNode(CString("hanim_l_eyeball"));
Scene7.addChild(&ROUTE1668);

ROUTE& ROUTE1669 =  ROUTE();
ROUTE1669.setFromField(CString("fraction_changed"));
ROUTE1669.setFromNode(CString("Armature_Clock"));
ROUTE1669.setToField(CString("set_fraction"));
ROUTE1669.setToNode(CString("Armature_OI_r_eyeball"));
Scene7.addChild(&ROUTE1669);

ROUTE& ROUTE1670 =  ROUTE();
ROUTE1670.setFromField(CString("value_changed"));
ROUTE1670.setFromNode(CString("Armature_OI_r_eyeball"));
ROUTE1670.setToField(CString("rotation"));
ROUTE1670.setToNode(CString("hanim_r_eyeball"));
Scene7.addChild(&ROUTE1670);

ROUTE& ROUTE1671 =  ROUTE();
ROUTE1671.setFromField(CString("fraction_changed"));
ROUTE1671.setFromNode(CString("Armature_Clock"));
ROUTE1671.setToField(CString("set_fraction"));
ROUTE1671.setToNode(CString("Armature_OI_l_eyebrow"));
Scene7.addChild(&ROUTE1671);

ROUTE& ROUTE1672 =  ROUTE();
ROUTE1672.setFromField(CString("value_changed"));
ROUTE1672.setFromNode(CString("Armature_OI_l_eyebrow"));
ROUTE1672.setToField(CString("rotation"));
ROUTE1672.setToNode(CString("hanim_l_eyebrow"));
Scene7.addChild(&ROUTE1672);

ROUTE& ROUTE1673 =  ROUTE();
ROUTE1673.setFromField(CString("fraction_changed"));
ROUTE1673.setFromNode(CString("Armature_Clock"));
ROUTE1673.setToField(CString("set_fraction"));
ROUTE1673.setToNode(CString("Armature_OI_r_eyebrow"));
Scene7.addChild(&ROUTE1673);

ROUTE& ROUTE1674 =  ROUTE();
ROUTE1674.setFromField(CString("value_changed"));
ROUTE1674.setFromNode(CString("Armature_OI_r_eyebrow"));
ROUTE1674.setToField(CString("rotation"));
ROUTE1674.setToNode(CString("hanim_r_eyebrow"));
Scene7.addChild(&ROUTE1674);

ROUTE& ROUTE1675 =  ROUTE();
ROUTE1675.setFromField(CString("fraction_changed"));
ROUTE1675.setFromNode(CString("Armature_Clock"));
ROUTE1675.setToField(CString("set_fraction"));
ROUTE1675.setToNode(CString("Armature_OI_jaw"));
Scene7.addChild(&ROUTE1675);

ROUTE& ROUTE1676 =  ROUTE();
ROUTE1676.setFromField(CString("value_changed"));
ROUTE1676.setFromNode(CString("Armature_OI_jaw"));
ROUTE1676.setToField(CString("rotation"));
ROUTE1676.setToNode(CString("hanim_jaw"));
Scene7.addChild(&ROUTE1676);

ROUTE& ROUTE1677 =  ROUTE();
ROUTE1677.setFromField(CString("fraction_changed"));
ROUTE1677.setFromNode(CString("Armature_Clock"));
ROUTE1677.setToField(CString("set_fraction"));
ROUTE1677.setToNode(CString("Armature_OI_l_clavicle"));
Scene7.addChild(&ROUTE1677);

ROUTE& ROUTE1678 =  ROUTE();
ROUTE1678.setFromField(CString("value_changed"));
ROUTE1678.setFromNode(CString("Armature_OI_l_clavicle"));
ROUTE1678.setToField(CString("rotation"));
ROUTE1678.setToNode(CString("hanim_l_clavicle"));
Scene7.addChild(&ROUTE1678);

ROUTE& ROUTE1679 =  ROUTE();
ROUTE1679.setFromField(CString("fraction_changed"));
ROUTE1679.setFromNode(CString("Armature_Clock"));
ROUTE1679.setToField(CString("set_fraction"));
ROUTE1679.setToNode(CString("Armature_OI_l_scapula"));
Scene7.addChild(&ROUTE1679);

ROUTE& ROUTE1680 =  ROUTE();
ROUTE1680.setFromField(CString("value_changed"));
ROUTE1680.setFromNode(CString("Armature_OI_l_scapula"));
ROUTE1680.setToField(CString("rotation"));
ROUTE1680.setToNode(CString("hanim_l_scapula"));
Scene7.addChild(&ROUTE1680);

ROUTE& ROUTE1681 =  ROUTE();
ROUTE1681.setFromField(CString("fraction_changed"));
ROUTE1681.setFromNode(CString("Armature_Clock"));
ROUTE1681.setToField(CString("set_fraction"));
ROUTE1681.setToNode(CString("Armature_OI_l_upperarm"));
Scene7.addChild(&ROUTE1681);

ROUTE& ROUTE1682 =  ROUTE();
ROUTE1682.setFromField(CString("value_changed"));
ROUTE1682.setFromNode(CString("Armature_OI_l_upperarm"));
ROUTE1682.setToField(CString("rotation"));
ROUTE1682.setToNode(CString("hanim_l_upperarm"));
Scene7.addChild(&ROUTE1682);

ROUTE& ROUTE1683 =  ROUTE();
ROUTE1683.setFromField(CString("fraction_changed"));
ROUTE1683.setFromNode(CString("Armature_Clock"));
ROUTE1683.setToField(CString("set_fraction"));
ROUTE1683.setToNode(CString("Armature_OI_l_forearm"));
Scene7.addChild(&ROUTE1683);

ROUTE& ROUTE1684 =  ROUTE();
ROUTE1684.setFromField(CString("value_changed"));
ROUTE1684.setFromNode(CString("Armature_OI_l_forearm"));
ROUTE1684.setToField(CString("rotation"));
ROUTE1684.setToNode(CString("hanim_l_forearm"));
Scene7.addChild(&ROUTE1684);

ROUTE& ROUTE1685 =  ROUTE();
ROUTE1685.setFromField(CString("fraction_changed"));
ROUTE1685.setFromNode(CString("Armature_Clock"));
ROUTE1685.setToField(CString("set_fraction"));
ROUTE1685.setToNode(CString("Armature_OI_l_carpal"));
Scene7.addChild(&ROUTE1685);

ROUTE& ROUTE1686 =  ROUTE();
ROUTE1686.setFromField(CString("value_changed"));
ROUTE1686.setFromNode(CString("Armature_OI_l_carpal"));
ROUTE1686.setToField(CString("rotation"));
ROUTE1686.setToNode(CString("hanim_l_carpal"));
Scene7.addChild(&ROUTE1686);

ROUTE& ROUTE1687 =  ROUTE();
ROUTE1687.setFromField(CString("fraction_changed"));
ROUTE1687.setFromNode(CString("Armature_Clock"));
ROUTE1687.setToField(CString("set_fraction"));
ROUTE1687.setToNode(CString("Armature_OI_l_trapezium"));
Scene7.addChild(&ROUTE1687);

ROUTE& ROUTE1688 =  ROUTE();
ROUTE1688.setFromField(CString("value_changed"));
ROUTE1688.setFromNode(CString("Armature_OI_l_trapezium"));
ROUTE1688.setToField(CString("rotation"));
ROUTE1688.setToNode(CString("hanim_l_trapezium"));
Scene7.addChild(&ROUTE1688);

ROUTE& ROUTE1689 =  ROUTE();
ROUTE1689.setFromField(CString("fraction_changed"));
ROUTE1689.setFromNode(CString("Armature_Clock"));
ROUTE1689.setToField(CString("set_fraction"));
ROUTE1689.setToNode(CString("Armature_OI_l_metacarpal_1"));
Scene7.addChild(&ROUTE1689);

ROUTE& ROUTE1690 =  ROUTE();
ROUTE1690.setFromField(CString("value_changed"));
ROUTE1690.setFromNode(CString("Armature_OI_l_metacarpal_1"));
ROUTE1690.setToField(CString("rotation"));
ROUTE1690.setToNode(CString("hanim_l_metacarpal_1"));
Scene7.addChild(&ROUTE1690);

ROUTE& ROUTE1691 =  ROUTE();
ROUTE1691.setFromField(CString("fraction_changed"));
ROUTE1691.setFromNode(CString("Armature_Clock"));
ROUTE1691.setToField(CString("set_fraction"));
ROUTE1691.setToNode(CString("Armature_OI_l_carpal_proximal_phalanx_1"));
Scene7.addChild(&ROUTE1691);

ROUTE& ROUTE1692 =  ROUTE();
ROUTE1692.setFromField(CString("value_changed"));
ROUTE1692.setFromNode(CString("Armature_OI_l_carpal_proximal_phalanx_1"));
ROUTE1692.setToField(CString("rotation"));
ROUTE1692.setToNode(CString("hanim_l_carpal_proximal_phalanx_1"));
Scene7.addChild(&ROUTE1692);

ROUTE& ROUTE1693 =  ROUTE();
ROUTE1693.setFromField(CString("fraction_changed"));
ROUTE1693.setFromNode(CString("Armature_Clock"));
ROUTE1693.setToField(CString("set_fraction"));
ROUTE1693.setToNode(CString("Armature_OI_l_carpal_distal_phalanx_1"));
Scene7.addChild(&ROUTE1693);

ROUTE& ROUTE1694 =  ROUTE();
ROUTE1694.setFromField(CString("value_changed"));
ROUTE1694.setFromNode(CString("Armature_OI_l_carpal_distal_phalanx_1"));
ROUTE1694.setToField(CString("rotation"));
ROUTE1694.setToNode(CString("hanim_l_carpal_distal_phalanx_1"));
Scene7.addChild(&ROUTE1694);

ROUTE& ROUTE1695 =  ROUTE();
ROUTE1695.setFromField(CString("fraction_changed"));
ROUTE1695.setFromNode(CString("Armature_Clock"));
ROUTE1695.setToField(CString("set_fraction"));
ROUTE1695.setToNode(CString("Armature_OI_l_trapezoid"));
Scene7.addChild(&ROUTE1695);

ROUTE& ROUTE1696 =  ROUTE();
ROUTE1696.setFromField(CString("value_changed"));
ROUTE1696.setFromNode(CString("Armature_OI_l_trapezoid"));
ROUTE1696.setToField(CString("rotation"));
ROUTE1696.setToNode(CString("hanim_l_trapezoid"));
Scene7.addChild(&ROUTE1696);

ROUTE& ROUTE1697 =  ROUTE();
ROUTE1697.setFromField(CString("fraction_changed"));
ROUTE1697.setFromNode(CString("Armature_Clock"));
ROUTE1697.setToField(CString("set_fraction"));
ROUTE1697.setToNode(CString("Armature_OI_l_metacarpal_2"));
Scene7.addChild(&ROUTE1697);

ROUTE& ROUTE1698 =  ROUTE();
ROUTE1698.setFromField(CString("value_changed"));
ROUTE1698.setFromNode(CString("Armature_OI_l_metacarpal_2"));
ROUTE1698.setToField(CString("rotation"));
ROUTE1698.setToNode(CString("hanim_l_metacarpal_2"));
Scene7.addChild(&ROUTE1698);

ROUTE& ROUTE1699 =  ROUTE();
ROUTE1699.setFromField(CString("fraction_changed"));
ROUTE1699.setFromNode(CString("Armature_Clock"));
ROUTE1699.setToField(CString("set_fraction"));
ROUTE1699.setToNode(CString("Armature_OI_l_carpal_proximal_phalanx_2"));
Scene7.addChild(&ROUTE1699);

ROUTE& ROUTE1700 =  ROUTE();
ROUTE1700.setFromField(CString("value_changed"));
ROUTE1700.setFromNode(CString("Armature_OI_l_carpal_proximal_phalanx_2"));
ROUTE1700.setToField(CString("rotation"));
ROUTE1700.setToNode(CString("hanim_l_carpal_proximal_phalanx_2"));
Scene7.addChild(&ROUTE1700);

ROUTE& ROUTE1701 =  ROUTE();
ROUTE1701.setFromField(CString("fraction_changed"));
ROUTE1701.setFromNode(CString("Armature_Clock"));
ROUTE1701.setToField(CString("set_fraction"));
ROUTE1701.setToNode(CString("Armature_OI_l_carpal_middle_phalanx_2"));
Scene7.addChild(&ROUTE1701);

ROUTE& ROUTE1702 =  ROUTE();
ROUTE1702.setFromField(CString("value_changed"));
ROUTE1702.setFromNode(CString("Armature_OI_l_carpal_middle_phalanx_2"));
ROUTE1702.setToField(CString("rotation"));
ROUTE1702.setToNode(CString("hanim_l_carpal_middle_phalanx_2"));
Scene7.addChild(&ROUTE1702);

ROUTE& ROUTE1703 =  ROUTE();
ROUTE1703.setFromField(CString("fraction_changed"));
ROUTE1703.setFromNode(CString("Armature_Clock"));
ROUTE1703.setToField(CString("set_fraction"));
ROUTE1703.setToNode(CString("Armature_OI_l_carpal_distal_phalanx_2"));
Scene7.addChild(&ROUTE1703);

ROUTE& ROUTE1704 =  ROUTE();
ROUTE1704.setFromField(CString("value_changed"));
ROUTE1704.setFromNode(CString("Armature_OI_l_carpal_distal_phalanx_2"));
ROUTE1704.setToField(CString("rotation"));
ROUTE1704.setToNode(CString("hanim_l_carpal_distal_phalanx_2"));
Scene7.addChild(&ROUTE1704);

ROUTE& ROUTE1705 =  ROUTE();
ROUTE1705.setFromField(CString("fraction_changed"));
ROUTE1705.setFromNode(CString("Armature_Clock"));
ROUTE1705.setToField(CString("set_fraction"));
ROUTE1705.setToNode(CString("Armature_OI_l_capitate"));
Scene7.addChild(&ROUTE1705);

ROUTE& ROUTE1706 =  ROUTE();
ROUTE1706.setFromField(CString("value_changed"));
ROUTE1706.setFromNode(CString("Armature_OI_l_capitate"));
ROUTE1706.setToField(CString("rotation"));
ROUTE1706.setToNode(CString("hanim_l_capitate"));
Scene7.addChild(&ROUTE1706);

ROUTE& ROUTE1707 =  ROUTE();
ROUTE1707.setFromField(CString("fraction_changed"));
ROUTE1707.setFromNode(CString("Armature_Clock"));
ROUTE1707.setToField(CString("set_fraction"));
ROUTE1707.setToNode(CString("Armature_OI_l_metacarpal_3"));
Scene7.addChild(&ROUTE1707);

ROUTE& ROUTE1708 =  ROUTE();
ROUTE1708.setFromField(CString("value_changed"));
ROUTE1708.setFromNode(CString("Armature_OI_l_metacarpal_3"));
ROUTE1708.setToField(CString("rotation"));
ROUTE1708.setToNode(CString("hanim_l_metacarpal_3"));
Scene7.addChild(&ROUTE1708);

ROUTE& ROUTE1709 =  ROUTE();
ROUTE1709.setFromField(CString("fraction_changed"));
ROUTE1709.setFromNode(CString("Armature_Clock"));
ROUTE1709.setToField(CString("set_fraction"));
ROUTE1709.setToNode(CString("Armature_OI_l_carpal_proximal_phalanx_3"));
Scene7.addChild(&ROUTE1709);

ROUTE& ROUTE1710 =  ROUTE();
ROUTE1710.setFromField(CString("value_changed"));
ROUTE1710.setFromNode(CString("Armature_OI_l_carpal_proximal_phalanx_3"));
ROUTE1710.setToField(CString("rotation"));
ROUTE1710.setToNode(CString("hanim_l_carpal_proximal_phalanx_3"));
Scene7.addChild(&ROUTE1710);

ROUTE& ROUTE1711 =  ROUTE();
ROUTE1711.setFromField(CString("fraction_changed"));
ROUTE1711.setFromNode(CString("Armature_Clock"));
ROUTE1711.setToField(CString("set_fraction"));
ROUTE1711.setToNode(CString("Armature_OI_l_carpal_middle_phalanx_3"));
Scene7.addChild(&ROUTE1711);

ROUTE& ROUTE1712 =  ROUTE();
ROUTE1712.setFromField(CString("value_changed"));
ROUTE1712.setFromNode(CString("Armature_OI_l_carpal_middle_phalanx_3"));
ROUTE1712.setToField(CString("rotation"));
ROUTE1712.setToNode(CString("hanim_l_carpal_middle_phalanx_3"));
Scene7.addChild(&ROUTE1712);

ROUTE& ROUTE1713 =  ROUTE();
ROUTE1713.setFromField(CString("fraction_changed"));
ROUTE1713.setFromNode(CString("Armature_Clock"));
ROUTE1713.setToField(CString("set_fraction"));
ROUTE1713.setToNode(CString("Armature_OI_l_carpal_distal_phalanx_3"));
Scene7.addChild(&ROUTE1713);

ROUTE& ROUTE1714 =  ROUTE();
ROUTE1714.setFromField(CString("value_changed"));
ROUTE1714.setFromNode(CString("Armature_OI_l_carpal_distal_phalanx_3"));
ROUTE1714.setToField(CString("rotation"));
ROUTE1714.setToNode(CString("hanim_l_carpal_distal_phalanx_3"));
Scene7.addChild(&ROUTE1714);

ROUTE& ROUTE1715 =  ROUTE();
ROUTE1715.setFromField(CString("fraction_changed"));
ROUTE1715.setFromNode(CString("Armature_Clock"));
ROUTE1715.setToField(CString("set_fraction"));
ROUTE1715.setToNode(CString("Armature_OI_l_hamate"));
Scene7.addChild(&ROUTE1715);

ROUTE& ROUTE1716 =  ROUTE();
ROUTE1716.setFromField(CString("value_changed"));
ROUTE1716.setFromNode(CString("Armature_OI_l_hamate"));
ROUTE1716.setToField(CString("rotation"));
ROUTE1716.setToNode(CString("hanim_l_hamate"));
Scene7.addChild(&ROUTE1716);

ROUTE& ROUTE1717 =  ROUTE();
ROUTE1717.setFromField(CString("fraction_changed"));
ROUTE1717.setFromNode(CString("Armature_Clock"));
ROUTE1717.setToField(CString("set_fraction"));
ROUTE1717.setToNode(CString("Armature_OI_l_metacarpal_4"));
Scene7.addChild(&ROUTE1717);

ROUTE& ROUTE1718 =  ROUTE();
ROUTE1718.setFromField(CString("value_changed"));
ROUTE1718.setFromNode(CString("Armature_OI_l_metacarpal_4"));
ROUTE1718.setToField(CString("rotation"));
ROUTE1718.setToNode(CString("hanim_l_metacarpal_4"));
Scene7.addChild(&ROUTE1718);

ROUTE& ROUTE1719 =  ROUTE();
ROUTE1719.setFromField(CString("fraction_changed"));
ROUTE1719.setFromNode(CString("Armature_Clock"));
ROUTE1719.setToField(CString("set_fraction"));
ROUTE1719.setToNode(CString("Armature_OI_l_carpal_proximal_phalanx_4"));
Scene7.addChild(&ROUTE1719);

ROUTE& ROUTE1720 =  ROUTE();
ROUTE1720.setFromField(CString("value_changed"));
ROUTE1720.setFromNode(CString("Armature_OI_l_carpal_proximal_phalanx_4"));
ROUTE1720.setToField(CString("rotation"));
ROUTE1720.setToNode(CString("hanim_l_carpal_proximal_phalanx_4"));
Scene7.addChild(&ROUTE1720);

ROUTE& ROUTE1721 =  ROUTE();
ROUTE1721.setFromField(CString("fraction_changed"));
ROUTE1721.setFromNode(CString("Armature_Clock"));
ROUTE1721.setToField(CString("set_fraction"));
ROUTE1721.setToNode(CString("Armature_OI_l_carpal_middle_phalanx_4"));
Scene7.addChild(&ROUTE1721);

ROUTE& ROUTE1722 =  ROUTE();
ROUTE1722.setFromField(CString("value_changed"));
ROUTE1722.setFromNode(CString("Armature_OI_l_carpal_middle_phalanx_4"));
ROUTE1722.setToField(CString("rotation"));
ROUTE1722.setToNode(CString("hanim_l_carpal_middle_phalanx_4"));
Scene7.addChild(&ROUTE1722);

ROUTE& ROUTE1723 =  ROUTE();
ROUTE1723.setFromField(CString("fraction_changed"));
ROUTE1723.setFromNode(CString("Armature_Clock"));
ROUTE1723.setToField(CString("set_fraction"));
ROUTE1723.setToNode(CString("Armature_OI_l_carpal_distal_phalanx_4"));
Scene7.addChild(&ROUTE1723);

ROUTE& ROUTE1724 =  ROUTE();
ROUTE1724.setFromField(CString("value_changed"));
ROUTE1724.setFromNode(CString("Armature_OI_l_carpal_distal_phalanx_4"));
ROUTE1724.setToField(CString("rotation"));
ROUTE1724.setToNode(CString("hanim_l_carpal_distal_phalanx_4"));
Scene7.addChild(&ROUTE1724);

ROUTE& ROUTE1725 =  ROUTE();
ROUTE1725.setFromField(CString("fraction_changed"));
ROUTE1725.setFromNode(CString("Armature_Clock"));
ROUTE1725.setToField(CString("set_fraction"));
ROUTE1725.setToNode(CString("Armature_OI_l_metacarpal_5"));
Scene7.addChild(&ROUTE1725);

ROUTE& ROUTE1726 =  ROUTE();
ROUTE1726.setFromField(CString("value_changed"));
ROUTE1726.setFromNode(CString("Armature_OI_l_metacarpal_5"));
ROUTE1726.setToField(CString("rotation"));
ROUTE1726.setToNode(CString("hanim_l_metacarpal_5"));
Scene7.addChild(&ROUTE1726);

ROUTE& ROUTE1727 =  ROUTE();
ROUTE1727.setFromField(CString("fraction_changed"));
ROUTE1727.setFromNode(CString("Armature_Clock"));
ROUTE1727.setToField(CString("set_fraction"));
ROUTE1727.setToNode(CString("Armature_OI_l_carpal_proximal_phalanx_5"));
Scene7.addChild(&ROUTE1727);

ROUTE& ROUTE1728 =  ROUTE();
ROUTE1728.setFromField(CString("value_changed"));
ROUTE1728.setFromNode(CString("Armature_OI_l_carpal_proximal_phalanx_5"));
ROUTE1728.setToField(CString("rotation"));
ROUTE1728.setToNode(CString("hanim_l_carpal_proximal_phalanx_5"));
Scene7.addChild(&ROUTE1728);

ROUTE& ROUTE1729 =  ROUTE();
ROUTE1729.setFromField(CString("fraction_changed"));
ROUTE1729.setFromNode(CString("Armature_Clock"));
ROUTE1729.setToField(CString("set_fraction"));
ROUTE1729.setToNode(CString("Armature_OI_l_carpal_middle_phalanx_5"));
Scene7.addChild(&ROUTE1729);

ROUTE& ROUTE1730 =  ROUTE();
ROUTE1730.setFromField(CString("value_changed"));
ROUTE1730.setFromNode(CString("Armature_OI_l_carpal_middle_phalanx_5"));
ROUTE1730.setToField(CString("rotation"));
ROUTE1730.setToNode(CString("hanim_l_carpal_middle_phalanx_5"));
Scene7.addChild(&ROUTE1730);

ROUTE& ROUTE1731 =  ROUTE();
ROUTE1731.setFromField(CString("fraction_changed"));
ROUTE1731.setFromNode(CString("Armature_Clock"));
ROUTE1731.setToField(CString("set_fraction"));
ROUTE1731.setToNode(CString("Armature_OI_l_carpal_distal_phalanx_5"));
Scene7.addChild(&ROUTE1731);

ROUTE& ROUTE1732 =  ROUTE();
ROUTE1732.setFromField(CString("value_changed"));
ROUTE1732.setFromNode(CString("Armature_OI_l_carpal_distal_phalanx_5"));
ROUTE1732.setToField(CString("rotation"));
ROUTE1732.setToNode(CString("hanim_l_carpal_distal_phalanx_5"));
Scene7.addChild(&ROUTE1732);

ROUTE& ROUTE1733 =  ROUTE();
ROUTE1733.setFromField(CString("fraction_changed"));
ROUTE1733.setFromNode(CString("Armature_Clock"));
ROUTE1733.setToField(CString("set_fraction"));
ROUTE1733.setToNode(CString("Armature_OI_r_clavicle"));
Scene7.addChild(&ROUTE1733);

ROUTE& ROUTE1734 =  ROUTE();
ROUTE1734.setFromField(CString("value_changed"));
ROUTE1734.setFromNode(CString("Armature_OI_r_clavicle"));
ROUTE1734.setToField(CString("rotation"));
ROUTE1734.setToNode(CString("hanim_r_clavicle"));
Scene7.addChild(&ROUTE1734);

ROUTE& ROUTE1735 =  ROUTE();
ROUTE1735.setFromField(CString("fraction_changed"));
ROUTE1735.setFromNode(CString("Armature_Clock"));
ROUTE1735.setToField(CString("set_fraction"));
ROUTE1735.setToNode(CString("Armature_OI_r_scapula"));
Scene7.addChild(&ROUTE1735);

ROUTE& ROUTE1736 =  ROUTE();
ROUTE1736.setFromField(CString("value_changed"));
ROUTE1736.setFromNode(CString("Armature_OI_r_scapula"));
ROUTE1736.setToField(CString("rotation"));
ROUTE1736.setToNode(CString("hanim_r_scapula"));
Scene7.addChild(&ROUTE1736);

ROUTE& ROUTE1737 =  ROUTE();
ROUTE1737.setFromField(CString("fraction_changed"));
ROUTE1737.setFromNode(CString("Armature_Clock"));
ROUTE1737.setToField(CString("set_fraction"));
ROUTE1737.setToNode(CString("Armature_OI_r_upperarm"));
Scene7.addChild(&ROUTE1737);

ROUTE& ROUTE1738 =  ROUTE();
ROUTE1738.setFromField(CString("value_changed"));
ROUTE1738.setFromNode(CString("Armature_OI_r_upperarm"));
ROUTE1738.setToField(CString("rotation"));
ROUTE1738.setToNode(CString("hanim_r_upperarm"));
Scene7.addChild(&ROUTE1738);

ROUTE& ROUTE1739 =  ROUTE();
ROUTE1739.setFromField(CString("fraction_changed"));
ROUTE1739.setFromNode(CString("Armature_Clock"));
ROUTE1739.setToField(CString("set_fraction"));
ROUTE1739.setToNode(CString("Armature_OI_r_forearm"));
Scene7.addChild(&ROUTE1739);

ROUTE& ROUTE1740 =  ROUTE();
ROUTE1740.setFromField(CString("value_changed"));
ROUTE1740.setFromNode(CString("Armature_OI_r_forearm"));
ROUTE1740.setToField(CString("rotation"));
ROUTE1740.setToNode(CString("hanim_r_forearm"));
Scene7.addChild(&ROUTE1740);

ROUTE& ROUTE1741 =  ROUTE();
ROUTE1741.setFromField(CString("fraction_changed"));
ROUTE1741.setFromNode(CString("Armature_Clock"));
ROUTE1741.setToField(CString("set_fraction"));
ROUTE1741.setToNode(CString("Armature_OI_r_carpal"));
Scene7.addChild(&ROUTE1741);

ROUTE& ROUTE1742 =  ROUTE();
ROUTE1742.setFromField(CString("value_changed"));
ROUTE1742.setFromNode(CString("Armature_OI_r_carpal"));
ROUTE1742.setToField(CString("rotation"));
ROUTE1742.setToNode(CString("hanim_r_carpal"));
Scene7.addChild(&ROUTE1742);

ROUTE& ROUTE1743 =  ROUTE();
ROUTE1743.setFromField(CString("fraction_changed"));
ROUTE1743.setFromNode(CString("Armature_Clock"));
ROUTE1743.setToField(CString("set_fraction"));
ROUTE1743.setToNode(CString("Armature_OI_r_trapezium"));
Scene7.addChild(&ROUTE1743);

ROUTE& ROUTE1744 =  ROUTE();
ROUTE1744.setFromField(CString("value_changed"));
ROUTE1744.setFromNode(CString("Armature_OI_r_trapezium"));
ROUTE1744.setToField(CString("rotation"));
ROUTE1744.setToNode(CString("hanim_r_trapezium"));
Scene7.addChild(&ROUTE1744);

ROUTE& ROUTE1745 =  ROUTE();
ROUTE1745.setFromField(CString("fraction_changed"));
ROUTE1745.setFromNode(CString("Armature_Clock"));
ROUTE1745.setToField(CString("set_fraction"));
ROUTE1745.setToNode(CString("Armature_OI_r_metacarpal_1"));
Scene7.addChild(&ROUTE1745);

ROUTE& ROUTE1746 =  ROUTE();
ROUTE1746.setFromField(CString("value_changed"));
ROUTE1746.setFromNode(CString("Armature_OI_r_metacarpal_1"));
ROUTE1746.setToField(CString("rotation"));
ROUTE1746.setToNode(CString("hanim_r_metacarpal_1"));
Scene7.addChild(&ROUTE1746);

ROUTE& ROUTE1747 =  ROUTE();
ROUTE1747.setFromField(CString("fraction_changed"));
ROUTE1747.setFromNode(CString("Armature_Clock"));
ROUTE1747.setToField(CString("set_fraction"));
ROUTE1747.setToNode(CString("Armature_OI_r_carpal_proximal_phalanx_1"));
Scene7.addChild(&ROUTE1747);

ROUTE& ROUTE1748 =  ROUTE();
ROUTE1748.setFromField(CString("value_changed"));
ROUTE1748.setFromNode(CString("Armature_OI_r_carpal_proximal_phalanx_1"));
ROUTE1748.setToField(CString("rotation"));
ROUTE1748.setToNode(CString("hanim_r_carpal_proximal_phalanx_1"));
Scene7.addChild(&ROUTE1748);

ROUTE& ROUTE1749 =  ROUTE();
ROUTE1749.setFromField(CString("fraction_changed"));
ROUTE1749.setFromNode(CString("Armature_Clock"));
ROUTE1749.setToField(CString("set_fraction"));
ROUTE1749.setToNode(CString("Armature_OI_r_carpal_distal_phalanx_1"));
Scene7.addChild(&ROUTE1749);

ROUTE& ROUTE1750 =  ROUTE();
ROUTE1750.setFromField(CString("value_changed"));
ROUTE1750.setFromNode(CString("Armature_OI_r_carpal_distal_phalanx_1"));
ROUTE1750.setToField(CString("rotation"));
ROUTE1750.setToNode(CString("hanim_r_carpal_distal_phalanx_1"));
Scene7.addChild(&ROUTE1750);

ROUTE& ROUTE1751 =  ROUTE();
ROUTE1751.setFromField(CString("fraction_changed"));
ROUTE1751.setFromNode(CString("Armature_Clock"));
ROUTE1751.setToField(CString("set_fraction"));
ROUTE1751.setToNode(CString("Armature_OI_r_trapezoid"));
Scene7.addChild(&ROUTE1751);

ROUTE& ROUTE1752 =  ROUTE();
ROUTE1752.setFromField(CString("value_changed"));
ROUTE1752.setFromNode(CString("Armature_OI_r_trapezoid"));
ROUTE1752.setToField(CString("rotation"));
ROUTE1752.setToNode(CString("hanim_r_trapezoid"));
Scene7.addChild(&ROUTE1752);

ROUTE& ROUTE1753 =  ROUTE();
ROUTE1753.setFromField(CString("fraction_changed"));
ROUTE1753.setFromNode(CString("Armature_Clock"));
ROUTE1753.setToField(CString("set_fraction"));
ROUTE1753.setToNode(CString("Armature_OI_r_metacarpal_2"));
Scene7.addChild(&ROUTE1753);

ROUTE& ROUTE1754 =  ROUTE();
ROUTE1754.setFromField(CString("value_changed"));
ROUTE1754.setFromNode(CString("Armature_OI_r_metacarpal_2"));
ROUTE1754.setToField(CString("rotation"));
ROUTE1754.setToNode(CString("hanim_r_metacarpal_2"));
Scene7.addChild(&ROUTE1754);

ROUTE& ROUTE1755 =  ROUTE();
ROUTE1755.setFromField(CString("fraction_changed"));
ROUTE1755.setFromNode(CString("Armature_Clock"));
ROUTE1755.setToField(CString("set_fraction"));
ROUTE1755.setToNode(CString("Armature_OI_r_carpal_proximal_phalanx_2"));
Scene7.addChild(&ROUTE1755);

ROUTE& ROUTE1756 =  ROUTE();
ROUTE1756.setFromField(CString("value_changed"));
ROUTE1756.setFromNode(CString("Armature_OI_r_carpal_proximal_phalanx_2"));
ROUTE1756.setToField(CString("rotation"));
ROUTE1756.setToNode(CString("hanim_r_carpal_proximal_phalanx_2"));
Scene7.addChild(&ROUTE1756);

ROUTE& ROUTE1757 =  ROUTE();
ROUTE1757.setFromField(CString("fraction_changed"));
ROUTE1757.setFromNode(CString("Armature_Clock"));
ROUTE1757.setToField(CString("set_fraction"));
ROUTE1757.setToNode(CString("Armature_OI_r_carpal_middle_phalanx_2"));
Scene7.addChild(&ROUTE1757);

ROUTE& ROUTE1758 =  ROUTE();
ROUTE1758.setFromField(CString("value_changed"));
ROUTE1758.setFromNode(CString("Armature_OI_r_carpal_middle_phalanx_2"));
ROUTE1758.setToField(CString("rotation"));
ROUTE1758.setToNode(CString("hanim_r_carpal_middle_phalanx_2"));
Scene7.addChild(&ROUTE1758);

ROUTE& ROUTE1759 =  ROUTE();
ROUTE1759.setFromField(CString("fraction_changed"));
ROUTE1759.setFromNode(CString("Armature_Clock"));
ROUTE1759.setToField(CString("set_fraction"));
ROUTE1759.setToNode(CString("Armature_OI_r_carpal_distal_phalanx_2"));
Scene7.addChild(&ROUTE1759);

ROUTE& ROUTE1760 =  ROUTE();
ROUTE1760.setFromField(CString("value_changed"));
ROUTE1760.setFromNode(CString("Armature_OI_r_carpal_distal_phalanx_2"));
ROUTE1760.setToField(CString("rotation"));
ROUTE1760.setToNode(CString("hanim_r_carpal_distal_phalanx_2"));
Scene7.addChild(&ROUTE1760);

ROUTE& ROUTE1761 =  ROUTE();
ROUTE1761.setFromField(CString("fraction_changed"));
ROUTE1761.setFromNode(CString("Armature_Clock"));
ROUTE1761.setToField(CString("set_fraction"));
ROUTE1761.setToNode(CString("Armature_OI_r_capitate"));
Scene7.addChild(&ROUTE1761);

ROUTE& ROUTE1762 =  ROUTE();
ROUTE1762.setFromField(CString("value_changed"));
ROUTE1762.setFromNode(CString("Armature_OI_r_capitate"));
ROUTE1762.setToField(CString("rotation"));
ROUTE1762.setToNode(CString("hanim_r_capitate"));
Scene7.addChild(&ROUTE1762);

ROUTE& ROUTE1763 =  ROUTE();
ROUTE1763.setFromField(CString("fraction_changed"));
ROUTE1763.setFromNode(CString("Armature_Clock"));
ROUTE1763.setToField(CString("set_fraction"));
ROUTE1763.setToNode(CString("Armature_OI_r_metacarpal_3"));
Scene7.addChild(&ROUTE1763);

ROUTE& ROUTE1764 =  ROUTE();
ROUTE1764.setFromField(CString("value_changed"));
ROUTE1764.setFromNode(CString("Armature_OI_r_metacarpal_3"));
ROUTE1764.setToField(CString("rotation"));
ROUTE1764.setToNode(CString("hanim_r_metacarpal_3"));
Scene7.addChild(&ROUTE1764);

ROUTE& ROUTE1765 =  ROUTE();
ROUTE1765.setFromField(CString("fraction_changed"));
ROUTE1765.setFromNode(CString("Armature_Clock"));
ROUTE1765.setToField(CString("set_fraction"));
ROUTE1765.setToNode(CString("Armature_OI_r_carpal_proximal_phalanx_3"));
Scene7.addChild(&ROUTE1765);

ROUTE& ROUTE1766 =  ROUTE();
ROUTE1766.setFromField(CString("value_changed"));
ROUTE1766.setFromNode(CString("Armature_OI_r_carpal_proximal_phalanx_3"));
ROUTE1766.setToField(CString("rotation"));
ROUTE1766.setToNode(CString("hanim_r_carpal_proximal_phalanx_3"));
Scene7.addChild(&ROUTE1766);

ROUTE& ROUTE1767 =  ROUTE();
ROUTE1767.setFromField(CString("fraction_changed"));
ROUTE1767.setFromNode(CString("Armature_Clock"));
ROUTE1767.setToField(CString("set_fraction"));
ROUTE1767.setToNode(CString("Armature_OI_r_carpal_middle_phalanx_3"));
Scene7.addChild(&ROUTE1767);

ROUTE& ROUTE1768 =  ROUTE();
ROUTE1768.setFromField(CString("value_changed"));
ROUTE1768.setFromNode(CString("Armature_OI_r_carpal_middle_phalanx_3"));
ROUTE1768.setToField(CString("rotation"));
ROUTE1768.setToNode(CString("hanim_r_carpal_middle_phalanx_3"));
Scene7.addChild(&ROUTE1768);

ROUTE& ROUTE1769 =  ROUTE();
ROUTE1769.setFromField(CString("fraction_changed"));
ROUTE1769.setFromNode(CString("Armature_Clock"));
ROUTE1769.setToField(CString("set_fraction"));
ROUTE1769.setToNode(CString("Armature_OI_r_carpal_distal_phalanx_3"));
Scene7.addChild(&ROUTE1769);

ROUTE& ROUTE1770 =  ROUTE();
ROUTE1770.setFromField(CString("value_changed"));
ROUTE1770.setFromNode(CString("Armature_OI_r_carpal_distal_phalanx_3"));
ROUTE1770.setToField(CString("rotation"));
ROUTE1770.setToNode(CString("hanim_r_carpal_distal_phalanx_3"));
Scene7.addChild(&ROUTE1770);

ROUTE& ROUTE1771 =  ROUTE();
ROUTE1771.setFromField(CString("fraction_changed"));
ROUTE1771.setFromNode(CString("Armature_Clock"));
ROUTE1771.setToField(CString("set_fraction"));
ROUTE1771.setToNode(CString("Armature_OI_r_hamate"));
Scene7.addChild(&ROUTE1771);

ROUTE& ROUTE1772 =  ROUTE();
ROUTE1772.setFromField(CString("value_changed"));
ROUTE1772.setFromNode(CString("Armature_OI_r_hamate"));
ROUTE1772.setToField(CString("rotation"));
ROUTE1772.setToNode(CString("hanim_r_hamate"));
Scene7.addChild(&ROUTE1772);

ROUTE& ROUTE1773 =  ROUTE();
ROUTE1773.setFromField(CString("fraction_changed"));
ROUTE1773.setFromNode(CString("Armature_Clock"));
ROUTE1773.setToField(CString("set_fraction"));
ROUTE1773.setToNode(CString("Armature_OI_r_metacarpal_4"));
Scene7.addChild(&ROUTE1773);

ROUTE& ROUTE1774 =  ROUTE();
ROUTE1774.setFromField(CString("value_changed"));
ROUTE1774.setFromNode(CString("Armature_OI_r_metacarpal_4"));
ROUTE1774.setToField(CString("rotation"));
ROUTE1774.setToNode(CString("hanim_r_metacarpal_4"));
Scene7.addChild(&ROUTE1774);

ROUTE& ROUTE1775 =  ROUTE();
ROUTE1775.setFromField(CString("fraction_changed"));
ROUTE1775.setFromNode(CString("Armature_Clock"));
ROUTE1775.setToField(CString("set_fraction"));
ROUTE1775.setToNode(CString("Armature_OI_r_carpal_proximal_phalanx_4"));
Scene7.addChild(&ROUTE1775);

ROUTE& ROUTE1776 =  ROUTE();
ROUTE1776.setFromField(CString("value_changed"));
ROUTE1776.setFromNode(CString("Armature_OI_r_carpal_proximal_phalanx_4"));
ROUTE1776.setToField(CString("rotation"));
ROUTE1776.setToNode(CString("hanim_r_carpal_proximal_phalanx_4"));
Scene7.addChild(&ROUTE1776);

ROUTE& ROUTE1777 =  ROUTE();
ROUTE1777.setFromField(CString("fraction_changed"));
ROUTE1777.setFromNode(CString("Armature_Clock"));
ROUTE1777.setToField(CString("set_fraction"));
ROUTE1777.setToNode(CString("Armature_OI_r_carpal_middle_phalanx_4"));
Scene7.addChild(&ROUTE1777);

ROUTE& ROUTE1778 =  ROUTE();
ROUTE1778.setFromField(CString("value_changed"));
ROUTE1778.setFromNode(CString("Armature_OI_r_carpal_middle_phalanx_4"));
ROUTE1778.setToField(CString("rotation"));
ROUTE1778.setToNode(CString("hanim_r_carpal_middle_phalanx_4"));
Scene7.addChild(&ROUTE1778);

ROUTE& ROUTE1779 =  ROUTE();
ROUTE1779.setFromField(CString("fraction_changed"));
ROUTE1779.setFromNode(CString("Armature_Clock"));
ROUTE1779.setToField(CString("set_fraction"));
ROUTE1779.setToNode(CString("Armature_OI_r_carpal_distal_phalanx_4"));
Scene7.addChild(&ROUTE1779);

ROUTE& ROUTE1780 =  ROUTE();
ROUTE1780.setFromField(CString("value_changed"));
ROUTE1780.setFromNode(CString("Armature_OI_r_carpal_distal_phalanx_4"));
ROUTE1780.setToField(CString("rotation"));
ROUTE1780.setToNode(CString("hanim_r_carpal_distal_phalanx_4"));
Scene7.addChild(&ROUTE1780);

ROUTE& ROUTE1781 =  ROUTE();
ROUTE1781.setFromField(CString("fraction_changed"));
ROUTE1781.setFromNode(CString("Armature_Clock"));
ROUTE1781.setToField(CString("set_fraction"));
ROUTE1781.setToNode(CString("Armature_OI_r_metacarpal_5"));
Scene7.addChild(&ROUTE1781);

ROUTE& ROUTE1782 =  ROUTE();
ROUTE1782.setFromField(CString("value_changed"));
ROUTE1782.setFromNode(CString("Armature_OI_r_metacarpal_5"));
ROUTE1782.setToField(CString("rotation"));
ROUTE1782.setToNode(CString("hanim_r_metacarpal_5"));
Scene7.addChild(&ROUTE1782);

ROUTE& ROUTE1783 =  ROUTE();
ROUTE1783.setFromField(CString("fraction_changed"));
ROUTE1783.setFromNode(CString("Armature_Clock"));
ROUTE1783.setToField(CString("set_fraction"));
ROUTE1783.setToNode(CString("Armature_OI_r_carpal_proximal_phalanx_5"));
Scene7.addChild(&ROUTE1783);

ROUTE& ROUTE1784 =  ROUTE();
ROUTE1784.setFromField(CString("value_changed"));
ROUTE1784.setFromNode(CString("Armature_OI_r_carpal_proximal_phalanx_5"));
ROUTE1784.setToField(CString("rotation"));
ROUTE1784.setToNode(CString("hanim_r_carpal_proximal_phalanx_5"));
Scene7.addChild(&ROUTE1784);

ROUTE& ROUTE1785 =  ROUTE();
ROUTE1785.setFromField(CString("fraction_changed"));
ROUTE1785.setFromNode(CString("Armature_Clock"));
ROUTE1785.setToField(CString("set_fraction"));
ROUTE1785.setToNode(CString("Armature_OI_r_carpal_middle_phalanx_5"));
Scene7.addChild(&ROUTE1785);

ROUTE& ROUTE1786 =  ROUTE();
ROUTE1786.setFromField(CString("value_changed"));
ROUTE1786.setFromNode(CString("Armature_OI_r_carpal_middle_phalanx_5"));
ROUTE1786.setToField(CString("rotation"));
ROUTE1786.setToNode(CString("hanim_r_carpal_middle_phalanx_5"));
Scene7.addChild(&ROUTE1786);

ROUTE& ROUTE1787 =  ROUTE();
ROUTE1787.setFromField(CString("fraction_changed"));
ROUTE1787.setFromNode(CString("Armature_Clock"));
ROUTE1787.setToField(CString("set_fraction"));
ROUTE1787.setToNode(CString("Armature_OI_r_carpal_distal_phalanx_5"));
Scene7.addChild(&ROUTE1787);

ROUTE& ROUTE1788 =  ROUTE();
ROUTE1788.setFromField(CString("value_changed"));
ROUTE1788.setFromNode(CString("Armature_OI_r_carpal_distal_phalanx_5"));
ROUTE1788.setToField(CString("rotation"));
ROUTE1788.setToNode(CString("hanim_r_carpal_distal_phalanx_5"));
Scene7.addChild(&ROUTE1788);

X3D0.setScene(&Scene7);

}
