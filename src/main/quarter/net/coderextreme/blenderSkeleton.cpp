
#include <Inventor/nodes/SoCone.h>
#include <Inventor/nodes/SoBaseColor.h>
#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/nodes/SoShape.h>
#include <Inventor/nodes/SoTransform.h>
#include <Inventor/nodes/SoSphere.h>
#include <Inventor/nodes/SoMaterial.h>
#include <Inventor/misc/SoProtoInstance.h>
#include <Inventor/VRMLnodes/SoVRMLAppearance.h>
#include <Quarter/Quarter.h>
#include <Quarter/QuarterWidget.h>
#include <QApplication>
#include <QMainWindow>

using namespace SIM::Coin3D::Quarter;
int main(int argc, char ** argv) 
{

  QApplication app(argc, argv);
  Quarter::init();

  SoSeparator * root = new SoSeparator;
  root->ref();

  SoBaseColor * col = new SoBaseColor;
  col->rgb = SbColor(1, 1, 0);
  root->addChild(col);

  root->addChild(new SoCone);

  QMainWindow * mainwin = new QMainWindow();

  QuarterWidget * viewer = new QuarterWidget(mainwin);
  viewer->setNavigationModeFile();
  mainwin->setCentralWidget(viewer);
  viewer->setSceneGraph(root);

  mainwin->show();
  app.exec();
  root->unref();
  delete viewer;

  Quarter::clean();
SoSceneManager* SoSceneManager0 = new SoSceneManager();
SoSceneManager0->setProfile(QString("Immersive"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("HAnim"));
Socomponent2->setLevel(3);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("blenderSkeleton.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("copyright"));
Someta4->setContent(QString("2023"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("reference"));
Someta5->setContent(QString("http://www.web3D.org"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("generator"));
Someta6->setContent(QString("Blender 4.0.1"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoNavigationInfo* SoNavigationInfo8 = new SoNavigationInfo();
SoNode7->addChild(*SoNavigationInfo8);

SoBackground* SoBackground9 = new SoBackground();
SoBackground9->setDEF(QString("WO_World"));
SoBackground9->setGroundColor(new float[]{0.05087608844041824,0.05087608844041824,0.05087608844041824}, 3);
SoBackground9->setSkyColor(new float[]{0.05087608844041824,0.05087608844041824,0.05087608844041824}, 3);
SoNode7->addChild(*SoBackground9);

SoTransform* SoTransform10 = new SoTransform();
SoShape* SoShape11 = new SoShape();
SoShape11->setDEF(QString("SiteShape"));
SoBox* SoBox12 = new SoBox();
SoBox12->setSize(new float[]{0.05,0.05,0.05});
SoShape11->setGeometry(*SoBox12);

SoVRMLAppearance* SoVRMLAppearance13 = new SoVRMLAppearance();
SoMaterial* SoMaterial14 = new SoMaterial();
SoMaterial14->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance13->addChild(*SoMaterial14);

SoShape11->addChild(*SoVRMLAppearance13);

SoTransform10->addChild(*SoShape11);

SoNode7->addChild(*SoTransform10);

SoTransform* SoTransform15 = new SoTransform();
SoShape* SoShape16 = new SoShape();
SoShape16->setDEF(QString("JointShape"));
SoSphere* SoSphere17 = new SoSphere();
SoSphere17->setRadius(0.06);
SoShape16->setGeometry(*SoSphere17);

SoVRMLAppearance* SoVRMLAppearance18 = new SoVRMLAppearance();
SoVRMLAppearance18->setDEF(QString("JointAppearance"));
SoMaterial* SoMaterial19 = new SoMaterial();
SoMaterial19->setDiffuseColor(new float[]{1.0,0.5,0.0});
SoMaterial19->setTransparency(0.5);
SoVRMLAppearance18->addChild(*SoMaterial19);

SoShape16->addChild(*SoVRMLAppearance18);

SoTransform15->addChild(*SoShape16);

SoNode7->addChild(*SoTransform15);

SoTransform* SoTransform20 = new SoTransform();
SoTransform20->setDEF(QString("Light_TRANSFORM"));
SoTransform20->setRotation(new float[]{0.20594,0.33152,0.9207,1.92627});
SoTransform20->setTranslation(new float[]{4.07625,1.00545,5.90386});
SoPointLight* SoPointLight21 = new SoPointLight();
SoPointLight21->setDEF(QString("LA_Light"));
SoPointLight21->setLocation(new float[]{-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7});
SoPointLight21->setRadius(40);
SoTransform20->addChild(*SoPointLight21);

SoNode7->addChild(*SoTransform20);

SoTransform* SoTransform22 = new SoTransform();
SoTransform22->setDEF(QString("Camera_TRANSFORM"));
SoTransform22->setRotation(new float[]{0.77344,0.33383,0.53884,1.35072});
SoTransform22->setTranslation(new float[]{7.35889,-6.92579,4.95831});
SoViewpoint* SoViewpoint23 = new SoViewpoint();
SoViewpoint23->setDEF(QString("CA_Camera"));
SoViewpoint23->setFieldOfView(0.6911112070083618);
SoViewpoint23->setOrientation(new float[]{-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0.0});
SoViewpoint23->setPosition(new float[]{-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7});
SoTransform22->addChild(*SoViewpoint23);

SoNode7->addChild(*SoTransform22);

SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setDEF(QString("Armature_TRANSFORM"));
SoHAnimHumanoid* SoHAnimHumanoid25 = new SoHAnimHumanoid();
SoHAnimHumanoid25->X3DNode::setName(QString("humanoid"));
SoHAnimHumanoid25->setDEF(QString("hanim_humanoid"));
SoHAnimHumanoid25->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint26 = new SoHAnimJoint();
SoHAnimJoint26->X3DNode::setName(QString("Armature"));
SoHAnimJoint26->setDEF(QString("hanim_Armature"));
SoHAnimJoint26->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint26->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment27 = new SoHAnimSegment();
SoHAnimSegment27->X3DNode::setName(QString("SEGMENT_FOR_Armature"));
SoHAnimSegment27->setDEF(QString("hanim_SEGMENT_FOR_Armature"));
SoTouchSensor* SoTouchSensor28 = new SoTouchSensor();
SoTouchSensor28->setDescription(QString("joint Armature segment SEGMENT_FOR_Armature"));
SoHAnimSegment27->addChild(*SoTouchSensor28);

SoTransform* SoTransform29 = new SoTransform();
SoShape* SoShape30 = new SoShape();
SoShape30->setUSE(QString("JointShape"));
SoTransform29->addChild(*SoShape30);

SoHAnimSegment27->addChild(*SoTransform29);

SoHAnimSite* SoHAnimSite31 = new SoHAnimSite();
SoHAnimSite31->X3DNode::setName(QString("SEGMENT_FOR_Armature_tip"));
SoHAnimSite31->setDEF(QString("hanim_SEGMENT_FOR_Armature_tip"));
SoTransform* SoTransform32 = new SoTransform();
SoShape* SoShape33 = new SoShape();
SoShape33->setUSE(QString("SiteShape"));
SoTransform32->addChild(*SoShape33);

SoHAnimSite31->addChild(*SoTransform32);

SoHAnimSegment27->addChild(*SoHAnimSite31);

SoHAnimJoint26->addChildren(*SoHAnimSegment27);

SoHAnimJoint* SoHAnimJoint34 = new SoHAnimJoint();
SoHAnimJoint34->X3DNode::setName(QString("sacrum"));
SoHAnimJoint34->setDEF(QString("hanim_sacrum"));
SoHAnimJoint34->setCenter(new float[]{-0.0002,-0.1178,0.8174});
SoHAnimJoint34->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint34->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment35 = new SoHAnimSegment();
SoHAnimSegment35->X3DNode::setName(QString("SEGMENT_FOR_sacrum"));
SoHAnimSegment35->setDEF(QString("hanim_SEGMENT_FOR_sacrum"));
SoTouchSensor* SoTouchSensor36 = new SoTouchSensor();
SoTouchSensor36->setDescription(QString("joint sacrum segment SEGMENT_FOR_sacrum"));
SoHAnimSegment35->addChild(*SoTouchSensor36);

SoTransform* SoTransform37 = new SoTransform();
SoTransform37->setTranslation(new float[]{-0.0002,-0.1178,0.8174});
SoShape* SoShape38 = new SoShape();
SoShape38->setUSE(QString("JointShape"));
SoTransform37->addChild(*SoShape38);

SoHAnimSegment35->addChild(*SoTransform37);

SoHAnimSite* SoHAnimSite39 = new SoHAnimSite();
SoHAnimSite39->X3DNode::setName(QString("SEGMENT_FOR_sacrum_tip"));
SoHAnimSite39->setDEF(QString("hanim_SEGMENT_FOR_sacrum_tip"));
SoTransform* SoTransform40 = new SoTransform();
SoTransform40->setTranslation(new float[]{-0.0002,-0.1178,0.8174});
SoShape* SoShape41 = new SoShape();
SoShape41->setUSE(QString("SiteShape"));
SoTransform40->addChild(*SoShape41);

SoHAnimSite39->addChild(*SoTransform40);

SoHAnimSegment35->addChild(*SoHAnimSite39);

SoHAnimJoint34->addChildren(*SoHAnimSegment35);

SoHAnimJoint* SoHAnimJoint42 = new SoHAnimJoint();
SoHAnimJoint42->X3DNode::setName(QString("pelvis"));
SoHAnimJoint42->setDEF(QString("hanim_pelvis"));
SoHAnimJoint42->setCenter(new float[]{-0.0002,-0.1178,0.6986});
SoHAnimJoint42->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint42->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment43 = new SoHAnimSegment();
SoHAnimSegment43->X3DNode::setName(QString("SEGMENT_FOR_pelvis"));
SoHAnimSegment43->setDEF(QString("hanim_SEGMENT_FOR_pelvis"));
SoTouchSensor* SoTouchSensor44 = new SoTouchSensor();
SoTouchSensor44->setDescription(QString("joint pelvis segment SEGMENT_FOR_pelvis"));
SoHAnimSegment43->addChild(*SoTouchSensor44);

SoTransform* SoTransform45 = new SoTransform();
SoTransform45->setTranslation(new float[]{-0.0002,-0.1178,0.6986});
SoShape* SoShape46 = new SoShape();
SoShape46->setUSE(QString("JointShape"));
SoTransform45->addChild(*SoShape46);

SoHAnimSegment43->addChild(*SoTransform45);

SoHAnimSite* SoHAnimSite47 = new SoHAnimSite();
SoHAnimSite47->X3DNode::setName(QString("SEGMENT_FOR_pelvis_tip"));
SoHAnimSite47->setDEF(QString("hanim_SEGMENT_FOR_pelvis_tip"));
SoTransform* SoTransform48 = new SoTransform();
SoTransform48->setTranslation(new float[]{-0.0002,-0.1178,0.6986});
SoShape* SoShape49 = new SoShape();
SoShape49->setUSE(QString("SiteShape"));
SoTransform48->addChild(*SoShape49);

SoHAnimSite47->addChild(*SoTransform48);

SoHAnimSegment43->addChild(*SoHAnimSite47);

SoHAnimJoint42->addChildren(*SoHAnimSegment43);

SoHAnimJoint* SoHAnimJoint50 = new SoHAnimJoint();
SoHAnimJoint50->X3DNode::setName(QString("l_thigh"));
SoHAnimJoint50->setDEF(QString("hanim_l_thigh"));
SoHAnimJoint50->setCenter(new float[]{0.0945,-0.1202,0.8181});
SoHAnimJoint50->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint50->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment51 = new SoHAnimSegment();
SoHAnimSegment51->X3DNode::setName(QString("SEGMENT_FOR_l_thigh"));
SoHAnimSegment51->setDEF(QString("hanim_SEGMENT_FOR_l_thigh"));
SoTouchSensor* SoTouchSensor52 = new SoTouchSensor();
SoTouchSensor52->setDescription(QString("joint l_thigh segment SEGMENT_FOR_l_thigh"));
SoHAnimSegment51->addChild(*SoTouchSensor52);

SoTransform* SoTransform53 = new SoTransform();
SoTransform53->setTranslation(new float[]{0.0945,-0.1202,0.8181});
SoShape* SoShape54 = new SoShape();
SoShape54->setUSE(QString("JointShape"));
SoTransform53->addChild(*SoShape54);

SoHAnimSegment51->addChild(*SoTransform53);

SoHAnimSite* SoHAnimSite55 = new SoHAnimSite();
SoHAnimSite55->X3DNode::setName(QString("SEGMENT_FOR_l_thigh_tip"));
SoHAnimSite55->setDEF(QString("hanim_SEGMENT_FOR_l_thigh_tip"));
SoTransform* SoTransform56 = new SoTransform();
SoTransform56->setTranslation(new float[]{0.0945,-0.1202,0.8181});
SoShape* SoShape57 = new SoShape();
SoShape57->setUSE(QString("SiteShape"));
SoTransform56->addChild(*SoShape57);

SoHAnimSite55->addChild(*SoTransform56);

SoHAnimSegment51->addChild(*SoHAnimSite55);

SoHAnimJoint50->addChildren(*SoHAnimSegment51);

SoHAnimJoint* SoHAnimJoint58 = new SoHAnimJoint();
SoHAnimJoint58->X3DNode::setName(QString("l_calf"));
SoHAnimJoint58->setDEF(QString("hanim_l_calf"));
SoHAnimJoint58->setCenter(new float[]{0.0924,-0.1213,0.4003});
SoHAnimJoint58->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint58->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment59 = new SoHAnimSegment();
SoHAnimSegment59->X3DNode::setName(QString("SEGMENT_FOR_l_calf"));
SoHAnimSegment59->setDEF(QString("hanim_SEGMENT_FOR_l_calf"));
SoTouchSensor* SoTouchSensor60 = new SoTouchSensor();
SoTouchSensor60->setDescription(QString("joint l_calf segment SEGMENT_FOR_l_calf"));
SoHAnimSegment59->addChild(*SoTouchSensor60);

SoTransform* SoTransform61 = new SoTransform();
SoTransform61->setTranslation(new float[]{0.0924,-0.1213,0.4003});
SoShape* SoShape62 = new SoShape();
SoShape62->setUSE(QString("JointShape"));
SoTransform61->addChild(*SoShape62);

SoHAnimSegment59->addChild(*SoTransform61);

SoHAnimSite* SoHAnimSite63 = new SoHAnimSite();
SoHAnimSite63->X3DNode::setName(QString("SEGMENT_FOR_l_calf_tip"));
SoHAnimSite63->setDEF(QString("hanim_SEGMENT_FOR_l_calf_tip"));
SoTransform* SoTransform64 = new SoTransform();
SoTransform64->setTranslation(new float[]{0.0924,-0.1213,0.4003});
SoShape* SoShape65 = new SoShape();
SoShape65->setUSE(QString("SiteShape"));
SoTransform64->addChild(*SoShape65);

SoHAnimSite63->addChild(*SoTransform64);

SoHAnimSegment59->addChild(*SoHAnimSite63);

SoHAnimJoint58->addChildren(*SoHAnimSegment59);

SoHAnimJoint* SoHAnimJoint66 = new SoHAnimJoint();
SoHAnimJoint66->X3DNode::setName(QString("l_talus"));
SoHAnimJoint66->setDEF(QString("hanim_l_talus"));
SoHAnimJoint66->setCenter(new float[]{0.0886,-0.1123,0.0869});
SoHAnimJoint66->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint66->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment67 = new SoHAnimSegment();
SoHAnimSegment67->X3DNode::setName(QString("SEGMENT_FOR_l_talus"));
SoHAnimSegment67->setDEF(QString("hanim_SEGMENT_FOR_l_talus"));
SoTouchSensor* SoTouchSensor68 = new SoTouchSensor();
SoTouchSensor68->setDescription(QString("joint l_talus segment SEGMENT_FOR_l_talus"));
SoHAnimSegment67->addChild(*SoTouchSensor68);

SoTransform* SoTransform69 = new SoTransform();
SoTransform69->setTranslation(new float[]{0.0886,-0.1123,0.0869});
SoShape* SoShape70 = new SoShape();
SoShape70->setUSE(QString("JointShape"));
SoTransform69->addChild(*SoShape70);

SoHAnimSegment67->addChild(*SoTransform69);

SoHAnimSite* SoHAnimSite71 = new SoHAnimSite();
SoHAnimSite71->X3DNode::setName(QString("SEGMENT_FOR_l_talus_tip"));
SoHAnimSite71->setDEF(QString("hanim_SEGMENT_FOR_l_talus_tip"));
SoTransform* SoTransform72 = new SoTransform();
SoTransform72->setTranslation(new float[]{0.0886,-0.1123,0.0869});
SoShape* SoShape73 = new SoShape();
SoShape73->setUSE(QString("SiteShape"));
SoTransform72->addChild(*SoShape73);

SoHAnimSite71->addChild(*SoTransform72);

SoHAnimSegment67->addChild(*SoHAnimSite71);

SoHAnimJoint66->addChildren(*SoHAnimSegment67);

SoHAnimJoint* SoHAnimJoint74 = new SoHAnimJoint();
SoHAnimJoint74->X3DNode::setName(QString("l_navicular"));
SoHAnimJoint74->setDEF(QString("hanim_l_navicular"));
SoHAnimJoint74->setCenter(new float[]{0.0781,-0.097,0.0283});
SoHAnimJoint74->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint74->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment75 = new SoHAnimSegment();
SoHAnimSegment75->X3DNode::setName(QString("SEGMENT_FOR_l_navicular"));
SoHAnimSegment75->setDEF(QString("hanim_SEGMENT_FOR_l_navicular"));
SoTouchSensor* SoTouchSensor76 = new SoTouchSensor();
SoTouchSensor76->setDescription(QString("joint l_navicular segment SEGMENT_FOR_l_navicular"));
SoHAnimSegment75->addChild(*SoTouchSensor76);

SoTransform* SoTransform77 = new SoTransform();
SoTransform77->setTranslation(new float[]{0.0781,-0.097,0.0283});
SoShape* SoShape78 = new SoShape();
SoShape78->setUSE(QString("JointShape"));
SoTransform77->addChild(*SoShape78);

SoHAnimSegment75->addChild(*SoTransform77);

SoHAnimSite* SoHAnimSite79 = new SoHAnimSite();
SoHAnimSite79->X3DNode::setName(QString("SEGMENT_FOR_l_navicular_tip"));
SoHAnimSite79->setDEF(QString("hanim_SEGMENT_FOR_l_navicular_tip"));
SoTransform* SoTransform80 = new SoTransform();
SoTransform80->setTranslation(new float[]{0.0781,-0.097,0.0283});
SoShape* SoShape81 = new SoShape();
SoShape81->setUSE(QString("SiteShape"));
SoTransform80->addChild(*SoShape81);

SoHAnimSite79->addChild(*SoTransform80);

SoHAnimSegment75->addChild(*SoHAnimSite79);

SoHAnimJoint74->addChildren(*SoHAnimSegment75);

SoHAnimJoint* SoHAnimJoint82 = new SoHAnimJoint();
SoHAnimJoint82->X3DNode::setName(QString("l_cuneiform_1"));
SoHAnimJoint82->setDEF(QString("hanim_l_cuneiform_1"));
SoHAnimJoint82->setCenter(new float[]{0.0672,-0.0835,0.0235});
SoHAnimJoint82->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint82->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment83 = new SoHAnimSegment();
SoHAnimSegment83->X3DNode::setName(QString("SEGMENT_FOR_l_cuneiform_1"));
SoHAnimSegment83->setDEF(QString("hanim_SEGMENT_FOR_l_cuneiform_1"));
SoTouchSensor* SoTouchSensor84 = new SoTouchSensor();
SoTouchSensor84->setDescription(QString("joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1"));
SoHAnimSegment83->addChild(*SoTouchSensor84);

SoTransform* SoTransform85 = new SoTransform();
SoTransform85->setTranslation(new float[]{0.0672,-0.0835,0.0235});
SoShape* SoShape86 = new SoShape();
SoShape86->setUSE(QString("JointShape"));
SoTransform85->addChild(*SoShape86);

SoHAnimSegment83->addChild(*SoTransform85);

SoHAnimSite* SoHAnimSite87 = new SoHAnimSite();
SoHAnimSite87->X3DNode::setName(QString("SEGMENT_FOR_l_cuneiform_1_tip"));
SoHAnimSite87->setDEF(QString("hanim_SEGMENT_FOR_l_cuneiform_1_tip"));
SoTransform* SoTransform88 = new SoTransform();
SoTransform88->setTranslation(new float[]{0.0672,-0.0835,0.0235});
SoShape* SoShape89 = new SoShape();
SoShape89->setUSE(QString("SiteShape"));
SoTransform88->addChild(*SoShape89);

SoHAnimSite87->addChild(*SoTransform88);

SoHAnimSegment83->addChild(*SoHAnimSite87);

SoHAnimJoint82->addChildren(*SoHAnimSegment83);

SoHAnimJoint* SoHAnimJoint90 = new SoHAnimJoint();
SoHAnimJoint90->X3DNode::setName(QString("l_metatarsal_1"));
SoHAnimJoint90->setDEF(QString("hanim_l_metatarsal_1"));
SoHAnimJoint90->setCenter(new float[]{0.0644,-0.0577,0.0147});
SoHAnimJoint90->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint90->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment91 = new SoHAnimSegment();
SoHAnimSegment91->X3DNode::setName(QString("SEGMENT_FOR_l_metatarsal_1"));
SoHAnimSegment91->setDEF(QString("hanim_SEGMENT_FOR_l_metatarsal_1"));
SoTouchSensor* SoTouchSensor92 = new SoTouchSensor();
SoTouchSensor92->setDescription(QString("joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1"));
SoHAnimSegment91->addChild(*SoTouchSensor92);

SoTransform* SoTransform93 = new SoTransform();
SoTransform93->setTranslation(new float[]{0.0644,-0.0577,0.0147});
SoShape* SoShape94 = new SoShape();
SoShape94->setUSE(QString("JointShape"));
SoTransform93->addChild(*SoShape94);

SoHAnimSegment91->addChild(*SoTransform93);

SoHAnimSite* SoHAnimSite95 = new SoHAnimSite();
SoHAnimSite95->X3DNode::setName(QString("SEGMENT_FOR_l_metatarsal_1_tip"));
SoHAnimSite95->setDEF(QString("hanim_SEGMENT_FOR_l_metatarsal_1_tip"));
SoTransform* SoTransform96 = new SoTransform();
SoTransform96->setTranslation(new float[]{0.0644,-0.0577,0.0147});
SoShape* SoShape97 = new SoShape();
SoShape97->setUSE(QString("SiteShape"));
SoTransform96->addChild(*SoShape97);

SoHAnimSite95->addChild(*SoTransform96);

SoHAnimSegment91->addChild(*SoHAnimSite95);

SoHAnimJoint90->addChildren(*SoHAnimSegment91);

SoHAnimJoint* SoHAnimJoint98 = new SoHAnimJoint();
SoHAnimJoint98->X3DNode::setName(QString("l_tarsal_proximal_phalanx_1"));
SoHAnimJoint98->setDEF(QString("hanim_l_tarsal_proximal_phalanx_1"));
SoHAnimJoint98->setCenter(new float[]{0.0619,-0.0083,0.0059});
SoHAnimJoint98->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint98->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment99 = new SoHAnimSegment();
SoHAnimSegment99->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_proximal_phalanx_1"));
SoHAnimSegment99->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1"));
SoTouchSensor* SoTouchSensor100 = new SoTouchSensor();
SoTouchSensor100->setDescription(QString("joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1"));
SoHAnimSegment99->addChild(*SoTouchSensor100);

SoTransform* SoTransform101 = new SoTransform();
SoTransform101->setTranslation(new float[]{0.0619,-0.0083,0.0059});
SoShape* SoShape102 = new SoShape();
SoShape102->setUSE(QString("JointShape"));
SoTransform101->addChild(*SoShape102);

SoHAnimSegment99->addChild(*SoTransform101);

SoHAnimSite* SoHAnimSite103 = new SoHAnimSite();
SoHAnimSite103->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip"));
SoHAnimSite103->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip"));
SoTransform* SoTransform104 = new SoTransform();
SoTransform104->setTranslation(new float[]{0.0619,-0.0083,0.0059});
SoShape* SoShape105 = new SoShape();
SoShape105->setUSE(QString("SiteShape"));
SoTransform104->addChild(*SoShape105);

SoHAnimSite103->addChild(*SoTransform104);

SoHAnimSegment99->addChild(*SoHAnimSite103);

SoHAnimJoint98->addChildren(*SoHAnimSegment99);

SoHAnimJoint* SoHAnimJoint106 = new SoHAnimJoint();
SoHAnimJoint106->X3DNode::setName(QString("l_tarsal_distal_phalanx_1"));
SoHAnimJoint106->setDEF(QString("hanim_l_tarsal_distal_phalanx_1"));
SoHAnimJoint106->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint106->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment107 = new SoHAnimSegment();
SoHAnimSegment107->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_distal_phalanx_1"));
SoHAnimSegment107->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1"));
SoTouchSensor* SoTouchSensor108 = new SoTouchSensor();
SoTouchSensor108->setDescription(QString("joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1"));
SoHAnimSegment107->addChild(*SoTouchSensor108);

SoTransform* SoTransform109 = new SoTransform();
SoShape* SoShape110 = new SoShape();
SoShape110->setUSE(QString("JointShape"));
SoTransform109->addChild(*SoShape110);

SoHAnimSegment107->addChild(*SoTransform109);

SoHAnimSite* SoHAnimSite111 = new SoHAnimSite();
SoHAnimSite111->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip"));
SoHAnimSite111->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip"));
SoTransform* SoTransform112 = new SoTransform();
SoShape* SoShape113 = new SoShape();
SoShape113->setUSE(QString("SiteShape"));
SoTransform112->addChild(*SoShape113);

SoHAnimSite111->addChild(*SoTransform112);

SoHAnimSegment107->addChild(*SoHAnimSite111);

SoHAnimJoint106->addChildren(*SoHAnimSegment107);

SoHAnimJoint98->addChildren(*SoHAnimJoint106);

SoHAnimJoint90->addChildren(*SoHAnimJoint98);

SoHAnimJoint82->addChildren(*SoHAnimJoint90);

SoHAnimJoint74->addChildren(*SoHAnimJoint82);

SoHAnimJoint* SoHAnimJoint114 = new SoHAnimJoint();
SoHAnimJoint114->X3DNode::setName(QString("l_cuneiform_2"));
SoHAnimJoint114->setDEF(QString("hanim_l_cuneiform_2"));
SoHAnimJoint114->setCenter(new float[]{0.0812,-0.0805,0.025});
SoHAnimJoint114->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint114->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment115 = new SoHAnimSegment();
SoHAnimSegment115->X3DNode::setName(QString("SEGMENT_FOR_l_cuneiform_2"));
SoHAnimSegment115->setDEF(QString("hanim_SEGMENT_FOR_l_cuneiform_2"));
SoTouchSensor* SoTouchSensor116 = new SoTouchSensor();
SoTouchSensor116->setDescription(QString("joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2"));
SoHAnimSegment115->addChild(*SoTouchSensor116);

SoTransform* SoTransform117 = new SoTransform();
SoTransform117->setTranslation(new float[]{0.0812,-0.0805,0.025});
SoShape* SoShape118 = new SoShape();
SoShape118->setUSE(QString("JointShape"));
SoTransform117->addChild(*SoShape118);

SoHAnimSegment115->addChild(*SoTransform117);

SoHAnimSite* SoHAnimSite119 = new SoHAnimSite();
SoHAnimSite119->X3DNode::setName(QString("SEGMENT_FOR_l_cuneiform_2_tip"));
SoHAnimSite119->setDEF(QString("hanim_SEGMENT_FOR_l_cuneiform_2_tip"));
SoTransform* SoTransform120 = new SoTransform();
SoTransform120->setTranslation(new float[]{0.0812,-0.0805,0.025});
SoShape* SoShape121 = new SoShape();
SoShape121->setUSE(QString("SiteShape"));
SoTransform120->addChild(*SoShape121);

SoHAnimSite119->addChild(*SoTransform120);

SoHAnimSegment115->addChild(*SoHAnimSite119);

SoHAnimJoint114->addChildren(*SoHAnimSegment115);

SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->X3DNode::setName(QString("l_metatarsal_2"));
SoHAnimJoint122->setDEF(QString("hanim_l_metatarsal_2"));
SoHAnimJoint122->setCenter(new float[]{0.08,-0.0608,0.0175});
SoHAnimJoint122->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint122->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment123 = new SoHAnimSegment();
SoHAnimSegment123->X3DNode::setName(QString("SEGMENT_FOR_l_metatarsal_2"));
SoHAnimSegment123->setDEF(QString("hanim_SEGMENT_FOR_l_metatarsal_2"));
SoTouchSensor* SoTouchSensor124 = new SoTouchSensor();
SoTouchSensor124->setDescription(QString("joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2"));
SoHAnimSegment123->addChild(*SoTouchSensor124);

SoTransform* SoTransform125 = new SoTransform();
SoTransform125->setTranslation(new float[]{0.08,-0.0608,0.0175});
SoShape* SoShape126 = new SoShape();
SoShape126->setUSE(QString("JointShape"));
SoTransform125->addChild(*SoShape126);

SoHAnimSegment123->addChild(*SoTransform125);

SoHAnimSite* SoHAnimSite127 = new SoHAnimSite();
SoHAnimSite127->X3DNode::setName(QString("SEGMENT_FOR_l_metatarsal_2_tip"));
SoHAnimSite127->setDEF(QString("hanim_SEGMENT_FOR_l_metatarsal_2_tip"));
SoTransform* SoTransform128 = new SoTransform();
SoTransform128->setTranslation(new float[]{0.08,-0.0608,0.0175});
SoShape* SoShape129 = new SoShape();
SoShape129->setUSE(QString("SiteShape"));
SoTransform128->addChild(*SoShape129);

SoHAnimSite127->addChild(*SoTransform128);

SoHAnimSegment123->addChild(*SoHAnimSite127);

SoHAnimJoint122->addChildren(*SoHAnimSegment123);

SoHAnimJoint* SoHAnimJoint130 = new SoHAnimJoint();
SoHAnimJoint130->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoHAnimJoint130->setDEF(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimJoint130->setCenter(new float[]{0.0824,-0.004,0.0064});
SoHAnimJoint130->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint130->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment131 = new SoHAnimSegment();
SoHAnimSegment131->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_proximal_phalanx_2"));
SoHAnimSegment131->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2"));
SoTouchSensor* SoTouchSensor132 = new SoTouchSensor();
SoTouchSensor132->setDescription(QString("joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2"));
SoHAnimSegment131->addChild(*SoTouchSensor132);

SoTransform* SoTransform133 = new SoTransform();
SoTransform133->setTranslation(new float[]{0.0824,-0.004,0.0064});
SoShape* SoShape134 = new SoShape();
SoShape134->setUSE(QString("JointShape"));
SoTransform133->addChild(*SoShape134);

SoHAnimSegment131->addChild(*SoTransform133);

SoHAnimSite* SoHAnimSite135 = new SoHAnimSite();
SoHAnimSite135->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip"));
SoHAnimSite135->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip"));
SoTransform* SoTransform136 = new SoTransform();
SoTransform136->setTranslation(new float[]{0.0824,-0.004,0.0064});
SoShape* SoShape137 = new SoShape();
SoShape137->setUSE(QString("SiteShape"));
SoTransform136->addChild(*SoShape137);

SoHAnimSite135->addChild(*SoTransform136);

SoHAnimSegment131->addChild(*SoHAnimSite135);

SoHAnimJoint130->addChildren(*SoHAnimSegment131);

SoHAnimJoint* SoHAnimJoint138 = new SoHAnimJoint();
SoHAnimJoint138->X3DNode::setName(QString("l_tarsal_middle_phalanx_2"));
SoHAnimJoint138->setDEF(QString("hanim_l_tarsal_middle_phalanx_2"));
SoHAnimJoint138->setCenter(new float[]{0.0841,0.0121,0.0041});
SoHAnimJoint138->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint138->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment139 = new SoHAnimSegment();
SoHAnimSegment139->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_middle_phalanx_2"));
SoHAnimSegment139->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2"));
SoTouchSensor* SoTouchSensor140 = new SoTouchSensor();
SoTouchSensor140->setDescription(QString("joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2"));
SoHAnimSegment139->addChild(*SoTouchSensor140);

SoTransform* SoTransform141 = new SoTransform();
SoTransform141->setTranslation(new float[]{0.0841,0.0121,0.0041});
SoShape* SoShape142 = new SoShape();
SoShape142->setUSE(QString("JointShape"));
SoTransform141->addChild(*SoShape142);

SoHAnimSegment139->addChild(*SoTransform141);

SoHAnimSite* SoHAnimSite143 = new SoHAnimSite();
SoHAnimSite143->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip"));
SoHAnimSite143->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip"));
SoTransform* SoTransform144 = new SoTransform();
SoTransform144->setTranslation(new float[]{0.0841,0.0121,0.0041});
SoShape* SoShape145 = new SoShape();
SoShape145->setUSE(QString("SiteShape"));
SoTransform144->addChild(*SoShape145);

SoHAnimSite143->addChild(*SoTransform144);

SoHAnimSegment139->addChild(*SoHAnimSite143);

SoHAnimJoint138->addChildren(*SoHAnimSegment139);

SoHAnimJoint* SoHAnimJoint146 = new SoHAnimJoint();
SoHAnimJoint146->X3DNode::setName(QString("l_tarsal_distal_phalanx_2"));
SoHAnimJoint146->setDEF(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimJoint146->setCenter(new float[]{0.0841,0.0216,0.0013});
SoHAnimJoint146->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint146->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment147 = new SoHAnimSegment();
SoHAnimSegment147->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_distal_phalanx_2"));
SoHAnimSegment147->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2"));
SoTouchSensor* SoTouchSensor148 = new SoTouchSensor();
SoTouchSensor148->setDescription(QString("joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2"));
SoHAnimSegment147->addChild(*SoTouchSensor148);

SoTransform* SoTransform149 = new SoTransform();
SoTransform149->setTranslation(new float[]{0.0841,0.0216,0.0013});
SoShape* SoShape150 = new SoShape();
SoShape150->setUSE(QString("JointShape"));
SoTransform149->addChild(*SoShape150);

SoHAnimSegment147->addChild(*SoTransform149);

SoHAnimSite* SoHAnimSite151 = new SoHAnimSite();
SoHAnimSite151->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip"));
SoHAnimSite151->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip"));
SoTransform* SoTransform152 = new SoTransform();
SoTransform152->setTranslation(new float[]{0.0841,0.0216,0.0013});
SoShape* SoShape153 = new SoShape();
SoShape153->setUSE(QString("SiteShape"));
SoTransform152->addChild(*SoShape153);

SoHAnimSite151->addChild(*SoTransform152);

SoHAnimSegment147->addChild(*SoHAnimSite151);

SoHAnimJoint146->addChildren(*SoHAnimSegment147);

SoHAnimJoint138->addChildren(*SoHAnimJoint146);

SoHAnimJoint130->addChildren(*SoHAnimJoint138);

SoHAnimJoint122->addChildren(*SoHAnimJoint130);

SoHAnimJoint114->addChildren(*SoHAnimJoint122);

SoHAnimJoint74->addChildren(*SoHAnimJoint114);

SoHAnimJoint* SoHAnimJoint154 = new SoHAnimJoint();
SoHAnimJoint154->X3DNode::setName(QString("l_cuneiform_3"));
SoHAnimJoint154->setDEF(QString("hanim_l_cuneiform_3"));
SoHAnimJoint154->setCenter(new float[]{0.0928,-0.0821,0.0248});
SoHAnimJoint154->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint154->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment155 = new SoHAnimSegment();
SoHAnimSegment155->X3DNode::setName(QString("SEGMENT_FOR_l_cuneiform_3"));
SoHAnimSegment155->setDEF(QString("hanim_SEGMENT_FOR_l_cuneiform_3"));
SoTouchSensor* SoTouchSensor156 = new SoTouchSensor();
SoTouchSensor156->setDescription(QString("joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3"));
SoHAnimSegment155->addChild(*SoTouchSensor156);

SoTransform* SoTransform157 = new SoTransform();
SoTransform157->setTranslation(new float[]{0.0928,-0.0821,0.0248});
SoShape* SoShape158 = new SoShape();
SoShape158->setUSE(QString("JointShape"));
SoTransform157->addChild(*SoShape158);

SoHAnimSegment155->addChild(*SoTransform157);

SoHAnimSite* SoHAnimSite159 = new SoHAnimSite();
SoHAnimSite159->X3DNode::setName(QString("SEGMENT_FOR_l_cuneiform_3_tip"));
SoHAnimSite159->setDEF(QString("hanim_SEGMENT_FOR_l_cuneiform_3_tip"));
SoTransform* SoTransform160 = new SoTransform();
SoTransform160->setTranslation(new float[]{0.0928,-0.0821,0.0248});
SoShape* SoShape161 = new SoShape();
SoShape161->setUSE(QString("SiteShape"));
SoTransform160->addChild(*SoShape161);

SoHAnimSite159->addChild(*SoTransform160);

SoHAnimSegment155->addChild(*SoHAnimSite159);

SoHAnimJoint154->addChildren(*SoHAnimSegment155);

SoHAnimJoint* SoHAnimJoint162 = new SoHAnimJoint();
SoHAnimJoint162->X3DNode::setName(QString("l_metatarsal_3"));
SoHAnimJoint162->setDEF(QString("hanim_l_metatarsal_3"));
SoHAnimJoint162->setCenter(new float[]{0.0944,-0.0625,0.0175});
SoHAnimJoint162->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint162->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment163 = new SoHAnimSegment();
SoHAnimSegment163->X3DNode::setName(QString("SEGMENT_FOR_l_metatarsal_3"));
SoHAnimSegment163->setDEF(QString("hanim_SEGMENT_FOR_l_metatarsal_3"));
SoTouchSensor* SoTouchSensor164 = new SoTouchSensor();
SoTouchSensor164->setDescription(QString("joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3"));
SoHAnimSegment163->addChild(*SoTouchSensor164);

SoTransform* SoTransform165 = new SoTransform();
SoTransform165->setTranslation(new float[]{0.0944,-0.0625,0.0175});
SoShape* SoShape166 = new SoShape();
SoShape166->setUSE(QString("JointShape"));
SoTransform165->addChild(*SoShape166);

SoHAnimSegment163->addChild(*SoTransform165);

SoHAnimSite* SoHAnimSite167 = new SoHAnimSite();
SoHAnimSite167->X3DNode::setName(QString("SEGMENT_FOR_l_metatarsal_3_tip"));
SoHAnimSite167->setDEF(QString("hanim_SEGMENT_FOR_l_metatarsal_3_tip"));
SoTransform* SoTransform168 = new SoTransform();
SoTransform168->setTranslation(new float[]{0.0944,-0.0625,0.0175});
SoShape* SoShape169 = new SoShape();
SoShape169->setUSE(QString("SiteShape"));
SoTransform168->addChild(*SoShape169);

SoHAnimSite167->addChild(*SoTransform168);

SoHAnimSegment163->addChild(*SoHAnimSite167);

SoHAnimJoint162->addChildren(*SoHAnimSegment163);

SoHAnimJoint* SoHAnimJoint170 = new SoHAnimJoint();
SoHAnimJoint170->X3DNode::setName(QString("l_tarsal_proximal_phalanx_3"));
SoHAnimJoint170->setDEF(QString("hanim_l_tarsal_proximal_phalanx_3"));
SoHAnimJoint170->setCenter(new float[]{0.0963,-0.0065,0.0065});
SoHAnimJoint170->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint170->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment171 = new SoHAnimSegment();
SoHAnimSegment171->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_proximal_phalanx_3"));
SoHAnimSegment171->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3"));
SoTouchSensor* SoTouchSensor172 = new SoTouchSensor();
SoTouchSensor172->setDescription(QString("joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3"));
SoHAnimSegment171->addChild(*SoTouchSensor172);

SoTransform* SoTransform173 = new SoTransform();
SoTransform173->setTranslation(new float[]{0.0963,-0.0065,0.0065});
SoShape* SoShape174 = new SoShape();
SoShape174->setUSE(QString("JointShape"));
SoTransform173->addChild(*SoShape174);

SoHAnimSegment171->addChild(*SoTransform173);

SoHAnimSite* SoHAnimSite175 = new SoHAnimSite();
SoHAnimSite175->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip"));
SoHAnimSite175->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip"));
SoTransform* SoTransform176 = new SoTransform();
SoTransform176->setTranslation(new float[]{0.0963,-0.0065,0.0065});
SoShape* SoShape177 = new SoShape();
SoShape177->setUSE(QString("SiteShape"));
SoTransform176->addChild(*SoShape177);

SoHAnimSite175->addChild(*SoTransform176);

SoHAnimSegment171->addChild(*SoHAnimSite175);

SoHAnimJoint170->addChildren(*SoHAnimSegment171);

SoHAnimJoint* SoHAnimJoint178 = new SoHAnimJoint();
SoHAnimJoint178->X3DNode::setName(QString("l_tarsal_middle_phalanx_3"));
SoHAnimJoint178->setDEF(QString("hanim_l_tarsal_middle_phalanx_3"));
SoHAnimJoint178->setCenter(new float[]{0.0987,0.0086,0.0034});
SoHAnimJoint178->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint178->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment179 = new SoHAnimSegment();
SoHAnimSegment179->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_middle_phalanx_3"));
SoHAnimSegment179->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3"));
SoTouchSensor* SoTouchSensor180 = new SoTouchSensor();
SoTouchSensor180->setDescription(QString("joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3"));
SoHAnimSegment179->addChild(*SoTouchSensor180);

SoTransform* SoTransform181 = new SoTransform();
SoTransform181->setTranslation(new float[]{0.0987,0.0086,0.0034});
SoShape* SoShape182 = new SoShape();
SoShape182->setUSE(QString("JointShape"));
SoTransform181->addChild(*SoShape182);

SoHAnimSegment179->addChild(*SoTransform181);

SoHAnimSite* SoHAnimSite183 = new SoHAnimSite();
SoHAnimSite183->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip"));
SoHAnimSite183->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip"));
SoTransform* SoTransform184 = new SoTransform();
SoTransform184->setTranslation(new float[]{0.0987,0.0086,0.0034});
SoShape* SoShape185 = new SoShape();
SoShape185->setUSE(QString("SiteShape"));
SoTransform184->addChild(*SoShape185);

SoHAnimSite183->addChild(*SoTransform184);

SoHAnimSegment179->addChild(*SoHAnimSite183);

SoHAnimJoint178->addChildren(*SoHAnimSegment179);

SoHAnimJoint* SoHAnimJoint186 = new SoHAnimJoint();
SoHAnimJoint186->X3DNode::setName(QString("l_tarsal_distal_phalanx_3"));
SoHAnimJoint186->setDEF(QString("hanim_l_tarsal_distal_phalanx_3"));
SoHAnimJoint186->setCenter(new float[]{0.1002,0.0178,0.0013});
SoHAnimJoint186->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint186->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment187 = new SoHAnimSegment();
SoHAnimSegment187->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_distal_phalanx_3"));
SoHAnimSegment187->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3"));
SoTouchSensor* SoTouchSensor188 = new SoTouchSensor();
SoTouchSensor188->setDescription(QString("joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3"));
SoHAnimSegment187->addChild(*SoTouchSensor188);

SoTransform* SoTransform189 = new SoTransform();
SoTransform189->setTranslation(new float[]{0.1002,0.0178,0.0013});
SoShape* SoShape190 = new SoShape();
SoShape190->setUSE(QString("JointShape"));
SoTransform189->addChild(*SoShape190);

SoHAnimSegment187->addChild(*SoTransform189);

SoHAnimSite* SoHAnimSite191 = new SoHAnimSite();
SoHAnimSite191->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip"));
SoHAnimSite191->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip"));
SoTransform* SoTransform192 = new SoTransform();
SoTransform192->setTranslation(new float[]{0.1002,0.0178,0.0013});
SoShape* SoShape193 = new SoShape();
SoShape193->setUSE(QString("SiteShape"));
SoTransform192->addChild(*SoShape193);

SoHAnimSite191->addChild(*SoTransform192);

SoHAnimSegment187->addChild(*SoHAnimSite191);

SoHAnimJoint186->addChildren(*SoHAnimSegment187);

SoHAnimJoint178->addChildren(*SoHAnimJoint186);

SoHAnimJoint170->addChildren(*SoHAnimJoint178);

SoHAnimJoint162->addChildren(*SoHAnimJoint170);

SoHAnimJoint154->addChildren(*SoHAnimJoint162);

SoHAnimJoint74->addChildren(*SoHAnimJoint154);

SoHAnimJoint66->addChildren(*SoHAnimJoint74);

SoHAnimJoint* SoHAnimJoint194 = new SoHAnimJoint();
SoHAnimJoint194->X3DNode::setName(QString("l_calcaneus"));
SoHAnimJoint194->setDEF(QString("hanim_l_calcaneus"));
SoHAnimJoint194->setCenter(new float[]{0.0889,-0.1278,0.0494});
SoHAnimJoint194->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint194->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment195 = new SoHAnimSegment();
SoHAnimSegment195->X3DNode::setName(QString("SEGMENT_FOR_l_calcaneus"));
SoHAnimSegment195->setDEF(QString("hanim_SEGMENT_FOR_l_calcaneus"));
SoTouchSensor* SoTouchSensor196 = new SoTouchSensor();
SoTouchSensor196->setDescription(QString("joint l_calcaneus segment SEGMENT_FOR_l_calcaneus"));
SoHAnimSegment195->addChild(*SoTouchSensor196);

SoTransform* SoTransform197 = new SoTransform();
SoTransform197->setTranslation(new float[]{0.0889,-0.1278,0.0494});
SoShape* SoShape198 = new SoShape();
SoShape198->setUSE(QString("JointShape"));
SoTransform197->addChild(*SoShape198);

SoHAnimSegment195->addChild(*SoTransform197);

SoHAnimSite* SoHAnimSite199 = new SoHAnimSite();
SoHAnimSite199->X3DNode::setName(QString("SEGMENT_FOR_l_calcaneus_tip"));
SoHAnimSite199->setDEF(QString("hanim_SEGMENT_FOR_l_calcaneus_tip"));
SoTransform* SoTransform200 = new SoTransform();
SoTransform200->setTranslation(new float[]{0.0889,-0.1278,0.0494});
SoShape* SoShape201 = new SoShape();
SoShape201->setUSE(QString("SiteShape"));
SoTransform200->addChild(*SoShape201);

SoHAnimSite199->addChild(*SoTransform200);

SoHAnimSegment195->addChild(*SoHAnimSite199);

SoHAnimJoint194->addChildren(*SoHAnimSegment195);

SoHAnimJoint* SoHAnimJoint202 = new SoHAnimJoint();
SoHAnimJoint202->X3DNode::setName(QString("l_cuboid"));
SoHAnimJoint202->setDEF(QString("hanim_l_cuboid"));
SoHAnimJoint202->setCenter(new float[]{0.1105,-0.0998,0.0267});
SoHAnimJoint202->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint202->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment203 = new SoHAnimSegment();
SoHAnimSegment203->X3DNode::setName(QString("SEGMENT_FOR_l_cuboid"));
SoHAnimSegment203->setDEF(QString("hanim_SEGMENT_FOR_l_cuboid"));
SoTouchSensor* SoTouchSensor204 = new SoTouchSensor();
SoTouchSensor204->setDescription(QString("joint l_cuboid segment SEGMENT_FOR_l_cuboid"));
SoHAnimSegment203->addChild(*SoTouchSensor204);

SoTransform* SoTransform205 = new SoTransform();
SoTransform205->setTranslation(new float[]{0.1105,-0.0998,0.0267});
SoShape* SoShape206 = new SoShape();
SoShape206->setUSE(QString("JointShape"));
SoTransform205->addChild(*SoShape206);

SoHAnimSegment203->addChild(*SoTransform205);

SoHAnimSite* SoHAnimSite207 = new SoHAnimSite();
SoHAnimSite207->X3DNode::setName(QString("SEGMENT_FOR_l_cuboid_tip"));
SoHAnimSite207->setDEF(QString("hanim_SEGMENT_FOR_l_cuboid_tip"));
SoTransform* SoTransform208 = new SoTransform();
SoTransform208->setTranslation(new float[]{0.1105,-0.0998,0.0267});
SoShape* SoShape209 = new SoShape();
SoShape209->setUSE(QString("SiteShape"));
SoTransform208->addChild(*SoShape209);

SoHAnimSite207->addChild(*SoTransform208);

SoHAnimSegment203->addChild(*SoHAnimSite207);

SoHAnimJoint202->addChildren(*SoHAnimSegment203);

SoHAnimJoint* SoHAnimJoint210 = new SoHAnimJoint();
SoHAnimJoint210->X3DNode::setName(QString("l_metatarsal_4"));
SoHAnimJoint210->setDEF(QString("hanim_l_metatarsal_4"));
SoHAnimJoint210->setCenter(new float[]{0.1063,-0.0634,0.016});
SoHAnimJoint210->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint210->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment211 = new SoHAnimSegment();
SoHAnimSegment211->X3DNode::setName(QString("SEGMENT_FOR_l_metatarsal_4"));
SoHAnimSegment211->setDEF(QString("hanim_SEGMENT_FOR_l_metatarsal_4"));
SoTouchSensor* SoTouchSensor212 = new SoTouchSensor();
SoTouchSensor212->setDescription(QString("joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4"));
SoHAnimSegment211->addChild(*SoTouchSensor212);

SoTransform* SoTransform213 = new SoTransform();
SoTransform213->setTranslation(new float[]{0.1063,-0.0634,0.016});
SoShape* SoShape214 = new SoShape();
SoShape214->setUSE(QString("JointShape"));
SoTransform213->addChild(*SoShape214);

SoHAnimSegment211->addChild(*SoTransform213);

SoHAnimSite* SoHAnimSite215 = new SoHAnimSite();
SoHAnimSite215->X3DNode::setName(QString("SEGMENT_FOR_l_metatarsal_4_tip"));
SoHAnimSite215->setDEF(QString("hanim_SEGMENT_FOR_l_metatarsal_4_tip"));
SoTransform* SoTransform216 = new SoTransform();
SoTransform216->setTranslation(new float[]{0.1063,-0.0634,0.016});
SoShape* SoShape217 = new SoShape();
SoShape217->setUSE(QString("SiteShape"));
SoTransform216->addChild(*SoShape217);

SoHAnimSite215->addChild(*SoTransform216);

SoHAnimSegment211->addChild(*SoHAnimSite215);

SoHAnimJoint210->addChildren(*SoHAnimSegment211);

SoHAnimJoint* SoHAnimJoint218 = new SoHAnimJoint();
SoHAnimJoint218->X3DNode::setName(QString("l_tarsal_proximal_phalanx_4"));
SoHAnimJoint218->setDEF(QString("hanim_l_tarsal_proximal_phalanx_4"));
SoHAnimJoint218->setCenter(new float[]{0.1097,-0.0107,0.0058});
SoHAnimJoint218->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint218->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment219 = new SoHAnimSegment();
SoHAnimSegment219->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_proximal_phalanx_4"));
SoHAnimSegment219->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4"));
SoTouchSensor* SoTouchSensor220 = new SoTouchSensor();
SoTouchSensor220->setDescription(QString("joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4"));
SoHAnimSegment219->addChild(*SoTouchSensor220);

SoTransform* SoTransform221 = new SoTransform();
SoTransform221->setTranslation(new float[]{0.1097,-0.0107,0.0058});
SoShape* SoShape222 = new SoShape();
SoShape222->setUSE(QString("JointShape"));
SoTransform221->addChild(*SoShape222);

SoHAnimSegment219->addChild(*SoTransform221);

SoHAnimSite* SoHAnimSite223 = new SoHAnimSite();
SoHAnimSite223->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip"));
SoHAnimSite223->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip"));
SoTransform* SoTransform224 = new SoTransform();
SoTransform224->setTranslation(new float[]{0.1097,-0.0107,0.0058});
SoShape* SoShape225 = new SoShape();
SoShape225->setUSE(QString("SiteShape"));
SoTransform224->addChild(*SoShape225);

SoHAnimSite223->addChild(*SoTransform224);

SoHAnimSegment219->addChild(*SoHAnimSite223);

SoHAnimJoint218->addChildren(*SoHAnimSegment219);

SoHAnimJoint* SoHAnimJoint226 = new SoHAnimJoint();
SoHAnimJoint226->X3DNode::setName(QString("l_tarsal_middle_phalanx_4"));
SoHAnimJoint226->setDEF(QString("hanim_l_tarsal_middle_phalanx_4"));
SoHAnimJoint226->setCenter(new float[]{0.114,0.0044,0.0037});
SoHAnimJoint226->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint226->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment227 = new SoHAnimSegment();
SoHAnimSegment227->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_middle_phalanx_4"));
SoHAnimSegment227->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4"));
SoTouchSensor* SoTouchSensor228 = new SoTouchSensor();
SoTouchSensor228->setDescription(QString("joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4"));
SoHAnimSegment227->addChild(*SoTouchSensor228);

SoTransform* SoTransform229 = new SoTransform();
SoTransform229->setTranslation(new float[]{0.114,0.0044,0.0037});
SoShape* SoShape230 = new SoShape();
SoShape230->setUSE(QString("JointShape"));
SoTransform229->addChild(*SoShape230);

SoHAnimSegment227->addChild(*SoTransform229);

SoHAnimSite* SoHAnimSite231 = new SoHAnimSite();
SoHAnimSite231->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip"));
SoHAnimSite231->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip"));
SoTransform* SoTransform232 = new SoTransform();
SoTransform232->setTranslation(new float[]{0.114,0.0044,0.0037});
SoShape* SoShape233 = new SoShape();
SoShape233->setUSE(QString("SiteShape"));
SoTransform232->addChild(*SoShape233);

SoHAnimSite231->addChild(*SoTransform232);

SoHAnimSegment227->addChild(*SoHAnimSite231);

SoHAnimJoint226->addChildren(*SoHAnimSegment227);

SoHAnimJoint* SoHAnimJoint234 = new SoHAnimJoint();
SoHAnimJoint234->X3DNode::setName(QString("l_tarsal_distal_phalanx_4"));
SoHAnimJoint234->setDEF(QString("hanim_l_tarsal_distal_phalanx_4"));
SoHAnimJoint234->setCenter(new float[]{0.1155,0.0118,0.0008});
SoHAnimJoint234->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint234->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment235 = new SoHAnimSegment();
SoHAnimSegment235->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_distal_phalanx_4"));
SoHAnimSegment235->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4"));
SoTouchSensor* SoTouchSensor236 = new SoTouchSensor();
SoTouchSensor236->setDescription(QString("joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4"));
SoHAnimSegment235->addChild(*SoTouchSensor236);

SoTransform* SoTransform237 = new SoTransform();
SoTransform237->setTranslation(new float[]{0.1155,0.0118,0.0008});
SoShape* SoShape238 = new SoShape();
SoShape238->setUSE(QString("JointShape"));
SoTransform237->addChild(*SoShape238);

SoHAnimSegment235->addChild(*SoTransform237);

SoHAnimSite* SoHAnimSite239 = new SoHAnimSite();
SoHAnimSite239->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip"));
SoHAnimSite239->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip"));
SoTransform* SoTransform240 = new SoTransform();
SoTransform240->setTranslation(new float[]{0.1155,0.0118,0.0008});
SoShape* SoShape241 = new SoShape();
SoShape241->setUSE(QString("SiteShape"));
SoTransform240->addChild(*SoShape241);

SoHAnimSite239->addChild(*SoTransform240);

SoHAnimSegment235->addChild(*SoHAnimSite239);

SoHAnimJoint234->addChildren(*SoHAnimSegment235);

SoHAnimJoint226->addChildren(*SoHAnimJoint234);

SoHAnimJoint218->addChildren(*SoHAnimJoint226);

SoHAnimJoint210->addChildren(*SoHAnimJoint218);

SoHAnimJoint202->addChildren(*SoHAnimJoint210);

SoHAnimJoint* SoHAnimJoint242 = new SoHAnimJoint();
SoHAnimJoint242->X3DNode::setName(QString("l_metatarsal_5"));
SoHAnimJoint242->setDEF(QString("hanim_l_metatarsal_5"));
SoHAnimJoint242->setCenter(new float[]{0.1206,-0.0671,0.0124});
SoHAnimJoint242->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint242->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment243 = new SoHAnimSegment();
SoHAnimSegment243->X3DNode::setName(QString("SEGMENT_FOR_l_metatarsal_5"));
SoHAnimSegment243->setDEF(QString("hanim_SEGMENT_FOR_l_metatarsal_5"));
SoTouchSensor* SoTouchSensor244 = new SoTouchSensor();
SoTouchSensor244->setDescription(QString("joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5"));
SoHAnimSegment243->addChild(*SoTouchSensor244);

SoTransform* SoTransform245 = new SoTransform();
SoTransform245->setTranslation(new float[]{0.1206,-0.0671,0.0124});
SoShape* SoShape246 = new SoShape();
SoShape246->setUSE(QString("JointShape"));
SoTransform245->addChild(*SoShape246);

SoHAnimSegment243->addChild(*SoTransform245);

SoHAnimSite* SoHAnimSite247 = new SoHAnimSite();
SoHAnimSite247->X3DNode::setName(QString("SEGMENT_FOR_l_metatarsal_5_tip"));
SoHAnimSite247->setDEF(QString("hanim_SEGMENT_FOR_l_metatarsal_5_tip"));
SoTransform* SoTransform248 = new SoTransform();
SoTransform248->setTranslation(new float[]{0.1206,-0.0671,0.0124});
SoShape* SoShape249 = new SoShape();
SoShape249->setUSE(QString("SiteShape"));
SoTransform248->addChild(*SoShape249);

SoHAnimSite247->addChild(*SoTransform248);

SoHAnimSegment243->addChild(*SoHAnimSite247);

SoHAnimJoint242->addChildren(*SoHAnimSegment243);

SoHAnimJoint* SoHAnimJoint250 = new SoHAnimJoint();
SoHAnimJoint250->X3DNode::setName(QString("l_tarsal_proximal_phalanx_5"));
SoHAnimJoint250->setDEF(QString("hanim_l_tarsal_proximal_phalanx_5"));
SoHAnimJoint250->setCenter(new float[]{0.1239,-0.0153,0.0051});
SoHAnimJoint250->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint250->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment251 = new SoHAnimSegment();
SoHAnimSegment251->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_proximal_phalanx_5"));
SoHAnimSegment251->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5"));
SoTouchSensor* SoTouchSensor252 = new SoTouchSensor();
SoTouchSensor252->setDescription(QString("joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5"));
SoHAnimSegment251->addChild(*SoTouchSensor252);

SoTransform* SoTransform253 = new SoTransform();
SoTransform253->setTranslation(new float[]{0.1239,-0.0153,0.0051});
SoShape* SoShape254 = new SoShape();
SoShape254->setUSE(QString("JointShape"));
SoTransform253->addChild(*SoShape254);

SoHAnimSegment251->addChild(*SoTransform253);

SoHAnimSite* SoHAnimSite255 = new SoHAnimSite();
SoHAnimSite255->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip"));
SoHAnimSite255->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip"));
SoTransform* SoTransform256 = new SoTransform();
SoTransform256->setTranslation(new float[]{0.1239,-0.0153,0.0051});
SoShape* SoShape257 = new SoShape();
SoShape257->setUSE(QString("SiteShape"));
SoTransform256->addChild(*SoShape257);

SoHAnimSite255->addChild(*SoTransform256);

SoHAnimSegment251->addChild(*SoHAnimSite255);

SoHAnimJoint250->addChildren(*SoHAnimSegment251);

SoHAnimJoint* SoHAnimJoint258 = new SoHAnimJoint();
SoHAnimJoint258->X3DNode::setName(QString("l_tarsal_middle_phalanx_5"));
SoHAnimJoint258->setDEF(QString("hanim_l_tarsal_middle_phalanx_5"));
SoHAnimJoint258->setCenter(new float[]{0.1262,-0.0077,0.0023});
SoHAnimJoint258->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint258->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment259 = new SoHAnimSegment();
SoHAnimSegment259->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_middle_phalanx_5"));
SoHAnimSegment259->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5"));
SoTouchSensor* SoTouchSensor260 = new SoTouchSensor();
SoTouchSensor260->setDescription(QString("joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5"));
SoHAnimSegment259->addChild(*SoTouchSensor260);

SoTransform* SoTransform261 = new SoTransform();
SoTransform261->setTranslation(new float[]{0.1262,-0.0077,0.0023});
SoShape* SoShape262 = new SoShape();
SoShape262->setUSE(QString("JointShape"));
SoTransform261->addChild(*SoShape262);

SoHAnimSegment259->addChild(*SoTransform261);

SoHAnimSite* SoHAnimSite263 = new SoHAnimSite();
SoHAnimSite263->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip"));
SoHAnimSite263->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip"));
SoTransform* SoTransform264 = new SoTransform();
SoTransform264->setTranslation(new float[]{0.1262,-0.0077,0.0023});
SoShape* SoShape265 = new SoShape();
SoShape265->setUSE(QString("SiteShape"));
SoTransform264->addChild(*SoShape265);

SoHAnimSite263->addChild(*SoTransform264);

SoHAnimSegment259->addChild(*SoHAnimSite263);

SoHAnimJoint258->addChildren(*SoHAnimSegment259);

SoHAnimJoint* SoHAnimJoint266 = new SoHAnimJoint();
SoHAnimJoint266->X3DNode::setName(QString("l_tarsal_distal_phalanx_5"));
SoHAnimJoint266->setDEF(QString("hanim_l_tarsal_distal_phalanx_5"));
SoHAnimJoint266->setCenter(new float[]{0.1271,0.0,0.0});
SoHAnimJoint266->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint266->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment267 = new SoHAnimSegment();
SoHAnimSegment267->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_distal_phalanx_5"));
SoHAnimSegment267->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5"));
SoTouchSensor* SoTouchSensor268 = new SoTouchSensor();
SoTouchSensor268->setDescription(QString("joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5"));
SoHAnimSegment267->addChild(*SoTouchSensor268);

SoTransform* SoTransform269 = new SoTransform();
SoTransform269->setTranslation(new float[]{0.1271,0.0,0.0});
SoShape* SoShape270 = new SoShape();
SoShape270->setUSE(QString("JointShape"));
SoTransform269->addChild(*SoShape270);

SoHAnimSegment267->addChild(*SoTransform269);

SoHAnimSite* SoHAnimSite271 = new SoHAnimSite();
SoHAnimSite271->X3DNode::setName(QString("SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip"));
SoHAnimSite271->setDEF(QString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip"));
SoTransform* SoTransform272 = new SoTransform();
SoTransform272->setTranslation(new float[]{0.1271,0.0,0.0});
SoShape* SoShape273 = new SoShape();
SoShape273->setUSE(QString("SiteShape"));
SoTransform272->addChild(*SoShape273);

SoHAnimSite271->addChild(*SoTransform272);

SoHAnimSegment267->addChild(*SoHAnimSite271);

SoHAnimJoint266->addChildren(*SoHAnimSegment267);

SoHAnimJoint258->addChildren(*SoHAnimJoint266);

SoHAnimJoint250->addChildren(*SoHAnimJoint258);

SoHAnimJoint242->addChildren(*SoHAnimJoint250);

SoHAnimJoint202->addChildren(*SoHAnimJoint242);

SoHAnimJoint194->addChildren(*SoHAnimJoint202);

SoHAnimJoint66->addChildren(*SoHAnimJoint194);

SoHAnimJoint58->addChildren(*SoHAnimJoint66);

SoHAnimJoint50->addChildren(*SoHAnimJoint58);

SoHAnimJoint42->addChildren(*SoHAnimJoint50);

SoHAnimJoint* SoHAnimJoint274 = new SoHAnimJoint();
SoHAnimJoint274->X3DNode::setName(QString("r_thigh"));
SoHAnimJoint274->setDEF(QString("hanim_r_thigh"));
SoHAnimJoint274->setCenter(new float[]{-0.0948,-0.1202,0.8181});
SoHAnimJoint274->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint274->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment275 = new SoHAnimSegment();
SoHAnimSegment275->X3DNode::setName(QString("SEGMENT_FOR_r_thigh"));
SoHAnimSegment275->setDEF(QString("hanim_SEGMENT_FOR_r_thigh"));
SoTouchSensor* SoTouchSensor276 = new SoTouchSensor();
SoTouchSensor276->setDescription(QString("joint r_thigh segment SEGMENT_FOR_r_thigh"));
SoHAnimSegment275->addChild(*SoTouchSensor276);

SoTransform* SoTransform277 = new SoTransform();
SoTransform277->setTranslation(new float[]{-0.0948,-0.1202,0.8181});
SoShape* SoShape278 = new SoShape();
SoShape278->setUSE(QString("JointShape"));
SoTransform277->addChild(*SoShape278);

SoHAnimSegment275->addChild(*SoTransform277);

SoHAnimSite* SoHAnimSite279 = new SoHAnimSite();
SoHAnimSite279->X3DNode::setName(QString("SEGMENT_FOR_r_thigh_tip"));
SoHAnimSite279->setDEF(QString("hanim_SEGMENT_FOR_r_thigh_tip"));
SoTransform* SoTransform280 = new SoTransform();
SoTransform280->setTranslation(new float[]{-0.0948,-0.1202,0.8181});
SoShape* SoShape281 = new SoShape();
SoShape281->setUSE(QString("SiteShape"));
SoTransform280->addChild(*SoShape281);

SoHAnimSite279->addChild(*SoTransform280);

SoHAnimSegment275->addChild(*SoHAnimSite279);

SoHAnimJoint274->addChildren(*SoHAnimSegment275);

SoHAnimJoint* SoHAnimJoint282 = new SoHAnimJoint();
SoHAnimJoint282->X3DNode::setName(QString("r_calf"));
SoHAnimJoint282->setDEF(QString("hanim_r_calf"));
SoHAnimJoint282->setCenter(new float[]{-0.0928,-0.1213,0.4003});
SoHAnimJoint282->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint282->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment283 = new SoHAnimSegment();
SoHAnimSegment283->X3DNode::setName(QString("SEGMENT_FOR_r_calf"));
SoHAnimSegment283->setDEF(QString("hanim_SEGMENT_FOR_r_calf"));
SoTouchSensor* SoTouchSensor284 = new SoTouchSensor();
SoTouchSensor284->setDescription(QString("joint r_calf segment SEGMENT_FOR_r_calf"));
SoHAnimSegment283->addChild(*SoTouchSensor284);

SoTransform* SoTransform285 = new SoTransform();
SoTransform285->setTranslation(new float[]{-0.0928,-0.1213,0.4003});
SoShape* SoShape286 = new SoShape();
SoShape286->setUSE(QString("JointShape"));
SoTransform285->addChild(*SoShape286);

SoHAnimSegment283->addChild(*SoTransform285);

SoHAnimSite* SoHAnimSite287 = new SoHAnimSite();
SoHAnimSite287->X3DNode::setName(QString("SEGMENT_FOR_r_calf_tip"));
SoHAnimSite287->setDEF(QString("hanim_SEGMENT_FOR_r_calf_tip"));
SoTransform* SoTransform288 = new SoTransform();
SoTransform288->setTranslation(new float[]{-0.0928,-0.1213,0.4003});
SoShape* SoShape289 = new SoShape();
SoShape289->setUSE(QString("SiteShape"));
SoTransform288->addChild(*SoShape289);

SoHAnimSite287->addChild(*SoTransform288);

SoHAnimSegment283->addChild(*SoHAnimSite287);

SoHAnimJoint282->addChildren(*SoHAnimSegment283);

SoHAnimJoint* SoHAnimJoint290 = new SoHAnimJoint();
SoHAnimJoint290->X3DNode::setName(QString("r_talus"));
SoHAnimJoint290->setDEF(QString("hanim_r_talus"));
SoHAnimJoint290->setCenter(new float[]{-0.0886,-0.1123,0.0869});
SoHAnimJoint290->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint290->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment291 = new SoHAnimSegment();
SoHAnimSegment291->X3DNode::setName(QString("SEGMENT_FOR_r_talus"));
SoHAnimSegment291->setDEF(QString("hanim_SEGMENT_FOR_r_talus"));
SoTouchSensor* SoTouchSensor292 = new SoTouchSensor();
SoTouchSensor292->setDescription(QString("joint r_talus segment SEGMENT_FOR_r_talus"));
SoHAnimSegment291->addChild(*SoTouchSensor292);

SoTransform* SoTransform293 = new SoTransform();
SoTransform293->setTranslation(new float[]{-0.0886,-0.1123,0.0869});
SoShape* SoShape294 = new SoShape();
SoShape294->setUSE(QString("JointShape"));
SoTransform293->addChild(*SoShape294);

SoHAnimSegment291->addChild(*SoTransform293);

SoHAnimSite* SoHAnimSite295 = new SoHAnimSite();
SoHAnimSite295->X3DNode::setName(QString("SEGMENT_FOR_r_talus_tip"));
SoHAnimSite295->setDEF(QString("hanim_SEGMENT_FOR_r_talus_tip"));
SoTransform* SoTransform296 = new SoTransform();
SoTransform296->setTranslation(new float[]{-0.0886,-0.1123,0.0869});
SoShape* SoShape297 = new SoShape();
SoShape297->setUSE(QString("SiteShape"));
SoTransform296->addChild(*SoShape297);

SoHAnimSite295->addChild(*SoTransform296);

SoHAnimSegment291->addChild(*SoHAnimSite295);

SoHAnimJoint290->addChildren(*SoHAnimSegment291);

SoHAnimJoint* SoHAnimJoint298 = new SoHAnimJoint();
SoHAnimJoint298->X3DNode::setName(QString("r_navicular"));
SoHAnimJoint298->setDEF(QString("hanim_r_navicular"));
SoHAnimJoint298->setCenter(new float[]{-0.0781,-0.097,0.0283});
SoHAnimJoint298->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint298->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment299 = new SoHAnimSegment();
SoHAnimSegment299->X3DNode::setName(QString("SEGMENT_FOR_r_navicular"));
SoHAnimSegment299->setDEF(QString("hanim_SEGMENT_FOR_r_navicular"));
SoTouchSensor* SoTouchSensor300 = new SoTouchSensor();
SoTouchSensor300->setDescription(QString("joint r_navicular segment SEGMENT_FOR_r_navicular"));
SoHAnimSegment299->addChild(*SoTouchSensor300);

SoTransform* SoTransform301 = new SoTransform();
SoTransform301->setTranslation(new float[]{-0.0781,-0.097,0.0283});
SoShape* SoShape302 = new SoShape();
SoShape302->setUSE(QString("JointShape"));
SoTransform301->addChild(*SoShape302);

SoHAnimSegment299->addChild(*SoTransform301);

SoHAnimSite* SoHAnimSite303 = new SoHAnimSite();
SoHAnimSite303->X3DNode::setName(QString("SEGMENT_FOR_r_navicular_tip"));
SoHAnimSite303->setDEF(QString("hanim_SEGMENT_FOR_r_navicular_tip"));
SoTransform* SoTransform304 = new SoTransform();
SoTransform304->setTranslation(new float[]{-0.0781,-0.097,0.0283});
SoShape* SoShape305 = new SoShape();
SoShape305->setUSE(QString("SiteShape"));
SoTransform304->addChild(*SoShape305);

SoHAnimSite303->addChild(*SoTransform304);

SoHAnimSegment299->addChild(*SoHAnimSite303);

SoHAnimJoint298->addChildren(*SoHAnimSegment299);

SoHAnimJoint* SoHAnimJoint306 = new SoHAnimJoint();
SoHAnimJoint306->X3DNode::setName(QString("r_cuneiform_1"));
SoHAnimJoint306->setDEF(QString("hanim_r_cuneiform_1"));
SoHAnimJoint306->setCenter(new float[]{-0.0672,-0.0835,0.0235});
SoHAnimJoint306->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint306->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment307 = new SoHAnimSegment();
SoHAnimSegment307->X3DNode::setName(QString("SEGMENT_FOR_r_cuneiform_1"));
SoHAnimSegment307->setDEF(QString("hanim_SEGMENT_FOR_r_cuneiform_1"));
SoTouchSensor* SoTouchSensor308 = new SoTouchSensor();
SoTouchSensor308->setDescription(QString("joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1"));
SoHAnimSegment307->addChild(*SoTouchSensor308);

SoTransform* SoTransform309 = new SoTransform();
SoTransform309->setTranslation(new float[]{-0.0672,-0.0835,0.0235});
SoShape* SoShape310 = new SoShape();
SoShape310->setUSE(QString("JointShape"));
SoTransform309->addChild(*SoShape310);

SoHAnimSegment307->addChild(*SoTransform309);

SoHAnimSite* SoHAnimSite311 = new SoHAnimSite();
SoHAnimSite311->X3DNode::setName(QString("SEGMENT_FOR_r_cuneiform_1_tip"));
SoHAnimSite311->setDEF(QString("hanim_SEGMENT_FOR_r_cuneiform_1_tip"));
SoTransform* SoTransform312 = new SoTransform();
SoTransform312->setTranslation(new float[]{-0.0672,-0.0835,0.0235});
SoShape* SoShape313 = new SoShape();
SoShape313->setUSE(QString("SiteShape"));
SoTransform312->addChild(*SoShape313);

SoHAnimSite311->addChild(*SoTransform312);

SoHAnimSegment307->addChild(*SoHAnimSite311);

SoHAnimJoint306->addChildren(*SoHAnimSegment307);

SoHAnimJoint* SoHAnimJoint314 = new SoHAnimJoint();
SoHAnimJoint314->X3DNode::setName(QString("r_metatarsal_1"));
SoHAnimJoint314->setDEF(QString("hanim_r_metatarsal_1"));
SoHAnimJoint314->setCenter(new float[]{-0.0644,-0.0577,0.0147});
SoHAnimJoint314->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint314->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment315 = new SoHAnimSegment();
SoHAnimSegment315->X3DNode::setName(QString("SEGMENT_FOR_r_metatarsal_1"));
SoHAnimSegment315->setDEF(QString("hanim_SEGMENT_FOR_r_metatarsal_1"));
SoTouchSensor* SoTouchSensor316 = new SoTouchSensor();
SoTouchSensor316->setDescription(QString("joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1"));
SoHAnimSegment315->addChild(*SoTouchSensor316);

SoTransform* SoTransform317 = new SoTransform();
SoTransform317->setTranslation(new float[]{-0.0644,-0.0577,0.0147});
SoShape* SoShape318 = new SoShape();
SoShape318->setUSE(QString("JointShape"));
SoTransform317->addChild(*SoShape318);

SoHAnimSegment315->addChild(*SoTransform317);

SoHAnimSite* SoHAnimSite319 = new SoHAnimSite();
SoHAnimSite319->X3DNode::setName(QString("SEGMENT_FOR_r_metatarsal_1_tip"));
SoHAnimSite319->setDEF(QString("hanim_SEGMENT_FOR_r_metatarsal_1_tip"));
SoTransform* SoTransform320 = new SoTransform();
SoTransform320->setTranslation(new float[]{-0.0644,-0.0577,0.0147});
SoShape* SoShape321 = new SoShape();
SoShape321->setUSE(QString("SiteShape"));
SoTransform320->addChild(*SoShape321);

SoHAnimSite319->addChild(*SoTransform320);

SoHAnimSegment315->addChild(*SoHAnimSite319);

SoHAnimJoint314->addChildren(*SoHAnimSegment315);

SoHAnimJoint* SoHAnimJoint322 = new SoHAnimJoint();
SoHAnimJoint322->X3DNode::setName(QString("r_tarsal_proximal_phalanx_1"));
SoHAnimJoint322->setDEF(QString("hanim_r_tarsal_proximal_phalanx_1"));
SoHAnimJoint322->setCenter(new float[]{-0.0619,-0.0083,0.0059});
SoHAnimJoint322->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint322->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment323 = new SoHAnimSegment();
SoHAnimSegment323->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_proximal_phalanx_1"));
SoHAnimSegment323->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1"));
SoTouchSensor* SoTouchSensor324 = new SoTouchSensor();
SoTouchSensor324->setDescription(QString("joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1"));
SoHAnimSegment323->addChild(*SoTouchSensor324);

SoTransform* SoTransform325 = new SoTransform();
SoTransform325->setTranslation(new float[]{-0.0619,-0.0083,0.0059});
SoShape* SoShape326 = new SoShape();
SoShape326->setUSE(QString("JointShape"));
SoTransform325->addChild(*SoShape326);

SoHAnimSegment323->addChild(*SoTransform325);

SoHAnimSite* SoHAnimSite327 = new SoHAnimSite();
SoHAnimSite327->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip"));
SoHAnimSite327->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip"));
SoTransform* SoTransform328 = new SoTransform();
SoTransform328->setTranslation(new float[]{-0.0619,-0.0083,0.0059});
SoShape* SoShape329 = new SoShape();
SoShape329->setUSE(QString("SiteShape"));
SoTransform328->addChild(*SoShape329);

SoHAnimSite327->addChild(*SoTransform328);

SoHAnimSegment323->addChild(*SoHAnimSite327);

SoHAnimJoint322->addChildren(*SoHAnimSegment323);

SoHAnimJoint* SoHAnimJoint330 = new SoHAnimJoint();
SoHAnimJoint330->X3DNode::setName(QString("r_tarsal_distal_phalanx_1"));
SoHAnimJoint330->setDEF(QString("hanim_r_tarsal_distal_phalanx_1"));
SoHAnimJoint330->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint330->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment331 = new SoHAnimSegment();
SoHAnimSegment331->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_distal_phalanx_1"));
SoHAnimSegment331->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1"));
SoTouchSensor* SoTouchSensor332 = new SoTouchSensor();
SoTouchSensor332->setDescription(QString("joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1"));
SoHAnimSegment331->addChild(*SoTouchSensor332);

SoTransform* SoTransform333 = new SoTransform();
SoShape* SoShape334 = new SoShape();
SoShape334->setUSE(QString("JointShape"));
SoTransform333->addChild(*SoShape334);

SoHAnimSegment331->addChild(*SoTransform333);

SoHAnimSite* SoHAnimSite335 = new SoHAnimSite();
SoHAnimSite335->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip"));
SoHAnimSite335->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip"));
SoTransform* SoTransform336 = new SoTransform();
SoShape* SoShape337 = new SoShape();
SoShape337->setUSE(QString("SiteShape"));
SoTransform336->addChild(*SoShape337);

SoHAnimSite335->addChild(*SoTransform336);

SoHAnimSegment331->addChild(*SoHAnimSite335);

SoHAnimJoint330->addChildren(*SoHAnimSegment331);

SoHAnimJoint322->addChildren(*SoHAnimJoint330);

SoHAnimJoint314->addChildren(*SoHAnimJoint322);

SoHAnimJoint306->addChildren(*SoHAnimJoint314);

SoHAnimJoint298->addChildren(*SoHAnimJoint306);

SoHAnimJoint* SoHAnimJoint338 = new SoHAnimJoint();
SoHAnimJoint338->X3DNode::setName(QString("r_cuneiform_2"));
SoHAnimJoint338->setDEF(QString("hanim_r_cuneiform_2"));
SoHAnimJoint338->setCenter(new float[]{-0.0812,-0.0805,0.025});
SoHAnimJoint338->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint338->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment339 = new SoHAnimSegment();
SoHAnimSegment339->X3DNode::setName(QString("SEGMENT_FOR_r_cuneiform_2"));
SoHAnimSegment339->setDEF(QString("hanim_SEGMENT_FOR_r_cuneiform_2"));
SoTouchSensor* SoTouchSensor340 = new SoTouchSensor();
SoTouchSensor340->setDescription(QString("joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2"));
SoHAnimSegment339->addChild(*SoTouchSensor340);

SoTransform* SoTransform341 = new SoTransform();
SoTransform341->setTranslation(new float[]{-0.0812,-0.0805,0.025});
SoShape* SoShape342 = new SoShape();
SoShape342->setUSE(QString("JointShape"));
SoTransform341->addChild(*SoShape342);

SoHAnimSegment339->addChild(*SoTransform341);

SoHAnimSite* SoHAnimSite343 = new SoHAnimSite();
SoHAnimSite343->X3DNode::setName(QString("SEGMENT_FOR_r_cuneiform_2_tip"));
SoHAnimSite343->setDEF(QString("hanim_SEGMENT_FOR_r_cuneiform_2_tip"));
SoTransform* SoTransform344 = new SoTransform();
SoTransform344->setTranslation(new float[]{-0.0812,-0.0805,0.025});
SoShape* SoShape345 = new SoShape();
SoShape345->setUSE(QString("SiteShape"));
SoTransform344->addChild(*SoShape345);

SoHAnimSite343->addChild(*SoTransform344);

SoHAnimSegment339->addChild(*SoHAnimSite343);

SoHAnimJoint338->addChildren(*SoHAnimSegment339);

SoHAnimJoint* SoHAnimJoint346 = new SoHAnimJoint();
SoHAnimJoint346->X3DNode::setName(QString("r_metatarsal_2"));
SoHAnimJoint346->setDEF(QString("hanim_r_metatarsal_2"));
SoHAnimJoint346->setCenter(new float[]{-0.08,-0.0608,0.0175});
SoHAnimJoint346->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint346->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment347 = new SoHAnimSegment();
SoHAnimSegment347->X3DNode::setName(QString("SEGMENT_FOR_r_metatarsal_2"));
SoHAnimSegment347->setDEF(QString("hanim_SEGMENT_FOR_r_metatarsal_2"));
SoTouchSensor* SoTouchSensor348 = new SoTouchSensor();
SoTouchSensor348->setDescription(QString("joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2"));
SoHAnimSegment347->addChild(*SoTouchSensor348);

SoTransform* SoTransform349 = new SoTransform();
SoTransform349->setTranslation(new float[]{-0.08,-0.0608,0.0175});
SoShape* SoShape350 = new SoShape();
SoShape350->setUSE(QString("JointShape"));
SoTransform349->addChild(*SoShape350);

SoHAnimSegment347->addChild(*SoTransform349);

SoHAnimSite* SoHAnimSite351 = new SoHAnimSite();
SoHAnimSite351->X3DNode::setName(QString("SEGMENT_FOR_r_metatarsal_2_tip"));
SoHAnimSite351->setDEF(QString("hanim_SEGMENT_FOR_r_metatarsal_2_tip"));
SoTransform* SoTransform352 = new SoTransform();
SoTransform352->setTranslation(new float[]{-0.08,-0.0608,0.0175});
SoShape* SoShape353 = new SoShape();
SoShape353->setUSE(QString("SiteShape"));
SoTransform352->addChild(*SoShape353);

SoHAnimSite351->addChild(*SoTransform352);

SoHAnimSegment347->addChild(*SoHAnimSite351);

SoHAnimJoint346->addChildren(*SoHAnimSegment347);

SoHAnimJoint* SoHAnimJoint354 = new SoHAnimJoint();
SoHAnimJoint354->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoHAnimJoint354->setDEF(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimJoint354->setCenter(new float[]{-0.0823,-0.004,0.0064});
SoHAnimJoint354->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint354->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment355 = new SoHAnimSegment();
SoHAnimSegment355->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_proximal_phalanx_2"));
SoHAnimSegment355->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2"));
SoTouchSensor* SoTouchSensor356 = new SoTouchSensor();
SoTouchSensor356->setDescription(QString("joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2"));
SoHAnimSegment355->addChild(*SoTouchSensor356);

SoTransform* SoTransform357 = new SoTransform();
SoTransform357->setTranslation(new float[]{-0.0823,-0.004,0.0064});
SoShape* SoShape358 = new SoShape();
SoShape358->setUSE(QString("JointShape"));
SoTransform357->addChild(*SoShape358);

SoHAnimSegment355->addChild(*SoTransform357);

SoHAnimSite* SoHAnimSite359 = new SoHAnimSite();
SoHAnimSite359->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip"));
SoHAnimSite359->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip"));
SoTransform* SoTransform360 = new SoTransform();
SoTransform360->setTranslation(new float[]{-0.0823,-0.004,0.0064});
SoShape* SoShape361 = new SoShape();
SoShape361->setUSE(QString("SiteShape"));
SoTransform360->addChild(*SoShape361);

SoHAnimSite359->addChild(*SoTransform360);

SoHAnimSegment355->addChild(*SoHAnimSite359);

SoHAnimJoint354->addChildren(*SoHAnimSegment355);

SoHAnimJoint* SoHAnimJoint362 = new SoHAnimJoint();
SoHAnimJoint362->X3DNode::setName(QString("r_tarsal_middle_phalanx_2"));
SoHAnimJoint362->setDEF(QString("hanim_r_tarsal_middle_phalanx_2"));
SoHAnimJoint362->setCenter(new float[]{-0.0841,0.0121,0.0041});
SoHAnimJoint362->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint362->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment363 = new SoHAnimSegment();
SoHAnimSegment363->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_middle_phalanx_2"));
SoHAnimSegment363->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2"));
SoTouchSensor* SoTouchSensor364 = new SoTouchSensor();
SoTouchSensor364->setDescription(QString("joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2"));
SoHAnimSegment363->addChild(*SoTouchSensor364);

SoTransform* SoTransform365 = new SoTransform();
SoTransform365->setTranslation(new float[]{-0.0841,0.0121,0.0041});
SoShape* SoShape366 = new SoShape();
SoShape366->setUSE(QString("JointShape"));
SoTransform365->addChild(*SoShape366);

SoHAnimSegment363->addChild(*SoTransform365);

SoHAnimSite* SoHAnimSite367 = new SoHAnimSite();
SoHAnimSite367->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip"));
SoHAnimSite367->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip"));
SoTransform* SoTransform368 = new SoTransform();
SoTransform368->setTranslation(new float[]{-0.0841,0.0121,0.0041});
SoShape* SoShape369 = new SoShape();
SoShape369->setUSE(QString("SiteShape"));
SoTransform368->addChild(*SoShape369);

SoHAnimSite367->addChild(*SoTransform368);

SoHAnimSegment363->addChild(*SoHAnimSite367);

SoHAnimJoint362->addChildren(*SoHAnimSegment363);

SoHAnimJoint* SoHAnimJoint370 = new SoHAnimJoint();
SoHAnimJoint370->X3DNode::setName(QString("r_tarsal_distal_phalanx_2"));
SoHAnimJoint370->setDEF(QString("hanim_r_tarsal_distal_phalanx_2"));
SoHAnimJoint370->setCenter(new float[]{-0.0841,0.0216,0.0013});
SoHAnimJoint370->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint370->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment371 = new SoHAnimSegment();
SoHAnimSegment371->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_distal_phalanx_2"));
SoHAnimSegment371->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2"));
SoTouchSensor* SoTouchSensor372 = new SoTouchSensor();
SoTouchSensor372->setDescription(QString("joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2"));
SoHAnimSegment371->addChild(*SoTouchSensor372);

SoTransform* SoTransform373 = new SoTransform();
SoTransform373->setTranslation(new float[]{-0.0841,0.0216,0.0013});
SoShape* SoShape374 = new SoShape();
SoShape374->setUSE(QString("JointShape"));
SoTransform373->addChild(*SoShape374);

SoHAnimSegment371->addChild(*SoTransform373);

SoHAnimSite* SoHAnimSite375 = new SoHAnimSite();
SoHAnimSite375->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip"));
SoHAnimSite375->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip"));
SoTransform* SoTransform376 = new SoTransform();
SoTransform376->setTranslation(new float[]{-0.0841,0.0216,0.0013});
SoShape* SoShape377 = new SoShape();
SoShape377->setUSE(QString("SiteShape"));
SoTransform376->addChild(*SoShape377);

SoHAnimSite375->addChild(*SoTransform376);

SoHAnimSegment371->addChild(*SoHAnimSite375);

SoHAnimJoint370->addChildren(*SoHAnimSegment371);

SoHAnimJoint362->addChildren(*SoHAnimJoint370);

SoHAnimJoint354->addChildren(*SoHAnimJoint362);

SoHAnimJoint346->addChildren(*SoHAnimJoint354);

SoHAnimJoint338->addChildren(*SoHAnimJoint346);

SoHAnimJoint298->addChildren(*SoHAnimJoint338);

SoHAnimJoint* SoHAnimJoint378 = new SoHAnimJoint();
SoHAnimJoint378->X3DNode::setName(QString("r_cuneiform_3"));
SoHAnimJoint378->setDEF(QString("hanim_r_cuneiform_3"));
SoHAnimJoint378->setCenter(new float[]{-0.0928,-0.0821,0.0248});
SoHAnimJoint378->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint378->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment379 = new SoHAnimSegment();
SoHAnimSegment379->X3DNode::setName(QString("SEGMENT_FOR_r_cuneiform_3"));
SoHAnimSegment379->setDEF(QString("hanim_SEGMENT_FOR_r_cuneiform_3"));
SoTouchSensor* SoTouchSensor380 = new SoTouchSensor();
SoTouchSensor380->setDescription(QString("joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3"));
SoHAnimSegment379->addChild(*SoTouchSensor380);

SoTransform* SoTransform381 = new SoTransform();
SoTransform381->setTranslation(new float[]{-0.0928,-0.0821,0.0248});
SoShape* SoShape382 = new SoShape();
SoShape382->setUSE(QString("JointShape"));
SoTransform381->addChild(*SoShape382);

SoHAnimSegment379->addChild(*SoTransform381);

SoHAnimSite* SoHAnimSite383 = new SoHAnimSite();
SoHAnimSite383->X3DNode::setName(QString("SEGMENT_FOR_r_cuneiform_3_tip"));
SoHAnimSite383->setDEF(QString("hanim_SEGMENT_FOR_r_cuneiform_3_tip"));
SoTransform* SoTransform384 = new SoTransform();
SoTransform384->setTranslation(new float[]{-0.0928,-0.0821,0.0248});
SoShape* SoShape385 = new SoShape();
SoShape385->setUSE(QString("SiteShape"));
SoTransform384->addChild(*SoShape385);

SoHAnimSite383->addChild(*SoTransform384);

SoHAnimSegment379->addChild(*SoHAnimSite383);

SoHAnimJoint378->addChildren(*SoHAnimSegment379);

SoHAnimJoint* SoHAnimJoint386 = new SoHAnimJoint();
SoHAnimJoint386->X3DNode::setName(QString("r_metatarsal_3"));
SoHAnimJoint386->setDEF(QString("hanim_r_metatarsal_3"));
SoHAnimJoint386->setCenter(new float[]{-0.0944,-0.0625,0.0175});
SoHAnimJoint386->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint386->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment387 = new SoHAnimSegment();
SoHAnimSegment387->X3DNode::setName(QString("SEGMENT_FOR_r_metatarsal_3"));
SoHAnimSegment387->setDEF(QString("hanim_SEGMENT_FOR_r_metatarsal_3"));
SoTouchSensor* SoTouchSensor388 = new SoTouchSensor();
SoTouchSensor388->setDescription(QString("joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3"));
SoHAnimSegment387->addChild(*SoTouchSensor388);

SoTransform* SoTransform389 = new SoTransform();
SoTransform389->setTranslation(new float[]{-0.0944,-0.0625,0.0175});
SoShape* SoShape390 = new SoShape();
SoShape390->setUSE(QString("JointShape"));
SoTransform389->addChild(*SoShape390);

SoHAnimSegment387->addChild(*SoTransform389);

SoHAnimSite* SoHAnimSite391 = new SoHAnimSite();
SoHAnimSite391->X3DNode::setName(QString("SEGMENT_FOR_r_metatarsal_3_tip"));
SoHAnimSite391->setDEF(QString("hanim_SEGMENT_FOR_r_metatarsal_3_tip"));
SoTransform* SoTransform392 = new SoTransform();
SoTransform392->setTranslation(new float[]{-0.0944,-0.0625,0.0175});
SoShape* SoShape393 = new SoShape();
SoShape393->setUSE(QString("SiteShape"));
SoTransform392->addChild(*SoShape393);

SoHAnimSite391->addChild(*SoTransform392);

SoHAnimSegment387->addChild(*SoHAnimSite391);

SoHAnimJoint386->addChildren(*SoHAnimSegment387);

SoHAnimJoint* SoHAnimJoint394 = new SoHAnimJoint();
SoHAnimJoint394->X3DNode::setName(QString("r_tarsal_proximal_phalanx_3"));
SoHAnimJoint394->setDEF(QString("hanim_r_tarsal_proximal_phalanx_3"));
SoHAnimJoint394->setCenter(new float[]{-0.0963,-0.0065,0.0065});
SoHAnimJoint394->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint394->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment395 = new SoHAnimSegment();
SoHAnimSegment395->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_proximal_phalanx_3"));
SoHAnimSegment395->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3"));
SoTouchSensor* SoTouchSensor396 = new SoTouchSensor();
SoTouchSensor396->setDescription(QString("joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3"));
SoHAnimSegment395->addChild(*SoTouchSensor396);

SoTransform* SoTransform397 = new SoTransform();
SoTransform397->setTranslation(new float[]{-0.0963,-0.0065,0.0065});
SoShape* SoShape398 = new SoShape();
SoShape398->setUSE(QString("JointShape"));
SoTransform397->addChild(*SoShape398);

SoHAnimSegment395->addChild(*SoTransform397);

SoHAnimSite* SoHAnimSite399 = new SoHAnimSite();
SoHAnimSite399->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip"));
SoHAnimSite399->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip"));
SoTransform* SoTransform400 = new SoTransform();
SoTransform400->setTranslation(new float[]{-0.0963,-0.0065,0.0065});
SoShape* SoShape401 = new SoShape();
SoShape401->setUSE(QString("SiteShape"));
SoTransform400->addChild(*SoShape401);

SoHAnimSite399->addChild(*SoTransform400);

SoHAnimSegment395->addChild(*SoHAnimSite399);

SoHAnimJoint394->addChildren(*SoHAnimSegment395);

SoHAnimJoint* SoHAnimJoint402 = new SoHAnimJoint();
SoHAnimJoint402->X3DNode::setName(QString("r_tarsal_middle_phalanx_3"));
SoHAnimJoint402->setDEF(QString("hanim_r_tarsal_middle_phalanx_3"));
SoHAnimJoint402->setCenter(new float[]{-0.0987,0.0086,0.0034});
SoHAnimJoint402->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint402->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment403 = new SoHAnimSegment();
SoHAnimSegment403->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_middle_phalanx_3"));
SoHAnimSegment403->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3"));
SoTouchSensor* SoTouchSensor404 = new SoTouchSensor();
SoTouchSensor404->setDescription(QString("joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3"));
SoHAnimSegment403->addChild(*SoTouchSensor404);

SoTransform* SoTransform405 = new SoTransform();
SoTransform405->setTranslation(new float[]{-0.0987,0.0086,0.0034});
SoShape* SoShape406 = new SoShape();
SoShape406->setUSE(QString("JointShape"));
SoTransform405->addChild(*SoShape406);

SoHAnimSegment403->addChild(*SoTransform405);

SoHAnimSite* SoHAnimSite407 = new SoHAnimSite();
SoHAnimSite407->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip"));
SoHAnimSite407->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip"));
SoTransform* SoTransform408 = new SoTransform();
SoTransform408->setTranslation(new float[]{-0.0987,0.0086,0.0034});
SoShape* SoShape409 = new SoShape();
SoShape409->setUSE(QString("SiteShape"));
SoTransform408->addChild(*SoShape409);

SoHAnimSite407->addChild(*SoTransform408);

SoHAnimSegment403->addChild(*SoHAnimSite407);

SoHAnimJoint402->addChildren(*SoHAnimSegment403);

SoHAnimJoint* SoHAnimJoint410 = new SoHAnimJoint();
SoHAnimJoint410->X3DNode::setName(QString("r_tarsal_distal_phalanx_3"));
SoHAnimJoint410->setDEF(QString("hanim_r_tarsal_distal_phalanx_3"));
SoHAnimJoint410->setCenter(new float[]{-0.1002,0.0178,0.0013});
SoHAnimJoint410->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint410->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment411 = new SoHAnimSegment();
SoHAnimSegment411->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_distal_phalanx_3"));
SoHAnimSegment411->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3"));
SoTouchSensor* SoTouchSensor412 = new SoTouchSensor();
SoTouchSensor412->setDescription(QString("joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3"));
SoHAnimSegment411->addChild(*SoTouchSensor412);

SoTransform* SoTransform413 = new SoTransform();
SoTransform413->setTranslation(new float[]{-0.1002,0.0178,0.0013});
SoShape* SoShape414 = new SoShape();
SoShape414->setUSE(QString("JointShape"));
SoTransform413->addChild(*SoShape414);

SoHAnimSegment411->addChild(*SoTransform413);

SoHAnimSite* SoHAnimSite415 = new SoHAnimSite();
SoHAnimSite415->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip"));
SoHAnimSite415->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip"));
SoTransform* SoTransform416 = new SoTransform();
SoTransform416->setTranslation(new float[]{-0.1002,0.0178,0.0013});
SoShape* SoShape417 = new SoShape();
SoShape417->setUSE(QString("SiteShape"));
SoTransform416->addChild(*SoShape417);

SoHAnimSite415->addChild(*SoTransform416);

SoHAnimSegment411->addChild(*SoHAnimSite415);

SoHAnimJoint410->addChildren(*SoHAnimSegment411);

SoHAnimJoint402->addChildren(*SoHAnimJoint410);

SoHAnimJoint394->addChildren(*SoHAnimJoint402);

SoHAnimJoint386->addChildren(*SoHAnimJoint394);

SoHAnimJoint378->addChildren(*SoHAnimJoint386);

SoHAnimJoint298->addChildren(*SoHAnimJoint378);

SoHAnimJoint290->addChildren(*SoHAnimJoint298);

SoHAnimJoint* SoHAnimJoint418 = new SoHAnimJoint();
SoHAnimJoint418->X3DNode::setName(QString("r_calcaneus"));
SoHAnimJoint418->setDEF(QString("hanim_r_calcaneus"));
SoHAnimJoint418->setCenter(new float[]{-0.0889,-0.1278,0.0494});
SoHAnimJoint418->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint418->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment419 = new SoHAnimSegment();
SoHAnimSegment419->X3DNode::setName(QString("SEGMENT_FOR_r_calcaneus"));
SoHAnimSegment419->setDEF(QString("hanim_SEGMENT_FOR_r_calcaneus"));
SoTouchSensor* SoTouchSensor420 = new SoTouchSensor();
SoTouchSensor420->setDescription(QString("joint r_calcaneus segment SEGMENT_FOR_r_calcaneus"));
SoHAnimSegment419->addChild(*SoTouchSensor420);

SoTransform* SoTransform421 = new SoTransform();
SoTransform421->setTranslation(new float[]{-0.0889,-0.1278,0.0494});
SoShape* SoShape422 = new SoShape();
SoShape422->setUSE(QString("JointShape"));
SoTransform421->addChild(*SoShape422);

SoHAnimSegment419->addChild(*SoTransform421);

SoHAnimSite* SoHAnimSite423 = new SoHAnimSite();
SoHAnimSite423->X3DNode::setName(QString("SEGMENT_FOR_r_calcaneus_tip"));
SoHAnimSite423->setDEF(QString("hanim_SEGMENT_FOR_r_calcaneus_tip"));
SoTransform* SoTransform424 = new SoTransform();
SoTransform424->setTranslation(new float[]{-0.0889,-0.1278,0.0494});
SoShape* SoShape425 = new SoShape();
SoShape425->setUSE(QString("SiteShape"));
SoTransform424->addChild(*SoShape425);

SoHAnimSite423->addChild(*SoTransform424);

SoHAnimSegment419->addChild(*SoHAnimSite423);

SoHAnimJoint418->addChildren(*SoHAnimSegment419);

SoHAnimJoint* SoHAnimJoint426 = new SoHAnimJoint();
SoHAnimJoint426->X3DNode::setName(QString("r_cuboid"));
SoHAnimJoint426->setDEF(QString("hanim_r_cuboid"));
SoHAnimJoint426->setCenter(new float[]{-0.1105,-0.0998,0.0267});
SoHAnimJoint426->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint426->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment427 = new SoHAnimSegment();
SoHAnimSegment427->X3DNode::setName(QString("SEGMENT_FOR_r_cuboid"));
SoHAnimSegment427->setDEF(QString("hanim_SEGMENT_FOR_r_cuboid"));
SoTouchSensor* SoTouchSensor428 = new SoTouchSensor();
SoTouchSensor428->setDescription(QString("joint r_cuboid segment SEGMENT_FOR_r_cuboid"));
SoHAnimSegment427->addChild(*SoTouchSensor428);

SoTransform* SoTransform429 = new SoTransform();
SoTransform429->setTranslation(new float[]{-0.1105,-0.0998,0.0267});
SoShape* SoShape430 = new SoShape();
SoShape430->setUSE(QString("JointShape"));
SoTransform429->addChild(*SoShape430);

SoHAnimSegment427->addChild(*SoTransform429);

SoHAnimSite* SoHAnimSite431 = new SoHAnimSite();
SoHAnimSite431->X3DNode::setName(QString("SEGMENT_FOR_r_cuboid_tip"));
SoHAnimSite431->setDEF(QString("hanim_SEGMENT_FOR_r_cuboid_tip"));
SoTransform* SoTransform432 = new SoTransform();
SoTransform432->setTranslation(new float[]{-0.1105,-0.0998,0.0267});
SoShape* SoShape433 = new SoShape();
SoShape433->setUSE(QString("SiteShape"));
SoTransform432->addChild(*SoShape433);

SoHAnimSite431->addChild(*SoTransform432);

SoHAnimSegment427->addChild(*SoHAnimSite431);

SoHAnimJoint426->addChildren(*SoHAnimSegment427);

SoHAnimJoint* SoHAnimJoint434 = new SoHAnimJoint();
SoHAnimJoint434->X3DNode::setName(QString("r_metatarsal_4"));
SoHAnimJoint434->setDEF(QString("hanim_r_metatarsal_4"));
SoHAnimJoint434->setCenter(new float[]{-0.1063,-0.0634,0.016});
SoHAnimJoint434->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint434->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment435 = new SoHAnimSegment();
SoHAnimSegment435->X3DNode::setName(QString("SEGMENT_FOR_r_metatarsal_4"));
SoHAnimSegment435->setDEF(QString("hanim_SEGMENT_FOR_r_metatarsal_4"));
SoTouchSensor* SoTouchSensor436 = new SoTouchSensor();
SoTouchSensor436->setDescription(QString("joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4"));
SoHAnimSegment435->addChild(*SoTouchSensor436);

SoTransform* SoTransform437 = new SoTransform();
SoTransform437->setTranslation(new float[]{-0.1063,-0.0634,0.016});
SoShape* SoShape438 = new SoShape();
SoShape438->setUSE(QString("JointShape"));
SoTransform437->addChild(*SoShape438);

SoHAnimSegment435->addChild(*SoTransform437);

SoHAnimSite* SoHAnimSite439 = new SoHAnimSite();
SoHAnimSite439->X3DNode::setName(QString("SEGMENT_FOR_r_metatarsal_4_tip"));
SoHAnimSite439->setDEF(QString("hanim_SEGMENT_FOR_r_metatarsal_4_tip"));
SoTransform* SoTransform440 = new SoTransform();
SoTransform440->setTranslation(new float[]{-0.1063,-0.0634,0.016});
SoShape* SoShape441 = new SoShape();
SoShape441->setUSE(QString("SiteShape"));
SoTransform440->addChild(*SoShape441);

SoHAnimSite439->addChild(*SoTransform440);

SoHAnimSegment435->addChild(*SoHAnimSite439);

SoHAnimJoint434->addChildren(*SoHAnimSegment435);

SoHAnimJoint* SoHAnimJoint442 = new SoHAnimJoint();
SoHAnimJoint442->X3DNode::setName(QString("r_tarsal_proximal_phalanx_4"));
SoHAnimJoint442->setDEF(QString("hanim_r_tarsal_proximal_phalanx_4"));
SoHAnimJoint442->setCenter(new float[]{-0.1097,-0.0107,0.0058});
SoHAnimJoint442->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint442->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment443 = new SoHAnimSegment();
SoHAnimSegment443->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_proximal_phalanx_4"));
SoHAnimSegment443->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4"));
SoTouchSensor* SoTouchSensor444 = new SoTouchSensor();
SoTouchSensor444->setDescription(QString("joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4"));
SoHAnimSegment443->addChild(*SoTouchSensor444);

SoTransform* SoTransform445 = new SoTransform();
SoTransform445->setTranslation(new float[]{-0.1097,-0.0107,0.0058});
SoShape* SoShape446 = new SoShape();
SoShape446->setUSE(QString("JointShape"));
SoTransform445->addChild(*SoShape446);

SoHAnimSegment443->addChild(*SoTransform445);

SoHAnimSite* SoHAnimSite447 = new SoHAnimSite();
SoHAnimSite447->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip"));
SoHAnimSite447->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip"));
SoTransform* SoTransform448 = new SoTransform();
SoTransform448->setTranslation(new float[]{-0.1097,-0.0107,0.0058});
SoShape* SoShape449 = new SoShape();
SoShape449->setUSE(QString("SiteShape"));
SoTransform448->addChild(*SoShape449);

SoHAnimSite447->addChild(*SoTransform448);

SoHAnimSegment443->addChild(*SoHAnimSite447);

SoHAnimJoint442->addChildren(*SoHAnimSegment443);

SoHAnimJoint* SoHAnimJoint450 = new SoHAnimJoint();
SoHAnimJoint450->X3DNode::setName(QString("r_tarsal_middle_phalanx_4"));
SoHAnimJoint450->setDEF(QString("hanim_r_tarsal_middle_phalanx_4"));
SoHAnimJoint450->setCenter(new float[]{-0.114,0.0044,0.0037});
SoHAnimJoint450->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint450->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment451 = new SoHAnimSegment();
SoHAnimSegment451->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_middle_phalanx_4"));
SoHAnimSegment451->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4"));
SoTouchSensor* SoTouchSensor452 = new SoTouchSensor();
SoTouchSensor452->setDescription(QString("joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4"));
SoHAnimSegment451->addChild(*SoTouchSensor452);

SoTransform* SoTransform453 = new SoTransform();
SoTransform453->setTranslation(new float[]{-0.114,0.0044,0.0037});
SoShape* SoShape454 = new SoShape();
SoShape454->setUSE(QString("JointShape"));
SoTransform453->addChild(*SoShape454);

SoHAnimSegment451->addChild(*SoTransform453);

SoHAnimSite* SoHAnimSite455 = new SoHAnimSite();
SoHAnimSite455->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip"));
SoHAnimSite455->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip"));
SoTransform* SoTransform456 = new SoTransform();
SoTransform456->setTranslation(new float[]{-0.114,0.0044,0.0037});
SoShape* SoShape457 = new SoShape();
SoShape457->setUSE(QString("SiteShape"));
SoTransform456->addChild(*SoShape457);

SoHAnimSite455->addChild(*SoTransform456);

SoHAnimSegment451->addChild(*SoHAnimSite455);

SoHAnimJoint450->addChildren(*SoHAnimSegment451);

SoHAnimJoint* SoHAnimJoint458 = new SoHAnimJoint();
SoHAnimJoint458->X3DNode::setName(QString("r_tarsal_distal_phalanx_4"));
SoHAnimJoint458->setDEF(QString("hanim_r_tarsal_distal_phalanx_4"));
SoHAnimJoint458->setCenter(new float[]{-0.1155,0.0118,0.0008});
SoHAnimJoint458->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint458->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment459 = new SoHAnimSegment();
SoHAnimSegment459->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_distal_phalanx_4"));
SoHAnimSegment459->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4"));
SoTouchSensor* SoTouchSensor460 = new SoTouchSensor();
SoTouchSensor460->setDescription(QString("joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4"));
SoHAnimSegment459->addChild(*SoTouchSensor460);

SoTransform* SoTransform461 = new SoTransform();
SoTransform461->setTranslation(new float[]{-0.1155,0.0118,0.0008});
SoShape* SoShape462 = new SoShape();
SoShape462->setUSE(QString("JointShape"));
SoTransform461->addChild(*SoShape462);

SoHAnimSegment459->addChild(*SoTransform461);

SoHAnimSite* SoHAnimSite463 = new SoHAnimSite();
SoHAnimSite463->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip"));
SoHAnimSite463->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip"));
SoTransform* SoTransform464 = new SoTransform();
SoTransform464->setTranslation(new float[]{-0.1155,0.0118,0.0008});
SoShape* SoShape465 = new SoShape();
SoShape465->setUSE(QString("SiteShape"));
SoTransform464->addChild(*SoShape465);

SoHAnimSite463->addChild(*SoTransform464);

SoHAnimSegment459->addChild(*SoHAnimSite463);

SoHAnimJoint458->addChildren(*SoHAnimSegment459);

SoHAnimJoint450->addChildren(*SoHAnimJoint458);

SoHAnimJoint442->addChildren(*SoHAnimJoint450);

SoHAnimJoint434->addChildren(*SoHAnimJoint442);

SoHAnimJoint426->addChildren(*SoHAnimJoint434);

SoHAnimJoint* SoHAnimJoint466 = new SoHAnimJoint();
SoHAnimJoint466->X3DNode::setName(QString("r_metatarsal_5"));
SoHAnimJoint466->setDEF(QString("hanim_r_metatarsal_5"));
SoHAnimJoint466->setCenter(new float[]{-0.1206,-0.0671,0.0124});
SoHAnimJoint466->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint466->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment467 = new SoHAnimSegment();
SoHAnimSegment467->X3DNode::setName(QString("SEGMENT_FOR_r_metatarsal_5"));
SoHAnimSegment467->setDEF(QString("hanim_SEGMENT_FOR_r_metatarsal_5"));
SoTouchSensor* SoTouchSensor468 = new SoTouchSensor();
SoTouchSensor468->setDescription(QString("joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5"));
SoHAnimSegment467->addChild(*SoTouchSensor468);

SoTransform* SoTransform469 = new SoTransform();
SoTransform469->setTranslation(new float[]{-0.1206,-0.0671,0.0124});
SoShape* SoShape470 = new SoShape();
SoShape470->setUSE(QString("JointShape"));
SoTransform469->addChild(*SoShape470);

SoHAnimSegment467->addChild(*SoTransform469);

SoHAnimSite* SoHAnimSite471 = new SoHAnimSite();
SoHAnimSite471->X3DNode::setName(QString("SEGMENT_FOR_r_metatarsal_5_tip"));
SoHAnimSite471->setDEF(QString("hanim_SEGMENT_FOR_r_metatarsal_5_tip"));
SoTransform* SoTransform472 = new SoTransform();
SoTransform472->setTranslation(new float[]{-0.1206,-0.0671,0.0124});
SoShape* SoShape473 = new SoShape();
SoShape473->setUSE(QString("SiteShape"));
SoTransform472->addChild(*SoShape473);

SoHAnimSite471->addChild(*SoTransform472);

SoHAnimSegment467->addChild(*SoHAnimSite471);

SoHAnimJoint466->addChildren(*SoHAnimSegment467);

SoHAnimJoint* SoHAnimJoint474 = new SoHAnimJoint();
SoHAnimJoint474->X3DNode::setName(QString("r_tarsal_proximal_phalanx_5"));
SoHAnimJoint474->setDEF(QString("hanim_r_tarsal_proximal_phalanx_5"));
SoHAnimJoint474->setCenter(new float[]{-0.1239,-0.0153,0.0051});
SoHAnimJoint474->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint474->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment475 = new SoHAnimSegment();
SoHAnimSegment475->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_proximal_phalanx_5"));
SoHAnimSegment475->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5"));
SoTouchSensor* SoTouchSensor476 = new SoTouchSensor();
SoTouchSensor476->setDescription(QString("joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5"));
SoHAnimSegment475->addChild(*SoTouchSensor476);

SoTransform* SoTransform477 = new SoTransform();
SoTransform477->setTranslation(new float[]{-0.1239,-0.0153,0.0051});
SoShape* SoShape478 = new SoShape();
SoShape478->setUSE(QString("JointShape"));
SoTransform477->addChild(*SoShape478);

SoHAnimSegment475->addChild(*SoTransform477);

SoHAnimSite* SoHAnimSite479 = new SoHAnimSite();
SoHAnimSite479->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip"));
SoHAnimSite479->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip"));
SoTransform* SoTransform480 = new SoTransform();
SoTransform480->setTranslation(new float[]{-0.1239,-0.0153,0.0051});
SoShape* SoShape481 = new SoShape();
SoShape481->setUSE(QString("SiteShape"));
SoTransform480->addChild(*SoShape481);

SoHAnimSite479->addChild(*SoTransform480);

SoHAnimSegment475->addChild(*SoHAnimSite479);

SoHAnimJoint474->addChildren(*SoHAnimSegment475);

SoHAnimJoint* SoHAnimJoint482 = new SoHAnimJoint();
SoHAnimJoint482->X3DNode::setName(QString("r_tarsal_middle_phalanx_5"));
SoHAnimJoint482->setDEF(QString("hanim_r_tarsal_middle_phalanx_5"));
SoHAnimJoint482->setCenter(new float[]{-0.1262,-0.0077,0.0023});
SoHAnimJoint482->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint482->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment483 = new SoHAnimSegment();
SoHAnimSegment483->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_middle_phalanx_5"));
SoHAnimSegment483->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5"));
SoTouchSensor* SoTouchSensor484 = new SoTouchSensor();
SoTouchSensor484->setDescription(QString("joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5"));
SoHAnimSegment483->addChild(*SoTouchSensor484);

SoTransform* SoTransform485 = new SoTransform();
SoTransform485->setTranslation(new float[]{-0.1262,-0.0077,0.0023});
SoShape* SoShape486 = new SoShape();
SoShape486->setUSE(QString("JointShape"));
SoTransform485->addChild(*SoShape486);

SoHAnimSegment483->addChild(*SoTransform485);

SoHAnimSite* SoHAnimSite487 = new SoHAnimSite();
SoHAnimSite487->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip"));
SoHAnimSite487->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip"));
SoTransform* SoTransform488 = new SoTransform();
SoTransform488->setTranslation(new float[]{-0.1262,-0.0077,0.0023});
SoShape* SoShape489 = new SoShape();
SoShape489->setUSE(QString("SiteShape"));
SoTransform488->addChild(*SoShape489);

SoHAnimSite487->addChild(*SoTransform488);

SoHAnimSegment483->addChild(*SoHAnimSite487);

SoHAnimJoint482->addChildren(*SoHAnimSegment483);

SoHAnimJoint* SoHAnimJoint490 = new SoHAnimJoint();
SoHAnimJoint490->X3DNode::setName(QString("r_tarsal_distal_phalanx_5"));
SoHAnimJoint490->setDEF(QString("hanim_r_tarsal_distal_phalanx_5"));
SoHAnimJoint490->setCenter(new float[]{-0.1271,0.0,0.0});
SoHAnimJoint490->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint490->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment491 = new SoHAnimSegment();
SoHAnimSegment491->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_distal_phalanx_5"));
SoHAnimSegment491->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5"));
SoTouchSensor* SoTouchSensor492 = new SoTouchSensor();
SoTouchSensor492->setDescription(QString("joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5"));
SoHAnimSegment491->addChild(*SoTouchSensor492);

SoTransform* SoTransform493 = new SoTransform();
SoTransform493->setTranslation(new float[]{-0.1271,0.0,0.0});
SoShape* SoShape494 = new SoShape();
SoShape494->setUSE(QString("JointShape"));
SoTransform493->addChild(*SoShape494);

SoHAnimSegment491->addChild(*SoTransform493);

SoHAnimSite* SoHAnimSite495 = new SoHAnimSite();
SoHAnimSite495->X3DNode::setName(QString("SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip"));
SoHAnimSite495->setDEF(QString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip"));
SoTransform* SoTransform496 = new SoTransform();
SoTransform496->setTranslation(new float[]{-0.1271,0.0,0.0});
SoShape* SoShape497 = new SoShape();
SoShape497->setUSE(QString("SiteShape"));
SoTransform496->addChild(*SoShape497);

SoHAnimSite495->addChild(*SoTransform496);

SoHAnimSegment491->addChild(*SoHAnimSite495);

SoHAnimJoint490->addChildren(*SoHAnimSegment491);

SoHAnimJoint482->addChildren(*SoHAnimJoint490);

SoHAnimJoint474->addChildren(*SoHAnimJoint482);

SoHAnimJoint466->addChildren(*SoHAnimJoint474);

SoHAnimJoint426->addChildren(*SoHAnimJoint466);

SoHAnimJoint418->addChildren(*SoHAnimJoint426);

SoHAnimJoint290->addChildren(*SoHAnimJoint418);

SoHAnimJoint282->addChildren(*SoHAnimJoint290);

SoHAnimJoint274->addChildren(*SoHAnimJoint282);

SoHAnimJoint42->addChildren(*SoHAnimJoint274);

SoHAnimJoint34->addChildren(*SoHAnimJoint42);

SoHAnimJoint* SoHAnimJoint498 = new SoHAnimJoint();
SoHAnimJoint498->X3DNode::setName(QString("l5"));
SoHAnimJoint498->setDEF(QString("hanim_l5"));
SoHAnimJoint498->setCenter(new float[]{-0.0002,-0.1156,0.9169});
SoHAnimJoint498->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint498->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment499 = new SoHAnimSegment();
SoHAnimSegment499->X3DNode::setName(QString("SEGMENT_FOR_l5"));
SoHAnimSegment499->setDEF(QString("hanim_SEGMENT_FOR_l5"));
SoTouchSensor* SoTouchSensor500 = new SoTouchSensor();
SoTouchSensor500->setDescription(QString("joint l5 segment SEGMENT_FOR_l5"));
SoHAnimSegment499->addChild(*SoTouchSensor500);

SoTransform* SoTransform501 = new SoTransform();
SoTransform501->setTranslation(new float[]{-0.0002,-0.1156,0.9169});
SoShape* SoShape502 = new SoShape();
SoShape502->setUSE(QString("JointShape"));
SoTransform501->addChild(*SoShape502);

SoHAnimSegment499->addChild(*SoTransform501);

SoHAnimSite* SoHAnimSite503 = new SoHAnimSite();
SoHAnimSite503->X3DNode::setName(QString("SEGMENT_FOR_l5_tip"));
SoHAnimSite503->setDEF(QString("hanim_SEGMENT_FOR_l5_tip"));
SoTransform* SoTransform504 = new SoTransform();
SoTransform504->setTranslation(new float[]{-0.0002,-0.1156,0.9169});
SoShape* SoShape505 = new SoShape();
SoShape505->setUSE(QString("SiteShape"));
SoTransform504->addChild(*SoShape505);

SoHAnimSite503->addChild(*SoTransform504);

SoHAnimSegment499->addChild(*SoHAnimSite503);

SoHAnimJoint498->addChildren(*SoHAnimSegment499);

SoHAnimJoint* SoHAnimJoint506 = new SoHAnimJoint();
SoHAnimJoint506->X3DNode::setName(QString("l4"));
SoHAnimJoint506->setDEF(QString("hanim_l4"));
SoHAnimJoint506->setCenter(new float[]{-0.0002,-0.1156,0.9412});
SoHAnimJoint506->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint506->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment507 = new SoHAnimSegment();
SoHAnimSegment507->X3DNode::setName(QString("SEGMENT_FOR_l4"));
SoHAnimSegment507->setDEF(QString("hanim_SEGMENT_FOR_l4"));
SoTouchSensor* SoTouchSensor508 = new SoTouchSensor();
SoTouchSensor508->setDescription(QString("joint l4 segment SEGMENT_FOR_l4"));
SoHAnimSegment507->addChild(*SoTouchSensor508);

SoTransform* SoTransform509 = new SoTransform();
SoTransform509->setTranslation(new float[]{-0.0002,-0.1156,0.9412});
SoShape* SoShape510 = new SoShape();
SoShape510->setUSE(QString("JointShape"));
SoTransform509->addChild(*SoShape510);

SoHAnimSegment507->addChild(*SoTransform509);

SoHAnimSite* SoHAnimSite511 = new SoHAnimSite();
SoHAnimSite511->X3DNode::setName(QString("SEGMENT_FOR_l4_tip"));
SoHAnimSite511->setDEF(QString("hanim_SEGMENT_FOR_l4_tip"));
SoTransform* SoTransform512 = new SoTransform();
SoTransform512->setTranslation(new float[]{-0.0002,-0.1156,0.9412});
SoShape* SoShape513 = new SoShape();
SoShape513->setUSE(QString("SiteShape"));
SoTransform512->addChild(*SoShape513);

SoHAnimSite511->addChild(*SoTransform512);

SoHAnimSegment507->addChild(*SoHAnimSite511);

SoHAnimJoint506->addChildren(*SoHAnimSegment507);

SoHAnimJoint* SoHAnimJoint514 = new SoHAnimJoint();
SoHAnimJoint514->X3DNode::setName(QString("l3"));
SoHAnimJoint514->setDEF(QString("hanim_l3"));
SoHAnimJoint514->setCenter(new float[]{-0.0002,-0.1156,0.9574});
SoHAnimJoint514->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint514->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment515 = new SoHAnimSegment();
SoHAnimSegment515->X3DNode::setName(QString("SEGMENT_FOR_l3"));
SoHAnimSegment515->setDEF(QString("hanim_SEGMENT_FOR_l3"));
SoTouchSensor* SoTouchSensor516 = new SoTouchSensor();
SoTouchSensor516->setDescription(QString("joint l3 segment SEGMENT_FOR_l3"));
SoHAnimSegment515->addChild(*SoTouchSensor516);

SoTransform* SoTransform517 = new SoTransform();
SoTransform517->setTranslation(new float[]{-0.0002,-0.1156,0.9574});
SoShape* SoShape518 = new SoShape();
SoShape518->setUSE(QString("JointShape"));
SoTransform517->addChild(*SoShape518);

SoHAnimSegment515->addChild(*SoTransform517);

SoHAnimSite* SoHAnimSite519 = new SoHAnimSite();
SoHAnimSite519->X3DNode::setName(QString("SEGMENT_FOR_l3_tip"));
SoHAnimSite519->setDEF(QString("hanim_SEGMENT_FOR_l3_tip"));
SoTransform* SoTransform520 = new SoTransform();
SoTransform520->setTranslation(new float[]{-0.0002,-0.1156,0.9574});
SoShape* SoShape521 = new SoShape();
SoShape521->setUSE(QString("SiteShape"));
SoTransform520->addChild(*SoShape521);

SoHAnimSite519->addChild(*SoTransform520);

SoHAnimSegment515->addChild(*SoHAnimSite519);

SoHAnimJoint514->addChildren(*SoHAnimSegment515);

SoHAnimJoint* SoHAnimJoint522 = new SoHAnimJoint();
SoHAnimJoint522->X3DNode::setName(QString("l2"));
SoHAnimJoint522->setDEF(QString("hanim_l2"));
SoHAnimJoint522->setCenter(new float[]{-0.0002,-0.1156,0.9738});
SoHAnimJoint522->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint522->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment523 = new SoHAnimSegment();
SoHAnimSegment523->X3DNode::setName(QString("SEGMENT_FOR_l2"));
SoHAnimSegment523->setDEF(QString("hanim_SEGMENT_FOR_l2"));
SoTouchSensor* SoTouchSensor524 = new SoTouchSensor();
SoTouchSensor524->setDescription(QString("joint l2 segment SEGMENT_FOR_l2"));
SoHAnimSegment523->addChild(*SoTouchSensor524);

SoTransform* SoTransform525 = new SoTransform();
SoTransform525->setTranslation(new float[]{-0.0002,-0.1156,0.9738});
SoShape* SoShape526 = new SoShape();
SoShape526->setUSE(QString("JointShape"));
SoTransform525->addChild(*SoShape526);

SoHAnimSegment523->addChild(*SoTransform525);

SoHAnimSite* SoHAnimSite527 = new SoHAnimSite();
SoHAnimSite527->X3DNode::setName(QString("SEGMENT_FOR_l2_tip"));
SoHAnimSite527->setDEF(QString("hanim_SEGMENT_FOR_l2_tip"));
SoTransform* SoTransform528 = new SoTransform();
SoTransform528->setTranslation(new float[]{-0.0002,-0.1156,0.9738});
SoShape* SoShape529 = new SoShape();
SoShape529->setUSE(QString("SiteShape"));
SoTransform528->addChild(*SoShape529);

SoHAnimSite527->addChild(*SoTransform528);

SoHAnimSegment523->addChild(*SoHAnimSite527);

SoHAnimJoint522->addChildren(*SoHAnimSegment523);

SoHAnimJoint* SoHAnimJoint530 = new SoHAnimJoint();
SoHAnimJoint530->X3DNode::setName(QString("l1"));
SoHAnimJoint530->setDEF(QString("hanim_l1"));
SoHAnimJoint530->setCenter(new float[]{-0.0002,-0.1156,0.9911});
SoHAnimJoint530->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint530->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment531 = new SoHAnimSegment();
SoHAnimSegment531->X3DNode::setName(QString("SEGMENT_FOR_l1"));
SoHAnimSegment531->setDEF(QString("hanim_SEGMENT_FOR_l1"));
SoTouchSensor* SoTouchSensor532 = new SoTouchSensor();
SoTouchSensor532->setDescription(QString("joint l1 segment SEGMENT_FOR_l1"));
SoHAnimSegment531->addChild(*SoTouchSensor532);

SoTransform* SoTransform533 = new SoTransform();
SoTransform533->setTranslation(new float[]{-0.0002,-0.1156,0.9911});
SoShape* SoShape534 = new SoShape();
SoShape534->setUSE(QString("JointShape"));
SoTransform533->addChild(*SoShape534);

SoHAnimSegment531->addChild(*SoTransform533);

SoHAnimSite* SoHAnimSite535 = new SoHAnimSite();
SoHAnimSite535->X3DNode::setName(QString("SEGMENT_FOR_l1_tip"));
SoHAnimSite535->setDEF(QString("hanim_SEGMENT_FOR_l1_tip"));
SoTransform* SoTransform536 = new SoTransform();
SoTransform536->setTranslation(new float[]{-0.0002,-0.1156,0.9911});
SoShape* SoShape537 = new SoShape();
SoShape537->setUSE(QString("SiteShape"));
SoTransform536->addChild(*SoShape537);

SoHAnimSite535->addChild(*SoTransform536);

SoHAnimSegment531->addChild(*SoHAnimSite535);

SoHAnimJoint530->addChildren(*SoHAnimSegment531);

SoHAnimJoint* SoHAnimJoint538 = new SoHAnimJoint();
SoHAnimJoint538->X3DNode::setName(QString("t12"));
SoHAnimJoint538->setDEF(QString("hanim_t12"));
SoHAnimJoint538->setCenter(new float[]{-0.0002,-0.1156,1.0145});
SoHAnimJoint538->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint538->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment539 = new SoHAnimSegment();
SoHAnimSegment539->X3DNode::setName(QString("SEGMENT_FOR_t12"));
SoHAnimSegment539->setDEF(QString("hanim_SEGMENT_FOR_t12"));
SoTouchSensor* SoTouchSensor540 = new SoTouchSensor();
SoTouchSensor540->setDescription(QString("joint t12 segment SEGMENT_FOR_t12"));
SoHAnimSegment539->addChild(*SoTouchSensor540);

SoTransform* SoTransform541 = new SoTransform();
SoTransform541->setTranslation(new float[]{-0.0002,-0.1156,1.0145});
SoShape* SoShape542 = new SoShape();
SoShape542->setUSE(QString("JointShape"));
SoTransform541->addChild(*SoShape542);

SoHAnimSegment539->addChild(*SoTransform541);

SoHAnimSite* SoHAnimSite543 = new SoHAnimSite();
SoHAnimSite543->X3DNode::setName(QString("SEGMENT_FOR_t12_tip"));
SoHAnimSite543->setDEF(QString("hanim_SEGMENT_FOR_t12_tip"));
SoTransform* SoTransform544 = new SoTransform();
SoTransform544->setTranslation(new float[]{-0.0002,-0.1156,1.0145});
SoShape* SoShape545 = new SoShape();
SoShape545->setUSE(QString("SiteShape"));
SoTransform544->addChild(*SoShape545);

SoHAnimSite543->addChild(*SoTransform544);

SoHAnimSegment539->addChild(*SoHAnimSite543);

SoHAnimJoint538->addChildren(*SoHAnimSegment539);

SoHAnimJoint* SoHAnimJoint546 = new SoHAnimJoint();
SoHAnimJoint546->X3DNode::setName(QString("t11"));
SoHAnimJoint546->setDEF(QString("hanim_t11"));
SoHAnimJoint546->setCenter(new float[]{-0.0002,-0.1156,1.0381});
SoHAnimJoint546->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint546->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment547 = new SoHAnimSegment();
SoHAnimSegment547->X3DNode::setName(QString("SEGMENT_FOR_t11"));
SoHAnimSegment547->setDEF(QString("hanim_SEGMENT_FOR_t11"));
SoTouchSensor* SoTouchSensor548 = new SoTouchSensor();
SoTouchSensor548->setDescription(QString("joint t11 segment SEGMENT_FOR_t11"));
SoHAnimSegment547->addChild(*SoTouchSensor548);

SoTransform* SoTransform549 = new SoTransform();
SoTransform549->setTranslation(new float[]{-0.0002,-0.1156,1.0381});
SoShape* SoShape550 = new SoShape();
SoShape550->setUSE(QString("JointShape"));
SoTransform549->addChild(*SoShape550);

SoHAnimSegment547->addChild(*SoTransform549);

SoHAnimSite* SoHAnimSite551 = new SoHAnimSite();
SoHAnimSite551->X3DNode::setName(QString("SEGMENT_FOR_t11_tip"));
SoHAnimSite551->setDEF(QString("hanim_SEGMENT_FOR_t11_tip"));
SoTransform* SoTransform552 = new SoTransform();
SoTransform552->setTranslation(new float[]{-0.0002,-0.1156,1.0381});
SoShape* SoShape553 = new SoShape();
SoShape553->setUSE(QString("SiteShape"));
SoTransform552->addChild(*SoShape553);

SoHAnimSite551->addChild(*SoTransform552);

SoHAnimSegment547->addChild(*SoHAnimSite551);

SoHAnimJoint546->addChildren(*SoHAnimSegment547);

SoHAnimJoint* SoHAnimJoint554 = new SoHAnimJoint();
SoHAnimJoint554->X3DNode::setName(QString("t10"));
SoHAnimJoint554->setDEF(QString("hanim_t10"));
SoHAnimJoint554->setCenter(new float[]{-0.0002,-0.1157,1.0552});
SoHAnimJoint554->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint554->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment555 = new SoHAnimSegment();
SoHAnimSegment555->X3DNode::setName(QString("SEGMENT_FOR_t10"));
SoHAnimSegment555->setDEF(QString("hanim_SEGMENT_FOR_t10"));
SoTouchSensor* SoTouchSensor556 = new SoTouchSensor();
SoTouchSensor556->setDescription(QString("joint t10 segment SEGMENT_FOR_t10"));
SoHAnimSegment555->addChild(*SoTouchSensor556);

SoTransform* SoTransform557 = new SoTransform();
SoTransform557->setTranslation(new float[]{-0.0002,-0.1157,1.0552});
SoShape* SoShape558 = new SoShape();
SoShape558->setUSE(QString("JointShape"));
SoTransform557->addChild(*SoShape558);

SoHAnimSegment555->addChild(*SoTransform557);

SoHAnimSite* SoHAnimSite559 = new SoHAnimSite();
SoHAnimSite559->X3DNode::setName(QString("SEGMENT_FOR_t10_tip"));
SoHAnimSite559->setDEF(QString("hanim_SEGMENT_FOR_t10_tip"));
SoTransform* SoTransform560 = new SoTransform();
SoTransform560->setTranslation(new float[]{-0.0002,-0.1157,1.0552});
SoShape* SoShape561 = new SoShape();
SoShape561->setUSE(QString("SiteShape"));
SoTransform560->addChild(*SoShape561);

SoHAnimSite559->addChild(*SoTransform560);

SoHAnimSegment555->addChild(*SoHAnimSite559);

SoHAnimJoint554->addChildren(*SoHAnimSegment555);

SoHAnimJoint* SoHAnimJoint562 = new SoHAnimJoint();
SoHAnimJoint562->X3DNode::setName(QString("t9"));
SoHAnimJoint562->setDEF(QString("hanim_t9"));
SoHAnimJoint562->setCenter(new float[]{-0.0002,-0.1156,1.0699});
SoHAnimJoint562->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint562->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment563 = new SoHAnimSegment();
SoHAnimSegment563->X3DNode::setName(QString("SEGMENT_FOR_t9"));
SoHAnimSegment563->setDEF(QString("hanim_SEGMENT_FOR_t9"));
SoTouchSensor* SoTouchSensor564 = new SoTouchSensor();
SoTouchSensor564->setDescription(QString("joint t9 segment SEGMENT_FOR_t9"));
SoHAnimSegment563->addChild(*SoTouchSensor564);

SoTransform* SoTransform565 = new SoTransform();
SoTransform565->setTranslation(new float[]{-0.0002,-0.1156,1.0699});
SoShape* SoShape566 = new SoShape();
SoShape566->setUSE(QString("JointShape"));
SoTransform565->addChild(*SoShape566);

SoHAnimSegment563->addChild(*SoTransform565);

SoHAnimSite* SoHAnimSite567 = new SoHAnimSite();
SoHAnimSite567->X3DNode::setName(QString("SEGMENT_FOR_t9_tip"));
SoHAnimSite567->setDEF(QString("hanim_SEGMENT_FOR_t9_tip"));
SoTransform* SoTransform568 = new SoTransform();
SoTransform568->setTranslation(new float[]{-0.0002,-0.1156,1.0699});
SoShape* SoShape569 = new SoShape();
SoShape569->setUSE(QString("SiteShape"));
SoTransform568->addChild(*SoShape569);

SoHAnimSite567->addChild(*SoTransform568);

SoHAnimSegment563->addChild(*SoHAnimSite567);

SoHAnimJoint562->addChildren(*SoHAnimSegment563);

SoHAnimJoint* SoHAnimJoint570 = new SoHAnimJoint();
SoHAnimJoint570->X3DNode::setName(QString("t8"));
SoHAnimJoint570->setDEF(QString("hanim_t8"));
SoHAnimJoint570->setCenter(new float[]{-0.0002,-0.1156,1.0845});
SoHAnimJoint570->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint570->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment571 = new SoHAnimSegment();
SoHAnimSegment571->X3DNode::setName(QString("SEGMENT_FOR_t8"));
SoHAnimSegment571->setDEF(QString("hanim_SEGMENT_FOR_t8"));
SoTouchSensor* SoTouchSensor572 = new SoTouchSensor();
SoTouchSensor572->setDescription(QString("joint t8 segment SEGMENT_FOR_t8"));
SoHAnimSegment571->addChild(*SoTouchSensor572);

SoTransform* SoTransform573 = new SoTransform();
SoTransform573->setTranslation(new float[]{-0.0002,-0.1156,1.0845});
SoShape* SoShape574 = new SoShape();
SoShape574->setUSE(QString("JointShape"));
SoTransform573->addChild(*SoShape574);

SoHAnimSegment571->addChild(*SoTransform573);

SoHAnimSite* SoHAnimSite575 = new SoHAnimSite();
SoHAnimSite575->X3DNode::setName(QString("SEGMENT_FOR_t8_tip"));
SoHAnimSite575->setDEF(QString("hanim_SEGMENT_FOR_t8_tip"));
SoTransform* SoTransform576 = new SoTransform();
SoTransform576->setTranslation(new float[]{-0.0002,-0.1156,1.0845});
SoShape* SoShape577 = new SoShape();
SoShape577->setUSE(QString("SiteShape"));
SoTransform576->addChild(*SoShape577);

SoHAnimSite575->addChild(*SoTransform576);

SoHAnimSegment571->addChild(*SoHAnimSite575);

SoHAnimJoint570->addChildren(*SoHAnimSegment571);

SoHAnimJoint* SoHAnimJoint578 = new SoHAnimJoint();
SoHAnimJoint578->X3DNode::setName(QString("t7"));
SoHAnimJoint578->setDEF(QString("hanim_t7"));
SoHAnimJoint578->setCenter(new float[]{-0.0002,-0.1156,1.1002});
SoHAnimJoint578->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint578->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment579 = new SoHAnimSegment();
SoHAnimSegment579->X3DNode::setName(QString("SEGMENT_FOR_t7"));
SoHAnimSegment579->setDEF(QString("hanim_SEGMENT_FOR_t7"));
SoTouchSensor* SoTouchSensor580 = new SoTouchSensor();
SoTouchSensor580->setDescription(QString("joint t7 segment SEGMENT_FOR_t7"));
SoHAnimSegment579->addChild(*SoTouchSensor580);

SoTransform* SoTransform581 = new SoTransform();
SoTransform581->setTranslation(new float[]{-0.0002,-0.1156,1.1002});
SoShape* SoShape582 = new SoShape();
SoShape582->setUSE(QString("JointShape"));
SoTransform581->addChild(*SoShape582);

SoHAnimSegment579->addChild(*SoTransform581);

SoHAnimSite* SoHAnimSite583 = new SoHAnimSite();
SoHAnimSite583->X3DNode::setName(QString("SEGMENT_FOR_t7_tip"));
SoHAnimSite583->setDEF(QString("hanim_SEGMENT_FOR_t7_tip"));
SoTransform* SoTransform584 = new SoTransform();
SoTransform584->setTranslation(new float[]{-0.0002,-0.1156,1.1002});
SoShape* SoShape585 = new SoShape();
SoShape585->setUSE(QString("SiteShape"));
SoTransform584->addChild(*SoShape585);

SoHAnimSite583->addChild(*SoTransform584);

SoHAnimSegment579->addChild(*SoHAnimSite583);

SoHAnimJoint578->addChildren(*SoHAnimSegment579);

SoHAnimJoint* SoHAnimJoint586 = new SoHAnimJoint();
SoHAnimJoint586->X3DNode::setName(QString("t6"));
SoHAnimJoint586->setDEF(QString("hanim_t6"));
SoHAnimJoint586->setCenter(new float[]{-0.0002,-0.1156,1.1131});
SoHAnimJoint586->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint586->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment587 = new SoHAnimSegment();
SoHAnimSegment587->X3DNode::setName(QString("SEGMENT_FOR_t6"));
SoHAnimSegment587->setDEF(QString("hanim_SEGMENT_FOR_t6"));
SoTouchSensor* SoTouchSensor588 = new SoTouchSensor();
SoTouchSensor588->setDescription(QString("joint t6 segment SEGMENT_FOR_t6"));
SoHAnimSegment587->addChild(*SoTouchSensor588);

SoTransform* SoTransform589 = new SoTransform();
SoTransform589->setTranslation(new float[]{-0.0002,-0.1156,1.1131});
SoShape* SoShape590 = new SoShape();
SoShape590->setUSE(QString("JointShape"));
SoTransform589->addChild(*SoShape590);

SoHAnimSegment587->addChild(*SoTransform589);

SoHAnimSite* SoHAnimSite591 = new SoHAnimSite();
SoHAnimSite591->X3DNode::setName(QString("SEGMENT_FOR_t6_tip"));
SoHAnimSite591->setDEF(QString("hanim_SEGMENT_FOR_t6_tip"));
SoTransform* SoTransform592 = new SoTransform();
SoTransform592->setTranslation(new float[]{-0.0002,-0.1156,1.1131});
SoShape* SoShape593 = new SoShape();
SoShape593->setUSE(QString("SiteShape"));
SoTransform592->addChild(*SoShape593);

SoHAnimSite591->addChild(*SoTransform592);

SoHAnimSegment587->addChild(*SoHAnimSite591);

SoHAnimJoint586->addChildren(*SoHAnimSegment587);

SoHAnimJoint* SoHAnimJoint594 = new SoHAnimJoint();
SoHAnimJoint594->X3DNode::setName(QString("t5"));
SoHAnimJoint594->setDEF(QString("hanim_t5"));
SoHAnimJoint594->setCenter(new float[]{-0.0002,-0.1156,1.1286});
SoHAnimJoint594->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint594->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment595 = new SoHAnimSegment();
SoHAnimSegment595->X3DNode::setName(QString("SEGMENT_FOR_t5"));
SoHAnimSegment595->setDEF(QString("hanim_SEGMENT_FOR_t5"));
SoTouchSensor* SoTouchSensor596 = new SoTouchSensor();
SoTouchSensor596->setDescription(QString("joint t5 segment SEGMENT_FOR_t5"));
SoHAnimSegment595->addChild(*SoTouchSensor596);

SoTransform* SoTransform597 = new SoTransform();
SoTransform597->setTranslation(new float[]{-0.0002,-0.1156,1.1286});
SoShape* SoShape598 = new SoShape();
SoShape598->setUSE(QString("JointShape"));
SoTransform597->addChild(*SoShape598);

SoHAnimSegment595->addChild(*SoTransform597);

SoHAnimSite* SoHAnimSite599 = new SoHAnimSite();
SoHAnimSite599->X3DNode::setName(QString("SEGMENT_FOR_t5_tip"));
SoHAnimSite599->setDEF(QString("hanim_SEGMENT_FOR_t5_tip"));
SoTransform* SoTransform600 = new SoTransform();
SoTransform600->setTranslation(new float[]{-0.0002,-0.1156,1.1286});
SoShape* SoShape601 = new SoShape();
SoShape601->setUSE(QString("SiteShape"));
SoTransform600->addChild(*SoShape601);

SoHAnimSite599->addChild(*SoTransform600);

SoHAnimSegment595->addChild(*SoHAnimSite599);

SoHAnimJoint594->addChildren(*SoHAnimSegment595);

SoHAnimJoint* SoHAnimJoint602 = new SoHAnimJoint();
SoHAnimJoint602->X3DNode::setName(QString("t4"));
SoHAnimJoint602->setDEF(QString("hanim_t4"));
SoHAnimJoint602->setCenter(new float[]{-0.0002,-0.1156,1.1439});
SoHAnimJoint602->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint602->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment603 = new SoHAnimSegment();
SoHAnimSegment603->X3DNode::setName(QString("SEGMENT_FOR_t4"));
SoHAnimSegment603->setDEF(QString("hanim_SEGMENT_FOR_t4"));
SoTouchSensor* SoTouchSensor604 = new SoTouchSensor();
SoTouchSensor604->setDescription(QString("joint t4 segment SEGMENT_FOR_t4"));
SoHAnimSegment603->addChild(*SoTouchSensor604);

SoTransform* SoTransform605 = new SoTransform();
SoTransform605->setTranslation(new float[]{-0.0002,-0.1156,1.1439});
SoShape* SoShape606 = new SoShape();
SoShape606->setUSE(QString("JointShape"));
SoTransform605->addChild(*SoShape606);

SoHAnimSegment603->addChild(*SoTransform605);

SoHAnimSite* SoHAnimSite607 = new SoHAnimSite();
SoHAnimSite607->X3DNode::setName(QString("SEGMENT_FOR_t4_tip"));
SoHAnimSite607->setDEF(QString("hanim_SEGMENT_FOR_t4_tip"));
SoTransform* SoTransform608 = new SoTransform();
SoTransform608->setTranslation(new float[]{-0.0002,-0.1156,1.1439});
SoShape* SoShape609 = new SoShape();
SoShape609->setUSE(QString("SiteShape"));
SoTransform608->addChild(*SoShape609);

SoHAnimSite607->addChild(*SoTransform608);

SoHAnimSegment603->addChild(*SoHAnimSite607);

SoHAnimJoint602->addChildren(*SoHAnimSegment603);

SoHAnimJoint* SoHAnimJoint610 = new SoHAnimJoint();
SoHAnimJoint610->X3DNode::setName(QString("t3"));
SoHAnimJoint610->setDEF(QString("hanim_t3"));
SoHAnimJoint610->setCenter(new float[]{-0.0002,-0.1156,1.1623});
SoHAnimJoint610->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint610->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment611 = new SoHAnimSegment();
SoHAnimSegment611->X3DNode::setName(QString("SEGMENT_FOR_t3"));
SoHAnimSegment611->setDEF(QString("hanim_SEGMENT_FOR_t3"));
SoTouchSensor* SoTouchSensor612 = new SoTouchSensor();
SoTouchSensor612->setDescription(QString("joint t3 segment SEGMENT_FOR_t3"));
SoHAnimSegment611->addChild(*SoTouchSensor612);

SoTransform* SoTransform613 = new SoTransform();
SoTransform613->setTranslation(new float[]{-0.0002,-0.1156,1.1623});
SoShape* SoShape614 = new SoShape();
SoShape614->setUSE(QString("JointShape"));
SoTransform613->addChild(*SoShape614);

SoHAnimSegment611->addChild(*SoTransform613);

SoHAnimSite* SoHAnimSite615 = new SoHAnimSite();
SoHAnimSite615->X3DNode::setName(QString("SEGMENT_FOR_t3_tip"));
SoHAnimSite615->setDEF(QString("hanim_SEGMENT_FOR_t3_tip"));
SoTransform* SoTransform616 = new SoTransform();
SoTransform616->setTranslation(new float[]{-0.0002,-0.1156,1.1623});
SoShape* SoShape617 = new SoShape();
SoShape617->setUSE(QString("SiteShape"));
SoTransform616->addChild(*SoShape617);

SoHAnimSite615->addChild(*SoTransform616);

SoHAnimSegment611->addChild(*SoHAnimSite615);

SoHAnimJoint610->addChildren(*SoHAnimSegment611);

SoHAnimJoint* SoHAnimJoint618 = new SoHAnimJoint();
SoHAnimJoint618->X3DNode::setName(QString("t2"));
SoHAnimJoint618->setDEF(QString("hanim_t2"));
SoHAnimJoint618->setCenter(new float[]{-0.0002,-0.1157,1.1871});
SoHAnimJoint618->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint618->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment619 = new SoHAnimSegment();
SoHAnimSegment619->X3DNode::setName(QString("SEGMENT_FOR_t2"));
SoHAnimSegment619->setDEF(QString("hanim_SEGMENT_FOR_t2"));
SoTouchSensor* SoTouchSensor620 = new SoTouchSensor();
SoTouchSensor620->setDescription(QString("joint t2 segment SEGMENT_FOR_t2"));
SoHAnimSegment619->addChild(*SoTouchSensor620);

SoTransform* SoTransform621 = new SoTransform();
SoTransform621->setTranslation(new float[]{-0.0002,-0.1157,1.1871});
SoShape* SoShape622 = new SoShape();
SoShape622->setUSE(QString("JointShape"));
SoTransform621->addChild(*SoShape622);

SoHAnimSegment619->addChild(*SoTransform621);

SoHAnimSite* SoHAnimSite623 = new SoHAnimSite();
SoHAnimSite623->X3DNode::setName(QString("SEGMENT_FOR_t2_tip"));
SoHAnimSite623->setDEF(QString("hanim_SEGMENT_FOR_t2_tip"));
SoTransform* SoTransform624 = new SoTransform();
SoTransform624->setTranslation(new float[]{-0.0002,-0.1157,1.1871});
SoShape* SoShape625 = new SoShape();
SoShape625->setUSE(QString("SiteShape"));
SoTransform624->addChild(*SoShape625);

SoHAnimSite623->addChild(*SoTransform624);

SoHAnimSegment619->addChild(*SoHAnimSite623);

SoHAnimJoint618->addChildren(*SoHAnimSegment619);

SoHAnimJoint* SoHAnimJoint626 = new SoHAnimJoint();
SoHAnimJoint626->X3DNode::setName(QString("t1"));
SoHAnimJoint626->setDEF(QString("hanim_t1"));
SoHAnimJoint626->setCenter(new float[]{-0.0002,-0.1156,1.2109});
SoHAnimJoint626->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint626->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment627 = new SoHAnimSegment();
SoHAnimSegment627->X3DNode::setName(QString("SEGMENT_FOR_t1"));
SoHAnimSegment627->setDEF(QString("hanim_SEGMENT_FOR_t1"));
SoTouchSensor* SoTouchSensor628 = new SoTouchSensor();
SoTouchSensor628->setDescription(QString("joint t1 segment SEGMENT_FOR_t1"));
SoHAnimSegment627->addChild(*SoTouchSensor628);

SoTransform* SoTransform629 = new SoTransform();
SoTransform629->setTranslation(new float[]{-0.0002,-0.1156,1.2109});
SoShape* SoShape630 = new SoShape();
SoShape630->setUSE(QString("JointShape"));
SoTransform629->addChild(*SoShape630);

SoHAnimSegment627->addChild(*SoTransform629);

SoHAnimSite* SoHAnimSite631 = new SoHAnimSite();
SoHAnimSite631->X3DNode::setName(QString("SEGMENT_FOR_t1_tip"));
SoHAnimSite631->setDEF(QString("hanim_SEGMENT_FOR_t1_tip"));
SoTransform* SoTransform632 = new SoTransform();
SoTransform632->setTranslation(new float[]{-0.0002,-0.1156,1.2109});
SoShape* SoShape633 = new SoShape();
SoShape633->setUSE(QString("SiteShape"));
SoTransform632->addChild(*SoShape633);

SoHAnimSite631->addChild(*SoTransform632);

SoHAnimSegment627->addChild(*SoHAnimSite631);

SoHAnimJoint626->addChildren(*SoHAnimSegment627);

SoHAnimJoint* SoHAnimJoint634 = new SoHAnimJoint();
SoHAnimJoint634->X3DNode::setName(QString("c7"));
SoHAnimJoint634->setDEF(QString("hanim_c7"));
SoHAnimJoint634->setCenter(new float[]{-0.0002,-0.1169,1.2368});
SoHAnimJoint634->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint634->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment635 = new SoHAnimSegment();
SoHAnimSegment635->X3DNode::setName(QString("SEGMENT_FOR_c7"));
SoHAnimSegment635->setDEF(QString("hanim_SEGMENT_FOR_c7"));
SoTouchSensor* SoTouchSensor636 = new SoTouchSensor();
SoTouchSensor636->setDescription(QString("joint c7 segment SEGMENT_FOR_c7"));
SoHAnimSegment635->addChild(*SoTouchSensor636);

SoTransform* SoTransform637 = new SoTransform();
SoTransform637->setTranslation(new float[]{-0.0002,-0.1169,1.2368});
SoShape* SoShape638 = new SoShape();
SoShape638->setUSE(QString("JointShape"));
SoTransform637->addChild(*SoShape638);

SoHAnimSegment635->addChild(*SoTransform637);

SoHAnimSite* SoHAnimSite639 = new SoHAnimSite();
SoHAnimSite639->X3DNode::setName(QString("SEGMENT_FOR_c7_tip"));
SoHAnimSite639->setDEF(QString("hanim_SEGMENT_FOR_c7_tip"));
SoTransform* SoTransform640 = new SoTransform();
SoTransform640->setTranslation(new float[]{-0.0002,-0.1169,1.2368});
SoShape* SoShape641 = new SoShape();
SoShape641->setUSE(QString("SiteShape"));
SoTransform640->addChild(*SoShape641);

SoHAnimSite639->addChild(*SoTransform640);

SoHAnimSegment635->addChild(*SoHAnimSite639);

SoHAnimJoint634->addChildren(*SoHAnimSegment635);

SoHAnimJoint* SoHAnimJoint642 = new SoHAnimJoint();
SoHAnimJoint642->X3DNode::setName(QString("c6"));
SoHAnimJoint642->setDEF(QString("hanim_c6"));
SoHAnimJoint642->setCenter(new float[]{-0.0002,-0.1169,1.249});
SoHAnimJoint642->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint642->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment643 = new SoHAnimSegment();
SoHAnimSegment643->X3DNode::setName(QString("SEGMENT_FOR_c6"));
SoHAnimSegment643->setDEF(QString("hanim_SEGMENT_FOR_c6"));
SoTouchSensor* SoTouchSensor644 = new SoTouchSensor();
SoTouchSensor644->setDescription(QString("joint c6 segment SEGMENT_FOR_c6"));
SoHAnimSegment643->addChild(*SoTouchSensor644);

SoTransform* SoTransform645 = new SoTransform();
SoTransform645->setTranslation(new float[]{-0.0002,-0.1169,1.249});
SoShape* SoShape646 = new SoShape();
SoShape646->setUSE(QString("JointShape"));
SoTransform645->addChild(*SoShape646);

SoHAnimSegment643->addChild(*SoTransform645);

SoHAnimSite* SoHAnimSite647 = new SoHAnimSite();
SoHAnimSite647->X3DNode::setName(QString("SEGMENT_FOR_c6_tip"));
SoHAnimSite647->setDEF(QString("hanim_SEGMENT_FOR_c6_tip"));
SoTransform* SoTransform648 = new SoTransform();
SoTransform648->setTranslation(new float[]{-0.0002,-0.1169,1.249});
SoShape* SoShape649 = new SoShape();
SoShape649->setUSE(QString("SiteShape"));
SoTransform648->addChild(*SoShape649);

SoHAnimSite647->addChild(*SoTransform648);

SoHAnimSegment643->addChild(*SoHAnimSite647);

SoHAnimJoint642->addChildren(*SoHAnimSegment643);

SoHAnimJoint* SoHAnimJoint650 = new SoHAnimJoint();
SoHAnimJoint650->X3DNode::setName(QString("c5"));
SoHAnimJoint650->setDEF(QString("hanim_c5"));
SoHAnimJoint650->setCenter(new float[]{-0.0002,-0.1169,1.2613});
SoHAnimJoint650->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint650->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment651 = new SoHAnimSegment();
SoHAnimSegment651->X3DNode::setName(QString("SEGMENT_FOR_c5"));
SoHAnimSegment651->setDEF(QString("hanim_SEGMENT_FOR_c5"));
SoTouchSensor* SoTouchSensor652 = new SoTouchSensor();
SoTouchSensor652->setDescription(QString("joint c5 segment SEGMENT_FOR_c5"));
SoHAnimSegment651->addChild(*SoTouchSensor652);

SoTransform* SoTransform653 = new SoTransform();
SoTransform653->setTranslation(new float[]{-0.0002,-0.1169,1.2613});
SoShape* SoShape654 = new SoShape();
SoShape654->setUSE(QString("JointShape"));
SoTransform653->addChild(*SoShape654);

SoHAnimSegment651->addChild(*SoTransform653);

SoHAnimSite* SoHAnimSite655 = new SoHAnimSite();
SoHAnimSite655->X3DNode::setName(QString("SEGMENT_FOR_c5_tip"));
SoHAnimSite655->setDEF(QString("hanim_SEGMENT_FOR_c5_tip"));
SoTransform* SoTransform656 = new SoTransform();
SoTransform656->setTranslation(new float[]{-0.0002,-0.1169,1.2613});
SoShape* SoShape657 = new SoShape();
SoShape657->setUSE(QString("SiteShape"));
SoTransform656->addChild(*SoShape657);

SoHAnimSite655->addChild(*SoTransform656);

SoHAnimSegment651->addChild(*SoHAnimSite655);

SoHAnimJoint650->addChildren(*SoHAnimSegment651);

SoHAnimJoint* SoHAnimJoint658 = new SoHAnimJoint();
SoHAnimJoint658->X3DNode::setName(QString("c4"));
SoHAnimJoint658->setDEF(QString("hanim_c4"));
SoHAnimJoint658->setCenter(new float[]{-0.0002,-0.1169,1.2737});
SoHAnimJoint658->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint658->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment659 = new SoHAnimSegment();
SoHAnimSegment659->X3DNode::setName(QString("SEGMENT_FOR_c4"));
SoHAnimSegment659->setDEF(QString("hanim_SEGMENT_FOR_c4"));
SoTouchSensor* SoTouchSensor660 = new SoTouchSensor();
SoTouchSensor660->setDescription(QString("joint c4 segment SEGMENT_FOR_c4"));
SoHAnimSegment659->addChild(*SoTouchSensor660);

SoTransform* SoTransform661 = new SoTransform();
SoTransform661->setTranslation(new float[]{-0.0002,-0.1169,1.2737});
SoShape* SoShape662 = new SoShape();
SoShape662->setUSE(QString("JointShape"));
SoTransform661->addChild(*SoShape662);

SoHAnimSegment659->addChild(*SoTransform661);

SoHAnimSite* SoHAnimSite663 = new SoHAnimSite();
SoHAnimSite663->X3DNode::setName(QString("SEGMENT_FOR_c4_tip"));
SoHAnimSite663->setDEF(QString("hanim_SEGMENT_FOR_c4_tip"));
SoTransform* SoTransform664 = new SoTransform();
SoTransform664->setTranslation(new float[]{-0.0002,-0.1169,1.2737});
SoShape* SoShape665 = new SoShape();
SoShape665->setUSE(QString("SiteShape"));
SoTransform664->addChild(*SoShape665);

SoHAnimSite663->addChild(*SoTransform664);

SoHAnimSegment659->addChild(*SoHAnimSite663);

SoHAnimJoint658->addChildren(*SoHAnimSegment659);

SoHAnimJoint* SoHAnimJoint666 = new SoHAnimJoint();
SoHAnimJoint666->X3DNode::setName(QString("c3"));
SoHAnimJoint666->setDEF(QString("hanim_c3"));
SoHAnimJoint666->setCenter(new float[]{-0.0002,-0.1169,1.2865});
SoHAnimJoint666->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint666->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment667 = new SoHAnimSegment();
SoHAnimSegment667->X3DNode::setName(QString("SEGMENT_FOR_c3"));
SoHAnimSegment667->setDEF(QString("hanim_SEGMENT_FOR_c3"));
SoTouchSensor* SoTouchSensor668 = new SoTouchSensor();
SoTouchSensor668->setDescription(QString("joint c3 segment SEGMENT_FOR_c3"));
SoHAnimSegment667->addChild(*SoTouchSensor668);

SoTransform* SoTransform669 = new SoTransform();
SoTransform669->setTranslation(new float[]{-0.0002,-0.1169,1.2865});
SoShape* SoShape670 = new SoShape();
SoShape670->setUSE(QString("JointShape"));
SoTransform669->addChild(*SoShape670);

SoHAnimSegment667->addChild(*SoTransform669);

SoHAnimSite* SoHAnimSite671 = new SoHAnimSite();
SoHAnimSite671->X3DNode::setName(QString("SEGMENT_FOR_c3_tip"));
SoHAnimSite671->setDEF(QString("hanim_SEGMENT_FOR_c3_tip"));
SoTransform* SoTransform672 = new SoTransform();
SoTransform672->setTranslation(new float[]{-0.0002,-0.1169,1.2865});
SoShape* SoShape673 = new SoShape();
SoShape673->setUSE(QString("SiteShape"));
SoTransform672->addChild(*SoShape673);

SoHAnimSite671->addChild(*SoTransform672);

SoHAnimSegment667->addChild(*SoHAnimSite671);

SoHAnimJoint666->addChildren(*SoHAnimSegment667);

SoHAnimJoint* SoHAnimJoint674 = new SoHAnimJoint();
SoHAnimJoint674->X3DNode::setName(QString("c2"));
SoHAnimJoint674->setDEF(QString("hanim_c2"));
SoHAnimJoint674->setCenter(new float[]{-0.0002,-0.1169,1.2982});
SoHAnimJoint674->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint674->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment675 = new SoHAnimSegment();
SoHAnimSegment675->X3DNode::setName(QString("SEGMENT_FOR_c2"));
SoHAnimSegment675->setDEF(QString("hanim_SEGMENT_FOR_c2"));
SoTouchSensor* SoTouchSensor676 = new SoTouchSensor();
SoTouchSensor676->setDescription(QString("joint c2 segment SEGMENT_FOR_c2"));
SoHAnimSegment675->addChild(*SoTouchSensor676);

SoTransform* SoTransform677 = new SoTransform();
SoTransform677->setTranslation(new float[]{-0.0002,-0.1169,1.2982});
SoShape* SoShape678 = new SoShape();
SoShape678->setUSE(QString("JointShape"));
SoTransform677->addChild(*SoShape678);

SoHAnimSegment675->addChild(*SoTransform677);

SoHAnimSite* SoHAnimSite679 = new SoHAnimSite();
SoHAnimSite679->X3DNode::setName(QString("SEGMENT_FOR_c2_tip"));
SoHAnimSite679->setDEF(QString("hanim_SEGMENT_FOR_c2_tip"));
SoTransform* SoTransform680 = new SoTransform();
SoTransform680->setTranslation(new float[]{-0.0002,-0.1169,1.2982});
SoShape* SoShape681 = new SoShape();
SoShape681->setUSE(QString("SiteShape"));
SoTransform680->addChild(*SoShape681);

SoHAnimSite679->addChild(*SoTransform680);

SoHAnimSegment675->addChild(*SoHAnimSite679);

SoHAnimJoint674->addChildren(*SoHAnimSegment675);

SoHAnimJoint* SoHAnimJoint682 = new SoHAnimJoint();
SoHAnimJoint682->X3DNode::setName(QString("c1"));
SoHAnimJoint682->setDEF(QString("hanim_c1"));
SoHAnimJoint682->setCenter(new float[]{-0.0002,-0.1169,1.3099});
SoHAnimJoint682->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint682->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment683 = new SoHAnimSegment();
SoHAnimSegment683->X3DNode::setName(QString("SEGMENT_FOR_c1"));
SoHAnimSegment683->setDEF(QString("hanim_SEGMENT_FOR_c1"));
SoTouchSensor* SoTouchSensor684 = new SoTouchSensor();
SoTouchSensor684->setDescription(QString("joint c1 segment SEGMENT_FOR_c1"));
SoHAnimSegment683->addChild(*SoTouchSensor684);

SoTransform* SoTransform685 = new SoTransform();
SoTransform685->setTranslation(new float[]{-0.0002,-0.1169,1.3099});
SoShape* SoShape686 = new SoShape();
SoShape686->setUSE(QString("JointShape"));
SoTransform685->addChild(*SoShape686);

SoHAnimSegment683->addChild(*SoTransform685);

SoHAnimSite* SoHAnimSite687 = new SoHAnimSite();
SoHAnimSite687->X3DNode::setName(QString("SEGMENT_FOR_c1_tip"));
SoHAnimSite687->setDEF(QString("hanim_SEGMENT_FOR_c1_tip"));
SoTransform* SoTransform688 = new SoTransform();
SoTransform688->setTranslation(new float[]{-0.0002,-0.1169,1.3099});
SoShape* SoShape689 = new SoShape();
SoShape689->setUSE(QString("SiteShape"));
SoTransform688->addChild(*SoShape689);

SoHAnimSite687->addChild(*SoTransform688);

SoHAnimSegment683->addChild(*SoHAnimSite687);

SoHAnimJoint682->addChildren(*SoHAnimSegment683);

SoHAnimJoint* SoHAnimJoint690 = new SoHAnimJoint();
SoHAnimJoint690->X3DNode::setName(QString("skull"));
SoHAnimJoint690->setDEF(QString("hanim_skull"));
SoHAnimJoint690->setCenter(new float[]{-0.0002,-0.1173,1.3041});
SoHAnimJoint690->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint690->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment691 = new SoHAnimSegment();
SoHAnimSegment691->X3DNode::setName(QString("SEGMENT_FOR_skull"));
SoHAnimSegment691->setDEF(QString("hanim_SEGMENT_FOR_skull"));
SoTouchSensor* SoTouchSensor692 = new SoTouchSensor();
SoTouchSensor692->setDescription(QString("joint skull segment SEGMENT_FOR_skull"));
SoHAnimSegment691->addChild(*SoTouchSensor692);

SoTransform* SoTransform693 = new SoTransform();
SoTransform693->setTranslation(new float[]{-0.0002,-0.1173,1.3041});
SoShape* SoShape694 = new SoShape();
SoShape694->setUSE(QString("JointShape"));
SoTransform693->addChild(*SoShape694);

SoHAnimSegment691->addChild(*SoTransform693);

SoHAnimSite* SoHAnimSite695 = new SoHAnimSite();
SoHAnimSite695->X3DNode::setName(QString("SEGMENT_FOR_skull_tip"));
SoHAnimSite695->setDEF(QString("hanim_SEGMENT_FOR_skull_tip"));
SoTransform* SoTransform696 = new SoTransform();
SoTransform696->setTranslation(new float[]{-0.0002,-0.1173,1.3041});
SoShape* SoShape697 = new SoShape();
SoShape697->setUSE(QString("SiteShape"));
SoTransform696->addChild(*SoShape697);

SoHAnimSite695->addChild(*SoTransform696);

SoHAnimSegment691->addChild(*SoHAnimSite695);

SoHAnimJoint690->addChildren(*SoHAnimSegment691);

SoHAnimJoint* SoHAnimJoint698 = new SoHAnimJoint();
SoHAnimJoint698->X3DNode::setName(QString("l_eyelid"));
SoHAnimJoint698->setDEF(QString("hanim_l_eyelid"));
SoHAnimJoint698->setCenter(new float[]{0.0503,-0.0689,1.4157});
SoHAnimJoint698->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint698->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment699 = new SoHAnimSegment();
SoHAnimSegment699->X3DNode::setName(QString("SEGMENT_FOR_l_eyelid"));
SoHAnimSegment699->setDEF(QString("hanim_SEGMENT_FOR_l_eyelid"));
SoTouchSensor* SoTouchSensor700 = new SoTouchSensor();
SoTouchSensor700->setDescription(QString("joint l_eyelid segment SEGMENT_FOR_l_eyelid"));
SoHAnimSegment699->addChild(*SoTouchSensor700);

SoTransform* SoTransform701 = new SoTransform();
SoTransform701->setTranslation(new float[]{0.0503,-0.0689,1.4157});
SoShape* SoShape702 = new SoShape();
SoShape702->setUSE(QString("JointShape"));
SoTransform701->addChild(*SoShape702);

SoHAnimSegment699->addChild(*SoTransform701);

SoHAnimSite* SoHAnimSite703 = new SoHAnimSite();
SoHAnimSite703->X3DNode::setName(QString("SEGMENT_FOR_l_eyelid_tip"));
SoHAnimSite703->setDEF(QString("hanim_SEGMENT_FOR_l_eyelid_tip"));
SoTransform* SoTransform704 = new SoTransform();
SoTransform704->setTranslation(new float[]{0.0503,-0.0689,1.4157});
SoShape* SoShape705 = new SoShape();
SoShape705->setUSE(QString("SiteShape"));
SoTransform704->addChild(*SoShape705);

SoHAnimSite703->addChild(*SoTransform704);

SoHAnimSegment699->addChild(*SoHAnimSite703);

SoHAnimJoint698->addChildren(*SoHAnimSegment699);

SoHAnimJoint690->addChildren(*SoHAnimJoint698);

SoHAnimJoint* SoHAnimJoint706 = new SoHAnimJoint();
SoHAnimJoint706->X3DNode::setName(QString("r_eyelid"));
SoHAnimJoint706->setDEF(QString("hanim_r_eyelid"));
SoHAnimJoint706->setCenter(new float[]{-0.0507,-0.0689,1.4157});
SoHAnimJoint706->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint706->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment707 = new SoHAnimSegment();
SoHAnimSegment707->X3DNode::setName(QString("SEGMENT_FOR_r_eyelid"));
SoHAnimSegment707->setDEF(QString("hanim_SEGMENT_FOR_r_eyelid"));
SoTouchSensor* SoTouchSensor708 = new SoTouchSensor();
SoTouchSensor708->setDescription(QString("joint r_eyelid segment SEGMENT_FOR_r_eyelid"));
SoHAnimSegment707->addChild(*SoTouchSensor708);

SoTransform* SoTransform709 = new SoTransform();
SoTransform709->setTranslation(new float[]{-0.0507,-0.0689,1.4157});
SoShape* SoShape710 = new SoShape();
SoShape710->setUSE(QString("JointShape"));
SoTransform709->addChild(*SoShape710);

SoHAnimSegment707->addChild(*SoTransform709);

SoHAnimSite* SoHAnimSite711 = new SoHAnimSite();
SoHAnimSite711->X3DNode::setName(QString("SEGMENT_FOR_r_eyelid_tip"));
SoHAnimSite711->setDEF(QString("hanim_SEGMENT_FOR_r_eyelid_tip"));
SoTransform* SoTransform712 = new SoTransform();
SoTransform712->setTranslation(new float[]{-0.0507,-0.0689,1.4157});
SoShape* SoShape713 = new SoShape();
SoShape713->setUSE(QString("SiteShape"));
SoTransform712->addChild(*SoShape713);

SoHAnimSite711->addChild(*SoTransform712);

SoHAnimSegment707->addChild(*SoHAnimSite711);

SoHAnimJoint706->addChildren(*SoHAnimSegment707);

SoHAnimJoint690->addChildren(*SoHAnimJoint706);

SoHAnimJoint* SoHAnimJoint714 = new SoHAnimJoint();
SoHAnimJoint714->X3DNode::setName(QString("l_eyeball"));
SoHAnimJoint714->setDEF(QString("hanim_l_eyeball"));
SoHAnimJoint714->setCenter(new float[]{0.0479,-0.0188,1.3963});
SoHAnimJoint714->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint714->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment715 = new SoHAnimSegment();
SoHAnimSegment715->X3DNode::setName(QString("SEGMENT_FOR_l_eyeball"));
SoHAnimSegment715->setDEF(QString("hanim_SEGMENT_FOR_l_eyeball"));
SoTouchSensor* SoTouchSensor716 = new SoTouchSensor();
SoTouchSensor716->setDescription(QString("joint l_eyeball segment SEGMENT_FOR_l_eyeball"));
SoHAnimSegment715->addChild(*SoTouchSensor716);

SoTransform* SoTransform717 = new SoTransform();
SoTransform717->setTranslation(new float[]{0.0479,-0.0188,1.3963});
SoShape* SoShape718 = new SoShape();
SoShape718->setUSE(QString("JointShape"));
SoTransform717->addChild(*SoShape718);

SoHAnimSegment715->addChild(*SoTransform717);

SoHAnimSite* SoHAnimSite719 = new SoHAnimSite();
SoHAnimSite719->X3DNode::setName(QString("SEGMENT_FOR_l_eyeball_tip"));
SoHAnimSite719->setDEF(QString("hanim_SEGMENT_FOR_l_eyeball_tip"));
SoTransform* SoTransform720 = new SoTransform();
SoTransform720->setTranslation(new float[]{0.0479,-0.0188,1.3963});
SoShape* SoShape721 = new SoShape();
SoShape721->setUSE(QString("SiteShape"));
SoTransform720->addChild(*SoShape721);

SoHAnimSite719->addChild(*SoTransform720);

SoHAnimSegment715->addChild(*SoHAnimSite719);

SoHAnimJoint714->addChildren(*SoHAnimSegment715);

SoHAnimJoint690->addChildren(*SoHAnimJoint714);

SoHAnimJoint* SoHAnimJoint722 = new SoHAnimJoint();
SoHAnimJoint722->X3DNode::setName(QString("r_eyeball"));
SoHAnimJoint722->setDEF(QString("hanim_r_eyeball"));
SoHAnimJoint722->setCenter(new float[]{-0.0483,-0.0188,1.3963});
SoHAnimJoint722->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint722->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment723 = new SoHAnimSegment();
SoHAnimSegment723->X3DNode::setName(QString("SEGMENT_FOR_r_eyeball"));
SoHAnimSegment723->setDEF(QString("hanim_SEGMENT_FOR_r_eyeball"));
SoTouchSensor* SoTouchSensor724 = new SoTouchSensor();
SoTouchSensor724->setDescription(QString("joint r_eyeball segment SEGMENT_FOR_r_eyeball"));
SoHAnimSegment723->addChild(*SoTouchSensor724);

SoTransform* SoTransform725 = new SoTransform();
SoTransform725->setTranslation(new float[]{-0.0483,-0.0188,1.3963});
SoShape* SoShape726 = new SoShape();
SoShape726->setUSE(QString("JointShape"));
SoTransform725->addChild(*SoShape726);

SoHAnimSegment723->addChild(*SoTransform725);

SoHAnimSite* SoHAnimSite727 = new SoHAnimSite();
SoHAnimSite727->X3DNode::setName(QString("SEGMENT_FOR_r_eyeball_tip"));
SoHAnimSite727->setDEF(QString("hanim_SEGMENT_FOR_r_eyeball_tip"));
SoTransform* SoTransform728 = new SoTransform();
SoTransform728->setTranslation(new float[]{-0.0483,-0.0188,1.3963});
SoShape* SoShape729 = new SoShape();
SoShape729->setUSE(QString("SiteShape"));
SoTransform728->addChild(*SoShape729);

SoHAnimSite727->addChild(*SoTransform728);

SoHAnimSegment723->addChild(*SoHAnimSite727);

SoHAnimJoint722->addChildren(*SoHAnimSegment723);

SoHAnimJoint690->addChildren(*SoHAnimJoint722);

SoHAnimJoint* SoHAnimJoint730 = new SoHAnimJoint();
SoHAnimJoint730->X3DNode::setName(QString("l_eyebrow"));
SoHAnimJoint730->setDEF(QString("hanim_l_eyebrow"));
SoHAnimJoint730->setCenter(new float[]{0.0216,0.0051,1.4053});
SoHAnimJoint730->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint730->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment731 = new SoHAnimSegment();
SoHAnimSegment731->X3DNode::setName(QString("SEGMENT_FOR_l_eyebrow"));
SoHAnimSegment731->setDEF(QString("hanim_SEGMENT_FOR_l_eyebrow"));
SoTouchSensor* SoTouchSensor732 = new SoTouchSensor();
SoTouchSensor732->setDescription(QString("joint l_eyebrow segment SEGMENT_FOR_l_eyebrow"));
SoHAnimSegment731->addChild(*SoTouchSensor732);

SoTransform* SoTransform733 = new SoTransform();
SoTransform733->setTranslation(new float[]{0.0216,0.0051,1.4053});
SoShape* SoShape734 = new SoShape();
SoShape734->setUSE(QString("JointShape"));
SoTransform733->addChild(*SoShape734);

SoHAnimSegment731->addChild(*SoTransform733);

SoHAnimSite* SoHAnimSite735 = new SoHAnimSite();
SoHAnimSite735->X3DNode::setName(QString("SEGMENT_FOR_l_eyebrow_tip"));
SoHAnimSite735->setDEF(QString("hanim_SEGMENT_FOR_l_eyebrow_tip"));
SoTransform* SoTransform736 = new SoTransform();
SoTransform736->setTranslation(new float[]{0.0216,0.0051,1.4053});
SoShape* SoShape737 = new SoShape();
SoShape737->setUSE(QString("SiteShape"));
SoTransform736->addChild(*SoShape737);

SoHAnimSite735->addChild(*SoTransform736);

SoHAnimSegment731->addChild(*SoHAnimSite735);

SoHAnimJoint730->addChildren(*SoHAnimSegment731);

SoHAnimJoint690->addChildren(*SoHAnimJoint730);

SoHAnimJoint* SoHAnimJoint738 = new SoHAnimJoint();
SoHAnimJoint738->X3DNode::setName(QString("r_eyebrow"));
SoHAnimJoint738->setDEF(QString("hanim_r_eyebrow"));
SoHAnimJoint738->setCenter(new float[]{-0.0219,0.0051,1.4053});
SoHAnimJoint738->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint738->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment739 = new SoHAnimSegment();
SoHAnimSegment739->X3DNode::setName(QString("SEGMENT_FOR_r_eyebrow"));
SoHAnimSegment739->setDEF(QString("hanim_SEGMENT_FOR_r_eyebrow"));
SoTouchSensor* SoTouchSensor740 = new SoTouchSensor();
SoTouchSensor740->setDescription(QString("joint r_eyebrow segment SEGMENT_FOR_r_eyebrow"));
SoHAnimSegment739->addChild(*SoTouchSensor740);

SoTransform* SoTransform741 = new SoTransform();
SoTransform741->setTranslation(new float[]{-0.0219,0.0051,1.4053});
SoShape* SoShape742 = new SoShape();
SoShape742->setUSE(QString("JointShape"));
SoTransform741->addChild(*SoShape742);

SoHAnimSegment739->addChild(*SoTransform741);

SoHAnimSite* SoHAnimSite743 = new SoHAnimSite();
SoHAnimSite743->X3DNode::setName(QString("SEGMENT_FOR_r_eyebrow_tip"));
SoHAnimSite743->setDEF(QString("hanim_SEGMENT_FOR_r_eyebrow_tip"));
SoTransform* SoTransform744 = new SoTransform();
SoTransform744->setTranslation(new float[]{-0.0219,0.0051,1.4053});
SoShape* SoShape745 = new SoShape();
SoShape745->setUSE(QString("SiteShape"));
SoTransform744->addChild(*SoShape745);

SoHAnimSite743->addChild(*SoTransform744);

SoHAnimSegment739->addChild(*SoHAnimSite743);

SoHAnimJoint738->addChildren(*SoHAnimSegment739);

SoHAnimJoint690->addChildren(*SoHAnimJoint738);

SoHAnimJoint* SoHAnimJoint746 = new SoHAnimJoint();
SoHAnimJoint746->X3DNode::setName(QString("jaw"));
SoHAnimJoint746->setDEF(QString("hanim_jaw"));
SoHAnimJoint746->setCenter(new float[]{-0.0002,-0.0865,1.3043});
SoHAnimJoint746->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint746->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment747 = new SoHAnimSegment();
SoHAnimSegment747->X3DNode::setName(QString("SEGMENT_FOR_jaw"));
SoHAnimSegment747->setDEF(QString("hanim_SEGMENT_FOR_jaw"));
SoTouchSensor* SoTouchSensor748 = new SoTouchSensor();
SoTouchSensor748->setDescription(QString("joint jaw segment SEGMENT_FOR_jaw"));
SoHAnimSegment747->addChild(*SoTouchSensor748);

SoTransform* SoTransform749 = new SoTransform();
SoTransform749->setTranslation(new float[]{-0.0002,-0.0865,1.3043});
SoShape* SoShape750 = new SoShape();
SoShape750->setUSE(QString("JointShape"));
SoTransform749->addChild(*SoShape750);

SoHAnimSegment747->addChild(*SoTransform749);

SoHAnimSite* SoHAnimSite751 = new SoHAnimSite();
SoHAnimSite751->X3DNode::setName(QString("SEGMENT_FOR_jaw_tip"));
SoHAnimSite751->setDEF(QString("hanim_SEGMENT_FOR_jaw_tip"));
SoTransform* SoTransform752 = new SoTransform();
SoTransform752->setTranslation(new float[]{-0.0002,-0.0865,1.3043});
SoShape* SoShape753 = new SoShape();
SoShape753->setUSE(QString("SiteShape"));
SoTransform752->addChild(*SoShape753);

SoHAnimSite751->addChild(*SoTransform752);

SoHAnimSegment747->addChild(*SoHAnimSite751);

SoHAnimJoint746->addChildren(*SoHAnimSegment747);

SoHAnimJoint690->addChildren(*SoHAnimJoint746);

SoHAnimJoint682->addChildren(*SoHAnimJoint690);

SoHAnimJoint674->addChildren(*SoHAnimJoint682);

SoHAnimJoint666->addChildren(*SoHAnimJoint674);

SoHAnimJoint658->addChildren(*SoHAnimJoint666);

SoHAnimJoint650->addChildren(*SoHAnimJoint658);

SoHAnimJoint642->addChildren(*SoHAnimJoint650);

SoHAnimJoint634->addChildren(*SoHAnimJoint642);

SoHAnimJoint626->addChildren(*SoHAnimJoint634);

SoHAnimJoint* SoHAnimJoint754 = new SoHAnimJoint();
SoHAnimJoint754->X3DNode::setName(QString("l_clavicle"));
SoHAnimJoint754->setDEF(QString("hanim_l_clavicle"));
SoHAnimJoint754->setCenter(new float[]{0.1228,-0.1148,1.1833});
SoHAnimJoint754->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint754->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment755 = new SoHAnimSegment();
SoHAnimSegment755->X3DNode::setName(QString("SEGMENT_FOR_l_clavicle"));
SoHAnimSegment755->setDEF(QString("hanim_SEGMENT_FOR_l_clavicle"));
SoTouchSensor* SoTouchSensor756 = new SoTouchSensor();
SoTouchSensor756->setDescription(QString("joint l_clavicle segment SEGMENT_FOR_l_clavicle"));
SoHAnimSegment755->addChild(*SoTouchSensor756);

SoTransform* SoTransform757 = new SoTransform();
SoTransform757->setTranslation(new float[]{0.1228,-0.1148,1.1833});
SoShape* SoShape758 = new SoShape();
SoShape758->setUSE(QString("JointShape"));
SoTransform757->addChild(*SoShape758);

SoHAnimSegment755->addChild(*SoTransform757);

SoHAnimSite* SoHAnimSite759 = new SoHAnimSite();
SoHAnimSite759->X3DNode::setName(QString("SEGMENT_FOR_l_clavicle_tip"));
SoHAnimSite759->setDEF(QString("hanim_SEGMENT_FOR_l_clavicle_tip"));
SoTransform* SoTransform760 = new SoTransform();
SoTransform760->setTranslation(new float[]{0.1228,-0.1148,1.1833});
SoShape* SoShape761 = new SoShape();
SoShape761->setUSE(QString("SiteShape"));
SoTransform760->addChild(*SoShape761);

SoHAnimSite759->addChild(*SoTransform760);

SoHAnimSegment755->addChild(*SoHAnimSite759);

SoHAnimJoint754->addChildren(*SoHAnimSegment755);

SoHAnimJoint* SoHAnimJoint762 = new SoHAnimJoint();
SoHAnimJoint762->X3DNode::setName(QString("l_scapula"));
SoHAnimJoint762->setDEF(QString("hanim_l_scapula"));
SoHAnimJoint762->setCenter(new float[]{0.0383,-0.1157,1.2001});
SoHAnimJoint762->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint762->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment763 = new SoHAnimSegment();
SoHAnimSegment763->X3DNode::setName(QString("SEGMENT_FOR_l_scapula"));
SoHAnimSegment763->setDEF(QString("hanim_SEGMENT_FOR_l_scapula"));
SoTouchSensor* SoTouchSensor764 = new SoTouchSensor();
SoTouchSensor764->setDescription(QString("joint l_scapula segment SEGMENT_FOR_l_scapula"));
SoHAnimSegment763->addChild(*SoTouchSensor764);

SoTransform* SoTransform765 = new SoTransform();
SoTransform765->setTranslation(new float[]{0.0383,-0.1157,1.2001});
SoShape* SoShape766 = new SoShape();
SoShape766->setUSE(QString("JointShape"));
SoTransform765->addChild(*SoShape766);

SoHAnimSegment763->addChild(*SoTransform765);

SoHAnimSite* SoHAnimSite767 = new SoHAnimSite();
SoHAnimSite767->X3DNode::setName(QString("SEGMENT_FOR_l_scapula_tip"));
SoHAnimSite767->setDEF(QString("hanim_SEGMENT_FOR_l_scapula_tip"));
SoTransform* SoTransform768 = new SoTransform();
SoTransform768->setTranslation(new float[]{0.0383,-0.1157,1.2001});
SoShape* SoShape769 = new SoShape();
SoShape769->setUSE(QString("SiteShape"));
SoTransform768->addChild(*SoShape769);

SoHAnimSite767->addChild(*SoTransform768);

SoHAnimSegment763->addChild(*SoHAnimSite767);

SoHAnimJoint762->addChildren(*SoHAnimSegment763);

SoHAnimJoint* SoHAnimJoint770 = new SoHAnimJoint();
SoHAnimJoint770->X3DNode::setName(QString("l_upperarm"));
SoHAnimJoint770->setDEF(QString("hanim_l_upperarm"));
SoHAnimJoint770->setCenter(new float[]{0.1649,-0.1051,1.17});
SoHAnimJoint770->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint770->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment771 = new SoHAnimSegment();
SoHAnimSegment771->X3DNode::setName(QString("SEGMENT_FOR_l_upperarm"));
SoHAnimSegment771->setDEF(QString("hanim_SEGMENT_FOR_l_upperarm"));
SoTouchSensor* SoTouchSensor772 = new SoTouchSensor();
SoTouchSensor772->setDescription(QString("joint l_upperarm segment SEGMENT_FOR_l_upperarm"));
SoHAnimSegment771->addChild(*SoTouchSensor772);

SoTransform* SoTransform773 = new SoTransform();
SoTransform773->setTranslation(new float[]{0.1649,-0.1051,1.17});
SoShape* SoShape774 = new SoShape();
SoShape774->setUSE(QString("JointShape"));
SoTransform773->addChild(*SoShape774);

SoHAnimSegment771->addChild(*SoTransform773);

SoHAnimSite* SoHAnimSite775 = new SoHAnimSite();
SoHAnimSite775->X3DNode::setName(QString("SEGMENT_FOR_l_upperarm_tip"));
SoHAnimSite775->setDEF(QString("hanim_SEGMENT_FOR_l_upperarm_tip"));
SoTransform* SoTransform776 = new SoTransform();
SoTransform776->setTranslation(new float[]{0.1649,-0.1051,1.17});
SoShape* SoShape777 = new SoShape();
SoShape777->setUSE(QString("SiteShape"));
SoTransform776->addChild(*SoShape777);

SoHAnimSite775->addChild(*SoTransform776);

SoHAnimSegment771->addChild(*SoHAnimSite775);

SoHAnimJoint770->addChildren(*SoHAnimSegment771);

SoHAnimJoint* SoHAnimJoint778 = new SoHAnimJoint();
SoHAnimJoint778->X3DNode::setName(QString("l_forearm"));
SoHAnimJoint778->setDEF(QString("hanim_l_forearm"));
SoHAnimJoint778->setCenter(new float[]{0.1819,-0.1075,0.9202});
SoHAnimJoint778->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint778->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment779 = new SoHAnimSegment();
SoHAnimSegment779->X3DNode::setName(QString("SEGMENT_FOR_l_forearm"));
SoHAnimSegment779->setDEF(QString("hanim_SEGMENT_FOR_l_forearm"));
SoTouchSensor* SoTouchSensor780 = new SoTouchSensor();
SoTouchSensor780->setDescription(QString("joint l_forearm segment SEGMENT_FOR_l_forearm"));
SoHAnimSegment779->addChild(*SoTouchSensor780);

SoTransform* SoTransform781 = new SoTransform();
SoTransform781->setTranslation(new float[]{0.1819,-0.1075,0.9202});
SoShape* SoShape782 = new SoShape();
SoShape782->setUSE(QString("JointShape"));
SoTransform781->addChild(*SoShape782);

SoHAnimSegment779->addChild(*SoTransform781);

SoHAnimSite* SoHAnimSite783 = new SoHAnimSite();
SoHAnimSite783->X3DNode::setName(QString("SEGMENT_FOR_l_forearm_tip"));
SoHAnimSite783->setDEF(QString("hanim_SEGMENT_FOR_l_forearm_tip"));
SoTransform* SoTransform784 = new SoTransform();
SoTransform784->setTranslation(new float[]{0.1819,-0.1075,0.9202});
SoShape* SoShape785 = new SoShape();
SoShape785->setUSE(QString("SiteShape"));
SoTransform784->addChild(*SoShape785);

SoHAnimSite783->addChild(*SoTransform784);

SoHAnimSegment779->addChild(*SoHAnimSite783);

SoHAnimJoint778->addChildren(*SoHAnimSegment779);

SoHAnimJoint* SoHAnimJoint786 = new SoHAnimJoint();
SoHAnimJoint786->X3DNode::setName(QString("l_carpal"));
SoHAnimJoint786->setDEF(QString("hanim_l_carpal"));
SoHAnimJoint786->setCenter(new float[]{0.1818,-0.1069,0.7157});
SoHAnimJoint786->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint786->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment787 = new SoHAnimSegment();
SoHAnimSegment787->X3DNode::setName(QString("SEGMENT_FOR_l_carpal"));
SoHAnimSegment787->setDEF(QString("hanim_SEGMENT_FOR_l_carpal"));
SoTouchSensor* SoTouchSensor788 = new SoTouchSensor();
SoTouchSensor788->setDescription(QString("joint l_carpal segment SEGMENT_FOR_l_carpal"));
SoHAnimSegment787->addChild(*SoTouchSensor788);

SoTransform* SoTransform789 = new SoTransform();
SoTransform789->setTranslation(new float[]{0.1818,-0.1069,0.7157});
SoShape* SoShape790 = new SoShape();
SoShape790->setUSE(QString("JointShape"));
SoTransform789->addChild(*SoShape790);

SoHAnimSegment787->addChild(*SoTransform789);

SoHAnimSite* SoHAnimSite791 = new SoHAnimSite();
SoHAnimSite791->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_tip"));
SoHAnimSite791->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_tip"));
SoTransform* SoTransform792 = new SoTransform();
SoTransform792->setTranslation(new float[]{0.1818,-0.1069,0.7157});
SoShape* SoShape793 = new SoShape();
SoShape793->setUSE(QString("SiteShape"));
SoTransform792->addChild(*SoShape793);

SoHAnimSite791->addChild(*SoTransform792);

SoHAnimSegment787->addChild(*SoHAnimSite791);

SoHAnimJoint786->addChildren(*SoHAnimSegment787);

SoHAnimJoint* SoHAnimJoint794 = new SoHAnimJoint();
SoHAnimJoint794->X3DNode::setName(QString("l_trapezium"));
SoHAnimJoint794->setDEF(QString("hanim_l_trapezium"));
SoHAnimJoint794->setCenter(new float[]{0.1811,-0.0826,0.6975});
SoHAnimJoint794->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint794->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment795 = new SoHAnimSegment();
SoHAnimSegment795->X3DNode::setName(QString("SEGMENT_FOR_l_trapezium"));
SoHAnimSegment795->setDEF(QString("hanim_SEGMENT_FOR_l_trapezium"));
SoTouchSensor* SoTouchSensor796 = new SoTouchSensor();
SoTouchSensor796->setDescription(QString("joint l_trapezium segment SEGMENT_FOR_l_trapezium"));
SoHAnimSegment795->addChild(*SoTouchSensor796);

SoTransform* SoTransform797 = new SoTransform();
SoTransform797->setTranslation(new float[]{0.1811,-0.0826,0.6975});
SoShape* SoShape798 = new SoShape();
SoShape798->setUSE(QString("JointShape"));
SoTransform797->addChild(*SoShape798);

SoHAnimSegment795->addChild(*SoTransform797);

SoHAnimSite* SoHAnimSite799 = new SoHAnimSite();
SoHAnimSite799->X3DNode::setName(QString("SEGMENT_FOR_l_trapezium_tip"));
SoHAnimSite799->setDEF(QString("hanim_SEGMENT_FOR_l_trapezium_tip"));
SoTransform* SoTransform800 = new SoTransform();
SoTransform800->setTranslation(new float[]{0.1811,-0.0826,0.6975});
SoShape* SoShape801 = new SoShape();
SoShape801->setUSE(QString("SiteShape"));
SoTransform800->addChild(*SoShape801);

SoHAnimSite799->addChild(*SoTransform800);

SoHAnimSegment795->addChild(*SoHAnimSite799);

SoHAnimJoint794->addChildren(*SoHAnimSegment795);

SoHAnimJoint* SoHAnimJoint802 = new SoHAnimJoint();
SoHAnimJoint802->X3DNode::setName(QString("l_metacarpal_1"));
SoHAnimJoint802->setDEF(QString("hanim_l_metacarpal_1"));
SoHAnimJoint802->setCenter(new float[]{0.1803,-0.0759,0.684});
SoHAnimJoint802->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint802->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment803 = new SoHAnimSegment();
SoHAnimSegment803->X3DNode::setName(QString("SEGMENT_FOR_l_metacarpal_1"));
SoHAnimSegment803->setDEF(QString("hanim_SEGMENT_FOR_l_metacarpal_1"));
SoTouchSensor* SoTouchSensor804 = new SoTouchSensor();
SoTouchSensor804->setDescription(QString("joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1"));
SoHAnimSegment803->addChild(*SoTouchSensor804);

SoTransform* SoTransform805 = new SoTransform();
SoTransform805->setTranslation(new float[]{0.1803,-0.0759,0.684});
SoShape* SoShape806 = new SoShape();
SoShape806->setUSE(QString("JointShape"));
SoTransform805->addChild(*SoShape806);

SoHAnimSegment803->addChild(*SoTransform805);

SoHAnimSite* SoHAnimSite807 = new SoHAnimSite();
SoHAnimSite807->X3DNode::setName(QString("SEGMENT_FOR_l_metacarpal_1_tip"));
SoHAnimSite807->setDEF(QString("hanim_SEGMENT_FOR_l_metacarpal_1_tip"));
SoTransform* SoTransform808 = new SoTransform();
SoTransform808->setTranslation(new float[]{0.1803,-0.0759,0.684});
SoShape* SoShape809 = new SoShape();
SoShape809->setUSE(QString("SiteShape"));
SoTransform808->addChild(*SoShape809);

SoHAnimSite807->addChild(*SoTransform808);

SoHAnimSegment803->addChild(*SoHAnimSite807);

SoHAnimJoint802->addChildren(*SoHAnimSegment803);

SoHAnimJoint* SoHAnimJoint810 = new SoHAnimJoint();
SoHAnimJoint810->X3DNode::setName(QString("l_carpal_proximal_phalanx_1"));
SoHAnimJoint810->setDEF(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimJoint810->setCenter(new float[]{0.1809,-0.0661,0.6642});
SoHAnimJoint810->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint810->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment811 = new SoHAnimSegment();
SoHAnimSegment811->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_proximal_phalanx_1"));
SoHAnimSegment811->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1"));
SoTouchSensor* SoTouchSensor812 = new SoTouchSensor();
SoTouchSensor812->setDescription(QString("joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1"));
SoHAnimSegment811->addChild(*SoTouchSensor812);

SoTransform* SoTransform813 = new SoTransform();
SoTransform813->setTranslation(new float[]{0.1809,-0.0661,0.6642});
SoShape* SoShape814 = new SoShape();
SoShape814->setUSE(QString("JointShape"));
SoTransform813->addChild(*SoShape814);

SoHAnimSegment811->addChild(*SoTransform813);

SoHAnimSite* SoHAnimSite815 = new SoHAnimSite();
SoHAnimSite815->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip"));
SoHAnimSite815->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip"));
SoTransform* SoTransform816 = new SoTransform();
SoTransform816->setTranslation(new float[]{0.1809,-0.0661,0.6642});
SoShape* SoShape817 = new SoShape();
SoShape817->setUSE(QString("SiteShape"));
SoTransform816->addChild(*SoShape817);

SoHAnimSite815->addChild(*SoTransform816);

SoHAnimSegment811->addChild(*SoHAnimSite815);

SoHAnimJoint810->addChildren(*SoHAnimSegment811);

SoHAnimJoint* SoHAnimJoint818 = new SoHAnimJoint();
SoHAnimJoint818->X3DNode::setName(QString("l_carpal_distal_phalanx_1"));
SoHAnimJoint818->setDEF(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimJoint818->setCenter(new float[]{0.1825,-0.0522,0.6455});
SoHAnimJoint818->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint818->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment819 = new SoHAnimSegment();
SoHAnimSegment819->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_distal_phalanx_1"));
SoHAnimSegment819->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1"));
SoTouchSensor* SoTouchSensor820 = new SoTouchSensor();
SoTouchSensor820->setDescription(QString("joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1"));
SoHAnimSegment819->addChild(*SoTouchSensor820);

SoTransform* SoTransform821 = new SoTransform();
SoTransform821->setTranslation(new float[]{0.1825,-0.0522,0.6455});
SoShape* SoShape822 = new SoShape();
SoShape822->setUSE(QString("JointShape"));
SoTransform821->addChild(*SoShape822);

SoHAnimSegment819->addChild(*SoTransform821);

SoHAnimSite* SoHAnimSite823 = new SoHAnimSite();
SoHAnimSite823->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_distal_phalanx_1_tip"));
SoHAnimSite823->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip"));
SoTransform* SoTransform824 = new SoTransform();
SoTransform824->setTranslation(new float[]{0.1825,-0.0522,0.6455});
SoShape* SoShape825 = new SoShape();
SoShape825->setUSE(QString("SiteShape"));
SoTransform824->addChild(*SoShape825);

SoHAnimSite823->addChild(*SoTransform824);

SoHAnimSegment819->addChild(*SoHAnimSite823);

SoHAnimJoint818->addChildren(*SoHAnimSegment819);

SoHAnimJoint810->addChildren(*SoHAnimJoint818);

SoHAnimJoint802->addChildren(*SoHAnimJoint810);

SoHAnimJoint794->addChildren(*SoHAnimJoint802);

SoHAnimJoint786->addChildren(*SoHAnimJoint794);

SoHAnimJoint* SoHAnimJoint826 = new SoHAnimJoint();
SoHAnimJoint826->X3DNode::setName(QString("l_trapezoid"));
SoHAnimJoint826->setDEF(QString("hanim_l_trapezoid"));
SoHAnimJoint826->setCenter(new float[]{0.1811,-0.0935,0.6984});
SoHAnimJoint826->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint826->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment827 = new SoHAnimSegment();
SoHAnimSegment827->X3DNode::setName(QString("SEGMENT_FOR_l_trapezoid"));
SoHAnimSegment827->setDEF(QString("hanim_SEGMENT_FOR_l_trapezoid"));
SoTouchSensor* SoTouchSensor828 = new SoTouchSensor();
SoTouchSensor828->setDescription(QString("joint l_trapezoid segment SEGMENT_FOR_l_trapezoid"));
SoHAnimSegment827->addChild(*SoTouchSensor828);

SoTransform* SoTransform829 = new SoTransform();
SoTransform829->setTranslation(new float[]{0.1811,-0.0935,0.6984});
SoShape* SoShape830 = new SoShape();
SoShape830->setUSE(QString("JointShape"));
SoTransform829->addChild(*SoShape830);

SoHAnimSegment827->addChild(*SoTransform829);

SoHAnimSite* SoHAnimSite831 = new SoHAnimSite();
SoHAnimSite831->X3DNode::setName(QString("SEGMENT_FOR_l_trapezoid_tip"));
SoHAnimSite831->setDEF(QString("hanim_SEGMENT_FOR_l_trapezoid_tip"));
SoTransform* SoTransform832 = new SoTransform();
SoTransform832->setTranslation(new float[]{0.1811,-0.0935,0.6984});
SoShape* SoShape833 = new SoShape();
SoShape833->setUSE(QString("SiteShape"));
SoTransform832->addChild(*SoShape833);

SoHAnimSite831->addChild(*SoTransform832);

SoHAnimSegment827->addChild(*SoHAnimSite831);

SoHAnimJoint826->addChildren(*SoHAnimSegment827);

SoHAnimJoint* SoHAnimJoint834 = new SoHAnimJoint();
SoHAnimJoint834->X3DNode::setName(QString("l_metacarpal_2"));
SoHAnimJoint834->setDEF(QString("hanim_l_metacarpal_2"));
SoHAnimJoint834->setCenter(new float[]{0.1811,-0.0922,0.679});
SoHAnimJoint834->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint834->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment835 = new SoHAnimSegment();
SoHAnimSegment835->X3DNode::setName(QString("SEGMENT_FOR_l_metacarpal_2"));
SoHAnimSegment835->setDEF(QString("hanim_SEGMENT_FOR_l_metacarpal_2"));
SoTouchSensor* SoTouchSensor836 = new SoTouchSensor();
SoTouchSensor836->setDescription(QString("joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2"));
SoHAnimSegment835->addChild(*SoTouchSensor836);

SoTransform* SoTransform837 = new SoTransform();
SoTransform837->setTranslation(new float[]{0.1811,-0.0922,0.679});
SoShape* SoShape838 = new SoShape();
SoShape838->setUSE(QString("JointShape"));
SoTransform837->addChild(*SoShape838);

SoHAnimSegment835->addChild(*SoTransform837);

SoHAnimSite* SoHAnimSite839 = new SoHAnimSite();
SoHAnimSite839->X3DNode::setName(QString("SEGMENT_FOR_l_metacarpal_2_tip"));
SoHAnimSite839->setDEF(QString("hanim_SEGMENT_FOR_l_metacarpal_2_tip"));
SoTransform* SoTransform840 = new SoTransform();
SoTransform840->setTranslation(new float[]{0.1811,-0.0922,0.679});
SoShape* SoShape841 = new SoShape();
SoShape841->setUSE(QString("SiteShape"));
SoTransform840->addChild(*SoShape841);

SoHAnimSite839->addChild(*SoTransform840);

SoHAnimSegment835->addChild(*SoHAnimSite839);

SoHAnimJoint834->addChildren(*SoHAnimSegment835);

SoHAnimJoint* SoHAnimJoint842 = new SoHAnimJoint();
SoHAnimJoint842->X3DNode::setName(QString("l_carpal_proximal_phalanx_2"));
SoHAnimJoint842->setDEF(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimJoint842->setCenter(new float[]{0.1836,-0.0868,0.6286});
SoHAnimJoint842->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint842->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment843 = new SoHAnimSegment();
SoHAnimSegment843->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_proximal_phalanx_2"));
SoHAnimSegment843->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2"));
SoTouchSensor* SoTouchSensor844 = new SoTouchSensor();
SoTouchSensor844->setDescription(QString("joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2"));
SoHAnimSegment843->addChild(*SoTouchSensor844);

SoTransform* SoTransform845 = new SoTransform();
SoTransform845->setTranslation(new float[]{0.1836,-0.0868,0.6286});
SoShape* SoShape846 = new SoShape();
SoShape846->setUSE(QString("JointShape"));
SoTransform845->addChild(*SoShape846);

SoHAnimSegment843->addChild(*SoTransform845);

SoHAnimSite* SoHAnimSite847 = new SoHAnimSite();
SoHAnimSite847->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip"));
SoHAnimSite847->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip"));
SoTransform* SoTransform848 = new SoTransform();
SoTransform848->setTranslation(new float[]{0.1836,-0.0868,0.6286});
SoShape* SoShape849 = new SoShape();
SoShape849->setUSE(QString("SiteShape"));
SoTransform848->addChild(*SoShape849);

SoHAnimSite847->addChild(*SoTransform848);

SoHAnimSegment843->addChild(*SoHAnimSite847);

SoHAnimJoint842->addChildren(*SoHAnimSegment843);

SoHAnimJoint* SoHAnimJoint850 = new SoHAnimJoint();
SoHAnimJoint850->X3DNode::setName(QString("l_carpal_middle_phalanx_2"));
SoHAnimJoint850->setDEF(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimJoint850->setCenter(new float[]{0.1815,-0.0877,0.5983});
SoHAnimJoint850->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint850->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment851 = new SoHAnimSegment();
SoHAnimSegment851->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_middle_phalanx_2"));
SoHAnimSegment851->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2"));
SoTouchSensor* SoTouchSensor852 = new SoTouchSensor();
SoTouchSensor852->setDescription(QString("joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2"));
SoHAnimSegment851->addChild(*SoTouchSensor852);

SoTransform* SoTransform853 = new SoTransform();
SoTransform853->setTranslation(new float[]{0.1815,-0.0877,0.5983});
SoShape* SoShape854 = new SoShape();
SoShape854->setUSE(QString("JointShape"));
SoTransform853->addChild(*SoShape854);

SoHAnimSegment851->addChild(*SoTransform853);

SoHAnimSite* SoHAnimSite855 = new SoHAnimSite();
SoHAnimSite855->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_middle_phalanx_2_tip"));
SoHAnimSite855->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip"));
SoTransform* SoTransform856 = new SoTransform();
SoTransform856->setTranslation(new float[]{0.1815,-0.0877,0.5983});
SoShape* SoShape857 = new SoShape();
SoShape857->setUSE(QString("SiteShape"));
SoTransform856->addChild(*SoShape857);

SoHAnimSite855->addChild(*SoTransform856);

SoHAnimSegment851->addChild(*SoHAnimSite855);

SoHAnimJoint850->addChildren(*SoHAnimSegment851);

SoHAnimJoint* SoHAnimJoint858 = new SoHAnimJoint();
SoHAnimJoint858->X3DNode::setName(QString("l_carpal_distal_phalanx_2"));
SoHAnimJoint858->setDEF(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimJoint858->setCenter(new float[]{0.1805,-0.0885,0.5731});
SoHAnimJoint858->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint858->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment859 = new SoHAnimSegment();
SoHAnimSegment859->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_distal_phalanx_2"));
SoHAnimSegment859->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2"));
SoTouchSensor* SoTouchSensor860 = new SoTouchSensor();
SoTouchSensor860->setDescription(QString("joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2"));
SoHAnimSegment859->addChild(*SoTouchSensor860);

SoTransform* SoTransform861 = new SoTransform();
SoTransform861->setTranslation(new float[]{0.1805,-0.0885,0.5731});
SoShape* SoShape862 = new SoShape();
SoShape862->setUSE(QString("JointShape"));
SoTransform861->addChild(*SoShape862);

SoHAnimSegment859->addChild(*SoTransform861);

SoHAnimSite* SoHAnimSite863 = new SoHAnimSite();
SoHAnimSite863->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_distal_phalanx_2_tip"));
SoHAnimSite863->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip"));
SoTransform* SoTransform864 = new SoTransform();
SoTransform864->setTranslation(new float[]{0.1805,-0.0885,0.5731});
SoShape* SoShape865 = new SoShape();
SoShape865->setUSE(QString("SiteShape"));
SoTransform864->addChild(*SoShape865);

SoHAnimSite863->addChild(*SoTransform864);

SoHAnimSegment859->addChild(*SoHAnimSite863);

SoHAnimJoint858->addChildren(*SoHAnimSegment859);

SoHAnimJoint850->addChildren(*SoHAnimJoint858);

SoHAnimJoint842->addChildren(*SoHAnimJoint850);

SoHAnimJoint834->addChildren(*SoHAnimJoint842);

SoHAnimJoint826->addChildren(*SoHAnimJoint834);

SoHAnimJoint786->addChildren(*SoHAnimJoint826);

SoHAnimJoint* SoHAnimJoint866 = new SoHAnimJoint();
SoHAnimJoint866->X3DNode::setName(QString("l_capitate"));
SoHAnimJoint866->setDEF(QString("hanim_l_capitate"));
SoHAnimJoint866->setCenter(new float[]{0.1809,-0.1067,0.7});
SoHAnimJoint866->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint866->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment867 = new SoHAnimSegment();
SoHAnimSegment867->X3DNode::setName(QString("SEGMENT_FOR_l_capitate"));
SoHAnimSegment867->setDEF(QString("hanim_SEGMENT_FOR_l_capitate"));
SoTouchSensor* SoTouchSensor868 = new SoTouchSensor();
SoTouchSensor868->setDescription(QString("joint l_capitate segment SEGMENT_FOR_l_capitate"));
SoHAnimSegment867->addChild(*SoTouchSensor868);

SoTransform* SoTransform869 = new SoTransform();
SoTransform869->setTranslation(new float[]{0.1809,-0.1067,0.7});
SoShape* SoShape870 = new SoShape();
SoShape870->setUSE(QString("JointShape"));
SoTransform869->addChild(*SoShape870);

SoHAnimSegment867->addChild(*SoTransform869);

SoHAnimSite* SoHAnimSite871 = new SoHAnimSite();
SoHAnimSite871->X3DNode::setName(QString("SEGMENT_FOR_l_capitate_tip"));
SoHAnimSite871->setDEF(QString("hanim_SEGMENT_FOR_l_capitate_tip"));
SoTransform* SoTransform872 = new SoTransform();
SoTransform872->setTranslation(new float[]{0.1809,-0.1067,0.7});
SoShape* SoShape873 = new SoShape();
SoShape873->setUSE(QString("SiteShape"));
SoTransform872->addChild(*SoShape873);

SoHAnimSite871->addChild(*SoTransform872);

SoHAnimSegment867->addChild(*SoHAnimSite871);

SoHAnimJoint866->addChildren(*SoHAnimSegment867);

SoHAnimJoint* SoHAnimJoint874 = new SoHAnimJoint();
SoHAnimJoint874->X3DNode::setName(QString("l_metacarpal_3"));
SoHAnimJoint874->setDEF(QString("hanim_l_metacarpal_3"));
SoHAnimJoint874->setCenter(new float[]{0.1809,-0.1081,0.6772});
SoHAnimJoint874->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint874->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment875 = new SoHAnimSegment();
SoHAnimSegment875->X3DNode::setName(QString("SEGMENT_FOR_l_metacarpal_3"));
SoHAnimSegment875->setDEF(QString("hanim_SEGMENT_FOR_l_metacarpal_3"));
SoTouchSensor* SoTouchSensor876 = new SoTouchSensor();
SoTouchSensor876->setDescription(QString("joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3"));
SoHAnimSegment875->addChild(*SoTouchSensor876);

SoTransform* SoTransform877 = new SoTransform();
SoTransform877->setTranslation(new float[]{0.1809,-0.1081,0.6772});
SoShape* SoShape878 = new SoShape();
SoShape878->setUSE(QString("JointShape"));
SoTransform877->addChild(*SoShape878);

SoHAnimSegment875->addChild(*SoTransform877);

SoHAnimSite* SoHAnimSite879 = new SoHAnimSite();
SoHAnimSite879->X3DNode::setName(QString("SEGMENT_FOR_l_metacarpal_3_tip"));
SoHAnimSite879->setDEF(QString("hanim_SEGMENT_FOR_l_metacarpal_3_tip"));
SoTransform* SoTransform880 = new SoTransform();
SoTransform880->setTranslation(new float[]{0.1809,-0.1081,0.6772});
SoShape* SoShape881 = new SoShape();
SoShape881->setUSE(QString("SiteShape"));
SoTransform880->addChild(*SoShape881);

SoHAnimSite879->addChild(*SoTransform880);

SoHAnimSegment875->addChild(*SoHAnimSite879);

SoHAnimJoint874->addChildren(*SoHAnimSegment875);

SoHAnimJoint* SoHAnimJoint882 = new SoHAnimJoint();
SoHAnimJoint882->X3DNode::setName(QString("l_carpal_proximal_phalanx_3"));
SoHAnimJoint882->setDEF(QString("hanim_l_carpal_proximal_phalanx_3"));
SoHAnimJoint882->setCenter(new float[]{0.1835,-0.1058,0.6264});
SoHAnimJoint882->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint882->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment883 = new SoHAnimSegment();
SoHAnimSegment883->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_proximal_phalanx_3"));
SoHAnimSegment883->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3"));
SoTouchSensor* SoTouchSensor884 = new SoTouchSensor();
SoTouchSensor884->setDescription(QString("joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3"));
SoHAnimSegment883->addChild(*SoTouchSensor884);

SoTransform* SoTransform885 = new SoTransform();
SoTransform885->setTranslation(new float[]{0.1835,-0.1058,0.6264});
SoShape* SoShape886 = new SoShape();
SoShape886->setUSE(QString("JointShape"));
SoTransform885->addChild(*SoShape886);

SoHAnimSegment883->addChild(*SoTransform885);

SoHAnimSite* SoHAnimSite887 = new SoHAnimSite();
SoHAnimSite887->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip"));
SoHAnimSite887->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip"));
SoTransform* SoTransform888 = new SoTransform();
SoTransform888->setTranslation(new float[]{0.1835,-0.1058,0.6264});
SoShape* SoShape889 = new SoShape();
SoShape889->setUSE(QString("SiteShape"));
SoTransform888->addChild(*SoShape889);

SoHAnimSite887->addChild(*SoTransform888);

SoHAnimSegment883->addChild(*SoHAnimSite887);

SoHAnimJoint882->addChildren(*SoHAnimSegment883);

SoHAnimJoint* SoHAnimJoint890 = new SoHAnimJoint();
SoHAnimJoint890->X3DNode::setName(QString("l_carpal_middle_phalanx_3"));
SoHAnimJoint890->setDEF(QString("hanim_l_carpal_middle_phalanx_3"));
SoHAnimJoint890->setCenter(new float[]{0.1815,-0.1054,0.5947});
SoHAnimJoint890->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint890->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment891 = new SoHAnimSegment();
SoHAnimSegment891->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_middle_phalanx_3"));
SoHAnimSegment891->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3"));
SoTouchSensor* SoTouchSensor892 = new SoTouchSensor();
SoTouchSensor892->setDescription(QString("joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3"));
SoHAnimSegment891->addChild(*SoTouchSensor892);

SoTransform* SoTransform893 = new SoTransform();
SoTransform893->setTranslation(new float[]{0.1815,-0.1054,0.5947});
SoShape* SoShape894 = new SoShape();
SoShape894->setUSE(QString("JointShape"));
SoTransform893->addChild(*SoShape894);

SoHAnimSegment891->addChild(*SoTransform893);

SoHAnimSite* SoHAnimSite895 = new SoHAnimSite();
SoHAnimSite895->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_middle_phalanx_3_tip"));
SoHAnimSite895->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip"));
SoTransform* SoTransform896 = new SoTransform();
SoTransform896->setTranslation(new float[]{0.1815,-0.1054,0.5947});
SoShape* SoShape897 = new SoShape();
SoShape897->setUSE(QString("SiteShape"));
SoTransform896->addChild(*SoShape897);

SoHAnimSite895->addChild(*SoTransform896);

SoHAnimSegment891->addChild(*SoHAnimSite895);

SoHAnimJoint890->addChildren(*SoHAnimSegment891);

SoHAnimJoint* SoHAnimJoint898 = new SoHAnimJoint();
SoHAnimJoint898->X3DNode::setName(QString("l_carpal_distal_phalanx_3"));
SoHAnimJoint898->setDEF(QString("hanim_l_carpal_distal_phalanx_3"));
SoHAnimJoint898->setCenter(new float[]{0.1805,-0.1056,0.5668});
SoHAnimJoint898->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint898->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment899 = new SoHAnimSegment();
SoHAnimSegment899->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_distal_phalanx_3"));
SoHAnimSegment899->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3"));
SoTouchSensor* SoTouchSensor900 = new SoTouchSensor();
SoTouchSensor900->setDescription(QString("joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3"));
SoHAnimSegment899->addChild(*SoTouchSensor900);

SoTransform* SoTransform901 = new SoTransform();
SoTransform901->setTranslation(new float[]{0.1805,-0.1056,0.5668});
SoShape* SoShape902 = new SoShape();
SoShape902->setUSE(QString("JointShape"));
SoTransform901->addChild(*SoShape902);

SoHAnimSegment899->addChild(*SoTransform901);

SoHAnimSite* SoHAnimSite903 = new SoHAnimSite();
SoHAnimSite903->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_distal_phalanx_3_tip"));
SoHAnimSite903->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip"));
SoTransform* SoTransform904 = new SoTransform();
SoTransform904->setTranslation(new float[]{0.1805,-0.1056,0.5668});
SoShape* SoShape905 = new SoShape();
SoShape905->setUSE(QString("SiteShape"));
SoTransform904->addChild(*SoShape905);

SoHAnimSite903->addChild(*SoTransform904);

SoHAnimSegment899->addChild(*SoHAnimSite903);

SoHAnimJoint898->addChildren(*SoHAnimSegment899);

SoHAnimJoint890->addChildren(*SoHAnimJoint898);

SoHAnimJoint882->addChildren(*SoHAnimJoint890);

SoHAnimJoint874->addChildren(*SoHAnimJoint882);

SoHAnimJoint866->addChildren(*SoHAnimJoint874);

SoHAnimJoint786->addChildren(*SoHAnimJoint866);

SoHAnimJoint* SoHAnimJoint906 = new SoHAnimJoint();
SoHAnimJoint906->X3DNode::setName(QString("l_hamate"));
SoHAnimJoint906->setDEF(QString("hanim_l_hamate"));
SoHAnimJoint906->setCenter(new float[]{0.1809,-0.1276,0.6973});
SoHAnimJoint906->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint906->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment907 = new SoHAnimSegment();
SoHAnimSegment907->X3DNode::setName(QString("SEGMENT_FOR_l_hamate"));
SoHAnimSegment907->setDEF(QString("hanim_SEGMENT_FOR_l_hamate"));
SoTouchSensor* SoTouchSensor908 = new SoTouchSensor();
SoTouchSensor908->setDescription(QString("joint l_hamate segment SEGMENT_FOR_l_hamate"));
SoHAnimSegment907->addChild(*SoTouchSensor908);

SoTransform* SoTransform909 = new SoTransform();
SoTransform909->setTranslation(new float[]{0.1809,-0.1276,0.6973});
SoShape* SoShape910 = new SoShape();
SoShape910->setUSE(QString("JointShape"));
SoTransform909->addChild(*SoShape910);

SoHAnimSegment907->addChild(*SoTransform909);

SoHAnimSite* SoHAnimSite911 = new SoHAnimSite();
SoHAnimSite911->X3DNode::setName(QString("SEGMENT_FOR_l_hamate_tip"));
SoHAnimSite911->setDEF(QString("hanim_SEGMENT_FOR_l_hamate_tip"));
SoTransform* SoTransform912 = new SoTransform();
SoTransform912->setTranslation(new float[]{0.1809,-0.1276,0.6973});
SoShape* SoShape913 = new SoShape();
SoShape913->setUSE(QString("SiteShape"));
SoTransform912->addChild(*SoShape913);

SoHAnimSite911->addChild(*SoTransform912);

SoHAnimSegment907->addChild(*SoHAnimSite911);

SoHAnimJoint906->addChildren(*SoHAnimSegment907);

SoHAnimJoint* SoHAnimJoint914 = new SoHAnimJoint();
SoHAnimJoint914->X3DNode::setName(QString("l_metacarpal_4"));
SoHAnimJoint914->setDEF(QString("hanim_l_metacarpal_4"));
SoHAnimJoint914->setCenter(new float[]{0.1809,-0.1218,0.6777});
SoHAnimJoint914->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint914->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment915 = new SoHAnimSegment();
SoHAnimSegment915->X3DNode::setName(QString("SEGMENT_FOR_l_metacarpal_4"));
SoHAnimSegment915->setDEF(QString("hanim_SEGMENT_FOR_l_metacarpal_4"));
SoTouchSensor* SoTouchSensor916 = new SoTouchSensor();
SoTouchSensor916->setDescription(QString("joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4"));
SoHAnimSegment915->addChild(*SoTouchSensor916);

SoTransform* SoTransform917 = new SoTransform();
SoTransform917->setTranslation(new float[]{0.1809,-0.1218,0.6777});
SoShape* SoShape918 = new SoShape();
SoShape918->setUSE(QString("JointShape"));
SoTransform917->addChild(*SoShape918);

SoHAnimSegment915->addChild(*SoTransform917);

SoHAnimSite* SoHAnimSite919 = new SoHAnimSite();
SoHAnimSite919->X3DNode::setName(QString("SEGMENT_FOR_l_metacarpal_4_tip"));
SoHAnimSite919->setDEF(QString("hanim_SEGMENT_FOR_l_metacarpal_4_tip"));
SoTransform* SoTransform920 = new SoTransform();
SoTransform920->setTranslation(new float[]{0.1809,-0.1218,0.6777});
SoShape* SoShape921 = new SoShape();
SoShape921->setUSE(QString("SiteShape"));
SoTransform920->addChild(*SoShape921);

SoHAnimSite919->addChild(*SoTransform920);

SoHAnimSegment915->addChild(*SoHAnimSite919);

SoHAnimJoint914->addChildren(*SoHAnimSegment915);

SoHAnimJoint* SoHAnimJoint922 = new SoHAnimJoint();
SoHAnimJoint922->X3DNode::setName(QString("l_carpal_proximal_phalanx_4"));
SoHAnimJoint922->setDEF(QString("hanim_l_carpal_proximal_phalanx_4"));
SoHAnimJoint922->setCenter(new float[]{0.1835,-0.1233,0.6255});
SoHAnimJoint922->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint922->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment923 = new SoHAnimSegment();
SoHAnimSegment923->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_proximal_phalanx_4"));
SoHAnimSegment923->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4"));
SoTouchSensor* SoTouchSensor924 = new SoTouchSensor();
SoTouchSensor924->setDescription(QString("joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4"));
SoHAnimSegment923->addChild(*SoTouchSensor924);

SoTransform* SoTransform925 = new SoTransform();
SoTransform925->setTranslation(new float[]{0.1835,-0.1233,0.6255});
SoShape* SoShape926 = new SoShape();
SoShape926->setUSE(QString("JointShape"));
SoTransform925->addChild(*SoShape926);

SoHAnimSegment923->addChild(*SoTransform925);

SoHAnimSite* SoHAnimSite927 = new SoHAnimSite();
SoHAnimSite927->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip"));
SoHAnimSite927->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip"));
SoTransform* SoTransform928 = new SoTransform();
SoTransform928->setTranslation(new float[]{0.1835,-0.1233,0.6255});
SoShape* SoShape929 = new SoShape();
SoShape929->setUSE(QString("SiteShape"));
SoTransform928->addChild(*SoShape929);

SoHAnimSite927->addChild(*SoTransform928);

SoHAnimSegment923->addChild(*SoHAnimSite927);

SoHAnimJoint922->addChildren(*SoHAnimSegment923);

SoHAnimJoint* SoHAnimJoint930 = new SoHAnimJoint();
SoHAnimJoint930->X3DNode::setName(QString("l_carpal_middle_phalanx_4"));
SoHAnimJoint930->setDEF(QString("hanim_l_carpal_middle_phalanx_4"));
SoHAnimJoint930->setCenter(new float[]{0.1815,-0.1225,0.598});
SoHAnimJoint930->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint930->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment931 = new SoHAnimSegment();
SoHAnimSegment931->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_middle_phalanx_4"));
SoHAnimSegment931->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4"));
SoTouchSensor* SoTouchSensor932 = new SoTouchSensor();
SoTouchSensor932->setDescription(QString("joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4"));
SoHAnimSegment931->addChild(*SoTouchSensor932);

SoTransform* SoTransform933 = new SoTransform();
SoTransform933->setTranslation(new float[]{0.1815,-0.1225,0.598});
SoShape* SoShape934 = new SoShape();
SoShape934->setUSE(QString("JointShape"));
SoTransform933->addChild(*SoShape934);

SoHAnimSegment931->addChild(*SoTransform933);

SoHAnimSite* SoHAnimSite935 = new SoHAnimSite();
SoHAnimSite935->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_middle_phalanx_4_tip"));
SoHAnimSite935->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip"));
SoTransform* SoTransform936 = new SoTransform();
SoTransform936->setTranslation(new float[]{0.1815,-0.1225,0.598});
SoShape* SoShape937 = new SoShape();
SoShape937->setUSE(QString("SiteShape"));
SoTransform936->addChild(*SoShape937);

SoHAnimSite935->addChild(*SoTransform936);

SoHAnimSegment931->addChild(*SoHAnimSite935);

SoHAnimJoint930->addChildren(*SoHAnimSegment931);

SoHAnimJoint* SoHAnimJoint938 = new SoHAnimJoint();
SoHAnimJoint938->X3DNode::setName(QString("l_carpal_distal_phalanx_4"));
SoHAnimJoint938->setDEF(QString("hanim_l_carpal_distal_phalanx_4"));
SoHAnimJoint938->setCenter(new float[]{0.1805,-0.1217,0.5722});
SoHAnimJoint938->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint938->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment939 = new SoHAnimSegment();
SoHAnimSegment939->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_distal_phalanx_4"));
SoHAnimSegment939->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4"));
SoTouchSensor* SoTouchSensor940 = new SoTouchSensor();
SoTouchSensor940->setDescription(QString("joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4"));
SoHAnimSegment939->addChild(*SoTouchSensor940);

SoTransform* SoTransform941 = new SoTransform();
SoTransform941->setTranslation(new float[]{0.1805,-0.1217,0.5722});
SoShape* SoShape942 = new SoShape();
SoShape942->setUSE(QString("JointShape"));
SoTransform941->addChild(*SoShape942);

SoHAnimSegment939->addChild(*SoTransform941);

SoHAnimSite* SoHAnimSite943 = new SoHAnimSite();
SoHAnimSite943->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_distal_phalanx_4_tip"));
SoHAnimSite943->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip"));
SoTransform* SoTransform944 = new SoTransform();
SoTransform944->setTranslation(new float[]{0.1805,-0.1217,0.5722});
SoShape* SoShape945 = new SoShape();
SoShape945->setUSE(QString("SiteShape"));
SoTransform944->addChild(*SoShape945);

SoHAnimSite943->addChild(*SoTransform944);

SoHAnimSegment939->addChild(*SoHAnimSite943);

SoHAnimJoint938->addChildren(*SoHAnimSegment939);

SoHAnimJoint930->addChildren(*SoHAnimJoint938);

SoHAnimJoint922->addChildren(*SoHAnimJoint930);

SoHAnimJoint914->addChildren(*SoHAnimJoint922);

SoHAnimJoint906->addChildren(*SoHAnimJoint914);

SoHAnimJoint* SoHAnimJoint946 = new SoHAnimJoint();
SoHAnimJoint946->X3DNode::setName(QString("l_metacarpal_5"));
SoHAnimJoint946->setDEF(QString("hanim_l_metacarpal_5"));
SoHAnimJoint946->setCenter(new float[]{0.1815,-0.1347,0.6797});
SoHAnimJoint946->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint946->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment947 = new SoHAnimSegment();
SoHAnimSegment947->X3DNode::setName(QString("SEGMENT_FOR_l_metacarpal_5"));
SoHAnimSegment947->setDEF(QString("hanim_SEGMENT_FOR_l_metacarpal_5"));
SoTouchSensor* SoTouchSensor948 = new SoTouchSensor();
SoTouchSensor948->setDescription(QString("joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5"));
SoHAnimSegment947->addChild(*SoTouchSensor948);

SoTransform* SoTransform949 = new SoTransform();
SoTransform949->setTranslation(new float[]{0.1815,-0.1347,0.6797});
SoShape* SoShape950 = new SoShape();
SoShape950->setUSE(QString("JointShape"));
SoTransform949->addChild(*SoShape950);

SoHAnimSegment947->addChild(*SoTransform949);

SoHAnimSite* SoHAnimSite951 = new SoHAnimSite();
SoHAnimSite951->X3DNode::setName(QString("SEGMENT_FOR_l_metacarpal_5_tip"));
SoHAnimSite951->setDEF(QString("hanim_SEGMENT_FOR_l_metacarpal_5_tip"));
SoTransform* SoTransform952 = new SoTransform();
SoTransform952->setTranslation(new float[]{0.1815,-0.1347,0.6797});
SoShape* SoShape953 = new SoShape();
SoShape953->setUSE(QString("SiteShape"));
SoTransform952->addChild(*SoShape953);

SoHAnimSite951->addChild(*SoTransform952);

SoHAnimSegment947->addChild(*SoHAnimSite951);

SoHAnimJoint946->addChildren(*SoHAnimSegment947);

SoHAnimJoint* SoHAnimJoint954 = new SoHAnimJoint();
SoHAnimJoint954->X3DNode::setName(QString("l_carpal_proximal_phalanx_5"));
SoHAnimJoint954->setDEF(QString("hanim_l_carpal_proximal_phalanx_5"));
SoHAnimJoint954->setCenter(new float[]{0.1832,-0.1389,0.6295});
SoHAnimJoint954->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint954->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment955 = new SoHAnimSegment();
SoHAnimSegment955->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_proximal_phalanx_5"));
SoHAnimSegment955->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5"));
SoTouchSensor* SoTouchSensor956 = new SoTouchSensor();
SoTouchSensor956->setDescription(QString("joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5"));
SoHAnimSegment955->addChild(*SoTouchSensor956);

SoTransform* SoTransform957 = new SoTransform();
SoTransform957->setTranslation(new float[]{0.1832,-0.1389,0.6295});
SoShape* SoShape958 = new SoShape();
SoShape958->setUSE(QString("JointShape"));
SoTransform957->addChild(*SoShape958);

SoHAnimSegment955->addChild(*SoTransform957);

SoHAnimSite* SoHAnimSite959 = new SoHAnimSite();
SoHAnimSite959->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip"));
SoHAnimSite959->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip"));
SoTransform* SoTransform960 = new SoTransform();
SoTransform960->setTranslation(new float[]{0.1832,-0.1389,0.6295});
SoShape* SoShape961 = new SoShape();
SoShape961->setUSE(QString("SiteShape"));
SoTransform960->addChild(*SoShape961);

SoHAnimSite959->addChild(*SoTransform960);

SoHAnimSegment955->addChild(*SoHAnimSite959);

SoHAnimJoint954->addChildren(*SoHAnimSegment955);

SoHAnimJoint* SoHAnimJoint962 = new SoHAnimJoint();
SoHAnimJoint962->X3DNode::setName(QString("l_carpal_middle_phalanx_5"));
SoHAnimJoint962->setDEF(QString("hanim_l_carpal_middle_phalanx_5"));
SoHAnimJoint962->setCenter(new float[]{0.1815,-0.139,0.6124});
SoHAnimJoint962->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint962->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment963 = new SoHAnimSegment();
SoHAnimSegment963->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_middle_phalanx_5"));
SoHAnimSegment963->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5"));
SoTouchSensor* SoTouchSensor964 = new SoTouchSensor();
SoTouchSensor964->setDescription(QString("joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5"));
SoHAnimSegment963->addChild(*SoTouchSensor964);

SoTransform* SoTransform965 = new SoTransform();
SoTransform965->setTranslation(new float[]{0.1815,-0.139,0.6124});
SoShape* SoShape966 = new SoShape();
SoShape966->setUSE(QString("JointShape"));
SoTransform965->addChild(*SoShape966);

SoHAnimSegment963->addChild(*SoTransform965);

SoHAnimSite* SoHAnimSite967 = new SoHAnimSite();
SoHAnimSite967->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_middle_phalanx_5_tip"));
SoHAnimSite967->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip"));
SoTransform* SoTransform968 = new SoTransform();
SoTransform968->setTranslation(new float[]{0.1815,-0.139,0.6124});
SoShape* SoShape969 = new SoShape();
SoShape969->setUSE(QString("SiteShape"));
SoTransform968->addChild(*SoShape969);

SoHAnimSite967->addChild(*SoTransform968);

SoHAnimSegment963->addChild(*SoHAnimSite967);

SoHAnimJoint962->addChildren(*SoHAnimSegment963);

SoHAnimJoint* SoHAnimJoint970 = new SoHAnimJoint();
SoHAnimJoint970->X3DNode::setName(QString("l_carpal_distal_phalanx_5"));
SoHAnimJoint970->setDEF(QString("hanim_l_carpal_distal_phalanx_5"));
SoHAnimJoint970->setCenter(new float[]{0.1806,-0.1388,0.5938});
SoHAnimJoint970->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint970->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment971 = new SoHAnimSegment();
SoHAnimSegment971->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_distal_phalanx_5"));
SoHAnimSegment971->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5"));
SoTouchSensor* SoTouchSensor972 = new SoTouchSensor();
SoTouchSensor972->setDescription(QString("joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5"));
SoHAnimSegment971->addChild(*SoTouchSensor972);

SoTransform* SoTransform973 = new SoTransform();
SoTransform973->setTranslation(new float[]{0.1806,-0.1388,0.5938});
SoShape* SoShape974 = new SoShape();
SoShape974->setUSE(QString("JointShape"));
SoTransform973->addChild(*SoShape974);

SoHAnimSegment971->addChild(*SoTransform973);

SoHAnimSite* SoHAnimSite975 = new SoHAnimSite();
SoHAnimSite975->X3DNode::setName(QString("SEGMENT_FOR_l_carpal_distal_phalanx_5_tip"));
SoHAnimSite975->setDEF(QString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip"));
SoTransform* SoTransform976 = new SoTransform();
SoTransform976->setTranslation(new float[]{0.1806,-0.1388,0.5938});
SoShape* SoShape977 = new SoShape();
SoShape977->setUSE(QString("SiteShape"));
SoTransform976->addChild(*SoShape977);

SoHAnimSite975->addChild(*SoTransform976);

SoHAnimSegment971->addChild(*SoHAnimSite975);

SoHAnimJoint970->addChildren(*SoHAnimSegment971);

SoHAnimJoint962->addChildren(*SoHAnimJoint970);

SoHAnimJoint954->addChildren(*SoHAnimJoint962);

SoHAnimJoint946->addChildren(*SoHAnimJoint954);

SoHAnimJoint906->addChildren(*SoHAnimJoint946);

SoHAnimJoint786->addChildren(*SoHAnimJoint906);

SoHAnimJoint778->addChildren(*SoHAnimJoint786);

SoHAnimJoint770->addChildren(*SoHAnimJoint778);

SoHAnimJoint762->addChildren(*SoHAnimJoint770);

SoHAnimJoint754->addChildren(*SoHAnimJoint762);

SoHAnimJoint626->addChildren(*SoHAnimJoint754);

SoHAnimJoint* SoHAnimJoint978 = new SoHAnimJoint();
SoHAnimJoint978->X3DNode::setName(QString("r_clavicle"));
SoHAnimJoint978->setDEF(QString("hanim_r_clavicle"));
SoHAnimJoint978->setCenter(new float[]{-0.1231,-0.1148,1.1833});
SoHAnimJoint978->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint978->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment979 = new SoHAnimSegment();
SoHAnimSegment979->X3DNode::setName(QString("SEGMENT_FOR_r_clavicle"));
SoHAnimSegment979->setDEF(QString("hanim_SEGMENT_FOR_r_clavicle"));
SoTouchSensor* SoTouchSensor980 = new SoTouchSensor();
SoTouchSensor980->setDescription(QString("joint r_clavicle segment SEGMENT_FOR_r_clavicle"));
SoHAnimSegment979->addChild(*SoTouchSensor980);

SoTransform* SoTransform981 = new SoTransform();
SoTransform981->setTranslation(new float[]{-0.1231,-0.1148,1.1833});
SoShape* SoShape982 = new SoShape();
SoShape982->setUSE(QString("JointShape"));
SoTransform981->addChild(*SoShape982);

SoHAnimSegment979->addChild(*SoTransform981);

SoHAnimSite* SoHAnimSite983 = new SoHAnimSite();
SoHAnimSite983->X3DNode::setName(QString("SEGMENT_FOR_r_clavicle_tip"));
SoHAnimSite983->setDEF(QString("hanim_SEGMENT_FOR_r_clavicle_tip"));
SoTransform* SoTransform984 = new SoTransform();
SoTransform984->setTranslation(new float[]{-0.1231,-0.1148,1.1833});
SoShape* SoShape985 = new SoShape();
SoShape985->setUSE(QString("SiteShape"));
SoTransform984->addChild(*SoShape985);

SoHAnimSite983->addChild(*SoTransform984);

SoHAnimSegment979->addChild(*SoHAnimSite983);

SoHAnimJoint978->addChildren(*SoHAnimSegment979);

SoHAnimJoint* SoHAnimJoint986 = new SoHAnimJoint();
SoHAnimJoint986->X3DNode::setName(QString("r_scapula"));
SoHAnimJoint986->setDEF(QString("hanim_r_scapula"));
SoHAnimJoint986->setCenter(new float[]{-0.0387,-0.1157,1.2001});
SoHAnimJoint986->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint986->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment987 = new SoHAnimSegment();
SoHAnimSegment987->X3DNode::setName(QString("SEGMENT_FOR_r_scapula"));
SoHAnimSegment987->setDEF(QString("hanim_SEGMENT_FOR_r_scapula"));
SoTouchSensor* SoTouchSensor988 = new SoTouchSensor();
SoTouchSensor988->setDescription(QString("joint r_scapula segment SEGMENT_FOR_r_scapula"));
SoHAnimSegment987->addChild(*SoTouchSensor988);

SoTransform* SoTransform989 = new SoTransform();
SoTransform989->setTranslation(new float[]{-0.0387,-0.1157,1.2001});
SoShape* SoShape990 = new SoShape();
SoShape990->setUSE(QString("JointShape"));
SoTransform989->addChild(*SoShape990);

SoHAnimSegment987->addChild(*SoTransform989);

SoHAnimSite* SoHAnimSite991 = new SoHAnimSite();
SoHAnimSite991->X3DNode::setName(QString("SEGMENT_FOR_r_scapula_tip"));
SoHAnimSite991->setDEF(QString("hanim_SEGMENT_FOR_r_scapula_tip"));
SoTransform* SoTransform992 = new SoTransform();
SoTransform992->setTranslation(new float[]{-0.0387,-0.1157,1.2001});
SoShape* SoShape993 = new SoShape();
SoShape993->setUSE(QString("SiteShape"));
SoTransform992->addChild(*SoShape993);

SoHAnimSite991->addChild(*SoTransform992);

SoHAnimSegment987->addChild(*SoHAnimSite991);

SoHAnimJoint986->addChildren(*SoHAnimSegment987);

SoHAnimJoint* SoHAnimJoint994 = new SoHAnimJoint();
SoHAnimJoint994->X3DNode::setName(QString("r_upperarm"));
SoHAnimJoint994->setDEF(QString("hanim_r_upperarm"));
SoHAnimJoint994->setCenter(new float[]{-0.1649,-0.1051,1.17});
SoHAnimJoint994->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint994->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment995 = new SoHAnimSegment();
SoHAnimSegment995->X3DNode::setName(QString("SEGMENT_FOR_r_upperarm"));
SoHAnimSegment995->setDEF(QString("hanim_SEGMENT_FOR_r_upperarm"));
SoTouchSensor* SoTouchSensor996 = new SoTouchSensor();
SoTouchSensor996->setDescription(QString("joint r_upperarm segment SEGMENT_FOR_r_upperarm"));
SoHAnimSegment995->addChild(*SoTouchSensor996);

SoTransform* SoTransform997 = new SoTransform();
SoTransform997->setTranslation(new float[]{-0.1649,-0.1051,1.17});
SoShape* SoShape998 = new SoShape();
SoShape998->setUSE(QString("JointShape"));
SoTransform997->addChild(*SoShape998);

SoHAnimSegment995->addChild(*SoTransform997);

SoHAnimSite* SoHAnimSite999 = new SoHAnimSite();
SoHAnimSite999->X3DNode::setName(QString("SEGMENT_FOR_r_upperarm_tip"));
SoHAnimSite999->setDEF(QString("hanim_SEGMENT_FOR_r_upperarm_tip"));
SoTransform* SoTransform1000 = new SoTransform();
SoTransform1000->setTranslation(new float[]{-0.1649,-0.1051,1.17});
SoShape* SoShape1001 = new SoShape();
SoShape1001->setUSE(QString("SiteShape"));
SoTransform1000->addChild(*SoShape1001);

SoHAnimSite999->addChild(*SoTransform1000);

SoHAnimSegment995->addChild(*SoHAnimSite999);

SoHAnimJoint994->addChildren(*SoHAnimSegment995);

SoHAnimJoint* SoHAnimJoint1002 = new SoHAnimJoint();
SoHAnimJoint1002->X3DNode::setName(QString("r_forearm"));
SoHAnimJoint1002->setDEF(QString("hanim_r_forearm"));
SoHAnimJoint1002->setCenter(new float[]{-0.1819,-0.1075,0.9202});
SoHAnimJoint1002->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1002->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1003 = new SoHAnimSegment();
SoHAnimSegment1003->X3DNode::setName(QString("SEGMENT_FOR_r_forearm"));
SoHAnimSegment1003->setDEF(QString("hanim_SEGMENT_FOR_r_forearm"));
SoTouchSensor* SoTouchSensor1004 = new SoTouchSensor();
SoTouchSensor1004->setDescription(QString("joint r_forearm segment SEGMENT_FOR_r_forearm"));
SoHAnimSegment1003->addChild(*SoTouchSensor1004);

SoTransform* SoTransform1005 = new SoTransform();
SoTransform1005->setTranslation(new float[]{-0.1819,-0.1075,0.9202});
SoShape* SoShape1006 = new SoShape();
SoShape1006->setUSE(QString("JointShape"));
SoTransform1005->addChild(*SoShape1006);

SoHAnimSegment1003->addChild(*SoTransform1005);

SoHAnimSite* SoHAnimSite1007 = new SoHAnimSite();
SoHAnimSite1007->X3DNode::setName(QString("SEGMENT_FOR_r_forearm_tip"));
SoHAnimSite1007->setDEF(QString("hanim_SEGMENT_FOR_r_forearm_tip"));
SoTransform* SoTransform1008 = new SoTransform();
SoTransform1008->setTranslation(new float[]{-0.1819,-0.1075,0.9202});
SoShape* SoShape1009 = new SoShape();
SoShape1009->setUSE(QString("SiteShape"));
SoTransform1008->addChild(*SoShape1009);

SoHAnimSite1007->addChild(*SoTransform1008);

SoHAnimSegment1003->addChild(*SoHAnimSite1007);

SoHAnimJoint1002->addChildren(*SoHAnimSegment1003);

SoHAnimJoint* SoHAnimJoint1010 = new SoHAnimJoint();
SoHAnimJoint1010->X3DNode::setName(QString("r_carpal"));
SoHAnimJoint1010->setDEF(QString("hanim_r_carpal"));
SoHAnimJoint1010->setCenter(new float[]{-0.1818,-0.1069,0.7157});
SoHAnimJoint1010->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1010->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1011 = new SoHAnimSegment();
SoHAnimSegment1011->X3DNode::setName(QString("SEGMENT_FOR_r_carpal"));
SoHAnimSegment1011->setDEF(QString("hanim_SEGMENT_FOR_r_carpal"));
SoTouchSensor* SoTouchSensor1012 = new SoTouchSensor();
SoTouchSensor1012->setDescription(QString("joint r_carpal segment SEGMENT_FOR_r_carpal"));
SoHAnimSegment1011->addChild(*SoTouchSensor1012);

SoTransform* SoTransform1013 = new SoTransform();
SoTransform1013->setTranslation(new float[]{-0.1818,-0.1069,0.7157});
SoShape* SoShape1014 = new SoShape();
SoShape1014->setUSE(QString("JointShape"));
SoTransform1013->addChild(*SoShape1014);

SoHAnimSegment1011->addChild(*SoTransform1013);

SoHAnimSite* SoHAnimSite1015 = new SoHAnimSite();
SoHAnimSite1015->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_tip"));
SoHAnimSite1015->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_tip"));
SoTransform* SoTransform1016 = new SoTransform();
SoTransform1016->setTranslation(new float[]{-0.1818,-0.1069,0.7157});
SoShape* SoShape1017 = new SoShape();
SoShape1017->setUSE(QString("SiteShape"));
SoTransform1016->addChild(*SoShape1017);

SoHAnimSite1015->addChild(*SoTransform1016);

SoHAnimSegment1011->addChild(*SoHAnimSite1015);

SoHAnimJoint1010->addChildren(*SoHAnimSegment1011);

SoHAnimJoint* SoHAnimJoint1018 = new SoHAnimJoint();
SoHAnimJoint1018->X3DNode::setName(QString("r_trapezium"));
SoHAnimJoint1018->setDEF(QString("hanim_r_trapezium"));
SoHAnimJoint1018->setCenter(new float[]{-0.1811,-0.0826,0.6975});
SoHAnimJoint1018->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1018->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1019 = new SoHAnimSegment();
SoHAnimSegment1019->X3DNode::setName(QString("SEGMENT_FOR_r_trapezium"));
SoHAnimSegment1019->setDEF(QString("hanim_SEGMENT_FOR_r_trapezium"));
SoTouchSensor* SoTouchSensor1020 = new SoTouchSensor();
SoTouchSensor1020->setDescription(QString("joint r_trapezium segment SEGMENT_FOR_r_trapezium"));
SoHAnimSegment1019->addChild(*SoTouchSensor1020);

SoTransform* SoTransform1021 = new SoTransform();
SoTransform1021->setTranslation(new float[]{-0.1811,-0.0826,0.6975});
SoShape* SoShape1022 = new SoShape();
SoShape1022->setUSE(QString("JointShape"));
SoTransform1021->addChild(*SoShape1022);

SoHAnimSegment1019->addChild(*SoTransform1021);

SoHAnimSite* SoHAnimSite1023 = new SoHAnimSite();
SoHAnimSite1023->X3DNode::setName(QString("SEGMENT_FOR_r_trapezium_tip"));
SoHAnimSite1023->setDEF(QString("hanim_SEGMENT_FOR_r_trapezium_tip"));
SoTransform* SoTransform1024 = new SoTransform();
SoTransform1024->setTranslation(new float[]{-0.1811,-0.0826,0.6975});
SoShape* SoShape1025 = new SoShape();
SoShape1025->setUSE(QString("SiteShape"));
SoTransform1024->addChild(*SoShape1025);

SoHAnimSite1023->addChild(*SoTransform1024);

SoHAnimSegment1019->addChild(*SoHAnimSite1023);

SoHAnimJoint1018->addChildren(*SoHAnimSegment1019);

SoHAnimJoint* SoHAnimJoint1026 = new SoHAnimJoint();
SoHAnimJoint1026->X3DNode::setName(QString("r_metacarpal_1"));
SoHAnimJoint1026->setDEF(QString("hanim_r_metacarpal_1"));
SoHAnimJoint1026->setCenter(new float[]{-0.1803,-0.0759,0.684});
SoHAnimJoint1026->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1026->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1027 = new SoHAnimSegment();
SoHAnimSegment1027->X3DNode::setName(QString("SEGMENT_FOR_r_metacarpal_1"));
SoHAnimSegment1027->setDEF(QString("hanim_SEGMENT_FOR_r_metacarpal_1"));
SoTouchSensor* SoTouchSensor1028 = new SoTouchSensor();
SoTouchSensor1028->setDescription(QString("joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1"));
SoHAnimSegment1027->addChild(*SoTouchSensor1028);

SoTransform* SoTransform1029 = new SoTransform();
SoTransform1029->setTranslation(new float[]{-0.1803,-0.0759,0.684});
SoShape* SoShape1030 = new SoShape();
SoShape1030->setUSE(QString("JointShape"));
SoTransform1029->addChild(*SoShape1030);

SoHAnimSegment1027->addChild(*SoTransform1029);

SoHAnimSite* SoHAnimSite1031 = new SoHAnimSite();
SoHAnimSite1031->X3DNode::setName(QString("SEGMENT_FOR_r_metacarpal_1_tip"));
SoHAnimSite1031->setDEF(QString("hanim_SEGMENT_FOR_r_metacarpal_1_tip"));
SoTransform* SoTransform1032 = new SoTransform();
SoTransform1032->setTranslation(new float[]{-0.1803,-0.0759,0.684});
SoShape* SoShape1033 = new SoShape();
SoShape1033->setUSE(QString("SiteShape"));
SoTransform1032->addChild(*SoShape1033);

SoHAnimSite1031->addChild(*SoTransform1032);

SoHAnimSegment1027->addChild(*SoHAnimSite1031);

SoHAnimJoint1026->addChildren(*SoHAnimSegment1027);

SoHAnimJoint* SoHAnimJoint1034 = new SoHAnimJoint();
SoHAnimJoint1034->X3DNode::setName(QString("r_carpal_proximal_phalanx_1"));
SoHAnimJoint1034->setDEF(QString("hanim_r_carpal_proximal_phalanx_1"));
SoHAnimJoint1034->setCenter(new float[]{-0.1808,-0.0661,0.6642});
SoHAnimJoint1034->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1034->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1035 = new SoHAnimSegment();
SoHAnimSegment1035->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_proximal_phalanx_1"));
SoHAnimSegment1035->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1"));
SoTouchSensor* SoTouchSensor1036 = new SoTouchSensor();
SoTouchSensor1036->setDescription(QString("joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1"));
SoHAnimSegment1035->addChild(*SoTouchSensor1036);

SoTransform* SoTransform1037 = new SoTransform();
SoTransform1037->setTranslation(new float[]{-0.1808,-0.0661,0.6642});
SoShape* SoShape1038 = new SoShape();
SoShape1038->setUSE(QString("JointShape"));
SoTransform1037->addChild(*SoShape1038);

SoHAnimSegment1035->addChild(*SoTransform1037);

SoHAnimSite* SoHAnimSite1039 = new SoHAnimSite();
SoHAnimSite1039->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip"));
SoHAnimSite1039->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip"));
SoTransform* SoTransform1040 = new SoTransform();
SoTransform1040->setTranslation(new float[]{-0.1808,-0.0661,0.6642});
SoShape* SoShape1041 = new SoShape();
SoShape1041->setUSE(QString("SiteShape"));
SoTransform1040->addChild(*SoShape1041);

SoHAnimSite1039->addChild(*SoTransform1040);

SoHAnimSegment1035->addChild(*SoHAnimSite1039);

SoHAnimJoint1034->addChildren(*SoHAnimSegment1035);

SoHAnimJoint* SoHAnimJoint1042 = new SoHAnimJoint();
SoHAnimJoint1042->X3DNode::setName(QString("r_carpal_distal_phalanx_1"));
SoHAnimJoint1042->setDEF(QString("hanim_r_carpal_distal_phalanx_1"));
SoHAnimJoint1042->setCenter(new float[]{-0.1825,-0.0522,0.6455});
SoHAnimJoint1042->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1042->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1043 = new SoHAnimSegment();
SoHAnimSegment1043->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_distal_phalanx_1"));
SoHAnimSegment1043->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1"));
SoTouchSensor* SoTouchSensor1044 = new SoTouchSensor();
SoTouchSensor1044->setDescription(QString("joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1"));
SoHAnimSegment1043->addChild(*SoTouchSensor1044);

SoTransform* SoTransform1045 = new SoTransform();
SoTransform1045->setTranslation(new float[]{-0.1825,-0.0522,0.6455});
SoShape* SoShape1046 = new SoShape();
SoShape1046->setUSE(QString("JointShape"));
SoTransform1045->addChild(*SoShape1046);

SoHAnimSegment1043->addChild(*SoTransform1045);

SoHAnimSite* SoHAnimSite1047 = new SoHAnimSite();
SoHAnimSite1047->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_distal_phalanx_1_tip"));
SoHAnimSite1047->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip"));
SoTransform* SoTransform1048 = new SoTransform();
SoTransform1048->setTranslation(new float[]{-0.1825,-0.0522,0.6455});
SoShape* SoShape1049 = new SoShape();
SoShape1049->setUSE(QString("SiteShape"));
SoTransform1048->addChild(*SoShape1049);

SoHAnimSite1047->addChild(*SoTransform1048);

SoHAnimSegment1043->addChild(*SoHAnimSite1047);

SoHAnimJoint1042->addChildren(*SoHAnimSegment1043);

SoHAnimJoint1034->addChildren(*SoHAnimJoint1042);

SoHAnimJoint1026->addChildren(*SoHAnimJoint1034);

SoHAnimJoint1018->addChildren(*SoHAnimJoint1026);

SoHAnimJoint1010->addChildren(*SoHAnimJoint1018);

SoHAnimJoint* SoHAnimJoint1050 = new SoHAnimJoint();
SoHAnimJoint1050->X3DNode::setName(QString("r_trapezoid"));
SoHAnimJoint1050->setDEF(QString("hanim_r_trapezoid"));
SoHAnimJoint1050->setCenter(new float[]{-0.1811,-0.0935,0.6984});
SoHAnimJoint1050->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1050->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1051 = new SoHAnimSegment();
SoHAnimSegment1051->X3DNode::setName(QString("SEGMENT_FOR_r_trapezoid"));
SoHAnimSegment1051->setDEF(QString("hanim_SEGMENT_FOR_r_trapezoid"));
SoTouchSensor* SoTouchSensor1052 = new SoTouchSensor();
SoTouchSensor1052->setDescription(QString("joint r_trapezoid segment SEGMENT_FOR_r_trapezoid"));
SoHAnimSegment1051->addChild(*SoTouchSensor1052);

SoTransform* SoTransform1053 = new SoTransform();
SoTransform1053->setTranslation(new float[]{-0.1811,-0.0935,0.6984});
SoShape* SoShape1054 = new SoShape();
SoShape1054->setUSE(QString("JointShape"));
SoTransform1053->addChild(*SoShape1054);

SoHAnimSegment1051->addChild(*SoTransform1053);

SoHAnimSite* SoHAnimSite1055 = new SoHAnimSite();
SoHAnimSite1055->X3DNode::setName(QString("SEGMENT_FOR_r_trapezoid_tip"));
SoHAnimSite1055->setDEF(QString("hanim_SEGMENT_FOR_r_trapezoid_tip"));
SoTransform* SoTransform1056 = new SoTransform();
SoTransform1056->setTranslation(new float[]{-0.1811,-0.0935,0.6984});
SoShape* SoShape1057 = new SoShape();
SoShape1057->setUSE(QString("SiteShape"));
SoTransform1056->addChild(*SoShape1057);

SoHAnimSite1055->addChild(*SoTransform1056);

SoHAnimSegment1051->addChild(*SoHAnimSite1055);

SoHAnimJoint1050->addChildren(*SoHAnimSegment1051);

SoHAnimJoint* SoHAnimJoint1058 = new SoHAnimJoint();
SoHAnimJoint1058->X3DNode::setName(QString("r_metacarpal_2"));
SoHAnimJoint1058->setDEF(QString("hanim_r_metacarpal_2"));
SoHAnimJoint1058->setCenter(new float[]{-0.1811,-0.0922,0.679});
SoHAnimJoint1058->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1058->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1059 = new SoHAnimSegment();
SoHAnimSegment1059->X3DNode::setName(QString("SEGMENT_FOR_r_metacarpal_2"));
SoHAnimSegment1059->setDEF(QString("hanim_SEGMENT_FOR_r_metacarpal_2"));
SoTouchSensor* SoTouchSensor1060 = new SoTouchSensor();
SoTouchSensor1060->setDescription(QString("joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2"));
SoHAnimSegment1059->addChild(*SoTouchSensor1060);

SoTransform* SoTransform1061 = new SoTransform();
SoTransform1061->setTranslation(new float[]{-0.1811,-0.0922,0.679});
SoShape* SoShape1062 = new SoShape();
SoShape1062->setUSE(QString("JointShape"));
SoTransform1061->addChild(*SoShape1062);

SoHAnimSegment1059->addChild(*SoTransform1061);

SoHAnimSite* SoHAnimSite1063 = new SoHAnimSite();
SoHAnimSite1063->X3DNode::setName(QString("SEGMENT_FOR_r_metacarpal_2_tip"));
SoHAnimSite1063->setDEF(QString("hanim_SEGMENT_FOR_r_metacarpal_2_tip"));
SoTransform* SoTransform1064 = new SoTransform();
SoTransform1064->setTranslation(new float[]{-0.1811,-0.0922,0.679});
SoShape* SoShape1065 = new SoShape();
SoShape1065->setUSE(QString("SiteShape"));
SoTransform1064->addChild(*SoShape1065);

SoHAnimSite1063->addChild(*SoTransform1064);

SoHAnimSegment1059->addChild(*SoHAnimSite1063);

SoHAnimJoint1058->addChildren(*SoHAnimSegment1059);

SoHAnimJoint* SoHAnimJoint1066 = new SoHAnimJoint();
SoHAnimJoint1066->X3DNode::setName(QString("r_carpal_proximal_phalanx_2"));
SoHAnimJoint1066->setDEF(QString("hanim_r_carpal_proximal_phalanx_2"));
SoHAnimJoint1066->setCenter(new float[]{-0.1835,-0.0868,0.6286});
SoHAnimJoint1066->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1066->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1067 = new SoHAnimSegment();
SoHAnimSegment1067->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_proximal_phalanx_2"));
SoHAnimSegment1067->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2"));
SoTouchSensor* SoTouchSensor1068 = new SoTouchSensor();
SoTouchSensor1068->setDescription(QString("joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2"));
SoHAnimSegment1067->addChild(*SoTouchSensor1068);

SoTransform* SoTransform1069 = new SoTransform();
SoTransform1069->setTranslation(new float[]{-0.1835,-0.0868,0.6286});
SoShape* SoShape1070 = new SoShape();
SoShape1070->setUSE(QString("JointShape"));
SoTransform1069->addChild(*SoShape1070);

SoHAnimSegment1067->addChild(*SoTransform1069);

SoHAnimSite* SoHAnimSite1071 = new SoHAnimSite();
SoHAnimSite1071->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip"));
SoHAnimSite1071->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip"));
SoTransform* SoTransform1072 = new SoTransform();
SoTransform1072->setTranslation(new float[]{-0.1835,-0.0868,0.6286});
SoShape* SoShape1073 = new SoShape();
SoShape1073->setUSE(QString("SiteShape"));
SoTransform1072->addChild(*SoShape1073);

SoHAnimSite1071->addChild(*SoTransform1072);

SoHAnimSegment1067->addChild(*SoHAnimSite1071);

SoHAnimJoint1066->addChildren(*SoHAnimSegment1067);

SoHAnimJoint* SoHAnimJoint1074 = new SoHAnimJoint();
SoHAnimJoint1074->X3DNode::setName(QString("r_carpal_middle_phalanx_2"));
SoHAnimJoint1074->setDEF(QString("hanim_r_carpal_middle_phalanx_2"));
SoHAnimJoint1074->setCenter(new float[]{-0.1815,-0.0877,0.5983});
SoHAnimJoint1074->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1074->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1075 = new SoHAnimSegment();
SoHAnimSegment1075->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_middle_phalanx_2"));
SoHAnimSegment1075->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2"));
SoTouchSensor* SoTouchSensor1076 = new SoTouchSensor();
SoTouchSensor1076->setDescription(QString("joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2"));
SoHAnimSegment1075->addChild(*SoTouchSensor1076);

SoTransform* SoTransform1077 = new SoTransform();
SoTransform1077->setTranslation(new float[]{-0.1815,-0.0877,0.5983});
SoShape* SoShape1078 = new SoShape();
SoShape1078->setUSE(QString("JointShape"));
SoTransform1077->addChild(*SoShape1078);

SoHAnimSegment1075->addChild(*SoTransform1077);

SoHAnimSite* SoHAnimSite1079 = new SoHAnimSite();
SoHAnimSite1079->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_middle_phalanx_2_tip"));
SoHAnimSite1079->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip"));
SoTransform* SoTransform1080 = new SoTransform();
SoTransform1080->setTranslation(new float[]{-0.1815,-0.0877,0.5983});
SoShape* SoShape1081 = new SoShape();
SoShape1081->setUSE(QString("SiteShape"));
SoTransform1080->addChild(*SoShape1081);

SoHAnimSite1079->addChild(*SoTransform1080);

SoHAnimSegment1075->addChild(*SoHAnimSite1079);

SoHAnimJoint1074->addChildren(*SoHAnimSegment1075);

SoHAnimJoint* SoHAnimJoint1082 = new SoHAnimJoint();
SoHAnimJoint1082->X3DNode::setName(QString("r_carpal_distal_phalanx_2"));
SoHAnimJoint1082->setDEF(QString("hanim_r_carpal_distal_phalanx_2"));
SoHAnimJoint1082->setCenter(new float[]{-0.1805,-0.0885,0.5731});
SoHAnimJoint1082->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1082->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1083 = new SoHAnimSegment();
SoHAnimSegment1083->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_distal_phalanx_2"));
SoHAnimSegment1083->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2"));
SoTouchSensor* SoTouchSensor1084 = new SoTouchSensor();
SoTouchSensor1084->setDescription(QString("joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2"));
SoHAnimSegment1083->addChild(*SoTouchSensor1084);

SoTransform* SoTransform1085 = new SoTransform();
SoTransform1085->setTranslation(new float[]{-0.1805,-0.0885,0.5731});
SoShape* SoShape1086 = new SoShape();
SoShape1086->setUSE(QString("JointShape"));
SoTransform1085->addChild(*SoShape1086);

SoHAnimSegment1083->addChild(*SoTransform1085);

SoHAnimSite* SoHAnimSite1087 = new SoHAnimSite();
SoHAnimSite1087->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_distal_phalanx_2_tip"));
SoHAnimSite1087->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip"));
SoTransform* SoTransform1088 = new SoTransform();
SoTransform1088->setTranslation(new float[]{-0.1805,-0.0885,0.5731});
SoShape* SoShape1089 = new SoShape();
SoShape1089->setUSE(QString("SiteShape"));
SoTransform1088->addChild(*SoShape1089);

SoHAnimSite1087->addChild(*SoTransform1088);

SoHAnimSegment1083->addChild(*SoHAnimSite1087);

SoHAnimJoint1082->addChildren(*SoHAnimSegment1083);

SoHAnimJoint1074->addChildren(*SoHAnimJoint1082);

SoHAnimJoint1066->addChildren(*SoHAnimJoint1074);

SoHAnimJoint1058->addChildren(*SoHAnimJoint1066);

SoHAnimJoint1050->addChildren(*SoHAnimJoint1058);

SoHAnimJoint1010->addChildren(*SoHAnimJoint1050);

SoHAnimJoint* SoHAnimJoint1090 = new SoHAnimJoint();
SoHAnimJoint1090->X3DNode::setName(QString("r_capitate"));
SoHAnimJoint1090->setDEF(QString("hanim_r_capitate"));
SoHAnimJoint1090->setCenter(new float[]{-0.1809,-0.1067,0.7});
SoHAnimJoint1090->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1090->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1091 = new SoHAnimSegment();
SoHAnimSegment1091->X3DNode::setName(QString("SEGMENT_FOR_r_capitate"));
SoHAnimSegment1091->setDEF(QString("hanim_SEGMENT_FOR_r_capitate"));
SoTouchSensor* SoTouchSensor1092 = new SoTouchSensor();
SoTouchSensor1092->setDescription(QString("joint r_capitate segment SEGMENT_FOR_r_capitate"));
SoHAnimSegment1091->addChild(*SoTouchSensor1092);

SoTransform* SoTransform1093 = new SoTransform();
SoTransform1093->setTranslation(new float[]{-0.1809,-0.1067,0.7});
SoShape* SoShape1094 = new SoShape();
SoShape1094->setUSE(QString("JointShape"));
SoTransform1093->addChild(*SoShape1094);

SoHAnimSegment1091->addChild(*SoTransform1093);

SoHAnimSite* SoHAnimSite1095 = new SoHAnimSite();
SoHAnimSite1095->X3DNode::setName(QString("SEGMENT_FOR_r_capitate_tip"));
SoHAnimSite1095->setDEF(QString("hanim_SEGMENT_FOR_r_capitate_tip"));
SoTransform* SoTransform1096 = new SoTransform();
SoTransform1096->setTranslation(new float[]{-0.1809,-0.1067,0.7});
SoShape* SoShape1097 = new SoShape();
SoShape1097->setUSE(QString("SiteShape"));
SoTransform1096->addChild(*SoShape1097);

SoHAnimSite1095->addChild(*SoTransform1096);

SoHAnimSegment1091->addChild(*SoHAnimSite1095);

SoHAnimJoint1090->addChildren(*SoHAnimSegment1091);

SoHAnimJoint* SoHAnimJoint1098 = new SoHAnimJoint();
SoHAnimJoint1098->X3DNode::setName(QString("r_metacarpal_3"));
SoHAnimJoint1098->setDEF(QString("hanim_r_metacarpal_3"));
SoHAnimJoint1098->setCenter(new float[]{-0.1809,-0.1081,0.6772});
SoHAnimJoint1098->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1098->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1099 = new SoHAnimSegment();
SoHAnimSegment1099->X3DNode::setName(QString("SEGMENT_FOR_r_metacarpal_3"));
SoHAnimSegment1099->setDEF(QString("hanim_SEGMENT_FOR_r_metacarpal_3"));
SoTouchSensor* SoTouchSensor1100 = new SoTouchSensor();
SoTouchSensor1100->setDescription(QString("joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3"));
SoHAnimSegment1099->addChild(*SoTouchSensor1100);

SoTransform* SoTransform1101 = new SoTransform();
SoTransform1101->setTranslation(new float[]{-0.1809,-0.1081,0.6772});
SoShape* SoShape1102 = new SoShape();
SoShape1102->setUSE(QString("JointShape"));
SoTransform1101->addChild(*SoShape1102);

SoHAnimSegment1099->addChild(*SoTransform1101);

SoHAnimSite* SoHAnimSite1103 = new SoHAnimSite();
SoHAnimSite1103->X3DNode::setName(QString("SEGMENT_FOR_r_metacarpal_3_tip"));
SoHAnimSite1103->setDEF(QString("hanim_SEGMENT_FOR_r_metacarpal_3_tip"));
SoTransform* SoTransform1104 = new SoTransform();
SoTransform1104->setTranslation(new float[]{-0.1809,-0.1081,0.6772});
SoShape* SoShape1105 = new SoShape();
SoShape1105->setUSE(QString("SiteShape"));
SoTransform1104->addChild(*SoShape1105);

SoHAnimSite1103->addChild(*SoTransform1104);

SoHAnimSegment1099->addChild(*SoHAnimSite1103);

SoHAnimJoint1098->addChildren(*SoHAnimSegment1099);

SoHAnimJoint* SoHAnimJoint1106 = new SoHAnimJoint();
SoHAnimJoint1106->X3DNode::setName(QString("r_carpal_proximal_phalanx_3"));
SoHAnimJoint1106->setDEF(QString("hanim_r_carpal_proximal_phalanx_3"));
SoHAnimJoint1106->setCenter(new float[]{-0.1835,-0.1058,0.6264});
SoHAnimJoint1106->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1106->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1107 = new SoHAnimSegment();
SoHAnimSegment1107->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_proximal_phalanx_3"));
SoHAnimSegment1107->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3"));
SoTouchSensor* SoTouchSensor1108 = new SoTouchSensor();
SoTouchSensor1108->setDescription(QString("joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3"));
SoHAnimSegment1107->addChild(*SoTouchSensor1108);

SoTransform* SoTransform1109 = new SoTransform();
SoTransform1109->setTranslation(new float[]{-0.1835,-0.1058,0.6264});
SoShape* SoShape1110 = new SoShape();
SoShape1110->setUSE(QString("JointShape"));
SoTransform1109->addChild(*SoShape1110);

SoHAnimSegment1107->addChild(*SoTransform1109);

SoHAnimSite* SoHAnimSite1111 = new SoHAnimSite();
SoHAnimSite1111->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip"));
SoHAnimSite1111->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip"));
SoTransform* SoTransform1112 = new SoTransform();
SoTransform1112->setTranslation(new float[]{-0.1835,-0.1058,0.6264});
SoShape* SoShape1113 = new SoShape();
SoShape1113->setUSE(QString("SiteShape"));
SoTransform1112->addChild(*SoShape1113);

SoHAnimSite1111->addChild(*SoTransform1112);

SoHAnimSegment1107->addChild(*SoHAnimSite1111);

SoHAnimJoint1106->addChildren(*SoHAnimSegment1107);

SoHAnimJoint* SoHAnimJoint1114 = new SoHAnimJoint();
SoHAnimJoint1114->X3DNode::setName(QString("r_carpal_middle_phalanx_3"));
SoHAnimJoint1114->setDEF(QString("hanim_r_carpal_middle_phalanx_3"));
SoHAnimJoint1114->setCenter(new float[]{-0.1815,-0.1054,0.5947});
SoHAnimJoint1114->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1114->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1115 = new SoHAnimSegment();
SoHAnimSegment1115->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_middle_phalanx_3"));
SoHAnimSegment1115->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3"));
SoTouchSensor* SoTouchSensor1116 = new SoTouchSensor();
SoTouchSensor1116->setDescription(QString("joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3"));
SoHAnimSegment1115->addChild(*SoTouchSensor1116);

SoTransform* SoTransform1117 = new SoTransform();
SoTransform1117->setTranslation(new float[]{-0.1815,-0.1054,0.5947});
SoShape* SoShape1118 = new SoShape();
SoShape1118->setUSE(QString("JointShape"));
SoTransform1117->addChild(*SoShape1118);

SoHAnimSegment1115->addChild(*SoTransform1117);

SoHAnimSite* SoHAnimSite1119 = new SoHAnimSite();
SoHAnimSite1119->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_middle_phalanx_3_tip"));
SoHAnimSite1119->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip"));
SoTransform* SoTransform1120 = new SoTransform();
SoTransform1120->setTranslation(new float[]{-0.1815,-0.1054,0.5947});
SoShape* SoShape1121 = new SoShape();
SoShape1121->setUSE(QString("SiteShape"));
SoTransform1120->addChild(*SoShape1121);

SoHAnimSite1119->addChild(*SoTransform1120);

SoHAnimSegment1115->addChild(*SoHAnimSite1119);

SoHAnimJoint1114->addChildren(*SoHAnimSegment1115);

SoHAnimJoint* SoHAnimJoint1122 = new SoHAnimJoint();
SoHAnimJoint1122->X3DNode::setName(QString("r_carpal_distal_phalanx_3"));
SoHAnimJoint1122->setDEF(QString("hanim_r_carpal_distal_phalanx_3"));
SoHAnimJoint1122->setCenter(new float[]{-0.1805,-0.1056,0.5668});
SoHAnimJoint1122->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1122->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1123 = new SoHAnimSegment();
SoHAnimSegment1123->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_distal_phalanx_3"));
SoHAnimSegment1123->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3"));
SoTouchSensor* SoTouchSensor1124 = new SoTouchSensor();
SoTouchSensor1124->setDescription(QString("joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3"));
SoHAnimSegment1123->addChild(*SoTouchSensor1124);

SoTransform* SoTransform1125 = new SoTransform();
SoTransform1125->setTranslation(new float[]{-0.1805,-0.1056,0.5668});
SoShape* SoShape1126 = new SoShape();
SoShape1126->setUSE(QString("JointShape"));
SoTransform1125->addChild(*SoShape1126);

SoHAnimSegment1123->addChild(*SoTransform1125);

SoHAnimSite* SoHAnimSite1127 = new SoHAnimSite();
SoHAnimSite1127->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_distal_phalanx_3_tip"));
SoHAnimSite1127->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip"));
SoTransform* SoTransform1128 = new SoTransform();
SoTransform1128->setTranslation(new float[]{-0.1805,-0.1056,0.5668});
SoShape* SoShape1129 = new SoShape();
SoShape1129->setUSE(QString("SiteShape"));
SoTransform1128->addChild(*SoShape1129);

SoHAnimSite1127->addChild(*SoTransform1128);

SoHAnimSegment1123->addChild(*SoHAnimSite1127);

SoHAnimJoint1122->addChildren(*SoHAnimSegment1123);

SoHAnimJoint1114->addChildren(*SoHAnimJoint1122);

SoHAnimJoint1106->addChildren(*SoHAnimJoint1114);

SoHAnimJoint1098->addChildren(*SoHAnimJoint1106);

SoHAnimJoint1090->addChildren(*SoHAnimJoint1098);

SoHAnimJoint1010->addChildren(*SoHAnimJoint1090);

SoHAnimJoint* SoHAnimJoint1130 = new SoHAnimJoint();
SoHAnimJoint1130->X3DNode::setName(QString("r_hamate"));
SoHAnimJoint1130->setDEF(QString("hanim_r_hamate"));
SoHAnimJoint1130->setCenter(new float[]{-0.1809,-0.1276,0.6973});
SoHAnimJoint1130->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1130->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1131 = new SoHAnimSegment();
SoHAnimSegment1131->X3DNode::setName(QString("SEGMENT_FOR_r_hamate"));
SoHAnimSegment1131->setDEF(QString("hanim_SEGMENT_FOR_r_hamate"));
SoTouchSensor* SoTouchSensor1132 = new SoTouchSensor();
SoTouchSensor1132->setDescription(QString("joint r_hamate segment SEGMENT_FOR_r_hamate"));
SoHAnimSegment1131->addChild(*SoTouchSensor1132);

SoTransform* SoTransform1133 = new SoTransform();
SoTransform1133->setTranslation(new float[]{-0.1809,-0.1276,0.6973});
SoShape* SoShape1134 = new SoShape();
SoShape1134->setUSE(QString("JointShape"));
SoTransform1133->addChild(*SoShape1134);

SoHAnimSegment1131->addChild(*SoTransform1133);

SoHAnimSite* SoHAnimSite1135 = new SoHAnimSite();
SoHAnimSite1135->X3DNode::setName(QString("SEGMENT_FOR_r_hamate_tip"));
SoHAnimSite1135->setDEF(QString("hanim_SEGMENT_FOR_r_hamate_tip"));
SoTransform* SoTransform1136 = new SoTransform();
SoTransform1136->setTranslation(new float[]{-0.1809,-0.1276,0.6973});
SoShape* SoShape1137 = new SoShape();
SoShape1137->setUSE(QString("SiteShape"));
SoTransform1136->addChild(*SoShape1137);

SoHAnimSite1135->addChild(*SoTransform1136);

SoHAnimSegment1131->addChild(*SoHAnimSite1135);

SoHAnimJoint1130->addChildren(*SoHAnimSegment1131);

SoHAnimJoint* SoHAnimJoint1138 = new SoHAnimJoint();
SoHAnimJoint1138->X3DNode::setName(QString("r_metacarpal_4"));
SoHAnimJoint1138->setDEF(QString("hanim_r_metacarpal_4"));
SoHAnimJoint1138->setCenter(new float[]{-0.1809,-0.1218,0.6777});
SoHAnimJoint1138->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1138->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1139 = new SoHAnimSegment();
SoHAnimSegment1139->X3DNode::setName(QString("SEGMENT_FOR_r_metacarpal_4"));
SoHAnimSegment1139->setDEF(QString("hanim_SEGMENT_FOR_r_metacarpal_4"));
SoTouchSensor* SoTouchSensor1140 = new SoTouchSensor();
SoTouchSensor1140->setDescription(QString("joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4"));
SoHAnimSegment1139->addChild(*SoTouchSensor1140);

SoTransform* SoTransform1141 = new SoTransform();
SoTransform1141->setTranslation(new float[]{-0.1809,-0.1218,0.6777});
SoShape* SoShape1142 = new SoShape();
SoShape1142->setUSE(QString("JointShape"));
SoTransform1141->addChild(*SoShape1142);

SoHAnimSegment1139->addChild(*SoTransform1141);

SoHAnimSite* SoHAnimSite1143 = new SoHAnimSite();
SoHAnimSite1143->X3DNode::setName(QString("SEGMENT_FOR_r_metacarpal_4_tip"));
SoHAnimSite1143->setDEF(QString("hanim_SEGMENT_FOR_r_metacarpal_4_tip"));
SoTransform* SoTransform1144 = new SoTransform();
SoTransform1144->setTranslation(new float[]{-0.1809,-0.1218,0.6777});
SoShape* SoShape1145 = new SoShape();
SoShape1145->setUSE(QString("SiteShape"));
SoTransform1144->addChild(*SoShape1145);

SoHAnimSite1143->addChild(*SoTransform1144);

SoHAnimSegment1139->addChild(*SoHAnimSite1143);

SoHAnimJoint1138->addChildren(*SoHAnimSegment1139);

SoHAnimJoint* SoHAnimJoint1146 = new SoHAnimJoint();
SoHAnimJoint1146->X3DNode::setName(QString("r_carpal_proximal_phalanx_4"));
SoHAnimJoint1146->setDEF(QString("hanim_r_carpal_proximal_phalanx_4"));
SoHAnimJoint1146->setCenter(new float[]{-0.1835,-0.1233,0.6255});
SoHAnimJoint1146->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1146->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1147 = new SoHAnimSegment();
SoHAnimSegment1147->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_proximal_phalanx_4"));
SoHAnimSegment1147->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4"));
SoTouchSensor* SoTouchSensor1148 = new SoTouchSensor();
SoTouchSensor1148->setDescription(QString("joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4"));
SoHAnimSegment1147->addChild(*SoTouchSensor1148);

SoTransform* SoTransform1149 = new SoTransform();
SoTransform1149->setTranslation(new float[]{-0.1835,-0.1233,0.6255});
SoShape* SoShape1150 = new SoShape();
SoShape1150->setUSE(QString("JointShape"));
SoTransform1149->addChild(*SoShape1150);

SoHAnimSegment1147->addChild(*SoTransform1149);

SoHAnimSite* SoHAnimSite1151 = new SoHAnimSite();
SoHAnimSite1151->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip"));
SoHAnimSite1151->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip"));
SoTransform* SoTransform1152 = new SoTransform();
SoTransform1152->setTranslation(new float[]{-0.1835,-0.1233,0.6255});
SoShape* SoShape1153 = new SoShape();
SoShape1153->setUSE(QString("SiteShape"));
SoTransform1152->addChild(*SoShape1153);

SoHAnimSite1151->addChild(*SoTransform1152);

SoHAnimSegment1147->addChild(*SoHAnimSite1151);

SoHAnimJoint1146->addChildren(*SoHAnimSegment1147);

SoHAnimJoint* SoHAnimJoint1154 = new SoHAnimJoint();
SoHAnimJoint1154->X3DNode::setName(QString("r_carpal_middle_phalanx_4"));
SoHAnimJoint1154->setDEF(QString("hanim_r_carpal_middle_phalanx_4"));
SoHAnimJoint1154->setCenter(new float[]{-0.1815,-0.1225,0.598});
SoHAnimJoint1154->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1154->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1155 = new SoHAnimSegment();
SoHAnimSegment1155->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_middle_phalanx_4"));
SoHAnimSegment1155->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4"));
SoTouchSensor* SoTouchSensor1156 = new SoTouchSensor();
SoTouchSensor1156->setDescription(QString("joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4"));
SoHAnimSegment1155->addChild(*SoTouchSensor1156);

SoTransform* SoTransform1157 = new SoTransform();
SoTransform1157->setTranslation(new float[]{-0.1815,-0.1225,0.598});
SoShape* SoShape1158 = new SoShape();
SoShape1158->setUSE(QString("JointShape"));
SoTransform1157->addChild(*SoShape1158);

SoHAnimSegment1155->addChild(*SoTransform1157);

SoHAnimSite* SoHAnimSite1159 = new SoHAnimSite();
SoHAnimSite1159->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_middle_phalanx_4_tip"));
SoHAnimSite1159->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip"));
SoTransform* SoTransform1160 = new SoTransform();
SoTransform1160->setTranslation(new float[]{-0.1815,-0.1225,0.598});
SoShape* SoShape1161 = new SoShape();
SoShape1161->setUSE(QString("SiteShape"));
SoTransform1160->addChild(*SoShape1161);

SoHAnimSite1159->addChild(*SoTransform1160);

SoHAnimSegment1155->addChild(*SoHAnimSite1159);

SoHAnimJoint1154->addChildren(*SoHAnimSegment1155);

SoHAnimJoint* SoHAnimJoint1162 = new SoHAnimJoint();
SoHAnimJoint1162->X3DNode::setName(QString("r_carpal_distal_phalanx_4"));
SoHAnimJoint1162->setDEF(QString("hanim_r_carpal_distal_phalanx_4"));
SoHAnimJoint1162->setCenter(new float[]{-0.1805,-0.1217,0.5722});
SoHAnimJoint1162->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1162->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1163 = new SoHAnimSegment();
SoHAnimSegment1163->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_distal_phalanx_4"));
SoHAnimSegment1163->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4"));
SoTouchSensor* SoTouchSensor1164 = new SoTouchSensor();
SoTouchSensor1164->setDescription(QString("joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4"));
SoHAnimSegment1163->addChild(*SoTouchSensor1164);

SoTransform* SoTransform1165 = new SoTransform();
SoTransform1165->setTranslation(new float[]{-0.1805,-0.1217,0.5722});
SoShape* SoShape1166 = new SoShape();
SoShape1166->setUSE(QString("JointShape"));
SoTransform1165->addChild(*SoShape1166);

SoHAnimSegment1163->addChild(*SoTransform1165);

SoHAnimSite* SoHAnimSite1167 = new SoHAnimSite();
SoHAnimSite1167->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_distal_phalanx_4_tip"));
SoHAnimSite1167->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip"));
SoTransform* SoTransform1168 = new SoTransform();
SoTransform1168->setTranslation(new float[]{-0.1805,-0.1217,0.5722});
SoShape* SoShape1169 = new SoShape();
SoShape1169->setUSE(QString("SiteShape"));
SoTransform1168->addChild(*SoShape1169);

SoHAnimSite1167->addChild(*SoTransform1168);

SoHAnimSegment1163->addChild(*SoHAnimSite1167);

SoHAnimJoint1162->addChildren(*SoHAnimSegment1163);

SoHAnimJoint1154->addChildren(*SoHAnimJoint1162);

SoHAnimJoint1146->addChildren(*SoHAnimJoint1154);

SoHAnimJoint1138->addChildren(*SoHAnimJoint1146);

SoHAnimJoint1130->addChildren(*SoHAnimJoint1138);

SoHAnimJoint* SoHAnimJoint1170 = new SoHAnimJoint();
SoHAnimJoint1170->X3DNode::setName(QString("r_metacarpal_5"));
SoHAnimJoint1170->setDEF(QString("hanim_r_metacarpal_5"));
SoHAnimJoint1170->setCenter(new float[]{-0.1814,-0.1347,0.6797});
SoHAnimJoint1170->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1170->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1171 = new SoHAnimSegment();
SoHAnimSegment1171->X3DNode::setName(QString("SEGMENT_FOR_r_metacarpal_5"));
SoHAnimSegment1171->setDEF(QString("hanim_SEGMENT_FOR_r_metacarpal_5"));
SoTouchSensor* SoTouchSensor1172 = new SoTouchSensor();
SoTouchSensor1172->setDescription(QString("joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5"));
SoHAnimSegment1171->addChild(*SoTouchSensor1172);

SoTransform* SoTransform1173 = new SoTransform();
SoTransform1173->setTranslation(new float[]{-0.1814,-0.1347,0.6797});
SoShape* SoShape1174 = new SoShape();
SoShape1174->setUSE(QString("JointShape"));
SoTransform1173->addChild(*SoShape1174);

SoHAnimSegment1171->addChild(*SoTransform1173);

SoHAnimSite* SoHAnimSite1175 = new SoHAnimSite();
SoHAnimSite1175->X3DNode::setName(QString("SEGMENT_FOR_r_metacarpal_5_tip"));
SoHAnimSite1175->setDEF(QString("hanim_SEGMENT_FOR_r_metacarpal_5_tip"));
SoTransform* SoTransform1176 = new SoTransform();
SoTransform1176->setTranslation(new float[]{-0.1814,-0.1347,0.6797});
SoShape* SoShape1177 = new SoShape();
SoShape1177->setUSE(QString("SiteShape"));
SoTransform1176->addChild(*SoShape1177);

SoHAnimSite1175->addChild(*SoTransform1176);

SoHAnimSegment1171->addChild(*SoHAnimSite1175);

SoHAnimJoint1170->addChildren(*SoHAnimSegment1171);

SoHAnimJoint* SoHAnimJoint1178 = new SoHAnimJoint();
SoHAnimJoint1178->X3DNode::setName(QString("r_carpal_proximal_phalanx_5"));
SoHAnimJoint1178->setDEF(QString("hanim_r_carpal_proximal_phalanx_5"));
SoHAnimJoint1178->setCenter(new float[]{-0.1832,-0.1389,0.6295});
SoHAnimJoint1178->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1178->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1179 = new SoHAnimSegment();
SoHAnimSegment1179->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_proximal_phalanx_5"));
SoHAnimSegment1179->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5"));
SoTouchSensor* SoTouchSensor1180 = new SoTouchSensor();
SoTouchSensor1180->setDescription(QString("joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5"));
SoHAnimSegment1179->addChild(*SoTouchSensor1180);

SoTransform* SoTransform1181 = new SoTransform();
SoTransform1181->setTranslation(new float[]{-0.1832,-0.1389,0.6295});
SoShape* SoShape1182 = new SoShape();
SoShape1182->setUSE(QString("JointShape"));
SoTransform1181->addChild(*SoShape1182);

SoHAnimSegment1179->addChild(*SoTransform1181);

SoHAnimSite* SoHAnimSite1183 = new SoHAnimSite();
SoHAnimSite1183->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip"));
SoHAnimSite1183->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip"));
SoTransform* SoTransform1184 = new SoTransform();
SoTransform1184->setTranslation(new float[]{-0.1832,-0.1389,0.6295});
SoShape* SoShape1185 = new SoShape();
SoShape1185->setUSE(QString("SiteShape"));
SoTransform1184->addChild(*SoShape1185);

SoHAnimSite1183->addChild(*SoTransform1184);

SoHAnimSegment1179->addChild(*SoHAnimSite1183);

SoHAnimJoint1178->addChildren(*SoHAnimSegment1179);

SoHAnimJoint* SoHAnimJoint1186 = new SoHAnimJoint();
SoHAnimJoint1186->X3DNode::setName(QString("r_carpal_middle_phalanx_5"));
SoHAnimJoint1186->setDEF(QString("hanim_r_carpal_middle_phalanx_5"));
SoHAnimJoint1186->setCenter(new float[]{-0.1815,-0.139,0.6124});
SoHAnimJoint1186->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1186->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1187 = new SoHAnimSegment();
SoHAnimSegment1187->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_middle_phalanx_5"));
SoHAnimSegment1187->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5"));
SoTouchSensor* SoTouchSensor1188 = new SoTouchSensor();
SoTouchSensor1188->setDescription(QString("joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5"));
SoHAnimSegment1187->addChild(*SoTouchSensor1188);

SoTransform* SoTransform1189 = new SoTransform();
SoTransform1189->setTranslation(new float[]{-0.1815,-0.139,0.6124});
SoShape* SoShape1190 = new SoShape();
SoShape1190->setUSE(QString("JointShape"));
SoTransform1189->addChild(*SoShape1190);

SoHAnimSegment1187->addChild(*SoTransform1189);

SoHAnimSite* SoHAnimSite1191 = new SoHAnimSite();
SoHAnimSite1191->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_middle_phalanx_5_tip"));
SoHAnimSite1191->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip"));
SoTransform* SoTransform1192 = new SoTransform();
SoTransform1192->setTranslation(new float[]{-0.1815,-0.139,0.6124});
SoShape* SoShape1193 = new SoShape();
SoShape1193->setUSE(QString("SiteShape"));
SoTransform1192->addChild(*SoShape1193);

SoHAnimSite1191->addChild(*SoTransform1192);

SoHAnimSegment1187->addChild(*SoHAnimSite1191);

SoHAnimJoint1186->addChildren(*SoHAnimSegment1187);

SoHAnimJoint* SoHAnimJoint1194 = new SoHAnimJoint();
SoHAnimJoint1194->X3DNode::setName(QString("r_carpal_distal_phalanx_5"));
SoHAnimJoint1194->setDEF(QString("hanim_r_carpal_distal_phalanx_5"));
SoHAnimJoint1194->setCenter(new float[]{-0.1806,-0.1388,0.5938});
SoHAnimJoint1194->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1194->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1195 = new SoHAnimSegment();
SoHAnimSegment1195->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_distal_phalanx_5"));
SoHAnimSegment1195->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5"));
SoTouchSensor* SoTouchSensor1196 = new SoTouchSensor();
SoTouchSensor1196->setDescription(QString("joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5"));
SoHAnimSegment1195->addChild(*SoTouchSensor1196);

SoTransform* SoTransform1197 = new SoTransform();
SoTransform1197->setTranslation(new float[]{-0.1806,-0.1388,0.5938});
SoShape* SoShape1198 = new SoShape();
SoShape1198->setUSE(QString("JointShape"));
SoTransform1197->addChild(*SoShape1198);

SoHAnimSegment1195->addChild(*SoTransform1197);

SoHAnimSite* SoHAnimSite1199 = new SoHAnimSite();
SoHAnimSite1199->X3DNode::setName(QString("SEGMENT_FOR_r_carpal_distal_phalanx_5_tip"));
SoHAnimSite1199->setDEF(QString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip"));
SoTransform* SoTransform1200 = new SoTransform();
SoTransform1200->setTranslation(new float[]{-0.1806,-0.1388,0.5938});
SoShape* SoShape1201 = new SoShape();
SoShape1201->setUSE(QString("SiteShape"));
SoTransform1200->addChild(*SoShape1201);

SoHAnimSite1199->addChild(*SoTransform1200);

SoHAnimSegment1195->addChild(*SoHAnimSite1199);

SoHAnimJoint1194->addChildren(*SoHAnimSegment1195);

SoHAnimJoint1186->addChildren(*SoHAnimJoint1194);

SoHAnimJoint1178->addChildren(*SoHAnimJoint1186);

SoHAnimJoint1170->addChildren(*SoHAnimJoint1178);

SoHAnimJoint1130->addChildren(*SoHAnimJoint1170);

SoHAnimJoint1010->addChildren(*SoHAnimJoint1130);

SoHAnimJoint1002->addChildren(*SoHAnimJoint1010);

SoHAnimJoint994->addChildren(*SoHAnimJoint1002);

SoHAnimJoint986->addChildren(*SoHAnimJoint994);

SoHAnimJoint978->addChildren(*SoHAnimJoint986);

SoHAnimJoint626->addChildren(*SoHAnimJoint978);

SoHAnimJoint618->addChildren(*SoHAnimJoint626);

SoHAnimJoint610->addChildren(*SoHAnimJoint618);

SoHAnimJoint602->addChildren(*SoHAnimJoint610);

SoHAnimJoint594->addChildren(*SoHAnimJoint602);

SoHAnimJoint586->addChildren(*SoHAnimJoint594);

SoHAnimJoint578->addChildren(*SoHAnimJoint586);

SoHAnimJoint570->addChildren(*SoHAnimJoint578);

SoHAnimJoint562->addChildren(*SoHAnimJoint570);

SoHAnimJoint554->addChildren(*SoHAnimJoint562);

SoHAnimJoint546->addChildren(*SoHAnimJoint554);

SoHAnimJoint538->addChildren(*SoHAnimJoint546);

SoHAnimJoint530->addChildren(*SoHAnimJoint538);

SoHAnimJoint522->addChildren(*SoHAnimJoint530);

SoHAnimJoint514->addChildren(*SoHAnimJoint522);

SoHAnimJoint506->addChildren(*SoHAnimJoint514);

SoHAnimJoint498->addChildren(*SoHAnimJoint506);

SoHAnimJoint34->addChildren(*SoHAnimJoint498);

SoHAnimJoint26->addChildren(*SoHAnimJoint34);

SoHAnimHumanoid25->setSkeleton(*SoHAnimJoint26);

SoHAnimJoint* SoHAnimJoint1202 = new SoHAnimJoint();
SoHAnimJoint1202->setUSE(QString("hanim_sacrum"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1202);

SoHAnimJoint* SoHAnimJoint1203 = new SoHAnimJoint();
SoHAnimJoint1203->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1203);

SoHAnimJoint* SoHAnimJoint1204 = new SoHAnimJoint();
SoHAnimJoint1204->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1204);

SoHAnimJoint* SoHAnimJoint1205 = new SoHAnimJoint();
SoHAnimJoint1205->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1205);

SoHAnimJoint* SoHAnimJoint1206 = new SoHAnimJoint();
SoHAnimJoint1206->setUSE(QString("hanim_l_talus"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1206);

SoHAnimJoint* SoHAnimJoint1207 = new SoHAnimJoint();
SoHAnimJoint1207->setUSE(QString("hanim_l_navicular"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1207);

SoHAnimJoint* SoHAnimJoint1208 = new SoHAnimJoint();
SoHAnimJoint1208->setUSE(QString("hanim_l_cuneiform_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1208);

SoHAnimJoint* SoHAnimJoint1209 = new SoHAnimJoint();
SoHAnimJoint1209->setUSE(QString("hanim_l_metatarsal_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1209);

SoHAnimJoint* SoHAnimJoint1210 = new SoHAnimJoint();
SoHAnimJoint1210->setUSE(QString("hanim_l_tarsal_proximal_phalanx_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1210);

SoHAnimJoint* SoHAnimJoint1211 = new SoHAnimJoint();
SoHAnimJoint1211->setUSE(QString("hanim_l_tarsal_distal_phalanx_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1211);

SoHAnimJoint* SoHAnimJoint1212 = new SoHAnimJoint();
SoHAnimJoint1212->setUSE(QString("hanim_l_cuneiform_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1212);

SoHAnimJoint* SoHAnimJoint1213 = new SoHAnimJoint();
SoHAnimJoint1213->setUSE(QString("hanim_l_metatarsal_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1213);

SoHAnimJoint* SoHAnimJoint1214 = new SoHAnimJoint();
SoHAnimJoint1214->setUSE(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1214);

SoHAnimJoint* SoHAnimJoint1215 = new SoHAnimJoint();
SoHAnimJoint1215->setUSE(QString("hanim_l_tarsal_middle_phalanx_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1215);

SoHAnimJoint* SoHAnimJoint1216 = new SoHAnimJoint();
SoHAnimJoint1216->setUSE(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1216);

SoHAnimJoint* SoHAnimJoint1217 = new SoHAnimJoint();
SoHAnimJoint1217->setUSE(QString("hanim_l_cuneiform_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1217);

SoHAnimJoint* SoHAnimJoint1218 = new SoHAnimJoint();
SoHAnimJoint1218->setUSE(QString("hanim_l_metatarsal_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1218);

SoHAnimJoint* SoHAnimJoint1219 = new SoHAnimJoint();
SoHAnimJoint1219->setUSE(QString("hanim_l_tarsal_proximal_phalanx_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1219);

SoHAnimJoint* SoHAnimJoint1220 = new SoHAnimJoint();
SoHAnimJoint1220->setUSE(QString("hanim_l_tarsal_middle_phalanx_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1220);

SoHAnimJoint* SoHAnimJoint1221 = new SoHAnimJoint();
SoHAnimJoint1221->setUSE(QString("hanim_l_tarsal_distal_phalanx_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1221);

SoHAnimJoint* SoHAnimJoint1222 = new SoHAnimJoint();
SoHAnimJoint1222->setUSE(QString("hanim_l_calcaneus"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1222);

SoHAnimJoint* SoHAnimJoint1223 = new SoHAnimJoint();
SoHAnimJoint1223->setUSE(QString("hanim_l_cuboid"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1223);

SoHAnimJoint* SoHAnimJoint1224 = new SoHAnimJoint();
SoHAnimJoint1224->setUSE(QString("hanim_l_metatarsal_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1224);

SoHAnimJoint* SoHAnimJoint1225 = new SoHAnimJoint();
SoHAnimJoint1225->setUSE(QString("hanim_l_tarsal_proximal_phalanx_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1225);

SoHAnimJoint* SoHAnimJoint1226 = new SoHAnimJoint();
SoHAnimJoint1226->setUSE(QString("hanim_l_tarsal_middle_phalanx_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1226);

SoHAnimJoint* SoHAnimJoint1227 = new SoHAnimJoint();
SoHAnimJoint1227->setUSE(QString("hanim_l_tarsal_distal_phalanx_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1227);

SoHAnimJoint* SoHAnimJoint1228 = new SoHAnimJoint();
SoHAnimJoint1228->setUSE(QString("hanim_l_metatarsal_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1228);

SoHAnimJoint* SoHAnimJoint1229 = new SoHAnimJoint();
SoHAnimJoint1229->setUSE(QString("hanim_l_tarsal_proximal_phalanx_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1229);

SoHAnimJoint* SoHAnimJoint1230 = new SoHAnimJoint();
SoHAnimJoint1230->setUSE(QString("hanim_l_tarsal_middle_phalanx_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1230);

SoHAnimJoint* SoHAnimJoint1231 = new SoHAnimJoint();
SoHAnimJoint1231->setUSE(QString("hanim_l_tarsal_distal_phalanx_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1231);

SoHAnimJoint* SoHAnimJoint1232 = new SoHAnimJoint();
SoHAnimJoint1232->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1232);

SoHAnimJoint* SoHAnimJoint1233 = new SoHAnimJoint();
SoHAnimJoint1233->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1233);

SoHAnimJoint* SoHAnimJoint1234 = new SoHAnimJoint();
SoHAnimJoint1234->setUSE(QString("hanim_r_talus"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1234);

SoHAnimJoint* SoHAnimJoint1235 = new SoHAnimJoint();
SoHAnimJoint1235->setUSE(QString("hanim_r_navicular"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1235);

SoHAnimJoint* SoHAnimJoint1236 = new SoHAnimJoint();
SoHAnimJoint1236->setUSE(QString("hanim_r_cuneiform_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1236);

SoHAnimJoint* SoHAnimJoint1237 = new SoHAnimJoint();
SoHAnimJoint1237->setUSE(QString("hanim_r_metatarsal_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1237);

SoHAnimJoint* SoHAnimJoint1238 = new SoHAnimJoint();
SoHAnimJoint1238->setUSE(QString("hanim_r_tarsal_proximal_phalanx_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1238);

SoHAnimJoint* SoHAnimJoint1239 = new SoHAnimJoint();
SoHAnimJoint1239->setUSE(QString("hanim_r_tarsal_distal_phalanx_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1239);

SoHAnimJoint* SoHAnimJoint1240 = new SoHAnimJoint();
SoHAnimJoint1240->setUSE(QString("hanim_r_cuneiform_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1240);

SoHAnimJoint* SoHAnimJoint1241 = new SoHAnimJoint();
SoHAnimJoint1241->setUSE(QString("hanim_r_metatarsal_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1241);

SoHAnimJoint* SoHAnimJoint1242 = new SoHAnimJoint();
SoHAnimJoint1242->setUSE(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1242);

SoHAnimJoint* SoHAnimJoint1243 = new SoHAnimJoint();
SoHAnimJoint1243->setUSE(QString("hanim_r_tarsal_middle_phalanx_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1243);

SoHAnimJoint* SoHAnimJoint1244 = new SoHAnimJoint();
SoHAnimJoint1244->setUSE(QString("hanim_r_tarsal_distal_phalanx_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1244);

SoHAnimJoint* SoHAnimJoint1245 = new SoHAnimJoint();
SoHAnimJoint1245->setUSE(QString("hanim_r_cuneiform_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1245);

SoHAnimJoint* SoHAnimJoint1246 = new SoHAnimJoint();
SoHAnimJoint1246->setUSE(QString("hanim_r_metatarsal_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1246);

SoHAnimJoint* SoHAnimJoint1247 = new SoHAnimJoint();
SoHAnimJoint1247->setUSE(QString("hanim_r_tarsal_proximal_phalanx_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1247);

SoHAnimJoint* SoHAnimJoint1248 = new SoHAnimJoint();
SoHAnimJoint1248->setUSE(QString("hanim_r_tarsal_middle_phalanx_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1248);

SoHAnimJoint* SoHAnimJoint1249 = new SoHAnimJoint();
SoHAnimJoint1249->setUSE(QString("hanim_r_tarsal_distal_phalanx_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1249);

SoHAnimJoint* SoHAnimJoint1250 = new SoHAnimJoint();
SoHAnimJoint1250->setUSE(QString("hanim_r_calcaneus"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1250);

SoHAnimJoint* SoHAnimJoint1251 = new SoHAnimJoint();
SoHAnimJoint1251->setUSE(QString("hanim_r_cuboid"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1251);

SoHAnimJoint* SoHAnimJoint1252 = new SoHAnimJoint();
SoHAnimJoint1252->setUSE(QString("hanim_r_metatarsal_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1252);

SoHAnimJoint* SoHAnimJoint1253 = new SoHAnimJoint();
SoHAnimJoint1253->setUSE(QString("hanim_r_tarsal_proximal_phalanx_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1253);

SoHAnimJoint* SoHAnimJoint1254 = new SoHAnimJoint();
SoHAnimJoint1254->setUSE(QString("hanim_r_tarsal_middle_phalanx_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1254);

SoHAnimJoint* SoHAnimJoint1255 = new SoHAnimJoint();
SoHAnimJoint1255->setUSE(QString("hanim_r_tarsal_distal_phalanx_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1255);

SoHAnimJoint* SoHAnimJoint1256 = new SoHAnimJoint();
SoHAnimJoint1256->setUSE(QString("hanim_r_metatarsal_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1256);

SoHAnimJoint* SoHAnimJoint1257 = new SoHAnimJoint();
SoHAnimJoint1257->setUSE(QString("hanim_r_tarsal_proximal_phalanx_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1257);

SoHAnimJoint* SoHAnimJoint1258 = new SoHAnimJoint();
SoHAnimJoint1258->setUSE(QString("hanim_r_tarsal_middle_phalanx_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1258);

SoHAnimJoint* SoHAnimJoint1259 = new SoHAnimJoint();
SoHAnimJoint1259->setUSE(QString("hanim_r_tarsal_distal_phalanx_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1259);

SoHAnimJoint* SoHAnimJoint1260 = new SoHAnimJoint();
SoHAnimJoint1260->setUSE(QString("hanim_l5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1260);

SoHAnimJoint* SoHAnimJoint1261 = new SoHAnimJoint();
SoHAnimJoint1261->setUSE(QString("hanim_l4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1261);

SoHAnimJoint* SoHAnimJoint1262 = new SoHAnimJoint();
SoHAnimJoint1262->setUSE(QString("hanim_l3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1262);

SoHAnimJoint* SoHAnimJoint1263 = new SoHAnimJoint();
SoHAnimJoint1263->setUSE(QString("hanim_l2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1263);

SoHAnimJoint* SoHAnimJoint1264 = new SoHAnimJoint();
SoHAnimJoint1264->setUSE(QString("hanim_l1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1264);

SoHAnimJoint* SoHAnimJoint1265 = new SoHAnimJoint();
SoHAnimJoint1265->setUSE(QString("hanim_t12"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1265);

SoHAnimJoint* SoHAnimJoint1266 = new SoHAnimJoint();
SoHAnimJoint1266->setUSE(QString("hanim_t11"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1266);

SoHAnimJoint* SoHAnimJoint1267 = new SoHAnimJoint();
SoHAnimJoint1267->setUSE(QString("hanim_t10"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1267);

SoHAnimJoint* SoHAnimJoint1268 = new SoHAnimJoint();
SoHAnimJoint1268->setUSE(QString("hanim_t9"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1268);

SoHAnimJoint* SoHAnimJoint1269 = new SoHAnimJoint();
SoHAnimJoint1269->setUSE(QString("hanim_t8"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1269);

SoHAnimJoint* SoHAnimJoint1270 = new SoHAnimJoint();
SoHAnimJoint1270->setUSE(QString("hanim_t7"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1270);

SoHAnimJoint* SoHAnimJoint1271 = new SoHAnimJoint();
SoHAnimJoint1271->setUSE(QString("hanim_t6"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1271);

SoHAnimJoint* SoHAnimJoint1272 = new SoHAnimJoint();
SoHAnimJoint1272->setUSE(QString("hanim_t5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1272);

SoHAnimJoint* SoHAnimJoint1273 = new SoHAnimJoint();
SoHAnimJoint1273->setUSE(QString("hanim_t4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1273);

SoHAnimJoint* SoHAnimJoint1274 = new SoHAnimJoint();
SoHAnimJoint1274->setUSE(QString("hanim_t3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1274);

SoHAnimJoint* SoHAnimJoint1275 = new SoHAnimJoint();
SoHAnimJoint1275->setUSE(QString("hanim_t2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1275);

SoHAnimJoint* SoHAnimJoint1276 = new SoHAnimJoint();
SoHAnimJoint1276->setUSE(QString("hanim_t1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1276);

SoHAnimJoint* SoHAnimJoint1277 = new SoHAnimJoint();
SoHAnimJoint1277->setUSE(QString("hanim_c7"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1277);

SoHAnimJoint* SoHAnimJoint1278 = new SoHAnimJoint();
SoHAnimJoint1278->setUSE(QString("hanim_c6"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1278);

SoHAnimJoint* SoHAnimJoint1279 = new SoHAnimJoint();
SoHAnimJoint1279->setUSE(QString("hanim_c5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1279);

SoHAnimJoint* SoHAnimJoint1280 = new SoHAnimJoint();
SoHAnimJoint1280->setUSE(QString("hanim_c4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1280);

SoHAnimJoint* SoHAnimJoint1281 = new SoHAnimJoint();
SoHAnimJoint1281->setUSE(QString("hanim_c3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1281);

SoHAnimJoint* SoHAnimJoint1282 = new SoHAnimJoint();
SoHAnimJoint1282->setUSE(QString("hanim_c2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1282);

SoHAnimJoint* SoHAnimJoint1283 = new SoHAnimJoint();
SoHAnimJoint1283->setUSE(QString("hanim_c1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1283);

SoHAnimJoint* SoHAnimJoint1284 = new SoHAnimJoint();
SoHAnimJoint1284->setUSE(QString("hanim_skull"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1284);

SoHAnimJoint* SoHAnimJoint1285 = new SoHAnimJoint();
SoHAnimJoint1285->setUSE(QString("hanim_l_eyelid"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1285);

SoHAnimJoint* SoHAnimJoint1286 = new SoHAnimJoint();
SoHAnimJoint1286->setUSE(QString("hanim_r_eyelid"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1286);

SoHAnimJoint* SoHAnimJoint1287 = new SoHAnimJoint();
SoHAnimJoint1287->setUSE(QString("hanim_l_eyeball"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1287);

SoHAnimJoint* SoHAnimJoint1288 = new SoHAnimJoint();
SoHAnimJoint1288->setUSE(QString("hanim_r_eyeball"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1288);

SoHAnimJoint* SoHAnimJoint1289 = new SoHAnimJoint();
SoHAnimJoint1289->setUSE(QString("hanim_l_eyebrow"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1289);

SoHAnimJoint* SoHAnimJoint1290 = new SoHAnimJoint();
SoHAnimJoint1290->setUSE(QString("hanim_r_eyebrow"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1290);

SoHAnimJoint* SoHAnimJoint1291 = new SoHAnimJoint();
SoHAnimJoint1291->setUSE(QString("hanim_jaw"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1291);

SoHAnimJoint* SoHAnimJoint1292 = new SoHAnimJoint();
SoHAnimJoint1292->setUSE(QString("hanim_l_clavicle"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1292);

SoHAnimJoint* SoHAnimJoint1293 = new SoHAnimJoint();
SoHAnimJoint1293->setUSE(QString("hanim_l_scapula"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1293);

SoHAnimJoint* SoHAnimJoint1294 = new SoHAnimJoint();
SoHAnimJoint1294->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1294);

SoHAnimJoint* SoHAnimJoint1295 = new SoHAnimJoint();
SoHAnimJoint1295->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1295);

SoHAnimJoint* SoHAnimJoint1296 = new SoHAnimJoint();
SoHAnimJoint1296->setUSE(QString("hanim_l_carpal"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1296);

SoHAnimJoint* SoHAnimJoint1297 = new SoHAnimJoint();
SoHAnimJoint1297->setUSE(QString("hanim_l_trapezium"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1297);

SoHAnimJoint* SoHAnimJoint1298 = new SoHAnimJoint();
SoHAnimJoint1298->setUSE(QString("hanim_l_metacarpal_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1298);

SoHAnimJoint* SoHAnimJoint1299 = new SoHAnimJoint();
SoHAnimJoint1299->setUSE(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1299);

SoHAnimJoint* SoHAnimJoint1300 = new SoHAnimJoint();
SoHAnimJoint1300->setUSE(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1300);

SoHAnimJoint* SoHAnimJoint1301 = new SoHAnimJoint();
SoHAnimJoint1301->setUSE(QString("hanim_l_trapezoid"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1301);

SoHAnimJoint* SoHAnimJoint1302 = new SoHAnimJoint();
SoHAnimJoint1302->setUSE(QString("hanim_l_metacarpal_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1302);

SoHAnimJoint* SoHAnimJoint1303 = new SoHAnimJoint();
SoHAnimJoint1303->setUSE(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1303);

SoHAnimJoint* SoHAnimJoint1304 = new SoHAnimJoint();
SoHAnimJoint1304->setUSE(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1304);

SoHAnimJoint* SoHAnimJoint1305 = new SoHAnimJoint();
SoHAnimJoint1305->setUSE(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1305);

SoHAnimJoint* SoHAnimJoint1306 = new SoHAnimJoint();
SoHAnimJoint1306->setUSE(QString("hanim_l_capitate"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1306);

SoHAnimJoint* SoHAnimJoint1307 = new SoHAnimJoint();
SoHAnimJoint1307->setUSE(QString("hanim_l_metacarpal_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1307);

SoHAnimJoint* SoHAnimJoint1308 = new SoHAnimJoint();
SoHAnimJoint1308->setUSE(QString("hanim_l_carpal_proximal_phalanx_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1308);

SoHAnimJoint* SoHAnimJoint1309 = new SoHAnimJoint();
SoHAnimJoint1309->setUSE(QString("hanim_l_carpal_middle_phalanx_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1309);

SoHAnimJoint* SoHAnimJoint1310 = new SoHAnimJoint();
SoHAnimJoint1310->setUSE(QString("hanim_l_carpal_distal_phalanx_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1310);

SoHAnimJoint* SoHAnimJoint1311 = new SoHAnimJoint();
SoHAnimJoint1311->setUSE(QString("hanim_l_hamate"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1311);

SoHAnimJoint* SoHAnimJoint1312 = new SoHAnimJoint();
SoHAnimJoint1312->setUSE(QString("hanim_l_metacarpal_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1312);

SoHAnimJoint* SoHAnimJoint1313 = new SoHAnimJoint();
SoHAnimJoint1313->setUSE(QString("hanim_l_carpal_proximal_phalanx_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1313);

SoHAnimJoint* SoHAnimJoint1314 = new SoHAnimJoint();
SoHAnimJoint1314->setUSE(QString("hanim_l_carpal_middle_phalanx_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1314);

SoHAnimJoint* SoHAnimJoint1315 = new SoHAnimJoint();
SoHAnimJoint1315->setUSE(QString("hanim_l_carpal_distal_phalanx_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1315);

SoHAnimJoint* SoHAnimJoint1316 = new SoHAnimJoint();
SoHAnimJoint1316->setUSE(QString("hanim_l_metacarpal_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1316);

SoHAnimJoint* SoHAnimJoint1317 = new SoHAnimJoint();
SoHAnimJoint1317->setUSE(QString("hanim_l_carpal_proximal_phalanx_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1317);

SoHAnimJoint* SoHAnimJoint1318 = new SoHAnimJoint();
SoHAnimJoint1318->setUSE(QString("hanim_l_carpal_middle_phalanx_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1318);

SoHAnimJoint* SoHAnimJoint1319 = new SoHAnimJoint();
SoHAnimJoint1319->setUSE(QString("hanim_l_carpal_distal_phalanx_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1319);

SoHAnimJoint* SoHAnimJoint1320 = new SoHAnimJoint();
SoHAnimJoint1320->setUSE(QString("hanim_r_clavicle"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1320);

SoHAnimJoint* SoHAnimJoint1321 = new SoHAnimJoint();
SoHAnimJoint1321->setUSE(QString("hanim_r_scapula"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1321);

SoHAnimJoint* SoHAnimJoint1322 = new SoHAnimJoint();
SoHAnimJoint1322->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1322);

SoHAnimJoint* SoHAnimJoint1323 = new SoHAnimJoint();
SoHAnimJoint1323->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1323);

SoHAnimJoint* SoHAnimJoint1324 = new SoHAnimJoint();
SoHAnimJoint1324->setUSE(QString("hanim_r_carpal"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1324);

SoHAnimJoint* SoHAnimJoint1325 = new SoHAnimJoint();
SoHAnimJoint1325->setUSE(QString("hanim_r_trapezium"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1325);

SoHAnimJoint* SoHAnimJoint1326 = new SoHAnimJoint();
SoHAnimJoint1326->setUSE(QString("hanim_r_metacarpal_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1326);

SoHAnimJoint* SoHAnimJoint1327 = new SoHAnimJoint();
SoHAnimJoint1327->setUSE(QString("hanim_r_carpal_proximal_phalanx_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1327);

SoHAnimJoint* SoHAnimJoint1328 = new SoHAnimJoint();
SoHAnimJoint1328->setUSE(QString("hanim_r_carpal_distal_phalanx_1"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1328);

SoHAnimJoint* SoHAnimJoint1329 = new SoHAnimJoint();
SoHAnimJoint1329->setUSE(QString("hanim_r_trapezoid"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1329);

SoHAnimJoint* SoHAnimJoint1330 = new SoHAnimJoint();
SoHAnimJoint1330->setUSE(QString("hanim_r_metacarpal_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1330);

SoHAnimJoint* SoHAnimJoint1331 = new SoHAnimJoint();
SoHAnimJoint1331->setUSE(QString("hanim_r_carpal_proximal_phalanx_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1331);

SoHAnimJoint* SoHAnimJoint1332 = new SoHAnimJoint();
SoHAnimJoint1332->setUSE(QString("hanim_r_carpal_middle_phalanx_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1332);

SoHAnimJoint* SoHAnimJoint1333 = new SoHAnimJoint();
SoHAnimJoint1333->setUSE(QString("hanim_r_carpal_distal_phalanx_2"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1333);

SoHAnimJoint* SoHAnimJoint1334 = new SoHAnimJoint();
SoHAnimJoint1334->setUSE(QString("hanim_r_capitate"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1334);

SoHAnimJoint* SoHAnimJoint1335 = new SoHAnimJoint();
SoHAnimJoint1335->setUSE(QString("hanim_r_metacarpal_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1335);

SoHAnimJoint* SoHAnimJoint1336 = new SoHAnimJoint();
SoHAnimJoint1336->setUSE(QString("hanim_r_carpal_proximal_phalanx_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1336);

SoHAnimJoint* SoHAnimJoint1337 = new SoHAnimJoint();
SoHAnimJoint1337->setUSE(QString("hanim_r_carpal_middle_phalanx_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1337);

SoHAnimJoint* SoHAnimJoint1338 = new SoHAnimJoint();
SoHAnimJoint1338->setUSE(QString("hanim_r_carpal_distal_phalanx_3"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1338);

SoHAnimJoint* SoHAnimJoint1339 = new SoHAnimJoint();
SoHAnimJoint1339->setUSE(QString("hanim_r_hamate"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1339);

SoHAnimJoint* SoHAnimJoint1340 = new SoHAnimJoint();
SoHAnimJoint1340->setUSE(QString("hanim_r_metacarpal_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1340);

SoHAnimJoint* SoHAnimJoint1341 = new SoHAnimJoint();
SoHAnimJoint1341->setUSE(QString("hanim_r_carpal_proximal_phalanx_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1341);

SoHAnimJoint* SoHAnimJoint1342 = new SoHAnimJoint();
SoHAnimJoint1342->setUSE(QString("hanim_r_carpal_middle_phalanx_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1342);

SoHAnimJoint* SoHAnimJoint1343 = new SoHAnimJoint();
SoHAnimJoint1343->setUSE(QString("hanim_r_carpal_distal_phalanx_4"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1343);

SoHAnimJoint* SoHAnimJoint1344 = new SoHAnimJoint();
SoHAnimJoint1344->setUSE(QString("hanim_r_metacarpal_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1344);

SoHAnimJoint* SoHAnimJoint1345 = new SoHAnimJoint();
SoHAnimJoint1345->setUSE(QString("hanim_r_carpal_proximal_phalanx_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1345);

SoHAnimJoint* SoHAnimJoint1346 = new SoHAnimJoint();
SoHAnimJoint1346->setUSE(QString("hanim_r_carpal_middle_phalanx_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1346);

SoHAnimJoint* SoHAnimJoint1347 = new SoHAnimJoint();
SoHAnimJoint1347->setUSE(QString("hanim_r_carpal_distal_phalanx_5"));
SoHAnimHumanoid25->setJoints(*SoHAnimJoint1347);

SoTransform24->addChild(*SoHAnimHumanoid25);

SoNode7->addChild(*SoTransform24);

SoTimeSensor* SoTimeSensor1348 = new SoTimeSensor();
SoTimeSensor1348->setDEF(QString("Armature_Clock"));
SoTimeSensor1348->setCycleInterval(10.416666666666666);
SoTimeSensor1348->setLoop(true);
SoNode7->addChild(*SoTimeSensor1348);

SoProximitySensor* SoProximitySensor1349 = new SoProximitySensor();
SoProximitySensor1349->setDEF(QString("Armature_Close"));
SoProximitySensor1349->setSize(new float[]{1000000.0,1000000.0,1000000.0});
SoNode7->addChild(*SoProximitySensor1349);

SoROUTE* SoROUTE1350 = new SoROUTE();
SoROUTE1350->setFromField(QString("enterTime"));
SoROUTE1350->setFromNode(QString("Armature_Close"));
SoROUTE1350->setToField(QString("startTime"));
SoROUTE1350->setToNode(QString("Armature_Clock"));
SoNode7->addChild(*SoROUTE1350);

SoOrientationInterpolator* SoOrientationInterpolator1351 = new SoOrientationInterpolator();
SoOrientationInterpolator1351->setDEF(QString("Armature_OI_sacrum"));
SoOrientationInterpolator1351->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1351->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1351);

SoOrientationInterpolator* SoOrientationInterpolator1352 = new SoOrientationInterpolator();
SoOrientationInterpolator1352->setDEF(QString("Armature_OI_pelvis"));
SoOrientationInterpolator1352->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1352->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1352);

SoOrientationInterpolator* SoOrientationInterpolator1353 = new SoOrientationInterpolator();
SoOrientationInterpolator1353->setDEF(QString("Armature_OI_l_thigh"));
SoOrientationInterpolator1353->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1353->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1353);

SoOrientationInterpolator* SoOrientationInterpolator1354 = new SoOrientationInterpolator();
SoOrientationInterpolator1354->setDEF(QString("Armature_OI_l_calf"));
SoOrientationInterpolator1354->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1354->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1354);

SoOrientationInterpolator* SoOrientationInterpolator1355 = new SoOrientationInterpolator();
SoOrientationInterpolator1355->setDEF(QString("Armature_OI_l_talus"));
SoOrientationInterpolator1355->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1355->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1355);

SoOrientationInterpolator* SoOrientationInterpolator1356 = new SoOrientationInterpolator();
SoOrientationInterpolator1356->setDEF(QString("Armature_OI_l_navicular"));
SoOrientationInterpolator1356->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1356->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1356);

SoOrientationInterpolator* SoOrientationInterpolator1357 = new SoOrientationInterpolator();
SoOrientationInterpolator1357->setDEF(QString("Armature_OI_l_cuneiform_1"));
SoOrientationInterpolator1357->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1357->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1357);

SoOrientationInterpolator* SoOrientationInterpolator1358 = new SoOrientationInterpolator();
SoOrientationInterpolator1358->setDEF(QString("Armature_OI_l_metatarsal_1"));
SoOrientationInterpolator1358->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1358->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1358);

SoOrientationInterpolator* SoOrientationInterpolator1359 = new SoOrientationInterpolator();
SoOrientationInterpolator1359->setDEF(QString("Armature_OI_l_tarsal_proximal_phalanx_1"));
SoOrientationInterpolator1359->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1359->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1359);

SoOrientationInterpolator* SoOrientationInterpolator1360 = new SoOrientationInterpolator();
SoOrientationInterpolator1360->setDEF(QString("Armature_OI_l_tarsal_distal_phalanx_1"));
SoOrientationInterpolator1360->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1360->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1360);

SoOrientationInterpolator* SoOrientationInterpolator1361 = new SoOrientationInterpolator();
SoOrientationInterpolator1361->setDEF(QString("Armature_OI_l_cuneiform_2"));
SoOrientationInterpolator1361->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1361->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1361);

SoOrientationInterpolator* SoOrientationInterpolator1362 = new SoOrientationInterpolator();
SoOrientationInterpolator1362->setDEF(QString("Armature_OI_l_metatarsal_2"));
SoOrientationInterpolator1362->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1362->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1362);

SoOrientationInterpolator* SoOrientationInterpolator1363 = new SoOrientationInterpolator();
SoOrientationInterpolator1363->setDEF(QString("Armature_OI_l_tarsal_proximal_phalanx_2"));
SoOrientationInterpolator1363->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1363->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1363);

SoOrientationInterpolator* SoOrientationInterpolator1364 = new SoOrientationInterpolator();
SoOrientationInterpolator1364->setDEF(QString("Armature_OI_l_tarsal_middle_phalanx_2"));
SoOrientationInterpolator1364->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1364->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1364);

SoOrientationInterpolator* SoOrientationInterpolator1365 = new SoOrientationInterpolator();
SoOrientationInterpolator1365->setDEF(QString("Armature_OI_l_tarsal_distal_phalanx_2"));
SoOrientationInterpolator1365->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1365->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1365);

SoOrientationInterpolator* SoOrientationInterpolator1366 = new SoOrientationInterpolator();
SoOrientationInterpolator1366->setDEF(QString("Armature_OI_l_cuneiform_3"));
SoOrientationInterpolator1366->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1366->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1366);

SoOrientationInterpolator* SoOrientationInterpolator1367 = new SoOrientationInterpolator();
SoOrientationInterpolator1367->setDEF(QString("Armature_OI_l_metatarsal_3"));
SoOrientationInterpolator1367->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1367->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1367);

SoOrientationInterpolator* SoOrientationInterpolator1368 = new SoOrientationInterpolator();
SoOrientationInterpolator1368->setDEF(QString("Armature_OI_l_tarsal_proximal_phalanx_3"));
SoOrientationInterpolator1368->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1368->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1368);

SoOrientationInterpolator* SoOrientationInterpolator1369 = new SoOrientationInterpolator();
SoOrientationInterpolator1369->setDEF(QString("Armature_OI_l_tarsal_middle_phalanx_3"));
SoOrientationInterpolator1369->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1369->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1369);

SoOrientationInterpolator* SoOrientationInterpolator1370 = new SoOrientationInterpolator();
SoOrientationInterpolator1370->setDEF(QString("Armature_OI_l_tarsal_distal_phalanx_3"));
SoOrientationInterpolator1370->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1370->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1370);

SoOrientationInterpolator* SoOrientationInterpolator1371 = new SoOrientationInterpolator();
SoOrientationInterpolator1371->setDEF(QString("Armature_OI_l_calcaneus"));
SoOrientationInterpolator1371->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1371->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1371);

SoOrientationInterpolator* SoOrientationInterpolator1372 = new SoOrientationInterpolator();
SoOrientationInterpolator1372->setDEF(QString("Armature_OI_l_cuboid"));
SoOrientationInterpolator1372->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1372->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1372);

SoOrientationInterpolator* SoOrientationInterpolator1373 = new SoOrientationInterpolator();
SoOrientationInterpolator1373->setDEF(QString("Armature_OI_l_metatarsal_4"));
SoOrientationInterpolator1373->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1373->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1373);

SoOrientationInterpolator* SoOrientationInterpolator1374 = new SoOrientationInterpolator();
SoOrientationInterpolator1374->setDEF(QString("Armature_OI_l_tarsal_proximal_phalanx_4"));
SoOrientationInterpolator1374->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1374->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1374);

SoOrientationInterpolator* SoOrientationInterpolator1375 = new SoOrientationInterpolator();
SoOrientationInterpolator1375->setDEF(QString("Armature_OI_l_tarsal_middle_phalanx_4"));
SoOrientationInterpolator1375->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1375->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1375);

SoOrientationInterpolator* SoOrientationInterpolator1376 = new SoOrientationInterpolator();
SoOrientationInterpolator1376->setDEF(QString("Armature_OI_l_tarsal_distal_phalanx_4"));
SoOrientationInterpolator1376->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1376->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1376);

SoOrientationInterpolator* SoOrientationInterpolator1377 = new SoOrientationInterpolator();
SoOrientationInterpolator1377->setDEF(QString("Armature_OI_l_metatarsal_5"));
SoOrientationInterpolator1377->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1377->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1377);

SoOrientationInterpolator* SoOrientationInterpolator1378 = new SoOrientationInterpolator();
SoOrientationInterpolator1378->setDEF(QString("Armature_OI_l_tarsal_proximal_phalanx_5"));
SoOrientationInterpolator1378->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1378->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1378);

SoOrientationInterpolator* SoOrientationInterpolator1379 = new SoOrientationInterpolator();
SoOrientationInterpolator1379->setDEF(QString("Armature_OI_l_tarsal_middle_phalanx_5"));
SoOrientationInterpolator1379->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1379->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1379);

SoOrientationInterpolator* SoOrientationInterpolator1380 = new SoOrientationInterpolator();
SoOrientationInterpolator1380->setDEF(QString("Armature_OI_l_tarsal_distal_phalanx_5"));
SoOrientationInterpolator1380->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1380->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1380);

SoOrientationInterpolator* SoOrientationInterpolator1381 = new SoOrientationInterpolator();
SoOrientationInterpolator1381->setDEF(QString("Armature_OI_r_thigh"));
SoOrientationInterpolator1381->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1381->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1381);

SoOrientationInterpolator* SoOrientationInterpolator1382 = new SoOrientationInterpolator();
SoOrientationInterpolator1382->setDEF(QString("Armature_OI_r_calf"));
SoOrientationInterpolator1382->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1382->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1382);

SoOrientationInterpolator* SoOrientationInterpolator1383 = new SoOrientationInterpolator();
SoOrientationInterpolator1383->setDEF(QString("Armature_OI_r_talus"));
SoOrientationInterpolator1383->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1383->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1383);

SoOrientationInterpolator* SoOrientationInterpolator1384 = new SoOrientationInterpolator();
SoOrientationInterpolator1384->setDEF(QString("Armature_OI_r_navicular"));
SoOrientationInterpolator1384->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1384->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1384);

SoOrientationInterpolator* SoOrientationInterpolator1385 = new SoOrientationInterpolator();
SoOrientationInterpolator1385->setDEF(QString("Armature_OI_r_cuneiform_1"));
SoOrientationInterpolator1385->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1385->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1385);

SoOrientationInterpolator* SoOrientationInterpolator1386 = new SoOrientationInterpolator();
SoOrientationInterpolator1386->setDEF(QString("Armature_OI_r_metatarsal_1"));
SoOrientationInterpolator1386->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1386->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1386);

SoOrientationInterpolator* SoOrientationInterpolator1387 = new SoOrientationInterpolator();
SoOrientationInterpolator1387->setDEF(QString("Armature_OI_r_tarsal_proximal_phalanx_1"));
SoOrientationInterpolator1387->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1387->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1387);

SoOrientationInterpolator* SoOrientationInterpolator1388 = new SoOrientationInterpolator();
SoOrientationInterpolator1388->setDEF(QString("Armature_OI_r_tarsal_distal_phalanx_1"));
SoOrientationInterpolator1388->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1388->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1388);

SoOrientationInterpolator* SoOrientationInterpolator1389 = new SoOrientationInterpolator();
SoOrientationInterpolator1389->setDEF(QString("Armature_OI_r_cuneiform_2"));
SoOrientationInterpolator1389->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1389->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1389);

SoOrientationInterpolator* SoOrientationInterpolator1390 = new SoOrientationInterpolator();
SoOrientationInterpolator1390->setDEF(QString("Armature_OI_r_metatarsal_2"));
SoOrientationInterpolator1390->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1390->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1390);

SoOrientationInterpolator* SoOrientationInterpolator1391 = new SoOrientationInterpolator();
SoOrientationInterpolator1391->setDEF(QString("Armature_OI_r_tarsal_proximal_phalanx_2"));
SoOrientationInterpolator1391->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1391->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1391);

SoOrientationInterpolator* SoOrientationInterpolator1392 = new SoOrientationInterpolator();
SoOrientationInterpolator1392->setDEF(QString("Armature_OI_r_tarsal_middle_phalanx_2"));
SoOrientationInterpolator1392->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1392->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1392);

SoOrientationInterpolator* SoOrientationInterpolator1393 = new SoOrientationInterpolator();
SoOrientationInterpolator1393->setDEF(QString("Armature_OI_r_tarsal_distal_phalanx_2"));
SoOrientationInterpolator1393->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1393->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1393);

SoOrientationInterpolator* SoOrientationInterpolator1394 = new SoOrientationInterpolator();
SoOrientationInterpolator1394->setDEF(QString("Armature_OI_r_cuneiform_3"));
SoOrientationInterpolator1394->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1394->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1394);

SoOrientationInterpolator* SoOrientationInterpolator1395 = new SoOrientationInterpolator();
SoOrientationInterpolator1395->setDEF(QString("Armature_OI_r_metatarsal_3"));
SoOrientationInterpolator1395->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1395->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1395);

SoOrientationInterpolator* SoOrientationInterpolator1396 = new SoOrientationInterpolator();
SoOrientationInterpolator1396->setDEF(QString("Armature_OI_r_tarsal_proximal_phalanx_3"));
SoOrientationInterpolator1396->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1396->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1396);

SoOrientationInterpolator* SoOrientationInterpolator1397 = new SoOrientationInterpolator();
SoOrientationInterpolator1397->setDEF(QString("Armature_OI_r_tarsal_middle_phalanx_3"));
SoOrientationInterpolator1397->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1397->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1397);

SoOrientationInterpolator* SoOrientationInterpolator1398 = new SoOrientationInterpolator();
SoOrientationInterpolator1398->setDEF(QString("Armature_OI_r_tarsal_distal_phalanx_3"));
SoOrientationInterpolator1398->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1398->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1398);

SoOrientationInterpolator* SoOrientationInterpolator1399 = new SoOrientationInterpolator();
SoOrientationInterpolator1399->setDEF(QString("Armature_OI_r_calcaneus"));
SoOrientationInterpolator1399->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1399->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1399);

SoOrientationInterpolator* SoOrientationInterpolator1400 = new SoOrientationInterpolator();
SoOrientationInterpolator1400->setDEF(QString("Armature_OI_r_cuboid"));
SoOrientationInterpolator1400->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1400->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1400);

SoOrientationInterpolator* SoOrientationInterpolator1401 = new SoOrientationInterpolator();
SoOrientationInterpolator1401->setDEF(QString("Armature_OI_r_metatarsal_4"));
SoOrientationInterpolator1401->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1401->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1401);

SoOrientationInterpolator* SoOrientationInterpolator1402 = new SoOrientationInterpolator();
SoOrientationInterpolator1402->setDEF(QString("Armature_OI_r_tarsal_proximal_phalanx_4"));
SoOrientationInterpolator1402->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1402->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1402);

SoOrientationInterpolator* SoOrientationInterpolator1403 = new SoOrientationInterpolator();
SoOrientationInterpolator1403->setDEF(QString("Armature_OI_r_tarsal_middle_phalanx_4"));
SoOrientationInterpolator1403->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1403->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1403);

SoOrientationInterpolator* SoOrientationInterpolator1404 = new SoOrientationInterpolator();
SoOrientationInterpolator1404->setDEF(QString("Armature_OI_r_tarsal_distal_phalanx_4"));
SoOrientationInterpolator1404->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1404->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1404);

SoOrientationInterpolator* SoOrientationInterpolator1405 = new SoOrientationInterpolator();
SoOrientationInterpolator1405->setDEF(QString("Armature_OI_r_metatarsal_5"));
SoOrientationInterpolator1405->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1405->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1405);

SoOrientationInterpolator* SoOrientationInterpolator1406 = new SoOrientationInterpolator();
SoOrientationInterpolator1406->setDEF(QString("Armature_OI_r_tarsal_proximal_phalanx_5"));
SoOrientationInterpolator1406->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1406->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1406);

SoOrientationInterpolator* SoOrientationInterpolator1407 = new SoOrientationInterpolator();
SoOrientationInterpolator1407->setDEF(QString("Armature_OI_r_tarsal_middle_phalanx_5"));
SoOrientationInterpolator1407->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1407->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1407);

SoOrientationInterpolator* SoOrientationInterpolator1408 = new SoOrientationInterpolator();
SoOrientationInterpolator1408->setDEF(QString("Armature_OI_r_tarsal_distal_phalanx_5"));
SoOrientationInterpolator1408->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1408->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1408);

SoOrientationInterpolator* SoOrientationInterpolator1409 = new SoOrientationInterpolator();
SoOrientationInterpolator1409->setDEF(QString("Armature_OI_l5"));
SoOrientationInterpolator1409->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1409->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1409);

SoOrientationInterpolator* SoOrientationInterpolator1410 = new SoOrientationInterpolator();
SoOrientationInterpolator1410->setDEF(QString("Armature_OI_l4"));
SoOrientationInterpolator1410->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1410->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1410);

SoOrientationInterpolator* SoOrientationInterpolator1411 = new SoOrientationInterpolator();
SoOrientationInterpolator1411->setDEF(QString("Armature_OI_l3"));
SoOrientationInterpolator1411->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1411->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1411);

SoOrientationInterpolator* SoOrientationInterpolator1412 = new SoOrientationInterpolator();
SoOrientationInterpolator1412->setDEF(QString("Armature_OI_l2"));
SoOrientationInterpolator1412->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1412->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1412);

SoOrientationInterpolator* SoOrientationInterpolator1413 = new SoOrientationInterpolator();
SoOrientationInterpolator1413->setDEF(QString("Armature_OI_l1"));
SoOrientationInterpolator1413->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1413->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1413);

SoOrientationInterpolator* SoOrientationInterpolator1414 = new SoOrientationInterpolator();
SoOrientationInterpolator1414->setDEF(QString("Armature_OI_t12"));
SoOrientationInterpolator1414->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1414->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1414);

SoOrientationInterpolator* SoOrientationInterpolator1415 = new SoOrientationInterpolator();
SoOrientationInterpolator1415->setDEF(QString("Armature_OI_t11"));
SoOrientationInterpolator1415->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1415->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1415);

SoOrientationInterpolator* SoOrientationInterpolator1416 = new SoOrientationInterpolator();
SoOrientationInterpolator1416->setDEF(QString("Armature_OI_t10"));
SoOrientationInterpolator1416->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1416->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1416);

SoOrientationInterpolator* SoOrientationInterpolator1417 = new SoOrientationInterpolator();
SoOrientationInterpolator1417->setDEF(QString("Armature_OI_t9"));
SoOrientationInterpolator1417->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1417->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1417);

SoOrientationInterpolator* SoOrientationInterpolator1418 = new SoOrientationInterpolator();
SoOrientationInterpolator1418->setDEF(QString("Armature_OI_t8"));
SoOrientationInterpolator1418->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1418->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1418);

SoOrientationInterpolator* SoOrientationInterpolator1419 = new SoOrientationInterpolator();
SoOrientationInterpolator1419->setDEF(QString("Armature_OI_t7"));
SoOrientationInterpolator1419->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1419->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1419);

SoOrientationInterpolator* SoOrientationInterpolator1420 = new SoOrientationInterpolator();
SoOrientationInterpolator1420->setDEF(QString("Armature_OI_t6"));
SoOrientationInterpolator1420->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1420->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1420);

SoOrientationInterpolator* SoOrientationInterpolator1421 = new SoOrientationInterpolator();
SoOrientationInterpolator1421->setDEF(QString("Armature_OI_t5"));
SoOrientationInterpolator1421->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1421->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1421);

SoOrientationInterpolator* SoOrientationInterpolator1422 = new SoOrientationInterpolator();
SoOrientationInterpolator1422->setDEF(QString("Armature_OI_t4"));
SoOrientationInterpolator1422->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1422->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1422);

SoOrientationInterpolator* SoOrientationInterpolator1423 = new SoOrientationInterpolator();
SoOrientationInterpolator1423->setDEF(QString("Armature_OI_t3"));
SoOrientationInterpolator1423->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1423->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1423);

SoOrientationInterpolator* SoOrientationInterpolator1424 = new SoOrientationInterpolator();
SoOrientationInterpolator1424->setDEF(QString("Armature_OI_t2"));
SoOrientationInterpolator1424->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1424->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1424);

SoOrientationInterpolator* SoOrientationInterpolator1425 = new SoOrientationInterpolator();
SoOrientationInterpolator1425->setDEF(QString("Armature_OI_t1"));
SoOrientationInterpolator1425->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1425->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1425);

SoOrientationInterpolator* SoOrientationInterpolator1426 = new SoOrientationInterpolator();
SoOrientationInterpolator1426->setDEF(QString("Armature_OI_c7"));
SoOrientationInterpolator1426->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1426->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1426);

SoOrientationInterpolator* SoOrientationInterpolator1427 = new SoOrientationInterpolator();
SoOrientationInterpolator1427->setDEF(QString("Armature_OI_c6"));
SoOrientationInterpolator1427->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1427->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1427);

SoOrientationInterpolator* SoOrientationInterpolator1428 = new SoOrientationInterpolator();
SoOrientationInterpolator1428->setDEF(QString("Armature_OI_c5"));
SoOrientationInterpolator1428->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1428->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1428);

SoOrientationInterpolator* SoOrientationInterpolator1429 = new SoOrientationInterpolator();
SoOrientationInterpolator1429->setDEF(QString("Armature_OI_c4"));
SoOrientationInterpolator1429->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1429->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1429);

SoOrientationInterpolator* SoOrientationInterpolator1430 = new SoOrientationInterpolator();
SoOrientationInterpolator1430->setDEF(QString("Armature_OI_c3"));
SoOrientationInterpolator1430->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1430->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1430);

SoOrientationInterpolator* SoOrientationInterpolator1431 = new SoOrientationInterpolator();
SoOrientationInterpolator1431->setDEF(QString("Armature_OI_c2"));
SoOrientationInterpolator1431->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1431->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1431);

SoOrientationInterpolator* SoOrientationInterpolator1432 = new SoOrientationInterpolator();
SoOrientationInterpolator1432->setDEF(QString("Armature_OI_c1"));
SoOrientationInterpolator1432->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1432->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1432);

SoOrientationInterpolator* SoOrientationInterpolator1433 = new SoOrientationInterpolator();
SoOrientationInterpolator1433->setDEF(QString("Armature_OI_skull"));
SoOrientationInterpolator1433->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1433->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1433);

SoOrientationInterpolator* SoOrientationInterpolator1434 = new SoOrientationInterpolator();
SoOrientationInterpolator1434->setDEF(QString("Armature_OI_l_eyelid"));
SoOrientationInterpolator1434->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1434->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1434);

SoOrientationInterpolator* SoOrientationInterpolator1435 = new SoOrientationInterpolator();
SoOrientationInterpolator1435->setDEF(QString("Armature_OI_r_eyelid"));
SoOrientationInterpolator1435->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1435->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1435);

SoOrientationInterpolator* SoOrientationInterpolator1436 = new SoOrientationInterpolator();
SoOrientationInterpolator1436->setDEF(QString("Armature_OI_l_eyeball"));
SoOrientationInterpolator1436->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1436->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1436);

SoOrientationInterpolator* SoOrientationInterpolator1437 = new SoOrientationInterpolator();
SoOrientationInterpolator1437->setDEF(QString("Armature_OI_r_eyeball"));
SoOrientationInterpolator1437->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1437->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1437);

SoOrientationInterpolator* SoOrientationInterpolator1438 = new SoOrientationInterpolator();
SoOrientationInterpolator1438->setDEF(QString("Armature_OI_l_eyebrow"));
SoOrientationInterpolator1438->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1438->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1438);

SoOrientationInterpolator* SoOrientationInterpolator1439 = new SoOrientationInterpolator();
SoOrientationInterpolator1439->setDEF(QString("Armature_OI_r_eyebrow"));
SoOrientationInterpolator1439->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1439->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1439);

SoOrientationInterpolator* SoOrientationInterpolator1440 = new SoOrientationInterpolator();
SoOrientationInterpolator1440->setDEF(QString("Armature_OI_jaw"));
SoOrientationInterpolator1440->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1440->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1440);

SoOrientationInterpolator* SoOrientationInterpolator1441 = new SoOrientationInterpolator();
SoOrientationInterpolator1441->setDEF(QString("Armature_OI_l_clavicle"));
SoOrientationInterpolator1441->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1441->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1441);

SoOrientationInterpolator* SoOrientationInterpolator1442 = new SoOrientationInterpolator();
SoOrientationInterpolator1442->setDEF(QString("Armature_OI_l_scapula"));
SoOrientationInterpolator1442->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1442->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1442);

SoOrientationInterpolator* SoOrientationInterpolator1443 = new SoOrientationInterpolator();
SoOrientationInterpolator1443->setDEF(QString("Armature_OI_l_upperarm"));
SoOrientationInterpolator1443->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1443->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1443);

SoOrientationInterpolator* SoOrientationInterpolator1444 = new SoOrientationInterpolator();
SoOrientationInterpolator1444->setDEF(QString("Armature_OI_l_forearm"));
SoOrientationInterpolator1444->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1444->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1444);

SoOrientationInterpolator* SoOrientationInterpolator1445 = new SoOrientationInterpolator();
SoOrientationInterpolator1445->setDEF(QString("Armature_OI_l_carpal"));
SoOrientationInterpolator1445->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1445->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1445);

SoOrientationInterpolator* SoOrientationInterpolator1446 = new SoOrientationInterpolator();
SoOrientationInterpolator1446->setDEF(QString("Armature_OI_l_trapezium"));
SoOrientationInterpolator1446->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1446->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1446);

SoOrientationInterpolator* SoOrientationInterpolator1447 = new SoOrientationInterpolator();
SoOrientationInterpolator1447->setDEF(QString("Armature_OI_l_metacarpal_1"));
SoOrientationInterpolator1447->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1447->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1447);

SoOrientationInterpolator* SoOrientationInterpolator1448 = new SoOrientationInterpolator();
SoOrientationInterpolator1448->setDEF(QString("Armature_OI_l_carpal_proximal_phalanx_1"));
SoOrientationInterpolator1448->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1448->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1448);

SoOrientationInterpolator* SoOrientationInterpolator1449 = new SoOrientationInterpolator();
SoOrientationInterpolator1449->setDEF(QString("Armature_OI_l_carpal_distal_phalanx_1"));
SoOrientationInterpolator1449->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1449->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1449);

SoOrientationInterpolator* SoOrientationInterpolator1450 = new SoOrientationInterpolator();
SoOrientationInterpolator1450->setDEF(QString("Armature_OI_l_trapezoid"));
SoOrientationInterpolator1450->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1450->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1450);

SoOrientationInterpolator* SoOrientationInterpolator1451 = new SoOrientationInterpolator();
SoOrientationInterpolator1451->setDEF(QString("Armature_OI_l_metacarpal_2"));
SoOrientationInterpolator1451->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1451->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1451);

SoOrientationInterpolator* SoOrientationInterpolator1452 = new SoOrientationInterpolator();
SoOrientationInterpolator1452->setDEF(QString("Armature_OI_l_carpal_proximal_phalanx_2"));
SoOrientationInterpolator1452->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1452->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1452);

SoOrientationInterpolator* SoOrientationInterpolator1453 = new SoOrientationInterpolator();
SoOrientationInterpolator1453->setDEF(QString("Armature_OI_l_carpal_middle_phalanx_2"));
SoOrientationInterpolator1453->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1453->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1453);

SoOrientationInterpolator* SoOrientationInterpolator1454 = new SoOrientationInterpolator();
SoOrientationInterpolator1454->setDEF(QString("Armature_OI_l_carpal_distal_phalanx_2"));
SoOrientationInterpolator1454->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1454->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1454);

SoOrientationInterpolator* SoOrientationInterpolator1455 = new SoOrientationInterpolator();
SoOrientationInterpolator1455->setDEF(QString("Armature_OI_l_capitate"));
SoOrientationInterpolator1455->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1455->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1455);

SoOrientationInterpolator* SoOrientationInterpolator1456 = new SoOrientationInterpolator();
SoOrientationInterpolator1456->setDEF(QString("Armature_OI_l_metacarpal_3"));
SoOrientationInterpolator1456->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1456->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1456);

SoOrientationInterpolator* SoOrientationInterpolator1457 = new SoOrientationInterpolator();
SoOrientationInterpolator1457->setDEF(QString("Armature_OI_l_carpal_proximal_phalanx_3"));
SoOrientationInterpolator1457->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1457->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1457);

SoOrientationInterpolator* SoOrientationInterpolator1458 = new SoOrientationInterpolator();
SoOrientationInterpolator1458->setDEF(QString("Armature_OI_l_carpal_middle_phalanx_3"));
SoOrientationInterpolator1458->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1458->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1458);

SoOrientationInterpolator* SoOrientationInterpolator1459 = new SoOrientationInterpolator();
SoOrientationInterpolator1459->setDEF(QString("Armature_OI_l_carpal_distal_phalanx_3"));
SoOrientationInterpolator1459->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1459->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1459);

SoOrientationInterpolator* SoOrientationInterpolator1460 = new SoOrientationInterpolator();
SoOrientationInterpolator1460->setDEF(QString("Armature_OI_l_hamate"));
SoOrientationInterpolator1460->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1460->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1460);

SoOrientationInterpolator* SoOrientationInterpolator1461 = new SoOrientationInterpolator();
SoOrientationInterpolator1461->setDEF(QString("Armature_OI_l_metacarpal_4"));
SoOrientationInterpolator1461->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1461->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1461);

SoOrientationInterpolator* SoOrientationInterpolator1462 = new SoOrientationInterpolator();
SoOrientationInterpolator1462->setDEF(QString("Armature_OI_l_carpal_proximal_phalanx_4"));
SoOrientationInterpolator1462->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1462->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1462);

SoOrientationInterpolator* SoOrientationInterpolator1463 = new SoOrientationInterpolator();
SoOrientationInterpolator1463->setDEF(QString("Armature_OI_l_carpal_middle_phalanx_4"));
SoOrientationInterpolator1463->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1463->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1463);

SoOrientationInterpolator* SoOrientationInterpolator1464 = new SoOrientationInterpolator();
SoOrientationInterpolator1464->setDEF(QString("Armature_OI_l_carpal_distal_phalanx_4"));
SoOrientationInterpolator1464->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1464->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1464);

SoOrientationInterpolator* SoOrientationInterpolator1465 = new SoOrientationInterpolator();
SoOrientationInterpolator1465->setDEF(QString("Armature_OI_l_metacarpal_5"));
SoOrientationInterpolator1465->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1465->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1465);

SoOrientationInterpolator* SoOrientationInterpolator1466 = new SoOrientationInterpolator();
SoOrientationInterpolator1466->setDEF(QString("Armature_OI_l_carpal_proximal_phalanx_5"));
SoOrientationInterpolator1466->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1466->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1466);

SoOrientationInterpolator* SoOrientationInterpolator1467 = new SoOrientationInterpolator();
SoOrientationInterpolator1467->setDEF(QString("Armature_OI_l_carpal_middle_phalanx_5"));
SoOrientationInterpolator1467->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1467->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1467);

SoOrientationInterpolator* SoOrientationInterpolator1468 = new SoOrientationInterpolator();
SoOrientationInterpolator1468->setDEF(QString("Armature_OI_l_carpal_distal_phalanx_5"));
SoOrientationInterpolator1468->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1468->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1468);

SoOrientationInterpolator* SoOrientationInterpolator1469 = new SoOrientationInterpolator();
SoOrientationInterpolator1469->setDEF(QString("Armature_OI_r_clavicle"));
SoOrientationInterpolator1469->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1469->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1469);

SoOrientationInterpolator* SoOrientationInterpolator1470 = new SoOrientationInterpolator();
SoOrientationInterpolator1470->setDEF(QString("Armature_OI_r_scapula"));
SoOrientationInterpolator1470->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1470->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1470);

SoOrientationInterpolator* SoOrientationInterpolator1471 = new SoOrientationInterpolator();
SoOrientationInterpolator1471->setDEF(QString("Armature_OI_r_upperarm"));
SoOrientationInterpolator1471->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1471->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1471);

SoOrientationInterpolator* SoOrientationInterpolator1472 = new SoOrientationInterpolator();
SoOrientationInterpolator1472->setDEF(QString("Armature_OI_r_forearm"));
SoOrientationInterpolator1472->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1472->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1472);

SoOrientationInterpolator* SoOrientationInterpolator1473 = new SoOrientationInterpolator();
SoOrientationInterpolator1473->setDEF(QString("Armature_OI_r_carpal"));
SoOrientationInterpolator1473->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1473->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1473);

SoOrientationInterpolator* SoOrientationInterpolator1474 = new SoOrientationInterpolator();
SoOrientationInterpolator1474->setDEF(QString("Armature_OI_r_trapezium"));
SoOrientationInterpolator1474->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1474->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1474);

SoOrientationInterpolator* SoOrientationInterpolator1475 = new SoOrientationInterpolator();
SoOrientationInterpolator1475->setDEF(QString("Armature_OI_r_metacarpal_1"));
SoOrientationInterpolator1475->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1475->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1475);

SoOrientationInterpolator* SoOrientationInterpolator1476 = new SoOrientationInterpolator();
SoOrientationInterpolator1476->setDEF(QString("Armature_OI_r_carpal_proximal_phalanx_1"));
SoOrientationInterpolator1476->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1476->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1476);

SoOrientationInterpolator* SoOrientationInterpolator1477 = new SoOrientationInterpolator();
SoOrientationInterpolator1477->setDEF(QString("Armature_OI_r_carpal_distal_phalanx_1"));
SoOrientationInterpolator1477->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1477->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1477);

SoOrientationInterpolator* SoOrientationInterpolator1478 = new SoOrientationInterpolator();
SoOrientationInterpolator1478->setDEF(QString("Armature_OI_r_trapezoid"));
SoOrientationInterpolator1478->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1478->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1478);

SoOrientationInterpolator* SoOrientationInterpolator1479 = new SoOrientationInterpolator();
SoOrientationInterpolator1479->setDEF(QString("Armature_OI_r_metacarpal_2"));
SoOrientationInterpolator1479->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1479->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1479);

SoOrientationInterpolator* SoOrientationInterpolator1480 = new SoOrientationInterpolator();
SoOrientationInterpolator1480->setDEF(QString("Armature_OI_r_carpal_proximal_phalanx_2"));
SoOrientationInterpolator1480->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1480->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1480);

SoOrientationInterpolator* SoOrientationInterpolator1481 = new SoOrientationInterpolator();
SoOrientationInterpolator1481->setDEF(QString("Armature_OI_r_carpal_middle_phalanx_2"));
SoOrientationInterpolator1481->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1481->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1481);

SoOrientationInterpolator* SoOrientationInterpolator1482 = new SoOrientationInterpolator();
SoOrientationInterpolator1482->setDEF(QString("Armature_OI_r_carpal_distal_phalanx_2"));
SoOrientationInterpolator1482->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1482->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1482);

SoOrientationInterpolator* SoOrientationInterpolator1483 = new SoOrientationInterpolator();
SoOrientationInterpolator1483->setDEF(QString("Armature_OI_r_capitate"));
SoOrientationInterpolator1483->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1483->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1483);

SoOrientationInterpolator* SoOrientationInterpolator1484 = new SoOrientationInterpolator();
SoOrientationInterpolator1484->setDEF(QString("Armature_OI_r_metacarpal_3"));
SoOrientationInterpolator1484->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1484->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1484);

SoOrientationInterpolator* SoOrientationInterpolator1485 = new SoOrientationInterpolator();
SoOrientationInterpolator1485->setDEF(QString("Armature_OI_r_carpal_proximal_phalanx_3"));
SoOrientationInterpolator1485->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1485->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1485);

SoOrientationInterpolator* SoOrientationInterpolator1486 = new SoOrientationInterpolator();
SoOrientationInterpolator1486->setDEF(QString("Armature_OI_r_carpal_middle_phalanx_3"));
SoOrientationInterpolator1486->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1486->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1486);

SoOrientationInterpolator* SoOrientationInterpolator1487 = new SoOrientationInterpolator();
SoOrientationInterpolator1487->setDEF(QString("Armature_OI_r_carpal_distal_phalanx_3"));
SoOrientationInterpolator1487->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1487->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1487);

SoOrientationInterpolator* SoOrientationInterpolator1488 = new SoOrientationInterpolator();
SoOrientationInterpolator1488->setDEF(QString("Armature_OI_r_hamate"));
SoOrientationInterpolator1488->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1488->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1488);

SoOrientationInterpolator* SoOrientationInterpolator1489 = new SoOrientationInterpolator();
SoOrientationInterpolator1489->setDEF(QString("Armature_OI_r_metacarpal_4"));
SoOrientationInterpolator1489->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1489->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1489);

SoOrientationInterpolator* SoOrientationInterpolator1490 = new SoOrientationInterpolator();
SoOrientationInterpolator1490->setDEF(QString("Armature_OI_r_carpal_proximal_phalanx_4"));
SoOrientationInterpolator1490->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1490->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1490);

SoOrientationInterpolator* SoOrientationInterpolator1491 = new SoOrientationInterpolator();
SoOrientationInterpolator1491->setDEF(QString("Armature_OI_r_carpal_middle_phalanx_4"));
SoOrientationInterpolator1491->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1491->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1491);

SoOrientationInterpolator* SoOrientationInterpolator1492 = new SoOrientationInterpolator();
SoOrientationInterpolator1492->setDEF(QString("Armature_OI_r_carpal_distal_phalanx_4"));
SoOrientationInterpolator1492->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1492->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1492);

SoOrientationInterpolator* SoOrientationInterpolator1493 = new SoOrientationInterpolator();
SoOrientationInterpolator1493->setDEF(QString("Armature_OI_r_metacarpal_5"));
SoOrientationInterpolator1493->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1493->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1493);

SoOrientationInterpolator* SoOrientationInterpolator1494 = new SoOrientationInterpolator();
SoOrientationInterpolator1494->setDEF(QString("Armature_OI_r_carpal_proximal_phalanx_5"));
SoOrientationInterpolator1494->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1494->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1494);

SoOrientationInterpolator* SoOrientationInterpolator1495 = new SoOrientationInterpolator();
SoOrientationInterpolator1495->setDEF(QString("Armature_OI_r_carpal_middle_phalanx_5"));
SoOrientationInterpolator1495->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1495->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1495);

SoOrientationInterpolator* SoOrientationInterpolator1496 = new SoOrientationInterpolator();
SoOrientationInterpolator1496->setDEF(QString("Armature_OI_r_carpal_distal_phalanx_5"));
SoOrientationInterpolator1496->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1496->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 8);
SoNode7->addChild(*SoOrientationInterpolator1496);

SoROUTE* SoROUTE1497 = new SoROUTE();
SoROUTE1497->setFromField(QString("fraction_changed"));
SoROUTE1497->setFromNode(QString("Armature_Clock"));
SoROUTE1497->setToField(QString("set_fraction"));
SoROUTE1497->setToNode(QString("Armature_OI_sacrum"));
SoNode7->addChild(*SoROUTE1497);

SoROUTE* SoROUTE1498 = new SoROUTE();
SoROUTE1498->setFromField(QString("value_changed"));
SoROUTE1498->setFromNode(QString("Armature_OI_sacrum"));
SoROUTE1498->setToField(QString("rotation"));
SoROUTE1498->setToNode(QString("hanim_sacrum"));
SoNode7->addChild(*SoROUTE1498);

SoROUTE* SoROUTE1499 = new SoROUTE();
SoROUTE1499->setFromField(QString("fraction_changed"));
SoROUTE1499->setFromNode(QString("Armature_Clock"));
SoROUTE1499->setToField(QString("set_fraction"));
SoROUTE1499->setToNode(QString("Armature_OI_pelvis"));
SoNode7->addChild(*SoROUTE1499);

SoROUTE* SoROUTE1500 = new SoROUTE();
SoROUTE1500->setFromField(QString("value_changed"));
SoROUTE1500->setFromNode(QString("Armature_OI_pelvis"));
SoROUTE1500->setToField(QString("rotation"));
SoROUTE1500->setToNode(QString("hanim_pelvis"));
SoNode7->addChild(*SoROUTE1500);

SoROUTE* SoROUTE1501 = new SoROUTE();
SoROUTE1501->setFromField(QString("fraction_changed"));
SoROUTE1501->setFromNode(QString("Armature_Clock"));
SoROUTE1501->setToField(QString("set_fraction"));
SoROUTE1501->setToNode(QString("Armature_OI_l_thigh"));
SoNode7->addChild(*SoROUTE1501);

SoROUTE* SoROUTE1502 = new SoROUTE();
SoROUTE1502->setFromField(QString("value_changed"));
SoROUTE1502->setFromNode(QString("Armature_OI_l_thigh"));
SoROUTE1502->setToField(QString("rotation"));
SoROUTE1502->setToNode(QString("hanim_l_thigh"));
SoNode7->addChild(*SoROUTE1502);

SoROUTE* SoROUTE1503 = new SoROUTE();
SoROUTE1503->setFromField(QString("fraction_changed"));
SoROUTE1503->setFromNode(QString("Armature_Clock"));
SoROUTE1503->setToField(QString("set_fraction"));
SoROUTE1503->setToNode(QString("Armature_OI_l_calf"));
SoNode7->addChild(*SoROUTE1503);

SoROUTE* SoROUTE1504 = new SoROUTE();
SoROUTE1504->setFromField(QString("value_changed"));
SoROUTE1504->setFromNode(QString("Armature_OI_l_calf"));
SoROUTE1504->setToField(QString("rotation"));
SoROUTE1504->setToNode(QString("hanim_l_calf"));
SoNode7->addChild(*SoROUTE1504);

SoROUTE* SoROUTE1505 = new SoROUTE();
SoROUTE1505->setFromField(QString("fraction_changed"));
SoROUTE1505->setFromNode(QString("Armature_Clock"));
SoROUTE1505->setToField(QString("set_fraction"));
SoROUTE1505->setToNode(QString("Armature_OI_l_talus"));
SoNode7->addChild(*SoROUTE1505);

SoROUTE* SoROUTE1506 = new SoROUTE();
SoROUTE1506->setFromField(QString("value_changed"));
SoROUTE1506->setFromNode(QString("Armature_OI_l_talus"));
SoROUTE1506->setToField(QString("rotation"));
SoROUTE1506->setToNode(QString("hanim_l_talus"));
SoNode7->addChild(*SoROUTE1506);

SoROUTE* SoROUTE1507 = new SoROUTE();
SoROUTE1507->setFromField(QString("fraction_changed"));
SoROUTE1507->setFromNode(QString("Armature_Clock"));
SoROUTE1507->setToField(QString("set_fraction"));
SoROUTE1507->setToNode(QString("Armature_OI_l_navicular"));
SoNode7->addChild(*SoROUTE1507);

SoROUTE* SoROUTE1508 = new SoROUTE();
SoROUTE1508->setFromField(QString("value_changed"));
SoROUTE1508->setFromNode(QString("Armature_OI_l_navicular"));
SoROUTE1508->setToField(QString("rotation"));
SoROUTE1508->setToNode(QString("hanim_l_navicular"));
SoNode7->addChild(*SoROUTE1508);

SoROUTE* SoROUTE1509 = new SoROUTE();
SoROUTE1509->setFromField(QString("fraction_changed"));
SoROUTE1509->setFromNode(QString("Armature_Clock"));
SoROUTE1509->setToField(QString("set_fraction"));
SoROUTE1509->setToNode(QString("Armature_OI_l_cuneiform_1"));
SoNode7->addChild(*SoROUTE1509);

SoROUTE* SoROUTE1510 = new SoROUTE();
SoROUTE1510->setFromField(QString("value_changed"));
SoROUTE1510->setFromNode(QString("Armature_OI_l_cuneiform_1"));
SoROUTE1510->setToField(QString("rotation"));
SoROUTE1510->setToNode(QString("hanim_l_cuneiform_1"));
SoNode7->addChild(*SoROUTE1510);

SoROUTE* SoROUTE1511 = new SoROUTE();
SoROUTE1511->setFromField(QString("fraction_changed"));
SoROUTE1511->setFromNode(QString("Armature_Clock"));
SoROUTE1511->setToField(QString("set_fraction"));
SoROUTE1511->setToNode(QString("Armature_OI_l_metatarsal_1"));
SoNode7->addChild(*SoROUTE1511);

SoROUTE* SoROUTE1512 = new SoROUTE();
SoROUTE1512->setFromField(QString("value_changed"));
SoROUTE1512->setFromNode(QString("Armature_OI_l_metatarsal_1"));
SoROUTE1512->setToField(QString("rotation"));
SoROUTE1512->setToNode(QString("hanim_l_metatarsal_1"));
SoNode7->addChild(*SoROUTE1512);

SoROUTE* SoROUTE1513 = new SoROUTE();
SoROUTE1513->setFromField(QString("fraction_changed"));
SoROUTE1513->setFromNode(QString("Armature_Clock"));
SoROUTE1513->setToField(QString("set_fraction"));
SoROUTE1513->setToNode(QString("Armature_OI_l_tarsal_proximal_phalanx_1"));
SoNode7->addChild(*SoROUTE1513);

SoROUTE* SoROUTE1514 = new SoROUTE();
SoROUTE1514->setFromField(QString("value_changed"));
SoROUTE1514->setFromNode(QString("Armature_OI_l_tarsal_proximal_phalanx_1"));
SoROUTE1514->setToField(QString("rotation"));
SoROUTE1514->setToNode(QString("hanim_l_tarsal_proximal_phalanx_1"));
SoNode7->addChild(*SoROUTE1514);

SoROUTE* SoROUTE1515 = new SoROUTE();
SoROUTE1515->setFromField(QString("fraction_changed"));
SoROUTE1515->setFromNode(QString("Armature_Clock"));
SoROUTE1515->setToField(QString("set_fraction"));
SoROUTE1515->setToNode(QString("Armature_OI_l_tarsal_distal_phalanx_1"));
SoNode7->addChild(*SoROUTE1515);

SoROUTE* SoROUTE1516 = new SoROUTE();
SoROUTE1516->setFromField(QString("value_changed"));
SoROUTE1516->setFromNode(QString("Armature_OI_l_tarsal_distal_phalanx_1"));
SoROUTE1516->setToField(QString("rotation"));
SoROUTE1516->setToNode(QString("hanim_l_tarsal_distal_phalanx_1"));
SoNode7->addChild(*SoROUTE1516);

SoROUTE* SoROUTE1517 = new SoROUTE();
SoROUTE1517->setFromField(QString("fraction_changed"));
SoROUTE1517->setFromNode(QString("Armature_Clock"));
SoROUTE1517->setToField(QString("set_fraction"));
SoROUTE1517->setToNode(QString("Armature_OI_l_cuneiform_2"));
SoNode7->addChild(*SoROUTE1517);

SoROUTE* SoROUTE1518 = new SoROUTE();
SoROUTE1518->setFromField(QString("value_changed"));
SoROUTE1518->setFromNode(QString("Armature_OI_l_cuneiform_2"));
SoROUTE1518->setToField(QString("rotation"));
SoROUTE1518->setToNode(QString("hanim_l_cuneiform_2"));
SoNode7->addChild(*SoROUTE1518);

SoROUTE* SoROUTE1519 = new SoROUTE();
SoROUTE1519->setFromField(QString("fraction_changed"));
SoROUTE1519->setFromNode(QString("Armature_Clock"));
SoROUTE1519->setToField(QString("set_fraction"));
SoROUTE1519->setToNode(QString("Armature_OI_l_metatarsal_2"));
SoNode7->addChild(*SoROUTE1519);

SoROUTE* SoROUTE1520 = new SoROUTE();
SoROUTE1520->setFromField(QString("value_changed"));
SoROUTE1520->setFromNode(QString("Armature_OI_l_metatarsal_2"));
SoROUTE1520->setToField(QString("rotation"));
SoROUTE1520->setToNode(QString("hanim_l_metatarsal_2"));
SoNode7->addChild(*SoROUTE1520);

SoROUTE* SoROUTE1521 = new SoROUTE();
SoROUTE1521->setFromField(QString("fraction_changed"));
SoROUTE1521->setFromNode(QString("Armature_Clock"));
SoROUTE1521->setToField(QString("set_fraction"));
SoROUTE1521->setToNode(QString("Armature_OI_l_tarsal_proximal_phalanx_2"));
SoNode7->addChild(*SoROUTE1521);

SoROUTE* SoROUTE1522 = new SoROUTE();
SoROUTE1522->setFromField(QString("value_changed"));
SoROUTE1522->setFromNode(QString("Armature_OI_l_tarsal_proximal_phalanx_2"));
SoROUTE1522->setToField(QString("rotation"));
SoROUTE1522->setToNode(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoNode7->addChild(*SoROUTE1522);

SoROUTE* SoROUTE1523 = new SoROUTE();
SoROUTE1523->setFromField(QString("fraction_changed"));
SoROUTE1523->setFromNode(QString("Armature_Clock"));
SoROUTE1523->setToField(QString("set_fraction"));
SoROUTE1523->setToNode(QString("Armature_OI_l_tarsal_middle_phalanx_2"));
SoNode7->addChild(*SoROUTE1523);

SoROUTE* SoROUTE1524 = new SoROUTE();
SoROUTE1524->setFromField(QString("value_changed"));
SoROUTE1524->setFromNode(QString("Armature_OI_l_tarsal_middle_phalanx_2"));
SoROUTE1524->setToField(QString("rotation"));
SoROUTE1524->setToNode(QString("hanim_l_tarsal_middle_phalanx_2"));
SoNode7->addChild(*SoROUTE1524);

SoROUTE* SoROUTE1525 = new SoROUTE();
SoROUTE1525->setFromField(QString("fraction_changed"));
SoROUTE1525->setFromNode(QString("Armature_Clock"));
SoROUTE1525->setToField(QString("set_fraction"));
SoROUTE1525->setToNode(QString("Armature_OI_l_tarsal_distal_phalanx_2"));
SoNode7->addChild(*SoROUTE1525);

SoROUTE* SoROUTE1526 = new SoROUTE();
SoROUTE1526->setFromField(QString("value_changed"));
SoROUTE1526->setFromNode(QString("Armature_OI_l_tarsal_distal_phalanx_2"));
SoROUTE1526->setToField(QString("rotation"));
SoROUTE1526->setToNode(QString("hanim_l_tarsal_distal_phalanx_2"));
SoNode7->addChild(*SoROUTE1526);

SoROUTE* SoROUTE1527 = new SoROUTE();
SoROUTE1527->setFromField(QString("fraction_changed"));
SoROUTE1527->setFromNode(QString("Armature_Clock"));
SoROUTE1527->setToField(QString("set_fraction"));
SoROUTE1527->setToNode(QString("Armature_OI_l_cuneiform_3"));
SoNode7->addChild(*SoROUTE1527);

SoROUTE* SoROUTE1528 = new SoROUTE();
SoROUTE1528->setFromField(QString("value_changed"));
SoROUTE1528->setFromNode(QString("Armature_OI_l_cuneiform_3"));
SoROUTE1528->setToField(QString("rotation"));
SoROUTE1528->setToNode(QString("hanim_l_cuneiform_3"));
SoNode7->addChild(*SoROUTE1528);

SoROUTE* SoROUTE1529 = new SoROUTE();
SoROUTE1529->setFromField(QString("fraction_changed"));
SoROUTE1529->setFromNode(QString("Armature_Clock"));
SoROUTE1529->setToField(QString("set_fraction"));
SoROUTE1529->setToNode(QString("Armature_OI_l_metatarsal_3"));
SoNode7->addChild(*SoROUTE1529);

SoROUTE* SoROUTE1530 = new SoROUTE();
SoROUTE1530->setFromField(QString("value_changed"));
SoROUTE1530->setFromNode(QString("Armature_OI_l_metatarsal_3"));
SoROUTE1530->setToField(QString("rotation"));
SoROUTE1530->setToNode(QString("hanim_l_metatarsal_3"));
SoNode7->addChild(*SoROUTE1530);

SoROUTE* SoROUTE1531 = new SoROUTE();
SoROUTE1531->setFromField(QString("fraction_changed"));
SoROUTE1531->setFromNode(QString("Armature_Clock"));
SoROUTE1531->setToField(QString("set_fraction"));
SoROUTE1531->setToNode(QString("Armature_OI_l_tarsal_proximal_phalanx_3"));
SoNode7->addChild(*SoROUTE1531);

SoROUTE* SoROUTE1532 = new SoROUTE();
SoROUTE1532->setFromField(QString("value_changed"));
SoROUTE1532->setFromNode(QString("Armature_OI_l_tarsal_proximal_phalanx_3"));
SoROUTE1532->setToField(QString("rotation"));
SoROUTE1532->setToNode(QString("hanim_l_tarsal_proximal_phalanx_3"));
SoNode7->addChild(*SoROUTE1532);

SoROUTE* SoROUTE1533 = new SoROUTE();
SoROUTE1533->setFromField(QString("fraction_changed"));
SoROUTE1533->setFromNode(QString("Armature_Clock"));
SoROUTE1533->setToField(QString("set_fraction"));
SoROUTE1533->setToNode(QString("Armature_OI_l_tarsal_middle_phalanx_3"));
SoNode7->addChild(*SoROUTE1533);

SoROUTE* SoROUTE1534 = new SoROUTE();
SoROUTE1534->setFromField(QString("value_changed"));
SoROUTE1534->setFromNode(QString("Armature_OI_l_tarsal_middle_phalanx_3"));
SoROUTE1534->setToField(QString("rotation"));
SoROUTE1534->setToNode(QString("hanim_l_tarsal_middle_phalanx_3"));
SoNode7->addChild(*SoROUTE1534);

SoROUTE* SoROUTE1535 = new SoROUTE();
SoROUTE1535->setFromField(QString("fraction_changed"));
SoROUTE1535->setFromNode(QString("Armature_Clock"));
SoROUTE1535->setToField(QString("set_fraction"));
SoROUTE1535->setToNode(QString("Armature_OI_l_tarsal_distal_phalanx_3"));
SoNode7->addChild(*SoROUTE1535);

SoROUTE* SoROUTE1536 = new SoROUTE();
SoROUTE1536->setFromField(QString("value_changed"));
SoROUTE1536->setFromNode(QString("Armature_OI_l_tarsal_distal_phalanx_3"));
SoROUTE1536->setToField(QString("rotation"));
SoROUTE1536->setToNode(QString("hanim_l_tarsal_distal_phalanx_3"));
SoNode7->addChild(*SoROUTE1536);

SoROUTE* SoROUTE1537 = new SoROUTE();
SoROUTE1537->setFromField(QString("fraction_changed"));
SoROUTE1537->setFromNode(QString("Armature_Clock"));
SoROUTE1537->setToField(QString("set_fraction"));
SoROUTE1537->setToNode(QString("Armature_OI_l_calcaneus"));
SoNode7->addChild(*SoROUTE1537);

SoROUTE* SoROUTE1538 = new SoROUTE();
SoROUTE1538->setFromField(QString("value_changed"));
SoROUTE1538->setFromNode(QString("Armature_OI_l_calcaneus"));
SoROUTE1538->setToField(QString("rotation"));
SoROUTE1538->setToNode(QString("hanim_l_calcaneus"));
SoNode7->addChild(*SoROUTE1538);

SoROUTE* SoROUTE1539 = new SoROUTE();
SoROUTE1539->setFromField(QString("fraction_changed"));
SoROUTE1539->setFromNode(QString("Armature_Clock"));
SoROUTE1539->setToField(QString("set_fraction"));
SoROUTE1539->setToNode(QString("Armature_OI_l_cuboid"));
SoNode7->addChild(*SoROUTE1539);

SoROUTE* SoROUTE1540 = new SoROUTE();
SoROUTE1540->setFromField(QString("value_changed"));
SoROUTE1540->setFromNode(QString("Armature_OI_l_cuboid"));
SoROUTE1540->setToField(QString("rotation"));
SoROUTE1540->setToNode(QString("hanim_l_cuboid"));
SoNode7->addChild(*SoROUTE1540);

SoROUTE* SoROUTE1541 = new SoROUTE();
SoROUTE1541->setFromField(QString("fraction_changed"));
SoROUTE1541->setFromNode(QString("Armature_Clock"));
SoROUTE1541->setToField(QString("set_fraction"));
SoROUTE1541->setToNode(QString("Armature_OI_l_metatarsal_4"));
SoNode7->addChild(*SoROUTE1541);

SoROUTE* SoROUTE1542 = new SoROUTE();
SoROUTE1542->setFromField(QString("value_changed"));
SoROUTE1542->setFromNode(QString("Armature_OI_l_metatarsal_4"));
SoROUTE1542->setToField(QString("rotation"));
SoROUTE1542->setToNode(QString("hanim_l_metatarsal_4"));
SoNode7->addChild(*SoROUTE1542);

SoROUTE* SoROUTE1543 = new SoROUTE();
SoROUTE1543->setFromField(QString("fraction_changed"));
SoROUTE1543->setFromNode(QString("Armature_Clock"));
SoROUTE1543->setToField(QString("set_fraction"));
SoROUTE1543->setToNode(QString("Armature_OI_l_tarsal_proximal_phalanx_4"));
SoNode7->addChild(*SoROUTE1543);

SoROUTE* SoROUTE1544 = new SoROUTE();
SoROUTE1544->setFromField(QString("value_changed"));
SoROUTE1544->setFromNode(QString("Armature_OI_l_tarsal_proximal_phalanx_4"));
SoROUTE1544->setToField(QString("rotation"));
SoROUTE1544->setToNode(QString("hanim_l_tarsal_proximal_phalanx_4"));
SoNode7->addChild(*SoROUTE1544);

SoROUTE* SoROUTE1545 = new SoROUTE();
SoROUTE1545->setFromField(QString("fraction_changed"));
SoROUTE1545->setFromNode(QString("Armature_Clock"));
SoROUTE1545->setToField(QString("set_fraction"));
SoROUTE1545->setToNode(QString("Armature_OI_l_tarsal_middle_phalanx_4"));
SoNode7->addChild(*SoROUTE1545);

SoROUTE* SoROUTE1546 = new SoROUTE();
SoROUTE1546->setFromField(QString("value_changed"));
SoROUTE1546->setFromNode(QString("Armature_OI_l_tarsal_middle_phalanx_4"));
SoROUTE1546->setToField(QString("rotation"));
SoROUTE1546->setToNode(QString("hanim_l_tarsal_middle_phalanx_4"));
SoNode7->addChild(*SoROUTE1546);

SoROUTE* SoROUTE1547 = new SoROUTE();
SoROUTE1547->setFromField(QString("fraction_changed"));
SoROUTE1547->setFromNode(QString("Armature_Clock"));
SoROUTE1547->setToField(QString("set_fraction"));
SoROUTE1547->setToNode(QString("Armature_OI_l_tarsal_distal_phalanx_4"));
SoNode7->addChild(*SoROUTE1547);

SoROUTE* SoROUTE1548 = new SoROUTE();
SoROUTE1548->setFromField(QString("value_changed"));
SoROUTE1548->setFromNode(QString("Armature_OI_l_tarsal_distal_phalanx_4"));
SoROUTE1548->setToField(QString("rotation"));
SoROUTE1548->setToNode(QString("hanim_l_tarsal_distal_phalanx_4"));
SoNode7->addChild(*SoROUTE1548);

SoROUTE* SoROUTE1549 = new SoROUTE();
SoROUTE1549->setFromField(QString("fraction_changed"));
SoROUTE1549->setFromNode(QString("Armature_Clock"));
SoROUTE1549->setToField(QString("set_fraction"));
SoROUTE1549->setToNode(QString("Armature_OI_l_metatarsal_5"));
SoNode7->addChild(*SoROUTE1549);

SoROUTE* SoROUTE1550 = new SoROUTE();
SoROUTE1550->setFromField(QString("value_changed"));
SoROUTE1550->setFromNode(QString("Armature_OI_l_metatarsal_5"));
SoROUTE1550->setToField(QString("rotation"));
SoROUTE1550->setToNode(QString("hanim_l_metatarsal_5"));
SoNode7->addChild(*SoROUTE1550);

SoROUTE* SoROUTE1551 = new SoROUTE();
SoROUTE1551->setFromField(QString("fraction_changed"));
SoROUTE1551->setFromNode(QString("Armature_Clock"));
SoROUTE1551->setToField(QString("set_fraction"));
SoROUTE1551->setToNode(QString("Armature_OI_l_tarsal_proximal_phalanx_5"));
SoNode7->addChild(*SoROUTE1551);

SoROUTE* SoROUTE1552 = new SoROUTE();
SoROUTE1552->setFromField(QString("value_changed"));
SoROUTE1552->setFromNode(QString("Armature_OI_l_tarsal_proximal_phalanx_5"));
SoROUTE1552->setToField(QString("rotation"));
SoROUTE1552->setToNode(QString("hanim_l_tarsal_proximal_phalanx_5"));
SoNode7->addChild(*SoROUTE1552);

SoROUTE* SoROUTE1553 = new SoROUTE();
SoROUTE1553->setFromField(QString("fraction_changed"));
SoROUTE1553->setFromNode(QString("Armature_Clock"));
SoROUTE1553->setToField(QString("set_fraction"));
SoROUTE1553->setToNode(QString("Armature_OI_l_tarsal_middle_phalanx_5"));
SoNode7->addChild(*SoROUTE1553);

SoROUTE* SoROUTE1554 = new SoROUTE();
SoROUTE1554->setFromField(QString("value_changed"));
SoROUTE1554->setFromNode(QString("Armature_OI_l_tarsal_middle_phalanx_5"));
SoROUTE1554->setToField(QString("rotation"));
SoROUTE1554->setToNode(QString("hanim_l_tarsal_middle_phalanx_5"));
SoNode7->addChild(*SoROUTE1554);

SoROUTE* SoROUTE1555 = new SoROUTE();
SoROUTE1555->setFromField(QString("fraction_changed"));
SoROUTE1555->setFromNode(QString("Armature_Clock"));
SoROUTE1555->setToField(QString("set_fraction"));
SoROUTE1555->setToNode(QString("Armature_OI_l_tarsal_distal_phalanx_5"));
SoNode7->addChild(*SoROUTE1555);

SoROUTE* SoROUTE1556 = new SoROUTE();
SoROUTE1556->setFromField(QString("value_changed"));
SoROUTE1556->setFromNode(QString("Armature_OI_l_tarsal_distal_phalanx_5"));
SoROUTE1556->setToField(QString("rotation"));
SoROUTE1556->setToNode(QString("hanim_l_tarsal_distal_phalanx_5"));
SoNode7->addChild(*SoROUTE1556);

SoROUTE* SoROUTE1557 = new SoROUTE();
SoROUTE1557->setFromField(QString("fraction_changed"));
SoROUTE1557->setFromNode(QString("Armature_Clock"));
SoROUTE1557->setToField(QString("set_fraction"));
SoROUTE1557->setToNode(QString("Armature_OI_r_thigh"));
SoNode7->addChild(*SoROUTE1557);

SoROUTE* SoROUTE1558 = new SoROUTE();
SoROUTE1558->setFromField(QString("value_changed"));
SoROUTE1558->setFromNode(QString("Armature_OI_r_thigh"));
SoROUTE1558->setToField(QString("rotation"));
SoROUTE1558->setToNode(QString("hanim_r_thigh"));
SoNode7->addChild(*SoROUTE1558);

SoROUTE* SoROUTE1559 = new SoROUTE();
SoROUTE1559->setFromField(QString("fraction_changed"));
SoROUTE1559->setFromNode(QString("Armature_Clock"));
SoROUTE1559->setToField(QString("set_fraction"));
SoROUTE1559->setToNode(QString("Armature_OI_r_calf"));
SoNode7->addChild(*SoROUTE1559);

SoROUTE* SoROUTE1560 = new SoROUTE();
SoROUTE1560->setFromField(QString("value_changed"));
SoROUTE1560->setFromNode(QString("Armature_OI_r_calf"));
SoROUTE1560->setToField(QString("rotation"));
SoROUTE1560->setToNode(QString("hanim_r_calf"));
SoNode7->addChild(*SoROUTE1560);

SoROUTE* SoROUTE1561 = new SoROUTE();
SoROUTE1561->setFromField(QString("fraction_changed"));
SoROUTE1561->setFromNode(QString("Armature_Clock"));
SoROUTE1561->setToField(QString("set_fraction"));
SoROUTE1561->setToNode(QString("Armature_OI_r_talus"));
SoNode7->addChild(*SoROUTE1561);

SoROUTE* SoROUTE1562 = new SoROUTE();
SoROUTE1562->setFromField(QString("value_changed"));
SoROUTE1562->setFromNode(QString("Armature_OI_r_talus"));
SoROUTE1562->setToField(QString("rotation"));
SoROUTE1562->setToNode(QString("hanim_r_talus"));
SoNode7->addChild(*SoROUTE1562);

SoROUTE* SoROUTE1563 = new SoROUTE();
SoROUTE1563->setFromField(QString("fraction_changed"));
SoROUTE1563->setFromNode(QString("Armature_Clock"));
SoROUTE1563->setToField(QString("set_fraction"));
SoROUTE1563->setToNode(QString("Armature_OI_r_navicular"));
SoNode7->addChild(*SoROUTE1563);

SoROUTE* SoROUTE1564 = new SoROUTE();
SoROUTE1564->setFromField(QString("value_changed"));
SoROUTE1564->setFromNode(QString("Armature_OI_r_navicular"));
SoROUTE1564->setToField(QString("rotation"));
SoROUTE1564->setToNode(QString("hanim_r_navicular"));
SoNode7->addChild(*SoROUTE1564);

SoROUTE* SoROUTE1565 = new SoROUTE();
SoROUTE1565->setFromField(QString("fraction_changed"));
SoROUTE1565->setFromNode(QString("Armature_Clock"));
SoROUTE1565->setToField(QString("set_fraction"));
SoROUTE1565->setToNode(QString("Armature_OI_r_cuneiform_1"));
SoNode7->addChild(*SoROUTE1565);

SoROUTE* SoROUTE1566 = new SoROUTE();
SoROUTE1566->setFromField(QString("value_changed"));
SoROUTE1566->setFromNode(QString("Armature_OI_r_cuneiform_1"));
SoROUTE1566->setToField(QString("rotation"));
SoROUTE1566->setToNode(QString("hanim_r_cuneiform_1"));
SoNode7->addChild(*SoROUTE1566);

SoROUTE* SoROUTE1567 = new SoROUTE();
SoROUTE1567->setFromField(QString("fraction_changed"));
SoROUTE1567->setFromNode(QString("Armature_Clock"));
SoROUTE1567->setToField(QString("set_fraction"));
SoROUTE1567->setToNode(QString("Armature_OI_r_metatarsal_1"));
SoNode7->addChild(*SoROUTE1567);

SoROUTE* SoROUTE1568 = new SoROUTE();
SoROUTE1568->setFromField(QString("value_changed"));
SoROUTE1568->setFromNode(QString("Armature_OI_r_metatarsal_1"));
SoROUTE1568->setToField(QString("rotation"));
SoROUTE1568->setToNode(QString("hanim_r_metatarsal_1"));
SoNode7->addChild(*SoROUTE1568);

SoROUTE* SoROUTE1569 = new SoROUTE();
SoROUTE1569->setFromField(QString("fraction_changed"));
SoROUTE1569->setFromNode(QString("Armature_Clock"));
SoROUTE1569->setToField(QString("set_fraction"));
SoROUTE1569->setToNode(QString("Armature_OI_r_tarsal_proximal_phalanx_1"));
SoNode7->addChild(*SoROUTE1569);

SoROUTE* SoROUTE1570 = new SoROUTE();
SoROUTE1570->setFromField(QString("value_changed"));
SoROUTE1570->setFromNode(QString("Armature_OI_r_tarsal_proximal_phalanx_1"));
SoROUTE1570->setToField(QString("rotation"));
SoROUTE1570->setToNode(QString("hanim_r_tarsal_proximal_phalanx_1"));
SoNode7->addChild(*SoROUTE1570);

SoROUTE* SoROUTE1571 = new SoROUTE();
SoROUTE1571->setFromField(QString("fraction_changed"));
SoROUTE1571->setFromNode(QString("Armature_Clock"));
SoROUTE1571->setToField(QString("set_fraction"));
SoROUTE1571->setToNode(QString("Armature_OI_r_tarsal_distal_phalanx_1"));
SoNode7->addChild(*SoROUTE1571);

SoROUTE* SoROUTE1572 = new SoROUTE();
SoROUTE1572->setFromField(QString("value_changed"));
SoROUTE1572->setFromNode(QString("Armature_OI_r_tarsal_distal_phalanx_1"));
SoROUTE1572->setToField(QString("rotation"));
SoROUTE1572->setToNode(QString("hanim_r_tarsal_distal_phalanx_1"));
SoNode7->addChild(*SoROUTE1572);

SoROUTE* SoROUTE1573 = new SoROUTE();
SoROUTE1573->setFromField(QString("fraction_changed"));
SoROUTE1573->setFromNode(QString("Armature_Clock"));
SoROUTE1573->setToField(QString("set_fraction"));
SoROUTE1573->setToNode(QString("Armature_OI_r_cuneiform_2"));
SoNode7->addChild(*SoROUTE1573);

SoROUTE* SoROUTE1574 = new SoROUTE();
SoROUTE1574->setFromField(QString("value_changed"));
SoROUTE1574->setFromNode(QString("Armature_OI_r_cuneiform_2"));
SoROUTE1574->setToField(QString("rotation"));
SoROUTE1574->setToNode(QString("hanim_r_cuneiform_2"));
SoNode7->addChild(*SoROUTE1574);

SoROUTE* SoROUTE1575 = new SoROUTE();
SoROUTE1575->setFromField(QString("fraction_changed"));
SoROUTE1575->setFromNode(QString("Armature_Clock"));
SoROUTE1575->setToField(QString("set_fraction"));
SoROUTE1575->setToNode(QString("Armature_OI_r_metatarsal_2"));
SoNode7->addChild(*SoROUTE1575);

SoROUTE* SoROUTE1576 = new SoROUTE();
SoROUTE1576->setFromField(QString("value_changed"));
SoROUTE1576->setFromNode(QString("Armature_OI_r_metatarsal_2"));
SoROUTE1576->setToField(QString("rotation"));
SoROUTE1576->setToNode(QString("hanim_r_metatarsal_2"));
SoNode7->addChild(*SoROUTE1576);

SoROUTE* SoROUTE1577 = new SoROUTE();
SoROUTE1577->setFromField(QString("fraction_changed"));
SoROUTE1577->setFromNode(QString("Armature_Clock"));
SoROUTE1577->setToField(QString("set_fraction"));
SoROUTE1577->setToNode(QString("Armature_OI_r_tarsal_proximal_phalanx_2"));
SoNode7->addChild(*SoROUTE1577);

SoROUTE* SoROUTE1578 = new SoROUTE();
SoROUTE1578->setFromField(QString("value_changed"));
SoROUTE1578->setFromNode(QString("Armature_OI_r_tarsal_proximal_phalanx_2"));
SoROUTE1578->setToField(QString("rotation"));
SoROUTE1578->setToNode(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoNode7->addChild(*SoROUTE1578);

SoROUTE* SoROUTE1579 = new SoROUTE();
SoROUTE1579->setFromField(QString("fraction_changed"));
SoROUTE1579->setFromNode(QString("Armature_Clock"));
SoROUTE1579->setToField(QString("set_fraction"));
SoROUTE1579->setToNode(QString("Armature_OI_r_tarsal_middle_phalanx_2"));
SoNode7->addChild(*SoROUTE1579);

SoROUTE* SoROUTE1580 = new SoROUTE();
SoROUTE1580->setFromField(QString("value_changed"));
SoROUTE1580->setFromNode(QString("Armature_OI_r_tarsal_middle_phalanx_2"));
SoROUTE1580->setToField(QString("rotation"));
SoROUTE1580->setToNode(QString("hanim_r_tarsal_middle_phalanx_2"));
SoNode7->addChild(*SoROUTE1580);

SoROUTE* SoROUTE1581 = new SoROUTE();
SoROUTE1581->setFromField(QString("fraction_changed"));
SoROUTE1581->setFromNode(QString("Armature_Clock"));
SoROUTE1581->setToField(QString("set_fraction"));
SoROUTE1581->setToNode(QString("Armature_OI_r_tarsal_distal_phalanx_2"));
SoNode7->addChild(*SoROUTE1581);

SoROUTE* SoROUTE1582 = new SoROUTE();
SoROUTE1582->setFromField(QString("value_changed"));
SoROUTE1582->setFromNode(QString("Armature_OI_r_tarsal_distal_phalanx_2"));
SoROUTE1582->setToField(QString("rotation"));
SoROUTE1582->setToNode(QString("hanim_r_tarsal_distal_phalanx_2"));
SoNode7->addChild(*SoROUTE1582);

SoROUTE* SoROUTE1583 = new SoROUTE();
SoROUTE1583->setFromField(QString("fraction_changed"));
SoROUTE1583->setFromNode(QString("Armature_Clock"));
SoROUTE1583->setToField(QString("set_fraction"));
SoROUTE1583->setToNode(QString("Armature_OI_r_cuneiform_3"));
SoNode7->addChild(*SoROUTE1583);

SoROUTE* SoROUTE1584 = new SoROUTE();
SoROUTE1584->setFromField(QString("value_changed"));
SoROUTE1584->setFromNode(QString("Armature_OI_r_cuneiform_3"));
SoROUTE1584->setToField(QString("rotation"));
SoROUTE1584->setToNode(QString("hanim_r_cuneiform_3"));
SoNode7->addChild(*SoROUTE1584);

SoROUTE* SoROUTE1585 = new SoROUTE();
SoROUTE1585->setFromField(QString("fraction_changed"));
SoROUTE1585->setFromNode(QString("Armature_Clock"));
SoROUTE1585->setToField(QString("set_fraction"));
SoROUTE1585->setToNode(QString("Armature_OI_r_metatarsal_3"));
SoNode7->addChild(*SoROUTE1585);

SoROUTE* SoROUTE1586 = new SoROUTE();
SoROUTE1586->setFromField(QString("value_changed"));
SoROUTE1586->setFromNode(QString("Armature_OI_r_metatarsal_3"));
SoROUTE1586->setToField(QString("rotation"));
SoROUTE1586->setToNode(QString("hanim_r_metatarsal_3"));
SoNode7->addChild(*SoROUTE1586);

SoROUTE* SoROUTE1587 = new SoROUTE();
SoROUTE1587->setFromField(QString("fraction_changed"));
SoROUTE1587->setFromNode(QString("Armature_Clock"));
SoROUTE1587->setToField(QString("set_fraction"));
SoROUTE1587->setToNode(QString("Armature_OI_r_tarsal_proximal_phalanx_3"));
SoNode7->addChild(*SoROUTE1587);

SoROUTE* SoROUTE1588 = new SoROUTE();
SoROUTE1588->setFromField(QString("value_changed"));
SoROUTE1588->setFromNode(QString("Armature_OI_r_tarsal_proximal_phalanx_3"));
SoROUTE1588->setToField(QString("rotation"));
SoROUTE1588->setToNode(QString("hanim_r_tarsal_proximal_phalanx_3"));
SoNode7->addChild(*SoROUTE1588);

SoROUTE* SoROUTE1589 = new SoROUTE();
SoROUTE1589->setFromField(QString("fraction_changed"));
SoROUTE1589->setFromNode(QString("Armature_Clock"));
SoROUTE1589->setToField(QString("set_fraction"));
SoROUTE1589->setToNode(QString("Armature_OI_r_tarsal_middle_phalanx_3"));
SoNode7->addChild(*SoROUTE1589);

SoROUTE* SoROUTE1590 = new SoROUTE();
SoROUTE1590->setFromField(QString("value_changed"));
SoROUTE1590->setFromNode(QString("Armature_OI_r_tarsal_middle_phalanx_3"));
SoROUTE1590->setToField(QString("rotation"));
SoROUTE1590->setToNode(QString("hanim_r_tarsal_middle_phalanx_3"));
SoNode7->addChild(*SoROUTE1590);

SoROUTE* SoROUTE1591 = new SoROUTE();
SoROUTE1591->setFromField(QString("fraction_changed"));
SoROUTE1591->setFromNode(QString("Armature_Clock"));
SoROUTE1591->setToField(QString("set_fraction"));
SoROUTE1591->setToNode(QString("Armature_OI_r_tarsal_distal_phalanx_3"));
SoNode7->addChild(*SoROUTE1591);

SoROUTE* SoROUTE1592 = new SoROUTE();
SoROUTE1592->setFromField(QString("value_changed"));
SoROUTE1592->setFromNode(QString("Armature_OI_r_tarsal_distal_phalanx_3"));
SoROUTE1592->setToField(QString("rotation"));
SoROUTE1592->setToNode(QString("hanim_r_tarsal_distal_phalanx_3"));
SoNode7->addChild(*SoROUTE1592);

SoROUTE* SoROUTE1593 = new SoROUTE();
SoROUTE1593->setFromField(QString("fraction_changed"));
SoROUTE1593->setFromNode(QString("Armature_Clock"));
SoROUTE1593->setToField(QString("set_fraction"));
SoROUTE1593->setToNode(QString("Armature_OI_r_calcaneus"));
SoNode7->addChild(*SoROUTE1593);

SoROUTE* SoROUTE1594 = new SoROUTE();
SoROUTE1594->setFromField(QString("value_changed"));
SoROUTE1594->setFromNode(QString("Armature_OI_r_calcaneus"));
SoROUTE1594->setToField(QString("rotation"));
SoROUTE1594->setToNode(QString("hanim_r_calcaneus"));
SoNode7->addChild(*SoROUTE1594);

SoROUTE* SoROUTE1595 = new SoROUTE();
SoROUTE1595->setFromField(QString("fraction_changed"));
SoROUTE1595->setFromNode(QString("Armature_Clock"));
SoROUTE1595->setToField(QString("set_fraction"));
SoROUTE1595->setToNode(QString("Armature_OI_r_cuboid"));
SoNode7->addChild(*SoROUTE1595);

SoROUTE* SoROUTE1596 = new SoROUTE();
SoROUTE1596->setFromField(QString("value_changed"));
SoROUTE1596->setFromNode(QString("Armature_OI_r_cuboid"));
SoROUTE1596->setToField(QString("rotation"));
SoROUTE1596->setToNode(QString("hanim_r_cuboid"));
SoNode7->addChild(*SoROUTE1596);

SoROUTE* SoROUTE1597 = new SoROUTE();
SoROUTE1597->setFromField(QString("fraction_changed"));
SoROUTE1597->setFromNode(QString("Armature_Clock"));
SoROUTE1597->setToField(QString("set_fraction"));
SoROUTE1597->setToNode(QString("Armature_OI_r_metatarsal_4"));
SoNode7->addChild(*SoROUTE1597);

SoROUTE* SoROUTE1598 = new SoROUTE();
SoROUTE1598->setFromField(QString("value_changed"));
SoROUTE1598->setFromNode(QString("Armature_OI_r_metatarsal_4"));
SoROUTE1598->setToField(QString("rotation"));
SoROUTE1598->setToNode(QString("hanim_r_metatarsal_4"));
SoNode7->addChild(*SoROUTE1598);

SoROUTE* SoROUTE1599 = new SoROUTE();
SoROUTE1599->setFromField(QString("fraction_changed"));
SoROUTE1599->setFromNode(QString("Armature_Clock"));
SoROUTE1599->setToField(QString("set_fraction"));
SoROUTE1599->setToNode(QString("Armature_OI_r_tarsal_proximal_phalanx_4"));
SoNode7->addChild(*SoROUTE1599);

SoROUTE* SoROUTE1600 = new SoROUTE();
SoROUTE1600->setFromField(QString("value_changed"));
SoROUTE1600->setFromNode(QString("Armature_OI_r_tarsal_proximal_phalanx_4"));
SoROUTE1600->setToField(QString("rotation"));
SoROUTE1600->setToNode(QString("hanim_r_tarsal_proximal_phalanx_4"));
SoNode7->addChild(*SoROUTE1600);

SoROUTE* SoROUTE1601 = new SoROUTE();
SoROUTE1601->setFromField(QString("fraction_changed"));
SoROUTE1601->setFromNode(QString("Armature_Clock"));
SoROUTE1601->setToField(QString("set_fraction"));
SoROUTE1601->setToNode(QString("Armature_OI_r_tarsal_middle_phalanx_4"));
SoNode7->addChild(*SoROUTE1601);

SoROUTE* SoROUTE1602 = new SoROUTE();
SoROUTE1602->setFromField(QString("value_changed"));
SoROUTE1602->setFromNode(QString("Armature_OI_r_tarsal_middle_phalanx_4"));
SoROUTE1602->setToField(QString("rotation"));
SoROUTE1602->setToNode(QString("hanim_r_tarsal_middle_phalanx_4"));
SoNode7->addChild(*SoROUTE1602);

SoROUTE* SoROUTE1603 = new SoROUTE();
SoROUTE1603->setFromField(QString("fraction_changed"));
SoROUTE1603->setFromNode(QString("Armature_Clock"));
SoROUTE1603->setToField(QString("set_fraction"));
SoROUTE1603->setToNode(QString("Armature_OI_r_tarsal_distal_phalanx_4"));
SoNode7->addChild(*SoROUTE1603);

SoROUTE* SoROUTE1604 = new SoROUTE();
SoROUTE1604->setFromField(QString("value_changed"));
SoROUTE1604->setFromNode(QString("Armature_OI_r_tarsal_distal_phalanx_4"));
SoROUTE1604->setToField(QString("rotation"));
SoROUTE1604->setToNode(QString("hanim_r_tarsal_distal_phalanx_4"));
SoNode7->addChild(*SoROUTE1604);

SoROUTE* SoROUTE1605 = new SoROUTE();
SoROUTE1605->setFromField(QString("fraction_changed"));
SoROUTE1605->setFromNode(QString("Armature_Clock"));
SoROUTE1605->setToField(QString("set_fraction"));
SoROUTE1605->setToNode(QString("Armature_OI_r_metatarsal_5"));
SoNode7->addChild(*SoROUTE1605);

SoROUTE* SoROUTE1606 = new SoROUTE();
SoROUTE1606->setFromField(QString("value_changed"));
SoROUTE1606->setFromNode(QString("Armature_OI_r_metatarsal_5"));
SoROUTE1606->setToField(QString("rotation"));
SoROUTE1606->setToNode(QString("hanim_r_metatarsal_5"));
SoNode7->addChild(*SoROUTE1606);

SoROUTE* SoROUTE1607 = new SoROUTE();
SoROUTE1607->setFromField(QString("fraction_changed"));
SoROUTE1607->setFromNode(QString("Armature_Clock"));
SoROUTE1607->setToField(QString("set_fraction"));
SoROUTE1607->setToNode(QString("Armature_OI_r_tarsal_proximal_phalanx_5"));
SoNode7->addChild(*SoROUTE1607);

SoROUTE* SoROUTE1608 = new SoROUTE();
SoROUTE1608->setFromField(QString("value_changed"));
SoROUTE1608->setFromNode(QString("Armature_OI_r_tarsal_proximal_phalanx_5"));
SoROUTE1608->setToField(QString("rotation"));
SoROUTE1608->setToNode(QString("hanim_r_tarsal_proximal_phalanx_5"));
SoNode7->addChild(*SoROUTE1608);

SoROUTE* SoROUTE1609 = new SoROUTE();
SoROUTE1609->setFromField(QString("fraction_changed"));
SoROUTE1609->setFromNode(QString("Armature_Clock"));
SoROUTE1609->setToField(QString("set_fraction"));
SoROUTE1609->setToNode(QString("Armature_OI_r_tarsal_middle_phalanx_5"));
SoNode7->addChild(*SoROUTE1609);

SoROUTE* SoROUTE1610 = new SoROUTE();
SoROUTE1610->setFromField(QString("value_changed"));
SoROUTE1610->setFromNode(QString("Armature_OI_r_tarsal_middle_phalanx_5"));
SoROUTE1610->setToField(QString("rotation"));
SoROUTE1610->setToNode(QString("hanim_r_tarsal_middle_phalanx_5"));
SoNode7->addChild(*SoROUTE1610);

SoROUTE* SoROUTE1611 = new SoROUTE();
SoROUTE1611->setFromField(QString("fraction_changed"));
SoROUTE1611->setFromNode(QString("Armature_Clock"));
SoROUTE1611->setToField(QString("set_fraction"));
SoROUTE1611->setToNode(QString("Armature_OI_r_tarsal_distal_phalanx_5"));
SoNode7->addChild(*SoROUTE1611);

SoROUTE* SoROUTE1612 = new SoROUTE();
SoROUTE1612->setFromField(QString("value_changed"));
SoROUTE1612->setFromNode(QString("Armature_OI_r_tarsal_distal_phalanx_5"));
SoROUTE1612->setToField(QString("rotation"));
SoROUTE1612->setToNode(QString("hanim_r_tarsal_distal_phalanx_5"));
SoNode7->addChild(*SoROUTE1612);

SoROUTE* SoROUTE1613 = new SoROUTE();
SoROUTE1613->setFromField(QString("fraction_changed"));
SoROUTE1613->setFromNode(QString("Armature_Clock"));
SoROUTE1613->setToField(QString("set_fraction"));
SoROUTE1613->setToNode(QString("Armature_OI_l5"));
SoNode7->addChild(*SoROUTE1613);

SoROUTE* SoROUTE1614 = new SoROUTE();
SoROUTE1614->setFromField(QString("value_changed"));
SoROUTE1614->setFromNode(QString("Armature_OI_l5"));
SoROUTE1614->setToField(QString("rotation"));
SoROUTE1614->setToNode(QString("hanim_l5"));
SoNode7->addChild(*SoROUTE1614);

SoROUTE* SoROUTE1615 = new SoROUTE();
SoROUTE1615->setFromField(QString("fraction_changed"));
SoROUTE1615->setFromNode(QString("Armature_Clock"));
SoROUTE1615->setToField(QString("set_fraction"));
SoROUTE1615->setToNode(QString("Armature_OI_l4"));
SoNode7->addChild(*SoROUTE1615);

SoROUTE* SoROUTE1616 = new SoROUTE();
SoROUTE1616->setFromField(QString("value_changed"));
SoROUTE1616->setFromNode(QString("Armature_OI_l4"));
SoROUTE1616->setToField(QString("rotation"));
SoROUTE1616->setToNode(QString("hanim_l4"));
SoNode7->addChild(*SoROUTE1616);

SoROUTE* SoROUTE1617 = new SoROUTE();
SoROUTE1617->setFromField(QString("fraction_changed"));
SoROUTE1617->setFromNode(QString("Armature_Clock"));
SoROUTE1617->setToField(QString("set_fraction"));
SoROUTE1617->setToNode(QString("Armature_OI_l3"));
SoNode7->addChild(*SoROUTE1617);

SoROUTE* SoROUTE1618 = new SoROUTE();
SoROUTE1618->setFromField(QString("value_changed"));
SoROUTE1618->setFromNode(QString("Armature_OI_l3"));
SoROUTE1618->setToField(QString("rotation"));
SoROUTE1618->setToNode(QString("hanim_l3"));
SoNode7->addChild(*SoROUTE1618);

SoROUTE* SoROUTE1619 = new SoROUTE();
SoROUTE1619->setFromField(QString("fraction_changed"));
SoROUTE1619->setFromNode(QString("Armature_Clock"));
SoROUTE1619->setToField(QString("set_fraction"));
SoROUTE1619->setToNode(QString("Armature_OI_l2"));
SoNode7->addChild(*SoROUTE1619);

SoROUTE* SoROUTE1620 = new SoROUTE();
SoROUTE1620->setFromField(QString("value_changed"));
SoROUTE1620->setFromNode(QString("Armature_OI_l2"));
SoROUTE1620->setToField(QString("rotation"));
SoROUTE1620->setToNode(QString("hanim_l2"));
SoNode7->addChild(*SoROUTE1620);

SoROUTE* SoROUTE1621 = new SoROUTE();
SoROUTE1621->setFromField(QString("fraction_changed"));
SoROUTE1621->setFromNode(QString("Armature_Clock"));
SoROUTE1621->setToField(QString("set_fraction"));
SoROUTE1621->setToNode(QString("Armature_OI_l1"));
SoNode7->addChild(*SoROUTE1621);

SoROUTE* SoROUTE1622 = new SoROUTE();
SoROUTE1622->setFromField(QString("value_changed"));
SoROUTE1622->setFromNode(QString("Armature_OI_l1"));
SoROUTE1622->setToField(QString("rotation"));
SoROUTE1622->setToNode(QString("hanim_l1"));
SoNode7->addChild(*SoROUTE1622);

SoROUTE* SoROUTE1623 = new SoROUTE();
SoROUTE1623->setFromField(QString("fraction_changed"));
SoROUTE1623->setFromNode(QString("Armature_Clock"));
SoROUTE1623->setToField(QString("set_fraction"));
SoROUTE1623->setToNode(QString("Armature_OI_t12"));
SoNode7->addChild(*SoROUTE1623);

SoROUTE* SoROUTE1624 = new SoROUTE();
SoROUTE1624->setFromField(QString("value_changed"));
SoROUTE1624->setFromNode(QString("Armature_OI_t12"));
SoROUTE1624->setToField(QString("rotation"));
SoROUTE1624->setToNode(QString("hanim_t12"));
SoNode7->addChild(*SoROUTE1624);

SoROUTE* SoROUTE1625 = new SoROUTE();
SoROUTE1625->setFromField(QString("fraction_changed"));
SoROUTE1625->setFromNode(QString("Armature_Clock"));
SoROUTE1625->setToField(QString("set_fraction"));
SoROUTE1625->setToNode(QString("Armature_OI_t11"));
SoNode7->addChild(*SoROUTE1625);

SoROUTE* SoROUTE1626 = new SoROUTE();
SoROUTE1626->setFromField(QString("value_changed"));
SoROUTE1626->setFromNode(QString("Armature_OI_t11"));
SoROUTE1626->setToField(QString("rotation"));
SoROUTE1626->setToNode(QString("hanim_t11"));
SoNode7->addChild(*SoROUTE1626);

SoROUTE* SoROUTE1627 = new SoROUTE();
SoROUTE1627->setFromField(QString("fraction_changed"));
SoROUTE1627->setFromNode(QString("Armature_Clock"));
SoROUTE1627->setToField(QString("set_fraction"));
SoROUTE1627->setToNode(QString("Armature_OI_t10"));
SoNode7->addChild(*SoROUTE1627);

SoROUTE* SoROUTE1628 = new SoROUTE();
SoROUTE1628->setFromField(QString("value_changed"));
SoROUTE1628->setFromNode(QString("Armature_OI_t10"));
SoROUTE1628->setToField(QString("rotation"));
SoROUTE1628->setToNode(QString("hanim_t10"));
SoNode7->addChild(*SoROUTE1628);

SoROUTE* SoROUTE1629 = new SoROUTE();
SoROUTE1629->setFromField(QString("fraction_changed"));
SoROUTE1629->setFromNode(QString("Armature_Clock"));
SoROUTE1629->setToField(QString("set_fraction"));
SoROUTE1629->setToNode(QString("Armature_OI_t9"));
SoNode7->addChild(*SoROUTE1629);

SoROUTE* SoROUTE1630 = new SoROUTE();
SoROUTE1630->setFromField(QString("value_changed"));
SoROUTE1630->setFromNode(QString("Armature_OI_t9"));
SoROUTE1630->setToField(QString("rotation"));
SoROUTE1630->setToNode(QString("hanim_t9"));
SoNode7->addChild(*SoROUTE1630);

SoROUTE* SoROUTE1631 = new SoROUTE();
SoROUTE1631->setFromField(QString("fraction_changed"));
SoROUTE1631->setFromNode(QString("Armature_Clock"));
SoROUTE1631->setToField(QString("set_fraction"));
SoROUTE1631->setToNode(QString("Armature_OI_t8"));
SoNode7->addChild(*SoROUTE1631);

SoROUTE* SoROUTE1632 = new SoROUTE();
SoROUTE1632->setFromField(QString("value_changed"));
SoROUTE1632->setFromNode(QString("Armature_OI_t8"));
SoROUTE1632->setToField(QString("rotation"));
SoROUTE1632->setToNode(QString("hanim_t8"));
SoNode7->addChild(*SoROUTE1632);

SoROUTE* SoROUTE1633 = new SoROUTE();
SoROUTE1633->setFromField(QString("fraction_changed"));
SoROUTE1633->setFromNode(QString("Armature_Clock"));
SoROUTE1633->setToField(QString("set_fraction"));
SoROUTE1633->setToNode(QString("Armature_OI_t7"));
SoNode7->addChild(*SoROUTE1633);

SoROUTE* SoROUTE1634 = new SoROUTE();
SoROUTE1634->setFromField(QString("value_changed"));
SoROUTE1634->setFromNode(QString("Armature_OI_t7"));
SoROUTE1634->setToField(QString("rotation"));
SoROUTE1634->setToNode(QString("hanim_t7"));
SoNode7->addChild(*SoROUTE1634);

SoROUTE* SoROUTE1635 = new SoROUTE();
SoROUTE1635->setFromField(QString("fraction_changed"));
SoROUTE1635->setFromNode(QString("Armature_Clock"));
SoROUTE1635->setToField(QString("set_fraction"));
SoROUTE1635->setToNode(QString("Armature_OI_t6"));
SoNode7->addChild(*SoROUTE1635);

SoROUTE* SoROUTE1636 = new SoROUTE();
SoROUTE1636->setFromField(QString("value_changed"));
SoROUTE1636->setFromNode(QString("Armature_OI_t6"));
SoROUTE1636->setToField(QString("rotation"));
SoROUTE1636->setToNode(QString("hanim_t6"));
SoNode7->addChild(*SoROUTE1636);

SoROUTE* SoROUTE1637 = new SoROUTE();
SoROUTE1637->setFromField(QString("fraction_changed"));
SoROUTE1637->setFromNode(QString("Armature_Clock"));
SoROUTE1637->setToField(QString("set_fraction"));
SoROUTE1637->setToNode(QString("Armature_OI_t5"));
SoNode7->addChild(*SoROUTE1637);

SoROUTE* SoROUTE1638 = new SoROUTE();
SoROUTE1638->setFromField(QString("value_changed"));
SoROUTE1638->setFromNode(QString("Armature_OI_t5"));
SoROUTE1638->setToField(QString("rotation"));
SoROUTE1638->setToNode(QString("hanim_t5"));
SoNode7->addChild(*SoROUTE1638);

SoROUTE* SoROUTE1639 = new SoROUTE();
SoROUTE1639->setFromField(QString("fraction_changed"));
SoROUTE1639->setFromNode(QString("Armature_Clock"));
SoROUTE1639->setToField(QString("set_fraction"));
SoROUTE1639->setToNode(QString("Armature_OI_t4"));
SoNode7->addChild(*SoROUTE1639);

SoROUTE* SoROUTE1640 = new SoROUTE();
SoROUTE1640->setFromField(QString("value_changed"));
SoROUTE1640->setFromNode(QString("Armature_OI_t4"));
SoROUTE1640->setToField(QString("rotation"));
SoROUTE1640->setToNode(QString("hanim_t4"));
SoNode7->addChild(*SoROUTE1640);

SoROUTE* SoROUTE1641 = new SoROUTE();
SoROUTE1641->setFromField(QString("fraction_changed"));
SoROUTE1641->setFromNode(QString("Armature_Clock"));
SoROUTE1641->setToField(QString("set_fraction"));
SoROUTE1641->setToNode(QString("Armature_OI_t3"));
SoNode7->addChild(*SoROUTE1641);

SoROUTE* SoROUTE1642 = new SoROUTE();
SoROUTE1642->setFromField(QString("value_changed"));
SoROUTE1642->setFromNode(QString("Armature_OI_t3"));
SoROUTE1642->setToField(QString("rotation"));
SoROUTE1642->setToNode(QString("hanim_t3"));
SoNode7->addChild(*SoROUTE1642);

SoROUTE* SoROUTE1643 = new SoROUTE();
SoROUTE1643->setFromField(QString("fraction_changed"));
SoROUTE1643->setFromNode(QString("Armature_Clock"));
SoROUTE1643->setToField(QString("set_fraction"));
SoROUTE1643->setToNode(QString("Armature_OI_t2"));
SoNode7->addChild(*SoROUTE1643);

SoROUTE* SoROUTE1644 = new SoROUTE();
SoROUTE1644->setFromField(QString("value_changed"));
SoROUTE1644->setFromNode(QString("Armature_OI_t2"));
SoROUTE1644->setToField(QString("rotation"));
SoROUTE1644->setToNode(QString("hanim_t2"));
SoNode7->addChild(*SoROUTE1644);

SoROUTE* SoROUTE1645 = new SoROUTE();
SoROUTE1645->setFromField(QString("fraction_changed"));
SoROUTE1645->setFromNode(QString("Armature_Clock"));
SoROUTE1645->setToField(QString("set_fraction"));
SoROUTE1645->setToNode(QString("Armature_OI_t1"));
SoNode7->addChild(*SoROUTE1645);

SoROUTE* SoROUTE1646 = new SoROUTE();
SoROUTE1646->setFromField(QString("value_changed"));
SoROUTE1646->setFromNode(QString("Armature_OI_t1"));
SoROUTE1646->setToField(QString("rotation"));
SoROUTE1646->setToNode(QString("hanim_t1"));
SoNode7->addChild(*SoROUTE1646);

SoROUTE* SoROUTE1647 = new SoROUTE();
SoROUTE1647->setFromField(QString("fraction_changed"));
SoROUTE1647->setFromNode(QString("Armature_Clock"));
SoROUTE1647->setToField(QString("set_fraction"));
SoROUTE1647->setToNode(QString("Armature_OI_c7"));
SoNode7->addChild(*SoROUTE1647);

SoROUTE* SoROUTE1648 = new SoROUTE();
SoROUTE1648->setFromField(QString("value_changed"));
SoROUTE1648->setFromNode(QString("Armature_OI_c7"));
SoROUTE1648->setToField(QString("rotation"));
SoROUTE1648->setToNode(QString("hanim_c7"));
SoNode7->addChild(*SoROUTE1648);

SoROUTE* SoROUTE1649 = new SoROUTE();
SoROUTE1649->setFromField(QString("fraction_changed"));
SoROUTE1649->setFromNode(QString("Armature_Clock"));
SoROUTE1649->setToField(QString("set_fraction"));
SoROUTE1649->setToNode(QString("Armature_OI_c6"));
SoNode7->addChild(*SoROUTE1649);

SoROUTE* SoROUTE1650 = new SoROUTE();
SoROUTE1650->setFromField(QString("value_changed"));
SoROUTE1650->setFromNode(QString("Armature_OI_c6"));
SoROUTE1650->setToField(QString("rotation"));
SoROUTE1650->setToNode(QString("hanim_c6"));
SoNode7->addChild(*SoROUTE1650);

SoROUTE* SoROUTE1651 = new SoROUTE();
SoROUTE1651->setFromField(QString("fraction_changed"));
SoROUTE1651->setFromNode(QString("Armature_Clock"));
SoROUTE1651->setToField(QString("set_fraction"));
SoROUTE1651->setToNode(QString("Armature_OI_c5"));
SoNode7->addChild(*SoROUTE1651);

SoROUTE* SoROUTE1652 = new SoROUTE();
SoROUTE1652->setFromField(QString("value_changed"));
SoROUTE1652->setFromNode(QString("Armature_OI_c5"));
SoROUTE1652->setToField(QString("rotation"));
SoROUTE1652->setToNode(QString("hanim_c5"));
SoNode7->addChild(*SoROUTE1652);

SoROUTE* SoROUTE1653 = new SoROUTE();
SoROUTE1653->setFromField(QString("fraction_changed"));
SoROUTE1653->setFromNode(QString("Armature_Clock"));
SoROUTE1653->setToField(QString("set_fraction"));
SoROUTE1653->setToNode(QString("Armature_OI_c4"));
SoNode7->addChild(*SoROUTE1653);

SoROUTE* SoROUTE1654 = new SoROUTE();
SoROUTE1654->setFromField(QString("value_changed"));
SoROUTE1654->setFromNode(QString("Armature_OI_c4"));
SoROUTE1654->setToField(QString("rotation"));
SoROUTE1654->setToNode(QString("hanim_c4"));
SoNode7->addChild(*SoROUTE1654);

SoROUTE* SoROUTE1655 = new SoROUTE();
SoROUTE1655->setFromField(QString("fraction_changed"));
SoROUTE1655->setFromNode(QString("Armature_Clock"));
SoROUTE1655->setToField(QString("set_fraction"));
SoROUTE1655->setToNode(QString("Armature_OI_c3"));
SoNode7->addChild(*SoROUTE1655);

SoROUTE* SoROUTE1656 = new SoROUTE();
SoROUTE1656->setFromField(QString("value_changed"));
SoROUTE1656->setFromNode(QString("Armature_OI_c3"));
SoROUTE1656->setToField(QString("rotation"));
SoROUTE1656->setToNode(QString("hanim_c3"));
SoNode7->addChild(*SoROUTE1656);

SoROUTE* SoROUTE1657 = new SoROUTE();
SoROUTE1657->setFromField(QString("fraction_changed"));
SoROUTE1657->setFromNode(QString("Armature_Clock"));
SoROUTE1657->setToField(QString("set_fraction"));
SoROUTE1657->setToNode(QString("Armature_OI_c2"));
SoNode7->addChild(*SoROUTE1657);

SoROUTE* SoROUTE1658 = new SoROUTE();
SoROUTE1658->setFromField(QString("value_changed"));
SoROUTE1658->setFromNode(QString("Armature_OI_c2"));
SoROUTE1658->setToField(QString("rotation"));
SoROUTE1658->setToNode(QString("hanim_c2"));
SoNode7->addChild(*SoROUTE1658);

SoROUTE* SoROUTE1659 = new SoROUTE();
SoROUTE1659->setFromField(QString("fraction_changed"));
SoROUTE1659->setFromNode(QString("Armature_Clock"));
SoROUTE1659->setToField(QString("set_fraction"));
SoROUTE1659->setToNode(QString("Armature_OI_c1"));
SoNode7->addChild(*SoROUTE1659);

SoROUTE* SoROUTE1660 = new SoROUTE();
SoROUTE1660->setFromField(QString("value_changed"));
SoROUTE1660->setFromNode(QString("Armature_OI_c1"));
SoROUTE1660->setToField(QString("rotation"));
SoROUTE1660->setToNode(QString("hanim_c1"));
SoNode7->addChild(*SoROUTE1660);

SoROUTE* SoROUTE1661 = new SoROUTE();
SoROUTE1661->setFromField(QString("fraction_changed"));
SoROUTE1661->setFromNode(QString("Armature_Clock"));
SoROUTE1661->setToField(QString("set_fraction"));
SoROUTE1661->setToNode(QString("Armature_OI_skull"));
SoNode7->addChild(*SoROUTE1661);

SoROUTE* SoROUTE1662 = new SoROUTE();
SoROUTE1662->setFromField(QString("value_changed"));
SoROUTE1662->setFromNode(QString("Armature_OI_skull"));
SoROUTE1662->setToField(QString("rotation"));
SoROUTE1662->setToNode(QString("hanim_skull"));
SoNode7->addChild(*SoROUTE1662);

SoROUTE* SoROUTE1663 = new SoROUTE();
SoROUTE1663->setFromField(QString("fraction_changed"));
SoROUTE1663->setFromNode(QString("Armature_Clock"));
SoROUTE1663->setToField(QString("set_fraction"));
SoROUTE1663->setToNode(QString("Armature_OI_l_eyelid"));
SoNode7->addChild(*SoROUTE1663);

SoROUTE* SoROUTE1664 = new SoROUTE();
SoROUTE1664->setFromField(QString("value_changed"));
SoROUTE1664->setFromNode(QString("Armature_OI_l_eyelid"));
SoROUTE1664->setToField(QString("rotation"));
SoROUTE1664->setToNode(QString("hanim_l_eyelid"));
SoNode7->addChild(*SoROUTE1664);

SoROUTE* SoROUTE1665 = new SoROUTE();
SoROUTE1665->setFromField(QString("fraction_changed"));
SoROUTE1665->setFromNode(QString("Armature_Clock"));
SoROUTE1665->setToField(QString("set_fraction"));
SoROUTE1665->setToNode(QString("Armature_OI_r_eyelid"));
SoNode7->addChild(*SoROUTE1665);

SoROUTE* SoROUTE1666 = new SoROUTE();
SoROUTE1666->setFromField(QString("value_changed"));
SoROUTE1666->setFromNode(QString("Armature_OI_r_eyelid"));
SoROUTE1666->setToField(QString("rotation"));
SoROUTE1666->setToNode(QString("hanim_r_eyelid"));
SoNode7->addChild(*SoROUTE1666);

SoROUTE* SoROUTE1667 = new SoROUTE();
SoROUTE1667->setFromField(QString("fraction_changed"));
SoROUTE1667->setFromNode(QString("Armature_Clock"));
SoROUTE1667->setToField(QString("set_fraction"));
SoROUTE1667->setToNode(QString("Armature_OI_l_eyeball"));
SoNode7->addChild(*SoROUTE1667);

SoROUTE* SoROUTE1668 = new SoROUTE();
SoROUTE1668->setFromField(QString("value_changed"));
SoROUTE1668->setFromNode(QString("Armature_OI_l_eyeball"));
SoROUTE1668->setToField(QString("rotation"));
SoROUTE1668->setToNode(QString("hanim_l_eyeball"));
SoNode7->addChild(*SoROUTE1668);

SoROUTE* SoROUTE1669 = new SoROUTE();
SoROUTE1669->setFromField(QString("fraction_changed"));
SoROUTE1669->setFromNode(QString("Armature_Clock"));
SoROUTE1669->setToField(QString("set_fraction"));
SoROUTE1669->setToNode(QString("Armature_OI_r_eyeball"));
SoNode7->addChild(*SoROUTE1669);

SoROUTE* SoROUTE1670 = new SoROUTE();
SoROUTE1670->setFromField(QString("value_changed"));
SoROUTE1670->setFromNode(QString("Armature_OI_r_eyeball"));
SoROUTE1670->setToField(QString("rotation"));
SoROUTE1670->setToNode(QString("hanim_r_eyeball"));
SoNode7->addChild(*SoROUTE1670);

SoROUTE* SoROUTE1671 = new SoROUTE();
SoROUTE1671->setFromField(QString("fraction_changed"));
SoROUTE1671->setFromNode(QString("Armature_Clock"));
SoROUTE1671->setToField(QString("set_fraction"));
SoROUTE1671->setToNode(QString("Armature_OI_l_eyebrow"));
SoNode7->addChild(*SoROUTE1671);

SoROUTE* SoROUTE1672 = new SoROUTE();
SoROUTE1672->setFromField(QString("value_changed"));
SoROUTE1672->setFromNode(QString("Armature_OI_l_eyebrow"));
SoROUTE1672->setToField(QString("rotation"));
SoROUTE1672->setToNode(QString("hanim_l_eyebrow"));
SoNode7->addChild(*SoROUTE1672);

SoROUTE* SoROUTE1673 = new SoROUTE();
SoROUTE1673->setFromField(QString("fraction_changed"));
SoROUTE1673->setFromNode(QString("Armature_Clock"));
SoROUTE1673->setToField(QString("set_fraction"));
SoROUTE1673->setToNode(QString("Armature_OI_r_eyebrow"));
SoNode7->addChild(*SoROUTE1673);

SoROUTE* SoROUTE1674 = new SoROUTE();
SoROUTE1674->setFromField(QString("value_changed"));
SoROUTE1674->setFromNode(QString("Armature_OI_r_eyebrow"));
SoROUTE1674->setToField(QString("rotation"));
SoROUTE1674->setToNode(QString("hanim_r_eyebrow"));
SoNode7->addChild(*SoROUTE1674);

SoROUTE* SoROUTE1675 = new SoROUTE();
SoROUTE1675->setFromField(QString("fraction_changed"));
SoROUTE1675->setFromNode(QString("Armature_Clock"));
SoROUTE1675->setToField(QString("set_fraction"));
SoROUTE1675->setToNode(QString("Armature_OI_jaw"));
SoNode7->addChild(*SoROUTE1675);

SoROUTE* SoROUTE1676 = new SoROUTE();
SoROUTE1676->setFromField(QString("value_changed"));
SoROUTE1676->setFromNode(QString("Armature_OI_jaw"));
SoROUTE1676->setToField(QString("rotation"));
SoROUTE1676->setToNode(QString("hanim_jaw"));
SoNode7->addChild(*SoROUTE1676);

SoROUTE* SoROUTE1677 = new SoROUTE();
SoROUTE1677->setFromField(QString("fraction_changed"));
SoROUTE1677->setFromNode(QString("Armature_Clock"));
SoROUTE1677->setToField(QString("set_fraction"));
SoROUTE1677->setToNode(QString("Armature_OI_l_clavicle"));
SoNode7->addChild(*SoROUTE1677);

SoROUTE* SoROUTE1678 = new SoROUTE();
SoROUTE1678->setFromField(QString("value_changed"));
SoROUTE1678->setFromNode(QString("Armature_OI_l_clavicle"));
SoROUTE1678->setToField(QString("rotation"));
SoROUTE1678->setToNode(QString("hanim_l_clavicle"));
SoNode7->addChild(*SoROUTE1678);

SoROUTE* SoROUTE1679 = new SoROUTE();
SoROUTE1679->setFromField(QString("fraction_changed"));
SoROUTE1679->setFromNode(QString("Armature_Clock"));
SoROUTE1679->setToField(QString("set_fraction"));
SoROUTE1679->setToNode(QString("Armature_OI_l_scapula"));
SoNode7->addChild(*SoROUTE1679);

SoROUTE* SoROUTE1680 = new SoROUTE();
SoROUTE1680->setFromField(QString("value_changed"));
SoROUTE1680->setFromNode(QString("Armature_OI_l_scapula"));
SoROUTE1680->setToField(QString("rotation"));
SoROUTE1680->setToNode(QString("hanim_l_scapula"));
SoNode7->addChild(*SoROUTE1680);

SoROUTE* SoROUTE1681 = new SoROUTE();
SoROUTE1681->setFromField(QString("fraction_changed"));
SoROUTE1681->setFromNode(QString("Armature_Clock"));
SoROUTE1681->setToField(QString("set_fraction"));
SoROUTE1681->setToNode(QString("Armature_OI_l_upperarm"));
SoNode7->addChild(*SoROUTE1681);

SoROUTE* SoROUTE1682 = new SoROUTE();
SoROUTE1682->setFromField(QString("value_changed"));
SoROUTE1682->setFromNode(QString("Armature_OI_l_upperarm"));
SoROUTE1682->setToField(QString("rotation"));
SoROUTE1682->setToNode(QString("hanim_l_upperarm"));
SoNode7->addChild(*SoROUTE1682);

SoROUTE* SoROUTE1683 = new SoROUTE();
SoROUTE1683->setFromField(QString("fraction_changed"));
SoROUTE1683->setFromNode(QString("Armature_Clock"));
SoROUTE1683->setToField(QString("set_fraction"));
SoROUTE1683->setToNode(QString("Armature_OI_l_forearm"));
SoNode7->addChild(*SoROUTE1683);

SoROUTE* SoROUTE1684 = new SoROUTE();
SoROUTE1684->setFromField(QString("value_changed"));
SoROUTE1684->setFromNode(QString("Armature_OI_l_forearm"));
SoROUTE1684->setToField(QString("rotation"));
SoROUTE1684->setToNode(QString("hanim_l_forearm"));
SoNode7->addChild(*SoROUTE1684);

SoROUTE* SoROUTE1685 = new SoROUTE();
SoROUTE1685->setFromField(QString("fraction_changed"));
SoROUTE1685->setFromNode(QString("Armature_Clock"));
SoROUTE1685->setToField(QString("set_fraction"));
SoROUTE1685->setToNode(QString("Armature_OI_l_carpal"));
SoNode7->addChild(*SoROUTE1685);

SoROUTE* SoROUTE1686 = new SoROUTE();
SoROUTE1686->setFromField(QString("value_changed"));
SoROUTE1686->setFromNode(QString("Armature_OI_l_carpal"));
SoROUTE1686->setToField(QString("rotation"));
SoROUTE1686->setToNode(QString("hanim_l_carpal"));
SoNode7->addChild(*SoROUTE1686);

SoROUTE* SoROUTE1687 = new SoROUTE();
SoROUTE1687->setFromField(QString("fraction_changed"));
SoROUTE1687->setFromNode(QString("Armature_Clock"));
SoROUTE1687->setToField(QString("set_fraction"));
SoROUTE1687->setToNode(QString("Armature_OI_l_trapezium"));
SoNode7->addChild(*SoROUTE1687);

SoROUTE* SoROUTE1688 = new SoROUTE();
SoROUTE1688->setFromField(QString("value_changed"));
SoROUTE1688->setFromNode(QString("Armature_OI_l_trapezium"));
SoROUTE1688->setToField(QString("rotation"));
SoROUTE1688->setToNode(QString("hanim_l_trapezium"));
SoNode7->addChild(*SoROUTE1688);

SoROUTE* SoROUTE1689 = new SoROUTE();
SoROUTE1689->setFromField(QString("fraction_changed"));
SoROUTE1689->setFromNode(QString("Armature_Clock"));
SoROUTE1689->setToField(QString("set_fraction"));
SoROUTE1689->setToNode(QString("Armature_OI_l_metacarpal_1"));
SoNode7->addChild(*SoROUTE1689);

SoROUTE* SoROUTE1690 = new SoROUTE();
SoROUTE1690->setFromField(QString("value_changed"));
SoROUTE1690->setFromNode(QString("Armature_OI_l_metacarpal_1"));
SoROUTE1690->setToField(QString("rotation"));
SoROUTE1690->setToNode(QString("hanim_l_metacarpal_1"));
SoNode7->addChild(*SoROUTE1690);

SoROUTE* SoROUTE1691 = new SoROUTE();
SoROUTE1691->setFromField(QString("fraction_changed"));
SoROUTE1691->setFromNode(QString("Armature_Clock"));
SoROUTE1691->setToField(QString("set_fraction"));
SoROUTE1691->setToNode(QString("Armature_OI_l_carpal_proximal_phalanx_1"));
SoNode7->addChild(*SoROUTE1691);

SoROUTE* SoROUTE1692 = new SoROUTE();
SoROUTE1692->setFromField(QString("value_changed"));
SoROUTE1692->setFromNode(QString("Armature_OI_l_carpal_proximal_phalanx_1"));
SoROUTE1692->setToField(QString("rotation"));
SoROUTE1692->setToNode(QString("hanim_l_carpal_proximal_phalanx_1"));
SoNode7->addChild(*SoROUTE1692);

SoROUTE* SoROUTE1693 = new SoROUTE();
SoROUTE1693->setFromField(QString("fraction_changed"));
SoROUTE1693->setFromNode(QString("Armature_Clock"));
SoROUTE1693->setToField(QString("set_fraction"));
SoROUTE1693->setToNode(QString("Armature_OI_l_carpal_distal_phalanx_1"));
SoNode7->addChild(*SoROUTE1693);

SoROUTE* SoROUTE1694 = new SoROUTE();
SoROUTE1694->setFromField(QString("value_changed"));
SoROUTE1694->setFromNode(QString("Armature_OI_l_carpal_distal_phalanx_1"));
SoROUTE1694->setToField(QString("rotation"));
SoROUTE1694->setToNode(QString("hanim_l_carpal_distal_phalanx_1"));
SoNode7->addChild(*SoROUTE1694);

SoROUTE* SoROUTE1695 = new SoROUTE();
SoROUTE1695->setFromField(QString("fraction_changed"));
SoROUTE1695->setFromNode(QString("Armature_Clock"));
SoROUTE1695->setToField(QString("set_fraction"));
SoROUTE1695->setToNode(QString("Armature_OI_l_trapezoid"));
SoNode7->addChild(*SoROUTE1695);

SoROUTE* SoROUTE1696 = new SoROUTE();
SoROUTE1696->setFromField(QString("value_changed"));
SoROUTE1696->setFromNode(QString("Armature_OI_l_trapezoid"));
SoROUTE1696->setToField(QString("rotation"));
SoROUTE1696->setToNode(QString("hanim_l_trapezoid"));
SoNode7->addChild(*SoROUTE1696);

SoROUTE* SoROUTE1697 = new SoROUTE();
SoROUTE1697->setFromField(QString("fraction_changed"));
SoROUTE1697->setFromNode(QString("Armature_Clock"));
SoROUTE1697->setToField(QString("set_fraction"));
SoROUTE1697->setToNode(QString("Armature_OI_l_metacarpal_2"));
SoNode7->addChild(*SoROUTE1697);

SoROUTE* SoROUTE1698 = new SoROUTE();
SoROUTE1698->setFromField(QString("value_changed"));
SoROUTE1698->setFromNode(QString("Armature_OI_l_metacarpal_2"));
SoROUTE1698->setToField(QString("rotation"));
SoROUTE1698->setToNode(QString("hanim_l_metacarpal_2"));
SoNode7->addChild(*SoROUTE1698);

SoROUTE* SoROUTE1699 = new SoROUTE();
SoROUTE1699->setFromField(QString("fraction_changed"));
SoROUTE1699->setFromNode(QString("Armature_Clock"));
SoROUTE1699->setToField(QString("set_fraction"));
SoROUTE1699->setToNode(QString("Armature_OI_l_carpal_proximal_phalanx_2"));
SoNode7->addChild(*SoROUTE1699);

SoROUTE* SoROUTE1700 = new SoROUTE();
SoROUTE1700->setFromField(QString("value_changed"));
SoROUTE1700->setFromNode(QString("Armature_OI_l_carpal_proximal_phalanx_2"));
SoROUTE1700->setToField(QString("rotation"));
SoROUTE1700->setToNode(QString("hanim_l_carpal_proximal_phalanx_2"));
SoNode7->addChild(*SoROUTE1700);

SoROUTE* SoROUTE1701 = new SoROUTE();
SoROUTE1701->setFromField(QString("fraction_changed"));
SoROUTE1701->setFromNode(QString("Armature_Clock"));
SoROUTE1701->setToField(QString("set_fraction"));
SoROUTE1701->setToNode(QString("Armature_OI_l_carpal_middle_phalanx_2"));
SoNode7->addChild(*SoROUTE1701);

SoROUTE* SoROUTE1702 = new SoROUTE();
SoROUTE1702->setFromField(QString("value_changed"));
SoROUTE1702->setFromNode(QString("Armature_OI_l_carpal_middle_phalanx_2"));
SoROUTE1702->setToField(QString("rotation"));
SoROUTE1702->setToNode(QString("hanim_l_carpal_middle_phalanx_2"));
SoNode7->addChild(*SoROUTE1702);

SoROUTE* SoROUTE1703 = new SoROUTE();
SoROUTE1703->setFromField(QString("fraction_changed"));
SoROUTE1703->setFromNode(QString("Armature_Clock"));
SoROUTE1703->setToField(QString("set_fraction"));
SoROUTE1703->setToNode(QString("Armature_OI_l_carpal_distal_phalanx_2"));
SoNode7->addChild(*SoROUTE1703);

SoROUTE* SoROUTE1704 = new SoROUTE();
SoROUTE1704->setFromField(QString("value_changed"));
SoROUTE1704->setFromNode(QString("Armature_OI_l_carpal_distal_phalanx_2"));
SoROUTE1704->setToField(QString("rotation"));
SoROUTE1704->setToNode(QString("hanim_l_carpal_distal_phalanx_2"));
SoNode7->addChild(*SoROUTE1704);

SoROUTE* SoROUTE1705 = new SoROUTE();
SoROUTE1705->setFromField(QString("fraction_changed"));
SoROUTE1705->setFromNode(QString("Armature_Clock"));
SoROUTE1705->setToField(QString("set_fraction"));
SoROUTE1705->setToNode(QString("Armature_OI_l_capitate"));
SoNode7->addChild(*SoROUTE1705);

SoROUTE* SoROUTE1706 = new SoROUTE();
SoROUTE1706->setFromField(QString("value_changed"));
SoROUTE1706->setFromNode(QString("Armature_OI_l_capitate"));
SoROUTE1706->setToField(QString("rotation"));
SoROUTE1706->setToNode(QString("hanim_l_capitate"));
SoNode7->addChild(*SoROUTE1706);

SoROUTE* SoROUTE1707 = new SoROUTE();
SoROUTE1707->setFromField(QString("fraction_changed"));
SoROUTE1707->setFromNode(QString("Armature_Clock"));
SoROUTE1707->setToField(QString("set_fraction"));
SoROUTE1707->setToNode(QString("Armature_OI_l_metacarpal_3"));
SoNode7->addChild(*SoROUTE1707);

SoROUTE* SoROUTE1708 = new SoROUTE();
SoROUTE1708->setFromField(QString("value_changed"));
SoROUTE1708->setFromNode(QString("Armature_OI_l_metacarpal_3"));
SoROUTE1708->setToField(QString("rotation"));
SoROUTE1708->setToNode(QString("hanim_l_metacarpal_3"));
SoNode7->addChild(*SoROUTE1708);

SoROUTE* SoROUTE1709 = new SoROUTE();
SoROUTE1709->setFromField(QString("fraction_changed"));
SoROUTE1709->setFromNode(QString("Armature_Clock"));
SoROUTE1709->setToField(QString("set_fraction"));
SoROUTE1709->setToNode(QString("Armature_OI_l_carpal_proximal_phalanx_3"));
SoNode7->addChild(*SoROUTE1709);

SoROUTE* SoROUTE1710 = new SoROUTE();
SoROUTE1710->setFromField(QString("value_changed"));
SoROUTE1710->setFromNode(QString("Armature_OI_l_carpal_proximal_phalanx_3"));
SoROUTE1710->setToField(QString("rotation"));
SoROUTE1710->setToNode(QString("hanim_l_carpal_proximal_phalanx_3"));
SoNode7->addChild(*SoROUTE1710);

SoROUTE* SoROUTE1711 = new SoROUTE();
SoROUTE1711->setFromField(QString("fraction_changed"));
SoROUTE1711->setFromNode(QString("Armature_Clock"));
SoROUTE1711->setToField(QString("set_fraction"));
SoROUTE1711->setToNode(QString("Armature_OI_l_carpal_middle_phalanx_3"));
SoNode7->addChild(*SoROUTE1711);

SoROUTE* SoROUTE1712 = new SoROUTE();
SoROUTE1712->setFromField(QString("value_changed"));
SoROUTE1712->setFromNode(QString("Armature_OI_l_carpal_middle_phalanx_3"));
SoROUTE1712->setToField(QString("rotation"));
SoROUTE1712->setToNode(QString("hanim_l_carpal_middle_phalanx_3"));
SoNode7->addChild(*SoROUTE1712);

SoROUTE* SoROUTE1713 = new SoROUTE();
SoROUTE1713->setFromField(QString("fraction_changed"));
SoROUTE1713->setFromNode(QString("Armature_Clock"));
SoROUTE1713->setToField(QString("set_fraction"));
SoROUTE1713->setToNode(QString("Armature_OI_l_carpal_distal_phalanx_3"));
SoNode7->addChild(*SoROUTE1713);

SoROUTE* SoROUTE1714 = new SoROUTE();
SoROUTE1714->setFromField(QString("value_changed"));
SoROUTE1714->setFromNode(QString("Armature_OI_l_carpal_distal_phalanx_3"));
SoROUTE1714->setToField(QString("rotation"));
SoROUTE1714->setToNode(QString("hanim_l_carpal_distal_phalanx_3"));
SoNode7->addChild(*SoROUTE1714);

SoROUTE* SoROUTE1715 = new SoROUTE();
SoROUTE1715->setFromField(QString("fraction_changed"));
SoROUTE1715->setFromNode(QString("Armature_Clock"));
SoROUTE1715->setToField(QString("set_fraction"));
SoROUTE1715->setToNode(QString("Armature_OI_l_hamate"));
SoNode7->addChild(*SoROUTE1715);

SoROUTE* SoROUTE1716 = new SoROUTE();
SoROUTE1716->setFromField(QString("value_changed"));
SoROUTE1716->setFromNode(QString("Armature_OI_l_hamate"));
SoROUTE1716->setToField(QString("rotation"));
SoROUTE1716->setToNode(QString("hanim_l_hamate"));
SoNode7->addChild(*SoROUTE1716);

SoROUTE* SoROUTE1717 = new SoROUTE();
SoROUTE1717->setFromField(QString("fraction_changed"));
SoROUTE1717->setFromNode(QString("Armature_Clock"));
SoROUTE1717->setToField(QString("set_fraction"));
SoROUTE1717->setToNode(QString("Armature_OI_l_metacarpal_4"));
SoNode7->addChild(*SoROUTE1717);

SoROUTE* SoROUTE1718 = new SoROUTE();
SoROUTE1718->setFromField(QString("value_changed"));
SoROUTE1718->setFromNode(QString("Armature_OI_l_metacarpal_4"));
SoROUTE1718->setToField(QString("rotation"));
SoROUTE1718->setToNode(QString("hanim_l_metacarpal_4"));
SoNode7->addChild(*SoROUTE1718);

SoROUTE* SoROUTE1719 = new SoROUTE();
SoROUTE1719->setFromField(QString("fraction_changed"));
SoROUTE1719->setFromNode(QString("Armature_Clock"));
SoROUTE1719->setToField(QString("set_fraction"));
SoROUTE1719->setToNode(QString("Armature_OI_l_carpal_proximal_phalanx_4"));
SoNode7->addChild(*SoROUTE1719);

SoROUTE* SoROUTE1720 = new SoROUTE();
SoROUTE1720->setFromField(QString("value_changed"));
SoROUTE1720->setFromNode(QString("Armature_OI_l_carpal_proximal_phalanx_4"));
SoROUTE1720->setToField(QString("rotation"));
SoROUTE1720->setToNode(QString("hanim_l_carpal_proximal_phalanx_4"));
SoNode7->addChild(*SoROUTE1720);

SoROUTE* SoROUTE1721 = new SoROUTE();
SoROUTE1721->setFromField(QString("fraction_changed"));
SoROUTE1721->setFromNode(QString("Armature_Clock"));
SoROUTE1721->setToField(QString("set_fraction"));
SoROUTE1721->setToNode(QString("Armature_OI_l_carpal_middle_phalanx_4"));
SoNode7->addChild(*SoROUTE1721);

SoROUTE* SoROUTE1722 = new SoROUTE();
SoROUTE1722->setFromField(QString("value_changed"));
SoROUTE1722->setFromNode(QString("Armature_OI_l_carpal_middle_phalanx_4"));
SoROUTE1722->setToField(QString("rotation"));
SoROUTE1722->setToNode(QString("hanim_l_carpal_middle_phalanx_4"));
SoNode7->addChild(*SoROUTE1722);

SoROUTE* SoROUTE1723 = new SoROUTE();
SoROUTE1723->setFromField(QString("fraction_changed"));
SoROUTE1723->setFromNode(QString("Armature_Clock"));
SoROUTE1723->setToField(QString("set_fraction"));
SoROUTE1723->setToNode(QString("Armature_OI_l_carpal_distal_phalanx_4"));
SoNode7->addChild(*SoROUTE1723);

SoROUTE* SoROUTE1724 = new SoROUTE();
SoROUTE1724->setFromField(QString("value_changed"));
SoROUTE1724->setFromNode(QString("Armature_OI_l_carpal_distal_phalanx_4"));
SoROUTE1724->setToField(QString("rotation"));
SoROUTE1724->setToNode(QString("hanim_l_carpal_distal_phalanx_4"));
SoNode7->addChild(*SoROUTE1724);

SoROUTE* SoROUTE1725 = new SoROUTE();
SoROUTE1725->setFromField(QString("fraction_changed"));
SoROUTE1725->setFromNode(QString("Armature_Clock"));
SoROUTE1725->setToField(QString("set_fraction"));
SoROUTE1725->setToNode(QString("Armature_OI_l_metacarpal_5"));
SoNode7->addChild(*SoROUTE1725);

SoROUTE* SoROUTE1726 = new SoROUTE();
SoROUTE1726->setFromField(QString("value_changed"));
SoROUTE1726->setFromNode(QString("Armature_OI_l_metacarpal_5"));
SoROUTE1726->setToField(QString("rotation"));
SoROUTE1726->setToNode(QString("hanim_l_metacarpal_5"));
SoNode7->addChild(*SoROUTE1726);

SoROUTE* SoROUTE1727 = new SoROUTE();
SoROUTE1727->setFromField(QString("fraction_changed"));
SoROUTE1727->setFromNode(QString("Armature_Clock"));
SoROUTE1727->setToField(QString("set_fraction"));
SoROUTE1727->setToNode(QString("Armature_OI_l_carpal_proximal_phalanx_5"));
SoNode7->addChild(*SoROUTE1727);

SoROUTE* SoROUTE1728 = new SoROUTE();
SoROUTE1728->setFromField(QString("value_changed"));
SoROUTE1728->setFromNode(QString("Armature_OI_l_carpal_proximal_phalanx_5"));
SoROUTE1728->setToField(QString("rotation"));
SoROUTE1728->setToNode(QString("hanim_l_carpal_proximal_phalanx_5"));
SoNode7->addChild(*SoROUTE1728);

SoROUTE* SoROUTE1729 = new SoROUTE();
SoROUTE1729->setFromField(QString("fraction_changed"));
SoROUTE1729->setFromNode(QString("Armature_Clock"));
SoROUTE1729->setToField(QString("set_fraction"));
SoROUTE1729->setToNode(QString("Armature_OI_l_carpal_middle_phalanx_5"));
SoNode7->addChild(*SoROUTE1729);

SoROUTE* SoROUTE1730 = new SoROUTE();
SoROUTE1730->setFromField(QString("value_changed"));
SoROUTE1730->setFromNode(QString("Armature_OI_l_carpal_middle_phalanx_5"));
SoROUTE1730->setToField(QString("rotation"));
SoROUTE1730->setToNode(QString("hanim_l_carpal_middle_phalanx_5"));
SoNode7->addChild(*SoROUTE1730);

SoROUTE* SoROUTE1731 = new SoROUTE();
SoROUTE1731->setFromField(QString("fraction_changed"));
SoROUTE1731->setFromNode(QString("Armature_Clock"));
SoROUTE1731->setToField(QString("set_fraction"));
SoROUTE1731->setToNode(QString("Armature_OI_l_carpal_distal_phalanx_5"));
SoNode7->addChild(*SoROUTE1731);

SoROUTE* SoROUTE1732 = new SoROUTE();
SoROUTE1732->setFromField(QString("value_changed"));
SoROUTE1732->setFromNode(QString("Armature_OI_l_carpal_distal_phalanx_5"));
SoROUTE1732->setToField(QString("rotation"));
SoROUTE1732->setToNode(QString("hanim_l_carpal_distal_phalanx_5"));
SoNode7->addChild(*SoROUTE1732);

SoROUTE* SoROUTE1733 = new SoROUTE();
SoROUTE1733->setFromField(QString("fraction_changed"));
SoROUTE1733->setFromNode(QString("Armature_Clock"));
SoROUTE1733->setToField(QString("set_fraction"));
SoROUTE1733->setToNode(QString("Armature_OI_r_clavicle"));
SoNode7->addChild(*SoROUTE1733);

SoROUTE* SoROUTE1734 = new SoROUTE();
SoROUTE1734->setFromField(QString("value_changed"));
SoROUTE1734->setFromNode(QString("Armature_OI_r_clavicle"));
SoROUTE1734->setToField(QString("rotation"));
SoROUTE1734->setToNode(QString("hanim_r_clavicle"));
SoNode7->addChild(*SoROUTE1734);

SoROUTE* SoROUTE1735 = new SoROUTE();
SoROUTE1735->setFromField(QString("fraction_changed"));
SoROUTE1735->setFromNode(QString("Armature_Clock"));
SoROUTE1735->setToField(QString("set_fraction"));
SoROUTE1735->setToNode(QString("Armature_OI_r_scapula"));
SoNode7->addChild(*SoROUTE1735);

SoROUTE* SoROUTE1736 = new SoROUTE();
SoROUTE1736->setFromField(QString("value_changed"));
SoROUTE1736->setFromNode(QString("Armature_OI_r_scapula"));
SoROUTE1736->setToField(QString("rotation"));
SoROUTE1736->setToNode(QString("hanim_r_scapula"));
SoNode7->addChild(*SoROUTE1736);

SoROUTE* SoROUTE1737 = new SoROUTE();
SoROUTE1737->setFromField(QString("fraction_changed"));
SoROUTE1737->setFromNode(QString("Armature_Clock"));
SoROUTE1737->setToField(QString("set_fraction"));
SoROUTE1737->setToNode(QString("Armature_OI_r_upperarm"));
SoNode7->addChild(*SoROUTE1737);

SoROUTE* SoROUTE1738 = new SoROUTE();
SoROUTE1738->setFromField(QString("value_changed"));
SoROUTE1738->setFromNode(QString("Armature_OI_r_upperarm"));
SoROUTE1738->setToField(QString("rotation"));
SoROUTE1738->setToNode(QString("hanim_r_upperarm"));
SoNode7->addChild(*SoROUTE1738);

SoROUTE* SoROUTE1739 = new SoROUTE();
SoROUTE1739->setFromField(QString("fraction_changed"));
SoROUTE1739->setFromNode(QString("Armature_Clock"));
SoROUTE1739->setToField(QString("set_fraction"));
SoROUTE1739->setToNode(QString("Armature_OI_r_forearm"));
SoNode7->addChild(*SoROUTE1739);

SoROUTE* SoROUTE1740 = new SoROUTE();
SoROUTE1740->setFromField(QString("value_changed"));
SoROUTE1740->setFromNode(QString("Armature_OI_r_forearm"));
SoROUTE1740->setToField(QString("rotation"));
SoROUTE1740->setToNode(QString("hanim_r_forearm"));
SoNode7->addChild(*SoROUTE1740);

SoROUTE* SoROUTE1741 = new SoROUTE();
SoROUTE1741->setFromField(QString("fraction_changed"));
SoROUTE1741->setFromNode(QString("Armature_Clock"));
SoROUTE1741->setToField(QString("set_fraction"));
SoROUTE1741->setToNode(QString("Armature_OI_r_carpal"));
SoNode7->addChild(*SoROUTE1741);

SoROUTE* SoROUTE1742 = new SoROUTE();
SoROUTE1742->setFromField(QString("value_changed"));
SoROUTE1742->setFromNode(QString("Armature_OI_r_carpal"));
SoROUTE1742->setToField(QString("rotation"));
SoROUTE1742->setToNode(QString("hanim_r_carpal"));
SoNode7->addChild(*SoROUTE1742);

SoROUTE* SoROUTE1743 = new SoROUTE();
SoROUTE1743->setFromField(QString("fraction_changed"));
SoROUTE1743->setFromNode(QString("Armature_Clock"));
SoROUTE1743->setToField(QString("set_fraction"));
SoROUTE1743->setToNode(QString("Armature_OI_r_trapezium"));
SoNode7->addChild(*SoROUTE1743);

SoROUTE* SoROUTE1744 = new SoROUTE();
SoROUTE1744->setFromField(QString("value_changed"));
SoROUTE1744->setFromNode(QString("Armature_OI_r_trapezium"));
SoROUTE1744->setToField(QString("rotation"));
SoROUTE1744->setToNode(QString("hanim_r_trapezium"));
SoNode7->addChild(*SoROUTE1744);

SoROUTE* SoROUTE1745 = new SoROUTE();
SoROUTE1745->setFromField(QString("fraction_changed"));
SoROUTE1745->setFromNode(QString("Armature_Clock"));
SoROUTE1745->setToField(QString("set_fraction"));
SoROUTE1745->setToNode(QString("Armature_OI_r_metacarpal_1"));
SoNode7->addChild(*SoROUTE1745);

SoROUTE* SoROUTE1746 = new SoROUTE();
SoROUTE1746->setFromField(QString("value_changed"));
SoROUTE1746->setFromNode(QString("Armature_OI_r_metacarpal_1"));
SoROUTE1746->setToField(QString("rotation"));
SoROUTE1746->setToNode(QString("hanim_r_metacarpal_1"));
SoNode7->addChild(*SoROUTE1746);

SoROUTE* SoROUTE1747 = new SoROUTE();
SoROUTE1747->setFromField(QString("fraction_changed"));
SoROUTE1747->setFromNode(QString("Armature_Clock"));
SoROUTE1747->setToField(QString("set_fraction"));
SoROUTE1747->setToNode(QString("Armature_OI_r_carpal_proximal_phalanx_1"));
SoNode7->addChild(*SoROUTE1747);

SoROUTE* SoROUTE1748 = new SoROUTE();
SoROUTE1748->setFromField(QString("value_changed"));
SoROUTE1748->setFromNode(QString("Armature_OI_r_carpal_proximal_phalanx_1"));
SoROUTE1748->setToField(QString("rotation"));
SoROUTE1748->setToNode(QString("hanim_r_carpal_proximal_phalanx_1"));
SoNode7->addChild(*SoROUTE1748);

SoROUTE* SoROUTE1749 = new SoROUTE();
SoROUTE1749->setFromField(QString("fraction_changed"));
SoROUTE1749->setFromNode(QString("Armature_Clock"));
SoROUTE1749->setToField(QString("set_fraction"));
SoROUTE1749->setToNode(QString("Armature_OI_r_carpal_distal_phalanx_1"));
SoNode7->addChild(*SoROUTE1749);

SoROUTE* SoROUTE1750 = new SoROUTE();
SoROUTE1750->setFromField(QString("value_changed"));
SoROUTE1750->setFromNode(QString("Armature_OI_r_carpal_distal_phalanx_1"));
SoROUTE1750->setToField(QString("rotation"));
SoROUTE1750->setToNode(QString("hanim_r_carpal_distal_phalanx_1"));
SoNode7->addChild(*SoROUTE1750);

SoROUTE* SoROUTE1751 = new SoROUTE();
SoROUTE1751->setFromField(QString("fraction_changed"));
SoROUTE1751->setFromNode(QString("Armature_Clock"));
SoROUTE1751->setToField(QString("set_fraction"));
SoROUTE1751->setToNode(QString("Armature_OI_r_trapezoid"));
SoNode7->addChild(*SoROUTE1751);

SoROUTE* SoROUTE1752 = new SoROUTE();
SoROUTE1752->setFromField(QString("value_changed"));
SoROUTE1752->setFromNode(QString("Armature_OI_r_trapezoid"));
SoROUTE1752->setToField(QString("rotation"));
SoROUTE1752->setToNode(QString("hanim_r_trapezoid"));
SoNode7->addChild(*SoROUTE1752);

SoROUTE* SoROUTE1753 = new SoROUTE();
SoROUTE1753->setFromField(QString("fraction_changed"));
SoROUTE1753->setFromNode(QString("Armature_Clock"));
SoROUTE1753->setToField(QString("set_fraction"));
SoROUTE1753->setToNode(QString("Armature_OI_r_metacarpal_2"));
SoNode7->addChild(*SoROUTE1753);

SoROUTE* SoROUTE1754 = new SoROUTE();
SoROUTE1754->setFromField(QString("value_changed"));
SoROUTE1754->setFromNode(QString("Armature_OI_r_metacarpal_2"));
SoROUTE1754->setToField(QString("rotation"));
SoROUTE1754->setToNode(QString("hanim_r_metacarpal_2"));
SoNode7->addChild(*SoROUTE1754);

SoROUTE* SoROUTE1755 = new SoROUTE();
SoROUTE1755->setFromField(QString("fraction_changed"));
SoROUTE1755->setFromNode(QString("Armature_Clock"));
SoROUTE1755->setToField(QString("set_fraction"));
SoROUTE1755->setToNode(QString("Armature_OI_r_carpal_proximal_phalanx_2"));
SoNode7->addChild(*SoROUTE1755);

SoROUTE* SoROUTE1756 = new SoROUTE();
SoROUTE1756->setFromField(QString("value_changed"));
SoROUTE1756->setFromNode(QString("Armature_OI_r_carpal_proximal_phalanx_2"));
SoROUTE1756->setToField(QString("rotation"));
SoROUTE1756->setToNode(QString("hanim_r_carpal_proximal_phalanx_2"));
SoNode7->addChild(*SoROUTE1756);

SoROUTE* SoROUTE1757 = new SoROUTE();
SoROUTE1757->setFromField(QString("fraction_changed"));
SoROUTE1757->setFromNode(QString("Armature_Clock"));
SoROUTE1757->setToField(QString("set_fraction"));
SoROUTE1757->setToNode(QString("Armature_OI_r_carpal_middle_phalanx_2"));
SoNode7->addChild(*SoROUTE1757);

SoROUTE* SoROUTE1758 = new SoROUTE();
SoROUTE1758->setFromField(QString("value_changed"));
SoROUTE1758->setFromNode(QString("Armature_OI_r_carpal_middle_phalanx_2"));
SoROUTE1758->setToField(QString("rotation"));
SoROUTE1758->setToNode(QString("hanim_r_carpal_middle_phalanx_2"));
SoNode7->addChild(*SoROUTE1758);

SoROUTE* SoROUTE1759 = new SoROUTE();
SoROUTE1759->setFromField(QString("fraction_changed"));
SoROUTE1759->setFromNode(QString("Armature_Clock"));
SoROUTE1759->setToField(QString("set_fraction"));
SoROUTE1759->setToNode(QString("Armature_OI_r_carpal_distal_phalanx_2"));
SoNode7->addChild(*SoROUTE1759);

SoROUTE* SoROUTE1760 = new SoROUTE();
SoROUTE1760->setFromField(QString("value_changed"));
SoROUTE1760->setFromNode(QString("Armature_OI_r_carpal_distal_phalanx_2"));
SoROUTE1760->setToField(QString("rotation"));
SoROUTE1760->setToNode(QString("hanim_r_carpal_distal_phalanx_2"));
SoNode7->addChild(*SoROUTE1760);

SoROUTE* SoROUTE1761 = new SoROUTE();
SoROUTE1761->setFromField(QString("fraction_changed"));
SoROUTE1761->setFromNode(QString("Armature_Clock"));
SoROUTE1761->setToField(QString("set_fraction"));
SoROUTE1761->setToNode(QString("Armature_OI_r_capitate"));
SoNode7->addChild(*SoROUTE1761);

SoROUTE* SoROUTE1762 = new SoROUTE();
SoROUTE1762->setFromField(QString("value_changed"));
SoROUTE1762->setFromNode(QString("Armature_OI_r_capitate"));
SoROUTE1762->setToField(QString("rotation"));
SoROUTE1762->setToNode(QString("hanim_r_capitate"));
SoNode7->addChild(*SoROUTE1762);

SoROUTE* SoROUTE1763 = new SoROUTE();
SoROUTE1763->setFromField(QString("fraction_changed"));
SoROUTE1763->setFromNode(QString("Armature_Clock"));
SoROUTE1763->setToField(QString("set_fraction"));
SoROUTE1763->setToNode(QString("Armature_OI_r_metacarpal_3"));
SoNode7->addChild(*SoROUTE1763);

SoROUTE* SoROUTE1764 = new SoROUTE();
SoROUTE1764->setFromField(QString("value_changed"));
SoROUTE1764->setFromNode(QString("Armature_OI_r_metacarpal_3"));
SoROUTE1764->setToField(QString("rotation"));
SoROUTE1764->setToNode(QString("hanim_r_metacarpal_3"));
SoNode7->addChild(*SoROUTE1764);

SoROUTE* SoROUTE1765 = new SoROUTE();
SoROUTE1765->setFromField(QString("fraction_changed"));
SoROUTE1765->setFromNode(QString("Armature_Clock"));
SoROUTE1765->setToField(QString("set_fraction"));
SoROUTE1765->setToNode(QString("Armature_OI_r_carpal_proximal_phalanx_3"));
SoNode7->addChild(*SoROUTE1765);

SoROUTE* SoROUTE1766 = new SoROUTE();
SoROUTE1766->setFromField(QString("value_changed"));
SoROUTE1766->setFromNode(QString("Armature_OI_r_carpal_proximal_phalanx_3"));
SoROUTE1766->setToField(QString("rotation"));
SoROUTE1766->setToNode(QString("hanim_r_carpal_proximal_phalanx_3"));
SoNode7->addChild(*SoROUTE1766);

SoROUTE* SoROUTE1767 = new SoROUTE();
SoROUTE1767->setFromField(QString("fraction_changed"));
SoROUTE1767->setFromNode(QString("Armature_Clock"));
SoROUTE1767->setToField(QString("set_fraction"));
SoROUTE1767->setToNode(QString("Armature_OI_r_carpal_middle_phalanx_3"));
SoNode7->addChild(*SoROUTE1767);

SoROUTE* SoROUTE1768 = new SoROUTE();
SoROUTE1768->setFromField(QString("value_changed"));
SoROUTE1768->setFromNode(QString("Armature_OI_r_carpal_middle_phalanx_3"));
SoROUTE1768->setToField(QString("rotation"));
SoROUTE1768->setToNode(QString("hanim_r_carpal_middle_phalanx_3"));
SoNode7->addChild(*SoROUTE1768);

SoROUTE* SoROUTE1769 = new SoROUTE();
SoROUTE1769->setFromField(QString("fraction_changed"));
SoROUTE1769->setFromNode(QString("Armature_Clock"));
SoROUTE1769->setToField(QString("set_fraction"));
SoROUTE1769->setToNode(QString("Armature_OI_r_carpal_distal_phalanx_3"));
SoNode7->addChild(*SoROUTE1769);

SoROUTE* SoROUTE1770 = new SoROUTE();
SoROUTE1770->setFromField(QString("value_changed"));
SoROUTE1770->setFromNode(QString("Armature_OI_r_carpal_distal_phalanx_3"));
SoROUTE1770->setToField(QString("rotation"));
SoROUTE1770->setToNode(QString("hanim_r_carpal_distal_phalanx_3"));
SoNode7->addChild(*SoROUTE1770);

SoROUTE* SoROUTE1771 = new SoROUTE();
SoROUTE1771->setFromField(QString("fraction_changed"));
SoROUTE1771->setFromNode(QString("Armature_Clock"));
SoROUTE1771->setToField(QString("set_fraction"));
SoROUTE1771->setToNode(QString("Armature_OI_r_hamate"));
SoNode7->addChild(*SoROUTE1771);

SoROUTE* SoROUTE1772 = new SoROUTE();
SoROUTE1772->setFromField(QString("value_changed"));
SoROUTE1772->setFromNode(QString("Armature_OI_r_hamate"));
SoROUTE1772->setToField(QString("rotation"));
SoROUTE1772->setToNode(QString("hanim_r_hamate"));
SoNode7->addChild(*SoROUTE1772);

SoROUTE* SoROUTE1773 = new SoROUTE();
SoROUTE1773->setFromField(QString("fraction_changed"));
SoROUTE1773->setFromNode(QString("Armature_Clock"));
SoROUTE1773->setToField(QString("set_fraction"));
SoROUTE1773->setToNode(QString("Armature_OI_r_metacarpal_4"));
SoNode7->addChild(*SoROUTE1773);

SoROUTE* SoROUTE1774 = new SoROUTE();
SoROUTE1774->setFromField(QString("value_changed"));
SoROUTE1774->setFromNode(QString("Armature_OI_r_metacarpal_4"));
SoROUTE1774->setToField(QString("rotation"));
SoROUTE1774->setToNode(QString("hanim_r_metacarpal_4"));
SoNode7->addChild(*SoROUTE1774);

SoROUTE* SoROUTE1775 = new SoROUTE();
SoROUTE1775->setFromField(QString("fraction_changed"));
SoROUTE1775->setFromNode(QString("Armature_Clock"));
SoROUTE1775->setToField(QString("set_fraction"));
SoROUTE1775->setToNode(QString("Armature_OI_r_carpal_proximal_phalanx_4"));
SoNode7->addChild(*SoROUTE1775);

SoROUTE* SoROUTE1776 = new SoROUTE();
SoROUTE1776->setFromField(QString("value_changed"));
SoROUTE1776->setFromNode(QString("Armature_OI_r_carpal_proximal_phalanx_4"));
SoROUTE1776->setToField(QString("rotation"));
SoROUTE1776->setToNode(QString("hanim_r_carpal_proximal_phalanx_4"));
SoNode7->addChild(*SoROUTE1776);

SoROUTE* SoROUTE1777 = new SoROUTE();
SoROUTE1777->setFromField(QString("fraction_changed"));
SoROUTE1777->setFromNode(QString("Armature_Clock"));
SoROUTE1777->setToField(QString("set_fraction"));
SoROUTE1777->setToNode(QString("Armature_OI_r_carpal_middle_phalanx_4"));
SoNode7->addChild(*SoROUTE1777);

SoROUTE* SoROUTE1778 = new SoROUTE();
SoROUTE1778->setFromField(QString("value_changed"));
SoROUTE1778->setFromNode(QString("Armature_OI_r_carpal_middle_phalanx_4"));
SoROUTE1778->setToField(QString("rotation"));
SoROUTE1778->setToNode(QString("hanim_r_carpal_middle_phalanx_4"));
SoNode7->addChild(*SoROUTE1778);

SoROUTE* SoROUTE1779 = new SoROUTE();
SoROUTE1779->setFromField(QString("fraction_changed"));
SoROUTE1779->setFromNode(QString("Armature_Clock"));
SoROUTE1779->setToField(QString("set_fraction"));
SoROUTE1779->setToNode(QString("Armature_OI_r_carpal_distal_phalanx_4"));
SoNode7->addChild(*SoROUTE1779);

SoROUTE* SoROUTE1780 = new SoROUTE();
SoROUTE1780->setFromField(QString("value_changed"));
SoROUTE1780->setFromNode(QString("Armature_OI_r_carpal_distal_phalanx_4"));
SoROUTE1780->setToField(QString("rotation"));
SoROUTE1780->setToNode(QString("hanim_r_carpal_distal_phalanx_4"));
SoNode7->addChild(*SoROUTE1780);

SoROUTE* SoROUTE1781 = new SoROUTE();
SoROUTE1781->setFromField(QString("fraction_changed"));
SoROUTE1781->setFromNode(QString("Armature_Clock"));
SoROUTE1781->setToField(QString("set_fraction"));
SoROUTE1781->setToNode(QString("Armature_OI_r_metacarpal_5"));
SoNode7->addChild(*SoROUTE1781);

SoROUTE* SoROUTE1782 = new SoROUTE();
SoROUTE1782->setFromField(QString("value_changed"));
SoROUTE1782->setFromNode(QString("Armature_OI_r_metacarpal_5"));
SoROUTE1782->setToField(QString("rotation"));
SoROUTE1782->setToNode(QString("hanim_r_metacarpal_5"));
SoNode7->addChild(*SoROUTE1782);

SoROUTE* SoROUTE1783 = new SoROUTE();
SoROUTE1783->setFromField(QString("fraction_changed"));
SoROUTE1783->setFromNode(QString("Armature_Clock"));
SoROUTE1783->setToField(QString("set_fraction"));
SoROUTE1783->setToNode(QString("Armature_OI_r_carpal_proximal_phalanx_5"));
SoNode7->addChild(*SoROUTE1783);

SoROUTE* SoROUTE1784 = new SoROUTE();
SoROUTE1784->setFromField(QString("value_changed"));
SoROUTE1784->setFromNode(QString("Armature_OI_r_carpal_proximal_phalanx_5"));
SoROUTE1784->setToField(QString("rotation"));
SoROUTE1784->setToNode(QString("hanim_r_carpal_proximal_phalanx_5"));
SoNode7->addChild(*SoROUTE1784);

SoROUTE* SoROUTE1785 = new SoROUTE();
SoROUTE1785->setFromField(QString("fraction_changed"));
SoROUTE1785->setFromNode(QString("Armature_Clock"));
SoROUTE1785->setToField(QString("set_fraction"));
SoROUTE1785->setToNode(QString("Armature_OI_r_carpal_middle_phalanx_5"));
SoNode7->addChild(*SoROUTE1785);

SoROUTE* SoROUTE1786 = new SoROUTE();
SoROUTE1786->setFromField(QString("value_changed"));
SoROUTE1786->setFromNode(QString("Armature_OI_r_carpal_middle_phalanx_5"));
SoROUTE1786->setToField(QString("rotation"));
SoROUTE1786->setToNode(QString("hanim_r_carpal_middle_phalanx_5"));
SoNode7->addChild(*SoROUTE1786);

SoROUTE* SoROUTE1787 = new SoROUTE();
SoROUTE1787->setFromField(QString("fraction_changed"));
SoROUTE1787->setFromNode(QString("Armature_Clock"));
SoROUTE1787->setToField(QString("set_fraction"));
SoROUTE1787->setToNode(QString("Armature_OI_r_carpal_distal_phalanx_5"));
SoNode7->addChild(*SoROUTE1787);

SoROUTE* SoROUTE1788 = new SoROUTE();
SoROUTE1788->setFromField(QString("value_changed"));
SoROUTE1788->setFromNode(QString("Armature_OI_r_carpal_distal_phalanx_5"));
SoROUTE1788->setToField(QString("rotation"));
SoROUTE1788->setToNode(QString("hanim_r_carpal_distal_phalanx_5"));
SoNode7->addChild(*SoROUTE1788);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}
