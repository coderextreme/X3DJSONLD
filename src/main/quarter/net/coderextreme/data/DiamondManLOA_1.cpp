
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
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("DiamondManLOA_1.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Matthew T. Beitler"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("translator"));
Someta6->setContent(QString("Joel S. Pawloski"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("created"));
Someta7->setContent(QString("12 November 2001"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("modified"));
Someta8->setContent(QString("Tue, 09 Sep 2025 19:37:54 GMT"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("../Templates/DiamondManLOA_1.x3d"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("http://ece.uwaterloo.ca/~HAnim"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("reference"));
Someta16->setContent(QString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("reference"));
Someta17->setContent(QString("http://www.cis.upenn.edu/~beitler"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("error"));
Someta18->setContent(QString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("Image"));
Someta19->setContent(QString("images/BonesAllSkeletonFrontViewLOA1.png"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("Image"));
Someta20->setContent(QString("humanoid_landmark_locations.gif"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("Image"));
Someta21->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("motto"));
Someta22->setContent(QString("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("warning"));
Someta23->setContent(QString("Still needs comments on CAESAR feature points inserted"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("identifier"));
Someta24->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d"));
Sohead1->addMeta(*Someta24);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode25 = new SoNode();
SoWorldInfo* SoWorldInfo26 = new SoWorldInfo();
SoWorldInfo26->setTitle(QString("HANIM 1.1 Default Joint Centers, LOA1"));
SoWorldInfo26->setInfo(new QString[]{QString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")}, 1);
SoNode25->addChild(*SoWorldInfo26);

SoNavigationInfo* SoNavigationInfo27 = new SoNavigationInfo();
SoNavigationInfo27->setSpeed(1.5);
SoNode25->addChild(*SoNavigationInfo27);

SoViewpoint* SoViewpoint28 = new SoViewpoint();
SoViewpoint28->setDescription(QString("Diamond Man, LOA 1"));
SoViewpoint28->setPosition(new float[]{0.0,1.0,3.0});
SoViewpoint28->setCenterOfRotation(new float[]{0.0,1.0,0.0});
SoNode25->addChild(*SoViewpoint28);

SoHAnimHumanoid* SoHAnimHumanoid29 = new SoHAnimHumanoid();
SoHAnimHumanoid29->setDEF(QString("hanim_humanoid"));
SoHAnimHumanoid29->X3DNode::setName(QString("humanoid"));
SoHAnimHumanoid29->setVersion(QString("1.0"));
SoMetadataSet* SoMetadataSet30 = new SoMetadataSet();
SoMetadataSet30->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet30->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString31 = new SoMetadataString();
SoMetadataString31->X3DNode::setName(QString("authorEmail"));
SoMetadataSet30->setValue((X3DNode *)&SoMetadataString31);

SoMetadataString* SoMetadataString32 = new SoMetadataString();
SoMetadataString32->X3DNode::setName(QString("authorName"));
SoMetadataSet30->setValue((X3DNode *)&SoMetadataString32);

SoMetadataString* SoMetadataString33 = new SoMetadataString();
SoMetadataString33->X3DNode::setName(QString("copyright"));
SoMetadataSet30->setValue((X3DNode *)&SoMetadataString33);

SoMetadataString* SoMetadataString34 = new SoMetadataString();
SoMetadataString34->X3DNode::setName(QString("humanoidVersion"));
SoMetadataSet30->setValue((X3DNode *)&SoMetadataString34);

SoMetadataString* SoMetadataString35 = new SoMetadataString();
SoMetadataString35->X3DNode::setName(QString("usageRestrictions"));
SoMetadataSet30->setValue((X3DNode *)&SoMetadataString35);

SoHAnimHumanoid29->setMetadata(*SoMetadataSet30);

SoHAnimJoint* SoHAnimJoint36 = new SoHAnimJoint();
SoHAnimJoint36->setDEF(QString("hanim_HumanoidRoot"));
SoHAnimJoint36->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint36->setCenter(new float[]{0.0,0.824,0.0277});
SoHAnimJoint* SoHAnimJoint37 = new SoHAnimJoint();
SoHAnimJoint37->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint37->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint37->setCenter(new float[]{0.0,0.9149,0.0016});
SoHAnimSegment* SoHAnimSegment38 = new SoHAnimSegment();
SoHAnimSegment38->setDEF(QString("hanim_pelvis"));
SoHAnimSegment38->X3DNode::setName(QString("pelvis"));
SoTransform* SoTransform39 = new SoTransform();
SoTransform39->setTranslation(new float[]{0.0,0.9149,0.0016});
SoShape* SoShape40 = new SoShape();
SoShape40->setDEF(QString("DiamondShape"));
SoVRMLAppearance* SoVRMLAppearance41 = new SoVRMLAppearance();
SoMaterial* SoMaterial42 = new SoMaterial();
SoMaterial42->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoVRMLAppearance41->addChild(*SoMaterial42);

SoShape40->addChild(*SoVRMLAppearance41);

SoIndexedFaceSet* SoIndexedFaceSet43 = new SoIndexedFaceSet();
SoIndexedFaceSet43->setCreaseAngle(0.5);
SoIndexedFaceSet43->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate44 = new SoCoordinate();
SoCoordinate44->setDEF(QString("points"));
SoCoordinate44->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet43->setCoord(*SoCoordinate44);

SoShape40->setGeometry(*SoIndexedFaceSet43);

SoTransform39->addChild(*SoShape40);

SoHAnimSegment38->addChild(*SoTransform39);

SoHAnimJoint37->addChildren(*SoHAnimSegment38);

SoHAnimJoint* SoHAnimJoint45 = new SoHAnimJoint();
SoHAnimJoint45->setDEF(QString("hanim_l_hip"));
SoHAnimJoint45->X3DNode::setName(QString("l_hip"));
SoHAnimJoint45->setCenter(new float[]{0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment46 = new SoHAnimSegment();
SoHAnimSegment46->setDEF(QString("hanim_l_thigh"));
SoHAnimSegment46->X3DNode::setName(QString("l_thigh"));
SoTransform* SoTransform47 = new SoTransform();
SoTransform47->setTranslation(new float[]{0.0961,0.9124,-0.0001});
SoShape* SoShape48 = new SoShape();
SoShape48->setUSE(QString("DiamondShape"));
SoTransform47->addChild(*SoShape48);

SoHAnimSegment46->addChild(*SoTransform47);

SoHAnimSite* SoHAnimSite49 = new SoHAnimSite();
SoHAnimSite49->setDEF(QString("hanim_l_knee_crease_pt"));
SoHAnimSite49->X3DNode::setName(QString("l_knee_crease_pt"));
SoHAnimSite49->setTranslation(new float[]{0.0993,0.4881,-0.0309});
SoHAnimSegment46->addChild(*SoHAnimSite49);

SoHAnimSite* SoHAnimSite50 = new SoHAnimSite();
SoHAnimSite50->setDEF(QString("hanim_l_femoral_lateral_epicn_pt"));
SoHAnimSite50->X3DNode::setName(QString("l_femoral_lateral_epicn_pt"));
SoHAnimSite50->setTranslation(new float[]{0.1598,0.4967,0.0297});
SoHAnimSegment46->addChild(*SoHAnimSite50);

SoHAnimSite* SoHAnimSite51 = new SoHAnimSite();
SoHAnimSite51->setDEF(QString("hanim_l_femoral_medial_epicn_pt"));
SoHAnimSite51->X3DNode::setName(QString("l_femoral_medial_epicn_pt"));
SoHAnimSite51->setTranslation(new float[]{0.0398,0.4946,0.0303});
SoHAnimSegment46->addChild(*SoHAnimSite51);

SoHAnimJoint45->addChildren(*SoHAnimSegment46);

SoHAnimJoint* SoHAnimJoint52 = new SoHAnimJoint();
SoHAnimJoint52->setDEF(QString("hanim_l_knee"));
SoHAnimJoint52->X3DNode::setName(QString("l_knee"));
SoHAnimJoint52->setCenter(new float[]{0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment53 = new SoHAnimSegment();
SoHAnimSegment53->setDEF(QString("hanim_l_calf"));
SoHAnimSegment53->X3DNode::setName(QString("l_calf"));
SoTransform* SoTransform54 = new SoTransform();
SoTransform54->setTranslation(new float[]{0.104,0.4867,0.0308});
SoShape* SoShape55 = new SoShape();
SoShape55->setUSE(QString("DiamondShape"));
SoTransform54->addChild(*SoShape55);

SoHAnimSegment53->addChild(*SoTransform54);

SoHAnimJoint52->addChildren(*SoHAnimSegment53);

SoHAnimJoint* SoHAnimJoint56 = new SoHAnimJoint();
SoHAnimJoint56->setDEF(QString("hanim_l_ankle"));
SoHAnimJoint56->X3DNode::setName(QString("l_ankle"));
SoHAnimJoint56->setCenter(new float[]{0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment57 = new SoHAnimSegment();
SoHAnimSegment57->setDEF(QString("hanim_l_hindfoot"));
SoHAnimSegment57->X3DNode::setName(QString("l_hindfoot"));
SoTransform* SoTransform58 = new SoTransform();
SoTransform58->setTranslation(new float[]{0.1101,0.0656,-0.0736});
SoShape* SoShape59 = new SoShape();
SoShape59->setUSE(QString("DiamondShape"));
SoTransform58->addChild(*SoShape59);

SoHAnimSegment57->addChild(*SoTransform58);

SoHAnimSite* SoHAnimSite60 = new SoHAnimSite();
SoHAnimSite60->setDEF(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimSite60->X3DNode::setName(QString("l_lateral_malleolus_pt"));
SoHAnimSite60->setTranslation(new float[]{0.1308,0.0597,-0.1032});
SoHAnimSegment57->addChild(*SoHAnimSite60);

SoHAnimSite* SoHAnimSite61 = new SoHAnimSite();
SoHAnimSite61->setDEF(QString("hanim_l_medial_malleolus_pt"));
SoHAnimSite61->X3DNode::setName(QString("l_medial_malleolus_pt"));
SoHAnimSite61->setTranslation(new float[]{0.089,0.0716,-0.0881});
SoHAnimSegment57->addChild(*SoHAnimSite61);

SoHAnimSite* SoHAnimSite62 = new SoHAnimSite();
SoHAnimSite62->setDEF(QString("hanim_l_sphyrion_pt"));
SoHAnimSite62->X3DNode::setName(QString("l_sphyrion_pt"));
SoHAnimSite62->setTranslation(new float[]{0.089,0.0575,-0.0943});
SoHAnimSegment57->addChild(*SoHAnimSite62);

SoHAnimSite* SoHAnimSite63 = new SoHAnimSite();
SoHAnimSite63->setDEF(QString("hanim_l_calcaneous_post_pt"));
SoHAnimSite63->X3DNode::setName(QString("l_calcaneous_post_pt"));
SoHAnimSite63->setTranslation(new float[]{0.0974,0.0259,-0.1171});
SoHAnimSegment57->addChild(*SoHAnimSite63);

SoHAnimJoint56->addChildren(*SoHAnimSegment57);

SoHAnimJoint* SoHAnimJoint64 = new SoHAnimJoint();
SoHAnimJoint64->setDEF(QString("hanim_l_midtarsal"));
SoHAnimJoint64->X3DNode::setName(QString("l_midtarsal"));
SoHAnimJoint64->setCenter(new float[]{0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment65 = new SoHAnimSegment();
SoHAnimSegment65->setDEF(QString("hanim_l_middistal"));
SoHAnimSegment65->X3DNode::setName(QString("l_middistal"));
SoHAnimSite* SoHAnimSite66 = new SoHAnimSite();
SoHAnimSite66->setDEF(QString("hanim_l_middistal_tip"));
SoHAnimSite66->X3DNode::setName(QString("l_middistal_tip"));
SoHAnimSite66->setTranslation(new float[]{0.1354,0.0016,0.1476});
SoHAnimSegment65->addChild(*SoHAnimSite66);

SoHAnimSite* SoHAnimSite67 = new SoHAnimSite();
SoHAnimSite67->setDEF(QString("hanim_l_metatarsal_pha5_pt"));
SoHAnimSite67->X3DNode::setName(QString("l_metatarsal_pha5_pt"));
SoHAnimSite67->setTranslation(new float[]{0.1825,0.007,0.0928});
SoHAnimSegment65->addChild(*SoHAnimSite67);

SoHAnimSite* SoHAnimSite68 = new SoHAnimSite();
SoHAnimSite68->setDEF(QString("hanim_l_metatarsal_pha1_pt"));
SoHAnimSite68->X3DNode::setName(QString("l_metatarsal_pha1_pt"));
SoHAnimSite68->setTranslation(new float[]{0.0816,0.0232,0.0106});
SoHAnimSegment65->addChild(*SoHAnimSite68);

SoHAnimSite* SoHAnimSite69 = new SoHAnimSite();
SoHAnimSite69->setDEF(QString("hanim_l_digit2_pt"));
SoHAnimSite69->X3DNode::setName(QString("l_digit2_pt"));
SoHAnimSite69->setTranslation(new float[]{0.1195,0.0079,0.1433});
SoHAnimSegment65->addChild(*SoHAnimSite69);

SoHAnimJoint64->addChildren(*SoHAnimSegment65);

SoHAnimJoint56->addChildren(*SoHAnimJoint64);

SoHAnimJoint52->addChildren(*SoHAnimJoint56);

SoHAnimJoint45->addChildren(*SoHAnimJoint52);

SoHAnimJoint37->addChildren(*SoHAnimJoint45);

SoHAnimJoint* SoHAnimJoint70 = new SoHAnimJoint();
SoHAnimJoint70->setDEF(QString("hanim_r_hip"));
SoHAnimJoint70->X3DNode::setName(QString("r_hip"));
SoHAnimJoint70->setCenter(new float[]{-0.095,0.9171,0.0029});
SoHAnimSegment* SoHAnimSegment71 = new SoHAnimSegment();
SoHAnimSegment71->setDEF(QString("hanim_r_thigh"));
SoHAnimSegment71->X3DNode::setName(QString("r_thigh"));
SoTransform* SoTransform72 = new SoTransform();
SoTransform72->setTranslation(new float[]{-0.095,0.9171,0.0029});
SoShape* SoShape73 = new SoShape();
SoShape73->setUSE(QString("DiamondShape"));
SoTransform72->addChild(*SoShape73);

SoHAnimSegment71->addChild(*SoTransform72);

SoHAnimSite* SoHAnimSite74 = new SoHAnimSite();
SoHAnimSite74->setDEF(QString("hanim_r_knee_crease_pt"));
SoHAnimSite74->X3DNode::setName(QString("r_knee_crease_pt"));
SoHAnimSite74->setTranslation(new float[]{-0.0825,0.4932,-0.0326});
SoHAnimSegment71->addChild(*SoHAnimSite74);

SoHAnimSite* SoHAnimSite75 = new SoHAnimSite();
SoHAnimSite75->setDEF(QString("hanim_r_femoral_lateral_epicn_pt"));
SoHAnimSite75->X3DNode::setName(QString("r_femoral_lateral_epicn_pt"));
SoHAnimSite75->setTranslation(new float[]{-0.1421,0.4992,0.031});
SoHAnimSegment71->addChild(*SoHAnimSite75);

SoHAnimSite* SoHAnimSite76 = new SoHAnimSite();
SoHAnimSite76->setDEF(QString("hanim_r_femoral_medial_epicn_pt"));
SoHAnimSite76->X3DNode::setName(QString("r_femoral_medial_epicn_pt"));
SoHAnimSite76->setTranslation(new float[]{-0.0221,0.5014,0.0289});
SoHAnimSegment71->addChild(*SoHAnimSite76);

SoHAnimJoint70->addChildren(*SoHAnimSegment71);

SoHAnimJoint* SoHAnimJoint77 = new SoHAnimJoint();
SoHAnimJoint77->setDEF(QString("hanim_r_knee"));
SoHAnimJoint77->X3DNode::setName(QString("r_knee"));
SoHAnimJoint77->setCenter(new float[]{-0.0867,0.4913,0.0318});
SoHAnimSegment* SoHAnimSegment78 = new SoHAnimSegment();
SoHAnimSegment78->setDEF(QString("hanim_r_calf"));
SoHAnimSegment78->X3DNode::setName(QString("r_calf"));
SoTransform* SoTransform79 = new SoTransform();
SoTransform79->setTranslation(new float[]{-0.0867,0.4913,0.0318});
SoShape* SoShape80 = new SoShape();
SoShape80->setUSE(QString("DiamondShape"));
SoTransform79->addChild(*SoShape80);

SoHAnimSegment78->addChild(*SoTransform79);

SoHAnimJoint77->addChildren(*SoHAnimSegment78);

SoHAnimJoint* SoHAnimJoint81 = new SoHAnimJoint();
SoHAnimJoint81->setDEF(QString("hanim_r_ankle"));
SoHAnimJoint81->X3DNode::setName(QString("r_ankle"));
SoHAnimJoint81->setCenter(new float[]{-0.0801,0.0712,-0.0766});
SoHAnimSegment* SoHAnimSegment82 = new SoHAnimSegment();
SoHAnimSegment82->setDEF(QString("hanim_r_hindfoot"));
SoHAnimSegment82->X3DNode::setName(QString("r_hindfoot"));
SoTransform* SoTransform83 = new SoTransform();
SoTransform83->setTranslation(new float[]{-0.0801,0.0712,-0.0766});
SoShape* SoShape84 = new SoShape();
SoShape84->setUSE(QString("DiamondShape"));
SoTransform83->addChild(*SoShape84);

SoHAnimSegment82->addChild(*SoTransform83);

SoHAnimSite* SoHAnimSite85 = new SoHAnimSite();
SoHAnimSite85->setDEF(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimSite85->X3DNode::setName(QString("r_lateral_malleolus_pt"));
SoHAnimSite85->setTranslation(new float[]{-0.1006,0.0658,-0.1075});
SoHAnimSegment82->addChild(*SoHAnimSite85);

SoHAnimSite* SoHAnimSite86 = new SoHAnimSite();
SoHAnimSite86->setDEF(QString("hanim_r_medial_malleolus_pt"));
SoHAnimSite86->X3DNode::setName(QString("r_medial_malleolus_pt"));
SoHAnimSite86->setTranslation(new float[]{-0.0591,0.076,-0.0928});
SoHAnimSegment82->addChild(*SoHAnimSite86);

SoHAnimSite* SoHAnimSite87 = new SoHAnimSite();
SoHAnimSite87->setDEF(QString("hanim_r_sphyrion_pt"));
SoHAnimSite87->X3DNode::setName(QString("r_sphyrion_pt"));
SoHAnimSite87->setTranslation(new float[]{-0.0603,0.061,-0.1002});
SoHAnimSegment82->addChild(*SoHAnimSite87);

SoHAnimSite* SoHAnimSite88 = new SoHAnimSite();
SoHAnimSite88->setDEF(QString("hanim_r_calcaneous_post_pt"));
SoHAnimSite88->X3DNode::setName(QString("r_calcaneous_post_pt"));
SoHAnimSite88->setTranslation(new float[]{-0.0692,0.0297,-0.1221});
SoHAnimSegment82->addChild(*SoHAnimSite88);

SoHAnimJoint81->addChildren(*SoHAnimSegment82);

SoHAnimJoint* SoHAnimJoint89 = new SoHAnimJoint();
SoHAnimJoint89->setDEF(QString("hanim_r_midtarsal"));
SoHAnimJoint89->X3DNode::setName(QString("r_midtarsal"));
SoHAnimJoint89->setCenter(new float[]{-0.0801,0.0,0.0368});
SoHAnimSegment* SoHAnimSegment90 = new SoHAnimSegment();
SoHAnimSegment90->setDEF(QString("hanim_r_middistal"));
SoHAnimSegment90->X3DNode::setName(QString("r_middistal"));
SoHAnimSite* SoHAnimSite91 = new SoHAnimSite();
SoHAnimSite91->setDEF(QString("hanim_r_middistal_tip"));
SoHAnimSite91->X3DNode::setName(QString("r_middistal_tip"));
SoHAnimSite91->setTranslation(new float[]{-0.1043,-0.0227,0.145});
SoHAnimSegment90->addChild(*SoHAnimSite91);

SoHAnimSite* SoHAnimSite92 = new SoHAnimSite();
SoHAnimSite92->setDEF(QString("hanim_r_metatarsal_pha5_pt"));
SoHAnimSite92->X3DNode::setName(QString("r_metatarsal_pha5_pt"));
SoHAnimSite92->setTranslation(new float[]{-0.1523,0.0166,0.0895});
SoHAnimSegment90->addChild(*SoHAnimSite92);

SoHAnimSite* SoHAnimSite93 = new SoHAnimSite();
SoHAnimSite93->setDEF(QString("hanim_r_metatarsal_pha1_pt"));
SoHAnimSite93->X3DNode::setName(QString("r_metatarsal_pha1_pt"));
SoHAnimSite93->setTranslation(new float[]{-0.0521,0.026,0.0127});
SoHAnimSegment90->addChild(*SoHAnimSite93);

SoHAnimSite* SoHAnimSite94 = new SoHAnimSite();
SoHAnimSite94->setDEF(QString("hanim_r_digit2_pt"));
SoHAnimSite94->X3DNode::setName(QString("r_digit2_pt"));
SoHAnimSite94->setTranslation(new float[]{-0.0883,0.0134,0.1383});
SoHAnimSegment90->addChild(*SoHAnimSite94);

SoHAnimJoint89->addChildren(*SoHAnimSegment90);

SoHAnimJoint81->addChildren(*SoHAnimJoint89);

SoHAnimJoint77->addChildren(*SoHAnimJoint81);

SoHAnimJoint70->addChildren(*SoHAnimJoint77);

SoHAnimJoint37->addChildren(*SoHAnimJoint70);

SoHAnimJoint36->addChildren(*SoHAnimJoint37);

SoHAnimJoint* SoHAnimJoint95 = new SoHAnimJoint();
SoHAnimJoint95->setDEF(QString("hanim_vl1"));
SoHAnimJoint95->X3DNode::setName(QString("vl1"));
SoHAnimJoint95->setCenter(new float[]{-0.00405,1.07,-0.0275});
SoHAnimSegment* SoHAnimSegment96 = new SoHAnimSegment();
SoHAnimSegment96->setDEF(QString("hanim_l1"));
SoHAnimSegment96->X3DNode::setName(QString("l1"));
SoHAnimJoint95->addChildren(*SoHAnimSegment96);

SoHAnimJoint* SoHAnimJoint97 = new SoHAnimJoint();
SoHAnimJoint97->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint97->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint97->setCenter(new float[]{0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment98 = new SoHAnimSegment();
SoHAnimSegment98->setDEF(QString("hanim_l_upperarm"));
SoHAnimSegment98->X3DNode::setName(QString("l_upperarm"));
SoTransform* SoTransform99 = new SoTransform();
SoTransform99->setTranslation(new float[]{0.2029,1.4376,-0.0387});
SoShape* SoShape100 = new SoShape();
SoShape100->setUSE(QString("DiamondShape"));
SoTransform99->addChild(*SoShape100);

SoHAnimSegment98->addChild(*SoTransform99);

SoTransform* SoTransform101 = new SoTransform();
SoTransform101->setDEF(QString("l_upperarm_adjust"));
SoTransform101->setTranslation(new float[]{0.2029,1.4376,-0.0387});
SoTransform101->setRotation(new float[]{1.0,0.0,0.0,0.119});
SoTransform101->setCenter(new float[]{0.182,1.22,-0.047});
SoHAnimSegment98->addChild(*SoTransform101);

SoHAnimSite* SoHAnimSite102 = new SoHAnimSite();
SoHAnimSite102->setDEF(QString("hanim_l_humeral_lateral_epicn_pt"));
SoHAnimSite102->X3DNode::setName(QString("l_humeral_lateral_epicn_pt"));
SoHAnimSite102->setTranslation(new float[]{0.228,1.1482,-0.11});
SoHAnimSegment98->addChild(*SoHAnimSite102);

SoHAnimJoint97->addChildren(*SoHAnimSegment98);

SoHAnimJoint* SoHAnimJoint103 = new SoHAnimJoint();
SoHAnimJoint103->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint103->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint103->setCenter(new float[]{0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment104 = new SoHAnimSegment();
SoHAnimSegment104->setDEF(QString("hanim_l_forearm"));
SoHAnimSegment104->X3DNode::setName(QString("l_forearm"));
SoTransform* SoTransform105 = new SoTransform();
SoTransform105->setTranslation(new float[]{0.2014,1.1357,-0.0682});
SoShape* SoShape106 = new SoShape();
SoShape106->setUSE(QString("DiamondShape"));
SoTransform105->addChild(*SoShape106);

SoHAnimSegment104->addChild(*SoTransform105);

SoTransform* SoTransform107 = new SoTransform();
SoTransform107->setDEF(QString("l_forearm_adjust"));
SoTransform107->setTranslation(new float[]{0.2014,1.1357,-0.0682});
SoTransform107->setRotation(new float[]{-1.0,0.0,0.0,0.1});
SoTransform107->setCenter(new float[]{0.198,0.961,-0.0405});
SoHAnimSegment104->addChild(*SoTransform107);

SoHAnimSite* SoHAnimSite108 = new SoHAnimSite();
SoHAnimSite108->setDEF(QString("hanim_l_radial_styloid_pt"));
SoHAnimSite108->X3DNode::setName(QString("l_radial_styloid_pt"));
SoHAnimSite108->setTranslation(new float[]{0.1901,0.8645,-0.0415});
SoHAnimSegment104->addChild(*SoHAnimSite108);

SoHAnimSite* SoHAnimSite109 = new SoHAnimSite();
SoHAnimSite109->setDEF(QString("hanim_l_olecranon_pt"));
SoHAnimSite109->X3DNode::setName(QString("l_olecranon_pt"));
SoHAnimSite109->setTranslation(new float[]{-0.1962,1.1375,-0.1123});
SoHAnimSegment104->addChild(*SoHAnimSite109);

SoHAnimSite* SoHAnimSite110 = new SoHAnimSite();
SoHAnimSite110->setDEF(QString("hanim_l_humeral_medial_epicn_pt"));
SoHAnimSite110->X3DNode::setName(QString("l_humeral_medial_epicn_pt"));
SoHAnimSite110->setTranslation(new float[]{0.1735,1.1272,-0.1113});
SoHAnimSegment104->addChild(*SoHAnimSite110);

SoHAnimSite* SoHAnimSite111 = new SoHAnimSite();
SoHAnimSite111->setDEF(QString("hanim_l_radiale_pt"));
SoHAnimSite111->X3DNode::setName(QString("l_radiale_pt"));
SoHAnimSite111->setTranslation(new float[]{0.2182,1.1212,-0.1167});
SoHAnimSegment104->addChild(*SoHAnimSite111);

SoHAnimJoint103->addChildren(*SoHAnimSegment104);

SoHAnimJoint* SoHAnimJoint112 = new SoHAnimJoint();
SoHAnimJoint112->setDEF(QString("hanim_l_wrist"));
SoHAnimJoint112->X3DNode::setName(QString("l_wrist"));
SoHAnimJoint112->setCenter(new float[]{0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment113 = new SoHAnimSegment();
SoHAnimSegment113->setDEF(QString("hanim_l_hand"));
SoHAnimSegment113->X3DNode::setName(QString("l_hand"));
SoTransform* SoTransform114 = new SoTransform();
SoTransform114->setTranslation(new float[]{0.1984,0.8663,-0.0583});
SoShape* SoShape115 = new SoShape();
SoShape115->setUSE(QString("DiamondShape"));
SoTransform114->addChild(*SoShape115);

SoHAnimSegment113->addChild(*SoTransform114);

SoTransform* SoTransform116 = new SoTransform();
SoTransform116->setDEF(QString("l_hand_adjust"));
SoTransform116->setTranslation(new float[]{0.1984,0.8663,-0.0583});
SoTransform116->setRotation(new float[]{-0.06361,-0.9967,0.04988,1.333});
SoTransform116->setCenter(new float[]{0.213,0.811,-0.0338});
SoHAnimSegment113->addChild(*SoTransform116);

SoHAnimSite* SoHAnimSite117 = new SoHAnimSite();
SoHAnimSite117->setDEF(QString("hanim_l_hand_tip"));
SoHAnimSite117->X3DNode::setName(QString("l_hand_tip"));
SoHAnimSite117->setTranslation(new float[]{0.208,0.6731,-0.0491});
SoHAnimSegment113->addChild(*SoHAnimSite117);

SoHAnimSite* SoHAnimSite118 = new SoHAnimSite();
SoHAnimSite118->setDEF(QString("hanim_l_metacarpal_pha2_pt"));
SoHAnimSite118->X3DNode::setName(QString("l_metacarpal_pha2_pt"));
SoHAnimSite118->setTranslation(new float[]{0.2009,0.8139,-0.0237});
SoHAnimSegment113->addChild(*SoHAnimSite118);

SoHAnimSite* SoHAnimSite119 = new SoHAnimSite();
SoHAnimSite119->setDEF(QString("hanim_l_dactylion_pt"));
SoHAnimSite119->X3DNode::setName(QString("l_dactylion_pt"));
SoHAnimSite119->setTranslation(new float[]{0.2056,0.6743,-0.0482});
SoHAnimSegment113->addChild(*SoHAnimSite119);

SoHAnimSite* SoHAnimSite120 = new SoHAnimSite();
SoHAnimSite120->setDEF(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimSite120->X3DNode::setName(QString("l_ulnar_styloid_pt"));
SoHAnimSite120->setTranslation(new float[]{-0.2142,0.8529,-0.0648});
SoHAnimSegment113->addChild(*SoHAnimSite120);

SoHAnimSite* SoHAnimSite121 = new SoHAnimSite();
SoHAnimSite121->setDEF(QString("hanim_l_metacarpal_pha5_pt"));
SoHAnimSite121->X3DNode::setName(QString("l_metacarpal_pha5_pt"));
SoHAnimSite121->setTranslation(new float[]{0.1929,0.786,-0.1122});
SoHAnimSegment113->addChild(*SoHAnimSite121);

SoHAnimJoint112->addChildren(*SoHAnimSegment113);

SoHAnimJoint103->addChildren(*SoHAnimJoint112);

SoHAnimJoint97->addChildren(*SoHAnimJoint103);

SoHAnimJoint95->addChildren(*SoHAnimJoint97);

SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint122->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint122->setCenter(new float[]{-0.1907,1.4407,-0.0325});
SoHAnimSegment* SoHAnimSegment123 = new SoHAnimSegment();
SoHAnimSegment123->setDEF(QString("hanim_r_upperarm"));
SoHAnimSegment123->X3DNode::setName(QString("r_upperarm"));
SoTransform* SoTransform124 = new SoTransform();
SoTransform124->setTranslation(new float[]{-0.1907,1.4407,-0.0325});
SoShape* SoShape125 = new SoShape();
SoShape125->setUSE(QString("DiamondShape"));
SoTransform124->addChild(*SoShape125);

SoHAnimSegment123->addChild(*SoTransform124);

SoTransform* SoTransform126 = new SoTransform();
SoTransform126->setDEF(QString("r_upperarm_adjust"));
SoTransform126->setTranslation(new float[]{-0.1907,1.4407,-0.0325});
SoTransform126->setRotation(new float[]{1.0,0.0,0.0,0.0836});
SoTransform126->setCenter(new float[]{-0.182,1.22,-0.047});
SoHAnimSegment123->addChild(*SoTransform126);

SoHAnimSite* SoHAnimSite127 = new SoHAnimSite();
SoHAnimSite127->setDEF(QString("hanim_r_humeral_lateral_epicn_pt"));
SoHAnimSite127->X3DNode::setName(QString("r_humeral_lateral_epicn_pt"));
SoHAnimSite127->setTranslation(new float[]{-0.2224,1.1517,-0.1033});
SoHAnimSegment123->addChild(*SoHAnimSite127);

SoHAnimJoint122->addChildren(*SoHAnimSegment123);

SoHAnimJoint* SoHAnimJoint128 = new SoHAnimJoint();
SoHAnimJoint128->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint128->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint128->setCenter(new float[]{-0.1949,1.1388,-0.062});
SoHAnimSegment* SoHAnimSegment129 = new SoHAnimSegment();
SoHAnimSegment129->setDEF(QString("hanim_r_forearm"));
SoHAnimSegment129->X3DNode::setName(QString("r_forearm"));
SoTransform* SoTransform130 = new SoTransform();
SoTransform130->setTranslation(new float[]{-0.1949,1.1388,-0.062});
SoShape* SoShape131 = new SoShape();
SoShape131->setUSE(QString("DiamondShape"));
SoTransform130->addChild(*SoShape131);

SoHAnimSegment129->addChild(*SoTransform130);

SoTransform* SoTransform132 = new SoTransform();
SoTransform132->setDEF(QString("r_forearm_adjust"));
SoTransform132->setTranslation(new float[]{-0.1949,1.1388,-0.062});
SoTransform132->setRotation(new float[]{-1.0,0.0,0.0,0.1254});
SoTransform132->setCenter(new float[]{-0.198,0.961,-0.0397});
SoHAnimSegment129->addChild(*SoTransform132);

SoHAnimSite* SoHAnimSite133 = new SoHAnimSite();
SoHAnimSite133->setDEF(QString("hanim_r_radial_styloid_pt"));
SoHAnimSite133->X3DNode::setName(QString("r_radial_styloid_pt"));
SoHAnimSite133->setTranslation(new float[]{-0.1884,0.8676,-0.036});
SoHAnimSegment129->addChild(*SoHAnimSite133);

SoHAnimSite* SoHAnimSite134 = new SoHAnimSite();
SoHAnimSite134->setDEF(QString("hanim_r_olecranon_pt"));
SoHAnimSite134->X3DNode::setName(QString("r_olecranon_pt"));
SoHAnimSite134->setTranslation(new float[]{-0.1907,1.1405,-0.1065});
SoHAnimSegment129->addChild(*SoHAnimSite134);

SoHAnimSite* SoHAnimSite135 = new SoHAnimSite();
SoHAnimSite135->setDEF(QString("hanim_r_humeral_medial_epicn_pt"));
SoHAnimSite135->X3DNode::setName(QString("r_humeral_medial_epicn_pt"));
SoHAnimSite135->setTranslation(new float[]{-0.168,1.1298,-0.1062});
SoHAnimSegment129->addChild(*SoHAnimSite135);

SoHAnimSite* SoHAnimSite136 = new SoHAnimSite();
SoHAnimSite136->setDEF(QString("hanim_r_radiale_pt"));
SoHAnimSite136->X3DNode::setName(QString("r_radiale_pt"));
SoHAnimSite136->setTranslation(new float[]{-0.213,1.1305,-0.1091});
SoHAnimSegment129->addChild(*SoHAnimSite136);

SoHAnimJoint128->addChildren(*SoHAnimSegment129);

SoHAnimJoint* SoHAnimJoint137 = new SoHAnimJoint();
SoHAnimJoint137->setDEF(QString("hanim_r_wrist"));
SoHAnimJoint137->X3DNode::setName(QString("r_wrist"));
SoHAnimJoint137->setCenter(new float[]{-0.1959,0.8694,-0.0521});
SoHAnimSegment* SoHAnimSegment138 = new SoHAnimSegment();
SoHAnimSegment138->setDEF(QString("hanim_r_hand"));
SoHAnimSegment138->X3DNode::setName(QString("r_hand"));
SoTransform* SoTransform139 = new SoTransform();
SoTransform139->setTranslation(new float[]{-0.1959,0.8694,-0.0521});
SoShape* SoShape140 = new SoShape();
SoShape140->setUSE(QString("DiamondShape"));
SoTransform139->addChild(*SoShape140);

SoHAnimSegment138->addChild(*SoTransform139);

SoTransform* SoTransform141 = new SoTransform();
SoTransform141->setDEF(QString("r_hand_adjust"));
SoTransform141->setRotation(new float[]{-0.09024,0.994,-0.0624,1.216});
SoTransform141->setCenter(new float[]{-0.217,0.811,-0.0338});
SoHAnimSegment138->addChild(*SoTransform141);

SoHAnimSite* SoHAnimSite142 = new SoHAnimSite();
SoHAnimSite142->setDEF(QString("hanim_r_hand_tip"));
SoHAnimSite142->X3DNode::setName(QString("r_hand_tip"));
SoHAnimSite142->setTranslation(new float[]{-0.1969,0.6758,-0.0427});
SoHAnimSegment138->addChild(*SoHAnimSite142);

SoHAnimSite* SoHAnimSite143 = new SoHAnimSite();
SoHAnimSite143->setDEF(QString("hanim_r_metacarpal_pha2_pt"));
SoHAnimSite143->X3DNode::setName(QString("r_metacarpal_pha2_pt"));
SoHAnimSite143->setTranslation(new float[]{-0.1977,0.8169,-0.0177});
SoHAnimSegment138->addChild(*SoHAnimSite143);

SoHAnimSite* SoHAnimSite144 = new SoHAnimSite();
SoHAnimSite144->setDEF(QString("hanim_r_dactylion_pt"));
SoHAnimSite144->X3DNode::setName(QString("r_dactylion_pt"));
SoHAnimSite144->setTranslation(new float[]{-0.1941,0.6772,-0.0423});
SoHAnimSegment138->addChild(*SoHAnimSite144);

SoHAnimSite* SoHAnimSite145 = new SoHAnimSite();
SoHAnimSite145->setDEF(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimSite145->X3DNode::setName(QString("r_ulnar_styloid_pt"));
SoHAnimSite145->setTranslation(new float[]{-0.2117,0.8562,-0.0584});
SoHAnimSegment138->addChild(*SoHAnimSite145);

SoHAnimSite* SoHAnimSite146 = new SoHAnimSite();
SoHAnimSite146->setDEF(QString("hanim_r_metacarpal_pha5_pt"));
SoHAnimSite146->X3DNode::setName(QString("r_metacarpal_pha5_pt"));
SoHAnimSite146->setTranslation(new float[]{-0.1929,0.789,-0.1064});
SoHAnimSegment138->addChild(*SoHAnimSite146);

SoHAnimJoint137->addChildren(*SoHAnimSegment138);

SoHAnimJoint128->addChildren(*SoHAnimJoint137);

SoHAnimJoint122->addChildren(*SoHAnimJoint128);

SoHAnimJoint95->addChildren(*SoHAnimJoint122);

SoHAnimJoint* SoHAnimJoint147 = new SoHAnimJoint();
SoHAnimJoint147->setDEF(QString("hanim_vc4"));
SoHAnimJoint147->X3DNode::setName(QString("vc4"));
SoHAnimJoint147->setCenter(new float[]{0.0,1.43,-0.0458});
SoHAnimSegment* SoHAnimSegment148 = new SoHAnimSegment();
SoHAnimSegment148->setDEF(QString("hanim_c4"));
SoHAnimSegment148->X3DNode::setName(QString("c4"));
SoHAnimJoint147->addChildren(*SoHAnimSegment148);

SoHAnimJoint95->addChildren(*SoHAnimJoint147);

SoHAnimJoint36->addChildren(*SoHAnimJoint95);

SoHAnimJoint* SoHAnimJoint149 = new SoHAnimJoint();
SoHAnimJoint149->setDEF(QString("hanim_vl5"));
SoHAnimJoint149->X3DNode::setName(QString("vl5"));
SoHAnimJoint149->setCenter(new float[]{0.0028,1.0568,-0.0776});
SoHAnimJoint* SoHAnimJoint150 = new SoHAnimJoint();
SoHAnimJoint150->setDEF(QString("hanim_skullbase"));
SoHAnimJoint150->X3DNode::setName(QString("skullbase"));
SoHAnimJoint150->setCenter(new float[]{0.0044,1.6209,0.0236});
SoHAnimSegment* SoHAnimSegment151 = new SoHAnimSegment();
SoHAnimSegment151->setDEF(QString("hanim_skull"));
SoHAnimSegment151->X3DNode::setName(QString("skull"));
SoTransform* SoTransform152 = new SoTransform();
SoTransform152->setTranslation(new float[]{0.0044,1.6209,0.0236});
SoShape* SoShape153 = new SoShape();
SoShape153->setUSE(QString("DiamondShape"));
SoTransform152->addChild(*SoShape153);

SoHAnimSegment151->addChild(*SoTransform152);

SoHAnimSite* SoHAnimSite154 = new SoHAnimSite();
SoHAnimSite154->setDEF(QString("hanim_skull_tip"));
SoHAnimSite154->X3DNode::setName(QString("skull_tip"));
SoHAnimSite154->setTranslation(new float[]{0.005,1.7504,0.0055});
SoHAnimSegment151->addChild(*SoHAnimSite154);

SoHAnimSite* SoHAnimSite155 = new SoHAnimSite();
SoHAnimSite155->setDEF(QString("hanim_sellion_pt"));
SoHAnimSite155->X3DNode::setName(QString("sellion_pt"));
SoHAnimSite155->setTranslation(new float[]{0.0058,1.6316,0.0852});
SoHAnimSegment151->addChild(*SoHAnimSite155);

SoHAnimSite* SoHAnimSite156 = new SoHAnimSite();
SoHAnimSite156->setDEF(QString("hanim_r_infraorbitale_pt"));
SoHAnimSite156->X3DNode::setName(QString("r_infraorbitale_pt"));
SoHAnimSite156->setTranslation(new float[]{-0.0237,1.6171,0.0752});
SoHAnimSegment151->addChild(*SoHAnimSite156);

SoHAnimSite* SoHAnimSite157 = new SoHAnimSite();
SoHAnimSite157->setDEF(QString("hanim_l_infraorbitale_pt"));
SoHAnimSite157->X3DNode::setName(QString("l_infraorbitale_pt"));
SoHAnimSite157->setTranslation(new float[]{0.0341,1.6171,0.0752});
SoHAnimSegment151->addChild(*SoHAnimSite157);

SoHAnimSite* SoHAnimSite158 = new SoHAnimSite();
SoHAnimSite158->setDEF(QString("hanim_supramenton_pt"));
SoHAnimSite158->X3DNode::setName(QString("supramenton_pt"));
SoHAnimSite158->setTranslation(new float[]{0.0061,1.541,0.0805});
SoHAnimSegment151->addChild(*SoHAnimSite158);

SoHAnimSite* SoHAnimSite159 = new SoHAnimSite();
SoHAnimSite159->setDEF(QString("hanim_r_tragion_pt"));
SoHAnimSite159->X3DNode::setName(QString("r_tragion_pt"));
SoHAnimSite159->setTranslation(new float[]{-0.0646,1.6347,0.0302});
SoHAnimSegment151->addChild(*SoHAnimSite159);

SoHAnimSite* SoHAnimSite160 = new SoHAnimSite();
SoHAnimSite160->setDEF(QString("hanim_r_gonion_pt"));
SoHAnimSite160->X3DNode::setName(QString("r_gonion_pt"));
SoHAnimSite160->setTranslation(new float[]{-0.052,1.5529,0.0347});
SoHAnimSegment151->addChild(*SoHAnimSite160);

SoHAnimSite* SoHAnimSite161 = new SoHAnimSite();
SoHAnimSite161->setDEF(QString("hanim_l_tragion_pt"));
SoHAnimSite161->X3DNode::setName(QString("l_tragion_pt"));
SoHAnimSite161->setTranslation(new float[]{0.0739,1.6348,0.0282});
SoHAnimSegment151->addChild(*SoHAnimSite161);

SoHAnimSite* SoHAnimSite162 = new SoHAnimSite();
SoHAnimSite162->setDEF(QString("hanim_l_gonion_pt"));
SoHAnimSite162->X3DNode::setName(QString("l_gonion_pt"));
SoHAnimSite162->setTranslation(new float[]{0.0631,1.553,0.033});
SoHAnimSegment151->addChild(*SoHAnimSite162);

SoHAnimSite* SoHAnimSite163 = new SoHAnimSite();
SoHAnimSite163->setDEF(QString("hanim_nuchale_pt"));
SoHAnimSite163->X3DNode::setName(QString("nuchale_pt"));
SoHAnimSite163->setTranslation(new float[]{0.0039,1.5972,-0.0796});
SoHAnimSegment151->addChild(*SoHAnimSite163);

SoHAnimJoint150->addChildren(*SoHAnimSegment151);

SoHAnimJoint149->addChildren(*SoHAnimJoint150);

SoHAnimJoint36->addChildren(*SoHAnimJoint149);

SoHAnimHumanoid29->setSkeleton(*SoHAnimJoint36);

SoHAnimJoint* SoHAnimJoint164 = new SoHAnimJoint();
SoHAnimJoint164->setUSE(QString("hanim_HumanoidRoot"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint164);

SoHAnimJoint* SoHAnimJoint165 = new SoHAnimJoint();
SoHAnimJoint165->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint165);

SoHAnimJoint* SoHAnimJoint166 = new SoHAnimJoint();
SoHAnimJoint166->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint166);

SoHAnimJoint* SoHAnimJoint167 = new SoHAnimJoint();
SoHAnimJoint167->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint167);

SoHAnimJoint* SoHAnimJoint168 = new SoHAnimJoint();
SoHAnimJoint168->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint168);

SoHAnimJoint* SoHAnimJoint169 = new SoHAnimJoint();
SoHAnimJoint169->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint169);

SoHAnimJoint* SoHAnimJoint170 = new SoHAnimJoint();
SoHAnimJoint170->setUSE(QString("hanim_l_ankle"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint170);

SoHAnimJoint* SoHAnimJoint171 = new SoHAnimJoint();
SoHAnimJoint171->setUSE(QString("hanim_r_ankle"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint171);

SoHAnimJoint* SoHAnimJoint172 = new SoHAnimJoint();
SoHAnimJoint172->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint172);

SoHAnimJoint* SoHAnimJoint173 = new SoHAnimJoint();
SoHAnimJoint173->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint173);

SoHAnimJoint* SoHAnimJoint174 = new SoHAnimJoint();
SoHAnimJoint174->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint174);

SoHAnimJoint* SoHAnimJoint175 = new SoHAnimJoint();
SoHAnimJoint175->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint175);

SoHAnimJoint* SoHAnimJoint176 = new SoHAnimJoint();
SoHAnimJoint176->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint176);

SoHAnimJoint* SoHAnimJoint177 = new SoHAnimJoint();
SoHAnimJoint177->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint177);

SoHAnimJoint* SoHAnimJoint178 = new SoHAnimJoint();
SoHAnimJoint178->setUSE(QString("hanim_l_midtarsal"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint178);

SoHAnimJoint* SoHAnimJoint179 = new SoHAnimJoint();
SoHAnimJoint179->setUSE(QString("hanim_r_midtarsal"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint179);

SoHAnimJoint* SoHAnimJoint180 = new SoHAnimJoint();
SoHAnimJoint180->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint180);

SoHAnimJoint* SoHAnimJoint181 = new SoHAnimJoint();
SoHAnimJoint181->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint181);

SoHAnimJoint* SoHAnimJoint182 = new SoHAnimJoint();
SoHAnimJoint182->setUSE(QString("hanim_l_wrist"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint182);

SoHAnimJoint* SoHAnimJoint183 = new SoHAnimJoint();
SoHAnimJoint183->setUSE(QString("hanim_r_wrist"));
SoHAnimHumanoid29->setJoints(*SoHAnimJoint183);

SoHAnimSegment* SoHAnimSegment184 = new SoHAnimSegment();
SoHAnimSegment184->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment184);

SoHAnimSegment* SoHAnimSegment185 = new SoHAnimSegment();
SoHAnimSegment185->setUSE(QString("hanim_l1"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment185);

SoHAnimSegment* SoHAnimSegment186 = new SoHAnimSegment();
SoHAnimSegment186->setUSE(QString("hanim_c4"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment186);

SoHAnimSegment* SoHAnimSegment187 = new SoHAnimSegment();
SoHAnimSegment187->setUSE(QString("hanim_skull"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment187);

SoHAnimSegment* SoHAnimSegment188 = new SoHAnimSegment();
SoHAnimSegment188->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment188);

SoHAnimSegment* SoHAnimSegment189 = new SoHAnimSegment();
SoHAnimSegment189->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment189);

SoHAnimSegment* SoHAnimSegment190 = new SoHAnimSegment();
SoHAnimSegment190->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment190);

SoHAnimSegment* SoHAnimSegment191 = new SoHAnimSegment();
SoHAnimSegment191->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment191);

SoHAnimSegment* SoHAnimSegment192 = new SoHAnimSegment();
SoHAnimSegment192->setUSE(QString("hanim_l_hand"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment192);

SoHAnimSegment* SoHAnimSegment193 = new SoHAnimSegment();
SoHAnimSegment193->setUSE(QString("hanim_r_hand"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment193);

SoHAnimSegment* SoHAnimSegment194 = new SoHAnimSegment();
SoHAnimSegment194->setUSE(QString("hanim_l_hindfoot"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment194);

SoHAnimSegment* SoHAnimSegment195 = new SoHAnimSegment();
SoHAnimSegment195->setUSE(QString("hanim_r_hindfoot"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment195);

SoHAnimSegment* SoHAnimSegment196 = new SoHAnimSegment();
SoHAnimSegment196->setUSE(QString("hanim_l_middistal"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment196);

SoHAnimSegment* SoHAnimSegment197 = new SoHAnimSegment();
SoHAnimSegment197->setUSE(QString("hanim_r_middistal"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment197);

SoHAnimSegment* SoHAnimSegment198 = new SoHAnimSegment();
SoHAnimSegment198->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment198);

SoHAnimSegment* SoHAnimSegment199 = new SoHAnimSegment();
SoHAnimSegment199->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment199);

SoHAnimSegment* SoHAnimSegment200 = new SoHAnimSegment();
SoHAnimSegment200->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment200);

SoHAnimSegment* SoHAnimSegment201 = new SoHAnimSegment();
SoHAnimSegment201->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid29->setSegments(*SoHAnimSegment201);

SoHAnimSite* SoHAnimSite202 = new SoHAnimSite();
SoHAnimSite202->setUSE(QString("hanim_skull_tip"));
SoHAnimHumanoid29->setSites(*SoHAnimSite202);

SoHAnimSite* SoHAnimSite203 = new SoHAnimSite();
SoHAnimSite203->setUSE(QString("hanim_sellion_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite203);

SoHAnimSite* SoHAnimSite204 = new SoHAnimSite();
SoHAnimSite204->setUSE(QString("hanim_supramenton_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite204);

SoHAnimSite* SoHAnimSite205 = new SoHAnimSite();
SoHAnimSite205->setUSE(QString("hanim_nuchale_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite205);

SoHAnimSite* SoHAnimSite206 = new SoHAnimSite();
SoHAnimSite206->setUSE(QString("hanim_l_calcaneous_post_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite206);

SoHAnimSite* SoHAnimSite207 = new SoHAnimSite();
SoHAnimSite207->setUSE(QString("hanim_r_calcaneous_post_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite207);

SoHAnimSite* SoHAnimSite208 = new SoHAnimSite();
SoHAnimSite208->setUSE(QString("hanim_l_dactylion_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite208);

SoHAnimSite* SoHAnimSite209 = new SoHAnimSite();
SoHAnimSite209->setUSE(QString("hanim_r_dactylion_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite209);

SoHAnimSite* SoHAnimSite210 = new SoHAnimSite();
SoHAnimSite210->setUSE(QString("hanim_l_digit2_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite210);

SoHAnimSite* SoHAnimSite211 = new SoHAnimSite();
SoHAnimSite211->setUSE(QString("hanim_r_digit2_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite211);

SoHAnimSite* SoHAnimSite212 = new SoHAnimSite();
SoHAnimSite212->setUSE(QString("hanim_l_femoral_lateral_epicn_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite212);

SoHAnimSite* SoHAnimSite213 = new SoHAnimSite();
SoHAnimSite213->setUSE(QString("hanim_r_femoral_lateral_epicn_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite213);

SoHAnimSite* SoHAnimSite214 = new SoHAnimSite();
SoHAnimSite214->setUSE(QString("hanim_l_femoral_medial_epicn_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite214);

SoHAnimSite* SoHAnimSite215 = new SoHAnimSite();
SoHAnimSite215->setUSE(QString("hanim_r_femoral_medial_epicn_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite215);

SoHAnimSite* SoHAnimSite216 = new SoHAnimSite();
SoHAnimSite216->setUSE(QString("hanim_r_gonion_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite216);

SoHAnimSite* SoHAnimSite217 = new SoHAnimSite();
SoHAnimSite217->setUSE(QString("hanim_l_gonion_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite217);

SoHAnimSite* SoHAnimSite218 = new SoHAnimSite();
SoHAnimSite218->setUSE(QString("hanim_l_hand_tip"));
SoHAnimHumanoid29->setSites(*SoHAnimSite218);

SoHAnimSite* SoHAnimSite219 = new SoHAnimSite();
SoHAnimSite219->setUSE(QString("hanim_r_hand_tip"));
SoHAnimHumanoid29->setSites(*SoHAnimSite219);

SoHAnimSite* SoHAnimSite220 = new SoHAnimSite();
SoHAnimSite220->setUSE(QString("hanim_l_humeral_lateral_epicn_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite220);

SoHAnimSite* SoHAnimSite221 = new SoHAnimSite();
SoHAnimSite221->setUSE(QString("hanim_r_humeral_lateral_epicn_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite221);

SoHAnimSite* SoHAnimSite222 = new SoHAnimSite();
SoHAnimSite222->setUSE(QString("hanim_l_humeral_medial_epicn_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite222);

SoHAnimSite* SoHAnimSite223 = new SoHAnimSite();
SoHAnimSite223->setUSE(QString("hanim_r_humeral_medial_epicn_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite223);

SoHAnimSite* SoHAnimSite224 = new SoHAnimSite();
SoHAnimSite224->setUSE(QString("hanim_r_infraorbitale_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite224);

SoHAnimSite* SoHAnimSite225 = new SoHAnimSite();
SoHAnimSite225->setUSE(QString("hanim_l_infraorbitale_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite225);

SoHAnimSite* SoHAnimSite226 = new SoHAnimSite();
SoHAnimSite226->setUSE(QString("hanim_l_knee_crease_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite226);

SoHAnimSite* SoHAnimSite227 = new SoHAnimSite();
SoHAnimSite227->setUSE(QString("hanim_r_knee_crease_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite227);

SoHAnimSite* SoHAnimSite228 = new SoHAnimSite();
SoHAnimSite228->setUSE(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite228);

SoHAnimSite* SoHAnimSite229 = new SoHAnimSite();
SoHAnimSite229->setUSE(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite229);

SoHAnimSite* SoHAnimSite230 = new SoHAnimSite();
SoHAnimSite230->setUSE(QString("hanim_l_medial_malleolus_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite230);

SoHAnimSite* SoHAnimSite231 = new SoHAnimSite();
SoHAnimSite231->setUSE(QString("hanim_r_medial_malleolus_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite231);

SoHAnimSite* SoHAnimSite232 = new SoHAnimSite();
SoHAnimSite232->setUSE(QString("hanim_l_metacarpal_pha2_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite232);

SoHAnimSite* SoHAnimSite233 = new SoHAnimSite();
SoHAnimSite233->setUSE(QString("hanim_r_metacarpal_pha2_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite233);

SoHAnimSite* SoHAnimSite234 = new SoHAnimSite();
SoHAnimSite234->setUSE(QString("hanim_l_metacarpal_pha5_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite234);

SoHAnimSite* SoHAnimSite235 = new SoHAnimSite();
SoHAnimSite235->setUSE(QString("hanim_r_metacarpal_pha5_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite235);

SoHAnimSite* SoHAnimSite236 = new SoHAnimSite();
SoHAnimSite236->setUSE(QString("hanim_l_metatarsal_pha1_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite236);

SoHAnimSite* SoHAnimSite237 = new SoHAnimSite();
SoHAnimSite237->setUSE(QString("hanim_r_metatarsal_pha1_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite237);

SoHAnimSite* SoHAnimSite238 = new SoHAnimSite();
SoHAnimSite238->setUSE(QString("hanim_l_metatarsal_pha5_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite238);

SoHAnimSite* SoHAnimSite239 = new SoHAnimSite();
SoHAnimSite239->setUSE(QString("hanim_r_metatarsal_pha5_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite239);

SoHAnimSite* SoHAnimSite240 = new SoHAnimSite();
SoHAnimSite240->setUSE(QString("hanim_l_middistal_tip"));
SoHAnimHumanoid29->setSites(*SoHAnimSite240);

SoHAnimSite* SoHAnimSite241 = new SoHAnimSite();
SoHAnimSite241->setUSE(QString("hanim_r_middistal_tip"));
SoHAnimHumanoid29->setSites(*SoHAnimSite241);

SoHAnimSite* SoHAnimSite242 = new SoHAnimSite();
SoHAnimSite242->setUSE(QString("hanim_l_olecranon_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite242);

SoHAnimSite* SoHAnimSite243 = new SoHAnimSite();
SoHAnimSite243->setUSE(QString("hanim_r_olecranon_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite243);

SoHAnimSite* SoHAnimSite244 = new SoHAnimSite();
SoHAnimSite244->setUSE(QString("hanim_l_radial_styloid_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite244);

SoHAnimSite* SoHAnimSite245 = new SoHAnimSite();
SoHAnimSite245->setUSE(QString("hanim_r_radial_styloid_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite245);

SoHAnimSite* SoHAnimSite246 = new SoHAnimSite();
SoHAnimSite246->setUSE(QString("hanim_l_radiale_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite246);

SoHAnimSite* SoHAnimSite247 = new SoHAnimSite();
SoHAnimSite247->setUSE(QString("hanim_r_radiale_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite247);

SoHAnimSite* SoHAnimSite248 = new SoHAnimSite();
SoHAnimSite248->setUSE(QString("hanim_l_sphyrion_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite248);

SoHAnimSite* SoHAnimSite249 = new SoHAnimSite();
SoHAnimSite249->setUSE(QString("hanim_r_sphyrion_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite249);

SoHAnimSite* SoHAnimSite250 = new SoHAnimSite();
SoHAnimSite250->setUSE(QString("hanim_r_tragion_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite250);

SoHAnimSite* SoHAnimSite251 = new SoHAnimSite();
SoHAnimSite251->setUSE(QString("hanim_l_tragion_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite251);

SoHAnimSite* SoHAnimSite252 = new SoHAnimSite();
SoHAnimSite252->setUSE(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite252);

SoHAnimSite* SoHAnimSite253 = new SoHAnimSite();
SoHAnimSite253->setUSE(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimHumanoid29->setSites(*SoHAnimSite253);

SoHAnimSite* SoHAnimSite254 = new SoHAnimSite();
SoHAnimSite254->setDEF(QString("hanim_DiamondManLOA_1_view"));
SoHAnimSite254->X3DNode::setName(QString("DiamondManLOA_1_view"));
SoViewpoint* SoViewpoint255 = new SoViewpoint();
SoViewpoint255->setDEF(QString("InclinedView"));
SoViewpoint255->setDescription(QString("Inclined View"));
SoViewpoint255->setPosition(new float[]{1.62,1.05,2.06});
SoViewpoint255->setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
SoHAnimSite254->addChild(*SoViewpoint255);

SoViewpoint* SoViewpoint256 = new SoViewpoint();
SoViewpoint256->setDEF(QString("FrontView"));
SoViewpoint256->setDescription(QString("Front View"));
SoViewpoint256->setPosition(new float[]{0.0,0.854,2.57665});
SoHAnimSite254->addChild(*SoViewpoint256);

SoViewpoint* SoViewpoint257 = new SoViewpoint();
SoViewpoint257->setDEF(QString("SideView"));
SoViewpoint257->setDescription(QString("Side View"));
SoViewpoint257->setPosition(new float[]{2.5929,0.854,0.0});
SoViewpoint257->setOrientation(new float[]{0.0,1.0,0.0,1.57079});
SoHAnimSite254->addChild(*SoViewpoint257);

SoViewpoint* SoViewpoint258 = new SoViewpoint();
SoViewpoint258->setDEF(QString("TopView"));
SoViewpoint258->setDescription(QString("Top View"));
SoViewpoint258->setPosition(new float[]{0.0,3.4495,0.0});
SoViewpoint258->setOrientation(new float[]{1.0,0.0,0.0,-1.57079});
SoHAnimSite254->addChild(*SoViewpoint258);

SoHAnimHumanoid29->setViewpoints(*SoHAnimSite254);

SoNode25->addChild(*SoHAnimHumanoid29);

SoSceneManager0->setSceneGraph(*SoNode25);

return 0;
}
