/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
head* head1 = new head();
component* component2 = new component();
component2->setName("HAnim");
component2->setLevel(3);
head1->addComponent(component2);

meta* meta3 = new meta();
meta3->setName("title");
meta3->setContent("blenderSkeleton.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("copyright");
meta4->setContent("2023");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("reference");
meta5->setContent("http://www.web3D.org");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("generator");
meta6->setContent("Blender 4.0.1");
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
NavigationInfo* NavigationInfo8 = new NavigationInfo();
Scene7->addChild(NavigationInfo8);

Background* Background9 = new Background();
Background9->setDEF("WO_World");
Background9->setGroundColor(new float[3]{0.05087608844041824,0.05087608844041824,0.05087608844041824});
Background9->setSkyColor(new float[3]{0.05087608844041824,0.05087608844041824,0.05087608844041824});
Scene7->addChild(Background9);

Transform* Transform10 = new Transform();
Shape* Shape11 = new Shape();
Shape11->setDEF("SiteShape");
Box* Box12 = new Box();
Box12->setSize(new float[3]{0.05,0.05,0.05});
Shape11->setGeometry(Box12);

Appearance* Appearance13 = new Appearance();
Material* Material14 = new Material();
Material14->setDiffuseColor(new float[3]{0,0,1});
Appearance13->setMaterial(Material14);

Shape11->setAppearance(Appearance13);

Transform10->addChild(Shape11);

Scene7->addChild(Transform10);

Transform* Transform15 = new Transform();
Shape* Shape16 = new Shape();
Shape16->setDEF("JointShape");
Sphere* Sphere17 = new Sphere();
Sphere17->setRadius(0.06);
Shape16->setGeometry(Sphere17);

Appearance* Appearance18 = new Appearance();
Appearance18->setDEF("JointAppearance");
Material* Material19 = new Material();
Material19->setDiffuseColor(new float[3]{1,0.5,0});
Material19->setTransparency(0.5);
Appearance18->setMaterial(Material19);

Shape16->setAppearance(Appearance18);

Transform15->addChild(Shape16);

Scene7->addChild(Transform15);

Transform* Transform20 = new Transform();
Transform20->setDEF("Light_TRANSFORM");
Transform20->setRotation(new float[4]{0.20594,0.33152,0.9207,1.92627});
Transform20->setTranslation(new float[3]{4.07625,1.00545,5.90386});
PointLight* PointLight21 = new PointLight();
PointLight21->setDEF("LA_Light");
PointLight21->setLocation(new float[3]{-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7});
PointLight21->setRadius(40);
Transform20->addChild(PointLight21);

Scene7->addChild(Transform20);

Transform* Transform22 = new Transform();
Transform22->setDEF("Camera_TRANSFORM");
Transform22->setRotation(new float[4]{0.77344,0.33383,0.53884,1.35072});
Transform22->setTranslation(new float[3]{7.35889,-6.92579,4.95831});
Viewpoint* Viewpoint23 = new Viewpoint();
Viewpoint23->setDEF("CA_Camera");
Viewpoint23->setFieldOfView(0.6911112070083618);
Viewpoint23->setOrientation(new float[4]{-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0});
Viewpoint23->setPosition(new float[3]{-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7});
Transform22->addChild(Viewpoint23);

Scene7->addChild(Transform22);

Transform* Transform24 = new Transform();
Transform24->setDEF("Armature_TRANSFORM");
HAnimHumanoid* HAnimHumanoid25 = new HAnimHumanoid();
HAnimHumanoid25->setName("humanoid");
HAnimHumanoid25->setDEF("hanim_humanoid");
HAnimHumanoid25->setVersion("2.0");
HAnimJoint* HAnimJoint26 = new HAnimJoint();
HAnimJoint26->setName("Armature");
HAnimJoint26->setDEF("hanim_Armature");
HAnimSegment* HAnimSegment27 = new HAnimSegment();
HAnimSegment27->setName("SEGMENT_FOR_Armature");
HAnimSegment27->setDEF("hanim_SEGMENT_FOR_Armature");
TouchSensor* TouchSensor28 = new TouchSensor();
TouchSensor28->setDescription("joint Armature segment SEGMENT_FOR_Armature");
HAnimSegment27->addChild(TouchSensor28);

Transform* Transform29 = new Transform();
Shape* Shape30 = new Shape();
Shape30->setUSE("JointShape");
Transform29->addChild(Shape30);

HAnimSegment27->addChild(Transform29);

HAnimSite* HAnimSite31 = new HAnimSite();
HAnimSite31->setName("SEGMENT_FOR_Armature_tip");
HAnimSite31->setDEF("hanim_SEGMENT_FOR_Armature_tip");
Transform* Transform32 = new Transform();
Shape* Shape33 = new Shape();
Shape33->setUSE("SiteShape");
Transform32->addChild(Shape33);

HAnimSite31->addChild(Transform32);

HAnimSegment27->addChild(HAnimSite31);

HAnimJoint26->addChild(HAnimSegment27);

HAnimJoint* HAnimJoint34 = new HAnimJoint();
HAnimJoint34->setName("sacrum");
HAnimJoint34->setDEF("hanim_sacrum");
HAnimJoint34->setCenter(new float[3]{-0.0002,-0.1178,0.8174});
HAnimSegment* HAnimSegment35 = new HAnimSegment();
HAnimSegment35->setName("SEGMENT_FOR_sacrum");
HAnimSegment35->setDEF("hanim_SEGMENT_FOR_sacrum");
TouchSensor* TouchSensor36 = new TouchSensor();
TouchSensor36->setDescription("joint sacrum segment SEGMENT_FOR_sacrum");
HAnimSegment35->addChild(TouchSensor36);

Transform* Transform37 = new Transform();
Transform37->setTranslation(new float[3]{-0.0002,-0.1178,0.8174});
Shape* Shape38 = new Shape();
Shape38->setUSE("JointShape");
Transform37->addChild(Shape38);

HAnimSegment35->addChild(Transform37);

HAnimSite* HAnimSite39 = new HAnimSite();
HAnimSite39->setName("SEGMENT_FOR_sacrum_tip");
HAnimSite39->setDEF("hanim_SEGMENT_FOR_sacrum_tip");
Transform* Transform40 = new Transform();
Transform40->setTranslation(new float[3]{-0.0002,-0.1178,0.8174});
Shape* Shape41 = new Shape();
Shape41->setUSE("SiteShape");
Transform40->addChild(Shape41);

HAnimSite39->addChild(Transform40);

HAnimSegment35->addChild(HAnimSite39);

HAnimJoint34->addChild(HAnimSegment35);

HAnimJoint* HAnimJoint42 = new HAnimJoint();
HAnimJoint42->setName("pelvis");
HAnimJoint42->setDEF("hanim_pelvis");
HAnimJoint42->setCenter(new float[3]{-0.0002,-0.1178,0.6986});
HAnimSegment* HAnimSegment43 = new HAnimSegment();
HAnimSegment43->setName("SEGMENT_FOR_pelvis");
HAnimSegment43->setDEF("hanim_SEGMENT_FOR_pelvis");
TouchSensor* TouchSensor44 = new TouchSensor();
TouchSensor44->setDescription("joint pelvis segment SEGMENT_FOR_pelvis");
HAnimSegment43->addChild(TouchSensor44);

Transform* Transform45 = new Transform();
Transform45->setTranslation(new float[3]{-0.0002,-0.1178,0.6986});
Shape* Shape46 = new Shape();
Shape46->setUSE("JointShape");
Transform45->addChild(Shape46);

HAnimSegment43->addChild(Transform45);

HAnimSite* HAnimSite47 = new HAnimSite();
HAnimSite47->setName("SEGMENT_FOR_pelvis_tip");
HAnimSite47->setDEF("hanim_SEGMENT_FOR_pelvis_tip");
Transform* Transform48 = new Transform();
Transform48->setTranslation(new float[3]{-0.0002,-0.1178,0.6986});
Shape* Shape49 = new Shape();
Shape49->setUSE("SiteShape");
Transform48->addChild(Shape49);

HAnimSite47->addChild(Transform48);

HAnimSegment43->addChild(HAnimSite47);

HAnimJoint42->addChild(HAnimSegment43);

HAnimJoint* HAnimJoint50 = new HAnimJoint();
HAnimJoint50->setName("l_thigh");
HAnimJoint50->setDEF("hanim_l_thigh");
HAnimJoint50->setCenter(new float[3]{0.0945,-0.1202,0.8181});
HAnimSegment* HAnimSegment51 = new HAnimSegment();
HAnimSegment51->setName("SEGMENT_FOR_l_thigh");
HAnimSegment51->setDEF("hanim_SEGMENT_FOR_l_thigh");
TouchSensor* TouchSensor52 = new TouchSensor();
TouchSensor52->setDescription("joint l_thigh segment SEGMENT_FOR_l_thigh");
HAnimSegment51->addChild(TouchSensor52);

Transform* Transform53 = new Transform();
Transform53->setTranslation(new float[3]{0.0945,-0.1202,0.8181});
Shape* Shape54 = new Shape();
Shape54->setUSE("JointShape");
Transform53->addChild(Shape54);

HAnimSegment51->addChild(Transform53);

HAnimSite* HAnimSite55 = new HAnimSite();
HAnimSite55->setName("SEGMENT_FOR_l_thigh_tip");
HAnimSite55->setDEF("hanim_SEGMENT_FOR_l_thigh_tip");
Transform* Transform56 = new Transform();
Transform56->setTranslation(new float[3]{0.0945,-0.1202,0.8181});
Shape* Shape57 = new Shape();
Shape57->setUSE("SiteShape");
Transform56->addChild(Shape57);

HAnimSite55->addChild(Transform56);

HAnimSegment51->addChild(HAnimSite55);

HAnimJoint50->addChild(HAnimSegment51);

HAnimJoint* HAnimJoint58 = new HAnimJoint();
HAnimJoint58->setName("l_calf");
HAnimJoint58->setDEF("hanim_l_calf");
HAnimJoint58->setCenter(new float[3]{0.0924,-0.1213,0.4003});
HAnimSegment* HAnimSegment59 = new HAnimSegment();
HAnimSegment59->setName("SEGMENT_FOR_l_calf");
HAnimSegment59->setDEF("hanim_SEGMENT_FOR_l_calf");
TouchSensor* TouchSensor60 = new TouchSensor();
TouchSensor60->setDescription("joint l_calf segment SEGMENT_FOR_l_calf");
HAnimSegment59->addChild(TouchSensor60);

Transform* Transform61 = new Transform();
Transform61->setTranslation(new float[3]{0.0924,-0.1213,0.4003});
Shape* Shape62 = new Shape();
Shape62->setUSE("JointShape");
Transform61->addChild(Shape62);

HAnimSegment59->addChild(Transform61);

HAnimSite* HAnimSite63 = new HAnimSite();
HAnimSite63->setName("SEGMENT_FOR_l_calf_tip");
HAnimSite63->setDEF("hanim_SEGMENT_FOR_l_calf_tip");
Transform* Transform64 = new Transform();
Transform64->setTranslation(new float[3]{0.0924,-0.1213,0.4003});
Shape* Shape65 = new Shape();
Shape65->setUSE("SiteShape");
Transform64->addChild(Shape65);

HAnimSite63->addChild(Transform64);

HAnimSegment59->addChild(HAnimSite63);

HAnimJoint58->addChild(HAnimSegment59);

HAnimJoint* HAnimJoint66 = new HAnimJoint();
HAnimJoint66->setName("l_talus");
HAnimJoint66->setDEF("hanim_l_talus");
HAnimJoint66->setCenter(new float[3]{0.0886,-0.1123,0.0869});
HAnimSegment* HAnimSegment67 = new HAnimSegment();
HAnimSegment67->setName("SEGMENT_FOR_l_talus");
HAnimSegment67->setDEF("hanim_SEGMENT_FOR_l_talus");
TouchSensor* TouchSensor68 = new TouchSensor();
TouchSensor68->setDescription("joint l_talus segment SEGMENT_FOR_l_talus");
HAnimSegment67->addChild(TouchSensor68);

Transform* Transform69 = new Transform();
Transform69->setTranslation(new float[3]{0.0886,-0.1123,0.0869});
Shape* Shape70 = new Shape();
Shape70->setUSE("JointShape");
Transform69->addChild(Shape70);

HAnimSegment67->addChild(Transform69);

HAnimSite* HAnimSite71 = new HAnimSite();
HAnimSite71->setName("SEGMENT_FOR_l_talus_tip");
HAnimSite71->setDEF("hanim_SEGMENT_FOR_l_talus_tip");
Transform* Transform72 = new Transform();
Transform72->setTranslation(new float[3]{0.0886,-0.1123,0.0869});
Shape* Shape73 = new Shape();
Shape73->setUSE("SiteShape");
Transform72->addChild(Shape73);

HAnimSite71->addChild(Transform72);

HAnimSegment67->addChild(HAnimSite71);

HAnimJoint66->addChild(HAnimSegment67);

HAnimJoint* HAnimJoint74 = new HAnimJoint();
HAnimJoint74->setName("l_navicular");
HAnimJoint74->setDEF("hanim_l_navicular");
HAnimJoint74->setCenter(new float[3]{0.0781,-0.097,0.0283});
HAnimSegment* HAnimSegment75 = new HAnimSegment();
HAnimSegment75->setName("SEGMENT_FOR_l_navicular");
HAnimSegment75->setDEF("hanim_SEGMENT_FOR_l_navicular");
TouchSensor* TouchSensor76 = new TouchSensor();
TouchSensor76->setDescription("joint l_navicular segment SEGMENT_FOR_l_navicular");
HAnimSegment75->addChild(TouchSensor76);

Transform* Transform77 = new Transform();
Transform77->setTranslation(new float[3]{0.0781,-0.097,0.0283});
Shape* Shape78 = new Shape();
Shape78->setUSE("JointShape");
Transform77->addChild(Shape78);

HAnimSegment75->addChild(Transform77);

HAnimSite* HAnimSite79 = new HAnimSite();
HAnimSite79->setName("SEGMENT_FOR_l_navicular_tip");
HAnimSite79->setDEF("hanim_SEGMENT_FOR_l_navicular_tip");
Transform* Transform80 = new Transform();
Transform80->setTranslation(new float[3]{0.0781,-0.097,0.0283});
Shape* Shape81 = new Shape();
Shape81->setUSE("SiteShape");
Transform80->addChild(Shape81);

HAnimSite79->addChild(Transform80);

HAnimSegment75->addChild(HAnimSite79);

HAnimJoint74->addChild(HAnimSegment75);

HAnimJoint* HAnimJoint82 = new HAnimJoint();
HAnimJoint82->setName("l_cuneiform_1");
HAnimJoint82->setDEF("hanim_l_cuneiform_1");
HAnimJoint82->setCenter(new float[3]{0.0672,-0.0835,0.0235});
HAnimSegment* HAnimSegment83 = new HAnimSegment();
HAnimSegment83->setName("SEGMENT_FOR_l_cuneiform_1");
HAnimSegment83->setDEF("hanim_SEGMENT_FOR_l_cuneiform_1");
TouchSensor* TouchSensor84 = new TouchSensor();
TouchSensor84->setDescription("joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1");
HAnimSegment83->addChild(TouchSensor84);

Transform* Transform85 = new Transform();
Transform85->setTranslation(new float[3]{0.0672,-0.0835,0.0235});
Shape* Shape86 = new Shape();
Shape86->setUSE("JointShape");
Transform85->addChild(Shape86);

HAnimSegment83->addChild(Transform85);

HAnimSite* HAnimSite87 = new HAnimSite();
HAnimSite87->setName("SEGMENT_FOR_l_cuneiform_1_tip");
HAnimSite87->setDEF("hanim_SEGMENT_FOR_l_cuneiform_1_tip");
Transform* Transform88 = new Transform();
Transform88->setTranslation(new float[3]{0.0672,-0.0835,0.0235});
Shape* Shape89 = new Shape();
Shape89->setUSE("SiteShape");
Transform88->addChild(Shape89);

HAnimSite87->addChild(Transform88);

HAnimSegment83->addChild(HAnimSite87);

HAnimJoint82->addChild(HAnimSegment83);

HAnimJoint* HAnimJoint90 = new HAnimJoint();
HAnimJoint90->setName("l_metatarsal_1");
HAnimJoint90->setDEF("hanim_l_metatarsal_1");
HAnimJoint90->setCenter(new float[3]{0.0644,-0.0577,0.0147});
HAnimSegment* HAnimSegment91 = new HAnimSegment();
HAnimSegment91->setName("SEGMENT_FOR_l_metatarsal_1");
HAnimSegment91->setDEF("hanim_SEGMENT_FOR_l_metatarsal_1");
TouchSensor* TouchSensor92 = new TouchSensor();
TouchSensor92->setDescription("joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1");
HAnimSegment91->addChild(TouchSensor92);

Transform* Transform93 = new Transform();
Transform93->setTranslation(new float[3]{0.0644,-0.0577,0.0147});
Shape* Shape94 = new Shape();
Shape94->setUSE("JointShape");
Transform93->addChild(Shape94);

HAnimSegment91->addChild(Transform93);

HAnimSite* HAnimSite95 = new HAnimSite();
HAnimSite95->setName("SEGMENT_FOR_l_metatarsal_1_tip");
HAnimSite95->setDEF("hanim_SEGMENT_FOR_l_metatarsal_1_tip");
Transform* Transform96 = new Transform();
Transform96->setTranslation(new float[3]{0.0644,-0.0577,0.0147});
Shape* Shape97 = new Shape();
Shape97->setUSE("SiteShape");
Transform96->addChild(Shape97);

HAnimSite95->addChild(Transform96);

HAnimSegment91->addChild(HAnimSite95);

HAnimJoint90->addChild(HAnimSegment91);

HAnimJoint* HAnimJoint98 = new HAnimJoint();
HAnimJoint98->setName("l_tarsal_proximal_phalanx_1");
HAnimJoint98->setDEF("hanim_l_tarsal_proximal_phalanx_1");
HAnimJoint98->setCenter(new float[3]{0.0619,-0.0083,0.0059});
HAnimSegment* HAnimSegment99 = new HAnimSegment();
HAnimSegment99->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_1");
HAnimSegment99->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1");
TouchSensor* TouchSensor100 = new TouchSensor();
TouchSensor100->setDescription("joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1");
HAnimSegment99->addChild(TouchSensor100);

Transform* Transform101 = new Transform();
Transform101->setTranslation(new float[3]{0.0619,-0.0083,0.0059});
Shape* Shape102 = new Shape();
Shape102->setUSE("JointShape");
Transform101->addChild(Shape102);

HAnimSegment99->addChild(Transform101);

HAnimSite* HAnimSite103 = new HAnimSite();
HAnimSite103->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip");
HAnimSite103->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip");
Transform* Transform104 = new Transform();
Transform104->setTranslation(new float[3]{0.0619,-0.0083,0.0059});
Shape* Shape105 = new Shape();
Shape105->setUSE("SiteShape");
Transform104->addChild(Shape105);

HAnimSite103->addChild(Transform104);

HAnimSegment99->addChild(HAnimSite103);

HAnimJoint98->addChild(HAnimSegment99);

HAnimJoint* HAnimJoint106 = new HAnimJoint();
HAnimJoint106->setName("l_tarsal_distal_phalanx_1");
HAnimJoint106->setDEF("hanim_l_tarsal_distal_phalanx_1");
HAnimSegment* HAnimSegment107 = new HAnimSegment();
HAnimSegment107->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_1");
HAnimSegment107->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1");
TouchSensor* TouchSensor108 = new TouchSensor();
TouchSensor108->setDescription("joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1");
HAnimSegment107->addChild(TouchSensor108);

Transform* Transform109 = new Transform();
Shape* Shape110 = new Shape();
Shape110->setUSE("JointShape");
Transform109->addChild(Shape110);

HAnimSegment107->addChild(Transform109);

HAnimSite* HAnimSite111 = new HAnimSite();
HAnimSite111->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip");
HAnimSite111->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip");
Transform* Transform112 = new Transform();
Shape* Shape113 = new Shape();
Shape113->setUSE("SiteShape");
Transform112->addChild(Shape113);

HAnimSite111->addChild(Transform112);

HAnimSegment107->addChild(HAnimSite111);

HAnimJoint106->addChild(HAnimSegment107);

HAnimJoint98->addChild(HAnimJoint106);

HAnimJoint90->addChild(HAnimJoint98);

HAnimJoint82->addChild(HAnimJoint90);

HAnimJoint74->addChild(HAnimJoint82);

HAnimJoint* HAnimJoint114 = new HAnimJoint();
HAnimJoint114->setName("l_cuneiform_2");
HAnimJoint114->setDEF("hanim_l_cuneiform_2");
HAnimJoint114->setCenter(new float[3]{0.0812,-0.0805,0.025});
HAnimSegment* HAnimSegment115 = new HAnimSegment();
HAnimSegment115->setName("SEGMENT_FOR_l_cuneiform_2");
HAnimSegment115->setDEF("hanim_SEGMENT_FOR_l_cuneiform_2");
TouchSensor* TouchSensor116 = new TouchSensor();
TouchSensor116->setDescription("joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2");
HAnimSegment115->addChild(TouchSensor116);

Transform* Transform117 = new Transform();
Transform117->setTranslation(new float[3]{0.0812,-0.0805,0.025});
Shape* Shape118 = new Shape();
Shape118->setUSE("JointShape");
Transform117->addChild(Shape118);

HAnimSegment115->addChild(Transform117);

HAnimSite* HAnimSite119 = new HAnimSite();
HAnimSite119->setName("SEGMENT_FOR_l_cuneiform_2_tip");
HAnimSite119->setDEF("hanim_SEGMENT_FOR_l_cuneiform_2_tip");
Transform* Transform120 = new Transform();
Transform120->setTranslation(new float[3]{0.0812,-0.0805,0.025});
Shape* Shape121 = new Shape();
Shape121->setUSE("SiteShape");
Transform120->addChild(Shape121);

HAnimSite119->addChild(Transform120);

HAnimSegment115->addChild(HAnimSite119);

HAnimJoint114->addChild(HAnimSegment115);

HAnimJoint* HAnimJoint122 = new HAnimJoint();
HAnimJoint122->setName("l_metatarsal_2");
HAnimJoint122->setDEF("hanim_l_metatarsal_2");
HAnimJoint122->setCenter(new float[3]{0.08,-0.0608,0.0175});
HAnimSegment* HAnimSegment123 = new HAnimSegment();
HAnimSegment123->setName("SEGMENT_FOR_l_metatarsal_2");
HAnimSegment123->setDEF("hanim_SEGMENT_FOR_l_metatarsal_2");
TouchSensor* TouchSensor124 = new TouchSensor();
TouchSensor124->setDescription("joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2");
HAnimSegment123->addChild(TouchSensor124);

Transform* Transform125 = new Transform();
Transform125->setTranslation(new float[3]{0.08,-0.0608,0.0175});
Shape* Shape126 = new Shape();
Shape126->setUSE("JointShape");
Transform125->addChild(Shape126);

HAnimSegment123->addChild(Transform125);

HAnimSite* HAnimSite127 = new HAnimSite();
HAnimSite127->setName("SEGMENT_FOR_l_metatarsal_2_tip");
HAnimSite127->setDEF("hanim_SEGMENT_FOR_l_metatarsal_2_tip");
Transform* Transform128 = new Transform();
Transform128->setTranslation(new float[3]{0.08,-0.0608,0.0175});
Shape* Shape129 = new Shape();
Shape129->setUSE("SiteShape");
Transform128->addChild(Shape129);

HAnimSite127->addChild(Transform128);

HAnimSegment123->addChild(HAnimSite127);

HAnimJoint122->addChild(HAnimSegment123);

HAnimJoint* HAnimJoint130 = new HAnimJoint();
HAnimJoint130->setName("l_tarsal_proximal_phalanx_2");
HAnimJoint130->setDEF("hanim_l_tarsal_proximal_phalanx_2");
HAnimJoint130->setCenter(new float[3]{0.0824,-0.004,0.0064});
HAnimSegment* HAnimSegment131 = new HAnimSegment();
HAnimSegment131->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_2");
HAnimSegment131->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2");
TouchSensor* TouchSensor132 = new TouchSensor();
TouchSensor132->setDescription("joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2");
HAnimSegment131->addChild(TouchSensor132);

Transform* Transform133 = new Transform();
Transform133->setTranslation(new float[3]{0.0824,-0.004,0.0064});
Shape* Shape134 = new Shape();
Shape134->setUSE("JointShape");
Transform133->addChild(Shape134);

HAnimSegment131->addChild(Transform133);

HAnimSite* HAnimSite135 = new HAnimSite();
HAnimSite135->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip");
HAnimSite135->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip");
Transform* Transform136 = new Transform();
Transform136->setTranslation(new float[3]{0.0824,-0.004,0.0064});
Shape* Shape137 = new Shape();
Shape137->setUSE("SiteShape");
Transform136->addChild(Shape137);

HAnimSite135->addChild(Transform136);

HAnimSegment131->addChild(HAnimSite135);

HAnimJoint130->addChild(HAnimSegment131);

HAnimJoint* HAnimJoint138 = new HAnimJoint();
HAnimJoint138->setName("l_tarsal_middle_phalanx_2");
HAnimJoint138->setDEF("hanim_l_tarsal_middle_phalanx_2");
HAnimJoint138->setCenter(new float[3]{0.0841,0.0121,0.0041});
HAnimSegment* HAnimSegment139 = new HAnimSegment();
HAnimSegment139->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_2");
HAnimSegment139->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2");
TouchSensor* TouchSensor140 = new TouchSensor();
TouchSensor140->setDescription("joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2");
HAnimSegment139->addChild(TouchSensor140);

Transform* Transform141 = new Transform();
Transform141->setTranslation(new float[3]{0.0841,0.0121,0.0041});
Shape* Shape142 = new Shape();
Shape142->setUSE("JointShape");
Transform141->addChild(Shape142);

HAnimSegment139->addChild(Transform141);

HAnimSite* HAnimSite143 = new HAnimSite();
HAnimSite143->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip");
HAnimSite143->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip");
Transform* Transform144 = new Transform();
Transform144->setTranslation(new float[3]{0.0841,0.0121,0.0041});
Shape* Shape145 = new Shape();
Shape145->setUSE("SiteShape");
Transform144->addChild(Shape145);

HAnimSite143->addChild(Transform144);

HAnimSegment139->addChild(HAnimSite143);

HAnimJoint138->addChild(HAnimSegment139);

HAnimJoint* HAnimJoint146 = new HAnimJoint();
HAnimJoint146->setName("l_tarsal_distal_phalanx_2");
HAnimJoint146->setDEF("hanim_l_tarsal_distal_phalanx_2");
HAnimJoint146->setCenter(new float[3]{0.0841,0.0216,0.0013});
HAnimSegment* HAnimSegment147 = new HAnimSegment();
HAnimSegment147->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_2");
HAnimSegment147->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2");
TouchSensor* TouchSensor148 = new TouchSensor();
TouchSensor148->setDescription("joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2");
HAnimSegment147->addChild(TouchSensor148);

Transform* Transform149 = new Transform();
Transform149->setTranslation(new float[3]{0.0841,0.0216,0.0013});
Shape* Shape150 = new Shape();
Shape150->setUSE("JointShape");
Transform149->addChild(Shape150);

HAnimSegment147->addChild(Transform149);

HAnimSite* HAnimSite151 = new HAnimSite();
HAnimSite151->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip");
HAnimSite151->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip");
Transform* Transform152 = new Transform();
Transform152->setTranslation(new float[3]{0.0841,0.0216,0.0013});
Shape* Shape153 = new Shape();
Shape153->setUSE("SiteShape");
Transform152->addChild(Shape153);

HAnimSite151->addChild(Transform152);

HAnimSegment147->addChild(HAnimSite151);

HAnimJoint146->addChild(HAnimSegment147);

HAnimJoint138->addChild(HAnimJoint146);

HAnimJoint130->addChild(HAnimJoint138);

HAnimJoint122->addChild(HAnimJoint130);

HAnimJoint114->addChild(HAnimJoint122);

HAnimJoint74->addChild(HAnimJoint114);

HAnimJoint* HAnimJoint154 = new HAnimJoint();
HAnimJoint154->setName("l_cuneiform_3");
HAnimJoint154->setDEF("hanim_l_cuneiform_3");
HAnimJoint154->setCenter(new float[3]{0.0928,-0.0821,0.0248});
HAnimSegment* HAnimSegment155 = new HAnimSegment();
HAnimSegment155->setName("SEGMENT_FOR_l_cuneiform_3");
HAnimSegment155->setDEF("hanim_SEGMENT_FOR_l_cuneiform_3");
TouchSensor* TouchSensor156 = new TouchSensor();
TouchSensor156->setDescription("joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3");
HAnimSegment155->addChild(TouchSensor156);

Transform* Transform157 = new Transform();
Transform157->setTranslation(new float[3]{0.0928,-0.0821,0.0248});
Shape* Shape158 = new Shape();
Shape158->setUSE("JointShape");
Transform157->addChild(Shape158);

HAnimSegment155->addChild(Transform157);

HAnimSite* HAnimSite159 = new HAnimSite();
HAnimSite159->setName("SEGMENT_FOR_l_cuneiform_3_tip");
HAnimSite159->setDEF("hanim_SEGMENT_FOR_l_cuneiform_3_tip");
Transform* Transform160 = new Transform();
Transform160->setTranslation(new float[3]{0.0928,-0.0821,0.0248});
Shape* Shape161 = new Shape();
Shape161->setUSE("SiteShape");
Transform160->addChild(Shape161);

HAnimSite159->addChild(Transform160);

HAnimSegment155->addChild(HAnimSite159);

HAnimJoint154->addChild(HAnimSegment155);

HAnimJoint* HAnimJoint162 = new HAnimJoint();
HAnimJoint162->setName("l_metatarsal_3");
HAnimJoint162->setDEF("hanim_l_metatarsal_3");
HAnimJoint162->setCenter(new float[3]{0.0944,-0.0625,0.0175});
HAnimSegment* HAnimSegment163 = new HAnimSegment();
HAnimSegment163->setName("SEGMENT_FOR_l_metatarsal_3");
HAnimSegment163->setDEF("hanim_SEGMENT_FOR_l_metatarsal_3");
TouchSensor* TouchSensor164 = new TouchSensor();
TouchSensor164->setDescription("joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3");
HAnimSegment163->addChild(TouchSensor164);

Transform* Transform165 = new Transform();
Transform165->setTranslation(new float[3]{0.0944,-0.0625,0.0175});
Shape* Shape166 = new Shape();
Shape166->setUSE("JointShape");
Transform165->addChild(Shape166);

HAnimSegment163->addChild(Transform165);

HAnimSite* HAnimSite167 = new HAnimSite();
HAnimSite167->setName("SEGMENT_FOR_l_metatarsal_3_tip");
HAnimSite167->setDEF("hanim_SEGMENT_FOR_l_metatarsal_3_tip");
Transform* Transform168 = new Transform();
Transform168->setTranslation(new float[3]{0.0944,-0.0625,0.0175});
Shape* Shape169 = new Shape();
Shape169->setUSE("SiteShape");
Transform168->addChild(Shape169);

HAnimSite167->addChild(Transform168);

HAnimSegment163->addChild(HAnimSite167);

HAnimJoint162->addChild(HAnimSegment163);

HAnimJoint* HAnimJoint170 = new HAnimJoint();
HAnimJoint170->setName("l_tarsal_proximal_phalanx_3");
HAnimJoint170->setDEF("hanim_l_tarsal_proximal_phalanx_3");
HAnimJoint170->setCenter(new float[3]{0.0963,-0.0065,0.0065});
HAnimSegment* HAnimSegment171 = new HAnimSegment();
HAnimSegment171->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_3");
HAnimSegment171->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3");
TouchSensor* TouchSensor172 = new TouchSensor();
TouchSensor172->setDescription("joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3");
HAnimSegment171->addChild(TouchSensor172);

Transform* Transform173 = new Transform();
Transform173->setTranslation(new float[3]{0.0963,-0.0065,0.0065});
Shape* Shape174 = new Shape();
Shape174->setUSE("JointShape");
Transform173->addChild(Shape174);

HAnimSegment171->addChild(Transform173);

HAnimSite* HAnimSite175 = new HAnimSite();
HAnimSite175->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip");
HAnimSite175->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip");
Transform* Transform176 = new Transform();
Transform176->setTranslation(new float[3]{0.0963,-0.0065,0.0065});
Shape* Shape177 = new Shape();
Shape177->setUSE("SiteShape");
Transform176->addChild(Shape177);

HAnimSite175->addChild(Transform176);

HAnimSegment171->addChild(HAnimSite175);

HAnimJoint170->addChild(HAnimSegment171);

HAnimJoint* HAnimJoint178 = new HAnimJoint();
HAnimJoint178->setName("l_tarsal_middle_phalanx_3");
HAnimJoint178->setDEF("hanim_l_tarsal_middle_phalanx_3");
HAnimJoint178->setCenter(new float[3]{0.0987,0.0086,0.0034});
HAnimSegment* HAnimSegment179 = new HAnimSegment();
HAnimSegment179->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_3");
HAnimSegment179->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3");
TouchSensor* TouchSensor180 = new TouchSensor();
TouchSensor180->setDescription("joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3");
HAnimSegment179->addChild(TouchSensor180);

Transform* Transform181 = new Transform();
Transform181->setTranslation(new float[3]{0.0987,0.0086,0.0034});
Shape* Shape182 = new Shape();
Shape182->setUSE("JointShape");
Transform181->addChild(Shape182);

HAnimSegment179->addChild(Transform181);

HAnimSite* HAnimSite183 = new HAnimSite();
HAnimSite183->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip");
HAnimSite183->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip");
Transform* Transform184 = new Transform();
Transform184->setTranslation(new float[3]{0.0987,0.0086,0.0034});
Shape* Shape185 = new Shape();
Shape185->setUSE("SiteShape");
Transform184->addChild(Shape185);

HAnimSite183->addChild(Transform184);

HAnimSegment179->addChild(HAnimSite183);

HAnimJoint178->addChild(HAnimSegment179);

HAnimJoint* HAnimJoint186 = new HAnimJoint();
HAnimJoint186->setName("l_tarsal_distal_phalanx_3");
HAnimJoint186->setDEF("hanim_l_tarsal_distal_phalanx_3");
HAnimJoint186->setCenter(new float[3]{0.1002,0.0178,0.0013});
HAnimSegment* HAnimSegment187 = new HAnimSegment();
HAnimSegment187->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_3");
HAnimSegment187->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3");
TouchSensor* TouchSensor188 = new TouchSensor();
TouchSensor188->setDescription("joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3");
HAnimSegment187->addChild(TouchSensor188);

Transform* Transform189 = new Transform();
Transform189->setTranslation(new float[3]{0.1002,0.0178,0.0013});
Shape* Shape190 = new Shape();
Shape190->setUSE("JointShape");
Transform189->addChild(Shape190);

HAnimSegment187->addChild(Transform189);

HAnimSite* HAnimSite191 = new HAnimSite();
HAnimSite191->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip");
HAnimSite191->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip");
Transform* Transform192 = new Transform();
Transform192->setTranslation(new float[3]{0.1002,0.0178,0.0013});
Shape* Shape193 = new Shape();
Shape193->setUSE("SiteShape");
Transform192->addChild(Shape193);

HAnimSite191->addChild(Transform192);

HAnimSegment187->addChild(HAnimSite191);

HAnimJoint186->addChild(HAnimSegment187);

HAnimJoint178->addChild(HAnimJoint186);

HAnimJoint170->addChild(HAnimJoint178);

HAnimJoint162->addChild(HAnimJoint170);

HAnimJoint154->addChild(HAnimJoint162);

HAnimJoint74->addChild(HAnimJoint154);

HAnimJoint66->addChild(HAnimJoint74);

HAnimJoint* HAnimJoint194 = new HAnimJoint();
HAnimJoint194->setName("l_calcaneus");
HAnimJoint194->setDEF("hanim_l_calcaneus");
HAnimJoint194->setCenter(new float[3]{0.0889,-0.1278,0.0494});
HAnimSegment* HAnimSegment195 = new HAnimSegment();
HAnimSegment195->setName("SEGMENT_FOR_l_calcaneus");
HAnimSegment195->setDEF("hanim_SEGMENT_FOR_l_calcaneus");
TouchSensor* TouchSensor196 = new TouchSensor();
TouchSensor196->setDescription("joint l_calcaneus segment SEGMENT_FOR_l_calcaneus");
HAnimSegment195->addChild(TouchSensor196);

Transform* Transform197 = new Transform();
Transform197->setTranslation(new float[3]{0.0889,-0.1278,0.0494});
Shape* Shape198 = new Shape();
Shape198->setUSE("JointShape");
Transform197->addChild(Shape198);

HAnimSegment195->addChild(Transform197);

HAnimSite* HAnimSite199 = new HAnimSite();
HAnimSite199->setName("SEGMENT_FOR_l_calcaneus_tip");
HAnimSite199->setDEF("hanim_SEGMENT_FOR_l_calcaneus_tip");
Transform* Transform200 = new Transform();
Transform200->setTranslation(new float[3]{0.0889,-0.1278,0.0494});
Shape* Shape201 = new Shape();
Shape201->setUSE("SiteShape");
Transform200->addChild(Shape201);

HAnimSite199->addChild(Transform200);

HAnimSegment195->addChild(HAnimSite199);

HAnimJoint194->addChild(HAnimSegment195);

HAnimJoint* HAnimJoint202 = new HAnimJoint();
HAnimJoint202->setName("l_cuboid");
HAnimJoint202->setDEF("hanim_l_cuboid");
HAnimJoint202->setCenter(new float[3]{0.1105,-0.0998,0.0267});
HAnimSegment* HAnimSegment203 = new HAnimSegment();
HAnimSegment203->setName("SEGMENT_FOR_l_cuboid");
HAnimSegment203->setDEF("hanim_SEGMENT_FOR_l_cuboid");
TouchSensor* TouchSensor204 = new TouchSensor();
TouchSensor204->setDescription("joint l_cuboid segment SEGMENT_FOR_l_cuboid");
HAnimSegment203->addChild(TouchSensor204);

Transform* Transform205 = new Transform();
Transform205->setTranslation(new float[3]{0.1105,-0.0998,0.0267});
Shape* Shape206 = new Shape();
Shape206->setUSE("JointShape");
Transform205->addChild(Shape206);

HAnimSegment203->addChild(Transform205);

HAnimSite* HAnimSite207 = new HAnimSite();
HAnimSite207->setName("SEGMENT_FOR_l_cuboid_tip");
HAnimSite207->setDEF("hanim_SEGMENT_FOR_l_cuboid_tip");
Transform* Transform208 = new Transform();
Transform208->setTranslation(new float[3]{0.1105,-0.0998,0.0267});
Shape* Shape209 = new Shape();
Shape209->setUSE("SiteShape");
Transform208->addChild(Shape209);

HAnimSite207->addChild(Transform208);

HAnimSegment203->addChild(HAnimSite207);

HAnimJoint202->addChild(HAnimSegment203);

HAnimJoint* HAnimJoint210 = new HAnimJoint();
HAnimJoint210->setName("l_metatarsal_4");
HAnimJoint210->setDEF("hanim_l_metatarsal_4");
HAnimJoint210->setCenter(new float[3]{0.1063,-0.0634,0.016});
HAnimSegment* HAnimSegment211 = new HAnimSegment();
HAnimSegment211->setName("SEGMENT_FOR_l_metatarsal_4");
HAnimSegment211->setDEF("hanim_SEGMENT_FOR_l_metatarsal_4");
TouchSensor* TouchSensor212 = new TouchSensor();
TouchSensor212->setDescription("joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4");
HAnimSegment211->addChild(TouchSensor212);

Transform* Transform213 = new Transform();
Transform213->setTranslation(new float[3]{0.1063,-0.0634,0.016});
Shape* Shape214 = new Shape();
Shape214->setUSE("JointShape");
Transform213->addChild(Shape214);

HAnimSegment211->addChild(Transform213);

HAnimSite* HAnimSite215 = new HAnimSite();
HAnimSite215->setName("SEGMENT_FOR_l_metatarsal_4_tip");
HAnimSite215->setDEF("hanim_SEGMENT_FOR_l_metatarsal_4_tip");
Transform* Transform216 = new Transform();
Transform216->setTranslation(new float[3]{0.1063,-0.0634,0.016});
Shape* Shape217 = new Shape();
Shape217->setUSE("SiteShape");
Transform216->addChild(Shape217);

HAnimSite215->addChild(Transform216);

HAnimSegment211->addChild(HAnimSite215);

HAnimJoint210->addChild(HAnimSegment211);

HAnimJoint* HAnimJoint218 = new HAnimJoint();
HAnimJoint218->setName("l_tarsal_proximal_phalanx_4");
HAnimJoint218->setDEF("hanim_l_tarsal_proximal_phalanx_4");
HAnimJoint218->setCenter(new float[3]{0.1097,-0.0107,0.0058});
HAnimSegment* HAnimSegment219 = new HAnimSegment();
HAnimSegment219->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_4");
HAnimSegment219->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4");
TouchSensor* TouchSensor220 = new TouchSensor();
TouchSensor220->setDescription("joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4");
HAnimSegment219->addChild(TouchSensor220);

Transform* Transform221 = new Transform();
Transform221->setTranslation(new float[3]{0.1097,-0.0107,0.0058});
Shape* Shape222 = new Shape();
Shape222->setUSE("JointShape");
Transform221->addChild(Shape222);

HAnimSegment219->addChild(Transform221);

HAnimSite* HAnimSite223 = new HAnimSite();
HAnimSite223->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip");
HAnimSite223->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip");
Transform* Transform224 = new Transform();
Transform224->setTranslation(new float[3]{0.1097,-0.0107,0.0058});
Shape* Shape225 = new Shape();
Shape225->setUSE("SiteShape");
Transform224->addChild(Shape225);

HAnimSite223->addChild(Transform224);

HAnimSegment219->addChild(HAnimSite223);

HAnimJoint218->addChild(HAnimSegment219);

HAnimJoint* HAnimJoint226 = new HAnimJoint();
HAnimJoint226->setName("l_tarsal_middle_phalanx_4");
HAnimJoint226->setDEF("hanim_l_tarsal_middle_phalanx_4");
HAnimJoint226->setCenter(new float[3]{0.114,0.0044,0.0037});
HAnimSegment* HAnimSegment227 = new HAnimSegment();
HAnimSegment227->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_4");
HAnimSegment227->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4");
TouchSensor* TouchSensor228 = new TouchSensor();
TouchSensor228->setDescription("joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4");
HAnimSegment227->addChild(TouchSensor228);

Transform* Transform229 = new Transform();
Transform229->setTranslation(new float[3]{0.114,0.0044,0.0037});
Shape* Shape230 = new Shape();
Shape230->setUSE("JointShape");
Transform229->addChild(Shape230);

HAnimSegment227->addChild(Transform229);

HAnimSite* HAnimSite231 = new HAnimSite();
HAnimSite231->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip");
HAnimSite231->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip");
Transform* Transform232 = new Transform();
Transform232->setTranslation(new float[3]{0.114,0.0044,0.0037});
Shape* Shape233 = new Shape();
Shape233->setUSE("SiteShape");
Transform232->addChild(Shape233);

HAnimSite231->addChild(Transform232);

HAnimSegment227->addChild(HAnimSite231);

HAnimJoint226->addChild(HAnimSegment227);

HAnimJoint* HAnimJoint234 = new HAnimJoint();
HAnimJoint234->setName("l_tarsal_distal_phalanx_4");
HAnimJoint234->setDEF("hanim_l_tarsal_distal_phalanx_4");
HAnimJoint234->setCenter(new float[3]{0.1155,0.0118,0.0008});
HAnimSegment* HAnimSegment235 = new HAnimSegment();
HAnimSegment235->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_4");
HAnimSegment235->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4");
TouchSensor* TouchSensor236 = new TouchSensor();
TouchSensor236->setDescription("joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4");
HAnimSegment235->addChild(TouchSensor236);

Transform* Transform237 = new Transform();
Transform237->setTranslation(new float[3]{0.1155,0.0118,0.0008});
Shape* Shape238 = new Shape();
Shape238->setUSE("JointShape");
Transform237->addChild(Shape238);

HAnimSegment235->addChild(Transform237);

HAnimSite* HAnimSite239 = new HAnimSite();
HAnimSite239->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip");
HAnimSite239->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip");
Transform* Transform240 = new Transform();
Transform240->setTranslation(new float[3]{0.1155,0.0118,0.0008});
Shape* Shape241 = new Shape();
Shape241->setUSE("SiteShape");
Transform240->addChild(Shape241);

HAnimSite239->addChild(Transform240);

HAnimSegment235->addChild(HAnimSite239);

HAnimJoint234->addChild(HAnimSegment235);

HAnimJoint226->addChild(HAnimJoint234);

HAnimJoint218->addChild(HAnimJoint226);

HAnimJoint210->addChild(HAnimJoint218);

HAnimJoint202->addChild(HAnimJoint210);

HAnimJoint* HAnimJoint242 = new HAnimJoint();
HAnimJoint242->setName("l_metatarsal_5");
HAnimJoint242->setDEF("hanim_l_metatarsal_5");
HAnimJoint242->setCenter(new float[3]{0.1206,-0.0671,0.0124});
HAnimSegment* HAnimSegment243 = new HAnimSegment();
HAnimSegment243->setName("SEGMENT_FOR_l_metatarsal_5");
HAnimSegment243->setDEF("hanim_SEGMENT_FOR_l_metatarsal_5");
TouchSensor* TouchSensor244 = new TouchSensor();
TouchSensor244->setDescription("joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5");
HAnimSegment243->addChild(TouchSensor244);

Transform* Transform245 = new Transform();
Transform245->setTranslation(new float[3]{0.1206,-0.0671,0.0124});
Shape* Shape246 = new Shape();
Shape246->setUSE("JointShape");
Transform245->addChild(Shape246);

HAnimSegment243->addChild(Transform245);

HAnimSite* HAnimSite247 = new HAnimSite();
HAnimSite247->setName("SEGMENT_FOR_l_metatarsal_5_tip");
HAnimSite247->setDEF("hanim_SEGMENT_FOR_l_metatarsal_5_tip");
Transform* Transform248 = new Transform();
Transform248->setTranslation(new float[3]{0.1206,-0.0671,0.0124});
Shape* Shape249 = new Shape();
Shape249->setUSE("SiteShape");
Transform248->addChild(Shape249);

HAnimSite247->addChild(Transform248);

HAnimSegment243->addChild(HAnimSite247);

HAnimJoint242->addChild(HAnimSegment243);

HAnimJoint* HAnimJoint250 = new HAnimJoint();
HAnimJoint250->setName("l_tarsal_proximal_phalanx_5");
HAnimJoint250->setDEF("hanim_l_tarsal_proximal_phalanx_5");
HAnimJoint250->setCenter(new float[3]{0.1239,-0.0153,0.0051});
HAnimSegment* HAnimSegment251 = new HAnimSegment();
HAnimSegment251->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_5");
HAnimSegment251->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5");
TouchSensor* TouchSensor252 = new TouchSensor();
TouchSensor252->setDescription("joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5");
HAnimSegment251->addChild(TouchSensor252);

Transform* Transform253 = new Transform();
Transform253->setTranslation(new float[3]{0.1239,-0.0153,0.0051});
Shape* Shape254 = new Shape();
Shape254->setUSE("JointShape");
Transform253->addChild(Shape254);

HAnimSegment251->addChild(Transform253);

HAnimSite* HAnimSite255 = new HAnimSite();
HAnimSite255->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip");
HAnimSite255->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip");
Transform* Transform256 = new Transform();
Transform256->setTranslation(new float[3]{0.1239,-0.0153,0.0051});
Shape* Shape257 = new Shape();
Shape257->setUSE("SiteShape");
Transform256->addChild(Shape257);

HAnimSite255->addChild(Transform256);

HAnimSegment251->addChild(HAnimSite255);

HAnimJoint250->addChild(HAnimSegment251);

HAnimJoint* HAnimJoint258 = new HAnimJoint();
HAnimJoint258->setName("l_tarsal_middle_phalanx_5");
HAnimJoint258->setDEF("hanim_l_tarsal_middle_phalanx_5");
HAnimJoint258->setCenter(new float[3]{0.1262,-0.0077,0.0023});
HAnimSegment* HAnimSegment259 = new HAnimSegment();
HAnimSegment259->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_5");
HAnimSegment259->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5");
TouchSensor* TouchSensor260 = new TouchSensor();
TouchSensor260->setDescription("joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5");
HAnimSegment259->addChild(TouchSensor260);

Transform* Transform261 = new Transform();
Transform261->setTranslation(new float[3]{0.1262,-0.0077,0.0023});
Shape* Shape262 = new Shape();
Shape262->setUSE("JointShape");
Transform261->addChild(Shape262);

HAnimSegment259->addChild(Transform261);

HAnimSite* HAnimSite263 = new HAnimSite();
HAnimSite263->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip");
HAnimSite263->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip");
Transform* Transform264 = new Transform();
Transform264->setTranslation(new float[3]{0.1262,-0.0077,0.0023});
Shape* Shape265 = new Shape();
Shape265->setUSE("SiteShape");
Transform264->addChild(Shape265);

HAnimSite263->addChild(Transform264);

HAnimSegment259->addChild(HAnimSite263);

HAnimJoint258->addChild(HAnimSegment259);

HAnimJoint* HAnimJoint266 = new HAnimJoint();
HAnimJoint266->setName("l_tarsal_distal_phalanx_5");
HAnimJoint266->setDEF("hanim_l_tarsal_distal_phalanx_5");
HAnimJoint266->setCenter(new float[3]{0.1271,0,0});
HAnimSegment* HAnimSegment267 = new HAnimSegment();
HAnimSegment267->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_5");
HAnimSegment267->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5");
TouchSensor* TouchSensor268 = new TouchSensor();
TouchSensor268->setDescription("joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5");
HAnimSegment267->addChild(TouchSensor268);

Transform* Transform269 = new Transform();
Transform269->setTranslation(new float[3]{0.1271,0,0});
Shape* Shape270 = new Shape();
Shape270->setUSE("JointShape");
Transform269->addChild(Shape270);

HAnimSegment267->addChild(Transform269);

HAnimSite* HAnimSite271 = new HAnimSite();
HAnimSite271->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip");
HAnimSite271->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip");
Transform* Transform272 = new Transform();
Transform272->setTranslation(new float[3]{0.1271,0,0});
Shape* Shape273 = new Shape();
Shape273->setUSE("SiteShape");
Transform272->addChild(Shape273);

HAnimSite271->addChild(Transform272);

HAnimSegment267->addChild(HAnimSite271);

HAnimJoint266->addChild(HAnimSegment267);

HAnimJoint258->addChild(HAnimJoint266);

HAnimJoint250->addChild(HAnimJoint258);

HAnimJoint242->addChild(HAnimJoint250);

HAnimJoint202->addChild(HAnimJoint242);

HAnimJoint194->addChild(HAnimJoint202);

HAnimJoint66->addChild(HAnimJoint194);

HAnimJoint58->addChild(HAnimJoint66);

HAnimJoint50->addChild(HAnimJoint58);

HAnimJoint42->addChild(HAnimJoint50);

HAnimJoint* HAnimJoint274 = new HAnimJoint();
HAnimJoint274->setName("r_thigh");
HAnimJoint274->setDEF("hanim_r_thigh");
HAnimJoint274->setCenter(new float[3]{-0.0948,-0.1202,0.8181});
HAnimSegment* HAnimSegment275 = new HAnimSegment();
HAnimSegment275->setName("SEGMENT_FOR_r_thigh");
HAnimSegment275->setDEF("hanim_SEGMENT_FOR_r_thigh");
TouchSensor* TouchSensor276 = new TouchSensor();
TouchSensor276->setDescription("joint r_thigh segment SEGMENT_FOR_r_thigh");
HAnimSegment275->addChild(TouchSensor276);

Transform* Transform277 = new Transform();
Transform277->setTranslation(new float[3]{-0.0948,-0.1202,0.8181});
Shape* Shape278 = new Shape();
Shape278->setUSE("JointShape");
Transform277->addChild(Shape278);

HAnimSegment275->addChild(Transform277);

HAnimSite* HAnimSite279 = new HAnimSite();
HAnimSite279->setName("SEGMENT_FOR_r_thigh_tip");
HAnimSite279->setDEF("hanim_SEGMENT_FOR_r_thigh_tip");
Transform* Transform280 = new Transform();
Transform280->setTranslation(new float[3]{-0.0948,-0.1202,0.8181});
Shape* Shape281 = new Shape();
Shape281->setUSE("SiteShape");
Transform280->addChild(Shape281);

HAnimSite279->addChild(Transform280);

HAnimSegment275->addChild(HAnimSite279);

HAnimJoint274->addChild(HAnimSegment275);

HAnimJoint* HAnimJoint282 = new HAnimJoint();
HAnimJoint282->setName("r_calf");
HAnimJoint282->setDEF("hanim_r_calf");
HAnimJoint282->setCenter(new float[3]{-0.0928,-0.1213,0.4003});
HAnimSegment* HAnimSegment283 = new HAnimSegment();
HAnimSegment283->setName("SEGMENT_FOR_r_calf");
HAnimSegment283->setDEF("hanim_SEGMENT_FOR_r_calf");
TouchSensor* TouchSensor284 = new TouchSensor();
TouchSensor284->setDescription("joint r_calf segment SEGMENT_FOR_r_calf");
HAnimSegment283->addChild(TouchSensor284);

Transform* Transform285 = new Transform();
Transform285->setTranslation(new float[3]{-0.0928,-0.1213,0.4003});
Shape* Shape286 = new Shape();
Shape286->setUSE("JointShape");
Transform285->addChild(Shape286);

HAnimSegment283->addChild(Transform285);

HAnimSite* HAnimSite287 = new HAnimSite();
HAnimSite287->setName("SEGMENT_FOR_r_calf_tip");
HAnimSite287->setDEF("hanim_SEGMENT_FOR_r_calf_tip");
Transform* Transform288 = new Transform();
Transform288->setTranslation(new float[3]{-0.0928,-0.1213,0.4003});
Shape* Shape289 = new Shape();
Shape289->setUSE("SiteShape");
Transform288->addChild(Shape289);

HAnimSite287->addChild(Transform288);

HAnimSegment283->addChild(HAnimSite287);

HAnimJoint282->addChild(HAnimSegment283);

HAnimJoint* HAnimJoint290 = new HAnimJoint();
HAnimJoint290->setName("r_talus");
HAnimJoint290->setDEF("hanim_r_talus");
HAnimJoint290->setCenter(new float[3]{-0.0886,-0.1123,0.0869});
HAnimSegment* HAnimSegment291 = new HAnimSegment();
HAnimSegment291->setName("SEGMENT_FOR_r_talus");
HAnimSegment291->setDEF("hanim_SEGMENT_FOR_r_talus");
TouchSensor* TouchSensor292 = new TouchSensor();
TouchSensor292->setDescription("joint r_talus segment SEGMENT_FOR_r_talus");
HAnimSegment291->addChild(TouchSensor292);

Transform* Transform293 = new Transform();
Transform293->setTranslation(new float[3]{-0.0886,-0.1123,0.0869});
Shape* Shape294 = new Shape();
Shape294->setUSE("JointShape");
Transform293->addChild(Shape294);

HAnimSegment291->addChild(Transform293);

HAnimSite* HAnimSite295 = new HAnimSite();
HAnimSite295->setName("SEGMENT_FOR_r_talus_tip");
HAnimSite295->setDEF("hanim_SEGMENT_FOR_r_talus_tip");
Transform* Transform296 = new Transform();
Transform296->setTranslation(new float[3]{-0.0886,-0.1123,0.0869});
Shape* Shape297 = new Shape();
Shape297->setUSE("SiteShape");
Transform296->addChild(Shape297);

HAnimSite295->addChild(Transform296);

HAnimSegment291->addChild(HAnimSite295);

HAnimJoint290->addChild(HAnimSegment291);

HAnimJoint* HAnimJoint298 = new HAnimJoint();
HAnimJoint298->setName("r_navicular");
HAnimJoint298->setDEF("hanim_r_navicular");
HAnimJoint298->setCenter(new float[3]{-0.0781,-0.097,0.0283});
HAnimSegment* HAnimSegment299 = new HAnimSegment();
HAnimSegment299->setName("SEGMENT_FOR_r_navicular");
HAnimSegment299->setDEF("hanim_SEGMENT_FOR_r_navicular");
TouchSensor* TouchSensor300 = new TouchSensor();
TouchSensor300->setDescription("joint r_navicular segment SEGMENT_FOR_r_navicular");
HAnimSegment299->addChild(TouchSensor300);

Transform* Transform301 = new Transform();
Transform301->setTranslation(new float[3]{-0.0781,-0.097,0.0283});
Shape* Shape302 = new Shape();
Shape302->setUSE("JointShape");
Transform301->addChild(Shape302);

HAnimSegment299->addChild(Transform301);

HAnimSite* HAnimSite303 = new HAnimSite();
HAnimSite303->setName("SEGMENT_FOR_r_navicular_tip");
HAnimSite303->setDEF("hanim_SEGMENT_FOR_r_navicular_tip");
Transform* Transform304 = new Transform();
Transform304->setTranslation(new float[3]{-0.0781,-0.097,0.0283});
Shape* Shape305 = new Shape();
Shape305->setUSE("SiteShape");
Transform304->addChild(Shape305);

HAnimSite303->addChild(Transform304);

HAnimSegment299->addChild(HAnimSite303);

HAnimJoint298->addChild(HAnimSegment299);

HAnimJoint* HAnimJoint306 = new HAnimJoint();
HAnimJoint306->setName("r_cuneiform_1");
HAnimJoint306->setDEF("hanim_r_cuneiform_1");
HAnimJoint306->setCenter(new float[3]{-0.0672,-0.0835,0.0235});
HAnimSegment* HAnimSegment307 = new HAnimSegment();
HAnimSegment307->setName("SEGMENT_FOR_r_cuneiform_1");
HAnimSegment307->setDEF("hanim_SEGMENT_FOR_r_cuneiform_1");
TouchSensor* TouchSensor308 = new TouchSensor();
TouchSensor308->setDescription("joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1");
HAnimSegment307->addChild(TouchSensor308);

Transform* Transform309 = new Transform();
Transform309->setTranslation(new float[3]{-0.0672,-0.0835,0.0235});
Shape* Shape310 = new Shape();
Shape310->setUSE("JointShape");
Transform309->addChild(Shape310);

HAnimSegment307->addChild(Transform309);

HAnimSite* HAnimSite311 = new HAnimSite();
HAnimSite311->setName("SEGMENT_FOR_r_cuneiform_1_tip");
HAnimSite311->setDEF("hanim_SEGMENT_FOR_r_cuneiform_1_tip");
Transform* Transform312 = new Transform();
Transform312->setTranslation(new float[3]{-0.0672,-0.0835,0.0235});
Shape* Shape313 = new Shape();
Shape313->setUSE("SiteShape");
Transform312->addChild(Shape313);

HAnimSite311->addChild(Transform312);

HAnimSegment307->addChild(HAnimSite311);

HAnimJoint306->addChild(HAnimSegment307);

HAnimJoint* HAnimJoint314 = new HAnimJoint();
HAnimJoint314->setName("r_metatarsal_1");
HAnimJoint314->setDEF("hanim_r_metatarsal_1");
HAnimJoint314->setCenter(new float[3]{-0.0644,-0.0577,0.0147});
HAnimSegment* HAnimSegment315 = new HAnimSegment();
HAnimSegment315->setName("SEGMENT_FOR_r_metatarsal_1");
HAnimSegment315->setDEF("hanim_SEGMENT_FOR_r_metatarsal_1");
TouchSensor* TouchSensor316 = new TouchSensor();
TouchSensor316->setDescription("joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1");
HAnimSegment315->addChild(TouchSensor316);

Transform* Transform317 = new Transform();
Transform317->setTranslation(new float[3]{-0.0644,-0.0577,0.0147});
Shape* Shape318 = new Shape();
Shape318->setUSE("JointShape");
Transform317->addChild(Shape318);

HAnimSegment315->addChild(Transform317);

HAnimSite* HAnimSite319 = new HAnimSite();
HAnimSite319->setName("SEGMENT_FOR_r_metatarsal_1_tip");
HAnimSite319->setDEF("hanim_SEGMENT_FOR_r_metatarsal_1_tip");
Transform* Transform320 = new Transform();
Transform320->setTranslation(new float[3]{-0.0644,-0.0577,0.0147});
Shape* Shape321 = new Shape();
Shape321->setUSE("SiteShape");
Transform320->addChild(Shape321);

HAnimSite319->addChild(Transform320);

HAnimSegment315->addChild(HAnimSite319);

HAnimJoint314->addChild(HAnimSegment315);

HAnimJoint* HAnimJoint322 = new HAnimJoint();
HAnimJoint322->setName("r_tarsal_proximal_phalanx_1");
HAnimJoint322->setDEF("hanim_r_tarsal_proximal_phalanx_1");
HAnimJoint322->setCenter(new float[3]{-0.0619,-0.0083,0.0059});
HAnimSegment* HAnimSegment323 = new HAnimSegment();
HAnimSegment323->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_1");
HAnimSegment323->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1");
TouchSensor* TouchSensor324 = new TouchSensor();
TouchSensor324->setDescription("joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1");
HAnimSegment323->addChild(TouchSensor324);

Transform* Transform325 = new Transform();
Transform325->setTranslation(new float[3]{-0.0619,-0.0083,0.0059});
Shape* Shape326 = new Shape();
Shape326->setUSE("JointShape");
Transform325->addChild(Shape326);

HAnimSegment323->addChild(Transform325);

HAnimSite* HAnimSite327 = new HAnimSite();
HAnimSite327->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip");
HAnimSite327->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip");
Transform* Transform328 = new Transform();
Transform328->setTranslation(new float[3]{-0.0619,-0.0083,0.0059});
Shape* Shape329 = new Shape();
Shape329->setUSE("SiteShape");
Transform328->addChild(Shape329);

HAnimSite327->addChild(Transform328);

HAnimSegment323->addChild(HAnimSite327);

HAnimJoint322->addChild(HAnimSegment323);

HAnimJoint* HAnimJoint330 = new HAnimJoint();
HAnimJoint330->setName("r_tarsal_distal_phalanx_1");
HAnimJoint330->setDEF("hanim_r_tarsal_distal_phalanx_1");
HAnimSegment* HAnimSegment331 = new HAnimSegment();
HAnimSegment331->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_1");
HAnimSegment331->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1");
TouchSensor* TouchSensor332 = new TouchSensor();
TouchSensor332->setDescription("joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1");
HAnimSegment331->addChild(TouchSensor332);

Transform* Transform333 = new Transform();
Shape* Shape334 = new Shape();
Shape334->setUSE("JointShape");
Transform333->addChild(Shape334);

HAnimSegment331->addChild(Transform333);

HAnimSite* HAnimSite335 = new HAnimSite();
HAnimSite335->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip");
HAnimSite335->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip");
Transform* Transform336 = new Transform();
Shape* Shape337 = new Shape();
Shape337->setUSE("SiteShape");
Transform336->addChild(Shape337);

HAnimSite335->addChild(Transform336);

HAnimSegment331->addChild(HAnimSite335);

HAnimJoint330->addChild(HAnimSegment331);

HAnimJoint322->addChild(HAnimJoint330);

HAnimJoint314->addChild(HAnimJoint322);

HAnimJoint306->addChild(HAnimJoint314);

HAnimJoint298->addChild(HAnimJoint306);

HAnimJoint* HAnimJoint338 = new HAnimJoint();
HAnimJoint338->setName("r_cuneiform_2");
HAnimJoint338->setDEF("hanim_r_cuneiform_2");
HAnimJoint338->setCenter(new float[3]{-0.0812,-0.0805,0.025});
HAnimSegment* HAnimSegment339 = new HAnimSegment();
HAnimSegment339->setName("SEGMENT_FOR_r_cuneiform_2");
HAnimSegment339->setDEF("hanim_SEGMENT_FOR_r_cuneiform_2");
TouchSensor* TouchSensor340 = new TouchSensor();
TouchSensor340->setDescription("joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2");
HAnimSegment339->addChild(TouchSensor340);

Transform* Transform341 = new Transform();
Transform341->setTranslation(new float[3]{-0.0812,-0.0805,0.025});
Shape* Shape342 = new Shape();
Shape342->setUSE("JointShape");
Transform341->addChild(Shape342);

HAnimSegment339->addChild(Transform341);

HAnimSite* HAnimSite343 = new HAnimSite();
HAnimSite343->setName("SEGMENT_FOR_r_cuneiform_2_tip");
HAnimSite343->setDEF("hanim_SEGMENT_FOR_r_cuneiform_2_tip");
Transform* Transform344 = new Transform();
Transform344->setTranslation(new float[3]{-0.0812,-0.0805,0.025});
Shape* Shape345 = new Shape();
Shape345->setUSE("SiteShape");
Transform344->addChild(Shape345);

HAnimSite343->addChild(Transform344);

HAnimSegment339->addChild(HAnimSite343);

HAnimJoint338->addChild(HAnimSegment339);

HAnimJoint* HAnimJoint346 = new HAnimJoint();
HAnimJoint346->setName("r_metatarsal_2");
HAnimJoint346->setDEF("hanim_r_metatarsal_2");
HAnimJoint346->setCenter(new float[3]{-0.08,-0.0608,0.0175});
HAnimSegment* HAnimSegment347 = new HAnimSegment();
HAnimSegment347->setName("SEGMENT_FOR_r_metatarsal_2");
HAnimSegment347->setDEF("hanim_SEGMENT_FOR_r_metatarsal_2");
TouchSensor* TouchSensor348 = new TouchSensor();
TouchSensor348->setDescription("joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2");
HAnimSegment347->addChild(TouchSensor348);

Transform* Transform349 = new Transform();
Transform349->setTranslation(new float[3]{-0.08,-0.0608,0.0175});
Shape* Shape350 = new Shape();
Shape350->setUSE("JointShape");
Transform349->addChild(Shape350);

HAnimSegment347->addChild(Transform349);

HAnimSite* HAnimSite351 = new HAnimSite();
HAnimSite351->setName("SEGMENT_FOR_r_metatarsal_2_tip");
HAnimSite351->setDEF("hanim_SEGMENT_FOR_r_metatarsal_2_tip");
Transform* Transform352 = new Transform();
Transform352->setTranslation(new float[3]{-0.08,-0.0608,0.0175});
Shape* Shape353 = new Shape();
Shape353->setUSE("SiteShape");
Transform352->addChild(Shape353);

HAnimSite351->addChild(Transform352);

HAnimSegment347->addChild(HAnimSite351);

HAnimJoint346->addChild(HAnimSegment347);

HAnimJoint* HAnimJoint354 = new HAnimJoint();
HAnimJoint354->setName("r_tarsal_proximal_phalanx_2");
HAnimJoint354->setDEF("hanim_r_tarsal_proximal_phalanx_2");
HAnimJoint354->setCenter(new float[3]{-0.0823,-0.004,0.0064});
HAnimSegment* HAnimSegment355 = new HAnimSegment();
HAnimSegment355->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_2");
HAnimSegment355->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2");
TouchSensor* TouchSensor356 = new TouchSensor();
TouchSensor356->setDescription("joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2");
HAnimSegment355->addChild(TouchSensor356);

Transform* Transform357 = new Transform();
Transform357->setTranslation(new float[3]{-0.0823,-0.004,0.0064});
Shape* Shape358 = new Shape();
Shape358->setUSE("JointShape");
Transform357->addChild(Shape358);

HAnimSegment355->addChild(Transform357);

HAnimSite* HAnimSite359 = new HAnimSite();
HAnimSite359->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip");
HAnimSite359->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip");
Transform* Transform360 = new Transform();
Transform360->setTranslation(new float[3]{-0.0823,-0.004,0.0064});
Shape* Shape361 = new Shape();
Shape361->setUSE("SiteShape");
Transform360->addChild(Shape361);

HAnimSite359->addChild(Transform360);

HAnimSegment355->addChild(HAnimSite359);

HAnimJoint354->addChild(HAnimSegment355);

HAnimJoint* HAnimJoint362 = new HAnimJoint();
HAnimJoint362->setName("r_tarsal_middle_phalanx_2");
HAnimJoint362->setDEF("hanim_r_tarsal_middle_phalanx_2");
HAnimJoint362->setCenter(new float[3]{-0.0841,0.0121,0.0041});
HAnimSegment* HAnimSegment363 = new HAnimSegment();
HAnimSegment363->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_2");
HAnimSegment363->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2");
TouchSensor* TouchSensor364 = new TouchSensor();
TouchSensor364->setDescription("joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2");
HAnimSegment363->addChild(TouchSensor364);

Transform* Transform365 = new Transform();
Transform365->setTranslation(new float[3]{-0.0841,0.0121,0.0041});
Shape* Shape366 = new Shape();
Shape366->setUSE("JointShape");
Transform365->addChild(Shape366);

HAnimSegment363->addChild(Transform365);

HAnimSite* HAnimSite367 = new HAnimSite();
HAnimSite367->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip");
HAnimSite367->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip");
Transform* Transform368 = new Transform();
Transform368->setTranslation(new float[3]{-0.0841,0.0121,0.0041});
Shape* Shape369 = new Shape();
Shape369->setUSE("SiteShape");
Transform368->addChild(Shape369);

HAnimSite367->addChild(Transform368);

HAnimSegment363->addChild(HAnimSite367);

HAnimJoint362->addChild(HAnimSegment363);

HAnimJoint* HAnimJoint370 = new HAnimJoint();
HAnimJoint370->setName("r_tarsal_distal_phalanx_2");
HAnimJoint370->setDEF("hanim_r_tarsal_distal_phalanx_2");
HAnimJoint370->setCenter(new float[3]{-0.0841,0.0216,0.0013});
HAnimSegment* HAnimSegment371 = new HAnimSegment();
HAnimSegment371->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_2");
HAnimSegment371->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2");
TouchSensor* TouchSensor372 = new TouchSensor();
TouchSensor372->setDescription("joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2");
HAnimSegment371->addChild(TouchSensor372);

Transform* Transform373 = new Transform();
Transform373->setTranslation(new float[3]{-0.0841,0.0216,0.0013});
Shape* Shape374 = new Shape();
Shape374->setUSE("JointShape");
Transform373->addChild(Shape374);

HAnimSegment371->addChild(Transform373);

HAnimSite* HAnimSite375 = new HAnimSite();
HAnimSite375->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip");
HAnimSite375->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip");
Transform* Transform376 = new Transform();
Transform376->setTranslation(new float[3]{-0.0841,0.0216,0.0013});
Shape* Shape377 = new Shape();
Shape377->setUSE("SiteShape");
Transform376->addChild(Shape377);

HAnimSite375->addChild(Transform376);

HAnimSegment371->addChild(HAnimSite375);

HAnimJoint370->addChild(HAnimSegment371);

HAnimJoint362->addChild(HAnimJoint370);

HAnimJoint354->addChild(HAnimJoint362);

HAnimJoint346->addChild(HAnimJoint354);

HAnimJoint338->addChild(HAnimJoint346);

HAnimJoint298->addChild(HAnimJoint338);

HAnimJoint* HAnimJoint378 = new HAnimJoint();
HAnimJoint378->setName("r_cuneiform_3");
HAnimJoint378->setDEF("hanim_r_cuneiform_3");
HAnimJoint378->setCenter(new float[3]{-0.0928,-0.0821,0.0248});
HAnimSegment* HAnimSegment379 = new HAnimSegment();
HAnimSegment379->setName("SEGMENT_FOR_r_cuneiform_3");
HAnimSegment379->setDEF("hanim_SEGMENT_FOR_r_cuneiform_3");
TouchSensor* TouchSensor380 = new TouchSensor();
TouchSensor380->setDescription("joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3");
HAnimSegment379->addChild(TouchSensor380);

Transform* Transform381 = new Transform();
Transform381->setTranslation(new float[3]{-0.0928,-0.0821,0.0248});
Shape* Shape382 = new Shape();
Shape382->setUSE("JointShape");
Transform381->addChild(Shape382);

HAnimSegment379->addChild(Transform381);

HAnimSite* HAnimSite383 = new HAnimSite();
HAnimSite383->setName("SEGMENT_FOR_r_cuneiform_3_tip");
HAnimSite383->setDEF("hanim_SEGMENT_FOR_r_cuneiform_3_tip");
Transform* Transform384 = new Transform();
Transform384->setTranslation(new float[3]{-0.0928,-0.0821,0.0248});
Shape* Shape385 = new Shape();
Shape385->setUSE("SiteShape");
Transform384->addChild(Shape385);

HAnimSite383->addChild(Transform384);

HAnimSegment379->addChild(HAnimSite383);

HAnimJoint378->addChild(HAnimSegment379);

HAnimJoint* HAnimJoint386 = new HAnimJoint();
HAnimJoint386->setName("r_metatarsal_3");
HAnimJoint386->setDEF("hanim_r_metatarsal_3");
HAnimJoint386->setCenter(new float[3]{-0.0944,-0.0625,0.0175});
HAnimSegment* HAnimSegment387 = new HAnimSegment();
HAnimSegment387->setName("SEGMENT_FOR_r_metatarsal_3");
HAnimSegment387->setDEF("hanim_SEGMENT_FOR_r_metatarsal_3");
TouchSensor* TouchSensor388 = new TouchSensor();
TouchSensor388->setDescription("joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3");
HAnimSegment387->addChild(TouchSensor388);

Transform* Transform389 = new Transform();
Transform389->setTranslation(new float[3]{-0.0944,-0.0625,0.0175});
Shape* Shape390 = new Shape();
Shape390->setUSE("JointShape");
Transform389->addChild(Shape390);

HAnimSegment387->addChild(Transform389);

HAnimSite* HAnimSite391 = new HAnimSite();
HAnimSite391->setName("SEGMENT_FOR_r_metatarsal_3_tip");
HAnimSite391->setDEF("hanim_SEGMENT_FOR_r_metatarsal_3_tip");
Transform* Transform392 = new Transform();
Transform392->setTranslation(new float[3]{-0.0944,-0.0625,0.0175});
Shape* Shape393 = new Shape();
Shape393->setUSE("SiteShape");
Transform392->addChild(Shape393);

HAnimSite391->addChild(Transform392);

HAnimSegment387->addChild(HAnimSite391);

HAnimJoint386->addChild(HAnimSegment387);

HAnimJoint* HAnimJoint394 = new HAnimJoint();
HAnimJoint394->setName("r_tarsal_proximal_phalanx_3");
HAnimJoint394->setDEF("hanim_r_tarsal_proximal_phalanx_3");
HAnimJoint394->setCenter(new float[3]{-0.0963,-0.0065,0.0065});
HAnimSegment* HAnimSegment395 = new HAnimSegment();
HAnimSegment395->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_3");
HAnimSegment395->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3");
TouchSensor* TouchSensor396 = new TouchSensor();
TouchSensor396->setDescription("joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3");
HAnimSegment395->addChild(TouchSensor396);

Transform* Transform397 = new Transform();
Transform397->setTranslation(new float[3]{-0.0963,-0.0065,0.0065});
Shape* Shape398 = new Shape();
Shape398->setUSE("JointShape");
Transform397->addChild(Shape398);

HAnimSegment395->addChild(Transform397);

HAnimSite* HAnimSite399 = new HAnimSite();
HAnimSite399->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip");
HAnimSite399->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip");
Transform* Transform400 = new Transform();
Transform400->setTranslation(new float[3]{-0.0963,-0.0065,0.0065});
Shape* Shape401 = new Shape();
Shape401->setUSE("SiteShape");
Transform400->addChild(Shape401);

HAnimSite399->addChild(Transform400);

HAnimSegment395->addChild(HAnimSite399);

HAnimJoint394->addChild(HAnimSegment395);

HAnimJoint* HAnimJoint402 = new HAnimJoint();
HAnimJoint402->setName("r_tarsal_middle_phalanx_3");
HAnimJoint402->setDEF("hanim_r_tarsal_middle_phalanx_3");
HAnimJoint402->setCenter(new float[3]{-0.0987,0.0086,0.0034});
HAnimSegment* HAnimSegment403 = new HAnimSegment();
HAnimSegment403->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_3");
HAnimSegment403->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3");
TouchSensor* TouchSensor404 = new TouchSensor();
TouchSensor404->setDescription("joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3");
HAnimSegment403->addChild(TouchSensor404);

Transform* Transform405 = new Transform();
Transform405->setTranslation(new float[3]{-0.0987,0.0086,0.0034});
Shape* Shape406 = new Shape();
Shape406->setUSE("JointShape");
Transform405->addChild(Shape406);

HAnimSegment403->addChild(Transform405);

HAnimSite* HAnimSite407 = new HAnimSite();
HAnimSite407->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip");
HAnimSite407->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip");
Transform* Transform408 = new Transform();
Transform408->setTranslation(new float[3]{-0.0987,0.0086,0.0034});
Shape* Shape409 = new Shape();
Shape409->setUSE("SiteShape");
Transform408->addChild(Shape409);

HAnimSite407->addChild(Transform408);

HAnimSegment403->addChild(HAnimSite407);

HAnimJoint402->addChild(HAnimSegment403);

HAnimJoint* HAnimJoint410 = new HAnimJoint();
HAnimJoint410->setName("r_tarsal_distal_phalanx_3");
HAnimJoint410->setDEF("hanim_r_tarsal_distal_phalanx_3");
HAnimJoint410->setCenter(new float[3]{-0.1002,0.0178,0.0013});
HAnimSegment* HAnimSegment411 = new HAnimSegment();
HAnimSegment411->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_3");
HAnimSegment411->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3");
TouchSensor* TouchSensor412 = new TouchSensor();
TouchSensor412->setDescription("joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3");
HAnimSegment411->addChild(TouchSensor412);

Transform* Transform413 = new Transform();
Transform413->setTranslation(new float[3]{-0.1002,0.0178,0.0013});
Shape* Shape414 = new Shape();
Shape414->setUSE("JointShape");
Transform413->addChild(Shape414);

HAnimSegment411->addChild(Transform413);

HAnimSite* HAnimSite415 = new HAnimSite();
HAnimSite415->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip");
HAnimSite415->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip");
Transform* Transform416 = new Transform();
Transform416->setTranslation(new float[3]{-0.1002,0.0178,0.0013});
Shape* Shape417 = new Shape();
Shape417->setUSE("SiteShape");
Transform416->addChild(Shape417);

HAnimSite415->addChild(Transform416);

HAnimSegment411->addChild(HAnimSite415);

HAnimJoint410->addChild(HAnimSegment411);

HAnimJoint402->addChild(HAnimJoint410);

HAnimJoint394->addChild(HAnimJoint402);

HAnimJoint386->addChild(HAnimJoint394);

HAnimJoint378->addChild(HAnimJoint386);

HAnimJoint298->addChild(HAnimJoint378);

HAnimJoint290->addChild(HAnimJoint298);

HAnimJoint* HAnimJoint418 = new HAnimJoint();
HAnimJoint418->setName("r_calcaneus");
HAnimJoint418->setDEF("hanim_r_calcaneus");
HAnimJoint418->setCenter(new float[3]{-0.0889,-0.1278,0.0494});
HAnimSegment* HAnimSegment419 = new HAnimSegment();
HAnimSegment419->setName("SEGMENT_FOR_r_calcaneus");
HAnimSegment419->setDEF("hanim_SEGMENT_FOR_r_calcaneus");
TouchSensor* TouchSensor420 = new TouchSensor();
TouchSensor420->setDescription("joint r_calcaneus segment SEGMENT_FOR_r_calcaneus");
HAnimSegment419->addChild(TouchSensor420);

Transform* Transform421 = new Transform();
Transform421->setTranslation(new float[3]{-0.0889,-0.1278,0.0494});
Shape* Shape422 = new Shape();
Shape422->setUSE("JointShape");
Transform421->addChild(Shape422);

HAnimSegment419->addChild(Transform421);

HAnimSite* HAnimSite423 = new HAnimSite();
HAnimSite423->setName("SEGMENT_FOR_r_calcaneus_tip");
HAnimSite423->setDEF("hanim_SEGMENT_FOR_r_calcaneus_tip");
Transform* Transform424 = new Transform();
Transform424->setTranslation(new float[3]{-0.0889,-0.1278,0.0494});
Shape* Shape425 = new Shape();
Shape425->setUSE("SiteShape");
Transform424->addChild(Shape425);

HAnimSite423->addChild(Transform424);

HAnimSegment419->addChild(HAnimSite423);

HAnimJoint418->addChild(HAnimSegment419);

HAnimJoint* HAnimJoint426 = new HAnimJoint();
HAnimJoint426->setName("r_cuboid");
HAnimJoint426->setDEF("hanim_r_cuboid");
HAnimJoint426->setCenter(new float[3]{-0.1105,-0.0998,0.0267});
HAnimSegment* HAnimSegment427 = new HAnimSegment();
HAnimSegment427->setName("SEGMENT_FOR_r_cuboid");
HAnimSegment427->setDEF("hanim_SEGMENT_FOR_r_cuboid");
TouchSensor* TouchSensor428 = new TouchSensor();
TouchSensor428->setDescription("joint r_cuboid segment SEGMENT_FOR_r_cuboid");
HAnimSegment427->addChild(TouchSensor428);

Transform* Transform429 = new Transform();
Transform429->setTranslation(new float[3]{-0.1105,-0.0998,0.0267});
Shape* Shape430 = new Shape();
Shape430->setUSE("JointShape");
Transform429->addChild(Shape430);

HAnimSegment427->addChild(Transform429);

HAnimSite* HAnimSite431 = new HAnimSite();
HAnimSite431->setName("SEGMENT_FOR_r_cuboid_tip");
HAnimSite431->setDEF("hanim_SEGMENT_FOR_r_cuboid_tip");
Transform* Transform432 = new Transform();
Transform432->setTranslation(new float[3]{-0.1105,-0.0998,0.0267});
Shape* Shape433 = new Shape();
Shape433->setUSE("SiteShape");
Transform432->addChild(Shape433);

HAnimSite431->addChild(Transform432);

HAnimSegment427->addChild(HAnimSite431);

HAnimJoint426->addChild(HAnimSegment427);

HAnimJoint* HAnimJoint434 = new HAnimJoint();
HAnimJoint434->setName("r_metatarsal_4");
HAnimJoint434->setDEF("hanim_r_metatarsal_4");
HAnimJoint434->setCenter(new float[3]{-0.1063,-0.0634,0.016});
HAnimSegment* HAnimSegment435 = new HAnimSegment();
HAnimSegment435->setName("SEGMENT_FOR_r_metatarsal_4");
HAnimSegment435->setDEF("hanim_SEGMENT_FOR_r_metatarsal_4");
TouchSensor* TouchSensor436 = new TouchSensor();
TouchSensor436->setDescription("joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4");
HAnimSegment435->addChild(TouchSensor436);

Transform* Transform437 = new Transform();
Transform437->setTranslation(new float[3]{-0.1063,-0.0634,0.016});
Shape* Shape438 = new Shape();
Shape438->setUSE("JointShape");
Transform437->addChild(Shape438);

HAnimSegment435->addChild(Transform437);

HAnimSite* HAnimSite439 = new HAnimSite();
HAnimSite439->setName("SEGMENT_FOR_r_metatarsal_4_tip");
HAnimSite439->setDEF("hanim_SEGMENT_FOR_r_metatarsal_4_tip");
Transform* Transform440 = new Transform();
Transform440->setTranslation(new float[3]{-0.1063,-0.0634,0.016});
Shape* Shape441 = new Shape();
Shape441->setUSE("SiteShape");
Transform440->addChild(Shape441);

HAnimSite439->addChild(Transform440);

HAnimSegment435->addChild(HAnimSite439);

HAnimJoint434->addChild(HAnimSegment435);

HAnimJoint* HAnimJoint442 = new HAnimJoint();
HAnimJoint442->setName("r_tarsal_proximal_phalanx_4");
HAnimJoint442->setDEF("hanim_r_tarsal_proximal_phalanx_4");
HAnimJoint442->setCenter(new float[3]{-0.1097,-0.0107,0.0058});
HAnimSegment* HAnimSegment443 = new HAnimSegment();
HAnimSegment443->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_4");
HAnimSegment443->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4");
TouchSensor* TouchSensor444 = new TouchSensor();
TouchSensor444->setDescription("joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4");
HAnimSegment443->addChild(TouchSensor444);

Transform* Transform445 = new Transform();
Transform445->setTranslation(new float[3]{-0.1097,-0.0107,0.0058});
Shape* Shape446 = new Shape();
Shape446->setUSE("JointShape");
Transform445->addChild(Shape446);

HAnimSegment443->addChild(Transform445);

HAnimSite* HAnimSite447 = new HAnimSite();
HAnimSite447->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip");
HAnimSite447->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip");
Transform* Transform448 = new Transform();
Transform448->setTranslation(new float[3]{-0.1097,-0.0107,0.0058});
Shape* Shape449 = new Shape();
Shape449->setUSE("SiteShape");
Transform448->addChild(Shape449);

HAnimSite447->addChild(Transform448);

HAnimSegment443->addChild(HAnimSite447);

HAnimJoint442->addChild(HAnimSegment443);

HAnimJoint* HAnimJoint450 = new HAnimJoint();
HAnimJoint450->setName("r_tarsal_middle_phalanx_4");
HAnimJoint450->setDEF("hanim_r_tarsal_middle_phalanx_4");
HAnimJoint450->setCenter(new float[3]{-0.114,0.0044,0.0037});
HAnimSegment* HAnimSegment451 = new HAnimSegment();
HAnimSegment451->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_4");
HAnimSegment451->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4");
TouchSensor* TouchSensor452 = new TouchSensor();
TouchSensor452->setDescription("joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4");
HAnimSegment451->addChild(TouchSensor452);

Transform* Transform453 = new Transform();
Transform453->setTranslation(new float[3]{-0.114,0.0044,0.0037});
Shape* Shape454 = new Shape();
Shape454->setUSE("JointShape");
Transform453->addChild(Shape454);

HAnimSegment451->addChild(Transform453);

HAnimSite* HAnimSite455 = new HAnimSite();
HAnimSite455->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip");
HAnimSite455->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip");
Transform* Transform456 = new Transform();
Transform456->setTranslation(new float[3]{-0.114,0.0044,0.0037});
Shape* Shape457 = new Shape();
Shape457->setUSE("SiteShape");
Transform456->addChild(Shape457);

HAnimSite455->addChild(Transform456);

HAnimSegment451->addChild(HAnimSite455);

HAnimJoint450->addChild(HAnimSegment451);

HAnimJoint* HAnimJoint458 = new HAnimJoint();
HAnimJoint458->setName("r_tarsal_distal_phalanx_4");
HAnimJoint458->setDEF("hanim_r_tarsal_distal_phalanx_4");
HAnimJoint458->setCenter(new float[3]{-0.1155,0.0118,0.0008});
HAnimSegment* HAnimSegment459 = new HAnimSegment();
HAnimSegment459->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_4");
HAnimSegment459->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4");
TouchSensor* TouchSensor460 = new TouchSensor();
TouchSensor460->setDescription("joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4");
HAnimSegment459->addChild(TouchSensor460);

Transform* Transform461 = new Transform();
Transform461->setTranslation(new float[3]{-0.1155,0.0118,0.0008});
Shape* Shape462 = new Shape();
Shape462->setUSE("JointShape");
Transform461->addChild(Shape462);

HAnimSegment459->addChild(Transform461);

HAnimSite* HAnimSite463 = new HAnimSite();
HAnimSite463->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip");
HAnimSite463->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip");
Transform* Transform464 = new Transform();
Transform464->setTranslation(new float[3]{-0.1155,0.0118,0.0008});
Shape* Shape465 = new Shape();
Shape465->setUSE("SiteShape");
Transform464->addChild(Shape465);

HAnimSite463->addChild(Transform464);

HAnimSegment459->addChild(HAnimSite463);

HAnimJoint458->addChild(HAnimSegment459);

HAnimJoint450->addChild(HAnimJoint458);

HAnimJoint442->addChild(HAnimJoint450);

HAnimJoint434->addChild(HAnimJoint442);

HAnimJoint426->addChild(HAnimJoint434);

HAnimJoint* HAnimJoint466 = new HAnimJoint();
HAnimJoint466->setName("r_metatarsal_5");
HAnimJoint466->setDEF("hanim_r_metatarsal_5");
HAnimJoint466->setCenter(new float[3]{-0.1206,-0.0671,0.0124});
HAnimSegment* HAnimSegment467 = new HAnimSegment();
HAnimSegment467->setName("SEGMENT_FOR_r_metatarsal_5");
HAnimSegment467->setDEF("hanim_SEGMENT_FOR_r_metatarsal_5");
TouchSensor* TouchSensor468 = new TouchSensor();
TouchSensor468->setDescription("joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5");
HAnimSegment467->addChild(TouchSensor468);

Transform* Transform469 = new Transform();
Transform469->setTranslation(new float[3]{-0.1206,-0.0671,0.0124});
Shape* Shape470 = new Shape();
Shape470->setUSE("JointShape");
Transform469->addChild(Shape470);

HAnimSegment467->addChild(Transform469);

HAnimSite* HAnimSite471 = new HAnimSite();
HAnimSite471->setName("SEGMENT_FOR_r_metatarsal_5_tip");
HAnimSite471->setDEF("hanim_SEGMENT_FOR_r_metatarsal_5_tip");
Transform* Transform472 = new Transform();
Transform472->setTranslation(new float[3]{-0.1206,-0.0671,0.0124});
Shape* Shape473 = new Shape();
Shape473->setUSE("SiteShape");
Transform472->addChild(Shape473);

HAnimSite471->addChild(Transform472);

HAnimSegment467->addChild(HAnimSite471);

HAnimJoint466->addChild(HAnimSegment467);

HAnimJoint* HAnimJoint474 = new HAnimJoint();
HAnimJoint474->setName("r_tarsal_proximal_phalanx_5");
HAnimJoint474->setDEF("hanim_r_tarsal_proximal_phalanx_5");
HAnimJoint474->setCenter(new float[3]{-0.1239,-0.0153,0.0051});
HAnimSegment* HAnimSegment475 = new HAnimSegment();
HAnimSegment475->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_5");
HAnimSegment475->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5");
TouchSensor* TouchSensor476 = new TouchSensor();
TouchSensor476->setDescription("joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5");
HAnimSegment475->addChild(TouchSensor476);

Transform* Transform477 = new Transform();
Transform477->setTranslation(new float[3]{-0.1239,-0.0153,0.0051});
Shape* Shape478 = new Shape();
Shape478->setUSE("JointShape");
Transform477->addChild(Shape478);

HAnimSegment475->addChild(Transform477);

HAnimSite* HAnimSite479 = new HAnimSite();
HAnimSite479->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip");
HAnimSite479->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip");
Transform* Transform480 = new Transform();
Transform480->setTranslation(new float[3]{-0.1239,-0.0153,0.0051});
Shape* Shape481 = new Shape();
Shape481->setUSE("SiteShape");
Transform480->addChild(Shape481);

HAnimSite479->addChild(Transform480);

HAnimSegment475->addChild(HAnimSite479);

HAnimJoint474->addChild(HAnimSegment475);

HAnimJoint* HAnimJoint482 = new HAnimJoint();
HAnimJoint482->setName("r_tarsal_middle_phalanx_5");
HAnimJoint482->setDEF("hanim_r_tarsal_middle_phalanx_5");
HAnimJoint482->setCenter(new float[3]{-0.1262,-0.0077,0.0023});
HAnimSegment* HAnimSegment483 = new HAnimSegment();
HAnimSegment483->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_5");
HAnimSegment483->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5");
TouchSensor* TouchSensor484 = new TouchSensor();
TouchSensor484->setDescription("joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5");
HAnimSegment483->addChild(TouchSensor484);

Transform* Transform485 = new Transform();
Transform485->setTranslation(new float[3]{-0.1262,-0.0077,0.0023});
Shape* Shape486 = new Shape();
Shape486->setUSE("JointShape");
Transform485->addChild(Shape486);

HAnimSegment483->addChild(Transform485);

HAnimSite* HAnimSite487 = new HAnimSite();
HAnimSite487->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip");
HAnimSite487->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip");
Transform* Transform488 = new Transform();
Transform488->setTranslation(new float[3]{-0.1262,-0.0077,0.0023});
Shape* Shape489 = new Shape();
Shape489->setUSE("SiteShape");
Transform488->addChild(Shape489);

HAnimSite487->addChild(Transform488);

HAnimSegment483->addChild(HAnimSite487);

HAnimJoint482->addChild(HAnimSegment483);

HAnimJoint* HAnimJoint490 = new HAnimJoint();
HAnimJoint490->setName("r_tarsal_distal_phalanx_5");
HAnimJoint490->setDEF("hanim_r_tarsal_distal_phalanx_5");
HAnimJoint490->setCenter(new float[3]{-0.1271,0,0});
HAnimSegment* HAnimSegment491 = new HAnimSegment();
HAnimSegment491->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_5");
HAnimSegment491->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5");
TouchSensor* TouchSensor492 = new TouchSensor();
TouchSensor492->setDescription("joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5");
HAnimSegment491->addChild(TouchSensor492);

Transform* Transform493 = new Transform();
Transform493->setTranslation(new float[3]{-0.1271,0,0});
Shape* Shape494 = new Shape();
Shape494->setUSE("JointShape");
Transform493->addChild(Shape494);

HAnimSegment491->addChild(Transform493);

HAnimSite* HAnimSite495 = new HAnimSite();
HAnimSite495->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip");
HAnimSite495->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip");
Transform* Transform496 = new Transform();
Transform496->setTranslation(new float[3]{-0.1271,0,0});
Shape* Shape497 = new Shape();
Shape497->setUSE("SiteShape");
Transform496->addChild(Shape497);

HAnimSite495->addChild(Transform496);

HAnimSegment491->addChild(HAnimSite495);

HAnimJoint490->addChild(HAnimSegment491);

HAnimJoint482->addChild(HAnimJoint490);

HAnimJoint474->addChild(HAnimJoint482);

HAnimJoint466->addChild(HAnimJoint474);

HAnimJoint426->addChild(HAnimJoint466);

HAnimJoint418->addChild(HAnimJoint426);

HAnimJoint290->addChild(HAnimJoint418);

HAnimJoint282->addChild(HAnimJoint290);

HAnimJoint274->addChild(HAnimJoint282);

HAnimJoint42->addChild(HAnimJoint274);

HAnimJoint34->addChild(HAnimJoint42);

HAnimJoint* HAnimJoint498 = new HAnimJoint();
HAnimJoint498->setName("l5");
HAnimJoint498->setDEF("hanim_l5");
HAnimJoint498->setCenter(new float[3]{-0.0002,-0.1156,0.9169});
HAnimSegment* HAnimSegment499 = new HAnimSegment();
HAnimSegment499->setName("SEGMENT_FOR_l5");
HAnimSegment499->setDEF("hanim_SEGMENT_FOR_l5");
TouchSensor* TouchSensor500 = new TouchSensor();
TouchSensor500->setDescription("joint l5 segment SEGMENT_FOR_l5");
HAnimSegment499->addChild(TouchSensor500);

Transform* Transform501 = new Transform();
Transform501->setTranslation(new float[3]{-0.0002,-0.1156,0.9169});
Shape* Shape502 = new Shape();
Shape502->setUSE("JointShape");
Transform501->addChild(Shape502);

HAnimSegment499->addChild(Transform501);

HAnimSite* HAnimSite503 = new HAnimSite();
HAnimSite503->setName("SEGMENT_FOR_l5_tip");
HAnimSite503->setDEF("hanim_SEGMENT_FOR_l5_tip");
Transform* Transform504 = new Transform();
Transform504->setTranslation(new float[3]{-0.0002,-0.1156,0.9169});
Shape* Shape505 = new Shape();
Shape505->setUSE("SiteShape");
Transform504->addChild(Shape505);

HAnimSite503->addChild(Transform504);

HAnimSegment499->addChild(HAnimSite503);

HAnimJoint498->addChild(HAnimSegment499);

HAnimJoint* HAnimJoint506 = new HAnimJoint();
HAnimJoint506->setName("l4");
HAnimJoint506->setDEF("hanim_l4");
HAnimJoint506->setCenter(new float[3]{-0.0002,-0.1156,0.9412});
HAnimSegment* HAnimSegment507 = new HAnimSegment();
HAnimSegment507->setName("SEGMENT_FOR_l4");
HAnimSegment507->setDEF("hanim_SEGMENT_FOR_l4");
TouchSensor* TouchSensor508 = new TouchSensor();
TouchSensor508->setDescription("joint l4 segment SEGMENT_FOR_l4");
HAnimSegment507->addChild(TouchSensor508);

Transform* Transform509 = new Transform();
Transform509->setTranslation(new float[3]{-0.0002,-0.1156,0.9412});
Shape* Shape510 = new Shape();
Shape510->setUSE("JointShape");
Transform509->addChild(Shape510);

HAnimSegment507->addChild(Transform509);

HAnimSite* HAnimSite511 = new HAnimSite();
HAnimSite511->setName("SEGMENT_FOR_l4_tip");
HAnimSite511->setDEF("hanim_SEGMENT_FOR_l4_tip");
Transform* Transform512 = new Transform();
Transform512->setTranslation(new float[3]{-0.0002,-0.1156,0.9412});
Shape* Shape513 = new Shape();
Shape513->setUSE("SiteShape");
Transform512->addChild(Shape513);

HAnimSite511->addChild(Transform512);

HAnimSegment507->addChild(HAnimSite511);

HAnimJoint506->addChild(HAnimSegment507);

HAnimJoint* HAnimJoint514 = new HAnimJoint();
HAnimJoint514->setName("l3");
HAnimJoint514->setDEF("hanim_l3");
HAnimJoint514->setCenter(new float[3]{-0.0002,-0.1156,0.9574});
HAnimSegment* HAnimSegment515 = new HAnimSegment();
HAnimSegment515->setName("SEGMENT_FOR_l3");
HAnimSegment515->setDEF("hanim_SEGMENT_FOR_l3");
TouchSensor* TouchSensor516 = new TouchSensor();
TouchSensor516->setDescription("joint l3 segment SEGMENT_FOR_l3");
HAnimSegment515->addChild(TouchSensor516);

Transform* Transform517 = new Transform();
Transform517->setTranslation(new float[3]{-0.0002,-0.1156,0.9574});
Shape* Shape518 = new Shape();
Shape518->setUSE("JointShape");
Transform517->addChild(Shape518);

HAnimSegment515->addChild(Transform517);

HAnimSite* HAnimSite519 = new HAnimSite();
HAnimSite519->setName("SEGMENT_FOR_l3_tip");
HAnimSite519->setDEF("hanim_SEGMENT_FOR_l3_tip");
Transform* Transform520 = new Transform();
Transform520->setTranslation(new float[3]{-0.0002,-0.1156,0.9574});
Shape* Shape521 = new Shape();
Shape521->setUSE("SiteShape");
Transform520->addChild(Shape521);

HAnimSite519->addChild(Transform520);

HAnimSegment515->addChild(HAnimSite519);

HAnimJoint514->addChild(HAnimSegment515);

HAnimJoint* HAnimJoint522 = new HAnimJoint();
HAnimJoint522->setName("l2");
HAnimJoint522->setDEF("hanim_l2");
HAnimJoint522->setCenter(new float[3]{-0.0002,-0.1156,0.9738});
HAnimSegment* HAnimSegment523 = new HAnimSegment();
HAnimSegment523->setName("SEGMENT_FOR_l2");
HAnimSegment523->setDEF("hanim_SEGMENT_FOR_l2");
TouchSensor* TouchSensor524 = new TouchSensor();
TouchSensor524->setDescription("joint l2 segment SEGMENT_FOR_l2");
HAnimSegment523->addChild(TouchSensor524);

Transform* Transform525 = new Transform();
Transform525->setTranslation(new float[3]{-0.0002,-0.1156,0.9738});
Shape* Shape526 = new Shape();
Shape526->setUSE("JointShape");
Transform525->addChild(Shape526);

HAnimSegment523->addChild(Transform525);

HAnimSite* HAnimSite527 = new HAnimSite();
HAnimSite527->setName("SEGMENT_FOR_l2_tip");
HAnimSite527->setDEF("hanim_SEGMENT_FOR_l2_tip");
Transform* Transform528 = new Transform();
Transform528->setTranslation(new float[3]{-0.0002,-0.1156,0.9738});
Shape* Shape529 = new Shape();
Shape529->setUSE("SiteShape");
Transform528->addChild(Shape529);

HAnimSite527->addChild(Transform528);

HAnimSegment523->addChild(HAnimSite527);

HAnimJoint522->addChild(HAnimSegment523);

HAnimJoint* HAnimJoint530 = new HAnimJoint();
HAnimJoint530->setName("l1");
HAnimJoint530->setDEF("hanim_l1");
HAnimJoint530->setCenter(new float[3]{-0.0002,-0.1156,0.9911});
HAnimSegment* HAnimSegment531 = new HAnimSegment();
HAnimSegment531->setName("SEGMENT_FOR_l1");
HAnimSegment531->setDEF("hanim_SEGMENT_FOR_l1");
TouchSensor* TouchSensor532 = new TouchSensor();
TouchSensor532->setDescription("joint l1 segment SEGMENT_FOR_l1");
HAnimSegment531->addChild(TouchSensor532);

Transform* Transform533 = new Transform();
Transform533->setTranslation(new float[3]{-0.0002,-0.1156,0.9911});
Shape* Shape534 = new Shape();
Shape534->setUSE("JointShape");
Transform533->addChild(Shape534);

HAnimSegment531->addChild(Transform533);

HAnimSite* HAnimSite535 = new HAnimSite();
HAnimSite535->setName("SEGMENT_FOR_l1_tip");
HAnimSite535->setDEF("hanim_SEGMENT_FOR_l1_tip");
Transform* Transform536 = new Transform();
Transform536->setTranslation(new float[3]{-0.0002,-0.1156,0.9911});
Shape* Shape537 = new Shape();
Shape537->setUSE("SiteShape");
Transform536->addChild(Shape537);

HAnimSite535->addChild(Transform536);

HAnimSegment531->addChild(HAnimSite535);

HAnimJoint530->addChild(HAnimSegment531);

HAnimJoint* HAnimJoint538 = new HAnimJoint();
HAnimJoint538->setName("t12");
HAnimJoint538->setDEF("hanim_t12");
HAnimJoint538->setCenter(new float[3]{-0.0002,-0.1156,1.0145});
HAnimSegment* HAnimSegment539 = new HAnimSegment();
HAnimSegment539->setName("SEGMENT_FOR_t12");
HAnimSegment539->setDEF("hanim_SEGMENT_FOR_t12");
TouchSensor* TouchSensor540 = new TouchSensor();
TouchSensor540->setDescription("joint t12 segment SEGMENT_FOR_t12");
HAnimSegment539->addChild(TouchSensor540);

Transform* Transform541 = new Transform();
Transform541->setTranslation(new float[3]{-0.0002,-0.1156,1.0145});
Shape* Shape542 = new Shape();
Shape542->setUSE("JointShape");
Transform541->addChild(Shape542);

HAnimSegment539->addChild(Transform541);

HAnimSite* HAnimSite543 = new HAnimSite();
HAnimSite543->setName("SEGMENT_FOR_t12_tip");
HAnimSite543->setDEF("hanim_SEGMENT_FOR_t12_tip");
Transform* Transform544 = new Transform();
Transform544->setTranslation(new float[3]{-0.0002,-0.1156,1.0145});
Shape* Shape545 = new Shape();
Shape545->setUSE("SiteShape");
Transform544->addChild(Shape545);

HAnimSite543->addChild(Transform544);

HAnimSegment539->addChild(HAnimSite543);

HAnimJoint538->addChild(HAnimSegment539);

HAnimJoint* HAnimJoint546 = new HAnimJoint();
HAnimJoint546->setName("t11");
HAnimJoint546->setDEF("hanim_t11");
HAnimJoint546->setCenter(new float[3]{-0.0002,-0.1156,1.0381});
HAnimSegment* HAnimSegment547 = new HAnimSegment();
HAnimSegment547->setName("SEGMENT_FOR_t11");
HAnimSegment547->setDEF("hanim_SEGMENT_FOR_t11");
TouchSensor* TouchSensor548 = new TouchSensor();
TouchSensor548->setDescription("joint t11 segment SEGMENT_FOR_t11");
HAnimSegment547->addChild(TouchSensor548);

Transform* Transform549 = new Transform();
Transform549->setTranslation(new float[3]{-0.0002,-0.1156,1.0381});
Shape* Shape550 = new Shape();
Shape550->setUSE("JointShape");
Transform549->addChild(Shape550);

HAnimSegment547->addChild(Transform549);

HAnimSite* HAnimSite551 = new HAnimSite();
HAnimSite551->setName("SEGMENT_FOR_t11_tip");
HAnimSite551->setDEF("hanim_SEGMENT_FOR_t11_tip");
Transform* Transform552 = new Transform();
Transform552->setTranslation(new float[3]{-0.0002,-0.1156,1.0381});
Shape* Shape553 = new Shape();
Shape553->setUSE("SiteShape");
Transform552->addChild(Shape553);

HAnimSite551->addChild(Transform552);

HAnimSegment547->addChild(HAnimSite551);

HAnimJoint546->addChild(HAnimSegment547);

HAnimJoint* HAnimJoint554 = new HAnimJoint();
HAnimJoint554->setName("t10");
HAnimJoint554->setDEF("hanim_t10");
HAnimJoint554->setCenter(new float[3]{-0.0002,-0.1157,1.0552});
HAnimSegment* HAnimSegment555 = new HAnimSegment();
HAnimSegment555->setName("SEGMENT_FOR_t10");
HAnimSegment555->setDEF("hanim_SEGMENT_FOR_t10");
TouchSensor* TouchSensor556 = new TouchSensor();
TouchSensor556->setDescription("joint t10 segment SEGMENT_FOR_t10");
HAnimSegment555->addChild(TouchSensor556);

Transform* Transform557 = new Transform();
Transform557->setTranslation(new float[3]{-0.0002,-0.1157,1.0552});
Shape* Shape558 = new Shape();
Shape558->setUSE("JointShape");
Transform557->addChild(Shape558);

HAnimSegment555->addChild(Transform557);

HAnimSite* HAnimSite559 = new HAnimSite();
HAnimSite559->setName("SEGMENT_FOR_t10_tip");
HAnimSite559->setDEF("hanim_SEGMENT_FOR_t10_tip");
Transform* Transform560 = new Transform();
Transform560->setTranslation(new float[3]{-0.0002,-0.1157,1.0552});
Shape* Shape561 = new Shape();
Shape561->setUSE("SiteShape");
Transform560->addChild(Shape561);

HAnimSite559->addChild(Transform560);

HAnimSegment555->addChild(HAnimSite559);

HAnimJoint554->addChild(HAnimSegment555);

HAnimJoint* HAnimJoint562 = new HAnimJoint();
HAnimJoint562->setName("t9");
HAnimJoint562->setDEF("hanim_t9");
HAnimJoint562->setCenter(new float[3]{-0.0002,-0.1156,1.0699});
HAnimSegment* HAnimSegment563 = new HAnimSegment();
HAnimSegment563->setName("SEGMENT_FOR_t9");
HAnimSegment563->setDEF("hanim_SEGMENT_FOR_t9");
TouchSensor* TouchSensor564 = new TouchSensor();
TouchSensor564->setDescription("joint t9 segment SEGMENT_FOR_t9");
HAnimSegment563->addChild(TouchSensor564);

Transform* Transform565 = new Transform();
Transform565->setTranslation(new float[3]{-0.0002,-0.1156,1.0699});
Shape* Shape566 = new Shape();
Shape566->setUSE("JointShape");
Transform565->addChild(Shape566);

HAnimSegment563->addChild(Transform565);

HAnimSite* HAnimSite567 = new HAnimSite();
HAnimSite567->setName("SEGMENT_FOR_t9_tip");
HAnimSite567->setDEF("hanim_SEGMENT_FOR_t9_tip");
Transform* Transform568 = new Transform();
Transform568->setTranslation(new float[3]{-0.0002,-0.1156,1.0699});
Shape* Shape569 = new Shape();
Shape569->setUSE("SiteShape");
Transform568->addChild(Shape569);

HAnimSite567->addChild(Transform568);

HAnimSegment563->addChild(HAnimSite567);

HAnimJoint562->addChild(HAnimSegment563);

HAnimJoint* HAnimJoint570 = new HAnimJoint();
HAnimJoint570->setName("t8");
HAnimJoint570->setDEF("hanim_t8");
HAnimJoint570->setCenter(new float[3]{-0.0002,-0.1156,1.0845});
HAnimSegment* HAnimSegment571 = new HAnimSegment();
HAnimSegment571->setName("SEGMENT_FOR_t8");
HAnimSegment571->setDEF("hanim_SEGMENT_FOR_t8");
TouchSensor* TouchSensor572 = new TouchSensor();
TouchSensor572->setDescription("joint t8 segment SEGMENT_FOR_t8");
HAnimSegment571->addChild(TouchSensor572);

Transform* Transform573 = new Transform();
Transform573->setTranslation(new float[3]{-0.0002,-0.1156,1.0845});
Shape* Shape574 = new Shape();
Shape574->setUSE("JointShape");
Transform573->addChild(Shape574);

HAnimSegment571->addChild(Transform573);

HAnimSite* HAnimSite575 = new HAnimSite();
HAnimSite575->setName("SEGMENT_FOR_t8_tip");
HAnimSite575->setDEF("hanim_SEGMENT_FOR_t8_tip");
Transform* Transform576 = new Transform();
Transform576->setTranslation(new float[3]{-0.0002,-0.1156,1.0845});
Shape* Shape577 = new Shape();
Shape577->setUSE("SiteShape");
Transform576->addChild(Shape577);

HAnimSite575->addChild(Transform576);

HAnimSegment571->addChild(HAnimSite575);

HAnimJoint570->addChild(HAnimSegment571);

HAnimJoint* HAnimJoint578 = new HAnimJoint();
HAnimJoint578->setName("t7");
HAnimJoint578->setDEF("hanim_t7");
HAnimJoint578->setCenter(new float[3]{-0.0002,-0.1156,1.1002});
HAnimSegment* HAnimSegment579 = new HAnimSegment();
HAnimSegment579->setName("SEGMENT_FOR_t7");
HAnimSegment579->setDEF("hanim_SEGMENT_FOR_t7");
TouchSensor* TouchSensor580 = new TouchSensor();
TouchSensor580->setDescription("joint t7 segment SEGMENT_FOR_t7");
HAnimSegment579->addChild(TouchSensor580);

Transform* Transform581 = new Transform();
Transform581->setTranslation(new float[3]{-0.0002,-0.1156,1.1002});
Shape* Shape582 = new Shape();
Shape582->setUSE("JointShape");
Transform581->addChild(Shape582);

HAnimSegment579->addChild(Transform581);

HAnimSite* HAnimSite583 = new HAnimSite();
HAnimSite583->setName("SEGMENT_FOR_t7_tip");
HAnimSite583->setDEF("hanim_SEGMENT_FOR_t7_tip");
Transform* Transform584 = new Transform();
Transform584->setTranslation(new float[3]{-0.0002,-0.1156,1.1002});
Shape* Shape585 = new Shape();
Shape585->setUSE("SiteShape");
Transform584->addChild(Shape585);

HAnimSite583->addChild(Transform584);

HAnimSegment579->addChild(HAnimSite583);

HAnimJoint578->addChild(HAnimSegment579);

HAnimJoint* HAnimJoint586 = new HAnimJoint();
HAnimJoint586->setName("t6");
HAnimJoint586->setDEF("hanim_t6");
HAnimJoint586->setCenter(new float[3]{-0.0002,-0.1156,1.1131});
HAnimSegment* HAnimSegment587 = new HAnimSegment();
HAnimSegment587->setName("SEGMENT_FOR_t6");
HAnimSegment587->setDEF("hanim_SEGMENT_FOR_t6");
TouchSensor* TouchSensor588 = new TouchSensor();
TouchSensor588->setDescription("joint t6 segment SEGMENT_FOR_t6");
HAnimSegment587->addChild(TouchSensor588);

Transform* Transform589 = new Transform();
Transform589->setTranslation(new float[3]{-0.0002,-0.1156,1.1131});
Shape* Shape590 = new Shape();
Shape590->setUSE("JointShape");
Transform589->addChild(Shape590);

HAnimSegment587->addChild(Transform589);

HAnimSite* HAnimSite591 = new HAnimSite();
HAnimSite591->setName("SEGMENT_FOR_t6_tip");
HAnimSite591->setDEF("hanim_SEGMENT_FOR_t6_tip");
Transform* Transform592 = new Transform();
Transform592->setTranslation(new float[3]{-0.0002,-0.1156,1.1131});
Shape* Shape593 = new Shape();
Shape593->setUSE("SiteShape");
Transform592->addChild(Shape593);

HAnimSite591->addChild(Transform592);

HAnimSegment587->addChild(HAnimSite591);

HAnimJoint586->addChild(HAnimSegment587);

HAnimJoint* HAnimJoint594 = new HAnimJoint();
HAnimJoint594->setName("t5");
HAnimJoint594->setDEF("hanim_t5");
HAnimJoint594->setCenter(new float[3]{-0.0002,-0.1156,1.1286});
HAnimSegment* HAnimSegment595 = new HAnimSegment();
HAnimSegment595->setName("SEGMENT_FOR_t5");
HAnimSegment595->setDEF("hanim_SEGMENT_FOR_t5");
TouchSensor* TouchSensor596 = new TouchSensor();
TouchSensor596->setDescription("joint t5 segment SEGMENT_FOR_t5");
HAnimSegment595->addChild(TouchSensor596);

Transform* Transform597 = new Transform();
Transform597->setTranslation(new float[3]{-0.0002,-0.1156,1.1286});
Shape* Shape598 = new Shape();
Shape598->setUSE("JointShape");
Transform597->addChild(Shape598);

HAnimSegment595->addChild(Transform597);

HAnimSite* HAnimSite599 = new HAnimSite();
HAnimSite599->setName("SEGMENT_FOR_t5_tip");
HAnimSite599->setDEF("hanim_SEGMENT_FOR_t5_tip");
Transform* Transform600 = new Transform();
Transform600->setTranslation(new float[3]{-0.0002,-0.1156,1.1286});
Shape* Shape601 = new Shape();
Shape601->setUSE("SiteShape");
Transform600->addChild(Shape601);

HAnimSite599->addChild(Transform600);

HAnimSegment595->addChild(HAnimSite599);

HAnimJoint594->addChild(HAnimSegment595);

HAnimJoint* HAnimJoint602 = new HAnimJoint();
HAnimJoint602->setName("t4");
HAnimJoint602->setDEF("hanim_t4");
HAnimJoint602->setCenter(new float[3]{-0.0002,-0.1156,1.1439});
HAnimSegment* HAnimSegment603 = new HAnimSegment();
HAnimSegment603->setName("SEGMENT_FOR_t4");
HAnimSegment603->setDEF("hanim_SEGMENT_FOR_t4");
TouchSensor* TouchSensor604 = new TouchSensor();
TouchSensor604->setDescription("joint t4 segment SEGMENT_FOR_t4");
HAnimSegment603->addChild(TouchSensor604);

Transform* Transform605 = new Transform();
Transform605->setTranslation(new float[3]{-0.0002,-0.1156,1.1439});
Shape* Shape606 = new Shape();
Shape606->setUSE("JointShape");
Transform605->addChild(Shape606);

HAnimSegment603->addChild(Transform605);

HAnimSite* HAnimSite607 = new HAnimSite();
HAnimSite607->setName("SEGMENT_FOR_t4_tip");
HAnimSite607->setDEF("hanim_SEGMENT_FOR_t4_tip");
Transform* Transform608 = new Transform();
Transform608->setTranslation(new float[3]{-0.0002,-0.1156,1.1439});
Shape* Shape609 = new Shape();
Shape609->setUSE("SiteShape");
Transform608->addChild(Shape609);

HAnimSite607->addChild(Transform608);

HAnimSegment603->addChild(HAnimSite607);

HAnimJoint602->addChild(HAnimSegment603);

HAnimJoint* HAnimJoint610 = new HAnimJoint();
HAnimJoint610->setName("t3");
HAnimJoint610->setDEF("hanim_t3");
HAnimJoint610->setCenter(new float[3]{-0.0002,-0.1156,1.1623});
HAnimSegment* HAnimSegment611 = new HAnimSegment();
HAnimSegment611->setName("SEGMENT_FOR_t3");
HAnimSegment611->setDEF("hanim_SEGMENT_FOR_t3");
TouchSensor* TouchSensor612 = new TouchSensor();
TouchSensor612->setDescription("joint t3 segment SEGMENT_FOR_t3");
HAnimSegment611->addChild(TouchSensor612);

Transform* Transform613 = new Transform();
Transform613->setTranslation(new float[3]{-0.0002,-0.1156,1.1623});
Shape* Shape614 = new Shape();
Shape614->setUSE("JointShape");
Transform613->addChild(Shape614);

HAnimSegment611->addChild(Transform613);

HAnimSite* HAnimSite615 = new HAnimSite();
HAnimSite615->setName("SEGMENT_FOR_t3_tip");
HAnimSite615->setDEF("hanim_SEGMENT_FOR_t3_tip");
Transform* Transform616 = new Transform();
Transform616->setTranslation(new float[3]{-0.0002,-0.1156,1.1623});
Shape* Shape617 = new Shape();
Shape617->setUSE("SiteShape");
Transform616->addChild(Shape617);

HAnimSite615->addChild(Transform616);

HAnimSegment611->addChild(HAnimSite615);

HAnimJoint610->addChild(HAnimSegment611);

HAnimJoint* HAnimJoint618 = new HAnimJoint();
HAnimJoint618->setName("t2");
HAnimJoint618->setDEF("hanim_t2");
HAnimJoint618->setCenter(new float[3]{-0.0002,-0.1157,1.1871});
HAnimSegment* HAnimSegment619 = new HAnimSegment();
HAnimSegment619->setName("SEGMENT_FOR_t2");
HAnimSegment619->setDEF("hanim_SEGMENT_FOR_t2");
TouchSensor* TouchSensor620 = new TouchSensor();
TouchSensor620->setDescription("joint t2 segment SEGMENT_FOR_t2");
HAnimSegment619->addChild(TouchSensor620);

Transform* Transform621 = new Transform();
Transform621->setTranslation(new float[3]{-0.0002,-0.1157,1.1871});
Shape* Shape622 = new Shape();
Shape622->setUSE("JointShape");
Transform621->addChild(Shape622);

HAnimSegment619->addChild(Transform621);

HAnimSite* HAnimSite623 = new HAnimSite();
HAnimSite623->setName("SEGMENT_FOR_t2_tip");
HAnimSite623->setDEF("hanim_SEGMENT_FOR_t2_tip");
Transform* Transform624 = new Transform();
Transform624->setTranslation(new float[3]{-0.0002,-0.1157,1.1871});
Shape* Shape625 = new Shape();
Shape625->setUSE("SiteShape");
Transform624->addChild(Shape625);

HAnimSite623->addChild(Transform624);

HAnimSegment619->addChild(HAnimSite623);

HAnimJoint618->addChild(HAnimSegment619);

HAnimJoint* HAnimJoint626 = new HAnimJoint();
HAnimJoint626->setName("t1");
HAnimJoint626->setDEF("hanim_t1");
HAnimJoint626->setCenter(new float[3]{-0.0002,-0.1156,1.2109});
HAnimSegment* HAnimSegment627 = new HAnimSegment();
HAnimSegment627->setName("SEGMENT_FOR_t1");
HAnimSegment627->setDEF("hanim_SEGMENT_FOR_t1");
TouchSensor* TouchSensor628 = new TouchSensor();
TouchSensor628->setDescription("joint t1 segment SEGMENT_FOR_t1");
HAnimSegment627->addChild(TouchSensor628);

Transform* Transform629 = new Transform();
Transform629->setTranslation(new float[3]{-0.0002,-0.1156,1.2109});
Shape* Shape630 = new Shape();
Shape630->setUSE("JointShape");
Transform629->addChild(Shape630);

HAnimSegment627->addChild(Transform629);

HAnimSite* HAnimSite631 = new HAnimSite();
HAnimSite631->setName("SEGMENT_FOR_t1_tip");
HAnimSite631->setDEF("hanim_SEGMENT_FOR_t1_tip");
Transform* Transform632 = new Transform();
Transform632->setTranslation(new float[3]{-0.0002,-0.1156,1.2109});
Shape* Shape633 = new Shape();
Shape633->setUSE("SiteShape");
Transform632->addChild(Shape633);

HAnimSite631->addChild(Transform632);

HAnimSegment627->addChild(HAnimSite631);

HAnimJoint626->addChild(HAnimSegment627);

HAnimJoint* HAnimJoint634 = new HAnimJoint();
HAnimJoint634->setName("c7");
HAnimJoint634->setDEF("hanim_c7");
HAnimJoint634->setCenter(new float[3]{-0.0002,-0.1169,1.2368});
HAnimSegment* HAnimSegment635 = new HAnimSegment();
HAnimSegment635->setName("SEGMENT_FOR_c7");
HAnimSegment635->setDEF("hanim_SEGMENT_FOR_c7");
TouchSensor* TouchSensor636 = new TouchSensor();
TouchSensor636->setDescription("joint c7 segment SEGMENT_FOR_c7");
HAnimSegment635->addChild(TouchSensor636);

Transform* Transform637 = new Transform();
Transform637->setTranslation(new float[3]{-0.0002,-0.1169,1.2368});
Shape* Shape638 = new Shape();
Shape638->setUSE("JointShape");
Transform637->addChild(Shape638);

HAnimSegment635->addChild(Transform637);

HAnimSite* HAnimSite639 = new HAnimSite();
HAnimSite639->setName("SEGMENT_FOR_c7_tip");
HAnimSite639->setDEF("hanim_SEGMENT_FOR_c7_tip");
Transform* Transform640 = new Transform();
Transform640->setTranslation(new float[3]{-0.0002,-0.1169,1.2368});
Shape* Shape641 = new Shape();
Shape641->setUSE("SiteShape");
Transform640->addChild(Shape641);

HAnimSite639->addChild(Transform640);

HAnimSegment635->addChild(HAnimSite639);

HAnimJoint634->addChild(HAnimSegment635);

HAnimJoint* HAnimJoint642 = new HAnimJoint();
HAnimJoint642->setName("c6");
HAnimJoint642->setDEF("hanim_c6");
HAnimJoint642->setCenter(new float[3]{-0.0002,-0.1169,1.249});
HAnimSegment* HAnimSegment643 = new HAnimSegment();
HAnimSegment643->setName("SEGMENT_FOR_c6");
HAnimSegment643->setDEF("hanim_SEGMENT_FOR_c6");
TouchSensor* TouchSensor644 = new TouchSensor();
TouchSensor644->setDescription("joint c6 segment SEGMENT_FOR_c6");
HAnimSegment643->addChild(TouchSensor644);

Transform* Transform645 = new Transform();
Transform645->setTranslation(new float[3]{-0.0002,-0.1169,1.249});
Shape* Shape646 = new Shape();
Shape646->setUSE("JointShape");
Transform645->addChild(Shape646);

HAnimSegment643->addChild(Transform645);

HAnimSite* HAnimSite647 = new HAnimSite();
HAnimSite647->setName("SEGMENT_FOR_c6_tip");
HAnimSite647->setDEF("hanim_SEGMENT_FOR_c6_tip");
Transform* Transform648 = new Transform();
Transform648->setTranslation(new float[3]{-0.0002,-0.1169,1.249});
Shape* Shape649 = new Shape();
Shape649->setUSE("SiteShape");
Transform648->addChild(Shape649);

HAnimSite647->addChild(Transform648);

HAnimSegment643->addChild(HAnimSite647);

HAnimJoint642->addChild(HAnimSegment643);

HAnimJoint* HAnimJoint650 = new HAnimJoint();
HAnimJoint650->setName("c5");
HAnimJoint650->setDEF("hanim_c5");
HAnimJoint650->setCenter(new float[3]{-0.0002,-0.1169,1.2613});
HAnimSegment* HAnimSegment651 = new HAnimSegment();
HAnimSegment651->setName("SEGMENT_FOR_c5");
HAnimSegment651->setDEF("hanim_SEGMENT_FOR_c5");
TouchSensor* TouchSensor652 = new TouchSensor();
TouchSensor652->setDescription("joint c5 segment SEGMENT_FOR_c5");
HAnimSegment651->addChild(TouchSensor652);

Transform* Transform653 = new Transform();
Transform653->setTranslation(new float[3]{-0.0002,-0.1169,1.2613});
Shape* Shape654 = new Shape();
Shape654->setUSE("JointShape");
Transform653->addChild(Shape654);

HAnimSegment651->addChild(Transform653);

HAnimSite* HAnimSite655 = new HAnimSite();
HAnimSite655->setName("SEGMENT_FOR_c5_tip");
HAnimSite655->setDEF("hanim_SEGMENT_FOR_c5_tip");
Transform* Transform656 = new Transform();
Transform656->setTranslation(new float[3]{-0.0002,-0.1169,1.2613});
Shape* Shape657 = new Shape();
Shape657->setUSE("SiteShape");
Transform656->addChild(Shape657);

HAnimSite655->addChild(Transform656);

HAnimSegment651->addChild(HAnimSite655);

HAnimJoint650->addChild(HAnimSegment651);

HAnimJoint* HAnimJoint658 = new HAnimJoint();
HAnimJoint658->setName("c4");
HAnimJoint658->setDEF("hanim_c4");
HAnimJoint658->setCenter(new float[3]{-0.0002,-0.1169,1.2737});
HAnimSegment* HAnimSegment659 = new HAnimSegment();
HAnimSegment659->setName("SEGMENT_FOR_c4");
HAnimSegment659->setDEF("hanim_SEGMENT_FOR_c4");
TouchSensor* TouchSensor660 = new TouchSensor();
TouchSensor660->setDescription("joint c4 segment SEGMENT_FOR_c4");
HAnimSegment659->addChild(TouchSensor660);

Transform* Transform661 = new Transform();
Transform661->setTranslation(new float[3]{-0.0002,-0.1169,1.2737});
Shape* Shape662 = new Shape();
Shape662->setUSE("JointShape");
Transform661->addChild(Shape662);

HAnimSegment659->addChild(Transform661);

HAnimSite* HAnimSite663 = new HAnimSite();
HAnimSite663->setName("SEGMENT_FOR_c4_tip");
HAnimSite663->setDEF("hanim_SEGMENT_FOR_c4_tip");
Transform* Transform664 = new Transform();
Transform664->setTranslation(new float[3]{-0.0002,-0.1169,1.2737});
Shape* Shape665 = new Shape();
Shape665->setUSE("SiteShape");
Transform664->addChild(Shape665);

HAnimSite663->addChild(Transform664);

HAnimSegment659->addChild(HAnimSite663);

HAnimJoint658->addChild(HAnimSegment659);

HAnimJoint* HAnimJoint666 = new HAnimJoint();
HAnimJoint666->setName("c3");
HAnimJoint666->setDEF("hanim_c3");
HAnimJoint666->setCenter(new float[3]{-0.0002,-0.1169,1.2865});
HAnimSegment* HAnimSegment667 = new HAnimSegment();
HAnimSegment667->setName("SEGMENT_FOR_c3");
HAnimSegment667->setDEF("hanim_SEGMENT_FOR_c3");
TouchSensor* TouchSensor668 = new TouchSensor();
TouchSensor668->setDescription("joint c3 segment SEGMENT_FOR_c3");
HAnimSegment667->addChild(TouchSensor668);

Transform* Transform669 = new Transform();
Transform669->setTranslation(new float[3]{-0.0002,-0.1169,1.2865});
Shape* Shape670 = new Shape();
Shape670->setUSE("JointShape");
Transform669->addChild(Shape670);

HAnimSegment667->addChild(Transform669);

HAnimSite* HAnimSite671 = new HAnimSite();
HAnimSite671->setName("SEGMENT_FOR_c3_tip");
HAnimSite671->setDEF("hanim_SEGMENT_FOR_c3_tip");
Transform* Transform672 = new Transform();
Transform672->setTranslation(new float[3]{-0.0002,-0.1169,1.2865});
Shape* Shape673 = new Shape();
Shape673->setUSE("SiteShape");
Transform672->addChild(Shape673);

HAnimSite671->addChild(Transform672);

HAnimSegment667->addChild(HAnimSite671);

HAnimJoint666->addChild(HAnimSegment667);

HAnimJoint* HAnimJoint674 = new HAnimJoint();
HAnimJoint674->setName("c2");
HAnimJoint674->setDEF("hanim_c2");
HAnimJoint674->setCenter(new float[3]{-0.0002,-0.1169,1.2982});
HAnimSegment* HAnimSegment675 = new HAnimSegment();
HAnimSegment675->setName("SEGMENT_FOR_c2");
HAnimSegment675->setDEF("hanim_SEGMENT_FOR_c2");
TouchSensor* TouchSensor676 = new TouchSensor();
TouchSensor676->setDescription("joint c2 segment SEGMENT_FOR_c2");
HAnimSegment675->addChild(TouchSensor676);

Transform* Transform677 = new Transform();
Transform677->setTranslation(new float[3]{-0.0002,-0.1169,1.2982});
Shape* Shape678 = new Shape();
Shape678->setUSE("JointShape");
Transform677->addChild(Shape678);

HAnimSegment675->addChild(Transform677);

HAnimSite* HAnimSite679 = new HAnimSite();
HAnimSite679->setName("SEGMENT_FOR_c2_tip");
HAnimSite679->setDEF("hanim_SEGMENT_FOR_c2_tip");
Transform* Transform680 = new Transform();
Transform680->setTranslation(new float[3]{-0.0002,-0.1169,1.2982});
Shape* Shape681 = new Shape();
Shape681->setUSE("SiteShape");
Transform680->addChild(Shape681);

HAnimSite679->addChild(Transform680);

HAnimSegment675->addChild(HAnimSite679);

HAnimJoint674->addChild(HAnimSegment675);

HAnimJoint* HAnimJoint682 = new HAnimJoint();
HAnimJoint682->setName("c1");
HAnimJoint682->setDEF("hanim_c1");
HAnimJoint682->setCenter(new float[3]{-0.0002,-0.1169,1.3099});
HAnimSegment* HAnimSegment683 = new HAnimSegment();
HAnimSegment683->setName("SEGMENT_FOR_c1");
HAnimSegment683->setDEF("hanim_SEGMENT_FOR_c1");
TouchSensor* TouchSensor684 = new TouchSensor();
TouchSensor684->setDescription("joint c1 segment SEGMENT_FOR_c1");
HAnimSegment683->addChild(TouchSensor684);

Transform* Transform685 = new Transform();
Transform685->setTranslation(new float[3]{-0.0002,-0.1169,1.3099});
Shape* Shape686 = new Shape();
Shape686->setUSE("JointShape");
Transform685->addChild(Shape686);

HAnimSegment683->addChild(Transform685);

HAnimSite* HAnimSite687 = new HAnimSite();
HAnimSite687->setName("SEGMENT_FOR_c1_tip");
HAnimSite687->setDEF("hanim_SEGMENT_FOR_c1_tip");
Transform* Transform688 = new Transform();
Transform688->setTranslation(new float[3]{-0.0002,-0.1169,1.3099});
Shape* Shape689 = new Shape();
Shape689->setUSE("SiteShape");
Transform688->addChild(Shape689);

HAnimSite687->addChild(Transform688);

HAnimSegment683->addChild(HAnimSite687);

HAnimJoint682->addChild(HAnimSegment683);

HAnimJoint* HAnimJoint690 = new HAnimJoint();
HAnimJoint690->setName("skull");
HAnimJoint690->setDEF("hanim_skull");
HAnimJoint690->setCenter(new float[3]{-0.0002,-0.1173,1.3041});
HAnimSegment* HAnimSegment691 = new HAnimSegment();
HAnimSegment691->setName("SEGMENT_FOR_skull");
HAnimSegment691->setDEF("hanim_SEGMENT_FOR_skull");
TouchSensor* TouchSensor692 = new TouchSensor();
TouchSensor692->setDescription("joint skull segment SEGMENT_FOR_skull");
HAnimSegment691->addChild(TouchSensor692);

Transform* Transform693 = new Transform();
Transform693->setTranslation(new float[3]{-0.0002,-0.1173,1.3041});
Shape* Shape694 = new Shape();
Shape694->setUSE("JointShape");
Transform693->addChild(Shape694);

HAnimSegment691->addChild(Transform693);

HAnimSite* HAnimSite695 = new HAnimSite();
HAnimSite695->setName("SEGMENT_FOR_skull_tip");
HAnimSite695->setDEF("hanim_SEGMENT_FOR_skull_tip");
Transform* Transform696 = new Transform();
Transform696->setTranslation(new float[3]{-0.0002,-0.1173,1.3041});
Shape* Shape697 = new Shape();
Shape697->setUSE("SiteShape");
Transform696->addChild(Shape697);

HAnimSite695->addChild(Transform696);

HAnimSegment691->addChild(HAnimSite695);

HAnimJoint690->addChild(HAnimSegment691);

HAnimJoint* HAnimJoint698 = new HAnimJoint();
HAnimJoint698->setName("l_eyelid");
HAnimJoint698->setDEF("hanim_l_eyelid");
HAnimJoint698->setCenter(new float[3]{0.0503,-0.0689,1.4157});
HAnimSegment* HAnimSegment699 = new HAnimSegment();
HAnimSegment699->setName("SEGMENT_FOR_l_eyelid");
HAnimSegment699->setDEF("hanim_SEGMENT_FOR_l_eyelid");
TouchSensor* TouchSensor700 = new TouchSensor();
TouchSensor700->setDescription("joint l_eyelid segment SEGMENT_FOR_l_eyelid");
HAnimSegment699->addChild(TouchSensor700);

Transform* Transform701 = new Transform();
Transform701->setTranslation(new float[3]{0.0503,-0.0689,1.4157});
Shape* Shape702 = new Shape();
Shape702->setUSE("JointShape");
Transform701->addChild(Shape702);

HAnimSegment699->addChild(Transform701);

HAnimSite* HAnimSite703 = new HAnimSite();
HAnimSite703->setName("SEGMENT_FOR_l_eyelid_tip");
HAnimSite703->setDEF("hanim_SEGMENT_FOR_l_eyelid_tip");
Transform* Transform704 = new Transform();
Transform704->setTranslation(new float[3]{0.0503,-0.0689,1.4157});
Shape* Shape705 = new Shape();
Shape705->setUSE("SiteShape");
Transform704->addChild(Shape705);

HAnimSite703->addChild(Transform704);

HAnimSegment699->addChild(HAnimSite703);

HAnimJoint698->addChild(HAnimSegment699);

HAnimJoint690->addChild(HAnimJoint698);

HAnimJoint* HAnimJoint706 = new HAnimJoint();
HAnimJoint706->setName("r_eyelid");
HAnimJoint706->setDEF("hanim_r_eyelid");
HAnimJoint706->setCenter(new float[3]{-0.0507,-0.0689,1.4157});
HAnimSegment* HAnimSegment707 = new HAnimSegment();
HAnimSegment707->setName("SEGMENT_FOR_r_eyelid");
HAnimSegment707->setDEF("hanim_SEGMENT_FOR_r_eyelid");
TouchSensor* TouchSensor708 = new TouchSensor();
TouchSensor708->setDescription("joint r_eyelid segment SEGMENT_FOR_r_eyelid");
HAnimSegment707->addChild(TouchSensor708);

Transform* Transform709 = new Transform();
Transform709->setTranslation(new float[3]{-0.0507,-0.0689,1.4157});
Shape* Shape710 = new Shape();
Shape710->setUSE("JointShape");
Transform709->addChild(Shape710);

HAnimSegment707->addChild(Transform709);

HAnimSite* HAnimSite711 = new HAnimSite();
HAnimSite711->setName("SEGMENT_FOR_r_eyelid_tip");
HAnimSite711->setDEF("hanim_SEGMENT_FOR_r_eyelid_tip");
Transform* Transform712 = new Transform();
Transform712->setTranslation(new float[3]{-0.0507,-0.0689,1.4157});
Shape* Shape713 = new Shape();
Shape713->setUSE("SiteShape");
Transform712->addChild(Shape713);

HAnimSite711->addChild(Transform712);

HAnimSegment707->addChild(HAnimSite711);

HAnimJoint706->addChild(HAnimSegment707);

HAnimJoint690->addChild(HAnimJoint706);

HAnimJoint* HAnimJoint714 = new HAnimJoint();
HAnimJoint714->setName("l_eyeball");
HAnimJoint714->setDEF("hanim_l_eyeball");
HAnimJoint714->setCenter(new float[3]{0.0479,-0.0188,1.3963});
HAnimSegment* HAnimSegment715 = new HAnimSegment();
HAnimSegment715->setName("SEGMENT_FOR_l_eyeball");
HAnimSegment715->setDEF("hanim_SEGMENT_FOR_l_eyeball");
TouchSensor* TouchSensor716 = new TouchSensor();
TouchSensor716->setDescription("joint l_eyeball segment SEGMENT_FOR_l_eyeball");
HAnimSegment715->addChild(TouchSensor716);

Transform* Transform717 = new Transform();
Transform717->setTranslation(new float[3]{0.0479,-0.0188,1.3963});
Shape* Shape718 = new Shape();
Shape718->setUSE("JointShape");
Transform717->addChild(Shape718);

HAnimSegment715->addChild(Transform717);

HAnimSite* HAnimSite719 = new HAnimSite();
HAnimSite719->setName("SEGMENT_FOR_l_eyeball_tip");
HAnimSite719->setDEF("hanim_SEGMENT_FOR_l_eyeball_tip");
Transform* Transform720 = new Transform();
Transform720->setTranslation(new float[3]{0.0479,-0.0188,1.3963});
Shape* Shape721 = new Shape();
Shape721->setUSE("SiteShape");
Transform720->addChild(Shape721);

HAnimSite719->addChild(Transform720);

HAnimSegment715->addChild(HAnimSite719);

HAnimJoint714->addChild(HAnimSegment715);

HAnimJoint690->addChild(HAnimJoint714);

HAnimJoint* HAnimJoint722 = new HAnimJoint();
HAnimJoint722->setName("r_eyeball");
HAnimJoint722->setDEF("hanim_r_eyeball");
HAnimJoint722->setCenter(new float[3]{-0.0483,-0.0188,1.3963});
HAnimSegment* HAnimSegment723 = new HAnimSegment();
HAnimSegment723->setName("SEGMENT_FOR_r_eyeball");
HAnimSegment723->setDEF("hanim_SEGMENT_FOR_r_eyeball");
TouchSensor* TouchSensor724 = new TouchSensor();
TouchSensor724->setDescription("joint r_eyeball segment SEGMENT_FOR_r_eyeball");
HAnimSegment723->addChild(TouchSensor724);

Transform* Transform725 = new Transform();
Transform725->setTranslation(new float[3]{-0.0483,-0.0188,1.3963});
Shape* Shape726 = new Shape();
Shape726->setUSE("JointShape");
Transform725->addChild(Shape726);

HAnimSegment723->addChild(Transform725);

HAnimSite* HAnimSite727 = new HAnimSite();
HAnimSite727->setName("SEGMENT_FOR_r_eyeball_tip");
HAnimSite727->setDEF("hanim_SEGMENT_FOR_r_eyeball_tip");
Transform* Transform728 = new Transform();
Transform728->setTranslation(new float[3]{-0.0483,-0.0188,1.3963});
Shape* Shape729 = new Shape();
Shape729->setUSE("SiteShape");
Transform728->addChild(Shape729);

HAnimSite727->addChild(Transform728);

HAnimSegment723->addChild(HAnimSite727);

HAnimJoint722->addChild(HAnimSegment723);

HAnimJoint690->addChild(HAnimJoint722);

HAnimJoint* HAnimJoint730 = new HAnimJoint();
HAnimJoint730->setName("l_eyebrow");
HAnimJoint730->setDEF("hanim_l_eyebrow");
HAnimJoint730->setCenter(new float[3]{0.0216,0.0051,1.4053});
HAnimSegment* HAnimSegment731 = new HAnimSegment();
HAnimSegment731->setName("SEGMENT_FOR_l_eyebrow");
HAnimSegment731->setDEF("hanim_SEGMENT_FOR_l_eyebrow");
TouchSensor* TouchSensor732 = new TouchSensor();
TouchSensor732->setDescription("joint l_eyebrow segment SEGMENT_FOR_l_eyebrow");
HAnimSegment731->addChild(TouchSensor732);

Transform* Transform733 = new Transform();
Transform733->setTranslation(new float[3]{0.0216,0.0051,1.4053});
Shape* Shape734 = new Shape();
Shape734->setUSE("JointShape");
Transform733->addChild(Shape734);

HAnimSegment731->addChild(Transform733);

HAnimSite* HAnimSite735 = new HAnimSite();
HAnimSite735->setName("SEGMENT_FOR_l_eyebrow_tip");
HAnimSite735->setDEF("hanim_SEGMENT_FOR_l_eyebrow_tip");
Transform* Transform736 = new Transform();
Transform736->setTranslation(new float[3]{0.0216,0.0051,1.4053});
Shape* Shape737 = new Shape();
Shape737->setUSE("SiteShape");
Transform736->addChild(Shape737);

HAnimSite735->addChild(Transform736);

HAnimSegment731->addChild(HAnimSite735);

HAnimJoint730->addChild(HAnimSegment731);

HAnimJoint690->addChild(HAnimJoint730);

HAnimJoint* HAnimJoint738 = new HAnimJoint();
HAnimJoint738->setName("r_eyebrow");
HAnimJoint738->setDEF("hanim_r_eyebrow");
HAnimJoint738->setCenter(new float[3]{-0.0219,0.0051,1.4053});
HAnimSegment* HAnimSegment739 = new HAnimSegment();
HAnimSegment739->setName("SEGMENT_FOR_r_eyebrow");
HAnimSegment739->setDEF("hanim_SEGMENT_FOR_r_eyebrow");
TouchSensor* TouchSensor740 = new TouchSensor();
TouchSensor740->setDescription("joint r_eyebrow segment SEGMENT_FOR_r_eyebrow");
HAnimSegment739->addChild(TouchSensor740);

Transform* Transform741 = new Transform();
Transform741->setTranslation(new float[3]{-0.0219,0.0051,1.4053});
Shape* Shape742 = new Shape();
Shape742->setUSE("JointShape");
Transform741->addChild(Shape742);

HAnimSegment739->addChild(Transform741);

HAnimSite* HAnimSite743 = new HAnimSite();
HAnimSite743->setName("SEGMENT_FOR_r_eyebrow_tip");
HAnimSite743->setDEF("hanim_SEGMENT_FOR_r_eyebrow_tip");
Transform* Transform744 = new Transform();
Transform744->setTranslation(new float[3]{-0.0219,0.0051,1.4053});
Shape* Shape745 = new Shape();
Shape745->setUSE("SiteShape");
Transform744->addChild(Shape745);

HAnimSite743->addChild(Transform744);

HAnimSegment739->addChild(HAnimSite743);

HAnimJoint738->addChild(HAnimSegment739);

HAnimJoint690->addChild(HAnimJoint738);

HAnimJoint* HAnimJoint746 = new HAnimJoint();
HAnimJoint746->setName("jaw");
HAnimJoint746->setDEF("hanim_jaw");
HAnimJoint746->setCenter(new float[3]{-0.0002,-0.0865,1.3043});
HAnimSegment* HAnimSegment747 = new HAnimSegment();
HAnimSegment747->setName("SEGMENT_FOR_jaw");
HAnimSegment747->setDEF("hanim_SEGMENT_FOR_jaw");
TouchSensor* TouchSensor748 = new TouchSensor();
TouchSensor748->setDescription("joint jaw segment SEGMENT_FOR_jaw");
HAnimSegment747->addChild(TouchSensor748);

Transform* Transform749 = new Transform();
Transform749->setTranslation(new float[3]{-0.0002,-0.0865,1.3043});
Shape* Shape750 = new Shape();
Shape750->setUSE("JointShape");
Transform749->addChild(Shape750);

HAnimSegment747->addChild(Transform749);

HAnimSite* HAnimSite751 = new HAnimSite();
HAnimSite751->setName("SEGMENT_FOR_jaw_tip");
HAnimSite751->setDEF("hanim_SEGMENT_FOR_jaw_tip");
Transform* Transform752 = new Transform();
Transform752->setTranslation(new float[3]{-0.0002,-0.0865,1.3043});
Shape* Shape753 = new Shape();
Shape753->setUSE("SiteShape");
Transform752->addChild(Shape753);

HAnimSite751->addChild(Transform752);

HAnimSegment747->addChild(HAnimSite751);

HAnimJoint746->addChild(HAnimSegment747);

HAnimJoint690->addChild(HAnimJoint746);

HAnimJoint682->addChild(HAnimJoint690);

HAnimJoint674->addChild(HAnimJoint682);

HAnimJoint666->addChild(HAnimJoint674);

HAnimJoint658->addChild(HAnimJoint666);

HAnimJoint650->addChild(HAnimJoint658);

HAnimJoint642->addChild(HAnimJoint650);

HAnimJoint634->addChild(HAnimJoint642);

HAnimJoint626->addChild(HAnimJoint634);

HAnimJoint* HAnimJoint754 = new HAnimJoint();
HAnimJoint754->setName("l_clavicle");
HAnimJoint754->setDEF("hanim_l_clavicle");
HAnimJoint754->setCenter(new float[3]{0.1228,-0.1148,1.1833});
HAnimSegment* HAnimSegment755 = new HAnimSegment();
HAnimSegment755->setName("SEGMENT_FOR_l_clavicle");
HAnimSegment755->setDEF("hanim_SEGMENT_FOR_l_clavicle");
TouchSensor* TouchSensor756 = new TouchSensor();
TouchSensor756->setDescription("joint l_clavicle segment SEGMENT_FOR_l_clavicle");
HAnimSegment755->addChild(TouchSensor756);

Transform* Transform757 = new Transform();
Transform757->setTranslation(new float[3]{0.1228,-0.1148,1.1833});
Shape* Shape758 = new Shape();
Shape758->setUSE("JointShape");
Transform757->addChild(Shape758);

HAnimSegment755->addChild(Transform757);

HAnimSite* HAnimSite759 = new HAnimSite();
HAnimSite759->setName("SEGMENT_FOR_l_clavicle_tip");
HAnimSite759->setDEF("hanim_SEGMENT_FOR_l_clavicle_tip");
Transform* Transform760 = new Transform();
Transform760->setTranslation(new float[3]{0.1228,-0.1148,1.1833});
Shape* Shape761 = new Shape();
Shape761->setUSE("SiteShape");
Transform760->addChild(Shape761);

HAnimSite759->addChild(Transform760);

HAnimSegment755->addChild(HAnimSite759);

HAnimJoint754->addChild(HAnimSegment755);

HAnimJoint* HAnimJoint762 = new HAnimJoint();
HAnimJoint762->setName("l_scapula");
HAnimJoint762->setDEF("hanim_l_scapula");
HAnimJoint762->setCenter(new float[3]{0.0383,-0.1157,1.2001});
HAnimSegment* HAnimSegment763 = new HAnimSegment();
HAnimSegment763->setName("SEGMENT_FOR_l_scapula");
HAnimSegment763->setDEF("hanim_SEGMENT_FOR_l_scapula");
TouchSensor* TouchSensor764 = new TouchSensor();
TouchSensor764->setDescription("joint l_scapula segment SEGMENT_FOR_l_scapula");
HAnimSegment763->addChild(TouchSensor764);

Transform* Transform765 = new Transform();
Transform765->setTranslation(new float[3]{0.0383,-0.1157,1.2001});
Shape* Shape766 = new Shape();
Shape766->setUSE("JointShape");
Transform765->addChild(Shape766);

HAnimSegment763->addChild(Transform765);

HAnimSite* HAnimSite767 = new HAnimSite();
HAnimSite767->setName("SEGMENT_FOR_l_scapula_tip");
HAnimSite767->setDEF("hanim_SEGMENT_FOR_l_scapula_tip");
Transform* Transform768 = new Transform();
Transform768->setTranslation(new float[3]{0.0383,-0.1157,1.2001});
Shape* Shape769 = new Shape();
Shape769->setUSE("SiteShape");
Transform768->addChild(Shape769);

HAnimSite767->addChild(Transform768);

HAnimSegment763->addChild(HAnimSite767);

HAnimJoint762->addChild(HAnimSegment763);

HAnimJoint* HAnimJoint770 = new HAnimJoint();
HAnimJoint770->setName("l_upperarm");
HAnimJoint770->setDEF("hanim_l_upperarm");
HAnimJoint770->setCenter(new float[3]{0.1649,-0.1051,1.17});
HAnimSegment* HAnimSegment771 = new HAnimSegment();
HAnimSegment771->setName("SEGMENT_FOR_l_upperarm");
HAnimSegment771->setDEF("hanim_SEGMENT_FOR_l_upperarm");
TouchSensor* TouchSensor772 = new TouchSensor();
TouchSensor772->setDescription("joint l_upperarm segment SEGMENT_FOR_l_upperarm");
HAnimSegment771->addChild(TouchSensor772);

Transform* Transform773 = new Transform();
Transform773->setTranslation(new float[3]{0.1649,-0.1051,1.17});
Shape* Shape774 = new Shape();
Shape774->setUSE("JointShape");
Transform773->addChild(Shape774);

HAnimSegment771->addChild(Transform773);

HAnimSite* HAnimSite775 = new HAnimSite();
HAnimSite775->setName("SEGMENT_FOR_l_upperarm_tip");
HAnimSite775->setDEF("hanim_SEGMENT_FOR_l_upperarm_tip");
Transform* Transform776 = new Transform();
Transform776->setTranslation(new float[3]{0.1649,-0.1051,1.17});
Shape* Shape777 = new Shape();
Shape777->setUSE("SiteShape");
Transform776->addChild(Shape777);

HAnimSite775->addChild(Transform776);

HAnimSegment771->addChild(HAnimSite775);

HAnimJoint770->addChild(HAnimSegment771);

HAnimJoint* HAnimJoint778 = new HAnimJoint();
HAnimJoint778->setName("l_forearm");
HAnimJoint778->setDEF("hanim_l_forearm");
HAnimJoint778->setCenter(new float[3]{0.1819,-0.1075,0.9202});
HAnimSegment* HAnimSegment779 = new HAnimSegment();
HAnimSegment779->setName("SEGMENT_FOR_l_forearm");
HAnimSegment779->setDEF("hanim_SEGMENT_FOR_l_forearm");
TouchSensor* TouchSensor780 = new TouchSensor();
TouchSensor780->setDescription("joint l_forearm segment SEGMENT_FOR_l_forearm");
HAnimSegment779->addChild(TouchSensor780);

Transform* Transform781 = new Transform();
Transform781->setTranslation(new float[3]{0.1819,-0.1075,0.9202});
Shape* Shape782 = new Shape();
Shape782->setUSE("JointShape");
Transform781->addChild(Shape782);

HAnimSegment779->addChild(Transform781);

HAnimSite* HAnimSite783 = new HAnimSite();
HAnimSite783->setName("SEGMENT_FOR_l_forearm_tip");
HAnimSite783->setDEF("hanim_SEGMENT_FOR_l_forearm_tip");
Transform* Transform784 = new Transform();
Transform784->setTranslation(new float[3]{0.1819,-0.1075,0.9202});
Shape* Shape785 = new Shape();
Shape785->setUSE("SiteShape");
Transform784->addChild(Shape785);

HAnimSite783->addChild(Transform784);

HAnimSegment779->addChild(HAnimSite783);

HAnimJoint778->addChild(HAnimSegment779);

HAnimJoint* HAnimJoint786 = new HAnimJoint();
HAnimJoint786->setName("l_carpal");
HAnimJoint786->setDEF("hanim_l_carpal");
HAnimJoint786->setCenter(new float[3]{0.1818,-0.1069,0.7157});
HAnimSegment* HAnimSegment787 = new HAnimSegment();
HAnimSegment787->setName("SEGMENT_FOR_l_carpal");
HAnimSegment787->setDEF("hanim_SEGMENT_FOR_l_carpal");
TouchSensor* TouchSensor788 = new TouchSensor();
TouchSensor788->setDescription("joint l_carpal segment SEGMENT_FOR_l_carpal");
HAnimSegment787->addChild(TouchSensor788);

Transform* Transform789 = new Transform();
Transform789->setTranslation(new float[3]{0.1818,-0.1069,0.7157});
Shape* Shape790 = new Shape();
Shape790->setUSE("JointShape");
Transform789->addChild(Shape790);

HAnimSegment787->addChild(Transform789);

HAnimSite* HAnimSite791 = new HAnimSite();
HAnimSite791->setName("SEGMENT_FOR_l_carpal_tip");
HAnimSite791->setDEF("hanim_SEGMENT_FOR_l_carpal_tip");
Transform* Transform792 = new Transform();
Transform792->setTranslation(new float[3]{0.1818,-0.1069,0.7157});
Shape* Shape793 = new Shape();
Shape793->setUSE("SiteShape");
Transform792->addChild(Shape793);

HAnimSite791->addChild(Transform792);

HAnimSegment787->addChild(HAnimSite791);

HAnimJoint786->addChild(HAnimSegment787);

HAnimJoint* HAnimJoint794 = new HAnimJoint();
HAnimJoint794->setName("l_trapezium");
HAnimJoint794->setDEF("hanim_l_trapezium");
HAnimJoint794->setCenter(new float[3]{0.1811,-0.0826,0.6975});
HAnimSegment* HAnimSegment795 = new HAnimSegment();
HAnimSegment795->setName("SEGMENT_FOR_l_trapezium");
HAnimSegment795->setDEF("hanim_SEGMENT_FOR_l_trapezium");
TouchSensor* TouchSensor796 = new TouchSensor();
TouchSensor796->setDescription("joint l_trapezium segment SEGMENT_FOR_l_trapezium");
HAnimSegment795->addChild(TouchSensor796);

Transform* Transform797 = new Transform();
Transform797->setTranslation(new float[3]{0.1811,-0.0826,0.6975});
Shape* Shape798 = new Shape();
Shape798->setUSE("JointShape");
Transform797->addChild(Shape798);

HAnimSegment795->addChild(Transform797);

HAnimSite* HAnimSite799 = new HAnimSite();
HAnimSite799->setName("SEGMENT_FOR_l_trapezium_tip");
HAnimSite799->setDEF("hanim_SEGMENT_FOR_l_trapezium_tip");
Transform* Transform800 = new Transform();
Transform800->setTranslation(new float[3]{0.1811,-0.0826,0.6975});
Shape* Shape801 = new Shape();
Shape801->setUSE("SiteShape");
Transform800->addChild(Shape801);

HAnimSite799->addChild(Transform800);

HAnimSegment795->addChild(HAnimSite799);

HAnimJoint794->addChild(HAnimSegment795);

HAnimJoint* HAnimJoint802 = new HAnimJoint();
HAnimJoint802->setName("l_metacarpal_1");
HAnimJoint802->setDEF("hanim_l_metacarpal_1");
HAnimJoint802->setCenter(new float[3]{0.1803,-0.0759,0.684});
HAnimSegment* HAnimSegment803 = new HAnimSegment();
HAnimSegment803->setName("SEGMENT_FOR_l_metacarpal_1");
HAnimSegment803->setDEF("hanim_SEGMENT_FOR_l_metacarpal_1");
TouchSensor* TouchSensor804 = new TouchSensor();
TouchSensor804->setDescription("joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1");
HAnimSegment803->addChild(TouchSensor804);

Transform* Transform805 = new Transform();
Transform805->setTranslation(new float[3]{0.1803,-0.0759,0.684});
Shape* Shape806 = new Shape();
Shape806->setUSE("JointShape");
Transform805->addChild(Shape806);

HAnimSegment803->addChild(Transform805);

HAnimSite* HAnimSite807 = new HAnimSite();
HAnimSite807->setName("SEGMENT_FOR_l_metacarpal_1_tip");
HAnimSite807->setDEF("hanim_SEGMENT_FOR_l_metacarpal_1_tip");
Transform* Transform808 = new Transform();
Transform808->setTranslation(new float[3]{0.1803,-0.0759,0.684});
Shape* Shape809 = new Shape();
Shape809->setUSE("SiteShape");
Transform808->addChild(Shape809);

HAnimSite807->addChild(Transform808);

HAnimSegment803->addChild(HAnimSite807);

HAnimJoint802->addChild(HAnimSegment803);

HAnimJoint* HAnimJoint810 = new HAnimJoint();
HAnimJoint810->setName("l_carpal_proximal_phalanx_1");
HAnimJoint810->setDEF("hanim_l_carpal_proximal_phalanx_1");
HAnimJoint810->setCenter(new float[3]{0.1809,-0.0661,0.6642});
HAnimSegment* HAnimSegment811 = new HAnimSegment();
HAnimSegment811->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_1");
HAnimSegment811->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1");
TouchSensor* TouchSensor812 = new TouchSensor();
TouchSensor812->setDescription("joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1");
HAnimSegment811->addChild(TouchSensor812);

Transform* Transform813 = new Transform();
Transform813->setTranslation(new float[3]{0.1809,-0.0661,0.6642});
Shape* Shape814 = new Shape();
Shape814->setUSE("JointShape");
Transform813->addChild(Shape814);

HAnimSegment811->addChild(Transform813);

HAnimSite* HAnimSite815 = new HAnimSite();
HAnimSite815->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip");
HAnimSite815->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip");
Transform* Transform816 = new Transform();
Transform816->setTranslation(new float[3]{0.1809,-0.0661,0.6642});
Shape* Shape817 = new Shape();
Shape817->setUSE("SiteShape");
Transform816->addChild(Shape817);

HAnimSite815->addChild(Transform816);

HAnimSegment811->addChild(HAnimSite815);

HAnimJoint810->addChild(HAnimSegment811);

HAnimJoint* HAnimJoint818 = new HAnimJoint();
HAnimJoint818->setName("l_carpal_distal_phalanx_1");
HAnimJoint818->setDEF("hanim_l_carpal_distal_phalanx_1");
HAnimJoint818->setCenter(new float[3]{0.1825,-0.0522,0.6455});
HAnimSegment* HAnimSegment819 = new HAnimSegment();
HAnimSegment819->setName("SEGMENT_FOR_l_carpal_distal_phalanx_1");
HAnimSegment819->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1");
TouchSensor* TouchSensor820 = new TouchSensor();
TouchSensor820->setDescription("joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1");
HAnimSegment819->addChild(TouchSensor820);

Transform* Transform821 = new Transform();
Transform821->setTranslation(new float[3]{0.1825,-0.0522,0.6455});
Shape* Shape822 = new Shape();
Shape822->setUSE("JointShape");
Transform821->addChild(Shape822);

HAnimSegment819->addChild(Transform821);

HAnimSite* HAnimSite823 = new HAnimSite();
HAnimSite823->setName("SEGMENT_FOR_l_carpal_distal_phalanx_1_tip");
HAnimSite823->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip");
Transform* Transform824 = new Transform();
Transform824->setTranslation(new float[3]{0.1825,-0.0522,0.6455});
Shape* Shape825 = new Shape();
Shape825->setUSE("SiteShape");
Transform824->addChild(Shape825);

HAnimSite823->addChild(Transform824);

HAnimSegment819->addChild(HAnimSite823);

HAnimJoint818->addChild(HAnimSegment819);

HAnimJoint810->addChild(HAnimJoint818);

HAnimJoint802->addChild(HAnimJoint810);

HAnimJoint794->addChild(HAnimJoint802);

HAnimJoint786->addChild(HAnimJoint794);

HAnimJoint* HAnimJoint826 = new HAnimJoint();
HAnimJoint826->setName("l_trapezoid");
HAnimJoint826->setDEF("hanim_l_trapezoid");
HAnimJoint826->setCenter(new float[3]{0.1811,-0.0935,0.6984});
HAnimSegment* HAnimSegment827 = new HAnimSegment();
HAnimSegment827->setName("SEGMENT_FOR_l_trapezoid");
HAnimSegment827->setDEF("hanim_SEGMENT_FOR_l_trapezoid");
TouchSensor* TouchSensor828 = new TouchSensor();
TouchSensor828->setDescription("joint l_trapezoid segment SEGMENT_FOR_l_trapezoid");
HAnimSegment827->addChild(TouchSensor828);

Transform* Transform829 = new Transform();
Transform829->setTranslation(new float[3]{0.1811,-0.0935,0.6984});
Shape* Shape830 = new Shape();
Shape830->setUSE("JointShape");
Transform829->addChild(Shape830);

HAnimSegment827->addChild(Transform829);

HAnimSite* HAnimSite831 = new HAnimSite();
HAnimSite831->setName("SEGMENT_FOR_l_trapezoid_tip");
HAnimSite831->setDEF("hanim_SEGMENT_FOR_l_trapezoid_tip");
Transform* Transform832 = new Transform();
Transform832->setTranslation(new float[3]{0.1811,-0.0935,0.6984});
Shape* Shape833 = new Shape();
Shape833->setUSE("SiteShape");
Transform832->addChild(Shape833);

HAnimSite831->addChild(Transform832);

HAnimSegment827->addChild(HAnimSite831);

HAnimJoint826->addChild(HAnimSegment827);

HAnimJoint* HAnimJoint834 = new HAnimJoint();
HAnimJoint834->setName("l_metacarpal_2");
HAnimJoint834->setDEF("hanim_l_metacarpal_2");
HAnimJoint834->setCenter(new float[3]{0.1811,-0.0922,0.679});
HAnimSegment* HAnimSegment835 = new HAnimSegment();
HAnimSegment835->setName("SEGMENT_FOR_l_metacarpal_2");
HAnimSegment835->setDEF("hanim_SEGMENT_FOR_l_metacarpal_2");
TouchSensor* TouchSensor836 = new TouchSensor();
TouchSensor836->setDescription("joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2");
HAnimSegment835->addChild(TouchSensor836);

Transform* Transform837 = new Transform();
Transform837->setTranslation(new float[3]{0.1811,-0.0922,0.679});
Shape* Shape838 = new Shape();
Shape838->setUSE("JointShape");
Transform837->addChild(Shape838);

HAnimSegment835->addChild(Transform837);

HAnimSite* HAnimSite839 = new HAnimSite();
HAnimSite839->setName("SEGMENT_FOR_l_metacarpal_2_tip");
HAnimSite839->setDEF("hanim_SEGMENT_FOR_l_metacarpal_2_tip");
Transform* Transform840 = new Transform();
Transform840->setTranslation(new float[3]{0.1811,-0.0922,0.679});
Shape* Shape841 = new Shape();
Shape841->setUSE("SiteShape");
Transform840->addChild(Shape841);

HAnimSite839->addChild(Transform840);

HAnimSegment835->addChild(HAnimSite839);

HAnimJoint834->addChild(HAnimSegment835);

HAnimJoint* HAnimJoint842 = new HAnimJoint();
HAnimJoint842->setName("l_carpal_proximal_phalanx_2");
HAnimJoint842->setDEF("hanim_l_carpal_proximal_phalanx_2");
HAnimJoint842->setCenter(new float[3]{0.1836,-0.0868,0.6286});
HAnimSegment* HAnimSegment843 = new HAnimSegment();
HAnimSegment843->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_2");
HAnimSegment843->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2");
TouchSensor* TouchSensor844 = new TouchSensor();
TouchSensor844->setDescription("joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2");
HAnimSegment843->addChild(TouchSensor844);

Transform* Transform845 = new Transform();
Transform845->setTranslation(new float[3]{0.1836,-0.0868,0.6286});
Shape* Shape846 = new Shape();
Shape846->setUSE("JointShape");
Transform845->addChild(Shape846);

HAnimSegment843->addChild(Transform845);

HAnimSite* HAnimSite847 = new HAnimSite();
HAnimSite847->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip");
HAnimSite847->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip");
Transform* Transform848 = new Transform();
Transform848->setTranslation(new float[3]{0.1836,-0.0868,0.6286});
Shape* Shape849 = new Shape();
Shape849->setUSE("SiteShape");
Transform848->addChild(Shape849);

HAnimSite847->addChild(Transform848);

HAnimSegment843->addChild(HAnimSite847);

HAnimJoint842->addChild(HAnimSegment843);

HAnimJoint* HAnimJoint850 = new HAnimJoint();
HAnimJoint850->setName("l_carpal_middle_phalanx_2");
HAnimJoint850->setDEF("hanim_l_carpal_middle_phalanx_2");
HAnimJoint850->setCenter(new float[3]{0.1815,-0.0877,0.5983});
HAnimSegment* HAnimSegment851 = new HAnimSegment();
HAnimSegment851->setName("SEGMENT_FOR_l_carpal_middle_phalanx_2");
HAnimSegment851->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2");
TouchSensor* TouchSensor852 = new TouchSensor();
TouchSensor852->setDescription("joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2");
HAnimSegment851->addChild(TouchSensor852);

Transform* Transform853 = new Transform();
Transform853->setTranslation(new float[3]{0.1815,-0.0877,0.5983});
Shape* Shape854 = new Shape();
Shape854->setUSE("JointShape");
Transform853->addChild(Shape854);

HAnimSegment851->addChild(Transform853);

HAnimSite* HAnimSite855 = new HAnimSite();
HAnimSite855->setName("SEGMENT_FOR_l_carpal_middle_phalanx_2_tip");
HAnimSite855->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip");
Transform* Transform856 = new Transform();
Transform856->setTranslation(new float[3]{0.1815,-0.0877,0.5983});
Shape* Shape857 = new Shape();
Shape857->setUSE("SiteShape");
Transform856->addChild(Shape857);

HAnimSite855->addChild(Transform856);

HAnimSegment851->addChild(HAnimSite855);

HAnimJoint850->addChild(HAnimSegment851);

HAnimJoint* HAnimJoint858 = new HAnimJoint();
HAnimJoint858->setName("l_carpal_distal_phalanx_2");
HAnimJoint858->setDEF("hanim_l_carpal_distal_phalanx_2");
HAnimJoint858->setCenter(new float[3]{0.1805,-0.0885,0.5731});
HAnimSegment* HAnimSegment859 = new HAnimSegment();
HAnimSegment859->setName("SEGMENT_FOR_l_carpal_distal_phalanx_2");
HAnimSegment859->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2");
TouchSensor* TouchSensor860 = new TouchSensor();
TouchSensor860->setDescription("joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2");
HAnimSegment859->addChild(TouchSensor860);

Transform* Transform861 = new Transform();
Transform861->setTranslation(new float[3]{0.1805,-0.0885,0.5731});
Shape* Shape862 = new Shape();
Shape862->setUSE("JointShape");
Transform861->addChild(Shape862);

HAnimSegment859->addChild(Transform861);

HAnimSite* HAnimSite863 = new HAnimSite();
HAnimSite863->setName("SEGMENT_FOR_l_carpal_distal_phalanx_2_tip");
HAnimSite863->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip");
Transform* Transform864 = new Transform();
Transform864->setTranslation(new float[3]{0.1805,-0.0885,0.5731});
Shape* Shape865 = new Shape();
Shape865->setUSE("SiteShape");
Transform864->addChild(Shape865);

HAnimSite863->addChild(Transform864);

HAnimSegment859->addChild(HAnimSite863);

HAnimJoint858->addChild(HAnimSegment859);

HAnimJoint850->addChild(HAnimJoint858);

HAnimJoint842->addChild(HAnimJoint850);

HAnimJoint834->addChild(HAnimJoint842);

HAnimJoint826->addChild(HAnimJoint834);

HAnimJoint786->addChild(HAnimJoint826);

HAnimJoint* HAnimJoint866 = new HAnimJoint();
HAnimJoint866->setName("l_capitate");
HAnimJoint866->setDEF("hanim_l_capitate");
HAnimJoint866->setCenter(new float[3]{0.1809,-0.1067,0.7});
HAnimSegment* HAnimSegment867 = new HAnimSegment();
HAnimSegment867->setName("SEGMENT_FOR_l_capitate");
HAnimSegment867->setDEF("hanim_SEGMENT_FOR_l_capitate");
TouchSensor* TouchSensor868 = new TouchSensor();
TouchSensor868->setDescription("joint l_capitate segment SEGMENT_FOR_l_capitate");
HAnimSegment867->addChild(TouchSensor868);

Transform* Transform869 = new Transform();
Transform869->setTranslation(new float[3]{0.1809,-0.1067,0.7});
Shape* Shape870 = new Shape();
Shape870->setUSE("JointShape");
Transform869->addChild(Shape870);

HAnimSegment867->addChild(Transform869);

HAnimSite* HAnimSite871 = new HAnimSite();
HAnimSite871->setName("SEGMENT_FOR_l_capitate_tip");
HAnimSite871->setDEF("hanim_SEGMENT_FOR_l_capitate_tip");
Transform* Transform872 = new Transform();
Transform872->setTranslation(new float[3]{0.1809,-0.1067,0.7});
Shape* Shape873 = new Shape();
Shape873->setUSE("SiteShape");
Transform872->addChild(Shape873);

HAnimSite871->addChild(Transform872);

HAnimSegment867->addChild(HAnimSite871);

HAnimJoint866->addChild(HAnimSegment867);

HAnimJoint* HAnimJoint874 = new HAnimJoint();
HAnimJoint874->setName("l_metacarpal_3");
HAnimJoint874->setDEF("hanim_l_metacarpal_3");
HAnimJoint874->setCenter(new float[3]{0.1809,-0.1081,0.6772});
HAnimSegment* HAnimSegment875 = new HAnimSegment();
HAnimSegment875->setName("SEGMENT_FOR_l_metacarpal_3");
HAnimSegment875->setDEF("hanim_SEGMENT_FOR_l_metacarpal_3");
TouchSensor* TouchSensor876 = new TouchSensor();
TouchSensor876->setDescription("joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3");
HAnimSegment875->addChild(TouchSensor876);

Transform* Transform877 = new Transform();
Transform877->setTranslation(new float[3]{0.1809,-0.1081,0.6772});
Shape* Shape878 = new Shape();
Shape878->setUSE("JointShape");
Transform877->addChild(Shape878);

HAnimSegment875->addChild(Transform877);

HAnimSite* HAnimSite879 = new HAnimSite();
HAnimSite879->setName("SEGMENT_FOR_l_metacarpal_3_tip");
HAnimSite879->setDEF("hanim_SEGMENT_FOR_l_metacarpal_3_tip");
Transform* Transform880 = new Transform();
Transform880->setTranslation(new float[3]{0.1809,-0.1081,0.6772});
Shape* Shape881 = new Shape();
Shape881->setUSE("SiteShape");
Transform880->addChild(Shape881);

HAnimSite879->addChild(Transform880);

HAnimSegment875->addChild(HAnimSite879);

HAnimJoint874->addChild(HAnimSegment875);

HAnimJoint* HAnimJoint882 = new HAnimJoint();
HAnimJoint882->setName("l_carpal_proximal_phalanx_3");
HAnimJoint882->setDEF("hanim_l_carpal_proximal_phalanx_3");
HAnimJoint882->setCenter(new float[3]{0.1835,-0.1058,0.6264});
HAnimSegment* HAnimSegment883 = new HAnimSegment();
HAnimSegment883->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_3");
HAnimSegment883->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3");
TouchSensor* TouchSensor884 = new TouchSensor();
TouchSensor884->setDescription("joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3");
HAnimSegment883->addChild(TouchSensor884);

Transform* Transform885 = new Transform();
Transform885->setTranslation(new float[3]{0.1835,-0.1058,0.6264});
Shape* Shape886 = new Shape();
Shape886->setUSE("JointShape");
Transform885->addChild(Shape886);

HAnimSegment883->addChild(Transform885);

HAnimSite* HAnimSite887 = new HAnimSite();
HAnimSite887->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip");
HAnimSite887->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip");
Transform* Transform888 = new Transform();
Transform888->setTranslation(new float[3]{0.1835,-0.1058,0.6264});
Shape* Shape889 = new Shape();
Shape889->setUSE("SiteShape");
Transform888->addChild(Shape889);

HAnimSite887->addChild(Transform888);

HAnimSegment883->addChild(HAnimSite887);

HAnimJoint882->addChild(HAnimSegment883);

HAnimJoint* HAnimJoint890 = new HAnimJoint();
HAnimJoint890->setName("l_carpal_middle_phalanx_3");
HAnimJoint890->setDEF("hanim_l_carpal_middle_phalanx_3");
HAnimJoint890->setCenter(new float[3]{0.1815,-0.1054,0.5947});
HAnimSegment* HAnimSegment891 = new HAnimSegment();
HAnimSegment891->setName("SEGMENT_FOR_l_carpal_middle_phalanx_3");
HAnimSegment891->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3");
TouchSensor* TouchSensor892 = new TouchSensor();
TouchSensor892->setDescription("joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3");
HAnimSegment891->addChild(TouchSensor892);

Transform* Transform893 = new Transform();
Transform893->setTranslation(new float[3]{0.1815,-0.1054,0.5947});
Shape* Shape894 = new Shape();
Shape894->setUSE("JointShape");
Transform893->addChild(Shape894);

HAnimSegment891->addChild(Transform893);

HAnimSite* HAnimSite895 = new HAnimSite();
HAnimSite895->setName("SEGMENT_FOR_l_carpal_middle_phalanx_3_tip");
HAnimSite895->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip");
Transform* Transform896 = new Transform();
Transform896->setTranslation(new float[3]{0.1815,-0.1054,0.5947});
Shape* Shape897 = new Shape();
Shape897->setUSE("SiteShape");
Transform896->addChild(Shape897);

HAnimSite895->addChild(Transform896);

HAnimSegment891->addChild(HAnimSite895);

HAnimJoint890->addChild(HAnimSegment891);

HAnimJoint* HAnimJoint898 = new HAnimJoint();
HAnimJoint898->setName("l_carpal_distal_phalanx_3");
HAnimJoint898->setDEF("hanim_l_carpal_distal_phalanx_3");
HAnimJoint898->setCenter(new float[3]{0.1805,-0.1056,0.5668});
HAnimSegment* HAnimSegment899 = new HAnimSegment();
HAnimSegment899->setName("SEGMENT_FOR_l_carpal_distal_phalanx_3");
HAnimSegment899->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3");
TouchSensor* TouchSensor900 = new TouchSensor();
TouchSensor900->setDescription("joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3");
HAnimSegment899->addChild(TouchSensor900);

Transform* Transform901 = new Transform();
Transform901->setTranslation(new float[3]{0.1805,-0.1056,0.5668});
Shape* Shape902 = new Shape();
Shape902->setUSE("JointShape");
Transform901->addChild(Shape902);

HAnimSegment899->addChild(Transform901);

HAnimSite* HAnimSite903 = new HAnimSite();
HAnimSite903->setName("SEGMENT_FOR_l_carpal_distal_phalanx_3_tip");
HAnimSite903->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip");
Transform* Transform904 = new Transform();
Transform904->setTranslation(new float[3]{0.1805,-0.1056,0.5668});
Shape* Shape905 = new Shape();
Shape905->setUSE("SiteShape");
Transform904->addChild(Shape905);

HAnimSite903->addChild(Transform904);

HAnimSegment899->addChild(HAnimSite903);

HAnimJoint898->addChild(HAnimSegment899);

HAnimJoint890->addChild(HAnimJoint898);

HAnimJoint882->addChild(HAnimJoint890);

HAnimJoint874->addChild(HAnimJoint882);

HAnimJoint866->addChild(HAnimJoint874);

HAnimJoint786->addChild(HAnimJoint866);

HAnimJoint* HAnimJoint906 = new HAnimJoint();
HAnimJoint906->setName("l_hamate");
HAnimJoint906->setDEF("hanim_l_hamate");
HAnimJoint906->setCenter(new float[3]{0.1809,-0.1276,0.6973});
HAnimSegment* HAnimSegment907 = new HAnimSegment();
HAnimSegment907->setName("SEGMENT_FOR_l_hamate");
HAnimSegment907->setDEF("hanim_SEGMENT_FOR_l_hamate");
TouchSensor* TouchSensor908 = new TouchSensor();
TouchSensor908->setDescription("joint l_hamate segment SEGMENT_FOR_l_hamate");
HAnimSegment907->addChild(TouchSensor908);

Transform* Transform909 = new Transform();
Transform909->setTranslation(new float[3]{0.1809,-0.1276,0.6973});
Shape* Shape910 = new Shape();
Shape910->setUSE("JointShape");
Transform909->addChild(Shape910);

HAnimSegment907->addChild(Transform909);

HAnimSite* HAnimSite911 = new HAnimSite();
HAnimSite911->setName("SEGMENT_FOR_l_hamate_tip");
HAnimSite911->setDEF("hanim_SEGMENT_FOR_l_hamate_tip");
Transform* Transform912 = new Transform();
Transform912->setTranslation(new float[3]{0.1809,-0.1276,0.6973});
Shape* Shape913 = new Shape();
Shape913->setUSE("SiteShape");
Transform912->addChild(Shape913);

HAnimSite911->addChild(Transform912);

HAnimSegment907->addChild(HAnimSite911);

HAnimJoint906->addChild(HAnimSegment907);

HAnimJoint* HAnimJoint914 = new HAnimJoint();
HAnimJoint914->setName("l_metacarpal_4");
HAnimJoint914->setDEF("hanim_l_metacarpal_4");
HAnimJoint914->setCenter(new float[3]{0.1809,-0.1218,0.6777});
HAnimSegment* HAnimSegment915 = new HAnimSegment();
HAnimSegment915->setName("SEGMENT_FOR_l_metacarpal_4");
HAnimSegment915->setDEF("hanim_SEGMENT_FOR_l_metacarpal_4");
TouchSensor* TouchSensor916 = new TouchSensor();
TouchSensor916->setDescription("joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4");
HAnimSegment915->addChild(TouchSensor916);

Transform* Transform917 = new Transform();
Transform917->setTranslation(new float[3]{0.1809,-0.1218,0.6777});
Shape* Shape918 = new Shape();
Shape918->setUSE("JointShape");
Transform917->addChild(Shape918);

HAnimSegment915->addChild(Transform917);

HAnimSite* HAnimSite919 = new HAnimSite();
HAnimSite919->setName("SEGMENT_FOR_l_metacarpal_4_tip");
HAnimSite919->setDEF("hanim_SEGMENT_FOR_l_metacarpal_4_tip");
Transform* Transform920 = new Transform();
Transform920->setTranslation(new float[3]{0.1809,-0.1218,0.6777});
Shape* Shape921 = new Shape();
Shape921->setUSE("SiteShape");
Transform920->addChild(Shape921);

HAnimSite919->addChild(Transform920);

HAnimSegment915->addChild(HAnimSite919);

HAnimJoint914->addChild(HAnimSegment915);

HAnimJoint* HAnimJoint922 = new HAnimJoint();
HAnimJoint922->setName("l_carpal_proximal_phalanx_4");
HAnimJoint922->setDEF("hanim_l_carpal_proximal_phalanx_4");
HAnimJoint922->setCenter(new float[3]{0.1835,-0.1233,0.6255});
HAnimSegment* HAnimSegment923 = new HAnimSegment();
HAnimSegment923->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_4");
HAnimSegment923->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4");
TouchSensor* TouchSensor924 = new TouchSensor();
TouchSensor924->setDescription("joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4");
HAnimSegment923->addChild(TouchSensor924);

Transform* Transform925 = new Transform();
Transform925->setTranslation(new float[3]{0.1835,-0.1233,0.6255});
Shape* Shape926 = new Shape();
Shape926->setUSE("JointShape");
Transform925->addChild(Shape926);

HAnimSegment923->addChild(Transform925);

HAnimSite* HAnimSite927 = new HAnimSite();
HAnimSite927->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip");
HAnimSite927->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip");
Transform* Transform928 = new Transform();
Transform928->setTranslation(new float[3]{0.1835,-0.1233,0.6255});
Shape* Shape929 = new Shape();
Shape929->setUSE("SiteShape");
Transform928->addChild(Shape929);

HAnimSite927->addChild(Transform928);

HAnimSegment923->addChild(HAnimSite927);

HAnimJoint922->addChild(HAnimSegment923);

HAnimJoint* HAnimJoint930 = new HAnimJoint();
HAnimJoint930->setName("l_carpal_middle_phalanx_4");
HAnimJoint930->setDEF("hanim_l_carpal_middle_phalanx_4");
HAnimJoint930->setCenter(new float[3]{0.1815,-0.1225,0.598});
HAnimSegment* HAnimSegment931 = new HAnimSegment();
HAnimSegment931->setName("SEGMENT_FOR_l_carpal_middle_phalanx_4");
HAnimSegment931->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4");
TouchSensor* TouchSensor932 = new TouchSensor();
TouchSensor932->setDescription("joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4");
HAnimSegment931->addChild(TouchSensor932);

Transform* Transform933 = new Transform();
Transform933->setTranslation(new float[3]{0.1815,-0.1225,0.598});
Shape* Shape934 = new Shape();
Shape934->setUSE("JointShape");
Transform933->addChild(Shape934);

HAnimSegment931->addChild(Transform933);

HAnimSite* HAnimSite935 = new HAnimSite();
HAnimSite935->setName("SEGMENT_FOR_l_carpal_middle_phalanx_4_tip");
HAnimSite935->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip");
Transform* Transform936 = new Transform();
Transform936->setTranslation(new float[3]{0.1815,-0.1225,0.598});
Shape* Shape937 = new Shape();
Shape937->setUSE("SiteShape");
Transform936->addChild(Shape937);

HAnimSite935->addChild(Transform936);

HAnimSegment931->addChild(HAnimSite935);

HAnimJoint930->addChild(HAnimSegment931);

HAnimJoint* HAnimJoint938 = new HAnimJoint();
HAnimJoint938->setName("l_carpal_distal_phalanx_4");
HAnimJoint938->setDEF("hanim_l_carpal_distal_phalanx_4");
HAnimJoint938->setCenter(new float[3]{0.1805,-0.1217,0.5722});
HAnimSegment* HAnimSegment939 = new HAnimSegment();
HAnimSegment939->setName("SEGMENT_FOR_l_carpal_distal_phalanx_4");
HAnimSegment939->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4");
TouchSensor* TouchSensor940 = new TouchSensor();
TouchSensor940->setDescription("joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4");
HAnimSegment939->addChild(TouchSensor940);

Transform* Transform941 = new Transform();
Transform941->setTranslation(new float[3]{0.1805,-0.1217,0.5722});
Shape* Shape942 = new Shape();
Shape942->setUSE("JointShape");
Transform941->addChild(Shape942);

HAnimSegment939->addChild(Transform941);

HAnimSite* HAnimSite943 = new HAnimSite();
HAnimSite943->setName("SEGMENT_FOR_l_carpal_distal_phalanx_4_tip");
HAnimSite943->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip");
Transform* Transform944 = new Transform();
Transform944->setTranslation(new float[3]{0.1805,-0.1217,0.5722});
Shape* Shape945 = new Shape();
Shape945->setUSE("SiteShape");
Transform944->addChild(Shape945);

HAnimSite943->addChild(Transform944);

HAnimSegment939->addChild(HAnimSite943);

HAnimJoint938->addChild(HAnimSegment939);

HAnimJoint930->addChild(HAnimJoint938);

HAnimJoint922->addChild(HAnimJoint930);

HAnimJoint914->addChild(HAnimJoint922);

HAnimJoint906->addChild(HAnimJoint914);

HAnimJoint* HAnimJoint946 = new HAnimJoint();
HAnimJoint946->setName("l_metacarpal_5");
HAnimJoint946->setDEF("hanim_l_metacarpal_5");
HAnimJoint946->setCenter(new float[3]{0.1815,-0.1347,0.6797});
HAnimSegment* HAnimSegment947 = new HAnimSegment();
HAnimSegment947->setName("SEGMENT_FOR_l_metacarpal_5");
HAnimSegment947->setDEF("hanim_SEGMENT_FOR_l_metacarpal_5");
TouchSensor* TouchSensor948 = new TouchSensor();
TouchSensor948->setDescription("joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5");
HAnimSegment947->addChild(TouchSensor948);

Transform* Transform949 = new Transform();
Transform949->setTranslation(new float[3]{0.1815,-0.1347,0.6797});
Shape* Shape950 = new Shape();
Shape950->setUSE("JointShape");
Transform949->addChild(Shape950);

HAnimSegment947->addChild(Transform949);

HAnimSite* HAnimSite951 = new HAnimSite();
HAnimSite951->setName("SEGMENT_FOR_l_metacarpal_5_tip");
HAnimSite951->setDEF("hanim_SEGMENT_FOR_l_metacarpal_5_tip");
Transform* Transform952 = new Transform();
Transform952->setTranslation(new float[3]{0.1815,-0.1347,0.6797});
Shape* Shape953 = new Shape();
Shape953->setUSE("SiteShape");
Transform952->addChild(Shape953);

HAnimSite951->addChild(Transform952);

HAnimSegment947->addChild(HAnimSite951);

HAnimJoint946->addChild(HAnimSegment947);

HAnimJoint* HAnimJoint954 = new HAnimJoint();
HAnimJoint954->setName("l_carpal_proximal_phalanx_5");
HAnimJoint954->setDEF("hanim_l_carpal_proximal_phalanx_5");
HAnimJoint954->setCenter(new float[3]{0.1832,-0.1389,0.6295});
HAnimSegment* HAnimSegment955 = new HAnimSegment();
HAnimSegment955->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_5");
HAnimSegment955->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5");
TouchSensor* TouchSensor956 = new TouchSensor();
TouchSensor956->setDescription("joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5");
HAnimSegment955->addChild(TouchSensor956);

Transform* Transform957 = new Transform();
Transform957->setTranslation(new float[3]{0.1832,-0.1389,0.6295});
Shape* Shape958 = new Shape();
Shape958->setUSE("JointShape");
Transform957->addChild(Shape958);

HAnimSegment955->addChild(Transform957);

HAnimSite* HAnimSite959 = new HAnimSite();
HAnimSite959->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip");
HAnimSite959->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip");
Transform* Transform960 = new Transform();
Transform960->setTranslation(new float[3]{0.1832,-0.1389,0.6295});
Shape* Shape961 = new Shape();
Shape961->setUSE("SiteShape");
Transform960->addChild(Shape961);

HAnimSite959->addChild(Transform960);

HAnimSegment955->addChild(HAnimSite959);

HAnimJoint954->addChild(HAnimSegment955);

HAnimJoint* HAnimJoint962 = new HAnimJoint();
HAnimJoint962->setName("l_carpal_middle_phalanx_5");
HAnimJoint962->setDEF("hanim_l_carpal_middle_phalanx_5");
HAnimJoint962->setCenter(new float[3]{0.1815,-0.139,0.6124});
HAnimSegment* HAnimSegment963 = new HAnimSegment();
HAnimSegment963->setName("SEGMENT_FOR_l_carpal_middle_phalanx_5");
HAnimSegment963->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5");
TouchSensor* TouchSensor964 = new TouchSensor();
TouchSensor964->setDescription("joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5");
HAnimSegment963->addChild(TouchSensor964);

Transform* Transform965 = new Transform();
Transform965->setTranslation(new float[3]{0.1815,-0.139,0.6124});
Shape* Shape966 = new Shape();
Shape966->setUSE("JointShape");
Transform965->addChild(Shape966);

HAnimSegment963->addChild(Transform965);

HAnimSite* HAnimSite967 = new HAnimSite();
HAnimSite967->setName("SEGMENT_FOR_l_carpal_middle_phalanx_5_tip");
HAnimSite967->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip");
Transform* Transform968 = new Transform();
Transform968->setTranslation(new float[3]{0.1815,-0.139,0.6124});
Shape* Shape969 = new Shape();
Shape969->setUSE("SiteShape");
Transform968->addChild(Shape969);

HAnimSite967->addChild(Transform968);

HAnimSegment963->addChild(HAnimSite967);

HAnimJoint962->addChild(HAnimSegment963);

HAnimJoint* HAnimJoint970 = new HAnimJoint();
HAnimJoint970->setName("l_carpal_distal_phalanx_5");
HAnimJoint970->setDEF("hanim_l_carpal_distal_phalanx_5");
HAnimJoint970->setCenter(new float[3]{0.1806,-0.1388,0.5938});
HAnimSegment* HAnimSegment971 = new HAnimSegment();
HAnimSegment971->setName("SEGMENT_FOR_l_carpal_distal_phalanx_5");
HAnimSegment971->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5");
TouchSensor* TouchSensor972 = new TouchSensor();
TouchSensor972->setDescription("joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5");
HAnimSegment971->addChild(TouchSensor972);

Transform* Transform973 = new Transform();
Transform973->setTranslation(new float[3]{0.1806,-0.1388,0.5938});
Shape* Shape974 = new Shape();
Shape974->setUSE("JointShape");
Transform973->addChild(Shape974);

HAnimSegment971->addChild(Transform973);

HAnimSite* HAnimSite975 = new HAnimSite();
HAnimSite975->setName("SEGMENT_FOR_l_carpal_distal_phalanx_5_tip");
HAnimSite975->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip");
Transform* Transform976 = new Transform();
Transform976->setTranslation(new float[3]{0.1806,-0.1388,0.5938});
Shape* Shape977 = new Shape();
Shape977->setUSE("SiteShape");
Transform976->addChild(Shape977);

HAnimSite975->addChild(Transform976);

HAnimSegment971->addChild(HAnimSite975);

HAnimJoint970->addChild(HAnimSegment971);

HAnimJoint962->addChild(HAnimJoint970);

HAnimJoint954->addChild(HAnimJoint962);

HAnimJoint946->addChild(HAnimJoint954);

HAnimJoint906->addChild(HAnimJoint946);

HAnimJoint786->addChild(HAnimJoint906);

HAnimJoint778->addChild(HAnimJoint786);

HAnimJoint770->addChild(HAnimJoint778);

HAnimJoint762->addChild(HAnimJoint770);

HAnimJoint754->addChild(HAnimJoint762);

HAnimJoint626->addChild(HAnimJoint754);

HAnimJoint* HAnimJoint978 = new HAnimJoint();
HAnimJoint978->setName("r_clavicle");
HAnimJoint978->setDEF("hanim_r_clavicle");
HAnimJoint978->setCenter(new float[3]{-0.1231,-0.1148,1.1833});
HAnimSegment* HAnimSegment979 = new HAnimSegment();
HAnimSegment979->setName("SEGMENT_FOR_r_clavicle");
HAnimSegment979->setDEF("hanim_SEGMENT_FOR_r_clavicle");
TouchSensor* TouchSensor980 = new TouchSensor();
TouchSensor980->setDescription("joint r_clavicle segment SEGMENT_FOR_r_clavicle");
HAnimSegment979->addChild(TouchSensor980);

Transform* Transform981 = new Transform();
Transform981->setTranslation(new float[3]{-0.1231,-0.1148,1.1833});
Shape* Shape982 = new Shape();
Shape982->setUSE("JointShape");
Transform981->addChild(Shape982);

HAnimSegment979->addChild(Transform981);

HAnimSite* HAnimSite983 = new HAnimSite();
HAnimSite983->setName("SEGMENT_FOR_r_clavicle_tip");
HAnimSite983->setDEF("hanim_SEGMENT_FOR_r_clavicle_tip");
Transform* Transform984 = new Transform();
Transform984->setTranslation(new float[3]{-0.1231,-0.1148,1.1833});
Shape* Shape985 = new Shape();
Shape985->setUSE("SiteShape");
Transform984->addChild(Shape985);

HAnimSite983->addChild(Transform984);

HAnimSegment979->addChild(HAnimSite983);

HAnimJoint978->addChild(HAnimSegment979);

HAnimJoint* HAnimJoint986 = new HAnimJoint();
HAnimJoint986->setName("r_scapula");
HAnimJoint986->setDEF("hanim_r_scapula");
HAnimJoint986->setCenter(new float[3]{-0.0387,-0.1157,1.2001});
HAnimSegment* HAnimSegment987 = new HAnimSegment();
HAnimSegment987->setName("SEGMENT_FOR_r_scapula");
HAnimSegment987->setDEF("hanim_SEGMENT_FOR_r_scapula");
TouchSensor* TouchSensor988 = new TouchSensor();
TouchSensor988->setDescription("joint r_scapula segment SEGMENT_FOR_r_scapula");
HAnimSegment987->addChild(TouchSensor988);

Transform* Transform989 = new Transform();
Transform989->setTranslation(new float[3]{-0.0387,-0.1157,1.2001});
Shape* Shape990 = new Shape();
Shape990->setUSE("JointShape");
Transform989->addChild(Shape990);

HAnimSegment987->addChild(Transform989);

HAnimSite* HAnimSite991 = new HAnimSite();
HAnimSite991->setName("SEGMENT_FOR_r_scapula_tip");
HAnimSite991->setDEF("hanim_SEGMENT_FOR_r_scapula_tip");
Transform* Transform992 = new Transform();
Transform992->setTranslation(new float[3]{-0.0387,-0.1157,1.2001});
Shape* Shape993 = new Shape();
Shape993->setUSE("SiteShape");
Transform992->addChild(Shape993);

HAnimSite991->addChild(Transform992);

HAnimSegment987->addChild(HAnimSite991);

HAnimJoint986->addChild(HAnimSegment987);

HAnimJoint* HAnimJoint994 = new HAnimJoint();
HAnimJoint994->setName("r_upperarm");
HAnimJoint994->setDEF("hanim_r_upperarm");
HAnimJoint994->setCenter(new float[3]{-0.1649,-0.1051,1.17});
HAnimSegment* HAnimSegment995 = new HAnimSegment();
HAnimSegment995->setName("SEGMENT_FOR_r_upperarm");
HAnimSegment995->setDEF("hanim_SEGMENT_FOR_r_upperarm");
TouchSensor* TouchSensor996 = new TouchSensor();
TouchSensor996->setDescription("joint r_upperarm segment SEGMENT_FOR_r_upperarm");
HAnimSegment995->addChild(TouchSensor996);

Transform* Transform997 = new Transform();
Transform997->setTranslation(new float[3]{-0.1649,-0.1051,1.17});
Shape* Shape998 = new Shape();
Shape998->setUSE("JointShape");
Transform997->addChild(Shape998);

HAnimSegment995->addChild(Transform997);

HAnimSite* HAnimSite999 = new HAnimSite();
HAnimSite999->setName("SEGMENT_FOR_r_upperarm_tip");
HAnimSite999->setDEF("hanim_SEGMENT_FOR_r_upperarm_tip");
Transform* Transform1000 = new Transform();
Transform1000->setTranslation(new float[3]{-0.1649,-0.1051,1.17});
Shape* Shape1001 = new Shape();
Shape1001->setUSE("SiteShape");
Transform1000->addChild(Shape1001);

HAnimSite999->addChild(Transform1000);

HAnimSegment995->addChild(HAnimSite999);

HAnimJoint994->addChild(HAnimSegment995);

HAnimJoint* HAnimJoint1002 = new HAnimJoint();
HAnimJoint1002->setName("r_forearm");
HAnimJoint1002->setDEF("hanim_r_forearm");
HAnimJoint1002->setCenter(new float[3]{-0.1819,-0.1075,0.9202});
HAnimSegment* HAnimSegment1003 = new HAnimSegment();
HAnimSegment1003->setName("SEGMENT_FOR_r_forearm");
HAnimSegment1003->setDEF("hanim_SEGMENT_FOR_r_forearm");
TouchSensor* TouchSensor1004 = new TouchSensor();
TouchSensor1004->setDescription("joint r_forearm segment SEGMENT_FOR_r_forearm");
HAnimSegment1003->addChild(TouchSensor1004);

Transform* Transform1005 = new Transform();
Transform1005->setTranslation(new float[3]{-0.1819,-0.1075,0.9202});
Shape* Shape1006 = new Shape();
Shape1006->setUSE("JointShape");
Transform1005->addChild(Shape1006);

HAnimSegment1003->addChild(Transform1005);

HAnimSite* HAnimSite1007 = new HAnimSite();
HAnimSite1007->setName("SEGMENT_FOR_r_forearm_tip");
HAnimSite1007->setDEF("hanim_SEGMENT_FOR_r_forearm_tip");
Transform* Transform1008 = new Transform();
Transform1008->setTranslation(new float[3]{-0.1819,-0.1075,0.9202});
Shape* Shape1009 = new Shape();
Shape1009->setUSE("SiteShape");
Transform1008->addChild(Shape1009);

HAnimSite1007->addChild(Transform1008);

HAnimSegment1003->addChild(HAnimSite1007);

HAnimJoint1002->addChild(HAnimSegment1003);

HAnimJoint* HAnimJoint1010 = new HAnimJoint();
HAnimJoint1010->setName("r_carpal");
HAnimJoint1010->setDEF("hanim_r_carpal");
HAnimJoint1010->setCenter(new float[3]{-0.1818,-0.1069,0.7157});
HAnimSegment* HAnimSegment1011 = new HAnimSegment();
HAnimSegment1011->setName("SEGMENT_FOR_r_carpal");
HAnimSegment1011->setDEF("hanim_SEGMENT_FOR_r_carpal");
TouchSensor* TouchSensor1012 = new TouchSensor();
TouchSensor1012->setDescription("joint r_carpal segment SEGMENT_FOR_r_carpal");
HAnimSegment1011->addChild(TouchSensor1012);

Transform* Transform1013 = new Transform();
Transform1013->setTranslation(new float[3]{-0.1818,-0.1069,0.7157});
Shape* Shape1014 = new Shape();
Shape1014->setUSE("JointShape");
Transform1013->addChild(Shape1014);

HAnimSegment1011->addChild(Transform1013);

HAnimSite* HAnimSite1015 = new HAnimSite();
HAnimSite1015->setName("SEGMENT_FOR_r_carpal_tip");
HAnimSite1015->setDEF("hanim_SEGMENT_FOR_r_carpal_tip");
Transform* Transform1016 = new Transform();
Transform1016->setTranslation(new float[3]{-0.1818,-0.1069,0.7157});
Shape* Shape1017 = new Shape();
Shape1017->setUSE("SiteShape");
Transform1016->addChild(Shape1017);

HAnimSite1015->addChild(Transform1016);

HAnimSegment1011->addChild(HAnimSite1015);

HAnimJoint1010->addChild(HAnimSegment1011);

HAnimJoint* HAnimJoint1018 = new HAnimJoint();
HAnimJoint1018->setName("r_trapezium");
HAnimJoint1018->setDEF("hanim_r_trapezium");
HAnimJoint1018->setCenter(new float[3]{-0.1811,-0.0826,0.6975});
HAnimSegment* HAnimSegment1019 = new HAnimSegment();
HAnimSegment1019->setName("SEGMENT_FOR_r_trapezium");
HAnimSegment1019->setDEF("hanim_SEGMENT_FOR_r_trapezium");
TouchSensor* TouchSensor1020 = new TouchSensor();
TouchSensor1020->setDescription("joint r_trapezium segment SEGMENT_FOR_r_trapezium");
HAnimSegment1019->addChild(TouchSensor1020);

Transform* Transform1021 = new Transform();
Transform1021->setTranslation(new float[3]{-0.1811,-0.0826,0.6975});
Shape* Shape1022 = new Shape();
Shape1022->setUSE("JointShape");
Transform1021->addChild(Shape1022);

HAnimSegment1019->addChild(Transform1021);

HAnimSite* HAnimSite1023 = new HAnimSite();
HAnimSite1023->setName("SEGMENT_FOR_r_trapezium_tip");
HAnimSite1023->setDEF("hanim_SEGMENT_FOR_r_trapezium_tip");
Transform* Transform1024 = new Transform();
Transform1024->setTranslation(new float[3]{-0.1811,-0.0826,0.6975});
Shape* Shape1025 = new Shape();
Shape1025->setUSE("SiteShape");
Transform1024->addChild(Shape1025);

HAnimSite1023->addChild(Transform1024);

HAnimSegment1019->addChild(HAnimSite1023);

HAnimJoint1018->addChild(HAnimSegment1019);

HAnimJoint* HAnimJoint1026 = new HAnimJoint();
HAnimJoint1026->setName("r_metacarpal_1");
HAnimJoint1026->setDEF("hanim_r_metacarpal_1");
HAnimJoint1026->setCenter(new float[3]{-0.1803,-0.0759,0.684});
HAnimSegment* HAnimSegment1027 = new HAnimSegment();
HAnimSegment1027->setName("SEGMENT_FOR_r_metacarpal_1");
HAnimSegment1027->setDEF("hanim_SEGMENT_FOR_r_metacarpal_1");
TouchSensor* TouchSensor1028 = new TouchSensor();
TouchSensor1028->setDescription("joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1");
HAnimSegment1027->addChild(TouchSensor1028);

Transform* Transform1029 = new Transform();
Transform1029->setTranslation(new float[3]{-0.1803,-0.0759,0.684});
Shape* Shape1030 = new Shape();
Shape1030->setUSE("JointShape");
Transform1029->addChild(Shape1030);

HAnimSegment1027->addChild(Transform1029);

HAnimSite* HAnimSite1031 = new HAnimSite();
HAnimSite1031->setName("SEGMENT_FOR_r_metacarpal_1_tip");
HAnimSite1031->setDEF("hanim_SEGMENT_FOR_r_metacarpal_1_tip");
Transform* Transform1032 = new Transform();
Transform1032->setTranslation(new float[3]{-0.1803,-0.0759,0.684});
Shape* Shape1033 = new Shape();
Shape1033->setUSE("SiteShape");
Transform1032->addChild(Shape1033);

HAnimSite1031->addChild(Transform1032);

HAnimSegment1027->addChild(HAnimSite1031);

HAnimJoint1026->addChild(HAnimSegment1027);

HAnimJoint* HAnimJoint1034 = new HAnimJoint();
HAnimJoint1034->setName("r_carpal_proximal_phalanx_1");
HAnimJoint1034->setDEF("hanim_r_carpal_proximal_phalanx_1");
HAnimJoint1034->setCenter(new float[3]{-0.1808,-0.0661,0.6642});
HAnimSegment* HAnimSegment1035 = new HAnimSegment();
HAnimSegment1035->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_1");
HAnimSegment1035->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1");
TouchSensor* TouchSensor1036 = new TouchSensor();
TouchSensor1036->setDescription("joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1");
HAnimSegment1035->addChild(TouchSensor1036);

Transform* Transform1037 = new Transform();
Transform1037->setTranslation(new float[3]{-0.1808,-0.0661,0.6642});
Shape* Shape1038 = new Shape();
Shape1038->setUSE("JointShape");
Transform1037->addChild(Shape1038);

HAnimSegment1035->addChild(Transform1037);

HAnimSite* HAnimSite1039 = new HAnimSite();
HAnimSite1039->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip");
HAnimSite1039->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip");
Transform* Transform1040 = new Transform();
Transform1040->setTranslation(new float[3]{-0.1808,-0.0661,0.6642});
Shape* Shape1041 = new Shape();
Shape1041->setUSE("SiteShape");
Transform1040->addChild(Shape1041);

HAnimSite1039->addChild(Transform1040);

HAnimSegment1035->addChild(HAnimSite1039);

HAnimJoint1034->addChild(HAnimSegment1035);

HAnimJoint* HAnimJoint1042 = new HAnimJoint();
HAnimJoint1042->setName("r_carpal_distal_phalanx_1");
HAnimJoint1042->setDEF("hanim_r_carpal_distal_phalanx_1");
HAnimJoint1042->setCenter(new float[3]{-0.1825,-0.0522,0.6455});
HAnimSegment* HAnimSegment1043 = new HAnimSegment();
HAnimSegment1043->setName("SEGMENT_FOR_r_carpal_distal_phalanx_1");
HAnimSegment1043->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1");
TouchSensor* TouchSensor1044 = new TouchSensor();
TouchSensor1044->setDescription("joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1");
HAnimSegment1043->addChild(TouchSensor1044);

Transform* Transform1045 = new Transform();
Transform1045->setTranslation(new float[3]{-0.1825,-0.0522,0.6455});
Shape* Shape1046 = new Shape();
Shape1046->setUSE("JointShape");
Transform1045->addChild(Shape1046);

HAnimSegment1043->addChild(Transform1045);

HAnimSite* HAnimSite1047 = new HAnimSite();
HAnimSite1047->setName("SEGMENT_FOR_r_carpal_distal_phalanx_1_tip");
HAnimSite1047->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip");
Transform* Transform1048 = new Transform();
Transform1048->setTranslation(new float[3]{-0.1825,-0.0522,0.6455});
Shape* Shape1049 = new Shape();
Shape1049->setUSE("SiteShape");
Transform1048->addChild(Shape1049);

HAnimSite1047->addChild(Transform1048);

HAnimSegment1043->addChild(HAnimSite1047);

HAnimJoint1042->addChild(HAnimSegment1043);

HAnimJoint1034->addChild(HAnimJoint1042);

HAnimJoint1026->addChild(HAnimJoint1034);

HAnimJoint1018->addChild(HAnimJoint1026);

HAnimJoint1010->addChild(HAnimJoint1018);

HAnimJoint* HAnimJoint1050 = new HAnimJoint();
HAnimJoint1050->setName("r_trapezoid");
HAnimJoint1050->setDEF("hanim_r_trapezoid");
HAnimJoint1050->setCenter(new float[3]{-0.1811,-0.0935,0.6984});
HAnimSegment* HAnimSegment1051 = new HAnimSegment();
HAnimSegment1051->setName("SEGMENT_FOR_r_trapezoid");
HAnimSegment1051->setDEF("hanim_SEGMENT_FOR_r_trapezoid");
TouchSensor* TouchSensor1052 = new TouchSensor();
TouchSensor1052->setDescription("joint r_trapezoid segment SEGMENT_FOR_r_trapezoid");
HAnimSegment1051->addChild(TouchSensor1052);

Transform* Transform1053 = new Transform();
Transform1053->setTranslation(new float[3]{-0.1811,-0.0935,0.6984});
Shape* Shape1054 = new Shape();
Shape1054->setUSE("JointShape");
Transform1053->addChild(Shape1054);

HAnimSegment1051->addChild(Transform1053);

HAnimSite* HAnimSite1055 = new HAnimSite();
HAnimSite1055->setName("SEGMENT_FOR_r_trapezoid_tip");
HAnimSite1055->setDEF("hanim_SEGMENT_FOR_r_trapezoid_tip");
Transform* Transform1056 = new Transform();
Transform1056->setTranslation(new float[3]{-0.1811,-0.0935,0.6984});
Shape* Shape1057 = new Shape();
Shape1057->setUSE("SiteShape");
Transform1056->addChild(Shape1057);

HAnimSite1055->addChild(Transform1056);

HAnimSegment1051->addChild(HAnimSite1055);

HAnimJoint1050->addChild(HAnimSegment1051);

HAnimJoint* HAnimJoint1058 = new HAnimJoint();
HAnimJoint1058->setName("r_metacarpal_2");
HAnimJoint1058->setDEF("hanim_r_metacarpal_2");
HAnimJoint1058->setCenter(new float[3]{-0.1811,-0.0922,0.679});
HAnimSegment* HAnimSegment1059 = new HAnimSegment();
HAnimSegment1059->setName("SEGMENT_FOR_r_metacarpal_2");
HAnimSegment1059->setDEF("hanim_SEGMENT_FOR_r_metacarpal_2");
TouchSensor* TouchSensor1060 = new TouchSensor();
TouchSensor1060->setDescription("joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2");
HAnimSegment1059->addChild(TouchSensor1060);

Transform* Transform1061 = new Transform();
Transform1061->setTranslation(new float[3]{-0.1811,-0.0922,0.679});
Shape* Shape1062 = new Shape();
Shape1062->setUSE("JointShape");
Transform1061->addChild(Shape1062);

HAnimSegment1059->addChild(Transform1061);

HAnimSite* HAnimSite1063 = new HAnimSite();
HAnimSite1063->setName("SEGMENT_FOR_r_metacarpal_2_tip");
HAnimSite1063->setDEF("hanim_SEGMENT_FOR_r_metacarpal_2_tip");
Transform* Transform1064 = new Transform();
Transform1064->setTranslation(new float[3]{-0.1811,-0.0922,0.679});
Shape* Shape1065 = new Shape();
Shape1065->setUSE("SiteShape");
Transform1064->addChild(Shape1065);

HAnimSite1063->addChild(Transform1064);

HAnimSegment1059->addChild(HAnimSite1063);

HAnimJoint1058->addChild(HAnimSegment1059);

HAnimJoint* HAnimJoint1066 = new HAnimJoint();
HAnimJoint1066->setName("r_carpal_proximal_phalanx_2");
HAnimJoint1066->setDEF("hanim_r_carpal_proximal_phalanx_2");
HAnimJoint1066->setCenter(new float[3]{-0.1835,-0.0868,0.6286});
HAnimSegment* HAnimSegment1067 = new HAnimSegment();
HAnimSegment1067->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_2");
HAnimSegment1067->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2");
TouchSensor* TouchSensor1068 = new TouchSensor();
TouchSensor1068->setDescription("joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2");
HAnimSegment1067->addChild(TouchSensor1068);

Transform* Transform1069 = new Transform();
Transform1069->setTranslation(new float[3]{-0.1835,-0.0868,0.6286});
Shape* Shape1070 = new Shape();
Shape1070->setUSE("JointShape");
Transform1069->addChild(Shape1070);

HAnimSegment1067->addChild(Transform1069);

HAnimSite* HAnimSite1071 = new HAnimSite();
HAnimSite1071->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip");
HAnimSite1071->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip");
Transform* Transform1072 = new Transform();
Transform1072->setTranslation(new float[3]{-0.1835,-0.0868,0.6286});
Shape* Shape1073 = new Shape();
Shape1073->setUSE("SiteShape");
Transform1072->addChild(Shape1073);

HAnimSite1071->addChild(Transform1072);

HAnimSegment1067->addChild(HAnimSite1071);

HAnimJoint1066->addChild(HAnimSegment1067);

HAnimJoint* HAnimJoint1074 = new HAnimJoint();
HAnimJoint1074->setName("r_carpal_middle_phalanx_2");
HAnimJoint1074->setDEF("hanim_r_carpal_middle_phalanx_2");
HAnimJoint1074->setCenter(new float[3]{-0.1815,-0.0877,0.5983});
HAnimSegment* HAnimSegment1075 = new HAnimSegment();
HAnimSegment1075->setName("SEGMENT_FOR_r_carpal_middle_phalanx_2");
HAnimSegment1075->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2");
TouchSensor* TouchSensor1076 = new TouchSensor();
TouchSensor1076->setDescription("joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2");
HAnimSegment1075->addChild(TouchSensor1076);

Transform* Transform1077 = new Transform();
Transform1077->setTranslation(new float[3]{-0.1815,-0.0877,0.5983});
Shape* Shape1078 = new Shape();
Shape1078->setUSE("JointShape");
Transform1077->addChild(Shape1078);

HAnimSegment1075->addChild(Transform1077);

HAnimSite* HAnimSite1079 = new HAnimSite();
HAnimSite1079->setName("SEGMENT_FOR_r_carpal_middle_phalanx_2_tip");
HAnimSite1079->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip");
Transform* Transform1080 = new Transform();
Transform1080->setTranslation(new float[3]{-0.1815,-0.0877,0.5983});
Shape* Shape1081 = new Shape();
Shape1081->setUSE("SiteShape");
Transform1080->addChild(Shape1081);

HAnimSite1079->addChild(Transform1080);

HAnimSegment1075->addChild(HAnimSite1079);

HAnimJoint1074->addChild(HAnimSegment1075);

HAnimJoint* HAnimJoint1082 = new HAnimJoint();
HAnimJoint1082->setName("r_carpal_distal_phalanx_2");
HAnimJoint1082->setDEF("hanim_r_carpal_distal_phalanx_2");
HAnimJoint1082->setCenter(new float[3]{-0.1805,-0.0885,0.5731});
HAnimSegment* HAnimSegment1083 = new HAnimSegment();
HAnimSegment1083->setName("SEGMENT_FOR_r_carpal_distal_phalanx_2");
HAnimSegment1083->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2");
TouchSensor* TouchSensor1084 = new TouchSensor();
TouchSensor1084->setDescription("joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2");
HAnimSegment1083->addChild(TouchSensor1084);

Transform* Transform1085 = new Transform();
Transform1085->setTranslation(new float[3]{-0.1805,-0.0885,0.5731});
Shape* Shape1086 = new Shape();
Shape1086->setUSE("JointShape");
Transform1085->addChild(Shape1086);

HAnimSegment1083->addChild(Transform1085);

HAnimSite* HAnimSite1087 = new HAnimSite();
HAnimSite1087->setName("SEGMENT_FOR_r_carpal_distal_phalanx_2_tip");
HAnimSite1087->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip");
Transform* Transform1088 = new Transform();
Transform1088->setTranslation(new float[3]{-0.1805,-0.0885,0.5731});
Shape* Shape1089 = new Shape();
Shape1089->setUSE("SiteShape");
Transform1088->addChild(Shape1089);

HAnimSite1087->addChild(Transform1088);

HAnimSegment1083->addChild(HAnimSite1087);

HAnimJoint1082->addChild(HAnimSegment1083);

HAnimJoint1074->addChild(HAnimJoint1082);

HAnimJoint1066->addChild(HAnimJoint1074);

HAnimJoint1058->addChild(HAnimJoint1066);

HAnimJoint1050->addChild(HAnimJoint1058);

HAnimJoint1010->addChild(HAnimJoint1050);

HAnimJoint* HAnimJoint1090 = new HAnimJoint();
HAnimJoint1090->setName("r_capitate");
HAnimJoint1090->setDEF("hanim_r_capitate");
HAnimJoint1090->setCenter(new float[3]{-0.1809,-0.1067,0.7});
HAnimSegment* HAnimSegment1091 = new HAnimSegment();
HAnimSegment1091->setName("SEGMENT_FOR_r_capitate");
HAnimSegment1091->setDEF("hanim_SEGMENT_FOR_r_capitate");
TouchSensor* TouchSensor1092 = new TouchSensor();
TouchSensor1092->setDescription("joint r_capitate segment SEGMENT_FOR_r_capitate");
HAnimSegment1091->addChild(TouchSensor1092);

Transform* Transform1093 = new Transform();
Transform1093->setTranslation(new float[3]{-0.1809,-0.1067,0.7});
Shape* Shape1094 = new Shape();
Shape1094->setUSE("JointShape");
Transform1093->addChild(Shape1094);

HAnimSegment1091->addChild(Transform1093);

HAnimSite* HAnimSite1095 = new HAnimSite();
HAnimSite1095->setName("SEGMENT_FOR_r_capitate_tip");
HAnimSite1095->setDEF("hanim_SEGMENT_FOR_r_capitate_tip");
Transform* Transform1096 = new Transform();
Transform1096->setTranslation(new float[3]{-0.1809,-0.1067,0.7});
Shape* Shape1097 = new Shape();
Shape1097->setUSE("SiteShape");
Transform1096->addChild(Shape1097);

HAnimSite1095->addChild(Transform1096);

HAnimSegment1091->addChild(HAnimSite1095);

HAnimJoint1090->addChild(HAnimSegment1091);

HAnimJoint* HAnimJoint1098 = new HAnimJoint();
HAnimJoint1098->setName("r_metacarpal_3");
HAnimJoint1098->setDEF("hanim_r_metacarpal_3");
HAnimJoint1098->setCenter(new float[3]{-0.1809,-0.1081,0.6772});
HAnimSegment* HAnimSegment1099 = new HAnimSegment();
HAnimSegment1099->setName("SEGMENT_FOR_r_metacarpal_3");
HAnimSegment1099->setDEF("hanim_SEGMENT_FOR_r_metacarpal_3");
TouchSensor* TouchSensor1100 = new TouchSensor();
TouchSensor1100->setDescription("joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3");
HAnimSegment1099->addChild(TouchSensor1100);

Transform* Transform1101 = new Transform();
Transform1101->setTranslation(new float[3]{-0.1809,-0.1081,0.6772});
Shape* Shape1102 = new Shape();
Shape1102->setUSE("JointShape");
Transform1101->addChild(Shape1102);

HAnimSegment1099->addChild(Transform1101);

HAnimSite* HAnimSite1103 = new HAnimSite();
HAnimSite1103->setName("SEGMENT_FOR_r_metacarpal_3_tip");
HAnimSite1103->setDEF("hanim_SEGMENT_FOR_r_metacarpal_3_tip");
Transform* Transform1104 = new Transform();
Transform1104->setTranslation(new float[3]{-0.1809,-0.1081,0.6772});
Shape* Shape1105 = new Shape();
Shape1105->setUSE("SiteShape");
Transform1104->addChild(Shape1105);

HAnimSite1103->addChild(Transform1104);

HAnimSegment1099->addChild(HAnimSite1103);

HAnimJoint1098->addChild(HAnimSegment1099);

HAnimJoint* HAnimJoint1106 = new HAnimJoint();
HAnimJoint1106->setName("r_carpal_proximal_phalanx_3");
HAnimJoint1106->setDEF("hanim_r_carpal_proximal_phalanx_3");
HAnimJoint1106->setCenter(new float[3]{-0.1835,-0.1058,0.6264});
HAnimSegment* HAnimSegment1107 = new HAnimSegment();
HAnimSegment1107->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_3");
HAnimSegment1107->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3");
TouchSensor* TouchSensor1108 = new TouchSensor();
TouchSensor1108->setDescription("joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3");
HAnimSegment1107->addChild(TouchSensor1108);

Transform* Transform1109 = new Transform();
Transform1109->setTranslation(new float[3]{-0.1835,-0.1058,0.6264});
Shape* Shape1110 = new Shape();
Shape1110->setUSE("JointShape");
Transform1109->addChild(Shape1110);

HAnimSegment1107->addChild(Transform1109);

HAnimSite* HAnimSite1111 = new HAnimSite();
HAnimSite1111->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip");
HAnimSite1111->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip");
Transform* Transform1112 = new Transform();
Transform1112->setTranslation(new float[3]{-0.1835,-0.1058,0.6264});
Shape* Shape1113 = new Shape();
Shape1113->setUSE("SiteShape");
Transform1112->addChild(Shape1113);

HAnimSite1111->addChild(Transform1112);

HAnimSegment1107->addChild(HAnimSite1111);

HAnimJoint1106->addChild(HAnimSegment1107);

HAnimJoint* HAnimJoint1114 = new HAnimJoint();
HAnimJoint1114->setName("r_carpal_middle_phalanx_3");
HAnimJoint1114->setDEF("hanim_r_carpal_middle_phalanx_3");
HAnimJoint1114->setCenter(new float[3]{-0.1815,-0.1054,0.5947});
HAnimSegment* HAnimSegment1115 = new HAnimSegment();
HAnimSegment1115->setName("SEGMENT_FOR_r_carpal_middle_phalanx_3");
HAnimSegment1115->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3");
TouchSensor* TouchSensor1116 = new TouchSensor();
TouchSensor1116->setDescription("joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3");
HAnimSegment1115->addChild(TouchSensor1116);

Transform* Transform1117 = new Transform();
Transform1117->setTranslation(new float[3]{-0.1815,-0.1054,0.5947});
Shape* Shape1118 = new Shape();
Shape1118->setUSE("JointShape");
Transform1117->addChild(Shape1118);

HAnimSegment1115->addChild(Transform1117);

HAnimSite* HAnimSite1119 = new HAnimSite();
HAnimSite1119->setName("SEGMENT_FOR_r_carpal_middle_phalanx_3_tip");
HAnimSite1119->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip");
Transform* Transform1120 = new Transform();
Transform1120->setTranslation(new float[3]{-0.1815,-0.1054,0.5947});
Shape* Shape1121 = new Shape();
Shape1121->setUSE("SiteShape");
Transform1120->addChild(Shape1121);

HAnimSite1119->addChild(Transform1120);

HAnimSegment1115->addChild(HAnimSite1119);

HAnimJoint1114->addChild(HAnimSegment1115);

HAnimJoint* HAnimJoint1122 = new HAnimJoint();
HAnimJoint1122->setName("r_carpal_distal_phalanx_3");
HAnimJoint1122->setDEF("hanim_r_carpal_distal_phalanx_3");
HAnimJoint1122->setCenter(new float[3]{-0.1805,-0.1056,0.5668});
HAnimSegment* HAnimSegment1123 = new HAnimSegment();
HAnimSegment1123->setName("SEGMENT_FOR_r_carpal_distal_phalanx_3");
HAnimSegment1123->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3");
TouchSensor* TouchSensor1124 = new TouchSensor();
TouchSensor1124->setDescription("joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3");
HAnimSegment1123->addChild(TouchSensor1124);

Transform* Transform1125 = new Transform();
Transform1125->setTranslation(new float[3]{-0.1805,-0.1056,0.5668});
Shape* Shape1126 = new Shape();
Shape1126->setUSE("JointShape");
Transform1125->addChild(Shape1126);

HAnimSegment1123->addChild(Transform1125);

HAnimSite* HAnimSite1127 = new HAnimSite();
HAnimSite1127->setName("SEGMENT_FOR_r_carpal_distal_phalanx_3_tip");
HAnimSite1127->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip");
Transform* Transform1128 = new Transform();
Transform1128->setTranslation(new float[3]{-0.1805,-0.1056,0.5668});
Shape* Shape1129 = new Shape();
Shape1129->setUSE("SiteShape");
Transform1128->addChild(Shape1129);

HAnimSite1127->addChild(Transform1128);

HAnimSegment1123->addChild(HAnimSite1127);

HAnimJoint1122->addChild(HAnimSegment1123);

HAnimJoint1114->addChild(HAnimJoint1122);

HAnimJoint1106->addChild(HAnimJoint1114);

HAnimJoint1098->addChild(HAnimJoint1106);

HAnimJoint1090->addChild(HAnimJoint1098);

HAnimJoint1010->addChild(HAnimJoint1090);

HAnimJoint* HAnimJoint1130 = new HAnimJoint();
HAnimJoint1130->setName("r_hamate");
HAnimJoint1130->setDEF("hanim_r_hamate");
HAnimJoint1130->setCenter(new float[3]{-0.1809,-0.1276,0.6973});
HAnimSegment* HAnimSegment1131 = new HAnimSegment();
HAnimSegment1131->setName("SEGMENT_FOR_r_hamate");
HAnimSegment1131->setDEF("hanim_SEGMENT_FOR_r_hamate");
TouchSensor* TouchSensor1132 = new TouchSensor();
TouchSensor1132->setDescription("joint r_hamate segment SEGMENT_FOR_r_hamate");
HAnimSegment1131->addChild(TouchSensor1132);

Transform* Transform1133 = new Transform();
Transform1133->setTranslation(new float[3]{-0.1809,-0.1276,0.6973});
Shape* Shape1134 = new Shape();
Shape1134->setUSE("JointShape");
Transform1133->addChild(Shape1134);

HAnimSegment1131->addChild(Transform1133);

HAnimSite* HAnimSite1135 = new HAnimSite();
HAnimSite1135->setName("SEGMENT_FOR_r_hamate_tip");
HAnimSite1135->setDEF("hanim_SEGMENT_FOR_r_hamate_tip");
Transform* Transform1136 = new Transform();
Transform1136->setTranslation(new float[3]{-0.1809,-0.1276,0.6973});
Shape* Shape1137 = new Shape();
Shape1137->setUSE("SiteShape");
Transform1136->addChild(Shape1137);

HAnimSite1135->addChild(Transform1136);

HAnimSegment1131->addChild(HAnimSite1135);

HAnimJoint1130->addChild(HAnimSegment1131);

HAnimJoint* HAnimJoint1138 = new HAnimJoint();
HAnimJoint1138->setName("r_metacarpal_4");
HAnimJoint1138->setDEF("hanim_r_metacarpal_4");
HAnimJoint1138->setCenter(new float[3]{-0.1809,-0.1218,0.6777});
HAnimSegment* HAnimSegment1139 = new HAnimSegment();
HAnimSegment1139->setName("SEGMENT_FOR_r_metacarpal_4");
HAnimSegment1139->setDEF("hanim_SEGMENT_FOR_r_metacarpal_4");
TouchSensor* TouchSensor1140 = new TouchSensor();
TouchSensor1140->setDescription("joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4");
HAnimSegment1139->addChild(TouchSensor1140);

Transform* Transform1141 = new Transform();
Transform1141->setTranslation(new float[3]{-0.1809,-0.1218,0.6777});
Shape* Shape1142 = new Shape();
Shape1142->setUSE("JointShape");
Transform1141->addChild(Shape1142);

HAnimSegment1139->addChild(Transform1141);

HAnimSite* HAnimSite1143 = new HAnimSite();
HAnimSite1143->setName("SEGMENT_FOR_r_metacarpal_4_tip");
HAnimSite1143->setDEF("hanim_SEGMENT_FOR_r_metacarpal_4_tip");
Transform* Transform1144 = new Transform();
Transform1144->setTranslation(new float[3]{-0.1809,-0.1218,0.6777});
Shape* Shape1145 = new Shape();
Shape1145->setUSE("SiteShape");
Transform1144->addChild(Shape1145);

HAnimSite1143->addChild(Transform1144);

HAnimSegment1139->addChild(HAnimSite1143);

HAnimJoint1138->addChild(HAnimSegment1139);

HAnimJoint* HAnimJoint1146 = new HAnimJoint();
HAnimJoint1146->setName("r_carpal_proximal_phalanx_4");
HAnimJoint1146->setDEF("hanim_r_carpal_proximal_phalanx_4");
HAnimJoint1146->setCenter(new float[3]{-0.1835,-0.1233,0.6255});
HAnimSegment* HAnimSegment1147 = new HAnimSegment();
HAnimSegment1147->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_4");
HAnimSegment1147->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4");
TouchSensor* TouchSensor1148 = new TouchSensor();
TouchSensor1148->setDescription("joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4");
HAnimSegment1147->addChild(TouchSensor1148);

Transform* Transform1149 = new Transform();
Transform1149->setTranslation(new float[3]{-0.1835,-0.1233,0.6255});
Shape* Shape1150 = new Shape();
Shape1150->setUSE("JointShape");
Transform1149->addChild(Shape1150);

HAnimSegment1147->addChild(Transform1149);

HAnimSite* HAnimSite1151 = new HAnimSite();
HAnimSite1151->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip");
HAnimSite1151->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip");
Transform* Transform1152 = new Transform();
Transform1152->setTranslation(new float[3]{-0.1835,-0.1233,0.6255});
Shape* Shape1153 = new Shape();
Shape1153->setUSE("SiteShape");
Transform1152->addChild(Shape1153);

HAnimSite1151->addChild(Transform1152);

HAnimSegment1147->addChild(HAnimSite1151);

HAnimJoint1146->addChild(HAnimSegment1147);

HAnimJoint* HAnimJoint1154 = new HAnimJoint();
HAnimJoint1154->setName("r_carpal_middle_phalanx_4");
HAnimJoint1154->setDEF("hanim_r_carpal_middle_phalanx_4");
HAnimJoint1154->setCenter(new float[3]{-0.1815,-0.1225,0.598});
HAnimSegment* HAnimSegment1155 = new HAnimSegment();
HAnimSegment1155->setName("SEGMENT_FOR_r_carpal_middle_phalanx_4");
HAnimSegment1155->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4");
TouchSensor* TouchSensor1156 = new TouchSensor();
TouchSensor1156->setDescription("joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4");
HAnimSegment1155->addChild(TouchSensor1156);

Transform* Transform1157 = new Transform();
Transform1157->setTranslation(new float[3]{-0.1815,-0.1225,0.598});
Shape* Shape1158 = new Shape();
Shape1158->setUSE("JointShape");
Transform1157->addChild(Shape1158);

HAnimSegment1155->addChild(Transform1157);

HAnimSite* HAnimSite1159 = new HAnimSite();
HAnimSite1159->setName("SEGMENT_FOR_r_carpal_middle_phalanx_4_tip");
HAnimSite1159->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip");
Transform* Transform1160 = new Transform();
Transform1160->setTranslation(new float[3]{-0.1815,-0.1225,0.598});
Shape* Shape1161 = new Shape();
Shape1161->setUSE("SiteShape");
Transform1160->addChild(Shape1161);

HAnimSite1159->addChild(Transform1160);

HAnimSegment1155->addChild(HAnimSite1159);

HAnimJoint1154->addChild(HAnimSegment1155);

HAnimJoint* HAnimJoint1162 = new HAnimJoint();
HAnimJoint1162->setName("r_carpal_distal_phalanx_4");
HAnimJoint1162->setDEF("hanim_r_carpal_distal_phalanx_4");
HAnimJoint1162->setCenter(new float[3]{-0.1805,-0.1217,0.5722});
HAnimSegment* HAnimSegment1163 = new HAnimSegment();
HAnimSegment1163->setName("SEGMENT_FOR_r_carpal_distal_phalanx_4");
HAnimSegment1163->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4");
TouchSensor* TouchSensor1164 = new TouchSensor();
TouchSensor1164->setDescription("joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4");
HAnimSegment1163->addChild(TouchSensor1164);

Transform* Transform1165 = new Transform();
Transform1165->setTranslation(new float[3]{-0.1805,-0.1217,0.5722});
Shape* Shape1166 = new Shape();
Shape1166->setUSE("JointShape");
Transform1165->addChild(Shape1166);

HAnimSegment1163->addChild(Transform1165);

HAnimSite* HAnimSite1167 = new HAnimSite();
HAnimSite1167->setName("SEGMENT_FOR_r_carpal_distal_phalanx_4_tip");
HAnimSite1167->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip");
Transform* Transform1168 = new Transform();
Transform1168->setTranslation(new float[3]{-0.1805,-0.1217,0.5722});
Shape* Shape1169 = new Shape();
Shape1169->setUSE("SiteShape");
Transform1168->addChild(Shape1169);

HAnimSite1167->addChild(Transform1168);

HAnimSegment1163->addChild(HAnimSite1167);

HAnimJoint1162->addChild(HAnimSegment1163);

HAnimJoint1154->addChild(HAnimJoint1162);

HAnimJoint1146->addChild(HAnimJoint1154);

HAnimJoint1138->addChild(HAnimJoint1146);

HAnimJoint1130->addChild(HAnimJoint1138);

HAnimJoint* HAnimJoint1170 = new HAnimJoint();
HAnimJoint1170->setName("r_metacarpal_5");
HAnimJoint1170->setDEF("hanim_r_metacarpal_5");
HAnimJoint1170->setCenter(new float[3]{-0.1814,-0.1347,0.6797});
HAnimSegment* HAnimSegment1171 = new HAnimSegment();
HAnimSegment1171->setName("SEGMENT_FOR_r_metacarpal_5");
HAnimSegment1171->setDEF("hanim_SEGMENT_FOR_r_metacarpal_5");
TouchSensor* TouchSensor1172 = new TouchSensor();
TouchSensor1172->setDescription("joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5");
HAnimSegment1171->addChild(TouchSensor1172);

Transform* Transform1173 = new Transform();
Transform1173->setTranslation(new float[3]{-0.1814,-0.1347,0.6797});
Shape* Shape1174 = new Shape();
Shape1174->setUSE("JointShape");
Transform1173->addChild(Shape1174);

HAnimSegment1171->addChild(Transform1173);

HAnimSite* HAnimSite1175 = new HAnimSite();
HAnimSite1175->setName("SEGMENT_FOR_r_metacarpal_5_tip");
HAnimSite1175->setDEF("hanim_SEGMENT_FOR_r_metacarpal_5_tip");
Transform* Transform1176 = new Transform();
Transform1176->setTranslation(new float[3]{-0.1814,-0.1347,0.6797});
Shape* Shape1177 = new Shape();
Shape1177->setUSE("SiteShape");
Transform1176->addChild(Shape1177);

HAnimSite1175->addChild(Transform1176);

HAnimSegment1171->addChild(HAnimSite1175);

HAnimJoint1170->addChild(HAnimSegment1171);

HAnimJoint* HAnimJoint1178 = new HAnimJoint();
HAnimJoint1178->setName("r_carpal_proximal_phalanx_5");
HAnimJoint1178->setDEF("hanim_r_carpal_proximal_phalanx_5");
HAnimJoint1178->setCenter(new float[3]{-0.1832,-0.1389,0.6295});
HAnimSegment* HAnimSegment1179 = new HAnimSegment();
HAnimSegment1179->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_5");
HAnimSegment1179->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5");
TouchSensor* TouchSensor1180 = new TouchSensor();
TouchSensor1180->setDescription("joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5");
HAnimSegment1179->addChild(TouchSensor1180);

Transform* Transform1181 = new Transform();
Transform1181->setTranslation(new float[3]{-0.1832,-0.1389,0.6295});
Shape* Shape1182 = new Shape();
Shape1182->setUSE("JointShape");
Transform1181->addChild(Shape1182);

HAnimSegment1179->addChild(Transform1181);

HAnimSite* HAnimSite1183 = new HAnimSite();
HAnimSite1183->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip");
HAnimSite1183->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip");
Transform* Transform1184 = new Transform();
Transform1184->setTranslation(new float[3]{-0.1832,-0.1389,0.6295});
Shape* Shape1185 = new Shape();
Shape1185->setUSE("SiteShape");
Transform1184->addChild(Shape1185);

HAnimSite1183->addChild(Transform1184);

HAnimSegment1179->addChild(HAnimSite1183);

HAnimJoint1178->addChild(HAnimSegment1179);

HAnimJoint* HAnimJoint1186 = new HAnimJoint();
HAnimJoint1186->setName("r_carpal_middle_phalanx_5");
HAnimJoint1186->setDEF("hanim_r_carpal_middle_phalanx_5");
HAnimJoint1186->setCenter(new float[3]{-0.1815,-0.139,0.6124});
HAnimSegment* HAnimSegment1187 = new HAnimSegment();
HAnimSegment1187->setName("SEGMENT_FOR_r_carpal_middle_phalanx_5");
HAnimSegment1187->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5");
TouchSensor* TouchSensor1188 = new TouchSensor();
TouchSensor1188->setDescription("joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5");
HAnimSegment1187->addChild(TouchSensor1188);

Transform* Transform1189 = new Transform();
Transform1189->setTranslation(new float[3]{-0.1815,-0.139,0.6124});
Shape* Shape1190 = new Shape();
Shape1190->setUSE("JointShape");
Transform1189->addChild(Shape1190);

HAnimSegment1187->addChild(Transform1189);

HAnimSite* HAnimSite1191 = new HAnimSite();
HAnimSite1191->setName("SEGMENT_FOR_r_carpal_middle_phalanx_5_tip");
HAnimSite1191->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip");
Transform* Transform1192 = new Transform();
Transform1192->setTranslation(new float[3]{-0.1815,-0.139,0.6124});
Shape* Shape1193 = new Shape();
Shape1193->setUSE("SiteShape");
Transform1192->addChild(Shape1193);

HAnimSite1191->addChild(Transform1192);

HAnimSegment1187->addChild(HAnimSite1191);

HAnimJoint1186->addChild(HAnimSegment1187);

HAnimJoint* HAnimJoint1194 = new HAnimJoint();
HAnimJoint1194->setName("r_carpal_distal_phalanx_5");
HAnimJoint1194->setDEF("hanim_r_carpal_distal_phalanx_5");
HAnimJoint1194->setCenter(new float[3]{-0.1806,-0.1388,0.5938});
HAnimSegment* HAnimSegment1195 = new HAnimSegment();
HAnimSegment1195->setName("SEGMENT_FOR_r_carpal_distal_phalanx_5");
HAnimSegment1195->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5");
TouchSensor* TouchSensor1196 = new TouchSensor();
TouchSensor1196->setDescription("joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5");
HAnimSegment1195->addChild(TouchSensor1196);

Transform* Transform1197 = new Transform();
Transform1197->setTranslation(new float[3]{-0.1806,-0.1388,0.5938});
Shape* Shape1198 = new Shape();
Shape1198->setUSE("JointShape");
Transform1197->addChild(Shape1198);

HAnimSegment1195->addChild(Transform1197);

HAnimSite* HAnimSite1199 = new HAnimSite();
HAnimSite1199->setName("SEGMENT_FOR_r_carpal_distal_phalanx_5_tip");
HAnimSite1199->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip");
Transform* Transform1200 = new Transform();
Transform1200->setTranslation(new float[3]{-0.1806,-0.1388,0.5938});
Shape* Shape1201 = new Shape();
Shape1201->setUSE("SiteShape");
Transform1200->addChild(Shape1201);

HAnimSite1199->addChild(Transform1200);

HAnimSegment1195->addChild(HAnimSite1199);

HAnimJoint1194->addChild(HAnimSegment1195);

HAnimJoint1186->addChild(HAnimJoint1194);

HAnimJoint1178->addChild(HAnimJoint1186);

HAnimJoint1170->addChild(HAnimJoint1178);

HAnimJoint1130->addChild(HAnimJoint1170);

HAnimJoint1010->addChild(HAnimJoint1130);

HAnimJoint1002->addChild(HAnimJoint1010);

HAnimJoint994->addChild(HAnimJoint1002);

HAnimJoint986->addChild(HAnimJoint994);

HAnimJoint978->addChild(HAnimJoint986);

HAnimJoint626->addChild(HAnimJoint978);

HAnimJoint618->addChild(HAnimJoint626);

HAnimJoint610->addChild(HAnimJoint618);

HAnimJoint602->addChild(HAnimJoint610);

HAnimJoint594->addChild(HAnimJoint602);

HAnimJoint586->addChild(HAnimJoint594);

HAnimJoint578->addChild(HAnimJoint586);

HAnimJoint570->addChild(HAnimJoint578);

HAnimJoint562->addChild(HAnimJoint570);

HAnimJoint554->addChild(HAnimJoint562);

HAnimJoint546->addChild(HAnimJoint554);

HAnimJoint538->addChild(HAnimJoint546);

HAnimJoint530->addChild(HAnimJoint538);

HAnimJoint522->addChild(HAnimJoint530);

HAnimJoint514->addChild(HAnimJoint522);

HAnimJoint506->addChild(HAnimJoint514);

HAnimJoint498->addChild(HAnimJoint506);

HAnimJoint34->addChild(HAnimJoint498);

HAnimJoint26->addChild(HAnimJoint34);

HAnimHumanoid25->setSkeleton(HAnimJoint26);

HAnimJoint* HAnimJoint1202 = new HAnimJoint();
HAnimJoint1202->setUSE("hanim_sacrum");
HAnimHumanoid25->addJoints(HAnimJoint1202);

HAnimJoint* HAnimJoint1203 = new HAnimJoint();
HAnimJoint1203->setUSE("hanim_pelvis");
HAnimHumanoid25->addJoints(HAnimJoint1203);

HAnimJoint* HAnimJoint1204 = new HAnimJoint();
HAnimJoint1204->setUSE("hanim_l_thigh");
HAnimHumanoid25->addJoints(HAnimJoint1204);

HAnimJoint* HAnimJoint1205 = new HAnimJoint();
HAnimJoint1205->setUSE("hanim_l_calf");
HAnimHumanoid25->addJoints(HAnimJoint1205);

HAnimJoint* HAnimJoint1206 = new HAnimJoint();
HAnimJoint1206->setUSE("hanim_l_talus");
HAnimHumanoid25->addJoints(HAnimJoint1206);

HAnimJoint* HAnimJoint1207 = new HAnimJoint();
HAnimJoint1207->setUSE("hanim_l_navicular");
HAnimHumanoid25->addJoints(HAnimJoint1207);

HAnimJoint* HAnimJoint1208 = new HAnimJoint();
HAnimJoint1208->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid25->addJoints(HAnimJoint1208);

HAnimJoint* HAnimJoint1209 = new HAnimJoint();
HAnimJoint1209->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid25->addJoints(HAnimJoint1209);

HAnimJoint* HAnimJoint1210 = new HAnimJoint();
HAnimJoint1210->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid25->addJoints(HAnimJoint1210);

HAnimJoint* HAnimJoint1211 = new HAnimJoint();
HAnimJoint1211->setUSE("hanim_l_tarsal_distal_phalanx_1");
HAnimHumanoid25->addJoints(HAnimJoint1211);

HAnimJoint* HAnimJoint1212 = new HAnimJoint();
HAnimJoint1212->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid25->addJoints(HAnimJoint1212);

HAnimJoint* HAnimJoint1213 = new HAnimJoint();
HAnimJoint1213->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid25->addJoints(HAnimJoint1213);

HAnimJoint* HAnimJoint1214 = new HAnimJoint();
HAnimJoint1214->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid25->addJoints(HAnimJoint1214);

HAnimJoint* HAnimJoint1215 = new HAnimJoint();
HAnimJoint1215->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid25->addJoints(HAnimJoint1215);

HAnimJoint* HAnimJoint1216 = new HAnimJoint();
HAnimJoint1216->setUSE("hanim_l_tarsal_distal_phalanx_2");
HAnimHumanoid25->addJoints(HAnimJoint1216);

HAnimJoint* HAnimJoint1217 = new HAnimJoint();
HAnimJoint1217->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid25->addJoints(HAnimJoint1217);

HAnimJoint* HAnimJoint1218 = new HAnimJoint();
HAnimJoint1218->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid25->addJoints(HAnimJoint1218);

HAnimJoint* HAnimJoint1219 = new HAnimJoint();
HAnimJoint1219->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid25->addJoints(HAnimJoint1219);

HAnimJoint* HAnimJoint1220 = new HAnimJoint();
HAnimJoint1220->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid25->addJoints(HAnimJoint1220);

HAnimJoint* HAnimJoint1221 = new HAnimJoint();
HAnimJoint1221->setUSE("hanim_l_tarsal_distal_phalanx_3");
HAnimHumanoid25->addJoints(HAnimJoint1221);

HAnimJoint* HAnimJoint1222 = new HAnimJoint();
HAnimJoint1222->setUSE("hanim_l_calcaneus");
HAnimHumanoid25->addJoints(HAnimJoint1222);

HAnimJoint* HAnimJoint1223 = new HAnimJoint();
HAnimJoint1223->setUSE("hanim_l_cuboid");
HAnimHumanoid25->addJoints(HAnimJoint1223);

HAnimJoint* HAnimJoint1224 = new HAnimJoint();
HAnimJoint1224->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid25->addJoints(HAnimJoint1224);

HAnimJoint* HAnimJoint1225 = new HAnimJoint();
HAnimJoint1225->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid25->addJoints(HAnimJoint1225);

HAnimJoint* HAnimJoint1226 = new HAnimJoint();
HAnimJoint1226->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid25->addJoints(HAnimJoint1226);

HAnimJoint* HAnimJoint1227 = new HAnimJoint();
HAnimJoint1227->setUSE("hanim_l_tarsal_distal_phalanx_4");
HAnimHumanoid25->addJoints(HAnimJoint1227);

HAnimJoint* HAnimJoint1228 = new HAnimJoint();
HAnimJoint1228->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid25->addJoints(HAnimJoint1228);

HAnimJoint* HAnimJoint1229 = new HAnimJoint();
HAnimJoint1229->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid25->addJoints(HAnimJoint1229);

HAnimJoint* HAnimJoint1230 = new HAnimJoint();
HAnimJoint1230->setUSE("hanim_l_tarsal_middle_phalanx_5");
HAnimHumanoid25->addJoints(HAnimJoint1230);

HAnimJoint* HAnimJoint1231 = new HAnimJoint();
HAnimJoint1231->setUSE("hanim_l_tarsal_distal_phalanx_5");
HAnimHumanoid25->addJoints(HAnimJoint1231);

HAnimJoint* HAnimJoint1232 = new HAnimJoint();
HAnimJoint1232->setUSE("hanim_r_thigh");
HAnimHumanoid25->addJoints(HAnimJoint1232);

HAnimJoint* HAnimJoint1233 = new HAnimJoint();
HAnimJoint1233->setUSE("hanim_r_calf");
HAnimHumanoid25->addJoints(HAnimJoint1233);

HAnimJoint* HAnimJoint1234 = new HAnimJoint();
HAnimJoint1234->setUSE("hanim_r_talus");
HAnimHumanoid25->addJoints(HAnimJoint1234);

HAnimJoint* HAnimJoint1235 = new HAnimJoint();
HAnimJoint1235->setUSE("hanim_r_navicular");
HAnimHumanoid25->addJoints(HAnimJoint1235);

HAnimJoint* HAnimJoint1236 = new HAnimJoint();
HAnimJoint1236->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid25->addJoints(HAnimJoint1236);

HAnimJoint* HAnimJoint1237 = new HAnimJoint();
HAnimJoint1237->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid25->addJoints(HAnimJoint1237);

HAnimJoint* HAnimJoint1238 = new HAnimJoint();
HAnimJoint1238->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid25->addJoints(HAnimJoint1238);

HAnimJoint* HAnimJoint1239 = new HAnimJoint();
HAnimJoint1239->setUSE("hanim_r_tarsal_distal_phalanx_1");
HAnimHumanoid25->addJoints(HAnimJoint1239);

HAnimJoint* HAnimJoint1240 = new HAnimJoint();
HAnimJoint1240->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid25->addJoints(HAnimJoint1240);

HAnimJoint* HAnimJoint1241 = new HAnimJoint();
HAnimJoint1241->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid25->addJoints(HAnimJoint1241);

HAnimJoint* HAnimJoint1242 = new HAnimJoint();
HAnimJoint1242->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid25->addJoints(HAnimJoint1242);

HAnimJoint* HAnimJoint1243 = new HAnimJoint();
HAnimJoint1243->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid25->addJoints(HAnimJoint1243);

HAnimJoint* HAnimJoint1244 = new HAnimJoint();
HAnimJoint1244->setUSE("hanim_r_tarsal_distal_phalanx_2");
HAnimHumanoid25->addJoints(HAnimJoint1244);

HAnimJoint* HAnimJoint1245 = new HAnimJoint();
HAnimJoint1245->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid25->addJoints(HAnimJoint1245);

HAnimJoint* HAnimJoint1246 = new HAnimJoint();
HAnimJoint1246->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid25->addJoints(HAnimJoint1246);

HAnimJoint* HAnimJoint1247 = new HAnimJoint();
HAnimJoint1247->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid25->addJoints(HAnimJoint1247);

HAnimJoint* HAnimJoint1248 = new HAnimJoint();
HAnimJoint1248->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid25->addJoints(HAnimJoint1248);

HAnimJoint* HAnimJoint1249 = new HAnimJoint();
HAnimJoint1249->setUSE("hanim_r_tarsal_distal_phalanx_3");
HAnimHumanoid25->addJoints(HAnimJoint1249);

HAnimJoint* HAnimJoint1250 = new HAnimJoint();
HAnimJoint1250->setUSE("hanim_r_calcaneus");
HAnimHumanoid25->addJoints(HAnimJoint1250);

HAnimJoint* HAnimJoint1251 = new HAnimJoint();
HAnimJoint1251->setUSE("hanim_r_cuboid");
HAnimHumanoid25->addJoints(HAnimJoint1251);

HAnimJoint* HAnimJoint1252 = new HAnimJoint();
HAnimJoint1252->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid25->addJoints(HAnimJoint1252);

HAnimJoint* HAnimJoint1253 = new HAnimJoint();
HAnimJoint1253->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid25->addJoints(HAnimJoint1253);

HAnimJoint* HAnimJoint1254 = new HAnimJoint();
HAnimJoint1254->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid25->addJoints(HAnimJoint1254);

HAnimJoint* HAnimJoint1255 = new HAnimJoint();
HAnimJoint1255->setUSE("hanim_r_tarsal_distal_phalanx_4");
HAnimHumanoid25->addJoints(HAnimJoint1255);

HAnimJoint* HAnimJoint1256 = new HAnimJoint();
HAnimJoint1256->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid25->addJoints(HAnimJoint1256);

HAnimJoint* HAnimJoint1257 = new HAnimJoint();
HAnimJoint1257->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid25->addJoints(HAnimJoint1257);

HAnimJoint* HAnimJoint1258 = new HAnimJoint();
HAnimJoint1258->setUSE("hanim_r_tarsal_middle_phalanx_5");
HAnimHumanoid25->addJoints(HAnimJoint1258);

HAnimJoint* HAnimJoint1259 = new HAnimJoint();
HAnimJoint1259->setUSE("hanim_r_tarsal_distal_phalanx_5");
HAnimHumanoid25->addJoints(HAnimJoint1259);

HAnimJoint* HAnimJoint1260 = new HAnimJoint();
HAnimJoint1260->setUSE("hanim_l5");
HAnimHumanoid25->addJoints(HAnimJoint1260);

HAnimJoint* HAnimJoint1261 = new HAnimJoint();
HAnimJoint1261->setUSE("hanim_l4");
HAnimHumanoid25->addJoints(HAnimJoint1261);

HAnimJoint* HAnimJoint1262 = new HAnimJoint();
HAnimJoint1262->setUSE("hanim_l3");
HAnimHumanoid25->addJoints(HAnimJoint1262);

HAnimJoint* HAnimJoint1263 = new HAnimJoint();
HAnimJoint1263->setUSE("hanim_l2");
HAnimHumanoid25->addJoints(HAnimJoint1263);

HAnimJoint* HAnimJoint1264 = new HAnimJoint();
HAnimJoint1264->setUSE("hanim_l1");
HAnimHumanoid25->addJoints(HAnimJoint1264);

HAnimJoint* HAnimJoint1265 = new HAnimJoint();
HAnimJoint1265->setUSE("hanim_t12");
HAnimHumanoid25->addJoints(HAnimJoint1265);

HAnimJoint* HAnimJoint1266 = new HAnimJoint();
HAnimJoint1266->setUSE("hanim_t11");
HAnimHumanoid25->addJoints(HAnimJoint1266);

HAnimJoint* HAnimJoint1267 = new HAnimJoint();
HAnimJoint1267->setUSE("hanim_t10");
HAnimHumanoid25->addJoints(HAnimJoint1267);

HAnimJoint* HAnimJoint1268 = new HAnimJoint();
HAnimJoint1268->setUSE("hanim_t9");
HAnimHumanoid25->addJoints(HAnimJoint1268);

HAnimJoint* HAnimJoint1269 = new HAnimJoint();
HAnimJoint1269->setUSE("hanim_t8");
HAnimHumanoid25->addJoints(HAnimJoint1269);

HAnimJoint* HAnimJoint1270 = new HAnimJoint();
HAnimJoint1270->setUSE("hanim_t7");
HAnimHumanoid25->addJoints(HAnimJoint1270);

HAnimJoint* HAnimJoint1271 = new HAnimJoint();
HAnimJoint1271->setUSE("hanim_t6");
HAnimHumanoid25->addJoints(HAnimJoint1271);

HAnimJoint* HAnimJoint1272 = new HAnimJoint();
HAnimJoint1272->setUSE("hanim_t5");
HAnimHumanoid25->addJoints(HAnimJoint1272);

HAnimJoint* HAnimJoint1273 = new HAnimJoint();
HAnimJoint1273->setUSE("hanim_t4");
HAnimHumanoid25->addJoints(HAnimJoint1273);

HAnimJoint* HAnimJoint1274 = new HAnimJoint();
HAnimJoint1274->setUSE("hanim_t3");
HAnimHumanoid25->addJoints(HAnimJoint1274);

HAnimJoint* HAnimJoint1275 = new HAnimJoint();
HAnimJoint1275->setUSE("hanim_t2");
HAnimHumanoid25->addJoints(HAnimJoint1275);

HAnimJoint* HAnimJoint1276 = new HAnimJoint();
HAnimJoint1276->setUSE("hanim_t1");
HAnimHumanoid25->addJoints(HAnimJoint1276);

HAnimJoint* HAnimJoint1277 = new HAnimJoint();
HAnimJoint1277->setUSE("hanim_c7");
HAnimHumanoid25->addJoints(HAnimJoint1277);

HAnimJoint* HAnimJoint1278 = new HAnimJoint();
HAnimJoint1278->setUSE("hanim_c6");
HAnimHumanoid25->addJoints(HAnimJoint1278);

HAnimJoint* HAnimJoint1279 = new HAnimJoint();
HAnimJoint1279->setUSE("hanim_c5");
HAnimHumanoid25->addJoints(HAnimJoint1279);

HAnimJoint* HAnimJoint1280 = new HAnimJoint();
HAnimJoint1280->setUSE("hanim_c4");
HAnimHumanoid25->addJoints(HAnimJoint1280);

HAnimJoint* HAnimJoint1281 = new HAnimJoint();
HAnimJoint1281->setUSE("hanim_c3");
HAnimHumanoid25->addJoints(HAnimJoint1281);

HAnimJoint* HAnimJoint1282 = new HAnimJoint();
HAnimJoint1282->setUSE("hanim_c2");
HAnimHumanoid25->addJoints(HAnimJoint1282);

HAnimJoint* HAnimJoint1283 = new HAnimJoint();
HAnimJoint1283->setUSE("hanim_c1");
HAnimHumanoid25->addJoints(HAnimJoint1283);

HAnimJoint* HAnimJoint1284 = new HAnimJoint();
HAnimJoint1284->setUSE("hanim_skull");
HAnimHumanoid25->addJoints(HAnimJoint1284);

HAnimJoint* HAnimJoint1285 = new HAnimJoint();
HAnimJoint1285->setUSE("hanim_l_eyelid");
HAnimHumanoid25->addJoints(HAnimJoint1285);

HAnimJoint* HAnimJoint1286 = new HAnimJoint();
HAnimJoint1286->setUSE("hanim_r_eyelid");
HAnimHumanoid25->addJoints(HAnimJoint1286);

HAnimJoint* HAnimJoint1287 = new HAnimJoint();
HAnimJoint1287->setUSE("hanim_l_eyeball");
HAnimHumanoid25->addJoints(HAnimJoint1287);

HAnimJoint* HAnimJoint1288 = new HAnimJoint();
HAnimJoint1288->setUSE("hanim_r_eyeball");
HAnimHumanoid25->addJoints(HAnimJoint1288);

HAnimJoint* HAnimJoint1289 = new HAnimJoint();
HAnimJoint1289->setUSE("hanim_l_eyebrow");
HAnimHumanoid25->addJoints(HAnimJoint1289);

HAnimJoint* HAnimJoint1290 = new HAnimJoint();
HAnimJoint1290->setUSE("hanim_r_eyebrow");
HAnimHumanoid25->addJoints(HAnimJoint1290);

HAnimJoint* HAnimJoint1291 = new HAnimJoint();
HAnimJoint1291->setUSE("hanim_jaw");
HAnimHumanoid25->addJoints(HAnimJoint1291);

HAnimJoint* HAnimJoint1292 = new HAnimJoint();
HAnimJoint1292->setUSE("hanim_l_clavicle");
HAnimHumanoid25->addJoints(HAnimJoint1292);

HAnimJoint* HAnimJoint1293 = new HAnimJoint();
HAnimJoint1293->setUSE("hanim_l_scapula");
HAnimHumanoid25->addJoints(HAnimJoint1293);

HAnimJoint* HAnimJoint1294 = new HAnimJoint();
HAnimJoint1294->setUSE("hanim_l_upperarm");
HAnimHumanoid25->addJoints(HAnimJoint1294);

HAnimJoint* HAnimJoint1295 = new HAnimJoint();
HAnimJoint1295->setUSE("hanim_l_forearm");
HAnimHumanoid25->addJoints(HAnimJoint1295);

HAnimJoint* HAnimJoint1296 = new HAnimJoint();
HAnimJoint1296->setUSE("hanim_l_carpal");
HAnimHumanoid25->addJoints(HAnimJoint1296);

HAnimJoint* HAnimJoint1297 = new HAnimJoint();
HAnimJoint1297->setUSE("hanim_l_trapezium");
HAnimHumanoid25->addJoints(HAnimJoint1297);

HAnimJoint* HAnimJoint1298 = new HAnimJoint();
HAnimJoint1298->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid25->addJoints(HAnimJoint1298);

HAnimJoint* HAnimJoint1299 = new HAnimJoint();
HAnimJoint1299->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid25->addJoints(HAnimJoint1299);

HAnimJoint* HAnimJoint1300 = new HAnimJoint();
HAnimJoint1300->setUSE("hanim_l_carpal_distal_phalanx_1");
HAnimHumanoid25->addJoints(HAnimJoint1300);

HAnimJoint* HAnimJoint1301 = new HAnimJoint();
HAnimJoint1301->setUSE("hanim_l_trapezoid");
HAnimHumanoid25->addJoints(HAnimJoint1301);

HAnimJoint* HAnimJoint1302 = new HAnimJoint();
HAnimJoint1302->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid25->addJoints(HAnimJoint1302);

HAnimJoint* HAnimJoint1303 = new HAnimJoint();
HAnimJoint1303->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid25->addJoints(HAnimJoint1303);

HAnimJoint* HAnimJoint1304 = new HAnimJoint();
HAnimJoint1304->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid25->addJoints(HAnimJoint1304);

HAnimJoint* HAnimJoint1305 = new HAnimJoint();
HAnimJoint1305->setUSE("hanim_l_carpal_distal_phalanx_2");
HAnimHumanoid25->addJoints(HAnimJoint1305);

HAnimJoint* HAnimJoint1306 = new HAnimJoint();
HAnimJoint1306->setUSE("hanim_l_capitate");
HAnimHumanoid25->addJoints(HAnimJoint1306);

HAnimJoint* HAnimJoint1307 = new HAnimJoint();
HAnimJoint1307->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid25->addJoints(HAnimJoint1307);

HAnimJoint* HAnimJoint1308 = new HAnimJoint();
HAnimJoint1308->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid25->addJoints(HAnimJoint1308);

HAnimJoint* HAnimJoint1309 = new HAnimJoint();
HAnimJoint1309->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid25->addJoints(HAnimJoint1309);

HAnimJoint* HAnimJoint1310 = new HAnimJoint();
HAnimJoint1310->setUSE("hanim_l_carpal_distal_phalanx_3");
HAnimHumanoid25->addJoints(HAnimJoint1310);

HAnimJoint* HAnimJoint1311 = new HAnimJoint();
HAnimJoint1311->setUSE("hanim_l_hamate");
HAnimHumanoid25->addJoints(HAnimJoint1311);

HAnimJoint* HAnimJoint1312 = new HAnimJoint();
HAnimJoint1312->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid25->addJoints(HAnimJoint1312);

HAnimJoint* HAnimJoint1313 = new HAnimJoint();
HAnimJoint1313->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid25->addJoints(HAnimJoint1313);

HAnimJoint* HAnimJoint1314 = new HAnimJoint();
HAnimJoint1314->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid25->addJoints(HAnimJoint1314);

HAnimJoint* HAnimJoint1315 = new HAnimJoint();
HAnimJoint1315->setUSE("hanim_l_carpal_distal_phalanx_4");
HAnimHumanoid25->addJoints(HAnimJoint1315);

HAnimJoint* HAnimJoint1316 = new HAnimJoint();
HAnimJoint1316->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid25->addJoints(HAnimJoint1316);

HAnimJoint* HAnimJoint1317 = new HAnimJoint();
HAnimJoint1317->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid25->addJoints(HAnimJoint1317);

HAnimJoint* HAnimJoint1318 = new HAnimJoint();
HAnimJoint1318->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid25->addJoints(HAnimJoint1318);

HAnimJoint* HAnimJoint1319 = new HAnimJoint();
HAnimJoint1319->setUSE("hanim_l_carpal_distal_phalanx_5");
HAnimHumanoid25->addJoints(HAnimJoint1319);

HAnimJoint* HAnimJoint1320 = new HAnimJoint();
HAnimJoint1320->setUSE("hanim_r_clavicle");
HAnimHumanoid25->addJoints(HAnimJoint1320);

HAnimJoint* HAnimJoint1321 = new HAnimJoint();
HAnimJoint1321->setUSE("hanim_r_scapula");
HAnimHumanoid25->addJoints(HAnimJoint1321);

HAnimJoint* HAnimJoint1322 = new HAnimJoint();
HAnimJoint1322->setUSE("hanim_r_upperarm");
HAnimHumanoid25->addJoints(HAnimJoint1322);

HAnimJoint* HAnimJoint1323 = new HAnimJoint();
HAnimJoint1323->setUSE("hanim_r_forearm");
HAnimHumanoid25->addJoints(HAnimJoint1323);

HAnimJoint* HAnimJoint1324 = new HAnimJoint();
HAnimJoint1324->setUSE("hanim_r_carpal");
HAnimHumanoid25->addJoints(HAnimJoint1324);

HAnimJoint* HAnimJoint1325 = new HAnimJoint();
HAnimJoint1325->setUSE("hanim_r_trapezium");
HAnimHumanoid25->addJoints(HAnimJoint1325);

HAnimJoint* HAnimJoint1326 = new HAnimJoint();
HAnimJoint1326->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid25->addJoints(HAnimJoint1326);

HAnimJoint* HAnimJoint1327 = new HAnimJoint();
HAnimJoint1327->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid25->addJoints(HAnimJoint1327);

HAnimJoint* HAnimJoint1328 = new HAnimJoint();
HAnimJoint1328->setUSE("hanim_r_carpal_distal_phalanx_1");
HAnimHumanoid25->addJoints(HAnimJoint1328);

HAnimJoint* HAnimJoint1329 = new HAnimJoint();
HAnimJoint1329->setUSE("hanim_r_trapezoid");
HAnimHumanoid25->addJoints(HAnimJoint1329);

HAnimJoint* HAnimJoint1330 = new HAnimJoint();
HAnimJoint1330->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid25->addJoints(HAnimJoint1330);

HAnimJoint* HAnimJoint1331 = new HAnimJoint();
HAnimJoint1331->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid25->addJoints(HAnimJoint1331);

HAnimJoint* HAnimJoint1332 = new HAnimJoint();
HAnimJoint1332->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid25->addJoints(HAnimJoint1332);

HAnimJoint* HAnimJoint1333 = new HAnimJoint();
HAnimJoint1333->setUSE("hanim_r_carpal_distal_phalanx_2");
HAnimHumanoid25->addJoints(HAnimJoint1333);

HAnimJoint* HAnimJoint1334 = new HAnimJoint();
HAnimJoint1334->setUSE("hanim_r_capitate");
HAnimHumanoid25->addJoints(HAnimJoint1334);

HAnimJoint* HAnimJoint1335 = new HAnimJoint();
HAnimJoint1335->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid25->addJoints(HAnimJoint1335);

HAnimJoint* HAnimJoint1336 = new HAnimJoint();
HAnimJoint1336->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid25->addJoints(HAnimJoint1336);

HAnimJoint* HAnimJoint1337 = new HAnimJoint();
HAnimJoint1337->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid25->addJoints(HAnimJoint1337);

HAnimJoint* HAnimJoint1338 = new HAnimJoint();
HAnimJoint1338->setUSE("hanim_r_carpal_distal_phalanx_3");
HAnimHumanoid25->addJoints(HAnimJoint1338);

HAnimJoint* HAnimJoint1339 = new HAnimJoint();
HAnimJoint1339->setUSE("hanim_r_hamate");
HAnimHumanoid25->addJoints(HAnimJoint1339);

HAnimJoint* HAnimJoint1340 = new HAnimJoint();
HAnimJoint1340->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid25->addJoints(HAnimJoint1340);

HAnimJoint* HAnimJoint1341 = new HAnimJoint();
HAnimJoint1341->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid25->addJoints(HAnimJoint1341);

HAnimJoint* HAnimJoint1342 = new HAnimJoint();
HAnimJoint1342->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid25->addJoints(HAnimJoint1342);

HAnimJoint* HAnimJoint1343 = new HAnimJoint();
HAnimJoint1343->setUSE("hanim_r_carpal_distal_phalanx_4");
HAnimHumanoid25->addJoints(HAnimJoint1343);

HAnimJoint* HAnimJoint1344 = new HAnimJoint();
HAnimJoint1344->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid25->addJoints(HAnimJoint1344);

HAnimJoint* HAnimJoint1345 = new HAnimJoint();
HAnimJoint1345->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid25->addJoints(HAnimJoint1345);

HAnimJoint* HAnimJoint1346 = new HAnimJoint();
HAnimJoint1346->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid25->addJoints(HAnimJoint1346);

HAnimJoint* HAnimJoint1347 = new HAnimJoint();
HAnimJoint1347->setUSE("hanim_r_carpal_distal_phalanx_5");
HAnimHumanoid25->addJoints(HAnimJoint1347);

Transform24->addChild(HAnimHumanoid25);

Scene7->addChild(Transform24);

TimeSensor* TimeSensor1348 = new TimeSensor();
TimeSensor1348->setDEF("Armature_Clock");
TimeSensor1348->setCycleInterval(10.416666666666666);
TimeSensor1348->setLoop(True);
Scene7->addChild(TimeSensor1348);

ProximitySensor* ProximitySensor1349 = new ProximitySensor();
ProximitySensor1349->setDEF("Armature_Close");
ProximitySensor1349->setSize(new float[3]{1000000,1000000,1000000});
Scene7->addChild(ProximitySensor1349);

ROUTE* ROUTE1350 = new ROUTE();
ROUTE1350->setFromField("enterTime");
ROUTE1350->setFromNode("Armature_Close");
ROUTE1350->setToField("startTime");
ROUTE1350->setToNode("Armature_Clock");
Scene7->addChild(ROUTE1350);

OrientationInterpolator* OrientationInterpolator1351 = new OrientationInterpolator();
OrientationInterpolator1351->setDEF("Armature_OI_sacrum");
OrientationInterpolator1351->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1351->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1351);

OrientationInterpolator* OrientationInterpolator1352 = new OrientationInterpolator();
OrientationInterpolator1352->setDEF("Armature_OI_pelvis");
OrientationInterpolator1352->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1352->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1352);

OrientationInterpolator* OrientationInterpolator1353 = new OrientationInterpolator();
OrientationInterpolator1353->setDEF("Armature_OI_l_thigh");
OrientationInterpolator1353->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1353->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1353);

OrientationInterpolator* OrientationInterpolator1354 = new OrientationInterpolator();
OrientationInterpolator1354->setDEF("Armature_OI_l_calf");
OrientationInterpolator1354->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1354->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1354);

OrientationInterpolator* OrientationInterpolator1355 = new OrientationInterpolator();
OrientationInterpolator1355->setDEF("Armature_OI_l_talus");
OrientationInterpolator1355->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1355->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1355);

OrientationInterpolator* OrientationInterpolator1356 = new OrientationInterpolator();
OrientationInterpolator1356->setDEF("Armature_OI_l_navicular");
OrientationInterpolator1356->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1356->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1356);

OrientationInterpolator* OrientationInterpolator1357 = new OrientationInterpolator();
OrientationInterpolator1357->setDEF("Armature_OI_l_cuneiform_1");
OrientationInterpolator1357->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1357->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1357);

OrientationInterpolator* OrientationInterpolator1358 = new OrientationInterpolator();
OrientationInterpolator1358->setDEF("Armature_OI_l_metatarsal_1");
OrientationInterpolator1358->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1358->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1358);

OrientationInterpolator* OrientationInterpolator1359 = new OrientationInterpolator();
OrientationInterpolator1359->setDEF("Armature_OI_l_tarsal_proximal_phalanx_1");
OrientationInterpolator1359->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1359->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1359);

OrientationInterpolator* OrientationInterpolator1360 = new OrientationInterpolator();
OrientationInterpolator1360->setDEF("Armature_OI_l_tarsal_distal_phalanx_1");
OrientationInterpolator1360->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1360->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1360);

OrientationInterpolator* OrientationInterpolator1361 = new OrientationInterpolator();
OrientationInterpolator1361->setDEF("Armature_OI_l_cuneiform_2");
OrientationInterpolator1361->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1361->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1361);

OrientationInterpolator* OrientationInterpolator1362 = new OrientationInterpolator();
OrientationInterpolator1362->setDEF("Armature_OI_l_metatarsal_2");
OrientationInterpolator1362->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1362->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1362);

OrientationInterpolator* OrientationInterpolator1363 = new OrientationInterpolator();
OrientationInterpolator1363->setDEF("Armature_OI_l_tarsal_proximal_phalanx_2");
OrientationInterpolator1363->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1363->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1363);

OrientationInterpolator* OrientationInterpolator1364 = new OrientationInterpolator();
OrientationInterpolator1364->setDEF("Armature_OI_l_tarsal_middle_phalanx_2");
OrientationInterpolator1364->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1364->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1364);

OrientationInterpolator* OrientationInterpolator1365 = new OrientationInterpolator();
OrientationInterpolator1365->setDEF("Armature_OI_l_tarsal_distal_phalanx_2");
OrientationInterpolator1365->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1365->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1365);

OrientationInterpolator* OrientationInterpolator1366 = new OrientationInterpolator();
OrientationInterpolator1366->setDEF("Armature_OI_l_cuneiform_3");
OrientationInterpolator1366->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1366->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1366);

OrientationInterpolator* OrientationInterpolator1367 = new OrientationInterpolator();
OrientationInterpolator1367->setDEF("Armature_OI_l_metatarsal_3");
OrientationInterpolator1367->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1367->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1367);

OrientationInterpolator* OrientationInterpolator1368 = new OrientationInterpolator();
OrientationInterpolator1368->setDEF("Armature_OI_l_tarsal_proximal_phalanx_3");
OrientationInterpolator1368->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1368->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1368);

OrientationInterpolator* OrientationInterpolator1369 = new OrientationInterpolator();
OrientationInterpolator1369->setDEF("Armature_OI_l_tarsal_middle_phalanx_3");
OrientationInterpolator1369->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1369->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1369);

OrientationInterpolator* OrientationInterpolator1370 = new OrientationInterpolator();
OrientationInterpolator1370->setDEF("Armature_OI_l_tarsal_distal_phalanx_3");
OrientationInterpolator1370->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1370->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1370);

OrientationInterpolator* OrientationInterpolator1371 = new OrientationInterpolator();
OrientationInterpolator1371->setDEF("Armature_OI_l_calcaneus");
OrientationInterpolator1371->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1371->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1371);

OrientationInterpolator* OrientationInterpolator1372 = new OrientationInterpolator();
OrientationInterpolator1372->setDEF("Armature_OI_l_cuboid");
OrientationInterpolator1372->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1372->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1372);

OrientationInterpolator* OrientationInterpolator1373 = new OrientationInterpolator();
OrientationInterpolator1373->setDEF("Armature_OI_l_metatarsal_4");
OrientationInterpolator1373->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1373->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1373);

OrientationInterpolator* OrientationInterpolator1374 = new OrientationInterpolator();
OrientationInterpolator1374->setDEF("Armature_OI_l_tarsal_proximal_phalanx_4");
OrientationInterpolator1374->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1374->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1374);

OrientationInterpolator* OrientationInterpolator1375 = new OrientationInterpolator();
OrientationInterpolator1375->setDEF("Armature_OI_l_tarsal_middle_phalanx_4");
OrientationInterpolator1375->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1375->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1375);

OrientationInterpolator* OrientationInterpolator1376 = new OrientationInterpolator();
OrientationInterpolator1376->setDEF("Armature_OI_l_tarsal_distal_phalanx_4");
OrientationInterpolator1376->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1376->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1376);

OrientationInterpolator* OrientationInterpolator1377 = new OrientationInterpolator();
OrientationInterpolator1377->setDEF("Armature_OI_l_metatarsal_5");
OrientationInterpolator1377->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1377->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1377);

OrientationInterpolator* OrientationInterpolator1378 = new OrientationInterpolator();
OrientationInterpolator1378->setDEF("Armature_OI_l_tarsal_proximal_phalanx_5");
OrientationInterpolator1378->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1378->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1378);

OrientationInterpolator* OrientationInterpolator1379 = new OrientationInterpolator();
OrientationInterpolator1379->setDEF("Armature_OI_l_tarsal_middle_phalanx_5");
OrientationInterpolator1379->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1379->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1379);

OrientationInterpolator* OrientationInterpolator1380 = new OrientationInterpolator();
OrientationInterpolator1380->setDEF("Armature_OI_l_tarsal_distal_phalanx_5");
OrientationInterpolator1380->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1380->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1380);

OrientationInterpolator* OrientationInterpolator1381 = new OrientationInterpolator();
OrientationInterpolator1381->setDEF("Armature_OI_r_thigh");
OrientationInterpolator1381->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1381->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1381);

OrientationInterpolator* OrientationInterpolator1382 = new OrientationInterpolator();
OrientationInterpolator1382->setDEF("Armature_OI_r_calf");
OrientationInterpolator1382->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1382->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1382);

OrientationInterpolator* OrientationInterpolator1383 = new OrientationInterpolator();
OrientationInterpolator1383->setDEF("Armature_OI_r_talus");
OrientationInterpolator1383->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1383->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1383);

OrientationInterpolator* OrientationInterpolator1384 = new OrientationInterpolator();
OrientationInterpolator1384->setDEF("Armature_OI_r_navicular");
OrientationInterpolator1384->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1384->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1384);

OrientationInterpolator* OrientationInterpolator1385 = new OrientationInterpolator();
OrientationInterpolator1385->setDEF("Armature_OI_r_cuneiform_1");
OrientationInterpolator1385->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1385->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1385);

OrientationInterpolator* OrientationInterpolator1386 = new OrientationInterpolator();
OrientationInterpolator1386->setDEF("Armature_OI_r_metatarsal_1");
OrientationInterpolator1386->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1386->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1386);

OrientationInterpolator* OrientationInterpolator1387 = new OrientationInterpolator();
OrientationInterpolator1387->setDEF("Armature_OI_r_tarsal_proximal_phalanx_1");
OrientationInterpolator1387->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1387->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1387);

OrientationInterpolator* OrientationInterpolator1388 = new OrientationInterpolator();
OrientationInterpolator1388->setDEF("Armature_OI_r_tarsal_distal_phalanx_1");
OrientationInterpolator1388->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1388->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1388);

OrientationInterpolator* OrientationInterpolator1389 = new OrientationInterpolator();
OrientationInterpolator1389->setDEF("Armature_OI_r_cuneiform_2");
OrientationInterpolator1389->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1389->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1389);

OrientationInterpolator* OrientationInterpolator1390 = new OrientationInterpolator();
OrientationInterpolator1390->setDEF("Armature_OI_r_metatarsal_2");
OrientationInterpolator1390->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1390->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1390);

OrientationInterpolator* OrientationInterpolator1391 = new OrientationInterpolator();
OrientationInterpolator1391->setDEF("Armature_OI_r_tarsal_proximal_phalanx_2");
OrientationInterpolator1391->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1391->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1391);

OrientationInterpolator* OrientationInterpolator1392 = new OrientationInterpolator();
OrientationInterpolator1392->setDEF("Armature_OI_r_tarsal_middle_phalanx_2");
OrientationInterpolator1392->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1392->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1392);

OrientationInterpolator* OrientationInterpolator1393 = new OrientationInterpolator();
OrientationInterpolator1393->setDEF("Armature_OI_r_tarsal_distal_phalanx_2");
OrientationInterpolator1393->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1393->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1393);

OrientationInterpolator* OrientationInterpolator1394 = new OrientationInterpolator();
OrientationInterpolator1394->setDEF("Armature_OI_r_cuneiform_3");
OrientationInterpolator1394->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1394->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1394);

OrientationInterpolator* OrientationInterpolator1395 = new OrientationInterpolator();
OrientationInterpolator1395->setDEF("Armature_OI_r_metatarsal_3");
OrientationInterpolator1395->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1395->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1395);

OrientationInterpolator* OrientationInterpolator1396 = new OrientationInterpolator();
OrientationInterpolator1396->setDEF("Armature_OI_r_tarsal_proximal_phalanx_3");
OrientationInterpolator1396->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1396->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1396);

OrientationInterpolator* OrientationInterpolator1397 = new OrientationInterpolator();
OrientationInterpolator1397->setDEF("Armature_OI_r_tarsal_middle_phalanx_3");
OrientationInterpolator1397->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1397->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1397);

OrientationInterpolator* OrientationInterpolator1398 = new OrientationInterpolator();
OrientationInterpolator1398->setDEF("Armature_OI_r_tarsal_distal_phalanx_3");
OrientationInterpolator1398->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1398->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1398);

OrientationInterpolator* OrientationInterpolator1399 = new OrientationInterpolator();
OrientationInterpolator1399->setDEF("Armature_OI_r_calcaneus");
OrientationInterpolator1399->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1399->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1399);

OrientationInterpolator* OrientationInterpolator1400 = new OrientationInterpolator();
OrientationInterpolator1400->setDEF("Armature_OI_r_cuboid");
OrientationInterpolator1400->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1400->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1400);

OrientationInterpolator* OrientationInterpolator1401 = new OrientationInterpolator();
OrientationInterpolator1401->setDEF("Armature_OI_r_metatarsal_4");
OrientationInterpolator1401->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1401->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1401);

OrientationInterpolator* OrientationInterpolator1402 = new OrientationInterpolator();
OrientationInterpolator1402->setDEF("Armature_OI_r_tarsal_proximal_phalanx_4");
OrientationInterpolator1402->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1402->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1402);

OrientationInterpolator* OrientationInterpolator1403 = new OrientationInterpolator();
OrientationInterpolator1403->setDEF("Armature_OI_r_tarsal_middle_phalanx_4");
OrientationInterpolator1403->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1403->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1403);

OrientationInterpolator* OrientationInterpolator1404 = new OrientationInterpolator();
OrientationInterpolator1404->setDEF("Armature_OI_r_tarsal_distal_phalanx_4");
OrientationInterpolator1404->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1404->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1404);

OrientationInterpolator* OrientationInterpolator1405 = new OrientationInterpolator();
OrientationInterpolator1405->setDEF("Armature_OI_r_metatarsal_5");
OrientationInterpolator1405->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1405->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1405);

OrientationInterpolator* OrientationInterpolator1406 = new OrientationInterpolator();
OrientationInterpolator1406->setDEF("Armature_OI_r_tarsal_proximal_phalanx_5");
OrientationInterpolator1406->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1406->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1406);

OrientationInterpolator* OrientationInterpolator1407 = new OrientationInterpolator();
OrientationInterpolator1407->setDEF("Armature_OI_r_tarsal_middle_phalanx_5");
OrientationInterpolator1407->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1407->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1407);

OrientationInterpolator* OrientationInterpolator1408 = new OrientationInterpolator();
OrientationInterpolator1408->setDEF("Armature_OI_r_tarsal_distal_phalanx_5");
OrientationInterpolator1408->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1408->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1408);

OrientationInterpolator* OrientationInterpolator1409 = new OrientationInterpolator();
OrientationInterpolator1409->setDEF("Armature_OI_l5");
OrientationInterpolator1409->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1409->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1409);

OrientationInterpolator* OrientationInterpolator1410 = new OrientationInterpolator();
OrientationInterpolator1410->setDEF("Armature_OI_l4");
OrientationInterpolator1410->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1410->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1410);

OrientationInterpolator* OrientationInterpolator1411 = new OrientationInterpolator();
OrientationInterpolator1411->setDEF("Armature_OI_l3");
OrientationInterpolator1411->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1411->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1411);

OrientationInterpolator* OrientationInterpolator1412 = new OrientationInterpolator();
OrientationInterpolator1412->setDEF("Armature_OI_l2");
OrientationInterpolator1412->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1412->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1412);

OrientationInterpolator* OrientationInterpolator1413 = new OrientationInterpolator();
OrientationInterpolator1413->setDEF("Armature_OI_l1");
OrientationInterpolator1413->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1413->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1413);

OrientationInterpolator* OrientationInterpolator1414 = new OrientationInterpolator();
OrientationInterpolator1414->setDEF("Armature_OI_t12");
OrientationInterpolator1414->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1414->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1414);

OrientationInterpolator* OrientationInterpolator1415 = new OrientationInterpolator();
OrientationInterpolator1415->setDEF("Armature_OI_t11");
OrientationInterpolator1415->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1415->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1415);

OrientationInterpolator* OrientationInterpolator1416 = new OrientationInterpolator();
OrientationInterpolator1416->setDEF("Armature_OI_t10");
OrientationInterpolator1416->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1416->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1416);

OrientationInterpolator* OrientationInterpolator1417 = new OrientationInterpolator();
OrientationInterpolator1417->setDEF("Armature_OI_t9");
OrientationInterpolator1417->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1417->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1417);

OrientationInterpolator* OrientationInterpolator1418 = new OrientationInterpolator();
OrientationInterpolator1418->setDEF("Armature_OI_t8");
OrientationInterpolator1418->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1418->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1418);

OrientationInterpolator* OrientationInterpolator1419 = new OrientationInterpolator();
OrientationInterpolator1419->setDEF("Armature_OI_t7");
OrientationInterpolator1419->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1419->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1419);

OrientationInterpolator* OrientationInterpolator1420 = new OrientationInterpolator();
OrientationInterpolator1420->setDEF("Armature_OI_t6");
OrientationInterpolator1420->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1420->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1420);

OrientationInterpolator* OrientationInterpolator1421 = new OrientationInterpolator();
OrientationInterpolator1421->setDEF("Armature_OI_t5");
OrientationInterpolator1421->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1421->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1421);

OrientationInterpolator* OrientationInterpolator1422 = new OrientationInterpolator();
OrientationInterpolator1422->setDEF("Armature_OI_t4");
OrientationInterpolator1422->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1422->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1422);

OrientationInterpolator* OrientationInterpolator1423 = new OrientationInterpolator();
OrientationInterpolator1423->setDEF("Armature_OI_t3");
OrientationInterpolator1423->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1423->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1423);

OrientationInterpolator* OrientationInterpolator1424 = new OrientationInterpolator();
OrientationInterpolator1424->setDEF("Armature_OI_t2");
OrientationInterpolator1424->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1424->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1424);

OrientationInterpolator* OrientationInterpolator1425 = new OrientationInterpolator();
OrientationInterpolator1425->setDEF("Armature_OI_t1");
OrientationInterpolator1425->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1425->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1425);

OrientationInterpolator* OrientationInterpolator1426 = new OrientationInterpolator();
OrientationInterpolator1426->setDEF("Armature_OI_c7");
OrientationInterpolator1426->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1426->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1426);

OrientationInterpolator* OrientationInterpolator1427 = new OrientationInterpolator();
OrientationInterpolator1427->setDEF("Armature_OI_c6");
OrientationInterpolator1427->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1427->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1427);

OrientationInterpolator* OrientationInterpolator1428 = new OrientationInterpolator();
OrientationInterpolator1428->setDEF("Armature_OI_c5");
OrientationInterpolator1428->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1428->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1428);

OrientationInterpolator* OrientationInterpolator1429 = new OrientationInterpolator();
OrientationInterpolator1429->setDEF("Armature_OI_c4");
OrientationInterpolator1429->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1429->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1429);

OrientationInterpolator* OrientationInterpolator1430 = new OrientationInterpolator();
OrientationInterpolator1430->setDEF("Armature_OI_c3");
OrientationInterpolator1430->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1430->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1430);

OrientationInterpolator* OrientationInterpolator1431 = new OrientationInterpolator();
OrientationInterpolator1431->setDEF("Armature_OI_c2");
OrientationInterpolator1431->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1431->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1431);

OrientationInterpolator* OrientationInterpolator1432 = new OrientationInterpolator();
OrientationInterpolator1432->setDEF("Armature_OI_c1");
OrientationInterpolator1432->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1432->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1432);

OrientationInterpolator* OrientationInterpolator1433 = new OrientationInterpolator();
OrientationInterpolator1433->setDEF("Armature_OI_skull");
OrientationInterpolator1433->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1433->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1433);

OrientationInterpolator* OrientationInterpolator1434 = new OrientationInterpolator();
OrientationInterpolator1434->setDEF("Armature_OI_l_eyelid");
OrientationInterpolator1434->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1434->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1434);

OrientationInterpolator* OrientationInterpolator1435 = new OrientationInterpolator();
OrientationInterpolator1435->setDEF("Armature_OI_r_eyelid");
OrientationInterpolator1435->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1435->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1435);

OrientationInterpolator* OrientationInterpolator1436 = new OrientationInterpolator();
OrientationInterpolator1436->setDEF("Armature_OI_l_eyeball");
OrientationInterpolator1436->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1436->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1436);

OrientationInterpolator* OrientationInterpolator1437 = new OrientationInterpolator();
OrientationInterpolator1437->setDEF("Armature_OI_r_eyeball");
OrientationInterpolator1437->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1437->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1437);

OrientationInterpolator* OrientationInterpolator1438 = new OrientationInterpolator();
OrientationInterpolator1438->setDEF("Armature_OI_l_eyebrow");
OrientationInterpolator1438->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1438->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1438);

OrientationInterpolator* OrientationInterpolator1439 = new OrientationInterpolator();
OrientationInterpolator1439->setDEF("Armature_OI_r_eyebrow");
OrientationInterpolator1439->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1439->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1439);

OrientationInterpolator* OrientationInterpolator1440 = new OrientationInterpolator();
OrientationInterpolator1440->setDEF("Armature_OI_jaw");
OrientationInterpolator1440->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1440->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1440);

OrientationInterpolator* OrientationInterpolator1441 = new OrientationInterpolator();
OrientationInterpolator1441->setDEF("Armature_OI_l_clavicle");
OrientationInterpolator1441->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1441->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1441);

OrientationInterpolator* OrientationInterpolator1442 = new OrientationInterpolator();
OrientationInterpolator1442->setDEF("Armature_OI_l_scapula");
OrientationInterpolator1442->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1442->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1442);

OrientationInterpolator* OrientationInterpolator1443 = new OrientationInterpolator();
OrientationInterpolator1443->setDEF("Armature_OI_l_upperarm");
OrientationInterpolator1443->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1443->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1443);

OrientationInterpolator* OrientationInterpolator1444 = new OrientationInterpolator();
OrientationInterpolator1444->setDEF("Armature_OI_l_forearm");
OrientationInterpolator1444->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1444->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1444);

OrientationInterpolator* OrientationInterpolator1445 = new OrientationInterpolator();
OrientationInterpolator1445->setDEF("Armature_OI_l_carpal");
OrientationInterpolator1445->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1445->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1445);

OrientationInterpolator* OrientationInterpolator1446 = new OrientationInterpolator();
OrientationInterpolator1446->setDEF("Armature_OI_l_trapezium");
OrientationInterpolator1446->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1446->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1446);

OrientationInterpolator* OrientationInterpolator1447 = new OrientationInterpolator();
OrientationInterpolator1447->setDEF("Armature_OI_l_metacarpal_1");
OrientationInterpolator1447->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1447->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1447);

OrientationInterpolator* OrientationInterpolator1448 = new OrientationInterpolator();
OrientationInterpolator1448->setDEF("Armature_OI_l_carpal_proximal_phalanx_1");
OrientationInterpolator1448->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1448->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1448);

OrientationInterpolator* OrientationInterpolator1449 = new OrientationInterpolator();
OrientationInterpolator1449->setDEF("Armature_OI_l_carpal_distal_phalanx_1");
OrientationInterpolator1449->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1449->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1449);

OrientationInterpolator* OrientationInterpolator1450 = new OrientationInterpolator();
OrientationInterpolator1450->setDEF("Armature_OI_l_trapezoid");
OrientationInterpolator1450->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1450->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1450);

OrientationInterpolator* OrientationInterpolator1451 = new OrientationInterpolator();
OrientationInterpolator1451->setDEF("Armature_OI_l_metacarpal_2");
OrientationInterpolator1451->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1451->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1451);

OrientationInterpolator* OrientationInterpolator1452 = new OrientationInterpolator();
OrientationInterpolator1452->setDEF("Armature_OI_l_carpal_proximal_phalanx_2");
OrientationInterpolator1452->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1452->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1452);

OrientationInterpolator* OrientationInterpolator1453 = new OrientationInterpolator();
OrientationInterpolator1453->setDEF("Armature_OI_l_carpal_middle_phalanx_2");
OrientationInterpolator1453->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1453->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1453);

OrientationInterpolator* OrientationInterpolator1454 = new OrientationInterpolator();
OrientationInterpolator1454->setDEF("Armature_OI_l_carpal_distal_phalanx_2");
OrientationInterpolator1454->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1454->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1454);

OrientationInterpolator* OrientationInterpolator1455 = new OrientationInterpolator();
OrientationInterpolator1455->setDEF("Armature_OI_l_capitate");
OrientationInterpolator1455->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1455->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1455);

OrientationInterpolator* OrientationInterpolator1456 = new OrientationInterpolator();
OrientationInterpolator1456->setDEF("Armature_OI_l_metacarpal_3");
OrientationInterpolator1456->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1456->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1456);

OrientationInterpolator* OrientationInterpolator1457 = new OrientationInterpolator();
OrientationInterpolator1457->setDEF("Armature_OI_l_carpal_proximal_phalanx_3");
OrientationInterpolator1457->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1457->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1457);

OrientationInterpolator* OrientationInterpolator1458 = new OrientationInterpolator();
OrientationInterpolator1458->setDEF("Armature_OI_l_carpal_middle_phalanx_3");
OrientationInterpolator1458->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1458->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1458);

OrientationInterpolator* OrientationInterpolator1459 = new OrientationInterpolator();
OrientationInterpolator1459->setDEF("Armature_OI_l_carpal_distal_phalanx_3");
OrientationInterpolator1459->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1459->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1459);

OrientationInterpolator* OrientationInterpolator1460 = new OrientationInterpolator();
OrientationInterpolator1460->setDEF("Armature_OI_l_hamate");
OrientationInterpolator1460->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1460->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1460);

OrientationInterpolator* OrientationInterpolator1461 = new OrientationInterpolator();
OrientationInterpolator1461->setDEF("Armature_OI_l_metacarpal_4");
OrientationInterpolator1461->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1461->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1461);

OrientationInterpolator* OrientationInterpolator1462 = new OrientationInterpolator();
OrientationInterpolator1462->setDEF("Armature_OI_l_carpal_proximal_phalanx_4");
OrientationInterpolator1462->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1462->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1462);

OrientationInterpolator* OrientationInterpolator1463 = new OrientationInterpolator();
OrientationInterpolator1463->setDEF("Armature_OI_l_carpal_middle_phalanx_4");
OrientationInterpolator1463->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1463->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1463);

OrientationInterpolator* OrientationInterpolator1464 = new OrientationInterpolator();
OrientationInterpolator1464->setDEF("Armature_OI_l_carpal_distal_phalanx_4");
OrientationInterpolator1464->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1464->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1464);

OrientationInterpolator* OrientationInterpolator1465 = new OrientationInterpolator();
OrientationInterpolator1465->setDEF("Armature_OI_l_metacarpal_5");
OrientationInterpolator1465->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1465->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1465);

OrientationInterpolator* OrientationInterpolator1466 = new OrientationInterpolator();
OrientationInterpolator1466->setDEF("Armature_OI_l_carpal_proximal_phalanx_5");
OrientationInterpolator1466->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1466->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1466);

OrientationInterpolator* OrientationInterpolator1467 = new OrientationInterpolator();
OrientationInterpolator1467->setDEF("Armature_OI_l_carpal_middle_phalanx_5");
OrientationInterpolator1467->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1467->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1467);

OrientationInterpolator* OrientationInterpolator1468 = new OrientationInterpolator();
OrientationInterpolator1468->setDEF("Armature_OI_l_carpal_distal_phalanx_5");
OrientationInterpolator1468->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1468->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1468);

OrientationInterpolator* OrientationInterpolator1469 = new OrientationInterpolator();
OrientationInterpolator1469->setDEF("Armature_OI_r_clavicle");
OrientationInterpolator1469->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1469->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1469);

OrientationInterpolator* OrientationInterpolator1470 = new OrientationInterpolator();
OrientationInterpolator1470->setDEF("Armature_OI_r_scapula");
OrientationInterpolator1470->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1470->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1470);

OrientationInterpolator* OrientationInterpolator1471 = new OrientationInterpolator();
OrientationInterpolator1471->setDEF("Armature_OI_r_upperarm");
OrientationInterpolator1471->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1471->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1471);

OrientationInterpolator* OrientationInterpolator1472 = new OrientationInterpolator();
OrientationInterpolator1472->setDEF("Armature_OI_r_forearm");
OrientationInterpolator1472->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1472->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1472);

OrientationInterpolator* OrientationInterpolator1473 = new OrientationInterpolator();
OrientationInterpolator1473->setDEF("Armature_OI_r_carpal");
OrientationInterpolator1473->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1473->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1473);

OrientationInterpolator* OrientationInterpolator1474 = new OrientationInterpolator();
OrientationInterpolator1474->setDEF("Armature_OI_r_trapezium");
OrientationInterpolator1474->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1474->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1474);

OrientationInterpolator* OrientationInterpolator1475 = new OrientationInterpolator();
OrientationInterpolator1475->setDEF("Armature_OI_r_metacarpal_1");
OrientationInterpolator1475->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1475->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1475);

OrientationInterpolator* OrientationInterpolator1476 = new OrientationInterpolator();
OrientationInterpolator1476->setDEF("Armature_OI_r_carpal_proximal_phalanx_1");
OrientationInterpolator1476->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1476->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1476);

OrientationInterpolator* OrientationInterpolator1477 = new OrientationInterpolator();
OrientationInterpolator1477->setDEF("Armature_OI_r_carpal_distal_phalanx_1");
OrientationInterpolator1477->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1477->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1477);

OrientationInterpolator* OrientationInterpolator1478 = new OrientationInterpolator();
OrientationInterpolator1478->setDEF("Armature_OI_r_trapezoid");
OrientationInterpolator1478->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1478->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1478);

OrientationInterpolator* OrientationInterpolator1479 = new OrientationInterpolator();
OrientationInterpolator1479->setDEF("Armature_OI_r_metacarpal_2");
OrientationInterpolator1479->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1479->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1479);

OrientationInterpolator* OrientationInterpolator1480 = new OrientationInterpolator();
OrientationInterpolator1480->setDEF("Armature_OI_r_carpal_proximal_phalanx_2");
OrientationInterpolator1480->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1480->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1480);

OrientationInterpolator* OrientationInterpolator1481 = new OrientationInterpolator();
OrientationInterpolator1481->setDEF("Armature_OI_r_carpal_middle_phalanx_2");
OrientationInterpolator1481->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1481->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1481);

OrientationInterpolator* OrientationInterpolator1482 = new OrientationInterpolator();
OrientationInterpolator1482->setDEF("Armature_OI_r_carpal_distal_phalanx_2");
OrientationInterpolator1482->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1482->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1482);

OrientationInterpolator* OrientationInterpolator1483 = new OrientationInterpolator();
OrientationInterpolator1483->setDEF("Armature_OI_r_capitate");
OrientationInterpolator1483->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1483->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1483);

OrientationInterpolator* OrientationInterpolator1484 = new OrientationInterpolator();
OrientationInterpolator1484->setDEF("Armature_OI_r_metacarpal_3");
OrientationInterpolator1484->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1484->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1484);

OrientationInterpolator* OrientationInterpolator1485 = new OrientationInterpolator();
OrientationInterpolator1485->setDEF("Armature_OI_r_carpal_proximal_phalanx_3");
OrientationInterpolator1485->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1485->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1485);

OrientationInterpolator* OrientationInterpolator1486 = new OrientationInterpolator();
OrientationInterpolator1486->setDEF("Armature_OI_r_carpal_middle_phalanx_3");
OrientationInterpolator1486->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1486->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1486);

OrientationInterpolator* OrientationInterpolator1487 = new OrientationInterpolator();
OrientationInterpolator1487->setDEF("Armature_OI_r_carpal_distal_phalanx_3");
OrientationInterpolator1487->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1487->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1487);

OrientationInterpolator* OrientationInterpolator1488 = new OrientationInterpolator();
OrientationInterpolator1488->setDEF("Armature_OI_r_hamate");
OrientationInterpolator1488->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1488->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1488);

OrientationInterpolator* OrientationInterpolator1489 = new OrientationInterpolator();
OrientationInterpolator1489->setDEF("Armature_OI_r_metacarpal_4");
OrientationInterpolator1489->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1489->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1489);

OrientationInterpolator* OrientationInterpolator1490 = new OrientationInterpolator();
OrientationInterpolator1490->setDEF("Armature_OI_r_carpal_proximal_phalanx_4");
OrientationInterpolator1490->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1490->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1490);

OrientationInterpolator* OrientationInterpolator1491 = new OrientationInterpolator();
OrientationInterpolator1491->setDEF("Armature_OI_r_carpal_middle_phalanx_4");
OrientationInterpolator1491->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1491->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1491);

OrientationInterpolator* OrientationInterpolator1492 = new OrientationInterpolator();
OrientationInterpolator1492->setDEF("Armature_OI_r_carpal_distal_phalanx_4");
OrientationInterpolator1492->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1492->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1492);

OrientationInterpolator* OrientationInterpolator1493 = new OrientationInterpolator();
OrientationInterpolator1493->setDEF("Armature_OI_r_metacarpal_5");
OrientationInterpolator1493->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1493->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1493);

OrientationInterpolator* OrientationInterpolator1494 = new OrientationInterpolator();
OrientationInterpolator1494->setDEF("Armature_OI_r_carpal_proximal_phalanx_5");
OrientationInterpolator1494->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1494->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1494);

OrientationInterpolator* OrientationInterpolator1495 = new OrientationInterpolator();
OrientationInterpolator1495->setDEF("Armature_OI_r_carpal_middle_phalanx_5");
OrientationInterpolator1495->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1495->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1495);

OrientationInterpolator* OrientationInterpolator1496 = new OrientationInterpolator();
OrientationInterpolator1496->setDEF("Armature_OI_r_carpal_distal_phalanx_5");
OrientationInterpolator1496->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1496->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Scene7->addChild(OrientationInterpolator1496);

ROUTE* ROUTE1497 = new ROUTE();
ROUTE1497->setFromField("fraction_changed");
ROUTE1497->setFromNode("Armature_Clock");
ROUTE1497->setToField("set_fraction");
ROUTE1497->setToNode("Armature_OI_sacrum");
Scene7->addChild(ROUTE1497);

ROUTE* ROUTE1498 = new ROUTE();
ROUTE1498->setFromField("value_changed");
ROUTE1498->setFromNode("Armature_OI_sacrum");
ROUTE1498->setToField("rotation");
ROUTE1498->setToNode("hanim_sacrum");
Scene7->addChild(ROUTE1498);

ROUTE* ROUTE1499 = new ROUTE();
ROUTE1499->setFromField("fraction_changed");
ROUTE1499->setFromNode("Armature_Clock");
ROUTE1499->setToField("set_fraction");
ROUTE1499->setToNode("Armature_OI_pelvis");
Scene7->addChild(ROUTE1499);

ROUTE* ROUTE1500 = new ROUTE();
ROUTE1500->setFromField("value_changed");
ROUTE1500->setFromNode("Armature_OI_pelvis");
ROUTE1500->setToField("rotation");
ROUTE1500->setToNode("hanim_pelvis");
Scene7->addChild(ROUTE1500);

ROUTE* ROUTE1501 = new ROUTE();
ROUTE1501->setFromField("fraction_changed");
ROUTE1501->setFromNode("Armature_Clock");
ROUTE1501->setToField("set_fraction");
ROUTE1501->setToNode("Armature_OI_l_thigh");
Scene7->addChild(ROUTE1501);

ROUTE* ROUTE1502 = new ROUTE();
ROUTE1502->setFromField("value_changed");
ROUTE1502->setFromNode("Armature_OI_l_thigh");
ROUTE1502->setToField("rotation");
ROUTE1502->setToNode("hanim_l_thigh");
Scene7->addChild(ROUTE1502);

ROUTE* ROUTE1503 = new ROUTE();
ROUTE1503->setFromField("fraction_changed");
ROUTE1503->setFromNode("Armature_Clock");
ROUTE1503->setToField("set_fraction");
ROUTE1503->setToNode("Armature_OI_l_calf");
Scene7->addChild(ROUTE1503);

ROUTE* ROUTE1504 = new ROUTE();
ROUTE1504->setFromField("value_changed");
ROUTE1504->setFromNode("Armature_OI_l_calf");
ROUTE1504->setToField("rotation");
ROUTE1504->setToNode("hanim_l_calf");
Scene7->addChild(ROUTE1504);

ROUTE* ROUTE1505 = new ROUTE();
ROUTE1505->setFromField("fraction_changed");
ROUTE1505->setFromNode("Armature_Clock");
ROUTE1505->setToField("set_fraction");
ROUTE1505->setToNode("Armature_OI_l_talus");
Scene7->addChild(ROUTE1505);

ROUTE* ROUTE1506 = new ROUTE();
ROUTE1506->setFromField("value_changed");
ROUTE1506->setFromNode("Armature_OI_l_talus");
ROUTE1506->setToField("rotation");
ROUTE1506->setToNode("hanim_l_talus");
Scene7->addChild(ROUTE1506);

ROUTE* ROUTE1507 = new ROUTE();
ROUTE1507->setFromField("fraction_changed");
ROUTE1507->setFromNode("Armature_Clock");
ROUTE1507->setToField("set_fraction");
ROUTE1507->setToNode("Armature_OI_l_navicular");
Scene7->addChild(ROUTE1507);

ROUTE* ROUTE1508 = new ROUTE();
ROUTE1508->setFromField("value_changed");
ROUTE1508->setFromNode("Armature_OI_l_navicular");
ROUTE1508->setToField("rotation");
ROUTE1508->setToNode("hanim_l_navicular");
Scene7->addChild(ROUTE1508);

ROUTE* ROUTE1509 = new ROUTE();
ROUTE1509->setFromField("fraction_changed");
ROUTE1509->setFromNode("Armature_Clock");
ROUTE1509->setToField("set_fraction");
ROUTE1509->setToNode("Armature_OI_l_cuneiform_1");
Scene7->addChild(ROUTE1509);

ROUTE* ROUTE1510 = new ROUTE();
ROUTE1510->setFromField("value_changed");
ROUTE1510->setFromNode("Armature_OI_l_cuneiform_1");
ROUTE1510->setToField("rotation");
ROUTE1510->setToNode("hanim_l_cuneiform_1");
Scene7->addChild(ROUTE1510);

ROUTE* ROUTE1511 = new ROUTE();
ROUTE1511->setFromField("fraction_changed");
ROUTE1511->setFromNode("Armature_Clock");
ROUTE1511->setToField("set_fraction");
ROUTE1511->setToNode("Armature_OI_l_metatarsal_1");
Scene7->addChild(ROUTE1511);

ROUTE* ROUTE1512 = new ROUTE();
ROUTE1512->setFromField("value_changed");
ROUTE1512->setFromNode("Armature_OI_l_metatarsal_1");
ROUTE1512->setToField("rotation");
ROUTE1512->setToNode("hanim_l_metatarsal_1");
Scene7->addChild(ROUTE1512);

ROUTE* ROUTE1513 = new ROUTE();
ROUTE1513->setFromField("fraction_changed");
ROUTE1513->setFromNode("Armature_Clock");
ROUTE1513->setToField("set_fraction");
ROUTE1513->setToNode("Armature_OI_l_tarsal_proximal_phalanx_1");
Scene7->addChild(ROUTE1513);

ROUTE* ROUTE1514 = new ROUTE();
ROUTE1514->setFromField("value_changed");
ROUTE1514->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_1");
ROUTE1514->setToField("rotation");
ROUTE1514->setToNode("hanim_l_tarsal_proximal_phalanx_1");
Scene7->addChild(ROUTE1514);

ROUTE* ROUTE1515 = new ROUTE();
ROUTE1515->setFromField("fraction_changed");
ROUTE1515->setFromNode("Armature_Clock");
ROUTE1515->setToField("set_fraction");
ROUTE1515->setToNode("Armature_OI_l_tarsal_distal_phalanx_1");
Scene7->addChild(ROUTE1515);

ROUTE* ROUTE1516 = new ROUTE();
ROUTE1516->setFromField("value_changed");
ROUTE1516->setFromNode("Armature_OI_l_tarsal_distal_phalanx_1");
ROUTE1516->setToField("rotation");
ROUTE1516->setToNode("hanim_l_tarsal_distal_phalanx_1");
Scene7->addChild(ROUTE1516);

ROUTE* ROUTE1517 = new ROUTE();
ROUTE1517->setFromField("fraction_changed");
ROUTE1517->setFromNode("Armature_Clock");
ROUTE1517->setToField("set_fraction");
ROUTE1517->setToNode("Armature_OI_l_cuneiform_2");
Scene7->addChild(ROUTE1517);

ROUTE* ROUTE1518 = new ROUTE();
ROUTE1518->setFromField("value_changed");
ROUTE1518->setFromNode("Armature_OI_l_cuneiform_2");
ROUTE1518->setToField("rotation");
ROUTE1518->setToNode("hanim_l_cuneiform_2");
Scene7->addChild(ROUTE1518);

ROUTE* ROUTE1519 = new ROUTE();
ROUTE1519->setFromField("fraction_changed");
ROUTE1519->setFromNode("Armature_Clock");
ROUTE1519->setToField("set_fraction");
ROUTE1519->setToNode("Armature_OI_l_metatarsal_2");
Scene7->addChild(ROUTE1519);

ROUTE* ROUTE1520 = new ROUTE();
ROUTE1520->setFromField("value_changed");
ROUTE1520->setFromNode("Armature_OI_l_metatarsal_2");
ROUTE1520->setToField("rotation");
ROUTE1520->setToNode("hanim_l_metatarsal_2");
Scene7->addChild(ROUTE1520);

ROUTE* ROUTE1521 = new ROUTE();
ROUTE1521->setFromField("fraction_changed");
ROUTE1521->setFromNode("Armature_Clock");
ROUTE1521->setToField("set_fraction");
ROUTE1521->setToNode("Armature_OI_l_tarsal_proximal_phalanx_2");
Scene7->addChild(ROUTE1521);

ROUTE* ROUTE1522 = new ROUTE();
ROUTE1522->setFromField("value_changed");
ROUTE1522->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_2");
ROUTE1522->setToField("rotation");
ROUTE1522->setToNode("hanim_l_tarsal_proximal_phalanx_2");
Scene7->addChild(ROUTE1522);

ROUTE* ROUTE1523 = new ROUTE();
ROUTE1523->setFromField("fraction_changed");
ROUTE1523->setFromNode("Armature_Clock");
ROUTE1523->setToField("set_fraction");
ROUTE1523->setToNode("Armature_OI_l_tarsal_middle_phalanx_2");
Scene7->addChild(ROUTE1523);

ROUTE* ROUTE1524 = new ROUTE();
ROUTE1524->setFromField("value_changed");
ROUTE1524->setFromNode("Armature_OI_l_tarsal_middle_phalanx_2");
ROUTE1524->setToField("rotation");
ROUTE1524->setToNode("hanim_l_tarsal_middle_phalanx_2");
Scene7->addChild(ROUTE1524);

ROUTE* ROUTE1525 = new ROUTE();
ROUTE1525->setFromField("fraction_changed");
ROUTE1525->setFromNode("Armature_Clock");
ROUTE1525->setToField("set_fraction");
ROUTE1525->setToNode("Armature_OI_l_tarsal_distal_phalanx_2");
Scene7->addChild(ROUTE1525);

ROUTE* ROUTE1526 = new ROUTE();
ROUTE1526->setFromField("value_changed");
ROUTE1526->setFromNode("Armature_OI_l_tarsal_distal_phalanx_2");
ROUTE1526->setToField("rotation");
ROUTE1526->setToNode("hanim_l_tarsal_distal_phalanx_2");
Scene7->addChild(ROUTE1526);

ROUTE* ROUTE1527 = new ROUTE();
ROUTE1527->setFromField("fraction_changed");
ROUTE1527->setFromNode("Armature_Clock");
ROUTE1527->setToField("set_fraction");
ROUTE1527->setToNode("Armature_OI_l_cuneiform_3");
Scene7->addChild(ROUTE1527);

ROUTE* ROUTE1528 = new ROUTE();
ROUTE1528->setFromField("value_changed");
ROUTE1528->setFromNode("Armature_OI_l_cuneiform_3");
ROUTE1528->setToField("rotation");
ROUTE1528->setToNode("hanim_l_cuneiform_3");
Scene7->addChild(ROUTE1528);

ROUTE* ROUTE1529 = new ROUTE();
ROUTE1529->setFromField("fraction_changed");
ROUTE1529->setFromNode("Armature_Clock");
ROUTE1529->setToField("set_fraction");
ROUTE1529->setToNode("Armature_OI_l_metatarsal_3");
Scene7->addChild(ROUTE1529);

ROUTE* ROUTE1530 = new ROUTE();
ROUTE1530->setFromField("value_changed");
ROUTE1530->setFromNode("Armature_OI_l_metatarsal_3");
ROUTE1530->setToField("rotation");
ROUTE1530->setToNode("hanim_l_metatarsal_3");
Scene7->addChild(ROUTE1530);

ROUTE* ROUTE1531 = new ROUTE();
ROUTE1531->setFromField("fraction_changed");
ROUTE1531->setFromNode("Armature_Clock");
ROUTE1531->setToField("set_fraction");
ROUTE1531->setToNode("Armature_OI_l_tarsal_proximal_phalanx_3");
Scene7->addChild(ROUTE1531);

ROUTE* ROUTE1532 = new ROUTE();
ROUTE1532->setFromField("value_changed");
ROUTE1532->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_3");
ROUTE1532->setToField("rotation");
ROUTE1532->setToNode("hanim_l_tarsal_proximal_phalanx_3");
Scene7->addChild(ROUTE1532);

ROUTE* ROUTE1533 = new ROUTE();
ROUTE1533->setFromField("fraction_changed");
ROUTE1533->setFromNode("Armature_Clock");
ROUTE1533->setToField("set_fraction");
ROUTE1533->setToNode("Armature_OI_l_tarsal_middle_phalanx_3");
Scene7->addChild(ROUTE1533);

ROUTE* ROUTE1534 = new ROUTE();
ROUTE1534->setFromField("value_changed");
ROUTE1534->setFromNode("Armature_OI_l_tarsal_middle_phalanx_3");
ROUTE1534->setToField("rotation");
ROUTE1534->setToNode("hanim_l_tarsal_middle_phalanx_3");
Scene7->addChild(ROUTE1534);

ROUTE* ROUTE1535 = new ROUTE();
ROUTE1535->setFromField("fraction_changed");
ROUTE1535->setFromNode("Armature_Clock");
ROUTE1535->setToField("set_fraction");
ROUTE1535->setToNode("Armature_OI_l_tarsal_distal_phalanx_3");
Scene7->addChild(ROUTE1535);

ROUTE* ROUTE1536 = new ROUTE();
ROUTE1536->setFromField("value_changed");
ROUTE1536->setFromNode("Armature_OI_l_tarsal_distal_phalanx_3");
ROUTE1536->setToField("rotation");
ROUTE1536->setToNode("hanim_l_tarsal_distal_phalanx_3");
Scene7->addChild(ROUTE1536);

ROUTE* ROUTE1537 = new ROUTE();
ROUTE1537->setFromField("fraction_changed");
ROUTE1537->setFromNode("Armature_Clock");
ROUTE1537->setToField("set_fraction");
ROUTE1537->setToNode("Armature_OI_l_calcaneus");
Scene7->addChild(ROUTE1537);

ROUTE* ROUTE1538 = new ROUTE();
ROUTE1538->setFromField("value_changed");
ROUTE1538->setFromNode("Armature_OI_l_calcaneus");
ROUTE1538->setToField("rotation");
ROUTE1538->setToNode("hanim_l_calcaneus");
Scene7->addChild(ROUTE1538);

ROUTE* ROUTE1539 = new ROUTE();
ROUTE1539->setFromField("fraction_changed");
ROUTE1539->setFromNode("Armature_Clock");
ROUTE1539->setToField("set_fraction");
ROUTE1539->setToNode("Armature_OI_l_cuboid");
Scene7->addChild(ROUTE1539);

ROUTE* ROUTE1540 = new ROUTE();
ROUTE1540->setFromField("value_changed");
ROUTE1540->setFromNode("Armature_OI_l_cuboid");
ROUTE1540->setToField("rotation");
ROUTE1540->setToNode("hanim_l_cuboid");
Scene7->addChild(ROUTE1540);

ROUTE* ROUTE1541 = new ROUTE();
ROUTE1541->setFromField("fraction_changed");
ROUTE1541->setFromNode("Armature_Clock");
ROUTE1541->setToField("set_fraction");
ROUTE1541->setToNode("Armature_OI_l_metatarsal_4");
Scene7->addChild(ROUTE1541);

ROUTE* ROUTE1542 = new ROUTE();
ROUTE1542->setFromField("value_changed");
ROUTE1542->setFromNode("Armature_OI_l_metatarsal_4");
ROUTE1542->setToField("rotation");
ROUTE1542->setToNode("hanim_l_metatarsal_4");
Scene7->addChild(ROUTE1542);

ROUTE* ROUTE1543 = new ROUTE();
ROUTE1543->setFromField("fraction_changed");
ROUTE1543->setFromNode("Armature_Clock");
ROUTE1543->setToField("set_fraction");
ROUTE1543->setToNode("Armature_OI_l_tarsal_proximal_phalanx_4");
Scene7->addChild(ROUTE1543);

ROUTE* ROUTE1544 = new ROUTE();
ROUTE1544->setFromField("value_changed");
ROUTE1544->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_4");
ROUTE1544->setToField("rotation");
ROUTE1544->setToNode("hanim_l_tarsal_proximal_phalanx_4");
Scene7->addChild(ROUTE1544);

ROUTE* ROUTE1545 = new ROUTE();
ROUTE1545->setFromField("fraction_changed");
ROUTE1545->setFromNode("Armature_Clock");
ROUTE1545->setToField("set_fraction");
ROUTE1545->setToNode("Armature_OI_l_tarsal_middle_phalanx_4");
Scene7->addChild(ROUTE1545);

ROUTE* ROUTE1546 = new ROUTE();
ROUTE1546->setFromField("value_changed");
ROUTE1546->setFromNode("Armature_OI_l_tarsal_middle_phalanx_4");
ROUTE1546->setToField("rotation");
ROUTE1546->setToNode("hanim_l_tarsal_middle_phalanx_4");
Scene7->addChild(ROUTE1546);

ROUTE* ROUTE1547 = new ROUTE();
ROUTE1547->setFromField("fraction_changed");
ROUTE1547->setFromNode("Armature_Clock");
ROUTE1547->setToField("set_fraction");
ROUTE1547->setToNode("Armature_OI_l_tarsal_distal_phalanx_4");
Scene7->addChild(ROUTE1547);

ROUTE* ROUTE1548 = new ROUTE();
ROUTE1548->setFromField("value_changed");
ROUTE1548->setFromNode("Armature_OI_l_tarsal_distal_phalanx_4");
ROUTE1548->setToField("rotation");
ROUTE1548->setToNode("hanim_l_tarsal_distal_phalanx_4");
Scene7->addChild(ROUTE1548);

ROUTE* ROUTE1549 = new ROUTE();
ROUTE1549->setFromField("fraction_changed");
ROUTE1549->setFromNode("Armature_Clock");
ROUTE1549->setToField("set_fraction");
ROUTE1549->setToNode("Armature_OI_l_metatarsal_5");
Scene7->addChild(ROUTE1549);

ROUTE* ROUTE1550 = new ROUTE();
ROUTE1550->setFromField("value_changed");
ROUTE1550->setFromNode("Armature_OI_l_metatarsal_5");
ROUTE1550->setToField("rotation");
ROUTE1550->setToNode("hanim_l_metatarsal_5");
Scene7->addChild(ROUTE1550);

ROUTE* ROUTE1551 = new ROUTE();
ROUTE1551->setFromField("fraction_changed");
ROUTE1551->setFromNode("Armature_Clock");
ROUTE1551->setToField("set_fraction");
ROUTE1551->setToNode("Armature_OI_l_tarsal_proximal_phalanx_5");
Scene7->addChild(ROUTE1551);

ROUTE* ROUTE1552 = new ROUTE();
ROUTE1552->setFromField("value_changed");
ROUTE1552->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_5");
ROUTE1552->setToField("rotation");
ROUTE1552->setToNode("hanim_l_tarsal_proximal_phalanx_5");
Scene7->addChild(ROUTE1552);

ROUTE* ROUTE1553 = new ROUTE();
ROUTE1553->setFromField("fraction_changed");
ROUTE1553->setFromNode("Armature_Clock");
ROUTE1553->setToField("set_fraction");
ROUTE1553->setToNode("Armature_OI_l_tarsal_middle_phalanx_5");
Scene7->addChild(ROUTE1553);

ROUTE* ROUTE1554 = new ROUTE();
ROUTE1554->setFromField("value_changed");
ROUTE1554->setFromNode("Armature_OI_l_tarsal_middle_phalanx_5");
ROUTE1554->setToField("rotation");
ROUTE1554->setToNode("hanim_l_tarsal_middle_phalanx_5");
Scene7->addChild(ROUTE1554);

ROUTE* ROUTE1555 = new ROUTE();
ROUTE1555->setFromField("fraction_changed");
ROUTE1555->setFromNode("Armature_Clock");
ROUTE1555->setToField("set_fraction");
ROUTE1555->setToNode("Armature_OI_l_tarsal_distal_phalanx_5");
Scene7->addChild(ROUTE1555);

ROUTE* ROUTE1556 = new ROUTE();
ROUTE1556->setFromField("value_changed");
ROUTE1556->setFromNode("Armature_OI_l_tarsal_distal_phalanx_5");
ROUTE1556->setToField("rotation");
ROUTE1556->setToNode("hanim_l_tarsal_distal_phalanx_5");
Scene7->addChild(ROUTE1556);

ROUTE* ROUTE1557 = new ROUTE();
ROUTE1557->setFromField("fraction_changed");
ROUTE1557->setFromNode("Armature_Clock");
ROUTE1557->setToField("set_fraction");
ROUTE1557->setToNode("Armature_OI_r_thigh");
Scene7->addChild(ROUTE1557);

ROUTE* ROUTE1558 = new ROUTE();
ROUTE1558->setFromField("value_changed");
ROUTE1558->setFromNode("Armature_OI_r_thigh");
ROUTE1558->setToField("rotation");
ROUTE1558->setToNode("hanim_r_thigh");
Scene7->addChild(ROUTE1558);

ROUTE* ROUTE1559 = new ROUTE();
ROUTE1559->setFromField("fraction_changed");
ROUTE1559->setFromNode("Armature_Clock");
ROUTE1559->setToField("set_fraction");
ROUTE1559->setToNode("Armature_OI_r_calf");
Scene7->addChild(ROUTE1559);

ROUTE* ROUTE1560 = new ROUTE();
ROUTE1560->setFromField("value_changed");
ROUTE1560->setFromNode("Armature_OI_r_calf");
ROUTE1560->setToField("rotation");
ROUTE1560->setToNode("hanim_r_calf");
Scene7->addChild(ROUTE1560);

ROUTE* ROUTE1561 = new ROUTE();
ROUTE1561->setFromField("fraction_changed");
ROUTE1561->setFromNode("Armature_Clock");
ROUTE1561->setToField("set_fraction");
ROUTE1561->setToNode("Armature_OI_r_talus");
Scene7->addChild(ROUTE1561);

ROUTE* ROUTE1562 = new ROUTE();
ROUTE1562->setFromField("value_changed");
ROUTE1562->setFromNode("Armature_OI_r_talus");
ROUTE1562->setToField("rotation");
ROUTE1562->setToNode("hanim_r_talus");
Scene7->addChild(ROUTE1562);

ROUTE* ROUTE1563 = new ROUTE();
ROUTE1563->setFromField("fraction_changed");
ROUTE1563->setFromNode("Armature_Clock");
ROUTE1563->setToField("set_fraction");
ROUTE1563->setToNode("Armature_OI_r_navicular");
Scene7->addChild(ROUTE1563);

ROUTE* ROUTE1564 = new ROUTE();
ROUTE1564->setFromField("value_changed");
ROUTE1564->setFromNode("Armature_OI_r_navicular");
ROUTE1564->setToField("rotation");
ROUTE1564->setToNode("hanim_r_navicular");
Scene7->addChild(ROUTE1564);

ROUTE* ROUTE1565 = new ROUTE();
ROUTE1565->setFromField("fraction_changed");
ROUTE1565->setFromNode("Armature_Clock");
ROUTE1565->setToField("set_fraction");
ROUTE1565->setToNode("Armature_OI_r_cuneiform_1");
Scene7->addChild(ROUTE1565);

ROUTE* ROUTE1566 = new ROUTE();
ROUTE1566->setFromField("value_changed");
ROUTE1566->setFromNode("Armature_OI_r_cuneiform_1");
ROUTE1566->setToField("rotation");
ROUTE1566->setToNode("hanim_r_cuneiform_1");
Scene7->addChild(ROUTE1566);

ROUTE* ROUTE1567 = new ROUTE();
ROUTE1567->setFromField("fraction_changed");
ROUTE1567->setFromNode("Armature_Clock");
ROUTE1567->setToField("set_fraction");
ROUTE1567->setToNode("Armature_OI_r_metatarsal_1");
Scene7->addChild(ROUTE1567);

ROUTE* ROUTE1568 = new ROUTE();
ROUTE1568->setFromField("value_changed");
ROUTE1568->setFromNode("Armature_OI_r_metatarsal_1");
ROUTE1568->setToField("rotation");
ROUTE1568->setToNode("hanim_r_metatarsal_1");
Scene7->addChild(ROUTE1568);

ROUTE* ROUTE1569 = new ROUTE();
ROUTE1569->setFromField("fraction_changed");
ROUTE1569->setFromNode("Armature_Clock");
ROUTE1569->setToField("set_fraction");
ROUTE1569->setToNode("Armature_OI_r_tarsal_proximal_phalanx_1");
Scene7->addChild(ROUTE1569);

ROUTE* ROUTE1570 = new ROUTE();
ROUTE1570->setFromField("value_changed");
ROUTE1570->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_1");
ROUTE1570->setToField("rotation");
ROUTE1570->setToNode("hanim_r_tarsal_proximal_phalanx_1");
Scene7->addChild(ROUTE1570);

ROUTE* ROUTE1571 = new ROUTE();
ROUTE1571->setFromField("fraction_changed");
ROUTE1571->setFromNode("Armature_Clock");
ROUTE1571->setToField("set_fraction");
ROUTE1571->setToNode("Armature_OI_r_tarsal_distal_phalanx_1");
Scene7->addChild(ROUTE1571);

ROUTE* ROUTE1572 = new ROUTE();
ROUTE1572->setFromField("value_changed");
ROUTE1572->setFromNode("Armature_OI_r_tarsal_distal_phalanx_1");
ROUTE1572->setToField("rotation");
ROUTE1572->setToNode("hanim_r_tarsal_distal_phalanx_1");
Scene7->addChild(ROUTE1572);

ROUTE* ROUTE1573 = new ROUTE();
ROUTE1573->setFromField("fraction_changed");
ROUTE1573->setFromNode("Armature_Clock");
ROUTE1573->setToField("set_fraction");
ROUTE1573->setToNode("Armature_OI_r_cuneiform_2");
Scene7->addChild(ROUTE1573);

ROUTE* ROUTE1574 = new ROUTE();
ROUTE1574->setFromField("value_changed");
ROUTE1574->setFromNode("Armature_OI_r_cuneiform_2");
ROUTE1574->setToField("rotation");
ROUTE1574->setToNode("hanim_r_cuneiform_2");
Scene7->addChild(ROUTE1574);

ROUTE* ROUTE1575 = new ROUTE();
ROUTE1575->setFromField("fraction_changed");
ROUTE1575->setFromNode("Armature_Clock");
ROUTE1575->setToField("set_fraction");
ROUTE1575->setToNode("Armature_OI_r_metatarsal_2");
Scene7->addChild(ROUTE1575);

ROUTE* ROUTE1576 = new ROUTE();
ROUTE1576->setFromField("value_changed");
ROUTE1576->setFromNode("Armature_OI_r_metatarsal_2");
ROUTE1576->setToField("rotation");
ROUTE1576->setToNode("hanim_r_metatarsal_2");
Scene7->addChild(ROUTE1576);

ROUTE* ROUTE1577 = new ROUTE();
ROUTE1577->setFromField("fraction_changed");
ROUTE1577->setFromNode("Armature_Clock");
ROUTE1577->setToField("set_fraction");
ROUTE1577->setToNode("Armature_OI_r_tarsal_proximal_phalanx_2");
Scene7->addChild(ROUTE1577);

ROUTE* ROUTE1578 = new ROUTE();
ROUTE1578->setFromField("value_changed");
ROUTE1578->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_2");
ROUTE1578->setToField("rotation");
ROUTE1578->setToNode("hanim_r_tarsal_proximal_phalanx_2");
Scene7->addChild(ROUTE1578);

ROUTE* ROUTE1579 = new ROUTE();
ROUTE1579->setFromField("fraction_changed");
ROUTE1579->setFromNode("Armature_Clock");
ROUTE1579->setToField("set_fraction");
ROUTE1579->setToNode("Armature_OI_r_tarsal_middle_phalanx_2");
Scene7->addChild(ROUTE1579);

ROUTE* ROUTE1580 = new ROUTE();
ROUTE1580->setFromField("value_changed");
ROUTE1580->setFromNode("Armature_OI_r_tarsal_middle_phalanx_2");
ROUTE1580->setToField("rotation");
ROUTE1580->setToNode("hanim_r_tarsal_middle_phalanx_2");
Scene7->addChild(ROUTE1580);

ROUTE* ROUTE1581 = new ROUTE();
ROUTE1581->setFromField("fraction_changed");
ROUTE1581->setFromNode("Armature_Clock");
ROUTE1581->setToField("set_fraction");
ROUTE1581->setToNode("Armature_OI_r_tarsal_distal_phalanx_2");
Scene7->addChild(ROUTE1581);

ROUTE* ROUTE1582 = new ROUTE();
ROUTE1582->setFromField("value_changed");
ROUTE1582->setFromNode("Armature_OI_r_tarsal_distal_phalanx_2");
ROUTE1582->setToField("rotation");
ROUTE1582->setToNode("hanim_r_tarsal_distal_phalanx_2");
Scene7->addChild(ROUTE1582);

ROUTE* ROUTE1583 = new ROUTE();
ROUTE1583->setFromField("fraction_changed");
ROUTE1583->setFromNode("Armature_Clock");
ROUTE1583->setToField("set_fraction");
ROUTE1583->setToNode("Armature_OI_r_cuneiform_3");
Scene7->addChild(ROUTE1583);

ROUTE* ROUTE1584 = new ROUTE();
ROUTE1584->setFromField("value_changed");
ROUTE1584->setFromNode("Armature_OI_r_cuneiform_3");
ROUTE1584->setToField("rotation");
ROUTE1584->setToNode("hanim_r_cuneiform_3");
Scene7->addChild(ROUTE1584);

ROUTE* ROUTE1585 = new ROUTE();
ROUTE1585->setFromField("fraction_changed");
ROUTE1585->setFromNode("Armature_Clock");
ROUTE1585->setToField("set_fraction");
ROUTE1585->setToNode("Armature_OI_r_metatarsal_3");
Scene7->addChild(ROUTE1585);

ROUTE* ROUTE1586 = new ROUTE();
ROUTE1586->setFromField("value_changed");
ROUTE1586->setFromNode("Armature_OI_r_metatarsal_3");
ROUTE1586->setToField("rotation");
ROUTE1586->setToNode("hanim_r_metatarsal_3");
Scene7->addChild(ROUTE1586);

ROUTE* ROUTE1587 = new ROUTE();
ROUTE1587->setFromField("fraction_changed");
ROUTE1587->setFromNode("Armature_Clock");
ROUTE1587->setToField("set_fraction");
ROUTE1587->setToNode("Armature_OI_r_tarsal_proximal_phalanx_3");
Scene7->addChild(ROUTE1587);

ROUTE* ROUTE1588 = new ROUTE();
ROUTE1588->setFromField("value_changed");
ROUTE1588->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_3");
ROUTE1588->setToField("rotation");
ROUTE1588->setToNode("hanim_r_tarsal_proximal_phalanx_3");
Scene7->addChild(ROUTE1588);

ROUTE* ROUTE1589 = new ROUTE();
ROUTE1589->setFromField("fraction_changed");
ROUTE1589->setFromNode("Armature_Clock");
ROUTE1589->setToField("set_fraction");
ROUTE1589->setToNode("Armature_OI_r_tarsal_middle_phalanx_3");
Scene7->addChild(ROUTE1589);

ROUTE* ROUTE1590 = new ROUTE();
ROUTE1590->setFromField("value_changed");
ROUTE1590->setFromNode("Armature_OI_r_tarsal_middle_phalanx_3");
ROUTE1590->setToField("rotation");
ROUTE1590->setToNode("hanim_r_tarsal_middle_phalanx_3");
Scene7->addChild(ROUTE1590);

ROUTE* ROUTE1591 = new ROUTE();
ROUTE1591->setFromField("fraction_changed");
ROUTE1591->setFromNode("Armature_Clock");
ROUTE1591->setToField("set_fraction");
ROUTE1591->setToNode("Armature_OI_r_tarsal_distal_phalanx_3");
Scene7->addChild(ROUTE1591);

ROUTE* ROUTE1592 = new ROUTE();
ROUTE1592->setFromField("value_changed");
ROUTE1592->setFromNode("Armature_OI_r_tarsal_distal_phalanx_3");
ROUTE1592->setToField("rotation");
ROUTE1592->setToNode("hanim_r_tarsal_distal_phalanx_3");
Scene7->addChild(ROUTE1592);

ROUTE* ROUTE1593 = new ROUTE();
ROUTE1593->setFromField("fraction_changed");
ROUTE1593->setFromNode("Armature_Clock");
ROUTE1593->setToField("set_fraction");
ROUTE1593->setToNode("Armature_OI_r_calcaneus");
Scene7->addChild(ROUTE1593);

ROUTE* ROUTE1594 = new ROUTE();
ROUTE1594->setFromField("value_changed");
ROUTE1594->setFromNode("Armature_OI_r_calcaneus");
ROUTE1594->setToField("rotation");
ROUTE1594->setToNode("hanim_r_calcaneus");
Scene7->addChild(ROUTE1594);

ROUTE* ROUTE1595 = new ROUTE();
ROUTE1595->setFromField("fraction_changed");
ROUTE1595->setFromNode("Armature_Clock");
ROUTE1595->setToField("set_fraction");
ROUTE1595->setToNode("Armature_OI_r_cuboid");
Scene7->addChild(ROUTE1595);

ROUTE* ROUTE1596 = new ROUTE();
ROUTE1596->setFromField("value_changed");
ROUTE1596->setFromNode("Armature_OI_r_cuboid");
ROUTE1596->setToField("rotation");
ROUTE1596->setToNode("hanim_r_cuboid");
Scene7->addChild(ROUTE1596);

ROUTE* ROUTE1597 = new ROUTE();
ROUTE1597->setFromField("fraction_changed");
ROUTE1597->setFromNode("Armature_Clock");
ROUTE1597->setToField("set_fraction");
ROUTE1597->setToNode("Armature_OI_r_metatarsal_4");
Scene7->addChild(ROUTE1597);

ROUTE* ROUTE1598 = new ROUTE();
ROUTE1598->setFromField("value_changed");
ROUTE1598->setFromNode("Armature_OI_r_metatarsal_4");
ROUTE1598->setToField("rotation");
ROUTE1598->setToNode("hanim_r_metatarsal_4");
Scene7->addChild(ROUTE1598);

ROUTE* ROUTE1599 = new ROUTE();
ROUTE1599->setFromField("fraction_changed");
ROUTE1599->setFromNode("Armature_Clock");
ROUTE1599->setToField("set_fraction");
ROUTE1599->setToNode("Armature_OI_r_tarsal_proximal_phalanx_4");
Scene7->addChild(ROUTE1599);

ROUTE* ROUTE1600 = new ROUTE();
ROUTE1600->setFromField("value_changed");
ROUTE1600->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_4");
ROUTE1600->setToField("rotation");
ROUTE1600->setToNode("hanim_r_tarsal_proximal_phalanx_4");
Scene7->addChild(ROUTE1600);

ROUTE* ROUTE1601 = new ROUTE();
ROUTE1601->setFromField("fraction_changed");
ROUTE1601->setFromNode("Armature_Clock");
ROUTE1601->setToField("set_fraction");
ROUTE1601->setToNode("Armature_OI_r_tarsal_middle_phalanx_4");
Scene7->addChild(ROUTE1601);

ROUTE* ROUTE1602 = new ROUTE();
ROUTE1602->setFromField("value_changed");
ROUTE1602->setFromNode("Armature_OI_r_tarsal_middle_phalanx_4");
ROUTE1602->setToField("rotation");
ROUTE1602->setToNode("hanim_r_tarsal_middle_phalanx_4");
Scene7->addChild(ROUTE1602);

ROUTE* ROUTE1603 = new ROUTE();
ROUTE1603->setFromField("fraction_changed");
ROUTE1603->setFromNode("Armature_Clock");
ROUTE1603->setToField("set_fraction");
ROUTE1603->setToNode("Armature_OI_r_tarsal_distal_phalanx_4");
Scene7->addChild(ROUTE1603);

ROUTE* ROUTE1604 = new ROUTE();
ROUTE1604->setFromField("value_changed");
ROUTE1604->setFromNode("Armature_OI_r_tarsal_distal_phalanx_4");
ROUTE1604->setToField("rotation");
ROUTE1604->setToNode("hanim_r_tarsal_distal_phalanx_4");
Scene7->addChild(ROUTE1604);

ROUTE* ROUTE1605 = new ROUTE();
ROUTE1605->setFromField("fraction_changed");
ROUTE1605->setFromNode("Armature_Clock");
ROUTE1605->setToField("set_fraction");
ROUTE1605->setToNode("Armature_OI_r_metatarsal_5");
Scene7->addChild(ROUTE1605);

ROUTE* ROUTE1606 = new ROUTE();
ROUTE1606->setFromField("value_changed");
ROUTE1606->setFromNode("Armature_OI_r_metatarsal_5");
ROUTE1606->setToField("rotation");
ROUTE1606->setToNode("hanim_r_metatarsal_5");
Scene7->addChild(ROUTE1606);

ROUTE* ROUTE1607 = new ROUTE();
ROUTE1607->setFromField("fraction_changed");
ROUTE1607->setFromNode("Armature_Clock");
ROUTE1607->setToField("set_fraction");
ROUTE1607->setToNode("Armature_OI_r_tarsal_proximal_phalanx_5");
Scene7->addChild(ROUTE1607);

ROUTE* ROUTE1608 = new ROUTE();
ROUTE1608->setFromField("value_changed");
ROUTE1608->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_5");
ROUTE1608->setToField("rotation");
ROUTE1608->setToNode("hanim_r_tarsal_proximal_phalanx_5");
Scene7->addChild(ROUTE1608);

ROUTE* ROUTE1609 = new ROUTE();
ROUTE1609->setFromField("fraction_changed");
ROUTE1609->setFromNode("Armature_Clock");
ROUTE1609->setToField("set_fraction");
ROUTE1609->setToNode("Armature_OI_r_tarsal_middle_phalanx_5");
Scene7->addChild(ROUTE1609);

ROUTE* ROUTE1610 = new ROUTE();
ROUTE1610->setFromField("value_changed");
ROUTE1610->setFromNode("Armature_OI_r_tarsal_middle_phalanx_5");
ROUTE1610->setToField("rotation");
ROUTE1610->setToNode("hanim_r_tarsal_middle_phalanx_5");
Scene7->addChild(ROUTE1610);

ROUTE* ROUTE1611 = new ROUTE();
ROUTE1611->setFromField("fraction_changed");
ROUTE1611->setFromNode("Armature_Clock");
ROUTE1611->setToField("set_fraction");
ROUTE1611->setToNode("Armature_OI_r_tarsal_distal_phalanx_5");
Scene7->addChild(ROUTE1611);

ROUTE* ROUTE1612 = new ROUTE();
ROUTE1612->setFromField("value_changed");
ROUTE1612->setFromNode("Armature_OI_r_tarsal_distal_phalanx_5");
ROUTE1612->setToField("rotation");
ROUTE1612->setToNode("hanim_r_tarsal_distal_phalanx_5");
Scene7->addChild(ROUTE1612);

ROUTE* ROUTE1613 = new ROUTE();
ROUTE1613->setFromField("fraction_changed");
ROUTE1613->setFromNode("Armature_Clock");
ROUTE1613->setToField("set_fraction");
ROUTE1613->setToNode("Armature_OI_l5");
Scene7->addChild(ROUTE1613);

ROUTE* ROUTE1614 = new ROUTE();
ROUTE1614->setFromField("value_changed");
ROUTE1614->setFromNode("Armature_OI_l5");
ROUTE1614->setToField("rotation");
ROUTE1614->setToNode("hanim_l5");
Scene7->addChild(ROUTE1614);

ROUTE* ROUTE1615 = new ROUTE();
ROUTE1615->setFromField("fraction_changed");
ROUTE1615->setFromNode("Armature_Clock");
ROUTE1615->setToField("set_fraction");
ROUTE1615->setToNode("Armature_OI_l4");
Scene7->addChild(ROUTE1615);

ROUTE* ROUTE1616 = new ROUTE();
ROUTE1616->setFromField("value_changed");
ROUTE1616->setFromNode("Armature_OI_l4");
ROUTE1616->setToField("rotation");
ROUTE1616->setToNode("hanim_l4");
Scene7->addChild(ROUTE1616);

ROUTE* ROUTE1617 = new ROUTE();
ROUTE1617->setFromField("fraction_changed");
ROUTE1617->setFromNode("Armature_Clock");
ROUTE1617->setToField("set_fraction");
ROUTE1617->setToNode("Armature_OI_l3");
Scene7->addChild(ROUTE1617);

ROUTE* ROUTE1618 = new ROUTE();
ROUTE1618->setFromField("value_changed");
ROUTE1618->setFromNode("Armature_OI_l3");
ROUTE1618->setToField("rotation");
ROUTE1618->setToNode("hanim_l3");
Scene7->addChild(ROUTE1618);

ROUTE* ROUTE1619 = new ROUTE();
ROUTE1619->setFromField("fraction_changed");
ROUTE1619->setFromNode("Armature_Clock");
ROUTE1619->setToField("set_fraction");
ROUTE1619->setToNode("Armature_OI_l2");
Scene7->addChild(ROUTE1619);

ROUTE* ROUTE1620 = new ROUTE();
ROUTE1620->setFromField("value_changed");
ROUTE1620->setFromNode("Armature_OI_l2");
ROUTE1620->setToField("rotation");
ROUTE1620->setToNode("hanim_l2");
Scene7->addChild(ROUTE1620);

ROUTE* ROUTE1621 = new ROUTE();
ROUTE1621->setFromField("fraction_changed");
ROUTE1621->setFromNode("Armature_Clock");
ROUTE1621->setToField("set_fraction");
ROUTE1621->setToNode("Armature_OI_l1");
Scene7->addChild(ROUTE1621);

ROUTE* ROUTE1622 = new ROUTE();
ROUTE1622->setFromField("value_changed");
ROUTE1622->setFromNode("Armature_OI_l1");
ROUTE1622->setToField("rotation");
ROUTE1622->setToNode("hanim_l1");
Scene7->addChild(ROUTE1622);

ROUTE* ROUTE1623 = new ROUTE();
ROUTE1623->setFromField("fraction_changed");
ROUTE1623->setFromNode("Armature_Clock");
ROUTE1623->setToField("set_fraction");
ROUTE1623->setToNode("Armature_OI_t12");
Scene7->addChild(ROUTE1623);

ROUTE* ROUTE1624 = new ROUTE();
ROUTE1624->setFromField("value_changed");
ROUTE1624->setFromNode("Armature_OI_t12");
ROUTE1624->setToField("rotation");
ROUTE1624->setToNode("hanim_t12");
Scene7->addChild(ROUTE1624);

ROUTE* ROUTE1625 = new ROUTE();
ROUTE1625->setFromField("fraction_changed");
ROUTE1625->setFromNode("Armature_Clock");
ROUTE1625->setToField("set_fraction");
ROUTE1625->setToNode("Armature_OI_t11");
Scene7->addChild(ROUTE1625);

ROUTE* ROUTE1626 = new ROUTE();
ROUTE1626->setFromField("value_changed");
ROUTE1626->setFromNode("Armature_OI_t11");
ROUTE1626->setToField("rotation");
ROUTE1626->setToNode("hanim_t11");
Scene7->addChild(ROUTE1626);

ROUTE* ROUTE1627 = new ROUTE();
ROUTE1627->setFromField("fraction_changed");
ROUTE1627->setFromNode("Armature_Clock");
ROUTE1627->setToField("set_fraction");
ROUTE1627->setToNode("Armature_OI_t10");
Scene7->addChild(ROUTE1627);

ROUTE* ROUTE1628 = new ROUTE();
ROUTE1628->setFromField("value_changed");
ROUTE1628->setFromNode("Armature_OI_t10");
ROUTE1628->setToField("rotation");
ROUTE1628->setToNode("hanim_t10");
Scene7->addChild(ROUTE1628);

ROUTE* ROUTE1629 = new ROUTE();
ROUTE1629->setFromField("fraction_changed");
ROUTE1629->setFromNode("Armature_Clock");
ROUTE1629->setToField("set_fraction");
ROUTE1629->setToNode("Armature_OI_t9");
Scene7->addChild(ROUTE1629);

ROUTE* ROUTE1630 = new ROUTE();
ROUTE1630->setFromField("value_changed");
ROUTE1630->setFromNode("Armature_OI_t9");
ROUTE1630->setToField("rotation");
ROUTE1630->setToNode("hanim_t9");
Scene7->addChild(ROUTE1630);

ROUTE* ROUTE1631 = new ROUTE();
ROUTE1631->setFromField("fraction_changed");
ROUTE1631->setFromNode("Armature_Clock");
ROUTE1631->setToField("set_fraction");
ROUTE1631->setToNode("Armature_OI_t8");
Scene7->addChild(ROUTE1631);

ROUTE* ROUTE1632 = new ROUTE();
ROUTE1632->setFromField("value_changed");
ROUTE1632->setFromNode("Armature_OI_t8");
ROUTE1632->setToField("rotation");
ROUTE1632->setToNode("hanim_t8");
Scene7->addChild(ROUTE1632);

ROUTE* ROUTE1633 = new ROUTE();
ROUTE1633->setFromField("fraction_changed");
ROUTE1633->setFromNode("Armature_Clock");
ROUTE1633->setToField("set_fraction");
ROUTE1633->setToNode("Armature_OI_t7");
Scene7->addChild(ROUTE1633);

ROUTE* ROUTE1634 = new ROUTE();
ROUTE1634->setFromField("value_changed");
ROUTE1634->setFromNode("Armature_OI_t7");
ROUTE1634->setToField("rotation");
ROUTE1634->setToNode("hanim_t7");
Scene7->addChild(ROUTE1634);

ROUTE* ROUTE1635 = new ROUTE();
ROUTE1635->setFromField("fraction_changed");
ROUTE1635->setFromNode("Armature_Clock");
ROUTE1635->setToField("set_fraction");
ROUTE1635->setToNode("Armature_OI_t6");
Scene7->addChild(ROUTE1635);

ROUTE* ROUTE1636 = new ROUTE();
ROUTE1636->setFromField("value_changed");
ROUTE1636->setFromNode("Armature_OI_t6");
ROUTE1636->setToField("rotation");
ROUTE1636->setToNode("hanim_t6");
Scene7->addChild(ROUTE1636);

ROUTE* ROUTE1637 = new ROUTE();
ROUTE1637->setFromField("fraction_changed");
ROUTE1637->setFromNode("Armature_Clock");
ROUTE1637->setToField("set_fraction");
ROUTE1637->setToNode("Armature_OI_t5");
Scene7->addChild(ROUTE1637);

ROUTE* ROUTE1638 = new ROUTE();
ROUTE1638->setFromField("value_changed");
ROUTE1638->setFromNode("Armature_OI_t5");
ROUTE1638->setToField("rotation");
ROUTE1638->setToNode("hanim_t5");
Scene7->addChild(ROUTE1638);

ROUTE* ROUTE1639 = new ROUTE();
ROUTE1639->setFromField("fraction_changed");
ROUTE1639->setFromNode("Armature_Clock");
ROUTE1639->setToField("set_fraction");
ROUTE1639->setToNode("Armature_OI_t4");
Scene7->addChild(ROUTE1639);

ROUTE* ROUTE1640 = new ROUTE();
ROUTE1640->setFromField("value_changed");
ROUTE1640->setFromNode("Armature_OI_t4");
ROUTE1640->setToField("rotation");
ROUTE1640->setToNode("hanim_t4");
Scene7->addChild(ROUTE1640);

ROUTE* ROUTE1641 = new ROUTE();
ROUTE1641->setFromField("fraction_changed");
ROUTE1641->setFromNode("Armature_Clock");
ROUTE1641->setToField("set_fraction");
ROUTE1641->setToNode("Armature_OI_t3");
Scene7->addChild(ROUTE1641);

ROUTE* ROUTE1642 = new ROUTE();
ROUTE1642->setFromField("value_changed");
ROUTE1642->setFromNode("Armature_OI_t3");
ROUTE1642->setToField("rotation");
ROUTE1642->setToNode("hanim_t3");
Scene7->addChild(ROUTE1642);

ROUTE* ROUTE1643 = new ROUTE();
ROUTE1643->setFromField("fraction_changed");
ROUTE1643->setFromNode("Armature_Clock");
ROUTE1643->setToField("set_fraction");
ROUTE1643->setToNode("Armature_OI_t2");
Scene7->addChild(ROUTE1643);

ROUTE* ROUTE1644 = new ROUTE();
ROUTE1644->setFromField("value_changed");
ROUTE1644->setFromNode("Armature_OI_t2");
ROUTE1644->setToField("rotation");
ROUTE1644->setToNode("hanim_t2");
Scene7->addChild(ROUTE1644);

ROUTE* ROUTE1645 = new ROUTE();
ROUTE1645->setFromField("fraction_changed");
ROUTE1645->setFromNode("Armature_Clock");
ROUTE1645->setToField("set_fraction");
ROUTE1645->setToNode("Armature_OI_t1");
Scene7->addChild(ROUTE1645);

ROUTE* ROUTE1646 = new ROUTE();
ROUTE1646->setFromField("value_changed");
ROUTE1646->setFromNode("Armature_OI_t1");
ROUTE1646->setToField("rotation");
ROUTE1646->setToNode("hanim_t1");
Scene7->addChild(ROUTE1646);

ROUTE* ROUTE1647 = new ROUTE();
ROUTE1647->setFromField("fraction_changed");
ROUTE1647->setFromNode("Armature_Clock");
ROUTE1647->setToField("set_fraction");
ROUTE1647->setToNode("Armature_OI_c7");
Scene7->addChild(ROUTE1647);

ROUTE* ROUTE1648 = new ROUTE();
ROUTE1648->setFromField("value_changed");
ROUTE1648->setFromNode("Armature_OI_c7");
ROUTE1648->setToField("rotation");
ROUTE1648->setToNode("hanim_c7");
Scene7->addChild(ROUTE1648);

ROUTE* ROUTE1649 = new ROUTE();
ROUTE1649->setFromField("fraction_changed");
ROUTE1649->setFromNode("Armature_Clock");
ROUTE1649->setToField("set_fraction");
ROUTE1649->setToNode("Armature_OI_c6");
Scene7->addChild(ROUTE1649);

ROUTE* ROUTE1650 = new ROUTE();
ROUTE1650->setFromField("value_changed");
ROUTE1650->setFromNode("Armature_OI_c6");
ROUTE1650->setToField("rotation");
ROUTE1650->setToNode("hanim_c6");
Scene7->addChild(ROUTE1650);

ROUTE* ROUTE1651 = new ROUTE();
ROUTE1651->setFromField("fraction_changed");
ROUTE1651->setFromNode("Armature_Clock");
ROUTE1651->setToField("set_fraction");
ROUTE1651->setToNode("Armature_OI_c5");
Scene7->addChild(ROUTE1651);

ROUTE* ROUTE1652 = new ROUTE();
ROUTE1652->setFromField("value_changed");
ROUTE1652->setFromNode("Armature_OI_c5");
ROUTE1652->setToField("rotation");
ROUTE1652->setToNode("hanim_c5");
Scene7->addChild(ROUTE1652);

ROUTE* ROUTE1653 = new ROUTE();
ROUTE1653->setFromField("fraction_changed");
ROUTE1653->setFromNode("Armature_Clock");
ROUTE1653->setToField("set_fraction");
ROUTE1653->setToNode("Armature_OI_c4");
Scene7->addChild(ROUTE1653);

ROUTE* ROUTE1654 = new ROUTE();
ROUTE1654->setFromField("value_changed");
ROUTE1654->setFromNode("Armature_OI_c4");
ROUTE1654->setToField("rotation");
ROUTE1654->setToNode("hanim_c4");
Scene7->addChild(ROUTE1654);

ROUTE* ROUTE1655 = new ROUTE();
ROUTE1655->setFromField("fraction_changed");
ROUTE1655->setFromNode("Armature_Clock");
ROUTE1655->setToField("set_fraction");
ROUTE1655->setToNode("Armature_OI_c3");
Scene7->addChild(ROUTE1655);

ROUTE* ROUTE1656 = new ROUTE();
ROUTE1656->setFromField("value_changed");
ROUTE1656->setFromNode("Armature_OI_c3");
ROUTE1656->setToField("rotation");
ROUTE1656->setToNode("hanim_c3");
Scene7->addChild(ROUTE1656);

ROUTE* ROUTE1657 = new ROUTE();
ROUTE1657->setFromField("fraction_changed");
ROUTE1657->setFromNode("Armature_Clock");
ROUTE1657->setToField("set_fraction");
ROUTE1657->setToNode("Armature_OI_c2");
Scene7->addChild(ROUTE1657);

ROUTE* ROUTE1658 = new ROUTE();
ROUTE1658->setFromField("value_changed");
ROUTE1658->setFromNode("Armature_OI_c2");
ROUTE1658->setToField("rotation");
ROUTE1658->setToNode("hanim_c2");
Scene7->addChild(ROUTE1658);

ROUTE* ROUTE1659 = new ROUTE();
ROUTE1659->setFromField("fraction_changed");
ROUTE1659->setFromNode("Armature_Clock");
ROUTE1659->setToField("set_fraction");
ROUTE1659->setToNode("Armature_OI_c1");
Scene7->addChild(ROUTE1659);

ROUTE* ROUTE1660 = new ROUTE();
ROUTE1660->setFromField("value_changed");
ROUTE1660->setFromNode("Armature_OI_c1");
ROUTE1660->setToField("rotation");
ROUTE1660->setToNode("hanim_c1");
Scene7->addChild(ROUTE1660);

ROUTE* ROUTE1661 = new ROUTE();
ROUTE1661->setFromField("fraction_changed");
ROUTE1661->setFromNode("Armature_Clock");
ROUTE1661->setToField("set_fraction");
ROUTE1661->setToNode("Armature_OI_skull");
Scene7->addChild(ROUTE1661);

ROUTE* ROUTE1662 = new ROUTE();
ROUTE1662->setFromField("value_changed");
ROUTE1662->setFromNode("Armature_OI_skull");
ROUTE1662->setToField("rotation");
ROUTE1662->setToNode("hanim_skull");
Scene7->addChild(ROUTE1662);

ROUTE* ROUTE1663 = new ROUTE();
ROUTE1663->setFromField("fraction_changed");
ROUTE1663->setFromNode("Armature_Clock");
ROUTE1663->setToField("set_fraction");
ROUTE1663->setToNode("Armature_OI_l_eyelid");
Scene7->addChild(ROUTE1663);

ROUTE* ROUTE1664 = new ROUTE();
ROUTE1664->setFromField("value_changed");
ROUTE1664->setFromNode("Armature_OI_l_eyelid");
ROUTE1664->setToField("rotation");
ROUTE1664->setToNode("hanim_l_eyelid");
Scene7->addChild(ROUTE1664);

ROUTE* ROUTE1665 = new ROUTE();
ROUTE1665->setFromField("fraction_changed");
ROUTE1665->setFromNode("Armature_Clock");
ROUTE1665->setToField("set_fraction");
ROUTE1665->setToNode("Armature_OI_r_eyelid");
Scene7->addChild(ROUTE1665);

ROUTE* ROUTE1666 = new ROUTE();
ROUTE1666->setFromField("value_changed");
ROUTE1666->setFromNode("Armature_OI_r_eyelid");
ROUTE1666->setToField("rotation");
ROUTE1666->setToNode("hanim_r_eyelid");
Scene7->addChild(ROUTE1666);

ROUTE* ROUTE1667 = new ROUTE();
ROUTE1667->setFromField("fraction_changed");
ROUTE1667->setFromNode("Armature_Clock");
ROUTE1667->setToField("set_fraction");
ROUTE1667->setToNode("Armature_OI_l_eyeball");
Scene7->addChild(ROUTE1667);

ROUTE* ROUTE1668 = new ROUTE();
ROUTE1668->setFromField("value_changed");
ROUTE1668->setFromNode("Armature_OI_l_eyeball");
ROUTE1668->setToField("rotation");
ROUTE1668->setToNode("hanim_l_eyeball");
Scene7->addChild(ROUTE1668);

ROUTE* ROUTE1669 = new ROUTE();
ROUTE1669->setFromField("fraction_changed");
ROUTE1669->setFromNode("Armature_Clock");
ROUTE1669->setToField("set_fraction");
ROUTE1669->setToNode("Armature_OI_r_eyeball");
Scene7->addChild(ROUTE1669);

ROUTE* ROUTE1670 = new ROUTE();
ROUTE1670->setFromField("value_changed");
ROUTE1670->setFromNode("Armature_OI_r_eyeball");
ROUTE1670->setToField("rotation");
ROUTE1670->setToNode("hanim_r_eyeball");
Scene7->addChild(ROUTE1670);

ROUTE* ROUTE1671 = new ROUTE();
ROUTE1671->setFromField("fraction_changed");
ROUTE1671->setFromNode("Armature_Clock");
ROUTE1671->setToField("set_fraction");
ROUTE1671->setToNode("Armature_OI_l_eyebrow");
Scene7->addChild(ROUTE1671);

ROUTE* ROUTE1672 = new ROUTE();
ROUTE1672->setFromField("value_changed");
ROUTE1672->setFromNode("Armature_OI_l_eyebrow");
ROUTE1672->setToField("rotation");
ROUTE1672->setToNode("hanim_l_eyebrow");
Scene7->addChild(ROUTE1672);

ROUTE* ROUTE1673 = new ROUTE();
ROUTE1673->setFromField("fraction_changed");
ROUTE1673->setFromNode("Armature_Clock");
ROUTE1673->setToField("set_fraction");
ROUTE1673->setToNode("Armature_OI_r_eyebrow");
Scene7->addChild(ROUTE1673);

ROUTE* ROUTE1674 = new ROUTE();
ROUTE1674->setFromField("value_changed");
ROUTE1674->setFromNode("Armature_OI_r_eyebrow");
ROUTE1674->setToField("rotation");
ROUTE1674->setToNode("hanim_r_eyebrow");
Scene7->addChild(ROUTE1674);

ROUTE* ROUTE1675 = new ROUTE();
ROUTE1675->setFromField("fraction_changed");
ROUTE1675->setFromNode("Armature_Clock");
ROUTE1675->setToField("set_fraction");
ROUTE1675->setToNode("Armature_OI_jaw");
Scene7->addChild(ROUTE1675);

ROUTE* ROUTE1676 = new ROUTE();
ROUTE1676->setFromField("value_changed");
ROUTE1676->setFromNode("Armature_OI_jaw");
ROUTE1676->setToField("rotation");
ROUTE1676->setToNode("hanim_jaw");
Scene7->addChild(ROUTE1676);

ROUTE* ROUTE1677 = new ROUTE();
ROUTE1677->setFromField("fraction_changed");
ROUTE1677->setFromNode("Armature_Clock");
ROUTE1677->setToField("set_fraction");
ROUTE1677->setToNode("Armature_OI_l_clavicle");
Scene7->addChild(ROUTE1677);

ROUTE* ROUTE1678 = new ROUTE();
ROUTE1678->setFromField("value_changed");
ROUTE1678->setFromNode("Armature_OI_l_clavicle");
ROUTE1678->setToField("rotation");
ROUTE1678->setToNode("hanim_l_clavicle");
Scene7->addChild(ROUTE1678);

ROUTE* ROUTE1679 = new ROUTE();
ROUTE1679->setFromField("fraction_changed");
ROUTE1679->setFromNode("Armature_Clock");
ROUTE1679->setToField("set_fraction");
ROUTE1679->setToNode("Armature_OI_l_scapula");
Scene7->addChild(ROUTE1679);

ROUTE* ROUTE1680 = new ROUTE();
ROUTE1680->setFromField("value_changed");
ROUTE1680->setFromNode("Armature_OI_l_scapula");
ROUTE1680->setToField("rotation");
ROUTE1680->setToNode("hanim_l_scapula");
Scene7->addChild(ROUTE1680);

ROUTE* ROUTE1681 = new ROUTE();
ROUTE1681->setFromField("fraction_changed");
ROUTE1681->setFromNode("Armature_Clock");
ROUTE1681->setToField("set_fraction");
ROUTE1681->setToNode("Armature_OI_l_upperarm");
Scene7->addChild(ROUTE1681);

ROUTE* ROUTE1682 = new ROUTE();
ROUTE1682->setFromField("value_changed");
ROUTE1682->setFromNode("Armature_OI_l_upperarm");
ROUTE1682->setToField("rotation");
ROUTE1682->setToNode("hanim_l_upperarm");
Scene7->addChild(ROUTE1682);

ROUTE* ROUTE1683 = new ROUTE();
ROUTE1683->setFromField("fraction_changed");
ROUTE1683->setFromNode("Armature_Clock");
ROUTE1683->setToField("set_fraction");
ROUTE1683->setToNode("Armature_OI_l_forearm");
Scene7->addChild(ROUTE1683);

ROUTE* ROUTE1684 = new ROUTE();
ROUTE1684->setFromField("value_changed");
ROUTE1684->setFromNode("Armature_OI_l_forearm");
ROUTE1684->setToField("rotation");
ROUTE1684->setToNode("hanim_l_forearm");
Scene7->addChild(ROUTE1684);

ROUTE* ROUTE1685 = new ROUTE();
ROUTE1685->setFromField("fraction_changed");
ROUTE1685->setFromNode("Armature_Clock");
ROUTE1685->setToField("set_fraction");
ROUTE1685->setToNode("Armature_OI_l_carpal");
Scene7->addChild(ROUTE1685);

ROUTE* ROUTE1686 = new ROUTE();
ROUTE1686->setFromField("value_changed");
ROUTE1686->setFromNode("Armature_OI_l_carpal");
ROUTE1686->setToField("rotation");
ROUTE1686->setToNode("hanim_l_carpal");
Scene7->addChild(ROUTE1686);

ROUTE* ROUTE1687 = new ROUTE();
ROUTE1687->setFromField("fraction_changed");
ROUTE1687->setFromNode("Armature_Clock");
ROUTE1687->setToField("set_fraction");
ROUTE1687->setToNode("Armature_OI_l_trapezium");
Scene7->addChild(ROUTE1687);

ROUTE* ROUTE1688 = new ROUTE();
ROUTE1688->setFromField("value_changed");
ROUTE1688->setFromNode("Armature_OI_l_trapezium");
ROUTE1688->setToField("rotation");
ROUTE1688->setToNode("hanim_l_trapezium");
Scene7->addChild(ROUTE1688);

ROUTE* ROUTE1689 = new ROUTE();
ROUTE1689->setFromField("fraction_changed");
ROUTE1689->setFromNode("Armature_Clock");
ROUTE1689->setToField("set_fraction");
ROUTE1689->setToNode("Armature_OI_l_metacarpal_1");
Scene7->addChild(ROUTE1689);

ROUTE* ROUTE1690 = new ROUTE();
ROUTE1690->setFromField("value_changed");
ROUTE1690->setFromNode("Armature_OI_l_metacarpal_1");
ROUTE1690->setToField("rotation");
ROUTE1690->setToNode("hanim_l_metacarpal_1");
Scene7->addChild(ROUTE1690);

ROUTE* ROUTE1691 = new ROUTE();
ROUTE1691->setFromField("fraction_changed");
ROUTE1691->setFromNode("Armature_Clock");
ROUTE1691->setToField("set_fraction");
ROUTE1691->setToNode("Armature_OI_l_carpal_proximal_phalanx_1");
Scene7->addChild(ROUTE1691);

ROUTE* ROUTE1692 = new ROUTE();
ROUTE1692->setFromField("value_changed");
ROUTE1692->setFromNode("Armature_OI_l_carpal_proximal_phalanx_1");
ROUTE1692->setToField("rotation");
ROUTE1692->setToNode("hanim_l_carpal_proximal_phalanx_1");
Scene7->addChild(ROUTE1692);

ROUTE* ROUTE1693 = new ROUTE();
ROUTE1693->setFromField("fraction_changed");
ROUTE1693->setFromNode("Armature_Clock");
ROUTE1693->setToField("set_fraction");
ROUTE1693->setToNode("Armature_OI_l_carpal_distal_phalanx_1");
Scene7->addChild(ROUTE1693);

ROUTE* ROUTE1694 = new ROUTE();
ROUTE1694->setFromField("value_changed");
ROUTE1694->setFromNode("Armature_OI_l_carpal_distal_phalanx_1");
ROUTE1694->setToField("rotation");
ROUTE1694->setToNode("hanim_l_carpal_distal_phalanx_1");
Scene7->addChild(ROUTE1694);

ROUTE* ROUTE1695 = new ROUTE();
ROUTE1695->setFromField("fraction_changed");
ROUTE1695->setFromNode("Armature_Clock");
ROUTE1695->setToField("set_fraction");
ROUTE1695->setToNode("Armature_OI_l_trapezoid");
Scene7->addChild(ROUTE1695);

ROUTE* ROUTE1696 = new ROUTE();
ROUTE1696->setFromField("value_changed");
ROUTE1696->setFromNode("Armature_OI_l_trapezoid");
ROUTE1696->setToField("rotation");
ROUTE1696->setToNode("hanim_l_trapezoid");
Scene7->addChild(ROUTE1696);

ROUTE* ROUTE1697 = new ROUTE();
ROUTE1697->setFromField("fraction_changed");
ROUTE1697->setFromNode("Armature_Clock");
ROUTE1697->setToField("set_fraction");
ROUTE1697->setToNode("Armature_OI_l_metacarpal_2");
Scene7->addChild(ROUTE1697);

ROUTE* ROUTE1698 = new ROUTE();
ROUTE1698->setFromField("value_changed");
ROUTE1698->setFromNode("Armature_OI_l_metacarpal_2");
ROUTE1698->setToField("rotation");
ROUTE1698->setToNode("hanim_l_metacarpal_2");
Scene7->addChild(ROUTE1698);

ROUTE* ROUTE1699 = new ROUTE();
ROUTE1699->setFromField("fraction_changed");
ROUTE1699->setFromNode("Armature_Clock");
ROUTE1699->setToField("set_fraction");
ROUTE1699->setToNode("Armature_OI_l_carpal_proximal_phalanx_2");
Scene7->addChild(ROUTE1699);

ROUTE* ROUTE1700 = new ROUTE();
ROUTE1700->setFromField("value_changed");
ROUTE1700->setFromNode("Armature_OI_l_carpal_proximal_phalanx_2");
ROUTE1700->setToField("rotation");
ROUTE1700->setToNode("hanim_l_carpal_proximal_phalanx_2");
Scene7->addChild(ROUTE1700);

ROUTE* ROUTE1701 = new ROUTE();
ROUTE1701->setFromField("fraction_changed");
ROUTE1701->setFromNode("Armature_Clock");
ROUTE1701->setToField("set_fraction");
ROUTE1701->setToNode("Armature_OI_l_carpal_middle_phalanx_2");
Scene7->addChild(ROUTE1701);

ROUTE* ROUTE1702 = new ROUTE();
ROUTE1702->setFromField("value_changed");
ROUTE1702->setFromNode("Armature_OI_l_carpal_middle_phalanx_2");
ROUTE1702->setToField("rotation");
ROUTE1702->setToNode("hanim_l_carpal_middle_phalanx_2");
Scene7->addChild(ROUTE1702);

ROUTE* ROUTE1703 = new ROUTE();
ROUTE1703->setFromField("fraction_changed");
ROUTE1703->setFromNode("Armature_Clock");
ROUTE1703->setToField("set_fraction");
ROUTE1703->setToNode("Armature_OI_l_carpal_distal_phalanx_2");
Scene7->addChild(ROUTE1703);

ROUTE* ROUTE1704 = new ROUTE();
ROUTE1704->setFromField("value_changed");
ROUTE1704->setFromNode("Armature_OI_l_carpal_distal_phalanx_2");
ROUTE1704->setToField("rotation");
ROUTE1704->setToNode("hanim_l_carpal_distal_phalanx_2");
Scene7->addChild(ROUTE1704);

ROUTE* ROUTE1705 = new ROUTE();
ROUTE1705->setFromField("fraction_changed");
ROUTE1705->setFromNode("Armature_Clock");
ROUTE1705->setToField("set_fraction");
ROUTE1705->setToNode("Armature_OI_l_capitate");
Scene7->addChild(ROUTE1705);

ROUTE* ROUTE1706 = new ROUTE();
ROUTE1706->setFromField("value_changed");
ROUTE1706->setFromNode("Armature_OI_l_capitate");
ROUTE1706->setToField("rotation");
ROUTE1706->setToNode("hanim_l_capitate");
Scene7->addChild(ROUTE1706);

ROUTE* ROUTE1707 = new ROUTE();
ROUTE1707->setFromField("fraction_changed");
ROUTE1707->setFromNode("Armature_Clock");
ROUTE1707->setToField("set_fraction");
ROUTE1707->setToNode("Armature_OI_l_metacarpal_3");
Scene7->addChild(ROUTE1707);

ROUTE* ROUTE1708 = new ROUTE();
ROUTE1708->setFromField("value_changed");
ROUTE1708->setFromNode("Armature_OI_l_metacarpal_3");
ROUTE1708->setToField("rotation");
ROUTE1708->setToNode("hanim_l_metacarpal_3");
Scene7->addChild(ROUTE1708);

ROUTE* ROUTE1709 = new ROUTE();
ROUTE1709->setFromField("fraction_changed");
ROUTE1709->setFromNode("Armature_Clock");
ROUTE1709->setToField("set_fraction");
ROUTE1709->setToNode("Armature_OI_l_carpal_proximal_phalanx_3");
Scene7->addChild(ROUTE1709);

ROUTE* ROUTE1710 = new ROUTE();
ROUTE1710->setFromField("value_changed");
ROUTE1710->setFromNode("Armature_OI_l_carpal_proximal_phalanx_3");
ROUTE1710->setToField("rotation");
ROUTE1710->setToNode("hanim_l_carpal_proximal_phalanx_3");
Scene7->addChild(ROUTE1710);

ROUTE* ROUTE1711 = new ROUTE();
ROUTE1711->setFromField("fraction_changed");
ROUTE1711->setFromNode("Armature_Clock");
ROUTE1711->setToField("set_fraction");
ROUTE1711->setToNode("Armature_OI_l_carpal_middle_phalanx_3");
Scene7->addChild(ROUTE1711);

ROUTE* ROUTE1712 = new ROUTE();
ROUTE1712->setFromField("value_changed");
ROUTE1712->setFromNode("Armature_OI_l_carpal_middle_phalanx_3");
ROUTE1712->setToField("rotation");
ROUTE1712->setToNode("hanim_l_carpal_middle_phalanx_3");
Scene7->addChild(ROUTE1712);

ROUTE* ROUTE1713 = new ROUTE();
ROUTE1713->setFromField("fraction_changed");
ROUTE1713->setFromNode("Armature_Clock");
ROUTE1713->setToField("set_fraction");
ROUTE1713->setToNode("Armature_OI_l_carpal_distal_phalanx_3");
Scene7->addChild(ROUTE1713);

ROUTE* ROUTE1714 = new ROUTE();
ROUTE1714->setFromField("value_changed");
ROUTE1714->setFromNode("Armature_OI_l_carpal_distal_phalanx_3");
ROUTE1714->setToField("rotation");
ROUTE1714->setToNode("hanim_l_carpal_distal_phalanx_3");
Scene7->addChild(ROUTE1714);

ROUTE* ROUTE1715 = new ROUTE();
ROUTE1715->setFromField("fraction_changed");
ROUTE1715->setFromNode("Armature_Clock");
ROUTE1715->setToField("set_fraction");
ROUTE1715->setToNode("Armature_OI_l_hamate");
Scene7->addChild(ROUTE1715);

ROUTE* ROUTE1716 = new ROUTE();
ROUTE1716->setFromField("value_changed");
ROUTE1716->setFromNode("Armature_OI_l_hamate");
ROUTE1716->setToField("rotation");
ROUTE1716->setToNode("hanim_l_hamate");
Scene7->addChild(ROUTE1716);

ROUTE* ROUTE1717 = new ROUTE();
ROUTE1717->setFromField("fraction_changed");
ROUTE1717->setFromNode("Armature_Clock");
ROUTE1717->setToField("set_fraction");
ROUTE1717->setToNode("Armature_OI_l_metacarpal_4");
Scene7->addChild(ROUTE1717);

ROUTE* ROUTE1718 = new ROUTE();
ROUTE1718->setFromField("value_changed");
ROUTE1718->setFromNode("Armature_OI_l_metacarpal_4");
ROUTE1718->setToField("rotation");
ROUTE1718->setToNode("hanim_l_metacarpal_4");
Scene7->addChild(ROUTE1718);

ROUTE* ROUTE1719 = new ROUTE();
ROUTE1719->setFromField("fraction_changed");
ROUTE1719->setFromNode("Armature_Clock");
ROUTE1719->setToField("set_fraction");
ROUTE1719->setToNode("Armature_OI_l_carpal_proximal_phalanx_4");
Scene7->addChild(ROUTE1719);

ROUTE* ROUTE1720 = new ROUTE();
ROUTE1720->setFromField("value_changed");
ROUTE1720->setFromNode("Armature_OI_l_carpal_proximal_phalanx_4");
ROUTE1720->setToField("rotation");
ROUTE1720->setToNode("hanim_l_carpal_proximal_phalanx_4");
Scene7->addChild(ROUTE1720);

ROUTE* ROUTE1721 = new ROUTE();
ROUTE1721->setFromField("fraction_changed");
ROUTE1721->setFromNode("Armature_Clock");
ROUTE1721->setToField("set_fraction");
ROUTE1721->setToNode("Armature_OI_l_carpal_middle_phalanx_4");
Scene7->addChild(ROUTE1721);

ROUTE* ROUTE1722 = new ROUTE();
ROUTE1722->setFromField("value_changed");
ROUTE1722->setFromNode("Armature_OI_l_carpal_middle_phalanx_4");
ROUTE1722->setToField("rotation");
ROUTE1722->setToNode("hanim_l_carpal_middle_phalanx_4");
Scene7->addChild(ROUTE1722);

ROUTE* ROUTE1723 = new ROUTE();
ROUTE1723->setFromField("fraction_changed");
ROUTE1723->setFromNode("Armature_Clock");
ROUTE1723->setToField("set_fraction");
ROUTE1723->setToNode("Armature_OI_l_carpal_distal_phalanx_4");
Scene7->addChild(ROUTE1723);

ROUTE* ROUTE1724 = new ROUTE();
ROUTE1724->setFromField("value_changed");
ROUTE1724->setFromNode("Armature_OI_l_carpal_distal_phalanx_4");
ROUTE1724->setToField("rotation");
ROUTE1724->setToNode("hanim_l_carpal_distal_phalanx_4");
Scene7->addChild(ROUTE1724);

ROUTE* ROUTE1725 = new ROUTE();
ROUTE1725->setFromField("fraction_changed");
ROUTE1725->setFromNode("Armature_Clock");
ROUTE1725->setToField("set_fraction");
ROUTE1725->setToNode("Armature_OI_l_metacarpal_5");
Scene7->addChild(ROUTE1725);

ROUTE* ROUTE1726 = new ROUTE();
ROUTE1726->setFromField("value_changed");
ROUTE1726->setFromNode("Armature_OI_l_metacarpal_5");
ROUTE1726->setToField("rotation");
ROUTE1726->setToNode("hanim_l_metacarpal_5");
Scene7->addChild(ROUTE1726);

ROUTE* ROUTE1727 = new ROUTE();
ROUTE1727->setFromField("fraction_changed");
ROUTE1727->setFromNode("Armature_Clock");
ROUTE1727->setToField("set_fraction");
ROUTE1727->setToNode("Armature_OI_l_carpal_proximal_phalanx_5");
Scene7->addChild(ROUTE1727);

ROUTE* ROUTE1728 = new ROUTE();
ROUTE1728->setFromField("value_changed");
ROUTE1728->setFromNode("Armature_OI_l_carpal_proximal_phalanx_5");
ROUTE1728->setToField("rotation");
ROUTE1728->setToNode("hanim_l_carpal_proximal_phalanx_5");
Scene7->addChild(ROUTE1728);

ROUTE* ROUTE1729 = new ROUTE();
ROUTE1729->setFromField("fraction_changed");
ROUTE1729->setFromNode("Armature_Clock");
ROUTE1729->setToField("set_fraction");
ROUTE1729->setToNode("Armature_OI_l_carpal_middle_phalanx_5");
Scene7->addChild(ROUTE1729);

ROUTE* ROUTE1730 = new ROUTE();
ROUTE1730->setFromField("value_changed");
ROUTE1730->setFromNode("Armature_OI_l_carpal_middle_phalanx_5");
ROUTE1730->setToField("rotation");
ROUTE1730->setToNode("hanim_l_carpal_middle_phalanx_5");
Scene7->addChild(ROUTE1730);

ROUTE* ROUTE1731 = new ROUTE();
ROUTE1731->setFromField("fraction_changed");
ROUTE1731->setFromNode("Armature_Clock");
ROUTE1731->setToField("set_fraction");
ROUTE1731->setToNode("Armature_OI_l_carpal_distal_phalanx_5");
Scene7->addChild(ROUTE1731);

ROUTE* ROUTE1732 = new ROUTE();
ROUTE1732->setFromField("value_changed");
ROUTE1732->setFromNode("Armature_OI_l_carpal_distal_phalanx_5");
ROUTE1732->setToField("rotation");
ROUTE1732->setToNode("hanim_l_carpal_distal_phalanx_5");
Scene7->addChild(ROUTE1732);

ROUTE* ROUTE1733 = new ROUTE();
ROUTE1733->setFromField("fraction_changed");
ROUTE1733->setFromNode("Armature_Clock");
ROUTE1733->setToField("set_fraction");
ROUTE1733->setToNode("Armature_OI_r_clavicle");
Scene7->addChild(ROUTE1733);

ROUTE* ROUTE1734 = new ROUTE();
ROUTE1734->setFromField("value_changed");
ROUTE1734->setFromNode("Armature_OI_r_clavicle");
ROUTE1734->setToField("rotation");
ROUTE1734->setToNode("hanim_r_clavicle");
Scene7->addChild(ROUTE1734);

ROUTE* ROUTE1735 = new ROUTE();
ROUTE1735->setFromField("fraction_changed");
ROUTE1735->setFromNode("Armature_Clock");
ROUTE1735->setToField("set_fraction");
ROUTE1735->setToNode("Armature_OI_r_scapula");
Scene7->addChild(ROUTE1735);

ROUTE* ROUTE1736 = new ROUTE();
ROUTE1736->setFromField("value_changed");
ROUTE1736->setFromNode("Armature_OI_r_scapula");
ROUTE1736->setToField("rotation");
ROUTE1736->setToNode("hanim_r_scapula");
Scene7->addChild(ROUTE1736);

ROUTE* ROUTE1737 = new ROUTE();
ROUTE1737->setFromField("fraction_changed");
ROUTE1737->setFromNode("Armature_Clock");
ROUTE1737->setToField("set_fraction");
ROUTE1737->setToNode("Armature_OI_r_upperarm");
Scene7->addChild(ROUTE1737);

ROUTE* ROUTE1738 = new ROUTE();
ROUTE1738->setFromField("value_changed");
ROUTE1738->setFromNode("Armature_OI_r_upperarm");
ROUTE1738->setToField("rotation");
ROUTE1738->setToNode("hanim_r_upperarm");
Scene7->addChild(ROUTE1738);

ROUTE* ROUTE1739 = new ROUTE();
ROUTE1739->setFromField("fraction_changed");
ROUTE1739->setFromNode("Armature_Clock");
ROUTE1739->setToField("set_fraction");
ROUTE1739->setToNode("Armature_OI_r_forearm");
Scene7->addChild(ROUTE1739);

ROUTE* ROUTE1740 = new ROUTE();
ROUTE1740->setFromField("value_changed");
ROUTE1740->setFromNode("Armature_OI_r_forearm");
ROUTE1740->setToField("rotation");
ROUTE1740->setToNode("hanim_r_forearm");
Scene7->addChild(ROUTE1740);

ROUTE* ROUTE1741 = new ROUTE();
ROUTE1741->setFromField("fraction_changed");
ROUTE1741->setFromNode("Armature_Clock");
ROUTE1741->setToField("set_fraction");
ROUTE1741->setToNode("Armature_OI_r_carpal");
Scene7->addChild(ROUTE1741);

ROUTE* ROUTE1742 = new ROUTE();
ROUTE1742->setFromField("value_changed");
ROUTE1742->setFromNode("Armature_OI_r_carpal");
ROUTE1742->setToField("rotation");
ROUTE1742->setToNode("hanim_r_carpal");
Scene7->addChild(ROUTE1742);

ROUTE* ROUTE1743 = new ROUTE();
ROUTE1743->setFromField("fraction_changed");
ROUTE1743->setFromNode("Armature_Clock");
ROUTE1743->setToField("set_fraction");
ROUTE1743->setToNode("Armature_OI_r_trapezium");
Scene7->addChild(ROUTE1743);

ROUTE* ROUTE1744 = new ROUTE();
ROUTE1744->setFromField("value_changed");
ROUTE1744->setFromNode("Armature_OI_r_trapezium");
ROUTE1744->setToField("rotation");
ROUTE1744->setToNode("hanim_r_trapezium");
Scene7->addChild(ROUTE1744);

ROUTE* ROUTE1745 = new ROUTE();
ROUTE1745->setFromField("fraction_changed");
ROUTE1745->setFromNode("Armature_Clock");
ROUTE1745->setToField("set_fraction");
ROUTE1745->setToNode("Armature_OI_r_metacarpal_1");
Scene7->addChild(ROUTE1745);

ROUTE* ROUTE1746 = new ROUTE();
ROUTE1746->setFromField("value_changed");
ROUTE1746->setFromNode("Armature_OI_r_metacarpal_1");
ROUTE1746->setToField("rotation");
ROUTE1746->setToNode("hanim_r_metacarpal_1");
Scene7->addChild(ROUTE1746);

ROUTE* ROUTE1747 = new ROUTE();
ROUTE1747->setFromField("fraction_changed");
ROUTE1747->setFromNode("Armature_Clock");
ROUTE1747->setToField("set_fraction");
ROUTE1747->setToNode("Armature_OI_r_carpal_proximal_phalanx_1");
Scene7->addChild(ROUTE1747);

ROUTE* ROUTE1748 = new ROUTE();
ROUTE1748->setFromField("value_changed");
ROUTE1748->setFromNode("Armature_OI_r_carpal_proximal_phalanx_1");
ROUTE1748->setToField("rotation");
ROUTE1748->setToNode("hanim_r_carpal_proximal_phalanx_1");
Scene7->addChild(ROUTE1748);

ROUTE* ROUTE1749 = new ROUTE();
ROUTE1749->setFromField("fraction_changed");
ROUTE1749->setFromNode("Armature_Clock");
ROUTE1749->setToField("set_fraction");
ROUTE1749->setToNode("Armature_OI_r_carpal_distal_phalanx_1");
Scene7->addChild(ROUTE1749);

ROUTE* ROUTE1750 = new ROUTE();
ROUTE1750->setFromField("value_changed");
ROUTE1750->setFromNode("Armature_OI_r_carpal_distal_phalanx_1");
ROUTE1750->setToField("rotation");
ROUTE1750->setToNode("hanim_r_carpal_distal_phalanx_1");
Scene7->addChild(ROUTE1750);

ROUTE* ROUTE1751 = new ROUTE();
ROUTE1751->setFromField("fraction_changed");
ROUTE1751->setFromNode("Armature_Clock");
ROUTE1751->setToField("set_fraction");
ROUTE1751->setToNode("Armature_OI_r_trapezoid");
Scene7->addChild(ROUTE1751);

ROUTE* ROUTE1752 = new ROUTE();
ROUTE1752->setFromField("value_changed");
ROUTE1752->setFromNode("Armature_OI_r_trapezoid");
ROUTE1752->setToField("rotation");
ROUTE1752->setToNode("hanim_r_trapezoid");
Scene7->addChild(ROUTE1752);

ROUTE* ROUTE1753 = new ROUTE();
ROUTE1753->setFromField("fraction_changed");
ROUTE1753->setFromNode("Armature_Clock");
ROUTE1753->setToField("set_fraction");
ROUTE1753->setToNode("Armature_OI_r_metacarpal_2");
Scene7->addChild(ROUTE1753);

ROUTE* ROUTE1754 = new ROUTE();
ROUTE1754->setFromField("value_changed");
ROUTE1754->setFromNode("Armature_OI_r_metacarpal_2");
ROUTE1754->setToField("rotation");
ROUTE1754->setToNode("hanim_r_metacarpal_2");
Scene7->addChild(ROUTE1754);

ROUTE* ROUTE1755 = new ROUTE();
ROUTE1755->setFromField("fraction_changed");
ROUTE1755->setFromNode("Armature_Clock");
ROUTE1755->setToField("set_fraction");
ROUTE1755->setToNode("Armature_OI_r_carpal_proximal_phalanx_2");
Scene7->addChild(ROUTE1755);

ROUTE* ROUTE1756 = new ROUTE();
ROUTE1756->setFromField("value_changed");
ROUTE1756->setFromNode("Armature_OI_r_carpal_proximal_phalanx_2");
ROUTE1756->setToField("rotation");
ROUTE1756->setToNode("hanim_r_carpal_proximal_phalanx_2");
Scene7->addChild(ROUTE1756);

ROUTE* ROUTE1757 = new ROUTE();
ROUTE1757->setFromField("fraction_changed");
ROUTE1757->setFromNode("Armature_Clock");
ROUTE1757->setToField("set_fraction");
ROUTE1757->setToNode("Armature_OI_r_carpal_middle_phalanx_2");
Scene7->addChild(ROUTE1757);

ROUTE* ROUTE1758 = new ROUTE();
ROUTE1758->setFromField("value_changed");
ROUTE1758->setFromNode("Armature_OI_r_carpal_middle_phalanx_2");
ROUTE1758->setToField("rotation");
ROUTE1758->setToNode("hanim_r_carpal_middle_phalanx_2");
Scene7->addChild(ROUTE1758);

ROUTE* ROUTE1759 = new ROUTE();
ROUTE1759->setFromField("fraction_changed");
ROUTE1759->setFromNode("Armature_Clock");
ROUTE1759->setToField("set_fraction");
ROUTE1759->setToNode("Armature_OI_r_carpal_distal_phalanx_2");
Scene7->addChild(ROUTE1759);

ROUTE* ROUTE1760 = new ROUTE();
ROUTE1760->setFromField("value_changed");
ROUTE1760->setFromNode("Armature_OI_r_carpal_distal_phalanx_2");
ROUTE1760->setToField("rotation");
ROUTE1760->setToNode("hanim_r_carpal_distal_phalanx_2");
Scene7->addChild(ROUTE1760);

ROUTE* ROUTE1761 = new ROUTE();
ROUTE1761->setFromField("fraction_changed");
ROUTE1761->setFromNode("Armature_Clock");
ROUTE1761->setToField("set_fraction");
ROUTE1761->setToNode("Armature_OI_r_capitate");
Scene7->addChild(ROUTE1761);

ROUTE* ROUTE1762 = new ROUTE();
ROUTE1762->setFromField("value_changed");
ROUTE1762->setFromNode("Armature_OI_r_capitate");
ROUTE1762->setToField("rotation");
ROUTE1762->setToNode("hanim_r_capitate");
Scene7->addChild(ROUTE1762);

ROUTE* ROUTE1763 = new ROUTE();
ROUTE1763->setFromField("fraction_changed");
ROUTE1763->setFromNode("Armature_Clock");
ROUTE1763->setToField("set_fraction");
ROUTE1763->setToNode("Armature_OI_r_metacarpal_3");
Scene7->addChild(ROUTE1763);

ROUTE* ROUTE1764 = new ROUTE();
ROUTE1764->setFromField("value_changed");
ROUTE1764->setFromNode("Armature_OI_r_metacarpal_3");
ROUTE1764->setToField("rotation");
ROUTE1764->setToNode("hanim_r_metacarpal_3");
Scene7->addChild(ROUTE1764);

ROUTE* ROUTE1765 = new ROUTE();
ROUTE1765->setFromField("fraction_changed");
ROUTE1765->setFromNode("Armature_Clock");
ROUTE1765->setToField("set_fraction");
ROUTE1765->setToNode("Armature_OI_r_carpal_proximal_phalanx_3");
Scene7->addChild(ROUTE1765);

ROUTE* ROUTE1766 = new ROUTE();
ROUTE1766->setFromField("value_changed");
ROUTE1766->setFromNode("Armature_OI_r_carpal_proximal_phalanx_3");
ROUTE1766->setToField("rotation");
ROUTE1766->setToNode("hanim_r_carpal_proximal_phalanx_3");
Scene7->addChild(ROUTE1766);

ROUTE* ROUTE1767 = new ROUTE();
ROUTE1767->setFromField("fraction_changed");
ROUTE1767->setFromNode("Armature_Clock");
ROUTE1767->setToField("set_fraction");
ROUTE1767->setToNode("Armature_OI_r_carpal_middle_phalanx_3");
Scene7->addChild(ROUTE1767);

ROUTE* ROUTE1768 = new ROUTE();
ROUTE1768->setFromField("value_changed");
ROUTE1768->setFromNode("Armature_OI_r_carpal_middle_phalanx_3");
ROUTE1768->setToField("rotation");
ROUTE1768->setToNode("hanim_r_carpal_middle_phalanx_3");
Scene7->addChild(ROUTE1768);

ROUTE* ROUTE1769 = new ROUTE();
ROUTE1769->setFromField("fraction_changed");
ROUTE1769->setFromNode("Armature_Clock");
ROUTE1769->setToField("set_fraction");
ROUTE1769->setToNode("Armature_OI_r_carpal_distal_phalanx_3");
Scene7->addChild(ROUTE1769);

ROUTE* ROUTE1770 = new ROUTE();
ROUTE1770->setFromField("value_changed");
ROUTE1770->setFromNode("Armature_OI_r_carpal_distal_phalanx_3");
ROUTE1770->setToField("rotation");
ROUTE1770->setToNode("hanim_r_carpal_distal_phalanx_3");
Scene7->addChild(ROUTE1770);

ROUTE* ROUTE1771 = new ROUTE();
ROUTE1771->setFromField("fraction_changed");
ROUTE1771->setFromNode("Armature_Clock");
ROUTE1771->setToField("set_fraction");
ROUTE1771->setToNode("Armature_OI_r_hamate");
Scene7->addChild(ROUTE1771);

ROUTE* ROUTE1772 = new ROUTE();
ROUTE1772->setFromField("value_changed");
ROUTE1772->setFromNode("Armature_OI_r_hamate");
ROUTE1772->setToField("rotation");
ROUTE1772->setToNode("hanim_r_hamate");
Scene7->addChild(ROUTE1772);

ROUTE* ROUTE1773 = new ROUTE();
ROUTE1773->setFromField("fraction_changed");
ROUTE1773->setFromNode("Armature_Clock");
ROUTE1773->setToField("set_fraction");
ROUTE1773->setToNode("Armature_OI_r_metacarpal_4");
Scene7->addChild(ROUTE1773);

ROUTE* ROUTE1774 = new ROUTE();
ROUTE1774->setFromField("value_changed");
ROUTE1774->setFromNode("Armature_OI_r_metacarpal_4");
ROUTE1774->setToField("rotation");
ROUTE1774->setToNode("hanim_r_metacarpal_4");
Scene7->addChild(ROUTE1774);

ROUTE* ROUTE1775 = new ROUTE();
ROUTE1775->setFromField("fraction_changed");
ROUTE1775->setFromNode("Armature_Clock");
ROUTE1775->setToField("set_fraction");
ROUTE1775->setToNode("Armature_OI_r_carpal_proximal_phalanx_4");
Scene7->addChild(ROUTE1775);

ROUTE* ROUTE1776 = new ROUTE();
ROUTE1776->setFromField("value_changed");
ROUTE1776->setFromNode("Armature_OI_r_carpal_proximal_phalanx_4");
ROUTE1776->setToField("rotation");
ROUTE1776->setToNode("hanim_r_carpal_proximal_phalanx_4");
Scene7->addChild(ROUTE1776);

ROUTE* ROUTE1777 = new ROUTE();
ROUTE1777->setFromField("fraction_changed");
ROUTE1777->setFromNode("Armature_Clock");
ROUTE1777->setToField("set_fraction");
ROUTE1777->setToNode("Armature_OI_r_carpal_middle_phalanx_4");
Scene7->addChild(ROUTE1777);

ROUTE* ROUTE1778 = new ROUTE();
ROUTE1778->setFromField("value_changed");
ROUTE1778->setFromNode("Armature_OI_r_carpal_middle_phalanx_4");
ROUTE1778->setToField("rotation");
ROUTE1778->setToNode("hanim_r_carpal_middle_phalanx_4");
Scene7->addChild(ROUTE1778);

ROUTE* ROUTE1779 = new ROUTE();
ROUTE1779->setFromField("fraction_changed");
ROUTE1779->setFromNode("Armature_Clock");
ROUTE1779->setToField("set_fraction");
ROUTE1779->setToNode("Armature_OI_r_carpal_distal_phalanx_4");
Scene7->addChild(ROUTE1779);

ROUTE* ROUTE1780 = new ROUTE();
ROUTE1780->setFromField("value_changed");
ROUTE1780->setFromNode("Armature_OI_r_carpal_distal_phalanx_4");
ROUTE1780->setToField("rotation");
ROUTE1780->setToNode("hanim_r_carpal_distal_phalanx_4");
Scene7->addChild(ROUTE1780);

ROUTE* ROUTE1781 = new ROUTE();
ROUTE1781->setFromField("fraction_changed");
ROUTE1781->setFromNode("Armature_Clock");
ROUTE1781->setToField("set_fraction");
ROUTE1781->setToNode("Armature_OI_r_metacarpal_5");
Scene7->addChild(ROUTE1781);

ROUTE* ROUTE1782 = new ROUTE();
ROUTE1782->setFromField("value_changed");
ROUTE1782->setFromNode("Armature_OI_r_metacarpal_5");
ROUTE1782->setToField("rotation");
ROUTE1782->setToNode("hanim_r_metacarpal_5");
Scene7->addChild(ROUTE1782);

ROUTE* ROUTE1783 = new ROUTE();
ROUTE1783->setFromField("fraction_changed");
ROUTE1783->setFromNode("Armature_Clock");
ROUTE1783->setToField("set_fraction");
ROUTE1783->setToNode("Armature_OI_r_carpal_proximal_phalanx_5");
Scene7->addChild(ROUTE1783);

ROUTE* ROUTE1784 = new ROUTE();
ROUTE1784->setFromField("value_changed");
ROUTE1784->setFromNode("Armature_OI_r_carpal_proximal_phalanx_5");
ROUTE1784->setToField("rotation");
ROUTE1784->setToNode("hanim_r_carpal_proximal_phalanx_5");
Scene7->addChild(ROUTE1784);

ROUTE* ROUTE1785 = new ROUTE();
ROUTE1785->setFromField("fraction_changed");
ROUTE1785->setFromNode("Armature_Clock");
ROUTE1785->setToField("set_fraction");
ROUTE1785->setToNode("Armature_OI_r_carpal_middle_phalanx_5");
Scene7->addChild(ROUTE1785);

ROUTE* ROUTE1786 = new ROUTE();
ROUTE1786->setFromField("value_changed");
ROUTE1786->setFromNode("Armature_OI_r_carpal_middle_phalanx_5");
ROUTE1786->setToField("rotation");
ROUTE1786->setToNode("hanim_r_carpal_middle_phalanx_5");
Scene7->addChild(ROUTE1786);

ROUTE* ROUTE1787 = new ROUTE();
ROUTE1787->setFromField("fraction_changed");
ROUTE1787->setFromNode("Armature_Clock");
ROUTE1787->setToField("set_fraction");
ROUTE1787->setToNode("Armature_OI_r_carpal_distal_phalanx_5");
Scene7->addChild(ROUTE1787);

ROUTE* ROUTE1788 = new ROUTE();
ROUTE1788->setFromField("value_changed");
ROUTE1788->setFromNode("Armature_OI_r_carpal_distal_phalanx_5");
ROUTE1788->setToField("rotation");
ROUTE1788->setToNode("hanim_r_carpal_distal_phalanx_5");
Scene7->addChild(ROUTE1788);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
