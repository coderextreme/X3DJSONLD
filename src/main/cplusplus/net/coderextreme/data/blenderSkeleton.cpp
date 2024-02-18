/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("HAnim");
component2->setLevel(3);
head1->addComponent(*component2);

Cunit* unit3 = new Cunit();
unit3->setName("METERS");
unit3->setCategory("length");
head1->addUnit(*unit3);

Cmeta* meta4 = new Cmeta();
meta4->setName("filename");
meta4->setContent("blenderSkeleton.x3d");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("copyright");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("reference");
meta6->setContent("http://www.web3D.org");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("generator");
meta7->setContent("Blender 4.0.1");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("exporter");
meta8->setContent("io_scene_x3dv");
head1->addMeta(*meta8);

X3D0->setHead(*head1);

CScene* Scene9 = new CScene();
CNavigationInfo* NavigationInfo10 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo10);

CBackground* Background11 = (CBackground *)(m_pScene.createNode("Background"));
Background11->setDEF("WO_World");
Background11->setGroundColor(new float[3]{0.05087608844041824,0.05087608844041824,0.05087608844041824});
Background11->setSkyColor(new float[3]{0.05087608844041824,0.05087608844041824,0.05087608844041824});
group->addChildren(*Background11);

CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape13 = (CShape *)(m_pScene.createNode("Shape"));
Shape13->setDEF("SiteShape");
CBox* Box14 = (CBox *)(m_pScene.createNode("Box"));
Box14->setSize(new float[3]{0.05,0.05,0.05});
Shape13->setGeometry(Box14);

CAppearance* Appearance15 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material16 = (CMaterial *)(m_pScene.createNode("Material"));
Material16->setDiffuseColor(new float[3]{0,0,1});
Appearance15->setMaterial(*Material16);

Shape13->setAppearance(*Appearance15);

Transform12->addChild(*Shape13);

group->addChildren(*Transform12);

CTransform* Transform17 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape18 = (CShape *)(m_pScene.createNode("Shape"));
Shape18->setDEF("JointShape");
CSphere* Sphere19 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere19->setRadius(0.06);
Shape18->setGeometry(Sphere19);

CAppearance* Appearance20 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance20->setDEF("JointAppearance");
CMaterial* Material21 = (CMaterial *)(m_pScene.createNode("Material"));
Material21->setDiffuseColor(new float[3]{1,0.5,0});
Material21->setTransparency(0.5);
Appearance20->setMaterial(*Material21);

Shape18->setAppearance(*Appearance20);

Transform17->addChild(*Shape18);

group->addChildren(*Transform17);

CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
Transform22->setDEF("Light_TRANSFORM");
Transform22->setRotation(new float[4]{0.20594,0.33152,0.9207,1.92627});
Transform22->setTranslation(new float[3]{4.07625,1.00545,5.90386});
CPointLight* PointLight23 = (CPointLight *)(m_pScene.createNode("PointLight"));
PointLight23->setDEF("LA_Light");
PointLight23->setLocation(new float[3]{-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7});
PointLight23->setRadius(40);
Transform22->addChildren(*PointLight23);

group->addChildren(*Transform22);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setDEF("Camera_TRANSFORM");
Transform24->setRotation(new float[4]{0.77344,0.33383,0.53884,1.35072});
Transform24->setTranslation(new float[3]{7.35889,-6.92579,4.95831});
CViewpoint* Viewpoint25 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint25->setDEF("CA_Camera");
Viewpoint25->setFieldOfView(0.6911112070083618);
Viewpoint25->setOrientation(new float[4]{-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0});
Viewpoint25->setPosition(new float[3]{-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7});
Transform24->addChildren(*Viewpoint25);

group->addChildren(*Transform24);

CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setDEF("Armature_TRANSFORM");
CHAnimHumanoid* HAnimHumanoid27 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid27->setName("humanoid");
HAnimHumanoid27->setDEF("hanim_humanoid");
HAnimHumanoid27->setVersion("2.0");
CHAnimJoint* HAnimJoint28 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint28->setName("Armature");
HAnimJoint28->setDEF("hanim_Armature");
HAnimJoint28->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint28->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment29 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment29->setName("SEGMENT_FOR_Armature");
HAnimSegment29->setDEF("hanim_SEGMENT_FOR_Armature");
CTouchSensor* TouchSensor30 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor30->setDescription("joint Armature segment SEGMENT_FOR_Armature");
HAnimSegment29->addChildren(*TouchSensor30);

CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
Shape32->setUSE("JointShape");
Transform31->addChild(*Shape32);

HAnimSegment29->addChildren(*Transform31);

CHAnimSite* HAnimSite33 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite33->setName("SEGMENT_FOR_Armature_tip");
HAnimSite33->setDEF("hanim_SEGMENT_FOR_Armature_tip");
CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape35 = (CShape *)(m_pScene.createNode("Shape"));
Shape35->setUSE("SiteShape");
Transform34->addChild(*Shape35);

HAnimSite33->addChildren(*Transform34);

HAnimSegment29->addChildren(*HAnimSite33);

HAnimJoint28->addChildren(*HAnimSegment29);

CHAnimJoint* HAnimJoint36 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint36->setName("sacrum");
HAnimJoint36->setDEF("hanim_sacrum");
HAnimJoint36->setCenter(new float[3]{-0.0002,-0.1178,0.8174});
HAnimJoint36->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint36->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment37 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment37->setName("SEGMENT_FOR_sacrum");
HAnimSegment37->setDEF("hanim_SEGMENT_FOR_sacrum");
CTouchSensor* TouchSensor38 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor38->setDescription("joint sacrum segment SEGMENT_FOR_sacrum");
HAnimSegment37->addChildren(*TouchSensor38);

CTransform* Transform39 = (CTransform *)(m_pScene.createNode("Transform"));
Transform39->setTranslation(new float[3]{-0.0002,-0.1178,0.8174});
CShape* Shape40 = (CShape *)(m_pScene.createNode("Shape"));
Shape40->setUSE("JointShape");
Transform39->addChild(*Shape40);

HAnimSegment37->addChildren(*Transform39);

CHAnimSite* HAnimSite41 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite41->setName("SEGMENT_FOR_sacrum_tip");
HAnimSite41->setDEF("hanim_SEGMENT_FOR_sacrum_tip");
CTransform* Transform42 = (CTransform *)(m_pScene.createNode("Transform"));
Transform42->setTranslation(new float[3]{-0.0002,-0.1178,0.8174});
CShape* Shape43 = (CShape *)(m_pScene.createNode("Shape"));
Shape43->setUSE("SiteShape");
Transform42->addChild(*Shape43);

HAnimSite41->addChildren(*Transform42);

HAnimSegment37->addChildren(*HAnimSite41);

HAnimJoint36->addChildren(*HAnimSegment37);

CHAnimJoint* HAnimJoint44 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint44->setName("pelvis");
HAnimJoint44->setDEF("hanim_pelvis");
HAnimJoint44->setCenter(new float[3]{-0.0002,-0.1178,0.6986});
HAnimJoint44->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint44->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment45 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment45->setName("SEGMENT_FOR_pelvis");
HAnimSegment45->setDEF("hanim_SEGMENT_FOR_pelvis");
CTouchSensor* TouchSensor46 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor46->setDescription("joint pelvis segment SEGMENT_FOR_pelvis");
HAnimSegment45->addChildren(*TouchSensor46);

CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
Transform47->setTranslation(new float[3]{-0.0002,-0.1178,0.6986});
CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
Shape48->setUSE("JointShape");
Transform47->addChild(*Shape48);

HAnimSegment45->addChildren(*Transform47);

CHAnimSite* HAnimSite49 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite49->setName("SEGMENT_FOR_pelvis_tip");
HAnimSite49->setDEF("hanim_SEGMENT_FOR_pelvis_tip");
CTransform* Transform50 = (CTransform *)(m_pScene.createNode("Transform"));
Transform50->setTranslation(new float[3]{-0.0002,-0.1178,0.6986});
CShape* Shape51 = (CShape *)(m_pScene.createNode("Shape"));
Shape51->setUSE("SiteShape");
Transform50->addChild(*Shape51);

HAnimSite49->addChildren(*Transform50);

HAnimSegment45->addChildren(*HAnimSite49);

HAnimJoint44->addChildren(*HAnimSegment45);

CHAnimJoint* HAnimJoint52 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint52->setName("l_thigh");
HAnimJoint52->setDEF("hanim_l_thigh");
HAnimJoint52->setCenter(new float[3]{0.0945,-0.1202,0.8181});
HAnimJoint52->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint52->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment53 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment53->setName("SEGMENT_FOR_l_thigh");
HAnimSegment53->setDEF("hanim_SEGMENT_FOR_l_thigh");
CTouchSensor* TouchSensor54 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor54->setDescription("joint l_thigh segment SEGMENT_FOR_l_thigh");
HAnimSegment53->addChildren(*TouchSensor54);

CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setTranslation(new float[3]{0.0945,-0.1202,0.8181});
CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
Shape56->setUSE("JointShape");
Transform55->addChild(*Shape56);

HAnimSegment53->addChildren(*Transform55);

CHAnimSite* HAnimSite57 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite57->setName("SEGMENT_FOR_l_thigh_tip");
HAnimSite57->setDEF("hanim_SEGMENT_FOR_l_thigh_tip");
CTransform* Transform58 = (CTransform *)(m_pScene.createNode("Transform"));
Transform58->setTranslation(new float[3]{0.0945,-0.1202,0.8181});
CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
Shape59->setUSE("SiteShape");
Transform58->addChild(*Shape59);

HAnimSite57->addChildren(*Transform58);

HAnimSegment53->addChildren(*HAnimSite57);

HAnimJoint52->addChildren(*HAnimSegment53);

CHAnimJoint* HAnimJoint60 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint60->setName("l_calf");
HAnimJoint60->setDEF("hanim_l_calf");
HAnimJoint60->setCenter(new float[3]{0.0924,-0.1213,0.4003});
HAnimJoint60->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint60->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment61 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment61->setName("SEGMENT_FOR_l_calf");
HAnimSegment61->setDEF("hanim_SEGMENT_FOR_l_calf");
CTouchSensor* TouchSensor62 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor62->setDescription("joint l_calf segment SEGMENT_FOR_l_calf");
HAnimSegment61->addChildren(*TouchSensor62);

CTransform* Transform63 = (CTransform *)(m_pScene.createNode("Transform"));
Transform63->setTranslation(new float[3]{0.0924,-0.1213,0.4003});
CShape* Shape64 = (CShape *)(m_pScene.createNode("Shape"));
Shape64->setUSE("JointShape");
Transform63->addChild(*Shape64);

HAnimSegment61->addChildren(*Transform63);

CHAnimSite* HAnimSite65 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite65->setName("SEGMENT_FOR_l_calf_tip");
HAnimSite65->setDEF("hanim_SEGMENT_FOR_l_calf_tip");
CTransform* Transform66 = (CTransform *)(m_pScene.createNode("Transform"));
Transform66->setTranslation(new float[3]{0.0924,-0.1213,0.4003});
CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
Shape67->setUSE("SiteShape");
Transform66->addChild(*Shape67);

HAnimSite65->addChildren(*Transform66);

HAnimSegment61->addChildren(*HAnimSite65);

HAnimJoint60->addChildren(*HAnimSegment61);

CHAnimJoint* HAnimJoint68 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint68->setName("l_talus");
HAnimJoint68->setDEF("hanim_l_talus");
HAnimJoint68->setCenter(new float[3]{0.0886,-0.1123,0.0869});
HAnimJoint68->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint68->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment69 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment69->setName("SEGMENT_FOR_l_talus");
HAnimSegment69->setDEF("hanim_SEGMENT_FOR_l_talus");
CTouchSensor* TouchSensor70 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor70->setDescription("joint l_talus segment SEGMENT_FOR_l_talus");
HAnimSegment69->addChildren(*TouchSensor70);

CTransform* Transform71 = (CTransform *)(m_pScene.createNode("Transform"));
Transform71->setTranslation(new float[3]{0.0886,-0.1123,0.0869});
CShape* Shape72 = (CShape *)(m_pScene.createNode("Shape"));
Shape72->setUSE("JointShape");
Transform71->addChild(*Shape72);

HAnimSegment69->addChildren(*Transform71);

CHAnimSite* HAnimSite73 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite73->setName("SEGMENT_FOR_l_talus_tip");
HAnimSite73->setDEF("hanim_SEGMENT_FOR_l_talus_tip");
CTransform* Transform74 = (CTransform *)(m_pScene.createNode("Transform"));
Transform74->setTranslation(new float[3]{0.0886,-0.1123,0.0869});
CShape* Shape75 = (CShape *)(m_pScene.createNode("Shape"));
Shape75->setUSE("SiteShape");
Transform74->addChild(*Shape75);

HAnimSite73->addChildren(*Transform74);

HAnimSegment69->addChildren(*HAnimSite73);

HAnimJoint68->addChildren(*HAnimSegment69);

CHAnimJoint* HAnimJoint76 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint76->setName("l_navicular");
HAnimJoint76->setDEF("hanim_l_navicular");
HAnimJoint76->setCenter(new float[3]{0.0781,-0.097,0.0283});
HAnimJoint76->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint76->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment77 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment77->setName("SEGMENT_FOR_l_navicular");
HAnimSegment77->setDEF("hanim_SEGMENT_FOR_l_navicular");
CTouchSensor* TouchSensor78 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor78->setDescription("joint l_navicular segment SEGMENT_FOR_l_navicular");
HAnimSegment77->addChildren(*TouchSensor78);

CTransform* Transform79 = (CTransform *)(m_pScene.createNode("Transform"));
Transform79->setTranslation(new float[3]{0.0781,-0.097,0.0283});
CShape* Shape80 = (CShape *)(m_pScene.createNode("Shape"));
Shape80->setUSE("JointShape");
Transform79->addChild(*Shape80);

HAnimSegment77->addChildren(*Transform79);

CHAnimSite* HAnimSite81 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite81->setName("SEGMENT_FOR_l_navicular_tip");
HAnimSite81->setDEF("hanim_SEGMENT_FOR_l_navicular_tip");
CTransform* Transform82 = (CTransform *)(m_pScene.createNode("Transform"));
Transform82->setTranslation(new float[3]{0.0781,-0.097,0.0283});
CShape* Shape83 = (CShape *)(m_pScene.createNode("Shape"));
Shape83->setUSE("SiteShape");
Transform82->addChild(*Shape83);

HAnimSite81->addChildren(*Transform82);

HAnimSegment77->addChildren(*HAnimSite81);

HAnimJoint76->addChildren(*HAnimSegment77);

CHAnimJoint* HAnimJoint84 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint84->setName("l_cuneiform_1");
HAnimJoint84->setDEF("hanim_l_cuneiform_1");
HAnimJoint84->setCenter(new float[3]{0.0672,-0.0835,0.0235});
HAnimJoint84->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint84->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment85 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment85->setName("SEGMENT_FOR_l_cuneiform_1");
HAnimSegment85->setDEF("hanim_SEGMENT_FOR_l_cuneiform_1");
CTouchSensor* TouchSensor86 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor86->setDescription("joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1");
HAnimSegment85->addChildren(*TouchSensor86);

CTransform* Transform87 = (CTransform *)(m_pScene.createNode("Transform"));
Transform87->setTranslation(new float[3]{0.0672,-0.0835,0.0235});
CShape* Shape88 = (CShape *)(m_pScene.createNode("Shape"));
Shape88->setUSE("JointShape");
Transform87->addChild(*Shape88);

HAnimSegment85->addChildren(*Transform87);

CHAnimSite* HAnimSite89 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite89->setName("SEGMENT_FOR_l_cuneiform_1_tip");
HAnimSite89->setDEF("hanim_SEGMENT_FOR_l_cuneiform_1_tip");
CTransform* Transform90 = (CTransform *)(m_pScene.createNode("Transform"));
Transform90->setTranslation(new float[3]{0.0672,-0.0835,0.0235});
CShape* Shape91 = (CShape *)(m_pScene.createNode("Shape"));
Shape91->setUSE("SiteShape");
Transform90->addChild(*Shape91);

HAnimSite89->addChildren(*Transform90);

HAnimSegment85->addChildren(*HAnimSite89);

HAnimJoint84->addChildren(*HAnimSegment85);

CHAnimJoint* HAnimJoint92 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint92->setName("l_metatarsal_1");
HAnimJoint92->setDEF("hanim_l_metatarsal_1");
HAnimJoint92->setCenter(new float[3]{0.0644,-0.0577,0.0147});
HAnimJoint92->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint92->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment93 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment93->setName("SEGMENT_FOR_l_metatarsal_1");
HAnimSegment93->setDEF("hanim_SEGMENT_FOR_l_metatarsal_1");
CTouchSensor* TouchSensor94 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor94->setDescription("joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1");
HAnimSegment93->addChildren(*TouchSensor94);

CTransform* Transform95 = (CTransform *)(m_pScene.createNode("Transform"));
Transform95->setTranslation(new float[3]{0.0644,-0.0577,0.0147});
CShape* Shape96 = (CShape *)(m_pScene.createNode("Shape"));
Shape96->setUSE("JointShape");
Transform95->addChild(*Shape96);

HAnimSegment93->addChildren(*Transform95);

CHAnimSite* HAnimSite97 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite97->setName("SEGMENT_FOR_l_metatarsal_1_tip");
HAnimSite97->setDEF("hanim_SEGMENT_FOR_l_metatarsal_1_tip");
CTransform* Transform98 = (CTransform *)(m_pScene.createNode("Transform"));
Transform98->setTranslation(new float[3]{0.0644,-0.0577,0.0147});
CShape* Shape99 = (CShape *)(m_pScene.createNode("Shape"));
Shape99->setUSE("SiteShape");
Transform98->addChild(*Shape99);

HAnimSite97->addChildren(*Transform98);

HAnimSegment93->addChildren(*HAnimSite97);

HAnimJoint92->addChildren(*HAnimSegment93);

CHAnimJoint* HAnimJoint100 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint100->setName("l_tarsal_proximal_phalanx_1");
HAnimJoint100->setDEF("hanim_l_tarsal_proximal_phalanx_1");
HAnimJoint100->setCenter(new float[3]{0.0619,-0.0083,0.0059});
HAnimJoint100->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint100->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment101 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment101->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_1");
HAnimSegment101->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1");
CTouchSensor* TouchSensor102 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor102->setDescription("joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1");
HAnimSegment101->addChildren(*TouchSensor102);

CTransform* Transform103 = (CTransform *)(m_pScene.createNode("Transform"));
Transform103->setTranslation(new float[3]{0.0619,-0.0083,0.0059});
CShape* Shape104 = (CShape *)(m_pScene.createNode("Shape"));
Shape104->setUSE("JointShape");
Transform103->addChild(*Shape104);

HAnimSegment101->addChildren(*Transform103);

CHAnimSite* HAnimSite105 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite105->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip");
HAnimSite105->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip");
CTransform* Transform106 = (CTransform *)(m_pScene.createNode("Transform"));
Transform106->setTranslation(new float[3]{0.0619,-0.0083,0.0059});
CShape* Shape107 = (CShape *)(m_pScene.createNode("Shape"));
Shape107->setUSE("SiteShape");
Transform106->addChild(*Shape107);

HAnimSite105->addChildren(*Transform106);

HAnimSegment101->addChildren(*HAnimSite105);

HAnimJoint100->addChildren(*HAnimSegment101);

CHAnimJoint* HAnimJoint108 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint108->setName("l_tarsal_distal_phalanx_1");
HAnimJoint108->setDEF("hanim_l_tarsal_distal_phalanx_1");
HAnimJoint108->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint108->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment109 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment109->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_1");
HAnimSegment109->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1");
CTouchSensor* TouchSensor110 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor110->setDescription("joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1");
HAnimSegment109->addChildren(*TouchSensor110);

CTransform* Transform111 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
Shape112->setUSE("JointShape");
Transform111->addChild(*Shape112);

HAnimSegment109->addChildren(*Transform111);

CHAnimSite* HAnimSite113 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite113->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip");
HAnimSite113->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip");
CTransform* Transform114 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape115 = (CShape *)(m_pScene.createNode("Shape"));
Shape115->setUSE("SiteShape");
Transform114->addChild(*Shape115);

HAnimSite113->addChildren(*Transform114);

HAnimSegment109->addChildren(*HAnimSite113);

HAnimJoint108->addChildren(*HAnimSegment109);

HAnimJoint100->addChildren(*HAnimJoint108);

HAnimJoint92->addChildren(*HAnimJoint100);

HAnimJoint84->addChildren(*HAnimJoint92);

HAnimJoint76->addChildren(*HAnimJoint84);

CHAnimJoint* HAnimJoint116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint116->setName("l_cuneiform_2");
HAnimJoint116->setDEF("hanim_l_cuneiform_2");
HAnimJoint116->setCenter(new float[3]{0.0812,-0.0805,0.025});
HAnimJoint116->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint116->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment117 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment117->setName("SEGMENT_FOR_l_cuneiform_2");
HAnimSegment117->setDEF("hanim_SEGMENT_FOR_l_cuneiform_2");
CTouchSensor* TouchSensor118 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor118->setDescription("joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2");
HAnimSegment117->addChildren(*TouchSensor118);

CTransform* Transform119 = (CTransform *)(m_pScene.createNode("Transform"));
Transform119->setTranslation(new float[3]{0.0812,-0.0805,0.025});
CShape* Shape120 = (CShape *)(m_pScene.createNode("Shape"));
Shape120->setUSE("JointShape");
Transform119->addChild(*Shape120);

HAnimSegment117->addChildren(*Transform119);

CHAnimSite* HAnimSite121 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite121->setName("SEGMENT_FOR_l_cuneiform_2_tip");
HAnimSite121->setDEF("hanim_SEGMENT_FOR_l_cuneiform_2_tip");
CTransform* Transform122 = (CTransform *)(m_pScene.createNode("Transform"));
Transform122->setTranslation(new float[3]{0.0812,-0.0805,0.025});
CShape* Shape123 = (CShape *)(m_pScene.createNode("Shape"));
Shape123->setUSE("SiteShape");
Transform122->addChild(*Shape123);

HAnimSite121->addChildren(*Transform122);

HAnimSegment117->addChildren(*HAnimSite121);

HAnimJoint116->addChildren(*HAnimSegment117);

CHAnimJoint* HAnimJoint124 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint124->setName("l_metatarsal_2");
HAnimJoint124->setDEF("hanim_l_metatarsal_2");
HAnimJoint124->setCenter(new float[3]{0.08,-0.0608,0.0175});
HAnimJoint124->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint124->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment125 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment125->setName("SEGMENT_FOR_l_metatarsal_2");
HAnimSegment125->setDEF("hanim_SEGMENT_FOR_l_metatarsal_2");
CTouchSensor* TouchSensor126 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor126->setDescription("joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2");
HAnimSegment125->addChildren(*TouchSensor126);

CTransform* Transform127 = (CTransform *)(m_pScene.createNode("Transform"));
Transform127->setTranslation(new float[3]{0.08,-0.0608,0.0175});
CShape* Shape128 = (CShape *)(m_pScene.createNode("Shape"));
Shape128->setUSE("JointShape");
Transform127->addChild(*Shape128);

HAnimSegment125->addChildren(*Transform127);

CHAnimSite* HAnimSite129 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite129->setName("SEGMENT_FOR_l_metatarsal_2_tip");
HAnimSite129->setDEF("hanim_SEGMENT_FOR_l_metatarsal_2_tip");
CTransform* Transform130 = (CTransform *)(m_pScene.createNode("Transform"));
Transform130->setTranslation(new float[3]{0.08,-0.0608,0.0175});
CShape* Shape131 = (CShape *)(m_pScene.createNode("Shape"));
Shape131->setUSE("SiteShape");
Transform130->addChild(*Shape131);

HAnimSite129->addChildren(*Transform130);

HAnimSegment125->addChildren(*HAnimSite129);

HAnimJoint124->addChildren(*HAnimSegment125);

CHAnimJoint* HAnimJoint132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint132->setName("l_tarsal_proximal_phalanx_2");
HAnimJoint132->setDEF("hanim_l_tarsal_proximal_phalanx_2");
HAnimJoint132->setCenter(new float[3]{0.0824,-0.004,0.0064});
HAnimJoint132->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint132->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment133 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment133->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_2");
HAnimSegment133->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2");
CTouchSensor* TouchSensor134 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor134->setDescription("joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2");
HAnimSegment133->addChildren(*TouchSensor134);

CTransform* Transform135 = (CTransform *)(m_pScene.createNode("Transform"));
Transform135->setTranslation(new float[3]{0.0824,-0.004,0.0064});
CShape* Shape136 = (CShape *)(m_pScene.createNode("Shape"));
Shape136->setUSE("JointShape");
Transform135->addChild(*Shape136);

HAnimSegment133->addChildren(*Transform135);

CHAnimSite* HAnimSite137 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite137->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip");
HAnimSite137->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip");
CTransform* Transform138 = (CTransform *)(m_pScene.createNode("Transform"));
Transform138->setTranslation(new float[3]{0.0824,-0.004,0.0064});
CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
Shape139->setUSE("SiteShape");
Transform138->addChild(*Shape139);

HAnimSite137->addChildren(*Transform138);

HAnimSegment133->addChildren(*HAnimSite137);

HAnimJoint132->addChildren(*HAnimSegment133);

CHAnimJoint* HAnimJoint140 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint140->setName("l_tarsal_middle_phalanx_2");
HAnimJoint140->setDEF("hanim_l_tarsal_middle_phalanx_2");
HAnimJoint140->setCenter(new float[3]{0.0841,0.0121,0.0041});
HAnimJoint140->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint140->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment141 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment141->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_2");
HAnimSegment141->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2");
CTouchSensor* TouchSensor142 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor142->setDescription("joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2");
HAnimSegment141->addChildren(*TouchSensor142);

CTransform* Transform143 = (CTransform *)(m_pScene.createNode("Transform"));
Transform143->setTranslation(new float[3]{0.0841,0.0121,0.0041});
CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
Shape144->setUSE("JointShape");
Transform143->addChild(*Shape144);

HAnimSegment141->addChildren(*Transform143);

CHAnimSite* HAnimSite145 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite145->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip");
HAnimSite145->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip");
CTransform* Transform146 = (CTransform *)(m_pScene.createNode("Transform"));
Transform146->setTranslation(new float[3]{0.0841,0.0121,0.0041});
CShape* Shape147 = (CShape *)(m_pScene.createNode("Shape"));
Shape147->setUSE("SiteShape");
Transform146->addChild(*Shape147);

HAnimSite145->addChildren(*Transform146);

HAnimSegment141->addChildren(*HAnimSite145);

HAnimJoint140->addChildren(*HAnimSegment141);

CHAnimJoint* HAnimJoint148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint148->setName("l_tarsal_distal_phalanx_2");
HAnimJoint148->setDEF("hanim_l_tarsal_distal_phalanx_2");
HAnimJoint148->setCenter(new float[3]{0.0841,0.0216,0.0013});
HAnimJoint148->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint148->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment149 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment149->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_2");
HAnimSegment149->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2");
CTouchSensor* TouchSensor150 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor150->setDescription("joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2");
HAnimSegment149->addChildren(*TouchSensor150);

CTransform* Transform151 = (CTransform *)(m_pScene.createNode("Transform"));
Transform151->setTranslation(new float[3]{0.0841,0.0216,0.0013});
CShape* Shape152 = (CShape *)(m_pScene.createNode("Shape"));
Shape152->setUSE("JointShape");
Transform151->addChild(*Shape152);

HAnimSegment149->addChildren(*Transform151);

CHAnimSite* HAnimSite153 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite153->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip");
HAnimSite153->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip");
CTransform* Transform154 = (CTransform *)(m_pScene.createNode("Transform"));
Transform154->setTranslation(new float[3]{0.0841,0.0216,0.0013});
CShape* Shape155 = (CShape *)(m_pScene.createNode("Shape"));
Shape155->setUSE("SiteShape");
Transform154->addChild(*Shape155);

HAnimSite153->addChildren(*Transform154);

HAnimSegment149->addChildren(*HAnimSite153);

HAnimJoint148->addChildren(*HAnimSegment149);

HAnimJoint140->addChildren(*HAnimJoint148);

HAnimJoint132->addChildren(*HAnimJoint140);

HAnimJoint124->addChildren(*HAnimJoint132);

HAnimJoint116->addChildren(*HAnimJoint124);

HAnimJoint76->addChildren(*HAnimJoint116);

CHAnimJoint* HAnimJoint156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint156->setName("l_cuneiform_3");
HAnimJoint156->setDEF("hanim_l_cuneiform_3");
HAnimJoint156->setCenter(new float[3]{0.0928,-0.0821,0.0248});
HAnimJoint156->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint156->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment157 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment157->setName("SEGMENT_FOR_l_cuneiform_3");
HAnimSegment157->setDEF("hanim_SEGMENT_FOR_l_cuneiform_3");
CTouchSensor* TouchSensor158 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor158->setDescription("joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3");
HAnimSegment157->addChildren(*TouchSensor158);

CTransform* Transform159 = (CTransform *)(m_pScene.createNode("Transform"));
Transform159->setTranslation(new float[3]{0.0928,-0.0821,0.0248});
CShape* Shape160 = (CShape *)(m_pScene.createNode("Shape"));
Shape160->setUSE("JointShape");
Transform159->addChild(*Shape160);

HAnimSegment157->addChildren(*Transform159);

CHAnimSite* HAnimSite161 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite161->setName("SEGMENT_FOR_l_cuneiform_3_tip");
HAnimSite161->setDEF("hanim_SEGMENT_FOR_l_cuneiform_3_tip");
CTransform* Transform162 = (CTransform *)(m_pScene.createNode("Transform"));
Transform162->setTranslation(new float[3]{0.0928,-0.0821,0.0248});
CShape* Shape163 = (CShape *)(m_pScene.createNode("Shape"));
Shape163->setUSE("SiteShape");
Transform162->addChild(*Shape163);

HAnimSite161->addChildren(*Transform162);

HAnimSegment157->addChildren(*HAnimSite161);

HAnimJoint156->addChildren(*HAnimSegment157);

CHAnimJoint* HAnimJoint164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint164->setName("l_metatarsal_3");
HAnimJoint164->setDEF("hanim_l_metatarsal_3");
HAnimJoint164->setCenter(new float[3]{0.0944,-0.0625,0.0175});
HAnimJoint164->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint164->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment165 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment165->setName("SEGMENT_FOR_l_metatarsal_3");
HAnimSegment165->setDEF("hanim_SEGMENT_FOR_l_metatarsal_3");
CTouchSensor* TouchSensor166 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor166->setDescription("joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3");
HAnimSegment165->addChildren(*TouchSensor166);

CTransform* Transform167 = (CTransform *)(m_pScene.createNode("Transform"));
Transform167->setTranslation(new float[3]{0.0944,-0.0625,0.0175});
CShape* Shape168 = (CShape *)(m_pScene.createNode("Shape"));
Shape168->setUSE("JointShape");
Transform167->addChild(*Shape168);

HAnimSegment165->addChildren(*Transform167);

CHAnimSite* HAnimSite169 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite169->setName("SEGMENT_FOR_l_metatarsal_3_tip");
HAnimSite169->setDEF("hanim_SEGMENT_FOR_l_metatarsal_3_tip");
CTransform* Transform170 = (CTransform *)(m_pScene.createNode("Transform"));
Transform170->setTranslation(new float[3]{0.0944,-0.0625,0.0175});
CShape* Shape171 = (CShape *)(m_pScene.createNode("Shape"));
Shape171->setUSE("SiteShape");
Transform170->addChild(*Shape171);

HAnimSite169->addChildren(*Transform170);

HAnimSegment165->addChildren(*HAnimSite169);

HAnimJoint164->addChildren(*HAnimSegment165);

CHAnimJoint* HAnimJoint172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint172->setName("l_tarsal_proximal_phalanx_3");
HAnimJoint172->setDEF("hanim_l_tarsal_proximal_phalanx_3");
HAnimJoint172->setCenter(new float[3]{0.0963,-0.0065,0.0065});
HAnimJoint172->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint172->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment173 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment173->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_3");
HAnimSegment173->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3");
CTouchSensor* TouchSensor174 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor174->setDescription("joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3");
HAnimSegment173->addChildren(*TouchSensor174);

CTransform* Transform175 = (CTransform *)(m_pScene.createNode("Transform"));
Transform175->setTranslation(new float[3]{0.0963,-0.0065,0.0065});
CShape* Shape176 = (CShape *)(m_pScene.createNode("Shape"));
Shape176->setUSE("JointShape");
Transform175->addChild(*Shape176);

HAnimSegment173->addChildren(*Transform175);

CHAnimSite* HAnimSite177 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite177->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip");
HAnimSite177->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip");
CTransform* Transform178 = (CTransform *)(m_pScene.createNode("Transform"));
Transform178->setTranslation(new float[3]{0.0963,-0.0065,0.0065});
CShape* Shape179 = (CShape *)(m_pScene.createNode("Shape"));
Shape179->setUSE("SiteShape");
Transform178->addChild(*Shape179);

HAnimSite177->addChildren(*Transform178);

HAnimSegment173->addChildren(*HAnimSite177);

HAnimJoint172->addChildren(*HAnimSegment173);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setName("l_tarsal_middle_phalanx_3");
HAnimJoint180->setDEF("hanim_l_tarsal_middle_phalanx_3");
HAnimJoint180->setCenter(new float[3]{0.0987,0.0086,0.0034});
HAnimJoint180->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint180->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment181 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment181->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_3");
HAnimSegment181->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3");
CTouchSensor* TouchSensor182 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor182->setDescription("joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3");
HAnimSegment181->addChildren(*TouchSensor182);

CTransform* Transform183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform183->setTranslation(new float[3]{0.0987,0.0086,0.0034});
CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
Shape184->setUSE("JointShape");
Transform183->addChild(*Shape184);

HAnimSegment181->addChildren(*Transform183);

CHAnimSite* HAnimSite185 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite185->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip");
HAnimSite185->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip");
CTransform* Transform186 = (CTransform *)(m_pScene.createNode("Transform"));
Transform186->setTranslation(new float[3]{0.0987,0.0086,0.0034});
CShape* Shape187 = (CShape *)(m_pScene.createNode("Shape"));
Shape187->setUSE("SiteShape");
Transform186->addChild(*Shape187);

HAnimSite185->addChildren(*Transform186);

HAnimSegment181->addChildren(*HAnimSite185);

HAnimJoint180->addChildren(*HAnimSegment181);

CHAnimJoint* HAnimJoint188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint188->setName("l_tarsal_distal_phalanx_3");
HAnimJoint188->setDEF("hanim_l_tarsal_distal_phalanx_3");
HAnimJoint188->setCenter(new float[3]{0.1002,0.0178,0.0013});
HAnimJoint188->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint188->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment189 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment189->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_3");
HAnimSegment189->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3");
CTouchSensor* TouchSensor190 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor190->setDescription("joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3");
HAnimSegment189->addChildren(*TouchSensor190);

CTransform* Transform191 = (CTransform *)(m_pScene.createNode("Transform"));
Transform191->setTranslation(new float[3]{0.1002,0.0178,0.0013});
CShape* Shape192 = (CShape *)(m_pScene.createNode("Shape"));
Shape192->setUSE("JointShape");
Transform191->addChild(*Shape192);

HAnimSegment189->addChildren(*Transform191);

CHAnimSite* HAnimSite193 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite193->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip");
HAnimSite193->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip");
CTransform* Transform194 = (CTransform *)(m_pScene.createNode("Transform"));
Transform194->setTranslation(new float[3]{0.1002,0.0178,0.0013});
CShape* Shape195 = (CShape *)(m_pScene.createNode("Shape"));
Shape195->setUSE("SiteShape");
Transform194->addChild(*Shape195);

HAnimSite193->addChildren(*Transform194);

HAnimSegment189->addChildren(*HAnimSite193);

HAnimJoint188->addChildren(*HAnimSegment189);

HAnimJoint180->addChildren(*HAnimJoint188);

HAnimJoint172->addChildren(*HAnimJoint180);

HAnimJoint164->addChildren(*HAnimJoint172);

HAnimJoint156->addChildren(*HAnimJoint164);

HAnimJoint76->addChildren(*HAnimJoint156);

HAnimJoint68->addChildren(*HAnimJoint76);

CHAnimJoint* HAnimJoint196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint196->setName("l_calcaneus");
HAnimJoint196->setDEF("hanim_l_calcaneus");
HAnimJoint196->setCenter(new float[3]{0.0889,-0.1278,0.0494});
HAnimJoint196->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint196->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment197 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment197->setName("SEGMENT_FOR_l_calcaneus");
HAnimSegment197->setDEF("hanim_SEGMENT_FOR_l_calcaneus");
CTouchSensor* TouchSensor198 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor198->setDescription("joint l_calcaneus segment SEGMENT_FOR_l_calcaneus");
HAnimSegment197->addChildren(*TouchSensor198);

CTransform* Transform199 = (CTransform *)(m_pScene.createNode("Transform"));
Transform199->setTranslation(new float[3]{0.0889,-0.1278,0.0494});
CShape* Shape200 = (CShape *)(m_pScene.createNode("Shape"));
Shape200->setUSE("JointShape");
Transform199->addChild(*Shape200);

HAnimSegment197->addChildren(*Transform199);

CHAnimSite* HAnimSite201 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite201->setName("SEGMENT_FOR_l_calcaneus_tip");
HAnimSite201->setDEF("hanim_SEGMENT_FOR_l_calcaneus_tip");
CTransform* Transform202 = (CTransform *)(m_pScene.createNode("Transform"));
Transform202->setTranslation(new float[3]{0.0889,-0.1278,0.0494});
CShape* Shape203 = (CShape *)(m_pScene.createNode("Shape"));
Shape203->setUSE("SiteShape");
Transform202->addChild(*Shape203);

HAnimSite201->addChildren(*Transform202);

HAnimSegment197->addChildren(*HAnimSite201);

HAnimJoint196->addChildren(*HAnimSegment197);

CHAnimJoint* HAnimJoint204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint204->setName("l_cuboid");
HAnimJoint204->setDEF("hanim_l_cuboid");
HAnimJoint204->setCenter(new float[3]{0.1105,-0.0998,0.0267});
HAnimJoint204->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint204->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment205 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment205->setName("SEGMENT_FOR_l_cuboid");
HAnimSegment205->setDEF("hanim_SEGMENT_FOR_l_cuboid");
CTouchSensor* TouchSensor206 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor206->setDescription("joint l_cuboid segment SEGMENT_FOR_l_cuboid");
HAnimSegment205->addChildren(*TouchSensor206);

CTransform* Transform207 = (CTransform *)(m_pScene.createNode("Transform"));
Transform207->setTranslation(new float[3]{0.1105,-0.0998,0.0267});
CShape* Shape208 = (CShape *)(m_pScene.createNode("Shape"));
Shape208->setUSE("JointShape");
Transform207->addChild(*Shape208);

HAnimSegment205->addChildren(*Transform207);

CHAnimSite* HAnimSite209 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite209->setName("SEGMENT_FOR_l_cuboid_tip");
HAnimSite209->setDEF("hanim_SEGMENT_FOR_l_cuboid_tip");
CTransform* Transform210 = (CTransform *)(m_pScene.createNode("Transform"));
Transform210->setTranslation(new float[3]{0.1105,-0.0998,0.0267});
CShape* Shape211 = (CShape *)(m_pScene.createNode("Shape"));
Shape211->setUSE("SiteShape");
Transform210->addChild(*Shape211);

HAnimSite209->addChildren(*Transform210);

HAnimSegment205->addChildren(*HAnimSite209);

HAnimJoint204->addChildren(*HAnimSegment205);

CHAnimJoint* HAnimJoint212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint212->setName("l_metatarsal_4");
HAnimJoint212->setDEF("hanim_l_metatarsal_4");
HAnimJoint212->setCenter(new float[3]{0.1063,-0.0634,0.016});
HAnimJoint212->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint212->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment213 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment213->setName("SEGMENT_FOR_l_metatarsal_4");
HAnimSegment213->setDEF("hanim_SEGMENT_FOR_l_metatarsal_4");
CTouchSensor* TouchSensor214 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor214->setDescription("joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4");
HAnimSegment213->addChildren(*TouchSensor214);

CTransform* Transform215 = (CTransform *)(m_pScene.createNode("Transform"));
Transform215->setTranslation(new float[3]{0.1063,-0.0634,0.016});
CShape* Shape216 = (CShape *)(m_pScene.createNode("Shape"));
Shape216->setUSE("JointShape");
Transform215->addChild(*Shape216);

HAnimSegment213->addChildren(*Transform215);

CHAnimSite* HAnimSite217 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite217->setName("SEGMENT_FOR_l_metatarsal_4_tip");
HAnimSite217->setDEF("hanim_SEGMENT_FOR_l_metatarsal_4_tip");
CTransform* Transform218 = (CTransform *)(m_pScene.createNode("Transform"));
Transform218->setTranslation(new float[3]{0.1063,-0.0634,0.016});
CShape* Shape219 = (CShape *)(m_pScene.createNode("Shape"));
Shape219->setUSE("SiteShape");
Transform218->addChild(*Shape219);

HAnimSite217->addChildren(*Transform218);

HAnimSegment213->addChildren(*HAnimSite217);

HAnimJoint212->addChildren(*HAnimSegment213);

CHAnimJoint* HAnimJoint220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint220->setName("l_tarsal_proximal_phalanx_4");
HAnimJoint220->setDEF("hanim_l_tarsal_proximal_phalanx_4");
HAnimJoint220->setCenter(new float[3]{0.1097,-0.0107,0.0058});
HAnimJoint220->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint220->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment221 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment221->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_4");
HAnimSegment221->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4");
CTouchSensor* TouchSensor222 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor222->setDescription("joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4");
HAnimSegment221->addChildren(*TouchSensor222);

CTransform* Transform223 = (CTransform *)(m_pScene.createNode("Transform"));
Transform223->setTranslation(new float[3]{0.1097,-0.0107,0.0058});
CShape* Shape224 = (CShape *)(m_pScene.createNode("Shape"));
Shape224->setUSE("JointShape");
Transform223->addChild(*Shape224);

HAnimSegment221->addChildren(*Transform223);

CHAnimSite* HAnimSite225 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite225->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip");
HAnimSite225->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip");
CTransform* Transform226 = (CTransform *)(m_pScene.createNode("Transform"));
Transform226->setTranslation(new float[3]{0.1097,-0.0107,0.0058});
CShape* Shape227 = (CShape *)(m_pScene.createNode("Shape"));
Shape227->setUSE("SiteShape");
Transform226->addChild(*Shape227);

HAnimSite225->addChildren(*Transform226);

HAnimSegment221->addChildren(*HAnimSite225);

HAnimJoint220->addChildren(*HAnimSegment221);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setName("l_tarsal_middle_phalanx_4");
HAnimJoint228->setDEF("hanim_l_tarsal_middle_phalanx_4");
HAnimJoint228->setCenter(new float[3]{0.114,0.0044,0.0037});
HAnimJoint228->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint228->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment229 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment229->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_4");
HAnimSegment229->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4");
CTouchSensor* TouchSensor230 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor230->setDescription("joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4");
HAnimSegment229->addChildren(*TouchSensor230);

CTransform* Transform231 = (CTransform *)(m_pScene.createNode("Transform"));
Transform231->setTranslation(new float[3]{0.114,0.0044,0.0037});
CShape* Shape232 = (CShape *)(m_pScene.createNode("Shape"));
Shape232->setUSE("JointShape");
Transform231->addChild(*Shape232);

HAnimSegment229->addChildren(*Transform231);

CHAnimSite* HAnimSite233 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite233->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip");
HAnimSite233->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip");
CTransform* Transform234 = (CTransform *)(m_pScene.createNode("Transform"));
Transform234->setTranslation(new float[3]{0.114,0.0044,0.0037});
CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
Shape235->setUSE("SiteShape");
Transform234->addChild(*Shape235);

HAnimSite233->addChildren(*Transform234);

HAnimSegment229->addChildren(*HAnimSite233);

HAnimJoint228->addChildren(*HAnimSegment229);

CHAnimJoint* HAnimJoint236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint236->setName("l_tarsal_distal_phalanx_4");
HAnimJoint236->setDEF("hanim_l_tarsal_distal_phalanx_4");
HAnimJoint236->setCenter(new float[3]{0.1155,0.0118,0.0008});
HAnimJoint236->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint236->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment237 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment237->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_4");
HAnimSegment237->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4");
CTouchSensor* TouchSensor238 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor238->setDescription("joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4");
HAnimSegment237->addChildren(*TouchSensor238);

CTransform* Transform239 = (CTransform *)(m_pScene.createNode("Transform"));
Transform239->setTranslation(new float[3]{0.1155,0.0118,0.0008});
CShape* Shape240 = (CShape *)(m_pScene.createNode("Shape"));
Shape240->setUSE("JointShape");
Transform239->addChild(*Shape240);

HAnimSegment237->addChildren(*Transform239);

CHAnimSite* HAnimSite241 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite241->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip");
HAnimSite241->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip");
CTransform* Transform242 = (CTransform *)(m_pScene.createNode("Transform"));
Transform242->setTranslation(new float[3]{0.1155,0.0118,0.0008});
CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
Shape243->setUSE("SiteShape");
Transform242->addChild(*Shape243);

HAnimSite241->addChildren(*Transform242);

HAnimSegment237->addChildren(*HAnimSite241);

HAnimJoint236->addChildren(*HAnimSegment237);

HAnimJoint228->addChildren(*HAnimJoint236);

HAnimJoint220->addChildren(*HAnimJoint228);

HAnimJoint212->addChildren(*HAnimJoint220);

HAnimJoint204->addChildren(*HAnimJoint212);

CHAnimJoint* HAnimJoint244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint244->setName("l_metatarsal_5");
HAnimJoint244->setDEF("hanim_l_metatarsal_5");
HAnimJoint244->setCenter(new float[3]{0.1206,-0.0671,0.0124});
HAnimJoint244->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint244->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment245 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment245->setName("SEGMENT_FOR_l_metatarsal_5");
HAnimSegment245->setDEF("hanim_SEGMENT_FOR_l_metatarsal_5");
CTouchSensor* TouchSensor246 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor246->setDescription("joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5");
HAnimSegment245->addChildren(*TouchSensor246);

CTransform* Transform247 = (CTransform *)(m_pScene.createNode("Transform"));
Transform247->setTranslation(new float[3]{0.1206,-0.0671,0.0124});
CShape* Shape248 = (CShape *)(m_pScene.createNode("Shape"));
Shape248->setUSE("JointShape");
Transform247->addChild(*Shape248);

HAnimSegment245->addChildren(*Transform247);

CHAnimSite* HAnimSite249 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite249->setName("SEGMENT_FOR_l_metatarsal_5_tip");
HAnimSite249->setDEF("hanim_SEGMENT_FOR_l_metatarsal_5_tip");
CTransform* Transform250 = (CTransform *)(m_pScene.createNode("Transform"));
Transform250->setTranslation(new float[3]{0.1206,-0.0671,0.0124});
CShape* Shape251 = (CShape *)(m_pScene.createNode("Shape"));
Shape251->setUSE("SiteShape");
Transform250->addChild(*Shape251);

HAnimSite249->addChildren(*Transform250);

HAnimSegment245->addChildren(*HAnimSite249);

HAnimJoint244->addChildren(*HAnimSegment245);

CHAnimJoint* HAnimJoint252 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint252->setName("l_tarsal_proximal_phalanx_5");
HAnimJoint252->setDEF("hanim_l_tarsal_proximal_phalanx_5");
HAnimJoint252->setCenter(new float[3]{0.1239,-0.0153,0.0051});
HAnimJoint252->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint252->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment253 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment253->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_5");
HAnimSegment253->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5");
CTouchSensor* TouchSensor254 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor254->setDescription("joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5");
HAnimSegment253->addChildren(*TouchSensor254);

CTransform* Transform255 = (CTransform *)(m_pScene.createNode("Transform"));
Transform255->setTranslation(new float[3]{0.1239,-0.0153,0.0051});
CShape* Shape256 = (CShape *)(m_pScene.createNode("Shape"));
Shape256->setUSE("JointShape");
Transform255->addChild(*Shape256);

HAnimSegment253->addChildren(*Transform255);

CHAnimSite* HAnimSite257 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite257->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip");
HAnimSite257->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip");
CTransform* Transform258 = (CTransform *)(m_pScene.createNode("Transform"));
Transform258->setTranslation(new float[3]{0.1239,-0.0153,0.0051});
CShape* Shape259 = (CShape *)(m_pScene.createNode("Shape"));
Shape259->setUSE("SiteShape");
Transform258->addChild(*Shape259);

HAnimSite257->addChildren(*Transform258);

HAnimSegment253->addChildren(*HAnimSite257);

HAnimJoint252->addChildren(*HAnimSegment253);

CHAnimJoint* HAnimJoint260 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint260->setName("l_tarsal_middle_phalanx_5");
HAnimJoint260->setDEF("hanim_l_tarsal_middle_phalanx_5");
HAnimJoint260->setCenter(new float[3]{0.1262,-0.0077,0.0023});
HAnimJoint260->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint260->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment261 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment261->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_5");
HAnimSegment261->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5");
CTouchSensor* TouchSensor262 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor262->setDescription("joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5");
HAnimSegment261->addChildren(*TouchSensor262);

CTransform* Transform263 = (CTransform *)(m_pScene.createNode("Transform"));
Transform263->setTranslation(new float[3]{0.1262,-0.0077,0.0023});
CShape* Shape264 = (CShape *)(m_pScene.createNode("Shape"));
Shape264->setUSE("JointShape");
Transform263->addChild(*Shape264);

HAnimSegment261->addChildren(*Transform263);

CHAnimSite* HAnimSite265 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite265->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip");
HAnimSite265->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip");
CTransform* Transform266 = (CTransform *)(m_pScene.createNode("Transform"));
Transform266->setTranslation(new float[3]{0.1262,-0.0077,0.0023});
CShape* Shape267 = (CShape *)(m_pScene.createNode("Shape"));
Shape267->setUSE("SiteShape");
Transform266->addChild(*Shape267);

HAnimSite265->addChildren(*Transform266);

HAnimSegment261->addChildren(*HAnimSite265);

HAnimJoint260->addChildren(*HAnimSegment261);

CHAnimJoint* HAnimJoint268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint268->setName("l_tarsal_distal_phalanx_5");
HAnimJoint268->setDEF("hanim_l_tarsal_distal_phalanx_5");
HAnimJoint268->setCenter(new float[3]{0.1271,0,0});
HAnimJoint268->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint268->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment269 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment269->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_5");
HAnimSegment269->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5");
CTouchSensor* TouchSensor270 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor270->setDescription("joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5");
HAnimSegment269->addChildren(*TouchSensor270);

CTransform* Transform271 = (CTransform *)(m_pScene.createNode("Transform"));
Transform271->setTranslation(new float[3]{0.1271,0,0});
CShape* Shape272 = (CShape *)(m_pScene.createNode("Shape"));
Shape272->setUSE("JointShape");
Transform271->addChild(*Shape272);

HAnimSegment269->addChildren(*Transform271);

CHAnimSite* HAnimSite273 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite273->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip");
HAnimSite273->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip");
CTransform* Transform274 = (CTransform *)(m_pScene.createNode("Transform"));
Transform274->setTranslation(new float[3]{0.1271,0,0});
CShape* Shape275 = (CShape *)(m_pScene.createNode("Shape"));
Shape275->setUSE("SiteShape");
Transform274->addChild(*Shape275);

HAnimSite273->addChildren(*Transform274);

HAnimSegment269->addChildren(*HAnimSite273);

HAnimJoint268->addChildren(*HAnimSegment269);

HAnimJoint260->addChildren(*HAnimJoint268);

HAnimJoint252->addChildren(*HAnimJoint260);

HAnimJoint244->addChildren(*HAnimJoint252);

HAnimJoint204->addChildren(*HAnimJoint244);

HAnimJoint196->addChildren(*HAnimJoint204);

HAnimJoint68->addChildren(*HAnimJoint196);

HAnimJoint60->addChildren(*HAnimJoint68);

HAnimJoint52->addChildren(*HAnimJoint60);

HAnimJoint44->addChildren(*HAnimJoint52);

CHAnimJoint* HAnimJoint276 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint276->setName("r_thigh");
HAnimJoint276->setDEF("hanim_r_thigh");
HAnimJoint276->setCenter(new float[3]{-0.0948,-0.1202,0.8181});
HAnimJoint276->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint276->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment277 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment277->setName("SEGMENT_FOR_r_thigh");
HAnimSegment277->setDEF("hanim_SEGMENT_FOR_r_thigh");
CTouchSensor* TouchSensor278 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor278->setDescription("joint r_thigh segment SEGMENT_FOR_r_thigh");
HAnimSegment277->addChildren(*TouchSensor278);

CTransform* Transform279 = (CTransform *)(m_pScene.createNode("Transform"));
Transform279->setTranslation(new float[3]{-0.0948,-0.1202,0.8181});
CShape* Shape280 = (CShape *)(m_pScene.createNode("Shape"));
Shape280->setUSE("JointShape");
Transform279->addChild(*Shape280);

HAnimSegment277->addChildren(*Transform279);

CHAnimSite* HAnimSite281 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite281->setName("SEGMENT_FOR_r_thigh_tip");
HAnimSite281->setDEF("hanim_SEGMENT_FOR_r_thigh_tip");
CTransform* Transform282 = (CTransform *)(m_pScene.createNode("Transform"));
Transform282->setTranslation(new float[3]{-0.0948,-0.1202,0.8181});
CShape* Shape283 = (CShape *)(m_pScene.createNode("Shape"));
Shape283->setUSE("SiteShape");
Transform282->addChild(*Shape283);

HAnimSite281->addChildren(*Transform282);

HAnimSegment277->addChildren(*HAnimSite281);

HAnimJoint276->addChildren(*HAnimSegment277);

CHAnimJoint* HAnimJoint284 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint284->setName("r_calf");
HAnimJoint284->setDEF("hanim_r_calf");
HAnimJoint284->setCenter(new float[3]{-0.0928,-0.1213,0.4003});
HAnimJoint284->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint284->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment285 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment285->setName("SEGMENT_FOR_r_calf");
HAnimSegment285->setDEF("hanim_SEGMENT_FOR_r_calf");
CTouchSensor* TouchSensor286 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor286->setDescription("joint r_calf segment SEGMENT_FOR_r_calf");
HAnimSegment285->addChildren(*TouchSensor286);

CTransform* Transform287 = (CTransform *)(m_pScene.createNode("Transform"));
Transform287->setTranslation(new float[3]{-0.0928,-0.1213,0.4003});
CShape* Shape288 = (CShape *)(m_pScene.createNode("Shape"));
Shape288->setUSE("JointShape");
Transform287->addChild(*Shape288);

HAnimSegment285->addChildren(*Transform287);

CHAnimSite* HAnimSite289 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite289->setName("SEGMENT_FOR_r_calf_tip");
HAnimSite289->setDEF("hanim_SEGMENT_FOR_r_calf_tip");
CTransform* Transform290 = (CTransform *)(m_pScene.createNode("Transform"));
Transform290->setTranslation(new float[3]{-0.0928,-0.1213,0.4003});
CShape* Shape291 = (CShape *)(m_pScene.createNode("Shape"));
Shape291->setUSE("SiteShape");
Transform290->addChild(*Shape291);

HAnimSite289->addChildren(*Transform290);

HAnimSegment285->addChildren(*HAnimSite289);

HAnimJoint284->addChildren(*HAnimSegment285);

CHAnimJoint* HAnimJoint292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint292->setName("r_talus");
HAnimJoint292->setDEF("hanim_r_talus");
HAnimJoint292->setCenter(new float[3]{-0.0886,-0.1123,0.0869});
HAnimJoint292->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint292->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment293 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment293->setName("SEGMENT_FOR_r_talus");
HAnimSegment293->setDEF("hanim_SEGMENT_FOR_r_talus");
CTouchSensor* TouchSensor294 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor294->setDescription("joint r_talus segment SEGMENT_FOR_r_talus");
HAnimSegment293->addChildren(*TouchSensor294);

CTransform* Transform295 = (CTransform *)(m_pScene.createNode("Transform"));
Transform295->setTranslation(new float[3]{-0.0886,-0.1123,0.0869});
CShape* Shape296 = (CShape *)(m_pScene.createNode("Shape"));
Shape296->setUSE("JointShape");
Transform295->addChild(*Shape296);

HAnimSegment293->addChildren(*Transform295);

CHAnimSite* HAnimSite297 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite297->setName("SEGMENT_FOR_r_talus_tip");
HAnimSite297->setDEF("hanim_SEGMENT_FOR_r_talus_tip");
CTransform* Transform298 = (CTransform *)(m_pScene.createNode("Transform"));
Transform298->setTranslation(new float[3]{-0.0886,-0.1123,0.0869});
CShape* Shape299 = (CShape *)(m_pScene.createNode("Shape"));
Shape299->setUSE("SiteShape");
Transform298->addChild(*Shape299);

HAnimSite297->addChildren(*Transform298);

HAnimSegment293->addChildren(*HAnimSite297);

HAnimJoint292->addChildren(*HAnimSegment293);

CHAnimJoint* HAnimJoint300 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint300->setName("r_navicular");
HAnimJoint300->setDEF("hanim_r_navicular");
HAnimJoint300->setCenter(new float[3]{-0.0781,-0.097,0.0283});
HAnimJoint300->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint300->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment301 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment301->setName("SEGMENT_FOR_r_navicular");
HAnimSegment301->setDEF("hanim_SEGMENT_FOR_r_navicular");
CTouchSensor* TouchSensor302 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor302->setDescription("joint r_navicular segment SEGMENT_FOR_r_navicular");
HAnimSegment301->addChildren(*TouchSensor302);

CTransform* Transform303 = (CTransform *)(m_pScene.createNode("Transform"));
Transform303->setTranslation(new float[3]{-0.0781,-0.097,0.0283});
CShape* Shape304 = (CShape *)(m_pScene.createNode("Shape"));
Shape304->setUSE("JointShape");
Transform303->addChild(*Shape304);

HAnimSegment301->addChildren(*Transform303);

CHAnimSite* HAnimSite305 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite305->setName("SEGMENT_FOR_r_navicular_tip");
HAnimSite305->setDEF("hanim_SEGMENT_FOR_r_navicular_tip");
CTransform* Transform306 = (CTransform *)(m_pScene.createNode("Transform"));
Transform306->setTranslation(new float[3]{-0.0781,-0.097,0.0283});
CShape* Shape307 = (CShape *)(m_pScene.createNode("Shape"));
Shape307->setUSE("SiteShape");
Transform306->addChild(*Shape307);

HAnimSite305->addChildren(*Transform306);

HAnimSegment301->addChildren(*HAnimSite305);

HAnimJoint300->addChildren(*HAnimSegment301);

CHAnimJoint* HAnimJoint308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint308->setName("r_cuneiform_1");
HAnimJoint308->setDEF("hanim_r_cuneiform_1");
HAnimJoint308->setCenter(new float[3]{-0.0672,-0.0835,0.0235});
HAnimJoint308->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint308->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment309 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment309->setName("SEGMENT_FOR_r_cuneiform_1");
HAnimSegment309->setDEF("hanim_SEGMENT_FOR_r_cuneiform_1");
CTouchSensor* TouchSensor310 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor310->setDescription("joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1");
HAnimSegment309->addChildren(*TouchSensor310);

CTransform* Transform311 = (CTransform *)(m_pScene.createNode("Transform"));
Transform311->setTranslation(new float[3]{-0.0672,-0.0835,0.0235});
CShape* Shape312 = (CShape *)(m_pScene.createNode("Shape"));
Shape312->setUSE("JointShape");
Transform311->addChild(*Shape312);

HAnimSegment309->addChildren(*Transform311);

CHAnimSite* HAnimSite313 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite313->setName("SEGMENT_FOR_r_cuneiform_1_tip");
HAnimSite313->setDEF("hanim_SEGMENT_FOR_r_cuneiform_1_tip");
CTransform* Transform314 = (CTransform *)(m_pScene.createNode("Transform"));
Transform314->setTranslation(new float[3]{-0.0672,-0.0835,0.0235});
CShape* Shape315 = (CShape *)(m_pScene.createNode("Shape"));
Shape315->setUSE("SiteShape");
Transform314->addChild(*Shape315);

HAnimSite313->addChildren(*Transform314);

HAnimSegment309->addChildren(*HAnimSite313);

HAnimJoint308->addChildren(*HAnimSegment309);

CHAnimJoint* HAnimJoint316 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint316->setName("r_metatarsal_1");
HAnimJoint316->setDEF("hanim_r_metatarsal_1");
HAnimJoint316->setCenter(new float[3]{-0.0644,-0.0577,0.0147});
HAnimJoint316->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint316->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment317 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment317->setName("SEGMENT_FOR_r_metatarsal_1");
HAnimSegment317->setDEF("hanim_SEGMENT_FOR_r_metatarsal_1");
CTouchSensor* TouchSensor318 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor318->setDescription("joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1");
HAnimSegment317->addChildren(*TouchSensor318);

CTransform* Transform319 = (CTransform *)(m_pScene.createNode("Transform"));
Transform319->setTranslation(new float[3]{-0.0644,-0.0577,0.0147});
CShape* Shape320 = (CShape *)(m_pScene.createNode("Shape"));
Shape320->setUSE("JointShape");
Transform319->addChild(*Shape320);

HAnimSegment317->addChildren(*Transform319);

CHAnimSite* HAnimSite321 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite321->setName("SEGMENT_FOR_r_metatarsal_1_tip");
HAnimSite321->setDEF("hanim_SEGMENT_FOR_r_metatarsal_1_tip");
CTransform* Transform322 = (CTransform *)(m_pScene.createNode("Transform"));
Transform322->setTranslation(new float[3]{-0.0644,-0.0577,0.0147});
CShape* Shape323 = (CShape *)(m_pScene.createNode("Shape"));
Shape323->setUSE("SiteShape");
Transform322->addChild(*Shape323);

HAnimSite321->addChildren(*Transform322);

HAnimSegment317->addChildren(*HAnimSite321);

HAnimJoint316->addChildren(*HAnimSegment317);

CHAnimJoint* HAnimJoint324 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint324->setName("r_tarsal_proximal_phalanx_1");
HAnimJoint324->setDEF("hanim_r_tarsal_proximal_phalanx_1");
HAnimJoint324->setCenter(new float[3]{-0.0619,-0.0083,0.0059});
HAnimJoint324->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint324->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment325 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment325->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_1");
HAnimSegment325->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1");
CTouchSensor* TouchSensor326 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor326->setDescription("joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1");
HAnimSegment325->addChildren(*TouchSensor326);

CTransform* Transform327 = (CTransform *)(m_pScene.createNode("Transform"));
Transform327->setTranslation(new float[3]{-0.0619,-0.0083,0.0059});
CShape* Shape328 = (CShape *)(m_pScene.createNode("Shape"));
Shape328->setUSE("JointShape");
Transform327->addChild(*Shape328);

HAnimSegment325->addChildren(*Transform327);

CHAnimSite* HAnimSite329 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite329->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip");
HAnimSite329->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip");
CTransform* Transform330 = (CTransform *)(m_pScene.createNode("Transform"));
Transform330->setTranslation(new float[3]{-0.0619,-0.0083,0.0059});
CShape* Shape331 = (CShape *)(m_pScene.createNode("Shape"));
Shape331->setUSE("SiteShape");
Transform330->addChild(*Shape331);

HAnimSite329->addChildren(*Transform330);

HAnimSegment325->addChildren(*HAnimSite329);

HAnimJoint324->addChildren(*HAnimSegment325);

CHAnimJoint* HAnimJoint332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint332->setName("r_tarsal_distal_phalanx_1");
HAnimJoint332->setDEF("hanim_r_tarsal_distal_phalanx_1");
HAnimJoint332->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint332->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment333 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment333->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_1");
HAnimSegment333->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1");
CTouchSensor* TouchSensor334 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor334->setDescription("joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1");
HAnimSegment333->addChildren(*TouchSensor334);

CTransform* Transform335 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape336 = (CShape *)(m_pScene.createNode("Shape"));
Shape336->setUSE("JointShape");
Transform335->addChild(*Shape336);

HAnimSegment333->addChildren(*Transform335);

CHAnimSite* HAnimSite337 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite337->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip");
HAnimSite337->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip");
CTransform* Transform338 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape339 = (CShape *)(m_pScene.createNode("Shape"));
Shape339->setUSE("SiteShape");
Transform338->addChild(*Shape339);

HAnimSite337->addChildren(*Transform338);

HAnimSegment333->addChildren(*HAnimSite337);

HAnimJoint332->addChildren(*HAnimSegment333);

HAnimJoint324->addChildren(*HAnimJoint332);

HAnimJoint316->addChildren(*HAnimJoint324);

HAnimJoint308->addChildren(*HAnimJoint316);

HAnimJoint300->addChildren(*HAnimJoint308);

CHAnimJoint* HAnimJoint340 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint340->setName("r_cuneiform_2");
HAnimJoint340->setDEF("hanim_r_cuneiform_2");
HAnimJoint340->setCenter(new float[3]{-0.0812,-0.0805,0.025});
HAnimJoint340->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint340->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment341 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment341->setName("SEGMENT_FOR_r_cuneiform_2");
HAnimSegment341->setDEF("hanim_SEGMENT_FOR_r_cuneiform_2");
CTouchSensor* TouchSensor342 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor342->setDescription("joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2");
HAnimSegment341->addChildren(*TouchSensor342);

CTransform* Transform343 = (CTransform *)(m_pScene.createNode("Transform"));
Transform343->setTranslation(new float[3]{-0.0812,-0.0805,0.025});
CShape* Shape344 = (CShape *)(m_pScene.createNode("Shape"));
Shape344->setUSE("JointShape");
Transform343->addChild(*Shape344);

HAnimSegment341->addChildren(*Transform343);

CHAnimSite* HAnimSite345 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite345->setName("SEGMENT_FOR_r_cuneiform_2_tip");
HAnimSite345->setDEF("hanim_SEGMENT_FOR_r_cuneiform_2_tip");
CTransform* Transform346 = (CTransform *)(m_pScene.createNode("Transform"));
Transform346->setTranslation(new float[3]{-0.0812,-0.0805,0.025});
CShape* Shape347 = (CShape *)(m_pScene.createNode("Shape"));
Shape347->setUSE("SiteShape");
Transform346->addChild(*Shape347);

HAnimSite345->addChildren(*Transform346);

HAnimSegment341->addChildren(*HAnimSite345);

HAnimJoint340->addChildren(*HAnimSegment341);

CHAnimJoint* HAnimJoint348 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint348->setName("r_metatarsal_2");
HAnimJoint348->setDEF("hanim_r_metatarsal_2");
HAnimJoint348->setCenter(new float[3]{-0.08,-0.0608,0.0175});
HAnimJoint348->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint348->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment349 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment349->setName("SEGMENT_FOR_r_metatarsal_2");
HAnimSegment349->setDEF("hanim_SEGMENT_FOR_r_metatarsal_2");
CTouchSensor* TouchSensor350 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor350->setDescription("joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2");
HAnimSegment349->addChildren(*TouchSensor350);

CTransform* Transform351 = (CTransform *)(m_pScene.createNode("Transform"));
Transform351->setTranslation(new float[3]{-0.08,-0.0608,0.0175});
CShape* Shape352 = (CShape *)(m_pScene.createNode("Shape"));
Shape352->setUSE("JointShape");
Transform351->addChild(*Shape352);

HAnimSegment349->addChildren(*Transform351);

CHAnimSite* HAnimSite353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite353->setName("SEGMENT_FOR_r_metatarsal_2_tip");
HAnimSite353->setDEF("hanim_SEGMENT_FOR_r_metatarsal_2_tip");
CTransform* Transform354 = (CTransform *)(m_pScene.createNode("Transform"));
Transform354->setTranslation(new float[3]{-0.08,-0.0608,0.0175});
CShape* Shape355 = (CShape *)(m_pScene.createNode("Shape"));
Shape355->setUSE("SiteShape");
Transform354->addChild(*Shape355);

HAnimSite353->addChildren(*Transform354);

HAnimSegment349->addChildren(*HAnimSite353);

HAnimJoint348->addChildren(*HAnimSegment349);

CHAnimJoint* HAnimJoint356 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint356->setName("r_tarsal_proximal_phalanx_2");
HAnimJoint356->setDEF("hanim_r_tarsal_proximal_phalanx_2");
HAnimJoint356->setCenter(new float[3]{-0.0823,-0.004,0.0064});
HAnimJoint356->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint356->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment357 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment357->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_2");
HAnimSegment357->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2");
CTouchSensor* TouchSensor358 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor358->setDescription("joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2");
HAnimSegment357->addChildren(*TouchSensor358);

CTransform* Transform359 = (CTransform *)(m_pScene.createNode("Transform"));
Transform359->setTranslation(new float[3]{-0.0823,-0.004,0.0064});
CShape* Shape360 = (CShape *)(m_pScene.createNode("Shape"));
Shape360->setUSE("JointShape");
Transform359->addChild(*Shape360);

HAnimSegment357->addChildren(*Transform359);

CHAnimSite* HAnimSite361 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite361->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip");
HAnimSite361->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip");
CTransform* Transform362 = (CTransform *)(m_pScene.createNode("Transform"));
Transform362->setTranslation(new float[3]{-0.0823,-0.004,0.0064});
CShape* Shape363 = (CShape *)(m_pScene.createNode("Shape"));
Shape363->setUSE("SiteShape");
Transform362->addChild(*Shape363);

HAnimSite361->addChildren(*Transform362);

HAnimSegment357->addChildren(*HAnimSite361);

HAnimJoint356->addChildren(*HAnimSegment357);

CHAnimJoint* HAnimJoint364 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint364->setName("r_tarsal_middle_phalanx_2");
HAnimJoint364->setDEF("hanim_r_tarsal_middle_phalanx_2");
HAnimJoint364->setCenter(new float[3]{-0.0841,0.0121,0.0041});
HAnimJoint364->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint364->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment365 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment365->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_2");
HAnimSegment365->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2");
CTouchSensor* TouchSensor366 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor366->setDescription("joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2");
HAnimSegment365->addChildren(*TouchSensor366);

CTransform* Transform367 = (CTransform *)(m_pScene.createNode("Transform"));
Transform367->setTranslation(new float[3]{-0.0841,0.0121,0.0041});
CShape* Shape368 = (CShape *)(m_pScene.createNode("Shape"));
Shape368->setUSE("JointShape");
Transform367->addChild(*Shape368);

HAnimSegment365->addChildren(*Transform367);

CHAnimSite* HAnimSite369 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite369->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip");
HAnimSite369->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip");
CTransform* Transform370 = (CTransform *)(m_pScene.createNode("Transform"));
Transform370->setTranslation(new float[3]{-0.0841,0.0121,0.0041});
CShape* Shape371 = (CShape *)(m_pScene.createNode("Shape"));
Shape371->setUSE("SiteShape");
Transform370->addChild(*Shape371);

HAnimSite369->addChildren(*Transform370);

HAnimSegment365->addChildren(*HAnimSite369);

HAnimJoint364->addChildren(*HAnimSegment365);

CHAnimJoint* HAnimJoint372 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint372->setName("r_tarsal_distal_phalanx_2");
HAnimJoint372->setDEF("hanim_r_tarsal_distal_phalanx_2");
HAnimJoint372->setCenter(new float[3]{-0.0841,0.0216,0.0013});
HAnimJoint372->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint372->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment373 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment373->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_2");
HAnimSegment373->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2");
CTouchSensor* TouchSensor374 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor374->setDescription("joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2");
HAnimSegment373->addChildren(*TouchSensor374);

CTransform* Transform375 = (CTransform *)(m_pScene.createNode("Transform"));
Transform375->setTranslation(new float[3]{-0.0841,0.0216,0.0013});
CShape* Shape376 = (CShape *)(m_pScene.createNode("Shape"));
Shape376->setUSE("JointShape");
Transform375->addChild(*Shape376);

HAnimSegment373->addChildren(*Transform375);

CHAnimSite* HAnimSite377 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite377->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip");
HAnimSite377->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip");
CTransform* Transform378 = (CTransform *)(m_pScene.createNode("Transform"));
Transform378->setTranslation(new float[3]{-0.0841,0.0216,0.0013});
CShape* Shape379 = (CShape *)(m_pScene.createNode("Shape"));
Shape379->setUSE("SiteShape");
Transform378->addChild(*Shape379);

HAnimSite377->addChildren(*Transform378);

HAnimSegment373->addChildren(*HAnimSite377);

HAnimJoint372->addChildren(*HAnimSegment373);

HAnimJoint364->addChildren(*HAnimJoint372);

HAnimJoint356->addChildren(*HAnimJoint364);

HAnimJoint348->addChildren(*HAnimJoint356);

HAnimJoint340->addChildren(*HAnimJoint348);

HAnimJoint300->addChildren(*HAnimJoint340);

CHAnimJoint* HAnimJoint380 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint380->setName("r_cuneiform_3");
HAnimJoint380->setDEF("hanim_r_cuneiform_3");
HAnimJoint380->setCenter(new float[3]{-0.0928,-0.0821,0.0248});
HAnimJoint380->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint380->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment381 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment381->setName("SEGMENT_FOR_r_cuneiform_3");
HAnimSegment381->setDEF("hanim_SEGMENT_FOR_r_cuneiform_3");
CTouchSensor* TouchSensor382 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor382->setDescription("joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3");
HAnimSegment381->addChildren(*TouchSensor382);

CTransform* Transform383 = (CTransform *)(m_pScene.createNode("Transform"));
Transform383->setTranslation(new float[3]{-0.0928,-0.0821,0.0248});
CShape* Shape384 = (CShape *)(m_pScene.createNode("Shape"));
Shape384->setUSE("JointShape");
Transform383->addChild(*Shape384);

HAnimSegment381->addChildren(*Transform383);

CHAnimSite* HAnimSite385 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite385->setName("SEGMENT_FOR_r_cuneiform_3_tip");
HAnimSite385->setDEF("hanim_SEGMENT_FOR_r_cuneiform_3_tip");
CTransform* Transform386 = (CTransform *)(m_pScene.createNode("Transform"));
Transform386->setTranslation(new float[3]{-0.0928,-0.0821,0.0248});
CShape* Shape387 = (CShape *)(m_pScene.createNode("Shape"));
Shape387->setUSE("SiteShape");
Transform386->addChild(*Shape387);

HAnimSite385->addChildren(*Transform386);

HAnimSegment381->addChildren(*HAnimSite385);

HAnimJoint380->addChildren(*HAnimSegment381);

CHAnimJoint* HAnimJoint388 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint388->setName("r_metatarsal_3");
HAnimJoint388->setDEF("hanim_r_metatarsal_3");
HAnimJoint388->setCenter(new float[3]{-0.0944,-0.0625,0.0175});
HAnimJoint388->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint388->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment389 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment389->setName("SEGMENT_FOR_r_metatarsal_3");
HAnimSegment389->setDEF("hanim_SEGMENT_FOR_r_metatarsal_3");
CTouchSensor* TouchSensor390 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor390->setDescription("joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3");
HAnimSegment389->addChildren(*TouchSensor390);

CTransform* Transform391 = (CTransform *)(m_pScene.createNode("Transform"));
Transform391->setTranslation(new float[3]{-0.0944,-0.0625,0.0175});
CShape* Shape392 = (CShape *)(m_pScene.createNode("Shape"));
Shape392->setUSE("JointShape");
Transform391->addChild(*Shape392);

HAnimSegment389->addChildren(*Transform391);

CHAnimSite* HAnimSite393 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite393->setName("SEGMENT_FOR_r_metatarsal_3_tip");
HAnimSite393->setDEF("hanim_SEGMENT_FOR_r_metatarsal_3_tip");
CTransform* Transform394 = (CTransform *)(m_pScene.createNode("Transform"));
Transform394->setTranslation(new float[3]{-0.0944,-0.0625,0.0175});
CShape* Shape395 = (CShape *)(m_pScene.createNode("Shape"));
Shape395->setUSE("SiteShape");
Transform394->addChild(*Shape395);

HAnimSite393->addChildren(*Transform394);

HAnimSegment389->addChildren(*HAnimSite393);

HAnimJoint388->addChildren(*HAnimSegment389);

CHAnimJoint* HAnimJoint396 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint396->setName("r_tarsal_proximal_phalanx_3");
HAnimJoint396->setDEF("hanim_r_tarsal_proximal_phalanx_3");
HAnimJoint396->setCenter(new float[3]{-0.0963,-0.0065,0.0065});
HAnimJoint396->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint396->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment397 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment397->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_3");
HAnimSegment397->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3");
CTouchSensor* TouchSensor398 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor398->setDescription("joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3");
HAnimSegment397->addChildren(*TouchSensor398);

CTransform* Transform399 = (CTransform *)(m_pScene.createNode("Transform"));
Transform399->setTranslation(new float[3]{-0.0963,-0.0065,0.0065});
CShape* Shape400 = (CShape *)(m_pScene.createNode("Shape"));
Shape400->setUSE("JointShape");
Transform399->addChild(*Shape400);

HAnimSegment397->addChildren(*Transform399);

CHAnimSite* HAnimSite401 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite401->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip");
HAnimSite401->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip");
CTransform* Transform402 = (CTransform *)(m_pScene.createNode("Transform"));
Transform402->setTranslation(new float[3]{-0.0963,-0.0065,0.0065});
CShape* Shape403 = (CShape *)(m_pScene.createNode("Shape"));
Shape403->setUSE("SiteShape");
Transform402->addChild(*Shape403);

HAnimSite401->addChildren(*Transform402);

HAnimSegment397->addChildren(*HAnimSite401);

HAnimJoint396->addChildren(*HAnimSegment397);

CHAnimJoint* HAnimJoint404 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint404->setName("r_tarsal_middle_phalanx_3");
HAnimJoint404->setDEF("hanim_r_tarsal_middle_phalanx_3");
HAnimJoint404->setCenter(new float[3]{-0.0987,0.0086,0.0034});
HAnimJoint404->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint404->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment405 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment405->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_3");
HAnimSegment405->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3");
CTouchSensor* TouchSensor406 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor406->setDescription("joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3");
HAnimSegment405->addChildren(*TouchSensor406);

CTransform* Transform407 = (CTransform *)(m_pScene.createNode("Transform"));
Transform407->setTranslation(new float[3]{-0.0987,0.0086,0.0034});
CShape* Shape408 = (CShape *)(m_pScene.createNode("Shape"));
Shape408->setUSE("JointShape");
Transform407->addChild(*Shape408);

HAnimSegment405->addChildren(*Transform407);

CHAnimSite* HAnimSite409 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite409->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip");
HAnimSite409->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip");
CTransform* Transform410 = (CTransform *)(m_pScene.createNode("Transform"));
Transform410->setTranslation(new float[3]{-0.0987,0.0086,0.0034});
CShape* Shape411 = (CShape *)(m_pScene.createNode("Shape"));
Shape411->setUSE("SiteShape");
Transform410->addChild(*Shape411);

HAnimSite409->addChildren(*Transform410);

HAnimSegment405->addChildren(*HAnimSite409);

HAnimJoint404->addChildren(*HAnimSegment405);

CHAnimJoint* HAnimJoint412 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint412->setName("r_tarsal_distal_phalanx_3");
HAnimJoint412->setDEF("hanim_r_tarsal_distal_phalanx_3");
HAnimJoint412->setCenter(new float[3]{-0.1002,0.0178,0.0013});
HAnimJoint412->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint412->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment413 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment413->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_3");
HAnimSegment413->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3");
CTouchSensor* TouchSensor414 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor414->setDescription("joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3");
HAnimSegment413->addChildren(*TouchSensor414);

CTransform* Transform415 = (CTransform *)(m_pScene.createNode("Transform"));
Transform415->setTranslation(new float[3]{-0.1002,0.0178,0.0013});
CShape* Shape416 = (CShape *)(m_pScene.createNode("Shape"));
Shape416->setUSE("JointShape");
Transform415->addChild(*Shape416);

HAnimSegment413->addChildren(*Transform415);

CHAnimSite* HAnimSite417 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite417->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip");
HAnimSite417->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip");
CTransform* Transform418 = (CTransform *)(m_pScene.createNode("Transform"));
Transform418->setTranslation(new float[3]{-0.1002,0.0178,0.0013});
CShape* Shape419 = (CShape *)(m_pScene.createNode("Shape"));
Shape419->setUSE("SiteShape");
Transform418->addChild(*Shape419);

HAnimSite417->addChildren(*Transform418);

HAnimSegment413->addChildren(*HAnimSite417);

HAnimJoint412->addChildren(*HAnimSegment413);

HAnimJoint404->addChildren(*HAnimJoint412);

HAnimJoint396->addChildren(*HAnimJoint404);

HAnimJoint388->addChildren(*HAnimJoint396);

HAnimJoint380->addChildren(*HAnimJoint388);

HAnimJoint300->addChildren(*HAnimJoint380);

HAnimJoint292->addChildren(*HAnimJoint300);

CHAnimJoint* HAnimJoint420 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint420->setName("r_calcaneus");
HAnimJoint420->setDEF("hanim_r_calcaneus");
HAnimJoint420->setCenter(new float[3]{-0.0889,-0.1278,0.0494});
HAnimJoint420->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint420->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment421 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment421->setName("SEGMENT_FOR_r_calcaneus");
HAnimSegment421->setDEF("hanim_SEGMENT_FOR_r_calcaneus");
CTouchSensor* TouchSensor422 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor422->setDescription("joint r_calcaneus segment SEGMENT_FOR_r_calcaneus");
HAnimSegment421->addChildren(*TouchSensor422);

CTransform* Transform423 = (CTransform *)(m_pScene.createNode("Transform"));
Transform423->setTranslation(new float[3]{-0.0889,-0.1278,0.0494});
CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
Shape424->setUSE("JointShape");
Transform423->addChild(*Shape424);

HAnimSegment421->addChildren(*Transform423);

CHAnimSite* HAnimSite425 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite425->setName("SEGMENT_FOR_r_calcaneus_tip");
HAnimSite425->setDEF("hanim_SEGMENT_FOR_r_calcaneus_tip");
CTransform* Transform426 = (CTransform *)(m_pScene.createNode("Transform"));
Transform426->setTranslation(new float[3]{-0.0889,-0.1278,0.0494});
CShape* Shape427 = (CShape *)(m_pScene.createNode("Shape"));
Shape427->setUSE("SiteShape");
Transform426->addChild(*Shape427);

HAnimSite425->addChildren(*Transform426);

HAnimSegment421->addChildren(*HAnimSite425);

HAnimJoint420->addChildren(*HAnimSegment421);

CHAnimJoint* HAnimJoint428 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint428->setName("r_cuboid");
HAnimJoint428->setDEF("hanim_r_cuboid");
HAnimJoint428->setCenter(new float[3]{-0.1105,-0.0998,0.0267});
HAnimJoint428->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint428->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment429 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment429->setName("SEGMENT_FOR_r_cuboid");
HAnimSegment429->setDEF("hanim_SEGMENT_FOR_r_cuboid");
CTouchSensor* TouchSensor430 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor430->setDescription("joint r_cuboid segment SEGMENT_FOR_r_cuboid");
HAnimSegment429->addChildren(*TouchSensor430);

CTransform* Transform431 = (CTransform *)(m_pScene.createNode("Transform"));
Transform431->setTranslation(new float[3]{-0.1105,-0.0998,0.0267});
CShape* Shape432 = (CShape *)(m_pScene.createNode("Shape"));
Shape432->setUSE("JointShape");
Transform431->addChild(*Shape432);

HAnimSegment429->addChildren(*Transform431);

CHAnimSite* HAnimSite433 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite433->setName("SEGMENT_FOR_r_cuboid_tip");
HAnimSite433->setDEF("hanim_SEGMENT_FOR_r_cuboid_tip");
CTransform* Transform434 = (CTransform *)(m_pScene.createNode("Transform"));
Transform434->setTranslation(new float[3]{-0.1105,-0.0998,0.0267});
CShape* Shape435 = (CShape *)(m_pScene.createNode("Shape"));
Shape435->setUSE("SiteShape");
Transform434->addChild(*Shape435);

HAnimSite433->addChildren(*Transform434);

HAnimSegment429->addChildren(*HAnimSite433);

HAnimJoint428->addChildren(*HAnimSegment429);

CHAnimJoint* HAnimJoint436 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint436->setName("r_metatarsal_4");
HAnimJoint436->setDEF("hanim_r_metatarsal_4");
HAnimJoint436->setCenter(new float[3]{-0.1063,-0.0634,0.016});
HAnimJoint436->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint436->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment437 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment437->setName("SEGMENT_FOR_r_metatarsal_4");
HAnimSegment437->setDEF("hanim_SEGMENT_FOR_r_metatarsal_4");
CTouchSensor* TouchSensor438 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor438->setDescription("joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4");
HAnimSegment437->addChildren(*TouchSensor438);

CTransform* Transform439 = (CTransform *)(m_pScene.createNode("Transform"));
Transform439->setTranslation(new float[3]{-0.1063,-0.0634,0.016});
CShape* Shape440 = (CShape *)(m_pScene.createNode("Shape"));
Shape440->setUSE("JointShape");
Transform439->addChild(*Shape440);

HAnimSegment437->addChildren(*Transform439);

CHAnimSite* HAnimSite441 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite441->setName("SEGMENT_FOR_r_metatarsal_4_tip");
HAnimSite441->setDEF("hanim_SEGMENT_FOR_r_metatarsal_4_tip");
CTransform* Transform442 = (CTransform *)(m_pScene.createNode("Transform"));
Transform442->setTranslation(new float[3]{-0.1063,-0.0634,0.016});
CShape* Shape443 = (CShape *)(m_pScene.createNode("Shape"));
Shape443->setUSE("SiteShape");
Transform442->addChild(*Shape443);

HAnimSite441->addChildren(*Transform442);

HAnimSegment437->addChildren(*HAnimSite441);

HAnimJoint436->addChildren(*HAnimSegment437);

CHAnimJoint* HAnimJoint444 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint444->setName("r_tarsal_proximal_phalanx_4");
HAnimJoint444->setDEF("hanim_r_tarsal_proximal_phalanx_4");
HAnimJoint444->setCenter(new float[3]{-0.1097,-0.0107,0.0058});
HAnimJoint444->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint444->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment445 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment445->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_4");
HAnimSegment445->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4");
CTouchSensor* TouchSensor446 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor446->setDescription("joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4");
HAnimSegment445->addChildren(*TouchSensor446);

CTransform* Transform447 = (CTransform *)(m_pScene.createNode("Transform"));
Transform447->setTranslation(new float[3]{-0.1097,-0.0107,0.0058});
CShape* Shape448 = (CShape *)(m_pScene.createNode("Shape"));
Shape448->setUSE("JointShape");
Transform447->addChild(*Shape448);

HAnimSegment445->addChildren(*Transform447);

CHAnimSite* HAnimSite449 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite449->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip");
HAnimSite449->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip");
CTransform* Transform450 = (CTransform *)(m_pScene.createNode("Transform"));
Transform450->setTranslation(new float[3]{-0.1097,-0.0107,0.0058});
CShape* Shape451 = (CShape *)(m_pScene.createNode("Shape"));
Shape451->setUSE("SiteShape");
Transform450->addChild(*Shape451);

HAnimSite449->addChildren(*Transform450);

HAnimSegment445->addChildren(*HAnimSite449);

HAnimJoint444->addChildren(*HAnimSegment445);

CHAnimJoint* HAnimJoint452 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint452->setName("r_tarsal_middle_phalanx_4");
HAnimJoint452->setDEF("hanim_r_tarsal_middle_phalanx_4");
HAnimJoint452->setCenter(new float[3]{-0.114,0.0044,0.0037});
HAnimJoint452->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint452->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment453 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment453->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_4");
HAnimSegment453->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4");
CTouchSensor* TouchSensor454 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor454->setDescription("joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4");
HAnimSegment453->addChildren(*TouchSensor454);

CTransform* Transform455 = (CTransform *)(m_pScene.createNode("Transform"));
Transform455->setTranslation(new float[3]{-0.114,0.0044,0.0037});
CShape* Shape456 = (CShape *)(m_pScene.createNode("Shape"));
Shape456->setUSE("JointShape");
Transform455->addChild(*Shape456);

HAnimSegment453->addChildren(*Transform455);

CHAnimSite* HAnimSite457 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite457->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip");
HAnimSite457->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip");
CTransform* Transform458 = (CTransform *)(m_pScene.createNode("Transform"));
Transform458->setTranslation(new float[3]{-0.114,0.0044,0.0037});
CShape* Shape459 = (CShape *)(m_pScene.createNode("Shape"));
Shape459->setUSE("SiteShape");
Transform458->addChild(*Shape459);

HAnimSite457->addChildren(*Transform458);

HAnimSegment453->addChildren(*HAnimSite457);

HAnimJoint452->addChildren(*HAnimSegment453);

CHAnimJoint* HAnimJoint460 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint460->setName("r_tarsal_distal_phalanx_4");
HAnimJoint460->setDEF("hanim_r_tarsal_distal_phalanx_4");
HAnimJoint460->setCenter(new float[3]{-0.1155,0.0118,0.0008});
HAnimJoint460->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint460->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment461 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment461->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_4");
HAnimSegment461->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4");
CTouchSensor* TouchSensor462 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor462->setDescription("joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4");
HAnimSegment461->addChildren(*TouchSensor462);

CTransform* Transform463 = (CTransform *)(m_pScene.createNode("Transform"));
Transform463->setTranslation(new float[3]{-0.1155,0.0118,0.0008});
CShape* Shape464 = (CShape *)(m_pScene.createNode("Shape"));
Shape464->setUSE("JointShape");
Transform463->addChild(*Shape464);

HAnimSegment461->addChildren(*Transform463);

CHAnimSite* HAnimSite465 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite465->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip");
HAnimSite465->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip");
CTransform* Transform466 = (CTransform *)(m_pScene.createNode("Transform"));
Transform466->setTranslation(new float[3]{-0.1155,0.0118,0.0008});
CShape* Shape467 = (CShape *)(m_pScene.createNode("Shape"));
Shape467->setUSE("SiteShape");
Transform466->addChild(*Shape467);

HAnimSite465->addChildren(*Transform466);

HAnimSegment461->addChildren(*HAnimSite465);

HAnimJoint460->addChildren(*HAnimSegment461);

HAnimJoint452->addChildren(*HAnimJoint460);

HAnimJoint444->addChildren(*HAnimJoint452);

HAnimJoint436->addChildren(*HAnimJoint444);

HAnimJoint428->addChildren(*HAnimJoint436);

CHAnimJoint* HAnimJoint468 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint468->setName("r_metatarsal_5");
HAnimJoint468->setDEF("hanim_r_metatarsal_5");
HAnimJoint468->setCenter(new float[3]{-0.1206,-0.0671,0.0124});
HAnimJoint468->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint468->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment469 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment469->setName("SEGMENT_FOR_r_metatarsal_5");
HAnimSegment469->setDEF("hanim_SEGMENT_FOR_r_metatarsal_5");
CTouchSensor* TouchSensor470 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor470->setDescription("joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5");
HAnimSegment469->addChildren(*TouchSensor470);

CTransform* Transform471 = (CTransform *)(m_pScene.createNode("Transform"));
Transform471->setTranslation(new float[3]{-0.1206,-0.0671,0.0124});
CShape* Shape472 = (CShape *)(m_pScene.createNode("Shape"));
Shape472->setUSE("JointShape");
Transform471->addChild(*Shape472);

HAnimSegment469->addChildren(*Transform471);

CHAnimSite* HAnimSite473 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite473->setName("SEGMENT_FOR_r_metatarsal_5_tip");
HAnimSite473->setDEF("hanim_SEGMENT_FOR_r_metatarsal_5_tip");
CTransform* Transform474 = (CTransform *)(m_pScene.createNode("Transform"));
Transform474->setTranslation(new float[3]{-0.1206,-0.0671,0.0124});
CShape* Shape475 = (CShape *)(m_pScene.createNode("Shape"));
Shape475->setUSE("SiteShape");
Transform474->addChild(*Shape475);

HAnimSite473->addChildren(*Transform474);

HAnimSegment469->addChildren(*HAnimSite473);

HAnimJoint468->addChildren(*HAnimSegment469);

CHAnimJoint* HAnimJoint476 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint476->setName("r_tarsal_proximal_phalanx_5");
HAnimJoint476->setDEF("hanim_r_tarsal_proximal_phalanx_5");
HAnimJoint476->setCenter(new float[3]{-0.1239,-0.0153,0.0051});
HAnimJoint476->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint476->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment477 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment477->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_5");
HAnimSegment477->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5");
CTouchSensor* TouchSensor478 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor478->setDescription("joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5");
HAnimSegment477->addChildren(*TouchSensor478);

CTransform* Transform479 = (CTransform *)(m_pScene.createNode("Transform"));
Transform479->setTranslation(new float[3]{-0.1239,-0.0153,0.0051});
CShape* Shape480 = (CShape *)(m_pScene.createNode("Shape"));
Shape480->setUSE("JointShape");
Transform479->addChild(*Shape480);

HAnimSegment477->addChildren(*Transform479);

CHAnimSite* HAnimSite481 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite481->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip");
HAnimSite481->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip");
CTransform* Transform482 = (CTransform *)(m_pScene.createNode("Transform"));
Transform482->setTranslation(new float[3]{-0.1239,-0.0153,0.0051});
CShape* Shape483 = (CShape *)(m_pScene.createNode("Shape"));
Shape483->setUSE("SiteShape");
Transform482->addChild(*Shape483);

HAnimSite481->addChildren(*Transform482);

HAnimSegment477->addChildren(*HAnimSite481);

HAnimJoint476->addChildren(*HAnimSegment477);

CHAnimJoint* HAnimJoint484 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint484->setName("r_tarsal_middle_phalanx_5");
HAnimJoint484->setDEF("hanim_r_tarsal_middle_phalanx_5");
HAnimJoint484->setCenter(new float[3]{-0.1262,-0.0077,0.0023});
HAnimJoint484->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint484->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment485 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment485->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_5");
HAnimSegment485->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5");
CTouchSensor* TouchSensor486 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor486->setDescription("joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5");
HAnimSegment485->addChildren(*TouchSensor486);

CTransform* Transform487 = (CTransform *)(m_pScene.createNode("Transform"));
Transform487->setTranslation(new float[3]{-0.1262,-0.0077,0.0023});
CShape* Shape488 = (CShape *)(m_pScene.createNode("Shape"));
Shape488->setUSE("JointShape");
Transform487->addChild(*Shape488);

HAnimSegment485->addChildren(*Transform487);

CHAnimSite* HAnimSite489 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite489->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip");
HAnimSite489->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip");
CTransform* Transform490 = (CTransform *)(m_pScene.createNode("Transform"));
Transform490->setTranslation(new float[3]{-0.1262,-0.0077,0.0023});
CShape* Shape491 = (CShape *)(m_pScene.createNode("Shape"));
Shape491->setUSE("SiteShape");
Transform490->addChild(*Shape491);

HAnimSite489->addChildren(*Transform490);

HAnimSegment485->addChildren(*HAnimSite489);

HAnimJoint484->addChildren(*HAnimSegment485);

CHAnimJoint* HAnimJoint492 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint492->setName("r_tarsal_distal_phalanx_5");
HAnimJoint492->setDEF("hanim_r_tarsal_distal_phalanx_5");
HAnimJoint492->setCenter(new float[3]{-0.1271,0,0});
HAnimJoint492->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint492->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment493 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment493->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_5");
HAnimSegment493->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5");
CTouchSensor* TouchSensor494 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor494->setDescription("joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5");
HAnimSegment493->addChildren(*TouchSensor494);

CTransform* Transform495 = (CTransform *)(m_pScene.createNode("Transform"));
Transform495->setTranslation(new float[3]{-0.1271,0,0});
CShape* Shape496 = (CShape *)(m_pScene.createNode("Shape"));
Shape496->setUSE("JointShape");
Transform495->addChild(*Shape496);

HAnimSegment493->addChildren(*Transform495);

CHAnimSite* HAnimSite497 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite497->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip");
HAnimSite497->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip");
CTransform* Transform498 = (CTransform *)(m_pScene.createNode("Transform"));
Transform498->setTranslation(new float[3]{-0.1271,0,0});
CShape* Shape499 = (CShape *)(m_pScene.createNode("Shape"));
Shape499->setUSE("SiteShape");
Transform498->addChild(*Shape499);

HAnimSite497->addChildren(*Transform498);

HAnimSegment493->addChildren(*HAnimSite497);

HAnimJoint492->addChildren(*HAnimSegment493);

HAnimJoint484->addChildren(*HAnimJoint492);

HAnimJoint476->addChildren(*HAnimJoint484);

HAnimJoint468->addChildren(*HAnimJoint476);

HAnimJoint428->addChildren(*HAnimJoint468);

HAnimJoint420->addChildren(*HAnimJoint428);

HAnimJoint292->addChildren(*HAnimJoint420);

HAnimJoint284->addChildren(*HAnimJoint292);

HAnimJoint276->addChildren(*HAnimJoint284);

HAnimJoint44->addChildren(*HAnimJoint276);

HAnimJoint36->addChildren(*HAnimJoint44);

CHAnimJoint* HAnimJoint500 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint500->setName("l5");
HAnimJoint500->setDEF("hanim_l5");
HAnimJoint500->setCenter(new float[3]{-0.0002,-0.1156,0.9169});
HAnimJoint500->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint500->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment501 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment501->setName("SEGMENT_FOR_l5");
HAnimSegment501->setDEF("hanim_SEGMENT_FOR_l5");
CTouchSensor* TouchSensor502 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor502->setDescription("joint l5 segment SEGMENT_FOR_l5");
HAnimSegment501->addChildren(*TouchSensor502);

CTransform* Transform503 = (CTransform *)(m_pScene.createNode("Transform"));
Transform503->setTranslation(new float[3]{-0.0002,-0.1156,0.9169});
CShape* Shape504 = (CShape *)(m_pScene.createNode("Shape"));
Shape504->setUSE("JointShape");
Transform503->addChild(*Shape504);

HAnimSegment501->addChildren(*Transform503);

CHAnimSite* HAnimSite505 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite505->setName("SEGMENT_FOR_l5_tip");
HAnimSite505->setDEF("hanim_SEGMENT_FOR_l5_tip");
CTransform* Transform506 = (CTransform *)(m_pScene.createNode("Transform"));
Transform506->setTranslation(new float[3]{-0.0002,-0.1156,0.9169});
CShape* Shape507 = (CShape *)(m_pScene.createNode("Shape"));
Shape507->setUSE("SiteShape");
Transform506->addChild(*Shape507);

HAnimSite505->addChildren(*Transform506);

HAnimSegment501->addChildren(*HAnimSite505);

HAnimJoint500->addChildren(*HAnimSegment501);

CHAnimJoint* HAnimJoint508 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint508->setName("l4");
HAnimJoint508->setDEF("hanim_l4");
HAnimJoint508->setCenter(new float[3]{-0.0002,-0.1156,0.9412});
HAnimJoint508->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint508->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment509 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment509->setName("SEGMENT_FOR_l4");
HAnimSegment509->setDEF("hanim_SEGMENT_FOR_l4");
CTouchSensor* TouchSensor510 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor510->setDescription("joint l4 segment SEGMENT_FOR_l4");
HAnimSegment509->addChildren(*TouchSensor510);

CTransform* Transform511 = (CTransform *)(m_pScene.createNode("Transform"));
Transform511->setTranslation(new float[3]{-0.0002,-0.1156,0.9412});
CShape* Shape512 = (CShape *)(m_pScene.createNode("Shape"));
Shape512->setUSE("JointShape");
Transform511->addChild(*Shape512);

HAnimSegment509->addChildren(*Transform511);

CHAnimSite* HAnimSite513 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite513->setName("SEGMENT_FOR_l4_tip");
HAnimSite513->setDEF("hanim_SEGMENT_FOR_l4_tip");
CTransform* Transform514 = (CTransform *)(m_pScene.createNode("Transform"));
Transform514->setTranslation(new float[3]{-0.0002,-0.1156,0.9412});
CShape* Shape515 = (CShape *)(m_pScene.createNode("Shape"));
Shape515->setUSE("SiteShape");
Transform514->addChild(*Shape515);

HAnimSite513->addChildren(*Transform514);

HAnimSegment509->addChildren(*HAnimSite513);

HAnimJoint508->addChildren(*HAnimSegment509);

CHAnimJoint* HAnimJoint516 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint516->setName("l3");
HAnimJoint516->setDEF("hanim_l3");
HAnimJoint516->setCenter(new float[3]{-0.0002,-0.1156,0.9574});
HAnimJoint516->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint516->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment517 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment517->setName("SEGMENT_FOR_l3");
HAnimSegment517->setDEF("hanim_SEGMENT_FOR_l3");
CTouchSensor* TouchSensor518 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor518->setDescription("joint l3 segment SEGMENT_FOR_l3");
HAnimSegment517->addChildren(*TouchSensor518);

CTransform* Transform519 = (CTransform *)(m_pScene.createNode("Transform"));
Transform519->setTranslation(new float[3]{-0.0002,-0.1156,0.9574});
CShape* Shape520 = (CShape *)(m_pScene.createNode("Shape"));
Shape520->setUSE("JointShape");
Transform519->addChild(*Shape520);

HAnimSegment517->addChildren(*Transform519);

CHAnimSite* HAnimSite521 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite521->setName("SEGMENT_FOR_l3_tip");
HAnimSite521->setDEF("hanim_SEGMENT_FOR_l3_tip");
CTransform* Transform522 = (CTransform *)(m_pScene.createNode("Transform"));
Transform522->setTranslation(new float[3]{-0.0002,-0.1156,0.9574});
CShape* Shape523 = (CShape *)(m_pScene.createNode("Shape"));
Shape523->setUSE("SiteShape");
Transform522->addChild(*Shape523);

HAnimSite521->addChildren(*Transform522);

HAnimSegment517->addChildren(*HAnimSite521);

HAnimJoint516->addChildren(*HAnimSegment517);

CHAnimJoint* HAnimJoint524 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint524->setName("l2");
HAnimJoint524->setDEF("hanim_l2");
HAnimJoint524->setCenter(new float[3]{-0.0002,-0.1156,0.9738});
HAnimJoint524->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint524->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment525 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment525->setName("SEGMENT_FOR_l2");
HAnimSegment525->setDEF("hanim_SEGMENT_FOR_l2");
CTouchSensor* TouchSensor526 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor526->setDescription("joint l2 segment SEGMENT_FOR_l2");
HAnimSegment525->addChildren(*TouchSensor526);

CTransform* Transform527 = (CTransform *)(m_pScene.createNode("Transform"));
Transform527->setTranslation(new float[3]{-0.0002,-0.1156,0.9738});
CShape* Shape528 = (CShape *)(m_pScene.createNode("Shape"));
Shape528->setUSE("JointShape");
Transform527->addChild(*Shape528);

HAnimSegment525->addChildren(*Transform527);

CHAnimSite* HAnimSite529 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite529->setName("SEGMENT_FOR_l2_tip");
HAnimSite529->setDEF("hanim_SEGMENT_FOR_l2_tip");
CTransform* Transform530 = (CTransform *)(m_pScene.createNode("Transform"));
Transform530->setTranslation(new float[3]{-0.0002,-0.1156,0.9738});
CShape* Shape531 = (CShape *)(m_pScene.createNode("Shape"));
Shape531->setUSE("SiteShape");
Transform530->addChild(*Shape531);

HAnimSite529->addChildren(*Transform530);

HAnimSegment525->addChildren(*HAnimSite529);

HAnimJoint524->addChildren(*HAnimSegment525);

CHAnimJoint* HAnimJoint532 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint532->setName("l1");
HAnimJoint532->setDEF("hanim_l1");
HAnimJoint532->setCenter(new float[3]{-0.0002,-0.1156,0.9911});
HAnimJoint532->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint532->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment533 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment533->setName("SEGMENT_FOR_l1");
HAnimSegment533->setDEF("hanim_SEGMENT_FOR_l1");
CTouchSensor* TouchSensor534 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor534->setDescription("joint l1 segment SEGMENT_FOR_l1");
HAnimSegment533->addChildren(*TouchSensor534);

CTransform* Transform535 = (CTransform *)(m_pScene.createNode("Transform"));
Transform535->setTranslation(new float[3]{-0.0002,-0.1156,0.9911});
CShape* Shape536 = (CShape *)(m_pScene.createNode("Shape"));
Shape536->setUSE("JointShape");
Transform535->addChild(*Shape536);

HAnimSegment533->addChildren(*Transform535);

CHAnimSite* HAnimSite537 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite537->setName("SEGMENT_FOR_l1_tip");
HAnimSite537->setDEF("hanim_SEGMENT_FOR_l1_tip");
CTransform* Transform538 = (CTransform *)(m_pScene.createNode("Transform"));
Transform538->setTranslation(new float[3]{-0.0002,-0.1156,0.9911});
CShape* Shape539 = (CShape *)(m_pScene.createNode("Shape"));
Shape539->setUSE("SiteShape");
Transform538->addChild(*Shape539);

HAnimSite537->addChildren(*Transform538);

HAnimSegment533->addChildren(*HAnimSite537);

HAnimJoint532->addChildren(*HAnimSegment533);

CHAnimJoint* HAnimJoint540 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint540->setName("t12");
HAnimJoint540->setDEF("hanim_t12");
HAnimJoint540->setCenter(new float[3]{-0.0002,-0.1156,1.0145});
HAnimJoint540->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint540->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment541 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment541->setName("SEGMENT_FOR_t12");
HAnimSegment541->setDEF("hanim_SEGMENT_FOR_t12");
CTouchSensor* TouchSensor542 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor542->setDescription("joint t12 segment SEGMENT_FOR_t12");
HAnimSegment541->addChildren(*TouchSensor542);

CTransform* Transform543 = (CTransform *)(m_pScene.createNode("Transform"));
Transform543->setTranslation(new float[3]{-0.0002,-0.1156,1.0145});
CShape* Shape544 = (CShape *)(m_pScene.createNode("Shape"));
Shape544->setUSE("JointShape");
Transform543->addChild(*Shape544);

HAnimSegment541->addChildren(*Transform543);

CHAnimSite* HAnimSite545 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite545->setName("SEGMENT_FOR_t12_tip");
HAnimSite545->setDEF("hanim_SEGMENT_FOR_t12_tip");
CTransform* Transform546 = (CTransform *)(m_pScene.createNode("Transform"));
Transform546->setTranslation(new float[3]{-0.0002,-0.1156,1.0145});
CShape* Shape547 = (CShape *)(m_pScene.createNode("Shape"));
Shape547->setUSE("SiteShape");
Transform546->addChild(*Shape547);

HAnimSite545->addChildren(*Transform546);

HAnimSegment541->addChildren(*HAnimSite545);

HAnimJoint540->addChildren(*HAnimSegment541);

CHAnimJoint* HAnimJoint548 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint548->setName("t11");
HAnimJoint548->setDEF("hanim_t11");
HAnimJoint548->setCenter(new float[3]{-0.0002,-0.1156,1.0381});
HAnimJoint548->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint548->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment549 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment549->setName("SEGMENT_FOR_t11");
HAnimSegment549->setDEF("hanim_SEGMENT_FOR_t11");
CTouchSensor* TouchSensor550 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor550->setDescription("joint t11 segment SEGMENT_FOR_t11");
HAnimSegment549->addChildren(*TouchSensor550);

CTransform* Transform551 = (CTransform *)(m_pScene.createNode("Transform"));
Transform551->setTranslation(new float[3]{-0.0002,-0.1156,1.0381});
CShape* Shape552 = (CShape *)(m_pScene.createNode("Shape"));
Shape552->setUSE("JointShape");
Transform551->addChild(*Shape552);

HAnimSegment549->addChildren(*Transform551);

CHAnimSite* HAnimSite553 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite553->setName("SEGMENT_FOR_t11_tip");
HAnimSite553->setDEF("hanim_SEGMENT_FOR_t11_tip");
CTransform* Transform554 = (CTransform *)(m_pScene.createNode("Transform"));
Transform554->setTranslation(new float[3]{-0.0002,-0.1156,1.0381});
CShape* Shape555 = (CShape *)(m_pScene.createNode("Shape"));
Shape555->setUSE("SiteShape");
Transform554->addChild(*Shape555);

HAnimSite553->addChildren(*Transform554);

HAnimSegment549->addChildren(*HAnimSite553);

HAnimJoint548->addChildren(*HAnimSegment549);

CHAnimJoint* HAnimJoint556 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint556->setName("t10");
HAnimJoint556->setDEF("hanim_t10");
HAnimJoint556->setCenter(new float[3]{-0.0002,-0.1157,1.0552});
HAnimJoint556->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint556->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment557 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment557->setName("SEGMENT_FOR_t10");
HAnimSegment557->setDEF("hanim_SEGMENT_FOR_t10");
CTouchSensor* TouchSensor558 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor558->setDescription("joint t10 segment SEGMENT_FOR_t10");
HAnimSegment557->addChildren(*TouchSensor558);

CTransform* Transform559 = (CTransform *)(m_pScene.createNode("Transform"));
Transform559->setTranslation(new float[3]{-0.0002,-0.1157,1.0552});
CShape* Shape560 = (CShape *)(m_pScene.createNode("Shape"));
Shape560->setUSE("JointShape");
Transform559->addChild(*Shape560);

HAnimSegment557->addChildren(*Transform559);

CHAnimSite* HAnimSite561 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite561->setName("SEGMENT_FOR_t10_tip");
HAnimSite561->setDEF("hanim_SEGMENT_FOR_t10_tip");
CTransform* Transform562 = (CTransform *)(m_pScene.createNode("Transform"));
Transform562->setTranslation(new float[3]{-0.0002,-0.1157,1.0552});
CShape* Shape563 = (CShape *)(m_pScene.createNode("Shape"));
Shape563->setUSE("SiteShape");
Transform562->addChild(*Shape563);

HAnimSite561->addChildren(*Transform562);

HAnimSegment557->addChildren(*HAnimSite561);

HAnimJoint556->addChildren(*HAnimSegment557);

CHAnimJoint* HAnimJoint564 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint564->setName("t9");
HAnimJoint564->setDEF("hanim_t9");
HAnimJoint564->setCenter(new float[3]{-0.0002,-0.1156,1.0699});
HAnimJoint564->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint564->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment565 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment565->setName("SEGMENT_FOR_t9");
HAnimSegment565->setDEF("hanim_SEGMENT_FOR_t9");
CTouchSensor* TouchSensor566 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor566->setDescription("joint t9 segment SEGMENT_FOR_t9");
HAnimSegment565->addChildren(*TouchSensor566);

CTransform* Transform567 = (CTransform *)(m_pScene.createNode("Transform"));
Transform567->setTranslation(new float[3]{-0.0002,-0.1156,1.0699});
CShape* Shape568 = (CShape *)(m_pScene.createNode("Shape"));
Shape568->setUSE("JointShape");
Transform567->addChild(*Shape568);

HAnimSegment565->addChildren(*Transform567);

CHAnimSite* HAnimSite569 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite569->setName("SEGMENT_FOR_t9_tip");
HAnimSite569->setDEF("hanim_SEGMENT_FOR_t9_tip");
CTransform* Transform570 = (CTransform *)(m_pScene.createNode("Transform"));
Transform570->setTranslation(new float[3]{-0.0002,-0.1156,1.0699});
CShape* Shape571 = (CShape *)(m_pScene.createNode("Shape"));
Shape571->setUSE("SiteShape");
Transform570->addChild(*Shape571);

HAnimSite569->addChildren(*Transform570);

HAnimSegment565->addChildren(*HAnimSite569);

HAnimJoint564->addChildren(*HAnimSegment565);

CHAnimJoint* HAnimJoint572 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint572->setName("t8");
HAnimJoint572->setDEF("hanim_t8");
HAnimJoint572->setCenter(new float[3]{-0.0002,-0.1156,1.0845});
HAnimJoint572->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint572->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment573 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment573->setName("SEGMENT_FOR_t8");
HAnimSegment573->setDEF("hanim_SEGMENT_FOR_t8");
CTouchSensor* TouchSensor574 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor574->setDescription("joint t8 segment SEGMENT_FOR_t8");
HAnimSegment573->addChildren(*TouchSensor574);

CTransform* Transform575 = (CTransform *)(m_pScene.createNode("Transform"));
Transform575->setTranslation(new float[3]{-0.0002,-0.1156,1.0845});
CShape* Shape576 = (CShape *)(m_pScene.createNode("Shape"));
Shape576->setUSE("JointShape");
Transform575->addChild(*Shape576);

HAnimSegment573->addChildren(*Transform575);

CHAnimSite* HAnimSite577 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite577->setName("SEGMENT_FOR_t8_tip");
HAnimSite577->setDEF("hanim_SEGMENT_FOR_t8_tip");
CTransform* Transform578 = (CTransform *)(m_pScene.createNode("Transform"));
Transform578->setTranslation(new float[3]{-0.0002,-0.1156,1.0845});
CShape* Shape579 = (CShape *)(m_pScene.createNode("Shape"));
Shape579->setUSE("SiteShape");
Transform578->addChild(*Shape579);

HAnimSite577->addChildren(*Transform578);

HAnimSegment573->addChildren(*HAnimSite577);

HAnimJoint572->addChildren(*HAnimSegment573);

CHAnimJoint* HAnimJoint580 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint580->setName("t7");
HAnimJoint580->setDEF("hanim_t7");
HAnimJoint580->setCenter(new float[3]{-0.0002,-0.1156,1.1002});
HAnimJoint580->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint580->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment581 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment581->setName("SEGMENT_FOR_t7");
HAnimSegment581->setDEF("hanim_SEGMENT_FOR_t7");
CTouchSensor* TouchSensor582 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor582->setDescription("joint t7 segment SEGMENT_FOR_t7");
HAnimSegment581->addChildren(*TouchSensor582);

CTransform* Transform583 = (CTransform *)(m_pScene.createNode("Transform"));
Transform583->setTranslation(new float[3]{-0.0002,-0.1156,1.1002});
CShape* Shape584 = (CShape *)(m_pScene.createNode("Shape"));
Shape584->setUSE("JointShape");
Transform583->addChild(*Shape584);

HAnimSegment581->addChildren(*Transform583);

CHAnimSite* HAnimSite585 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite585->setName("SEGMENT_FOR_t7_tip");
HAnimSite585->setDEF("hanim_SEGMENT_FOR_t7_tip");
CTransform* Transform586 = (CTransform *)(m_pScene.createNode("Transform"));
Transform586->setTranslation(new float[3]{-0.0002,-0.1156,1.1002});
CShape* Shape587 = (CShape *)(m_pScene.createNode("Shape"));
Shape587->setUSE("SiteShape");
Transform586->addChild(*Shape587);

HAnimSite585->addChildren(*Transform586);

HAnimSegment581->addChildren(*HAnimSite585);

HAnimJoint580->addChildren(*HAnimSegment581);

CHAnimJoint* HAnimJoint588 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint588->setName("t6");
HAnimJoint588->setDEF("hanim_t6");
HAnimJoint588->setCenter(new float[3]{-0.0002,-0.1156,1.1131});
HAnimJoint588->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint588->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment589 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment589->setName("SEGMENT_FOR_t6");
HAnimSegment589->setDEF("hanim_SEGMENT_FOR_t6");
CTouchSensor* TouchSensor590 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor590->setDescription("joint t6 segment SEGMENT_FOR_t6");
HAnimSegment589->addChildren(*TouchSensor590);

CTransform* Transform591 = (CTransform *)(m_pScene.createNode("Transform"));
Transform591->setTranslation(new float[3]{-0.0002,-0.1156,1.1131});
CShape* Shape592 = (CShape *)(m_pScene.createNode("Shape"));
Shape592->setUSE("JointShape");
Transform591->addChild(*Shape592);

HAnimSegment589->addChildren(*Transform591);

CHAnimSite* HAnimSite593 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite593->setName("SEGMENT_FOR_t6_tip");
HAnimSite593->setDEF("hanim_SEGMENT_FOR_t6_tip");
CTransform* Transform594 = (CTransform *)(m_pScene.createNode("Transform"));
Transform594->setTranslation(new float[3]{-0.0002,-0.1156,1.1131});
CShape* Shape595 = (CShape *)(m_pScene.createNode("Shape"));
Shape595->setUSE("SiteShape");
Transform594->addChild(*Shape595);

HAnimSite593->addChildren(*Transform594);

HAnimSegment589->addChildren(*HAnimSite593);

HAnimJoint588->addChildren(*HAnimSegment589);

CHAnimJoint* HAnimJoint596 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint596->setName("t5");
HAnimJoint596->setDEF("hanim_t5");
HAnimJoint596->setCenter(new float[3]{-0.0002,-0.1156,1.1286});
HAnimJoint596->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint596->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment597 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment597->setName("SEGMENT_FOR_t5");
HAnimSegment597->setDEF("hanim_SEGMENT_FOR_t5");
CTouchSensor* TouchSensor598 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor598->setDescription("joint t5 segment SEGMENT_FOR_t5");
HAnimSegment597->addChildren(*TouchSensor598);

CTransform* Transform599 = (CTransform *)(m_pScene.createNode("Transform"));
Transform599->setTranslation(new float[3]{-0.0002,-0.1156,1.1286});
CShape* Shape600 = (CShape *)(m_pScene.createNode("Shape"));
Shape600->setUSE("JointShape");
Transform599->addChild(*Shape600);

HAnimSegment597->addChildren(*Transform599);

CHAnimSite* HAnimSite601 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite601->setName("SEGMENT_FOR_t5_tip");
HAnimSite601->setDEF("hanim_SEGMENT_FOR_t5_tip");
CTransform* Transform602 = (CTransform *)(m_pScene.createNode("Transform"));
Transform602->setTranslation(new float[3]{-0.0002,-0.1156,1.1286});
CShape* Shape603 = (CShape *)(m_pScene.createNode("Shape"));
Shape603->setUSE("SiteShape");
Transform602->addChild(*Shape603);

HAnimSite601->addChildren(*Transform602);

HAnimSegment597->addChildren(*HAnimSite601);

HAnimJoint596->addChildren(*HAnimSegment597);

CHAnimJoint* HAnimJoint604 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint604->setName("t4");
HAnimJoint604->setDEF("hanim_t4");
HAnimJoint604->setCenter(new float[3]{-0.0002,-0.1156,1.1439});
HAnimJoint604->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint604->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment605 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment605->setName("SEGMENT_FOR_t4");
HAnimSegment605->setDEF("hanim_SEGMENT_FOR_t4");
CTouchSensor* TouchSensor606 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor606->setDescription("joint t4 segment SEGMENT_FOR_t4");
HAnimSegment605->addChildren(*TouchSensor606);

CTransform* Transform607 = (CTransform *)(m_pScene.createNode("Transform"));
Transform607->setTranslation(new float[3]{-0.0002,-0.1156,1.1439});
CShape* Shape608 = (CShape *)(m_pScene.createNode("Shape"));
Shape608->setUSE("JointShape");
Transform607->addChild(*Shape608);

HAnimSegment605->addChildren(*Transform607);

CHAnimSite* HAnimSite609 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite609->setName("SEGMENT_FOR_t4_tip");
HAnimSite609->setDEF("hanim_SEGMENT_FOR_t4_tip");
CTransform* Transform610 = (CTransform *)(m_pScene.createNode("Transform"));
Transform610->setTranslation(new float[3]{-0.0002,-0.1156,1.1439});
CShape* Shape611 = (CShape *)(m_pScene.createNode("Shape"));
Shape611->setUSE("SiteShape");
Transform610->addChild(*Shape611);

HAnimSite609->addChildren(*Transform610);

HAnimSegment605->addChildren(*HAnimSite609);

HAnimJoint604->addChildren(*HAnimSegment605);

CHAnimJoint* HAnimJoint612 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint612->setName("t3");
HAnimJoint612->setDEF("hanim_t3");
HAnimJoint612->setCenter(new float[3]{-0.0002,-0.1156,1.1623});
HAnimJoint612->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint612->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment613 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment613->setName("SEGMENT_FOR_t3");
HAnimSegment613->setDEF("hanim_SEGMENT_FOR_t3");
CTouchSensor* TouchSensor614 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor614->setDescription("joint t3 segment SEGMENT_FOR_t3");
HAnimSegment613->addChildren(*TouchSensor614);

CTransform* Transform615 = (CTransform *)(m_pScene.createNode("Transform"));
Transform615->setTranslation(new float[3]{-0.0002,-0.1156,1.1623});
CShape* Shape616 = (CShape *)(m_pScene.createNode("Shape"));
Shape616->setUSE("JointShape");
Transform615->addChild(*Shape616);

HAnimSegment613->addChildren(*Transform615);

CHAnimSite* HAnimSite617 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite617->setName("SEGMENT_FOR_t3_tip");
HAnimSite617->setDEF("hanim_SEGMENT_FOR_t3_tip");
CTransform* Transform618 = (CTransform *)(m_pScene.createNode("Transform"));
Transform618->setTranslation(new float[3]{-0.0002,-0.1156,1.1623});
CShape* Shape619 = (CShape *)(m_pScene.createNode("Shape"));
Shape619->setUSE("SiteShape");
Transform618->addChild(*Shape619);

HAnimSite617->addChildren(*Transform618);

HAnimSegment613->addChildren(*HAnimSite617);

HAnimJoint612->addChildren(*HAnimSegment613);

CHAnimJoint* HAnimJoint620 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint620->setName("t2");
HAnimJoint620->setDEF("hanim_t2");
HAnimJoint620->setCenter(new float[3]{-0.0002,-0.1157,1.1871});
HAnimJoint620->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint620->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment621 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment621->setName("SEGMENT_FOR_t2");
HAnimSegment621->setDEF("hanim_SEGMENT_FOR_t2");
CTouchSensor* TouchSensor622 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor622->setDescription("joint t2 segment SEGMENT_FOR_t2");
HAnimSegment621->addChildren(*TouchSensor622);

CTransform* Transform623 = (CTransform *)(m_pScene.createNode("Transform"));
Transform623->setTranslation(new float[3]{-0.0002,-0.1157,1.1871});
CShape* Shape624 = (CShape *)(m_pScene.createNode("Shape"));
Shape624->setUSE("JointShape");
Transform623->addChild(*Shape624);

HAnimSegment621->addChildren(*Transform623);

CHAnimSite* HAnimSite625 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite625->setName("SEGMENT_FOR_t2_tip");
HAnimSite625->setDEF("hanim_SEGMENT_FOR_t2_tip");
CTransform* Transform626 = (CTransform *)(m_pScene.createNode("Transform"));
Transform626->setTranslation(new float[3]{-0.0002,-0.1157,1.1871});
CShape* Shape627 = (CShape *)(m_pScene.createNode("Shape"));
Shape627->setUSE("SiteShape");
Transform626->addChild(*Shape627);

HAnimSite625->addChildren(*Transform626);

HAnimSegment621->addChildren(*HAnimSite625);

HAnimJoint620->addChildren(*HAnimSegment621);

CHAnimJoint* HAnimJoint628 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint628->setName("t1");
HAnimJoint628->setDEF("hanim_t1");
HAnimJoint628->setCenter(new float[3]{-0.0002,-0.1156,1.2109});
HAnimJoint628->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint628->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment629 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment629->setName("SEGMENT_FOR_t1");
HAnimSegment629->setDEF("hanim_SEGMENT_FOR_t1");
CTouchSensor* TouchSensor630 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor630->setDescription("joint t1 segment SEGMENT_FOR_t1");
HAnimSegment629->addChildren(*TouchSensor630);

CTransform* Transform631 = (CTransform *)(m_pScene.createNode("Transform"));
Transform631->setTranslation(new float[3]{-0.0002,-0.1156,1.2109});
CShape* Shape632 = (CShape *)(m_pScene.createNode("Shape"));
Shape632->setUSE("JointShape");
Transform631->addChild(*Shape632);

HAnimSegment629->addChildren(*Transform631);

CHAnimSite* HAnimSite633 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite633->setName("SEGMENT_FOR_t1_tip");
HAnimSite633->setDEF("hanim_SEGMENT_FOR_t1_tip");
CTransform* Transform634 = (CTransform *)(m_pScene.createNode("Transform"));
Transform634->setTranslation(new float[3]{-0.0002,-0.1156,1.2109});
CShape* Shape635 = (CShape *)(m_pScene.createNode("Shape"));
Shape635->setUSE("SiteShape");
Transform634->addChild(*Shape635);

HAnimSite633->addChildren(*Transform634);

HAnimSegment629->addChildren(*HAnimSite633);

HAnimJoint628->addChildren(*HAnimSegment629);

CHAnimJoint* HAnimJoint636 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint636->setName("c7");
HAnimJoint636->setDEF("hanim_c7");
HAnimJoint636->setCenter(new float[3]{-0.0002,-0.1169,1.2368});
HAnimJoint636->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint636->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment637 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment637->setName("SEGMENT_FOR_c7");
HAnimSegment637->setDEF("hanim_SEGMENT_FOR_c7");
CTouchSensor* TouchSensor638 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor638->setDescription("joint c7 segment SEGMENT_FOR_c7");
HAnimSegment637->addChildren(*TouchSensor638);

CTransform* Transform639 = (CTransform *)(m_pScene.createNode("Transform"));
Transform639->setTranslation(new float[3]{-0.0002,-0.1169,1.2368});
CShape* Shape640 = (CShape *)(m_pScene.createNode("Shape"));
Shape640->setUSE("JointShape");
Transform639->addChild(*Shape640);

HAnimSegment637->addChildren(*Transform639);

CHAnimSite* HAnimSite641 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite641->setName("SEGMENT_FOR_c7_tip");
HAnimSite641->setDEF("hanim_SEGMENT_FOR_c7_tip");
CTransform* Transform642 = (CTransform *)(m_pScene.createNode("Transform"));
Transform642->setTranslation(new float[3]{-0.0002,-0.1169,1.2368});
CShape* Shape643 = (CShape *)(m_pScene.createNode("Shape"));
Shape643->setUSE("SiteShape");
Transform642->addChild(*Shape643);

HAnimSite641->addChildren(*Transform642);

HAnimSegment637->addChildren(*HAnimSite641);

HAnimJoint636->addChildren(*HAnimSegment637);

CHAnimJoint* HAnimJoint644 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint644->setName("c6");
HAnimJoint644->setDEF("hanim_c6");
HAnimJoint644->setCenter(new float[3]{-0.0002,-0.1169,1.249});
HAnimJoint644->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint644->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment645 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment645->setName("SEGMENT_FOR_c6");
HAnimSegment645->setDEF("hanim_SEGMENT_FOR_c6");
CTouchSensor* TouchSensor646 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor646->setDescription("joint c6 segment SEGMENT_FOR_c6");
HAnimSegment645->addChildren(*TouchSensor646);

CTransform* Transform647 = (CTransform *)(m_pScene.createNode("Transform"));
Transform647->setTranslation(new float[3]{-0.0002,-0.1169,1.249});
CShape* Shape648 = (CShape *)(m_pScene.createNode("Shape"));
Shape648->setUSE("JointShape");
Transform647->addChild(*Shape648);

HAnimSegment645->addChildren(*Transform647);

CHAnimSite* HAnimSite649 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite649->setName("SEGMENT_FOR_c6_tip");
HAnimSite649->setDEF("hanim_SEGMENT_FOR_c6_tip");
CTransform* Transform650 = (CTransform *)(m_pScene.createNode("Transform"));
Transform650->setTranslation(new float[3]{-0.0002,-0.1169,1.249});
CShape* Shape651 = (CShape *)(m_pScene.createNode("Shape"));
Shape651->setUSE("SiteShape");
Transform650->addChild(*Shape651);

HAnimSite649->addChildren(*Transform650);

HAnimSegment645->addChildren(*HAnimSite649);

HAnimJoint644->addChildren(*HAnimSegment645);

CHAnimJoint* HAnimJoint652 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint652->setName("c5");
HAnimJoint652->setDEF("hanim_c5");
HAnimJoint652->setCenter(new float[3]{-0.0002,-0.1169,1.2613});
HAnimJoint652->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint652->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment653 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment653->setName("SEGMENT_FOR_c5");
HAnimSegment653->setDEF("hanim_SEGMENT_FOR_c5");
CTouchSensor* TouchSensor654 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor654->setDescription("joint c5 segment SEGMENT_FOR_c5");
HAnimSegment653->addChildren(*TouchSensor654);

CTransform* Transform655 = (CTransform *)(m_pScene.createNode("Transform"));
Transform655->setTranslation(new float[3]{-0.0002,-0.1169,1.2613});
CShape* Shape656 = (CShape *)(m_pScene.createNode("Shape"));
Shape656->setUSE("JointShape");
Transform655->addChild(*Shape656);

HAnimSegment653->addChildren(*Transform655);

CHAnimSite* HAnimSite657 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite657->setName("SEGMENT_FOR_c5_tip");
HAnimSite657->setDEF("hanim_SEGMENT_FOR_c5_tip");
CTransform* Transform658 = (CTransform *)(m_pScene.createNode("Transform"));
Transform658->setTranslation(new float[3]{-0.0002,-0.1169,1.2613});
CShape* Shape659 = (CShape *)(m_pScene.createNode("Shape"));
Shape659->setUSE("SiteShape");
Transform658->addChild(*Shape659);

HAnimSite657->addChildren(*Transform658);

HAnimSegment653->addChildren(*HAnimSite657);

HAnimJoint652->addChildren(*HAnimSegment653);

CHAnimJoint* HAnimJoint660 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint660->setName("c4");
HAnimJoint660->setDEF("hanim_c4");
HAnimJoint660->setCenter(new float[3]{-0.0002,-0.1169,1.2737});
HAnimJoint660->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint660->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment661 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment661->setName("SEGMENT_FOR_c4");
HAnimSegment661->setDEF("hanim_SEGMENT_FOR_c4");
CTouchSensor* TouchSensor662 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor662->setDescription("joint c4 segment SEGMENT_FOR_c4");
HAnimSegment661->addChildren(*TouchSensor662);

CTransform* Transform663 = (CTransform *)(m_pScene.createNode("Transform"));
Transform663->setTranslation(new float[3]{-0.0002,-0.1169,1.2737});
CShape* Shape664 = (CShape *)(m_pScene.createNode("Shape"));
Shape664->setUSE("JointShape");
Transform663->addChild(*Shape664);

HAnimSegment661->addChildren(*Transform663);

CHAnimSite* HAnimSite665 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite665->setName("SEGMENT_FOR_c4_tip");
HAnimSite665->setDEF("hanim_SEGMENT_FOR_c4_tip");
CTransform* Transform666 = (CTransform *)(m_pScene.createNode("Transform"));
Transform666->setTranslation(new float[3]{-0.0002,-0.1169,1.2737});
CShape* Shape667 = (CShape *)(m_pScene.createNode("Shape"));
Shape667->setUSE("SiteShape");
Transform666->addChild(*Shape667);

HAnimSite665->addChildren(*Transform666);

HAnimSegment661->addChildren(*HAnimSite665);

HAnimJoint660->addChildren(*HAnimSegment661);

CHAnimJoint* HAnimJoint668 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint668->setName("c3");
HAnimJoint668->setDEF("hanim_c3");
HAnimJoint668->setCenter(new float[3]{-0.0002,-0.1169,1.2865});
HAnimJoint668->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint668->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment669 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment669->setName("SEGMENT_FOR_c3");
HAnimSegment669->setDEF("hanim_SEGMENT_FOR_c3");
CTouchSensor* TouchSensor670 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor670->setDescription("joint c3 segment SEGMENT_FOR_c3");
HAnimSegment669->addChildren(*TouchSensor670);

CTransform* Transform671 = (CTransform *)(m_pScene.createNode("Transform"));
Transform671->setTranslation(new float[3]{-0.0002,-0.1169,1.2865});
CShape* Shape672 = (CShape *)(m_pScene.createNode("Shape"));
Shape672->setUSE("JointShape");
Transform671->addChild(*Shape672);

HAnimSegment669->addChildren(*Transform671);

CHAnimSite* HAnimSite673 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite673->setName("SEGMENT_FOR_c3_tip");
HAnimSite673->setDEF("hanim_SEGMENT_FOR_c3_tip");
CTransform* Transform674 = (CTransform *)(m_pScene.createNode("Transform"));
Transform674->setTranslation(new float[3]{-0.0002,-0.1169,1.2865});
CShape* Shape675 = (CShape *)(m_pScene.createNode("Shape"));
Shape675->setUSE("SiteShape");
Transform674->addChild(*Shape675);

HAnimSite673->addChildren(*Transform674);

HAnimSegment669->addChildren(*HAnimSite673);

HAnimJoint668->addChildren(*HAnimSegment669);

CHAnimJoint* HAnimJoint676 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint676->setName("c2");
HAnimJoint676->setDEF("hanim_c2");
HAnimJoint676->setCenter(new float[3]{-0.0002,-0.1169,1.2982});
HAnimJoint676->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint676->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment677 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment677->setName("SEGMENT_FOR_c2");
HAnimSegment677->setDEF("hanim_SEGMENT_FOR_c2");
CTouchSensor* TouchSensor678 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor678->setDescription("joint c2 segment SEGMENT_FOR_c2");
HAnimSegment677->addChildren(*TouchSensor678);

CTransform* Transform679 = (CTransform *)(m_pScene.createNode("Transform"));
Transform679->setTranslation(new float[3]{-0.0002,-0.1169,1.2982});
CShape* Shape680 = (CShape *)(m_pScene.createNode("Shape"));
Shape680->setUSE("JointShape");
Transform679->addChild(*Shape680);

HAnimSegment677->addChildren(*Transform679);

CHAnimSite* HAnimSite681 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite681->setName("SEGMENT_FOR_c2_tip");
HAnimSite681->setDEF("hanim_SEGMENT_FOR_c2_tip");
CTransform* Transform682 = (CTransform *)(m_pScene.createNode("Transform"));
Transform682->setTranslation(new float[3]{-0.0002,-0.1169,1.2982});
CShape* Shape683 = (CShape *)(m_pScene.createNode("Shape"));
Shape683->setUSE("SiteShape");
Transform682->addChild(*Shape683);

HAnimSite681->addChildren(*Transform682);

HAnimSegment677->addChildren(*HAnimSite681);

HAnimJoint676->addChildren(*HAnimSegment677);

CHAnimJoint* HAnimJoint684 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint684->setName("c1");
HAnimJoint684->setDEF("hanim_c1");
HAnimJoint684->setCenter(new float[3]{-0.0002,-0.1169,1.3099});
HAnimJoint684->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint684->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment685 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment685->setName("SEGMENT_FOR_c1");
HAnimSegment685->setDEF("hanim_SEGMENT_FOR_c1");
CTouchSensor* TouchSensor686 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor686->setDescription("joint c1 segment SEGMENT_FOR_c1");
HAnimSegment685->addChildren(*TouchSensor686);

CTransform* Transform687 = (CTransform *)(m_pScene.createNode("Transform"));
Transform687->setTranslation(new float[3]{-0.0002,-0.1169,1.3099});
CShape* Shape688 = (CShape *)(m_pScene.createNode("Shape"));
Shape688->setUSE("JointShape");
Transform687->addChild(*Shape688);

HAnimSegment685->addChildren(*Transform687);

CHAnimSite* HAnimSite689 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite689->setName("SEGMENT_FOR_c1_tip");
HAnimSite689->setDEF("hanim_SEGMENT_FOR_c1_tip");
CTransform* Transform690 = (CTransform *)(m_pScene.createNode("Transform"));
Transform690->setTranslation(new float[3]{-0.0002,-0.1169,1.3099});
CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
Shape691->setUSE("SiteShape");
Transform690->addChild(*Shape691);

HAnimSite689->addChildren(*Transform690);

HAnimSegment685->addChildren(*HAnimSite689);

HAnimJoint684->addChildren(*HAnimSegment685);

CHAnimJoint* HAnimJoint692 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint692->setName("skull");
HAnimJoint692->setDEF("hanim_skull");
HAnimJoint692->setCenter(new float[3]{-0.0002,-0.1173,1.3041});
HAnimJoint692->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint692->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment693 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment693->setName("SEGMENT_FOR_skull");
HAnimSegment693->setDEF("hanim_SEGMENT_FOR_skull");
CTouchSensor* TouchSensor694 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor694->setDescription("joint skull segment SEGMENT_FOR_skull");
HAnimSegment693->addChildren(*TouchSensor694);

CTransform* Transform695 = (CTransform *)(m_pScene.createNode("Transform"));
Transform695->setTranslation(new float[3]{-0.0002,-0.1173,1.3041});
CShape* Shape696 = (CShape *)(m_pScene.createNode("Shape"));
Shape696->setUSE("JointShape");
Transform695->addChild(*Shape696);

HAnimSegment693->addChildren(*Transform695);

CHAnimSite* HAnimSite697 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite697->setName("SEGMENT_FOR_skull_tip");
HAnimSite697->setDEF("hanim_SEGMENT_FOR_skull_tip");
CTransform* Transform698 = (CTransform *)(m_pScene.createNode("Transform"));
Transform698->setTranslation(new float[3]{-0.0002,-0.1173,1.3041});
CShape* Shape699 = (CShape *)(m_pScene.createNode("Shape"));
Shape699->setUSE("SiteShape");
Transform698->addChild(*Shape699);

HAnimSite697->addChildren(*Transform698);

HAnimSegment693->addChildren(*HAnimSite697);

HAnimJoint692->addChildren(*HAnimSegment693);

CHAnimJoint* HAnimJoint700 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint700->setName("l_eyelid");
HAnimJoint700->setDEF("hanim_l_eyelid");
HAnimJoint700->setCenter(new float[3]{0.0503,-0.0689,1.4157});
HAnimJoint700->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint700->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment701 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment701->setName("SEGMENT_FOR_l_eyelid");
HAnimSegment701->setDEF("hanim_SEGMENT_FOR_l_eyelid");
CTouchSensor* TouchSensor702 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor702->setDescription("joint l_eyelid segment SEGMENT_FOR_l_eyelid");
HAnimSegment701->addChildren(*TouchSensor702);

CTransform* Transform703 = (CTransform *)(m_pScene.createNode("Transform"));
Transform703->setTranslation(new float[3]{0.0503,-0.0689,1.4157});
CShape* Shape704 = (CShape *)(m_pScene.createNode("Shape"));
Shape704->setUSE("JointShape");
Transform703->addChild(*Shape704);

HAnimSegment701->addChildren(*Transform703);

CHAnimSite* HAnimSite705 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite705->setName("SEGMENT_FOR_l_eyelid_tip");
HAnimSite705->setDEF("hanim_SEGMENT_FOR_l_eyelid_tip");
CTransform* Transform706 = (CTransform *)(m_pScene.createNode("Transform"));
Transform706->setTranslation(new float[3]{0.0503,-0.0689,1.4157});
CShape* Shape707 = (CShape *)(m_pScene.createNode("Shape"));
Shape707->setUSE("SiteShape");
Transform706->addChild(*Shape707);

HAnimSite705->addChildren(*Transform706);

HAnimSegment701->addChildren(*HAnimSite705);

HAnimJoint700->addChildren(*HAnimSegment701);

HAnimJoint692->addChildren(*HAnimJoint700);

CHAnimJoint* HAnimJoint708 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint708->setName("r_eyelid");
HAnimJoint708->setDEF("hanim_r_eyelid");
HAnimJoint708->setCenter(new float[3]{-0.0507,-0.0689,1.4157});
HAnimJoint708->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint708->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment709 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment709->setName("SEGMENT_FOR_r_eyelid");
HAnimSegment709->setDEF("hanim_SEGMENT_FOR_r_eyelid");
CTouchSensor* TouchSensor710 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor710->setDescription("joint r_eyelid segment SEGMENT_FOR_r_eyelid");
HAnimSegment709->addChildren(*TouchSensor710);

CTransform* Transform711 = (CTransform *)(m_pScene.createNode("Transform"));
Transform711->setTranslation(new float[3]{-0.0507,-0.0689,1.4157});
CShape* Shape712 = (CShape *)(m_pScene.createNode("Shape"));
Shape712->setUSE("JointShape");
Transform711->addChild(*Shape712);

HAnimSegment709->addChildren(*Transform711);

CHAnimSite* HAnimSite713 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite713->setName("SEGMENT_FOR_r_eyelid_tip");
HAnimSite713->setDEF("hanim_SEGMENT_FOR_r_eyelid_tip");
CTransform* Transform714 = (CTransform *)(m_pScene.createNode("Transform"));
Transform714->setTranslation(new float[3]{-0.0507,-0.0689,1.4157});
CShape* Shape715 = (CShape *)(m_pScene.createNode("Shape"));
Shape715->setUSE("SiteShape");
Transform714->addChild(*Shape715);

HAnimSite713->addChildren(*Transform714);

HAnimSegment709->addChildren(*HAnimSite713);

HAnimJoint708->addChildren(*HAnimSegment709);

HAnimJoint692->addChildren(*HAnimJoint708);

CHAnimJoint* HAnimJoint716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint716->setName("l_eyeball");
HAnimJoint716->setDEF("hanim_l_eyeball");
HAnimJoint716->setCenter(new float[3]{0.0479,-0.0188,1.3963});
HAnimJoint716->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint716->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment717 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment717->setName("SEGMENT_FOR_l_eyeball");
HAnimSegment717->setDEF("hanim_SEGMENT_FOR_l_eyeball");
CTouchSensor* TouchSensor718 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor718->setDescription("joint l_eyeball segment SEGMENT_FOR_l_eyeball");
HAnimSegment717->addChildren(*TouchSensor718);

CTransform* Transform719 = (CTransform *)(m_pScene.createNode("Transform"));
Transform719->setTranslation(new float[3]{0.0479,-0.0188,1.3963});
CShape* Shape720 = (CShape *)(m_pScene.createNode("Shape"));
Shape720->setUSE("JointShape");
Transform719->addChild(*Shape720);

HAnimSegment717->addChildren(*Transform719);

CHAnimSite* HAnimSite721 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite721->setName("SEGMENT_FOR_l_eyeball_tip");
HAnimSite721->setDEF("hanim_SEGMENT_FOR_l_eyeball_tip");
CTransform* Transform722 = (CTransform *)(m_pScene.createNode("Transform"));
Transform722->setTranslation(new float[3]{0.0479,-0.0188,1.3963});
CShape* Shape723 = (CShape *)(m_pScene.createNode("Shape"));
Shape723->setUSE("SiteShape");
Transform722->addChild(*Shape723);

HAnimSite721->addChildren(*Transform722);

HAnimSegment717->addChildren(*HAnimSite721);

HAnimJoint716->addChildren(*HAnimSegment717);

HAnimJoint692->addChildren(*HAnimJoint716);

CHAnimJoint* HAnimJoint724 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint724->setName("r_eyeball");
HAnimJoint724->setDEF("hanim_r_eyeball");
HAnimJoint724->setCenter(new float[3]{-0.0483,-0.0188,1.3963});
HAnimJoint724->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint724->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment725 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment725->setName("SEGMENT_FOR_r_eyeball");
HAnimSegment725->setDEF("hanim_SEGMENT_FOR_r_eyeball");
CTouchSensor* TouchSensor726 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor726->setDescription("joint r_eyeball segment SEGMENT_FOR_r_eyeball");
HAnimSegment725->addChildren(*TouchSensor726);

CTransform* Transform727 = (CTransform *)(m_pScene.createNode("Transform"));
Transform727->setTranslation(new float[3]{-0.0483,-0.0188,1.3963});
CShape* Shape728 = (CShape *)(m_pScene.createNode("Shape"));
Shape728->setUSE("JointShape");
Transform727->addChild(*Shape728);

HAnimSegment725->addChildren(*Transform727);

CHAnimSite* HAnimSite729 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite729->setName("SEGMENT_FOR_r_eyeball_tip");
HAnimSite729->setDEF("hanim_SEGMENT_FOR_r_eyeball_tip");
CTransform* Transform730 = (CTransform *)(m_pScene.createNode("Transform"));
Transform730->setTranslation(new float[3]{-0.0483,-0.0188,1.3963});
CShape* Shape731 = (CShape *)(m_pScene.createNode("Shape"));
Shape731->setUSE("SiteShape");
Transform730->addChild(*Shape731);

HAnimSite729->addChildren(*Transform730);

HAnimSegment725->addChildren(*HAnimSite729);

HAnimJoint724->addChildren(*HAnimSegment725);

HAnimJoint692->addChildren(*HAnimJoint724);

CHAnimJoint* HAnimJoint732 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint732->setName("l_eyebrow");
HAnimJoint732->setDEF("hanim_l_eyebrow");
HAnimJoint732->setCenter(new float[3]{0.0216,0.0051,1.4053});
HAnimJoint732->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint732->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment733 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment733->setName("SEGMENT_FOR_l_eyebrow");
HAnimSegment733->setDEF("hanim_SEGMENT_FOR_l_eyebrow");
CTouchSensor* TouchSensor734 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor734->setDescription("joint l_eyebrow segment SEGMENT_FOR_l_eyebrow");
HAnimSegment733->addChildren(*TouchSensor734);

CTransform* Transform735 = (CTransform *)(m_pScene.createNode("Transform"));
Transform735->setTranslation(new float[3]{0.0216,0.0051,1.4053});
CShape* Shape736 = (CShape *)(m_pScene.createNode("Shape"));
Shape736->setUSE("JointShape");
Transform735->addChild(*Shape736);

HAnimSegment733->addChildren(*Transform735);

CHAnimSite* HAnimSite737 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite737->setName("SEGMENT_FOR_l_eyebrow_tip");
HAnimSite737->setDEF("hanim_SEGMENT_FOR_l_eyebrow_tip");
CTransform* Transform738 = (CTransform *)(m_pScene.createNode("Transform"));
Transform738->setTranslation(new float[3]{0.0216,0.0051,1.4053});
CShape* Shape739 = (CShape *)(m_pScene.createNode("Shape"));
Shape739->setUSE("SiteShape");
Transform738->addChild(*Shape739);

HAnimSite737->addChildren(*Transform738);

HAnimSegment733->addChildren(*HAnimSite737);

HAnimJoint732->addChildren(*HAnimSegment733);

HAnimJoint692->addChildren(*HAnimJoint732);

CHAnimJoint* HAnimJoint740 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint740->setName("r_eyebrow");
HAnimJoint740->setDEF("hanim_r_eyebrow");
HAnimJoint740->setCenter(new float[3]{-0.0219,0.0051,1.4053});
HAnimJoint740->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint740->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment741 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment741->setName("SEGMENT_FOR_r_eyebrow");
HAnimSegment741->setDEF("hanim_SEGMENT_FOR_r_eyebrow");
CTouchSensor* TouchSensor742 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor742->setDescription("joint r_eyebrow segment SEGMENT_FOR_r_eyebrow");
HAnimSegment741->addChildren(*TouchSensor742);

CTransform* Transform743 = (CTransform *)(m_pScene.createNode("Transform"));
Transform743->setTranslation(new float[3]{-0.0219,0.0051,1.4053});
CShape* Shape744 = (CShape *)(m_pScene.createNode("Shape"));
Shape744->setUSE("JointShape");
Transform743->addChild(*Shape744);

HAnimSegment741->addChildren(*Transform743);

CHAnimSite* HAnimSite745 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite745->setName("SEGMENT_FOR_r_eyebrow_tip");
HAnimSite745->setDEF("hanim_SEGMENT_FOR_r_eyebrow_tip");
CTransform* Transform746 = (CTransform *)(m_pScene.createNode("Transform"));
Transform746->setTranslation(new float[3]{-0.0219,0.0051,1.4053});
CShape* Shape747 = (CShape *)(m_pScene.createNode("Shape"));
Shape747->setUSE("SiteShape");
Transform746->addChild(*Shape747);

HAnimSite745->addChildren(*Transform746);

HAnimSegment741->addChildren(*HAnimSite745);

HAnimJoint740->addChildren(*HAnimSegment741);

HAnimJoint692->addChildren(*HAnimJoint740);

CHAnimJoint* HAnimJoint748 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint748->setName("jaw");
HAnimJoint748->setDEF("hanim_jaw");
HAnimJoint748->setCenter(new float[3]{-0.0002,-0.0865,1.3043});
HAnimJoint748->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint748->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment749 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment749->setName("SEGMENT_FOR_jaw");
HAnimSegment749->setDEF("hanim_SEGMENT_FOR_jaw");
CTouchSensor* TouchSensor750 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor750->setDescription("joint jaw segment SEGMENT_FOR_jaw");
HAnimSegment749->addChildren(*TouchSensor750);

CTransform* Transform751 = (CTransform *)(m_pScene.createNode("Transform"));
Transform751->setTranslation(new float[3]{-0.0002,-0.0865,1.3043});
CShape* Shape752 = (CShape *)(m_pScene.createNode("Shape"));
Shape752->setUSE("JointShape");
Transform751->addChild(*Shape752);

HAnimSegment749->addChildren(*Transform751);

CHAnimSite* HAnimSite753 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite753->setName("SEGMENT_FOR_jaw_tip");
HAnimSite753->setDEF("hanim_SEGMENT_FOR_jaw_tip");
CTransform* Transform754 = (CTransform *)(m_pScene.createNode("Transform"));
Transform754->setTranslation(new float[3]{-0.0002,-0.0865,1.3043});
CShape* Shape755 = (CShape *)(m_pScene.createNode("Shape"));
Shape755->setUSE("SiteShape");
Transform754->addChild(*Shape755);

HAnimSite753->addChildren(*Transform754);

HAnimSegment749->addChildren(*HAnimSite753);

HAnimJoint748->addChildren(*HAnimSegment749);

HAnimJoint692->addChildren(*HAnimJoint748);

HAnimJoint684->addChildren(*HAnimJoint692);

HAnimJoint676->addChildren(*HAnimJoint684);

HAnimJoint668->addChildren(*HAnimJoint676);

HAnimJoint660->addChildren(*HAnimJoint668);

HAnimJoint652->addChildren(*HAnimJoint660);

HAnimJoint644->addChildren(*HAnimJoint652);

HAnimJoint636->addChildren(*HAnimJoint644);

HAnimJoint628->addChildren(*HAnimJoint636);

CHAnimJoint* HAnimJoint756 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint756->setName("l_clavicle");
HAnimJoint756->setDEF("hanim_l_clavicle");
HAnimJoint756->setCenter(new float[3]{0.1228,-0.1148,1.1833});
HAnimJoint756->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint756->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment757 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment757->setName("SEGMENT_FOR_l_clavicle");
HAnimSegment757->setDEF("hanim_SEGMENT_FOR_l_clavicle");
CTouchSensor* TouchSensor758 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor758->setDescription("joint l_clavicle segment SEGMENT_FOR_l_clavicle");
HAnimSegment757->addChildren(*TouchSensor758);

CTransform* Transform759 = (CTransform *)(m_pScene.createNode("Transform"));
Transform759->setTranslation(new float[3]{0.1228,-0.1148,1.1833});
CShape* Shape760 = (CShape *)(m_pScene.createNode("Shape"));
Shape760->setUSE("JointShape");
Transform759->addChild(*Shape760);

HAnimSegment757->addChildren(*Transform759);

CHAnimSite* HAnimSite761 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite761->setName("SEGMENT_FOR_l_clavicle_tip");
HAnimSite761->setDEF("hanim_SEGMENT_FOR_l_clavicle_tip");
CTransform* Transform762 = (CTransform *)(m_pScene.createNode("Transform"));
Transform762->setTranslation(new float[3]{0.1228,-0.1148,1.1833});
CShape* Shape763 = (CShape *)(m_pScene.createNode("Shape"));
Shape763->setUSE("SiteShape");
Transform762->addChild(*Shape763);

HAnimSite761->addChildren(*Transform762);

HAnimSegment757->addChildren(*HAnimSite761);

HAnimJoint756->addChildren(*HAnimSegment757);

CHAnimJoint* HAnimJoint764 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint764->setName("l_scapula");
HAnimJoint764->setDEF("hanim_l_scapula");
HAnimJoint764->setCenter(new float[3]{0.0383,-0.1157,1.2001});
HAnimJoint764->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint764->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment765 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment765->setName("SEGMENT_FOR_l_scapula");
HAnimSegment765->setDEF("hanim_SEGMENT_FOR_l_scapula");
CTouchSensor* TouchSensor766 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor766->setDescription("joint l_scapula segment SEGMENT_FOR_l_scapula");
HAnimSegment765->addChildren(*TouchSensor766);

CTransform* Transform767 = (CTransform *)(m_pScene.createNode("Transform"));
Transform767->setTranslation(new float[3]{0.0383,-0.1157,1.2001});
CShape* Shape768 = (CShape *)(m_pScene.createNode("Shape"));
Shape768->setUSE("JointShape");
Transform767->addChild(*Shape768);

HAnimSegment765->addChildren(*Transform767);

CHAnimSite* HAnimSite769 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite769->setName("SEGMENT_FOR_l_scapula_tip");
HAnimSite769->setDEF("hanim_SEGMENT_FOR_l_scapula_tip");
CTransform* Transform770 = (CTransform *)(m_pScene.createNode("Transform"));
Transform770->setTranslation(new float[3]{0.0383,-0.1157,1.2001});
CShape* Shape771 = (CShape *)(m_pScene.createNode("Shape"));
Shape771->setUSE("SiteShape");
Transform770->addChild(*Shape771);

HAnimSite769->addChildren(*Transform770);

HAnimSegment765->addChildren(*HAnimSite769);

HAnimJoint764->addChildren(*HAnimSegment765);

CHAnimJoint* HAnimJoint772 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint772->setName("l_upperarm");
HAnimJoint772->setDEF("hanim_l_upperarm");
HAnimJoint772->setCenter(new float[3]{0.1649,-0.1051,1.17});
HAnimJoint772->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint772->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment773 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment773->setName("SEGMENT_FOR_l_upperarm");
HAnimSegment773->setDEF("hanim_SEGMENT_FOR_l_upperarm");
CTouchSensor* TouchSensor774 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor774->setDescription("joint l_upperarm segment SEGMENT_FOR_l_upperarm");
HAnimSegment773->addChildren(*TouchSensor774);

CTransform* Transform775 = (CTransform *)(m_pScene.createNode("Transform"));
Transform775->setTranslation(new float[3]{0.1649,-0.1051,1.17});
CShape* Shape776 = (CShape *)(m_pScene.createNode("Shape"));
Shape776->setUSE("JointShape");
Transform775->addChild(*Shape776);

HAnimSegment773->addChildren(*Transform775);

CHAnimSite* HAnimSite777 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite777->setName("SEGMENT_FOR_l_upperarm_tip");
HAnimSite777->setDEF("hanim_SEGMENT_FOR_l_upperarm_tip");
CTransform* Transform778 = (CTransform *)(m_pScene.createNode("Transform"));
Transform778->setTranslation(new float[3]{0.1649,-0.1051,1.17});
CShape* Shape779 = (CShape *)(m_pScene.createNode("Shape"));
Shape779->setUSE("SiteShape");
Transform778->addChild(*Shape779);

HAnimSite777->addChildren(*Transform778);

HAnimSegment773->addChildren(*HAnimSite777);

HAnimJoint772->addChildren(*HAnimSegment773);

CHAnimJoint* HAnimJoint780 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint780->setName("l_forearm");
HAnimJoint780->setDEF("hanim_l_forearm");
HAnimJoint780->setCenter(new float[3]{0.1819,-0.1075,0.9202});
HAnimJoint780->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint780->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment781 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment781->setName("SEGMENT_FOR_l_forearm");
HAnimSegment781->setDEF("hanim_SEGMENT_FOR_l_forearm");
CTouchSensor* TouchSensor782 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor782->setDescription("joint l_forearm segment SEGMENT_FOR_l_forearm");
HAnimSegment781->addChildren(*TouchSensor782);

CTransform* Transform783 = (CTransform *)(m_pScene.createNode("Transform"));
Transform783->setTranslation(new float[3]{0.1819,-0.1075,0.9202});
CShape* Shape784 = (CShape *)(m_pScene.createNode("Shape"));
Shape784->setUSE("JointShape");
Transform783->addChild(*Shape784);

HAnimSegment781->addChildren(*Transform783);

CHAnimSite* HAnimSite785 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite785->setName("SEGMENT_FOR_l_forearm_tip");
HAnimSite785->setDEF("hanim_SEGMENT_FOR_l_forearm_tip");
CTransform* Transform786 = (CTransform *)(m_pScene.createNode("Transform"));
Transform786->setTranslation(new float[3]{0.1819,-0.1075,0.9202});
CShape* Shape787 = (CShape *)(m_pScene.createNode("Shape"));
Shape787->setUSE("SiteShape");
Transform786->addChild(*Shape787);

HAnimSite785->addChildren(*Transform786);

HAnimSegment781->addChildren(*HAnimSite785);

HAnimJoint780->addChildren(*HAnimSegment781);

CHAnimJoint* HAnimJoint788 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint788->setName("l_carpal");
HAnimJoint788->setDEF("hanim_l_carpal");
HAnimJoint788->setCenter(new float[3]{0.1818,-0.1069,0.7157});
HAnimJoint788->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint788->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment789 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment789->setName("SEGMENT_FOR_l_carpal");
HAnimSegment789->setDEF("hanim_SEGMENT_FOR_l_carpal");
CTouchSensor* TouchSensor790 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor790->setDescription("joint l_carpal segment SEGMENT_FOR_l_carpal");
HAnimSegment789->addChildren(*TouchSensor790);

CTransform* Transform791 = (CTransform *)(m_pScene.createNode("Transform"));
Transform791->setTranslation(new float[3]{0.1818,-0.1069,0.7157});
CShape* Shape792 = (CShape *)(m_pScene.createNode("Shape"));
Shape792->setUSE("JointShape");
Transform791->addChild(*Shape792);

HAnimSegment789->addChildren(*Transform791);

CHAnimSite* HAnimSite793 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite793->setName("SEGMENT_FOR_l_carpal_tip");
HAnimSite793->setDEF("hanim_SEGMENT_FOR_l_carpal_tip");
CTransform* Transform794 = (CTransform *)(m_pScene.createNode("Transform"));
Transform794->setTranslation(new float[3]{0.1818,-0.1069,0.7157});
CShape* Shape795 = (CShape *)(m_pScene.createNode("Shape"));
Shape795->setUSE("SiteShape");
Transform794->addChild(*Shape795);

HAnimSite793->addChildren(*Transform794);

HAnimSegment789->addChildren(*HAnimSite793);

HAnimJoint788->addChildren(*HAnimSegment789);

CHAnimJoint* HAnimJoint796 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint796->setName("l_trapezium");
HAnimJoint796->setDEF("hanim_l_trapezium");
HAnimJoint796->setCenter(new float[3]{0.1811,-0.0826,0.6975});
HAnimJoint796->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint796->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment797 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment797->setName("SEGMENT_FOR_l_trapezium");
HAnimSegment797->setDEF("hanim_SEGMENT_FOR_l_trapezium");
CTouchSensor* TouchSensor798 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor798->setDescription("joint l_trapezium segment SEGMENT_FOR_l_trapezium");
HAnimSegment797->addChildren(*TouchSensor798);

CTransform* Transform799 = (CTransform *)(m_pScene.createNode("Transform"));
Transform799->setTranslation(new float[3]{0.1811,-0.0826,0.6975});
CShape* Shape800 = (CShape *)(m_pScene.createNode("Shape"));
Shape800->setUSE("JointShape");
Transform799->addChild(*Shape800);

HAnimSegment797->addChildren(*Transform799);

CHAnimSite* HAnimSite801 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite801->setName("SEGMENT_FOR_l_trapezium_tip");
HAnimSite801->setDEF("hanim_SEGMENT_FOR_l_trapezium_tip");
CTransform* Transform802 = (CTransform *)(m_pScene.createNode("Transform"));
Transform802->setTranslation(new float[3]{0.1811,-0.0826,0.6975});
CShape* Shape803 = (CShape *)(m_pScene.createNode("Shape"));
Shape803->setUSE("SiteShape");
Transform802->addChild(*Shape803);

HAnimSite801->addChildren(*Transform802);

HAnimSegment797->addChildren(*HAnimSite801);

HAnimJoint796->addChildren(*HAnimSegment797);

CHAnimJoint* HAnimJoint804 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint804->setName("l_metacarpal_1");
HAnimJoint804->setDEF("hanim_l_metacarpal_1");
HAnimJoint804->setCenter(new float[3]{0.1803,-0.0759,0.684});
HAnimJoint804->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint804->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment805 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment805->setName("SEGMENT_FOR_l_metacarpal_1");
HAnimSegment805->setDEF("hanim_SEGMENT_FOR_l_metacarpal_1");
CTouchSensor* TouchSensor806 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor806->setDescription("joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1");
HAnimSegment805->addChildren(*TouchSensor806);

CTransform* Transform807 = (CTransform *)(m_pScene.createNode("Transform"));
Transform807->setTranslation(new float[3]{0.1803,-0.0759,0.684});
CShape* Shape808 = (CShape *)(m_pScene.createNode("Shape"));
Shape808->setUSE("JointShape");
Transform807->addChild(*Shape808);

HAnimSegment805->addChildren(*Transform807);

CHAnimSite* HAnimSite809 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite809->setName("SEGMENT_FOR_l_metacarpal_1_tip");
HAnimSite809->setDEF("hanim_SEGMENT_FOR_l_metacarpal_1_tip");
CTransform* Transform810 = (CTransform *)(m_pScene.createNode("Transform"));
Transform810->setTranslation(new float[3]{0.1803,-0.0759,0.684});
CShape* Shape811 = (CShape *)(m_pScene.createNode("Shape"));
Shape811->setUSE("SiteShape");
Transform810->addChild(*Shape811);

HAnimSite809->addChildren(*Transform810);

HAnimSegment805->addChildren(*HAnimSite809);

HAnimJoint804->addChildren(*HAnimSegment805);

CHAnimJoint* HAnimJoint812 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint812->setName("l_carpal_proximal_phalanx_1");
HAnimJoint812->setDEF("hanim_l_carpal_proximal_phalanx_1");
HAnimJoint812->setCenter(new float[3]{0.1809,-0.0661,0.6642});
HAnimJoint812->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint812->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment813->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_1");
HAnimSegment813->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1");
CTouchSensor* TouchSensor814 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor814->setDescription("joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1");
HAnimSegment813->addChildren(*TouchSensor814);

CTransform* Transform815 = (CTransform *)(m_pScene.createNode("Transform"));
Transform815->setTranslation(new float[3]{0.1809,-0.0661,0.6642});
CShape* Shape816 = (CShape *)(m_pScene.createNode("Shape"));
Shape816->setUSE("JointShape");
Transform815->addChild(*Shape816);

HAnimSegment813->addChildren(*Transform815);

CHAnimSite* HAnimSite817 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite817->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip");
HAnimSite817->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip");
CTransform* Transform818 = (CTransform *)(m_pScene.createNode("Transform"));
Transform818->setTranslation(new float[3]{0.1809,-0.0661,0.6642});
CShape* Shape819 = (CShape *)(m_pScene.createNode("Shape"));
Shape819->setUSE("SiteShape");
Transform818->addChild(*Shape819);

HAnimSite817->addChildren(*Transform818);

HAnimSegment813->addChildren(*HAnimSite817);

HAnimJoint812->addChildren(*HAnimSegment813);

CHAnimJoint* HAnimJoint820 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint820->setName("l_carpal_distal_phalanx_1");
HAnimJoint820->setDEF("hanim_l_carpal_distal_phalanx_1");
HAnimJoint820->setCenter(new float[3]{0.1825,-0.0522,0.6455});
HAnimJoint820->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint820->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment821 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment821->setName("SEGMENT_FOR_l_carpal_distal_phalanx_1");
HAnimSegment821->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1");
CTouchSensor* TouchSensor822 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor822->setDescription("joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1");
HAnimSegment821->addChildren(*TouchSensor822);

CTransform* Transform823 = (CTransform *)(m_pScene.createNode("Transform"));
Transform823->setTranslation(new float[3]{0.1825,-0.0522,0.6455});
CShape* Shape824 = (CShape *)(m_pScene.createNode("Shape"));
Shape824->setUSE("JointShape");
Transform823->addChild(*Shape824);

HAnimSegment821->addChildren(*Transform823);

CHAnimSite* HAnimSite825 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite825->setName("SEGMENT_FOR_l_carpal_distal_phalanx_1_tip");
HAnimSite825->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip");
CTransform* Transform826 = (CTransform *)(m_pScene.createNode("Transform"));
Transform826->setTranslation(new float[3]{0.1825,-0.0522,0.6455});
CShape* Shape827 = (CShape *)(m_pScene.createNode("Shape"));
Shape827->setUSE("SiteShape");
Transform826->addChild(*Shape827);

HAnimSite825->addChildren(*Transform826);

HAnimSegment821->addChildren(*HAnimSite825);

HAnimJoint820->addChildren(*HAnimSegment821);

HAnimJoint812->addChildren(*HAnimJoint820);

HAnimJoint804->addChildren(*HAnimJoint812);

HAnimJoint796->addChildren(*HAnimJoint804);

HAnimJoint788->addChildren(*HAnimJoint796);

CHAnimJoint* HAnimJoint828 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint828->setName("l_trapezoid");
HAnimJoint828->setDEF("hanim_l_trapezoid");
HAnimJoint828->setCenter(new float[3]{0.1811,-0.0935,0.6984});
HAnimJoint828->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint828->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment829->setName("SEGMENT_FOR_l_trapezoid");
HAnimSegment829->setDEF("hanim_SEGMENT_FOR_l_trapezoid");
CTouchSensor* TouchSensor830 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor830->setDescription("joint l_trapezoid segment SEGMENT_FOR_l_trapezoid");
HAnimSegment829->addChildren(*TouchSensor830);

CTransform* Transform831 = (CTransform *)(m_pScene.createNode("Transform"));
Transform831->setTranslation(new float[3]{0.1811,-0.0935,0.6984});
CShape* Shape832 = (CShape *)(m_pScene.createNode("Shape"));
Shape832->setUSE("JointShape");
Transform831->addChild(*Shape832);

HAnimSegment829->addChildren(*Transform831);

CHAnimSite* HAnimSite833 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite833->setName("SEGMENT_FOR_l_trapezoid_tip");
HAnimSite833->setDEF("hanim_SEGMENT_FOR_l_trapezoid_tip");
CTransform* Transform834 = (CTransform *)(m_pScene.createNode("Transform"));
Transform834->setTranslation(new float[3]{0.1811,-0.0935,0.6984});
CShape* Shape835 = (CShape *)(m_pScene.createNode("Shape"));
Shape835->setUSE("SiteShape");
Transform834->addChild(*Shape835);

HAnimSite833->addChildren(*Transform834);

HAnimSegment829->addChildren(*HAnimSite833);

HAnimJoint828->addChildren(*HAnimSegment829);

CHAnimJoint* HAnimJoint836 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint836->setName("l_metacarpal_2");
HAnimJoint836->setDEF("hanim_l_metacarpal_2");
HAnimJoint836->setCenter(new float[3]{0.1811,-0.0922,0.679});
HAnimJoint836->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint836->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment837 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment837->setName("SEGMENT_FOR_l_metacarpal_2");
HAnimSegment837->setDEF("hanim_SEGMENT_FOR_l_metacarpal_2");
CTouchSensor* TouchSensor838 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor838->setDescription("joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2");
HAnimSegment837->addChildren(*TouchSensor838);

CTransform* Transform839 = (CTransform *)(m_pScene.createNode("Transform"));
Transform839->setTranslation(new float[3]{0.1811,-0.0922,0.679});
CShape* Shape840 = (CShape *)(m_pScene.createNode("Shape"));
Shape840->setUSE("JointShape");
Transform839->addChild(*Shape840);

HAnimSegment837->addChildren(*Transform839);

CHAnimSite* HAnimSite841 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite841->setName("SEGMENT_FOR_l_metacarpal_2_tip");
HAnimSite841->setDEF("hanim_SEGMENT_FOR_l_metacarpal_2_tip");
CTransform* Transform842 = (CTransform *)(m_pScene.createNode("Transform"));
Transform842->setTranslation(new float[3]{0.1811,-0.0922,0.679});
CShape* Shape843 = (CShape *)(m_pScene.createNode("Shape"));
Shape843->setUSE("SiteShape");
Transform842->addChild(*Shape843);

HAnimSite841->addChildren(*Transform842);

HAnimSegment837->addChildren(*HAnimSite841);

HAnimJoint836->addChildren(*HAnimSegment837);

CHAnimJoint* HAnimJoint844 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint844->setName("l_carpal_proximal_phalanx_2");
HAnimJoint844->setDEF("hanim_l_carpal_proximal_phalanx_2");
HAnimJoint844->setCenter(new float[3]{0.1836,-0.0868,0.6286});
HAnimJoint844->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint844->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment845 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment845->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_2");
HAnimSegment845->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2");
CTouchSensor* TouchSensor846 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor846->setDescription("joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2");
HAnimSegment845->addChildren(*TouchSensor846);

CTransform* Transform847 = (CTransform *)(m_pScene.createNode("Transform"));
Transform847->setTranslation(new float[3]{0.1836,-0.0868,0.6286});
CShape* Shape848 = (CShape *)(m_pScene.createNode("Shape"));
Shape848->setUSE("JointShape");
Transform847->addChild(*Shape848);

HAnimSegment845->addChildren(*Transform847);

CHAnimSite* HAnimSite849 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite849->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip");
HAnimSite849->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip");
CTransform* Transform850 = (CTransform *)(m_pScene.createNode("Transform"));
Transform850->setTranslation(new float[3]{0.1836,-0.0868,0.6286});
CShape* Shape851 = (CShape *)(m_pScene.createNode("Shape"));
Shape851->setUSE("SiteShape");
Transform850->addChild(*Shape851);

HAnimSite849->addChildren(*Transform850);

HAnimSegment845->addChildren(*HAnimSite849);

HAnimJoint844->addChildren(*HAnimSegment845);

CHAnimJoint* HAnimJoint852 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint852->setName("l_carpal_middle_phalanx_2");
HAnimJoint852->setDEF("hanim_l_carpal_middle_phalanx_2");
HAnimJoint852->setCenter(new float[3]{0.1815,-0.0877,0.5983});
HAnimJoint852->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint852->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment853 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment853->setName("SEGMENT_FOR_l_carpal_middle_phalanx_2");
HAnimSegment853->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2");
CTouchSensor* TouchSensor854 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor854->setDescription("joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2");
HAnimSegment853->addChildren(*TouchSensor854);

CTransform* Transform855 = (CTransform *)(m_pScene.createNode("Transform"));
Transform855->setTranslation(new float[3]{0.1815,-0.0877,0.5983});
CShape* Shape856 = (CShape *)(m_pScene.createNode("Shape"));
Shape856->setUSE("JointShape");
Transform855->addChild(*Shape856);

HAnimSegment853->addChildren(*Transform855);

CHAnimSite* HAnimSite857 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite857->setName("SEGMENT_FOR_l_carpal_middle_phalanx_2_tip");
HAnimSite857->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip");
CTransform* Transform858 = (CTransform *)(m_pScene.createNode("Transform"));
Transform858->setTranslation(new float[3]{0.1815,-0.0877,0.5983});
CShape* Shape859 = (CShape *)(m_pScene.createNode("Shape"));
Shape859->setUSE("SiteShape");
Transform858->addChild(*Shape859);

HAnimSite857->addChildren(*Transform858);

HAnimSegment853->addChildren(*HAnimSite857);

HAnimJoint852->addChildren(*HAnimSegment853);

CHAnimJoint* HAnimJoint860 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint860->setName("l_carpal_distal_phalanx_2");
HAnimJoint860->setDEF("hanim_l_carpal_distal_phalanx_2");
HAnimJoint860->setCenter(new float[3]{0.1805,-0.0885,0.5731});
HAnimJoint860->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint860->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment861 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment861->setName("SEGMENT_FOR_l_carpal_distal_phalanx_2");
HAnimSegment861->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2");
CTouchSensor* TouchSensor862 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor862->setDescription("joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2");
HAnimSegment861->addChildren(*TouchSensor862);

CTransform* Transform863 = (CTransform *)(m_pScene.createNode("Transform"));
Transform863->setTranslation(new float[3]{0.1805,-0.0885,0.5731});
CShape* Shape864 = (CShape *)(m_pScene.createNode("Shape"));
Shape864->setUSE("JointShape");
Transform863->addChild(*Shape864);

HAnimSegment861->addChildren(*Transform863);

CHAnimSite* HAnimSite865 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite865->setName("SEGMENT_FOR_l_carpal_distal_phalanx_2_tip");
HAnimSite865->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip");
CTransform* Transform866 = (CTransform *)(m_pScene.createNode("Transform"));
Transform866->setTranslation(new float[3]{0.1805,-0.0885,0.5731});
CShape* Shape867 = (CShape *)(m_pScene.createNode("Shape"));
Shape867->setUSE("SiteShape");
Transform866->addChild(*Shape867);

HAnimSite865->addChildren(*Transform866);

HAnimSegment861->addChildren(*HAnimSite865);

HAnimJoint860->addChildren(*HAnimSegment861);

HAnimJoint852->addChildren(*HAnimJoint860);

HAnimJoint844->addChildren(*HAnimJoint852);

HAnimJoint836->addChildren(*HAnimJoint844);

HAnimJoint828->addChildren(*HAnimJoint836);

HAnimJoint788->addChildren(*HAnimJoint828);

CHAnimJoint* HAnimJoint868 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint868->setName("l_capitate");
HAnimJoint868->setDEF("hanim_l_capitate");
HAnimJoint868->setCenter(new float[3]{0.1809,-0.1067,0.7});
HAnimJoint868->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint868->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment869 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment869->setName("SEGMENT_FOR_l_capitate");
HAnimSegment869->setDEF("hanim_SEGMENT_FOR_l_capitate");
CTouchSensor* TouchSensor870 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor870->setDescription("joint l_capitate segment SEGMENT_FOR_l_capitate");
HAnimSegment869->addChildren(*TouchSensor870);

CTransform* Transform871 = (CTransform *)(m_pScene.createNode("Transform"));
Transform871->setTranslation(new float[3]{0.1809,-0.1067,0.7});
CShape* Shape872 = (CShape *)(m_pScene.createNode("Shape"));
Shape872->setUSE("JointShape");
Transform871->addChild(*Shape872);

HAnimSegment869->addChildren(*Transform871);

CHAnimSite* HAnimSite873 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite873->setName("SEGMENT_FOR_l_capitate_tip");
HAnimSite873->setDEF("hanim_SEGMENT_FOR_l_capitate_tip");
CTransform* Transform874 = (CTransform *)(m_pScene.createNode("Transform"));
Transform874->setTranslation(new float[3]{0.1809,-0.1067,0.7});
CShape* Shape875 = (CShape *)(m_pScene.createNode("Shape"));
Shape875->setUSE("SiteShape");
Transform874->addChild(*Shape875);

HAnimSite873->addChildren(*Transform874);

HAnimSegment869->addChildren(*HAnimSite873);

HAnimJoint868->addChildren(*HAnimSegment869);

CHAnimJoint* HAnimJoint876 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint876->setName("l_metacarpal_3");
HAnimJoint876->setDEF("hanim_l_metacarpal_3");
HAnimJoint876->setCenter(new float[3]{0.1809,-0.1081,0.6772});
HAnimJoint876->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint876->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment877 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment877->setName("SEGMENT_FOR_l_metacarpal_3");
HAnimSegment877->setDEF("hanim_SEGMENT_FOR_l_metacarpal_3");
CTouchSensor* TouchSensor878 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor878->setDescription("joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3");
HAnimSegment877->addChildren(*TouchSensor878);

CTransform* Transform879 = (CTransform *)(m_pScene.createNode("Transform"));
Transform879->setTranslation(new float[3]{0.1809,-0.1081,0.6772});
CShape* Shape880 = (CShape *)(m_pScene.createNode("Shape"));
Shape880->setUSE("JointShape");
Transform879->addChild(*Shape880);

HAnimSegment877->addChildren(*Transform879);

CHAnimSite* HAnimSite881 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite881->setName("SEGMENT_FOR_l_metacarpal_3_tip");
HAnimSite881->setDEF("hanim_SEGMENT_FOR_l_metacarpal_3_tip");
CTransform* Transform882 = (CTransform *)(m_pScene.createNode("Transform"));
Transform882->setTranslation(new float[3]{0.1809,-0.1081,0.6772});
CShape* Shape883 = (CShape *)(m_pScene.createNode("Shape"));
Shape883->setUSE("SiteShape");
Transform882->addChild(*Shape883);

HAnimSite881->addChildren(*Transform882);

HAnimSegment877->addChildren(*HAnimSite881);

HAnimJoint876->addChildren(*HAnimSegment877);

CHAnimJoint* HAnimJoint884 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint884->setName("l_carpal_proximal_phalanx_3");
HAnimJoint884->setDEF("hanim_l_carpal_proximal_phalanx_3");
HAnimJoint884->setCenter(new float[3]{0.1835,-0.1058,0.6264});
HAnimJoint884->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint884->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment885 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment885->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_3");
HAnimSegment885->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3");
CTouchSensor* TouchSensor886 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor886->setDescription("joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3");
HAnimSegment885->addChildren(*TouchSensor886);

CTransform* Transform887 = (CTransform *)(m_pScene.createNode("Transform"));
Transform887->setTranslation(new float[3]{0.1835,-0.1058,0.6264});
CShape* Shape888 = (CShape *)(m_pScene.createNode("Shape"));
Shape888->setUSE("JointShape");
Transform887->addChild(*Shape888);

HAnimSegment885->addChildren(*Transform887);

CHAnimSite* HAnimSite889 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite889->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip");
HAnimSite889->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip");
CTransform* Transform890 = (CTransform *)(m_pScene.createNode("Transform"));
Transform890->setTranslation(new float[3]{0.1835,-0.1058,0.6264});
CShape* Shape891 = (CShape *)(m_pScene.createNode("Shape"));
Shape891->setUSE("SiteShape");
Transform890->addChild(*Shape891);

HAnimSite889->addChildren(*Transform890);

HAnimSegment885->addChildren(*HAnimSite889);

HAnimJoint884->addChildren(*HAnimSegment885);

CHAnimJoint* HAnimJoint892 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint892->setName("l_carpal_middle_phalanx_3");
HAnimJoint892->setDEF("hanim_l_carpal_middle_phalanx_3");
HAnimJoint892->setCenter(new float[3]{0.1815,-0.1054,0.5947});
HAnimJoint892->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint892->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment893 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment893->setName("SEGMENT_FOR_l_carpal_middle_phalanx_3");
HAnimSegment893->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3");
CTouchSensor* TouchSensor894 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor894->setDescription("joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3");
HAnimSegment893->addChildren(*TouchSensor894);

CTransform* Transform895 = (CTransform *)(m_pScene.createNode("Transform"));
Transform895->setTranslation(new float[3]{0.1815,-0.1054,0.5947});
CShape* Shape896 = (CShape *)(m_pScene.createNode("Shape"));
Shape896->setUSE("JointShape");
Transform895->addChild(*Shape896);

HAnimSegment893->addChildren(*Transform895);

CHAnimSite* HAnimSite897 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite897->setName("SEGMENT_FOR_l_carpal_middle_phalanx_3_tip");
HAnimSite897->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip");
CTransform* Transform898 = (CTransform *)(m_pScene.createNode("Transform"));
Transform898->setTranslation(new float[3]{0.1815,-0.1054,0.5947});
CShape* Shape899 = (CShape *)(m_pScene.createNode("Shape"));
Shape899->setUSE("SiteShape");
Transform898->addChild(*Shape899);

HAnimSite897->addChildren(*Transform898);

HAnimSegment893->addChildren(*HAnimSite897);

HAnimJoint892->addChildren(*HAnimSegment893);

CHAnimJoint* HAnimJoint900 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint900->setName("l_carpal_distal_phalanx_3");
HAnimJoint900->setDEF("hanim_l_carpal_distal_phalanx_3");
HAnimJoint900->setCenter(new float[3]{0.1805,-0.1056,0.5668});
HAnimJoint900->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint900->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment901 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment901->setName("SEGMENT_FOR_l_carpal_distal_phalanx_3");
HAnimSegment901->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3");
CTouchSensor* TouchSensor902 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor902->setDescription("joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3");
HAnimSegment901->addChildren(*TouchSensor902);

CTransform* Transform903 = (CTransform *)(m_pScene.createNode("Transform"));
Transform903->setTranslation(new float[3]{0.1805,-0.1056,0.5668});
CShape* Shape904 = (CShape *)(m_pScene.createNode("Shape"));
Shape904->setUSE("JointShape");
Transform903->addChild(*Shape904);

HAnimSegment901->addChildren(*Transform903);

CHAnimSite* HAnimSite905 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite905->setName("SEGMENT_FOR_l_carpal_distal_phalanx_3_tip");
HAnimSite905->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip");
CTransform* Transform906 = (CTransform *)(m_pScene.createNode("Transform"));
Transform906->setTranslation(new float[3]{0.1805,-0.1056,0.5668});
CShape* Shape907 = (CShape *)(m_pScene.createNode("Shape"));
Shape907->setUSE("SiteShape");
Transform906->addChild(*Shape907);

HAnimSite905->addChildren(*Transform906);

HAnimSegment901->addChildren(*HAnimSite905);

HAnimJoint900->addChildren(*HAnimSegment901);

HAnimJoint892->addChildren(*HAnimJoint900);

HAnimJoint884->addChildren(*HAnimJoint892);

HAnimJoint876->addChildren(*HAnimJoint884);

HAnimJoint868->addChildren(*HAnimJoint876);

HAnimJoint788->addChildren(*HAnimJoint868);

CHAnimJoint* HAnimJoint908 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint908->setName("l_hamate");
HAnimJoint908->setDEF("hanim_l_hamate");
HAnimJoint908->setCenter(new float[3]{0.1809,-0.1276,0.6973});
HAnimJoint908->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint908->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment909 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment909->setName("SEGMENT_FOR_l_hamate");
HAnimSegment909->setDEF("hanim_SEGMENT_FOR_l_hamate");
CTouchSensor* TouchSensor910 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor910->setDescription("joint l_hamate segment SEGMENT_FOR_l_hamate");
HAnimSegment909->addChildren(*TouchSensor910);

CTransform* Transform911 = (CTransform *)(m_pScene.createNode("Transform"));
Transform911->setTranslation(new float[3]{0.1809,-0.1276,0.6973});
CShape* Shape912 = (CShape *)(m_pScene.createNode("Shape"));
Shape912->setUSE("JointShape");
Transform911->addChild(*Shape912);

HAnimSegment909->addChildren(*Transform911);

CHAnimSite* HAnimSite913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite913->setName("SEGMENT_FOR_l_hamate_tip");
HAnimSite913->setDEF("hanim_SEGMENT_FOR_l_hamate_tip");
CTransform* Transform914 = (CTransform *)(m_pScene.createNode("Transform"));
Transform914->setTranslation(new float[3]{0.1809,-0.1276,0.6973});
CShape* Shape915 = (CShape *)(m_pScene.createNode("Shape"));
Shape915->setUSE("SiteShape");
Transform914->addChild(*Shape915);

HAnimSite913->addChildren(*Transform914);

HAnimSegment909->addChildren(*HAnimSite913);

HAnimJoint908->addChildren(*HAnimSegment909);

CHAnimJoint* HAnimJoint916 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint916->setName("l_metacarpal_4");
HAnimJoint916->setDEF("hanim_l_metacarpal_4");
HAnimJoint916->setCenter(new float[3]{0.1809,-0.1218,0.6777});
HAnimJoint916->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint916->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment917 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment917->setName("SEGMENT_FOR_l_metacarpal_4");
HAnimSegment917->setDEF("hanim_SEGMENT_FOR_l_metacarpal_4");
CTouchSensor* TouchSensor918 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor918->setDescription("joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4");
HAnimSegment917->addChildren(*TouchSensor918);

CTransform* Transform919 = (CTransform *)(m_pScene.createNode("Transform"));
Transform919->setTranslation(new float[3]{0.1809,-0.1218,0.6777});
CShape* Shape920 = (CShape *)(m_pScene.createNode("Shape"));
Shape920->setUSE("JointShape");
Transform919->addChild(*Shape920);

HAnimSegment917->addChildren(*Transform919);

CHAnimSite* HAnimSite921 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite921->setName("SEGMENT_FOR_l_metacarpal_4_tip");
HAnimSite921->setDEF("hanim_SEGMENT_FOR_l_metacarpal_4_tip");
CTransform* Transform922 = (CTransform *)(m_pScene.createNode("Transform"));
Transform922->setTranslation(new float[3]{0.1809,-0.1218,0.6777});
CShape* Shape923 = (CShape *)(m_pScene.createNode("Shape"));
Shape923->setUSE("SiteShape");
Transform922->addChild(*Shape923);

HAnimSite921->addChildren(*Transform922);

HAnimSegment917->addChildren(*HAnimSite921);

HAnimJoint916->addChildren(*HAnimSegment917);

CHAnimJoint* HAnimJoint924 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint924->setName("l_carpal_proximal_phalanx_4");
HAnimJoint924->setDEF("hanim_l_carpal_proximal_phalanx_4");
HAnimJoint924->setCenter(new float[3]{0.1835,-0.1233,0.6255});
HAnimJoint924->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint924->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment925 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment925->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_4");
HAnimSegment925->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4");
CTouchSensor* TouchSensor926 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor926->setDescription("joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4");
HAnimSegment925->addChildren(*TouchSensor926);

CTransform* Transform927 = (CTransform *)(m_pScene.createNode("Transform"));
Transform927->setTranslation(new float[3]{0.1835,-0.1233,0.6255});
CShape* Shape928 = (CShape *)(m_pScene.createNode("Shape"));
Shape928->setUSE("JointShape");
Transform927->addChild(*Shape928);

HAnimSegment925->addChildren(*Transform927);

CHAnimSite* HAnimSite929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite929->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip");
HAnimSite929->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip");
CTransform* Transform930 = (CTransform *)(m_pScene.createNode("Transform"));
Transform930->setTranslation(new float[3]{0.1835,-0.1233,0.6255});
CShape* Shape931 = (CShape *)(m_pScene.createNode("Shape"));
Shape931->setUSE("SiteShape");
Transform930->addChild(*Shape931);

HAnimSite929->addChildren(*Transform930);

HAnimSegment925->addChildren(*HAnimSite929);

HAnimJoint924->addChildren(*HAnimSegment925);

CHAnimJoint* HAnimJoint932 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint932->setName("l_carpal_middle_phalanx_4");
HAnimJoint932->setDEF("hanim_l_carpal_middle_phalanx_4");
HAnimJoint932->setCenter(new float[3]{0.1815,-0.1225,0.598});
HAnimJoint932->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint932->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment933 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment933->setName("SEGMENT_FOR_l_carpal_middle_phalanx_4");
HAnimSegment933->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4");
CTouchSensor* TouchSensor934 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor934->setDescription("joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4");
HAnimSegment933->addChildren(*TouchSensor934);

CTransform* Transform935 = (CTransform *)(m_pScene.createNode("Transform"));
Transform935->setTranslation(new float[3]{0.1815,-0.1225,0.598});
CShape* Shape936 = (CShape *)(m_pScene.createNode("Shape"));
Shape936->setUSE("JointShape");
Transform935->addChild(*Shape936);

HAnimSegment933->addChildren(*Transform935);

CHAnimSite* HAnimSite937 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite937->setName("SEGMENT_FOR_l_carpal_middle_phalanx_4_tip");
HAnimSite937->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip");
CTransform* Transform938 = (CTransform *)(m_pScene.createNode("Transform"));
Transform938->setTranslation(new float[3]{0.1815,-0.1225,0.598});
CShape* Shape939 = (CShape *)(m_pScene.createNode("Shape"));
Shape939->setUSE("SiteShape");
Transform938->addChild(*Shape939);

HAnimSite937->addChildren(*Transform938);

HAnimSegment933->addChildren(*HAnimSite937);

HAnimJoint932->addChildren(*HAnimSegment933);

CHAnimJoint* HAnimJoint940 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint940->setName("l_carpal_distal_phalanx_4");
HAnimJoint940->setDEF("hanim_l_carpal_distal_phalanx_4");
HAnimJoint940->setCenter(new float[3]{0.1805,-0.1217,0.5722});
HAnimJoint940->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint940->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment941 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment941->setName("SEGMENT_FOR_l_carpal_distal_phalanx_4");
HAnimSegment941->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4");
CTouchSensor* TouchSensor942 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor942->setDescription("joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4");
HAnimSegment941->addChildren(*TouchSensor942);

CTransform* Transform943 = (CTransform *)(m_pScene.createNode("Transform"));
Transform943->setTranslation(new float[3]{0.1805,-0.1217,0.5722});
CShape* Shape944 = (CShape *)(m_pScene.createNode("Shape"));
Shape944->setUSE("JointShape");
Transform943->addChild(*Shape944);

HAnimSegment941->addChildren(*Transform943);

CHAnimSite* HAnimSite945 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite945->setName("SEGMENT_FOR_l_carpal_distal_phalanx_4_tip");
HAnimSite945->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip");
CTransform* Transform946 = (CTransform *)(m_pScene.createNode("Transform"));
Transform946->setTranslation(new float[3]{0.1805,-0.1217,0.5722});
CShape* Shape947 = (CShape *)(m_pScene.createNode("Shape"));
Shape947->setUSE("SiteShape");
Transform946->addChild(*Shape947);

HAnimSite945->addChildren(*Transform946);

HAnimSegment941->addChildren(*HAnimSite945);

HAnimJoint940->addChildren(*HAnimSegment941);

HAnimJoint932->addChildren(*HAnimJoint940);

HAnimJoint924->addChildren(*HAnimJoint932);

HAnimJoint916->addChildren(*HAnimJoint924);

HAnimJoint908->addChildren(*HAnimJoint916);

CHAnimJoint* HAnimJoint948 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint948->setName("l_metacarpal_5");
HAnimJoint948->setDEF("hanim_l_metacarpal_5");
HAnimJoint948->setCenter(new float[3]{0.1815,-0.1347,0.6797});
HAnimJoint948->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint948->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment949 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment949->setName("SEGMENT_FOR_l_metacarpal_5");
HAnimSegment949->setDEF("hanim_SEGMENT_FOR_l_metacarpal_5");
CTouchSensor* TouchSensor950 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor950->setDescription("joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5");
HAnimSegment949->addChildren(*TouchSensor950);

CTransform* Transform951 = (CTransform *)(m_pScene.createNode("Transform"));
Transform951->setTranslation(new float[3]{0.1815,-0.1347,0.6797});
CShape* Shape952 = (CShape *)(m_pScene.createNode("Shape"));
Shape952->setUSE("JointShape");
Transform951->addChild(*Shape952);

HAnimSegment949->addChildren(*Transform951);

CHAnimSite* HAnimSite953 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite953->setName("SEGMENT_FOR_l_metacarpal_5_tip");
HAnimSite953->setDEF("hanim_SEGMENT_FOR_l_metacarpal_5_tip");
CTransform* Transform954 = (CTransform *)(m_pScene.createNode("Transform"));
Transform954->setTranslation(new float[3]{0.1815,-0.1347,0.6797});
CShape* Shape955 = (CShape *)(m_pScene.createNode("Shape"));
Shape955->setUSE("SiteShape");
Transform954->addChild(*Shape955);

HAnimSite953->addChildren(*Transform954);

HAnimSegment949->addChildren(*HAnimSite953);

HAnimJoint948->addChildren(*HAnimSegment949);

CHAnimJoint* HAnimJoint956 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint956->setName("l_carpal_proximal_phalanx_5");
HAnimJoint956->setDEF("hanim_l_carpal_proximal_phalanx_5");
HAnimJoint956->setCenter(new float[3]{0.1832,-0.1389,0.6295});
HAnimJoint956->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint956->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment957 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment957->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_5");
HAnimSegment957->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5");
CTouchSensor* TouchSensor958 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor958->setDescription("joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5");
HAnimSegment957->addChildren(*TouchSensor958);

CTransform* Transform959 = (CTransform *)(m_pScene.createNode("Transform"));
Transform959->setTranslation(new float[3]{0.1832,-0.1389,0.6295});
CShape* Shape960 = (CShape *)(m_pScene.createNode("Shape"));
Shape960->setUSE("JointShape");
Transform959->addChild(*Shape960);

HAnimSegment957->addChildren(*Transform959);

CHAnimSite* HAnimSite961 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite961->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip");
HAnimSite961->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip");
CTransform* Transform962 = (CTransform *)(m_pScene.createNode("Transform"));
Transform962->setTranslation(new float[3]{0.1832,-0.1389,0.6295});
CShape* Shape963 = (CShape *)(m_pScene.createNode("Shape"));
Shape963->setUSE("SiteShape");
Transform962->addChild(*Shape963);

HAnimSite961->addChildren(*Transform962);

HAnimSegment957->addChildren(*HAnimSite961);

HAnimJoint956->addChildren(*HAnimSegment957);

CHAnimJoint* HAnimJoint964 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint964->setName("l_carpal_middle_phalanx_5");
HAnimJoint964->setDEF("hanim_l_carpal_middle_phalanx_5");
HAnimJoint964->setCenter(new float[3]{0.1815,-0.139,0.6124});
HAnimJoint964->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint964->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment965 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment965->setName("SEGMENT_FOR_l_carpal_middle_phalanx_5");
HAnimSegment965->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5");
CTouchSensor* TouchSensor966 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor966->setDescription("joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5");
HAnimSegment965->addChildren(*TouchSensor966);

CTransform* Transform967 = (CTransform *)(m_pScene.createNode("Transform"));
Transform967->setTranslation(new float[3]{0.1815,-0.139,0.6124});
CShape* Shape968 = (CShape *)(m_pScene.createNode("Shape"));
Shape968->setUSE("JointShape");
Transform967->addChild(*Shape968);

HAnimSegment965->addChildren(*Transform967);

CHAnimSite* HAnimSite969 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite969->setName("SEGMENT_FOR_l_carpal_middle_phalanx_5_tip");
HAnimSite969->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip");
CTransform* Transform970 = (CTransform *)(m_pScene.createNode("Transform"));
Transform970->setTranslation(new float[3]{0.1815,-0.139,0.6124});
CShape* Shape971 = (CShape *)(m_pScene.createNode("Shape"));
Shape971->setUSE("SiteShape");
Transform970->addChild(*Shape971);

HAnimSite969->addChildren(*Transform970);

HAnimSegment965->addChildren(*HAnimSite969);

HAnimJoint964->addChildren(*HAnimSegment965);

CHAnimJoint* HAnimJoint972 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint972->setName("l_carpal_distal_phalanx_5");
HAnimJoint972->setDEF("hanim_l_carpal_distal_phalanx_5");
HAnimJoint972->setCenter(new float[3]{0.1806,-0.1388,0.5938});
HAnimJoint972->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint972->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment973 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment973->setName("SEGMENT_FOR_l_carpal_distal_phalanx_5");
HAnimSegment973->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5");
CTouchSensor* TouchSensor974 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor974->setDescription("joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5");
HAnimSegment973->addChildren(*TouchSensor974);

CTransform* Transform975 = (CTransform *)(m_pScene.createNode("Transform"));
Transform975->setTranslation(new float[3]{0.1806,-0.1388,0.5938});
CShape* Shape976 = (CShape *)(m_pScene.createNode("Shape"));
Shape976->setUSE("JointShape");
Transform975->addChild(*Shape976);

HAnimSegment973->addChildren(*Transform975);

CHAnimSite* HAnimSite977 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite977->setName("SEGMENT_FOR_l_carpal_distal_phalanx_5_tip");
HAnimSite977->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip");
CTransform* Transform978 = (CTransform *)(m_pScene.createNode("Transform"));
Transform978->setTranslation(new float[3]{0.1806,-0.1388,0.5938});
CShape* Shape979 = (CShape *)(m_pScene.createNode("Shape"));
Shape979->setUSE("SiteShape");
Transform978->addChild(*Shape979);

HAnimSite977->addChildren(*Transform978);

HAnimSegment973->addChildren(*HAnimSite977);

HAnimJoint972->addChildren(*HAnimSegment973);

HAnimJoint964->addChildren(*HAnimJoint972);

HAnimJoint956->addChildren(*HAnimJoint964);

HAnimJoint948->addChildren(*HAnimJoint956);

HAnimJoint908->addChildren(*HAnimJoint948);

HAnimJoint788->addChildren(*HAnimJoint908);

HAnimJoint780->addChildren(*HAnimJoint788);

HAnimJoint772->addChildren(*HAnimJoint780);

HAnimJoint764->addChildren(*HAnimJoint772);

HAnimJoint756->addChildren(*HAnimJoint764);

HAnimJoint628->addChildren(*HAnimJoint756);

CHAnimJoint* HAnimJoint980 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint980->setName("r_clavicle");
HAnimJoint980->setDEF("hanim_r_clavicle");
HAnimJoint980->setCenter(new float[3]{-0.1231,-0.1148,1.1833});
HAnimJoint980->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint980->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment981 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment981->setName("SEGMENT_FOR_r_clavicle");
HAnimSegment981->setDEF("hanim_SEGMENT_FOR_r_clavicle");
CTouchSensor* TouchSensor982 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor982->setDescription("joint r_clavicle segment SEGMENT_FOR_r_clavicle");
HAnimSegment981->addChildren(*TouchSensor982);

CTransform* Transform983 = (CTransform *)(m_pScene.createNode("Transform"));
Transform983->setTranslation(new float[3]{-0.1231,-0.1148,1.1833});
CShape* Shape984 = (CShape *)(m_pScene.createNode("Shape"));
Shape984->setUSE("JointShape");
Transform983->addChild(*Shape984);

HAnimSegment981->addChildren(*Transform983);

CHAnimSite* HAnimSite985 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite985->setName("SEGMENT_FOR_r_clavicle_tip");
HAnimSite985->setDEF("hanim_SEGMENT_FOR_r_clavicle_tip");
CTransform* Transform986 = (CTransform *)(m_pScene.createNode("Transform"));
Transform986->setTranslation(new float[3]{-0.1231,-0.1148,1.1833});
CShape* Shape987 = (CShape *)(m_pScene.createNode("Shape"));
Shape987->setUSE("SiteShape");
Transform986->addChild(*Shape987);

HAnimSite985->addChildren(*Transform986);

HAnimSegment981->addChildren(*HAnimSite985);

HAnimJoint980->addChildren(*HAnimSegment981);

CHAnimJoint* HAnimJoint988 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint988->setName("r_scapula");
HAnimJoint988->setDEF("hanim_r_scapula");
HAnimJoint988->setCenter(new float[3]{-0.0387,-0.1157,1.2001});
HAnimJoint988->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint988->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment989 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment989->setName("SEGMENT_FOR_r_scapula");
HAnimSegment989->setDEF("hanim_SEGMENT_FOR_r_scapula");
CTouchSensor* TouchSensor990 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor990->setDescription("joint r_scapula segment SEGMENT_FOR_r_scapula");
HAnimSegment989->addChildren(*TouchSensor990);

CTransform* Transform991 = (CTransform *)(m_pScene.createNode("Transform"));
Transform991->setTranslation(new float[3]{-0.0387,-0.1157,1.2001});
CShape* Shape992 = (CShape *)(m_pScene.createNode("Shape"));
Shape992->setUSE("JointShape");
Transform991->addChild(*Shape992);

HAnimSegment989->addChildren(*Transform991);

CHAnimSite* HAnimSite993 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite993->setName("SEGMENT_FOR_r_scapula_tip");
HAnimSite993->setDEF("hanim_SEGMENT_FOR_r_scapula_tip");
CTransform* Transform994 = (CTransform *)(m_pScene.createNode("Transform"));
Transform994->setTranslation(new float[3]{-0.0387,-0.1157,1.2001});
CShape* Shape995 = (CShape *)(m_pScene.createNode("Shape"));
Shape995->setUSE("SiteShape");
Transform994->addChild(*Shape995);

HAnimSite993->addChildren(*Transform994);

HAnimSegment989->addChildren(*HAnimSite993);

HAnimJoint988->addChildren(*HAnimSegment989);

CHAnimJoint* HAnimJoint996 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint996->setName("r_upperarm");
HAnimJoint996->setDEF("hanim_r_upperarm");
HAnimJoint996->setCenter(new float[3]{-0.1649,-0.1051,1.17});
HAnimJoint996->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment997 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment997->setName("SEGMENT_FOR_r_upperarm");
HAnimSegment997->setDEF("hanim_SEGMENT_FOR_r_upperarm");
CTouchSensor* TouchSensor998 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor998->setDescription("joint r_upperarm segment SEGMENT_FOR_r_upperarm");
HAnimSegment997->addChildren(*TouchSensor998);

CTransform* Transform999 = (CTransform *)(m_pScene.createNode("Transform"));
Transform999->setTranslation(new float[3]{-0.1649,-0.1051,1.17});
CShape* Shape1000 = (CShape *)(m_pScene.createNode("Shape"));
Shape1000->setUSE("JointShape");
Transform999->addChild(*Shape1000);

HAnimSegment997->addChildren(*Transform999);

CHAnimSite* HAnimSite1001 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1001->setName("SEGMENT_FOR_r_upperarm_tip");
HAnimSite1001->setDEF("hanim_SEGMENT_FOR_r_upperarm_tip");
CTransform* Transform1002 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1002->setTranslation(new float[3]{-0.1649,-0.1051,1.17});
CShape* Shape1003 = (CShape *)(m_pScene.createNode("Shape"));
Shape1003->setUSE("SiteShape");
Transform1002->addChild(*Shape1003);

HAnimSite1001->addChildren(*Transform1002);

HAnimSegment997->addChildren(*HAnimSite1001);

HAnimJoint996->addChildren(*HAnimSegment997);

CHAnimJoint* HAnimJoint1004 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1004->setName("r_forearm");
HAnimJoint1004->setDEF("hanim_r_forearm");
HAnimJoint1004->setCenter(new float[3]{-0.1819,-0.1075,0.9202});
HAnimJoint1004->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1004->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1005 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1005->setName("SEGMENT_FOR_r_forearm");
HAnimSegment1005->setDEF("hanim_SEGMENT_FOR_r_forearm");
CTouchSensor* TouchSensor1006 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1006->setDescription("joint r_forearm segment SEGMENT_FOR_r_forearm");
HAnimSegment1005->addChildren(*TouchSensor1006);

CTransform* Transform1007 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1007->setTranslation(new float[3]{-0.1819,-0.1075,0.9202});
CShape* Shape1008 = (CShape *)(m_pScene.createNode("Shape"));
Shape1008->setUSE("JointShape");
Transform1007->addChild(*Shape1008);

HAnimSegment1005->addChildren(*Transform1007);

CHAnimSite* HAnimSite1009 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1009->setName("SEGMENT_FOR_r_forearm_tip");
HAnimSite1009->setDEF("hanim_SEGMENT_FOR_r_forearm_tip");
CTransform* Transform1010 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1010->setTranslation(new float[3]{-0.1819,-0.1075,0.9202});
CShape* Shape1011 = (CShape *)(m_pScene.createNode("Shape"));
Shape1011->setUSE("SiteShape");
Transform1010->addChild(*Shape1011);

HAnimSite1009->addChildren(*Transform1010);

HAnimSegment1005->addChildren(*HAnimSite1009);

HAnimJoint1004->addChildren(*HAnimSegment1005);

CHAnimJoint* HAnimJoint1012 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1012->setName("r_carpal");
HAnimJoint1012->setDEF("hanim_r_carpal");
HAnimJoint1012->setCenter(new float[3]{-0.1818,-0.1069,0.7157});
HAnimJoint1012->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1012->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1013 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1013->setName("SEGMENT_FOR_r_carpal");
HAnimSegment1013->setDEF("hanim_SEGMENT_FOR_r_carpal");
CTouchSensor* TouchSensor1014 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1014->setDescription("joint r_carpal segment SEGMENT_FOR_r_carpal");
HAnimSegment1013->addChildren(*TouchSensor1014);

CTransform* Transform1015 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1015->setTranslation(new float[3]{-0.1818,-0.1069,0.7157});
CShape* Shape1016 = (CShape *)(m_pScene.createNode("Shape"));
Shape1016->setUSE("JointShape");
Transform1015->addChild(*Shape1016);

HAnimSegment1013->addChildren(*Transform1015);

CHAnimSite* HAnimSite1017 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1017->setName("SEGMENT_FOR_r_carpal_tip");
HAnimSite1017->setDEF("hanim_SEGMENT_FOR_r_carpal_tip");
CTransform* Transform1018 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1018->setTranslation(new float[3]{-0.1818,-0.1069,0.7157});
CShape* Shape1019 = (CShape *)(m_pScene.createNode("Shape"));
Shape1019->setUSE("SiteShape");
Transform1018->addChild(*Shape1019);

HAnimSite1017->addChildren(*Transform1018);

HAnimSegment1013->addChildren(*HAnimSite1017);

HAnimJoint1012->addChildren(*HAnimSegment1013);

CHAnimJoint* HAnimJoint1020 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1020->setName("r_trapezium");
HAnimJoint1020->setDEF("hanim_r_trapezium");
HAnimJoint1020->setCenter(new float[3]{-0.1811,-0.0826,0.6975});
HAnimJoint1020->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1020->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1021 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1021->setName("SEGMENT_FOR_r_trapezium");
HAnimSegment1021->setDEF("hanim_SEGMENT_FOR_r_trapezium");
CTouchSensor* TouchSensor1022 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1022->setDescription("joint r_trapezium segment SEGMENT_FOR_r_trapezium");
HAnimSegment1021->addChildren(*TouchSensor1022);

CTransform* Transform1023 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1023->setTranslation(new float[3]{-0.1811,-0.0826,0.6975});
CShape* Shape1024 = (CShape *)(m_pScene.createNode("Shape"));
Shape1024->setUSE("JointShape");
Transform1023->addChild(*Shape1024);

HAnimSegment1021->addChildren(*Transform1023);

CHAnimSite* HAnimSite1025 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1025->setName("SEGMENT_FOR_r_trapezium_tip");
HAnimSite1025->setDEF("hanim_SEGMENT_FOR_r_trapezium_tip");
CTransform* Transform1026 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1026->setTranslation(new float[3]{-0.1811,-0.0826,0.6975});
CShape* Shape1027 = (CShape *)(m_pScene.createNode("Shape"));
Shape1027->setUSE("SiteShape");
Transform1026->addChild(*Shape1027);

HAnimSite1025->addChildren(*Transform1026);

HAnimSegment1021->addChildren(*HAnimSite1025);

HAnimJoint1020->addChildren(*HAnimSegment1021);

CHAnimJoint* HAnimJoint1028 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1028->setName("r_metacarpal_1");
HAnimJoint1028->setDEF("hanim_r_metacarpal_1");
HAnimJoint1028->setCenter(new float[3]{-0.1803,-0.0759,0.684});
HAnimJoint1028->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1028->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1029 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1029->setName("SEGMENT_FOR_r_metacarpal_1");
HAnimSegment1029->setDEF("hanim_SEGMENT_FOR_r_metacarpal_1");
CTouchSensor* TouchSensor1030 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1030->setDescription("joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1");
HAnimSegment1029->addChildren(*TouchSensor1030);

CTransform* Transform1031 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1031->setTranslation(new float[3]{-0.1803,-0.0759,0.684});
CShape* Shape1032 = (CShape *)(m_pScene.createNode("Shape"));
Shape1032->setUSE("JointShape");
Transform1031->addChild(*Shape1032);

HAnimSegment1029->addChildren(*Transform1031);

CHAnimSite* HAnimSite1033 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1033->setName("SEGMENT_FOR_r_metacarpal_1_tip");
HAnimSite1033->setDEF("hanim_SEGMENT_FOR_r_metacarpal_1_tip");
CTransform* Transform1034 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1034->setTranslation(new float[3]{-0.1803,-0.0759,0.684});
CShape* Shape1035 = (CShape *)(m_pScene.createNode("Shape"));
Shape1035->setUSE("SiteShape");
Transform1034->addChild(*Shape1035);

HAnimSite1033->addChildren(*Transform1034);

HAnimSegment1029->addChildren(*HAnimSite1033);

HAnimJoint1028->addChildren(*HAnimSegment1029);

CHAnimJoint* HAnimJoint1036 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1036->setName("r_carpal_proximal_phalanx_1");
HAnimJoint1036->setDEF("hanim_r_carpal_proximal_phalanx_1");
HAnimJoint1036->setCenter(new float[3]{-0.1808,-0.0661,0.6642});
HAnimJoint1036->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1036->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1037 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1037->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_1");
HAnimSegment1037->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1");
CTouchSensor* TouchSensor1038 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1038->setDescription("joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1");
HAnimSegment1037->addChildren(*TouchSensor1038);

CTransform* Transform1039 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1039->setTranslation(new float[3]{-0.1808,-0.0661,0.6642});
CShape* Shape1040 = (CShape *)(m_pScene.createNode("Shape"));
Shape1040->setUSE("JointShape");
Transform1039->addChild(*Shape1040);

HAnimSegment1037->addChildren(*Transform1039);

CHAnimSite* HAnimSite1041 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1041->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip");
HAnimSite1041->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip");
CTransform* Transform1042 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1042->setTranslation(new float[3]{-0.1808,-0.0661,0.6642});
CShape* Shape1043 = (CShape *)(m_pScene.createNode("Shape"));
Shape1043->setUSE("SiteShape");
Transform1042->addChild(*Shape1043);

HAnimSite1041->addChildren(*Transform1042);

HAnimSegment1037->addChildren(*HAnimSite1041);

HAnimJoint1036->addChildren(*HAnimSegment1037);

CHAnimJoint* HAnimJoint1044 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1044->setName("r_carpal_distal_phalanx_1");
HAnimJoint1044->setDEF("hanim_r_carpal_distal_phalanx_1");
HAnimJoint1044->setCenter(new float[3]{-0.1825,-0.0522,0.6455});
HAnimJoint1044->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1044->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1045 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1045->setName("SEGMENT_FOR_r_carpal_distal_phalanx_1");
HAnimSegment1045->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1");
CTouchSensor* TouchSensor1046 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1046->setDescription("joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1");
HAnimSegment1045->addChildren(*TouchSensor1046);

CTransform* Transform1047 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1047->setTranslation(new float[3]{-0.1825,-0.0522,0.6455});
CShape* Shape1048 = (CShape *)(m_pScene.createNode("Shape"));
Shape1048->setUSE("JointShape");
Transform1047->addChild(*Shape1048);

HAnimSegment1045->addChildren(*Transform1047);

CHAnimSite* HAnimSite1049 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1049->setName("SEGMENT_FOR_r_carpal_distal_phalanx_1_tip");
HAnimSite1049->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip");
CTransform* Transform1050 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1050->setTranslation(new float[3]{-0.1825,-0.0522,0.6455});
CShape* Shape1051 = (CShape *)(m_pScene.createNode("Shape"));
Shape1051->setUSE("SiteShape");
Transform1050->addChild(*Shape1051);

HAnimSite1049->addChildren(*Transform1050);

HAnimSegment1045->addChildren(*HAnimSite1049);

HAnimJoint1044->addChildren(*HAnimSegment1045);

HAnimJoint1036->addChildren(*HAnimJoint1044);

HAnimJoint1028->addChildren(*HAnimJoint1036);

HAnimJoint1020->addChildren(*HAnimJoint1028);

HAnimJoint1012->addChildren(*HAnimJoint1020);

CHAnimJoint* HAnimJoint1052 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1052->setName("r_trapezoid");
HAnimJoint1052->setDEF("hanim_r_trapezoid");
HAnimJoint1052->setCenter(new float[3]{-0.1811,-0.0935,0.6984});
HAnimJoint1052->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1052->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1053 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1053->setName("SEGMENT_FOR_r_trapezoid");
HAnimSegment1053->setDEF("hanim_SEGMENT_FOR_r_trapezoid");
CTouchSensor* TouchSensor1054 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1054->setDescription("joint r_trapezoid segment SEGMENT_FOR_r_trapezoid");
HAnimSegment1053->addChildren(*TouchSensor1054);

CTransform* Transform1055 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1055->setTranslation(new float[3]{-0.1811,-0.0935,0.6984});
CShape* Shape1056 = (CShape *)(m_pScene.createNode("Shape"));
Shape1056->setUSE("JointShape");
Transform1055->addChild(*Shape1056);

HAnimSegment1053->addChildren(*Transform1055);

CHAnimSite* HAnimSite1057 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1057->setName("SEGMENT_FOR_r_trapezoid_tip");
HAnimSite1057->setDEF("hanim_SEGMENT_FOR_r_trapezoid_tip");
CTransform* Transform1058 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1058->setTranslation(new float[3]{-0.1811,-0.0935,0.6984});
CShape* Shape1059 = (CShape *)(m_pScene.createNode("Shape"));
Shape1059->setUSE("SiteShape");
Transform1058->addChild(*Shape1059);

HAnimSite1057->addChildren(*Transform1058);

HAnimSegment1053->addChildren(*HAnimSite1057);

HAnimJoint1052->addChildren(*HAnimSegment1053);

CHAnimJoint* HAnimJoint1060 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1060->setName("r_metacarpal_2");
HAnimJoint1060->setDEF("hanim_r_metacarpal_2");
HAnimJoint1060->setCenter(new float[3]{-0.1811,-0.0922,0.679});
HAnimJoint1060->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1060->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1061 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1061->setName("SEGMENT_FOR_r_metacarpal_2");
HAnimSegment1061->setDEF("hanim_SEGMENT_FOR_r_metacarpal_2");
CTouchSensor* TouchSensor1062 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1062->setDescription("joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2");
HAnimSegment1061->addChildren(*TouchSensor1062);

CTransform* Transform1063 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1063->setTranslation(new float[3]{-0.1811,-0.0922,0.679});
CShape* Shape1064 = (CShape *)(m_pScene.createNode("Shape"));
Shape1064->setUSE("JointShape");
Transform1063->addChild(*Shape1064);

HAnimSegment1061->addChildren(*Transform1063);

CHAnimSite* HAnimSite1065 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1065->setName("SEGMENT_FOR_r_metacarpal_2_tip");
HAnimSite1065->setDEF("hanim_SEGMENT_FOR_r_metacarpal_2_tip");
CTransform* Transform1066 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1066->setTranslation(new float[3]{-0.1811,-0.0922,0.679});
CShape* Shape1067 = (CShape *)(m_pScene.createNode("Shape"));
Shape1067->setUSE("SiteShape");
Transform1066->addChild(*Shape1067);

HAnimSite1065->addChildren(*Transform1066);

HAnimSegment1061->addChildren(*HAnimSite1065);

HAnimJoint1060->addChildren(*HAnimSegment1061);

CHAnimJoint* HAnimJoint1068 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1068->setName("r_carpal_proximal_phalanx_2");
HAnimJoint1068->setDEF("hanim_r_carpal_proximal_phalanx_2");
HAnimJoint1068->setCenter(new float[3]{-0.1835,-0.0868,0.6286});
HAnimJoint1068->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1068->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1069 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1069->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_2");
HAnimSegment1069->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2");
CTouchSensor* TouchSensor1070 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1070->setDescription("joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2");
HAnimSegment1069->addChildren(*TouchSensor1070);

CTransform* Transform1071 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1071->setTranslation(new float[3]{-0.1835,-0.0868,0.6286});
CShape* Shape1072 = (CShape *)(m_pScene.createNode("Shape"));
Shape1072->setUSE("JointShape");
Transform1071->addChild(*Shape1072);

HAnimSegment1069->addChildren(*Transform1071);

CHAnimSite* HAnimSite1073 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1073->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip");
HAnimSite1073->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip");
CTransform* Transform1074 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1074->setTranslation(new float[3]{-0.1835,-0.0868,0.6286});
CShape* Shape1075 = (CShape *)(m_pScene.createNode("Shape"));
Shape1075->setUSE("SiteShape");
Transform1074->addChild(*Shape1075);

HAnimSite1073->addChildren(*Transform1074);

HAnimSegment1069->addChildren(*HAnimSite1073);

HAnimJoint1068->addChildren(*HAnimSegment1069);

CHAnimJoint* HAnimJoint1076 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1076->setName("r_carpal_middle_phalanx_2");
HAnimJoint1076->setDEF("hanim_r_carpal_middle_phalanx_2");
HAnimJoint1076->setCenter(new float[3]{-0.1815,-0.0877,0.5983});
HAnimJoint1076->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1076->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1077 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1077->setName("SEGMENT_FOR_r_carpal_middle_phalanx_2");
HAnimSegment1077->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2");
CTouchSensor* TouchSensor1078 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1078->setDescription("joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2");
HAnimSegment1077->addChildren(*TouchSensor1078);

CTransform* Transform1079 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1079->setTranslation(new float[3]{-0.1815,-0.0877,0.5983});
CShape* Shape1080 = (CShape *)(m_pScene.createNode("Shape"));
Shape1080->setUSE("JointShape");
Transform1079->addChild(*Shape1080);

HAnimSegment1077->addChildren(*Transform1079);

CHAnimSite* HAnimSite1081 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1081->setName("SEGMENT_FOR_r_carpal_middle_phalanx_2_tip");
HAnimSite1081->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip");
CTransform* Transform1082 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1082->setTranslation(new float[3]{-0.1815,-0.0877,0.5983});
CShape* Shape1083 = (CShape *)(m_pScene.createNode("Shape"));
Shape1083->setUSE("SiteShape");
Transform1082->addChild(*Shape1083);

HAnimSite1081->addChildren(*Transform1082);

HAnimSegment1077->addChildren(*HAnimSite1081);

HAnimJoint1076->addChildren(*HAnimSegment1077);

CHAnimJoint* HAnimJoint1084 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1084->setName("r_carpal_distal_phalanx_2");
HAnimJoint1084->setDEF("hanim_r_carpal_distal_phalanx_2");
HAnimJoint1084->setCenter(new float[3]{-0.1805,-0.0885,0.5731});
HAnimJoint1084->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1084->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1085 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1085->setName("SEGMENT_FOR_r_carpal_distal_phalanx_2");
HAnimSegment1085->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2");
CTouchSensor* TouchSensor1086 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1086->setDescription("joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2");
HAnimSegment1085->addChildren(*TouchSensor1086);

CTransform* Transform1087 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1087->setTranslation(new float[3]{-0.1805,-0.0885,0.5731});
CShape* Shape1088 = (CShape *)(m_pScene.createNode("Shape"));
Shape1088->setUSE("JointShape");
Transform1087->addChild(*Shape1088);

HAnimSegment1085->addChildren(*Transform1087);

CHAnimSite* HAnimSite1089 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1089->setName("SEGMENT_FOR_r_carpal_distal_phalanx_2_tip");
HAnimSite1089->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip");
CTransform* Transform1090 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1090->setTranslation(new float[3]{-0.1805,-0.0885,0.5731});
CShape* Shape1091 = (CShape *)(m_pScene.createNode("Shape"));
Shape1091->setUSE("SiteShape");
Transform1090->addChild(*Shape1091);

HAnimSite1089->addChildren(*Transform1090);

HAnimSegment1085->addChildren(*HAnimSite1089);

HAnimJoint1084->addChildren(*HAnimSegment1085);

HAnimJoint1076->addChildren(*HAnimJoint1084);

HAnimJoint1068->addChildren(*HAnimJoint1076);

HAnimJoint1060->addChildren(*HAnimJoint1068);

HAnimJoint1052->addChildren(*HAnimJoint1060);

HAnimJoint1012->addChildren(*HAnimJoint1052);

CHAnimJoint* HAnimJoint1092 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1092->setName("r_capitate");
HAnimJoint1092->setDEF("hanim_r_capitate");
HAnimJoint1092->setCenter(new float[3]{-0.1809,-0.1067,0.7});
HAnimJoint1092->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1092->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1093 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1093->setName("SEGMENT_FOR_r_capitate");
HAnimSegment1093->setDEF("hanim_SEGMENT_FOR_r_capitate");
CTouchSensor* TouchSensor1094 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1094->setDescription("joint r_capitate segment SEGMENT_FOR_r_capitate");
HAnimSegment1093->addChildren(*TouchSensor1094);

CTransform* Transform1095 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1095->setTranslation(new float[3]{-0.1809,-0.1067,0.7});
CShape* Shape1096 = (CShape *)(m_pScene.createNode("Shape"));
Shape1096->setUSE("JointShape");
Transform1095->addChild(*Shape1096);

HAnimSegment1093->addChildren(*Transform1095);

CHAnimSite* HAnimSite1097 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1097->setName("SEGMENT_FOR_r_capitate_tip");
HAnimSite1097->setDEF("hanim_SEGMENT_FOR_r_capitate_tip");
CTransform* Transform1098 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1098->setTranslation(new float[3]{-0.1809,-0.1067,0.7});
CShape* Shape1099 = (CShape *)(m_pScene.createNode("Shape"));
Shape1099->setUSE("SiteShape");
Transform1098->addChild(*Shape1099);

HAnimSite1097->addChildren(*Transform1098);

HAnimSegment1093->addChildren(*HAnimSite1097);

HAnimJoint1092->addChildren(*HAnimSegment1093);

CHAnimJoint* HAnimJoint1100 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1100->setName("r_metacarpal_3");
HAnimJoint1100->setDEF("hanim_r_metacarpal_3");
HAnimJoint1100->setCenter(new float[3]{-0.1809,-0.1081,0.6772});
HAnimJoint1100->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1100->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1101 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1101->setName("SEGMENT_FOR_r_metacarpal_3");
HAnimSegment1101->setDEF("hanim_SEGMENT_FOR_r_metacarpal_3");
CTouchSensor* TouchSensor1102 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1102->setDescription("joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3");
HAnimSegment1101->addChildren(*TouchSensor1102);

CTransform* Transform1103 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1103->setTranslation(new float[3]{-0.1809,-0.1081,0.6772});
CShape* Shape1104 = (CShape *)(m_pScene.createNode("Shape"));
Shape1104->setUSE("JointShape");
Transform1103->addChild(*Shape1104);

HAnimSegment1101->addChildren(*Transform1103);

CHAnimSite* HAnimSite1105 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1105->setName("SEGMENT_FOR_r_metacarpal_3_tip");
HAnimSite1105->setDEF("hanim_SEGMENT_FOR_r_metacarpal_3_tip");
CTransform* Transform1106 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1106->setTranslation(new float[3]{-0.1809,-0.1081,0.6772});
CShape* Shape1107 = (CShape *)(m_pScene.createNode("Shape"));
Shape1107->setUSE("SiteShape");
Transform1106->addChild(*Shape1107);

HAnimSite1105->addChildren(*Transform1106);

HAnimSegment1101->addChildren(*HAnimSite1105);

HAnimJoint1100->addChildren(*HAnimSegment1101);

CHAnimJoint* HAnimJoint1108 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1108->setName("r_carpal_proximal_phalanx_3");
HAnimJoint1108->setDEF("hanim_r_carpal_proximal_phalanx_3");
HAnimJoint1108->setCenter(new float[3]{-0.1835,-0.1058,0.6264});
HAnimJoint1108->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1108->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1109 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1109->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_3");
HAnimSegment1109->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3");
CTouchSensor* TouchSensor1110 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1110->setDescription("joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3");
HAnimSegment1109->addChildren(*TouchSensor1110);

CTransform* Transform1111 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1111->setTranslation(new float[3]{-0.1835,-0.1058,0.6264});
CShape* Shape1112 = (CShape *)(m_pScene.createNode("Shape"));
Shape1112->setUSE("JointShape");
Transform1111->addChild(*Shape1112);

HAnimSegment1109->addChildren(*Transform1111);

CHAnimSite* HAnimSite1113 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1113->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip");
HAnimSite1113->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip");
CTransform* Transform1114 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1114->setTranslation(new float[3]{-0.1835,-0.1058,0.6264});
CShape* Shape1115 = (CShape *)(m_pScene.createNode("Shape"));
Shape1115->setUSE("SiteShape");
Transform1114->addChild(*Shape1115);

HAnimSite1113->addChildren(*Transform1114);

HAnimSegment1109->addChildren(*HAnimSite1113);

HAnimJoint1108->addChildren(*HAnimSegment1109);

CHAnimJoint* HAnimJoint1116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1116->setName("r_carpal_middle_phalanx_3");
HAnimJoint1116->setDEF("hanim_r_carpal_middle_phalanx_3");
HAnimJoint1116->setCenter(new float[3]{-0.1815,-0.1054,0.5947});
HAnimJoint1116->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1116->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1117 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1117->setName("SEGMENT_FOR_r_carpal_middle_phalanx_3");
HAnimSegment1117->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3");
CTouchSensor* TouchSensor1118 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1118->setDescription("joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3");
HAnimSegment1117->addChildren(*TouchSensor1118);

CTransform* Transform1119 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1119->setTranslation(new float[3]{-0.1815,-0.1054,0.5947});
CShape* Shape1120 = (CShape *)(m_pScene.createNode("Shape"));
Shape1120->setUSE("JointShape");
Transform1119->addChild(*Shape1120);

HAnimSegment1117->addChildren(*Transform1119);

CHAnimSite* HAnimSite1121 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1121->setName("SEGMENT_FOR_r_carpal_middle_phalanx_3_tip");
HAnimSite1121->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip");
CTransform* Transform1122 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1122->setTranslation(new float[3]{-0.1815,-0.1054,0.5947});
CShape* Shape1123 = (CShape *)(m_pScene.createNode("Shape"));
Shape1123->setUSE("SiteShape");
Transform1122->addChild(*Shape1123);

HAnimSite1121->addChildren(*Transform1122);

HAnimSegment1117->addChildren(*HAnimSite1121);

HAnimJoint1116->addChildren(*HAnimSegment1117);

CHAnimJoint* HAnimJoint1124 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1124->setName("r_carpal_distal_phalanx_3");
HAnimJoint1124->setDEF("hanim_r_carpal_distal_phalanx_3");
HAnimJoint1124->setCenter(new float[3]{-0.1805,-0.1056,0.5668});
HAnimJoint1124->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1124->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1125 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1125->setName("SEGMENT_FOR_r_carpal_distal_phalanx_3");
HAnimSegment1125->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3");
CTouchSensor* TouchSensor1126 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1126->setDescription("joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3");
HAnimSegment1125->addChildren(*TouchSensor1126);

CTransform* Transform1127 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1127->setTranslation(new float[3]{-0.1805,-0.1056,0.5668});
CShape* Shape1128 = (CShape *)(m_pScene.createNode("Shape"));
Shape1128->setUSE("JointShape");
Transform1127->addChild(*Shape1128);

HAnimSegment1125->addChildren(*Transform1127);

CHAnimSite* HAnimSite1129 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1129->setName("SEGMENT_FOR_r_carpal_distal_phalanx_3_tip");
HAnimSite1129->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip");
CTransform* Transform1130 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1130->setTranslation(new float[3]{-0.1805,-0.1056,0.5668});
CShape* Shape1131 = (CShape *)(m_pScene.createNode("Shape"));
Shape1131->setUSE("SiteShape");
Transform1130->addChild(*Shape1131);

HAnimSite1129->addChildren(*Transform1130);

HAnimSegment1125->addChildren(*HAnimSite1129);

HAnimJoint1124->addChildren(*HAnimSegment1125);

HAnimJoint1116->addChildren(*HAnimJoint1124);

HAnimJoint1108->addChildren(*HAnimJoint1116);

HAnimJoint1100->addChildren(*HAnimJoint1108);

HAnimJoint1092->addChildren(*HAnimJoint1100);

HAnimJoint1012->addChildren(*HAnimJoint1092);

CHAnimJoint* HAnimJoint1132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1132->setName("r_hamate");
HAnimJoint1132->setDEF("hanim_r_hamate");
HAnimJoint1132->setCenter(new float[3]{-0.1809,-0.1276,0.6973});
HAnimJoint1132->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1132->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1133 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1133->setName("SEGMENT_FOR_r_hamate");
HAnimSegment1133->setDEF("hanim_SEGMENT_FOR_r_hamate");
CTouchSensor* TouchSensor1134 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1134->setDescription("joint r_hamate segment SEGMENT_FOR_r_hamate");
HAnimSegment1133->addChildren(*TouchSensor1134);

CTransform* Transform1135 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1135->setTranslation(new float[3]{-0.1809,-0.1276,0.6973});
CShape* Shape1136 = (CShape *)(m_pScene.createNode("Shape"));
Shape1136->setUSE("JointShape");
Transform1135->addChild(*Shape1136);

HAnimSegment1133->addChildren(*Transform1135);

CHAnimSite* HAnimSite1137 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1137->setName("SEGMENT_FOR_r_hamate_tip");
HAnimSite1137->setDEF("hanim_SEGMENT_FOR_r_hamate_tip");
CTransform* Transform1138 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1138->setTranslation(new float[3]{-0.1809,-0.1276,0.6973});
CShape* Shape1139 = (CShape *)(m_pScene.createNode("Shape"));
Shape1139->setUSE("SiteShape");
Transform1138->addChild(*Shape1139);

HAnimSite1137->addChildren(*Transform1138);

HAnimSegment1133->addChildren(*HAnimSite1137);

HAnimJoint1132->addChildren(*HAnimSegment1133);

CHAnimJoint* HAnimJoint1140 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1140->setName("r_metacarpal_4");
HAnimJoint1140->setDEF("hanim_r_metacarpal_4");
HAnimJoint1140->setCenter(new float[3]{-0.1809,-0.1218,0.6777});
HAnimJoint1140->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1140->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1141 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1141->setName("SEGMENT_FOR_r_metacarpal_4");
HAnimSegment1141->setDEF("hanim_SEGMENT_FOR_r_metacarpal_4");
CTouchSensor* TouchSensor1142 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1142->setDescription("joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4");
HAnimSegment1141->addChildren(*TouchSensor1142);

CTransform* Transform1143 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1143->setTranslation(new float[3]{-0.1809,-0.1218,0.6777});
CShape* Shape1144 = (CShape *)(m_pScene.createNode("Shape"));
Shape1144->setUSE("JointShape");
Transform1143->addChild(*Shape1144);

HAnimSegment1141->addChildren(*Transform1143);

CHAnimSite* HAnimSite1145 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1145->setName("SEGMENT_FOR_r_metacarpal_4_tip");
HAnimSite1145->setDEF("hanim_SEGMENT_FOR_r_metacarpal_4_tip");
CTransform* Transform1146 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1146->setTranslation(new float[3]{-0.1809,-0.1218,0.6777});
CShape* Shape1147 = (CShape *)(m_pScene.createNode("Shape"));
Shape1147->setUSE("SiteShape");
Transform1146->addChild(*Shape1147);

HAnimSite1145->addChildren(*Transform1146);

HAnimSegment1141->addChildren(*HAnimSite1145);

HAnimJoint1140->addChildren(*HAnimSegment1141);

CHAnimJoint* HAnimJoint1148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1148->setName("r_carpal_proximal_phalanx_4");
HAnimJoint1148->setDEF("hanim_r_carpal_proximal_phalanx_4");
HAnimJoint1148->setCenter(new float[3]{-0.1835,-0.1233,0.6255});
HAnimJoint1148->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1148->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1149 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1149->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_4");
HAnimSegment1149->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4");
CTouchSensor* TouchSensor1150 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1150->setDescription("joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4");
HAnimSegment1149->addChildren(*TouchSensor1150);

CTransform* Transform1151 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1151->setTranslation(new float[3]{-0.1835,-0.1233,0.6255});
CShape* Shape1152 = (CShape *)(m_pScene.createNode("Shape"));
Shape1152->setUSE("JointShape");
Transform1151->addChild(*Shape1152);

HAnimSegment1149->addChildren(*Transform1151);

CHAnimSite* HAnimSite1153 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1153->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip");
HAnimSite1153->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip");
CTransform* Transform1154 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1154->setTranslation(new float[3]{-0.1835,-0.1233,0.6255});
CShape* Shape1155 = (CShape *)(m_pScene.createNode("Shape"));
Shape1155->setUSE("SiteShape");
Transform1154->addChild(*Shape1155);

HAnimSite1153->addChildren(*Transform1154);

HAnimSegment1149->addChildren(*HAnimSite1153);

HAnimJoint1148->addChildren(*HAnimSegment1149);

CHAnimJoint* HAnimJoint1156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1156->setName("r_carpal_middle_phalanx_4");
HAnimJoint1156->setDEF("hanim_r_carpal_middle_phalanx_4");
HAnimJoint1156->setCenter(new float[3]{-0.1815,-0.1225,0.598});
HAnimJoint1156->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1156->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1157 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1157->setName("SEGMENT_FOR_r_carpal_middle_phalanx_4");
HAnimSegment1157->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4");
CTouchSensor* TouchSensor1158 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1158->setDescription("joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4");
HAnimSegment1157->addChildren(*TouchSensor1158);

CTransform* Transform1159 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1159->setTranslation(new float[3]{-0.1815,-0.1225,0.598});
CShape* Shape1160 = (CShape *)(m_pScene.createNode("Shape"));
Shape1160->setUSE("JointShape");
Transform1159->addChild(*Shape1160);

HAnimSegment1157->addChildren(*Transform1159);

CHAnimSite* HAnimSite1161 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1161->setName("SEGMENT_FOR_r_carpal_middle_phalanx_4_tip");
HAnimSite1161->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip");
CTransform* Transform1162 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1162->setTranslation(new float[3]{-0.1815,-0.1225,0.598});
CShape* Shape1163 = (CShape *)(m_pScene.createNode("Shape"));
Shape1163->setUSE("SiteShape");
Transform1162->addChild(*Shape1163);

HAnimSite1161->addChildren(*Transform1162);

HAnimSegment1157->addChildren(*HAnimSite1161);

HAnimJoint1156->addChildren(*HAnimSegment1157);

CHAnimJoint* HAnimJoint1164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1164->setName("r_carpal_distal_phalanx_4");
HAnimJoint1164->setDEF("hanim_r_carpal_distal_phalanx_4");
HAnimJoint1164->setCenter(new float[3]{-0.1805,-0.1217,0.5722});
HAnimJoint1164->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1164->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1165 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1165->setName("SEGMENT_FOR_r_carpal_distal_phalanx_4");
HAnimSegment1165->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4");
CTouchSensor* TouchSensor1166 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1166->setDescription("joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4");
HAnimSegment1165->addChildren(*TouchSensor1166);

CTransform* Transform1167 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1167->setTranslation(new float[3]{-0.1805,-0.1217,0.5722});
CShape* Shape1168 = (CShape *)(m_pScene.createNode("Shape"));
Shape1168->setUSE("JointShape");
Transform1167->addChild(*Shape1168);

HAnimSegment1165->addChildren(*Transform1167);

CHAnimSite* HAnimSite1169 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1169->setName("SEGMENT_FOR_r_carpal_distal_phalanx_4_tip");
HAnimSite1169->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip");
CTransform* Transform1170 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1170->setTranslation(new float[3]{-0.1805,-0.1217,0.5722});
CShape* Shape1171 = (CShape *)(m_pScene.createNode("Shape"));
Shape1171->setUSE("SiteShape");
Transform1170->addChild(*Shape1171);

HAnimSite1169->addChildren(*Transform1170);

HAnimSegment1165->addChildren(*HAnimSite1169);

HAnimJoint1164->addChildren(*HAnimSegment1165);

HAnimJoint1156->addChildren(*HAnimJoint1164);

HAnimJoint1148->addChildren(*HAnimJoint1156);

HAnimJoint1140->addChildren(*HAnimJoint1148);

HAnimJoint1132->addChildren(*HAnimJoint1140);

CHAnimJoint* HAnimJoint1172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1172->setName("r_metacarpal_5");
HAnimJoint1172->setDEF("hanim_r_metacarpal_5");
HAnimJoint1172->setCenter(new float[3]{-0.1814,-0.1347,0.6797});
HAnimJoint1172->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1172->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1173 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1173->setName("SEGMENT_FOR_r_metacarpal_5");
HAnimSegment1173->setDEF("hanim_SEGMENT_FOR_r_metacarpal_5");
CTouchSensor* TouchSensor1174 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1174->setDescription("joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5");
HAnimSegment1173->addChildren(*TouchSensor1174);

CTransform* Transform1175 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1175->setTranslation(new float[3]{-0.1814,-0.1347,0.6797});
CShape* Shape1176 = (CShape *)(m_pScene.createNode("Shape"));
Shape1176->setUSE("JointShape");
Transform1175->addChild(*Shape1176);

HAnimSegment1173->addChildren(*Transform1175);

CHAnimSite* HAnimSite1177 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1177->setName("SEGMENT_FOR_r_metacarpal_5_tip");
HAnimSite1177->setDEF("hanim_SEGMENT_FOR_r_metacarpal_5_tip");
CTransform* Transform1178 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1178->setTranslation(new float[3]{-0.1814,-0.1347,0.6797});
CShape* Shape1179 = (CShape *)(m_pScene.createNode("Shape"));
Shape1179->setUSE("SiteShape");
Transform1178->addChild(*Shape1179);

HAnimSite1177->addChildren(*Transform1178);

HAnimSegment1173->addChildren(*HAnimSite1177);

HAnimJoint1172->addChildren(*HAnimSegment1173);

CHAnimJoint* HAnimJoint1180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1180->setName("r_carpal_proximal_phalanx_5");
HAnimJoint1180->setDEF("hanim_r_carpal_proximal_phalanx_5");
HAnimJoint1180->setCenter(new float[3]{-0.1832,-0.1389,0.6295});
HAnimJoint1180->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1180->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1181 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1181->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_5");
HAnimSegment1181->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5");
CTouchSensor* TouchSensor1182 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1182->setDescription("joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5");
HAnimSegment1181->addChildren(*TouchSensor1182);

CTransform* Transform1183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1183->setTranslation(new float[3]{-0.1832,-0.1389,0.6295});
CShape* Shape1184 = (CShape *)(m_pScene.createNode("Shape"));
Shape1184->setUSE("JointShape");
Transform1183->addChild(*Shape1184);

HAnimSegment1181->addChildren(*Transform1183);

CHAnimSite* HAnimSite1185 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1185->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip");
HAnimSite1185->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip");
CTransform* Transform1186 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1186->setTranslation(new float[3]{-0.1832,-0.1389,0.6295});
CShape* Shape1187 = (CShape *)(m_pScene.createNode("Shape"));
Shape1187->setUSE("SiteShape");
Transform1186->addChild(*Shape1187);

HAnimSite1185->addChildren(*Transform1186);

HAnimSegment1181->addChildren(*HAnimSite1185);

HAnimJoint1180->addChildren(*HAnimSegment1181);

CHAnimJoint* HAnimJoint1188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1188->setName("r_carpal_middle_phalanx_5");
HAnimJoint1188->setDEF("hanim_r_carpal_middle_phalanx_5");
HAnimJoint1188->setCenter(new float[3]{-0.1815,-0.139,0.6124});
HAnimJoint1188->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1188->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1189 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1189->setName("SEGMENT_FOR_r_carpal_middle_phalanx_5");
HAnimSegment1189->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5");
CTouchSensor* TouchSensor1190 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1190->setDescription("joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5");
HAnimSegment1189->addChildren(*TouchSensor1190);

CTransform* Transform1191 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1191->setTranslation(new float[3]{-0.1815,-0.139,0.6124});
CShape* Shape1192 = (CShape *)(m_pScene.createNode("Shape"));
Shape1192->setUSE("JointShape");
Transform1191->addChild(*Shape1192);

HAnimSegment1189->addChildren(*Transform1191);

CHAnimSite* HAnimSite1193 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1193->setName("SEGMENT_FOR_r_carpal_middle_phalanx_5_tip");
HAnimSite1193->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip");
CTransform* Transform1194 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1194->setTranslation(new float[3]{-0.1815,-0.139,0.6124});
CShape* Shape1195 = (CShape *)(m_pScene.createNode("Shape"));
Shape1195->setUSE("SiteShape");
Transform1194->addChild(*Shape1195);

HAnimSite1193->addChildren(*Transform1194);

HAnimSegment1189->addChildren(*HAnimSite1193);

HAnimJoint1188->addChildren(*HAnimSegment1189);

CHAnimJoint* HAnimJoint1196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1196->setName("r_carpal_distal_phalanx_5");
HAnimJoint1196->setDEF("hanim_r_carpal_distal_phalanx_5");
HAnimJoint1196->setCenter(new float[3]{-0.1806,-0.1388,0.5938});
HAnimJoint1196->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1196->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1197 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1197->setName("SEGMENT_FOR_r_carpal_distal_phalanx_5");
HAnimSegment1197->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5");
CTouchSensor* TouchSensor1198 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1198->setDescription("joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5");
HAnimSegment1197->addChildren(*TouchSensor1198);

CTransform* Transform1199 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1199->setTranslation(new float[3]{-0.1806,-0.1388,0.5938});
CShape* Shape1200 = (CShape *)(m_pScene.createNode("Shape"));
Shape1200->setUSE("JointShape");
Transform1199->addChild(*Shape1200);

HAnimSegment1197->addChildren(*Transform1199);

CHAnimSite* HAnimSite1201 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1201->setName("SEGMENT_FOR_r_carpal_distal_phalanx_5_tip");
HAnimSite1201->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip");
CTransform* Transform1202 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1202->setTranslation(new float[3]{-0.1806,-0.1388,0.5938});
CShape* Shape1203 = (CShape *)(m_pScene.createNode("Shape"));
Shape1203->setUSE("SiteShape");
Transform1202->addChild(*Shape1203);

HAnimSite1201->addChildren(*Transform1202);

HAnimSegment1197->addChildren(*HAnimSite1201);

HAnimJoint1196->addChildren(*HAnimSegment1197);

HAnimJoint1188->addChildren(*HAnimJoint1196);

HAnimJoint1180->addChildren(*HAnimJoint1188);

HAnimJoint1172->addChildren(*HAnimJoint1180);

HAnimJoint1132->addChildren(*HAnimJoint1172);

HAnimJoint1012->addChildren(*HAnimJoint1132);

HAnimJoint1004->addChildren(*HAnimJoint1012);

HAnimJoint996->addChildren(*HAnimJoint1004);

HAnimJoint988->addChildren(*HAnimJoint996);

HAnimJoint980->addChildren(*HAnimJoint988);

HAnimJoint628->addChildren(*HAnimJoint980);

HAnimJoint620->addChildren(*HAnimJoint628);

HAnimJoint612->addChildren(*HAnimJoint620);

HAnimJoint604->addChildren(*HAnimJoint612);

HAnimJoint596->addChildren(*HAnimJoint604);

HAnimJoint588->addChildren(*HAnimJoint596);

HAnimJoint580->addChildren(*HAnimJoint588);

HAnimJoint572->addChildren(*HAnimJoint580);

HAnimJoint564->addChildren(*HAnimJoint572);

HAnimJoint556->addChildren(*HAnimJoint564);

HAnimJoint548->addChildren(*HAnimJoint556);

HAnimJoint540->addChildren(*HAnimJoint548);

HAnimJoint532->addChildren(*HAnimJoint540);

HAnimJoint524->addChildren(*HAnimJoint532);

HAnimJoint516->addChildren(*HAnimJoint524);

HAnimJoint508->addChildren(*HAnimJoint516);

HAnimJoint500->addChildren(*HAnimJoint508);

HAnimJoint36->addChildren(*HAnimJoint500);

HAnimJoint28->addChildren(*HAnimJoint36);

HAnimHumanoid27->setSkeleton(*HAnimJoint28);

CHAnimJoint* HAnimJoint1204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1204->setUSE("hanim_sacrum");
HAnimHumanoid27->addJoints(*HAnimJoint1204);

CHAnimJoint* HAnimJoint1205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1205->setUSE("hanim_pelvis");
HAnimHumanoid27->addJoints(*HAnimJoint1205);

CHAnimJoint* HAnimJoint1206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1206->setUSE("hanim_l_thigh");
HAnimHumanoid27->addJoints(*HAnimJoint1206);

CHAnimJoint* HAnimJoint1207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1207->setUSE("hanim_l_calf");
HAnimHumanoid27->addJoints(*HAnimJoint1207);

CHAnimJoint* HAnimJoint1208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1208->setUSE("hanim_l_talus");
HAnimHumanoid27->addJoints(*HAnimJoint1208);

CHAnimJoint* HAnimJoint1209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1209->setUSE("hanim_l_navicular");
HAnimHumanoid27->addJoints(*HAnimJoint1209);

CHAnimJoint* HAnimJoint1210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1210->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid27->addJoints(*HAnimJoint1210);

CHAnimJoint* HAnimJoint1211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1211->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid27->addJoints(*HAnimJoint1211);

CHAnimJoint* HAnimJoint1212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1212->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid27->addJoints(*HAnimJoint1212);

CHAnimJoint* HAnimJoint1213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1213->setUSE("hanim_l_tarsal_distal_phalanx_1");
HAnimHumanoid27->addJoints(*HAnimJoint1213);

CHAnimJoint* HAnimJoint1214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1214->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid27->addJoints(*HAnimJoint1214);

CHAnimJoint* HAnimJoint1215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1215->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid27->addJoints(*HAnimJoint1215);

CHAnimJoint* HAnimJoint1216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1216->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid27->addJoints(*HAnimJoint1216);

CHAnimJoint* HAnimJoint1217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1217->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid27->addJoints(*HAnimJoint1217);

CHAnimJoint* HAnimJoint1218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1218->setUSE("hanim_l_tarsal_distal_phalanx_2");
HAnimHumanoid27->addJoints(*HAnimJoint1218);

CHAnimJoint* HAnimJoint1219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1219->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid27->addJoints(*HAnimJoint1219);

CHAnimJoint* HAnimJoint1220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1220->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid27->addJoints(*HAnimJoint1220);

CHAnimJoint* HAnimJoint1221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1221->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid27->addJoints(*HAnimJoint1221);

CHAnimJoint* HAnimJoint1222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1222->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid27->addJoints(*HAnimJoint1222);

CHAnimJoint* HAnimJoint1223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1223->setUSE("hanim_l_tarsal_distal_phalanx_3");
HAnimHumanoid27->addJoints(*HAnimJoint1223);

CHAnimJoint* HAnimJoint1224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1224->setUSE("hanim_l_calcaneus");
HAnimHumanoid27->addJoints(*HAnimJoint1224);

CHAnimJoint* HAnimJoint1225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1225->setUSE("hanim_l_cuboid");
HAnimHumanoid27->addJoints(*HAnimJoint1225);

CHAnimJoint* HAnimJoint1226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1226->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid27->addJoints(*HAnimJoint1226);

CHAnimJoint* HAnimJoint1227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1227->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid27->addJoints(*HAnimJoint1227);

CHAnimJoint* HAnimJoint1228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1228->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid27->addJoints(*HAnimJoint1228);

CHAnimJoint* HAnimJoint1229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1229->setUSE("hanim_l_tarsal_distal_phalanx_4");
HAnimHumanoid27->addJoints(*HAnimJoint1229);

CHAnimJoint* HAnimJoint1230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1230->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid27->addJoints(*HAnimJoint1230);

CHAnimJoint* HAnimJoint1231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1231->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid27->addJoints(*HAnimJoint1231);

CHAnimJoint* HAnimJoint1232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1232->setUSE("hanim_l_tarsal_middle_phalanx_5");
HAnimHumanoid27->addJoints(*HAnimJoint1232);

CHAnimJoint* HAnimJoint1233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1233->setUSE("hanim_l_tarsal_distal_phalanx_5");
HAnimHumanoid27->addJoints(*HAnimJoint1233);

CHAnimJoint* HAnimJoint1234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1234->setUSE("hanim_r_thigh");
HAnimHumanoid27->addJoints(*HAnimJoint1234);

CHAnimJoint* HAnimJoint1235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1235->setUSE("hanim_r_calf");
HAnimHumanoid27->addJoints(*HAnimJoint1235);

CHAnimJoint* HAnimJoint1236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1236->setUSE("hanim_r_talus");
HAnimHumanoid27->addJoints(*HAnimJoint1236);

CHAnimJoint* HAnimJoint1237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1237->setUSE("hanim_r_navicular");
HAnimHumanoid27->addJoints(*HAnimJoint1237);

CHAnimJoint* HAnimJoint1238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1238->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid27->addJoints(*HAnimJoint1238);

CHAnimJoint* HAnimJoint1239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1239->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid27->addJoints(*HAnimJoint1239);

CHAnimJoint* HAnimJoint1240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1240->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid27->addJoints(*HAnimJoint1240);

CHAnimJoint* HAnimJoint1241 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1241->setUSE("hanim_r_tarsal_distal_phalanx_1");
HAnimHumanoid27->addJoints(*HAnimJoint1241);

CHAnimJoint* HAnimJoint1242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1242->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid27->addJoints(*HAnimJoint1242);

CHAnimJoint* HAnimJoint1243 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1243->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid27->addJoints(*HAnimJoint1243);

CHAnimJoint* HAnimJoint1244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1244->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid27->addJoints(*HAnimJoint1244);

CHAnimJoint* HAnimJoint1245 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1245->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid27->addJoints(*HAnimJoint1245);

CHAnimJoint* HAnimJoint1246 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1246->setUSE("hanim_r_tarsal_distal_phalanx_2");
HAnimHumanoid27->addJoints(*HAnimJoint1246);

CHAnimJoint* HAnimJoint1247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1247->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid27->addJoints(*HAnimJoint1247);

CHAnimJoint* HAnimJoint1248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1248->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid27->addJoints(*HAnimJoint1248);

CHAnimJoint* HAnimJoint1249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1249->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid27->addJoints(*HAnimJoint1249);

CHAnimJoint* HAnimJoint1250 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1250->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid27->addJoints(*HAnimJoint1250);

CHAnimJoint* HAnimJoint1251 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1251->setUSE("hanim_r_tarsal_distal_phalanx_3");
HAnimHumanoid27->addJoints(*HAnimJoint1251);

CHAnimJoint* HAnimJoint1252 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1252->setUSE("hanim_r_calcaneus");
HAnimHumanoid27->addJoints(*HAnimJoint1252);

CHAnimJoint* HAnimJoint1253 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1253->setUSE("hanim_r_cuboid");
HAnimHumanoid27->addJoints(*HAnimJoint1253);

CHAnimJoint* HAnimJoint1254 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1254->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid27->addJoints(*HAnimJoint1254);

CHAnimJoint* HAnimJoint1255 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1255->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid27->addJoints(*HAnimJoint1255);

CHAnimJoint* HAnimJoint1256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1256->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid27->addJoints(*HAnimJoint1256);

CHAnimJoint* HAnimJoint1257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1257->setUSE("hanim_r_tarsal_distal_phalanx_4");
HAnimHumanoid27->addJoints(*HAnimJoint1257);

CHAnimJoint* HAnimJoint1258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1258->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid27->addJoints(*HAnimJoint1258);

CHAnimJoint* HAnimJoint1259 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1259->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid27->addJoints(*HAnimJoint1259);

CHAnimJoint* HAnimJoint1260 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1260->setUSE("hanim_r_tarsal_middle_phalanx_5");
HAnimHumanoid27->addJoints(*HAnimJoint1260);

CHAnimJoint* HAnimJoint1261 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1261->setUSE("hanim_r_tarsal_distal_phalanx_5");
HAnimHumanoid27->addJoints(*HAnimJoint1261);

CHAnimJoint* HAnimJoint1262 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1262->setUSE("hanim_l5");
HAnimHumanoid27->addJoints(*HAnimJoint1262);

CHAnimJoint* HAnimJoint1263 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1263->setUSE("hanim_l4");
HAnimHumanoid27->addJoints(*HAnimJoint1263);

CHAnimJoint* HAnimJoint1264 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1264->setUSE("hanim_l3");
HAnimHumanoid27->addJoints(*HAnimJoint1264);

CHAnimJoint* HAnimJoint1265 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1265->setUSE("hanim_l2");
HAnimHumanoid27->addJoints(*HAnimJoint1265);

CHAnimJoint* HAnimJoint1266 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1266->setUSE("hanim_l1");
HAnimHumanoid27->addJoints(*HAnimJoint1266);

CHAnimJoint* HAnimJoint1267 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1267->setUSE("hanim_t12");
HAnimHumanoid27->addJoints(*HAnimJoint1267);

CHAnimJoint* HAnimJoint1268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1268->setUSE("hanim_t11");
HAnimHumanoid27->addJoints(*HAnimJoint1268);

CHAnimJoint* HAnimJoint1269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1269->setUSE("hanim_t10");
HAnimHumanoid27->addJoints(*HAnimJoint1269);

CHAnimJoint* HAnimJoint1270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1270->setUSE("hanim_t9");
HAnimHumanoid27->addJoints(*HAnimJoint1270);

CHAnimJoint* HAnimJoint1271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1271->setUSE("hanim_t8");
HAnimHumanoid27->addJoints(*HAnimJoint1271);

CHAnimJoint* HAnimJoint1272 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1272->setUSE("hanim_t7");
HAnimHumanoid27->addJoints(*HAnimJoint1272);

CHAnimJoint* HAnimJoint1273 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1273->setUSE("hanim_t6");
HAnimHumanoid27->addJoints(*HAnimJoint1273);

CHAnimJoint* HAnimJoint1274 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1274->setUSE("hanim_t5");
HAnimHumanoid27->addJoints(*HAnimJoint1274);

CHAnimJoint* HAnimJoint1275 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1275->setUSE("hanim_t4");
HAnimHumanoid27->addJoints(*HAnimJoint1275);

CHAnimJoint* HAnimJoint1276 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1276->setUSE("hanim_t3");
HAnimHumanoid27->addJoints(*HAnimJoint1276);

CHAnimJoint* HAnimJoint1277 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1277->setUSE("hanim_t2");
HAnimHumanoid27->addJoints(*HAnimJoint1277);

CHAnimJoint* HAnimJoint1278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1278->setUSE("hanim_t1");
HAnimHumanoid27->addJoints(*HAnimJoint1278);

CHAnimJoint* HAnimJoint1279 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1279->setUSE("hanim_c7");
HAnimHumanoid27->addJoints(*HAnimJoint1279);

CHAnimJoint* HAnimJoint1280 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1280->setUSE("hanim_c6");
HAnimHumanoid27->addJoints(*HAnimJoint1280);

CHAnimJoint* HAnimJoint1281 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1281->setUSE("hanim_c5");
HAnimHumanoid27->addJoints(*HAnimJoint1281);

CHAnimJoint* HAnimJoint1282 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1282->setUSE("hanim_c4");
HAnimHumanoid27->addJoints(*HAnimJoint1282);

CHAnimJoint* HAnimJoint1283 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1283->setUSE("hanim_c3");
HAnimHumanoid27->addJoints(*HAnimJoint1283);

CHAnimJoint* HAnimJoint1284 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1284->setUSE("hanim_c2");
HAnimHumanoid27->addJoints(*HAnimJoint1284);

CHAnimJoint* HAnimJoint1285 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1285->setUSE("hanim_c1");
HAnimHumanoid27->addJoints(*HAnimJoint1285);

CHAnimJoint* HAnimJoint1286 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1286->setUSE("hanim_skull");
HAnimHumanoid27->addJoints(*HAnimJoint1286);

CHAnimJoint* HAnimJoint1287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1287->setUSE("hanim_l_eyelid");
HAnimHumanoid27->addJoints(*HAnimJoint1287);

CHAnimJoint* HAnimJoint1288 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1288->setUSE("hanim_r_eyelid");
HAnimHumanoid27->addJoints(*HAnimJoint1288);

CHAnimJoint* HAnimJoint1289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1289->setUSE("hanim_l_eyeball");
HAnimHumanoid27->addJoints(*HAnimJoint1289);

CHAnimJoint* HAnimJoint1290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1290->setUSE("hanim_r_eyeball");
HAnimHumanoid27->addJoints(*HAnimJoint1290);

CHAnimJoint* HAnimJoint1291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1291->setUSE("hanim_l_eyebrow");
HAnimHumanoid27->addJoints(*HAnimJoint1291);

CHAnimJoint* HAnimJoint1292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1292->setUSE("hanim_r_eyebrow");
HAnimHumanoid27->addJoints(*HAnimJoint1292);

CHAnimJoint* HAnimJoint1293 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1293->setUSE("hanim_jaw");
HAnimHumanoid27->addJoints(*HAnimJoint1293);

CHAnimJoint* HAnimJoint1294 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1294->setUSE("hanim_l_clavicle");
HAnimHumanoid27->addJoints(*HAnimJoint1294);

CHAnimJoint* HAnimJoint1295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1295->setUSE("hanim_l_scapula");
HAnimHumanoid27->addJoints(*HAnimJoint1295);

CHAnimJoint* HAnimJoint1296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1296->setUSE("hanim_l_upperarm");
HAnimHumanoid27->addJoints(*HAnimJoint1296);

CHAnimJoint* HAnimJoint1297 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1297->setUSE("hanim_l_forearm");
HAnimHumanoid27->addJoints(*HAnimJoint1297);

CHAnimJoint* HAnimJoint1298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1298->setUSE("hanim_l_carpal");
HAnimHumanoid27->addJoints(*HAnimJoint1298);

CHAnimJoint* HAnimJoint1299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1299->setUSE("hanim_l_trapezium");
HAnimHumanoid27->addJoints(*HAnimJoint1299);

CHAnimJoint* HAnimJoint1300 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1300->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid27->addJoints(*HAnimJoint1300);

CHAnimJoint* HAnimJoint1301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1301->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid27->addJoints(*HAnimJoint1301);

CHAnimJoint* HAnimJoint1302 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1302->setUSE("hanim_l_carpal_distal_phalanx_1");
HAnimHumanoid27->addJoints(*HAnimJoint1302);

CHAnimJoint* HAnimJoint1303 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1303->setUSE("hanim_l_trapezoid");
HAnimHumanoid27->addJoints(*HAnimJoint1303);

CHAnimJoint* HAnimJoint1304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1304->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid27->addJoints(*HAnimJoint1304);

CHAnimJoint* HAnimJoint1305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1305->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid27->addJoints(*HAnimJoint1305);

CHAnimJoint* HAnimJoint1306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1306->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid27->addJoints(*HAnimJoint1306);

CHAnimJoint* HAnimJoint1307 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1307->setUSE("hanim_l_carpal_distal_phalanx_2");
HAnimHumanoid27->addJoints(*HAnimJoint1307);

CHAnimJoint* HAnimJoint1308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1308->setUSE("hanim_l_capitate");
HAnimHumanoid27->addJoints(*HAnimJoint1308);

CHAnimJoint* HAnimJoint1309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1309->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid27->addJoints(*HAnimJoint1309);

CHAnimJoint* HAnimJoint1310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1310->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid27->addJoints(*HAnimJoint1310);

CHAnimJoint* HAnimJoint1311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1311->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid27->addJoints(*HAnimJoint1311);

CHAnimJoint* HAnimJoint1312 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1312->setUSE("hanim_l_carpal_distal_phalanx_3");
HAnimHumanoid27->addJoints(*HAnimJoint1312);

CHAnimJoint* HAnimJoint1313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1313->setUSE("hanim_l_hamate");
HAnimHumanoid27->addJoints(*HAnimJoint1313);

CHAnimJoint* HAnimJoint1314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1314->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid27->addJoints(*HAnimJoint1314);

CHAnimJoint* HAnimJoint1315 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1315->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid27->addJoints(*HAnimJoint1315);

CHAnimJoint* HAnimJoint1316 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1316->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid27->addJoints(*HAnimJoint1316);

CHAnimJoint* HAnimJoint1317 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1317->setUSE("hanim_l_carpal_distal_phalanx_4");
HAnimHumanoid27->addJoints(*HAnimJoint1317);

CHAnimJoint* HAnimJoint1318 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1318->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid27->addJoints(*HAnimJoint1318);

CHAnimJoint* HAnimJoint1319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1319->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid27->addJoints(*HAnimJoint1319);

CHAnimJoint* HAnimJoint1320 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1320->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid27->addJoints(*HAnimJoint1320);

CHAnimJoint* HAnimJoint1321 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1321->setUSE("hanim_l_carpal_distal_phalanx_5");
HAnimHumanoid27->addJoints(*HAnimJoint1321);

CHAnimJoint* HAnimJoint1322 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1322->setUSE("hanim_r_clavicle");
HAnimHumanoid27->addJoints(*HAnimJoint1322);

CHAnimJoint* HAnimJoint1323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1323->setUSE("hanim_r_scapula");
HAnimHumanoid27->addJoints(*HAnimJoint1323);

CHAnimJoint* HAnimJoint1324 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1324->setUSE("hanim_r_upperarm");
HAnimHumanoid27->addJoints(*HAnimJoint1324);

CHAnimJoint* HAnimJoint1325 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1325->setUSE("hanim_r_forearm");
HAnimHumanoid27->addJoints(*HAnimJoint1325);

CHAnimJoint* HAnimJoint1326 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1326->setUSE("hanim_r_carpal");
HAnimHumanoid27->addJoints(*HAnimJoint1326);

CHAnimJoint* HAnimJoint1327 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1327->setUSE("hanim_r_trapezium");
HAnimHumanoid27->addJoints(*HAnimJoint1327);

CHAnimJoint* HAnimJoint1328 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1328->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid27->addJoints(*HAnimJoint1328);

CHAnimJoint* HAnimJoint1329 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1329->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid27->addJoints(*HAnimJoint1329);

CHAnimJoint* HAnimJoint1330 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1330->setUSE("hanim_r_carpal_distal_phalanx_1");
HAnimHumanoid27->addJoints(*HAnimJoint1330);

CHAnimJoint* HAnimJoint1331 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1331->setUSE("hanim_r_trapezoid");
HAnimHumanoid27->addJoints(*HAnimJoint1331);

CHAnimJoint* HAnimJoint1332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1332->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid27->addJoints(*HAnimJoint1332);

CHAnimJoint* HAnimJoint1333 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1333->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid27->addJoints(*HAnimJoint1333);

CHAnimJoint* HAnimJoint1334 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1334->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid27->addJoints(*HAnimJoint1334);

CHAnimJoint* HAnimJoint1335 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1335->setUSE("hanim_r_carpal_distal_phalanx_2");
HAnimHumanoid27->addJoints(*HAnimJoint1335);

CHAnimJoint* HAnimJoint1336 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1336->setUSE("hanim_r_capitate");
HAnimHumanoid27->addJoints(*HAnimJoint1336);

CHAnimJoint* HAnimJoint1337 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1337->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid27->addJoints(*HAnimJoint1337);

CHAnimJoint* HAnimJoint1338 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1338->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid27->addJoints(*HAnimJoint1338);

CHAnimJoint* HAnimJoint1339 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1339->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid27->addJoints(*HAnimJoint1339);

CHAnimJoint* HAnimJoint1340 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1340->setUSE("hanim_r_carpal_distal_phalanx_3");
HAnimHumanoid27->addJoints(*HAnimJoint1340);

CHAnimJoint* HAnimJoint1341 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1341->setUSE("hanim_r_hamate");
HAnimHumanoid27->addJoints(*HAnimJoint1341);

CHAnimJoint* HAnimJoint1342 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1342->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid27->addJoints(*HAnimJoint1342);

CHAnimJoint* HAnimJoint1343 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1343->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid27->addJoints(*HAnimJoint1343);

CHAnimJoint* HAnimJoint1344 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1344->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid27->addJoints(*HAnimJoint1344);

CHAnimJoint* HAnimJoint1345 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1345->setUSE("hanim_r_carpal_distal_phalanx_4");
HAnimHumanoid27->addJoints(*HAnimJoint1345);

CHAnimJoint* HAnimJoint1346 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1346->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid27->addJoints(*HAnimJoint1346);

CHAnimJoint* HAnimJoint1347 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1347->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid27->addJoints(*HAnimJoint1347);

CHAnimJoint* HAnimJoint1348 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1348->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid27->addJoints(*HAnimJoint1348);

CHAnimJoint* HAnimJoint1349 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1349->setUSE("hanim_r_carpal_distal_phalanx_5");
HAnimHumanoid27->addJoints(*HAnimJoint1349);

Transform26->addChildren(*HAnimHumanoid27);

group->addChildren(*Transform26);

CTimeSensor* TimeSensor1350 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1350->setDEF("Armature_Clock");
TimeSensor1350->setCycleInterval(10.416666666666666);
TimeSensor1350->setLoop(True);
group->addChildren(*TimeSensor1350);

CProximitySensor* ProximitySensor1351 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1351->setDEF("Armature_Close");
ProximitySensor1351->setSize(new float[3]{1000000,1000000,1000000});
group->addChildren(*ProximitySensor1351);

CROUTE* ROUTE1352 = new CROUTE();
ROUTE1352->setFromField("enterTime");
ROUTE1352->setFromNode("Armature_Close");
ROUTE1352->setToField("startTime");
ROUTE1352->setToNode("Armature_Clock");
group->addChildren(*ROUTE1352);

COrientationInterpolator* OrientationInterpolator1353 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1353->setDEF("Armature_OI_sacrum");
OrientationInterpolator1353->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1353->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1353);

COrientationInterpolator* OrientationInterpolator1354 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1354->setDEF("Armature_OI_pelvis");
OrientationInterpolator1354->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1354->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1354);

COrientationInterpolator* OrientationInterpolator1355 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1355->setDEF("Armature_OI_l_thigh");
OrientationInterpolator1355->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1355->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1355);

COrientationInterpolator* OrientationInterpolator1356 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1356->setDEF("Armature_OI_l_calf");
OrientationInterpolator1356->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1356->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1356);

COrientationInterpolator* OrientationInterpolator1357 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1357->setDEF("Armature_OI_l_talus");
OrientationInterpolator1357->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1357->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1357);

COrientationInterpolator* OrientationInterpolator1358 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1358->setDEF("Armature_OI_l_navicular");
OrientationInterpolator1358->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1358->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1358);

COrientationInterpolator* OrientationInterpolator1359 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1359->setDEF("Armature_OI_l_cuneiform_1");
OrientationInterpolator1359->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1359->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1359);

COrientationInterpolator* OrientationInterpolator1360 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1360->setDEF("Armature_OI_l_metatarsal_1");
OrientationInterpolator1360->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1360->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1360);

COrientationInterpolator* OrientationInterpolator1361 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1361->setDEF("Armature_OI_l_tarsal_proximal_phalanx_1");
OrientationInterpolator1361->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1361->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1361);

COrientationInterpolator* OrientationInterpolator1362 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1362->setDEF("Armature_OI_l_tarsal_distal_phalanx_1");
OrientationInterpolator1362->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1362->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1362);

COrientationInterpolator* OrientationInterpolator1363 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1363->setDEF("Armature_OI_l_cuneiform_2");
OrientationInterpolator1363->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1363->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1363);

COrientationInterpolator* OrientationInterpolator1364 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1364->setDEF("Armature_OI_l_metatarsal_2");
OrientationInterpolator1364->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1364->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1364);

COrientationInterpolator* OrientationInterpolator1365 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1365->setDEF("Armature_OI_l_tarsal_proximal_phalanx_2");
OrientationInterpolator1365->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1365->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1365);

COrientationInterpolator* OrientationInterpolator1366 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1366->setDEF("Armature_OI_l_tarsal_middle_phalanx_2");
OrientationInterpolator1366->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1366->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1366);

COrientationInterpolator* OrientationInterpolator1367 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1367->setDEF("Armature_OI_l_tarsal_distal_phalanx_2");
OrientationInterpolator1367->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1367->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1367);

COrientationInterpolator* OrientationInterpolator1368 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1368->setDEF("Armature_OI_l_cuneiform_3");
OrientationInterpolator1368->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1368->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1368);

COrientationInterpolator* OrientationInterpolator1369 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1369->setDEF("Armature_OI_l_metatarsal_3");
OrientationInterpolator1369->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1369->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1369);

COrientationInterpolator* OrientationInterpolator1370 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1370->setDEF("Armature_OI_l_tarsal_proximal_phalanx_3");
OrientationInterpolator1370->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1370->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1370);

COrientationInterpolator* OrientationInterpolator1371 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1371->setDEF("Armature_OI_l_tarsal_middle_phalanx_3");
OrientationInterpolator1371->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1371->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1371);

COrientationInterpolator* OrientationInterpolator1372 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1372->setDEF("Armature_OI_l_tarsal_distal_phalanx_3");
OrientationInterpolator1372->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1372->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1372);

COrientationInterpolator* OrientationInterpolator1373 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1373->setDEF("Armature_OI_l_calcaneus");
OrientationInterpolator1373->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1373->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1373);

COrientationInterpolator* OrientationInterpolator1374 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1374->setDEF("Armature_OI_l_cuboid");
OrientationInterpolator1374->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1374->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1374);

COrientationInterpolator* OrientationInterpolator1375 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1375->setDEF("Armature_OI_l_metatarsal_4");
OrientationInterpolator1375->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1375->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1375);

COrientationInterpolator* OrientationInterpolator1376 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1376->setDEF("Armature_OI_l_tarsal_proximal_phalanx_4");
OrientationInterpolator1376->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1376->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1376);

COrientationInterpolator* OrientationInterpolator1377 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1377->setDEF("Armature_OI_l_tarsal_middle_phalanx_4");
OrientationInterpolator1377->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1377->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1377);

COrientationInterpolator* OrientationInterpolator1378 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1378->setDEF("Armature_OI_l_tarsal_distal_phalanx_4");
OrientationInterpolator1378->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1378->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1378);

COrientationInterpolator* OrientationInterpolator1379 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1379->setDEF("Armature_OI_l_metatarsal_5");
OrientationInterpolator1379->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1379->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1379);

COrientationInterpolator* OrientationInterpolator1380 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1380->setDEF("Armature_OI_l_tarsal_proximal_phalanx_5");
OrientationInterpolator1380->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1380->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1380);

COrientationInterpolator* OrientationInterpolator1381 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1381->setDEF("Armature_OI_l_tarsal_middle_phalanx_5");
OrientationInterpolator1381->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1381->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1381);

COrientationInterpolator* OrientationInterpolator1382 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1382->setDEF("Armature_OI_l_tarsal_distal_phalanx_5");
OrientationInterpolator1382->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1382->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1382);

COrientationInterpolator* OrientationInterpolator1383 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1383->setDEF("Armature_OI_r_thigh");
OrientationInterpolator1383->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1383->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1383);

COrientationInterpolator* OrientationInterpolator1384 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1384->setDEF("Armature_OI_r_calf");
OrientationInterpolator1384->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1384->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1384);

COrientationInterpolator* OrientationInterpolator1385 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1385->setDEF("Armature_OI_r_talus");
OrientationInterpolator1385->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1385->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1385);

COrientationInterpolator* OrientationInterpolator1386 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1386->setDEF("Armature_OI_r_navicular");
OrientationInterpolator1386->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1386->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1386);

COrientationInterpolator* OrientationInterpolator1387 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1387->setDEF("Armature_OI_r_cuneiform_1");
OrientationInterpolator1387->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1387->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1387);

COrientationInterpolator* OrientationInterpolator1388 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1388->setDEF("Armature_OI_r_metatarsal_1");
OrientationInterpolator1388->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1388->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1388);

COrientationInterpolator* OrientationInterpolator1389 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1389->setDEF("Armature_OI_r_tarsal_proximal_phalanx_1");
OrientationInterpolator1389->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1389->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1389);

COrientationInterpolator* OrientationInterpolator1390 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1390->setDEF("Armature_OI_r_tarsal_distal_phalanx_1");
OrientationInterpolator1390->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1390->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1390);

COrientationInterpolator* OrientationInterpolator1391 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1391->setDEF("Armature_OI_r_cuneiform_2");
OrientationInterpolator1391->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1391->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1391);

COrientationInterpolator* OrientationInterpolator1392 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1392->setDEF("Armature_OI_r_metatarsal_2");
OrientationInterpolator1392->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1392->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1392);

COrientationInterpolator* OrientationInterpolator1393 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1393->setDEF("Armature_OI_r_tarsal_proximal_phalanx_2");
OrientationInterpolator1393->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1393->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1393);

COrientationInterpolator* OrientationInterpolator1394 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1394->setDEF("Armature_OI_r_tarsal_middle_phalanx_2");
OrientationInterpolator1394->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1394->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1394);

COrientationInterpolator* OrientationInterpolator1395 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1395->setDEF("Armature_OI_r_tarsal_distal_phalanx_2");
OrientationInterpolator1395->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1395->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1395);

COrientationInterpolator* OrientationInterpolator1396 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1396->setDEF("Armature_OI_r_cuneiform_3");
OrientationInterpolator1396->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1396->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1396);

COrientationInterpolator* OrientationInterpolator1397 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1397->setDEF("Armature_OI_r_metatarsal_3");
OrientationInterpolator1397->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1397->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1397);

COrientationInterpolator* OrientationInterpolator1398 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1398->setDEF("Armature_OI_r_tarsal_proximal_phalanx_3");
OrientationInterpolator1398->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1398->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1398);

COrientationInterpolator* OrientationInterpolator1399 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1399->setDEF("Armature_OI_r_tarsal_middle_phalanx_3");
OrientationInterpolator1399->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1399->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1399);

COrientationInterpolator* OrientationInterpolator1400 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1400->setDEF("Armature_OI_r_tarsal_distal_phalanx_3");
OrientationInterpolator1400->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1400->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1400);

COrientationInterpolator* OrientationInterpolator1401 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1401->setDEF("Armature_OI_r_calcaneus");
OrientationInterpolator1401->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1401->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1401);

COrientationInterpolator* OrientationInterpolator1402 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1402->setDEF("Armature_OI_r_cuboid");
OrientationInterpolator1402->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1402->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1402);

COrientationInterpolator* OrientationInterpolator1403 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1403->setDEF("Armature_OI_r_metatarsal_4");
OrientationInterpolator1403->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1403->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1403);

COrientationInterpolator* OrientationInterpolator1404 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1404->setDEF("Armature_OI_r_tarsal_proximal_phalanx_4");
OrientationInterpolator1404->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1404->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1404);

COrientationInterpolator* OrientationInterpolator1405 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1405->setDEF("Armature_OI_r_tarsal_middle_phalanx_4");
OrientationInterpolator1405->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1405->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1405);

COrientationInterpolator* OrientationInterpolator1406 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1406->setDEF("Armature_OI_r_tarsal_distal_phalanx_4");
OrientationInterpolator1406->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1406->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1406);

COrientationInterpolator* OrientationInterpolator1407 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1407->setDEF("Armature_OI_r_metatarsal_5");
OrientationInterpolator1407->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1407->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1407);

COrientationInterpolator* OrientationInterpolator1408 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1408->setDEF("Armature_OI_r_tarsal_proximal_phalanx_5");
OrientationInterpolator1408->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1408->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1408);

COrientationInterpolator* OrientationInterpolator1409 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1409->setDEF("Armature_OI_r_tarsal_middle_phalanx_5");
OrientationInterpolator1409->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1409->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1409);

COrientationInterpolator* OrientationInterpolator1410 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1410->setDEF("Armature_OI_r_tarsal_distal_phalanx_5");
OrientationInterpolator1410->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1410->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1410);

COrientationInterpolator* OrientationInterpolator1411 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1411->setDEF("Armature_OI_l5");
OrientationInterpolator1411->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1411->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1411);

COrientationInterpolator* OrientationInterpolator1412 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1412->setDEF("Armature_OI_l4");
OrientationInterpolator1412->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1412->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1412);

COrientationInterpolator* OrientationInterpolator1413 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1413->setDEF("Armature_OI_l3");
OrientationInterpolator1413->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1413->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1413);

COrientationInterpolator* OrientationInterpolator1414 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1414->setDEF("Armature_OI_l2");
OrientationInterpolator1414->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1414->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1414);

COrientationInterpolator* OrientationInterpolator1415 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1415->setDEF("Armature_OI_l1");
OrientationInterpolator1415->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1415->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1415);

COrientationInterpolator* OrientationInterpolator1416 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1416->setDEF("Armature_OI_t12");
OrientationInterpolator1416->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1416->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1416);

COrientationInterpolator* OrientationInterpolator1417 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1417->setDEF("Armature_OI_t11");
OrientationInterpolator1417->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1417->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1417);

COrientationInterpolator* OrientationInterpolator1418 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1418->setDEF("Armature_OI_t10");
OrientationInterpolator1418->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1418->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1418);

COrientationInterpolator* OrientationInterpolator1419 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1419->setDEF("Armature_OI_t9");
OrientationInterpolator1419->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1419->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1419);

COrientationInterpolator* OrientationInterpolator1420 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1420->setDEF("Armature_OI_t8");
OrientationInterpolator1420->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1420->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1420);

COrientationInterpolator* OrientationInterpolator1421 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1421->setDEF("Armature_OI_t7");
OrientationInterpolator1421->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1421->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1421);

COrientationInterpolator* OrientationInterpolator1422 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1422->setDEF("Armature_OI_t6");
OrientationInterpolator1422->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1422->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1422);

COrientationInterpolator* OrientationInterpolator1423 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1423->setDEF("Armature_OI_t5");
OrientationInterpolator1423->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1423->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1423);

COrientationInterpolator* OrientationInterpolator1424 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1424->setDEF("Armature_OI_t4");
OrientationInterpolator1424->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1424->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1424);

COrientationInterpolator* OrientationInterpolator1425 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1425->setDEF("Armature_OI_t3");
OrientationInterpolator1425->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1425->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1425);

COrientationInterpolator* OrientationInterpolator1426 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1426->setDEF("Armature_OI_t2");
OrientationInterpolator1426->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1426->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1426);

COrientationInterpolator* OrientationInterpolator1427 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1427->setDEF("Armature_OI_t1");
OrientationInterpolator1427->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1427->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1427);

COrientationInterpolator* OrientationInterpolator1428 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1428->setDEF("Armature_OI_c7");
OrientationInterpolator1428->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1428->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1428);

COrientationInterpolator* OrientationInterpolator1429 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1429->setDEF("Armature_OI_c6");
OrientationInterpolator1429->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1429->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1429);

COrientationInterpolator* OrientationInterpolator1430 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1430->setDEF("Armature_OI_c5");
OrientationInterpolator1430->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1430->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1430);

COrientationInterpolator* OrientationInterpolator1431 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1431->setDEF("Armature_OI_c4");
OrientationInterpolator1431->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1431->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1431);

COrientationInterpolator* OrientationInterpolator1432 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1432->setDEF("Armature_OI_c3");
OrientationInterpolator1432->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1432->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1432);

COrientationInterpolator* OrientationInterpolator1433 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1433->setDEF("Armature_OI_c2");
OrientationInterpolator1433->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1433->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1433);

COrientationInterpolator* OrientationInterpolator1434 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1434->setDEF("Armature_OI_c1");
OrientationInterpolator1434->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1434->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1434);

COrientationInterpolator* OrientationInterpolator1435 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1435->setDEF("Armature_OI_skull");
OrientationInterpolator1435->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1435->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1435);

COrientationInterpolator* OrientationInterpolator1436 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1436->setDEF("Armature_OI_l_eyelid");
OrientationInterpolator1436->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1436->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1436);

COrientationInterpolator* OrientationInterpolator1437 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1437->setDEF("Armature_OI_r_eyelid");
OrientationInterpolator1437->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1437->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1437);

COrientationInterpolator* OrientationInterpolator1438 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1438->setDEF("Armature_OI_l_eyeball");
OrientationInterpolator1438->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1438->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1438);

COrientationInterpolator* OrientationInterpolator1439 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1439->setDEF("Armature_OI_r_eyeball");
OrientationInterpolator1439->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1439->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1439);

COrientationInterpolator* OrientationInterpolator1440 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1440->setDEF("Armature_OI_l_eyebrow");
OrientationInterpolator1440->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1440->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1440);

COrientationInterpolator* OrientationInterpolator1441 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1441->setDEF("Armature_OI_r_eyebrow");
OrientationInterpolator1441->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1441->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1441);

COrientationInterpolator* OrientationInterpolator1442 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1442->setDEF("Armature_OI_jaw");
OrientationInterpolator1442->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1442->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1442);

COrientationInterpolator* OrientationInterpolator1443 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1443->setDEF("Armature_OI_l_clavicle");
OrientationInterpolator1443->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1443->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1443);

COrientationInterpolator* OrientationInterpolator1444 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1444->setDEF("Armature_OI_l_scapula");
OrientationInterpolator1444->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1444->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1444);

COrientationInterpolator* OrientationInterpolator1445 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1445->setDEF("Armature_OI_l_upperarm");
OrientationInterpolator1445->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1445->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1445);

COrientationInterpolator* OrientationInterpolator1446 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1446->setDEF("Armature_OI_l_forearm");
OrientationInterpolator1446->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1446->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1446);

COrientationInterpolator* OrientationInterpolator1447 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1447->setDEF("Armature_OI_l_carpal");
OrientationInterpolator1447->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1447->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1447);

COrientationInterpolator* OrientationInterpolator1448 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1448->setDEF("Armature_OI_l_trapezium");
OrientationInterpolator1448->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1448->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1448);

COrientationInterpolator* OrientationInterpolator1449 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1449->setDEF("Armature_OI_l_metacarpal_1");
OrientationInterpolator1449->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1449->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1449);

COrientationInterpolator* OrientationInterpolator1450 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1450->setDEF("Armature_OI_l_carpal_proximal_phalanx_1");
OrientationInterpolator1450->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1450->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1450);

COrientationInterpolator* OrientationInterpolator1451 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1451->setDEF("Armature_OI_l_carpal_distal_phalanx_1");
OrientationInterpolator1451->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1451->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1451);

COrientationInterpolator* OrientationInterpolator1452 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1452->setDEF("Armature_OI_l_trapezoid");
OrientationInterpolator1452->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1452->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1452);

COrientationInterpolator* OrientationInterpolator1453 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1453->setDEF("Armature_OI_l_metacarpal_2");
OrientationInterpolator1453->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1453->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1453);

COrientationInterpolator* OrientationInterpolator1454 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1454->setDEF("Armature_OI_l_carpal_proximal_phalanx_2");
OrientationInterpolator1454->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1454->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1454);

COrientationInterpolator* OrientationInterpolator1455 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1455->setDEF("Armature_OI_l_carpal_middle_phalanx_2");
OrientationInterpolator1455->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1455->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1455);

COrientationInterpolator* OrientationInterpolator1456 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1456->setDEF("Armature_OI_l_carpal_distal_phalanx_2");
OrientationInterpolator1456->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1456->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1456);

COrientationInterpolator* OrientationInterpolator1457 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1457->setDEF("Armature_OI_l_capitate");
OrientationInterpolator1457->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1457->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1457);

COrientationInterpolator* OrientationInterpolator1458 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1458->setDEF("Armature_OI_l_metacarpal_3");
OrientationInterpolator1458->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1458->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1458);

COrientationInterpolator* OrientationInterpolator1459 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1459->setDEF("Armature_OI_l_carpal_proximal_phalanx_3");
OrientationInterpolator1459->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1459->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1459);

COrientationInterpolator* OrientationInterpolator1460 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1460->setDEF("Armature_OI_l_carpal_middle_phalanx_3");
OrientationInterpolator1460->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1460->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1460);

COrientationInterpolator* OrientationInterpolator1461 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1461->setDEF("Armature_OI_l_carpal_distal_phalanx_3");
OrientationInterpolator1461->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1461->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1461);

COrientationInterpolator* OrientationInterpolator1462 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1462->setDEF("Armature_OI_l_hamate");
OrientationInterpolator1462->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1462->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1462);

COrientationInterpolator* OrientationInterpolator1463 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1463->setDEF("Armature_OI_l_metacarpal_4");
OrientationInterpolator1463->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1463->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1463);

COrientationInterpolator* OrientationInterpolator1464 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1464->setDEF("Armature_OI_l_carpal_proximal_phalanx_4");
OrientationInterpolator1464->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1464->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1464);

COrientationInterpolator* OrientationInterpolator1465 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1465->setDEF("Armature_OI_l_carpal_middle_phalanx_4");
OrientationInterpolator1465->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1465->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1465);

COrientationInterpolator* OrientationInterpolator1466 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1466->setDEF("Armature_OI_l_carpal_distal_phalanx_4");
OrientationInterpolator1466->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1466->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1466);

COrientationInterpolator* OrientationInterpolator1467 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1467->setDEF("Armature_OI_l_metacarpal_5");
OrientationInterpolator1467->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1467->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1467);

COrientationInterpolator* OrientationInterpolator1468 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1468->setDEF("Armature_OI_l_carpal_proximal_phalanx_5");
OrientationInterpolator1468->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1468->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1468);

COrientationInterpolator* OrientationInterpolator1469 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1469->setDEF("Armature_OI_l_carpal_middle_phalanx_5");
OrientationInterpolator1469->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1469->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1469);

COrientationInterpolator* OrientationInterpolator1470 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1470->setDEF("Armature_OI_l_carpal_distal_phalanx_5");
OrientationInterpolator1470->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1470->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1470);

COrientationInterpolator* OrientationInterpolator1471 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1471->setDEF("Armature_OI_r_clavicle");
OrientationInterpolator1471->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1471->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1471);

COrientationInterpolator* OrientationInterpolator1472 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1472->setDEF("Armature_OI_r_scapula");
OrientationInterpolator1472->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1472->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1472);

COrientationInterpolator* OrientationInterpolator1473 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1473->setDEF("Armature_OI_r_upperarm");
OrientationInterpolator1473->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1473->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1473);

COrientationInterpolator* OrientationInterpolator1474 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1474->setDEF("Armature_OI_r_forearm");
OrientationInterpolator1474->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1474->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1474);

COrientationInterpolator* OrientationInterpolator1475 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1475->setDEF("Armature_OI_r_carpal");
OrientationInterpolator1475->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1475->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1475);

COrientationInterpolator* OrientationInterpolator1476 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1476->setDEF("Armature_OI_r_trapezium");
OrientationInterpolator1476->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1476->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1476);

COrientationInterpolator* OrientationInterpolator1477 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1477->setDEF("Armature_OI_r_metacarpal_1");
OrientationInterpolator1477->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1477->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1477);

COrientationInterpolator* OrientationInterpolator1478 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1478->setDEF("Armature_OI_r_carpal_proximal_phalanx_1");
OrientationInterpolator1478->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1478->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1478);

COrientationInterpolator* OrientationInterpolator1479 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1479->setDEF("Armature_OI_r_carpal_distal_phalanx_1");
OrientationInterpolator1479->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1479->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1479);

COrientationInterpolator* OrientationInterpolator1480 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1480->setDEF("Armature_OI_r_trapezoid");
OrientationInterpolator1480->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1480->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1480);

COrientationInterpolator* OrientationInterpolator1481 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1481->setDEF("Armature_OI_r_metacarpal_2");
OrientationInterpolator1481->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1481->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1481);

COrientationInterpolator* OrientationInterpolator1482 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1482->setDEF("Armature_OI_r_carpal_proximal_phalanx_2");
OrientationInterpolator1482->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1482->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1482);

COrientationInterpolator* OrientationInterpolator1483 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1483->setDEF("Armature_OI_r_carpal_middle_phalanx_2");
OrientationInterpolator1483->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1483->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1483);

COrientationInterpolator* OrientationInterpolator1484 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1484->setDEF("Armature_OI_r_carpal_distal_phalanx_2");
OrientationInterpolator1484->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1484->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1484);

COrientationInterpolator* OrientationInterpolator1485 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1485->setDEF("Armature_OI_r_capitate");
OrientationInterpolator1485->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1485->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1485);

COrientationInterpolator* OrientationInterpolator1486 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1486->setDEF("Armature_OI_r_metacarpal_3");
OrientationInterpolator1486->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1486->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1486);

COrientationInterpolator* OrientationInterpolator1487 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1487->setDEF("Armature_OI_r_carpal_proximal_phalanx_3");
OrientationInterpolator1487->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1487->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1487);

COrientationInterpolator* OrientationInterpolator1488 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1488->setDEF("Armature_OI_r_carpal_middle_phalanx_3");
OrientationInterpolator1488->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1488->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1488);

COrientationInterpolator* OrientationInterpolator1489 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1489->setDEF("Armature_OI_r_carpal_distal_phalanx_3");
OrientationInterpolator1489->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1489->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1489);

COrientationInterpolator* OrientationInterpolator1490 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1490->setDEF("Armature_OI_r_hamate");
OrientationInterpolator1490->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1490->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1490);

COrientationInterpolator* OrientationInterpolator1491 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1491->setDEF("Armature_OI_r_metacarpal_4");
OrientationInterpolator1491->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1491->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1491);

COrientationInterpolator* OrientationInterpolator1492 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1492->setDEF("Armature_OI_r_carpal_proximal_phalanx_4");
OrientationInterpolator1492->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1492->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1492);

COrientationInterpolator* OrientationInterpolator1493 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1493->setDEF("Armature_OI_r_carpal_middle_phalanx_4");
OrientationInterpolator1493->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1493->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1493);

COrientationInterpolator* OrientationInterpolator1494 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1494->setDEF("Armature_OI_r_carpal_distal_phalanx_4");
OrientationInterpolator1494->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1494->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1494);

COrientationInterpolator* OrientationInterpolator1495 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1495->setDEF("Armature_OI_r_metacarpal_5");
OrientationInterpolator1495->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1495->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1495);

COrientationInterpolator* OrientationInterpolator1496 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1496->setDEF("Armature_OI_r_carpal_proximal_phalanx_5");
OrientationInterpolator1496->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1496->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1496);

COrientationInterpolator* OrientationInterpolator1497 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1497->setDEF("Armature_OI_r_carpal_middle_phalanx_5");
OrientationInterpolator1497->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1497->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1497);

COrientationInterpolator* OrientationInterpolator1498 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1498->setDEF("Armature_OI_r_carpal_distal_phalanx_5");
OrientationInterpolator1498->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1498->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1498);

CROUTE* ROUTE1499 = new CROUTE();
ROUTE1499->setFromField("fraction_changed");
ROUTE1499->setFromNode("Armature_Clock");
ROUTE1499->setToField("set_fraction");
ROUTE1499->setToNode("Armature_OI_sacrum");
group->addChildren(*ROUTE1499);

CROUTE* ROUTE1500 = new CROUTE();
ROUTE1500->setFromField("value_changed");
ROUTE1500->setFromNode("Armature_OI_sacrum");
ROUTE1500->setToField("rotation");
ROUTE1500->setToNode("hanim_sacrum");
group->addChildren(*ROUTE1500);

CROUTE* ROUTE1501 = new CROUTE();
ROUTE1501->setFromField("fraction_changed");
ROUTE1501->setFromNode("Armature_Clock");
ROUTE1501->setToField("set_fraction");
ROUTE1501->setToNode("Armature_OI_pelvis");
group->addChildren(*ROUTE1501);

CROUTE* ROUTE1502 = new CROUTE();
ROUTE1502->setFromField("value_changed");
ROUTE1502->setFromNode("Armature_OI_pelvis");
ROUTE1502->setToField("rotation");
ROUTE1502->setToNode("hanim_pelvis");
group->addChildren(*ROUTE1502);

CROUTE* ROUTE1503 = new CROUTE();
ROUTE1503->setFromField("fraction_changed");
ROUTE1503->setFromNode("Armature_Clock");
ROUTE1503->setToField("set_fraction");
ROUTE1503->setToNode("Armature_OI_l_thigh");
group->addChildren(*ROUTE1503);

CROUTE* ROUTE1504 = new CROUTE();
ROUTE1504->setFromField("value_changed");
ROUTE1504->setFromNode("Armature_OI_l_thigh");
ROUTE1504->setToField("rotation");
ROUTE1504->setToNode("hanim_l_thigh");
group->addChildren(*ROUTE1504);

CROUTE* ROUTE1505 = new CROUTE();
ROUTE1505->setFromField("fraction_changed");
ROUTE1505->setFromNode("Armature_Clock");
ROUTE1505->setToField("set_fraction");
ROUTE1505->setToNode("Armature_OI_l_calf");
group->addChildren(*ROUTE1505);

CROUTE* ROUTE1506 = new CROUTE();
ROUTE1506->setFromField("value_changed");
ROUTE1506->setFromNode("Armature_OI_l_calf");
ROUTE1506->setToField("rotation");
ROUTE1506->setToNode("hanim_l_calf");
group->addChildren(*ROUTE1506);

CROUTE* ROUTE1507 = new CROUTE();
ROUTE1507->setFromField("fraction_changed");
ROUTE1507->setFromNode("Armature_Clock");
ROUTE1507->setToField("set_fraction");
ROUTE1507->setToNode("Armature_OI_l_talus");
group->addChildren(*ROUTE1507);

CROUTE* ROUTE1508 = new CROUTE();
ROUTE1508->setFromField("value_changed");
ROUTE1508->setFromNode("Armature_OI_l_talus");
ROUTE1508->setToField("rotation");
ROUTE1508->setToNode("hanim_l_talus");
group->addChildren(*ROUTE1508);

CROUTE* ROUTE1509 = new CROUTE();
ROUTE1509->setFromField("fraction_changed");
ROUTE1509->setFromNode("Armature_Clock");
ROUTE1509->setToField("set_fraction");
ROUTE1509->setToNode("Armature_OI_l_navicular");
group->addChildren(*ROUTE1509);

CROUTE* ROUTE1510 = new CROUTE();
ROUTE1510->setFromField("value_changed");
ROUTE1510->setFromNode("Armature_OI_l_navicular");
ROUTE1510->setToField("rotation");
ROUTE1510->setToNode("hanim_l_navicular");
group->addChildren(*ROUTE1510);

CROUTE* ROUTE1511 = new CROUTE();
ROUTE1511->setFromField("fraction_changed");
ROUTE1511->setFromNode("Armature_Clock");
ROUTE1511->setToField("set_fraction");
ROUTE1511->setToNode("Armature_OI_l_cuneiform_1");
group->addChildren(*ROUTE1511);

CROUTE* ROUTE1512 = new CROUTE();
ROUTE1512->setFromField("value_changed");
ROUTE1512->setFromNode("Armature_OI_l_cuneiform_1");
ROUTE1512->setToField("rotation");
ROUTE1512->setToNode("hanim_l_cuneiform_1");
group->addChildren(*ROUTE1512);

CROUTE* ROUTE1513 = new CROUTE();
ROUTE1513->setFromField("fraction_changed");
ROUTE1513->setFromNode("Armature_Clock");
ROUTE1513->setToField("set_fraction");
ROUTE1513->setToNode("Armature_OI_l_metatarsal_1");
group->addChildren(*ROUTE1513);

CROUTE* ROUTE1514 = new CROUTE();
ROUTE1514->setFromField("value_changed");
ROUTE1514->setFromNode("Armature_OI_l_metatarsal_1");
ROUTE1514->setToField("rotation");
ROUTE1514->setToNode("hanim_l_metatarsal_1");
group->addChildren(*ROUTE1514);

CROUTE* ROUTE1515 = new CROUTE();
ROUTE1515->setFromField("fraction_changed");
ROUTE1515->setFromNode("Armature_Clock");
ROUTE1515->setToField("set_fraction");
ROUTE1515->setToNode("Armature_OI_l_tarsal_proximal_phalanx_1");
group->addChildren(*ROUTE1515);

CROUTE* ROUTE1516 = new CROUTE();
ROUTE1516->setFromField("value_changed");
ROUTE1516->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_1");
ROUTE1516->setToField("rotation");
ROUTE1516->setToNode("hanim_l_tarsal_proximal_phalanx_1");
group->addChildren(*ROUTE1516);

CROUTE* ROUTE1517 = new CROUTE();
ROUTE1517->setFromField("fraction_changed");
ROUTE1517->setFromNode("Armature_Clock");
ROUTE1517->setToField("set_fraction");
ROUTE1517->setToNode("Armature_OI_l_tarsal_distal_phalanx_1");
group->addChildren(*ROUTE1517);

CROUTE* ROUTE1518 = new CROUTE();
ROUTE1518->setFromField("value_changed");
ROUTE1518->setFromNode("Armature_OI_l_tarsal_distal_phalanx_1");
ROUTE1518->setToField("rotation");
ROUTE1518->setToNode("hanim_l_tarsal_distal_phalanx_1");
group->addChildren(*ROUTE1518);

CROUTE* ROUTE1519 = new CROUTE();
ROUTE1519->setFromField("fraction_changed");
ROUTE1519->setFromNode("Armature_Clock");
ROUTE1519->setToField("set_fraction");
ROUTE1519->setToNode("Armature_OI_l_cuneiform_2");
group->addChildren(*ROUTE1519);

CROUTE* ROUTE1520 = new CROUTE();
ROUTE1520->setFromField("value_changed");
ROUTE1520->setFromNode("Armature_OI_l_cuneiform_2");
ROUTE1520->setToField("rotation");
ROUTE1520->setToNode("hanim_l_cuneiform_2");
group->addChildren(*ROUTE1520);

CROUTE* ROUTE1521 = new CROUTE();
ROUTE1521->setFromField("fraction_changed");
ROUTE1521->setFromNode("Armature_Clock");
ROUTE1521->setToField("set_fraction");
ROUTE1521->setToNode("Armature_OI_l_metatarsal_2");
group->addChildren(*ROUTE1521);

CROUTE* ROUTE1522 = new CROUTE();
ROUTE1522->setFromField("value_changed");
ROUTE1522->setFromNode("Armature_OI_l_metatarsal_2");
ROUTE1522->setToField("rotation");
ROUTE1522->setToNode("hanim_l_metatarsal_2");
group->addChildren(*ROUTE1522);

CROUTE* ROUTE1523 = new CROUTE();
ROUTE1523->setFromField("fraction_changed");
ROUTE1523->setFromNode("Armature_Clock");
ROUTE1523->setToField("set_fraction");
ROUTE1523->setToNode("Armature_OI_l_tarsal_proximal_phalanx_2");
group->addChildren(*ROUTE1523);

CROUTE* ROUTE1524 = new CROUTE();
ROUTE1524->setFromField("value_changed");
ROUTE1524->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_2");
ROUTE1524->setToField("rotation");
ROUTE1524->setToNode("hanim_l_tarsal_proximal_phalanx_2");
group->addChildren(*ROUTE1524);

CROUTE* ROUTE1525 = new CROUTE();
ROUTE1525->setFromField("fraction_changed");
ROUTE1525->setFromNode("Armature_Clock");
ROUTE1525->setToField("set_fraction");
ROUTE1525->setToNode("Armature_OI_l_tarsal_middle_phalanx_2");
group->addChildren(*ROUTE1525);

CROUTE* ROUTE1526 = new CROUTE();
ROUTE1526->setFromField("value_changed");
ROUTE1526->setFromNode("Armature_OI_l_tarsal_middle_phalanx_2");
ROUTE1526->setToField("rotation");
ROUTE1526->setToNode("hanim_l_tarsal_middle_phalanx_2");
group->addChildren(*ROUTE1526);

CROUTE* ROUTE1527 = new CROUTE();
ROUTE1527->setFromField("fraction_changed");
ROUTE1527->setFromNode("Armature_Clock");
ROUTE1527->setToField("set_fraction");
ROUTE1527->setToNode("Armature_OI_l_tarsal_distal_phalanx_2");
group->addChildren(*ROUTE1527);

CROUTE* ROUTE1528 = new CROUTE();
ROUTE1528->setFromField("value_changed");
ROUTE1528->setFromNode("Armature_OI_l_tarsal_distal_phalanx_2");
ROUTE1528->setToField("rotation");
ROUTE1528->setToNode("hanim_l_tarsal_distal_phalanx_2");
group->addChildren(*ROUTE1528);

CROUTE* ROUTE1529 = new CROUTE();
ROUTE1529->setFromField("fraction_changed");
ROUTE1529->setFromNode("Armature_Clock");
ROUTE1529->setToField("set_fraction");
ROUTE1529->setToNode("Armature_OI_l_cuneiform_3");
group->addChildren(*ROUTE1529);

CROUTE* ROUTE1530 = new CROUTE();
ROUTE1530->setFromField("value_changed");
ROUTE1530->setFromNode("Armature_OI_l_cuneiform_3");
ROUTE1530->setToField("rotation");
ROUTE1530->setToNode("hanim_l_cuneiform_3");
group->addChildren(*ROUTE1530);

CROUTE* ROUTE1531 = new CROUTE();
ROUTE1531->setFromField("fraction_changed");
ROUTE1531->setFromNode("Armature_Clock");
ROUTE1531->setToField("set_fraction");
ROUTE1531->setToNode("Armature_OI_l_metatarsal_3");
group->addChildren(*ROUTE1531);

CROUTE* ROUTE1532 = new CROUTE();
ROUTE1532->setFromField("value_changed");
ROUTE1532->setFromNode("Armature_OI_l_metatarsal_3");
ROUTE1532->setToField("rotation");
ROUTE1532->setToNode("hanim_l_metatarsal_3");
group->addChildren(*ROUTE1532);

CROUTE* ROUTE1533 = new CROUTE();
ROUTE1533->setFromField("fraction_changed");
ROUTE1533->setFromNode("Armature_Clock");
ROUTE1533->setToField("set_fraction");
ROUTE1533->setToNode("Armature_OI_l_tarsal_proximal_phalanx_3");
group->addChildren(*ROUTE1533);

CROUTE* ROUTE1534 = new CROUTE();
ROUTE1534->setFromField("value_changed");
ROUTE1534->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_3");
ROUTE1534->setToField("rotation");
ROUTE1534->setToNode("hanim_l_tarsal_proximal_phalanx_3");
group->addChildren(*ROUTE1534);

CROUTE* ROUTE1535 = new CROUTE();
ROUTE1535->setFromField("fraction_changed");
ROUTE1535->setFromNode("Armature_Clock");
ROUTE1535->setToField("set_fraction");
ROUTE1535->setToNode("Armature_OI_l_tarsal_middle_phalanx_3");
group->addChildren(*ROUTE1535);

CROUTE* ROUTE1536 = new CROUTE();
ROUTE1536->setFromField("value_changed");
ROUTE1536->setFromNode("Armature_OI_l_tarsal_middle_phalanx_3");
ROUTE1536->setToField("rotation");
ROUTE1536->setToNode("hanim_l_tarsal_middle_phalanx_3");
group->addChildren(*ROUTE1536);

CROUTE* ROUTE1537 = new CROUTE();
ROUTE1537->setFromField("fraction_changed");
ROUTE1537->setFromNode("Armature_Clock");
ROUTE1537->setToField("set_fraction");
ROUTE1537->setToNode("Armature_OI_l_tarsal_distal_phalanx_3");
group->addChildren(*ROUTE1537);

CROUTE* ROUTE1538 = new CROUTE();
ROUTE1538->setFromField("value_changed");
ROUTE1538->setFromNode("Armature_OI_l_tarsal_distal_phalanx_3");
ROUTE1538->setToField("rotation");
ROUTE1538->setToNode("hanim_l_tarsal_distal_phalanx_3");
group->addChildren(*ROUTE1538);

CROUTE* ROUTE1539 = new CROUTE();
ROUTE1539->setFromField("fraction_changed");
ROUTE1539->setFromNode("Armature_Clock");
ROUTE1539->setToField("set_fraction");
ROUTE1539->setToNode("Armature_OI_l_calcaneus");
group->addChildren(*ROUTE1539);

CROUTE* ROUTE1540 = new CROUTE();
ROUTE1540->setFromField("value_changed");
ROUTE1540->setFromNode("Armature_OI_l_calcaneus");
ROUTE1540->setToField("rotation");
ROUTE1540->setToNode("hanim_l_calcaneus");
group->addChildren(*ROUTE1540);

CROUTE* ROUTE1541 = new CROUTE();
ROUTE1541->setFromField("fraction_changed");
ROUTE1541->setFromNode("Armature_Clock");
ROUTE1541->setToField("set_fraction");
ROUTE1541->setToNode("Armature_OI_l_cuboid");
group->addChildren(*ROUTE1541);

CROUTE* ROUTE1542 = new CROUTE();
ROUTE1542->setFromField("value_changed");
ROUTE1542->setFromNode("Armature_OI_l_cuboid");
ROUTE1542->setToField("rotation");
ROUTE1542->setToNode("hanim_l_cuboid");
group->addChildren(*ROUTE1542);

CROUTE* ROUTE1543 = new CROUTE();
ROUTE1543->setFromField("fraction_changed");
ROUTE1543->setFromNode("Armature_Clock");
ROUTE1543->setToField("set_fraction");
ROUTE1543->setToNode("Armature_OI_l_metatarsal_4");
group->addChildren(*ROUTE1543);

CROUTE* ROUTE1544 = new CROUTE();
ROUTE1544->setFromField("value_changed");
ROUTE1544->setFromNode("Armature_OI_l_metatarsal_4");
ROUTE1544->setToField("rotation");
ROUTE1544->setToNode("hanim_l_metatarsal_4");
group->addChildren(*ROUTE1544);

CROUTE* ROUTE1545 = new CROUTE();
ROUTE1545->setFromField("fraction_changed");
ROUTE1545->setFromNode("Armature_Clock");
ROUTE1545->setToField("set_fraction");
ROUTE1545->setToNode("Armature_OI_l_tarsal_proximal_phalanx_4");
group->addChildren(*ROUTE1545);

CROUTE* ROUTE1546 = new CROUTE();
ROUTE1546->setFromField("value_changed");
ROUTE1546->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_4");
ROUTE1546->setToField("rotation");
ROUTE1546->setToNode("hanim_l_tarsal_proximal_phalanx_4");
group->addChildren(*ROUTE1546);

CROUTE* ROUTE1547 = new CROUTE();
ROUTE1547->setFromField("fraction_changed");
ROUTE1547->setFromNode("Armature_Clock");
ROUTE1547->setToField("set_fraction");
ROUTE1547->setToNode("Armature_OI_l_tarsal_middle_phalanx_4");
group->addChildren(*ROUTE1547);

CROUTE* ROUTE1548 = new CROUTE();
ROUTE1548->setFromField("value_changed");
ROUTE1548->setFromNode("Armature_OI_l_tarsal_middle_phalanx_4");
ROUTE1548->setToField("rotation");
ROUTE1548->setToNode("hanim_l_tarsal_middle_phalanx_4");
group->addChildren(*ROUTE1548);

CROUTE* ROUTE1549 = new CROUTE();
ROUTE1549->setFromField("fraction_changed");
ROUTE1549->setFromNode("Armature_Clock");
ROUTE1549->setToField("set_fraction");
ROUTE1549->setToNode("Armature_OI_l_tarsal_distal_phalanx_4");
group->addChildren(*ROUTE1549);

CROUTE* ROUTE1550 = new CROUTE();
ROUTE1550->setFromField("value_changed");
ROUTE1550->setFromNode("Armature_OI_l_tarsal_distal_phalanx_4");
ROUTE1550->setToField("rotation");
ROUTE1550->setToNode("hanim_l_tarsal_distal_phalanx_4");
group->addChildren(*ROUTE1550);

CROUTE* ROUTE1551 = new CROUTE();
ROUTE1551->setFromField("fraction_changed");
ROUTE1551->setFromNode("Armature_Clock");
ROUTE1551->setToField("set_fraction");
ROUTE1551->setToNode("Armature_OI_l_metatarsal_5");
group->addChildren(*ROUTE1551);

CROUTE* ROUTE1552 = new CROUTE();
ROUTE1552->setFromField("value_changed");
ROUTE1552->setFromNode("Armature_OI_l_metatarsal_5");
ROUTE1552->setToField("rotation");
ROUTE1552->setToNode("hanim_l_metatarsal_5");
group->addChildren(*ROUTE1552);

CROUTE* ROUTE1553 = new CROUTE();
ROUTE1553->setFromField("fraction_changed");
ROUTE1553->setFromNode("Armature_Clock");
ROUTE1553->setToField("set_fraction");
ROUTE1553->setToNode("Armature_OI_l_tarsal_proximal_phalanx_5");
group->addChildren(*ROUTE1553);

CROUTE* ROUTE1554 = new CROUTE();
ROUTE1554->setFromField("value_changed");
ROUTE1554->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_5");
ROUTE1554->setToField("rotation");
ROUTE1554->setToNode("hanim_l_tarsal_proximal_phalanx_5");
group->addChildren(*ROUTE1554);

CROUTE* ROUTE1555 = new CROUTE();
ROUTE1555->setFromField("fraction_changed");
ROUTE1555->setFromNode("Armature_Clock");
ROUTE1555->setToField("set_fraction");
ROUTE1555->setToNode("Armature_OI_l_tarsal_middle_phalanx_5");
group->addChildren(*ROUTE1555);

CROUTE* ROUTE1556 = new CROUTE();
ROUTE1556->setFromField("value_changed");
ROUTE1556->setFromNode("Armature_OI_l_tarsal_middle_phalanx_5");
ROUTE1556->setToField("rotation");
ROUTE1556->setToNode("hanim_l_tarsal_middle_phalanx_5");
group->addChildren(*ROUTE1556);

CROUTE* ROUTE1557 = new CROUTE();
ROUTE1557->setFromField("fraction_changed");
ROUTE1557->setFromNode("Armature_Clock");
ROUTE1557->setToField("set_fraction");
ROUTE1557->setToNode("Armature_OI_l_tarsal_distal_phalanx_5");
group->addChildren(*ROUTE1557);

CROUTE* ROUTE1558 = new CROUTE();
ROUTE1558->setFromField("value_changed");
ROUTE1558->setFromNode("Armature_OI_l_tarsal_distal_phalanx_5");
ROUTE1558->setToField("rotation");
ROUTE1558->setToNode("hanim_l_tarsal_distal_phalanx_5");
group->addChildren(*ROUTE1558);

CROUTE* ROUTE1559 = new CROUTE();
ROUTE1559->setFromField("fraction_changed");
ROUTE1559->setFromNode("Armature_Clock");
ROUTE1559->setToField("set_fraction");
ROUTE1559->setToNode("Armature_OI_r_thigh");
group->addChildren(*ROUTE1559);

CROUTE* ROUTE1560 = new CROUTE();
ROUTE1560->setFromField("value_changed");
ROUTE1560->setFromNode("Armature_OI_r_thigh");
ROUTE1560->setToField("rotation");
ROUTE1560->setToNode("hanim_r_thigh");
group->addChildren(*ROUTE1560);

CROUTE* ROUTE1561 = new CROUTE();
ROUTE1561->setFromField("fraction_changed");
ROUTE1561->setFromNode("Armature_Clock");
ROUTE1561->setToField("set_fraction");
ROUTE1561->setToNode("Armature_OI_r_calf");
group->addChildren(*ROUTE1561);

CROUTE* ROUTE1562 = new CROUTE();
ROUTE1562->setFromField("value_changed");
ROUTE1562->setFromNode("Armature_OI_r_calf");
ROUTE1562->setToField("rotation");
ROUTE1562->setToNode("hanim_r_calf");
group->addChildren(*ROUTE1562);

CROUTE* ROUTE1563 = new CROUTE();
ROUTE1563->setFromField("fraction_changed");
ROUTE1563->setFromNode("Armature_Clock");
ROUTE1563->setToField("set_fraction");
ROUTE1563->setToNode("Armature_OI_r_talus");
group->addChildren(*ROUTE1563);

CROUTE* ROUTE1564 = new CROUTE();
ROUTE1564->setFromField("value_changed");
ROUTE1564->setFromNode("Armature_OI_r_talus");
ROUTE1564->setToField("rotation");
ROUTE1564->setToNode("hanim_r_talus");
group->addChildren(*ROUTE1564);

CROUTE* ROUTE1565 = new CROUTE();
ROUTE1565->setFromField("fraction_changed");
ROUTE1565->setFromNode("Armature_Clock");
ROUTE1565->setToField("set_fraction");
ROUTE1565->setToNode("Armature_OI_r_navicular");
group->addChildren(*ROUTE1565);

CROUTE* ROUTE1566 = new CROUTE();
ROUTE1566->setFromField("value_changed");
ROUTE1566->setFromNode("Armature_OI_r_navicular");
ROUTE1566->setToField("rotation");
ROUTE1566->setToNode("hanim_r_navicular");
group->addChildren(*ROUTE1566);

CROUTE* ROUTE1567 = new CROUTE();
ROUTE1567->setFromField("fraction_changed");
ROUTE1567->setFromNode("Armature_Clock");
ROUTE1567->setToField("set_fraction");
ROUTE1567->setToNode("Armature_OI_r_cuneiform_1");
group->addChildren(*ROUTE1567);

CROUTE* ROUTE1568 = new CROUTE();
ROUTE1568->setFromField("value_changed");
ROUTE1568->setFromNode("Armature_OI_r_cuneiform_1");
ROUTE1568->setToField("rotation");
ROUTE1568->setToNode("hanim_r_cuneiform_1");
group->addChildren(*ROUTE1568);

CROUTE* ROUTE1569 = new CROUTE();
ROUTE1569->setFromField("fraction_changed");
ROUTE1569->setFromNode("Armature_Clock");
ROUTE1569->setToField("set_fraction");
ROUTE1569->setToNode("Armature_OI_r_metatarsal_1");
group->addChildren(*ROUTE1569);

CROUTE* ROUTE1570 = new CROUTE();
ROUTE1570->setFromField("value_changed");
ROUTE1570->setFromNode("Armature_OI_r_metatarsal_1");
ROUTE1570->setToField("rotation");
ROUTE1570->setToNode("hanim_r_metatarsal_1");
group->addChildren(*ROUTE1570);

CROUTE* ROUTE1571 = new CROUTE();
ROUTE1571->setFromField("fraction_changed");
ROUTE1571->setFromNode("Armature_Clock");
ROUTE1571->setToField("set_fraction");
ROUTE1571->setToNode("Armature_OI_r_tarsal_proximal_phalanx_1");
group->addChildren(*ROUTE1571);

CROUTE* ROUTE1572 = new CROUTE();
ROUTE1572->setFromField("value_changed");
ROUTE1572->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_1");
ROUTE1572->setToField("rotation");
ROUTE1572->setToNode("hanim_r_tarsal_proximal_phalanx_1");
group->addChildren(*ROUTE1572);

CROUTE* ROUTE1573 = new CROUTE();
ROUTE1573->setFromField("fraction_changed");
ROUTE1573->setFromNode("Armature_Clock");
ROUTE1573->setToField("set_fraction");
ROUTE1573->setToNode("Armature_OI_r_tarsal_distal_phalanx_1");
group->addChildren(*ROUTE1573);

CROUTE* ROUTE1574 = new CROUTE();
ROUTE1574->setFromField("value_changed");
ROUTE1574->setFromNode("Armature_OI_r_tarsal_distal_phalanx_1");
ROUTE1574->setToField("rotation");
ROUTE1574->setToNode("hanim_r_tarsal_distal_phalanx_1");
group->addChildren(*ROUTE1574);

CROUTE* ROUTE1575 = new CROUTE();
ROUTE1575->setFromField("fraction_changed");
ROUTE1575->setFromNode("Armature_Clock");
ROUTE1575->setToField("set_fraction");
ROUTE1575->setToNode("Armature_OI_r_cuneiform_2");
group->addChildren(*ROUTE1575);

CROUTE* ROUTE1576 = new CROUTE();
ROUTE1576->setFromField("value_changed");
ROUTE1576->setFromNode("Armature_OI_r_cuneiform_2");
ROUTE1576->setToField("rotation");
ROUTE1576->setToNode("hanim_r_cuneiform_2");
group->addChildren(*ROUTE1576);

CROUTE* ROUTE1577 = new CROUTE();
ROUTE1577->setFromField("fraction_changed");
ROUTE1577->setFromNode("Armature_Clock");
ROUTE1577->setToField("set_fraction");
ROUTE1577->setToNode("Armature_OI_r_metatarsal_2");
group->addChildren(*ROUTE1577);

CROUTE* ROUTE1578 = new CROUTE();
ROUTE1578->setFromField("value_changed");
ROUTE1578->setFromNode("Armature_OI_r_metatarsal_2");
ROUTE1578->setToField("rotation");
ROUTE1578->setToNode("hanim_r_metatarsal_2");
group->addChildren(*ROUTE1578);

CROUTE* ROUTE1579 = new CROUTE();
ROUTE1579->setFromField("fraction_changed");
ROUTE1579->setFromNode("Armature_Clock");
ROUTE1579->setToField("set_fraction");
ROUTE1579->setToNode("Armature_OI_r_tarsal_proximal_phalanx_2");
group->addChildren(*ROUTE1579);

CROUTE* ROUTE1580 = new CROUTE();
ROUTE1580->setFromField("value_changed");
ROUTE1580->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_2");
ROUTE1580->setToField("rotation");
ROUTE1580->setToNode("hanim_r_tarsal_proximal_phalanx_2");
group->addChildren(*ROUTE1580);

CROUTE* ROUTE1581 = new CROUTE();
ROUTE1581->setFromField("fraction_changed");
ROUTE1581->setFromNode("Armature_Clock");
ROUTE1581->setToField("set_fraction");
ROUTE1581->setToNode("Armature_OI_r_tarsal_middle_phalanx_2");
group->addChildren(*ROUTE1581);

CROUTE* ROUTE1582 = new CROUTE();
ROUTE1582->setFromField("value_changed");
ROUTE1582->setFromNode("Armature_OI_r_tarsal_middle_phalanx_2");
ROUTE1582->setToField("rotation");
ROUTE1582->setToNode("hanim_r_tarsal_middle_phalanx_2");
group->addChildren(*ROUTE1582);

CROUTE* ROUTE1583 = new CROUTE();
ROUTE1583->setFromField("fraction_changed");
ROUTE1583->setFromNode("Armature_Clock");
ROUTE1583->setToField("set_fraction");
ROUTE1583->setToNode("Armature_OI_r_tarsal_distal_phalanx_2");
group->addChildren(*ROUTE1583);

CROUTE* ROUTE1584 = new CROUTE();
ROUTE1584->setFromField("value_changed");
ROUTE1584->setFromNode("Armature_OI_r_tarsal_distal_phalanx_2");
ROUTE1584->setToField("rotation");
ROUTE1584->setToNode("hanim_r_tarsal_distal_phalanx_2");
group->addChildren(*ROUTE1584);

CROUTE* ROUTE1585 = new CROUTE();
ROUTE1585->setFromField("fraction_changed");
ROUTE1585->setFromNode("Armature_Clock");
ROUTE1585->setToField("set_fraction");
ROUTE1585->setToNode("Armature_OI_r_cuneiform_3");
group->addChildren(*ROUTE1585);

CROUTE* ROUTE1586 = new CROUTE();
ROUTE1586->setFromField("value_changed");
ROUTE1586->setFromNode("Armature_OI_r_cuneiform_3");
ROUTE1586->setToField("rotation");
ROUTE1586->setToNode("hanim_r_cuneiform_3");
group->addChildren(*ROUTE1586);

CROUTE* ROUTE1587 = new CROUTE();
ROUTE1587->setFromField("fraction_changed");
ROUTE1587->setFromNode("Armature_Clock");
ROUTE1587->setToField("set_fraction");
ROUTE1587->setToNode("Armature_OI_r_metatarsal_3");
group->addChildren(*ROUTE1587);

CROUTE* ROUTE1588 = new CROUTE();
ROUTE1588->setFromField("value_changed");
ROUTE1588->setFromNode("Armature_OI_r_metatarsal_3");
ROUTE1588->setToField("rotation");
ROUTE1588->setToNode("hanim_r_metatarsal_3");
group->addChildren(*ROUTE1588);

CROUTE* ROUTE1589 = new CROUTE();
ROUTE1589->setFromField("fraction_changed");
ROUTE1589->setFromNode("Armature_Clock");
ROUTE1589->setToField("set_fraction");
ROUTE1589->setToNode("Armature_OI_r_tarsal_proximal_phalanx_3");
group->addChildren(*ROUTE1589);

CROUTE* ROUTE1590 = new CROUTE();
ROUTE1590->setFromField("value_changed");
ROUTE1590->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_3");
ROUTE1590->setToField("rotation");
ROUTE1590->setToNode("hanim_r_tarsal_proximal_phalanx_3");
group->addChildren(*ROUTE1590);

CROUTE* ROUTE1591 = new CROUTE();
ROUTE1591->setFromField("fraction_changed");
ROUTE1591->setFromNode("Armature_Clock");
ROUTE1591->setToField("set_fraction");
ROUTE1591->setToNode("Armature_OI_r_tarsal_middle_phalanx_3");
group->addChildren(*ROUTE1591);

CROUTE* ROUTE1592 = new CROUTE();
ROUTE1592->setFromField("value_changed");
ROUTE1592->setFromNode("Armature_OI_r_tarsal_middle_phalanx_3");
ROUTE1592->setToField("rotation");
ROUTE1592->setToNode("hanim_r_tarsal_middle_phalanx_3");
group->addChildren(*ROUTE1592);

CROUTE* ROUTE1593 = new CROUTE();
ROUTE1593->setFromField("fraction_changed");
ROUTE1593->setFromNode("Armature_Clock");
ROUTE1593->setToField("set_fraction");
ROUTE1593->setToNode("Armature_OI_r_tarsal_distal_phalanx_3");
group->addChildren(*ROUTE1593);

CROUTE* ROUTE1594 = new CROUTE();
ROUTE1594->setFromField("value_changed");
ROUTE1594->setFromNode("Armature_OI_r_tarsal_distal_phalanx_3");
ROUTE1594->setToField("rotation");
ROUTE1594->setToNode("hanim_r_tarsal_distal_phalanx_3");
group->addChildren(*ROUTE1594);

CROUTE* ROUTE1595 = new CROUTE();
ROUTE1595->setFromField("fraction_changed");
ROUTE1595->setFromNode("Armature_Clock");
ROUTE1595->setToField("set_fraction");
ROUTE1595->setToNode("Armature_OI_r_calcaneus");
group->addChildren(*ROUTE1595);

CROUTE* ROUTE1596 = new CROUTE();
ROUTE1596->setFromField("value_changed");
ROUTE1596->setFromNode("Armature_OI_r_calcaneus");
ROUTE1596->setToField("rotation");
ROUTE1596->setToNode("hanim_r_calcaneus");
group->addChildren(*ROUTE1596);

CROUTE* ROUTE1597 = new CROUTE();
ROUTE1597->setFromField("fraction_changed");
ROUTE1597->setFromNode("Armature_Clock");
ROUTE1597->setToField("set_fraction");
ROUTE1597->setToNode("Armature_OI_r_cuboid");
group->addChildren(*ROUTE1597);

CROUTE* ROUTE1598 = new CROUTE();
ROUTE1598->setFromField("value_changed");
ROUTE1598->setFromNode("Armature_OI_r_cuboid");
ROUTE1598->setToField("rotation");
ROUTE1598->setToNode("hanim_r_cuboid");
group->addChildren(*ROUTE1598);

CROUTE* ROUTE1599 = new CROUTE();
ROUTE1599->setFromField("fraction_changed");
ROUTE1599->setFromNode("Armature_Clock");
ROUTE1599->setToField("set_fraction");
ROUTE1599->setToNode("Armature_OI_r_metatarsal_4");
group->addChildren(*ROUTE1599);

CROUTE* ROUTE1600 = new CROUTE();
ROUTE1600->setFromField("value_changed");
ROUTE1600->setFromNode("Armature_OI_r_metatarsal_4");
ROUTE1600->setToField("rotation");
ROUTE1600->setToNode("hanim_r_metatarsal_4");
group->addChildren(*ROUTE1600);

CROUTE* ROUTE1601 = new CROUTE();
ROUTE1601->setFromField("fraction_changed");
ROUTE1601->setFromNode("Armature_Clock");
ROUTE1601->setToField("set_fraction");
ROUTE1601->setToNode("Armature_OI_r_tarsal_proximal_phalanx_4");
group->addChildren(*ROUTE1601);

CROUTE* ROUTE1602 = new CROUTE();
ROUTE1602->setFromField("value_changed");
ROUTE1602->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_4");
ROUTE1602->setToField("rotation");
ROUTE1602->setToNode("hanim_r_tarsal_proximal_phalanx_4");
group->addChildren(*ROUTE1602);

CROUTE* ROUTE1603 = new CROUTE();
ROUTE1603->setFromField("fraction_changed");
ROUTE1603->setFromNode("Armature_Clock");
ROUTE1603->setToField("set_fraction");
ROUTE1603->setToNode("Armature_OI_r_tarsal_middle_phalanx_4");
group->addChildren(*ROUTE1603);

CROUTE* ROUTE1604 = new CROUTE();
ROUTE1604->setFromField("value_changed");
ROUTE1604->setFromNode("Armature_OI_r_tarsal_middle_phalanx_4");
ROUTE1604->setToField("rotation");
ROUTE1604->setToNode("hanim_r_tarsal_middle_phalanx_4");
group->addChildren(*ROUTE1604);

CROUTE* ROUTE1605 = new CROUTE();
ROUTE1605->setFromField("fraction_changed");
ROUTE1605->setFromNode("Armature_Clock");
ROUTE1605->setToField("set_fraction");
ROUTE1605->setToNode("Armature_OI_r_tarsal_distal_phalanx_4");
group->addChildren(*ROUTE1605);

CROUTE* ROUTE1606 = new CROUTE();
ROUTE1606->setFromField("value_changed");
ROUTE1606->setFromNode("Armature_OI_r_tarsal_distal_phalanx_4");
ROUTE1606->setToField("rotation");
ROUTE1606->setToNode("hanim_r_tarsal_distal_phalanx_4");
group->addChildren(*ROUTE1606);

CROUTE* ROUTE1607 = new CROUTE();
ROUTE1607->setFromField("fraction_changed");
ROUTE1607->setFromNode("Armature_Clock");
ROUTE1607->setToField("set_fraction");
ROUTE1607->setToNode("Armature_OI_r_metatarsal_5");
group->addChildren(*ROUTE1607);

CROUTE* ROUTE1608 = new CROUTE();
ROUTE1608->setFromField("value_changed");
ROUTE1608->setFromNode("Armature_OI_r_metatarsal_5");
ROUTE1608->setToField("rotation");
ROUTE1608->setToNode("hanim_r_metatarsal_5");
group->addChildren(*ROUTE1608);

CROUTE* ROUTE1609 = new CROUTE();
ROUTE1609->setFromField("fraction_changed");
ROUTE1609->setFromNode("Armature_Clock");
ROUTE1609->setToField("set_fraction");
ROUTE1609->setToNode("Armature_OI_r_tarsal_proximal_phalanx_5");
group->addChildren(*ROUTE1609);

CROUTE* ROUTE1610 = new CROUTE();
ROUTE1610->setFromField("value_changed");
ROUTE1610->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_5");
ROUTE1610->setToField("rotation");
ROUTE1610->setToNode("hanim_r_tarsal_proximal_phalanx_5");
group->addChildren(*ROUTE1610);

CROUTE* ROUTE1611 = new CROUTE();
ROUTE1611->setFromField("fraction_changed");
ROUTE1611->setFromNode("Armature_Clock");
ROUTE1611->setToField("set_fraction");
ROUTE1611->setToNode("Armature_OI_r_tarsal_middle_phalanx_5");
group->addChildren(*ROUTE1611);

CROUTE* ROUTE1612 = new CROUTE();
ROUTE1612->setFromField("value_changed");
ROUTE1612->setFromNode("Armature_OI_r_tarsal_middle_phalanx_5");
ROUTE1612->setToField("rotation");
ROUTE1612->setToNode("hanim_r_tarsal_middle_phalanx_5");
group->addChildren(*ROUTE1612);

CROUTE* ROUTE1613 = new CROUTE();
ROUTE1613->setFromField("fraction_changed");
ROUTE1613->setFromNode("Armature_Clock");
ROUTE1613->setToField("set_fraction");
ROUTE1613->setToNode("Armature_OI_r_tarsal_distal_phalanx_5");
group->addChildren(*ROUTE1613);

CROUTE* ROUTE1614 = new CROUTE();
ROUTE1614->setFromField("value_changed");
ROUTE1614->setFromNode("Armature_OI_r_tarsal_distal_phalanx_5");
ROUTE1614->setToField("rotation");
ROUTE1614->setToNode("hanim_r_tarsal_distal_phalanx_5");
group->addChildren(*ROUTE1614);

CROUTE* ROUTE1615 = new CROUTE();
ROUTE1615->setFromField("fraction_changed");
ROUTE1615->setFromNode("Armature_Clock");
ROUTE1615->setToField("set_fraction");
ROUTE1615->setToNode("Armature_OI_l5");
group->addChildren(*ROUTE1615);

CROUTE* ROUTE1616 = new CROUTE();
ROUTE1616->setFromField("value_changed");
ROUTE1616->setFromNode("Armature_OI_l5");
ROUTE1616->setToField("rotation");
ROUTE1616->setToNode("hanim_l5");
group->addChildren(*ROUTE1616);

CROUTE* ROUTE1617 = new CROUTE();
ROUTE1617->setFromField("fraction_changed");
ROUTE1617->setFromNode("Armature_Clock");
ROUTE1617->setToField("set_fraction");
ROUTE1617->setToNode("Armature_OI_l4");
group->addChildren(*ROUTE1617);

CROUTE* ROUTE1618 = new CROUTE();
ROUTE1618->setFromField("value_changed");
ROUTE1618->setFromNode("Armature_OI_l4");
ROUTE1618->setToField("rotation");
ROUTE1618->setToNode("hanim_l4");
group->addChildren(*ROUTE1618);

CROUTE* ROUTE1619 = new CROUTE();
ROUTE1619->setFromField("fraction_changed");
ROUTE1619->setFromNode("Armature_Clock");
ROUTE1619->setToField("set_fraction");
ROUTE1619->setToNode("Armature_OI_l3");
group->addChildren(*ROUTE1619);

CROUTE* ROUTE1620 = new CROUTE();
ROUTE1620->setFromField("value_changed");
ROUTE1620->setFromNode("Armature_OI_l3");
ROUTE1620->setToField("rotation");
ROUTE1620->setToNode("hanim_l3");
group->addChildren(*ROUTE1620);

CROUTE* ROUTE1621 = new CROUTE();
ROUTE1621->setFromField("fraction_changed");
ROUTE1621->setFromNode("Armature_Clock");
ROUTE1621->setToField("set_fraction");
ROUTE1621->setToNode("Armature_OI_l2");
group->addChildren(*ROUTE1621);

CROUTE* ROUTE1622 = new CROUTE();
ROUTE1622->setFromField("value_changed");
ROUTE1622->setFromNode("Armature_OI_l2");
ROUTE1622->setToField("rotation");
ROUTE1622->setToNode("hanim_l2");
group->addChildren(*ROUTE1622);

CROUTE* ROUTE1623 = new CROUTE();
ROUTE1623->setFromField("fraction_changed");
ROUTE1623->setFromNode("Armature_Clock");
ROUTE1623->setToField("set_fraction");
ROUTE1623->setToNode("Armature_OI_l1");
group->addChildren(*ROUTE1623);

CROUTE* ROUTE1624 = new CROUTE();
ROUTE1624->setFromField("value_changed");
ROUTE1624->setFromNode("Armature_OI_l1");
ROUTE1624->setToField("rotation");
ROUTE1624->setToNode("hanim_l1");
group->addChildren(*ROUTE1624);

CROUTE* ROUTE1625 = new CROUTE();
ROUTE1625->setFromField("fraction_changed");
ROUTE1625->setFromNode("Armature_Clock");
ROUTE1625->setToField("set_fraction");
ROUTE1625->setToNode("Armature_OI_t12");
group->addChildren(*ROUTE1625);

CROUTE* ROUTE1626 = new CROUTE();
ROUTE1626->setFromField("value_changed");
ROUTE1626->setFromNode("Armature_OI_t12");
ROUTE1626->setToField("rotation");
ROUTE1626->setToNode("hanim_t12");
group->addChildren(*ROUTE1626);

CROUTE* ROUTE1627 = new CROUTE();
ROUTE1627->setFromField("fraction_changed");
ROUTE1627->setFromNode("Armature_Clock");
ROUTE1627->setToField("set_fraction");
ROUTE1627->setToNode("Armature_OI_t11");
group->addChildren(*ROUTE1627);

CROUTE* ROUTE1628 = new CROUTE();
ROUTE1628->setFromField("value_changed");
ROUTE1628->setFromNode("Armature_OI_t11");
ROUTE1628->setToField("rotation");
ROUTE1628->setToNode("hanim_t11");
group->addChildren(*ROUTE1628);

CROUTE* ROUTE1629 = new CROUTE();
ROUTE1629->setFromField("fraction_changed");
ROUTE1629->setFromNode("Armature_Clock");
ROUTE1629->setToField("set_fraction");
ROUTE1629->setToNode("Armature_OI_t10");
group->addChildren(*ROUTE1629);

CROUTE* ROUTE1630 = new CROUTE();
ROUTE1630->setFromField("value_changed");
ROUTE1630->setFromNode("Armature_OI_t10");
ROUTE1630->setToField("rotation");
ROUTE1630->setToNode("hanim_t10");
group->addChildren(*ROUTE1630);

CROUTE* ROUTE1631 = new CROUTE();
ROUTE1631->setFromField("fraction_changed");
ROUTE1631->setFromNode("Armature_Clock");
ROUTE1631->setToField("set_fraction");
ROUTE1631->setToNode("Armature_OI_t9");
group->addChildren(*ROUTE1631);

CROUTE* ROUTE1632 = new CROUTE();
ROUTE1632->setFromField("value_changed");
ROUTE1632->setFromNode("Armature_OI_t9");
ROUTE1632->setToField("rotation");
ROUTE1632->setToNode("hanim_t9");
group->addChildren(*ROUTE1632);

CROUTE* ROUTE1633 = new CROUTE();
ROUTE1633->setFromField("fraction_changed");
ROUTE1633->setFromNode("Armature_Clock");
ROUTE1633->setToField("set_fraction");
ROUTE1633->setToNode("Armature_OI_t8");
group->addChildren(*ROUTE1633);

CROUTE* ROUTE1634 = new CROUTE();
ROUTE1634->setFromField("value_changed");
ROUTE1634->setFromNode("Armature_OI_t8");
ROUTE1634->setToField("rotation");
ROUTE1634->setToNode("hanim_t8");
group->addChildren(*ROUTE1634);

CROUTE* ROUTE1635 = new CROUTE();
ROUTE1635->setFromField("fraction_changed");
ROUTE1635->setFromNode("Armature_Clock");
ROUTE1635->setToField("set_fraction");
ROUTE1635->setToNode("Armature_OI_t7");
group->addChildren(*ROUTE1635);

CROUTE* ROUTE1636 = new CROUTE();
ROUTE1636->setFromField("value_changed");
ROUTE1636->setFromNode("Armature_OI_t7");
ROUTE1636->setToField("rotation");
ROUTE1636->setToNode("hanim_t7");
group->addChildren(*ROUTE1636);

CROUTE* ROUTE1637 = new CROUTE();
ROUTE1637->setFromField("fraction_changed");
ROUTE1637->setFromNode("Armature_Clock");
ROUTE1637->setToField("set_fraction");
ROUTE1637->setToNode("Armature_OI_t6");
group->addChildren(*ROUTE1637);

CROUTE* ROUTE1638 = new CROUTE();
ROUTE1638->setFromField("value_changed");
ROUTE1638->setFromNode("Armature_OI_t6");
ROUTE1638->setToField("rotation");
ROUTE1638->setToNode("hanim_t6");
group->addChildren(*ROUTE1638);

CROUTE* ROUTE1639 = new CROUTE();
ROUTE1639->setFromField("fraction_changed");
ROUTE1639->setFromNode("Armature_Clock");
ROUTE1639->setToField("set_fraction");
ROUTE1639->setToNode("Armature_OI_t5");
group->addChildren(*ROUTE1639);

CROUTE* ROUTE1640 = new CROUTE();
ROUTE1640->setFromField("value_changed");
ROUTE1640->setFromNode("Armature_OI_t5");
ROUTE1640->setToField("rotation");
ROUTE1640->setToNode("hanim_t5");
group->addChildren(*ROUTE1640);

CROUTE* ROUTE1641 = new CROUTE();
ROUTE1641->setFromField("fraction_changed");
ROUTE1641->setFromNode("Armature_Clock");
ROUTE1641->setToField("set_fraction");
ROUTE1641->setToNode("Armature_OI_t4");
group->addChildren(*ROUTE1641);

CROUTE* ROUTE1642 = new CROUTE();
ROUTE1642->setFromField("value_changed");
ROUTE1642->setFromNode("Armature_OI_t4");
ROUTE1642->setToField("rotation");
ROUTE1642->setToNode("hanim_t4");
group->addChildren(*ROUTE1642);

CROUTE* ROUTE1643 = new CROUTE();
ROUTE1643->setFromField("fraction_changed");
ROUTE1643->setFromNode("Armature_Clock");
ROUTE1643->setToField("set_fraction");
ROUTE1643->setToNode("Armature_OI_t3");
group->addChildren(*ROUTE1643);

CROUTE* ROUTE1644 = new CROUTE();
ROUTE1644->setFromField("value_changed");
ROUTE1644->setFromNode("Armature_OI_t3");
ROUTE1644->setToField("rotation");
ROUTE1644->setToNode("hanim_t3");
group->addChildren(*ROUTE1644);

CROUTE* ROUTE1645 = new CROUTE();
ROUTE1645->setFromField("fraction_changed");
ROUTE1645->setFromNode("Armature_Clock");
ROUTE1645->setToField("set_fraction");
ROUTE1645->setToNode("Armature_OI_t2");
group->addChildren(*ROUTE1645);

CROUTE* ROUTE1646 = new CROUTE();
ROUTE1646->setFromField("value_changed");
ROUTE1646->setFromNode("Armature_OI_t2");
ROUTE1646->setToField("rotation");
ROUTE1646->setToNode("hanim_t2");
group->addChildren(*ROUTE1646);

CROUTE* ROUTE1647 = new CROUTE();
ROUTE1647->setFromField("fraction_changed");
ROUTE1647->setFromNode("Armature_Clock");
ROUTE1647->setToField("set_fraction");
ROUTE1647->setToNode("Armature_OI_t1");
group->addChildren(*ROUTE1647);

CROUTE* ROUTE1648 = new CROUTE();
ROUTE1648->setFromField("value_changed");
ROUTE1648->setFromNode("Armature_OI_t1");
ROUTE1648->setToField("rotation");
ROUTE1648->setToNode("hanim_t1");
group->addChildren(*ROUTE1648);

CROUTE* ROUTE1649 = new CROUTE();
ROUTE1649->setFromField("fraction_changed");
ROUTE1649->setFromNode("Armature_Clock");
ROUTE1649->setToField("set_fraction");
ROUTE1649->setToNode("Armature_OI_c7");
group->addChildren(*ROUTE1649);

CROUTE* ROUTE1650 = new CROUTE();
ROUTE1650->setFromField("value_changed");
ROUTE1650->setFromNode("Armature_OI_c7");
ROUTE1650->setToField("rotation");
ROUTE1650->setToNode("hanim_c7");
group->addChildren(*ROUTE1650);

CROUTE* ROUTE1651 = new CROUTE();
ROUTE1651->setFromField("fraction_changed");
ROUTE1651->setFromNode("Armature_Clock");
ROUTE1651->setToField("set_fraction");
ROUTE1651->setToNode("Armature_OI_c6");
group->addChildren(*ROUTE1651);

CROUTE* ROUTE1652 = new CROUTE();
ROUTE1652->setFromField("value_changed");
ROUTE1652->setFromNode("Armature_OI_c6");
ROUTE1652->setToField("rotation");
ROUTE1652->setToNode("hanim_c6");
group->addChildren(*ROUTE1652);

CROUTE* ROUTE1653 = new CROUTE();
ROUTE1653->setFromField("fraction_changed");
ROUTE1653->setFromNode("Armature_Clock");
ROUTE1653->setToField("set_fraction");
ROUTE1653->setToNode("Armature_OI_c5");
group->addChildren(*ROUTE1653);

CROUTE* ROUTE1654 = new CROUTE();
ROUTE1654->setFromField("value_changed");
ROUTE1654->setFromNode("Armature_OI_c5");
ROUTE1654->setToField("rotation");
ROUTE1654->setToNode("hanim_c5");
group->addChildren(*ROUTE1654);

CROUTE* ROUTE1655 = new CROUTE();
ROUTE1655->setFromField("fraction_changed");
ROUTE1655->setFromNode("Armature_Clock");
ROUTE1655->setToField("set_fraction");
ROUTE1655->setToNode("Armature_OI_c4");
group->addChildren(*ROUTE1655);

CROUTE* ROUTE1656 = new CROUTE();
ROUTE1656->setFromField("value_changed");
ROUTE1656->setFromNode("Armature_OI_c4");
ROUTE1656->setToField("rotation");
ROUTE1656->setToNode("hanim_c4");
group->addChildren(*ROUTE1656);

CROUTE* ROUTE1657 = new CROUTE();
ROUTE1657->setFromField("fraction_changed");
ROUTE1657->setFromNode("Armature_Clock");
ROUTE1657->setToField("set_fraction");
ROUTE1657->setToNode("Armature_OI_c3");
group->addChildren(*ROUTE1657);

CROUTE* ROUTE1658 = new CROUTE();
ROUTE1658->setFromField("value_changed");
ROUTE1658->setFromNode("Armature_OI_c3");
ROUTE1658->setToField("rotation");
ROUTE1658->setToNode("hanim_c3");
group->addChildren(*ROUTE1658);

CROUTE* ROUTE1659 = new CROUTE();
ROUTE1659->setFromField("fraction_changed");
ROUTE1659->setFromNode("Armature_Clock");
ROUTE1659->setToField("set_fraction");
ROUTE1659->setToNode("Armature_OI_c2");
group->addChildren(*ROUTE1659);

CROUTE* ROUTE1660 = new CROUTE();
ROUTE1660->setFromField("value_changed");
ROUTE1660->setFromNode("Armature_OI_c2");
ROUTE1660->setToField("rotation");
ROUTE1660->setToNode("hanim_c2");
group->addChildren(*ROUTE1660);

CROUTE* ROUTE1661 = new CROUTE();
ROUTE1661->setFromField("fraction_changed");
ROUTE1661->setFromNode("Armature_Clock");
ROUTE1661->setToField("set_fraction");
ROUTE1661->setToNode("Armature_OI_c1");
group->addChildren(*ROUTE1661);

CROUTE* ROUTE1662 = new CROUTE();
ROUTE1662->setFromField("value_changed");
ROUTE1662->setFromNode("Armature_OI_c1");
ROUTE1662->setToField("rotation");
ROUTE1662->setToNode("hanim_c1");
group->addChildren(*ROUTE1662);

CROUTE* ROUTE1663 = new CROUTE();
ROUTE1663->setFromField("fraction_changed");
ROUTE1663->setFromNode("Armature_Clock");
ROUTE1663->setToField("set_fraction");
ROUTE1663->setToNode("Armature_OI_skull");
group->addChildren(*ROUTE1663);

CROUTE* ROUTE1664 = new CROUTE();
ROUTE1664->setFromField("value_changed");
ROUTE1664->setFromNode("Armature_OI_skull");
ROUTE1664->setToField("rotation");
ROUTE1664->setToNode("hanim_skull");
group->addChildren(*ROUTE1664);

CROUTE* ROUTE1665 = new CROUTE();
ROUTE1665->setFromField("fraction_changed");
ROUTE1665->setFromNode("Armature_Clock");
ROUTE1665->setToField("set_fraction");
ROUTE1665->setToNode("Armature_OI_l_eyelid");
group->addChildren(*ROUTE1665);

CROUTE* ROUTE1666 = new CROUTE();
ROUTE1666->setFromField("value_changed");
ROUTE1666->setFromNode("Armature_OI_l_eyelid");
ROUTE1666->setToField("rotation");
ROUTE1666->setToNode("hanim_l_eyelid");
group->addChildren(*ROUTE1666);

CROUTE* ROUTE1667 = new CROUTE();
ROUTE1667->setFromField("fraction_changed");
ROUTE1667->setFromNode("Armature_Clock");
ROUTE1667->setToField("set_fraction");
ROUTE1667->setToNode("Armature_OI_r_eyelid");
group->addChildren(*ROUTE1667);

CROUTE* ROUTE1668 = new CROUTE();
ROUTE1668->setFromField("value_changed");
ROUTE1668->setFromNode("Armature_OI_r_eyelid");
ROUTE1668->setToField("rotation");
ROUTE1668->setToNode("hanim_r_eyelid");
group->addChildren(*ROUTE1668);

CROUTE* ROUTE1669 = new CROUTE();
ROUTE1669->setFromField("fraction_changed");
ROUTE1669->setFromNode("Armature_Clock");
ROUTE1669->setToField("set_fraction");
ROUTE1669->setToNode("Armature_OI_l_eyeball");
group->addChildren(*ROUTE1669);

CROUTE* ROUTE1670 = new CROUTE();
ROUTE1670->setFromField("value_changed");
ROUTE1670->setFromNode("Armature_OI_l_eyeball");
ROUTE1670->setToField("rotation");
ROUTE1670->setToNode("hanim_l_eyeball");
group->addChildren(*ROUTE1670);

CROUTE* ROUTE1671 = new CROUTE();
ROUTE1671->setFromField("fraction_changed");
ROUTE1671->setFromNode("Armature_Clock");
ROUTE1671->setToField("set_fraction");
ROUTE1671->setToNode("Armature_OI_r_eyeball");
group->addChildren(*ROUTE1671);

CROUTE* ROUTE1672 = new CROUTE();
ROUTE1672->setFromField("value_changed");
ROUTE1672->setFromNode("Armature_OI_r_eyeball");
ROUTE1672->setToField("rotation");
ROUTE1672->setToNode("hanim_r_eyeball");
group->addChildren(*ROUTE1672);

CROUTE* ROUTE1673 = new CROUTE();
ROUTE1673->setFromField("fraction_changed");
ROUTE1673->setFromNode("Armature_Clock");
ROUTE1673->setToField("set_fraction");
ROUTE1673->setToNode("Armature_OI_l_eyebrow");
group->addChildren(*ROUTE1673);

CROUTE* ROUTE1674 = new CROUTE();
ROUTE1674->setFromField("value_changed");
ROUTE1674->setFromNode("Armature_OI_l_eyebrow");
ROUTE1674->setToField("rotation");
ROUTE1674->setToNode("hanim_l_eyebrow");
group->addChildren(*ROUTE1674);

CROUTE* ROUTE1675 = new CROUTE();
ROUTE1675->setFromField("fraction_changed");
ROUTE1675->setFromNode("Armature_Clock");
ROUTE1675->setToField("set_fraction");
ROUTE1675->setToNode("Armature_OI_r_eyebrow");
group->addChildren(*ROUTE1675);

CROUTE* ROUTE1676 = new CROUTE();
ROUTE1676->setFromField("value_changed");
ROUTE1676->setFromNode("Armature_OI_r_eyebrow");
ROUTE1676->setToField("rotation");
ROUTE1676->setToNode("hanim_r_eyebrow");
group->addChildren(*ROUTE1676);

CROUTE* ROUTE1677 = new CROUTE();
ROUTE1677->setFromField("fraction_changed");
ROUTE1677->setFromNode("Armature_Clock");
ROUTE1677->setToField("set_fraction");
ROUTE1677->setToNode("Armature_OI_jaw");
group->addChildren(*ROUTE1677);

CROUTE* ROUTE1678 = new CROUTE();
ROUTE1678->setFromField("value_changed");
ROUTE1678->setFromNode("Armature_OI_jaw");
ROUTE1678->setToField("rotation");
ROUTE1678->setToNode("hanim_jaw");
group->addChildren(*ROUTE1678);

CROUTE* ROUTE1679 = new CROUTE();
ROUTE1679->setFromField("fraction_changed");
ROUTE1679->setFromNode("Armature_Clock");
ROUTE1679->setToField("set_fraction");
ROUTE1679->setToNode("Armature_OI_l_clavicle");
group->addChildren(*ROUTE1679);

CROUTE* ROUTE1680 = new CROUTE();
ROUTE1680->setFromField("value_changed");
ROUTE1680->setFromNode("Armature_OI_l_clavicle");
ROUTE1680->setToField("rotation");
ROUTE1680->setToNode("hanim_l_clavicle");
group->addChildren(*ROUTE1680);

CROUTE* ROUTE1681 = new CROUTE();
ROUTE1681->setFromField("fraction_changed");
ROUTE1681->setFromNode("Armature_Clock");
ROUTE1681->setToField("set_fraction");
ROUTE1681->setToNode("Armature_OI_l_scapula");
group->addChildren(*ROUTE1681);

CROUTE* ROUTE1682 = new CROUTE();
ROUTE1682->setFromField("value_changed");
ROUTE1682->setFromNode("Armature_OI_l_scapula");
ROUTE1682->setToField("rotation");
ROUTE1682->setToNode("hanim_l_scapula");
group->addChildren(*ROUTE1682);

CROUTE* ROUTE1683 = new CROUTE();
ROUTE1683->setFromField("fraction_changed");
ROUTE1683->setFromNode("Armature_Clock");
ROUTE1683->setToField("set_fraction");
ROUTE1683->setToNode("Armature_OI_l_upperarm");
group->addChildren(*ROUTE1683);

CROUTE* ROUTE1684 = new CROUTE();
ROUTE1684->setFromField("value_changed");
ROUTE1684->setFromNode("Armature_OI_l_upperarm");
ROUTE1684->setToField("rotation");
ROUTE1684->setToNode("hanim_l_upperarm");
group->addChildren(*ROUTE1684);

CROUTE* ROUTE1685 = new CROUTE();
ROUTE1685->setFromField("fraction_changed");
ROUTE1685->setFromNode("Armature_Clock");
ROUTE1685->setToField("set_fraction");
ROUTE1685->setToNode("Armature_OI_l_forearm");
group->addChildren(*ROUTE1685);

CROUTE* ROUTE1686 = new CROUTE();
ROUTE1686->setFromField("value_changed");
ROUTE1686->setFromNode("Armature_OI_l_forearm");
ROUTE1686->setToField("rotation");
ROUTE1686->setToNode("hanim_l_forearm");
group->addChildren(*ROUTE1686);

CROUTE* ROUTE1687 = new CROUTE();
ROUTE1687->setFromField("fraction_changed");
ROUTE1687->setFromNode("Armature_Clock");
ROUTE1687->setToField("set_fraction");
ROUTE1687->setToNode("Armature_OI_l_carpal");
group->addChildren(*ROUTE1687);

CROUTE* ROUTE1688 = new CROUTE();
ROUTE1688->setFromField("value_changed");
ROUTE1688->setFromNode("Armature_OI_l_carpal");
ROUTE1688->setToField("rotation");
ROUTE1688->setToNode("hanim_l_carpal");
group->addChildren(*ROUTE1688);

CROUTE* ROUTE1689 = new CROUTE();
ROUTE1689->setFromField("fraction_changed");
ROUTE1689->setFromNode("Armature_Clock");
ROUTE1689->setToField("set_fraction");
ROUTE1689->setToNode("Armature_OI_l_trapezium");
group->addChildren(*ROUTE1689);

CROUTE* ROUTE1690 = new CROUTE();
ROUTE1690->setFromField("value_changed");
ROUTE1690->setFromNode("Armature_OI_l_trapezium");
ROUTE1690->setToField("rotation");
ROUTE1690->setToNode("hanim_l_trapezium");
group->addChildren(*ROUTE1690);

CROUTE* ROUTE1691 = new CROUTE();
ROUTE1691->setFromField("fraction_changed");
ROUTE1691->setFromNode("Armature_Clock");
ROUTE1691->setToField("set_fraction");
ROUTE1691->setToNode("Armature_OI_l_metacarpal_1");
group->addChildren(*ROUTE1691);

CROUTE* ROUTE1692 = new CROUTE();
ROUTE1692->setFromField("value_changed");
ROUTE1692->setFromNode("Armature_OI_l_metacarpal_1");
ROUTE1692->setToField("rotation");
ROUTE1692->setToNode("hanim_l_metacarpal_1");
group->addChildren(*ROUTE1692);

CROUTE* ROUTE1693 = new CROUTE();
ROUTE1693->setFromField("fraction_changed");
ROUTE1693->setFromNode("Armature_Clock");
ROUTE1693->setToField("set_fraction");
ROUTE1693->setToNode("Armature_OI_l_carpal_proximal_phalanx_1");
group->addChildren(*ROUTE1693);

CROUTE* ROUTE1694 = new CROUTE();
ROUTE1694->setFromField("value_changed");
ROUTE1694->setFromNode("Armature_OI_l_carpal_proximal_phalanx_1");
ROUTE1694->setToField("rotation");
ROUTE1694->setToNode("hanim_l_carpal_proximal_phalanx_1");
group->addChildren(*ROUTE1694);

CROUTE* ROUTE1695 = new CROUTE();
ROUTE1695->setFromField("fraction_changed");
ROUTE1695->setFromNode("Armature_Clock");
ROUTE1695->setToField("set_fraction");
ROUTE1695->setToNode("Armature_OI_l_carpal_distal_phalanx_1");
group->addChildren(*ROUTE1695);

CROUTE* ROUTE1696 = new CROUTE();
ROUTE1696->setFromField("value_changed");
ROUTE1696->setFromNode("Armature_OI_l_carpal_distal_phalanx_1");
ROUTE1696->setToField("rotation");
ROUTE1696->setToNode("hanim_l_carpal_distal_phalanx_1");
group->addChildren(*ROUTE1696);

CROUTE* ROUTE1697 = new CROUTE();
ROUTE1697->setFromField("fraction_changed");
ROUTE1697->setFromNode("Armature_Clock");
ROUTE1697->setToField("set_fraction");
ROUTE1697->setToNode("Armature_OI_l_trapezoid");
group->addChildren(*ROUTE1697);

CROUTE* ROUTE1698 = new CROUTE();
ROUTE1698->setFromField("value_changed");
ROUTE1698->setFromNode("Armature_OI_l_trapezoid");
ROUTE1698->setToField("rotation");
ROUTE1698->setToNode("hanim_l_trapezoid");
group->addChildren(*ROUTE1698);

CROUTE* ROUTE1699 = new CROUTE();
ROUTE1699->setFromField("fraction_changed");
ROUTE1699->setFromNode("Armature_Clock");
ROUTE1699->setToField("set_fraction");
ROUTE1699->setToNode("Armature_OI_l_metacarpal_2");
group->addChildren(*ROUTE1699);

CROUTE* ROUTE1700 = new CROUTE();
ROUTE1700->setFromField("value_changed");
ROUTE1700->setFromNode("Armature_OI_l_metacarpal_2");
ROUTE1700->setToField("rotation");
ROUTE1700->setToNode("hanim_l_metacarpal_2");
group->addChildren(*ROUTE1700);

CROUTE* ROUTE1701 = new CROUTE();
ROUTE1701->setFromField("fraction_changed");
ROUTE1701->setFromNode("Armature_Clock");
ROUTE1701->setToField("set_fraction");
ROUTE1701->setToNode("Armature_OI_l_carpal_proximal_phalanx_2");
group->addChildren(*ROUTE1701);

CROUTE* ROUTE1702 = new CROUTE();
ROUTE1702->setFromField("value_changed");
ROUTE1702->setFromNode("Armature_OI_l_carpal_proximal_phalanx_2");
ROUTE1702->setToField("rotation");
ROUTE1702->setToNode("hanim_l_carpal_proximal_phalanx_2");
group->addChildren(*ROUTE1702);

CROUTE* ROUTE1703 = new CROUTE();
ROUTE1703->setFromField("fraction_changed");
ROUTE1703->setFromNode("Armature_Clock");
ROUTE1703->setToField("set_fraction");
ROUTE1703->setToNode("Armature_OI_l_carpal_middle_phalanx_2");
group->addChildren(*ROUTE1703);

CROUTE* ROUTE1704 = new CROUTE();
ROUTE1704->setFromField("value_changed");
ROUTE1704->setFromNode("Armature_OI_l_carpal_middle_phalanx_2");
ROUTE1704->setToField("rotation");
ROUTE1704->setToNode("hanim_l_carpal_middle_phalanx_2");
group->addChildren(*ROUTE1704);

CROUTE* ROUTE1705 = new CROUTE();
ROUTE1705->setFromField("fraction_changed");
ROUTE1705->setFromNode("Armature_Clock");
ROUTE1705->setToField("set_fraction");
ROUTE1705->setToNode("Armature_OI_l_carpal_distal_phalanx_2");
group->addChildren(*ROUTE1705);

CROUTE* ROUTE1706 = new CROUTE();
ROUTE1706->setFromField("value_changed");
ROUTE1706->setFromNode("Armature_OI_l_carpal_distal_phalanx_2");
ROUTE1706->setToField("rotation");
ROUTE1706->setToNode("hanim_l_carpal_distal_phalanx_2");
group->addChildren(*ROUTE1706);

CROUTE* ROUTE1707 = new CROUTE();
ROUTE1707->setFromField("fraction_changed");
ROUTE1707->setFromNode("Armature_Clock");
ROUTE1707->setToField("set_fraction");
ROUTE1707->setToNode("Armature_OI_l_capitate");
group->addChildren(*ROUTE1707);

CROUTE* ROUTE1708 = new CROUTE();
ROUTE1708->setFromField("value_changed");
ROUTE1708->setFromNode("Armature_OI_l_capitate");
ROUTE1708->setToField("rotation");
ROUTE1708->setToNode("hanim_l_capitate");
group->addChildren(*ROUTE1708);

CROUTE* ROUTE1709 = new CROUTE();
ROUTE1709->setFromField("fraction_changed");
ROUTE1709->setFromNode("Armature_Clock");
ROUTE1709->setToField("set_fraction");
ROUTE1709->setToNode("Armature_OI_l_metacarpal_3");
group->addChildren(*ROUTE1709);

CROUTE* ROUTE1710 = new CROUTE();
ROUTE1710->setFromField("value_changed");
ROUTE1710->setFromNode("Armature_OI_l_metacarpal_3");
ROUTE1710->setToField("rotation");
ROUTE1710->setToNode("hanim_l_metacarpal_3");
group->addChildren(*ROUTE1710);

CROUTE* ROUTE1711 = new CROUTE();
ROUTE1711->setFromField("fraction_changed");
ROUTE1711->setFromNode("Armature_Clock");
ROUTE1711->setToField("set_fraction");
ROUTE1711->setToNode("Armature_OI_l_carpal_proximal_phalanx_3");
group->addChildren(*ROUTE1711);

CROUTE* ROUTE1712 = new CROUTE();
ROUTE1712->setFromField("value_changed");
ROUTE1712->setFromNode("Armature_OI_l_carpal_proximal_phalanx_3");
ROUTE1712->setToField("rotation");
ROUTE1712->setToNode("hanim_l_carpal_proximal_phalanx_3");
group->addChildren(*ROUTE1712);

CROUTE* ROUTE1713 = new CROUTE();
ROUTE1713->setFromField("fraction_changed");
ROUTE1713->setFromNode("Armature_Clock");
ROUTE1713->setToField("set_fraction");
ROUTE1713->setToNode("Armature_OI_l_carpal_middle_phalanx_3");
group->addChildren(*ROUTE1713);

CROUTE* ROUTE1714 = new CROUTE();
ROUTE1714->setFromField("value_changed");
ROUTE1714->setFromNode("Armature_OI_l_carpal_middle_phalanx_3");
ROUTE1714->setToField("rotation");
ROUTE1714->setToNode("hanim_l_carpal_middle_phalanx_3");
group->addChildren(*ROUTE1714);

CROUTE* ROUTE1715 = new CROUTE();
ROUTE1715->setFromField("fraction_changed");
ROUTE1715->setFromNode("Armature_Clock");
ROUTE1715->setToField("set_fraction");
ROUTE1715->setToNode("Armature_OI_l_carpal_distal_phalanx_3");
group->addChildren(*ROUTE1715);

CROUTE* ROUTE1716 = new CROUTE();
ROUTE1716->setFromField("value_changed");
ROUTE1716->setFromNode("Armature_OI_l_carpal_distal_phalanx_3");
ROUTE1716->setToField("rotation");
ROUTE1716->setToNode("hanim_l_carpal_distal_phalanx_3");
group->addChildren(*ROUTE1716);

CROUTE* ROUTE1717 = new CROUTE();
ROUTE1717->setFromField("fraction_changed");
ROUTE1717->setFromNode("Armature_Clock");
ROUTE1717->setToField("set_fraction");
ROUTE1717->setToNode("Armature_OI_l_hamate");
group->addChildren(*ROUTE1717);

CROUTE* ROUTE1718 = new CROUTE();
ROUTE1718->setFromField("value_changed");
ROUTE1718->setFromNode("Armature_OI_l_hamate");
ROUTE1718->setToField("rotation");
ROUTE1718->setToNode("hanim_l_hamate");
group->addChildren(*ROUTE1718);

CROUTE* ROUTE1719 = new CROUTE();
ROUTE1719->setFromField("fraction_changed");
ROUTE1719->setFromNode("Armature_Clock");
ROUTE1719->setToField("set_fraction");
ROUTE1719->setToNode("Armature_OI_l_metacarpal_4");
group->addChildren(*ROUTE1719);

CROUTE* ROUTE1720 = new CROUTE();
ROUTE1720->setFromField("value_changed");
ROUTE1720->setFromNode("Armature_OI_l_metacarpal_4");
ROUTE1720->setToField("rotation");
ROUTE1720->setToNode("hanim_l_metacarpal_4");
group->addChildren(*ROUTE1720);

CROUTE* ROUTE1721 = new CROUTE();
ROUTE1721->setFromField("fraction_changed");
ROUTE1721->setFromNode("Armature_Clock");
ROUTE1721->setToField("set_fraction");
ROUTE1721->setToNode("Armature_OI_l_carpal_proximal_phalanx_4");
group->addChildren(*ROUTE1721);

CROUTE* ROUTE1722 = new CROUTE();
ROUTE1722->setFromField("value_changed");
ROUTE1722->setFromNode("Armature_OI_l_carpal_proximal_phalanx_4");
ROUTE1722->setToField("rotation");
ROUTE1722->setToNode("hanim_l_carpal_proximal_phalanx_4");
group->addChildren(*ROUTE1722);

CROUTE* ROUTE1723 = new CROUTE();
ROUTE1723->setFromField("fraction_changed");
ROUTE1723->setFromNode("Armature_Clock");
ROUTE1723->setToField("set_fraction");
ROUTE1723->setToNode("Armature_OI_l_carpal_middle_phalanx_4");
group->addChildren(*ROUTE1723);

CROUTE* ROUTE1724 = new CROUTE();
ROUTE1724->setFromField("value_changed");
ROUTE1724->setFromNode("Armature_OI_l_carpal_middle_phalanx_4");
ROUTE1724->setToField("rotation");
ROUTE1724->setToNode("hanim_l_carpal_middle_phalanx_4");
group->addChildren(*ROUTE1724);

CROUTE* ROUTE1725 = new CROUTE();
ROUTE1725->setFromField("fraction_changed");
ROUTE1725->setFromNode("Armature_Clock");
ROUTE1725->setToField("set_fraction");
ROUTE1725->setToNode("Armature_OI_l_carpal_distal_phalanx_4");
group->addChildren(*ROUTE1725);

CROUTE* ROUTE1726 = new CROUTE();
ROUTE1726->setFromField("value_changed");
ROUTE1726->setFromNode("Armature_OI_l_carpal_distal_phalanx_4");
ROUTE1726->setToField("rotation");
ROUTE1726->setToNode("hanim_l_carpal_distal_phalanx_4");
group->addChildren(*ROUTE1726);

CROUTE* ROUTE1727 = new CROUTE();
ROUTE1727->setFromField("fraction_changed");
ROUTE1727->setFromNode("Armature_Clock");
ROUTE1727->setToField("set_fraction");
ROUTE1727->setToNode("Armature_OI_l_metacarpal_5");
group->addChildren(*ROUTE1727);

CROUTE* ROUTE1728 = new CROUTE();
ROUTE1728->setFromField("value_changed");
ROUTE1728->setFromNode("Armature_OI_l_metacarpal_5");
ROUTE1728->setToField("rotation");
ROUTE1728->setToNode("hanim_l_metacarpal_5");
group->addChildren(*ROUTE1728);

CROUTE* ROUTE1729 = new CROUTE();
ROUTE1729->setFromField("fraction_changed");
ROUTE1729->setFromNode("Armature_Clock");
ROUTE1729->setToField("set_fraction");
ROUTE1729->setToNode("Armature_OI_l_carpal_proximal_phalanx_5");
group->addChildren(*ROUTE1729);

CROUTE* ROUTE1730 = new CROUTE();
ROUTE1730->setFromField("value_changed");
ROUTE1730->setFromNode("Armature_OI_l_carpal_proximal_phalanx_5");
ROUTE1730->setToField("rotation");
ROUTE1730->setToNode("hanim_l_carpal_proximal_phalanx_5");
group->addChildren(*ROUTE1730);

CROUTE* ROUTE1731 = new CROUTE();
ROUTE1731->setFromField("fraction_changed");
ROUTE1731->setFromNode("Armature_Clock");
ROUTE1731->setToField("set_fraction");
ROUTE1731->setToNode("Armature_OI_l_carpal_middle_phalanx_5");
group->addChildren(*ROUTE1731);

CROUTE* ROUTE1732 = new CROUTE();
ROUTE1732->setFromField("value_changed");
ROUTE1732->setFromNode("Armature_OI_l_carpal_middle_phalanx_5");
ROUTE1732->setToField("rotation");
ROUTE1732->setToNode("hanim_l_carpal_middle_phalanx_5");
group->addChildren(*ROUTE1732);

CROUTE* ROUTE1733 = new CROUTE();
ROUTE1733->setFromField("fraction_changed");
ROUTE1733->setFromNode("Armature_Clock");
ROUTE1733->setToField("set_fraction");
ROUTE1733->setToNode("Armature_OI_l_carpal_distal_phalanx_5");
group->addChildren(*ROUTE1733);

CROUTE* ROUTE1734 = new CROUTE();
ROUTE1734->setFromField("value_changed");
ROUTE1734->setFromNode("Armature_OI_l_carpal_distal_phalanx_5");
ROUTE1734->setToField("rotation");
ROUTE1734->setToNode("hanim_l_carpal_distal_phalanx_5");
group->addChildren(*ROUTE1734);

CROUTE* ROUTE1735 = new CROUTE();
ROUTE1735->setFromField("fraction_changed");
ROUTE1735->setFromNode("Armature_Clock");
ROUTE1735->setToField("set_fraction");
ROUTE1735->setToNode("Armature_OI_r_clavicle");
group->addChildren(*ROUTE1735);

CROUTE* ROUTE1736 = new CROUTE();
ROUTE1736->setFromField("value_changed");
ROUTE1736->setFromNode("Armature_OI_r_clavicle");
ROUTE1736->setToField("rotation");
ROUTE1736->setToNode("hanim_r_clavicle");
group->addChildren(*ROUTE1736);

CROUTE* ROUTE1737 = new CROUTE();
ROUTE1737->setFromField("fraction_changed");
ROUTE1737->setFromNode("Armature_Clock");
ROUTE1737->setToField("set_fraction");
ROUTE1737->setToNode("Armature_OI_r_scapula");
group->addChildren(*ROUTE1737);

CROUTE* ROUTE1738 = new CROUTE();
ROUTE1738->setFromField("value_changed");
ROUTE1738->setFromNode("Armature_OI_r_scapula");
ROUTE1738->setToField("rotation");
ROUTE1738->setToNode("hanim_r_scapula");
group->addChildren(*ROUTE1738);

CROUTE* ROUTE1739 = new CROUTE();
ROUTE1739->setFromField("fraction_changed");
ROUTE1739->setFromNode("Armature_Clock");
ROUTE1739->setToField("set_fraction");
ROUTE1739->setToNode("Armature_OI_r_upperarm");
group->addChildren(*ROUTE1739);

CROUTE* ROUTE1740 = new CROUTE();
ROUTE1740->setFromField("value_changed");
ROUTE1740->setFromNode("Armature_OI_r_upperarm");
ROUTE1740->setToField("rotation");
ROUTE1740->setToNode("hanim_r_upperarm");
group->addChildren(*ROUTE1740);

CROUTE* ROUTE1741 = new CROUTE();
ROUTE1741->setFromField("fraction_changed");
ROUTE1741->setFromNode("Armature_Clock");
ROUTE1741->setToField("set_fraction");
ROUTE1741->setToNode("Armature_OI_r_forearm");
group->addChildren(*ROUTE1741);

CROUTE* ROUTE1742 = new CROUTE();
ROUTE1742->setFromField("value_changed");
ROUTE1742->setFromNode("Armature_OI_r_forearm");
ROUTE1742->setToField("rotation");
ROUTE1742->setToNode("hanim_r_forearm");
group->addChildren(*ROUTE1742);

CROUTE* ROUTE1743 = new CROUTE();
ROUTE1743->setFromField("fraction_changed");
ROUTE1743->setFromNode("Armature_Clock");
ROUTE1743->setToField("set_fraction");
ROUTE1743->setToNode("Armature_OI_r_carpal");
group->addChildren(*ROUTE1743);

CROUTE* ROUTE1744 = new CROUTE();
ROUTE1744->setFromField("value_changed");
ROUTE1744->setFromNode("Armature_OI_r_carpal");
ROUTE1744->setToField("rotation");
ROUTE1744->setToNode("hanim_r_carpal");
group->addChildren(*ROUTE1744);

CROUTE* ROUTE1745 = new CROUTE();
ROUTE1745->setFromField("fraction_changed");
ROUTE1745->setFromNode("Armature_Clock");
ROUTE1745->setToField("set_fraction");
ROUTE1745->setToNode("Armature_OI_r_trapezium");
group->addChildren(*ROUTE1745);

CROUTE* ROUTE1746 = new CROUTE();
ROUTE1746->setFromField("value_changed");
ROUTE1746->setFromNode("Armature_OI_r_trapezium");
ROUTE1746->setToField("rotation");
ROUTE1746->setToNode("hanim_r_trapezium");
group->addChildren(*ROUTE1746);

CROUTE* ROUTE1747 = new CROUTE();
ROUTE1747->setFromField("fraction_changed");
ROUTE1747->setFromNode("Armature_Clock");
ROUTE1747->setToField("set_fraction");
ROUTE1747->setToNode("Armature_OI_r_metacarpal_1");
group->addChildren(*ROUTE1747);

CROUTE* ROUTE1748 = new CROUTE();
ROUTE1748->setFromField("value_changed");
ROUTE1748->setFromNode("Armature_OI_r_metacarpal_1");
ROUTE1748->setToField("rotation");
ROUTE1748->setToNode("hanim_r_metacarpal_1");
group->addChildren(*ROUTE1748);

CROUTE* ROUTE1749 = new CROUTE();
ROUTE1749->setFromField("fraction_changed");
ROUTE1749->setFromNode("Armature_Clock");
ROUTE1749->setToField("set_fraction");
ROUTE1749->setToNode("Armature_OI_r_carpal_proximal_phalanx_1");
group->addChildren(*ROUTE1749);

CROUTE* ROUTE1750 = new CROUTE();
ROUTE1750->setFromField("value_changed");
ROUTE1750->setFromNode("Armature_OI_r_carpal_proximal_phalanx_1");
ROUTE1750->setToField("rotation");
ROUTE1750->setToNode("hanim_r_carpal_proximal_phalanx_1");
group->addChildren(*ROUTE1750);

CROUTE* ROUTE1751 = new CROUTE();
ROUTE1751->setFromField("fraction_changed");
ROUTE1751->setFromNode("Armature_Clock");
ROUTE1751->setToField("set_fraction");
ROUTE1751->setToNode("Armature_OI_r_carpal_distal_phalanx_1");
group->addChildren(*ROUTE1751);

CROUTE* ROUTE1752 = new CROUTE();
ROUTE1752->setFromField("value_changed");
ROUTE1752->setFromNode("Armature_OI_r_carpal_distal_phalanx_1");
ROUTE1752->setToField("rotation");
ROUTE1752->setToNode("hanim_r_carpal_distal_phalanx_1");
group->addChildren(*ROUTE1752);

CROUTE* ROUTE1753 = new CROUTE();
ROUTE1753->setFromField("fraction_changed");
ROUTE1753->setFromNode("Armature_Clock");
ROUTE1753->setToField("set_fraction");
ROUTE1753->setToNode("Armature_OI_r_trapezoid");
group->addChildren(*ROUTE1753);

CROUTE* ROUTE1754 = new CROUTE();
ROUTE1754->setFromField("value_changed");
ROUTE1754->setFromNode("Armature_OI_r_trapezoid");
ROUTE1754->setToField("rotation");
ROUTE1754->setToNode("hanim_r_trapezoid");
group->addChildren(*ROUTE1754);

CROUTE* ROUTE1755 = new CROUTE();
ROUTE1755->setFromField("fraction_changed");
ROUTE1755->setFromNode("Armature_Clock");
ROUTE1755->setToField("set_fraction");
ROUTE1755->setToNode("Armature_OI_r_metacarpal_2");
group->addChildren(*ROUTE1755);

CROUTE* ROUTE1756 = new CROUTE();
ROUTE1756->setFromField("value_changed");
ROUTE1756->setFromNode("Armature_OI_r_metacarpal_2");
ROUTE1756->setToField("rotation");
ROUTE1756->setToNode("hanim_r_metacarpal_2");
group->addChildren(*ROUTE1756);

CROUTE* ROUTE1757 = new CROUTE();
ROUTE1757->setFromField("fraction_changed");
ROUTE1757->setFromNode("Armature_Clock");
ROUTE1757->setToField("set_fraction");
ROUTE1757->setToNode("Armature_OI_r_carpal_proximal_phalanx_2");
group->addChildren(*ROUTE1757);

CROUTE* ROUTE1758 = new CROUTE();
ROUTE1758->setFromField("value_changed");
ROUTE1758->setFromNode("Armature_OI_r_carpal_proximal_phalanx_2");
ROUTE1758->setToField("rotation");
ROUTE1758->setToNode("hanim_r_carpal_proximal_phalanx_2");
group->addChildren(*ROUTE1758);

CROUTE* ROUTE1759 = new CROUTE();
ROUTE1759->setFromField("fraction_changed");
ROUTE1759->setFromNode("Armature_Clock");
ROUTE1759->setToField("set_fraction");
ROUTE1759->setToNode("Armature_OI_r_carpal_middle_phalanx_2");
group->addChildren(*ROUTE1759);

CROUTE* ROUTE1760 = new CROUTE();
ROUTE1760->setFromField("value_changed");
ROUTE1760->setFromNode("Armature_OI_r_carpal_middle_phalanx_2");
ROUTE1760->setToField("rotation");
ROUTE1760->setToNode("hanim_r_carpal_middle_phalanx_2");
group->addChildren(*ROUTE1760);

CROUTE* ROUTE1761 = new CROUTE();
ROUTE1761->setFromField("fraction_changed");
ROUTE1761->setFromNode("Armature_Clock");
ROUTE1761->setToField("set_fraction");
ROUTE1761->setToNode("Armature_OI_r_carpal_distal_phalanx_2");
group->addChildren(*ROUTE1761);

CROUTE* ROUTE1762 = new CROUTE();
ROUTE1762->setFromField("value_changed");
ROUTE1762->setFromNode("Armature_OI_r_carpal_distal_phalanx_2");
ROUTE1762->setToField("rotation");
ROUTE1762->setToNode("hanim_r_carpal_distal_phalanx_2");
group->addChildren(*ROUTE1762);

CROUTE* ROUTE1763 = new CROUTE();
ROUTE1763->setFromField("fraction_changed");
ROUTE1763->setFromNode("Armature_Clock");
ROUTE1763->setToField("set_fraction");
ROUTE1763->setToNode("Armature_OI_r_capitate");
group->addChildren(*ROUTE1763);

CROUTE* ROUTE1764 = new CROUTE();
ROUTE1764->setFromField("value_changed");
ROUTE1764->setFromNode("Armature_OI_r_capitate");
ROUTE1764->setToField("rotation");
ROUTE1764->setToNode("hanim_r_capitate");
group->addChildren(*ROUTE1764);

CROUTE* ROUTE1765 = new CROUTE();
ROUTE1765->setFromField("fraction_changed");
ROUTE1765->setFromNode("Armature_Clock");
ROUTE1765->setToField("set_fraction");
ROUTE1765->setToNode("Armature_OI_r_metacarpal_3");
group->addChildren(*ROUTE1765);

CROUTE* ROUTE1766 = new CROUTE();
ROUTE1766->setFromField("value_changed");
ROUTE1766->setFromNode("Armature_OI_r_metacarpal_3");
ROUTE1766->setToField("rotation");
ROUTE1766->setToNode("hanim_r_metacarpal_3");
group->addChildren(*ROUTE1766);

CROUTE* ROUTE1767 = new CROUTE();
ROUTE1767->setFromField("fraction_changed");
ROUTE1767->setFromNode("Armature_Clock");
ROUTE1767->setToField("set_fraction");
ROUTE1767->setToNode("Armature_OI_r_carpal_proximal_phalanx_3");
group->addChildren(*ROUTE1767);

CROUTE* ROUTE1768 = new CROUTE();
ROUTE1768->setFromField("value_changed");
ROUTE1768->setFromNode("Armature_OI_r_carpal_proximal_phalanx_3");
ROUTE1768->setToField("rotation");
ROUTE1768->setToNode("hanim_r_carpal_proximal_phalanx_3");
group->addChildren(*ROUTE1768);

CROUTE* ROUTE1769 = new CROUTE();
ROUTE1769->setFromField("fraction_changed");
ROUTE1769->setFromNode("Armature_Clock");
ROUTE1769->setToField("set_fraction");
ROUTE1769->setToNode("Armature_OI_r_carpal_middle_phalanx_3");
group->addChildren(*ROUTE1769);

CROUTE* ROUTE1770 = new CROUTE();
ROUTE1770->setFromField("value_changed");
ROUTE1770->setFromNode("Armature_OI_r_carpal_middle_phalanx_3");
ROUTE1770->setToField("rotation");
ROUTE1770->setToNode("hanim_r_carpal_middle_phalanx_3");
group->addChildren(*ROUTE1770);

CROUTE* ROUTE1771 = new CROUTE();
ROUTE1771->setFromField("fraction_changed");
ROUTE1771->setFromNode("Armature_Clock");
ROUTE1771->setToField("set_fraction");
ROUTE1771->setToNode("Armature_OI_r_carpal_distal_phalanx_3");
group->addChildren(*ROUTE1771);

CROUTE* ROUTE1772 = new CROUTE();
ROUTE1772->setFromField("value_changed");
ROUTE1772->setFromNode("Armature_OI_r_carpal_distal_phalanx_3");
ROUTE1772->setToField("rotation");
ROUTE1772->setToNode("hanim_r_carpal_distal_phalanx_3");
group->addChildren(*ROUTE1772);

CROUTE* ROUTE1773 = new CROUTE();
ROUTE1773->setFromField("fraction_changed");
ROUTE1773->setFromNode("Armature_Clock");
ROUTE1773->setToField("set_fraction");
ROUTE1773->setToNode("Armature_OI_r_hamate");
group->addChildren(*ROUTE1773);

CROUTE* ROUTE1774 = new CROUTE();
ROUTE1774->setFromField("value_changed");
ROUTE1774->setFromNode("Armature_OI_r_hamate");
ROUTE1774->setToField("rotation");
ROUTE1774->setToNode("hanim_r_hamate");
group->addChildren(*ROUTE1774);

CROUTE* ROUTE1775 = new CROUTE();
ROUTE1775->setFromField("fraction_changed");
ROUTE1775->setFromNode("Armature_Clock");
ROUTE1775->setToField("set_fraction");
ROUTE1775->setToNode("Armature_OI_r_metacarpal_4");
group->addChildren(*ROUTE1775);

CROUTE* ROUTE1776 = new CROUTE();
ROUTE1776->setFromField("value_changed");
ROUTE1776->setFromNode("Armature_OI_r_metacarpal_4");
ROUTE1776->setToField("rotation");
ROUTE1776->setToNode("hanim_r_metacarpal_4");
group->addChildren(*ROUTE1776);

CROUTE* ROUTE1777 = new CROUTE();
ROUTE1777->setFromField("fraction_changed");
ROUTE1777->setFromNode("Armature_Clock");
ROUTE1777->setToField("set_fraction");
ROUTE1777->setToNode("Armature_OI_r_carpal_proximal_phalanx_4");
group->addChildren(*ROUTE1777);

CROUTE* ROUTE1778 = new CROUTE();
ROUTE1778->setFromField("value_changed");
ROUTE1778->setFromNode("Armature_OI_r_carpal_proximal_phalanx_4");
ROUTE1778->setToField("rotation");
ROUTE1778->setToNode("hanim_r_carpal_proximal_phalanx_4");
group->addChildren(*ROUTE1778);

CROUTE* ROUTE1779 = new CROUTE();
ROUTE1779->setFromField("fraction_changed");
ROUTE1779->setFromNode("Armature_Clock");
ROUTE1779->setToField("set_fraction");
ROUTE1779->setToNode("Armature_OI_r_carpal_middle_phalanx_4");
group->addChildren(*ROUTE1779);

CROUTE* ROUTE1780 = new CROUTE();
ROUTE1780->setFromField("value_changed");
ROUTE1780->setFromNode("Armature_OI_r_carpal_middle_phalanx_4");
ROUTE1780->setToField("rotation");
ROUTE1780->setToNode("hanim_r_carpal_middle_phalanx_4");
group->addChildren(*ROUTE1780);

CROUTE* ROUTE1781 = new CROUTE();
ROUTE1781->setFromField("fraction_changed");
ROUTE1781->setFromNode("Armature_Clock");
ROUTE1781->setToField("set_fraction");
ROUTE1781->setToNode("Armature_OI_r_carpal_distal_phalanx_4");
group->addChildren(*ROUTE1781);

CROUTE* ROUTE1782 = new CROUTE();
ROUTE1782->setFromField("value_changed");
ROUTE1782->setFromNode("Armature_OI_r_carpal_distal_phalanx_4");
ROUTE1782->setToField("rotation");
ROUTE1782->setToNode("hanim_r_carpal_distal_phalanx_4");
group->addChildren(*ROUTE1782);

CROUTE* ROUTE1783 = new CROUTE();
ROUTE1783->setFromField("fraction_changed");
ROUTE1783->setFromNode("Armature_Clock");
ROUTE1783->setToField("set_fraction");
ROUTE1783->setToNode("Armature_OI_r_metacarpal_5");
group->addChildren(*ROUTE1783);

CROUTE* ROUTE1784 = new CROUTE();
ROUTE1784->setFromField("value_changed");
ROUTE1784->setFromNode("Armature_OI_r_metacarpal_5");
ROUTE1784->setToField("rotation");
ROUTE1784->setToNode("hanim_r_metacarpal_5");
group->addChildren(*ROUTE1784);

CROUTE* ROUTE1785 = new CROUTE();
ROUTE1785->setFromField("fraction_changed");
ROUTE1785->setFromNode("Armature_Clock");
ROUTE1785->setToField("set_fraction");
ROUTE1785->setToNode("Armature_OI_r_carpal_proximal_phalanx_5");
group->addChildren(*ROUTE1785);

CROUTE* ROUTE1786 = new CROUTE();
ROUTE1786->setFromField("value_changed");
ROUTE1786->setFromNode("Armature_OI_r_carpal_proximal_phalanx_5");
ROUTE1786->setToField("rotation");
ROUTE1786->setToNode("hanim_r_carpal_proximal_phalanx_5");
group->addChildren(*ROUTE1786);

CROUTE* ROUTE1787 = new CROUTE();
ROUTE1787->setFromField("fraction_changed");
ROUTE1787->setFromNode("Armature_Clock");
ROUTE1787->setToField("set_fraction");
ROUTE1787->setToNode("Armature_OI_r_carpal_middle_phalanx_5");
group->addChildren(*ROUTE1787);

CROUTE* ROUTE1788 = new CROUTE();
ROUTE1788->setFromField("value_changed");
ROUTE1788->setFromNode("Armature_OI_r_carpal_middle_phalanx_5");
ROUTE1788->setToField("rotation");
ROUTE1788->setToNode("hanim_r_carpal_middle_phalanx_5");
group->addChildren(*ROUTE1788);

CROUTE* ROUTE1789 = new CROUTE();
ROUTE1789->setFromField("fraction_changed");
ROUTE1789->setFromNode("Armature_Clock");
ROUTE1789->setToField("set_fraction");
ROUTE1789->setToNode("Armature_OI_r_carpal_distal_phalanx_5");
group->addChildren(*ROUTE1789);

CROUTE* ROUTE1790 = new CROUTE();
ROUTE1790->setFromField("value_changed");
ROUTE1790->setFromNode("Armature_OI_r_carpal_distal_phalanx_5");
ROUTE1790->setToField("rotation");
ROUTE1790->setToNode("hanim_r_carpal_distal_phalanx_5");
group->addChildren(*ROUTE1790);

X3D0->setScene(*Scene9);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
